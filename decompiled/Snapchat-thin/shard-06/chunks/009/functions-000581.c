/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f25178; end: 104f252a7; -[SCOurChatActionHandler _logTapWithEntryFeature:] */

void FUN_104f25178(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_68 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_104f252a8;
  uStack_40 = 0x104f252b8;
  uStack_38 = 0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104f252c0;
  puStack_70 = &UNK_11085ba00;
  puStack_58 = puStack_68;
  func_0x00010c0bdf00(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_88,
                      &PTR___NSConcreteGlobalBlock_11085b9e0);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa2520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a8c80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  return;
}



/* Entry: 104f252a8; end: 104f252bf;  */

void FUN_104f252a8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104f252c0; end: 104f252ff;  */

void FUN_104f252c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f25300; end: 104f25303;  */

void FUN_104f25300(void)

{
  return;
}



/* Entry: 104f25304; end: 104f2538b; -[SCOurChatActionHandler getTraitCollectionFetcher] */

void FUN_104f25304(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104f2538c;
  puStack_38 = &UNK_110851830;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 104f2538c; end: 104f253fb;  */

void FUN_104f2538c(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c10fd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104f253fc; end: 104f254e3; -[SCOurChatActionHandler _presentChatCustomizationHubForConversationId:entryFeature:] */

void FUN_104f253fc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      lVar1 = param_1;
      func_0x00010c10fd00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c038f40(puVar2,param_2,lVar1,1);
      _objc_release(lVar1);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bf22d60(uVar3,param_2,param_3,0x4b,param_4,puVar2,param_1,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f254e4; end: 104f254e7; -[SCOurChatActionHandler willDisplayChatCustomizationHubScope:] */

void FUN_104f254e4(void)

{
  return;
}



/* Entry: 104f254e8; end: 104f2553f; -[SCOurChatActionHandler didRequestDismissal:] */

void FUN_104f254e8(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104f25540;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104f25540; end: 104f25593;  */

void FUN_104f25540(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c150520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f25594; end: 104f255db; -[SCOurChatActionHandler didDismissChatCustomizationHubScope:] */

void FUN_104f25594(long param_1)

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



/* Entry: 104f255dc; end: 104f255f3; -[SCOurChatActionHandler presentingViewController] */

void FUN_104f255dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f255f4; end: 104f255ff; -[SCOurChatActionHandler setPresentingViewController:] */

void FUN_104f255f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 104f25600; end: 104f25617; -[SCOurChatActionHandler containerViewController] */

void FUN_104f25600(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f25618; end: 104f25623; -[SCOurChatActionHandler setContainerViewController:] */

void FUN_104f25618(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 104f25624; end: 104f25693; -[SCOurChatActionHandler .cxx_destruct] */

void FUN_104f25624(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 104f25694; end: 104f2578b;  */

void FUN_104f25694(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104f2578c;
  uStack_30 = 0x104f2579c;
  uStack_28 = 0;
  func_0x00010c0bdf00(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f2578c; end: 104f257a3;  */

void FUN_104f2578c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104f257a4; end: 104f25813;  */

void FUN_104f257a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b01c0;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c294260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f25814; end: 104f2585b;  */

void FUN_104f25814(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b01c0;
  func_0x00010bfcf680(PTR_PTR_1126b01c0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104f2585c; end: 104f2596b; -[SCUpdateChatWallpaperEligibilityHandler initWithParticipantInfo:updatesPublisher:snapchattersObservableRepository:] */

undefined1 *
FUN_104f2585c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e50a8;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bdf5b40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined1 **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar4;
    _objc_release(uVar2);
    func_0x00010bec8800(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f2596c; end: 104f25993; -[SCUpdateChatWallpaperEligibilityHandler wallpaperSectionVisibility] */

void FUN_104f2596c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f25994; end: 104f2599b; -[SCUpdateChatWallpaperEligibilityHandler currentVisibility] */

undefined1 FUN_104f25994(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 104f2599c; end: 104f25a87; -[SCUpdateChatWallpaperEligibilityHandler _createWallpaperVisibilityObservable] */

void FUN_104f2599c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104f25a88;
  uStack_30 = 0x104f25a98;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104f25aa0;
  puStack_68 = &UNK_11085ba88;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x104f25c14;
  puStack_90 = &UNK_110842b58;
  lStack_60 = param_1;
  puStack_58 = puStack_88;
  puStack_48 = puStack_88;
  func_0x00010c0bdf00(*(undefined8 *)(param_1 + 8),param_2,&puStack_80,&puStack_a8);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f25a88; end: 104f25a9f;  */

void FUN_104f25a88(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104f25aa0; end: 104f25be3;  */

void FUN_104f25aa0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  _objc_retain(param_2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar9;
  func_0x00010c2445c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000100bf119c(param_2);
  _objc_release(param_2);
  func_0x00010c0df6e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = uVar6;
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 104f25be4; end: 104f25c5f;  */

void FUN_104f25be4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000100bf119c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 104f25c60; end: 104f25d2b; -[SCUpdateChatWallpaperEligibilityHandler _subscribeToWallpaperVisibility] */

void FUN_104f25c60(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104f25d2c; end: 104f25d8b;  */

void FUN_104f25d2c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010bebc420(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f25d8c; end: 104f25d93; -[SCUpdateChatWallpaperEligibilityHandler _sinkVisibilityValue:] */

void FUN_104f25d8c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 104f25d94; end: 104f25de7; -[SCUpdateChatWallpaperEligibilityHandler .cxx_destruct] */

void FUN_104f25d94(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f25de8; end: 104f26113; -[SCOurChatFriendProfileSectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f25de8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
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
  undefined8 uVar19;
  long lVar20;
  
  puVar3 = PTR_PTR_1126b2738;
  lVar18 = (long)_DAT_1127171f8;
  lVar1 = param_1 + lVar18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb9280(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126b2740;
  _objc_alloc();
  lVar20 = (long)_DAT_1127171fc;
  lVar1 = param_1 + lVar20;
  _objc_loadWeakRetained(lVar1);
  lVar5 = lVar1;
  func_0x00010bf50a60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112717200;
  _objc_loadWeakRetained(lVar2);
  lVar6 = lVar2;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0342c0(puVar4,param_2,puVar3,lVar5,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar1);
  puVar7 = PTR_PTR_1126b2748;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112717204;
  _objc_loadWeakRetained();
  lVar8 = lVar1;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112717208;
  _objc_loadWeakRetained();
  lVar9 = lVar2;
  func_0x00010bf50420();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar10 = lVar20;
  func_0x00010bf50a60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11271720c;
  _objc_loadWeakRetained();
  lVar11 = lVar5;
  func_0x00010bfcf880();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + _DAT_112717210);
  lVar6 = param_1 + _DAT_112717214;
  _objc_loadWeakRetained();
  lVar12 = param_1 + _DAT_112717218;
  _objc_loadWeakRetained();
  lVar13 = param_1 + _DAT_11271721c;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c0d5c60();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_112717220;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00f240(puVar7,param_2,puVar4,lVar8,lVar9,lVar10,lVar11,puVar3,uVar19,lVar6,lVar12,
                      lVar14,lVar17);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar6);
  _objc_release(lVar11);
  _objc_release(lVar5);
  _objc_release(lVar10);
  _objc_release(lVar20);
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(lVar8);
  _objc_release(lVar1);
  param_1 = param_1 + lVar18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar7);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 104f26114; end: 104f261c7; -[SCOurChatFriendProfileSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f26114(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112717210,0);
  _objc_destroyWeak(param_1 + _DAT_112717220);
  _objc_destroyWeak(param_1 + _DAT_11271720c);
  _objc_destroyWeak(param_1 + _DAT_112717218);
  _objc_destroyWeak(param_1 + _DAT_112717200);
  _objc_destroyWeak(param_1 + _DAT_11271721c);
  _objc_destroyWeak(param_1 + _DAT_112717214);
  _objc_destroyWeak(param_1 + _DAT_112717208);
  _objc_destroyWeak(param_1 + _DAT_1127171fc);
  _objc_destroyWeak(param_1 + _DAT_112717224);
  _objc_destroyWeak(param_1 + _DAT_112717204);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127171f8);
  return;
}



/* Entry: 104f261c8; end: 104f26507; -[SCOurChatGroupProfileSectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f261c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
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
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  
  lVar19 = (long)_DAT_112717228;
  lVar1 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfcf200();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b2738;
  if (lVar2 != 0) {
    return;
  }
  lVar1 = param_1 + lVar19;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcf600(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126b2740;
  _objc_alloc();
  lVar20 = (long)_DAT_11271722c;
  lVar1 = param_1 + lVar20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf50a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0342c0(puVar4,param_2,puVar3,lVar2,0);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126b2748;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112717230;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112717234;
  _objc_loadWeakRetained();
  lVar7 = lVar2;
  func_0x00010bf50420();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar8 = lVar20;
  func_0x00010bf50a60();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112717238;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bfcf880();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + _DAT_11271723c);
  lVar11 = param_1 + _DAT_112717240;
  _objc_loadWeakRetained();
  lVar12 = param_1 + _DAT_112717244;
  _objc_loadWeakRetained();
  lVar13 = param_1 + _DAT_112717248;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c0d5c60();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_11271724c;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00f240(puVar5,param_2,puVar4,lVar6,lVar7,lVar8,lVar10,puVar3,uVar18,lVar11,lVar12,
                      lVar14,lVar17);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar20);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar1);
  param_1 = param_1 + lVar19;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 104f26508; end: 104f265af; -[SCOurChatGroupProfileSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f26508(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271723c,0);
  _objc_destroyWeak(param_1 + _DAT_11271724c);
  _objc_destroyWeak(param_1 + _DAT_112717238);
  _objc_destroyWeak(param_1 + _DAT_112717244);
  _objc_destroyWeak(param_1 + _DAT_112717248);
  _objc_destroyWeak(param_1 + _DAT_112717240);
  _objc_destroyWeak(param_1 + _DAT_112717234);
  _objc_destroyWeak(param_1 + _DAT_11271722c);
  _objc_destroyWeak(param_1 + _DAT_112717250);
  _objc_destroyWeak(param_1 + _DAT_112717230);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112717228);
  return;
}



/* Entry: 104f265b0; end: 104f265cb; -[SCOurChatSection sectionInsets] */

void FUN_104f265b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c297350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0xc028000000000000,0,0x4028000000000000,0,PTR__OBJC_CLASS___NSValue_1126afdf8,
             PTR_s_valueWithUIEdgeInsets__1126836f8);
  return;
}



/* Entry: 104f265cc; end: 104f265d3; -[SCOurChatSection minimumSectionInteritemSpacing] */

undefined8 FUN_104f265cc(void)

{
  return 0;
}



/* Entry: 104f265d4; end: 104f265db; -[SCOurChatSection minimumSectionLineSpacing] */

undefined8 FUN_104f265d4(void)

{
  return 0;
}



/* Entry: 104f265dc; end: 104f2696f; -[SCOurChatSectionCreator initWithEligibilityHandler:downloader:conversationIdResolver:conversationUpdatesPublisher:groupsCustomColorsFetcher:participantInfo:chatCustomizationHubScopeExposer:chatCustomizationHubScopeServices:plusServices:nativeSessionManager:currentUserId:] */

undefined8 *
FUN_104f265dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
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
  puStack_80 = PTR_PTR_1126e50b0;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_104f26970;
    puStack_a0 = &UNK_11085a8b8;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
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



/* Entry: 104f26970; end: 104f269ef;  */

void FUN_104f26970(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104f269f0; end: 104f269f7; -[SCOurChatSectionCreator order] */

undefined8 FUN_104f269f0(void)

{
  return 0x1d;
}



/* Entry: 104f269f8; end: 104f26a5b; -[SCOurChatSectionCreator section] */

void FUN_104f269f8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bf57500(lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104f26a5c; end: 104f26abf; -[SCOurChatSectionCreator actionHandler] */

void FUN_104f26a5c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010bf57500(lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104f26ac0; end: 104f26afb; -[SCOurChatSectionCreator _createActionHandler] */

void FUN_104f26ac0(void)

{
  _objc_alloc(PTR_PTR_1126b2750);
  func_0x00010bffda40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f26afc; end: 104f26d77; -[SCOurChatSectionCreator _createSection] */

void FUN_104f26afc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  FUN_104f29be4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108f728c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b2758;
  _objc_alloc(PTR_PTR_1126b2758);
  func_0x00010c01a1e0();
  puVar4 = PTR_PTR_1126b2760;
  _objc_alloc(PTR_PTR_1126b2760);
  func_0x00010c04f820();
  uVar5 = param_1;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2750;
  _objc_opt_class(PTR_PTR_1126b2750);
  uVar7 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar6);
  uVar1 = uVar5;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar5 = uVar1;
  func_0x00010bfcb6c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf61320();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252440();
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  puVar6 = PTR_PTR_1126b2768;
  _objc_alloc(PTR_PTR_1126b2768);
  func_0x00010c00f260();
  func_0x00010c1f9240(puVar4);
  func_0x00010beee460(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161980(puVar4);
  _objc_release(param_1);
  puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f93c0(puVar4);
  _objc_release(puVar12);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(uVar2 + 0x70);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f26d78; end: 104f26d8f; -[SCOurChatSectionCreator lifecycleAnnouncer] */

void FUN_104f26d78(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f26d90; end: 104f26d9b; -[SCOurChatSectionCreator setLifecycleAnnouncer:] */

void FUN_104f26d90(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 104f26d9c; end: 104f26e57; -[SCOurChatSectionCreator .cxx_destruct] */

void FUN_104f26d9c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x70);
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



/* Entry: 104f26e58; end: 104f26e63; +[SCOurChatSectionDataProvider announcerIdentifier] */

undefined ** FUN_104f26e58(void)

{
  return &PTR____CFConstantStringClassReference_110db66d8;
}



/* Entry: 104f26e64; end: 104f26e6b; -[SCOurChatSectionDataProvider addListener:] */

void FUN_104f26e64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 104f26e6c; end: 104f26e73; -[SCOurChatSectionDataProvider removeListener:] */

void FUN_104f26e6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 104f26e74; end: 104f2701f; -[SCOurChatSectionDataProvider initWithEligibilityHandler:downloader:conversationUpdatesPublisher:groupsCustomColorsFetcher:participantInfo:traitCollectionFetcher:customColorsEnabled:currentUserId:] */

undefined1 *
FUN_104f26e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e50b8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + 0x48) = param_9;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_11;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f27020; end: 104f2721f; -[SCOurChatSectionDataProvider setUp] */

void FUN_104f27020(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2a1900(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104f27220;
  puStack_78 = &UNK_110842a38;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  FUN_104f25694(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bfa4ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  uVar1 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_98);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 104f27220; end: 104f2724b;  */

void FUN_104f27220(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be04040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f2724c; end: 104f272bb;  */

void FUN_104f2724c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bf500c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be27b80(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f272bc; end: 104f274ab; -[SCOurChatSectionDataProvider _handleCurrentConversation:] */

void FUN_104f272bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
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
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bfcf380();
    *(long *)(param_1 + 0x60) = lVar1;
    lVar1 = param_3;
    func_0x00010bfcf3c0();
    *(char *)(param_1 + 0x68) = (char)lVar1;
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,*(undefined8 *)(param_1 + 0x50));
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar1 = param_3;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(lVar1);
          }
          uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
          uVar2 = uVar6;
          func_0x00010c0f4a60();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar2;
          func_0x00010c071ae0();
          _objc_release(uVar2);
          if (((int)uVar5 != 0) && (uVar2 = uVar6, func_0x00010bf41120(), (int)uVar2 != 0)) {
            uVar5 = *(undefined8 *)(param_1 + 0x28);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf41120(uVar6);
            uVar2 = uVar5;
            func_0x00010bf61380(uVar5,param_2,uVar6);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = *(undefined8 *)(param_1 + 0x58);
            *(undefined8 *)(param_1 + 0x58) = uVar2;
            _objc_release(uVar6);
            _objc_release(uVar5);
            goto LAB_104f27450;
          }
          lVar8 = lVar8 + 1;
        } while (lVar4 != lVar8);
        lVar4 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar4 != 0);
    }
LAB_104f27450:
    _objc_release(lVar1);
    func_0x00010be04040(param_1);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    param_3 = param_3 + 0x70;
    _objc_loadWeakRetained(param_3);
    func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 104f274ac; end: 104f274df; -[SCOurChatSectionDataProvider _dispatchUpdate] */

void FUN_104f274ac(long param_1)

{
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f274e0; end: 104f2752b; -[SCOurChatSectionDataProvider setSectionDataModel:] */

void FUN_104f274e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
  _objc_release(uVar1);
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f2752c; end: 104f27567; -[SCOurChatSectionDataProvider numberOfItemsInSection:] */

long FUN_104f2752c(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010bf60d00();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beea230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__visibleRowCount_112598230);
    return param_1;
  }
  return 0;
}



/* Entry: 104f27568; end: 104f2762b; -[SCOurChatSectionDataProvider _showsGroupStoryRow] */

byte FUN_104f27568(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x104f27630;
  puStack_50 = &UNK_110842b58;
  puStack_38 = puStack_48;
  func_0x00010c0bdf00(*(undefined8 *)(param_1 + 0x30),param_2,&PTR___NSConcreteGlobalBlock_11085bb08
                      ,&puStack_68);
  if (*(char *)(puStack_38 + 3) == '\x01') {
    bVar1 = *(byte *)(param_1 + 0x68);
  }
  else {
    bVar1 = 0;
  }
  __Block_object_dispose(&uStack_40,8);
  return bVar1 & 1;
}



/* Entry: 104f2762c; end: 104f27643;  */

void FUN_104f2762c(void)

{
  return;
}



/* Entry: 104f27644; end: 104f27673; -[SCOurChatSectionDataProvider _visibleRowCount] */

long FUN_104f27644(ulong param_1)

{
  long lVar1;
  
  lVar1 = 1;
  if (*(char *)(param_1 + 0x48) != '\0') {
    lVar1 = 2;
  }
  func_0x00010bebbe40();
  return lVar1 + (param_1 & 0xffffffff);
}



/* Entry: 104f27674; end: 104f276cb; -[SCOurChatSectionDataProvider _containerStyleForRow:] */

undefined1  [16] FUN_104f27674(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  func_0x00010beea220();
  uVar1 = 0;
  if (param_1 <= param_3 + 1U) {
    uVar1 = 4;
  }
  if (param_3 == 0) {
    uVar1 = uVar1 + 1;
  }
  uVar2 = 0xf;
  if (param_1 != 1) {
    uVar2 = uVar1 | 10;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = 1;
  return auVar3;
}



/* Entry: 104f276cc; end: 104f276d3; -[SCOurChatSectionDataProvider dataLoadingStatus] */

undefined8 FUN_104f276cc(void)

{
  return 2;
}



/* Entry: 104f276d4; end: 104f27837; -[SCOurChatSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_104f276d4(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  undefined1 *puStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 0x18);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x104f277c8;
  puStack_58 = &UNK_11085bb28;
  _objc_retain(uStack_50);
  _objc_retainBlock();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dbb178;
  puVar3 = (undefined1 *)ppuVar2;
  _objc_retainBlock();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  puVar4 = PTR_PTR_1126b2728;
  _objc_opt_class(PTR_PTR_1126b2728);
  uVar5 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar4);
  uVar1 = param_2;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c191460(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f27838; end: 104f27907; -[SCOurChatSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_104f27838(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010beea600(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    lVar2 = param_1;
    func_0x00010bdf7680(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_1;
  func_0x00010bebbe40();
  if ((int)lVar2 != 0) {
    func_0x00010be249a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f27908; end: 104f27b37; -[SCOurChatSectionDataProvider _wallpaperCellViewModel] */

void FUN_104f27908(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x00010bde7740(param_1,param_2,0);
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar2 = PTR_PTR_1126aebd8;
  func_0x00010c14e3a0(PTR_PTR_1126aebd8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2770;
  func_0x00010c0e3620(PTR_PTR_1126b2770);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2778;
  _objc_alloc(PTR_PTR_1126b2778);
  puVar5 = puVar4;
  func_0x000104f29bfc();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar6);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_104f27f88;
  uStack_70 = 0x104f27f98;
  uStack_68 = 0;
  func_0x00010c0bdf00(uVar6);
  uVar7 = puStack_88[5];
  _objc_retain(uVar7);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(uVar6);
  func_0x00010c053500(puVar4);
  _objc_release(uVar7);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  func_0x00010bffd260();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104f27b38; end: 104f27c83; -[SCOurChatSectionDataProvider _customColorsCellViewModel] */

void FUN_104f27b38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x00010bde7740(param_1,param_2,1);
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar2 = PTR_PTR_1126b2770;
  if (*(long *)(param_1 + 0x58) == 0) {
    func_0x00010bf8eaa0(PTR_PTR_1126b2770);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfad6a0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126b2778;
  _objc_alloc(PTR_PTR_1126b2778);
  puVar4 = puVar3;
  func_0x000104f29c44();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000104f29c5c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053500(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  func_0x00010bffd260();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104f27c84; end: 104f27df3; -[SCOurChatSectionDataProvider _groupStoryCellViewModel] */

void FUN_104f27c84(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  func_0x00010beea220();
  func_0x00010bde7740();
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar2 = PTR_PTR_1126b2770;
  func_0x00010c23b7e0(PTR_PTR_1126b2770);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000104f29c74();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2778;
  _objc_alloc(PTR_PTR_1126b2778);
  puVar5 = puVar4;
  func_0x000104f29c8c();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053500(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  func_0x00010bffd260();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104f27df4; end: 104f27e73; -[SCOurChatSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_104f27df4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110dbb178;
  puVar1 = PTR_PTR_1126b2728;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(puVar2 + 0x70);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f27e74; end: 104f27e8b; -[SCOurChatSectionDataProvider dataProviderDelegate] */

void FUN_104f27e74(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f27e8c; end: 104f27e97; -[SCOurChatSectionDataProvider setDataProviderDelegate:] */

void FUN_104f27e8c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 104f27e98; end: 104f27e9f; -[SCOurChatSectionDataProvider updateQueuePerformer] */

undefined8 FUN_104f27e98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 104f27ea0; end: 104f27ecf; -[SCOurChatSectionDataProvider setUpdateQueuePerformer:] */

void FUN_104f27ea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f27ed0; end: 104f27ed7; -[SCOurChatSectionDataProvider sectionDataModel] */

undefined8 FUN_104f27ed0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 104f27ed8; end: 104f27f87; -[SCOurChatSectionDataProvider .cxx_destruct] */

void FUN_104f27ed8(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 104f27f88; end: 104f27f9f;  */

void FUN_104f27f88(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104f27fa0; end: 104f2804f;  */

void FUN_104f27fa0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x000104f29c14();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010901d7c4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f28050; end: 104f2808b;  */

void FUN_104f28050(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000104f29c2c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104f2808c; end: 104f28117; -[SCOurChatSupplementaryViewProvider initWithHeaderViewModel:eligibilityHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104f2808c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e50c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithSectionHeaderViewModel__1125ee610,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127172cc;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 104f28118; end: 104f2813b; -[SCOurChatSupplementaryViewProvider sectionHeaderDisplayStrategy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_104f28118(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_1127172cc);
  func_0x00010bf60d00(uVar1);
  return uVar1 & 0xffffffff;
}



/* Entry: 104f2813c; end: 104f2814f; -[SCOurChatSupplementaryViewProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f2813c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127172cc,0);
  return;
}



/* Entry: 104f28150; end: 104f28293; -[SCOurChatProfileCollectionViewCell initWithFrame:] */

undefined1 * FUN_104f28150(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e50c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c20eaa0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010c178280();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161a60();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213780();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d5c20();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165e40();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104f28294; end: 104f282db; -[SCOurChatProfileCollectionViewCell layoutSubviews] */

void FUN_104f28294(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e50c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010be491c0(param_1);
  return;
}



/* Entry: 104f282dc; end: 104f282e3; -[SCOurChatProfileCollectionViewCell shouldAdjustBackgroundColorForHighlightedState] */

undefined8 FUN_104f282dc(void)

{
  return 0;
}



/* Entry: 104f282e4; end: 104f2861f; -[SCOurChatProfileCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f282e4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_1127172d0;
  uVar6 = *(ulong *)(param_1 + lVar7);
  _objc_retain(uVar6);
  _objc_retain(param_3);
  if (uVar6 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar6);
LAB_104f2836c:
    func_0x00010bec9da0(param_1);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar6);
    }
    else {
      uVar1 = uVar6;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar6);
      if ((int)uVar1 != 0) goto LAB_104f2836c;
    }
    puVar2 = PTR_PTR_1126b2778;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar6 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(param_3);
    uVar1 = uVar6;
    func_0x00010c2711a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c27f7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216540();
    _objc_release(lVar3);
    _objc_release(uVar1);
    uVar1 = uVar6;
    func_0x00010c260ca0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c27f7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c5c0();
    _objc_release(lVar3);
    _objc_release(uVar1);
    func_0x00010bfcf7e0(uVar6);
    func_0x00010bf9e0a0(uVar6);
    func_0x00010c20eaa0(param_1);
    uVar1 = uVar6;
    func_0x00010c08dd40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bf1c0();
    _objc_release(uVar1);
    uVar1 = uVar6;
    func_0x00010c272d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar3 = param_1;
    func_0x00010c27f7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
      func_0x00010c161a60();
      _objc_release(lVar3);
      lVar3 = param_1;
      func_0x00010c27f7a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2194c0();
      _objc_release(lVar3);
    }
    else {
      func_0x00010c161a60();
      _objc_release(lVar3);
      lVar3 = param_1;
      func_0x00010beccf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c27f7a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2194c0();
      _objc_release(lVar4);
      _objc_release(lVar3);
      func_0x00010bec9da0(param_1);
    }
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(ulong *)(param_1 + lVar7) = param_3;
    _objc_release(uVar5);
    _objc_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f28620; end: 104f2862b;  */

void FUN_104f28620(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea53b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setLeadingIcon__112586e90,param_2);
  return;
}



/* Entry: 104f2862c; end: 104f28657;  */

void FUN_104f2862c(long param_1,undefined8 param_2)

{
  func_0x00010bea33e0(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010be491d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__layoutGradientIfNecessary_11256fe10);
  return;
}



/* Entry: 104f28658; end: 104f2866f;  */

void FUN_104f28658(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea5390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setLeadingEmojiIcon__112586e88,param_2);
  return;
}



/* Entry: 104f28670; end: 104f2883f; +[SCOurChatProfileCollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_104f28670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b2778;
  _objc_opt_class(PTR_PTR_1126b2778);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar9 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    uVar3 = param_5;
    func_0x00010c2795a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (**(code **)(uVar3 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010bfcf7e0(param_5);
    func_0x00010bf9e0a0(param_5);
    uVar3 = param_5;
    func_0x00010c272d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR_PTR_1126b2780;
    uVar5 = param_5;
    func_0x00010c2711a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_5;
    func_0x00010c260ca0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar8 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    if (uVar3 != 0) {
      uVar8 = 0x4038000000000000;
      uVar7 = 0x4042000000000000;
    }
    uVar9 = param_1;
    func_0x00010bf8bb80(param_1,param_2,uVar7,uVar8,0x4038000000000000,0x4038000000000000,puVar2);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  auVar10._8_8_ = uVar9;
  auVar10._0_8_ = param_1;
  return auVar10;
}



/* Entry: 104f28840; end: 104f28917; -[SCOurChatProfileCollectionViewCell _setLeadingIcon:] */

void FUN_104f28840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = 0x11;
  _dispatch_get_global_queue(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104f28918;
  puStack_58 = &UNK_110848218;
  uStack_50 = param_1;
  uStack_48 = param_3;
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010007380c(uVar1,&puStack_70);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104f28918; end: 104f28a2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f28918(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127172d4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_opt_class(uVar3);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar2);
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  func_0x00010bf88c20(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104f28a30; end: 104f28a77;  */

void FUN_104f28a30(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5bd20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f28a78; end: 104f28b03; -[SCOurChatProfileCollectionViewCell _makeLeadingIcon:] */

void FUN_104f28a78(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_104f28b04;
    puStack_38 = &UNK_110841f80;
    _objc_retain(param_3);
    lStack_30 = param_3;
    uStack_28 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_release(lStack_30);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104f28b04; end: 104f28d4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f28b04(long param_1,undefined8 param_2)

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
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x00010bfe9720(puVar1,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  func_0x00010c1739e0(0,0,0x4040000000000000,0x4038000000000000);
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar3);
  _objc_release(puVar4);
  func_0x00010c219b60(puVar3);
  func_0x00010befbb60(puVar2);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar4);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c27f7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c1b9fe0();
  _objc_release(uVar12);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  if (puVar4 != (undefined *)0x0) {
    _objc_retain(puVar4);
    _objc_opt_new();
    uVar12 = *(undefined8 *)(puVar1 + _DAT_1127172d8);
    *(undefined **)(puVar1 + _DAT_1127172d8) = puVar2;
    _objc_retain();
    _objc_release(uVar12);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    func_0x00010c1739e0(0,0,0x4040000000000000,0x4038000000000000);
    func_0x00010c1739e0(0,0,0x4038000000000000,0x4038000000000000,puVar2);
    puVar5 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4028000000000000);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fb999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x3ff0000000000000);
    _objc_release(puVar5);
    puVar5 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3f800000);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199c0(0,0,0x4038000000000000,0x4038000000000000,
                        PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    puVar6 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe820();
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x4010000000000000);
    _objc_release(puVar5);
    func_0x00010c219b60(puVar2);
    func_0x00010befbb60(puVar3);
    func_0x00010c0bddc0(puVar4);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar2;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x00010bf34860(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar2;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar2;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b9fe0();
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c16e450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar3 + 0x20),PTR_s_setBackgroundColor__112639330,param_2);
  return;
}



/* Entry: 104f28d4c; end: 104f2920f; -[SCOurChatProfileCollectionViewCell _setCustomColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f28d4c(undefined *param_1,undefined8 param_2,long param_3)

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
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_opt_new();
    uVar16 = *(undefined8 *)(param_1 + _DAT_1127172d8);
    *(undefined **)(param_1 + _DAT_1127172d8) = puVar1;
    _objc_retain();
    _objc_release(uVar16);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    func_0x00010c1739e0(0,0,0x4040000000000000,0x4038000000000000);
    func_0x00010c1739e0(0,0,0x4038000000000000,0x4038000000000000,puVar1);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4028000000000000);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fb999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x3ff0000000000000);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3f800000);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199c0(0,0,0x4038000000000000,0x4038000000000000,
                        PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    puVar4 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe820();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x4010000000000000);
    _objc_release(puVar3);
    func_0x00010c219b60(puVar1);
    func_0x00010befbb60(puVar2);
    func_0x00010c0bddc0(param_3);
    _objc_release(param_3);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = puVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010bf34860(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010c27f7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b9fe0();
    _objc_release(param_1);
    _objc_release(puVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c16e450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar2 + 0x20),PTR_s_setBackgroundColor__112639330,param_2);
  return;
}



/* Entry: 104f29210; end: 104f2921b;  */

void FUN_104f29210(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16e450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setBackgroundColor__112639330,param_2);
  return;
}



/* Entry: 104f2921c; end: 104f292e3;  */

void FUN_104f2921c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_4);
  func_0x00010bfcd9c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf525a0();
  func_0x00010c1842e0(uVar2);
  _objc_release(uVar1);
  func_0x00010bf279a0(param_1,uVar2);
  func_0x00010bf41720(uVar2,param_3,param_4);
  _objc_release(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066f40();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104f292e4; end: 104f29507; -[SCOurChatProfileCollectionViewCell _setLeadingSIGIcon:] */

void FUN_104f292e4(undefined8 param_1,undefined8 param_2,undefined *param_3)

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
  undefined *puVar11;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b0c40;
  func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    func_0x00010c1739e0(0,0,0x4040000000000000,0x4038000000000000);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    func_0x00010c219b60();
    func_0x00010befbb60(puVar2,param_2,puVar3);
    puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = puVar3;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf348e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf493a0(puVar4,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    puStack_78 = puVar6;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010bf34860(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf493a0(puVar7,param_2,puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar11,param_2,puVar10);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010c27f7a0();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar2;
    func_0x00010c1b9fe0();
    _objc_release(param_1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  puVar11 = param_3;
  func_0x00010c08fa60();
  if (puVar11 != (undefined *)0x0) {
    puVar11 = PTR_PTR_1126aea58;
    _objc_opt_new(PTR_PTR_1126aea58);
    func_0x00010c1739e0(0,0,0x4040000000000000,0x4038000000000000);
    func_0x00010c212f20(puVar11,param_2,param_3);
    func_0x00010c213040(puVar11,param_2,1);
    func_0x00010c21ad00(puVar11,param_2,0x14);
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b9fe0();
    _objc_release(puVar1);
    _objc_release(puVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f29508; end: 104f295bf; -[SCOurChatProfileCollectionViewCell _setLeadingEmojiIcon:] */

void FUN_104f29508(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126aea58;
    _objc_opt_new(PTR_PTR_1126aea58);
    func_0x00010c1739e0(0,0,0x4040000000000000,0x4038000000000000);
    func_0x00010c212f20(puVar2,param_2,param_3);
    func_0x00010c213040(puVar2,param_2,1);
    func_0x00010c21ad00(puVar2,param_2,0x14);
    func_0x00010c27f7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b9fe0();
    _objc_release(param_1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


