/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1065ff494; end: 1065ff497; -[SCUnifiedPublicProfileMutualFriendsActionHandler onMutualFriendsPillTapWithProfileUserId:] */

void FUN_1065ff494(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10d250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentMutualFriendsPageWithProf_112620eb0);
  return;
}



/* Entry: 1065ff498; end: 1065ff49b; -[SCUnifiedPublicProfileMutualFriendsActionHandler onViewAllMutualFriendsTapWithProfileUserId:] */

void FUN_1065ff498(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10d250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentMutualFriendsPageWithProf_112620eb0);
  return;
}



/* Entry: 1065ff49c; end: 1065ff56b; -[SCUnifiedPublicProfileMutualFriendsActionHandler presentMutualFriendsPageWithProfileUserId:] */

void FUN_1065ff49c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1065ff56c;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1065ff56c; end: 1065ff617;  */

void FUN_1065ff56c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b3530;
    _objc_alloc(PTR_PTR_1126b3530);
    lVar3 = lVar1 + 0x18;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c038f40(puVar2,param_2,lVar3,1);
    _objc_release(lVar3);
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010bf22ae0(uVar4,param_2,*(undefined8 *)(param_1 + 0x20),puVar2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + 8),param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065ff618; end: 1065ff65f; -[SCUnifiedPublicProfileMutualFriendsActionHandler mutualFriendsPageDidDismissWithScope:] */

void FUN_1065ff618(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1065ff660; end: 1065ff667; -[SCUnifiedPublicProfileMutualFriendsActionHandler dataProviderObservable] */

undefined8 FUN_1065ff660(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1065ff668; end: 1065ff697; -[SCUnifiedPublicProfileMutualFriendsActionHandler setDataProviderObservable:] */

void FUN_1065ff668(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065ff698; end: 1065ff69f; -[SCUnifiedPublicProfileMutualFriendsActionHandler supStore] */

undefined8 FUN_1065ff698(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1065ff6a0; end: 1065ff6cf; -[SCUnifiedPublicProfileMutualFriendsActionHandler setSupStore:] */

void FUN_1065ff6a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065ff6d0; end: 1065ff6d7; -[SCUnifiedPublicProfileMutualFriendsActionHandler deckContainerFactory] */

undefined8 FUN_1065ff6d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1065ff6d8; end: 1065ff707; -[SCUnifiedPublicProfileMutualFriendsActionHandler setDeckContainerFactory:] */

void FUN_1065ff6d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065ff708; end: 1065ff76f; -[SCUnifiedPublicProfileMutualFriendsActionHandler .cxx_destruct] */

void FUN_1065ff708(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065ff770; end: 1065ff833; -[SCUnifiedPublicProfilePlusActionHandler initWithViewController:fanPassSubscriptionScopeFactoryServices:fanPassSubscriptionManagementScopeFactoryServices:] */

undefined1 *
FUN_1065ff770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f20d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065ff834; end: 1065ff95f; -[SCUnifiedPublicProfilePlusActionHandler presentFanPassPaywallWithHostAccountId:displayNameOrUsername:sourcePageType:] */

void FUN_1065ff834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010bc9109c();
  _objc_initWeak(auStack_48,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1065ff960;
  puStack_70 = &UNK_1108502a8;
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = uVar1;
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_retain(param_4);
  uStack_60 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_88);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065ff960; end: 1065ffa23;  */

void FUN_1065ff960(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126c2268;
    _objc_alloc(PTR_PTR_1126c2268);
    func_0x00010c04ac00();
    puVar2 = PTR_PTR_1126cace0;
    _objc_alloc(PTR_PTR_1126cace0);
    func_0x00010c058500();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf21f80(uVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be02ba0(param_1,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065ffa24; end: 1065ffacb; -[SCUnifiedPublicProfilePlusActionHandler presentFanPassSubscriptionManagement] */

void FUN_1065ffa24(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1065ffacc;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1065ffacc; end: 1065ffba3;  */

void FUN_1065ffacc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      puVar3 = PTR_PTR_1126c2268;
      _objc_alloc(PTR_PTR_1126c2268);
      func_0x00010c04ac00();
      puVar4 = PTR_PTR_1126c2270;
      _objc_alloc(PTR_PTR_1126c2270);
      func_0x00010c0585c0();
      func_0x00010bf21f80(*(undefined8 *)(param_1 + 0x18),param_2,puVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065ffba4; end: 1065ffd27; -[SCUnifiedPublicProfilePlusActionHandler _dismissIfNecessaryAndPresentFanPassViewController:] */

void FUN_1065ffba4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      _objc_release(lVar1);
    }
    else {
      uVar3 = param_1 + 8;
      _objc_loadWeakRetained();
      uVar4 = uVar3;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c06d1a0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if ((uVar5 & 1) == 0) {
        _objc_initWeak(auStack_58,param_1);
        param_1 = param_1 + 8;
        _objc_loadWeakRetained(param_1);
        _objc_copyWeak(auStack_60,auStack_58);
        _objc_retain(param_3);
        func_0x00010bf84b00(param_1);
        _objc_release(param_1);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
        goto LAB_1065ffce8;
      }
    }
  }
  func_0x00010be7b500(param_1);
LAB_1065ffce8:
  _objc_release(param_3);
  return;
}



/* Entry: 1065ffd28; end: 1065ffd5b;  */

void FUN_1065ffd28(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7b500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065ffd5c; end: 1065ffdb7; -[SCUnifiedPublicProfilePlusActionHandler _presentFanPassViewController:] */

void FUN_1065ffd5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c10eda0();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1065ffdb8; end: 1065ffeff; -[SCUnifiedPublicProfilePlusActionHandler didDismissFanPassSubscriptionScopeWithError:] */

void FUN_1065ffdb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(param_1 + 0x20);
  if (uVar2 == uVar3) {
    func_0x00010c06d1a0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      _objc_initWeak(auStack_48,param_1);
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010bf84b00(param_1);
      _objc_release(param_1);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      goto LAB_1065ffe44;
    }
  }
  else {
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar4);
LAB_1065ffe44:
  _objc_release(param_3);
  return;
}



/* Entry: 1065fff00; end: 1065fff37;  */

void FUN_1065fff00(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065fff38; end: 1065fff7b; -[SCUnifiedPublicProfilePlusActionHandler .cxx_destruct] */

void FUN_1065fff38(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1065fff7c; end: 106600153; -[SCUnifiedPublicProfileProfilesPresenter initWithFriendProfileScopeLauncher:friendActionSheetScopeLauncher:chatCameraScopeLauncher:chatCameraScopeServices:unifiedPublicProfileScopeDelegate:snapchatterFetcherHelper:userSession:rootViewController:placement:addSourceType:pageLauncher:] */

undefined8 *
FUN_1065fff7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126f20e0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_storeWeak(puVar1 + 5,param_7);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 9,param_10);
    puVar1[10] = param_11;
    puVar1[0xb] = param_12;
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
  }
  _objc_release(param_13);
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



/* Entry: 106600154; end: 10660015b; -[SCUnifiedPublicProfileProfilesPresenter presentPublicProfileWithProfileId:] */

void FUN_106600154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7f210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentUnifiedPublicProfileWith_11257d620,param_3,0);
  return;
}



/* Entry: 10660015c; end: 106600163; -[SCUnifiedPublicProfileProfilesPresenter presentPublisherProfileWithProfileId:showId:] */

void FUN_10660015c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7f210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentUnifiedPublicProfileWith_11257d620,param_3,1);
  return;
}



/* Entry: 106600164; end: 10660016f; -[SCUnifiedPublicProfileProfilesPresenter presentUserProfileWithUserId:] */

void FUN_106600164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7f410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentUserProfileWithUserId_so_11257d6a0,param_3,0xed,0);
  return;
}



