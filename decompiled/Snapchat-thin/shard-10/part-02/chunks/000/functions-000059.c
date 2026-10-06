/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107acfd24; end: 107acfd2b; -[SCSingleDiscoverPublisherOperaSession mediaPlaybackSessionId] */

undefined8 FUN_107acfd24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x270);
}



/* Entry: 107acfd2c; end: 107acfd33; -[SCSingleDiscoverPublisherOperaSession storyPlayableDataModel] */

undefined8 FUN_107acfd2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x278);
}



/* Entry: 107acfd34; end: 107acfd3b; -[SCSingleDiscoverPublisherOperaSession snapPlayableDataModel] */

undefined8 FUN_107acfd34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x280);
}



/* Entry: 107acfd3c; end: 107ad0063; -[SCSingleDiscoverPublisherOperaSession .cxx_destruct] */

void FUN_107acfd3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x280,0);
  _objc_storeStrong(param_1 + 0x278,0);
  _objc_storeStrong(param_1 + 0x270,0);
  _objc_storeStrong(param_1 + 0x268,0);
  _objc_storeStrong(param_1 + 0x260,0);
  _objc_storeStrong(param_1 + 600,0);
  _objc_storeStrong(param_1 + 0x250,0);
  _objc_storeStrong(param_1 + 0x240,0);
  _objc_storeStrong(param_1 + 0x228,0);
  _objc_storeStrong(param_1 + 0x220,0);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x200,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_destroyWeak(param_1 + 0x90);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107ad0064; end: 107ad019f; -[SCDiscoverPublisherOperaStatusHandler initWithPublisherId:creatorSettingsFetcher:creatorSettingsMutator:creatorSettingsTracker:] */

undefined1 *
FUN_107ad0064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f9ae8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107ad01a0; end: 107ad02eb; -[SCDiscoverPublisherOperaStatusHandler updateSubscribed:completion:] */

void FUN_107ad01a0(long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar3 = PTR_PTR_1126b4028;
  func_0x00010bfea360(PTR_PTR_1126b4028);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107ad02ec;
  puStack_70 = &UNK_110849530;
  _objc_retain(param_4);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x107ad0304;
  puStack_a8 = &UNK_110937f40;
  uStack_90 = (undefined1)param_3;
  lStack_a0 = param_1;
  uStack_98 = param_4;
  uStack_68 = param_4;
  _objc_retain(param_4);
  puVar1 = PTR___dispatch_main_q_11034be20;
  func_0x00010c0f9280(uVar2,param_2,param_3 ^ 1,uVar4,0,puVar3,&puStack_88,
                      PTR___dispatch_main_q_11034be20,&puStack_c0,PTR___dispatch_main_q_11034be20);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uStack_98);
  _objc_release(uStack_68);
  _objc_release(param_4);
  return;
}



/* Entry: 107ad02ec; end: 107ad0317;  */

void FUN_107ad02ec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107ad02fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 107ad0318; end: 107ad046b; -[SCDiscoverPublisherOperaStatusHandler updateOptInNotifications:completion:] */

void FUN_107ad0318(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 2;
  if (param_3 == 0) {
    uVar1 = 3;
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  puVar4 = PTR_PTR_1126b4028;
  func_0x00010bfea360(PTR_PTR_1126b4028);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107ad046c;
  puStack_70 = &UNK_110849530;
  _objc_retain(param_4);
  puStack_c0 = puVar2;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x107ad0484;
  puStack_a8 = &UNK_110937f40;
  uStack_90 = (undefined1)param_3;
  lStack_a0 = param_1;
  uStack_98 = param_4;
  uStack_68 = param_4;
  _objc_retain(param_4);
  puVar2 = PTR___dispatch_main_q_11034be20;
  func_0x00010c0f9280(uVar3,param_2,uVar1,uVar5,0,puVar4,&puStack_88,PTR___dispatch_main_q_11034be20
                      ,&puStack_c0,PTR___dispatch_main_q_11034be20);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uStack_98);
  _objc_release(uStack_68);
  _objc_release(param_4);
  return;
}



/* Entry: 107ad046c; end: 107ad0497;  */

void FUN_107ad046c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107ad047c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 107ad0498; end: 107ad05c3; -[SCDiscoverPublisherOperaStatusHandler didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_107ad0498(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  
  if ((*(long *)(param_1 + 0x30) != 0) || (*(long *)(param_1 + 0x28) != 0)) {
    lVar1 = param_1;
    func_0x00010be44600();
    lVar2 = param_1;
    func_0x00010bf2cf60();
    lVar3 = param_1;
    func_0x00010c079480();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x107ad0540;
    puStack_48 = &UNK_1109f9938;
    uStack_38 = (undefined1)lVar1;
    uStack_37 = (undefined1)lVar2;
    uStack_36 = (undefined1)lVar3;
    lStack_40 = param_1;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_60);
  }
  return;
}



/* Entry: 107ad05c4; end: 107ad065b; -[SCDiscoverPublisherOperaStatusHandler fetchIsSubscribed] */

void FUN_107ad05c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  if (*(long *)(param_1 + 0x30) == 0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
    _objc_release(uVar2);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30),param_2,PTR____kCFBooleanFalse_11034ab60);
    func_0x00010be63980(param_1);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107ad065c; end: 107ad065f; -[SCDiscoverPublisherOperaStatusHandler canOptInForNotifications] */

void FUN_107ad065c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be44610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isSubscribed_11256eb20);
  return;
}



/* Entry: 107ad0660; end: 107ad06c7; -[SCDiscoverPublisherOperaStatusHandler isOptedInForNotifications] */

