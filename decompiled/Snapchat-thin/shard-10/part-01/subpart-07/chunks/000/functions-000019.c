/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10798cf30; end: 10798cf77; -[SCDiscoverFeedActionSheetActionHandler didCompleteDSAExplainerScope:] */

void FUN_10798cf30(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 400);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 400));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10798d57c; end: 10798d77b; -[SCDiscoverFeedActionSheetActionHandler _didBlockUserWithStoryDedupeFp:] */

void FUN_10798d57c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010bec51c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010be8d840(param_1,param_2,puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x178);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c0e00;
    func_0x00010c0d7580(PTR_PTR_1126c0e00);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010bf1f320(uVar2,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(uVar2);
    if ((int)uVar7 == 0) {
      puVar6 = (undefined *)0x0;
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = param_1;
      func_0x00010bdf5f80(param_1,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar1;
      func_0x00010c23c720();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    _objc_opt_class(param_1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010c08fa60();
    if (puVar3 == (undefined *)0x0) {
      func_0x00010bf7dbc0(uVar7,param_2,&PTR____CFConstantStringClassReference_110ea8b58,param_1,0);
    }
    else {
      ppuStack_78 = &PTR____CFConstantStringClassReference_110ea8bb8;
      ppuStack_70 = &PTR____CFConstantStringClassReference_110ea8bd8;
      puVar3 = puVar6;
      puStack_68 = puVar5;
      if (puVar6 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_60 = puVar3;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_68,&ppuStack_78,
                          2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7dbc0(uVar7,param_2,&PTR____CFConstantStringClassReference_110ea8b58,param_1,
                          puVar4);
      _objc_release(puVar4);
      if (puVar6 == (undefined *)0x0) {
        _objc_release(puVar3);
      }
    }
    _objc_release(param_1);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(puVar1 + 0x1c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10798dab4; end: 10798dd2b;  */

void FUN_10798dab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 in_stack_00000008;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(in_stack_00000008);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  puStack_90 = &UNK_10798dd2c;
  puStack_88 = &UNK_10798dd3c;
  uStack_80 = 0;
  _objc_retain(param_7);
  _objc_retain(in_stack_00000008);
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(in_stack_00000008);
  _objc_retain(param_4);
  func_0x00010c0bd820(param_1);
  uVar1 = puStack_a0[5];
  _objc_retain(uVar1);
  _objc_release(param_4);
  _objc_release(in_stack_00000008);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_4);
  _objc_release(in_stack_00000008);
  _objc_release(param_7);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(in_stack_00000008);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10798e654; end: 10798e6ff;  */

void FUN_10798e654(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bfecde0();
    if (lVar2 != 0x7fffffffffffffff) {
      puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      uVar4 = *(undefined8 *)(lVar2 + 0x28);
      *(undefined **)(lVar2 + 0x28) = puVar3;
      _objc_release(uVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10798eca4; end: 10798ed1b;  */

void FUN_10798eca4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bf82560(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82a80();
  _objc_release(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10798f358; end: 10798f547; -[SCDiscoverFeedCustomStoryActionHandler didSelectAddToStoryWithPublicationId:storyType:] */

void FUN_10798f358(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
  func_0x00010c071800();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126b1010;
    _objc_alloc();
    func_0x00010c02ec80();
    func_0x00010c1eb300();
    func_0x00010c1eb2e0(puVar2);
    func_0x00010c1eb2c0(puVar2);
    func_0x00010c1d86a0(puVar2);
    puVar3 = PTR_PTR_1126b19f8;
    func_0x00010c258040(PTR_PTR_1126b19f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182d40(puVar2);
    _objc_release(puVar3);
    func_0x00010c1b2940(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((param_4 < 0xb) && ((1L << (param_4 & 0x3f) & 0x4e4U) != 0)) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e2b818;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2b818,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1eb080(puVar2);
      _objc_release(puVar3);
      _objc_release(ppuVar4);
    }
    _objc_initWeak(auStack_48,param_1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    puStack_68 = &UNK_10798f548;
    puStack_60 = &UNK_110841fb0;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(puVar2);
    puStack_58 = puVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_78);
    _objc_release(puStack_58);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10798f904; end: 10798f90b; -[SCDiscoverFeedExpandStoriesActionHandler addListener:] */

void FUN_10798f904(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10798fd6c; end: 10798fd9b; -[SCDiscoverFeedFriendStoryOptInStatusHandler setCallbackForStoryUpdate:] */

void FUN_10798fd6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10799061c; end: 107990767; -[SCDiscoverFeedOpenFriendProfileActionHandler _presentProfileForUserId:dataModel:] */

void FUN_10799061c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c2448c0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107990eac; end: 107991023; -[SCDiscoverFeedOpenFriendProfileActionHandler friendActionSheetDidDismiss:withRequestedChat:deepLinkURL:] */

void FUN_107990eac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x28);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126b3530;
  _objc_alloc(PTR_PTR_1126b3530);
  lVar6 = param_1 + 0x60;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c038f40(puVar1,param_2,lVar6,1);
  _objc_release(lVar6);
  puVar2 = PTR_PTR_1126b1068;
  _objc_alloc(PTR_PTR_1126b1068);
  func_0x00010c057c40();
  _objc_release(param_5);
  func_0x00010c13a640(PTR_PTR_1126b41f8,param_2,puVar2);
  puVar3 = PTR_PTR_1126b3520;
  _objc_alloc(PTR_PTR_1126b3520);
  func_0x00010bffdd20();
  puVar4 = PTR_PTR_1126cc148;
  _objc_alloc(PTR_PTR_1126cc148);
  func_0x00010bffdb00();
  _objc_release(param_4);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c080();
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107991244; end: 1079912e7; -[SCDiscoverFeedPostStoryActionHandler initWithPostStoryScopeExposer:postStoryScopeServices:] */

undefined1 *
FUN_107991244(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9008;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107991730; end: 10799176f; -[SCDiscoverFeedPostStoryActionHandler .cxx_destruct] */

void FUN_107991730(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079925a0; end: 1079925a3; -[SCDiscoverFeedSectionHeaderActionHandler updateDismissBaseView:] */

void FUN_1079925a0(void)

{
  return;
}



/* Entry: 107992620; end: 1079926a7; -[SCDiscoverFeedSectionHeaderActionHandler didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_107992620(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107992c34; end: 107992dcf; -[SCDiscoverFeedSectionHeaderActionHandler _hideSection:] */

void FUN_107992c34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010be54960(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa4340(param_3);
  func_0x00010c12e740(uVar1);
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  puStack_68 = &UNK_107992dd0;
  puStack_60 = &UNK_110859c28;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  ppuVar2 = &puStack_78;
  uStack_58 = param_3;
  _objc_retainBlock(ppuVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa48e0(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(ppuVar2);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}