/* Entry: 106600170; end: 106600187; -[SCUnifiedPublicProfileProfilesPresenter presentUserProfileWithSourceWithUserId:sourceType:] */

void FUN_106600170(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x9f;
  if (param_4 != 0) {
    uVar1 = 0xed;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7f410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentUserProfileWithUserId_so_11257d6a0,param_3,uVar1,0);
  return;
}



/* Entry: 106600188; end: 1066001a3; -[SCUnifiedPublicProfileProfilesPresenter presentUserProfileWithViewTypeWithUserId:sourceType:viewType:] */

void FUN_106600188(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0x9f;
  if (param_4 != 0) {
    uVar1 = 0xed;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7f410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentUserProfileWithUserId_so_11257d6a0,param_3,uVar1,param_5 == 1);
  return;
}



/* Entry: 1066001a4; end: 1066002a3; -[SCUnifiedPublicProfileProfilesPresenter _presentUserProfileWithUserId:sourcePage:initialViewState:] */

void FUN_1066001a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_4;
  uStack_50 = param_5;
  func_0x00010bfaa440(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1066002a4; end: 10660039f;  */

void FUN_1066002a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(lVar1);
    _objc_release(lVar1);
    _objc_release(param_3);
    _objc_release(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1066003a0; end: 1066003c3;  */

void FUN_1066003a0(long param_1)

{
  if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_1 + 0x28) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be7b7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x30),PTR_s__presentFriendProfileForSnapchat_11257c790,
               *(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38),
               *(undefined4 *)(param_1 + 0x40));
    return;
  }
  return;
}



/* Entry: 1066003c4; end: 1066004bb; -[SCUnifiedPublicProfileProfilesPresenter presentUserActionSheetWithUserId:hideUserDetails:] */

void FUN_1066003c4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_4;
  func_0x00010bfaa440(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1066004bc; end: 1066005af;  */

void FUN_1066004bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(lVar1);
    _objc_release(lVar1);
    _objc_release(param_3);
    _objc_release(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1066005b0; end: 1066005d3;  */

void FUN_1066005b0(long param_1)

{
  if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_1 + 0x28) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be7b6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x30),PTR_s__presentFriendActionSheetForSnap_11257c758,
               *(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x38));
    return;
  }
  return;
}



/* Entry: 1066005d4; end: 10660074f; -[SCUnifiedPublicProfileProfilesPresenter _presentFriendProfileForSnapchatter:sourcePage:initialViewState:] */

void FUN_1066005d4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(ulong *)(param_1 + 0x40) = param_3;
    _objc_release(uVar2);
    lVar4 = param_1;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == 0) {
      puVar6 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      puVar7 = PTR_PTR_1126b3fa0;
      _objc_alloc();
      if (puVar7 == (undefined *)0x0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        func_0x00010c0159e0();
      }
      func_0x00010c08b7c0(*(undefined8 *)(param_1 + 8),param_2,puVar7,param_1);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    _objc_release(lVar4);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106600750; end: 10660089f; -[SCUnifiedPublicProfileProfilesPresenter _presentFriendActionSheetForSnapchatter:hideUserDetails:] */

void FUN_106600750(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(ulong *)(param_1 + 0x40) = param_3;
    _objc_release(uVar2);
    lVar4 = param_1;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == 0) {
      puVar6 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      puVar7 = PTR_PTR_1126b2860;
      _objc_alloc(PTR_PTR_1126b2860);
      func_0x00010c058980();
      func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x10),param_2,puVar7,param_1);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066008a0; end: 10660098f; -[SCUnifiedPublicProfileProfilesPresenter presentingViewController] */

