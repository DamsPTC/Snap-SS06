/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1059a82c4; end: 1059a835b;  */

void FUN_1059a82c4(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_2;
    func_0x00010c0e00e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010bedfc20(param_1);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059a835c; end: 1059a8363; -[SCNotificationBestFriendsSoundRepository _updateSettingsWithSettings:] */

void FUN_1059a835c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cded0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_setNotificationBestFriendsSoundE_1126511d8);
  return;
}



/* Entry: 1059a8364; end: 1059a83db; -[SCNotificationBestFriendsSoundRepository .cxx_destruct] */

void FUN_1059a8364(long param_1)

{
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



/* Entry: 1059a83dc; end: 1059a8677; -[SCNotificationConsumableConversationIdsRepository initWithFriendsFeedDataCoordinator:userId:] */

undefined8 *
FUN_1059a83dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = PTR_PTR_1126eb238;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_opt_new();
    uVar7 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar7);
    func_0x00010c1c3080(puVar1[1]);
    func_0x00010c1e62c0(puVar1[1]);
    _objc_retain(param_4);
    uVar7 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar7);
    _objc_retain(param_3);
    uVar7 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar7);
    uVar7 = puVar1[1];
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1059a8678;
    puStack_98 = &UNK_110841f80;
    _objc_retain(puVar1);
    puStack_90 = puVar1;
    _objc_retain(param_4);
    uStack_88 = param_4;
    func_0x00010befa3a0(uVar7);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar7 = puVar1[9];
    puVar1[9] = puVar2;
    _objc_release(uVar7);
    _objc_initWeak(auStack_b8,puVar1);
    uVar7 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bf49860();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e0e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c0,auStack_b8);
    uVar6 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar7 = puVar1[8];
    puVar1[8] = puVar2;
    _objc_release(uVar7);
    func_0x00010bec77c0(puVar1);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
    _objc_release(uStack_88);
    _objc_release(puStack_90);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1059a8678; end: 1059a8803;  */

