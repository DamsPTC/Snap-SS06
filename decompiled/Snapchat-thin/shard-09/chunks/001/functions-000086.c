/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106998bfc; end: 106998c63;  */

void FUN_106998bfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be84320();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106998c64; end: 106998d1f; -[SCComposerPeopleRecentFriendStore _publishRecentlyHiddenSuggestionsWithSnapchatters:error:] */

void FUN_106998c64(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_4 == 0) {
    func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_11094f8f0);
    puVar1 = param_3;
    func_0x000100504554();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    param_3 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106998d20; end: 106998dc3;  */

bool FUN_106998d20(undefined8 param_1,long param_2)

{
  func_0x00010bfb8280(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 == 0;
}



/* Entry: 106998dc4; end: 106998def; -[SCComposerPeopleRecentFriendStore didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_106998dc4(undefined8 param_1)

{
  func_0x00010be13720();
  func_0x00010be13760(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be13750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchRecentlyHiddenSuggestionsA_112562770);
  return;
}



/* Entry: 106998df0; end: 106998df3; -[SCComposerPeopleRecentFriendStore didStartSnapchattersUpdateDataRequest:] */

void FUN_106998df0(void)

{
  return;
}



/* Entry: 106998df4; end: 106998f1f; -[SCComposerPeopleRecentFriendStore didEndSnapchattersSuggestDataRequest:withSuccess:error:] */

void FUN_106998df4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5)

{
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 != 0) {
    _objc_initWeak(auStack_48,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106998f20;
    puStack_58 = &UNK_110927b10;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_copyWeak(auStack_78,auStack_48);
    func_0x00010c0bdc80(param_3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106998f20; end: 106998f77;  */

void FUN_106998f20(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be13740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106998f78; end: 106998f7f; -[SCComposerPeopleRecentFriendStore recentlyAddedFriendsObservable] */

undefined8 FUN_106998f78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106998f80; end: 106998faf; -[SCComposerPeopleRecentFriendStore setRecentlyAddedFriendsObservable:] */

void FUN_106998f80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106998fb0; end: 106998fb7; -[SCComposerPeopleRecentFriendStore recentlyHiddenFriendsObservable] */

undefined8 FUN_106998fb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106998fb8; end: 106998fe7; -[SCComposerPeopleRecentFriendStore setRecentlyHiddenFriendsObservable:] */

void FUN_106998fb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106998fe8; end: 106998fef; -[SCComposerPeopleRecentFriendStore recentlyIgnoredFriendsObservable] */

undefined8 FUN_106998fe8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106998ff0; end: 10699901f; -[SCComposerPeopleRecentFriendStore setRecentlyIgnoredFriendsObservable:] */

void FUN_106998ff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106999020; end: 1069990c7; -[SCComposerPeopleRecentFriendStore .cxx_destruct] */

void FUN_106999020(long param_1)

{
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



/* Entry: 1069990c8; end: 1069991eb; -[SCComposerPeopleRecentlyActiveFriendStore initWithIncomingFriendsWithActiveStatusObservable:suggestedFriendsWithActiveStatusObservable:recentlyActiveText:performerProvider:featureSettingsService:] */

undefined1 *
FUN_1069990c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f3fd8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bdf1280();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    func_0x00010bea97c0(puVar1);
    func_0x00010be66380(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069991ec; end: 1069992df; -[SCComposerPeopleRecentlyActiveFriendStore _setUpObservablesForComposer] */

/* WARNING: Possible PIC construction at 0x0001069992b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001069992bc) */

void FUN_1069991ec(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,PTR____NSArray0__struct_11034ab48
            );
  return;
}



/* Entry: 1069992e0; end: 10699933b; -[SCComposerPeopleRecentlyActiveFriendStore _createPerformerFromPerformerProvider:] */

void FUN_1069992e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10699933c; end: 10699950f; -[SCComposerPeopleRecentlyActiveFriendStore _observeIncomingFriendsWithActiveStatus:suggestedFriendsWithActiveStatus:] */

void FUN_10699933c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar3);
  _objc_initWeak(auStack_68,param_1);
  uVar3 = param_3;
  func_0x00010c0e0ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106999510;
  puStack_78 = &UNK_110842c58;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c0e0ea0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106999510; end: 10699959f;  */

void FUN_106999510(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff860();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069995a0; end: 10699968f; -[SCComposerPeopleRecentlyActiveFriendStore _didReceiveRecentlyActiveRecordsOfIncomingFriends:] */

void FUN_1069995a0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11094f970);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106999690; end: 1069997cf; -[SCComposerPeopleRecentlyActiveFriendStore _didReceiveRecentlyActiveRecordsOfSuggestedFriends:] */

void FUN_106999690(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c1228e0();
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11094f990);
    lVar3 = param_3;
    func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_11094f9d0);
    lVar4 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((lVar4 == 0) || (9 < lVar1)) {
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30));
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30));
      _objc_release(puVar6);
    }
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069997d0; end: 106999857;  */