void FUN_1066008a0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_1 + 0x48;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR_DAT_1126a4f48;
  do {
    PTR_DAT_1126a4f48 = puVar1;
    if (lVar3 == 0) {
      param_1 = param_1 + 0x48;
      _objc_loadWeakRetained(param_1);
LAB_106600970:
      _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
      return;
    }
    _objc_retain(lVar2);
    lVar3 = lVar2;
    func_0x00010010fab4(lVar2,puVar1);
    _objc_release(lVar2);
    if ((int)lVar3 != 0 && lVar2 != 0) {
      _objc_retain();
      param_1 = lVar2;
      goto LAB_106600970;
    }
    lVar4 = lVar2;
    func_0x00010c0f3ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar3 = lVar4;
    func_0x00010c0f3ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar2 = lVar4;
    puVar1 = PTR_DAT_1126a4f48;
  } while( true );
}



/* Entry: 106600990; end: 106600b27; -[SCUnifiedPublicProfileProfilesPresenter _presentUnifiedPublicProfileWithProfileId:isPublisherProfile:] */

void FUN_106600990(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b0f10;
    _objc_alloc();
    func_0x00010c033440();
    _objc_initWeak(auStack_38,param_1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    uStack_68 = 0x106600a90;
    puStack_60 = &UNK_110844dd0;
    _objc_copyWeak(auStack_48,auStack_38);
    _objc_retain(param_3);
    uStack_58 = param_3;
    puStack_50 = puVar2;
    uStack_40 = param_4;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_78);
    _objc_release(uStack_58);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106600b28; end: 106600b2f; -[SCUnifiedPublicProfileProfilesPresenter friendProfileDidDismiss:] */

void FUN_106600b28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_endLaunchedFeatureWithScope__1125c2cc8);
  return;
}



/* Entry: 106600b30; end: 106600b3f; -[SCUnifiedPublicProfileProfilesPresenter friendActionSheetOpenProfile:] */

void FUN_106600b30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7b7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentFriendProfileForSnapchat_11257c790,
             *(undefined8 *)(param_1 + 0x40),0xed,0);
  return;
}



/* Entry: 106600b40; end: 106600b47; -[SCUnifiedPublicProfileProfilesPresenter friendActionSheetDidDismiss:] */

void FUN_106600b40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_endLaunchedFeatureWithScope__1125c2cc8);
  return;
}



/* Entry: 106600b48; end: 106600c7f; -[SCUnifiedPublicProfileProfilesPresenter friendActionSheetDidDismiss:withRequestedChat:deepLinkURL:] */

void FUN_106600b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = auStack_48;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106600c80; end: 106600dff;  */