undefined8 FUN_107ad0660(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5b7e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c079480();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 107ad06c8; end: 107ad073f; -[SCDiscoverPublisherOperaStatusHandler setCallbackForStoryUpdate:] */

void FUN_107ad06c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    lVar1 = param_1;
    func_0x00010bf2cf60(param_1);
    func_0x00010c079480(param_1);
                    /* WARNING: Could not recover jumptable at 0x000107ad072c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x10))(lVar3,lVar1,param_1);
    return;
  }
  return;
}



/* Entry: 107ad0740; end: 107ad078f; -[SCDiscoverPublisherOperaStatusHandler _nextIsSubscribed] */

void FUN_107ad0740(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010be44600();
  func_0x00010c0df6e0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ad0790; end: 107ad07f7; -[SCDiscoverPublisherOperaStatusHandler _isSubscribed] */

undefined8 FUN_107ad0790(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5b7e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c080120();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 107ad07f8; end: 107ad0857; -[SCDiscoverPublisherOperaStatusHandler .cxx_destruct] */

void FUN_107ad07f8(long param_1)

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



/* Entry: 107ad0858; end: 107ad08b7; -[SCPublisherStoryAutoProgressingConfiguration initWithEnableImageAutoProgressing:minimumPhotoLength:enableVideoAutoProgressing:] */

void FUN_107ad0858(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f9af0;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined4 *)((long)puVar1 + 0xc) = param_1;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
  }
  return;
}



/* Entry: 107ad08b8; end: 107ad08db; -[SCPublisherStoryAutoProgressingConfiguration copyWithZone:] */

undefined8 FUN_107ad08b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107ad08dc; end: 107ad08e3; -[SCPublisherStoryAutoProgressingConfiguration enableImageAutoProgressing] */

undefined1 FUN_107ad08dc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107ad08e4; end: 107ad08eb; -[SCPublisherStoryAutoProgressingConfiguration minimumPhotoLength] */

undefined4 FUN_107ad08e4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 107ad08ec; end: 107ad08f3; -[SCPublisherStoryAutoProgressingConfiguration enableVideoAutoProgressing] */

undefined1 FUN_107ad08ec(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107ad08f4; end: 107ad0933; -[SCDiscoverShareController initWithUserSession:videoFilterAdaptor:previewFilterDataProviderCreator:circumstanceEngine:notificationPool:sendToLauncher:ephemeralMediaFactory:galleryStorySaver:snapVideoFilterFactory:previewURLVideoProvider:streamingMediaFetcher:externalLinkSendingService:snapDocEditorFactory:discoverFeedEventsLogger:previewSnapSenderFactory:] */

void FUN_107ad08f4(void)

{
  func_0x00010be3af00();
  return;
}



/* Entry: 107ad0934; end: 107ad0977; -[SCDiscoverShareController initWithUserSession:videoFilterAdaptor:previewFilterDataProviderCreator:circumstanceEngine:notificationPool:sendToScopeExposer:ephemeralMediaFactory:galleryStorySaver:snapVideoFilterFactory:previewURLVideoProvider:streamingMediaFetcher:externalLinkSendingService:snapDocEditorFactory:discoverFeedEventsLogger:previewSnapSenderFactory:] */

void FUN_107ad0934(void)

{
  func_0x00010be3af00();
  return;
}



/* Entry: 107ad0978; end: 107ad0e0f; -[SCDiscoverShareController _initWithUserSession:videoFilterAdaptor:previewFilterDataProviderCreator:circumstanceEngine:notificationPool:sendToLauncher:sendToScopeExposer:ephemeralMediaFactory:galleryStorySaver:snapVideoFilterFactory:previewURLVideoProvider:streamingMediaFetcher:externalLinkSendingService:snapDocEditorFactory:discoverFeedEventsLogger:previewSnapSenderFactory:] */

undefined8 *
FUN_107ad0978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain();
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
  puStack_70 = PTR_PTR_1126f9af8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar1[0x22] = 4;
    puVar3 = PTR_PTR_1126b45a0;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    uVar5 = puVar1[0xc];
    _objc_retain(uVar5);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = uVar5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    uVar2 = param_18;
    func_0x000107ad4c00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar5);
    _objc_retain(param_5);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_15;
    _objc_release(uVar2);
    uVar5 = puVar1[0x1b];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c07b760();
    *(char *)(puVar1 + 0x1d) = (char)uVar2;
    _objc_release(uVar5);
    _objc_retain(param_16);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_17;
    _objc_release(uVar2);
  }
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



/* Entry: 107ad0e10; end: 107ad10c7; -[SCDiscoverShareController shareWithImage:overlayImages:fromViewController:touchOrigin:snapSaverImageProvider:savingDisabled:snapPageSource:] */

