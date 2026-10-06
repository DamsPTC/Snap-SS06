/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10682ac7c; end: 10682ac93; -[SCCreatorsSpotlightActionHandler presentingViewControllerForOurStoryDeepLinkHandlerScope] */

void FUN_10682ac7c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10682ac94; end: 10682acd3; -[SCCreatorsSpotlightActionHandler removeOurStoryDeeplinkScope] */

void FUN_10682ac94(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10682acd4; end: 10682aceb; -[SCCreatorsSpotlightActionHandler handleSpotlightSnapDeepLinkWithSnapId:compositeStoryId:] */

void FUN_10682acd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e9870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_openSpotlightSnapWithSnapId_comm_112618030,param_3,0,0,0,0,param_4);
  return;
}



/* Entry: 10682acec; end: 10682ad1f; -[SCCreatorsSpotlightActionHandler handleSpotlightSnapDeepLinkWithSnapId:compositeStoryId:hashtag:musicId:] */

void FUN_10682acec(void)

{
  func_0x00010be6d680();
  return;
}



/* Entry: 10682ad20; end: 10682ae87; -[SCCreatorsSpotlightActionHandler didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_10682ad20(long param_1,undefined8 param_2,int param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_5);
  func_0x00010c0720c0();
  if ((param_3 != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    uVar1 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar5 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar2);
    uVar2 = uVar5;
    func_0x00010c067ec0(uVar5);
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c071ae0();
    _objc_release(puVar3);
    if ((int)uVar4 == 0) {
      uVar6 = 0;
      uVar4 = uVar5;
    }
    else {
      uVar4 = 0;
      uVar6 = uVar1;
    }
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),(int)uVar2 == 3,uVar4,uVar6);
    _objc_release(uVar5);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10682ae88; end: 10682aef7; -[SCCreatorsSpotlightActionHandler .cxx_destruct] */

void FUN_10682ae88(long param_1)

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



/* Entry: 10682aef8; end: 10682b073; -[SCCreatorsStorySharingActionHandler initWithUiContainer:sendToScopeExposer:sendToScopeServices:snapProShareMessageSender:simpleContentFetcher:offPlatformLinkGenerationService:circumstanceEngine:] */

undefined1 *
FUN_10682aef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f3688;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10682b074; end: 10682b1ab; -[SCCreatorsStorySharingActionHandler shareSavedStoryWithStoryId:profileId:username:thumbnailUrl:] */