void FUN_106600c80(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      puVar3 = PTR_PTR_1126b1068;
      _objc_alloc(PTR_PTR_1126b1068);
      func_0x00010c057c40();
      puVar4 = PTR_PTR_1126b3530;
      _objc_alloc(PTR_PTR_1126b3530);
      func_0x00010c038f40();
      puVar5 = PTR_PTR_1126b3520;
      _objc_alloc(PTR_PTR_1126b3520);
      puVar6 = PTR_PTR_1126b41f8;
      func_0x00010c13a640(PTR_PTR_1126b41f8,param_2,puVar3);
      func_0x00010bffdd20(puVar5,param_2,0xd,puVar6,0);
      puVar6 = PTR_PTR_1126cb610;
      _objc_alloc(PTR_PTR_1126cb610);
      func_0x00010c038820();
      puVar7 = PTR_PTR_1126cc148;
      _objc_alloc(PTR_PTR_1126cc148);
      func_0x00010bffdb00();
      uVar8 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08c080();
      _objc_release(uVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106600e00; end: 106600fcb; -[SCUnifiedPublicProfileProfilesPresenter friendActionSheetShowCameraForSnap:] */

void FUN_106600e00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1010;
  _objc_alloc();
  func_0x00010c02ec80();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb2e0(puVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c294420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb300(puVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010901d7c4(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb080(puVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010901cdb0(uVar2,puVar3);
  func_0x00010c1af8a0(puVar1);
  _objc_release(puVar3);
  func_0x00010c1d86a0(puVar1);
  puVar4 = auStack_48;
  _objc_initWeak(puVar4,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c0f7fc0(puVar4);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106600fcc; end: 1066010ab;  */

void FUN_106600fcc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      uVar5 = *(undefined8 *)(lVar1 + 0x20);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c271a20(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf23680(uVar5,param_2,lVar2,uVar4,lVar1,1,0,0,0,0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      func_0x00010c08b7c0(*(undefined8 *)(lVar1 + 0x18),param_2,uVar5,lVar1);
      _objc_release(uVar5);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1066010ac; end: 1066010b3; -[SCUnifiedPublicProfileProfilesPresenter dismissCameraScope:] */

void FUN_1066010ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_endLaunchedFeature_1125c2cb0);
  return;
}



/* Entry: 1066010b4; end: 1066010bb; -[SCUnifiedPublicProfileProfilesPresenter shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_1066010b4(void)

{
  return 0;
}



/* Entry: 1066010bc; end: 1066010c7; -[SCUnifiedPublicProfileProfilesPresenter pushToValdiMarshaller:] */

void FUN_1066010bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b046e08(param_3,param_1);
  func_0x00010b046ddc();
  func_0x00010b046de4();
  func_0x00010b046d54();
  func_0x00010b046d94();
  return;
}



/* Entry: 1066010c8; end: 10660114f; -[SCUnifiedPublicProfileProfilesPresenter .cxx_destruct] */

void FUN_1066010c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106601150; end: 1066011f3; -[SCUnifiedPublicProfileSnapchatterFetcherHelper initWithSnapchatterDataFetcher:snapchattersPublicInfoFetcher:] */

undefined1 *
FUN_106601150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f20e8;
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



/* Entry: 1066011f4; end: 10660136b; -[SCUnifiedPublicProfileSnapchatterFetcherHelper fetchSnapchatterForUserId:onQueue:completion:] */

void FUN_1066011f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c2448c0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10660136c; end: 1066015a3;  */

void FUN_10660136c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0 && param_3 == 0) {
    lVar3 = param_1 + 0x38;
    _objc_loadWeakRetained();
    if (lVar3 != 0) {
      lVar1 = *(long *)(lVar3 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        lVar5 = *(long *)(param_1 + 0x30);
        if (lVar5 != 0) {
          uVar4 = *(undefined8 *)(param_1 + 0x20);
          puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_b8 = 0xc2000000;
          uStack_b0 = 0x1066015b8;
          puStack_a8 = &UNK_110849530;
          _objc_retain(lVar5);
          lStack_a0 = lVar5;
          func_0x00010007380c(uVar4,&puStack_c0);
          lVar5 = lStack_a0;
          goto LAB_106601548;
        }
      }
      else {
        uStack_60 = *(undefined8 *)(param_1 + 0x28);
        puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = *(long *)(param_1 + 0x30);
        _objc_retain(lVar5);
        func_0x00010c244ea0(lVar1);
        _objc_release(puVar2);
LAB_106601548:
        _objc_release(lVar5);
      }
      _objc_release(lVar1);
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x30);
    if (lVar3 == 0) goto LAB_10660155c;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1066015a4;
    puStack_80 = &UNK_11084a9e8;
    _objc_retain(lVar3);
    lStack_68 = lVar3;
    _objc_retain(param_2);
    lStack_78 = param_2;
    _objc_retain(param_3);
    lStack_70 = param_3;
    func_0x00010007380c(uVar4,&puStack_98);
    _objc_release(lStack_70);
    _objc_release(lStack_78);
    lVar3 = lStack_68;
  }
  _objc_release(lVar3);
LAB_10660155c:
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0001066015b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x30) + 0x10))
            (*(long *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x20),
             *(undefined8 *)(param_2 + 0x28));
  return;
}



/* Entry: 1066015a4; end: 1066015cb;  */

void FUN_1066015a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001066015b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1066015cc; end: 106601647;  */

void FUN_1066015cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    _objc_retain(param_3);
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 106601648; end: 106601677; -[SCUnifiedPublicProfileSnapchatterFetcherHelper .cxx_destruct] */

void FUN_106601648(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106601678; end: 106601ac7; -[SCUnifiedPublicProfileStandaloneAppViewController initWithSubscriptionManager:storySnapViewStateProvider:networkingClient:grpcServiceFactory:watchedStateCache:serviceConfig:composerApplication:alertPresenterFactory:subscriptionStore:friendStore:incomingFriendStore:userSession:blizzardLogger:runtime:unifiedPublicProfileDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_106601678(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
                    undefined8 param_17,undefined8 param_18)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_16);
  _objc_retain(param_17);
  puVar1 = PTR_PTR_1126cc150;
  _objc_retain(param_18);
  _objc_alloc_init();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11274bef8);
  *(undefined **)(param_1 + _DAT_11274bef8) = puVar1;
  _objc_release(uVar6);
  puVar1 = PTR_PTR_1126cc158;
  _objc_alloc_init();
  lVar8 = (long)_DAT_11274befc;
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  _objc_release(uVar6);
  puVar1 = PTR_PTR_1126cc160;
  _objc_alloc();
  func_0x00010c061d40();
  lVar7 = (long)_DAT_11274bf00;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar6);
  _objc_storeWeak(param_1 + _DAT_11274bf04,param_18);
  _objc_release(param_18);
  puStack_70 = PTR_PTR_1126f20f0;
  plVar2 = &lStack_78;
  lStack_78 = param_1;
  _objc_msgSendSuper2(plVar2,PTR_s_initWithValdiView__1125f5a88,*(undefined8 *)(param_1 + lVar7));
  if (plVar2 != (long *)0x0) {
    puVar1 = PTR_PTR_1126b0fe0;
    _objc_alloc();
    func_0x00010c0617a0();
    puVar3 = PTR_PTR_1126afe50;
    _objc_alloc(PTR_PTR_1126afe50);
    func_0x00010c040b80();
    puVar4 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    uVar6 = param_10;
    func_0x00010c269d40(param_10);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c0b7600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    func_0x00010c1c1bc0(puVar3);
    func_0x00010c169820(*(undefined8 *)((long)plVar2 + lVar8));
    func_0x00010c1fd700(*(undefined8 *)((long)plVar2 + lVar8));
    uVar6 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20dba0(*(undefined8 *)((long)plVar2 + lVar8));
    _objc_release(uVar6);
    func_0x00010c1a0100(*(undefined8 *)((long)plVar2 + lVar8));
    func_0x00010c1abec0(*(undefined8 *)((long)plVar2 + lVar8));
    uVar6 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cc960(*(undefined8 *)((long)plVar2 + lVar8));
    _objc_release(uVar6);
    uVar6 = param_6;
    func_0x00010c269d40(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4d00(*(undefined8 *)((long)plVar2 + lVar8));
    _objc_release(uVar6);
    uVar6 = param_11;
    func_0x00010c269d40(param_11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f5e0(*(undefined8 *)((long)plVar2 + lVar8));
    _objc_release(uVar6);
    func_0x00010c1c0520(*(undefined8 *)((long)plVar2 + lVar8));
    uVar6 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f540(*(undefined8 *)((long)plVar2 + lVar8));
    _objc_release(uVar6);
    func_0x00010c1e1220(*(undefined8 *)((long)plVar2 + lVar8));
    func_0x00010c166b20(*(undefined8 *)((long)plVar2 + lVar8));
    func_0x00010c1cba60(*(undefined8 *)((long)plVar2 + lVar8));
    uVar6 = param_7;
    func_0x00010c269d40(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c224a60(*(undefined8 *)((long)plVar2 + lVar8));
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_17);
  _objc_release(param_16);
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
  return plVar2;
}



/* Entry: 106601ac8; end: 106601b43; -[SCUnifiedPublicProfileStandaloneAppViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106601ac8(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = (long)_DAT_11274bf04;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar2 = param_1 + lVar2;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c280200();
    _objc_release(lVar2);
  }
  puStack_38 = PTR_PTR_1126f20f0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106601b44; end: 106601b9f; -[SCUnifiedPublicProfileStandaloneAppViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106601b44(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274bf00,0);
  _objc_storeStrong(param_1 + _DAT_11274bef8,0);
  _objc_storeStrong(param_1 + _DAT_11274befc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274bf04);
  return;
}



/* Entry: 106601ba0; end: 106601cdf; -[SCUnifiedPublicProfileStoryStateLoader initWithStoriesDataCoordinator:snapchattersSynchronousDataFetcher:storiesReadReceiptCoordinator:remoteStoriesDataProvider:circumstanceEngine:] */

undefined1 *
FUN_106601ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f20f8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106601ce0; end: 106601d2b; -[SCUnifiedPublicProfileStoryStateLoader dealloc] */

void FUN_106601ce0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bde3380();
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x50));
  puStack_28 = PTR_PTR_1126f20f8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106601d2c; end: 106601e23; -[SCUnifiedPublicProfileStoryStateLoader storySummaryInfoObservableForUserWithId:] */