void FUN_1059a8678(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126b7490;
  _objc_alloc();
  func_0x00010bfef900();
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x10) = puVar1;
  _objc_release(uVar6);
  puVar1 = PTR_PTR_1126b7490;
  _objc_alloc();
  func_0x00010bfef900();
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x18) = puVar1;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c121280(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  func_0x00010bfeea60();
  func_0x00010c1ec620();
  puVar3 = puVar2;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_opt_class(PTR__OBJC_CLASS___NSSet_1126ae870);
  puVar4 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar1);
  puVar1 = puVar3;
  if (((ulong)puVar4 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c0d3c80();
  _objc_release(puVar1);
  puVar1 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
  }
  lVar7 = *(long *)(param_1 + 0x20);
  _objc_retain(puVar1);
  uVar5 = *(undefined8 *)(lVar7 + 0x30);
  *(undefined **)(lVar7 + 0x30) = puVar1;
  _objc_release(uVar5);
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 1059a8804; end: 1059a884b;  */

void FUN_1059a8804(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be812c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059a884c; end: 1059a8873; -[SCNotificationConsumableConversationIdsRepository friendsFeedConsumableItemsObservable] */

void FUN_1059a884c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059a8874; end: 1059a89bb; -[SCNotificationConsumableConversationIdsRepository _processFriendsFeedConsumableConversationIds:] */

void FUN_1059a8874(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(long *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b7490;
  _objc_alloc();
  func_0x00010bfef900();
  puVar3 = puVar2;
  func_0x00010bfacbc0();
  if ((int)puVar3 != 0) {
    uStack_48 = 0;
    func_0x00010bf6bde0(puVar2,param_2,&uStack_48);
  }
  func_0x00010c0ce860(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  lVar4 = param_3;
  func_0x00010bf529e0(param_3);
  lVar5 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0(lVar5);
  func_0x00010c0df840(puVar3,param_2,lVar5 + lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,param_3,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bda00(uVar1,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1059a89bc; end: 1059a8ae3; -[SCNotificationConsumableConversationIdsRepository _subscribeToFeedSyncObservable] */

void FUN_1059a89bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa42a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1059a8ae4; end: 1059a8b43;  */

void FUN_1059a8ae4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010be29620(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059a8b44; end: 1059a8b57; -[SCNotificationConsumableConversationIdsRepository _handleFeedDidSync:] */

void FUN_1059a8b44(long param_1,undefined8 param_2,int param_3)

{
  if ((param_3 != 0) && (*(long *)(param_1 + 0x38) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be812d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__processFriendsFeedConsumableCon_11257de50)
    ;
    return;
  }
  return;
}



/* Entry: 1059a8b58; end: 1059a8bdb; -[SCNotificationConsumableConversationIdsRepository .cxx_destruct] */

void FUN_1059a8b58(long param_1)

{
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



/* Entry: 1059a8bdc; end: 1059a8f03; -[SCNotificationFeatureScreenAccessTracker initWithNotificationRemover:applicationLifecycleEvents:notificationScreenAccessEventObservable:circumstanceEngine:deckTransitionEvents:currentPageObservable:] */

undefined8 *
FUN_1059a8bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_80 = PTR_PTR_1126eb240;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
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
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_6);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_6);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xb) = 0;
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_6);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_6);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    func_0x00010be65b60(puVar1);
    func_0x00010be66740(puVar1);
    func_0x00010be65fa0(puVar1);
    func_0x00010be65ee0(puVar1);
    _objc_release(param_6);
    _objc_release(param_6);
    _objc_release(param_6);
    _objc_release(param_6);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1059a8f04; end: 1059a8fc3;  */

void FUN_1059a8f04(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001070c2200(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 1059a8fc4; end: 1059a90d3; -[SCNotificationFeatureScreenAccessTracker _observeApplicationLifecycleEvent] */

void FUN_1059a8fc4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf75dc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ea0();
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



/* Entry: 1059a90d4; end: 1059a90ff;  */

void FUN_1059a90d4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcd7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059a9100; end: 1059a91ef; -[SCNotificationFeatureScreenAccessTracker _observeNotificationsExperienceLifecycle] */

void FUN_1059a9100(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0e0ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1059a91f0; end: 1059a92db;  */

void FUN_1059a91f0(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1059a92dc;
  puStack_50 = &UNK_11085c360;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0bd560(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 1059a92dc; end: 1059a930f;  */

void FUN_1059a92dc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059a9310; end: 1059a9353;  */

void FUN_1059a9310(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059a9354; end: 1059a946b; -[SCNotificationFeatureScreenAccessTracker _observeDeckTransitionEvent] */

void FUN_1059a9354(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e0ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfad7a0();
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



/* Entry: 1059a946c; end: 1059a952b;  */

undefined1 FUN_1059a946c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_2);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c1a00(param_2);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1059a952c; end: 1059a9543;  */

void FUN_1059a952c(void)

{
  return;
}



/* Entry: 1059a9544; end: 1059a958b;  */

void FUN_1059a9544(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27de0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059a958c; end: 1059a967b; -[SCNotificationFeatureScreenAccessTracker _observeCurrentPageEvent] */

void FUN_1059a958c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0e0ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1059a967c; end: 1059a96c3;  */

void FUN_1059a967c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27ba0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059a96c4; end: 1059a9707; -[SCNotificationFeatureScreenAccessTracker _applicationDidEnterBackground] */

void FUN_1059a96c4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 0x58) = 0;
  return;
}



/* Entry: 1059a9708; end: 1059a97f3; -[SCNotificationFeatureScreenAccessTracker _didLeaveTargetScreen:fromStoryCarousel:] */

void FUN_1059a9708(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if ((param_3 == 2) && (param_4 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    if (((int)uVar3 != 0) && ((*(byte *)(param_1 + 0x58) & 1) == 0)) {
      *(undefined1 *)(param_1 + 0x58) = 1;
      puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                          &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2098);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12de00();
      _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
  return;
}



/* Entry: 1059a97f4; end: 1059a98e3; -[SCNotificationFeatureScreenAccessTracker _didEnterTargetScreen:] */

void FUN_1059a97f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar1 = param_3;
  func_0x000107fcbeb0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010beb5760(param_1,param_2,uVar1);
  if ((int)lVar2 != 0) {
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      *(undefined **)(param_1 + 0x40) = puVar3;
      _objc_release(uVar6);
      lVar2 = *(long *)(param_1 + 0x40);
    }
    func_0x00010befa120(lVar2,param_2,uVar1);
    lVar2 = param_1;
    func_0x00010be0ea00(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf529e0();
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12de00();
      _objc_release(uVar6);
    }
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059a98e4; end: 1059a9a63; -[SCNotificationFeatureScreenAccessTracker _featureScreenToTypeMappings:] */

void FUN_1059a98e4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  
  if (param_3 == 0x13) {
    if (lRam00000001136c1890 != -1) {
      func_0x00010002a2fc(0x1136c1890,&PTR___NSConcreteGlobalBlock_1108c9a48);
    }
    uVar2 = uRam00000001136c1888;
    _objc_retain(uRam00000001136c1888);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1f3c0();
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f3c0();
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf1f3c0();
    uVar7 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf1f3c0();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc0000000;
    pcStack_68 = FUN_1059aa2ec;
    puStack_60 = &UNK_1108c9a68;
    uStack_58 = (undefined1)uVar4;
    uStack_57 = (undefined1)uVar6;
    uStack_56 = (undefined1)uVar8;
    uStack_55 = (undefined1)uVar2;
    if (lRam00000001136c18a0 != -1) {
      func_0x00010002a2fc(0x1136c18a0,&puStack_78);
    }
    uVar2 = uRam00000001136c1898;
    _objc_retain(uRam00000001136c1898);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1059a9a64; end: 1059a9a8b; -[SCNotificationFeatureScreenAccessTracker _shouldRevokeNotificationsForScreen:] */

uint FUN_1059a9a64(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bf4b900(uVar1);
    return (uint)uVar1 ^ 1;
  }
  return 0;
}



/* Entry: 1059a9a8c; end: 1059a9cbf; -[SCNotificationFeatureScreenAccessTracker _handleDeckTransitionEvent:] */

void FUN_1059a9a8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0xfbadbeef;
  func_0x00010c0c1a00(param_3);
  iVar1 = *(int *)(puStack_90 + 3);
  if (iVar1 == -0x4524111) goto LAB_1059a9c74;
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = puVar4;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1059aa530;
  puStack_60 = &UNK_1108c9a88;
  puStack_58 = puVar2;
  _objc_retain();
  ppuVar3 = &puStack_78;
  _objc_retainBlock();
  if (iVar1 < 8) {
    if (iVar1 == 1) {
      uVar5 = 2;
    }
    else {
      if (iVar1 == 6) {
        (*(code *)ppuVar3[2])(ppuVar3,1);
      }
      else {
        if (iVar1 != 7) goto LAB_1059a9c18;
        (*(code *)ppuVar3[2])(ppuVar3,3);
      }
      uVar5 = 9;
    }
LAB_1059a9c0c:
    (*(code *)ppuVar3[2])(ppuVar3,uVar5);
  }
  else {
    if (0xb < iVar1) {
      if (iVar1 == 0xc) {
        uVar5 = 4;
      }
      else {
        if (iVar1 != 0xd) goto LAB_1059a9c18;
        uVar5 = 7;
      }
      goto LAB_1059a9c0c;
    }
    if (iVar1 == 8) {
      uVar5 = 6;
      goto LAB_1059a9c0c;
    }
    if (iVar1 == 0xb) {
      uVar5 = 5;
      goto LAB_1059a9c0c;
    }
  }
LAB_1059a9c18:
  puVar4 = puVar2;
  func_0x00010bf51e00();
  _objc_release(ppuVar3);
  _objc_release(puStack_58);
  _objc_release(puVar2);
  puVar2 = puVar4;
  func_0x00010bf529e0();
  if (puVar2 != (undefined *)0x0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12de20();
    _objc_release(uVar5);
  }
  _objc_release(puVar4);
LAB_1059a9c74:
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_3);
  return;
}



/* Entry: 1059a9cc0; end: 1059a9cc3;  */

void FUN_1059a9cc0(void)

{
  return;
}



/* Entry: 1059a9cc4; end: 1059a9cf3;  */

void FUN_1059a9cc4(long param_1,undefined4 param_2)

{
  func_0x00010c0d8d80();
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 1059a9cf4; end: 1059aa0ab; -[SCNotificationFeatureScreenAccessTracker _handleCurrentPageEvent:] */

void FUN_1059a9cf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
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
  
  _objc_retain(param_3);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_1059aa0ac;
  uStack_70 = 0x1059aa0bc;
  uStack_68 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_1059aa0ac;
  uStack_a0 = 0x1059aa0bc;
  uStack_98 = 0;
  func_0x00010c0c02c0(param_3);
  if (puStack_88[5] != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined *)puStack_88[5];
    _objc_retain(puVar6);
    puVar9 = puVar6;
    func_0x00010c0720c0();
    if (((((ulong)puVar9 & 1) != 0) ||
        (puVar9 = puVar6, func_0x00010c0720c0(), ((ulong)puVar9 & 1) != 0)) ||
       (puVar9 = puVar6, func_0x00010c0720c0(), ((ulong)puVar9 & 1) != 0)) {
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126b3450;
      _objc_opt_new(PTR_PTR_1126b3450);
      func_0x00010c19aac0();
      func_0x00010befa120(puVar1);
    }
    _objc_release(puVar6);
    lVar2 = puStack_b8[5];
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      uVar7 = puStack_b8[5];
      uVar8 = puStack_88[5];
      _objc_retain(uVar7);
      _objc_retain(uVar8);
      uVar3 = uVar7;
      func_0x00010c0720c0();
      if ((((uVar3 & 1) == 0) && (uVar3 = uVar7, func_0x00010c0720c0(), (int)uVar3 == 0)) ||
         ((uVar3 = uVar8, func_0x00010c0720c0(), (uVar3 & 1) == 0 &&
          (uVar3 = uVar8, func_0x00010c0720c0(), (int)uVar3 == 0)))) {
        puVar9 = (undefined *)0x0;
      }
      else {
        puVar6 = PTR_PTR_1126c0930;
        _objc_opt_new(PTR_PTR_1126c0930);
        puVar4 = PTR_PTR_1126ae740;
        _objc_opt_new(PTR_PTR_1126ae740);
        uVar3 = uVar7;
        func_0x00010c0720c0();
        if (((uVar3 & 1) != 0) || (uVar3 = uVar7, func_0x00010c0720c0(), (int)uVar3 != 0)) {
          func_0x00010befc800(puVar4);
        }
        func_0x00010c1d4de0(puVar6);
        puVar9 = PTR_PTR_1126be8e8;
        _objc_opt_new();
        func_0x00010c1d5520();
        _objc_release(puVar4);
        _objc_release(puVar6);
      }
      _objc_release(uVar8);
      _objc_release(uVar7);
      if (puVar9 != (undefined *)0x0) {
        puVar6 = PTR_PTR_1126b3450;
        _objc_opt_new(PTR_PTR_1126b3450);
        func_0x00010c19a860();
        func_0x00010befa120(puVar1);
        _objc_release(puVar6);
      }
      _objc_release(puVar9);
    }
    puVar9 = puVar1;
    func_0x00010bf529e0();
    if (puVar9 != (undefined *)0x0) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12de20();
      _objc_release(uVar5);
    }
    _objc_release(puVar1);
  }
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 1059aa0ac; end: 1059aa0c3;  */

void FUN_1059aa0ac(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1059aa0c4; end: 1059aa13f;  */

void FUN_1059aa0c4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126afdd8;
  func_0x00010bfc8740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126afdd8;
  func_0x00010bfc8740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1059aa140; end: 1059aa14b;  */

void FUN_1059aa140(void)

{
  return;
}



/* Entry: 1059aa14c; end: 1059aa2eb; -[SCNotificationFeatureScreenAccessTracker .cxx_destruct] */

void FUN_1059aa14c(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 1059aa2ec; end: 1059aa52f;  */

void FUN_1059aa2ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c226900(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2098);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x00010c12d360(puVar2);
    func_0x00010c12d360(puVar2);
  }
  if (*(char *)(param_1 + 0x21) == '\x01') {
    func_0x00010c12d360(puVar2);
  }
  if (*(char *)(param_1 + 0x22) == '\x01') {
    func_0x00010c12d360(puVar2);
  }
  uVar3 = 5;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0xd;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (*(char *)(param_1 + 0x23) == '\x01') {
    _objc_opt_new();
  }
  else {
    func_0x00010c226900();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar7 = 2;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c1898;
  puRam00000001136c1898 = puVar8;
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126b3450;
  _objc_opt_new(PTR_PTR_1126b3450);
  func_0x00010c19aac0();
  func_0x00010befa120(*(undefined8 *)(puVar2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1059aa530; end: 1059aa57f;  */

void FUN_1059aa530(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3450;
  _objc_opt_new(PTR_PTR_1126b3450);
  func_0x00010c19aac0();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1059aa580; end: 1059aa8f7; -[SCNotificationUnviewedIncomingFriendsRepository initWithUserId:incomingFriends:snapchattersDataFetcher:userScopedAppGroupUserDefaults:circumstanceEngine:appStartExperimentReader:] */

undefined8 *
FUN_1059aa580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_78 = PTR_PTR_1126eb248;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[8];
    puVar1[8] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[9];
    puVar1[9] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bd770;
    _objc_alloc();
    func_0x00010c05cd80();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_88,puVar1);
    uVar2 = puVar1[5];
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1059aa8f8;
    puStack_98 = &UNK_1108434b0;
    _objc_copyWeak(auStack_90,auStack_88);
    func_0x00010c0f7fc0(uVar2);
    puVar4 = PTR_PTR_1126b6ae8;
    func_0x00010c22ba80(PTR_PTR_1126b6ae8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae960;
    puVar5 = PTR_PTR_1126bdb28;
    func_0x00010c282e20(PTR_PTR_1126bdb28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11bfa0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126ae970;
    func_0x00010c0b5920(PTR_PTR_1126ae970);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b8,auStack_88);
    func_0x00010c2a1620(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1059aa8f8; end: 1059aa96f;  */

void FUN_1059aa8f8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bded8a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059aa970; end: 1059aa9bb; -[SCNotificationUnviewedIncomingFriendsRepository _createExtensionShareFile] */

void FUN_1059aa970(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b7490;
  _objc_alloc();
  func_0x00010bfef900();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1059aa9bc; end: 1059aaa03; -[SCNotificationUnviewedIncomingFriendsRepository _persistFriendingCOFs] */

void FUN_1059aa9bc(long param_1)

{
  func_0x000108c078cc(*(undefined8 *)(param_1 + 0x48));
  func_0x00010c20ea20(*(undefined8 *)(param_1 + 0x38));
  func_0x000100a046e8(*(undefined8 *)(param_1 + 0x48));
  func_0x00010c1783e0(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bec9a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__syncGRPCConfigurationsForIncomi_112590028);
  return;
}



/* Entry: 1059aaa04; end: 1059aaa2f; -[SCNotificationUnviewedIncomingFriendsRepository _syncGRPCConfigurationsForIncomingFriendRequestNotification] */

void FUN_1059aaa04(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x0001009b40cc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1e7330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_setRankingEnabledForNotification_1126576f0,uVar1)
  ;
  return;
}



/* Entry: 1059aaa30; end: 1059aab73; -[SCNotificationUnviewedIncomingFriendsRepository _disableFriendRequestAppBadgeIfNeeded] */

void FUN_1059aaa30(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d42e0();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uStack_40 = uVar2;
  _objc_retain(uVar4);
  _objc_copyWeak(auStack_48,auStack_38);
  func_0x00010bf00220(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar4);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1059aab74; end: 1059aac13;  */

void FUN_1059aab74(long param_1,undefined8 param_2)

{
  long lVar1;
  
  FUN_1059a5f54(param_2,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20));
  if ((int)param_2 != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bea8d40();
    _objc_release(lVar1);
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bdfa020();
    _objc_release(lVar1);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdfa020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1059aac14; end: 1059aad1f; -[SCNotificationUnviewedIncomingFriendsRepository _observeAndPersistFriendRequestsIfNeeded] */

void FUN_1059aac14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c282e00();
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



/* Entry: 1059aad20; end: 1059aad67;  */

void FUN_1059aad20(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be731a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059aad68; end: 1059aaedb; -[SCNotificationUnviewedIncomingFriendsRepository _persistFriendRequests:] */

void FUN_1059aad68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d42e0();
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uStack_50 = uVar2;
  _objc_retain(uVar4);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  func_0x00010bf00220(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar4);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1059aaedc; end: 1059aafa3;  */

void FUN_1059aaedc(long param_1,ulong param_2)

{
  long lVar1;
  
  FUN_1059a5f54(param_2,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20));
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  if ((param_2 & 1) == 0) {
    func_0x00010bea8d40();
    _objc_release(lVar1);
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be735e0();
  }
  else {
    func_0x00010bea8d40();
    _objc_release(lVar1);
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bdfa020();
  }
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfa020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059aafa4; end: 1059aafab; -[SCNotificationUnviewedIncomingFriendsRepository _setUnviewedIncomingFriendsAppBadgeEnabled:] */

void FUN_1059aafa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_setUnviewedIncomingFriendsAppBad_112664a60);
  return;
}



/* Entry: 1059aafac; end: 1059ab033; -[SCNotificationUnviewedIncomingFriendsRepository _deleteExtensionFile:] */

void FUN_1059aafac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126b7490;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010bfef900();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bfacbc0();
  if ((int)puVar2 != 0) {
    uStack_38 = 0;
    func_0x00010bf6bde0(puVar1,param_2,&uStack_38);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 1059ab034; end: 1059ab0e7; -[SCNotificationUnviewedIncomingFriendsRepository _persistUnviewedIncomingFriendRequests:] */

void FUN_1059ab034(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010c0b8600(param_3,param_2,&PTR___NSConcreteGlobalBlock_1108c9b18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf09780(puVar2,param_2,puVar1,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bda00(uVar3,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059ab0e8; end: 1059ab0ef;  */

void FUN_1059ab0e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 1059ab0f0; end: 1059ab173; -[SCNotificationUnviewedIncomingFriendsRepository .cxx_destruct] */

void FUN_1059ab0f0(long param_1)

{
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



/* Entry: 1059ab174; end: 1059ab277; -[SCNotificationsConfigPersister initWithCircumstanceEngine:bitmojiSettingProvider:userScopedAppGroupUserDefaults:enableCustomNotificationSound:watchDetector:] */

undefined8
FUN_1059ab174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c021520();
  puVar2 = PTR_PTR_1126c0938;
  _objc_alloc(PTR_PTR_1126c0938);
  func_0x00010c05cd80();
  _objc_release(param_5);
  func_0x00010bffe300(param_1,param_2,param_3,param_4,puVar2,param_6,puVar1,param_7);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1059ab278; end: 1059ab497; -[SCNotificationsConfigPersister initWithCircumstanceEngine:bitmojiSettingProvider:notifExtUserDefaults:enableCustomNotificationSound:performer:watchDetector:] */

undefined8 *
FUN_1059ab278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126eb250;
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
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 7) = param_6;
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    func_0x00010be73000(puVar1);
    _objc_initWeak(auStack_78,puVar1);
    uVar4 = puVar1[2];
    func_0x00010c28d760(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar2 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1059ab498; end: 1059ab4c3;  */

void FUN_1059ab498(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be73000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059ab4c4; end: 1059ab57f; -[SCNotificationsConfigPersister _persist] */

void FUN_1059ab4c4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  func_0x00010bec3fe0(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1059ab580; end: 1059ab5ab;  */

void FUN_1059ab580(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec4120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059ab5ac; end: 1059ab94b; -[SCNotificationsConfigPersister _storeNotificationExtensionConfigs] */

void FUN_1059ab5ac(ulong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  
  uVar3 = param_1;
  func_0x000106c40130();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070c1ccc();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x0001070c1d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x0001070c1ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x0001070c1ddc();
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x0001070c1f08();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x0001070c1fd0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070c1e7c();
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 8);
  func_0x0001070c1e90();
  func_0x0001070c1ea4();
  func_0x0001070c1ecc();
  func_0x0001070c1eb8();
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x0001070c1c90();
  uVar10 = *(undefined8 *)(param_1 + 8);
  func_0x0001070c1e04();
  func_0x0001070c214c();
  uVar2 = (undefined1)*(undefined8 *)(param_1 + 8);
  func_0x0001070c1e68();
  func_0x0001070c1e2c();
  func_0x0001070c1ee0();
  func_0x0001070c23dc();
  func_0x0001070c23c8();
  func_0x0001070c2490();
  uVar11 = *(undefined8 *)(param_1 + 8);
  func_0x0001070c24a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070c24bc();
  func_0x0001070c24e4();
  func_0x0001070c24f8();
  uVar12 = *(undefined8 *)(param_1 + 8);
  func_0x0001070c1db4();
  uVar13 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001008fe838();
  _objc_release(uVar13);
  func_0x0001070c2418();
  func_0x0001070c2440();
  uVar13 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070c2468();
  _objc_release(uVar13);
  puVar14 = PTR_PTR_1126c0940;
  _objc_alloc();
  uVar15 = param_1;
  func_0x00010beb5c80();
  uVar16 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar16;
  func_0x00010c13f080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0839e0();
  func_0x00010c01d920(puVar14,param_2,0,0,uVar15 & 0xffffffff,0x1e,uVar3,0,0,uVar1,uVar4,uVar5,
                      uVar12,uVar6,uVar9,uVar10,uVar2);
  _objc_release(uVar13);
  _objc_release(uVar16);
  func_0x00010c1809e0(*(undefined8 *)(param_1 + 0x20),param_2,puVar14);
  _objc_release(puVar14);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1059ab94c; end: 1059aba37; -[SCNotificationsConfigPersister _shouldShowBitmoji] */

byte FUN_1059ab94c(long param_1)

{
  long lVar1;
  byte bVar2;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c0ea0();
    _objc_release(lVar1);
    bVar2 = *(byte *)(puStack_38 + 3);
  }
  __Block_object_dispose(&uStack_40,8);
  return bVar2 & 1;
}



/* Entry: 1059aba38; end: 1059aba5f;  */

void FUN_1059aba38(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1059aba60; end: 1059abb43; -[SCNotificationsConfigPersister _storeGrapheneConfigs] */

void FUN_1059aba60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf46540(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1059abb44; end: 1059abbeb;  */

void FUN_1059abb44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1059abbec;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uStack_40 = param_2;
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1059abbec; end: 1059abc1f;  */

void FUN_1059abbec(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec4000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059abc20; end: 1059abc93; -[SCNotificationsConfigPersister _storeGrapheneConfigsWithEtag:] */

void FUN_1059abc20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c0948;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x0001070c1da0(*(undefined8 *)(param_1 + 8));
  func_0x00010c041440(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1caf20(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1059abc94; end: 1059abcf3; -[SCNotificationsConfigPersister .cxx_destruct] */

void FUN_1059abc94(long param_1)

{
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



/* Entry: 1059abcf4; end: 1059abe4b;  */

long FUN_1059abcf4(long param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf529e0();
  if (((param_1 != 0) && (param_3 != 0)) && (uVar1 != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010bfaea40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar3 = uVar1;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    if (uVar4 <= param_3) {
      param_3 = uVar4;
    }
    uVar4 = uVar3;
    func_0x00010bf529e0();
    if (param_3 < uVar4) {
      func_0x00010bf529e0(uVar3);
      uVar4 = uVar3;
      func_0x00010c25e980(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x000100504554();
      func_0x00010c12bf00(param_1);
      uVar6 = uVar5;
      func_0x00010bf529e0(uVar5);
      param_4 = param_4 - uVar6;
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return param_4;
}



/* Entry: 1059abe4c; end: 1059ac013;  */

undefined * FUN_1059abe4c(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_2;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar4 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar2);
  puVar1 = puVar3;
  if (((ulong)puVar4 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  puVar5 = puVar1;
  func_0x00010bf4b900();
  _objc_release(puVar1);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  func_0x00010bf64de0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010bf64de0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar5;
  func_0x00010bf433a0(puVar5);
  _objc_release(puVar1);
  _objc_release(puVar5);
  return puVar2;
}



/* Entry: 1059ac014; end: 1059ac05b;  */

void FUN_1059ac014(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c134680(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059ac05c; end: 1059ac22f;  */

void FUN_1059ac05c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  lVar4 = param_1;
  func_0x00010bf529e0();
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar4 == 0) {
    uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110e12cb8;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_3 = (long)puVar3;
    _objc_release(puVar2);
    lVar4 = 0;
  }
  else {
    uStack_88 = 0;
    uStack_78 = 0x3032000000;
    pcStack_70 = FUN_1059ac230;
    uStack_68 = 0x1059ac240;
    uStack_60 = 0;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1059ac248;
    puStack_a0 = &UNK_1108c9c90;
    puStack_80 = &uStack_88;
    _objc_retain(param_2);
    lVar4 = param_1;
    uStack_98 = param_2;
    puStack_90 = &uStack_88;
    func_0x000100504554(param_1,&puStack_b8);
    lVar1 = puStack_80[5];
    if (lVar1 != 0) {
      _objc_retainAutorelease();
      *param_3 = lVar1;
    }
    _objc_release(uStack_98);
    __Block_object_dispose(&uStack_88,8);
    _objc_release(uStack_60);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
    return;
  }
  ___stack_chk_fail();
  lVar4 = 8;
  __Block_object_dispose(&uStack_88);
  __Unwind_Resume();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  return;
}



/* Entry: 1059ac230; end: 1059ac247;  */

void FUN_1059ac230(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1059ac248; end: 1059acbab;  */

undefined ** FUN_1059ac248(long param_1,undefined **param_2,undefined **param_3,undefined **param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  undefined **unaff_x21;
  undefined *puVar7;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined *unaff_x28;
  undefined **ppuVar12;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined **ppuStack_2b0;
  undefined *puStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined1 **ppuStack_290;
  code *pcStack_288;
  undefined **ppuStack_278;
  undefined8 uStack_270;
  undefined **ppuStack_268;
  undefined8 uStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined *puStack_180;
  long lStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined *puStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined **ppuStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar10 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  puVar7 = *(undefined **)(lVar10 + 0x28);
  _objc_retain(param_2);
  _objc_retain(uVar1);
  if (param_2 == (undefined **)0x0) {
    ppuVar8 = (undefined **)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
    ppuVar8 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if (((ulong)ppuVar8 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = param_2;
      func_0x00010c071ae0();
      _objc_release(puVar2);
      if ((int)unaff_x23 != 0) goto LAB_1059ac2e8;
      ppuVar8 = param_2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      ppuVar3 = ppuVar8;
      _objc_opt_isKindOfClass(ppuVar8,puVar2);
      unaff_x21 = ppuVar8;
      if (((ulong)ppuVar3 & 1) == 0) {
        unaff_x21 = (undefined **)0x0;
      }
      _objc_retain(unaff_x21);
      _objc_release(ppuVar8);
      ppuVar8 = param_2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      ppuVar3 = ppuVar8;
      _objc_opt_isKindOfClass(ppuVar8,puVar2);
      unaff_x23 = ppuVar8;
      if (((ulong)ppuVar3 & 1) == 0) {
        unaff_x23 = (undefined **)0x0;
      }
      _objc_retain(unaff_x23);
      _objc_release(ppuVar8);
      unaff_x25 = param_2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      ppuVar8 = unaff_x25;
      _objc_opt_isKindOfClass(unaff_x25,puVar2);
      unaff_x24 = unaff_x25;
      if (((ulong)ppuVar8 & 1) == 0) {
        unaff_x24 = (undefined **)0x0;
      }
      _objc_retain(unaff_x24);
      _objc_release(unaff_x25);
      ppuVar8 = unaff_x21;
      func_0x00010c08fa60();
      if (ppuVar8 == (undefined **)0x0) {
        uStack_80 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuStack_78 = &PTR____CFConstantStringClassReference_110e12bb8;
LAB_1059ac4cc:
        puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
        unaff_x28 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        param_3 = &PTR____CFConstantStringClassReference_110e12b78;
        param_4 = (undefined **)0x0;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        ppuVar8 = (undefined **)0x0;
      }
      else {
        ppuVar8 = unaff_x21;
        func_0x00010c0720c0();
        if ((((ulong)ppuVar8 & 1) != 0) ||
           (ppuVar8 = unaff_x21, func_0x00010c0720c0(), (int)ppuVar8 != 0)) {
          uStack_80 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          ppuStack_78 = &PTR____CFConstantStringClassReference_110e12bd8;
          goto LAB_1059ac4cc;
        }
        ppuVar8 = unaff_x23;
        func_0x00010c08fa60();
        puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
        if (ppuVar8 == (undefined **)0x0) {
          uStack_80 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          ppuStack_78 = &PTR____CFConstantStringClassReference_110e12bf8;
          puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          _objc_release(puVar7);
          puVar7 = puVar2;
        }
        ppuStack_d0 = unaff_x24;
        ppuStack_98 = unaff_x23;
        func_0x00010c08fa60();
        puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
        if (unaff_x24 == (undefined **)0x0) {
          uStack_90 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          ppuStack_88 = &PTR____CFConstantStringClassReference_110e12c18;
          puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          _objc_release(puVar7);
          puVar7 = puVar2;
        }
        ppuVar3 = param_2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar4 = ppuVar3;
        _objc_opt_isKindOfClass(ppuVar3,puVar2);
        ppuVar8 = ppuVar3;
        if (((ulong)ppuVar4 & 1) == 0) {
          ppuVar8 = (undefined **)0x0;
        }
        _objc_retain(ppuVar8);
        _objc_release(ppuVar3);
        ppuVar4 = param_2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar5 = ppuVar4;
        _objc_opt_isKindOfClass(ppuVar4,puVar2);
        ppuVar3 = ppuVar4;
        if (((ulong)ppuVar5 & 1) == 0) {
          ppuVar3 = (undefined **)0x0;
        }
        _objc_retain(ppuVar3);
        _objc_release(ppuVar4);
        ppuVar5 = param_2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar9 = ppuVar5;
        _objc_opt_isKindOfClass(ppuVar5,puVar2);
        ppuVar4 = ppuVar5;
        if (((ulong)ppuVar9 & 1) == 0) {
          ppuVar4 = (undefined **)0x0;
        }
        _objc_retain(ppuVar4);
        _objc_release(ppuVar5);
        ppuVar9 = param_2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar12 = ppuVar9;
        _objc_opt_isKindOfClass(ppuVar9,puVar2);
        ppuVar5 = ppuVar9;
        if (((ulong)ppuVar12 & 1) == 0) {
          ppuVar5 = (undefined **)0x0;
        }
        _objc_retain(ppuVar5);
        _objc_release(ppuVar9);
        ppuVar9 = ppuVar8;
        func_0x00010c08fa60();
        ppuStack_a0 = (undefined **)0x0;
        if (ppuVar9 != (undefined **)0x0) {
          ppuStack_a0 = ppuVar8;
        }
        _objc_retain();
        _objc_release(ppuVar8);
        ppuVar8 = ppuVar3;
        func_0x00010c08fa60();
        ppuStack_a8 = (undefined **)0x0;
        if (ppuVar8 != (undefined **)0x0) {
          ppuStack_a8 = ppuVar3;
        }
        _objc_retain();
        _objc_release(ppuVar3);
        ppuVar8 = ppuVar4;
        func_0x00010c08fa60();
        ppuStack_b0 = (undefined **)0x0;
        if (ppuVar8 != (undefined **)0x0) {
          ppuStack_b0 = ppuVar4;
        }
        _objc_retain();
        _objc_release(ppuVar4);
        ppuVar8 = ppuVar5;
        func_0x00010c08fa60();
        ppuStack_b8 = (undefined **)0x0;
        if (ppuVar8 != (undefined **)0x0) {
          ppuStack_b8 = ppuVar5;
        }
        _objc_retain();
        _objc_release(ppuVar5);
        ppuVar3 = param_2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar4 = ppuVar3;
        _objc_opt_isKindOfClass(ppuVar3,puVar2);
        ppuVar8 = ppuVar3;
        if (((ulong)ppuVar4 & 1) == 0) {
          ppuVar8 = (undefined **)0x0;
        }
        _objc_retain(ppuVar8);
        _objc_release(ppuVar3);
        ppuVar4 = param_2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar5 = ppuVar4;
        _objc_opt_isKindOfClass(ppuVar4,puVar2);
        ppuVar3 = ppuVar4;
        if (((ulong)ppuVar5 & 1) == 0) {
          ppuVar3 = (undefined **)0x0;
        }
        _objc_retain(ppuVar3);
        _objc_release(ppuVar4);
        ppuVar5 = param_2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar9 = ppuVar5;
        _objc_opt_isKindOfClass(ppuVar5,puVar2);
        ppuVar4 = ppuVar5;
        if (((ulong)ppuVar9 & 1) == 0) {
          ppuVar4 = (undefined **)0x0;
        }
        _objc_retain(ppuVar4);
        _objc_release(ppuVar5);
        ppuVar5 = ppuVar8;
        func_0x00010c08fa60();
        ppuStack_c0 = (undefined **)0x0;
        if (ppuVar5 != (undefined **)0x0) {
          ppuStack_c0 = ppuVar8;
        }
        _objc_retain();
        _objc_release(ppuVar8);
        ppuVar8 = ppuVar3;
        func_0x00010c08fa60();
        ppuStack_d8 = (undefined **)0x0;
        if (ppuVar8 != (undefined **)0x0) {
          ppuStack_d8 = ppuVar3;
        }
        _objc_retain();
        _objc_release(ppuVar3);
        ppuVar8 = ppuVar4;
        func_0x00010c08fa60();
        ppuStack_e0 = (undefined **)0x0;
        if (ppuVar8 != (undefined **)0x0) {
          ppuStack_e0 = ppuVar4;
        }
        _objc_retain();
        _objc_release(ppuVar4);
        ppuVar3 = param_2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar4 = ppuVar3;
        _objc_opt_isKindOfClass(ppuVar3,puVar2);
        ppuVar8 = ppuVar3;
        if (((ulong)ppuVar4 & 1) == 0) {
          ppuVar8 = (undefined **)0x0;
        }
        _objc_retain(ppuVar8);
        _objc_release(ppuVar3);
        ppuVar4 = param_2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar5 = ppuVar4;
        _objc_opt_isKindOfClass(ppuVar4,puVar2);
        ppuVar3 = ppuVar4;
        if (((ulong)ppuVar5 & 1) == 0) {
          ppuVar3 = (undefined **)0x0;
        }
        _objc_retain(ppuVar3);
        _objc_release(ppuVar4);
        unaff_x28 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c067fc0(ppuVar8);
        _objc_release(ppuVar8);
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c067fc0(ppuVar3);
        _objc_release(ppuVar3);
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = (undefined **)PTR_PTR_1126c0950;
        puStack_c8 = puVar2;
        _objc_alloc();
        _objc_retain(uVar1);
        uVar11 = 0;
        func_0x00010c0720c0();
        if ((uVar11 & 1) == 0) {
          func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110e12978);
        }
        _objc_release(uVar1);
        puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
        _objc_opt_new();
        puStack_e8 = puVar2;
        func_0x00010c26f320();
        unaff_x24 = ppuStack_d0;
        unaff_x25 = ppuStack_d8;
        ppuVar3 = ppuStack_e0;
        ppuStack_f8 = ppuStack_e0;
        ppuStack_108 = ppuStack_c0;
        ppuStack_100 = ppuStack_d8;
        ppuStack_118 = ppuStack_b8;
        puStack_110 = puStack_c8;
        ppuStack_120 = ppuStack_b0;
        param_3 = unaff_x21;
        param_4 = ppuStack_98;
        puStack_f0 = unaff_x28;
        func_0x00010c05b620();
        _objc_release(ppuVar3);
        _objc_release(unaff_x25);
        _objc_release(ppuStack_c0);
        _objc_release(ppuStack_b8);
        _objc_release(ppuStack_b0);
        _objc_release(ppuStack_a8);
        _objc_release(ppuStack_a0);
        unaff_x23 = ppuStack_98;
        _objc_release(puStack_e8);
        _objc_release(puStack_c8);
      }
      _objc_release(unaff_x28);
      _objc_release(unaff_x24);
      _objc_release(unaff_x23);
    }
    else {
LAB_1059ac2e8:
      puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
      uStack_80 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_78 = &PTR____CFConstantStringClassReference_110e12b98;
      unaff_x21 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      param_3 = &PTR____CFConstantStringClassReference_110e12b78;
      param_4 = (undefined **)0x0;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      ppuVar8 = (undefined **)0x0;
    }
    _objc_release(unaff_x21);
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_retain(puVar7);
  ppuVar3 = *(undefined ***)(lVar10 + 0x28);
  *(undefined **)(lVar10 + 0x28) = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_128 = FUN_1059acbac;
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_180 = unaff_x28;
  lStack_178 = lVar10;
  ppuStack_170 = ppuVar8;
  ppuStack_168 = unaff_x25;
  ppuStack_160 = unaff_x24;
  ppuStack_158 = unaff_x23;
  puStack_150 = puVar7;
  ppuStack_148 = unaff_x21;
  uStack_140 = uVar1;
  ppuStack_138 = param_2;
  puStack_130 = &stack0xfffffffffffffff0;
  if (param_3 == (undefined **)0x0) {
    ppuVar4 = (undefined **)0x0;
    ppuVar8 = (undefined **)0x0;
  }
  else {
    _objc_retain(param_3);
    ppuVar8 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    ppuVar3 = ppuVar8;
    _objc_opt_isKindOfClass(ppuVar8,puVar7);
    param_2 = ppuVar8;
    if (((ulong)ppuVar3 & 1) == 0) {
      param_2 = (undefined **)0x0;
    }
    _objc_retain(param_2);
    _objc_release(ppuVar8);
    ppuVar8 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    ppuVar4 = ppuVar8;
    _objc_opt_isKindOfClass(ppuVar8,puVar7);
    ppuVar3 = ppuVar8;
    if (((ulong)ppuVar4 & 1) == 0) {
      ppuVar3 = (undefined **)0x0;
    }
    _objc_retain(ppuVar3);
    _objc_release(ppuVar8);
    ppuVar8 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    ppuVar4 = ppuVar8;
    _objc_opt_isKindOfClass(ppuVar8,puVar7);
    ppuVar5 = ppuVar8;
    if (((ulong)ppuVar4 & 1) == 0) {
      ppuVar5 = (undefined **)0x0;
    }
    _objc_retain(ppuVar5);
    _objc_release(ppuVar8);
    ppuVar8 = ppuVar3;
    func_0x00010bf529e0();
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar8 = param_2;
      func_0x00010c08fa60();
      puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
      if (ppuVar8 == (undefined **)0x0) {
        uStack_270 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuStack_268 = &PTR____CFConstantStringClassReference_110e12cf8;
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = &PTR____CFConstantStringClassReference_110e12b78;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_4 = puVar7;
        _objc_release(puVar2);
        ppuVar8 = (undefined **)0x0;
      }
      else {
        _objc_retain(ppuVar5);
        _objc_retain(param_2);
        ppuVar8 = param_2;
        func_0x00010c08fa60();
        puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
        if (ppuVar8 == (undefined **)0x0) {
          uStack_1d0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          ppuStack_250 = &PTR____CFConstantStringClassReference_110e12c38;
          ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          ppuVar9 = (undefined **)0x0;
          *param_4 = puVar7;
        }
        else {
          ppuVar8 = param_2;
          func_0x00010bf64920();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar8;
          func_0x00010c08fa60();
          puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
          if (ppuVar4 == (undefined **)0x0) {
            uStack_1d0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
            ppuStack_250 = &PTR____CFConstantStringClassReference_110e12c58;
            ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            ppuVar9 = (undefined **)0x0;
            *param_4 = puVar7;
          }
          else {
            ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
            func_0x00010bdc1900();
            _objc_retainAutoreleasedReturnValue();
            if (*param_4 == (undefined *)0x0) {
              puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
              _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
              ppuVar9 = ppuVar4;
              _objc_opt_isKindOfClass(ppuVar4,puVar7);
              ppuVar12 = ppuVar4;
              if (((ulong)ppuVar9 & 1) == 0) {
                ppuVar12 = (undefined **)0x0;
              }
              _objc_retain(ppuVar12);
              if (ppuVar12 == (undefined **)0x0) {
LAB_1059acffc:
                puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
                uStack_1d0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
                ppuStack_250 = &PTR____CFConstantStringClassReference_110e12c78;
                puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf99240();
                _objc_retainAutoreleasedReturnValue();
                _objc_autorelease();
                *param_4 = puVar7;
                _objc_release(puVar2);
                ppuVar9 = (undefined **)0x0;
              }
              else {
                puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
                _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
                ppuVar9 = ppuVar4;
                _objc_opt_isKindOfClass(ppuVar4,puVar7);
                if (((ulong)ppuVar9 & 1) == 0) goto LAB_1059acffc;
                in_b0 = 0;
                in_register_00005001 = 0;
                in_register_00005002 = 0;
                in_register_00005003 = 0;
                in_register_00005004 = 0;
                in_register_00005005 = 0;
                in_register_00005006 = 0;
                in_register_00005007 = 0;
                uStack_1a8 = 0;
                uStack_1b0 = 0;
                uStack_198 = 0;
                uStack_1a0 = 0;
                lStack_1c8 = 0;
                uStack_1d0 = 0;
                uStack_1b8 = 0;
                plStack_1c0 = (long *)0x0;
                ppuStack_278 = ppuVar12;
                _objc_retain(ppuVar4);
                ppuVar9 = ppuVar4;
                func_0x00010bf52a60();
                if (ppuVar9 != (undefined **)0x0) {
                  lVar10 = *plStack_1c0;
                  do {
                    ppuVar12 = (undefined **)0x0;
                    do {
                      if (*plStack_1c0 != lVar10) {
                        _objc_enumerationMutation(ppuVar4);
                      }
                      uVar11 = *(ulong *)(lStack_1c8 + (long)ppuVar12 * 8);
                      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                      _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                      _objc_opt_isKindOfClass(uVar11,puVar7);
                      puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
                      if ((uVar11 & 1) == 0) {
                        uStack_260 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
                        ppuStack_258 = &PTR____CFConstantStringClassReference_110e12c98;
                        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010bf99240();
                        _objc_retainAutoreleasedReturnValue();
                        _objc_autorelease();
                        *param_4 = puVar7;
                        _objc_release(puVar2);
                        _objc_release(ppuVar4);
                        ppuVar9 = (undefined **)0x0;
                        ppuVar12 = ppuStack_278;
                        goto LAB_1059ad100;
                      }
                      ppuVar12 = (undefined **)((long)ppuVar12 + 1);
                    } while (ppuVar9 != ppuVar12);
                    ppuVar9 = ppuVar4;
                    func_0x00010bf52a60();
                  } while (ppuVar9 != (undefined **)0x0);
                }
                _objc_release(ppuVar4);
                _objc_retain(ppuVar4);
                ppuVar12 = ppuStack_278;
                ppuVar9 = ppuStack_278;
              }
LAB_1059ad100:
              _objc_release(ppuVar12);
            }
            else {
              ppuVar9 = (undefined **)0x0;
            }
          }
          _objc_release(ppuVar4);
        }
        _objc_release(ppuVar8);
        _objc_release(param_2);
        ppuVar8 = ppuVar9;
        func_0x00010bf529e0();
        puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
        if ((ppuVar8 == (undefined **)0x0) && (*param_4 == (undefined *)0x0)) {
          uStack_1d0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          ppuStack_250 = &PTR____CFConstantStringClassReference_110e12cd8;
          puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = &PTR____CFConstantStringClassReference_110e12b78;
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *param_4 = puVar7;
          _objc_release(puVar2);
          ppuVar8 = (undefined **)0x0;
        }
        else {
          ppuVar8 = ppuVar9;
          FUN_1059ac05c(ppuVar9,ppuVar5);
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = param_4;
        }
        _objc_release(ppuVar9);
        _objc_release(ppuVar5);
      }
    }
    else {
      ppuVar8 = ppuVar3;
      FUN_1059ac05c(ppuVar3,ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = param_4;
    }
    _objc_release(ppuVar5);
    _objc_release(ppuVar3);
    ppuVar3 = param_2;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_190) {
    ___stack_chk_fail();
    pppuVar6 = &ppuStack_2b0;
    pcStack_288 = FUN_1059ad238;
    ppuStack_2a0 = ppuVar8;
    ppuStack_298 = param_2;
    ppuStack_290 = &puStack_130;
    _objc_retain(ppuVar4);
    puStack_2a8 = PTR_PTR_1126eb258;
    ppuStack_2b0 = ppuVar3;
    _objc_msgSendSuper2(&ppuStack_2b0,PTR_s_init_1125d9248);
    if (pppuVar6 != (undefined ***)0x0) {
      ppuVar8 = ppuVar4;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)pppuVar6[1];
      pppuVar6[1] = ppuVar8;
      _objc_release(puVar7);
      ppuVar8 = ppuVar4;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)pppuVar6[2];
      pppuVar6[2] = ppuVar8;
      _objc_release(puVar7);
      ppuVar8 = ppuVar4;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)pppuVar6[3];
      pppuVar6[3] = ppuVar8;
      _objc_release(puVar7);
      ppuVar8 = ppuVar4;
      func_0x00010bf66f40();
      pppuVar6[4] = ppuVar8;
      ppuVar8 = ppuVar4;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)pppuVar6[5];
      pppuVar6[5] = ppuVar8;
      _objc_release(puVar7);
      ppuVar8 = ppuVar4;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)pppuVar6[6];
      pppuVar6[6] = ppuVar8;
      _objc_release(puVar7);
      ppuVar8 = ppuVar4;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)pppuVar6[7];
      pppuVar6[7] = ppuVar8;
      _objc_release(puVar7);
      ppuVar8 = ppuVar4;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)pppuVar6[8];
      pppuVar6[8] = ppuVar8;
      _objc_release(puVar7);
      ppuVar8 = ppuVar4;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)pppuVar6[9];
      pppuVar6[9] = ppuVar8;
      _objc_release(puVar7);
      ppuVar8 = ppuVar4;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)pppuVar6[10];
      pppuVar6[10] = ppuVar8;
      _objc_release(puVar7);
      ppuVar8 = ppuVar4;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)pppuVar6[0xb];
      pppuVar6[0xb] = ppuVar8;
      _objc_release(puVar7);
      ppuVar8 = ppuVar4;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)pppuVar6[0xc];
      pppuVar6[0xc] = ppuVar8;
      _objc_release(puVar7);
      ppuVar8 = ppuVar4;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)pppuVar6[0xd];
      pppuVar6[0xd] = ppuVar8;
      _objc_release(puVar7);
      func_0x00010bf66da0(ppuVar4);
      pppuVar6[0xe] =
           (undefined **)
           CONCAT17(in_register_00005007,
                    CONCAT16(in_register_00005006,
                             CONCAT15(in_register_00005005,
                                      CONCAT14(in_register_00005004,
                                               CONCAT13(in_register_00005003,
                                                        CONCAT12(in_register_00005002,
                                                                 CONCAT11(in_register_00005001,in_b0
                                                                         )))))));
    }
    _objc_release(ppuVar4);
    return (undefined **)pppuVar6;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
  return ppuVar8;
}



/* Entry: 1059acbac; end: 1059ad237; +[SCFriendingNotificationSnapchatterHelper SCExtractNotificationSnapchattersFromNotificationPayload:error:] */

undefined1 *
FUN_1059acbac(undefined *param_1,undefined8 param_2,undefined *param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *unaff_x19;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined8 uStack_b0;
  long lStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    ppuVar8 = (undefined **)0x0;
    goto LAB_1059ad178;
  }
  _objc_retain(param_3);
  puVar10 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar2 = puVar10;
  _objc_opt_isKindOfClass(puVar10,puVar1);
  unaff_x19 = puVar10;
  if (((ulong)puVar2 & 1) == 0) {
    unaff_x19 = (undefined *)0x0;
  }
  _objc_retain(unaff_x19);
  _objc_release(puVar10);
  puVar10 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar2 = puVar10;
  _objc_opt_isKindOfClass(puVar10,puVar1);
  puVar1 = puVar10;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar10);
  puVar10 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar3 = puVar10;
  _objc_opt_isKindOfClass(puVar10,puVar2);
  puVar2 = puVar10;
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar10);
  puVar10 = puVar1;
  func_0x00010bf529e0();
  if (puVar10 == (undefined *)0x0) {
    puVar3 = unaff_x19;
    func_0x00010c08fa60();
    puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar3 == (undefined *)0x0) {
      uStack_150 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_148 = &PTR____CFConstantStringClassReference_110e12cf8;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = &PTR____CFConstantStringClassReference_110e12b78;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_4 = puVar10;
      _objc_release(puVar3);
      puVar10 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar2);
      _objc_retain(unaff_x19);
      puVar3 = unaff_x19;
      func_0x00010c08fa60();
      puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
      if (puVar3 == (undefined *)0x0) {
        uStack_b0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuStack_130 = &PTR____CFConstantStringClassReference_110e12c38;
        puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        puVar12 = (undefined *)0x0;
        *param_4 = puVar10;
      }
      else {
        puVar3 = unaff_x19;
        func_0x00010bf64920();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar3;
        func_0x00010c08fa60();
        puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
        if (puVar12 == (undefined *)0x0) {
          uStack_b0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          ppuStack_130 = &PTR____CFConstantStringClassReference_110e12c58;
          puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          puVar12 = (undefined *)0x0;
          *param_4 = puVar10;
        }
        else {
          puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
          func_0x00010bdc1900();
          _objc_retainAutoreleasedReturnValue();
          if (*param_4 == (undefined *)0x0) {
            puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
            _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
            puVar12 = puVar4;
            _objc_opt_isKindOfClass(puVar4,puVar10);
            puVar10 = puVar4;
            if (((ulong)puVar12 & 1) == 0) {
              puVar10 = (undefined *)0x0;
            }
            _objc_retain(puVar10);
            if (puVar10 == (undefined *)0x0) {
LAB_1059acffc:
              puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
              uStack_b0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
              ppuStack_130 = &PTR____CFConstantStringClassReference_110e12c78;
              puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf99240();
              _objc_retainAutoreleasedReturnValue();
              _objc_autorelease();
              *param_4 = puVar12;
              _objc_release(puVar5);
              puVar12 = (undefined *)0x0;
            }
            else {
              puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
              _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
              puVar5 = puVar4;
              _objc_opt_isKindOfClass(puVar4,puVar12);
              if (((ulong)puVar5 & 1) == 0) goto LAB_1059acffc;
              in_b0 = 0;
              in_register_00005001 = 0;
              in_register_00005002 = 0;
              in_register_00005003 = 0;
              in_register_00005004 = 0;
              in_register_00005005 = 0;
              in_register_00005006 = 0;
              in_register_00005007 = 0;
              uStack_88 = 0;
              uStack_90 = 0;
              uStack_78 = 0;
              uStack_80 = 0;
              lStack_a8 = 0;
              uStack_b0 = 0;
              uStack_98 = 0;
              plStack_a0 = (long *)0x0;
              puStack_158 = puVar10;
              _objc_retain(puVar4);
              puVar10 = puVar4;
              func_0x00010bf52a60();
              if (puVar10 != (undefined *)0x0) {
                lVar11 = *plStack_a0;
                do {
                  puVar12 = (undefined *)0x0;
                  do {
                    if (*plStack_a0 != lVar11) {
                      _objc_enumerationMutation(puVar4);
                    }
                    uVar13 = *(ulong *)(lStack_a8 + (long)puVar12 * 8);
                    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                    _objc_opt_isKindOfClass(uVar13,puVar5);
                    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
                    if ((uVar13 & 1) == 0) {
                      uStack_140 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
                      ppuStack_138 = &PTR____CFConstantStringClassReference_110e12c98;
                      puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010bf99240();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_autorelease();
                      *param_4 = puVar5;
                      _objc_release(puVar10);
                      _objc_release(puVar4);
                      puVar12 = (undefined *)0x0;
                      puVar10 = puStack_158;
                      goto LAB_1059ad100;
                    }
                    puVar12 = puVar12 + 1;
                  } while (puVar10 != puVar12);
                  puVar10 = puVar4;
                  func_0x00010bf52a60();
                } while (puVar10 != (undefined *)0x0);
              }
              _objc_release(puVar4);
              _objc_retain(puVar4);
              puVar10 = puStack_158;
              puVar12 = puStack_158;
            }
LAB_1059ad100:
            _objc_release(puVar10);
          }
          else {
            puVar12 = (undefined *)0x0;
          }
        }
        _objc_release(puVar4);
      }
      _objc_release(puVar3);
      _objc_release(unaff_x19);
      puVar3 = puVar12;
      func_0x00010bf529e0();
      puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
      if ((puVar3 == (undefined *)0x0) && (*param_4 == (undefined *)0x0)) {
        uStack_b0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuStack_130 = &PTR____CFConstantStringClassReference_110e12cd8;
        puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = &PTR____CFConstantStringClassReference_110e12b78;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_4 = puVar10;
        _objc_release(puVar3);
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar10 = puVar12;
        FUN_1059ac05c(puVar12,puVar2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = param_4;
      }
      _objc_release(puVar12);
      _objc_release(puVar2);
    }
  }
  else {
    puVar10 = puVar1;
    FUN_1059ac05c(puVar1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = param_4;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  param_1 = unaff_x19;
  _objc_release();
LAB_1059ad178:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return puVar10;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_190;
  pcStack_168 = FUN_1059ad238;
  puStack_180 = puVar10;
  puStack_178 = unaff_x19;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar8);
  puStack_188 = PTR_PTR_1126eb258;
  puStack_190 = param_1;
  _objc_msgSendSuper2(&puStack_190,PTR_s_init_1125d9248);
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar7 = ppuVar8;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)ppuVar6 + 8);
    *(undefined ***)((long)ppuVar6 + 8) = ppuVar7;
    _objc_release(uVar9);
    ppuVar7 = ppuVar8;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)ppuVar6 + 0x10);
    *(undefined ***)((long)ppuVar6 + 0x10) = ppuVar7;
    _objc_release(uVar9);
    ppuVar7 = ppuVar8;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)ppuVar6 + 0x18);
    *(undefined ***)((long)ppuVar6 + 0x18) = ppuVar7;
    _objc_release(uVar9);
    ppuVar7 = ppuVar8;
    func_0x00010bf66f40();
    *(undefined ***)((long)ppuVar6 + 0x20) = ppuVar7;
    ppuVar7 = ppuVar8;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)ppuVar6 + 0x28);
    *(undefined ***)((long)ppuVar6 + 0x28) = ppuVar7;
    _objc_release(uVar9);
    ppuVar7 = ppuVar8;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)ppuVar6 + 0x30);
    *(undefined ***)((long)ppuVar6 + 0x30) = ppuVar7;
    _objc_release(uVar9);
    ppuVar7 = ppuVar8;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)ppuVar6 + 0x38);
    *(undefined ***)((long)ppuVar6 + 0x38) = ppuVar7;
    _objc_release(uVar9);
    ppuVar7 = ppuVar8;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)ppuVar6 + 0x40);
    *(undefined ***)((long)ppuVar6 + 0x40) = ppuVar7;
    _objc_release(uVar9);
    ppuVar7 = ppuVar8;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)ppuVar6 + 0x48);
    *(undefined ***)((long)ppuVar6 + 0x48) = ppuVar7;
    _objc_release(uVar9);
    ppuVar7 = ppuVar8;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)ppuVar6 + 0x50);
    *(undefined ***)((long)ppuVar6 + 0x50) = ppuVar7;
    _objc_release(uVar9);
    ppuVar7 = ppuVar8;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)ppuVar6 + 0x58);
    *(undefined ***)((long)ppuVar6 + 0x58) = ppuVar7;
    _objc_release(uVar9);
    ppuVar7 = ppuVar8;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)ppuVar6 + 0x60);
    *(undefined ***)((long)ppuVar6 + 0x60) = ppuVar7;
    _objc_release(uVar9);
    ppuVar7 = ppuVar8;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)ppuVar6 + 0x68);
    *(undefined ***)((long)ppuVar6 + 0x68) = ppuVar7;
    _objc_release(uVar9);
    func_0x00010bf66da0(ppuVar8);
    *(ulong *)((long)ppuVar6 + 0x70) =
         CONCAT17(in_register_00005007,
                  CONCAT16(in_register_00005006,
                           CONCAT15(in_register_00005005,
                                    CONCAT14(in_register_00005004,
                                             CONCAT13(in_register_00005003,
                                                      CONCAT12(in_register_00005002,
                                                               CONCAT11(in_register_00005001,in_b0))
                                                     )))));
  }
  _objc_release(ppuVar8);
  return (undefined1 *)ppuVar6;
}



