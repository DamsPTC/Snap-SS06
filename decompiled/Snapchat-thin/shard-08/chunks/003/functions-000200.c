/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f7c4fc; end: 105f7c513; -[SCChatCountdownStatusPlugin uiContainer] */

void FUN_105f7c4fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f7c514; end: 105f7c51f; -[SCChatCountdownStatusPlugin setUiContainer:] */

void FUN_105f7c514(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 105f7c520; end: 105f7c5cf; -[SCChatCountdownStatusPlugin .cxx_destruct] */

void FUN_105f7c520(long param_1)

{
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 105f7c5d0; end: 105f7c6f3; -[SCChatCountdownStatusViewProviders initWithCountdownServiceFactory:friendStore:cofStore:userInfoProvider:blizzardLogger:] */

undefined1 *
FUN_105f7c5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ee6b8;
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f7c6f4; end: 105f7c6fb; -[SCChatCountdownStatusViewProviders countdownServiceFactory] */

undefined8 FUN_105f7c6f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105f7c6fc; end: 105f7c72b; -[SCChatCountdownStatusViewProviders setCountdownServiceFactory:] */

void FUN_105f7c6fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f7c72c; end: 105f7c733; -[SCChatCountdownStatusViewProviders friendStore] */

undefined8 FUN_105f7c72c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105f7c734; end: 105f7c763; -[SCChatCountdownStatusViewProviders setFriendStore:] */

void FUN_105f7c734(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f7c764; end: 105f7c76b; -[SCChatCountdownStatusViewProviders cofStore] */

undefined8 FUN_105f7c764(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105f7c76c; end: 105f7c79b; -[SCChatCountdownStatusViewProviders setCofStore:] */

void FUN_105f7c76c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f7c79c; end: 105f7c7a3; -[SCChatCountdownStatusViewProviders userInfoProvider] */

undefined8 FUN_105f7c79c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105f7c7a4; end: 105f7c7d3; -[SCChatCountdownStatusViewProviders setUserInfoProvider:] */

void FUN_105f7c7a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f7c7d4; end: 105f7c7db; -[SCChatCountdownStatusViewProviders blizzardLogger] */

undefined8 FUN_105f7c7d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105f7c7dc; end: 105f7c80b; -[SCChatCountdownStatusViewProviders setBlizzardLogger:] */

void FUN_105f7c7dc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105f7c80c; end: 105f7c85f; -[SCChatCountdownStatusViewProviders .cxx_destruct] */

void FUN_105f7c80c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f7c860; end: 105f7c883; +[SCCCountdownInChatCountdownStatusViewProviders valdiMarshallableObjectDescriptor] */

void FUN_105f7c860(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ffd38;
  param_1[1] = &PTR_s_SCComposerNetworkingGrpcServiceF_1108ffdc8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f7c884; end: 105f7c88f; +[SCCCountdownMessageView componentPath] */

undefined ** FUN_105f7c884(void)

{
  return &PTR____CFConstantStringClassReference_110e34358;
}



/* Entry: 105f7c890; end: 105f7c8b3; -[SCCCountdownMessageView initWithViewModel:componentContext:runtime:] */

void FUN_105f7c890(void)

{
  FUN_105f7c9d4(PTR_PTR_1126ee6c0);
  return;
}



/* Entry: 105f7c8b4; end: 105f7c8eb; -[SCCCountdownMessageView setViewModel:] */

void FUN_105f7c8b4(void)

{
  func_0x000105f7c9f0();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f7ca00();
  func_0x000105f7c9e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105f7c8ec; end: 105f7c92b; -[SCCCountdownMessageView viewModel] */

void FUN_105f7c8ec(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f7c9e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105f7c92c; end: 105f7c937; +[SCCCountdownStatusView componentPath] */

undefined ** FUN_105f7c92c(void)

{
  return &PTR____CFConstantStringClassReference_110e34378;
}



/* Entry: 105f7c938; end: 105f7c95b; -[SCCCountdownStatusView initWithViewModel:componentContext:runtime:] */

void FUN_105f7c938(void)

{
  FUN_105f7c9d4(PTR_PTR_1126ee6c8);
  return;
}



/* Entry: 105f7c95c; end: 105f7c993; -[SCCCountdownStatusView setViewModel:] */

void FUN_105f7c95c(void)

{
  func_0x000105f7c9f0();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f7ca00();
  func_0x000105f7c9e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105f7c994; end: 105f7c9d3; -[SCCCountdownStatusView viewModel] */

void FUN_105f7c994(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f7c9e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105f7c9d4; end: 105f7ca0b;  */

void FUN_105f7c9d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 105f7ca0c; end: 105f7ca13; -[SCCountdownStatusType__Enum init] */

void FUN_105f7ca0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 105f7ca14; end: 105f7ca47; -[SCCCountdownMessageViewContext init] */

void FUN_105f7ca14(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee6d0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 105f7ca48; end: 105f7ca5b; +[SCCCountdownMessageViewContext valdiMarshallableObjectDescriptor] */

void FUN_105f7ca48(undefined8 *param_1)

{
  *param_1 = &PTR_s_onOpenCountdown_1108ffdf8;
  param_1[1] = &PTR_s_SCComposerNetworkingGrpcServiceF_1108ffe40;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f7ca5c; end: 105f7ca8f; -[SCCCountdownMessageViewModel initWithCountdownId:] */

void FUN_105f7ca5c(undefined8 param_1)

{
  func_0x000105f7cb90(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105f7ca90; end: 105f7caa7; +[SCCCountdownMessageViewModel valdiMarshallableObjectDescriptor] */

void FUN_105f7ca90(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_countdownId_1108ffe50;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f7caa8; end: 105f7cb23; -[SCCCountdownStatusViewContext initWithOnOpenCountdownEvent:providers:] */

undefined8
FUN_105f7caa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_3;
  func_0x000105f7cb90();
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 105f7cb24; end: 105f7cb37; +[SCCCountdownStatusViewContext valdiMarshallableObjectDescriptor] */

void FUN_105f7cb24(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ffe80;
  param_1[1] = &PTR_DAT_1108ffec8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f7cb38; end: 105f7cb6b; -[SCCCountdownStatusViewModel initWithCountdownId:countdownType:] */

void FUN_105f7cb38(undefined8 param_1)

{
  func_0x000105f7cb90(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105f7cb6c; end: 105f7cbcb; +[SCCCountdownStatusViewModel valdiMarshallableObjectDescriptor] */

void FUN_105f7cb6c(undefined8 *param_1)

{
  *param_1 = &PTR_s_countdownId_1108ffed8;
  param_1[1] = &PTR_DAT_1108fff20;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f7cbcc; end: 105f7cd3b; -[SCLensSpotlightShareDataProvider initWithCompositeStoryId:senderUserId:shouldUseSmallThumbnail:layoutDirection:spotlightDataFetcher:publicProfileManager:thumbnailCoordinator:mediaCoordinator:] */

undefined1 *
FUN_105f7cbcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ee6f0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x38) = param_5;
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_10;
    _objc_release(uVar2);
    func_0x00010be3be60(puVar1);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f7cd3c; end: 105f7cecb; -[SCLensSpotlightShareDataProvider fetchDataWithUIUpdateBlock:videoContextUpdateBlock:storyThumbnailUrlUpdateBlock:] */

void FUN_105f7cd3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_1 + 0x28) != 0) {
    _objc_initWeak(auStack_58,param_1);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105f7cecc;
    puStack_80 = &UNK_1108fff30;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    uStack_78 = param_3;
    _objc_retain(param_5);
    uStack_70 = param_5;
    _objc_retain(param_4);
    ppuVar1 = &puStack_98;
    uStack_68 = param_4;
    _objc_retainBlock();
    if (*(long *)(param_1 + 0x50) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfaa320();
      _objc_release(uVar2);
    }
    else {
      (*(code *)ppuVar1[2])(ppuVar1,*(undefined8 *)(param_1 + 0x28),*(long *)(param_1 + 0x50),1);
    }
    _objc_release(ppuVar1);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105f7cecc; end: 105f7cf3b;  */

void FUN_105f7cecc(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  if (param_4 == 0) {
    func_0x00010be28fc0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
  else {
    func_0x00010be27da0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),param_3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f7cf3c; end: 105f7d023; -[SCLensSpotlightShareDataProvider _initiateDataFetch] */

void FUN_105f7cf3c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x28) != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bfaa320(uVar1);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 105f7d024; end: 105f7d073;  */

void FUN_105f7d024(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 != 0) {
    _objc_retain(param_3);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be77460();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105f7d074; end: 105f7d153; -[SCLensSpotlightShareDataProvider _prefetchMediaWithSpotlightStory:] */

void FUN_105f7d074(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c245680(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x000107d22a6c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c11d620(uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105f7d154; end: 105f7d157;  */

void FUN_105f7d154(void)

{
  return;
}



/* Entry: 105f7d158; end: 105f7d5bb; -[SCLensSpotlightShareDataProvider _handleDataWithUIUpdateBlock:storyThumbnailUrlUpdateBlock:videoContextUpdateBlock:spotlightStory:] */

void FUN_105f7d158(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
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
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (*(long *)(param_1 + 0x50) == 0) {
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = param_6;
    _objc_release(uVar1);
  }
  puVar2 = PTR_PTR_1126c6870;
  func_0x00010c25b100();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110dc1758;
  puVar3 = *(undefined **)(param_1 + 0x50);
  func_0x00010c26e020();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110dc1778;
  puVar6 = *(undefined **)(param_1 + 0x50);
  puStack_90 = puVar5;
  func_0x00010c26e020();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c085300();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  if (puVar7 == (undefined *)0x0) {
    puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110ddd938;
  puVar9 = *(undefined **)(param_1 + 0x50);
  puStack_88 = puVar8;
  func_0x00010c26e020();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  if (puVar10 == (undefined *)0x0) {
    puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_98 = &PTR____CFConstantStringClassReference_110dc1798;
  ppuVar12 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c40c0;
  puStack_80 = puVar11;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar12;
  if (ppuVar12 == (undefined **)0x0) {
    ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_78 = ppuVar13;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar12 == (undefined **)0x0) {
    _objc_release(ppuVar13);
  }
  _objc_release(ppuVar12);
  if (puVar10 == (undefined *)0x0) {
    _objc_release(puVar11);
  }
  _objc_release(puVar10);
  _objc_release(puVar9);
  if (puVar7 == (undefined *)0x0) {
    _objc_release(puVar8);
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  if (puVar4 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  ppuVar12 = &PTR____CFConstantStringClassReference_110dc1718;
  func_0x000108543d00(&PTR____CFConstantStringClassReference_110dc1718,puVar14);
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar12;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_4 + 0x10))(param_4,ppuVar13);
  _objc_release(ppuVar13);
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    _objc_initWeak(&puStack_b8,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_105f7d5bc;
    puStack_d8 = &UNK_1108fffd0;
    ppuVar13 = &puStack_f0;
    ppuVar16 = &puStack_b8;
    _objc_copyWeak(auStack_c0,ppuVar16);
    _objc_retain(param_3);
    lStack_c8 = param_3;
    _objc_retain(puVar2);
    puStack_d0 = puVar2;
    func_0x00010c269fc0(uVar1);
    _objc_release(puStack_d0);
    _objc_release(lStack_c8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(&puStack_b8);
  }
  else {
    ppuVar15 = (undefined **)PTR_PTR_1126c6870;
    func_0x00010c25b100();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar15;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = ppuVar13;
    (**(code **)(param_3 + 0x10))(param_3,ppuVar13);
    _objc_release(ppuVar13);
    _objc_release(ppuVar15);
  }
  func_0x00010be14e60(param_1);
  _objc_release(ppuVar12);
  _objc_release(puVar14);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar13 + 6);
  _objc_destroyWeak(&puStack_b8);
  __Unwind_Resume();
  _objc_retain(ppuVar16);
  param_3 = param_3 + 0x30;
  _objc_loadWeakRetained(param_3);
  func_0x00010be21ca0();
  _objc_release(ppuVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f7d5bc; end: 105f7d60f;  */

void FUN_105f7d5bc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be21ca0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f7d610; end: 105f7d6bb; -[SCLensSpotlightShareDataProvider _handleErrorStateWithUIUpdateBlock:] */

void FUN_105f7d610(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c6870;
  _objc_retain(param_3);
  func_0x00010c25b100(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105f7ffb0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ad540(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_3 + 0x10))(param_3,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f7d6bc; end: 105f7d91b; -[SCLensSpotlightShareDataProvider _getPublicProfileManagerWithManager:uiUpdateBlock:uiConfigBuilder:] */

void FUN_105f7d6bc(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + 0x50);
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c24b240();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c29c5c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (0 < (long)uVar4) {
    puVar5 = PTR_PTR_1126b10c8;
    func_0x00010c22d8e0((double)uVar4,PTR_PTR_1126b10c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bc880(param_5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  uVar9 = param_5;
  func_0x00010bf21f60(param_5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_4 + 0x10))(param_4,uVar9);
  _objc_release(uVar9);
  lVar6 = *(long *)(param_1 + 0x50);
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    lVar7 = *(long *)(param_1 + 0x50);
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c08fa60();
    _objc_release(lVar7);
    _objc_release(lVar6);
    if (lVar8 != 0) {
      lVar6 = param_3;
      func_0x00010bfc93a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010bf25140(uVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar6;
      (**(code **)(lVar6 + 0x10))(lVar6,uVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar8;
      func_0x00010c272160();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      _objc_release(uVar9);
      _objc_release(lVar6);
      _objc_retain(param_5);
      _objc_retain(param_4);
      func_0x00010c25ff60(lVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(param_4);
      _objc_release(param_5);
      _objc_release(lVar7);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105f7d91c; end: 105f7da1f;  */

void FUN_105f7d91c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010c2711a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bb3c0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010c0b46a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bb0a0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e1a60(param_2);
    func_0x00010c2a9180(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf21f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f7da20; end: 105f7daf3; -[SCLensSpotlightShareDataProvider _fetchThumbnailDataForSpotlightStory:] */

void FUN_105f7da20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    return;
  }
  func_0x00010c26e020(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000107d227d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = 0;
  _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11da60(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105f7daf4; end: 105f7db07;  */

void FUN_105f7daf4(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c213f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setThumbnailData__112662a00,param_2);
    return;
  }
  return;
}



/* Entry: 105f7db08; end: 105f7db13; -[SCLensSpotlightShareDataProvider storyViewAccessibilityId] */

void FUN_105f7db08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24c1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c6878,PTR_s_spotlightShareAccessibilityId_112670a90);
  return;
}



/* Entry: 105f7db14; end: 105f7db1b; -[SCLensSpotlightShareDataProvider shouldOverrideMediaSize] */

undefined1 FUN_105f7db14(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



/* Entry: 105f7db1c; end: 105f7db2f; -[SCLensSpotlightShareDataProvider overrideMediaSize] */

undefined1  [16] FUN_105f7db1c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4064000000000000;
  auVar1._0_8_ = 0x4056800000000000;
  return auVar1;
}



/* Entry: 105f7db30; end: 105f7db47; -[SCLensSpotlightShareDataProvider storySharePlaybackPresenterDelegate] */

void FUN_105f7db30(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f7db48; end: 105f7db53; -[SCLensSpotlightShareDataProvider setStorySharePlaybackPresenterDelegate:] */

void FUN_105f7db48(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 105f7db54; end: 105f7db5b; -[SCLensSpotlightShareDataProvider spotlightStory] */

undefined8 FUN_105f7db54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105f7db5c; end: 105f7db8b; -[SCLensSpotlightShareDataProvider setSpotlightStory:] */

void FUN_105f7db5c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105f7db8c; end: 105f7db93; -[SCLensSpotlightShareDataProvider thumbnailData] */

undefined8 FUN_105f7db8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105f7db94; end: 105f7dbc3; -[SCLensSpotlightShareDataProvider setThumbnailData:] */

void FUN_105f7db94(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105f7dbc4; end: 105f7dc43; -[SCLensSpotlightShareDataProvider .cxx_destruct] */

void FUN_105f7dbc4(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f7dc44; end: 105f7e027; -[SCLensSpotlightShareMessageRenderingPlugin initWithStorySharingComposerContextProvider:currentUserId:nglStudySettingsProvider:spotlightDataFetcher:publicProfileManager:spotlightShareSender:pageLauncher:thumbnailCoordinator:mediaCoordinator:discoverFeedDataMutator:snapchattersSynchronousDataFetcher:spotlightPlatformAnalyticsCreator:messagingMessageProvider:] */

undefined8 *
FUN_105f7dc44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
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
  puStack_70 = PTR_PTR_1126ee6f8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 5) = 0;
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[4];
    puVar1[4] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_15;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105f7e028;
    puStack_88 = &UNK_110842e18;
    _objc_retain(puVar1);
    puStack_80 = puVar1;
    func_0x000100162d98("APPSTORE",&puStack_a0);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    _objc_release(puStack_80);
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
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105f7e028; end: 105f7e06b;  */

void FUN_105f7e028(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c292ae0();
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x78) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f7e06c; end: 105f7e117; -[SCLensSpotlightShareMessageRenderingPlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_105f7e06c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c0cbe00(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076860();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bee7580(param_1,param_2,param_3,param_4,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105f7e118; end: 105f7e52b; -[SCLensSpotlightShareMessageRenderingPlugin _valdiContextParamsForMessage:conversationParticipants:renderType:] */

void FUN_105f7e118(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0xb8);
  func_0x00010c0cbe00(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar9;
  if (param_5 == 1) {
    lVar8 = lVar1;
    func_0x00010c11ebc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar8;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar8);
  }
  lVar9 = lVar3;
  func_0x00010c24c520();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar9;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar8;
  func_0x000108f52130();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar9);
  if (lVar4 == 0) {
    lVar9 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x28);
    lVar9 = 0x50;
    if (param_5 != 2) {
      lVar9 = 0x48;
    }
    lVar8 = *(long *)(param_1 + lVar9);
    _objc_retain(lVar8);
    uStack_70 = PTR_PTR_1126c6880;
    if (param_5 == 1) {
      lVar9 = param_3;
      func_0x00010c0cb340(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c11ec40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11eda0(uStack_70,param_2,lVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      _objc_release(lVar9);
    }
    else {
      func_0x00010c0cbae0(PTR_PTR_1126c6880,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar9 = lVar8;
    func_0x00010c0e00e0(lVar8,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar7 = PTR_PTR_1126c6878;
    if (lVar9 == 0) {
      lVar9 = param_3;
      func_0x00010c15de20(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c272380();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c082f00(puVar7,param_2,param_4,lVar10,*(undefined8 *)(param_1 + 0xa0));
      _objc_release(lVar10);
      _objc_release(lVar9);
      if ((int)puVar7 == 0) {
        lVar10 = 0;
      }
      else {
        lVar9 = param_3;
        func_0x00010c15de20(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010c272380();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar9);
      }
      lVar5 = param_1;
      func_0x00010bdf7e80(param_1,param_2,param_3,lVar4,lVar10,param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be3c360(param_1,param_2,lVar5,param_3);
      func_0x00010be3c5a0(param_1,param_2,param_3,lVar4);
      if (param_5 == 2) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar7 = PTR_PTR_1126c6888;
        _objc_alloc(PTR_PTR_1126c6888);
        func_0x00010c02b380();
      }
      lVar6 = *(long *)(param_1 + 8);
      func_0x00010bf4eee0(lVar6,param_2,lVar5,puVar7,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(lVar8,param_2,lVar6,lVar2);
      lVar9 = lVar6;
      func_0x00010bf4ece0(lVar6,param_2,uStack_70);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(puVar7);
      _objc_release(lVar5);
    }
    else {
      lVar10 = lVar8;
      func_0x00010c0e00e0(lVar8,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar10;
      func_0x00010bf4ece0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar10);
    _objc_release(uStack_70);
    _objc_release(lVar8);
    _os_unfair_lock_unlock(param_1 + 0x28);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar9);
  return;
}



/* Entry: 105f7e52c; end: 105f7e673; -[SCLensSpotlightShareMessageRenderingPlugin _dataProviderWithMessage:compositeStoryId:senderUserId:renderType:] */

void FUN_105f7e52c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = *(undefined **)(param_1 + 0x30);
  _objc_retain(puVar2);
  if (param_6 == 2) {
    lVar1 = 0x38;
  }
  else {
    puVar3 = puVar2;
    if (param_6 != 1) goto LAB_105f7e5b4;
    lVar1 = 0x40;
  }
  puVar3 = *(undefined **)(param_1 + lVar1);
  _objc_retain(puVar3);
  _objc_release(puVar2);
LAB_105f7e5b4:
  puVar2 = puVar3;
  func_0x00010c0e00e0(puVar3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126c6890;
    _objc_alloc(PTR_PTR_1126c6890);
    func_0x00010c000b40();
    func_0x00010c1d0640(puVar3,param_2,puVar2,param_4);
  }
  else {
    puVar2 = puVar3;
    func_0x00010c0e00e0(puVar3,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f7e674; end: 105f7e713; -[SCLensSpotlightShareMessageRenderingPlugin _insertDataProviderIntoConversationMap:forMessage:] */

void FUN_105f7e674(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _os_unfair_lock_assert_owner(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c0cbe00(uVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  func_0x00010c0cb9a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3,param_2,param_3,uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f7e714; end: 105f7e773; -[SCLensSpotlightShareMessageRenderingPlugin _insertMessage:forCompositeStoryId:] */

void FUN_105f7e714(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _os_unfair_lock_assert_owner(param_1 + 0x28);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x60),param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f7e774; end: 105f7e7df; -[SCLensSpotlightShareMessageRenderingPlugin _handleConversationChange] */

void FUN_105f7e774(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x28);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x48));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x58));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x28);
  return;
}



/* Entry: 105f7e7e0; end: 105f7e91b; -[SCLensSpotlightShareMessageRenderingPlugin _lensIdFromMessage:] */

void FUN_105f7e7e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c24c520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar4;
  func_0x00010bfdc580();
  if ((int)uVar2 != 0) {
    uVar2 = uVar4;
    func_0x00010c2453e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd84e0();
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)uVar3 != 0) {
      uVar2 = uVar4;
      func_0x00010c2453e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010bfe5ea0();
      func_0x00010c0df7c0(puVar5,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(uVar3);
      _objc_release(uVar2);
      goto LAB_105f7e8fc;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_105f7e8fc:
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105f7e91c; end: 105f7e94b; -[SCLensSpotlightShareMessageRenderingPlugin identifier] */

void FUN_105f7e91c(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e34458);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e34458);
  return;
}



/* Entry: 105f7e94c; end: 105f7e953; -[SCLensSpotlightShareMessageRenderingPlugin pluginType] */

undefined8 FUN_105f7e94c(void)

{
  return 0;
}



/* Entry: 105f7e954; end: 105f7ea6f; -[SCLensSpotlightShareMessageRenderingPlugin setActiveConversationIdObservable:] */

void FUN_105f7e954(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bf870a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105f7ea70; end: 105f7ea9b;  */

void FUN_105f7ea70(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f7ea9c; end: 105f7eadb; -[SCLensSpotlightShareMessageRenderingPlugin canForwardMessageFromActionMenu:focusedMessageContent:] */

undefined8 FUN_105f7ea9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c0cbe00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076860();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105f7eadc; end: 105f7eb1b; -[SCLensSpotlightShareMessageRenderingPlugin canForwardMessageFromCTA:] */

undefined8 FUN_105f7eadc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c0cbe00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076860();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105f7eb1c; end: 105f7ebaf; -[SCLensSpotlightShareMessageRenderingPlugin isSharingRestrictedForMessage:] */

long FUN_105f7eb1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c0cbe00(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076860();
  if ((int)uVar2 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x00010c24c240(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c07dce0();
    _objc_release(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105f7ebb0; end: 105f7ee4f; -[SCLensSpotlightShareMessageRenderingPlugin forwardParamsForMessage:focusedMessageContent:conversationParticipants:] */

void FUN_105f7ebb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c0cbe00(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c24c520();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x000108f52130();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar7 = *(long *)(param_1 + 0x30);
  func_0x00010c0e00e0(lVar7,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 == 0) {
    puVar12 = (undefined *)0x0;
    puVar11 = (undefined *)0x0;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x30);
    func_0x00010c0e00e0(lVar8,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar8;
    func_0x00010c26da00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    if (lVar7 == 0) {
      puVar12 = (undefined *)0x0;
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,lVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126b4458;
      _objc_alloc(PTR_PTR_1126b4458);
      func_0x00010c01c300();
      puVar11 = PTR_PTR_1126c6898;
      puVar12 = puVar10;
      func_0x00010c0c70c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08f300(puVar11,param_2,puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      puVar12 = PTR_PTR_1126c68a0;
      func_0x00010c24c200(PTR_PTR_1126c6878);
      func_0x00010c2990e0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar9);
    }
    _objc_release(lVar7);
  }
  puVar9 = PTR_PTR_1126c68a8;
  _objc_alloc(PTR_PTR_1126c68a8);
  func_0x00010c039de0();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar6);
  _os_unfair_lock_unlock(param_1 + 0x28);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105f7ee50; end: 105f7f1b3; -[SCLensSpotlightShareMessageRenderingPlugin forwardMessage:focusedMessageContent:conversations:recipientCount:completion:] */

void FUN_105f7ee50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_7);
  uVar11 = *(undefined8 *)(param_1 + 0xb8);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0cbe00(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar11;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c24c520();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar10;
  func_0x000108f52130();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar11);
  puVar5 = PTR_PTR_1126b5bd0;
  _objc_alloc();
  puVar6 = PTR_PTR_1126b5bd8;
  func_0x00010bf36640(PTR_PTR_1126b5bd8);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010be4b000(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c000c00();
  _objc_release(lVar7);
  _objc_release(puVar6);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar8;
  func_0x00010c24c460();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010bf026a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001086063f4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar9 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf82560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf579a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar2);
  _objc_release(uVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010bf50b20(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar9 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  func_0x00010c15cbe0(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(uVar10);
  _objc_release(param_7);
  _objc_release(param_7);
  _objc_release(uVar11);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar8);
  _objc_release(puVar5);
  _objc_release(uVar4);
  return;
}



/* Entry: 105f7f1b4; end: 105f7f1c7;  */

void FUN_105f7f1b4(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000105f7f1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2 == 0);
  return;
}



/* Entry: 105f7f1c8; end: 105f7f207; -[SCLensSpotlightShareMessageRenderingPlugin actionHandlerDidHandleHeaderTap:] */

void FUN_105f7f1c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0cb140(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be48580(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f7f208; end: 105f7f247; -[SCLensSpotlightShareMessageRenderingPlugin actionHandler:didHandleStoryTap:] */

void FUN_105f7f208(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0cb140(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be48580(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f7f248; end: 105f7f343; -[SCLensSpotlightShareMessageRenderingPlugin _launchSpotlightFeedForMessage:] */

void FUN_105f7f248(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be61740();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105f7f344;
    puStack_50 = &UNK_110841fb0;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(lVar1);
    lStack_48 = lVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_68);
    _objc_release(lStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105f7f344; end: 105f7f3f3;  */

void FUN_105f7f344(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c68b0;
    _objc_alloc(PTR_PTR_1126c68b0);
    lVar3 = lVar1 + 0xd8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c058220(puVar2,param_2,lVar3,*(undefined8 *)(param_1 + 0x20),0x16,0,0x57,
                        0xffffffffffffffff);
    _objc_release(lVar3);
    uVar4 = *(undefined8 *)(lVar1 + 0x68);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c080();
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f7f3f4; end: 105f7f94f; -[SCLensSpotlightShareMessageRenderingPlugin _multipleShareConfigurationForMessage:] */

/* WARNING: Possible PIC construction at 0x000105f7f694: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105f7f698) */
/* WARNING: Removing unreachable block (ram,0x000105f7f898) */
/* WARNING: Removing unreachable block (ram,0x000105f7f6ac) */
/* WARNING: Removing unreachable block (ram,0x000105f7f89c) */

void FUN_105f7f3f4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0xb8);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_1 + 0x28);
  lVar2 = lVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c24c520();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x000108f52130();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010c11ebc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c24c520();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c08fa60();
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar6;
  if (lVar8 != 0) {
    lVar3 = lVar1;
    func_0x00010c11ebc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c24c520();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x000108f52130();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar7);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  if (lVar2 == 0) {
    _objc_release(0);
    _os_unfair_lock_unlock(param_1 + 0x28);
    _objc_release(lVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
      return;
    }
    ___stack_chk_fail();
    _os_unfair_lock_unlock(param_1 + 0x28);
    __Unwind_Resume();
    param_1 = *(long *)(param_3 + 0x20);
  }
  else {
    func_0x00010c11ebc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c24c520();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c08fa60();
    lVar2 = 0x30;
    if (lVar7 != 0) {
      lVar2 = 0x40;
    }
    param_2 = *(undefined8 *)(param_1 + lVar2);
    _objc_retain(param_2);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010be020b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__discoverFeedStoryFromDataProvid_11255e1c8,param_2);
  return;
}



/* Entry: 105f7f950; end: 105f7f95b;  */

void FUN_105f7f950(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be020b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__discoverFeedStoryFromDataProvid_11255e1c8,
             param_2);
  return;
}



/* Entry: 105f7f95c; end: 105f7f9b3; -[SCLensSpotlightShareMessageRenderingPlugin _discoverFeedStoryFromDataProvider:] */

void FUN_105f7f95c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c24c460();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x000108f4cbe0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105f7f9b4; end: 105f7f9b7; -[SCLensSpotlightShareMessageRenderingPlugin dismissPresentedView] */

void FUN_105f7f9b4(void)

{
  return;
}



/* Entry: 105f7f9b8; end: 105f7f9bf; -[SCLensSpotlightShareMessageRenderingPlugin valdiContextParamsForQuotedMessage:conversationParticipants:] */

void FUN_105f7f9b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee7590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__valdiContextParamsForMessage_co_112597708,param_3,param_4,1);
  return;
}



/* Entry: 105f7f9c0; end: 105f7f9c7; -[SCLensSpotlightShareMessageRenderingPlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:] */

void FUN_105f7f9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee7590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__valdiContextParamsForMessage_co_112597708,param_3,param_4,2);
  return;
}



/* Entry: 105f7f9c8; end: 105f7f9cf; -[SCLensSpotlightShareMessageRenderingPlugin quotedRenderingStyleForMessage:] */

undefined8 FUN_105f7f9c8(void)

{
  return 1;
}



/* Entry: 105f7f9d0; end: 105f7f9d7; -[SCLensSpotlightShareMessageRenderingPlugin shouldDisplayContextualHeaderForMessage:] */

undefined8 FUN_105f7f9d0(void)

{
  return 1;
}



/* Entry: 105f7f9d8; end: 105f7fb0b; -[SCLensSpotlightShareMessageRenderingPlugin contextualHeaderForMessage:conversationParticipants:] */

void FUN_105f7f9d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11ebc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c22ac80();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126c68c0;
  _objc_alloc();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)uVar4 == 0x10) {
    puVar7 = puVar5;
    func_0x000105f7ff98();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c68c8;
    func_0x00010c131980(PTR_PTR_1126c68c8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    puVar9 = puVar8;
  }
  else {
    puVar6 = puVar5;
    func_0x000105f7ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e34418);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined *)0x0;
    puVar9 = puVar7;
  }
  func_0x00010c051540(puVar5,param_2,puVar7,0,puVar8);
  _objc_release(puVar9);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105f7fb0c; end: 105f7fb13; -[SCLensSpotlightShareMessageRenderingPlugin quotedSupportEnabled] */

undefined8 FUN_105f7fb0c(void)

{
  return 1;
}



/* Entry: 105f7fb14; end: 105f7fc5b; -[SCLensSpotlightShareMessageRenderingPlugin spotlightShareStoryFor:] */

void FUN_105f7fb14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0xb8);
  func_0x00010c0cbe00(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c24c520();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x000108f52130();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar6 == 0) {
    uVar8 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0e00e0(uVar7,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c24c460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
  }
  _objc_release(lVar6);
  _os_unfair_lock_unlock(param_1 + 0x28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 105f7fc5c; end: 105f7fc63; -[SCLensSpotlightShareMessageRenderingPlugin activeConversationIdObservable] */

undefined8 FUN_105f7fc5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 105f7fc64; end: 105f7fc6b; -[SCLensSpotlightShareMessageRenderingPlugin activeConversationInformationObservable] */

undefined8 FUN_105f7fc64(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 105f7fc6c; end: 105f7fc9b; -[SCLensSpotlightShareMessageRenderingPlugin setActiveConversationInformationObservable:] */

void FUN_105f7fc6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f7fc9c; end: 105f7fcb3; -[SCLensSpotlightShareMessageRenderingPlugin uiContainer] */

void FUN_105f7fc9c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f7fcb4; end: 105f7fcbf; -[SCLensSpotlightShareMessageRenderingPlugin setUiContainer:] */

void FUN_105f7fcb4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd0,param_3);
  return;
}



/* Entry: 105f7fcc0; end: 105f7fcd7; -[SCLensSpotlightShareMessageRenderingPlugin multiDirectionUIContainer] */

void FUN_105f7fcc0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f7fcd8; end: 105f7fce3; -[SCLensSpotlightShareMessageRenderingPlugin setMultiDirectionUIContainer:] */

void FUN_105f7fcd8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd8,param_3);
  return;
}



/* Entry: 105f7fce4; end: 105f7fe1f; -[SCLensSpotlightShareMessageRenderingPlugin .cxx_destruct] */

void FUN_105f7fce4(long param_1)

{
  _objc_destroyWeak(param_1 + 0xd8);
  _objc_destroyWeak(param_1 + 0xd0);
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
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