void FUN_10682b074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  puVar2 = (undefined *)0x0;
  if (param_6 != 0) {
    _objc_retain(param_6);
    _objc_alloc(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    func_0x00010c0040a0(puVar1);
    func_0x00010c14d040(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar2);
    puVar2 = puVar3;
  }
  uVar4 = param_3;
  func_0x000108f51ed0(param_3,0x2b,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22ae40(param_1);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10682b1ac; end: 10682b33b; -[SCCreatorsStorySharingActionHandler shareFeedCardWithCompositeFeedCardId:profileId:username:thumbnailCO:] */

void FUN_10682b1ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_6 == 0) {
    func_0x00010c22ae40(param_1,param_2,param_3,param_4,param_5,0);
  }
  else {
    puVar1 = PTR_PTR_1126b08b0;
    func_0x00010bf4cd80(PTR_PTR_1126b08b0,param_2,param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b17d8;
    _objc_alloc(PTR_PTR_1126b17d8);
    func_0x00010c003a80();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10682b33c;
    puStack_78 = &UNK_110942248;
    lStack_70 = param_1;
    _objc_retain(param_3);
    uStack_68 = param_3;
    _objc_retain(param_4);
    uStack_60 = param_4;
    _objc_retain(param_5);
    uStack_58 = param_5;
    func_0x00010c13e600(uVar3,param_2,puVar2,&puStack_90);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10682b33c; end: 10682b3df;  */

void FUN_10682b33c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfcaaa0();
  if (lVar1 == 0) {
    lVar1 = param_2;
    func_0x00010c13e900(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22ae40(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  else {
    func_0x00010c22ae40(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10682b3e0; end: 10682b44b; -[SCCreatorsStorySharingActionHandler _getHighlightIdFromStoryIdString:] */

void FUN_10682b3e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010bf44740(param_3,param_2,&PTR____CFConstantStringClassReference_110e610f8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 3) {
    lVar1 = param_3;
    func_0x00010c0dfd40(param_3,param_2,1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10682b44c; end: 10682b69b; -[SCCreatorsStorySharingActionHandler shareSavedStoryWithCompositeId:profileId:username:thumbnailImage:] */

void FUN_10682b44c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) goto LAB_10682b660;
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_4;
  _objc_release(uVar2);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(ulong *)(param_1 + 0x30) = param_3;
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b0810;
  _objc_alloc(PTR_PTR_1126b0810);
  func_0x00010c046120();
  if (param_6 == 0) {
LAB_10682b548:
    uStack_68 = (undefined *)0x0;
    lVar1 = 0;
  }
  else {
    uStack_68 = PTR_PTR_1126b4458;
    _objc_alloc();
    func_0x00010c01c300();
    if (uStack_68 == (undefined *)0x0) goto LAB_10682b548;
    lVar1 = param_1;
    func_0x00010bea0ba0(param_1,param_2,uStack_68);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR_PTR_1126b0818;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c044540(puVar4,param_2,puVar5,2,0x1c,0xffffffffffffffff,0x27,0,0,0,param_3,0,0);
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010c15d5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar5;
  _objc_release(uVar2);
  lVar6 = param_1;
  func_0x00010bea0e40(param_1,param_2,param_5,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf23ee0(uVar2,param_2,*(undefined8 *)(param_1 + 0x40),
                      PTR____NSArray0__struct_11034ab48,lVar1,0,puVar3,0,lVar6,puVar4,
                      uVar7 & 0xffffffffffff0000,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(lVar6);
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release(uStack_68);
  _objc_release(puVar3);
LAB_10682b660:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10682b69c; end: 10682b81f; -[SCCreatorsStorySharingActionHandler _sendToShareSheetConfigurationWithUsername:compositeId:] */

void FUN_10682b69c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be1f920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(lVar1);
    func_0x00010bf11fe0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b0808;
    _objc_alloc(PTR_PTR_1126b0808);
    func_0x00010c051820();
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10682b820; end: 10682b913;  */

void FUN_10682b820(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbf920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126ae558;
  puVar3 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  uVar1 = uVar2;
  func_0x00010beec820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051840(puVar3,param_2,uVar1,uVar2,0,4,0,0);
  func_0x00010bfe9ca0(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10682b914; end: 10682ba33; -[SCCreatorsStorySharingActionHandler _sendToPreviewConfigurationWithPreviewModel:] */

void FUN_10682b914(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10682ba34;
  puStack_50 = &UNK_110917b38;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b07e8;
  _objc_alloc(PTR_PTR_1126b07e8);
  func_0x00010c061960();
  puVar3 = PTR_PTR_1126b07f0;
  func_0x00010c0c70e0(param_3);
  func_0x00010c299100(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b07f8;
  _objc_alloc(PTR_PTR_1126b07f8);
  func_0x00010c01dde0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10682ba34; end: 10682ba3b;  */

void FUN_10682ba34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c70d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_mediaView_11260f648);
  return;
}



/* Entry: 10682ba3c; end: 10682ba83; -[SCCreatorsStorySharingActionHandler didDismissWithSelectedItems:sendToDismissSource:] */

void FUN_10682ba3c(long param_1)

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



/* Entry: 10682ba84; end: 10682bd87; -[SCCreatorsStorySharingActionHandler didSendWithSelectionState:] */

void FUN_10682ba84(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lVar3 = param_3;
  func_0x00010c1599e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      lVar16 = *(long *)(lVar15 * 8);
      lVar5 = lVar16;
      func_0x00010c0f4aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar9 = PTR_PTR_1126b01c0;
      lVar6 = lVar16;
      func_0x00010c122a80(lVar16);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c122b80();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0) {
        func_0x00010c294260();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        _objc_release(lVar7);
      }
      else {
        func_0x00010bfcf680();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(lVar6);
        func_0x00010c0f4aa0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        lVar6 = lVar16;
      }
      _objc_release(lVar6);
      func_0x00010befa120(puVar2);
      _objc_release(puVar9);
      lVar15 = lVar15 + 1;
    } while (lVar4 != lVar15);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar9 = PTR_PTR_1126b5be0;
  _objc_alloc();
  func_0x00010c000b80();
  uVar10 = *(undefined8 *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  _objc_retain(puVar9);
  _objc_retain(param_3);
  func_0x00010bf6f440(uVar11);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(puVar2);
  _objc_release(puVar9);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  ppuVar12 = &PTR____CFConstantStringClassReference_110e1f218;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1f218,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  FUN_107240204(ppuVar12,puVar2,&PTR____CFConstantStringClassReference_110e61118);
  _objc_release(puVar2);
  _objc_release(ppuVar12);
  uVar10 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 8);
  func_0x00010c150520(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c1599e0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf75420(uVar11);
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x18);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010befd440(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22ade0(uVar10);
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar10);
  return;
}



/* Entry: 10682bd88; end: 10682bef7;  */

void FUN_10682bd88(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1f218;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1f218,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  FUN_107240204(ppuVar1,puVar2,&PTR____CFConstantStringClassReference_110e61118);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c150520(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c1599e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf75420(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010befd440(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22ade0(uVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10682bef8; end: 10682beff; -[SCCreatorsStorySharingActionHandler shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_10682bef8(void)

{
  return 0;
}



/* Entry: 10682bf00; end: 10682bf0b; -[SCCreatorsStorySharingActionHandler pushToValdiMarshaller:] */

void FUN_10682bf00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b046e08(param_3,param_1);
  func_0x00010b046ddc();
  func_0x00010b046de4();
  func_0x00010b046d54();
  func_0x00010b046d94();
  return;
}



/* Entry: 10682bf0c; end: 10682bf9b; -[SCCreatorsStorySharingActionHandler .cxx_destruct] */

void FUN_10682bf0c(long param_1)

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



/* Entry: 10682bf9c; end: 10682c00f; -[SCCreatorsStorySnapViewStateProvider initWithReadReceiptCoordinator:] */

undefined1 * FUN_10682bf9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3690;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10682c010; end: 10682c0df; -[SCCreatorsStorySnapViewStateProvider getViewStatesWithSnapIds:callback:] */

void FUN_10682c010(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10682c0e0;
  puStack_48 = &UNK_1108846a8;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c121840(uVar1,param_2,param_3,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10682c0e0; end: 10682c28b;  */

void FUN_10682c0e0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar8 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar11 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar11);
  lVar9 = 0x10;
  lVar3 = lVar11;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(lVar11);
        }
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar2 = PTR_PTR_1126c55e8;
        _objc_alloc();
        func_0x00010c047ee0();
        func_0x00010befa120(puVar1);
        _objc_release(puVar2);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar9 = 0x10;
      lVar3 = lVar11;
      puVar8 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar11);
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    puVar8 = (undefined8 *)0x0;
    (**(code **)(lVar3 + 0x10))(lVar3,puVar1);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar8);
  _objc_retain(lVar9);
  puVar1 = PTR_PTR_1126b2798;
  _objc_opt_new();
  if (lVar9 == 0) {
    puVar2 = PTR_PTR_1126b2f30;
    _objc_alloc(PTR_PTR_1126b2f30);
    _objc_retain(puVar1);
    func_0x00010bffae00(puVar2);
    puVar4 = puVar1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    _objc_retain(puVar8);
    puVar5 = (undefined1 *)puVar8;
    func_0x00010bf52a60();
    lVar11 = lRam0000000000000000;
    while (puVar5 != (undefined1 *)0x0) {
      puVar10 = (undefined1 *)0x0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(puVar8);
        }
        uVar12 = *(undefined8 *)((long)puVar10 * 8);
        uVar6 = uVar12;
        func_0x00010c241220(uVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar6);
        if (puVar2 == (undefined *)0x0) {
          puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
          _objc_alloc_init(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
          uVar6 = uVar12;
          func_0x00010c241220(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar4);
          _objc_release(uVar6);
          _objc_release(puVar2);
        }
        uVar6 = uVar12;
        func_0x00010c241220(uVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar4;
        func_0x00010c0e00e0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c259cc0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(uVar12);
        _objc_release(puVar2);
        _objc_release(uVar6);
        puVar10 = puVar10 + 1;
      } while (puVar5 != puVar10);
      puVar5 = (undefined1 *)puVar8;
      func_0x00010bf52a60();
    }
    _objc_release(puVar8);
    uVar7 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c258b20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar9);
    _objc_retain(puVar4);
    uVar12 = uVar6;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    _objc_retain(uVar12);
    func_0x00010bffae00(puVar2);
    func_0x00010bef7460(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b2f30;
    _objc_alloc(PTR_PTR_1126b2f30);
    _objc_retain(puVar1);
    func_0x00010bffae00(puVar2);
    _objc_release(puVar1);
    _objc_release(uVar12);
    _objc_release(uVar12);
    _objc_release(lVar9);
    _objc_release(puVar4);
  }
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(lVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)((long)puVar8 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 10682c28c; end: 10682c697; -[SCCreatorsStorySnapViewStateProvider observeViewStateWithOrganicStoryIdSnapIdPairs:promotedStoryIdSnapCountPairs:callback:] */

void FUN_10682c28c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b2798;
  _objc_opt_new();
  if (param_5 == 0) {
    puVar7 = PTR_PTR_1126b2f30;
    _objc_alloc(PTR_PTR_1126b2f30);
    _objc_retain(puVar2);
    func_0x00010bffae00(puVar7);
    puVar3 = puVar2;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    _objc_retain(param_3);
    lVar4 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        uVar10 = *(undefined8 *)(lVar9 * 8);
        uVar5 = uVar10;
        func_0x00010c241220(uVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar5);
        if (puVar7 == (undefined *)0x0) {
          puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
          _objc_alloc_init(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
          uVar5 = uVar10;
          func_0x00010c241220(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(uVar5);
          _objc_release(puVar7);
        }
        uVar5 = uVar10;
        func_0x00010c241220(uVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c0e00e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c259cc0(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7);
        _objc_release(uVar10);
        _objc_release(puVar7);
        _objc_release(uVar5);
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      lVar4 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c258b20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    _objc_retain(puVar3);
    uVar10 = uVar5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar6);
    puVar7 = PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    _objc_retain(uVar10);
    func_0x00010bffae00(puVar7);
    func_0x00010bef7460(puVar2);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126b2f30;
    _objc_alloc(PTR_PTR_1126b2f30);
    _objc_retain(puVar2);
    func_0x00010bffae00(puVar7);
    _objc_release(puVar2);
    _objc_release(uVar10);
    _objc_release(uVar10);
    _objc_release(param_5);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_3 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 10682c698; end: 10682c69f;  */

void FUN_10682c698(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 10682c6a0; end: 10682c96b;  */

void FUN_10682c6a0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      lVar5 = param_2;
      func_0x00010c0e00e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = *(long *)(param_1 + 0x20);
      lVar6 = lVar5;
      func_0x00010c243260();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      lVar6 = lVar12;
      func_0x00010bf529e0();
      if (lVar6 != 0) {
        _objc_retain(lVar12);
        lVar6 = lVar12;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar6 != 0) {
          lVar11 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar12);
            }
            puVar7 = PTR_PTR_1126c55e8;
            _objc_alloc(PTR_PTR_1126c55e8);
            lVar8 = lVar5;
            func_0x00010c243260(lVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c29ea60(lVar5);
            func_0x00010c047ee0(puVar7);
            _objc_release(lVar8);
            func_0x00010c20d1a0(puVar7);
            func_0x00010befa120(puVar3);
            _objc_release(puVar7);
            lVar11 = lVar11 + 1;
          } while (lVar6 != lVar11);
          lVar6 = lVar12;
          func_0x00010bf52a60();
        }
        _objc_release(lVar12);
      }
      _objc_release(lVar12);
      _objc_release(lVar5);
      lVar10 = lVar10 + 1;
    } while (lVar10 != lVar4);
    lVar4 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  puVar7 = puVar3;
  func_0x00010bf529e0();
  if (puVar7 != (undefined *)0x0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),puVar3,PTR____NSArray0__struct_11034ab48);
  }
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_2 + 0x20),PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 10682c96c; end: 10682c97b;  */

void FUN_10682c96c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 10682c97c; end: 10682c983; -[SCCreatorsStorySnapViewStateProvider shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_10682c97c(void)

{
  return 0;
}



/* Entry: 10682c984; end: 10682c98f; -[SCCreatorsStorySnapViewStateProvider pushToValdiMarshaller:] */

void FUN_10682c984(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b04af98(param_3,param_1);
  func_0x00010b04af88();
  func_0x00010b04af80();
  func_0x00010b04aef0();
  func_0x00010b04af30();
  return;
}



/* Entry: 10682c990; end: 10682c99b; -[SCCreatorsStorySnapViewStateProvider .cxx_destruct] */

void FUN_10682c990(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10682c99c; end: 10682cb77; -[SCCreatorsUrlActionHandler initWithNavigationDelegate:viewController:deepLinkHandler:deepLinkSendToScopeExposer:webBrowserScopeExposer:webBrowsingScopeServices:safeBrowsingAPI:businessProfileId:spotlightSnapDeepLinkHandler:circumstanceEngine:] */

undefined8 *
FUN_10682c99c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

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
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126f3698;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 0xb,param_3);
    _objc_storeWeak(puVar1 + 10,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[1];
    puVar1[1] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[2];
    puVar1[2] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 6,param_11);
    _objc_retain(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    _objc_release(uVar2);
  }
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



/* Entry: 10682cb78; end: 10682cbab; -[SCCreatorsUrlActionHandler initWithNavigationDelegate:viewController:deepLinkHandler:deepLinkSendToScopeExposer:webBrowserScopeExposer:safeBrowsingAPI:businessProfileId:spotlightSnapDeepLinkHandler:circumstanceEngine:] */

void FUN_10682cb78(void)

{
  func_0x00010c02e9a0();
  return;
}



/* Entry: 10682cbac; end: 10682cc4f; -[SCCreatorsUrlActionHandler shareUrlWithUrl:] */

void FUN_10682cbac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10682cc50;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  uStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 10682cc50; end: 10682cebb;  */

void FUN_10682cc50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined **ppuStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_f8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = *(undefined **)(param_5 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_6,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  func_0x00010c08fa60();
  _objc_release(puVar8);
  puVar8 = (undefined *)0x0;
  if (puVar2 != (undefined *)0x0) {
    lVar10 = *(long *)(param_5 + 0x28) + 0x50;
    _objc_loadWeakRetained();
    lVar3 = lVar10;
    func_0x000108f04e30();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    puVar2 = PTR_PTR_1126aeb08;
    _objc_alloc();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_70,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff0f80(puVar2,param_6,puVar8,0);
    _objc_release(puVar8);
    uStack_88 = *(undefined8 *)PTR__UIActivityTypeAddToReadingList_110345978;
    uStack_80 = *(undefined8 *)PTR__UIActivityTypeAssignToContact_110345988;
    uStack_78 = *(undefined8 *)PTR__UIActivityTypePrint_1103459e8;
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&uStack_88,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c197fe0(puVar2,param_6,puVar8);
    puVar6 = puVar2;
    func_0x00010c103ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar6 != (undefined *)0x0) {
      lVar10 = lVar3;
      func_0x00010c29bf00(lVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c103ba0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2072a0();
      _objc_release(puVar6);
      _objc_release(lVar10);
      lVar10 = lVar3;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      puVar6 = puVar2;
      func_0x00010c103ba0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c207040(param_1,param_2,param_3,param_4);
      _objc_release(puVar6);
      _objc_release(lVar10);
    }
    puVar6 = puVar2;
    func_0x00010c10eda0(lVar3,param_6,puVar2,1,0);
    _objc_release(puVar8);
    _objc_release(puVar2);
    _objc_release(lVar3);
  }
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  ppuVar7 = &puStack_1c0;
  pcStack_98 = FUN_10682cebc;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010beec820(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf44760(puVar1,param_6,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lStack_1b8 = 0;
  puStack_1c0 = (undefined *)0x0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  puVar2 = puVar1;
  func_0x00010c11d4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010bf52a60();
  if (puVar6 != (undefined *)0x0) {
    lVar10 = *plStack_1b0;
    puVar8 = puVar6;
    do {
      puVar6 = (undefined *)0x0;
      do {
        if (*plStack_1b0 != lVar10) {
          _objc_enumerationMutation(puVar2);
        }
        puVar9 = *(undefined **)(lStack_1b8 + (long)puVar6 * 8);
        puVar4 = puVar9;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        ppuVar7 = &PTR____CFConstantStringClassReference_110e61138;
        func_0x00010c0720c0();
        _objc_release(puVar4);
        if (((ulong)puVar5 & 1) != 0) {
          func_0x00010c296d80();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          _objc_release(puVar2);
          puVar2 = puVar9;
          goto LAB_10682d014;
        }
        puVar6 = puVar6 + 1;
      } while (puVar8 != puVar6);
      puVar8 = puVar2;
      ppuVar7 = &puStack_1c0;
      func_0x00010bf52a60();
    } while (puVar8 != (undefined *)0x0);
  }
  puVar9 = puVar2;
  puVar2 = (undefined *)0x0;
LAB_10682d014:
  _objc_release(puVar9);
  puVar6 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  pcStack_1c8 = FUN_10682d064;
  puStack_1f0 = puVar8;
  puStack_1e8 = puVar2;
  puStack_1e0 = puVar9;
  puStack_1d8 = puVar1;
  ppuStack_1d0 = &puStack_a0;
  _objc_retain(ppuVar7);
  lVar10 = *(long *)(puVar6 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar10 == 0) {
    puVar8 = *(undefined **)(puVar6 + 0x28);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126ae638;
      _objc_opt_new();
      puVar8 = puVar1;
    }
    else {
      puVar1 = puVar8;
      _objc_retain(puVar8);
    }
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_220 = 0xc2000000;
    pcStack_218 = FUN_10682d154;
    puStack_210 = &UNK_110848ba8;
    _objc_retain(ppuVar7);
    ppuStack_208 = ppuVar7;
    puStack_200 = puVar6;
    puStack_1f8 = puVar8;
    func_0x00010c0f7fc0(puVar1,param_6,&puStack_228);
    _objc_release(puVar1);
    _objc_release(ppuStack_208);
    _objc_release(puVar8);
  }
  _objc_release(ppuVar7);
  return;
}



/* Entry: 10682cebc; end: 10682d063; -[SCCreatorsUrlActionHandler _compositeStoryIdFromURL:] */

void FUN_10682cebc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *unaff_x22;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar5 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  ppuVar4 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010beec820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf44760(puVar5,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  puVar1 = puVar5;
  func_0x00010c11d4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bf52a60();
  if (puVar8 != (undefined *)0x0) {
    lVar7 = *plStack_120;
    unaff_x22 = puVar8;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(puVar1);
        }
        puVar6 = *(undefined **)(lStack_128 + (long)puVar8 * 8);
        puVar2 = puVar6;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        ppuVar4 = &PTR____CFConstantStringClassReference_110e61138;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        if (((ulong)puVar3 & 1) != 0) {
          func_0x00010c296d80();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          _objc_release(puVar1);
          puVar1 = puVar6;
          goto LAB_10682d014;
        }
        puVar8 = puVar8 + 1;
      } while (unaff_x22 != puVar8);
      unaff_x22 = puVar1;
      ppuVar4 = &puStack_130;
      func_0x00010bf52a60();
    } while (unaff_x22 != (undefined *)0x0);
  }
  puVar6 = puVar1;
  puVar1 = (undefined *)0x0;
LAB_10682d014:
  _objc_release(puVar6);
  puVar8 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10682d064;
  puStack_160 = unaff_x22;
  puStack_158 = puVar1;
  puStack_150 = puVar6;
  puStack_148 = puVar5;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar4);
  lVar7 = *(long *)(puVar8 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 == 0) {
    puVar5 = *(undefined **)(puVar8 + 0x28);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126ae638;
      _objc_opt_new();
      puVar5 = puVar1;
    }
    else {
      puVar1 = puVar5;
      _objc_retain(puVar5);
    }
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_190 = 0xc2000000;
    pcStack_188 = FUN_10682d154;
    puStack_180 = &UNK_110848ba8;
    _objc_retain(ppuVar4);
    ppuStack_178 = ppuVar4;
    puStack_170 = puVar8;
    puStack_168 = puVar5;
    func_0x00010c0f7fc0(puVar1,param_2,&puStack_198);
    _objc_release(puVar1);
    _objc_release(ppuStack_178);
    _objc_release(puVar5);
  }
  _objc_release(ppuVar4);
  return;
}



/* Entry: 10682d064; end: 10682d153; -[SCCreatorsUrlActionHandler openUrlWithUrl:sourceType:] */

void FUN_10682d064(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar3 = *(undefined **)(param_1 + 0x28);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = PTR_PTR_1126ae638;
      _objc_opt_new();
      puVar3 = puVar2;
    }
    else {
      puVar2 = puVar3;
      _objc_retain(puVar3);
    }
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10682d154;
    puStack_50 = &UNK_110848ba8;
    _objc_retain(param_3);
    uStack_48 = param_3;
    lStack_40 = param_1;
    puStack_38 = puVar3;
    func_0x00010c0f7fc0(puVar2,param_2,&puStack_68);
    _objc_release(puVar2);
    _objc_release(uStack_48);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10682d154; end: 10682d96f;  */

void FUN_10682d154(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  uint uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_170;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = *(undefined **)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar6;
  func_0x00010c08fa60();
  _objc_release(puVar6);
  if (puVar2 == (undefined *)0x0) goto LAB_10682d92c;
  puVar6 = puVar1;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar6;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  if ((int)puVar9 == 0) {
LAB_10682d49c:
    puVar6 = puVar1;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    _objc_release(puVar6);
    if ((int)puVar9 == 0) {
LAB_10682d544:
      puVar6 = puVar1;
      func_0x00010bfe4420();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar6;
      func_0x00010c0720c0();
      if ((int)puVar2 == 0) {
        uVar11 = 0;
      }
      else {
        puVar2 = puVar1;
        func_0x00010c0f5800();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar2;
        func_0x00010bfda7c0();
        if (((ulong)puVar9 & 1) == 0) {
          puVar9 = puVar1;
          func_0x00010c0f5800();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar9;
          func_0x00010bfda7c0();
          uVar11 = (uint)puVar13;
          _objc_release(puVar9);
        }
        else {
          uVar11 = 1;
        }
        _objc_release(puVar2);
      }
      _objc_release(puVar6);
      puVar6 = puVar1;
      func_0x00010bfe4420();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar6;
      func_0x00010c0720c0();
      _objc_release(puVar6);
      puVar6 = puVar1;
      func_0x00010c1504a0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar6;
      func_0x00010c0720c0();
      if (((ulong)puVar9 & 1) == 0) {
        puVar9 = puVar1;
        func_0x00010c1504a0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar9;
        func_0x00010c0720c0();
        uVar11 = uVar11 | (uint)puVar13 ^ 0xffffffff;
        _objc_release(puVar9);
      }
      _objc_release(puVar6);
      if (((uVar11 | (uint)puVar2) & 1) != 0) {
        puVar6 = puVar1;
        func_0x00010c1504a0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar6;
        func_0x00010c0720c0();
        puVar9 = puVar1;
        if ((int)puVar2 == 0) {
          puVar2 = puVar1;
          func_0x00010c1504a0();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar2;
          func_0x00010c0720c0();
          _objc_release(puVar2);
          _objc_release(puVar6);
          if ((int)puVar13 == 0) {
            puVar6 = *(undefined **)(*(long *)(param_1 + 0x28) + 8);
            func_0x00010c269d40(puVar6);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfd1bc0(puVar6);
            goto LAB_10682d920;
          }
        }
        else {
          _objc_release(puVar6);
        }
        puVar6 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e9b80();
        goto LAB_10682d924;
      }
      puVar2 = PTR_PTR_1126ae630;
      func_0x00010bfe6000(PTR_PTR_1126ae630);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c2b9b80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126ae560;
      _objc_opt_new(PTR_PTR_1126ae560);
      puVar9 = puVar2;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar1;
      _objc_retain(puVar1);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(puVar9);
      _objc_release(puVar13);
      _objc_release(puVar9);
      lVar5 = *(long *)(param_1 + 0x28) + 0x50;
      _objc_loadWeakRetained(lVar5);
      lVar7 = lVar5;
      func_0x000108f04e30();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      puVar14 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      puVar15 = PTR_PTR_1126c5b30;
      _objc_alloc(PTR_PTR_1126c5b30);
      func_0x00010bffe1e0();
      puVar13 = *(undefined **)(param_1 + 0x30);
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf22ba0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      puVar9 = puVar13;
      func_0x00010bf9d620(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20));
      _objc_release(puVar13);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(lVar7);
      _objc_release(puVar1);
    }
    else {
      puVar6 = *(undefined **)(param_1 + 0x28);
      func_0x00010bde40c0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar6 == (undefined *)0x0) {
LAB_10682d53c:
        _objc_release(puVar6);
        goto LAB_10682d544;
      }
      lVar5 = *(long *)(param_1 + 0x28) + 0x30;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 == 0) goto LAB_10682d53c;
      puVar2 = (undefined *)(*(long *)(param_1 + 0x28) + 0x30);
      _objc_loadWeakRetained(puVar2);
      puVar9 = puVar6;
      func_0x00010bfd29e0();
    }
LAB_10682d920:
    _objc_release(puVar2);
  }
  else {
    puVar2 = puVar1;
    func_0x00010beec820(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf44760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar6;
    func_0x00010c11d4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    if (puVar9 == (undefined *)0x0) {
      puStack_170 = (undefined *)0x0;
      puVar14 = (undefined *)0x0;
      puVar13 = (undefined *)0x0;
    }
    else {
      puStack_170 = (undefined *)0x0;
      puVar14 = (undefined *)0x0;
      puVar13 = (undefined *)0x0;
      do {
        puVar15 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar5) {
            _objc_enumerationMutation(puVar2);
          }
          puVar12 = *(undefined **)((long)puVar15 * 8);
          puVar3 = puVar12;
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c0720c0();
          _objc_release(puVar3);
          if ((int)puVar4 == 0) {
            puVar3 = puVar12;
            func_0x00010c0d4f60();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c0720c0();
            _objc_release(puVar3);
            if ((int)puVar4 != 0) {
              func_0x00010c296d80();
              _objc_retainAutoreleasedReturnValue();
              puVar3 = puVar14;
              puVar14 = puVar12;
              goto LAB_10682d3b8;
            }
            puVar3 = puVar12;
            func_0x00010c0d4f60();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c0720c0();
            _objc_release(puVar3);
            if ((int)puVar4 != 0) {
              func_0x00010c296d80();
              _objc_retainAutoreleasedReturnValue();
              puVar3 = puStack_170;
              puStack_170 = puVar12;
              goto LAB_10682d3b8;
            }
          }
          else {
            func_0x00010c296d80();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar13;
            puVar13 = puVar12;
LAB_10682d3b8:
            _objc_release(puVar3);
            param_2 = puVar12;
          }
          puVar15 = puVar15 + 1;
        } while (puVar9 != puVar15);
        puVar9 = puVar2;
        func_0x00010bf52a60();
      } while (puVar9 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    puVar2 = puVar13;
    func_0x00010c08fa60();
    if (puVar2 == (undefined *)0x0) {
LAB_10682d478:
      _objc_release(puStack_170);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar6);
      goto LAB_10682d49c;
    }
    lVar5 = *(long *)(param_1 + 0x28) + 0x30;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar5 == 0) goto LAB_10682d478;
    lVar5 = *(long *)(param_1 + 0x28) + 0x30;
    _objc_loadWeakRetained(lVar5);
    puVar9 = puVar13;
    func_0x00010bfd2a00();
    _objc_release(lVar5);
    _objc_release(puStack_170);
    _objc_release(puVar14);
    _objc_release(puVar13);
  }
LAB_10682d924:
  _objc_release(puVar6);
LAB_10682d92c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  if ((param_2 != (undefined *)0x0) && (puVar9 == (undefined *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(puVar1 + 0x20));
    return;
  }
  return;
}



/* Entry: 10682d970; end: 10682d987;  */

void FUN_10682d970(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 10682d988; end: 10682da4f; -[SCCreatorsUrlActionHandler sendUrlWithUrl:] */

void FUN_10682d988(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = uVar3;
    _objc_retain(uVar3);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10682da50;
    puStack_50 = &UNK_110848ba8;
    _objc_retain(param_3);
    lStack_48 = param_3;
    lStack_40 = param_1;
    uStack_38 = uVar3;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_68);
    _objc_release(uVar2);
    _objc_release(lStack_48);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10682da50; end: 10682db67;  */

void FUN_10682da50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    lVar2 = *(long *)(param_1 + 0x28) + 0x50;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x000108f04e30();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar4 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x48);
    *(undefined **)(*(long *)(param_1 + 0x28) + 0x48) = puVar4;
    _objc_release(uVar6);
    puVar4 = PTR_PTR_1126b1b28;
    func_0x00010c11b760(PTR_PTR_1126b1b28,param_2,puVar1,0,0x1b,*(undefined8 *)(param_1 + 0x30),0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b1b30;
    _objc_alloc(PTR_PTR_1126b1b30);
    func_0x00010c056660();
    func_0x00010bf9d620(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18),param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10682db68; end: 10682dc0f; -[SCCreatorsUrlActionHandler didDismissWithRecipientsCount:groupsCount:] */

void FUN_10682db68(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf6f440(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10682dc10; end: 10682dc67;  */

void FUN_10682dc10(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10682dc68; end: 10682dcaf; -[SCCreatorsUrlActionHandler webBrowserDidDismiss:] */

void FUN_10682dc68(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10682dcb0; end: 10682dcb7; -[SCCreatorsUrlActionHandler shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_10682dcb0(void)

{
  return 1;
}



/* Entry: 10682dcb8; end: 10682dcc3; -[SCCreatorsUrlActionHandler pushToValdiMarshaller:] */

void FUN_10682dcb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b046e08(param_3,param_1);
  func_0x00010b046ddc();
  func_0x00010b046de4();
  func_0x00010b046d54();
  func_0x00010b046d94();
  return;
}



/* Entry: 10682dcc4; end: 10682dd53; -[SCCreatorsUrlActionHandler .cxx_destruct] */

void FUN_10682dcc4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
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



/* Entry: 10682dd54; end: 10682e097; -[SCPublicStoryActionSheetPresenter initWithActionHandler:dataModel:config:deleteStorySnapScopeExposer:deleteStorySnapScopeServices:memoriesAutosaveMigrator:sendToScopeExposer:sendToScopeServices:snapProShareMessageSender:snapProProfilesProvider:circumstanceEngine:offPlatformLinkGenerationService:creatorInfoProvider:plusFeatureGating:] */

undefined8 *
FUN_10682dd54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

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
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_1126f36a0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b10e0;
    _objc_opt_new();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_16;
    _objc_release(uVar2);
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
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10682e098; end: 10682e20b; -[SCPublicStoryActionSheetPresenter presentActionSheetWithViewController:] */

void FUN_10682e098(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = param_3;
    _objc_release(uVar1);
    func_0x000108f377d4(*(undefined8 *)(param_1 + 0x90),1);
    lVar2 = param_1;
    func_0x00010bde4e20(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b10a0;
    ppuVar3 = &PTR____CFConstantStringClassReference_110dbb618;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbb618,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb42c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    puVar5 = puVar4;
    func_0x00010bf1d200(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b10a8;
    _objc_alloc();
    func_0x00010c019f40();
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar4;
    _objc_release(uVar1);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 8));
    func_0x00010c10af80(param_3);
    _objc_release(puVar5);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10682e20c; end: 10682e233;  */

void FUN_10682e20c(long param_1,undefined8 param_2)

{
  func_0x00010bf82fe0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdfb730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__detachUI_11255c768);
  return;
}



/* Entry: 10682e234; end: 10682e913; -[SCPublicStoryActionSheetPresenter _configureCellsForDataModel:] */

void FUN_10682e234(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf63dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b11d8;
  _objc_opt_class(PTR_PTR_1126b11d8);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar1 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar7 = *(undefined8 *)(param_1 + 0x88);
  *(ulong *)(param_1 + 0x88) = uVar1;
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010befc320();
  if ((int)uVar7 != 0) {
    func_0x000108f5935c();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b10a0;
    func_0x00010c0ec240(PTR_PTR_1126b10a0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10682e914;
    puStack_88 = &UNK_110861e38;
    puVar9 = puVar8;
    lStack_80 = param_1;
    func_0x00010bf1d200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    func_0x00010befa120(puVar3);
    lVar10 = param_1;
    func_0x00010be40580();
    if ((int)lVar10 != 0) {
      uVar11 = *(undefined8 *)(param_1 + 0xa0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar11;
      func_0x00010c2608e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000108f5938c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      puVar12 = PTR_PTR_1126b10a0;
      func_0x00010c0ec240(PTR_PTR_1126b10a0);
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_a8,param_1);
      puStack_d0 = puVar5;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_10682e974;
      puStack_b8 = &UNK_110852cd0;
      _objc_copyWeak(auStack_b0,auStack_a8);
      puVar5 = puVar12;
      func_0x00010bf1d200(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      func_0x00010befa120(puVar3);
      _objc_destroyWeak(auStack_b0);
      _objc_destroyWeak(auStack_a8);
      _objc_release(puVar5);
      _objc_release(puVar8);
      _objc_release(uVar13);
    }
    _objc_release(puVar9);
    _objc_release(uVar7);
  }
  iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010bf11c60();
  if (iVar2 != 0) {
    uVar13 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar13;
    func_0x00010c11a9c0();
    *(char *)(param_1 + 0x48) = (char)uVar7;
    _objc_release(uVar13);
    puVar5 = PTR_PTR_1126b10a0;
    ppuVar14 = &PTR____CFConstantStringClassReference_110db72f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db72f8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2655e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar14);
    _objc_initWeak(auStack_a8,puVar5);
    _objc_initWeak(auStack_d8,param_1);
    _objc_copyWeak(auStack_e8,auStack_a8);
    _objc_copyWeak(auStack_e0,auStack_d8);
    _objc_retain(puVar5);
    puVar8 = puVar5;
    func_0x00010bf1d200(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010befa120(puVar3);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_e0);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_a8);
    _objc_release(puVar8);
  }
  iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c14b1c0();
  if (iVar2 != 0) {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x88);
    func_0x00010bfdcc20();
    puVar5 = PTR_PTR_1126b10a0;
    if (iVar2 != 0) {
      ppuVar14 = &PTR____CFConstantStringClassReference_110db7318;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db7318,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ec240(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar14);
      puVar8 = puVar5;
      func_0x00010bf1d200(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      func_0x00010befa120(puVar3);
      _objc_release(puVar8);
    }
  }
  iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010bf6c820();
  puVar5 = PTR_PTR_1126b10a0;
  if (iVar2 != 0) {
    ppuVar14 = &PTR____CFConstantStringClassReference_110e1edd8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1edd8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f180(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar14);
    puVar8 = puVar5;
    func_0x00010bf1d200(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010befa120(puVar3);
    _objc_release(puVar8);
  }
  iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c14adc0();
  puVar5 = PTR_PTR_1126b10a0;
  if (iVar2 != 0) {
    ppuVar14 = &PTR____CFConstantStringClassReference_110e61258;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e61258,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec240(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar14);
    puVar8 = puVar5;
    func_0x00010bf1d200(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010befa120(puVar3);
    _objc_release(puVar8);
  }
  iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c15c9e0();
  puVar5 = PTR_PTR_1126b10a0;
  if (iVar2 != 0) {
    ppuVar14 = &PTR____CFConstantStringClassReference_110e61278;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e61278,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec240(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar14);
    puVar8 = puVar5;
    func_0x00010bf1d200(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010befa120(puVar3);
    _objc_release(puVar8);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10682e914; end: 10682e96b;  */

void FUN_10682e914(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10682e96c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf83000(param_2,param_2,&puStack_38);
  return;
}



/* Entry: 10682e96c; end: 10682e973;  */

void FUN_10682e96c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc8bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__addToPublicStory_11254fc88);
  return;
}



/* Entry: 10682e974; end: 10682ea17;  */

void FUN_10682e974(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf83000(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10682ea18; end: 10682ea4b;  */

void FUN_10682ea18(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdc8c00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10682ea4c; end: 10682eaeb;  */

void FUN_10682ea4c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if ((lVar2 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) ^ 1;
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28c4e0();
    _objc_release(uVar3);
    func_0x00010c1fadc0(lVar1);
    func_0x000108f3784c(*(undefined8 *)(lVar2 + 0x90),1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10682eaec; end: 10682ebb3;  */

void FUN_10682eaec(long param_1,undefined8 param_2)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x20));
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf83000(param_2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10682ebb4; end: 10682ebf7;  */

void FUN_10682ebb4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be99fe0(*(undefined8 *)(param_1 + 0x20),param_2,
                        &PTR____CFConstantStringClassReference_110ebabd8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10682ebf8; end: 10682ecaf;  */

void FUN_10682ebf8(long param_1,undefined8 param_2)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_28,*(undefined8 *)(param_1 + 0x20));
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf83000(param_2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 10682ecb0; end: 10682ece7;  */

void FUN_10682ecb0(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdfa660(param_1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10682ece8; end: 10682edaf;  */

void FUN_10682ece8(long param_1,undefined8 param_2)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x20));
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf83000(param_2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10682edb0; end: 10682edf3;  */

void FUN_10682edb0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be99fe0(*(undefined8 *)(param_1 + 0x20),param_2,
                        &PTR____CFConstantStringClassReference_110ebabf8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10682edf4; end: 10682ee4b;  */

void FUN_10682edf4(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10682ee4c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf83000(param_2,param_2,&puStack_38);
  return;
}



/* Entry: 10682ee4c; end: 10682eecb;  */

void FUN_10682ee4c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(uVar1);
  return;
}



/* Entry: 10682eecc; end: 10682efe7;  */

void FUN_10682eecc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
  func_0x00010c26e3a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (puVar2 != (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ae0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar2,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
    func_0x00010bf24ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80) = uVar1;
    _objc_release(uVar5);
    lVar6 = *(long *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(lVar6 + 0x88);
    func_0x00010bf24ec0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea0480(lVar6,param_2,uVar1,puVar4);
    _objc_release(uVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10682efe8; end: 10682f0ab; -[SCPublicStoryActionSheetPresenter _addToPublicStory] */

void FUN_10682efe8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    puVar1 = PTR_PTR_1126b11d0;
    _objc_alloc(PTR_PTR_1126b11d0);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c259cc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e320(puVar1,param_2,4,uVar2,0,0,0,0);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x18),param_2,param_1,puVar3,0);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10682f0ac; end: 10682f16f; -[SCPublicStoryActionSheetPresenter _addToSubscriptionStory] */

void FUN_10682f0ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    puVar1 = PTR_PTR_1126b11d0;
    _objc_alloc(PTR_PTR_1126b11d0);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c259cc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e320(puVar1,param_2,9,uVar2,0,0,0,0);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x18),param_2,param_1,puVar3,0);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10682f170; end: 10682f1df; -[SCPublicStoryActionSheetPresenter _isFanPassSubscriptionStoryEnabled] */

uint FUN_10682f170(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa0960();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf5ba20();
  _objc_release(uVar3);
  return (uint)uVar2 & (uint)uVar1;
}



/* Entry: 10682f1e0; end: 10682f25b; -[SCPublicStoryActionSheetPresenter _saveStoryWithIdentifier:] */

void FUN_10682f1e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  if (*(long *)(param_1 + 0x18) != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    func_0x00010c01b460();
    _objc_release(param_3);
    func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x18),param_2,param_1,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10682f25c; end: 10682f46f; -[SCPublicStoryActionSheetPresenter _deleteSnapForStoriesDataModel:] */

void FUN_10682f25c(long param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *unaff_x21;
  undefined *unaff_x22;
  long lVar6;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 uStack_70;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_3;
  _objc_retain(param_3);
  if (((param_3 != 0) && (*(long *)(param_1 + 0x88) != 0)) && (*(long *)(param_1 + 0x30) != 0)) {
    func_0x000108f379b4(*(undefined8 *)(param_1 + 0x90),1);
    unaff_x21 = PTR_PTR_1126cc630;
    _objc_alloc();
    func_0x00010bf096e0(*(undefined8 *)(param_1 + 0x88));
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010bf24ec0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3f60();
    _objc_release(uVar1);
    unaff_x22 = PTR_PTR_1126b10b8;
    _objc_alloc();
    lVar5 = param_3;
    func_0x00010c23f800(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010c243260(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uStack_70 = 0;
    func_0x00010bfff000();
    _objc_release(lVar2);
    _objc_release(lVar6);
    _objc_release(lVar5);
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc();
    lVar5 = *(long *)(param_1 + 0x10);
    param_4 = (undefined *)0x1;
    func_0x00010c038f40();
    lVar6 = *(long *)(param_1 + 0x38);
    if (lVar6 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_60 = unaff_x22;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      param_4 = puVar3;
      func_0x00010bf239c0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      lVar5 = lVar6;
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30));
      _objc_release(lVar6);
    }
    _objc_release(puVar3);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
  }
  lVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_10682f470;
  puStack_a0 = unaff_x22;
  puStack_98 = unaff_x21;
  lStack_90 = param_1;
  lStack_88 = param_3;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(lVar5);
  _objc_retain(param_4);
  if (*(long *)(lVar6 + 0x70) != 0) {
    func_0x000108f37a2c(*(undefined8 *)(lVar6 + 0x90),1);
    _objc_initWeak(auStack_a8,lVar6);
    uVar1 = *(undefined8 *)(lVar6 + 0x70);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b0,auStack_a8);
    _objc_retain(param_4);
    func_0x00010bfd3260(uVar1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
  }
  _objc_release(param_4);
  _objc_release(lVar5);
  return;
}



/* Entry: 10682f470; end: 10682f59b; -[SCPublicStoryActionSheetPresenter _sendSnapWithBusinessId:thumbnailImage:] */

void FUN_10682f470(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x70) != 0) {
    func_0x000108f37a2c(*(undefined8 *)(param_1 + 0x90),1);
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_4);
    func_0x00010bfd3260(uVar1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10682f59c; end: 10682f6e3;  */

void FUN_10682f59c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c2a14c0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10682f6e4; end: 10682fceb; -[SCPublicStoryActionSheetPresenter _sendSnapWithThumbnailImage:businessProfile:] */

void FUN_10682f6e4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b0810;
    _objc_alloc();
    func_0x00010c046120();
    puVar3 = PTR_PTR_1126b4458;
    _objc_alloc();
    func_0x00010c01c300();
    puVar4 = PTR_PTR_1126ae720;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_10682fcec;
    puStack_98 = &UNK_110917b38;
    _objc_retain();
    puStack_90 = puVar3;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b07e8;
    _objc_alloc();
    func_0x00010c061960();
    puVar6 = PTR_PTR_1126b07f0;
    func_0x00010c0c70e0(puVar3);
    func_0x00010c299100();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b07f8;
    _objc_alloc();
    func_0x00010c01dde0();
    puVar8 = PTR_PTR_1126b0818;
    _objc_alloc();
    puVar9 = puVar8;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c243260();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c044540();
    _objc_release(uVar10);
    _objc_release(puVar9);
    puVar11 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    _objc_initWeak(auStack_b8,param_1);
    puVar9 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_c0,auStack_b8);
    _objc_retain(param_4);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126b2498;
    _objc_alloc();
    uVar10 = param_4;
    func_0x00010bfe44e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c243260(uVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar8;
    func_0x00010c15d5c0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c037ea0();
    _objc_release(puVar14);
    _objc_release(uVar13);
    _objc_release(uVar10);
    puVar14 = PTR_PTR_1126b1c68;
    func_0x00010bfe94e0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0(PTR_PTR_1126ae720);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR_PTR_1126b2470;
    func_0x00010c2adce0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR_PTR_1126b2478;
    _objc_alloc(PTR_PTR_1126b2478);
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021e80(puVar17);
    _objc_release(puVar18);
    func_0x00010c0c6c20();
    puVar18 = PTR_PTR_1126b2490;
    _objc_alloc(PTR_PTR_1126b2490);
    func_0x00010c028f20();
    puVar19 = PTR_PTR_1126b0808;
    _objc_alloc();
    func_0x00010c051820();
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010bf23ee0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x50));
    _objc_release(uVar10);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar12);
    _objc_release(puVar9);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
    _objc_release(puVar11);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puStack_90);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b8);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010c0c70d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_3 + 0x20),PTR_s_mediaView_11260f648);
  return;
}



/* Entry: 10682fcec; end: 10682fcf3;  */

void FUN_10682fcec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c70d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_mediaView_11260f648);
  return;
}



/* Entry: 10682fcf4; end: 10682fe43;  */

void FUN_10682fcf4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(lVar1 + 0x78);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe4500(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar1 + 0x20);
  func_0x00010c243260(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bfbf8a0(uVar2,param_2,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar7 = PTR_PTR_1126ae558;
  puVar6 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  uVar2 = uVar5;
  func_0x00010beec820(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe4500(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051840(puVar6,param_2,uVar2,uVar5,uVar3,3,0,0);
  func_0x00010bfe9ca0(puVar7,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10682fe44; end: 10682feab;  */

void FUN_10682fe44(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_20 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010682febc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(param_2,0,*(undefined8 *)(puVar1 + 0x20));
  return;
}



/* Entry: 10682feac; end: 10682febf;  */

void FUN_10682feac(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010682febc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(param_2,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10682fec0; end: 10682fecf; -[SCPublicStoryActionSheetPresenter _detachUI] */

void FUN_10682fec0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10682fed0; end: 10682fedf; -[SCPublicStoryActionSheetPresenter actionSheetDidDismiss:] */

void FUN_10682fed0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10682fee0; end: 10682ff27; -[SCPublicStoryActionSheetPresenter didSelectDeleteStorySnaps:clientIdsBeingDeleted:] */

void FUN_10682fee0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10682ff28; end: 10682ff6f; -[SCPublicStoryActionSheetPresenter didCancelDeleteStorySnap] */

void FUN_10682ff28(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10682ff70; end: 10682ff73; -[SCPublicStoryActionSheetPresenter didDeleteSnapProStorySnaps:] */

void FUN_10682ff70(void)

{
  return;
}



/* Entry: 10682ff74; end: 10682ffbb; -[SCPublicStoryActionSheetPresenter didDismissWithSelectedItems:sendToDismissSource:] */

void FUN_10682ff74(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x50));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10682ffbc; end: 106830213; -[SCPublicStoryActionSheetPresenter didSendWithSelectionState:] */

void FUN_10682ffbc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x60) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    lVar3 = param_3;
    func_0x00010c1599e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        puVar6 = PTR_PTR_1126b01c0;
        uVar5 = *(undefined8 *)(lVar11 * 8);
        func_0x00010c122a80(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar5;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar9;
        func_0x00010c122b80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c294260(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(puVar6);
        _objc_release(uVar7);
        _objc_release(uVar9);
        _objc_release(uVar5);
        lVar11 = lVar11 + 1;
      } while (lVar4 != lVar11);
      lVar4 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(puVar2);
    func_0x00010bf6f440(uVar9);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(puVar2);
    _objc_release(param_3);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  ppuVar8 = &PTR____CFConstantStringClassReference_110e1f218;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1f218,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  FUN_107240204(ppuVar8,puVar2,&PTR____CFConstantStringClassReference_110e61118);
  _objc_release(puVar2);
  _objc_release(ppuVar8);
  uVar7 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x50);
  func_0x00010c150520(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c1599e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf75420(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(uVar7);
  uVar9 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x60);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x20);
  func_0x00010c243260(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0(*(undefined8 *)(param_3 + 0x30));
  func_0x00010c22b000(uVar9);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 106830214; end: 10683037b;  */

void FUN_106830214(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1f218;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1f218,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  FUN_107240204(ppuVar1,puVar2,&PTR____CFConstantStringClassReference_110e61118);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c150520(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c1599e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf75420(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c243260(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c22b000(uVar5);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 10683037c; end: 106830483; -[SCPublicStoryActionSheetPresenter .cxx_destruct] */

void FUN_10683037c(long param_1)

{
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



/* Entry: 106830484; end: 10683048f; +[SCCCreatorActivityFeedCreateActivityFeedSyncApi modulePath] */

undefined ** FUN_106830484(void)

{
  return &PTR____CFConstantStringClassReference_110e61298;
}



/* Entry: 106830490; end: 106830497; +[SCCCreatorActivityFeedCreateActivityFeedSyncApi asyncStrictMode] */

undefined8 FUN_106830490(void)

{
  return 0;
}



/* Entry: 106830498; end: 1068304d7; -[SCCCreatorActivityFeedCreateActivityFeedSyncApi createActivityFeedSyncApi] */

void FUN_106830498(long param_1)

{
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106830d6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068304d8; end: 106830587; +[SCCCreatorActivityFeedCreateActivityFeedSyncApi invokeWithJSRuntimeProvider:completionHandler:] */

void FUN_1068304d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106830588;
  puStack_38 = &UNK_11084aaa8;
  lStack_30 = param_3;
  uStack_28 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(lStack_30);
  func_0x000106830d78();
  _objc_release(param_3);
  return;
}



/* Entry: 106830588; end: 10683060f;  */

void FUN_106830588(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126bd738;
  func_0x00010bfbc0e0(PTR_PTR_1126bd738,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (**(code **)(puVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106830610; end: 106830633; +[SCCCreatorActivityFeedCreateActivityFeedSyncApi valdiMarshallableObjectDescriptor] */

void FUN_106830610(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110942338;
  param_1[1] = &PTR_DAT_110942368;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 106830634; end: 10683066f; +[SCCCreatorActivityFeedActivityFeedSyncApi valdiMarshallableObjectDescriptor] */

void FUN_106830634(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109423a8;
  param_1[1] = &PTR_s_SCBridgeObservable_1109423d8;
  param_1[2] = &PTR_DAT_110942378;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106830670; end: 1068306bf;  */

void FUN_106830670(void)

{
  func_0x000106830d90();
  func_0x000106830d5c();
  func_0x000106830d24(FUN_106830bdc);
  func_0x000106830d98();
  func_0x000106830d40();
  func_0x000106830d78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068306c0; end: 1068306d7; +[SCImpalaSnapInsightsHandling valdiMarshallableObjectDescriptor] */

void FUN_1068306c0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110942418;
  param_1[1] = 0;
  param_1[2] = &PTR_DAT_1109423e8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 1068306d8; end: 1068306fb;  */

undefined8 FUN_1068306d8(void)

{
  code *extraout_x8;
  
  func_0x000106830dbc();
  (*extraout_x8)();
  return 0;
}



/* Entry: 1068306fc; end: 10683074b;  */

void FUN_1068306fc(void)

{
  func_0x000106830d90();
  func_0x000106830d5c();
  func_0x000106830d24(0x106830c0c);
  func_0x000106830d98();
  func_0x000106830d40();
  func_0x000106830d78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10683074c; end: 106830787;  */

undefined8 FUN_10683074c(undefined8 param_1)

{
  func_0x000106830df8();
  func_0x000106830e00();
  func_0x000106830d80();
  func_0x000106830d6c();
  return param_1;
}



/* Entry: 106830788; end: 10683079f; +[SCImpalaSnapMentionsHandling valdiMarshallableObjectDescriptor] */

void FUN_106830788(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110942478;
  param_1[1] = 0;
  param_1[2] = &PTR_DAT_110942448;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}