/* Entry: 1059ad238; end: 1059ad49f; -[SCFriendingNotificationSnapchatter initWithCoder:] */

undefined1 *
FUN_1059ad238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1126eb258;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    _objc_release(uVar3);
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x70) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1059ad4a0; end: 1059ad74b; -[SCFriendingNotificationSnapchatter initWithUserId:mutableName:displayName:notificationType:bitmojiAvatarId:bitmojiSelfieId:bitmojiSceneId:bitmojiBackgroundId:isFromMyContact:suggestReason:abbreviatedSuggestReason:suggestedToken:isViewed:processingTimestamp:] */

undefined8 *
FUN_1059ad4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain();
  puStack_78 = PTR_PTR_1126eb258;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    puVar1[4] = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    puVar1[0xe] = param_1;
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 1059ad74c; end: 1059ad76f; -[SCFriendingNotificationSnapchatter copyWithZone:] */

undefined8 FUN_1059ad74c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1059ad770; end: 1059ad8bf; -[SCFriendingNotificationSnapchatter encodeWithCoder:] */

void FUN_1059ad770(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110de81d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e12d18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110de8238);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110e12d38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110de8298);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110de82b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110de82f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110de8318);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110e12d58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110e12d78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110e12d98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110e12db8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110e12dd8);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x70),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110e12df8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059ad8c0; end: 1059ad9db; -[SCFriendingNotificationSnapchatter hash] */