void FUN_1069997d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cf6b0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07be00(param_2);
  _objc_release(param_2);
  func_0x00010c05b500(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106999858; end: 10699985f;  */

void FUN_106999858(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07be10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isRecentlyActive_1125fc990);
  return;
}



/* Entry: 106999860; end: 106999867; -[SCComposerPeopleRecentlyActiveFriendStore incomingFriendsWithActiveStatusObservable] */

undefined8 FUN_106999860(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106999868; end: 106999897; -[SCComposerPeopleRecentlyActiveFriendStore setIncomingFriendsWithActiveStatusObservable:] */

void FUN_106999868(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106999898; end: 10699989f; -[SCComposerPeopleRecentlyActiveFriendStore suggestedFriendsWithActiveStatusObservable] */

undefined8 FUN_106999898(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1069998a0; end: 1069998cf; -[SCComposerPeopleRecentlyActiveFriendStore setSuggestedFriendsWithActiveStatusObservable:] */

void FUN_1069998a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069998d0; end: 1069998d7; -[SCComposerPeopleRecentlyActiveFriendStore recentlyActiveTextObservable] */

undefined8 FUN_1069998d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1069998d8; end: 106999907; -[SCComposerPeopleRecentlyActiveFriendStore setRecentlyActiveTextObservable:] */

void FUN_1069998d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106999908; end: 106999a97; -[SCComposerPeopleRecentlyActiveFriendStore .cxx_destruct] */

void FUN_106999908(long param_1)

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



/* Entry: 106999a98; end: 106999b6b;  */

void FUN_106999a98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106999b6c; end: 106999bb3;  */

void FUN_106999b6c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5b9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106999bb4; end: 106999c83;  */

void FUN_106999bb4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106999c84; end: 106999ccb;  */

void FUN_106999c84(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5b440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106999ccc; end: 106999d9b;  */

void FUN_106999ccc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106999d9c; end: 106999de3;  */

void FUN_106999d9c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5bc00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106999de4; end: 106999eb3;  */

void FUN_106999de4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106999eb4; end: 106999efb;  */

void FUN_106999eb4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5c460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106999efc; end: 106999f17;  */

void FUN_106999efc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f9930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_performerWithLabel_qualityOfServ_11261c068,
             &PTR____CFConstantStringClassReference_110e66a18,3,0,0x17);
  return;
}



/* Entry: 106999f18; end: 10699a0f3; -[SCComposerPeopleBridgeFriendServiceProvider _makeFriendStoreWithConfig:emissionPerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106999f18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  puVar1 = PTR_PTR_1126cf6c0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar13 = (long)_DAT_1127549cc;
  lVar2 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar8 = lVar13;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_1127549d0;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010c0fdba0(param_3);
  _objc_release(param_3);
  param_1 = param_1 + _DAT_1127549d4;
  _objc_loadWeakRetained();
  lVar12 = param_1;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0499a0(puVar1,param_2,lVar3,lVar5,lVar7,lVar8,lVar10,uVar11,lVar12,param_4);
  _objc_release(param_4);
  _objc_release(lVar12);
  _objc_release(param_1);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar13);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10699a0f4; end: 10699a1df; -[SCComposerPeopleBridgeFriendServiceProvider _makeActionFriendStoreWithConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10699a0f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126cf6c8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + _DAT_1127549cc;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127549d0;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0fdba0(param_3);
  _objc_release(param_3);
  func_0x00010c049c80(puVar1,param_2,lVar3,lVar4,uVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10699a1e0; end: 10699a483; -[SCComposerPeopleBridgeFriendServiceProvider _makeIncomingFriendStoreWithConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10699a1e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c231080();
  if ((int)uVar1 == 0) {
    uStack_68 = 0;
  }
  else {
    lVar2 = param_1 + _DAT_1127549d8;
    _objc_loadWeakRetained();
    uStack_68 = lVar2;
    func_0x00010bef1100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  puVar3 = PTR_PTR_1126b15d8;
  _objc_alloc();
  lVar19 = (long)_DAT_1127549cc;
  lVar2 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar4 = lVar2;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_1127549c8;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_1127549d0;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c232300();
  _objc_release(param_3);
  lVar13 = param_1 + _DAT_1127549dc;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c29ec60();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar17 = lVar19;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127549e0;
  _objc_loadWeakRetained();
  lVar18 = param_1;
  func_0x00010c129460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049b60(puVar3,param_2,lVar4,lVar6,lVar8,uStack_68,lVar10,lVar12,(char)uVar1);
  _objc_release(lVar18);
  _objc_release(param_1);
  _objc_release(lVar17);
  _objc_release(lVar19);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10699a484; end: 10699a607; -[SCComposerPeopleBridgeFriendServiceProvider _makeRecentFriendStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10699a484(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126cf6d0;
  _objc_alloc();
  lVar11 = (long)_DAT_1127549cc;
  lVar2 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar11);
  lVar6 = lVar11;
  func_0x00010bfe1440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_1127549c8;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_1127549e4;
  _objc_loadWeakRetained(lVar9);
  param_1 = param_1 + _DAT_1127549d0;
  _objc_loadWeakRetained(param_1);
  lVar10 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049aa0(puVar1,param_2,lVar3,lVar5,lVar6,lVar8,lVar9,lVar10);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar11);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10699a608; end: 10699aa1f; -[SCComposerPeopleBridgeFriendServiceProvider _makeSuggestedFriendStoreWithConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10699a608(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_a0;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  lVar1 = param_1 + _DAT_1127549e8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c11e2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  FUN_10699aa20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar3 = param_1;
    FUN_10699aa20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfb9460();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b1698;
    func_0x00010c0e1420(PTR_PTR_1126b1698);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010bf1f320(lVar5,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    if ((int)lVar7 != 0) {
      lVar1 = param_1 + _DAT_1127549cc;
      _objc_loadWeakRetained();
      lVar3 = lVar1;
      func_0x00010c2445a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uStack_78 = lVar4;
      func_0x00010c0fc4e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar1);
      goto LAB_10699a768;
    }
  }
  uStack_78 = 0;
LAB_10699a768:
  puVar6 = PTR_PTR_1126cf6d8;
  _objc_alloc();
  uVar8 = param_3;
  func_0x00010c0f1e60();
  lVar21 = (long)_DAT_1127549cc;
  lVar1 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar7 = lVar1;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar9 = lVar3;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar10 = lVar4;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar11 = lVar5;
  func_0x00010bfe1440();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010bf90700();
  uVar13 = param_3;
  func_0x00010c231080();
  if ((int)uVar13 == 0) {
    uStack_a0 = 0;
  }
  else {
    uStack_e8 = param_1 + _DAT_1127549d8;
    _objc_loadWeakRetained();
    uStack_a0 = uStack_e8;
    func_0x00010bef1100();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar14 = param_3;
  func_0x00010c230200();
  if ((int)uVar14 == 0) {
    lVar22 = 0;
  }
  else {
    uStack_f0 = param_1 + _DAT_1127549ec;
    _objc_loadWeakRetained();
    lVar22 = uStack_f0;
    func_0x00010c15a160();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar15 = param_1 + _DAT_1127549d0;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_1127549e0;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bf15400();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_1127549dc;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar21 = param_1;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049fe0(puVar6,param_2,uVar8 & 0xffffffff,lVar7,lVar9,lVar10,lVar11,
                      uVar12 & 0xffffffff,uStack_a0,lVar2,lVar22,lVar16,lVar18,uStack_78,lVar20,
                      lVar21);
  _objc_release(lVar21);
  _objc_release(param_1);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  if ((int)uVar14 != 0) {
    _objc_release(lVar22);
    _objc_release(uStack_f0);
  }
  if ((int)uVar13 != 0) {
    _objc_release(uStack_a0);
    _objc_release(uStack_e8);
  }
  _objc_release(lVar11);
  _objc_release(lVar5);
  _objc_release(lVar10);
  _objc_release(lVar4);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar1);
  _objc_release(uStack_78);
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10699aa20; end: 10699aa43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10699aa20(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127549fc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10699aa44; end: 10699abdb; -[SCComposerPeopleBridgeFriendServiceProvider _makeBlockedUserStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10699aa44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar1 = PTR_PTR_1126cf6e0;
  _objc_alloc();
  lVar12 = (long)_DAT_1127549cc;
  lVar2 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf1d740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar12);
  lVar10 = lVar12;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127549c8;
  _objc_loadWeakRetained(param_1);
  lVar11 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8e00(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar10,lVar11);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(lVar10);
  _objc_release(lVar12);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10699abdc; end: 10699add3; -[SCComposerPeopleBridgeFriendServiceProvider _makeRecentlyActiveFriendStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10699abdc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  puVar1 = PTR_PTR_1126cf6e8;
  _objc_alloc();
  lVar16 = (long)_DAT_1127549f0;
  lVar2 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c122860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfebfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c122860();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c261f40();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + lVar16;
  _objc_loadWeakRetained(lVar16);
  lVar10 = lVar16;
  func_0x00010c122860();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c1228c0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_1127549c8;
  _objc_loadWeakRetained(lVar13);
  lVar14 = lVar13;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127549f4;
  _objc_loadWeakRetained(param_1);
  lVar15 = param_1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01d700(puVar1,param_2,lVar5,lVar9,lVar12,lVar14,lVar15);
  _objc_release(lVar15);
  _objc_release(param_1);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar16);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10699add4; end: 10699ae4f; -[SCComposerPeopleBridgeFriendServiceProvider _makeFriendscoreProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10699add4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126cf6f0;
  _objc_alloc(PTR_PTR_1126cf6f0);
  param_1 = param_1 + _DAT_1127549cc;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c244be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049f00(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10699ae50; end: 10699af17; -[SCComposerPeopleBridgeFriendServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10699ae50(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127549d4);
  _objc_destroyWeak(param_1 + _DAT_1127549fc);
  _objc_destroyWeak(param_1 + _DAT_1127549e0);
  _objc_destroyWeak(param_1 + _DAT_1127549f0);
  _objc_destroyWeak(param_1 + _DAT_1127549e8);
  _objc_destroyWeak(param_1 + _DAT_1127549e4);
  _objc_destroyWeak(param_1 + _DAT_1127549f4);
  _objc_destroyWeak(param_1 + _DAT_1127549dc);
  _objc_destroyWeak(param_1 + _DAT_1127549ec);
  _objc_destroyWeak(param_1 + _DAT_1127549d0);
  _objc_destroyWeak(param_1 + _DAT_1127549d8);
  _objc_destroyWeak(param_1 + _DAT_1127549c8);
  _objc_destroyWeak(param_1 + _DAT_1127549cc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127549f8);
  return;
}



/* Entry: 10699af18; end: 10699affb; -[SCComposerPeopleBridgeGroupServiceProvider provide] */

void FUN_10699af18(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cf6f8;
  _objc_alloc(PTR_PTR_1126cf6f8);
  func_0x00010c019260();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10699affc; end: 10699b03b;  */

void FUN_10699affc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5bac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10699b03c; end: 10699b17f; -[SCComposerPeopleBridgeGroupServiceProvider _makeGroupStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10699b03c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126cf700;
  _objc_alloc(PTR_PTR_1126cf700);
  lVar2 = param_1 + _DAT_112754a00;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112754a04;
  lVar5 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bfcf900();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar9;
  _objc_loadWeakRetained(param_1);
  lVar9 = param_1;
  func_0x00010c274420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007480(puVar1,param_2,lVar4,lVar6,lVar8,lVar9);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10699b180; end: 10699b1c3; -[SCComposerPeopleBridgeGroupServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10699b180(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112754a04);
  _objc_destroyWeak(param_1 + _DAT_112754a00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112754a08);
  return;
}



/* Entry: 10699b1c4; end: 10699b4a3; -[SCComposerPeopleSuggestedFriendStore initWithSnapchattersSuggestionPageType:snapchattersDataFetcher:snapchattersDataTracker:snapchattersDataMutator:hiddenSuggestionCoordinator:enableHideFeedback:activeStoryFetcher:quickAddRefresher:selectedSuggestionsRepository:circumstanceEngine:friendingBagdeRepository:pinnedSuggestedSnapchattersObservable:userPreferences:snapchattersObservableRepository:] */

undefined8 *
FUN_10699b1c4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_1126f3fe0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = param_3;
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
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 5) = param_8;
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_16;
    _objc_release(uVar2);
    func_0x00010be3bcc0(puVar1);
    func_0x00010be3b960(puVar1);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10699b4a4; end: 10699b4af; -[SCComposerPeopleSuggestedFriendStore pushToValdiMarshaller:] */

void FUN_10699b4a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b8987c0(param_3,param_1);
  func_0x00010b8987b8();
  func_0x00010b8987b0();
  func_0x00010b89873c();
  func_0x00010b898758();
  return;
}



/* Entry: 10699b4b0; end: 10699b4ef; -[SCComposerPeopleSuggestedFriendStore _initializeSuggestionsObservable] */

void FUN_10699b4b0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bdf0b20();
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be65f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__observeDataUpdatesFromNative_112577180);
  return;
}



