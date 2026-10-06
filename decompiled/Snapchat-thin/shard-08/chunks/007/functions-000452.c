/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10646c2bc; end: 10646c42b; -[SCContextSpotlightDataFetcher _requestForSnapIdentity:snapContextInfo:] */

void FUN_10646c2bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cab98;
  _objc_retain(param_4);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  FUN_1065ee2b4(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c243e60();
  if ((int)uVar3 != 0xf) {
    func_0x00010c205be0(param_3,param_2,0x10);
  }
  func_0x00010c204680(puVar1,param_2,uVar2);
  func_0x00010c1830e0(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c2046c0(puVar1,param_2,param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfcbe80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e7c0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  uVar4 = *(ulong *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1e060();
  _objc_release(uVar4);
  if ((uVar5 & 1) == 0) {
    puVar6 = PTR_PTR_1126ae740;
    func_0x00010bf09f00(PTR_PTR_1126ae740);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c198000(puVar1,param_2,puVar6);
    _objc_release(puVar6);
    puVar6 = puVar1;
    func_0x00010bf9aca0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc800();
    _objc_release(puVar6);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10646c42c; end: 10646c48b; -[SCContextSpotlightDataFetcher .cxx_destruct] */

void FUN_10646c42c(long param_1)

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



/* Entry: 10646c48c; end: 10646c5db;  */

void FUN_10646c48c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_retain(param_2);
  func_0x00010bf0a140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  func_0x00010c208600(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126caba0;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126caba0;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar4 = puVar3;
  func_0x00010c0d3c80();
  func_0x00010c1a7580(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    puVar1 = puVar1 + 0x20;
    _objc_loadWeakRetained(puVar1);
    param_1 = puVar1;
    func_0x00010bf55ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10646c5dc; end: 10646c61b;  */

void FUN_10646c5dc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf55ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10646c61c; end: 10646c95f; -[SCContextSpotlightDataServiceProvider createDataFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10646c61c(long param_1,undefined8 param_2)

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
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lVar1 = param_1;
  FUN_10646c960();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10646c984;
  puStack_70 = &UNK_110923cb0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  puVar3 = PTR_PTR_1126ae720;
  lStack_68 = lVar2;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cabb0;
  _objc_alloc();
  lVar1 = param_1;
  FUN_10646c990(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bfe4c00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  FUN_10646c990(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar12;
  func_0x00010bfe4d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ad00(puVar4,param_2,lVar5,lVar6,puVar3);
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(lVar5);
  _objc_release(lVar1);
  puVar7 = PTR_PTR_1126be5d8;
  _objc_alloc(PTR_PTR_1126be5d8);
  lVar1 = param_1;
  FUN_10646c960(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_112747ff0;
    _objc_loadWeakRetained(lVar12);
  }
  lVar6 = lVar12;
  func_0x00010bf1a840(lVar12);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_112747fe8;
    _objc_loadWeakRetained(lVar13);
  }
  lVar8 = lVar13;
  func_0x00010bf534e0(lVar13);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112747fe4;
    _objc_loadWeakRetained(lVar11);
  }
  lVar9 = lVar11;
  func_0x00010bf13100(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe2c0(puVar7,param_2,lVar5,lVar6,lVar8,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar11);
  _objc_release(lVar8);
  _objc_release(lVar13);
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(lVar5);
  _objc_release(lVar1);
  puVar10 = PTR_PTR_1126cabb8;
  _objc_alloc(PTR_PTR_1126cabb8);
  lVar1 = param_1;
  FUN_10646c960(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112747ff8;
    _objc_loadWeakRetained(param_1);
  }
  lVar12 = param_1;
  func_0x00010c0e8180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03eea0(puVar10,param_2,puVar4,puVar7,lVar5,lVar12);
  _objc_release(lVar12);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10646c960; end: 10646c983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10646c960(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112747fec);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10646c984; end: 10646c98f;  */

void FUN_10646c984(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25d780(uVar1,1,&PTR____CFConstantStringClassReference_110e510b8,
                      &PTR____CFConstantStringClassReference_110e51078,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cb028;
  _objc_alloc(PTR_PTR_1126cb028);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff70a0(puVar2);
  _objc_release(puVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10646c990; end: 10646c9b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10646c990(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112747ff4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10646c9b4; end: 10646ca27; -[SCContextSpotlightDataServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10646c9b4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112747ff8);
  _objc_destroyWeak(param_1 + _DAT_112747ff4);
  _objc_destroyWeak(param_1 + _DAT_112747ff0);
  _objc_destroyWeak(param_1 + _DAT_112747fec);
  _objc_destroyWeak(param_1 + _DAT_112747fe8);
  _objc_destroyWeak(param_1 + _DAT_112747fe4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112747fe0);
  return;
}



/* Entry: 10646ca28; end: 10646cb23; -[SCContextUserInfoRequestProvider initWithCircumstanceEngine:birthdayProvider:inferredCountryCodeProvider:bitmojiAvatarProvider:] */

undefined1 *
FUN_10646ca28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f1498;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10646cb24; end: 10646cd23; -[SCContextUserInfoRequestProvider getUserInfoRequest] */

void FUN_10646cb24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126cabc0;
  func_0x00010c0cb140(PTR_PTR_1126cabc0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    func_0x00010c1664c0(puVar1,param_2,0xffffffff);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
    func_0x00010bf5e300(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf44660(puVar4,param_2,4,lVar3,puVar5,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar6;
    func_0x00010c2bedc0(puVar6);
    func_0x00010c1664c0(puVar1,param_2,puVar4);
    _objc_release(puVar6);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c170a80(puVar1,param_2,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184960(puVar1,param_2,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfca0e0(uVar8,param_2,0x69);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17df20(puVar1,param_2,uVar8);
  _objc_release(uVar8);
  puVar4 = puVar1;
  func_0x00010bf9c660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x0001084354c4(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar4,param_2,uVar8);
  _objc_release(uVar8);
  _objc_release(puVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10646cd24; end: 10646cd6b; -[SCContextUserInfoRequestProvider .cxx_destruct] */

void FUN_10646cd24(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10646cd6c; end: 10646d3eb; -[SCContextPresenterProvider initWithUserSession:conversationIdResolver:actionHandlingProvider:loggingServices:cardsDataFetcher:messagingScopeExposer:birthdayProvider:bitmojiAvatarProvider:imageDownloader:snapchattersDataFetcher:composerRuntime:alertPresenterFactory:musicServices:musicFavoritesComposerServices:chatLogger:circumstanceEngine:remoteStoriesDataProvider:storiesMetadataCoordinator:snapchatterServices:contextStoryPlaybackScopeExposer:placesContextCardContextCreator:boostCoordinator:contextExperimentService:bloopsContextServices:ctpItemViewService:pageLauncher:valdiRuntimeProvider:snapProServices:repliesSubscribeUpsellScopeExposer:repliesSubscribeUpsellScopeServices:bitmojiSelfieFetcher:imageFetchingService:appStartExperimentReader:] */

undefined8 *
FUN_10646cd6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
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
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  puStack_70 = PTR_PTR_1126f14a0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_35;
    _objc_release(uVar2);
  }
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
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



/* Entry: 10646d3ec; end: 10646d6f3; -[SCContextPresenterProvider createContextPresenterWithSessionParams:baseViewController:operaNavigationStyle:operaEventAnnouncer:operaPage:operaPageObservable:contextDrivenSwipePresentationEnabled:] */

void FUN_10646d3ec(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_70,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0b3860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c15ffa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x00010c08bda0(param_3);
  }
  uVar5 = uVar3;
  func_0x00010bf56fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126cabc8;
  _objc_alloc(PTR_PTR_1126cabc8);
  func_0x00010bffdb80();
  puVar7 = PTR_PTR_1126cabd0;
  _objc_alloc_init();
  puVar8 = PTR_PTR_1126cabd8;
  _objc_alloc(PTR_PTR_1126cabd8);
  func_0x00010c045460();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10646d6f4; end: 10646d74b;  */

void FUN_10646d6f4(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b6218;
    _objc_alloc(PTR_PTR_1126b6218);
    func_0x00010c0492c0();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10646d74c; end: 10646d95f; -[SCContextPresenterProvider .cxx_destruct] */

void FUN_10646d74c(long param_1)

{
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
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



/* Entry: 10646d960; end: 10646e1ab; -[SCContextServiceProvider _createContextPresenterProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10646d960(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
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
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  undefined8 uVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lStack_158;
  undefined8 uStack_138;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_d0;
  long lStack_c0;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_initWeak(auStack_70,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cabe8;
  _objc_alloc();
  if (param_1 == 0) {
    lVar29 = 0;
  }
  else {
    lVar29 = param_1 + _DAT_1127480a4;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar29;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar30 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_1127480a8;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar30;
  func_0x00010bf50420();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_1127480ac;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar31;
  func_0x00010beee700();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_c0 = 0;
    lVar32 = 0;
  }
  else {
    lStack_c0 = param_1 + _DAT_1127480b0;
    _objc_loadWeakRetained();
    lVar32 = param_1 + _DAT_1127480d8;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar32;
  func_0x00010bf322c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_d0 = 0;
    lVar33 = 0;
  }
  else {
    uStack_d0 = *(undefined8 *)(param_1 + _DAT_1127480d0);
    _objc_retain();
    lVar33 = param_1 + _DAT_1127480bc;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar33;
  func_0x00010bf1a840();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar34 = 0;
  }
  else {
    lVar34 = param_1 + _DAT_1127480c0;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar34;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar35 = 0;
  }
  else {
    lVar35 = param_1 + _DAT_1127480d4;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar35;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010646e268();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar36 = 0;
  }
  else {
    lVar36 = param_1 + _DAT_1127480dc;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar36;
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_108 = 0;
    lStack_100 = 0;
    lVar37 = 0;
  }
  else {
    lStack_100 = param_1 + _DAT_1127480e4;
    _objc_loadWeakRetained();
    lStack_108 = param_1 + _DAT_1127480e0;
    _objc_loadWeakRetained();
    lVar37 = param_1 + _DAT_1127480f8;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar37;
  func_0x00010bf0a280();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar38 = 0;
  }
  else {
    lVar38 = param_1 + _DAT_1127480b4;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar38;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar39 = 0;
  }
  else {
    lVar39 = param_1 + _DAT_1127480ec;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar39;
  func_0x00010c12a480();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar40 = 0;
  }
  else {
    lVar40 = param_1 + _DAT_1127480e8;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar40;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010646e268();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_138 = 0;
    lVar41 = 0;
  }
  else {
    uStack_138 = *(undefined8 *)(param_1 + _DAT_112748110);
    _objc_retain();
    lVar41 = param_1 + _DAT_1127480f0;
    _objc_loadWeakRetained();
  }
  lVar18 = lVar41;
  func_0x00010c0fdcc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar42 = 0;
  }
  else {
    lVar42 = param_1 + _DAT_1127480f4;
    _objc_loadWeakRetained();
  }
  lVar19 = lVar42;
  func_0x00010c08d300();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar43 = 0;
  }
  else {
    lVar43 = param_1 + _DAT_1127480fc;
    _objc_loadWeakRetained();
  }
  lVar20 = lVar43;
  func_0x00010bf4e6e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_158 = 0;
    lVar44 = 0;
  }
  else {
    lStack_158 = param_1 + _DAT_1127480cc;
    _objc_loadWeakRetained();
    lVar44 = param_1 + _DAT_112748100;
    _objc_loadWeakRetained();
  }
  lVar21 = lVar44;
  func_0x00010c084e20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar45 = 0;
  }
  else {
    lVar45 = param_1 + _DAT_112748114;
    _objc_loadWeakRetained();
  }
  lVar22 = lVar45;
  func_0x00010c0f14e0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  func_0x00010646e244();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    lVar48 = 0;
    lVar47 = 0;
    uVar46 = 0;
    lVar49 = 0;
  }
  else {
    lVar47 = param_1 + _DAT_112748104;
    _objc_loadWeakRetained();
    uVar46 = *(undefined8 *)(param_1 + _DAT_112748118);
    _objc_retain(uVar46);
    lVar48 = param_1 + _DAT_11274811c;
    _objc_loadWeakRetained();
    lVar49 = param_1 + _DAT_1127480c4;
    _objc_loadWeakRetained();
  }
  lVar25 = lVar49;
  func_0x00010c15ada0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar50 = 0;
  }
  else {
    lVar50 = param_1 + _DAT_112748108;
    _objc_loadWeakRetained();
  }
  lVar26 = lVar50;
  func_0x00010bfe7760();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = 0;
  if (param_1 != 0) {
    lVar27 = param_1 + _DAT_11274810c;
    _objc_loadWeakRetained();
  }
  lVar28 = lVar27;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d500();
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar50);
  _objc_release(lVar25);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(uVar46);
  _objc_release(lVar47);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar45);
  _objc_release(lVar21);
  _objc_release(lVar44);
  _objc_release(lStack_158);
  _objc_release(lVar20);
  _objc_release(lVar43);
  _objc_release(lVar19);
  _objc_release(lVar42);
  _objc_release(lVar18);
  _objc_release(lVar41);
  _objc_release(uStack_138);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar40);
  _objc_release(lVar15);
  _objc_release(lVar39);
  _objc_release(lVar14);
  _objc_release(lVar38);
  _objc_release(lVar13);
  _objc_release(lVar37);
  _objc_release(lStack_108);
  _objc_release(lStack_100);
  _objc_release(lVar12);
  _objc_release(lVar36);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar35);
  _objc_release(lVar8);
  _objc_release(lVar34);
  _objc_release(lVar7);
  _objc_release(lVar33);
  _objc_release(uStack_d0);
  _objc_release(lVar6);
  _objc_release(lVar32);
  _objc_release(lStack_c0);
  _objc_release(lVar5);
  _objc_release(lVar31);
  _objc_release(lVar4);
  _objc_release(lVar30);
  _objc_release(lVar3);
  _objc_release(lVar29);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10646e1ac; end: 10646e243;  */

void FUN_10646e1ac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  FUN_10646e244();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10646e244; end: 10646e28b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10646e244(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127480c8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10646e28c; end: 10646e437; -[SCContextServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10646e28c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274811c);
  _objc_storeStrong(param_1 + _DAT_112748118,0);
  _objc_destroyWeak(param_1 + _DAT_112748114);
  _objc_storeStrong(param_1 + _DAT_112748110,0);
  _objc_destroyWeak(param_1 + _DAT_11274810c);
  _objc_destroyWeak(param_1 + _DAT_112748108);
  _objc_destroyWeak(param_1 + _DAT_112748104);
  _objc_destroyWeak(param_1 + _DAT_112748100);
  _objc_destroyWeak(param_1 + _DAT_1127480fc);
  _objc_destroyWeak(param_1 + _DAT_1127480f8);
  _objc_destroyWeak(param_1 + _DAT_1127480f4);
  _objc_destroyWeak(param_1 + _DAT_1127480f0);
  _objc_destroyWeak(param_1 + _DAT_1127480ec);
  _objc_destroyWeak(param_1 + _DAT_1127480e8);
  _objc_destroyWeak(param_1 + _DAT_1127480e4);
  _objc_destroyWeak(param_1 + _DAT_1127480e0);
  _objc_destroyWeak(param_1 + _DAT_1127480dc);
  _objc_destroyWeak(param_1 + _DAT_1127480d8);
  _objc_destroyWeak(param_1 + _DAT_1127480d4);
  _objc_storeStrong(param_1 + _DAT_1127480d0,0);
  _objc_destroyWeak(param_1 + _DAT_1127480cc);
  _objc_destroyWeak(param_1 + _DAT_1127480c8);
  _objc_destroyWeak(param_1 + _DAT_1127480c4);
  _objc_destroyWeak(param_1 + _DAT_1127480c0);
  _objc_destroyWeak(param_1 + _DAT_1127480bc);
  _objc_destroyWeak(param_1 + _DAT_1127480b8);
  _objc_destroyWeak(param_1 + _DAT_1127480b4);
  _objc_destroyWeak(param_1 + _DAT_1127480b0);
  _objc_destroyWeak(param_1 + _DAT_1127480ac);
  _objc_destroyWeak(param_1 + _DAT_1127480a8);
  _objc_destroyWeak(param_1 + _DAT_1127480a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127480a0);
  return;
}



/* Entry: 10646e438; end: 10646e5d3; -[SCMapSnapTokenService fetchCheckinOptions:completionQueue:callback:] */

void FUN_10646e438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_5;
  _objc_retain();
  func_0x00010902198c();
  uVar2 = uVar1;
  func_0x00010902198c();
  puVar3 = PTR_PTR_1126b19f8;
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b19f8;
  puStack_80 = puVar3;
  func_0x00010c0b85e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b19f8;
  puStack_78 = puVar4;
  func_0x00010c1164a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126cabf0;
  _objc_opt_class();
  ppuVar9 = &PTR____CFConstantStringClassReference_110e50418;
  uStack_b0 = 3;
  ppuVar10 = &PTR____CFConstantStringClassReference_110e503f8;
  uStack_b8 = 5;
  ppuVar11 = ppuVar10;
  puStack_c0 = puVar6;
  puStack_a8 = puVar7;
  uStack_a0 = param_4;
  uStack_98 = param_5;
  func_0x00010c25f760(0xbff0000000000000,uStack_88);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  uVar8 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uStack_f0 = 3;
  pcStack_c8 = FUN_10646e5d4;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = puVar6;
  puStack_118 = puVar5;
  puStack_110 = puVar4;
  uStack_108 = uVar2;
  uStack_100 = uVar1;
  puStack_f8 = puVar3;
  uStack_e8 = param_5;
  uStack_e0 = param_4;
  uStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar9);
  _objc_retain(ppuVar10);
  _objc_retain();
  func_0x00010902198c();
  func_0x00010902198c();
  puVar3 = PTR_PTR_1126b19f8;
  func_0x00010c0b85e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b19f8;
  puStack_138 = puVar3;
  func_0x00010c1164a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_130 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_138,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class();
  ppuVar12 = &PTR____CFConstantStringClassReference_110e50438;
  ppuVar13 = &PTR____CFConstantStringClassReference_110e503f8;
  func_0x00010c25f760(0xbff0000000000000,uVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  _objc_release(ppuVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar12);
  ppuVar10 = ppuVar13;
  _objc_retain(ppuVar13);
  func_0x00010902198c();
  ppuVar11 = ppuVar10;
  func_0x00010902198c();
  puVar3 = PTR_PTR_1126cac00;
  _objc_alloc_init(PTR_PTR_1126cac00);
  puVar4 = PTR_PTR_1126cac08;
  _objc_opt_class();
  func_0x00010c25f780(ppuVar9,param_2,&PTR____CFConstantStringClassReference_110e50478,
                      &PTR____CFConstantStringClassReference_110e50458,
                      &PTR____CFConstantStringClassReference_110e50458,ppuVar10,ppuVar11,puVar3,
                      puVar4,ppuVar12,ppuVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(ppuVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar12);
  return;
}



/* Entry: 10646e5d4; end: 10646e74f; -[SCMapSnapTokenService addCheckin:completionQueue:callback:] */

void FUN_10646e5d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain();
  func_0x00010902198c();
  func_0x00010902198c();
  puVar1 = PTR_PTR_1126b19f8;
  func_0x00010c0b85e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b19f8;
  puStack_78 = puVar1;
  func_0x00010c1164a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class();
  ppuVar6 = &PTR____CFConstantStringClassReference_110e50438;
  ppuVar7 = &PTR____CFConstantStringClassReference_110e503f8;
  func_0x00010c25f760(0xbff0000000000000,param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar6);
  ppuVar4 = ppuVar7;
  _objc_retain(ppuVar7);
  func_0x00010902198c();
  ppuVar5 = ppuVar4;
  func_0x00010902198c();
  puVar1 = PTR_PTR_1126cac00;
  _objc_alloc_init(PTR_PTR_1126cac00);
  puVar2 = PTR_PTR_1126cac08;
  _objc_opt_class();
  func_0x00010c25f780(param_3,param_2,&PTR____CFConstantStringClassReference_110e50478,
                      &PTR____CFConstantStringClassReference_110e50458,
                      &PTR____CFConstantStringClassReference_110e50458,ppuVar4,ppuVar5,puVar1,puVar2
                      ,ppuVar6,ppuVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(ppuVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
  return;
}



/* Entry: 10646e750; end: 10646e813; -[SCMapSnapTokenService fetchExploreStatusesOnQueue:completion:] */

void FUN_10646e750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x00010902198c();
  uVar2 = uVar1;
  func_0x00010902198c();
  puVar3 = PTR_PTR_1126cac00;
  _objc_alloc_init(PTR_PTR_1126cac00);
  puVar4 = PTR_PTR_1126cac08;
  _objc_opt_class();
  func_0x00010c25f780(param_1,param_2,&PTR____CFConstantStringClassReference_110e50478,
                      &PTR____CFConstantStringClassReference_110e50458,
                      &PTR____CFConstantStringClassReference_110e50458,uVar1,uVar2,puVar3,puVar4,
                      param_3,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10646e814; end: 10646e8d7; -[SCMapSnapTokenService fetchMyExploreStatusesOnQueue:completion:] */

void FUN_10646e814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x00010902198c();
  uVar2 = uVar1;
  func_0x00010902198c();
  puVar3 = PTR_PTR_1126cac10;
  _objc_alloc_init(PTR_PTR_1126cac10);
  puVar4 = PTR_PTR_1126cac18;
  _objc_opt_class();
  func_0x00010c25f780(param_1,param_2,&PTR____CFConstantStringClassReference_110e50498,
                      &PTR____CFConstantStringClassReference_110e50458,
                      &PTR____CFConstantStringClassReference_110e50458,uVar1,uVar2,puVar3,puVar4,
                      param_3,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10646e8d8; end: 10646e9db; -[SCMapSnapTokenService deleteExploreStatus:userId:completionQueue:completion:] */

void FUN_10646e8d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126cac20;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c21e620();
  _objc_release(param_4);
  func_0x00010c20a400(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010902198c();
  uVar2 = param_3;
  func_0x00010902198c();
  puVar3 = PTR_PTR_1126cac28;
  _objc_opt_class();
  func_0x00010c25f780(param_1,param_2,&PTR____CFConstantStringClassReference_110e504b8,
                      &PTR____CFConstantStringClassReference_110e50458,
                      &PTR____CFConstantStringClassReference_110e50458,param_3,uVar2,puVar1,puVar3,
                      param_5,param_6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10646e9dc; end: 10646ea9b; -[SCMapSnapTokenService submitBatchExplorerViewsRequest:completionQueue:completion:] */

void FUN_10646e9dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_5;
  _objc_retain(param_5);
  func_0x00010902198c();
  uVar2 = uVar1;
  func_0x00010902198c();
  puVar3 = PTR_PTR_1126cac30;
  _objc_opt_class();
  func_0x00010c25f780(param_1,param_2,&PTR____CFConstantStringClassReference_110e504d8,
                      &PTR____CFConstantStringClassReference_110e50458,
                      &PTR____CFConstantStringClassReference_110e50458,uVar1,uVar2,param_3,puVar3,
                      param_4,param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10646ea9c; end: 10646eb9b; -[SCMapSnapTokenService sendClearLocationHistoryRequest:completion:] */

void FUN_10646ea9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cac38;
  _objc_alloc_init(PTR_PTR_1126cac38);
  puVar2 = PTR_PTR_1126cac40;
  _objc_opt_class();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10646eb9c;
  puStack_50 = &UNK_110923d10;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010c25f780(param_1,param_2,&PTR____CFConstantStringClassReference_110e504f8,
                      &PTR____CFConstantStringClassReference_110e50518,
                      &PTR____CFConstantStringClassReference_110e50518,0,0,puVar1,puVar2,param_3,
                      &puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10646eb9c; end: 10646ebaf;  */

void FUN_10646eb9c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010646eba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10646ebb0; end: 10646ee07; -[SCMapSnapTokenService fetchMapBestFriends:] */

void FUN_10646ebb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000109021944();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126cac48;
  _objc_opt_new(PTR_PTR_1126cac48);
  puVar4 = PTR_PTR_1126cac50;
  _objc_opt_class();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10646ecd8;
  puStack_50 = &UNK_110923d80;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010c25f780(param_1,param_2,&PTR____CFConstantStringClassReference_110e50538,
                      &PTR____CFConstantStringClassReference_110e50558,
                      &PTR____CFConstantStringClassReference_110e50578,(uint)uVar2 ^ 1,0,puVar3,
                      puVar4,PTR___dispatch_main_q_11034be20,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10646ee08; end: 10646ee0f;  */

void FUN_10646ee08(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 10646ee10; end: 10646ef7f; -[SCMapSnapTokenService getNearbyPlaces:completionQueue:completion:] */

void FUN_10646ee10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar5 = param_5;
  _objc_retain();
  func_0x00010902198c();
  puVar1 = PTR_PTR_1126b19f8;
  func_0x00010c0b85e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b19f8;
  puStack_68 = puVar1;
  func_0x00010c1164a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cac58;
  _objc_opt_class();
  uStack_90 = 3;
  ppuVar6 = &PTR____CFConstantStringClassReference_110e505d8;
  ppuVar7 = &PTR____CFConstantStringClassReference_110e50598;
  ppuVar8 = &PTR____CFConstantStringClassReference_110e505b8;
  uStack_98 = 5;
  puStack_a0 = puVar3;
  puStack_88 = puVar4;
  uStack_80 = param_4;
  uStack_78 = param_5;
  func_0x00010c25f760(0xbff0000000000000,param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_10646ef80;
  uStack_e0 = uVar5;
  puStack_d8 = puVar1;
  uStack_d0 = param_1;
  uStack_c8 = param_5;
  uStack_c0 = param_4;
  uStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar6);
  _objc_retain(ppuVar7);
  _objc_retain(ppuVar8);
  puVar1 = PTR_PTR_1126cac60;
  _objc_alloc_init(PTR_PTR_1126cac60);
  _objc_initWeak(auStack_e8,puVar1);
  uVar5 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_10646f0e4;
  puStack_118 = &UNK_110923de0;
  ppuStack_108 = ppuVar6;
  _objc_retain(ppuVar6);
  _objc_copyWeak(auStack_f0,auStack_e8);
  uStack_110 = uVar5;
  ppuStack_100 = ppuVar8;
  ppuStack_f8 = ppuVar7;
  _objc_retain(ppuVar7);
  _objc_retain(uVar5);
  _objc_retain(ppuVar8);
  func_0x00010007380c(uVar5,&puStack_130);
  _objc_release(ppuStack_f8);
  _objc_release(uStack_110);
  _objc_release(ppuStack_100);
  _objc_destroyWeak(auStack_f0);
  _objc_release(ppuStack_108);
  _objc_release(ppuVar7);
  _objc_release(uVar5);
  _objc_release(ppuVar8);
  _objc_release(ppuVar6);
  _objc_destroyWeak(auStack_e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10646ef80; end: 10646f0e3; +[SCMapAsyncRequestHelper constructAsynchronousRequest:andSubmit:withError:] */

void FUN_10646ef80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126cac60;
  _objc_alloc_init(PTR_PTR_1126cac60);
  _objc_initWeak(auStack_48,puVar1);
  uVar2 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10646f0e4;
  puStack_78 = &UNK_110923de0;
  uStack_68 = param_3;
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  uStack_70 = uVar2;
  uStack_60 = param_5;
  uStack_58 = param_4;
  _objc_retain(param_4);
  _objc_retain(uVar2);
  _objc_retain(param_5);
  func_0x00010007380c(uVar2,&puStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_70);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10646f0e4; end: 10646f1c3;  */

void FUN_10646f0e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 0x28);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10646f1c4;
  puStack_58 = &UNK_110923db0;
  _objc_copyWeak(auStack_38,param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar3;
  _objc_retain(uVar2);
  uStack_40 = uVar2;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10646f1c4; end: 10646f34f;  */

void FUN_10646f1c4(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf2f5c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_10646f360;
      puStack_98 = &UNK_110857fd0;
      _objc_copyWeak(auStack_78,param_1 + 0x38);
      _objc_retain(param_3);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      lStack_90 = param_3;
      _objc_retain(uVar6);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      uStack_80 = uVar6;
      _objc_retain(uVar3);
      uStack_88 = uVar3;
      func_0x00010007380c(uVar4,&puStack_b0);
      _objc_release(uStack_88);
      _objc_release(uStack_80);
      _objc_release(lStack_90);
      _objc_destroyWeak(auStack_78);
    }
    else {
      lVar5 = *(long *)(param_1 + 0x28);
      if (lVar5 != 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_68 = 0xc2000000;
        pcStack_60 = FUN_10646f350;
        puStack_58 = &UNK_11084aaa8;
        _objc_retain(lVar5);
        lStack_48 = lVar5;
        _objc_retain(param_2);
        lStack_50 = param_2;
        func_0x00010007380c(uVar3,&puStack_70);
        _objc_release(lStack_50);
        _objc_release(lStack_48);
      }
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10646f350; end: 10646f35f;  */

void FUN_10646f350(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010646f35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10646f360; end: 10646f4ab;  */

void FUN_10646f360(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c086560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c1ebe00();
  _objc_release(lVar2);
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x10646f450;
    puStack_50 = &UNK_110848378;
    _objc_copyWeak(auStack_38,param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uStack_40 = uVar4;
    _objc_retain(uVar1);
    uStack_48 = uVar1;
    func_0x00010007380c(uVar3,&puStack_68);
    _objc_release(uStack_48);
    _objc_release(uStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 10646f4ac; end: 10646f543; -[SCMapAsyncRequestCanceler cancel] */

void FUN_10646f4ac(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  func_0x00010c135a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b7f68;
    func_0x00010c22b6a0(PTR_PTR_1126b7f68);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c135a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2ee60(puVar2);
    _objc_release(lVar1);
    _objc_release(puVar2);
    func_0x00010c1ebe00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1781b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCanceled__11263ba88,1);
  return;
}



/* Entry: 10646f544; end: 10646f54f; -[SCMapAsyncRequestCanceler canceled] */

byte FUN_10646f544(long param_1)

{
  return *(byte *)(param_1 + 8) & 1;
}



/* Entry: 10646f550; end: 10646f557; -[SCMapAsyncRequestCanceler setCanceled:] */

void FUN_10646f550(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10646f558; end: 10646f563; -[SCMapAsyncRequestCanceler requestKey] */

void FUN_10646f558(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 10646f564; end: 10646f56b; -[SCMapAsyncRequestCanceler setRequestKey:] */

void FUN_10646f564(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 10646f56c; end: 10646f577; -[SCMapAsyncRequestCanceler .cxx_destruct] */

void FUN_10646f56c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10646f578; end: 10646f6f7; -[SCMapSnapTokenService submitRequestWithEndpoint:prodPath:stagingPath:useStagingPath:includeStagingHeaders:proto:responseClass:completionQueue:completion:] */

void FUN_10646f578(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  long lStack_130;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126b19f8;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0b85e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 0xbff0000000000000;
  lVar6 = param_3;
  uVar7 = param_4;
  uVar8 = param_5;
  uVar9 = param_8;
  func_0x00010c25f760(0xbff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(lVar6);
    _objc_retain(uVar7);
    _objc_retain(uVar8);
    puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_retain(param_12);
    _objc_retain(param_11);
    _objc_retain(puVar2);
    _objc_retain(uVar9);
    _objc_alloc_init();
    if (param_7 != 0) {
      ppuStack_140 = &PTR____CFConstantStringClassReference_110dadcb8;
      ppuStack_138 = &PTR____CFConstantStringClassReference_110deb938;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_138,
                          &ppuStack_140,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(puVar10,param_2,puVar3);
      _objc_release(puVar3);
    }
    puVar3 = puVar10;
    func_0x00010bf529e0();
    if (puVar3 == (undefined *)0x0) {
      _objc_release(puVar10);
      puVar10 = (undefined *)0x0;
    }
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e06c58);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f720(uVar11,puVar1,param_2,6,puVar4,puVar10,uVar9,puVar5,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_12);
    _objc_release(param_11);
    _objc_release(puVar2);
    _objc_release(uVar9);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar10);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(lVar6);
    param_1 = puVar1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_130) {
      ___stack_chk_fail();
      puVar1 = (undefined *)(lVar6 + 0x20);
      _objc_loadWeakRetained(puVar1);
      param_1 = puVar1;
      func_0x00010be5ce20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10646f6f8; end: 10646f97f; -[SCMapSnapTokenService submitRequestWithEndpoint:prodPath:stagingPath:useStagingPath:includeStagingHeaders:proto:contexts:priority:requestType:requestTimeoutInterval:responseClass:completionQueue:completion:] */

void FUN_10646f6f8(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000020);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_alloc_init();
  if (param_8 != 0) {
    ppuStack_90 = &PTR____CFConstantStringClassReference_110dadcb8;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110deb938;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&ppuStack_88,&ppuStack_90,1
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar4,param_3,puVar1);
    _objc_release(puVar1);
  }
  puVar1 = puVar4;
  func_0x00010bf529e0();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar4);
    puVar4 = (undefined *)0x0;
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                      &PTR____CFConstantStringClassReference_110e06c58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f720(param_1,param_2,param_3,6,puVar2,puVar4,param_9,puVar3,param_10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    param_4 = param_4 + 0x20;
    _objc_loadWeakRetained(param_4);
    param_2 = param_4;
    func_0x00010be5ce20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10646f980; end: 10646f9bf;  */

void FUN_10646f980(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5ce20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10646f9c0; end: 10646fb63; -[SCLegacyMapNetworkingServiceProvider _mapSnapTokenService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10646f9c0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  uVar1 = param_1 + _DAT_112748128;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf8d9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar5 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = uVar5;
    func_0x00010bfdcf80(uVar5,param_2,&PTR____CFConstantStringClassReference_110e505f8);
    if ((uVar11 & 1) == 0) {
      uVar11 = uVar5;
      func_0x00010bfdcf80(uVar5,param_2,&PTR____CFConstantStringClassReference_110e50618);
    }
    else {
      uVar11 = 1;
    }
  }
  _objc_release(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar6 = PTR_PTR_1126cac70;
  _objc_alloc(PTR_PTR_1126cac70);
  lVar7 = param_1 + _DAT_11274812c;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bf10b80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112748130;
  _objc_loadWeakRetained(param_1);
  lVar10 = param_1;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045620(puVar6,param_2,lVar9,lVar10,uVar11);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10646fb64; end: 10646fbb3; -[SCLegacyMapNetworkingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10646fb64(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112748128);
  _objc_destroyWeak(param_1 + _DAT_112748130);
  _objc_destroyWeak(param_1 + _DAT_11274812c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112748134);
  return;
}



/* Entry: 10646fbb4; end: 10646fc5f; -[SCMapSnapTokenService initWithSessionRequestManager:snapTokenProvider:isEmployee:] */

undefined1 *
FUN_10646fbb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f14a8;
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
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10646fc60; end: 10646fc93; -[SCMapSnapTokenService submitRequestWithAccessType:url:proto:key:contexts:responseClass:completionQueue:completion:] */

void FUN_10646fc60(void)

{
  func_0x00010c25f740(0xbff0000000000000);
  return;
}



/* Entry: 10646fc94; end: 10646fccf; -[SCMapSnapTokenService submitRequestWithAccessType:url:additionalHeaders:proto:key:contexts:responseClass:completionQueue:completion:] */

void FUN_10646fc94(void)

{
  func_0x00010c25f720(0xbff0000000000000);
  return;
}



/* Entry: 10646fcd0; end: 10646fd13; -[SCMapSnapTokenService submitRequestWithAccessType:url:proto:key:contexts:priority:requestType:requestTimeoutInterval:responseClass:completionQueue:completion:] */

void FUN_10646fcd0(void)

{
  func_0x00010c25f720();
  return;
}



/* Entry: 10646fd14; end: 10646ffc3; -[SCMapSnapTokenService submitRequestWithAccessType:url:additionalHeaders:proto:key:contexts:priority:requestType:requestTimeoutInterval:responseClass:completionQueue:completion:] */

void FUN_10646fd14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_initWeak(auStack_80,param_2);
  puVar1 = PTR_PTR_1126cac78;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_10646ffc4;
  puStack_d8 = &UNK_110923e70;
  _objc_retain(param_6);
  uStack_d0 = param_6;
  _objc_retain(param_5);
  uStack_c8 = param_5;
  _objc_retain(param_7);
  uStack_c0 = param_7;
  _objc_retain(param_8);
  uStack_b8 = param_8;
  _objc_retain(param_9);
  uStack_a0 = param_10;
  uStack_98 = param_11;
  uStack_b0 = param_9;
  uStack_90 = param_1;
  uStack_88 = param_4;
  _objc_copyWeak(auStack_a8,auStack_80);
  _objc_copyWeak(auStack_100,auStack_80);
  uStack_f8 = param_12;
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_14);
  _objc_retain(param_13);
  func_0x00010bf49620(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_13);
  _objc_release(param_14);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10646ffc4; end: 1064701df;  */

void FUN_10646ffc4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_1064701e0;
  puStack_c0 = &UNK_110923e40;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uStack_b8 = uVar5;
  _objc_retain(uVar6);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uStack_b0 = uVar6;
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uStack_a8 = uVar5;
  _objc_retain(uVar6);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uStack_a0 = uVar6;
  _objc_retain(uVar5);
  uStack_80 = *(undefined8 *)(param_1 + 0x58);
  uStack_88 = *(undefined8 *)(param_1 + 0x50);
  uStack_78 = *(undefined8 *)(param_1 + 0x60);
  uStack_98 = uVar5;
  _objc_retain(param_2);
  ppuVar2 = &puStack_d8;
  uStack_90 = param_2;
  _objc_retainBlock(ppuVar2);
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_106470334;
  puStack_f0 = &UNK_1108dc9f8;
  uStack_e0 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(param_2);
  ppuVar3 = &puStack_108;
  uStack_e8 = param_2;
  _objc_retainBlock(ppuVar3);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa48e0(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  _objc_release(param_1);
  _objc_release(ppuVar3);
  _objc_release(uStack_e8);
  _objc_release(ppuVar2);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(param_2);
  return;
}



/* Entry: 1064701e0; end: 106470333;  */

void FUN_1064701e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bef7f60(puVar1);
  }
  puVar2 = puVar1;
  func_0x00010c1d0560(puVar1);
  func_0x000109021950();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b4960;
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf51e00(uVar3);
  func_0x00010bf58160(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c2193a0(puVar2);
  if (0.0 <= *(double *)(param_1 + 0x60)) {
    func_0x00010c215b60(puVar2);
  }
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106470334; end: 106470343;  */

void FUN_106470334(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000106470340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,0);
  return;
}



/* Entry: 106470344; end: 10647044f;  */

void FUN_106470344(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c25f4c0(*(undefined8 *)(param_1 + 8));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106470450; end: 106470463;  */

void FUN_106470450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106470460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106470464; end: 10647046b; -[SCMapSnapTokenService isEmployee] */

undefined1 FUN_106470464(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 10647046c; end: 10647049b; -[SCMapSnapTokenService .cxx_destruct] */

void FUN_10647046c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10647049c; end: 106470503; +[SCMBFFriend descriptor] */

void FUN_10647049c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3890 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ae0730,
                        &PTR____CFConstantStringClassReference_110e08998,&PTR_DAT_11314ed88,
                        &PTR_s_userId_11314eda0,1,0x10,0x1c);
    puRam00000001136c3890 = puVar1;
  }
  return;
}



/* Entry: 106470504; end: 10647056b; +[SCMBFGetMapBestFriendsRequest descriptor] */

void FUN_106470504(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3898 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ae0780,
                        &PTR____CFConstantStringClassReference_110e50638,&PTR_DAT_11314ed88,0,0,4,
                        0x1c);
    puRam00000001136c3898 = puVar1;
  }
  return;
}



/* Entry: 10647056c; end: 1064705d3; +[SCMBFGetMapBestFriendsResponse descriptor] */

void FUN_10647056c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c38a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ae07d0,
                        &PTR____CFConstantStringClassReference_110e50658,&PTR_DAT_11314ed88,
                        &PTR_DAT_11314edc0,2,0x18,0x1c);
    puRam00000001136c38a0 = puVar1;
  }
  return;
}



/* Entry: 1064705d4; end: 1064708b7; -[SCLensSocialUnlockFlow initWithLensUnlocker:cameraPresenter:collectionsCameraPresenter:snapSource:cameraBIPAConfiguration:cameraBIPAScopeExposer:cameraBIPAScopeServices:lensReplyCameraPresenter:inLensCreationDataProvider:centralizedLensMetadataStoreProvider:playGamesPresenter:playGamesStudySettings:musicApplicationData:] */

undefined8 *
FUN_1064705d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126f14b0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    puVar1[4] = param_6;
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
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
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
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_15;
    _objc_release(uVar2);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1064708b8; end: 1064708bf; -[SCLensSocialUnlockFlow modularCameraPresenter] */

void FUN_1064708b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 1064708c0; end: 1064708c7; -[SCLensSocialUnlockFlow modularCollectionsCameraPresenter] */

void FUN_1064708c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_target_112678178);
  return;
}



/* Entry: 1064708c8; end: 1064708cf; -[SCLensSocialUnlockFlow lensUnlocker] */

void FUN_1064708c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_target_112678178);
  return;
}



/* Entry: 1064708d0; end: 1064708d7; -[SCLensSocialUnlockFlow shouldStartUnlockFlowForDeepLinkURL:deepLinkUnlockPolicy:] */

void FUN_1064708d0(void)

{
  undefined8 in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf2dab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(in_x3,PTR_s_canUnlockDeepLinkURL__1125a9050);
  return;
}



/* Entry: 1064708d8; end: 106471373; -[SCLensSocialUnlockFlow startUnlockFlowWithDeepLinkURL:replyParameters:baseViewController:delegate:snapId:unlockableSnapInfo:chatMessageId:storyServerId:lensOptions:] */

/* WARNING: Removing unreachable block (ram,0x000106470b24) */

undefined8
FUN_1064708d8(long param_1,undefined8 param_2,ulong param_3,undefined *param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 in_stack_00000010;
  undefined *puStack_f8;
  undefined *puStack_d0;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(in_stack_00000010);
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    uVar13 = 0;
    goto LAB_106470ef0;
  }
  uVar1 = param_3;
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain();
  _objc_release(uVar2);
  uVar4 = param_3;
  func_0x00010c0f5820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c230d60();
  uVar2 = param_3;
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar3);
  uVar2 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar5);
  uVar5 = uVar2;
  func_0x00010c08fa60();
  if (uVar5 == 0) {
    puStack_d0 = (undefined *)0x0;
  }
  else {
    uVar5 = uVar2;
    func_0x00010c25cfc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649e0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    func_0x00010bfeea60();
    func_0x00010c1ec620();
    puStack_d0 = puVar14;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puStack_d0;
    func_0x00010c1185e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(puVar7);
    _objc_release(puVar14);
    _objc_release(puVar3);
    uVar2 = uVar5;
  }
  puVar3 = PTR_PTR_1126cac80;
  func_0x00010c0b6120();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar8 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar14);
  uVar5 = uVar6;
  if ((uVar8 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar6);
  func_0x00010c08fa60(uVar5);
  uVar8 = uVar1;
  func_0x00010c08fa60();
  if (((uVar8 == 0) && (uVar8 = uVar4, func_0x00010c08fa60(), uVar8 == 0)) &&
     (puVar3 == (undefined *)0x0)) {
    uVar13 = 0;
  }
  else {
    puVar14 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar13 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar14;
    _objc_release(uVar13);
    *(undefined1 *)(param_1 + 0x30) = 1;
    if (param_4 == (undefined *)0x0) {
      puStack_f8 = PTR_PTR_1126b1010;
      _objc_alloc();
      func_0x00010c02ec80();
    }
    else {
      _objc_retain(param_4);
      puStack_f8 = param_4;
    }
    uVar8 = param_3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c0720c0();
    if ((int)uVar9 != 0) {
      func_0x00010c1185e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
    _objc_release(uVar8);
    if (uVar5 == 0) {
LAB_106470e40:
      puVar14 = (undefined *)0x0;
    }
    else {
      lVar10 = *(long *)(param_1 + 0x58);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar10 == 0) goto LAB_106470e40;
      func_0x00010c25cf40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126ae560;
      if (uVar6 == 0) {
        puVar14 = (undefined *)0x0;
      }
      else {
        _objc_retain(param_1);
        _objc_opt_new();
        uVar13 = *(undefined8 *)(param_1 + 0x58);
        func_0x00010c269d40(uVar13);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(uVar6);
        _objc_retain(uVar1);
        _objc_retain(puStack_f8);
        _objc_retain(puVar7);
        func_0x00010bfa6200(uVar13);
        _objc_release(uVar13);
        puVar14 = PTR_PTR_1126cac90;
        _objc_alloc();
        puVar11 = puVar7;
        func_0x00010bfbc3e0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puStack_f8;
        func_0x00010bf5b6c0(puStack_f8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0243c0(puVar14);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar7);
        _objc_release(puStack_f8);
        _objc_release(uVar1);
        _objc_release(uVar6);
        _objc_release(puVar7);
        _objc_release(param_1);
      }
      _objc_release(uVar6);
    }
    func_0x00010bec1e80(param_1);
    _objc_release(puVar14);
    _objc_release(puStack_f8);
    uVar13 = 1;
  }
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puStack_d0);
  _objc_release(uVar4);
  _objc_release(uVar1);
LAB_106470ef0:
  _objc_release(in_stack_00000010);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar13;
}



/* Entry: 106471374; end: 1064717df; -[SCLensSocialUnlockFlow _startUnlockFlowWithReplyParameters:promptLensReplyParameters:inLensCreationReplyParameters:needsLensReplyCameraScope:baseViewController:delegate:isLensCollectionType:lensId:collectionId:unlockableSnapInfo:machineReadableCode:lensOptions:] */

void FUN_106471374(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,byte param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  byte bStack_80;
  undefined1 uStack_7f;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  if ((param_6 & 1) == 0) {
    func_0x00010c2460e0(param_8);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    lVar1 = param_1;
    func_0x00010be610a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4);
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010be4baa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_70,param_1);
  _objc_initWeak(auStack_78,param_8);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2332e0();
  _objc_release(uVar2);
  if ((int)uVar4 == 0) {
    _objc_copyWeak(auStack_f8,auStack_70);
    _objc_copyWeak(auStack_f0,auStack_78);
    _objc_retain(lVar1);
    func_0x00010be7a6e0(param_1);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_f0);
    _objc_destroyWeak(auStack_f8);
  }
  else {
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_1064717e0;
    puStack_d0 = &UNK_110923f30;
    _objc_copyWeak(auStack_90,auStack_70);
    _objc_retain(param_7);
    uStack_c8 = param_7;
    _objc_retain(lVar1);
    lStack_c0 = lVar1;
    _objc_copyWeak(auStack_88,auStack_78);
    _objc_retain(param_11);
    uStack_b8 = param_11;
    _objc_retain(param_12);
    uStack_b0 = param_12;
    _objc_retain(param_14);
    uStack_a8 = param_14;
    _objc_retain(param_13);
    uStack_a0 = param_13;
    bStack_80 = param_6;
    _objc_retain(param_15);
    uStack_98 = param_15;
    uStack_7f = param_9;
    func_0x00010bf23be0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x40));
    _objc_release(uVar4);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    _objc_release(uStack_b8);
    _objc_destroyWeak(auStack_88);
    _objc_release(lStack_c0);
    _objc_release(uStack_c8);
    _objc_destroyWeak(auStack_90);
    _objc_release(puVar3);
  }
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(lVar1);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1064717e0; end: 10647197f;  */

void FUN_1064717e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  undefined1 uStack_47;
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x40);
    func_0x00010c12e1c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,param_1 + 0x58);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    _objc_copyWeak(auStack_50,param_1 + 0x60);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar8);
    uStack_48 = *(undefined1 *)(param_1 + 0x68);
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar9);
    uStack_47 = *(undefined1 *)(param_1 + 0x69);
    func_0x00010c2a4ae0(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_50);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106471980; end: 106471aa3;  */

void FUN_106471980(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_copyWeak(auStack_60,param_1 + 0x58);
    _objc_copyWeak(auStack_58,param_1 + 0x60);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    func_0x00010be7a6e0(lVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_60);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106471aa4; end: 106471b63;  */

void FUN_106471aa4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd460(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106471b64; end: 106471beb; -[SCLensSocialUnlockFlow _applicationWillEnterBackground:] */

void FUN_106471b64(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2332e0();
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x40);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (lVar3 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106471bec; end: 106471d1b; -[SCLensSocialUnlockFlow _didDismissCameraWithDelegate:didSendSnap:lensReplyParams:] */

void FUN_106471bec(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined *param_5
                  )

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 0;
    puVar5 = PTR_PTR_1126b5c38;
    func_0x00010be44de0();
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar2 = (undefined *)0x0;
    if ((param_4 == 0) && ((int)puVar5 != 0)) {
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      param_5 = puVar5;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar2 = puVar1;
    }
    func_0x00010c2460c0(param_3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = PTR_PTR_1126ae6a8;
    func_0x00010c0fdac0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ae6b0;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c025e20();
    _objc_release(puVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
      ___stack_chk_fail();
      _objc_retain(puVar3);
      _objc_retain(puVar1);
      _objc_retain(param_5);
      puStack_108 = &uStack_110;
      uStack_110 = 0;
      uStack_100 = 0x3032000000;
      pcStack_f8 = FUN_106471f80;
      uStack_f0 = 0x106471f90;
      uStack_e8 = 0;
      puVar5 = puVar3;
      func_0x00010c271f40(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar1);
      _objc_retain(puVar3);
      _objc_retain(param_5);
      func_0x00010c0bcaa0(puVar5);
      _objc_release(puVar5);
      puVar5 = (undefined *)puStack_108[5];
      _objc_retain(puVar5);
      _objc_release(param_5);
      _objc_release(puVar3);
      _objc_release(puVar1);
      __Block_object_dispose(&uStack_110,8);
      _objc_release(uStack_e8);
      _objc_release(param_5);
      _objc_release(puVar1);
      _objc_release(puVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  return;
}



/* Entry: 106471d1c; end: 106471df3; -[SCLensSocialUnlockFlow _modularCameraLensData] */

void FUN_106471d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ae6a8;
  func_0x00010c0fdac0(PTR_PTR_1126ae6a8,param_2,&PTR____CFConstantStringClassReference_110f776f8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae6b0;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c025e20();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    _objc_retain(puVar3);
    _objc_retain(puVar1);
    _objc_retain(param_5);
    puStack_a8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a0 = 0x3032000000;
    pcStack_98 = FUN_106471f80;
    uStack_90 = 0x106471f90;
    uStack_88 = 0;
    puVar5 = puVar3;
    func_0x00010c271f40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    _objc_retain(puVar3);
    _objc_retain(param_5);
    func_0x00010c0bcaa0(puVar5);
    _objc_release(puVar5);
    puVar5 = (undefined *)puStack_a8[5];
    _objc_retain(puVar5);
    _objc_release(param_5);
    _objc_release(puVar3);
    _objc_release(puVar1);
    __Block_object_dispose(&uStack_b0,8);
    _objc_release(uStack_88);
    _objc_release(param_5);
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106471df4; end: 106471f7f; -[SCLensSocialUnlockFlow _lensReplyParamsWithReplyParameters:promptLensReplyParameters:inLensCreationReplyParameters:] */

void FUN_106471df4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106471f80;
  uStack_50 = 0x106471f90;
  uStack_48 = 0;
  uVar1 = param_3;
  func_0x00010c271f40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c0bcaa0(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_68[5];
  _objc_retain(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106471f80; end: 106471f97;  */

void FUN_106471f80(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106471f98; end: 1064722b7;  */

void FUN_106471f98(long param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  _objc_retain(param_2);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  puVar1 = param_2;
  func_0x00010c131c60(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_2;
  func_0x00010c0ec740(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c0ef340();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126ae6c0;
  puVar6 = puVar2;
  if (lVar10 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0ef340(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c294300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126ae6c8;
    _objc_alloc(PTR_PTR_1126ae6c8);
    puVar1 = param_2;
    func_0x00010c0ec740(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1322a0();
    puVar7 = param_2;
    func_0x00010c0ec740(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0ef340(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c118540(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03e6c0(puVar6);
    _objc_release(puVar2);
    _objc_release(uVar9);
    _objc_release(uVar4);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar1);
    puVar1 = puVar5;
  }
  lVar10 = *(long *)(param_1 + 0x28);
  func_0x00010c0d6ca0();
  if (lVar10 != -1) {
    func_0x00010c0d6ca0(*(undefined8 *)(param_1 + 0x28));
  }
  puVar5 = PTR_PTR_1126ae6d0;
  _objc_alloc(PTR_PTR_1126ae6d0);
  func_0x00010c132020(param_2);
  func_0x00010c03e5a0(puVar5);
  puVar2 = PTR_PTR_1126cac98;
  _objc_alloc();
  func_0x00010c03b680();
  puVar7 = PTR_PTR_1126b0100;
  _objc_alloc();
  func_0x00010bff7380();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  lVar10 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar4 = *(undefined8 *)(lVar10 + 0x28);
  *(undefined **)(lVar10 + 0x28) = puVar7;
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064722b8; end: 10647240b; -[SCLensSocialUnlockFlow _replyConfigurationWithLensReplyParams:] */

void FUN_1064722b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  puVar8 = PTR_PTR_1126b1bb0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf16600(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0967e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfbe400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfea1c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf4efc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c275580(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c091be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0967c0(puVar8,param_2,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10647240c; end: 106472983; -[SCLensSocialUnlockFlow _presentCameraWithPresentingViewController:lensModularCameraLensData:replyParameters:dismissBlock:lensWithId:collectionWithId:machineReadableCode:unlockableSnapInfo:needsLensReplyCameraScope:lensOptions:isLensCollectionType:] */

void FUN_10647240c(undefined **param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined **param_6,long param_7,long param_8,long param_9,
                  undefined8 param_10,char param_11,undefined4 param_12,undefined **param_13)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  if ((((param_11 == '\0') || (lVar7 = param_7, func_0x00010c08fa60(), lVar7 != 0)) ||
      (lVar7 = param_8, func_0x00010c08fa60(), param_9 != 0)) || (ppuVar1 = param_6, lVar7 != 0)) {
    func_0x00010be42a80(PTR_PTR_1126b5c38);
    func_0x00010be44de0(PTR_PTR_1126b5c38);
    ppuVar1 = param_13;
    func_0x00010bef0340();
    func_0x00010c074340();
    ppuVar2 = param_1;
    func_0x00010be7f7c0();
    if ((long)ppuVar2 < 2) {
      if (ppuVar2 == (undefined **)0x0) {
        func_0x00010c0d09c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0xc2000000;
        pcStack_90 = FUN_106472984;
        puStack_88 = &UNK_110849530;
        _objc_retain(param_6);
        ppuStack_80 = param_6;
        func_0x00010c10baa0(param_1);
        _objc_release(param_1);
        _objc_release(ppuStack_80);
        ppuVar1 = param_6;
      }
      else if (ppuVar2 == (undefined **)0x1) {
        func_0x00010c231f40();
        func_0x00010c097820();
        ppuVar1 = (undefined **)PTR_PTR_1126b0820;
        _objc_retain(param_7);
        _objc_alloc();
        ppuVar2 = ppuVar1;
        func_0x00010c2b2880();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_7);
        ppuVar3 = ppuVar2;
        func_0x00010c2bbd20();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar3;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar3);
        _objc_release(ppuVar2);
        _objc_release(ppuVar1);
        puVar6 = PTR_PTR_1126c2f10;
        _objc_alloc(PTR_PTR_1126c2f10);
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        ppuStack_78 = ppuVar4;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c025de0(puVar6);
        _objc_release(puVar5);
        _objc_release(ppuVar4);
        puVar5 = param_1[10];
        func_0x00010c269d40(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be8f080(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef0340(param_13);
        func_0x00010c10b700(puVar5);
        _objc_release(param_1);
        _objc_release(puVar5);
        _objc_release(puVar6);
      }
    }
    else if (ppuVar2 == (undefined **)0x2) {
      ppuVar2 = param_1;
      func_0x00010c0d0940(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef0340(param_13);
      ppuVar1 = param_1;
      func_0x00010beb5040(param_1);
      func_0x00010bf8f000();
      func_0x00010c10b5e0(ppuVar2);
      _objc_release(ppuVar2);
      func_0x00010be121e0(param_1);
    }
    else if (ppuVar2 == (undefined **)0x3) {
      _objc_initWeak(&ppuStack_78,param_3);
      ppuVar1 = param_13;
      func_0x00010bef0340();
      if (ppuVar1 == (undefined **)0x9) {
        uStack_a8 = true;
      }
      else {
        ppuVar1 = param_13;
        func_0x00010bef0340();
        uStack_a8 = ppuVar1 == (undefined **)0xf;
      }
      func_0x00010bef0340(param_13);
      puVar6 = param_1[0xe];
      func_0x00010c269d40(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be8f080(param_1);
      _objc_retainAutoreleasedReturnValue();
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_10647299c;
      puStack_c0 = &UNK_1108d0448;
      _objc_copyWeak(auStack_b0,&ppuStack_78);
      _objc_retain(param_6);
      ppuStack_b8 = param_6;
      func_0x00010c10c420(puVar6);
      _objc_release(param_1);
      _objc_release(puVar6);
      _objc_release(ppuStack_b8);
      _objc_destroyWeak(auStack_b0);
      _objc_destroyWeak(&ppuStack_78);
      ppuVar1 = &puStack_d8;
    }
  }
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar1 + 5);
  _objc_destroyWeak(&ppuStack_78);
  __Unwind_Resume();
  lVar7 = *(long *)(param_3 + 0x20);
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106472994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar7 + 0x10))(lVar7,0);
    return;
  }
  return;
}



/* Entry: 106472984; end: 10647299b;  */

void FUN_106472984(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106472994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 10647299c; end: 1064729f7;  */

void FUN_10647299c(long param_1,int param_2)

{
  long lVar1;
  
  if ((param_2 != 0) && ((*(byte *)(param_1 + 0x30) & 1) == 0)) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf83a80();
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001064729e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 1064729f8; end: 106472caf; -[SCLensSocialUnlockFlow _fetchLensWithId:machineReadableCode:unlockableSnapInfo:replyParameters:] */

void FUN_1064729f8(long param_1,undefined1 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_x23;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010be4a060(param_1);
  }
  else {
    _objc_initWeak(auStack_78,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010bf68fc0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = unaff_x23;
    func_0x00010bf272a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_106472cb0;
    puStack_a8 = &UNK_11085b2e0;
    param_2 = auStack_78;
    _objc_copyWeak(auStack_80);
    _objc_retain(param_3);
    lStack_a0 = param_3;
    _objc_retain(param_4);
    uStack_98 = param_4;
    _objc_retain(param_5);
    uStack_90 = param_5;
    _objc_retain(param_6);
    uVar5 = uVar4;
    uStack_88 = param_6;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = uVar5;
    _objc_release(uVar9);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar8);
    _objc_release(puVar3);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(lStack_a0);
    _objc_destroyWeak(auStack_80);
    _objc_release(unaff_x23);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  lVar1 = param_3;
  __Unwind_Resume();
  pcStack_c8 = FUN_106472cb0;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_100 = param_1;
  uStack_f8 = unaff_x23;
  uStack_f0 = param_6;
  uStack_e8 = param_5;
  uStack_e0 = param_4;
  lStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  lVar1 = lVar1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar6 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = &uStack_140;
    uStack_140 = 0;
    uStack_130 = 0x3032000000;
    pcStack_128 = FUN_106471f80;
    uStack_120 = 0x106471f90;
    uStack_118 = 0;
    puStack_168 = &uStack_170;
    uStack_170 = 0;
    uStack_160 = 0x3032000000;
    pcStack_158 = FUN_106471f80;
    uStack_150 = 0x106471f90;
    uStack_148 = 0;
    func_0x00010c0c0760();
    if (puStack_138[5] == 0) {
      func_0x00010be4a060(lVar1);
    }
    else {
      puVar3 = PTR_PTR_1126ae6b0;
      _objc_alloc(PTR_PTR_1126ae6b0);
      uStack_110 = puStack_138[5];
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c025e20(puVar3);
      _objc_release(puVar7);
      func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x28));
      _objc_release(puVar3);
    }
    __Block_object_dispose(&uStack_170,8);
    _objc_release(uStack_148);
    __Block_object_dispose(&uStack_140,8);
    _objc_release(uStack_118);
    _objc_release(puVar6);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_170,8);
  uVar2 = 8;
  __Block_object_dispose(&uStack_140);
  __Unwind_Resume();
  _objc_retain(uVar2);
  uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28);
  *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 106472cb0; end: 106472edb;  */

void FUN_106472cb0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar5 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_106471f80;
    uStack_60 = 0x106471f90;
    uStack_58 = 0;
    puStack_a8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a0 = 0x3032000000;
    pcStack_98 = FUN_106471f80;
    uStack_90 = 0x106471f90;
    uStack_88 = 0;
    func_0x00010c0c0760();
    if (puStack_78[5] == 0) {
      func_0x00010be4a060(param_1);
    }
    else {
      puVar1 = PTR_PTR_1126ae6b0;
      _objc_alloc(PTR_PTR_1126ae6b0);
      uStack_50 = puStack_78[5];
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c025e20(puVar1);
      _objc_release(puVar2);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
      _objc_release(puVar1);
    }
    __Block_object_dispose(&uStack_b0,8);
    _objc_release(uStack_88);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
    _objc_release(lVar5);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_b0,8);
  uVar4 = 8;
  __Block_object_dispose(&uStack_80);
  __Unwind_Resume();
  _objc_retain(uVar4);
  lVar5 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106472edc; end: 106472f4b;  */

void FUN_106472edc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106472f4c; end: 1064731f7; -[SCLensSocialUnlockFlow _legacyFetchLensWithId:machineReadableCode:unlockableSnapInfo:replyParameters:] */

void FUN_106472f4c(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_6;
  func_0x00010bf16600(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c243400();
  func_0x00010bed1680();
  _objc_release(uVar1);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar3 = param_4;
    func_0x00010c14f7e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b1ab0;
    puVar4 = puVar3;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c120080(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ee00(puVar3);
    func_0x00010c14f560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  else {
    puVar3 = PTR_PTR_1126b1ab8;
    _objc_alloc(PTR_PTR_1126b1ab8);
    func_0x00010c024960();
    puVar6 = PTR_PTR_1126b1ab0;
    func_0x00010c094620();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  _objc_initWeak(auStack_68,param_1);
  func_0x00010c097b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f8040();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  puVar3 = puVar6;
  _objc_retain(puVar6);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar1);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1064731f8; end: 10647325f;  */

void FUN_1064731f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be014e0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106473260; end: 1064733cb; -[SCLensSocialUnlockFlow _didUnlockLensWithResult:error:] */

long FUN_106473260(undefined *param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c094fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c0d0940(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_4;
    func_0x00010bf83500();
  }
  else {
    puVar2 = PTR_PTR_1126ae6b0;
    _objc_alloc();
    lVar1 = param_3;
    func_0x00010c094fa0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_60 = lVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c094fa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c025e20(puVar2,param_2,puVar3,lVar4);
    _objc_release(lVar4);
    _objc_release(puVar3);
    _objc_release(lVar1);
    puVar3 = puVar2;
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
    param_1 = puVar2;
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar1 = 9;
  if (((ulong)puVar3 & 0xfffffffffffffffe) == 0x2a) {
    lVar1 = 10;
  }
  return lVar1;
}



/* Entry: 1064733cc; end: 1064733df; +[SCLensSocialUnlockFlow _unlockSourceFromReplySnapSource:] */

undefined8 FUN_1064733cc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  uVar1 = 9;
  if ((param_3 & 0xfffffffffffffffe) == 0x2a) {
    uVar1 = 10;
  }
  return uVar1;
}



/* Entry: 1064733e0; end: 106473527; -[SCLensSocialUnlockFlow _shouldPresentWithGamesViewOnLensId:presentationMode:isPlayGamesCTA:isTurnBasedReply:activationSource:isGameLens:] */

ulong FUN_1064733e0(long param_1,undefined8 param_2,long param_3,long param_4,int param_5,
                   ulong param_6,long param_7,uint param_8)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (((*(long *)(param_1 + 0x78) == 0) || (*(long *)(param_1 + 0x70) == 0)) ||
     (lVar1 = param_3, func_0x00010c08fa60(), lVar1 == 0)) {
    uVar3 = 0;
    goto LAB_106473504;
  }
  uVar2 = *(ulong *)(param_1 + 0x78);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf92800();
  if (((param_6 & 1) == 0) && ((int)uVar3 != 0)) {
    if ((param_4 == 0) || (param_4 == 2)) {
      if ((param_8 == 0) || (uVar3 = uVar2, func_0x00010c263940(), (uVar3 & 1) == 0)) {
        if (param_5 == 0) {
          uVar3 = uVar2;
          func_0x00010c263920(uVar2);
          uVar3 = (ulong)(param_8 & (uint)uVar3);
        }
        else if ((param_7 == 9) || (param_7 == 0xf)) {
          uVar3 = uVar2;
          func_0x00010c2639a0(uVar2);
        }
        else {
          if (param_7 != 0xd) goto LAB_1064734d8;
          uVar3 = uVar2;
          func_0x00010c263980(uVar2);
        }
      }
      else {
LAB_1064734a8:
        uVar3 = 1;
      }
    }
    else if (param_4 == 1) {
      if ((param_8 != 0) && (uVar3 = uVar2, func_0x00010c263b60(), (uVar3 & 1) != 0))
      goto LAB_1064734a8;
      uVar3 = uVar2;
      func_0x00010c263b40(uVar2);
    }
    else {
LAB_1064734d8:
      uVar3 = 0;
    }
  }
  _objc_release(uVar2);
LAB_106473504:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 106473528; end: 1064735b7; -[SCLensSocialUnlockFlow _shouldPresentWithSingleLensModeOnLensId:] */

long FUN_106473528(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x78);
  if ((lVar1 == 0) || (*(long *)(param_1 + 0x70) == 0)) {
    lVar2 = 0;
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa26e0();
    if (lVar2 == 1) {
      lVar2 = lVar1;
      func_0x00010bf92800(lVar1,param_2,param_3);
    }
    else {
      lVar2 = 0;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 1064735b8; end: 1064735fb; +[SCLensSocialUnlockFlow _isPlayGamesCTAFromReplyParameters:] */

bool FUN_1064735b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010bf16600(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c0d6ca0();
  _objc_release(param_3);
  return lVar1 == 0x2a;
}



/* Entry: 1064735fc; end: 106473677; +[SCLensSocialUnlockFlow _isTurnBasedReplyFromReplyParameters:] */

bool FUN_1064735fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c091be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c118700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb2f00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c067ec0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return (int)uVar3 == 3;
}



/* Entry: 106473678; end: 106473773; -[SCLensSocialUnlockFlow _presentationModeWithIsLensCollectionType:collectionId:needsLensReplyCameraScope:lensId:isPlayGamesCTA:isTurnBasedReply:activationSource:isGameLens:] */

undefined8
FUN_106473678(long param_1,undefined8 param_2,int param_3,long param_4,int param_5,long param_6,
             undefined8 param_7,undefined8 param_8,undefined8 param_9,undefined1 param_10)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  if ((param_3 == 0) || (lVar1 = param_4, func_0x00010c08fa60(), lVar1 == 0)) {
    if ((param_5 == 0) || (lVar1 = param_6, func_0x00010c08fa60(), lVar1 == 0)) {
      uVar2 = 2;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  lVar1 = param_1;
  func_0x00010beb5020(param_1,param_2,param_6,uVar2,param_7,param_8,param_9,param_10);
  if ((int)lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x70);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = 3;
    }
  }
  _objc_release(param_6);
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 106473774; end: 106473833; -[SCLensSocialUnlockFlow .cxx_destruct] */

void FUN_106473774(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106473834; end: 10647392b; -[SCLensSocialUnlockV2DeepLinkPolicy canUnlockDeepLinkURL:] */

ulong FUN_106473834(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar2 != 0) {
    puVar3 = PTR_PTR_1126b6330;
    func_0x00010c280c00(PTR_PTR_1126b6330,param_2,param_3);
    if (puVar3 == (undefined *)0x2) {
      uVar5 = 1;
      goto LAB_106473904;
    }
  }
  uVar2 = param_3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0720c0();
  if ((uVar4 & 1) == 0) {
    uVar4 = param_3;
    func_0x00010bfa1820(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar4);
  }
  else {
    uVar5 = 1;
  }
  _objc_release(uVar2);
LAB_106473904:
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 10647392c; end: 1064739cf; -[SCContextV2ChatLogger initWithChatLogger:conversationIdResolver:] */

undefined1 *
FUN_10647392c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f14b8;
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



/* Entry: 1064739d0; end: 1064739df; -[SCContextV2ChatLogger logChatCreateOneOnOneWithRecipientUserId:source:] */

void FUN_1064739d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be51870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logChatCreateOneOnOneWithRecipi_112571fb8,0,param_3,param_4);
  return;
}



/* Entry: 1064739e0; end: 1064739e3; -[SCContextV2ChatLogger logChatCreateOneOnOneWithRecipientUsername:recipientUserId:source:] */

void FUN_1064739e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be51870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logChatCreateOneOnOneWithRecipi_112571fb8);
  return;
}



/* Entry: 1064739e4; end: 106473a63; -[SCContextV2ChatLogger logSCAChatCreateGroupWithMischiefId:source:] */

void FUN_1064739e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae8e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