undefined8 * FUN_1059ad8c0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_90 = uVar3;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x20);
  uStack_78 = *(undefined8 *)(param_1 + 0x28);
  lStack_80 = -lVar6;
  if (-1 < lVar6) {
    lStack_80 = lVar6;
  }
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x70) + *(ulong *)(param_1 + 0x70) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar4 = &uStack_98;
  uStack_38 = uVar3;
  func_0x000100505190(puVar4,0xe);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_1059adb90:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1059adb9c;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && (puVar4[4] == param_3[4])) {
      dVar10 = ABS((double)puVar4[0xe] - (double)param_3[0xe]);
      dVar9 = ABS((double)puVar4[0xe] + (double)param_3[0xe]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((((((bVar1) &&
             ((lVar6 = puVar4[1], lVar6 == param_3[1] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
            && ((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0))
               )) && ((((lVar6 = puVar4[3], lVar6 == param_3[3] ||
                        (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                       ((lVar6 = puVar4[5], lVar6 == param_3[5] ||
                        (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                      ((lVar6 = puVar4[6], lVar6 == param_3[6] ||
                       (func_0x00010c071ae0(), (int)lVar6 != 0)))))) &&
          ((lVar6 = puVar4[7], lVar6 == param_3[7] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         ((((lVar6 = puVar4[8], lVar6 == param_3[8] || (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
           ((lVar6 = puVar4[9], lVar6 == param_3[9] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
          && ((((lVar6 = puVar4[10], lVar6 == param_3[10] ||
                (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
               ((lVar6 = puVar4[0xb], lVar6 == param_3[0xb] ||
                (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
              ((lVar6 = puVar4[0xc], lVar6 == param_3[0xc] ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)))))))) {
        puVar8 = (undefined8 *)puVar4[0xd];
        if (puVar8 != (undefined8 *)param_3[0xd]) {
          func_0x00010c071ae0();
          goto LAB_1059adb9c;
        }
        goto LAB_1059adb90;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_1059adb9c:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 1059ad9dc; end: 1059adbb7; -[SCFriendingNotificationSnapchatter isEqual:] */

long FUN_1059ad9dc(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1059adb90:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1059adb9c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) {
      dVar6 = ABS(*(double *)(param_1 + 0x70) - *(double *)(param_3 + 0x70));
      dVar5 = ABS(*(double *)(param_1 + 0x70) + *(double *)(param_3 + 0x70)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((((((bVar1) &&
             ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
             ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))))) &&
          ((lVar4 = *(long *)(param_1 + 0x38), lVar4 == *(long *)(param_3 + 0x38) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((((lVar4 = *(long *)(param_1 + 0x40), lVar4 == *(long *)(param_3 + 0x40) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
           ((lVar4 = *(long *)(param_1 + 0x48), lVar4 == *(long *)(param_3 + 0x48) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((((lVar4 = *(long *)(param_1 + 0x50), lVar4 == *(long *)(param_3 + 0x50) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
            ((lVar4 = *(long *)(param_1 + 0x58), lVar4 == *(long *)(param_3 + 0x58) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x60), lVar4 == *(long *)(param_3 + 0x60) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))))))) {
        lVar4 = *(long *)(param_1 + 0x68);
        if (lVar4 != *(long *)(param_3 + 0x68)) {
          func_0x00010c071ae0();
          goto LAB_1059adb9c;
        }
        goto LAB_1059adb90;
      }
    }
    lVar4 = 0;
  }
LAB_1059adb9c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1059adbb8; end: 1059adbbf; -[SCFriendingNotificationSnapchatter userId] */

undefined8 FUN_1059adbb8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1059adbc0; end: 1059adbc7; -[SCFriendingNotificationSnapchatter mutableName] */

undefined8 FUN_1059adbc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1059adbc8; end: 1059adbcf; -[SCFriendingNotificationSnapchatter displayName] */

undefined8 FUN_1059adbc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1059adbd0; end: 1059adbd7; -[SCFriendingNotificationSnapchatter notificationType] */

undefined8 FUN_1059adbd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1059adbd8; end: 1059adbdf; -[SCFriendingNotificationSnapchatter bitmojiAvatarId] */

undefined8 FUN_1059adbd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1059adbe0; end: 1059adbe7; -[SCFriendingNotificationSnapchatter bitmojiSelfieId] */

undefined8 FUN_1059adbe0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1059adbe8; end: 1059adbef; -[SCFriendingNotificationSnapchatter bitmojiSceneId] */

undefined8 FUN_1059adbe8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1059adbf0; end: 1059adbf7; -[SCFriendingNotificationSnapchatter bitmojiBackgroundId] */

undefined8 FUN_1059adbf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1059adbf8; end: 1059adbff; -[SCFriendingNotificationSnapchatter isFromMyContact] */

undefined8 FUN_1059adbf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1059adc00; end: 1059adc07; -[SCFriendingNotificationSnapchatter suggestReason] */

undefined8 FUN_1059adc00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1059adc08; end: 1059adc0f; -[SCFriendingNotificationSnapchatter abbreviatedSuggestReason] */

undefined8 FUN_1059adc08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1059adc10; end: 1059adc17; -[SCFriendingNotificationSnapchatter suggestedToken] */

undefined8 FUN_1059adc10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1059adc18; end: 1059adc1f; -[SCFriendingNotificationSnapchatter isViewed] */

undefined8 FUN_1059adc18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1059adc20; end: 1059adc27; -[SCFriendingNotificationSnapchatter processingTimestamp] */

undefined8 FUN_1059adc20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1059adc28; end: 1059adccf; -[SCFriendingNotificationSnapchatter .cxx_destruct] */

void FUN_1059adc28(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059adcd0; end: 1059add37; +[SCFriendRequestBadgeConfig descriptor] */

void FUN_1059adcd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c18a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7fcf0,
                        &PTR____CFConstantStringClassReference_110e12e18,&PTR_DAT_113113bb8,
                        &PTR_DAT_113113bd0,3,0x10,0x1c);
    puRam00000001136c18a8 = puVar1;
  }
  return;
}



/* Entry: 1059add38; end: 1059addbb; +[SCProcessedNotificationDb schema] */

void FUN_1059add38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b84f8;
  _objc_alloc(PTR_PTR_1126b84f8);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f318e95);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060a40(puVar1,param_2,0,puVar2,PTR____NSArray0__struct_11034ab48);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