void FUN_107ad0e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9,
                  undefined8 param_10,undefined4 param_11,undefined8 param_12)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_9);
  if (param_7 != 0) {
    _objc_retain(param_9);
    uVar6 = *(undefined8 *)(param_5 + 0x40);
    *(undefined8 *)(param_5 + 0x40) = param_9;
    _objc_retain(param_10);
    _objc_retain(param_8);
    _objc_retain(param_7);
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    lVar1 = param_8;
    func_0x00010bf529e0(param_8);
    func_0x00010bf0a0e0(puVar2,param_6,lVar1 + 2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    uVar7 = param_4;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    func_0x00010bfe9780(param_3,param_4,param_1,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010befa120(puVar2,param_6,puVar5);
    func_0x00010befa120(puVar2,param_6,param_7);
    _objc_release(param_7);
    func_0x00010befa160(puVar2,param_6,param_8);
    _objc_release(param_8);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    uVar6 = param_1;
    uVar8 = uVar7;
    func_0x00010c11cac0(PTR__OBJC_CLASS___UIViewController_1126af898);
    func_0x00010b690c48(param_1,uVar7,param_3,param_4,uVar6,uVar8);
    uVar6 = param_1;
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    func_0x00010bfe6cc0(param_1,uVar7,uVar6,puVar3,param_6,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126c90a8;
    _objc_alloc();
    func_0x00010c045ae0();
    uVar6 = *(undefined8 *)(param_5 + 0x20);
    *(undefined **)(param_5 + 0x20) = puVar4;
    _objc_release(uVar6);
    lVar1 = param_5;
    func_0x00010be7fc80(param_5,param_6,puVar3,param_10,param_11,param_12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_10);
    uVar6 = *(undefined8 *)(param_5 + 0x18);
    *(long *)(param_5 + 0x18) = lVar1;
    _objc_release(uVar6);
    func_0x00010bea7e40(param_5,param_6,1);
    func_0x00010bdcbe20(param_5);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_9);
  return;
}



/* Entry: 107ad10c8; end: 107ad148f; -[SCDiscoverShareController shareWithVideo:overlayImages:firstFrame:shareFrameMedia:fromViewController:touchOrigin:enableRotationalPreview:manipulatorFormat:] */

void FUN_107ad10c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined8 param_11)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  if (param_5 != 0) {
    func_0x00010bea7e40(param_3);
    lVar1 = param_3;
    func_0x00010bf91ba0();
    if ((int)lVar1 == 0) {
      _objc_initWeak(auStack_80,param_3);
      puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_148 = 0xc2000000;
      pcStack_140 = FUN_107ad1658;
      puStack_138 = &UNK_1109f9998;
      _objc_copyWeak(auStack_108,auStack_80);
      _objc_retain(param_6);
      uStack_130 = param_6;
      _objc_retain(param_7);
      uStack_128 = param_7;
      _objc_retain(param_8);
      uStack_120 = param_8;
      _objc_retain(param_9);
      uStack_118 = param_9;
      uStack_100 = param_1;
      uStack_f8 = param_2;
      uStack_f0 = param_10;
      _objc_retain(param_11);
      uStack_110 = param_11;
      ppuVar3 = &puStack_150;
      _objc_retainBlock();
      puVar4 = PTR_PTR_1126d6430;
      func_0x00010c25c8c0(PTR_PTR_1126d6430);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c2b3b20();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_5;
      func_0x00010beec820(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c2b38a0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(lVar1);
      _objc_release(puVar5);
      _objc_release(puVar4);
      uVar2 = *(undefined8 *)(param_3 + 0x50);
      _objc_retain(PTR___dispatch_main_q_11034be20);
      func_0x00010bfa84c0(uVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(puVar7);
      _objc_release(ppuVar3);
      _objc_release(uStack_110);
      _objc_release(uStack_118);
      _objc_release(uStack_120);
      _objc_release(uStack_128);
      _objc_release(uStack_130);
      puVar8 = auStack_108;
    }
    else {
      _objc_initWeak(auStack_80,param_3);
      uVar9 = *(undefined8 *)(param_3 + 0x118);
      uVar2 = *(undefined8 *)(param_3 + 0x90);
      func_0x00010c11de00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_107ad1490;
      puStack_d0 = &UNK_1109f9968;
      _objc_copyWeak(auStack_a0,auStack_80);
      _objc_retain(param_6);
      uStack_c8 = param_6;
      _objc_retain(param_7);
      uStack_c0 = param_7;
      _objc_retain(param_8);
      uStack_b8 = param_8;
      _objc_retain(param_9);
      uStack_b0 = param_9;
      uStack_98 = param_1;
      uStack_90 = param_2;
      uStack_88 = param_10;
      _objc_retain(param_11);
      uStack_a8 = param_11;
      FUN_107adfd18(uVar9,uVar2,&puStack_e8);
      _objc_release(uVar2);
      _objc_release(uStack_a8);
      _objc_release(uStack_b0);
      _objc_release(uStack_b8);
      _objc_release(uStack_c0);
      _objc_release(uStack_c8);
      puVar8 = auStack_a0;
    }
    _objc_destroyWeak(puVar8);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 107ad1490; end: 107ad1607;  */

void FUN_107ad1490(long param_1,long param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  if ((param_3 == 0) || (param_2 == 0)) {
    lVar1 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bea7e40();
  }
  else {
    lVar1 = param_2;
    func_0x000108463558();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_107ad1608;
    puStack_98 = &UNK_11094bb08;
    _objc_copyWeak(auStack_60,param_1 + 0x48);
    _objc_retain(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lStack_90 = lVar1;
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uStack_88 = uVar2;
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uStack_80 = uVar3;
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uStack_78 = uVar2;
    _objc_retain(uVar3);
    uStack_50 = *(undefined8 *)(param_1 + 0x58);
    uStack_58 = *(undefined8 *)(param_1 + 0x50);
    uStack_48 = *(undefined1 *)(param_1 + 0x60);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uStack_70 = uVar3;
    _objc_retain(uVar2);
    uStack_68 = uVar2;
    func_0x000100162d98("APPSTORE",&puStack_b0);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(lStack_90);
    _objc_destroyWeak(auStack_60);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 107ad1608; end: 107ad1657;  */

void FUN_107ad1608(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  func_0x00010beb1c80(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107ad1658; end: 107ad1703;  */

void FUN_107ad1658(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      uVar2 = param_3;
      func_0x000108463558(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beb1c80(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),lVar1);
      _objc_release(uVar2);
    }
    else {
      func_0x00010bea7e40(lVar1);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ad1704; end: 107ad19c3; -[SCDiscoverShareController _shareLoaclFileMedia:overlayImages:firstFrame:shareFrameMedia:fromViewController:touchOrigin:enableRotationalPreview:manipulatorFormat:] */

void FUN_107ad1704(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  undefined8 param_10,undefined8 param_11,int param_12,long param_13)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_13);
  func_0x00010c29b240(PTR_PTR_1126b0010,param_6,param_7);
  if ((param_1 == 0.0) || (param_2 == 0.0)) {
    func_0x00010bea7e40(param_5,param_6,2);
  }
  else {
    dVar6 = param_1;
    dVar8 = param_2;
    _objc_retain(param_11);
    uVar1 = *(undefined8 *)(param_5 + 0x40);
    *(undefined8 *)(param_5 + 0x40) = param_11;
    _objc_release(uVar1);
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if (param_9 == 0) {
      puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14c760();
      puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      func_0x00010bfe6cc0(param_3,param_4,dVar6,puVar4,param_6,param_8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    else {
      func_0x00010c23d0a0(param_9);
      puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      dVar7 = dVar6;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      func_0x00010bfe6cc0(dVar6,dVar8,dVar7,puVar4,param_6,param_8);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c90a8;
    _objc_alloc();
    func_0x00010c061300();
    uVar1 = *(undefined8 *)(param_5 + 0x20);
    *(undefined **)(param_5 + 0x20) = puVar2;
    _objc_release(uVar1);
    lVar5 = param_5;
    func_0x00010be7fca0(param_1,param_2,param_5,param_6,param_7,puVar4,param_10,param_9);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_5 + 0x18);
    *(long *)(param_5 + 0x18) = lVar5;
    _objc_release(uVar1);
    if (param_12 != 0) {
      if (param_13 != 0) {
        func_0x00010c2827c0(param_13);
      }
      puVar2 = PTR_PTR_1126d2658;
      _objc_alloc(PTR_PTR_1126d2658);
      func_0x00010c00f8e0();
      func_0x00010c207700(*(undefined8 *)(param_5 + 0x18),param_6,puVar2);
      _objc_release(puVar2);
    }
    func_0x00010bea7e40(param_5,param_6,1);
    func_0x00010bdcbe20(param_5);
    _objc_release(puVar4);
  }
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 107ad19c4; end: 107ad19ff; -[SCDiscoverShareController endDiscoverShare] */

void FUN_107ad19c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bea7e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setState__112587938,0);
  return;
}



/* Entry: 107ad1a00; end: 107ad1a03; -[SCDiscoverShareController sendPressedFromContextMenuFromViewController:page:contextSessionId:] */

void FUN_107ad1a00(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9fb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendPressedFromViewController_p_112585868);
  return;
}



/* Entry: 107ad1a04; end: 107ad208f; -[SCDiscoverShareController _sendPressedFromViewController:page:contextSessionId:] */

void FUN_107ad1a04(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x158) != 1) goto LAB_107ad2044;
  _objc_retain(param_4);
  uVar13 = *(undefined8 *)(param_1 + 0x58);
  *(ulong *)(param_1 + 0x58) = param_4;
  _objc_retain(param_5);
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(param_1 + 0xa8);
  func_0x000108c2c288();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010bf25140(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar2);
  _objc_release(uVar13);
  puVar3 = PTR_PTR_1126b1a18;
  _objc_alloc();
  func_0x00010c243400(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c081ae0();
  func_0x00010c048740();
  _objc_release(param_5);
  puVar4 = puVar3;
  func_0x00010c15d5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar4;
  _objc_release(uVar13);
  lVar7 = param_1;
  func_0x00010c11b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 == 0) {
    puVar14 = (undefined *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_alloc();
    lVar7 = param_1;
    func_0x00010c11b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820();
    _objc_release(lVar7);
    puVar14 = PTR_PTR_1126ae720;
    _objc_retain(puVar5);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR_PTR_1126b2498;
    _objc_alloc(PTR_PTR_1126b2498);
    uVar13 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c11b1e0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010bf631c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c15d5c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c037ea0(puVar16);
    _objc_release(puVar4);
    _objc_release(uVar2);
    _objc_release(uVar13);
    puVar4 = PTR_PTR_1126b0808;
    _objc_alloc();
    func_0x00010c051820();
    _objc_release(puVar16);
    _objc_release(puVar5);
    _objc_release(puVar5);
  }
  uVar6 = *(ulong *)(param_1 + 0x78);
  func_0x00010c076220();
  if ((uVar6 & 1) == 0) {
    lVar7 = *(long *)(param_1 + 0x80);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 == 0) {
      puVar5 = PTR_PTR_1126b1a20;
      _objc_alloc(PTR_PTR_1126b1a20);
      if ((*(byte *)(param_1 + 0xe8) & 1) == 0) {
        func_0x00010c01d660(puVar5);
      }
      else {
        puVar16 = puVar4;
        func_0x00010c26b9e0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01d660(puVar5);
        _objc_release(puVar16);
      }
      uVar6 = param_4;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar8 = uVar15;
      _objc_opt_isKindOfClass(uVar15,puVar16);
      uVar6 = uVar15;
      if ((uVar8 & 1) == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(uVar15);
      if (uVar6 == 0) {
        uVar15 = 0xffffffffffffffff;
      }
      else {
        func_0x00010c067fc0();
      }
      uVar8 = param_4;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bf1f3c0();
      if (((int)uVar10 == 0) || (uVar15 != 0x28)) {
        _objc_release(uVar9);
        _objc_release(uVar8);
LAB_107ad1ec4:
        func_0x000108534b70();
        if ((uVar15 & 1) == 0) {
          puVar16 = PTR_PTR_1126b1a28;
          _objc_alloc();
        }
        else {
          iVar1 = (int)*(undefined8 *)(param_1 + 0xa8);
          func_0x000108faa874();
          puVar16 = PTR_PTR_1126b1a28;
          _objc_alloc();
          if (iVar1 != 0) goto LAB_107ad1ef0;
        }
      }
      else {
        iVar1 = (int)*(undefined8 *)(param_1 + 0xa8);
        func_0x000108faa824();
        _objc_release(uVar9);
        _objc_release(uVar8);
        if (iVar1 == 0) goto LAB_107ad1ec4;
        puVar16 = PTR_PTR_1126b1a28;
        _objc_alloc();
LAB_107ad1ef0:
        func_0x000108faa888(*(undefined8 *)(param_1 + 0xa8));
      }
      func_0x00010c039180();
      uVar13 = *(undefined8 *)(param_1 + 0x70);
      *(undefined **)(param_1 + 0x70) = puVar16;
      _objc_release(uVar13);
      if (*(long *)(param_1 + 0x20) == 0) {
        puVar16 = (undefined *)0x0;
      }
      else {
        puVar16 = PTR_PTR_1126c90a0;
        _objc_alloc(PTR_PTR_1126c90a0);
        puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c031ee0(puVar16);
        _objc_release(puVar11);
      }
      puVar11 = PTR_PTR_1126b1a30;
      _objc_alloc(PTR_PTR_1126b1a30);
      func_0x00010bff5040();
      if (*(long *)(param_1 + 0x80) == 0) {
        func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x78));
      }
      else {
        func_0x00010bf9d620();
      }
      func_0x00010be78200(param_1);
      _objc_release(puVar11);
      _objc_release(puVar16);
      _objc_release(uVar6);
      _objc_release(puVar5);
    }
  }
  _objc_release(puVar3);
  _objc_release(puVar14);
  _objc_release(puVar4);
LAB_107ad2044:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    puVar3 = PTR_PTR_1126ae558;
    puVar4 = PTR_PTR_1126b0800;
    _objc_alloc(PTR_PTR_1126b0800);
    uVar13 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010beec820(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051840(puVar4);
    func_0x00010bfe9ca0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  return;
}



/* Entry: 107ad2090; end: 107ad212b;  */

void FUN_107ad2090(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126ae558;
  puVar1 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010beec820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051840(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x20),0,
                      *(undefined8 *)(param_1 + 0x28),0,0);
  func_0x00010bfe9ca0(puVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107ad212c; end: 107ad23d7; -[SCDiscoverShareController _prepareDiscoverMediaWithCompletionQueue:completionBlock:] */

void FUN_107ad212c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x30) != 0) goto LAB_107ad23b0;
  puVar1 = PTR_PTR_1126d6438;
  _objc_alloc_init();
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  _objc_release(uVar7);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bf82940();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27dd80();
  if (lVar3 == 0) {
    _objc_release(lVar2);
LAB_107ad220c:
    puVar1 = PTR_PTR_1126d6440;
    _objc_alloc();
    puVar5 = puVar1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf82940(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01ad80(puVar1,param_2,puVar5,uVar7);
    _objc_release(uVar7);
    _objc_release(puVar5);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
    _objc_retain(puVar1);
    _objc_release(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c29bf00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c1092a0(uVar7,param_2,puVar1,uVar8,param_3,param_4);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x18);
    func_0x00010bf82940();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c27dd80();
    _objc_release(lVar4);
    _objc_release(lVar2);
    if (lVar3 == 10) goto LAB_107ad220c;
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010bf82940();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27dd80();
    if (lVar3 == 1) {
      _objc_release(lVar2);
    }
    else {
      lVar4 = *(long *)(param_1 + 0x18);
      func_0x00010bf82940();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010c27dd80();
      _objc_release(lVar4);
      _objc_release(lVar2);
      if (lVar3 != 2) goto LAB_107ad23b0;
    }
    puVar1 = PTR_PTR_1126d6448;
    _objc_alloc();
    puVar5 = puVar1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf82940(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01ad80(puVar1,param_2,puVar5,uVar7);
    _objc_release(uVar7);
    _objc_release(puVar5);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
    _objc_retain(puVar1);
    _objc_release(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c29bf00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c1092c0(uVar7,param_2,puVar1,uVar8,1,*(undefined8 *)(param_1 + 0x28),param_3,param_4
                        ,*(undefined8 *)(param_1 + 200));
  }
  _objc_release(puVar1);
  _objc_release(uVar6);
LAB_107ad23b0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ad23d8; end: 107ad23e3; -[SCDiscoverShareController sendPressedFromMiniProfileFromViewController:] */

void FUN_107ad23d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9fb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__sendPressedFromViewController_p_112585868,param_3,0,0);
  return;
}



/* Entry: 107ad23e4; end: 107ad2427; +[SCDiscoverShareController selectRecipientConfiguration] */

void FUN_107ad23e4(void)

{
  _objc_alloc(PTR_PTR_1126d6450);
  func_0x00010c016620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ad2428; end: 107ad2737; -[SCDiscoverShareController _previewConfigurationForVideoURL:videoSize:videoOverlayImage:shareFrameMedia:firstFrame:] */

void FUN_107ad2428(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar1 = PTR_PTR_1126afee0;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_4,&UNK_10f443101);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c004180(puVar1,param_4,puVar2,*(undefined8 *)(param_3 + 0xa8));
  _objc_release(puVar2);
  func_0x00010c1c5440(puVar1,param_4,1);
  func_0x00010c1c5240(param_1,param_2,puVar1);
  dVar7 = 0.0;
  if (param_1 != 0.0) {
    if (param_2 == 0.0) {
      dVar7 = INFINITY;
    }
    else {
      dVar7 = param_1 / param_2;
    }
  }
  func_0x00010c1c40c0(dVar7,puVar1);
  uVar3 = *(undefined8 *)(param_3 + 0xd0);
  func_0x00010c29af00(uVar3,param_4,param_5,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c221d20(puVar1,param_4,uVar3);
  _objc_release(uVar3);
  func_0x00010c221b60(puVar1,param_4,param_6);
  _objc_release(param_6);
  func_0x00010c221700(puVar1,param_4,param_8);
  func_0x00010c2220c0(puVar1,param_4,param_8);
  _objc_release(param_8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107ad2738;
  puStack_70 = &UNK_11084d858;
  _objc_retain(puVar1);
  puStack_68 = puVar1;
  func_0x00010bfe7a40(param_7,param_4,&puStack_88);
  _objc_release(param_7);
  func_0x00010c16c080(puVar1,param_4,1);
  func_0x00010c221ca0(puVar1,param_4,3);
  func_0x00010c2056c0(puVar1,param_4,5);
  uVar3 = *(undefined8 *)(param_3 + 0xa8);
  func_0x000108c2c288();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + 0x108);
  func_0x00010bf25140(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf4b900(uVar3,param_4,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = 0x3a;
  if ((int)uVar5 == 0) {
    uVar3 = 6;
  }
  func_0x00010c204fa0(puVar1,param_4,uVar3);
  uVar3 = *(undefined8 *)(param_3 + 0xa0);
  func_0x00010c1110a0(uVar3,param_4,5,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bee0(puVar1,param_4,uVar3);
  _objc_release(uVar3);
  lVar6 = param_3;
  func_0x00010bf1d1a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18f1e0(puVar1,param_4,lVar6);
  _objc_release(lVar6);
  puVar2 = puVar1;
  func_0x00010bf82940(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0();
  _objc_release(puVar2);
  func_0x00010c1f5e00(puVar1,param_4,1);
  func_0x00010c1f5d60(puVar1,param_4,1);
  func_0x00010c1805c0(puVar1,param_4,*(undefined8 *)(param_3 + 0x128));
  func_0x00010c204680(puVar1,param_4,*(undefined8 *)(param_3 + 0x120));
  func_0x00010bf42760(puVar1);
  _objc_release(puStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ad2738; end: 107ad274b;  */

void FUN_107ad2738(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c2220d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setVideoThumbnailImage__112666258,param_2);
    return;
  }
  return;
}



/* Entry: 107ad274c; end: 107ad2953; -[SCDiscoverShareController _previewConfigurationForImage:snapSaverImageProvider:savingDisabled:snapPageSource:] */

void FUN_107ad274c(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  
  puVar1 = PTR_PTR_1126afee0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_4,&UNK_10f443177);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c004180(puVar1,param_4,puVar2,*(undefined8 *)(param_3 + 0xa8));
  _objc_release(puVar2);
  func_0x00010c1c5440(puVar1,param_4,0);
  func_0x00010c23d0a0(param_5);
  dVar4 = param_1;
  func_0x00010c14e120(param_5);
  func_0x00010b690ad8(param_1,param_2,dVar4);
  func_0x00010c1c5240(puVar1);
  func_0x00010c0c6700(puVar1);
  dVar4 = 0.0;
  if (param_1 != 0.0) {
    if (param_2 == 0.0) {
      dVar4 = INFINITY;
    }
    else {
      dVar4 = param_1 / param_2;
    }
  }
  func_0x00010c1c40c0(dVar4,puVar1);
  func_0x00010c1a1640(puVar1,param_4,param_5);
  _objc_release(param_5);
  func_0x00010c205400(puVar1,param_4,param_6);
  _objc_release(param_6);
  func_0x00010c2056c0(puVar1,param_4,5);
  func_0x00010c204fa0(puVar1,param_4,param_8);
  uVar3 = *(undefined8 *)(param_3 + 0xa0);
  func_0x00010c1110a0(uVar3,param_4,5,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bee0(puVar1,param_4,uVar3);
  _objc_release(uVar3);
  func_0x00010bf1d1a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18f1e0(puVar1,param_4,param_3);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bf82940(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0();
  _objc_release(puVar2);
  func_0x00010c1f5d60(puVar1,param_4,param_7);
  func_0x00010c1f5e00(puVar1,param_4,1);
  func_0x00010bf42760(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ad2954; end: 107ad2bff; -[SCDiscoverShareController _performFromViewController:onNextStateChange:] */

void FUN_107ad2954(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_78,param_3);
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 - 1U < 2) {
    func_0x00010c252440(param_1);
    (**(code **)(param_4 + 0x10))(param_4,param_1);
  }
  else if (lVar1 == 0) {
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_107ad2c00;
    uStack_88 = 0x107ad2c10;
    uStack_80 = 0;
    uStack_c8 = 0;
    uStack_b8 = 0x2020000000;
    uStack_b0 = 0;
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_100 = FUN_107ad2c18;
    puStack_f8 = &UNK_11092fd00;
    uStack_108 = 0xc2000000;
    puStack_c0 = &uStack_c8;
    puStack_a0 = &uStack_a8;
    _objc_copyWeak(auStack_d0,auStack_78);
    lStack_f0 = param_1;
    puStack_e0 = &uStack_c8;
    puStack_d8 = &uStack_a8;
    _objc_retain(param_3);
    uStack_e8 = param_3;
    func_0x000100c749e0(0x3dcccccd,"APPSTORE",&puStack_110);
    func_0x00010c252740(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0e0e60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    lVar4 = lVar3;
    func_0x00010c25ff60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(puVar2);
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_release(uStack_e8);
    _objc_destroyWeak(auStack_d0);
    __Block_object_dispose(&uStack_c8,8);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
  }
  _objc_destroyWeak(auStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ad2c00; end: 107ad2c17;  */

void FUN_107ad2c00(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107ad2c18; end: 107ad2c9b;  */

void FUN_107ad2c18(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) & 1) == 0) && (lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf56ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
    _objc_release(uVar3);
    func_0x00010c10eda0(*(undefined8 *)(param_1 + 0x28),param_2,
                        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28),0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107ad2c9c; end: 107ad2d8b;  */

void FUN_107ad2c9c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    uVar2 = param_2;
    func_0x00010c067fc0(param_2);
    (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    _objc_retain(param_2);
    func_0x00010bf84b00(lVar1);
    _objc_release(param_2);
    _objc_release(uVar2);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 107ad2d8c; end: 107ad2dcf;  */

void FUN_107ad2d8c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c067fc0(uVar1);
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ad2dd0; end: 107ad2f27; -[SCDiscoverShareController sendPressedFromTopLevelShareFromViewController:page:contextSessionId:] */

void FUN_107ad2dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  _objc_initWeak(auStack_50,param_3);
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_copyWeak(auStack_58,auStack_50);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be71d40(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ad2f28; end: 107ad3017;  */

void FUN_107ad2f28(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  puVar4 = PTR_PTR_1126afde0;
  if ((lVar1 != 0) && (lVar2 != 0)) {
    if (param_2 == 1) {
      func_0x00010be9fb00(lVar1);
    }
    else {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e193f8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e193f8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf55ce0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb0);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25f340();
      _objc_release(uVar5);
      _objc_release(puVar4);
    }
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107ad3018; end: 107ad326f; -[SCDiscoverShareController createLoadingViewController] */

void FUN_107ad3018(void)

{
  int iVar1;
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
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_alloc_init();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c29bf00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c1c8b80(puVar2);
  puVar3 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  func_0x00010c219b60();
  func_0x00010c24dbc0(puVar3);
  puVar4 = puVar2;
  func_0x00010c29bf00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar4);
  puStack_88 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  puStack_80 = puVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  puStack_78 = puVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010c29bf00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = 2;
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010beef8c0(puStack_88);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puStack_80);
  puVar7 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_107ad3270;
  puStack_d0 = puVar4;
  puStack_c8 = puVar6;
  puStack_c0 = puVar5;
  puStack_b8 = puVar11;
  puStack_b0 = puVar3;
  puStack_a8 = puVar2;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar13);
  _objc_retain(uVar14);
  _objc_initWeak(auStack_d8,puVar7);
  iVar1 = (int)*(undefined8 *)(puVar7 + 0x78);
  func_0x00010c076220();
  if (iVar1 == 0) {
    lVar12 = *(long *)(puVar7 + 0x80);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar12 == 0) goto LAB_107ad339c;
    uVar16 = *(undefined8 *)(puVar7 + 0x80);
    func_0x00010c12e1c0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = auStack_108;
    _objc_copyWeak(puVar15,auStack_d8);
    func_0x00010c2a4ae0(uVar16);
    _objc_release(uVar16);
  }
  else {
    uVar16 = *(undefined8 *)(puVar7 + 0x78);
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_107ad3400;
    puStack_e8 = &UNK_1108434b0;
    puVar15 = auStack_e0;
    _objc_copyWeak(puVar15,auStack_d8);
    func_0x00010bf94c40(uVar16);
  }
  _objc_destroyWeak(puVar15);
LAB_107ad339c:
  uVar16 = *(undefined8 *)(puVar7 + 0x70);
  *(undefined8 *)(puVar7 + 0x70) = 0;
  _objc_release(uVar16);
  _objc_destroyWeak(auStack_d8);
  _objc_release(uVar14);
  _objc_release(puVar13);
  return;
}



/* Entry: 107ad3270; end: 107ad33ff; -[SCDiscoverShareController legacySendToScopeDidDismiss:selectedItems:] */

void FUN_107ad3270(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x78);
  func_0x00010c076220();
  if (iVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x80);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) goto LAB_107ad339c;
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c12e1c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = auStack_78;
    _objc_copyWeak(puVar3,auStack_48);
    func_0x00010c2a4ae0(uVar4);
    _objc_release(uVar4);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107ad3400;
    puStack_58 = &UNK_1108434b0;
    puVar3 = auStack_50;
    _objc_copyWeak(puVar3,auStack_48);
    func_0x00010bf94c40(uVar4);
  }
  _objc_destroyWeak(puVar3);
LAB_107ad339c:
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ad3400; end: 107ad3457;  */

void FUN_107ad3400(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ad3458; end: 107ad356b; -[SCDiscoverShareController legacySendToScopeWillSend:sendToSelection:] */

void FUN_107ad3458(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf6f440(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ad356c; end: 107ad35cb;  */

void FUN_107ad356c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c22aec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfd2e0(lVar2,param_2,uVar1,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107ad35cc; end: 107ad3793; -[SCDiscoverShareController _didDetachUIWithSendToSelection:shareSheetConfiguration:] */

void FUN_107ad35cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x78);
  func_0x00010c076220();
  if (iVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x80);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) goto LAB_107ad3740;
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c12e1c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = auStack_78;
    _objc_copyWeak(puVar3,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c2a4ae0(uVar4);
    _objc_release(uVar4);
    _objc_release(param_4);
    uVar4 = param_3;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107ad3794;
    puStack_58 = &UNK_110848218;
    puVar3 = auStack_40;
    _objc_copyWeak(puVar3,auStack_38);
    _objc_retain(param_3);
    uStack_50 = param_3;
    _objc_retain(param_4);
    uStack_48 = param_4;
    func_0x00010bf94c40(uVar4);
    _objc_release(uStack_48);
    uVar4 = uStack_50;
  }
  _objc_release(uVar4);
  _objc_destroyWeak(puVar3);
LAB_107ad3740:
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ad3794; end: 107ad37fb;  */

void FUN_107ad3794(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ad37fc; end: 107ad39d7; -[SCDiscoverShareController _didEndFeatureWithSendToSelection:shareSheetConfiguration:] */

void FUN_107ad37fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c122f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0fb120(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c2584a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf24f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bfcf800(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010befd440(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9f820(param_1);
  _objc_release(param_4);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bdfd560(param_1);
  uVar1 = param_3;
  func_0x00010c122f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  uVar2 = param_3;
  func_0x00010bfcf800(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  uVar3 = param_3;
  func_0x00010c2584a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf24f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  FUN_107ad39d8(uVar3,uVar4);
  func_0x00010bdfe3c0(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ad39d8; end: 107ad3a2f;  */

bool FUN_107ad39d8(ulong param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  func_0x00010846b590();
  if ((param_1 & 1) == 0) {
    lVar2 = param_2;
    func_0x00010bf529e0(param_2);
    bVar1 = lVar2 != 0;
  }
  else {
    bVar1 = true;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 107ad3a30; end: 107ad3b8b; -[SCDiscoverShareController _sendMessageToRecipients:phoneNumbers:storiesPostingConfig:businessIds:groups:additionalText:shareSheetConfiguration:] */

void FUN_107ad3a30(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if ((((lVar1 != 0) || (lVar1 = param_7, func_0x00010bf529e0(), lVar1 != 0)) ||
      (lVar1 = param_4, func_0x00010bf529e0(), lVar1 != 0)) ||
     (uVar2 = param_5, FUN_107ad39d8(param_5,param_6), (int)uVar2 != 0)) {
    lVar1 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1109f9a28);
    lVar3 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1109f9a48);
    func_0x00010bea0c20(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ad3b8c; end: 107ad3b9b;  */

void FUN_107ad3b8c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d4f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_name_112612df0);
  return;
}



/* Entry: 107ad3b9c; end: 107ad42ef; -[SCDiscoverShareController _sendToRecipientUsernames:phoneNumbersToSendTo:recipientUserIds:businessIds:groups:additionalText:storiesPostingConfig:shareSheetConfiguration:] */

void FUN_107ad3b9c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c111ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_9;
  FUN_107ad39d8(param_9,param_6);
  if ((int)uVar6 == 0) {
    if (*(long *)(param_1 + 0x110) == 0x14) {
      func_0x00010c15b520(uVar1);
    }
    else if (*(long *)(param_1 + 0x110) == 4) {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc_init();
      func_0x00010c1d0640();
      uVar6 = *(undefined8 *)(param_1 + 0x108);
      func_0x00010c11b3a0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_1 + 0x108);
      func_0x00010bf8c980(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(uVar6);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000108534aa8(*(undefined8 *)(param_1 + 0x138));
      func_0x00010c0df780(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(puVar4);
      uVar8 = *(undefined8 *)(param_1 + 0xe0);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar8;
      func_0x00010c0f1c40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(uVar6);
      _objc_release(uVar8);
      func_0x00010c1d0640(puVar3);
      func_0x00010c1d0640(puVar3);
      uVar6 = *(undefined8 *)(param_1 + 0x108);
      func_0x00010bf1ad20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15bb20(uVar1);
      _objc_release(uVar6);
      _objc_release(puVar3);
    }
  }
  else {
    puVar4 = PTR_PTR_1126cbed8;
    func_0x00010c111ca0(PTR_PTR_1126cbed8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b69a0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b6980(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2a7fa0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ba320(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2a9aa0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ae860(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = *(undefined **)(param_1 + 0xb8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf56080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c196d20(puVar3);
    func_0x00010c2056c0(puVar3);
    func_0x00010c27dd80(*(undefined8 *)(param_1 + 0x108));
    func_0x00010c21acc0(puVar3);
    func_0x00010c1ac2c0(puVar3);
    puVar2 = puVar3;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar5 = PTR_PTR_1126b2378;
      _objc_opt_new(PTR_PTR_1126b2378);
    }
    else {
      _objc_retain(puVar2);
      puVar5 = puVar2;
    }
    _objc_release(puVar2);
    uVar6 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c11b1e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    puVar2 = puVar5;
    func_0x00010c27f9c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e5b60();
    _objc_release(puVar2);
    _objc_release(uVar6);
    func_0x00010c183080(puVar3);
    lVar7 = *(long *)(param_1 + 0x108);
    func_0x00010c27dd80();
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    if (lVar7 == 0) {
      func_0x00010bfbbbc0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      _UIImageJPEGRepresentation(0x3ff0000000000000);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c29ae80();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010bf9d2c0();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1c4480(puVar3);
    _objc_release(uVar8);
    _objc_release(uVar6);
    func_0x00010c0c5280(puVar3);
    uVar6 = *(undefined8 *)(param_1 + 0xa8);
    func_0x000108c2c288();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010bf25140(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(uVar8);
    _objc_release(uVar6);
    puVar2 = puVar3;
    func_0x00010bf42a00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b9b80();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar3;
    func_0x00010bf42a00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80(*(undefined8 *)(param_1 + 0x108));
    func_0x00010c2b3b00(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1053a0(uVar1);
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  if (((*(char *)(param_1 + 0xe8) == '\x01') && (*(long *)(param_1 + 0xd8) != 0)) &&
     (lVar7 = param_4, func_0x00010bf529e0(), lVar7 != 0)) {
    lVar7 = param_10;
    func_0x00010c26b9e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 != 0) {
      lVar9 = param_10;
      func_0x00010c26b9e0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar9);
      _objc_release(lVar7);
      if (lVar10 != 0) {
        uVar6 = *(undefined8 *)(param_1 + 0xd8);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = param_10;
        func_0x00010c26b9e0(param_10);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar7;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = param_10;
        func_0x00010c22c620(param_10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c15c5a0(uVar6);
        _objc_release(lVar10);
        _objc_release(lVar9);
        _objc_release(lVar7);
        _objc_release(uVar6);
      }
    }
  }
  _objc_release(uVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ad42f0; end: 107ad44a3; -[SCDiscoverShareController _didFinishSendingWithRecipientsCount:groupsCount:didPostToStory:] */

void FUN_107ad42f0(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b6008;
  func_0x00010c122f60(PTR_PTR_1126b6008);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b6008;
  func_0x00010bfcf840(PTR_PTR_1126b6008);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0c6c20(uVar4);
  func_0x00010c0df780(puVar2,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110db9478);
  _objc_release(puVar2);
  if (((param_5 & 1) != 0) || (param_4 != 0 || param_3 != 0)) {
    lVar5 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22a8e0();
    _objc_release(lVar5);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ad44a4; end: 107ad4567; -[SCDiscoverShareController _didDismissSendViewController] */

void FUN_107ad44a4(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_1126a5590;
  lVar5 = *(long *)(param_1 + 0x40);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010010fab4(lVar5,puVar1);
  _objc_release(lVar5);
  if ((int)lVar2 != 0 && lVar5 != 0) {
    func_0x00010c0cfa60(*(undefined8 *)(param_1 + 0x40));
  }
  uVar3 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  _objc_opt_respondsToSelector();
  _objc_release(uVar3);
  if ((uVar4 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22a920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107ad4568; end: 107ad45a7; -[SCDiscoverShareController _announceFullscreenSend] */

void FUN_107ad4568(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e9c0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ad45a8; end: 107ad45b3; +[SCDiscoverShareController announcerIdentifier] */

undefined ** FUN_107ad45a8(void)

{
  return &PTR____CFConstantStringClassReference_110eac3b8;
}



/* Entry: 107ad45b4; end: 107ad45bb; -[SCDiscoverShareController addUpdateListener:] */

void FUN_107ad45b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107ad45bc; end: 107ad45c3; -[SCDiscoverShareController removeUpdateListener:] */

void FUN_107ad45bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107ad45c4; end: 107ad464b; -[SCDiscoverShareController _setState:] */

void FUN_107ad45c4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x158) == param_3) {
    return;
  }
  *(long *)(param_1 + 0x158) = param_3;
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  param_1 = param_1 + 0x100;
  _objc_loadWeakRetained(param_1);
  func_0x00010c22a8c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ad464c; end: 107ad4653; -[SCDiscoverShareController animationControllerForPresentedController:presentingController:sourceController:] */

undefined8 FUN_107ad464c(void)

{
  return 0;
}



/* Entry: 107ad4654; end: 107ad46af; -[SCDiscoverShareController animationControllerForDismissedController:] */

void FUN_107ad4654(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a5110);
  puVar2 = (undefined *)0x0;
  if ((param_3 != 0) && ((int)lVar1 != 0)) {
    puVar2 = PTR_PTR_1126d23a0;
    _objc_alloc_init(PTR_PTR_1126d23a0);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ad46b0; end: 107ad46c7; -[SCDiscoverShareController delegate] */

void FUN_107ad46b0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x100);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ad46c8; end: 107ad46d3; -[SCDiscoverShareController setDelegate:] */

void FUN_107ad46c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x100,param_3);
  return;
}



/* Entry: 107ad46d4; end: 107ad46db; -[SCDiscoverShareController blob] */

undefined8 FUN_107ad46d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 107ad46dc; end: 107ad470b; -[SCDiscoverShareController setBlob:] */

void FUN_107ad46dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ad470c; end: 107ad4713; -[SCDiscoverShareController messageBodyType] */

undefined8 FUN_107ad470c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 107ad4714; end: 107ad471b; -[SCDiscoverShareController setMessageBodyType:] */

void FUN_107ad4714(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x110) = param_3;
  return;
}



/* Entry: 107ad471c; end: 107ad4723; -[SCDiscoverShareController enableSnapDocContentManager] */

undefined1 FUN_107ad471c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf8);
}



/* Entry: 107ad4724; end: 107ad472b; -[SCDiscoverShareController setEnableSnapDocContentManager:] */

void FUN_107ad4724(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xf8) = param_3;
  return;
}



/* Entry: 107ad472c; end: 107ad4733; -[SCDiscoverShareController videoContentResult] */

undefined8 FUN_107ad472c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 107ad4734; end: 107ad4763; -[SCDiscoverShareController setVideoContentResult:] */

void FUN_107ad4734(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ad4764; end: 107ad476b; -[SCDiscoverShareController snapId] */

undefined8 FUN_107ad4764(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 107ad476c; end: 107ad479b; -[SCDiscoverShareController setSnapId:] */

void FUN_107ad476c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ad479c; end: 107ad47a3; -[SCDiscoverShareController compositeStoryId] */

undefined8 FUN_107ad479c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 107ad47a4; end: 107ad47d3; -[SCDiscoverShareController setCompositeStoryId:] */

void FUN_107ad47a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ad47d4; end: 107ad47db; -[SCDiscoverShareController publisherDeepLink] */

undefined8 FUN_107ad47d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 107ad47dc; end: 107ad480b; -[SCDiscoverShareController setPublisherDeepLink:] */

void FUN_107ad47dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ad480c; end: 107ad4813; -[SCDiscoverShareController viewLocation] */

undefined8 FUN_107ad480c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 107ad4814; end: 107ad481b; -[SCDiscoverShareController setViewLocation:] */

void FUN_107ad4814(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x138) = param_3;
  return;
}



/* Entry: 107ad481c; end: 107ad4823; -[SCDiscoverShareController storyViewingSessionId] */

undefined8 FUN_107ad481c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 107ad4824; end: 107ad4853; -[SCDiscoverShareController setStoryViewingSessionId:] */

void FUN_107ad4824(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ad4854; end: 107ad485b; -[SCDiscoverShareController streamId] */

undefined8 FUN_107ad4854(long param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



/* Entry: 107ad485c; end: 107ad488b; -[SCDiscoverShareController setStreamId:] */

void FUN_107ad485c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x148) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ad488c; end: 107ad4893; -[SCDiscoverShareController mediaPlaybackSessionId] */

undefined8 FUN_107ad488c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



/* Entry: 107ad4894; end: 107ad48c3; -[SCDiscoverShareController setMediaPlaybackSessionId:] */

void FUN_107ad4894(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ad48c4; end: 107ad48cb; -[SCDiscoverShareController state] */

undefined8 FUN_107ad48c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x158);
}



/* Entry: 107ad48cc; end: 107ad48d3; -[SCDiscoverShareController stateObservable] */

undefined8 FUN_107ad48cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}



/* Entry: 107ad48d4; end: 107ad4abb; -[SCDiscoverShareController .cxx_destruct] */

void FUN_107ad48d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_destroyWeak(param_1 + 0x100);
  _objc_storeStrong(param_1 + 0xf0,0);
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



/* Entry: 107ad4abc; end: 107ad4b2f; -[SCDiscoverSharePreviewFilterDataProviderCreator initWithPreviewFilterDataProviderFactory:] */

undefined1 * FUN_107ad4abc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9b00;
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



/* Entry: 107ad4b30; end: 107ad4b37; -[SCDiscoverSharePreviewFilterDataProviderCreator previewFilterDataProviderWithSnapSource:mediaType:] */

void FUN_107ad4b30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc58b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_getFilterDataProviderUnderABWith_1125cefd0);
  return;
}



/* Entry: 107ad4b38; end: 107ad4b43; -[SCDiscoverSharePreviewFilterDataProviderCreator .cxx_destruct] */

void FUN_107ad4b38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ad4b44; end: 107ad4bc7; -[SCDiscoverSharePreviewFilterDataProviderCreatorDefaultServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ad4b44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126cc5c0;
  _objc_alloc(PTR_PTR_1126cc5c0);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112769e50;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c110fe0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c039a40(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