/* Entry: 10699b4f0; end: 10699b553; -[SCComposerPeopleSuggestedFriendStore _createObservablesToBeUsedByComposer] */

void FUN_10699b4f0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010b09c8d0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010be76110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__populateSuggestionsObservableFi_11257b1e0,1,0);
  return;
}



/* Entry: 10699b554; end: 10699b597; -[SCComposerPeopleSuggestedFriendStore _observeDataUpdatesFromNative] */

void FUN_10699b554(undefined8 param_1)

{
  func_0x00010be4c6e0();
  func_0x00010be659e0(param_1);
  func_0x00010be662e0(param_1);
  func_0x00010be66c80(param_1);
  func_0x00010be66840(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be0fe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchBadgedSuggestions_112561928);
  return;
}



/* Entry: 10699b598; end: 10699b747; -[SCComposerPeopleSuggestedFriendStore _initializeQuickAddSnapchattersObservable] */

void FUN_10699b598(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined **)(param_1 + 0xa0) = puVar1;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010b09c8d0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = uVar4;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c262260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0dad60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = uVar4;
  func_0x00010bf41860(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar5);
  _objc_release(uVar4);
  return;
}



/* Entry: 10699b748; end: 10699ba1f;  */

ulong FUN_10699b748(undefined8 param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_11094fca0);
  uVar1 = param_2;
  func_0x00010c0d3c80();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (uVar3 != 0) {
    uVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(param_2);
      }
      lVar11 = *(long *)(uVar13 * 8);
      lVar4 = lVar11;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar4;
      func_0x00010c08fa60();
      _objc_release(lVar4);
      if (lVar10 != 0) {
        func_0x00010c2923e0(lVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(lVar11);
      }
      uVar13 = uVar13 + 1;
    } while (uVar3 != uVar13);
    uVar3 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  do {
    if (lVar5 == 0) {
      _objc_release(param_3);
      ppuVar8 = &PTR___NSConcreteGlobalBlock_11094fcc0;
      uVar3 = uVar1;
      func_0x000100504554(uVar1,&PTR___NSConcreteGlobalBlock_11094fcc0);
      _objc_release(puVar2);
      _objc_release(uVar1);
      _objc_release(param_3);
      _objc_release(param_2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
        return uVar3;
      }
      ___stack_chk_fail();
      func_0x00010901c73c(ppuVar8);
      return (ulong)((uint)ppuVar8 ^ 1);
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(param_3);
      }
      lVar12 = *(long *)(lVar10 * 8);
      lVar11 = lVar12;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar11;
      func_0x00010c08fa60();
      if (lVar6 == 0) {
LAB_10699b970:
        _objc_release(lVar11);
      }
      else {
        lVar6 = lVar12;
        func_0x00010c2923e0(lVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar2;
        func_0x00010bf4b900();
        _objc_release(lVar6);
        _objc_release(lVar11);
        if (((ulong)puVar7 & 1) == 0) {
          func_0x00010befa120(uVar1);
          func_0x00010c2923e0(lVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          lVar11 = lVar12;
          goto LAB_10699b970;
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar5 != lVar10);
    lVar5 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10699ba20; end: 10699ba3b;  */

uint FUN_10699ba20(undefined8 param_1,undefined8 param_2)

{
  func_0x00010901c73c(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 10699ba3c; end: 10699bad7;  */

void FUN_10699ba3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cf648;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c040f80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10699bad8; end: 10699bb1b; -[SCComposerPeopleSuggestedFriendStore _publishQuickAddSnapchatters:] */

void FUN_10699bad8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10699bb1c; end: 10699bbe7; -[SCComposerPeopleSuggestedFriendStore _observePinnedSuggestions] */

void FUN_10699bb1c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10699bbe8; end: 10699bcab;  */

void FUN_10699bbe8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (lVar1 != 0) {
    uVar2 = param_2;
    func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_11094fce0);
    func_0x00010c225c20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dbca0(lVar1);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be76100();
  _objc_release(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10699bcac; end: 10699bcb3;  */

void FUN_10699bcac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 10699bcb4; end: 10699bcef; -[SCComposerPeopleSuggestedFriendStore _listenSuggestionFetchEvent] */

void FUN_10699bcb4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10699bcf0; end: 10699bdff; -[SCComposerPeopleSuggestedFriendStore _observeActiveStoryChanges] */

void FUN_10699bcf0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef1140();
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



/* Entry: 10699be00; end: 10699be47;  */

void FUN_10699be00(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff720();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10699be48; end: 10699beab; -[SCComposerPeopleSuggestedFriendStore _didReceiveNewActiveStoryInfos:] */

void FUN_10699be48(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c071d00(param_3,param_2,*(undefined8 *)(param_1 + 0x40));
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(ulong *)(param_1 + 0x40) = uVar1;
    _objc_release(uVar2);
    func_0x00010be76100(param_1,param_2,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10699beac; end: 10699bfb7; -[SCComposerPeopleSuggestedFriendStore _observeSelectedSuggestions] */

void FUN_10699beac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15a140();
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



/* Entry: 10699bfb8; end: 10699bfff;  */

void FUN_10699bfb8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdffa00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10699c000; end: 10699c047; -[SCComposerPeopleSuggestedFriendStore _didReceiveSelectedSuggestedSnapchatters:] */

void FUN_10699c000(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11094fd00);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be76110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__populateSuggestionsObservableFi_11257b1e0,0,0);
  return;
}



/* Entry: 10699c048; end: 10699c04f;  */

void FUN_10699c048(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 10699c050; end: 10699c15b; -[SCComposerPeopleSuggestedFriendStore _observeHiddenSuggestionObservable] */

void FUN_10699c050(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf27120();
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



/* Entry: 10699c15c; end: 10699c18f;  */

void FUN_10699c15c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be76100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10699c190; end: 10699c257; -[SCComposerPeopleSuggestedFriendStore _fetchBadgedSuggestions] */

void FUN_10699c190(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bfa52c0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10699c258; end: 10699c29f;  */

void FUN_10699c258(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff1e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10699c2a0; end: 10699c34f; -[SCComposerPeopleSuggestedFriendStore _didReceiveBadgedSuggestions:] */

void FUN_10699c2a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_11094fd20);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be76110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__populateSuggestionsObservableFi_11257b1e0,0,0);
  return;
}



/* Entry: 10699c350; end: 10699c367; -[SCComposerPeopleSuggestedFriendStore _populateSuggestionsObservableFirstTime:isFromUserTriggeredRefresh:] */

void FUN_10699c350(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  if (((param_3 & 1) == 0) && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be233b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__getSuggestedFriends__112566688,param_4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be20130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__getLegacySuggestedFriendsFirstT_1125659e8);
  return;
}



/* Entry: 10699c368; end: 10699c36b; -[SCComposerPeopleSuggestedFriendStore getSuggestedFriendsWithCompletion:] */

void FUN_10699c368(void)

{
  return;
}



/* Entry: 10699c36c; end: 10699c477; -[SCComposerPeopleSuggestedFriendStore _getLegacySuggestedFriendsFirstTime:] */

void FUN_10699c36c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_3;
  func_0x00010c0dade0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10699c478; end: 10699c4e3;  */

void FUN_10699c478(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b2a0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10699c4e4; end: 10699c863; -[SCComposerPeopleSuggestedFriendStore _getSuggestedFriends:] */

void FUN_10699c4e4(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined1 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = param_1;
  _dispatch_group_create();
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_10699c864;
  uStack_70 = 0x10699c874;
  uStack_68 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_10699c864;
  uStack_a0 = 0x10699c874;
  uStack_98 = 0;
  puStack_e8 = &uStack_f0;
  uStack_f0 = 0;
  uStack_e0 = 0x3032000000;
  pcStack_d8 = FUN_10699c864;
  uStack_d0 = 0x10699c874;
  uStack_c8 = 0;
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x3032000000;
  pcStack_108 = FUN_10699c864;
  uStack_100 = 0x10699c874;
  uStack_f8 = 0;
  _objc_initWeak(auStack_128,param_1);
  _dispatch_group_enter(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_10699c87c;
  puStack_148 = &UNK_110857be8;
  puStack_138 = &uStack_90;
  puStack_130 = &uStack_c0;
  lStack_140 = lVar2;
  func_0x00010c0dade0(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _dispatch_group_enter(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_198 = puVar1;
  uStack_190 = 0xc2000000;
  uStack_188 = 0x10699c904;
  puStack_180 = &UNK_11094fd40;
  puStack_170 = &uStack_90;
  puStack_168 = &uStack_f0;
  lStack_178 = lVar2;
  func_0x00010bfa56c0(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _dispatch_group_enter(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_1d0 = puVar1;
  uStack_1c8 = 0xc2000000;
  uStack_1c0 = 0x10699c98c;
  puStack_1b8 = &UNK_11094fd70;
  puStack_1a8 = &uStack_90;
  puStack_1a0 = &uStack_120;
  lStack_1b0 = lVar2;
  func_0x00010bfa7d00(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_220 = puVar1;
  uStack_218 = 0xc2000000;
  pcStack_210 = FUN_10699ca14;
  puStack_208 = &UNK_11094fda0;
  _objc_copyWeak(auStack_1e0,auStack_128);
  puStack_200 = &uStack_c0;
  puStack_1f8 = &uStack_90;
  puStack_1f0 = &uStack_f0;
  puStack_1e8 = &uStack_120;
  uStack_1d8 = param_3;
  func_0x000100bc0718(lVar2,uVar3,&puStack_220);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_1e0);
  _objc_destroyWeak(auStack_128);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(uStack_f8);
  __Block_object_dispose(&uStack_f0,8);
  _objc_release(uStack_c8);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(lVar2);
  return;
}



/* Entry: 10699c864; end: 10699c87b;  */

void FUN_10699c864(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10699c87c; end: 10699ca13;  */

void FUN_10699c87c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar3 = 0x30;
  lVar1 = param_2;
  if (param_3 != 0) {
    lVar3 = 0x28;
    lVar1 = param_3;
  }
  lVar3 = *(long *)(*(long *)(param_1 + lVar3) + 8);
  _objc_retain(lVar1);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10699ca14; end: 10699cb27;  */

void FUN_10699ca14(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be317a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10699cb28; end: 10699cbaf; -[SCComposerPeopleSuggestedFriendStore hideSuggestedFriendWithRequest:] */

void FUN_10699cb28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010699eaf0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126bd780;
  func_0x00010bfe2de0(PTR_PTR_1126bd780,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2940();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10699cbb0; end: 10699cc53; -[SCComposerPeopleSuggestedFriendStore onCacheHideFriendWithRequest:] */

void FUN_10699cbb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf266e0(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10699cc54; end: 10699cc57;  */

void FUN_10699cc54(void)

{
  return;
}



/* Entry: 10699cc58; end: 10699ccf3; -[SCComposerPeopleSuggestedFriendStore onHideFriendFeedbackWithUserId:feedbackIndex:] */

void FUN_10699cc58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c285c20(uVar2);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10699ccf4; end: 10699ccf7;  */

void FUN_10699ccf4(void)

{
  return;
}



/* Entry: 10699ccf8; end: 10699cd7f; -[SCComposerPeopleSuggestedFriendStore undoHideSuggestedFriendWithUserId:] */

void FUN_10699ccf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f8a0(uVar2);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10699cd80; end: 10699cd83;  */

void FUN_10699cd80(void)

{
  return;
}



/* Entry: 10699cd84; end: 10699cd8f; -[SCComposerPeopleSuggestedFriendStore onUserPullToRefresh] */

void FUN_10699cd84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be76110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__populateSuggestionsObservableFi_11257b1e0,0,1);
  return;
}



/* Entry: 10699cd90; end: 10699cd9b; -[SCComposerPeopleSuggestedFriendStore onForceRefresh] */

void FUN_10699cd90(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be76110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__populateSuggestionsObservableFi_11257b1e0,0,0);
  return;
}



/* Entry: 10699cd9c; end: 10699cda7; -[SCComposerPeopleSuggestedFriendStore onClickShortcutWithSelectedId:] */

void FUN_10699cd9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be76110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__populateSuggestionsObservableFi_11257b1e0,0,0);
  return;
}



/* Entry: 10699cda8; end: 10699cdb7; -[SCComposerPeopleSuggestedFriendStore onSuggestedFriendsUpdatedWithCallback:] */

undefined ** FUN_10699cda8(void)

{
  return &PTR___NSConcreteGlobalBlock_11094fe30;
}



/* Entry: 10699cdb8; end: 10699cf33; -[SCComposerPeopleSuggestedFriendStore _handleLegacySuggestedFriends:error:firstTime:] */

void FUN_10699cdb8(long param_1,undefined8 param_2,undefined *param_3,long param_4,int param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    puVar2 = param_3;
    if (param_5 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010bf51e00();
      uVar1 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010bf51e00();
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_10699cfb8;
      puStack_58 = &UNK_11094fe70;
      uStack_50 = uVar4;
      uStack_48 = uVar1;
      _objc_retain();
      _objc_retain(uVar4);
      func_0x00010c0b8600(param_3,param_2,&puStack_70);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uStack_48);
      _objc_release(uStack_50);
      _objc_release(uVar1);
      _objc_release(uVar4);
    }
    else {
      func_0x00010c0b8600(param_3,param_2,&PTR___NSConcreteGlobalBlock_11094fe50);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4,param_2,puVar3);
    _objc_release(puVar3);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4,param_2,puVar2);
  }
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10699cf34; end: 10699cfb7;  */

void FUN_10699cf34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cf648;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c262240(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c083540();
  func_0x00010c040f80(puVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


