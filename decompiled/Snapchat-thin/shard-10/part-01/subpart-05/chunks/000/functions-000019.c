/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10798ec24; end: 10798ec9b;  */

void FUN_10798ec24(long param_1,undefined8 param_2)

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



/* Entry: 10798f128; end: 10798f30f; -[SCDiscoverFeedCustomStoryActionHandler _presentCustomStoryMenuWithDataModel:] */

void FUN_10798f128(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    _objc_opt_class(param_1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &PTR____CFConstantStringClassReference_110eb5df8;
    uVar3 = param_3;
    func_0x00010c0b3ae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107cb4458(&PTR____CFConstantStringClassReference_110eb5df8,uVar3,0xffffffffffffffff,
                        0xffffffffffffffff,*(undefined8 *)(param_1 + 0x48));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar2);
    _objc_release(ppuVar7);
    _objc_release(uVar3);
    _objc_release(lVar1);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar1 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c038f40(puVar4);
    _objc_release(lVar1);
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar1);
      lVar5 = param_1 + 0x50;
      _objc_loadWeakRetained(lVar5);
      uVar3 = param_3;
      func_0x00010c11ac00(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x00010bf24480(lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(lVar5);
      _objc_release(lVar1);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28));
      _objc_release(lVar6);
    }
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10798f870; end: 10798f8f7; -[SCDiscoverFeedCustomStoryActionHandler .cxx_destruct] */

void FUN_10798f870(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10798fc14; end: 10798fcb3; -[SCDiscoverFeedFriendStoryOptInStatusHandler initWithStoryPosterUserId:creatorSettingsTracker:] */

undefined1 *
FUN_10798fc14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8ff8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    func_0x00010bef9980(param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079903d0; end: 10799052f; -[SCDiscoverFeedOpenFriendProfileActionHandler handleActionWithSender:actionModel:fromSourceView:] */

ulong FUN_1079903d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar3 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d5990;
    _objc_opt_class(PTR_PTR_1126d5990);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010bfe5ec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c0b3ae0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c1561c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdcbde0(param_1);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c2923e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7dc00(param_1);
    _objc_release(uVar1);
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 107990c18; end: 107990def; -[SCDiscoverFeedOpenFriendProfileActionHandler friendActionSheetShowCameraForSnap:] */

void FUN_107990c18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x38) != 0) {
    puVar1 = PTR_PTR_1126b1010;
    _objc_alloc();
    func_0x00010c02ec80();
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c2923e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eb2e0(puVar1);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c294420(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eb300(puVar1);
    _objc_release(uVar2);
    uVar2 = uVar4;
    func_0x00010901d7c4(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eb080(puVar1);
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010901cdb0(uVar4,puVar3);
    func_0x00010c1af8a0(puVar1);
    _objc_release(puVar3);
    func_0x00010c1d86a0(puVar1);
    _objc_initWeak(auStack_48,param_1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    puStack_68 = &UNK_107990df0;
    puStack_60 = &UNK_110841fb0;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(puVar1);
    puStack_58 = puVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_78);
    _objc_release(puStack_58);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar4);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1079911a4; end: 1079911af; -[SCDiscoverFeedOpenFriendProfileActionHandler setPresentingViewController:] */

void FUN_1079911a4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 10799170c; end: 107991723; -[SCDiscoverFeedPostStoryActionHandler delegate] */

void FUN_10799170c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107992540; end: 107992593;  */

void FUN_107992540(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1a8c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079925bc; end: 1079925f3; -[SCDiscoverFeedSectionHeaderActionHandler discoverFeedDebugViewControllerNeedsToDismiss:animated:] */

void FUN_1079925bc(long param_1)

{
  param_1 = param_1 + 0x170;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107992bc4; end: 107992c23;  */

void FUN_107992bc4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be35c40();
  _objc_release(param_1);
  func_0x00010bf84b00(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