void FUN_106601d2c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = *(ulong *)(param_1 + 0x10);
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
      func_0x00010c071ae0(uVar4,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_106601db8;
    }
    func_0x00010bde3380(param_1);
  }
LAB_106601db8:
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x10) = param_3;
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
    lVar3 = param_1;
    func_0x00010bdd6d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar3;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  func_0x00010c272120(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106601e24; end: 106601f83; -[SCUnifiedPublicProfileStoryStateLoader _didReceivestoryStoriesSummary:observer:] */

void FUN_106601e24(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126b4a40;
      _objc_alloc();
      func_0x00010c041000();
      _objc_release(lVar2);
      if ((puVar4 != (undefined *)0x0) &&
         (puVar3 = puVar4, func_0x00010bfddf00(), ((ulong)puVar3 & 1) == 0)) {
        _objc_initWeak(auStack_48,param_1);
        puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_70 = 0xc2000000;
        pcStack_68 = FUN_106601f84;
        puStack_60 = &UNK_110841fb0;
        _objc_copyWeak(auStack_50,auStack_48);
        puStack_58 = puVar4;
        func_0x0001000d76cc("APPSTORE",&puStack_78);
        _objc_destroyWeak(auStack_50);
        _objc_destroyWeak(auStack_48);
      }
    }
    _objc_release(puVar4);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106601f84; end: 106601fcf;  */

void FUN_106601f84(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be0f840();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde33a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106601fd0; end: 106602153; -[SCUnifiedPublicProfileStoryStateLoader _buildStorySummaryInfoObservable] */

void FUN_106601fd0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25b4e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar5);
  puVar4 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar3);
  func_0x00010bf54280(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106602154; end: 1066021a3;  */

void FUN_106602154(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf0a540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010050471c();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066021a4; end: 10660221b;  */

void FUN_1066021a4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x00010c259cc0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10660221c; end: 106602243;  */

void FUN_10660221c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106602244; end: 1066023d7;  */

void FUN_106602244(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar3 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_initWeak(auStack_48,param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_58,param_1 + 0x38);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    puVar2 = auStack_48;
    _objc_loadWeakRetained(puVar2);
    func_0x00010be97f60(lVar1);
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066023d8; end: 106602443;  */

void FUN_1066023d8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdffca0(lVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106602444; end: 1066024eb; -[SCUnifiedPublicProfileStoryStateLoader _runNetworkRequestForUserWithId:observer:] */

void FUN_106602444(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c0d4260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar1 == 0) {
    func_0x00010bed04c0(param_1,param_2,param_3,param_4);
  }
  else {
    func_0x00010bed04a0();
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1066024ec; end: 10660265f; -[SCUnifiedPublicProfileStoryStateLoader _tryToFetchPublicStoriesSummaryInfo:observer:] */

void FUN_1066024ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfaa9c0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106602660; end: 1066026c3;  */

void FUN_106602660(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((param_3 == 0) && (param_1 != 0)) {
    func_0x00010be803e0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066026c4; end: 106602873; -[SCUnifiedPublicProfileStoryStateLoader _tryToFetchFriendStoriesSummaryInfo:observer:] */

void FUN_1066026c4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_50 = param_3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106602874;
  puStack_78 = &UNK_1108942f0;
  _objc_retain(param_3);
  puVar3 = auStack_58;
  lStack_70 = param_3;
  _objc_copyWeak(auStack_60);
  _objc_retain(param_4);
  uStack_68 = param_4;
  func_0x00010c25b4c0(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release(lStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  lVar5 = param_3;
  __Unwind_Resume();
  pcStack_98 = FUN_106602874;
  puStack_c0 = puVar2;
  uStack_b8 = uVar1;
  uStack_b0 = param_4;
  lStack_a8 = param_3;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5 + 0x30;
  _objc_loadWeakRetained();
  if (lVar4 != 0) {
    if (puVar3 == (undefined1 *)0x0) {
      lVar5 = lVar5 + 0x30;
      _objc_loadWeakRetained(lVar5);
      func_0x00010bed04c0();
    }
    else {
      puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f0 = 0xc2000000;
      pcStack_e8 = FUN_106602950;
      puStack_e0 = &UNK_110848ba8;
      lVar5 = *(long *)(lVar5 + 0x28);
      lStack_d8 = lVar4;
      puStack_d0 = puVar3;
      _objc_retain(lVar5);
      lStack_c8 = lVar5;
      func_0x0001000d76cc("APPSTORE",&puStack_f8);
      lVar5 = lStack_c8;
    }
    _objc_release(lVar5);
  }
  _objc_release(lVar4);
  _objc_release(puVar3);
  return;
}



/* Entry: 106602874; end: 10660294f;  */

void FUN_106602874(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      param_1 = param_1 + 0x30;
      _objc_loadWeakRetained(param_1);
      func_0x00010bed04c0();
    }
    else {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_106602950;
      puStack_50 = &UNK_110848ba8;
      lVar2 = *(long *)(param_1 + 0x28);
      lStack_48 = lVar1;
      lStack_40 = param_2;
      _objc_retain(lVar2);
      lStack_38 = lVar2;
      func_0x0001000d76cc("APPSTORE",&puStack_68);
      param_1 = lStack_38;
    }
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106602950; end: 10660295f;  */

void FUN_106602950(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be803f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__proceedWithStoriesSummaryInfo_o_11257da98,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106602960; end: 106602a73; -[SCUnifiedPublicProfileStoryStateLoader _proceedWithStoriesSummaryInfo:observer:] */

void FUN_106602960(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b4a40;
    _objc_alloc();
    func_0x00010c041000();
    _objc_release(lVar1);
    if ((param_3 != 0) && (puVar3 != (undefined *)0x0)) {
      _objc_storeWeak(param_1 + 0x20,param_4);
      func_0x00010c0d9840(param_4);
      lVar1 = param_3;
      func_0x00010bfddf20();
      if (((int)lVar1 == 0) || (lVar1 = param_3, func_0x00010c0de440(), lVar1 < 1)) {
        uVar2 = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(param_1 + 8) = 0;
        _objc_release(uVar2);
        func_0x00010be0f840(param_1);
        func_0x00010bde3380(param_1);
      }
      else {
        lVar1 = param_3;
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(param_1 + 8);
        *(long *)(param_1 + 8) = lVar1;
        _objc_release(uVar2);
      }
    }
  }
  _objc_release(puVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106602a74; end: 106602b17; -[SCUnifiedPublicProfileStoryStateLoader _fetchAndTriggerSaveState] */

void FUN_106602a74(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
  func_0x000108f49474();
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0d4260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      return;
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa4de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 106602b18; end: 106602ca3; -[SCUnifiedPublicProfileStoryStateLoader _fetchFriendStoriesRemotelyWithUserId:storyId:] */

void FUN_106602b18(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_50 = param_3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar5 = auStack_58;
  _objc_copyWeak(auStack_60);
  func_0x00010c25b4c0(uVar1);
  _objc_release(puVar6);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_3);
  _objc_release(param_4);
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
  _objc_retain(puVar5);
  puVar2 = puVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined1 *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126b4a40;
    _objc_alloc();
    func_0x00010c041000();
    _objc_release(puVar3);
    if ((puVar6 != (undefined *)0x0) &&
       (puVar4 = puVar6, func_0x00010bfddf00(), ((ulong)puVar4 & 1) == 0)) {
      puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f8 = 0xc2000000;
      pcStack_f0 = FUN_106602dcc;
      puStack_e8 = &UNK_110841fb0;
      _objc_copyWeak(auStack_d8,param_3 + 0x30);
      puStack_e0 = puVar6;
      func_0x0001000d76cc("APPSTORE",&puStack_100);
      _objc_destroyWeak(auStack_d8);
    }
  }
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar5);
  return;
}



/* Entry: 106602ca4; end: 106602dcb;  */

void FUN_106602ca4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b4a40;
    _objc_alloc();
    func_0x00010c041000();
    _objc_release(lVar2);
    if ((puVar4 != (undefined *)0x0) &&
       (puVar3 = puVar4, func_0x00010bfddf00(), ((ulong)puVar3 & 1) == 0)) {
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_106602dcc;
      puStack_58 = &UNK_110841fb0;
      _objc_copyWeak(auStack_48,param_1 + 0x30);
      puStack_50 = puVar4;
      func_0x0001000d76cc("APPSTORE",&puStack_70);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106602dcc; end: 106602e17;  */

void FUN_106602dcc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be0f840();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde33a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106602e18; end: 106602f3f; -[SCUnifiedPublicProfileStoryStateLoader _fetchNonFriendStoriesRemotelyWithUserId:] */

void FUN_106602e18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bfaa9a0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106602f40; end: 1066030c3;  */

void FUN_106602f40(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar1 = param_2;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      puVar3 = PTR_PTR_1126b4a40;
      _objc_alloc();
      func_0x00010c041000();
      _objc_release(lVar1);
      if (puVar3 != (undefined *)0x0) {
        puVar2 = puVar3;
        func_0x00010bfddf00();
        if (((ulong)puVar2 & 1) == 0) {
          puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_68 = 0xc2000000;
          pcStack_60 = FUN_1066030c4;
          puStack_58 = &UNK_110841fb0;
          _objc_copyWeak(auStack_48,param_1 + 0x28);
          puStack_50 = puVar3;
          func_0x0001000d76cc("APPSTORE",&puStack_70);
          _objc_destroyWeak(auStack_48);
        }
        goto LAB_106603080;
      }
    }
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_2;
    func_0x00010c259cc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be11520(param_1);
    _objc_release(lVar1);
    _objc_release(param_1);
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = (undefined *)(param_1 + 0x28);
    _objc_loadWeakRetained(puVar3);
    func_0x00010be11520();
  }
LAB_106603080:
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1066030c4; end: 10660310f;  */

void FUN_1066030c4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be0f840();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde33a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106603110; end: 10660319b; -[SCUnifiedPublicProfileStoryStateLoader _fetchActualStoryDataForUserWithId:] */

void FUN_106603110(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c0d4260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar1 == 0) {
    func_0x00010be12e20(param_1,param_2,param_3);
  }
  else {
    func_0x00010be11520();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10660319c; end: 106603267; -[SCUnifiedPublicProfileStoryStateLoader didUpdateWithStoriesSnapReadReceiptUpdateRequest:fromPullToRefreshSync:] */

void FUN_10660319c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x106603224;
    puStack_30 = &UNK_1108450f8;
    lStack_28 = param_1;
    func_0x00010c0bc800(param_3,param_2,0,&puStack_48,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106603268; end: 1066032bf; -[SCUnifiedPublicProfileStoryStateLoader _completeStoryObserverWithInfo:] */

void FUN_106603268(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0d9840();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bde3390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__completeStoryObserver_112556680);
  return;
}



/* Entry: 1066032c0; end: 106603307; -[SCUnifiedPublicProfileStoryStateLoader _completeStoryObserver] */

void FUN_1066032c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf436e0();
  _objc_release(lVar1);
  _objc_storeWeak(param_1 + 0x20,0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106603308; end: 106603393; -[SCUnifiedPublicProfileStoryStateLoader .cxx_destruct] */

void FUN_106603308(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106603394; end: 10660366f; -[SCUnifiedPublicProfileSubscriptionManager initWithCreatorSettingsFetcher:creatorSettingsMutator:creatorSettingsTracker:snapchattersDataFetcher:discoverFeedDataSourceDeprecated:discoverFeedNotificationPromptHandler:bitmojiImageFetcher:imageDownloader:grapheneRegistry:profilesProvider:storiesConfigProvider:imageFetchingService:] */

undefined8 *
FUN_106603394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126f2100;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c2120;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
  }
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



/* Entry: 106603670; end: 106603777; -[SCUnifiedPublicProfileSubscriptionManager getStateWithPublicProfileId:callback:] */

void FUN_106603670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106603778;
  puStack_60 = &UNK_11092f2c8;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  ppuVar1 = &puStack_78;
  uStack_58 = param_4;
  _objc_retainBlock(ppuVar1);
  func_0x00010be134a0(param_1);
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106603778; end: 106603a97;  */

void FUN_106603778(long param_1,undefined *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      lVar6 = *(long *)(lVar1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_2;
      func_0x00010bf25000(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bfe44e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      func_0x00010bf5b7e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(lVar6);
      puStack_78 = &uStack_80;
      uStack_80 = 0;
      uStack_70 = 0x2020000000;
      if (lVar4 == 0) {
        puVar2 = param_2;
        func_0x00010c291840();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c080120();
        _objc_release(puVar2);
        uStack_68 = (char)puVar3;
      }
      else {
        lVar6 = lVar4;
        func_0x00010c080120();
        uStack_68 = (char)lVar6;
      }
      if ((*(byte *)(puStack_78 + 3) & 1) == 0) {
        uVar5 = *(undefined8 *)(lVar1 + 0x20);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = param_2;
        func_0x00010bf25000(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010bfe44e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(PTR___dispatch_main_q_11034be20);
        _objc_retain(param_2);
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar7);
        func_0x00010c2448c0(uVar5);
        _objc_release(PTR___dispatch_main_q_11034be20);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(uVar5);
        _objc_release(uVar7);
        puVar2 = param_2;
      }
      else {
        puVar2 = PTR_PTR_1126cc168;
        _objc_alloc(PTR_PTR_1126cc168);
        puVar3 = param_2;
        func_0x00010bf63640(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c079480(lVar4);
        func_0x00010c00fb60(puVar2);
        _objc_release(puVar3);
        lVar6 = *(long *)(param_1 + 0x20);
        if (lVar6 != 0) {
          (**(code **)(lVar6 + 0x10))(lVar6,puVar2,0);
        }
      }
      _objc_release(puVar2);
      __Block_object_dispose(&uStack_80,8);
    }
    else {
      lVar6 = *(long *)(param_1 + 0x20);
      if (lVar6 == 0) goto LAB_106603a3c;
      lVar4 = param_3;
      func_0x00010c09e4e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar6 + 0x10))(lVar6,0,lVar4);
    }
    _objc_release(lVar4);
  }
LAB_106603a3c:
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106603a98; end: 106603bbf;  */

void FUN_106603a98(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x000100bf119c();
    uVar1 = (undefined1)lVar5;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar1;
  puVar2 = PTR_PTR_1126cc168;
  _objc_alloc(PTR_PTR_1126cc168);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf63640(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c079480(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c00fb60(puVar2);
  _objc_release(uVar3);
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 != 0) {
    if (param_3 == 0) {
      (**(code **)(lVar5 + 0x10))(lVar5,puVar2,0);
    }
    else {
      lVar4 = param_3;
      func_0x00010c09e4e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar5 + 0x10))(lVar5,puVar2,lVar4);
      _objc_release(lVar4);
    }
  }
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106603bc0; end: 106603c3f; -[SCUnifiedPublicProfileSubscriptionManager getOptInStateWithHostAccountId:] */

undefined8 FUN_106603bc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf5b7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c079480(uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106603c40; end: 106603deb; -[SCUnifiedPublicProfileSubscriptionManager updateSubscribedWithPublicProfileId:subscribed:callback:placementInfo:subscriptionActionAttributions:nonFriendAddPlacementTypeOverride:nonFriendAddSourceOverride:] */

void FUN_106603c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined **ppuVar1;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_initWeak(auStack_68,param_1);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106603dec;
  puStack_a0 = &UNK_11092f328;
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_5);
  uStack_80 = param_5;
  uStack_70 = param_4;
  _objc_retain(param_6);
  uStack_98 = param_6;
  _objc_retain(param_8);
  uStack_90 = param_8;
  _objc_retain(param_9);
  uStack_88 = param_9;
  ppuVar1 = &puStack_b8;
  _objc_retainBlock(ppuVar1);
  func_0x00010be134a0(param_1);
  _objc_release(ppuVar1);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106603dec; end: 106603f3b;  */

void FUN_106603dec(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (param_3 == 0) {
    if (lVar1 == 0) {
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0);
      goto LAB_106603ef4;
    }
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar4);
    func_0x00010c28a880(param_4);
    _objc_release(uVar4);
    lVar2 = param_4;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x38);
    if (lVar3 == 0) goto LAB_106603ef4;
    lVar2 = param_3;
    func_0x00010c09e4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,lVar2);
  }
  _objc_release(lVar2);
LAB_106603ef4:
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106603f3c; end: 10660400f;  */

void FUN_106603f3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
    func_0x00010bf25000(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfe44e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x000107afbe0c(uVar4,uVar2,*(undefined8 *)(lVar3 + 0x28),*(undefined8 *)(lVar3 + 0x38),
                        *(undefined8 *)(lVar3 + 0x48),*(undefined8 *)(lVar3 + 0x50),
                        *(undefined8 *)(lVar3 + 0x68));
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    uVar1 = param_2;
    func_0x00010c09e4e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,uVar1);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106604010; end: 1066040cf; -[SCUnifiedPublicProfileSubscriptionManager updateOptInNotificationsWithPublicProfileId:optedIn:callback:] */

void FUN_106604010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_5);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1066040d0;
  puStack_50 = &UNK_11092f358;
  uStack_48 = param_1;
  uStack_40 = param_5;
  uStack_38 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_3);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  func_0x00010be134a0(param_1,param_2,param_3,ppuVar1);
  _objc_release(param_3);
  _objc_release(ppuVar1);
  _objc_release(uStack_40);
  _objc_release(param_5);
  return;
}



/* Entry: 1066040d0; end: 10660417f;  */

void FUN_1066040d0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    func_0x00010be722a0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      lVar1 = param_3;
      func_0x00010c09e4e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106604180; end: 106604333; -[SCUnifiedPublicProfileSubscriptionManager observeWithCallback:] */

void FUN_106604180(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  puVar2 = PTR_PTR_1126cc170;
  _objc_alloc();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106604334;
  puStack_68 = &UNK_11092f388;
  _objc_retain(param_3);
  uStack_60 = param_3;
  func_0x00010bffada0();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126afd78;
  _objc_alloc();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106604348;
  puStack_98 = &UNK_110841fb0;
  _objc_copyWeak(auStack_88,auStack_58);
  puStack_90 = puVar2;
  func_0x00010bffae00();
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_1066043a4;
  puStack_c0 = &UNK_110842e18;
  puStack_b8 = puVar4;
  _objc_retain();
  ppuVar5 = &puStack_d8;
  _objc_retainBlock(ppuVar5);
  _objc_release(puStack_b8);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar2);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}


