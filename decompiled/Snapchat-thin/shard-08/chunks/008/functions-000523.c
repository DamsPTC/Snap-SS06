/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1065cf82c; end: 1065cf833; -[SCCreativeKitParsedRequest caption] */

undefined8 FUN_1065cf82c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1065cf834; end: 1065cf863; -[SCCreativeKitParsedRequest setCaption:] */

void FUN_1065cf834(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1065cf864; end: 1065cf86b; -[SCCreativeKitParsedRequest sticker] */

undefined8 FUN_1065cf864(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1065cf86c; end: 1065cf89b; -[SCCreativeKitParsedRequest setSticker:] */

void FUN_1065cf86c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1065cf89c; end: 1065cf8a3; -[SCCreativeKitParsedRequest lensState] */

undefined8 FUN_1065cf89c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1065cf8a4; end: 1065cf8d3; -[SCCreativeKitParsedRequest setLensState:] */

void FUN_1065cf8a4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1065cf8d4; end: 1065cf8db; -[SCCreativeKitParsedRequest sendToContentMetadata] */

undefined8 FUN_1065cf8d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1065cf8dc; end: 1065cf90b; -[SCCreativeKitParsedRequest setSendToContentMetadata:] */

void FUN_1065cf8dc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1065cf90c; end: 1065cf913; -[SCCreativeKitParsedRequest attachmentUrl] */

undefined8 FUN_1065cf90c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1065cf914; end: 1065cf91b; -[SCCreativeKitParsedRequest setAttachmentUrl:] */

void FUN_1065cf914(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1065cf91c; end: 1065cf923; -[SCCreativeKitParsedRequest appDisplayName] */

undefined8 FUN_1065cf91c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1065cf924; end: 1065cf92b; -[SCCreativeKitParsedRequest setAppDisplayName:] */

void FUN_1065cf924(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1065cf92c; end: 1065cf933; -[SCCreativeKitParsedRequest topics] */

undefined8 FUN_1065cf92c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1065cf934; end: 1065cf93b; -[SCCreativeKitParsedRequest setTopics:] */

void FUN_1065cf934(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1065cf93c; end: 1065cf943; -[SCCreativeKitParsedRequest isPostToSpotlightAllowed] */

undefined1 FUN_1065cf93c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1065cf944; end: 1065cf94b; -[SCCreativeKitParsedRequest setIsPostToSpotlightAllowed:] */

void FUN_1065cf944(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1065cf94c; end: 1065cf953; -[SCCreativeKitParsedRequest inviteShareCardDataModel] */

undefined8 FUN_1065cf94c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1065cf954; end: 1065cf983; -[SCCreativeKitParsedRequest setInviteShareCardDataModel:] */

void FUN_1065cf954(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1065cf984; end: 1065cf98b; -[SCCreativeKitParsedRequest loggingMetadata] */

undefined8 FUN_1065cf984(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1065cf98c; end: 1065cf9bb; -[SCCreativeKitParsedRequest setLoggingMetadata:] */

void FUN_1065cf98c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1065cf9bc; end: 1065cfa57; -[SCCreativeKitParsedRequest .cxx_destruct] */

void FUN_1065cf9bc(long param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1065cfa58; end: 1065cfaeb; -[SCSnapKitCameraViewState initWithCameraPosition:userPreferences:] */

undefined1 *
FUN_1065cfa58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1f58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    _objc_opt_class();
    func_0x00010bec58e0();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065cfaec; end: 1065cfb7b; +[SCSnapKitCameraViewState _stringValueToSCManagedCaptureDevicePosition:userPreferences:] */

ulong FUN_1065cfaec(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    uVar1 = param_4;
    func_0x000100150560(param_4);
  }
  else {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e55338);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e55358);
      uVar1 = (ulong)((uint)uVar1 ^ 1);
    }
    else {
      uVar1 = 1;
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1065cfb7c; end: 1065cfb83; -[SCSnapKitCameraViewState cameraPosition] */

undefined8 FUN_1065cfb7c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1065cfb84; end: 1065cfbf7; -[SCSnapKitCaption initWithText:] */

undefined1 * FUN_1065cfb84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1f60;
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



/* Entry: 1065cfbf8; end: 1065cfbff; -[SCSnapKitCaption text] */

undefined8 FUN_1065cfbf8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1065cfc00; end: 1065cfc0b; -[SCSnapKitCaption .cxx_destruct] */

void FUN_1065cfc00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065cfc0c; end: 1065cfe13; -[SCSnapKitCreativeKitDeepLinkRequestParser initWithNetworkServices:circumstanceEngine:userPreferences:blizzardLogger:metricsReporter:pasteboardService:sessionId:userAdIdProvider:] */

undefined1 *
FUN_1065cfc0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

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
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f1f68;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = 0;
    _dispatch_queue_attr_make_with_qos_class(0,0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = &UNK_10f3858ed;
    _dispatch_queue_create(&UNK_10f3858ed,uVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126b5870;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar4);
    _objc_retain(param_8);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_release(uVar4);
    _objc_retain(param_9);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_9;
    _objc_release(uVar4);
    _objc_retain(param_10);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_10;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065cfe14; end: 1065d0267; -[SCSnapKitCreativeKitDeepLinkRequestParser parseDeepLinkURL:pasteboardItems:success:failure:] */

void FUN_1065cfe14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0a3000(*(undefined8 *)(param_1 + 0x38));
  ppuVar1 = (undefined **)PTR_PTR_1126cbe38;
  _objc_alloc();
  func_0x00010c009cc0();
  ppuVar2 = ppuVar1;
  func_0x00010c298500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd5f80(param_1);
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_4;
  _objc_release(uVar3);
  if (ppuVar2 == (undefined **)0x0) {
    func_0x00010c0a3000(*(undefined8 *)(param_1 + 0x38));
    ppuVar4 = (undefined **)0x0;
    func_0x00010c0e00e0(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be706a0(param_1);
    goto LAB_1065d0214;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  ppuVar4 = ppuVar2;
  func_0x00010c0e00e0(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d03e0(uVar3);
  _objc_release(ppuVar4);
  ppuVar4 = ppuVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar4 != (undefined **)0x0) {
    func_0x00010c0720c0(ppuVar4);
  }
  func_0x00010c1b1500(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c0a4b40(*(undefined8 *)(param_1 + 0x28));
  ppuVar5 = ppuVar2;
  func_0x00010c0e00e0(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126cbe40;
  func_0x00010c07ecc0();
  ppuVar9 = ppuVar2;
  if (((ulong)puVar6 & 1) == 0) {
    func_0x00010c0a3000(*(undefined8 *)(param_1 + 0x38));
    func_0x00010c0e00e0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be706a0(param_1);
LAB_1065d0200:
    _objc_release(ppuVar9);
  }
  else {
    puVar6 = PTR_PTR_1126cbe40;
    func_0x00010c080500();
    if (((ulong)puVar6 & 1) == 0) {
      func_0x00010c0a3000(*(undefined8 *)(param_1 + 0x38));
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = &PTR____CFConstantStringClassReference_110e55378;
      if (ppuVar9 != (undefined **)0x0) {
        ppuVar10 = ppuVar9;
      }
      _objc_retain(ppuVar10);
      _objc_release(ppuVar9);
      ppuVar9 = &PTR____CFConstantStringClassReference_110e554f8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e554f8,0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar10);
      ppuVar10 = ppuVar2;
      func_0x00010c0e00e0(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be706a0(param_1);
      _objc_release(ppuVar10);
      _objc_release(puVar6);
      goto LAB_1065d0200;
    }
    ppuVar10 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar10;
    func_0x000108ed08a4();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    *(undefined ***)(param_1 + 0x58) = ppuVar7;
    _objc_release(uVar3);
    _objc_release(ppuVar10);
    lVar8 = *(long *)(param_1 + 0x58);
    func_0x00010c08fa60();
    if (lVar8 == 0) {
      func_0x00010c0a3000(*(undefined8 *)(param_1 + 0x38));
      func_0x00010c0e00e0(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be706a0(param_1);
      goto LAB_1065d0200;
    }
    func_0x00010bec0100(param_1);
  }
  _objc_release(ppuVar5);
LAB_1065d0214:
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065d0268; end: 1065d0323; -[SCSnapKitCreativeKitDeepLinkRequestParser isContentValid:] */

bool FUN_1065d0268(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c0b3ba0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_3;
    func_0x00010c0b3ba0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf0a640();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar5 != 0;
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1065d0324; end: 1065d0717; -[SCSnapKitCreativeKitDeepLinkRequestParser _startHandlingMetadata:deepLinkURL:success:failure:] */

void FUN_1065d0324(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0a3000();
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1065d0718;
  uStack_88 = 0x1065d0728;
  uStack_80 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_1065d0718;
  uStack_b8 = 0x1065d0728;
  uStack_b0 = 0;
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_1065d0718;
  uStack_e8 = 0x1065d0728;
  uStack_e0 = 0;
  _dispatch_group_create();
  _dispatch_group_enter();
  _objc_initWeak(auStack_110,param_1);
  puVar2 = PTR_PTR_1126cbe48;
  uVar7 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_1065d0730;
  puStack_150 = &UNK_11092e828;
  puStack_128 = &uStack_108;
  _objc_retain(param_3);
  uStack_148 = param_3;
  _objc_retain(uVar3);
  uStack_140 = uVar3;
  lStack_138 = param_1;
  _objc_retain(param_6);
  puStack_120 = &uStack_a8;
  puStack_118 = &uStack_d8;
  puStack_198 = puVar1;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_1065d09c8;
  puStack_180 = &UNK_1108420a0;
  lStack_178 = param_1;
  uStack_130 = param_6;
  _objc_retain(uVar3);
  uStack_170 = uVar3;
  func_0x00010c2517a0(puVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  puStack_200 = puVar1;
  uStack_1f8 = 0xc2000000;
  pcStack_1f0 = FUN_1065d0a80;
  puStack_1e8 = &UNK_11092e858;
  puStack_1b0 = &uStack_d8;
  puStack_1a8 = &uStack_108;
  puStack_1b8 = &uStack_a8;
  lStack_1e0 = param_1;
  uStack_1d8 = param_3;
  uStack_1c8 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_copyWeak(auStack_1a0,auStack_110);
  uStack_1d0 = param_4;
  uStack_1c0 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x000100bc0718(uVar3,uVar7,&puStack_200);
  _objc_release(uStack_1c0);
  _objc_release(uStack_1d0);
  _objc_destroyWeak(auStack_1a0);
  _objc_release(uStack_1d8);
  _objc_release(uStack_1c8);
  _objc_release(uStack_170);
  _objc_release(uStack_130);
  _objc_release(uStack_140);
  _objc_release(uStack_148);
  _objc_destroyWeak(auStack_110);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  return;
}



/* Entry: 1065d0718; end: 1065d072f;  */

void FUN_1065d0718(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1065d0730; end: 1065d09c7;  */

void FUN_1065d0730(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined **)(lVar7 + 0x28) = puVar1;
  _objc_release(uVar6);
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6b20();
  _objc_release(uVar6);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6b20();
  _objc_release(uVar6);
  _objc_release(uVar2);
  if ((param_2 == 0) || (param_3 == 0)) {
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c0a3000(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38));
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e00e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be706a0(uVar6);
    _objc_release(uVar2);
  }
  else {
    puVar4 = puVar1;
    func_0x00010c156c60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf15d80();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    uVar6 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined **)(lVar7 + 0x28) = puVar5;
    _objc_release(uVar6);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c156c60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf15d80();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(*(long *)(param_1 + 0x50) + 8);
    uVar6 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined **)(lVar7 + 0x28) = puVar5;
    _objc_release(uVar6);
    _objc_release(puVar4);
    func_0x00010c0a3000(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38));
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065d09c8; end: 1065d0a7f;  */

void FUN_1065d09c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  _objc_retain(param_2);
  func_0x00010c0a3000(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010bf3ec40(param_2);
  func_0x00010c0a4180(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010bf3ec40(param_2);
  _objc_release(param_2);
  func_0x00010c0a41a0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1065d0a80; end: 1065d0d57;  */

void FUN_1065d0a80(long param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (((*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28) == 0) ||
      (*(long *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28) == 0)) ||
     (*(long *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28) == 0)) {
    func_0x00010c0a3000(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38),param_2,
                        &PTR____CFConstantStringClassReference_110e553d8,
                        &PTR____CFConstantStringClassReference_110e55658);
    uVar14 = *(undefined8 *)(param_1 + 0x38);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    puVar7 = *(undefined **)(param_1 + 0x28);
    func_0x00010c0e00e0(puVar7,param_2,&PTR____CFConstantStringClassReference_110efffd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be706a0(uVar9,param_2,uVar14,puVar7,8,
                        &PTR____CFConstantStringClassReference_110e55678);
    goto LAB_1065d0c70;
  }
  func_0x00010c0a3000(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38),param_2,
                      &PTR____CFConstantStringClassReference_110e553d8,
                      &PTR____CFConstantStringClassReference_110e55698);
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x000108ecd698();
  bVar2 = 0;
  lVar10 = 0;
  uRam00000001136c3a68 = 3;
  uRam00000001136c3a60 = 1;
  do {
    lVar11 = *(long *)(lVar3 + lVar10 * 8);
    lVar12 = *(long *)(lVar10 * 8 + 0x1136c3a60);
    if (lVar12 < lVar11) goto LAB_1065d0c8c;
    lVar10 = 1;
    bVar1 = bVar2 ^ 1;
    bVar2 = 1;
  } while ((bool)(lVar12 <= lVar11 & bVar1));
  if (lVar12 <= lVar11) {
LAB_1065d0c8c:
    puVar7 = (undefined *)(param_1 + 0x60);
    _objc_loadWeakRetained(puVar7);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    uVar14 = *(undefined8 *)(param_1 + 0x30);
    uVar13 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
    uVar15 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28);
    uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28);
    func_0x00010bf1f3c0(uVar8);
    func_0x00010bec0440(puVar7,param_2,uVar9,uVar14,uVar13,uVar15,uVar8,
                        *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x38));
    goto LAB_1065d0c70;
  }
  func_0x00010c0a3000(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38),param_2,
                      &PTR____CFConstantStringClassReference_110e553d8,
                      &PTR____CFConstantStringClassReference_110e556b8);
  puVar7 = PTR_PTR_1126cbe38;
  _objc_alloc();
  func_0x00010c009cc0();
  uVar4 = *(ulong *)(param_1 + 0x30);
  func_0x00010c0f5820(uVar4,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0720c0();
  uVar9 = 0;
  if ((uVar5 & 1) == 0) {
    uVar5 = uVar4;
    func_0x00010c0720c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dad4b8);
    if ((int)uVar5 != 0) {
      uVar9 = 1;
      goto LAB_1065d0bbc;
    }
LAB_1065d0ce8:
    func_0x00010c0a3000(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38),param_2,
                        &PTR____CFConstantStringClassReference_110e553d8,
                        &PTR____CFConstantStringClassReference_110e556d8);
    uVar14 = *(undefined8 *)(param_1 + 0x38);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    puVar6 = *(undefined **)(param_1 + 0x28);
    func_0x00010c0e00e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110efffd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be706a0(uVar9,param_2,uVar14,puVar6,9,
                        &PTR____CFConstantStringClassReference_110e556f8);
  }
  else {
LAB_1065d0bbc:
    puVar6 = puVar7;
    func_0x00010c298520(puVar7,param_2,uVar9);
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) goto LAB_1065d0ce8;
    param_1 = param_1 + 0x60;
    _objc_loadWeakRetained(param_1);
    func_0x00010bec0460();
    _objc_release(param_1);
  }
  _objc_release(puVar6);
  _objc_release(uVar4);
LAB_1065d0c70:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 1065d0d58; end: 1065d0e53;  */

void FUN_1065d0d58(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x60,param_2 + 0x60);
  return;
}



/* Entry: 1065d0e54; end: 1065d1cb3; -[SCSnapKitCreativeKitDeepLinkRequestParser _startLoadingContentWithMetadata:deepLinkURL:encryptionKey:encryptionIv:requiresIdentityWebView:success:failure:] */

void FUN_1065d0e54(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined **param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  int iVar11;
  undefined **ppuVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined **ppuVar18;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined *puStack_418;
  undefined8 uStack_410;
  code *pcStack_408;
  undefined *puStack_400;
  undefined **ppuStack_3f8;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined **ppuStack_3d0;
  undefined8 uStack_3c8;
  undefined **ppuStack_3c0;
  long lStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined *puStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  code *pcStack_358;
  undefined *puStack_350;
  undefined **ppuStack_348;
  undefined *puStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined8 uStack_328;
  undefined *puStack_320;
  undefined **ppuStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  code *pcStack_290;
  undefined *puStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined **ppuStack_190;
  undefined **ppuStack_180;
  undefined *puStack_170;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_148;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = param_8;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x00010c0a3000(*(undefined8 *)(param_1 + 0x38));
  if (*(long *)(param_1 + 0x60) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bfa9240();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = uVar1;
    _objc_release(uVar15);
    iVar11 = (int)param_2;
    if (*(long *)(param_1 + 0x60) == 0) {
      func_0x00010c0a3000(*(undefined8 *)(param_1 + 0x38));
      ppuVar8 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar18 = ppuVar8;
      func_0x000108ed0830();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (ppuVar8 != (undefined **)0x0) {
        ppuVar12 = ppuVar18;
        func_0x000108ed0848();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar18);
        _objc_release(ppuVar12);
        ppuVar18 = ppuVar9;
        ppuStack_190 = ppuVar8;
      }
      ppuVar10 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = 1;
      ppuVar6 = param_9;
      ppuVar9 = ppuVar10;
      ppuVar12 = ppuVar18;
      func_0x00010be706a0(param_1);
      _objc_release(ppuVar10);
      _objc_release(ppuVar18);
      _objc_release(ppuVar8);
      ppuVar10 = param_9;
      goto LAB_1065d1ab8;
    }
  }
  func_0x00010c0a3000(*(undefined8 *)(param_1 + 0x38));
  ppuVar10 = (undefined **)PTR_PTR_1126cbe50;
  _objc_opt_new();
  func_0x00010c1d03e0(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c1ec5e0(*(undefined8 *)(param_1 + 0x30));
  puStack_170 = PTR_PTR_1126cbe58;
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c121300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c0a3000(*(undefined8 *)(param_1 + 0x38));
  uStack_160 = param_4;
  func_0x00010c0f5820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cbe58;
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1214a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168920(ppuVar10);
  _objc_release(puVar2);
  _objc_release(uVar1);
  func_0x00010c0a3000(*(undefined8 *)(param_1 + 0x38));
  lVar3 = param_1;
  func_0x00010beb6b40();
  puVar2 = PTR_PTR_1126cbe58;
  ppuStack_180 = param_9;
  if ((int)lVar3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c0e00e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1214a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b3c0(ppuVar10);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  else {
    func_0x00010c16b3c0(ppuVar10);
  }
  func_0x00010c0a3000(*(undefined8 *)(param_1 + 0x38));
  puStack_148 = PTR_PTR_1126cbe58;
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c121480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c0a3000(*(undefined8 *)(param_1 + 0x38));
  puVar2 = PTR_PTR_1126cbe58;
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c121440(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217ac0(ppuVar10);
  _objc_release(puVar2);
  _objc_release(uVar1);
  func_0x00010c0a3000(*(undefined8 *)(param_1 + 0x38));
  ppuVar8 = ppuVar10;
  func_0x00010c2759e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  iVar11 = (int)param_2;
  if (ppuVar8 != (undefined **)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar10;
    func_0x00010c2759e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar9;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    iVar11 = (int)param_2;
    while (ppuVar8 != (undefined **)0x0) {
      ppuVar18 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(ppuVar9);
        }
        ppuStack_190 = *(undefined ***)((long)ppuVar18 * 8);
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(puVar5);
        _objc_release(puVar4);
        ppuVar18 = (undefined **)((long)ppuVar18 + 1);
      } while (ppuVar8 != ppuVar18);
      ppuVar8 = ppuVar9;
      func_0x00010bf52a60();
      iVar11 = (int)param_2;
    }
    _objc_release(ppuVar9);
    puVar4 = puVar2;
    func_0x00010bf446e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c217820(*(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126cbe58;
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = (undefined **)0x1;
  func_0x00010c121460(puVar2);
  func_0x00010c1b3680(ppuVar10);
  _objc_release(uVar1);
  func_0x00010c0a3000(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c07a840(ppuVar10);
  func_0x00010c1b49e0(uVar1);
  uVar1 = uStack_160;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    uVar1 = uStack_160;
    func_0x00010c0720c0();
    if ((int)uVar1 == 0) {
      func_0x00010c0a3000(*(undefined8 *)(param_1 + 0x38));
    }
    else if (puStack_148 == (undefined *)0x0) {
      ppuVar8 = ppuVar10;
      func_0x00010bf05000(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar10;
      func_0x00010bf0d6a0(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bebcde0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20a7e0(ppuVar10);
      _objc_release(lVar3);
      _objc_release(ppuVar9);
      _objc_release(ppuVar8);
    }
  }
  else {
    func_0x00010c204b60(*(undefined8 *)(param_1 + 0x30));
    puVar2 = PTR_PTR_1126cbe58;
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c0e00e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = puVar2;
    func_0x00010c121480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c0a3000(*(undefined8 *)(param_1 + 0x38));
    ppuVar18 = (undefined **)PTR_PTR_1126cbe58;
    if (puStack_158 == (undefined *)0x0) {
      uVar1 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c0e00e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c121480();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e1b20(ppuVar10);
      _objc_release(ppuVar18);
      _objc_release(uVar1);
      func_0x00010c0a3000(*(undefined8 *)(param_1 + 0x38));
    }
    else {
      func_0x00010c1e1b20(ppuVar10);
      ppuVar18 = (undefined **)puVar2;
    }
    ppuVar8 = ppuVar10;
    func_0x00010c110a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar8 == (undefined **)0x0) {
      func_0x00010c0a3000(*(undefined8 *)(param_1 + 0x38));
      unaff_x28 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = &PTR____CFConstantStringClassReference_110e55858;
      uVar1 = 4;
      ppuVar9 = unaff_x28;
      func_0x00010be706a0(param_1);
      ppuVar8 = (undefined **)0x1;
      unaff_x27 = ppuVar10;
      goto LAB_1065d1a84;
    }
    if (puStack_148 == (undefined *)0x0) {
      ppuVar8 = ppuVar10;
      func_0x00010bf05000(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar10;
      func_0x00010bf0d6a0(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bebcde0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20a7e0(ppuVar10);
      _objc_release(lVar3);
      _objc_release(ppuVar9);
      _objc_release(ppuVar8);
    }
    _objc_release(puStack_158);
  }
  puStack_158 = puStack_170;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c4978;
  if (puStack_148 == (undefined *)0x0) {
    func_0x00010c204bc0(*(undefined8 *)(param_1 + 0x30));
  }
  else {
    ppuVar8 = ppuVar10;
    func_0x00010bf05000(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar10;
    func_0x00010bf0d6a0(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = 0x3fa644c1;
    func_0x00010b774c60(0x3fa644c1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = *(undefined ***)(param_1 + 0x58);
    func_0x00010c241c80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
    lVar3 = param_1;
    func_0x00010bebce00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20a7e0(ppuVar10);
    _objc_release(lVar3);
    puVar4 = PTR_PTR_1126c4978;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    ppuVar8 = ppuVar10;
    func_0x00010c253880(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1fe0(puVar4);
    func_0x00010c204bc0(uVar1);
    _objc_release(ppuVar8);
    _objc_release(puVar2);
  }
  unaff_x28 = (undefined **)PTR_PTR_1126cbe58;
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1214a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c0a3000(*(undefined8 *)(param_1 + 0x38));
  if (unaff_x28 != (undefined **)0x0) {
    puVar2 = PTR_PTR_1126cbe60;
    _objc_alloc(PTR_PTR_1126cbe60);
    func_0x00010c0511e0();
    func_0x00010c178460(ppuVar10);
    _objc_release(puVar2);
    func_0x00010c204c20(*(undefined8 *)(param_1 + 0x30));
  }
  ppuVar8 = ppuVar10;
  func_0x00010bf0d6a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar8 != (undefined **)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    ppuVar8 = ppuVar10;
    func_0x00010bf0d6a0(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2049a0(uVar1);
    _objc_release(ppuVar8);
    func_0x00010c204c00(*(undefined8 *)(param_1 + 0x30));
  }
  ppuVar18 = (undefined **)PTR_PTR_1126cbe58;
  puVar16 = (undefined8 *)(param_1 + 0x60);
  uVar1 = *puVar16;
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1214a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar17 = (undefined8 *)(param_1 + 0x38);
  func_0x00010c0a3000(*puVar17);
  ppuVar8 = (undefined **)PTR_PTR_1126cbe58;
  uVar1 = *puVar16;
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1214a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c0a3000(*puVar17);
  unaff_x27 = (undefined **)PTR_PTR_1126cbe58;
  uVar15 = *puVar16;
  func_0x00010c0e00e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_6;
  func_0x00010c1214a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar15);
  func_0x00010c0a3000(*puVar17);
  if (ppuVar8 == (undefined **)0x0) {
    if (ppuVar18 != (undefined **)0x0) {
      lVar3 = param_1;
      func_0x00010be4be20(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bcd80(ppuVar10);
      _objc_release(lVar3);
      func_0x00010c204c40(*(undefined8 *)(param_1 + 0x30));
      uVar15 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c08fa60(unaff_x27);
      func_0x00010c1a6260(uVar15);
      func_0x00010c0b4ca0(ppuVar18);
      func_0x00010c204ac0(*(undefined8 *)(param_1 + 0x30));
    }
  }
  else {
    lVar3 = param_1;
    func_0x00010be4be40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bcd80(ppuVar10);
    _objc_release(lVar3);
    puVar16 = (undefined8 *)(param_1 + 0x30);
    func_0x00010c204c40(*puVar16);
    func_0x00010c204b20(*puVar16);
    uVar15 = *puVar16;
    func_0x00010c08fa60(unaff_x27);
    func_0x00010c1a6260(uVar15);
  }
  while( true ) {
    func_0x00010c1c0740(ppuVar10);
    func_0x00010c0a4b80(*(undefined8 *)(param_1 + 0x28));
    ppuVar9 = &PTR____CFConstantStringClassReference_110e55918;
    func_0x00010c0a3000(*(undefined8 *)(param_1 + 0x38));
    ppuVar6 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar10;
    param_9 = ppuVar6;
    (**(code **)(param_8 + 0x10))();
    iVar11 = (int)ppuVar7;
    _objc_release(ppuVar6);
    _objc_release(unaff_x27);
    _objc_release(ppuVar8);
    _objc_release(ppuVar18);
LAB_1065d1a84:
    _objc_release(unaff_x28);
    _objc_release(puStack_158);
    _objc_release(puStack_148);
    _objc_release(uStack_160);
    _objc_release(puStack_170);
    _objc_release(ppuVar10);
    ppuVar6 = param_9;
    ppuVar10 = ppuStack_180;
LAB_1065d1ab8:
    _objc_release(ppuVar10);
    _objc_release(param_8);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    ppuVar7 = param_3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) break;
    ___stack_chk_fail();
    if (iVar11 != 1) {
      __Unwind_Resume();
      _objc_retain(ppuVar6);
      _objc_retain(ppuVar9);
      _objc_retain(uVar1);
      _objc_retain(ppuVar12);
      _objc_retain(param_7);
      _objc_retain(lVar13);
      _objc_retain(ppuStack_190);
      func_0x00010c0a3000(ppuVar7[7]);
      puVar2 = PTR_PTR_1126cbe68;
      _objc_alloc();
      func_0x00010c009c20();
      ppuVar8 = ppuVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar8 != (undefined **)0x0) {
        ppuVar18 = ppuVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f3c0();
        _objc_release(ppuVar18);
      }
      _objc_release();
      _dispatch_group_create();
      puStack_230 = &uStack_238;
      uStack_238 = 0;
      uStack_228 = 0x3032000000;
      pcStack_220 = FUN_1065d0718;
      uStack_218 = 0x1065d0728;
      uStack_210 = 0;
      ppuVar18 = ppuVar9;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar18 != (undefined **)0x0) {
        _dispatch_group_enter(ppuVar8);
        puVar4 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_268 = 0xc2000000;
        pcStack_260 = FUN_1065d223c;
        puStack_258 = &UNK_11092e888;
        puStack_240 = &uStack_238;
        ppuStack_250 = ppuVar7;
        _objc_retain(ppuVar8);
        puStack_2a0 = puVar4;
        uStack_298 = 0xc2000000;
        pcStack_290 = FUN_1065d22b4;
        puStack_288 = &UNK_110841f80;
        ppuStack_280 = ppuVar7;
        ppuStack_248 = ppuVar8;
        _objc_retain(ppuVar8);
        ppuStack_278 = ppuVar8;
        func_0x00010c09b8e0(puVar2);
        _objc_release(ppuStack_278);
        _objc_release(ppuStack_248);
      }
      puVar4 = puVar2;
      func_0x00010c09adc0();
      _objc_retainAutoreleasedReturnValue();
      puStack_2c8 = &uStack_2d0;
      uStack_2d0 = 0;
      uStack_2c0 = 0x3032000000;
      pcStack_2b8 = FUN_1065d0718;
      uStack_2b0 = 0x1065d0728;
      uStack_2a8 = 0;
      puStack_2f8 = &uStack_300;
      uStack_300 = 0;
      uStack_2f0 = 0x3032000000;
      pcStack_2e8 = FUN_1065d0718;
      uStack_2e0 = 0x1065d0728;
      uStack_2d8 = 0;
      ppuVar18 = ppuVar9;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar18 != (undefined **)0x0) {
        func_0x00010c0a3000(ppuVar7[7]);
        _dispatch_group_enter(ppuVar8);
        puVar5 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_368 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_360 = 0xc2000000;
        pcStack_358 = FUN_1065d22f0;
        puStack_350 = &UNK_11092e8b8;
        puStack_310 = &uStack_300;
        ppuStack_348 = ppuVar7;
        _objc_retain(puVar2);
        puStack_340 = puVar2;
        _objc_retain(ppuVar9);
        ppuStack_338 = ppuVar9;
        _objc_retain(ppuVar12);
        ppuStack_330 = ppuVar12;
        _objc_retain(param_7);
        uStack_328 = param_7;
        _objc_retain(puVar4);
        puStack_308 = &uStack_2d0;
        puStack_320 = puVar4;
        _objc_retain(ppuVar8);
        puStack_398 = puVar5;
        uStack_390 = 0xc2000000;
        uStack_388 = 0x1065d2554;
        puStack_380 = &UNK_110841f80;
        ppuStack_378 = ppuVar7;
        ppuStack_318 = ppuVar8;
        _objc_retain(ppuVar8);
        ppuStack_370 = ppuVar8;
        func_0x00010c09c320(puVar2);
        _objc_release(ppuStack_370);
        _objc_release(ppuStack_318);
        _objc_release(puStack_320);
        _objc_release(uStack_328);
        _objc_release(ppuStack_330);
        _objc_release(ppuStack_338);
        _objc_release(puStack_340);
      }
      puStack_418 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_410 = 0xc2000000;
      pcStack_408 = FUN_1065d2590;
      puStack_400 = &UNK_11092e8e8;
      puStack_3b0 = &uStack_238;
      puStack_3a8 = &uStack_2d0;
      puStack_3a0 = &uStack_300;
      ppuStack_3c0 = ppuStack_190;
      ppuStack_3f8 = ppuVar9;
      ppuStack_3f0 = ppuVar7;
      ppuStack_3e8 = ppuVar6;
      puStack_3e0 = puVar4;
      puStack_3d8 = puVar2;
      ppuStack_3d0 = ppuVar12;
      uStack_3c8 = param_7;
      lStack_3b8 = lVar13;
      _objc_retain(lVar13);
      _objc_retain(param_7);
      _objc_retain(ppuVar12);
      _objc_retain(puVar2);
      _objc_retain(puVar4);
      _objc_retain(ppuVar6);
      _objc_retain(ppuStack_190);
      _objc_retain(ppuVar9);
      func_0x000100bc0718(ppuVar8,PTR___dispatch_main_q_11034be20,&puStack_418);
      _objc_release(lStack_3b8);
      _objc_release(uStack_3c8);
      _objc_release(ppuStack_3d0);
      _objc_release(puStack_3d8);
      _objc_release(puStack_3e0);
      _objc_release(ppuStack_3e8);
      _objc_release(ppuStack_3c0);
      _objc_release(ppuStack_3f8);
      __Block_object_dispose(&uStack_300,8);
      _objc_release(uStack_2d8);
      __Block_object_dispose(&uStack_2d0,8);
      _objc_release(uStack_2a8);
      _objc_release(puVar4);
      __Block_object_dispose(&uStack_238,8);
      _objc_release(uStack_210);
      _objc_release(lVar13);
      _objc_release(param_7);
      _objc_release(ppuVar12);
      _objc_release(puVar2);
      _objc_release(ppuVar6);
      _objc_release(ppuStack_190);
      _objc_release(ppuVar9);
      _objc_release(ppuVar8);
      _objc_release(uVar1);
      return;
    }
    _objc_begin_catch(ppuVar7);
    _objc_retain();
    func_0x00010c204ac0(*(undefined8 *)(param_1 + 0x30));
    _objc_release(ppuVar7);
    _objc_end_catch();
  }
  return;
}



/* Entry: 1065d1cb4; end: 1065d223b; -[SCSnapKitCreativeKitDeepLinkRequestParser _startLoadingContentWithMetadata:payload:deepLinkURL:encryptionKey:encryptionIv:success:failure:] */

void FUN_1065d1cb4(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
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
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x00010c0a3000(*(undefined8 *)(param_1 + 0x38));
  puVar2 = PTR_PTR_1126cbe68;
  _objc_alloc();
  func_0x00010c009c20();
  lVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    lVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(lVar4);
  }
  _objc_release();
  _dispatch_group_create();
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1065d0718;
  uStack_88 = 0x1065d0728;
  uStack_80 = 0;
  lVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    _dispatch_group_enter(lVar3);
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_1065d223c;
    puStack_c8 = &UNK_11092e888;
    puStack_b0 = &uStack_a8;
    lStack_c0 = param_1;
    _objc_retain(lVar3);
    puStack_110 = puVar5;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_1065d22b4;
    puStack_f8 = &UNK_110841f80;
    lStack_f0 = param_1;
    lStack_b8 = lVar3;
    _objc_retain(lVar3);
    lStack_e8 = lVar3;
    func_0x00010c09b8e0(puVar2);
    _objc_release(lStack_e8);
    _objc_release(lStack_b8);
  }
  puVar5 = puVar2;
  func_0x00010c09adc0();
  _objc_retainAutoreleasedReturnValue();
  puStack_138 = &uStack_140;
  uStack_140 = 0;
  uStack_130 = 0x3032000000;
  pcStack_128 = FUN_1065d0718;
  uStack_120 = 0x1065d0728;
  uStack_118 = 0;
  puStack_168 = &uStack_170;
  uStack_170 = 0;
  uStack_160 = 0x3032000000;
  pcStack_158 = FUN_1065d0718;
  uStack_150 = 0x1065d0728;
  uStack_148 = 0;
  lVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    func_0x00010c0a3000(*(undefined8 *)(param_1 + 0x38));
    _dispatch_group_enter(lVar3);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1d0 = 0xc2000000;
    pcStack_1c8 = FUN_1065d22f0;
    puStack_1c0 = &UNK_11092e8b8;
    puStack_180 = &uStack_170;
    lStack_1b8 = param_1;
    _objc_retain(puVar2);
    puStack_1b0 = puVar2;
    _objc_retain(param_4);
    lStack_1a8 = param_4;
    _objc_retain(param_6);
    uStack_1a0 = param_6;
    _objc_retain(param_7);
    uStack_198 = param_7;
    _objc_retain(puVar5);
    puStack_178 = &uStack_140;
    puStack_190 = puVar5;
    _objc_retain(lVar3);
    puStack_208 = puVar1;
    uStack_200 = 0xc2000000;
    uStack_1f8 = 0x1065d2554;
    puStack_1f0 = &UNK_110841f80;
    lStack_1e8 = param_1;
    lStack_188 = lVar3;
    _objc_retain(lVar3);
    lStack_1e0 = lVar3;
    func_0x00010c09c320(puVar2);
    _objc_release(lStack_1e0);
    _objc_release(lStack_188);
    _objc_release(puStack_190);
    _objc_release(uStack_198);
    _objc_release(uStack_1a0);
    _objc_release(lStack_1a8);
    _objc_release(puStack_1b0);
  }
  puStack_288 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_280 = 0xc2000000;
  pcStack_278 = FUN_1065d2590;
  puStack_270 = &UNK_11092e8e8;
  puStack_220 = &uStack_a8;
  puStack_218 = &uStack_140;
  puStack_210 = &uStack_170;
  uStack_230 = param_9;
  lStack_268 = param_4;
  lStack_260 = param_1;
  lStack_258 = param_3;
  puStack_250 = puVar5;
  puStack_248 = puVar2;
  uStack_240 = param_6;
  uStack_238 = param_7;
  uStack_228 = param_8;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(puVar2);
  _objc_retain(puVar5);
  _objc_retain(param_3);
  _objc_retain(param_9);
  _objc_retain(param_4);
  func_0x000100bc0718(lVar3,PTR___dispatch_main_q_11034be20,&puStack_288);
  _objc_release(uStack_228);
  _objc_release(uStack_238);
  _objc_release(uStack_240);
  _objc_release(puStack_248);
  _objc_release(puStack_250);
  _objc_release(lStack_258);
  _objc_release(uStack_230);
  _objc_release(lStack_268);
  __Block_object_dispose(&uStack_170,8);
  _objc_release(uStack_148);
  __Block_object_dispose(&uStack_140,8);
  _objc_release(uStack_118);
  _objc_release(puVar5);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_9);
  _objc_release(param_4);
  _objc_release(lVar3);
  _objc_release(param_5);
  return;
}



/* Entry: 1065d223c; end: 1065d22b3;  */

void FUN_1065d223c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  func_0x00010c0a3000(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065d22b4; end: 1065d22ef;  */

void FUN_1065d22b4(long param_1,undefined8 param_2)

{
  func_0x00010c0a3000(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38),param_2,
                      &PTR____CFConstantStringClassReference_110e55438,
                      &PTR____CFConstantStringClassReference_110e55958);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1065d22f0; end: 1065d24df;  */

void FUN_1065d22f0(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010c0a3000(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010beb6b40();
  if ((uVar2 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c09ae40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar5 = 0;
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x58) + 8);
  _objc_retain(uVar5);
  uVar3 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = uVar5;
  _objc_release(uVar3);
  if ((uVar2 & 1) == 0) {
    _objc_release(uVar5);
  }
  puVar4 = PTR_PTR_1126c4978;
  if (param_2 != 0) {
    uVar5 = 0x3fa644c1;
    func_0x00010b774c60(0x3fa644c1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c241c80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bebce00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x60) + 8);
    uVar3 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(lVar6 + 0x28) = uVar5;
    _objc_release(uVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0e00e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1fe0(PTR_PTR_1126c4978);
    func_0x00010c204bc0(uVar5);
    _objc_release(uVar5);
    _objc_release(puVar4);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x50));
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065d24e0; end: 1065d258f;  */

void FUN_1065d24e0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  return;
}



/* Entry: 1065d2590; end: 1065d2917;  */

void FUN_1065d2590(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126cbe50;
  _objc_alloc_init(PTR_PTR_1126cbe50);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0740(puVar1);
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar3 == 0) ||
     (lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x28), _objc_release(),
     lVar3 != 0)) {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar3 == 0) ||
       (lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x70) + 8) + 0x28), _objc_release(),
       lVar3 != 0)) {
      if ((*(long *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x28) != 0) &&
         (func_0x00010c1e1b20(puVar1),
         *(long *)(*(long *)(*(long *)(param_1 + 0x70) + 8) + 0x28) == 0)) {
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010bebcde0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20a7e0(puVar1);
        _objc_release(uVar2);
      }
      if (*(long *)(*(long *)(*(long *)(param_1 + 0x70) + 8) + 0x28) != 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0e00e0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc1fe0(PTR_PTR_1126c4978);
        func_0x00010c204bc0(uVar2);
        _objc_release(uVar2);
        func_0x00010c20a7e0(puVar1);
      }
      lVar3 = *(long *)(param_1 + 0x40);
      func_0x00010c09b020();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        puVar4 = PTR_PTR_1126cbe60;
        _objc_alloc(PTR_PTR_1126cbe60);
        func_0x00010c0511e0();
        func_0x00010c178460(puVar1);
        _objc_release(puVar4);
      }
      if (*(long *)(*(long *)(*(long *)(param_1 + 0x78) + 8) + 0x28) != 0) {
        func_0x00010c16b3c0(puVar1);
      }
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c09afe0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c177760(puVar1);
      _objc_release(uVar2);
      if (*(long *)(param_1 + 0x38) != 0) {
        func_0x00010c168920(puVar1);
      }
      func_0x00010c0a3000(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38));
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
      puVar4 = puVar1;
      func_0x00010c0b3ba0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a4b80(uVar2);
      _objc_release(puVar4);
      lVar5 = *(long *)(param_1 + 0x60);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0e00e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar5 + 0x10))(lVar5,puVar1,uVar2);
      _objc_release(uVar2);
      goto LAB_1065d28f8;
    }
    func_0x00010c0a3000(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38));
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    lVar3 = *(long *)(param_1 + 0x30);
    func_0x00010c0e00e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0a3000(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38));
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    lVar3 = *(long *)(param_1 + 0x30);
    func_0x00010c0e00e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010be706a0(uVar2);
LAB_1065d28f8:
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065d2918; end: 1065d2a3f;  */

void FUN_1065d2918(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),7);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),7);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),8);
  return;
}



/* Entry: 1065d2a40; end: 1065d2aef; -[SCSnapKitCreativeKitDeepLinkRequestParser _parsingFailure:redirectUrl:withClientError:errorMsg:] */

void FUN_1065d2a40(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0a4120(uVar1);
  func_0x00010c0a4100(*(undefined8 *)(param_1 + 0x38));
  (**(code **)(param_3 + 0x10))(param_3,param_6,param_4);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065d2af0; end: 1065d2bd3; -[SCSnapKitCreativeKitDeepLinkRequestParser _snapKitStickerWithData:stickerMetadata:style:] */

void FUN_1065d2af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c4968;
  _objc_alloc(PTR_PTR_1126c4968);
  func_0x00010bff37a0();
  puVar2 = PTR_PTR_1126c4978;
  func_0x00010c07f980(PTR_PTR_1126c4978,param_2,puVar1);
  puVar3 = puVar1;
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR_PTR_1126c4978;
    func_0x00010c254160(PTR_PTR_1126c4978,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c4968;
    _objc_alloc(PTR_PTR_1126c4968);
    func_0x00010bff37a0();
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1065d2bd4; end: 1065d2d4f; -[SCSnapKitCreativeKitDeepLinkRequestParser _snapKitStickerWithAppDisplayName:attachmentUrl:] */

void FUN_1065d2bd4(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126c4978;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = 0x3fa644c1;
  func_0x00010b774c60(0x3fa644c1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_3;
  uVar6 = param_4;
  func_0x00010c241c80(puVar2,param_2,param_3,param_4,uVar1,*(undefined8 *)(param_1 + 0x58));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126c4968;
    _objc_alloc();
    ppuStack_58 = &PTR____CFConstantStringClassReference_110e41a98;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(0x3fe6666666666666);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_58,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0;
    puVar5 = puVar2;
    func_0x00010bff37a0(puVar7,param_2,puVar2,0,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar7 = PTR_PTR_1126cbe70;
    _objc_retain(uVar6);
    _objc_retain(puVar5);
    _objc_alloc(puVar7);
    func_0x00010c025a80();
    _objc_release(uVar6);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1065d2d50; end: 1065d2dbf; -[SCSnapKitCreativeKitDeepLinkRequestParser _lensStateWithLensID:launchData:] */

void FUN_1065d2d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cbe70;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c025a80();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065d2dc0; end: 1065d2e2f; -[SCSnapKitCreativeKitDeepLinkRequestParser _lensStateWithLensUUID:launchData:] */

void FUN_1065d2dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cbe70;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c025a80();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065d2e30; end: 1065d2ecf; -[SCSnapKitCreativeKitDeepLinkRequestParser _shouldStripAttachment:] */

uint FUN_1065d2e30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae780;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  puVar2 = PTR_PTR_1126c4980;
  _objc_alloc_init(PTR_PTR_1126c4980);
  func_0x00010c1d0440();
  _objc_release(param_3);
  func_0x00010c204b80(puVar1,param_2,puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf1f440(uVar3,param_2,&PTR____CFConstantStringClassReference_110e55398,0,puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return (uint)uVar3 ^ 1;
}



/* Entry: 1065d2ed0; end: 1065d316f; -[SCSnapKitCreativeKitDeepLinkRequestParser _buildCreativeKitMetadata:metadata:] */

void FUN_1065d2ed0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  uVar7 = param_3;
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18aaa0(uVar6,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar7);
  func_0x00010c2049e0(*(undefined8 *)(param_1 + 0x30),param_2,2);
  func_0x00010c204b40(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x50));
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110f00018);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    lVar2 = lVar1;
    func_0x00010c0b5ac0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc2580(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9a00(uVar7,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar2);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110f00038);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aeee0(uVar7,param_2,lVar2);
    _objc_release(lVar2);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c149400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2038e0(uVar6,param_2,uVar7);
    _objc_release(uVar7);
    _objc_release(uVar4);
  }
  uVar7 = param_3;
  func_0x00010c11d6e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  uVar7 = uVar4;
  func_0x00010baff1d0(uVar4);
  func_0x00010c1b70c0(*(undefined8 *)(param_1 + 0x30),param_2,uVar7);
  uVar7 = param_3;
  func_0x00010c0f5820(param_3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar6 = uVar7;
  func_0x00010c0720c0(uVar7,param_2,&PTR____CFConstantStringClassReference_110de3df8);
  if ((int)uVar6 == 0) {
    uVar6 = uVar7;
    func_0x00010c0720c0(uVar7,param_2,&PTR____CFConstantStringClassReference_110dad4b8);
    if ((int)uVar6 == 0) {
      func_0x00010c204b60(*(undefined8 *)(param_1 + 0x30),param_2,0);
      uVar6 = *(undefined8 *)(param_1 + 0x68);
      ppuVar5 = &PTR____CFConstantStringClassReference_110db8b78;
    }
    else {
      func_0x00010c204b60(*(undefined8 *)(param_1 + 0x30),param_2,1);
      uVar6 = *(undefined8 *)(param_1 + 0x68);
      ppuVar5 = &PTR____CFConstantStringClassReference_110dad4b8;
    }
  }
  else {
    func_0x00010c204b60(*(undefined8 *)(param_1 + 0x30),param_2,2);
    uVar6 = *(undefined8 *)(param_1 + 0x68);
    ppuVar5 = &PTR____CFConstantStringClassReference_110de3df8;
  }
  *(undefined ***)(param_1 + 0x68) = ppuVar5;
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1065d3170; end: 1065d3223; -[SCSnapKitCreativeKitDeepLinkRequestParser .cxx_destruct] */

void FUN_1065d3170(long param_1)

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
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065d3224; end: 1065d33ef; -[SCSnapKitCreativeKitLiteDeepLinkRequestParser initWithNetworkServices:circumstanceEngine:blizzardLogger:metricsReporter:pasteboardService:sessionId:userAdIdProvider:] */

undefined1 *
FUN_1065d3224(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  puStack_58 = PTR_PTR_1126f1f70;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b5870;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
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



/* Entry: 1065d33f0; end: 1065d35ab; -[SCSnapKitCreativeKitLiteDeepLinkRequestParser parseDeepLinkURL:pasteboardItems:success:failure:] */

void FUN_1065d33f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0a3040(*(undefined8 *)(param_1 + 0x28));
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_4;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x50) == 0) {
    lVar2 = param_1;
    func_0x00010beb3b00();
    if ((int)lVar2 != 0) {
      _objc_initWeak(auStack_48,param_1);
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      _objc_retain(param_5);
      _objc_retain(param_6);
      func_0x00010c0f7fc0(uVar1);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      goto LAB_1065d3558;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bfa9240();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
    _objc_release(uVar3);
  }
  func_0x00010bde89c0(param_1);
LAB_1065d3558:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065d35ac; end: 1065d36eb;  */

void FUN_1065d35ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010bfa9240();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    uStack_68 = 0x1065d36a4;
    puStack_60 = &UNK_11084e180;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lStack_58 = lVar1;
    uStack_50 = uVar2;
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uStack_48 = uVar3;
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uStack_40 = uVar4;
    _objc_retain(uVar3);
    uStack_38 = uVar3;
    _objc_retain(uVar2);
    func_0x000100162d98("APPSTORE",&puStack_78);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1065d36ec; end: 1065d393b; -[SCSnapKitCreativeKitLiteDeepLinkRequestParser _continueParsingDeepLinkURL:success:failure:] */

void FUN_1065d36ec(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_3;
  if (*(long *)(param_1 + 0x50) == 0) {
    func_0x00010c0a3040(*(undefined8 *)(param_1 + 0x28),param_2,
                        &PTR____CFConstantStringClassReference_110e55418,
                        &PTR____CFConstantStringClassReference_110e55718);
    func_0x00010c11d6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar2 == (undefined *)0x0) {
      puVar4 = puVar2;
      func_0x000108ed0830();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = puVar2;
      func_0x000108ed0848();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar4,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    func_0x00010bdd5f60(param_1,param_2,param_3);
    func_0x00010be706c0(param_1,param_2,param_5,1,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  else {
    func_0x00010bdd5f60(param_1,param_2,param_3);
    func_0x00010c0f5820(param_3,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    func_0x00010c0f5820(param_3,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010c067fc0();
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010c0720c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110de3df8);
    if (((((ulong)puVar4 & 1) == 0) &&
        (puVar4 = puVar1,
        func_0x00010c0720c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dad4b8),
        ((ulong)puVar4 & 1) == 0)) &&
       (puVar4 = puVar1,
       func_0x00010c0720c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e55a98),
       (int)puVar4 == 0)) {
      func_0x00010c0a3040(*(undefined8 *)(param_1 + 0x28),param_2,
                          &PTR____CFConstantStringClassReference_110e553b8,
                          &PTR____CFConstantStringClassReference_110dad2d8);
      func_0x00010be706c0(param_1,param_2,param_5,0xd,
                          &PTR____CFConstantStringClassReference_110e55b98);
    }
    else {
      func_0x00010c0a3040(*(undefined8 *)(param_1 + 0x28),param_2,
                          &PTR____CFConstantStringClassReference_110e553b8,
                          &PTR____CFConstantStringClassReference_110dab0d8);
      func_0x00010c0a4b40(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x18));
      func_0x00010be28080(param_1,param_2,puVar2,param_3,puVar1,param_4,param_5);
    }
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065d393c; end: 1065d39f7; -[SCSnapKitCreativeKitLiteDeepLinkRequestParser isContentValid:] */

bool FUN_1065d393c(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c0b3ba0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_3;
    func_0x00010c0b3ba0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf0a640();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar5 != 0;
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1065d39f8; end: 1065d3ad7; -[SCSnapKitCreativeKitLiteDeepLinkRequestParser _handleDeepLinkingForVersion:deepLinkURL:subFeature:success:failure:] */

void FUN_1065d39f8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_3 == 1) {
    _objc_retain(param_7);
    func_0x00010be32ea0(param_1,param_2,param_4,param_5,param_6,param_7);
    puVar1 = param_7;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(param_7);
    func_0x00010c0a3040(uVar2,param_2,&PTR____CFConstantStringClassReference_110e55b58,
                        &PTR____CFConstantStringClassReference_110e55bd8);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e55bb8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be706c0(param_1,param_2,param_7,3,puVar1);
    _objc_release(param_7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065d3ad8; end: 1065d3bc7; -[SCSnapKitCreativeKitLiteDeepLinkRequestParser _handleV1SDKLessPreviewWithDeepLinkURL:subFeature:success:failure:] */

void FUN_1065d3ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1065d3bc8;
  puStack_68 = &UNK_11092e918;
  uStack_60 = param_1;
  uStack_58 = param_4;
  uStack_50 = param_6;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010bee8580(param_1,param_2,param_3,param_4,param_6,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 1065d3bc8; end: 1065d46b3;  */

void FUN_1065d3bc8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  
  _objc_retain(param_2);
  func_0x00010c0a3040(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
  uVar5 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar7 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar6);
  uVar1 = uVar5;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  func_0x00010c0a3040(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
  uVar8 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar5 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar6);
  uVar7 = uVar8;
  if ((uVar5 & 1) == 0) {
    uVar7 = 0;
  }
  _objc_retain();
  _objc_release(uVar8);
  func_0x00010c0a3040(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
  puVar9 = PTR_PTR_1126cbe50;
  _objc_alloc_init();
  func_0x00010c1d03e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
  puVar6 = PTR_PTR_1126cbe58;
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c0e00e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c121320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010beb25e0();
  puVar18 = PTR_PTR_1126cbe58;
  puVar19 = (undefined *)0x0;
  if (iVar2 != 0) {
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
    func_0x00010c0e00e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c121320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    puVar19 = puVar18;
  }
  uVar11 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar8 = uVar11;
  _objc_opt_isKindOfClass(uVar11,puVar18);
  uVar5 = uVar11;
  if ((uVar8 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain();
  _objc_release(uVar11);
  func_0x00010c0a3040(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
  uVar3 = (uint)*(undefined8 *)(param_1 + 0x20);
  func_0x00010beb5a40();
  uVar8 = *(ulong *)(param_1 + 0x28);
  func_0x00010c0720c0();
  if ((uVar8 & 1) == 0) {
    uVar4 = (uint)*(undefined8 *)(param_1 + 0x28);
    func_0x00010c0720c0();
    if (((uVar4 | uVar3) & 1) != 0) goto LAB_1065d3e54;
  }
  else {
LAB_1065d3e54:
    func_0x00010c0a3040(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
    uVar4 = (uint)*(undefined8 *)(param_1 + 0x28);
    func_0x00010c0720c0();
    if (((uVar4 | uVar3) & 1) == 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
      func_0x00010c0720c0();
      if (iVar2 != 0) goto LAB_1065d3eac;
    }
    else {
LAB_1065d3eac:
      func_0x00010c0a3040(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
    }
    iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x00010c0720c0();
    puVar18 = PTR_PTR_1126cbe58;
    if (iVar2 != 0) {
      uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
      func_0x00010c0e00e0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c121320(puVar18);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      uVar12 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x50);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
      uVar11 = uVar12;
      _objc_opt_isKindOfClass(uVar12,puVar13);
      uVar8 = uVar12;
      if ((uVar11 & 1) == 0) {
        uVar8 = 0;
      }
      _objc_retain(uVar8);
      _objc_release(uVar12);
      func_0x00010c0a3040(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
      puVar13 = PTR_PTR_1126cbe78;
      _objc_alloc(PTR_PTR_1126cbe78);
      func_0x00010c0593a0();
      _objc_release(uVar8);
      func_0x00010c1fc4a0(puVar9);
      _objc_release(puVar13);
      _objc_release(puVar18);
    }
    if ((uVar1 == 0) && (uVar7 == 0)) {
      if (uVar3 == 0) {
        func_0x00010c0a3040(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
        func_0x00010be706c0(*(undefined8 *)(param_1 + 0x20));
        goto LAB_1065d459c;
      }
      puVar18 = PTR_PTR_1126cbe80;
      func_0x00010bf1e7a0(PTR_PTR_1126cbe80);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e1b20(puVar9);
      _objc_release(puVar18);
    }
    else {
      func_0x00010c1e1b20(puVar9);
    }
    if (uVar5 == 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bdcce20(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20a7e0(puVar9);
      _objc_release(uVar10);
    }
  }
  if (puVar19 != (undefined *)0x0) {
    func_0x00010c16b3c0(puVar9);
    func_0x00010c2049a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
    func_0x00010c204c00(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
  }
  puVar18 = PTR_PTR_1126cbe58;
  if (uVar5 == 0) {
    puVar18 = *(undefined **)(param_1 + 0x20);
    func_0x00010bdcce20(puVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20a7e0(puVar9);
  }
  else {
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
    func_0x00010c0e00e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c121300(puVar18);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    func_0x00010c0a3040(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
    puVar14 = puVar18;
    func_0x00010c0e00e0(puVar18);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126c4978;
    uVar10 = 0x3fa644c1;
    func_0x00010b774c60(0x3fa644c1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c241c80(puVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    puVar15 = PTR_PTR_1126c4968;
    _objc_alloc(PTR_PTR_1126c4968);
    func_0x00010bff37a0();
    puVar16 = PTR_PTR_1126c4978;
    func_0x00010c07f980();
    puVar17 = puVar15;
    if (((ulong)puVar16 & 1) == 0) {
      puVar16 = PTR_PTR_1126c4978;
      func_0x00010c254160(PTR_PTR_1126c4978);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR_PTR_1126c4968;
      _objc_alloc(PTR_PTR_1126c4968);
      func_0x00010bff37a0();
      _objc_release(puVar15);
      _objc_release(puVar16);
    }
    func_0x00010c20a7e0(puVar9);
    puVar15 = PTR_PTR_1126c4978;
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    puVar16 = puVar9;
    func_0x00010c253880(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1fe0(puVar15);
    func_0x00010c204bc0(uVar10);
    _objc_release(puVar16);
    _objc_release(puVar17);
    _objc_release(puVar13);
    _objc_release(puVar14);
  }
  _objc_release(puVar18);
  puVar18 = PTR_PTR_1126cbe58;
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c0e00e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c121320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  func_0x00010c0a3040(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
  if (puVar18 != (undefined *)0x0) {
    puVar13 = PTR_PTR_1126cbe60;
    _objc_alloc(PTR_PTR_1126cbe60);
    func_0x00010c0511e0();
    func_0x00010c178460(puVar9);
    func_0x00010c204c20(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
    _objc_release(puVar13);
  }
  if (puVar6 != (undefined *)0x0) {
    func_0x00010c168920(puVar9);
  }
  puVar13 = PTR_PTR_1126cbe58;
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c0e00e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c121320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  puVar14 = PTR_PTR_1126cbe58;
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c0e00e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c121320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  puVar15 = PTR_PTR_1126cbe58;
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c0e00e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c121320(puVar15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  func_0x00010c0a3040(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
  if (puVar13 == (undefined *)0x0) {
    if (puVar14 != (undefined *)0x0) {
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010be4be40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bcd80(puVar9);
      _objc_release(uVar10);
      func_0x00010c204c40(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
      uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
      func_0x00010c08fa60(puVar15);
      func_0x00010c1a6260(uVar10);
      func_0x00010c204b20(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
    }
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be4be20(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bcd80(puVar9);
    _objc_release(uVar10);
    func_0x00010c204c40(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010c08fa60(puVar15);
    func_0x00010c1a6260(uVar10);
    func_0x00010c0b4ca0(puVar13);
    func_0x00010c204ac0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
    func_0x00010c20a7e0(puVar9);
    func_0x00010c204bc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
  }
  func_0x00010c1ec5e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
  func_0x00010c1c0740(puVar9);
  func_0x00010c0a4b80(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
  func_0x00010c0a3040(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),puVar9,0);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar18);
LAB_1065d459c:
  _objc_release(uVar5);
  _objc_release(puVar19);
  _objc_release(puVar6);
  _objc_release(puVar9);
  _objc_release(uVar7);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065d46b4; end: 1065d49db; -[SCSnapKitCreativeKitLiteDeepLinkRequestParser _verifyDeepLinkURL:subFeature:failure:successCompletion:] */

void FUN_1065d46b4(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c0a3040(uVar6,param_2,&PTR____CFConstantStringClassReference_110e55b78,
                      &PTR____CFConstantStringClassReference_110dbf578);
  puVar2 = param_3;
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000108ed08a4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c0a3040(*(undefined8 *)(param_1 + 0x28),param_2,
                      &PTR____CFConstantStringClassReference_110e55418,
                      &PTR____CFConstantStringClassReference_110dad3f8);
  puVar5 = param_3;
  func_0x00010c2475e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126cbe58;
  if (puVar4 == (undefined *)0x0) {
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c0e00e0(uVar6,param_2,&PTR____CFConstantStringClassReference_110f00118);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c121320(puVar3,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar4 = puVar3;
  }
  puVar3 = puVar4;
  func_0x00010c08fa60();
  if (puVar3 != (undefined *)0x0) {
    func_0x00010c1d03e0(*(undefined8 *)(param_1 + 0x18),param_2,puVar4);
  }
  uVar6 = param_4;
  func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110e55a98);
  puVar1 = PTR_PTR_1126cbe48;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  if ((int)uVar6 == 0) {
    if (puVar4 == (undefined *)0x0) {
      func_0x00010c0a3040(*(undefined8 *)(param_1 + 0x28),param_2,
                          &PTR____CFConstantStringClassReference_110e55b78,
                          &PTR____CFConstantStringClassReference_110e55518);
      func_0x00010be706c0(param_1,param_2,param_5,0,&PTR____CFConstantStringClassReference_110e55e18
                         );
      goto LAB_1065d4954;
    }
    uVar6 = *(undefined8 *)(param_1 + 8);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1065d49dc;
    puStack_90 = &UNK_11092e948;
    lStack_88 = param_1;
    _objc_retain(param_6);
    puStack_78 = param_6;
    _objc_retain(puVar4);
    puStack_d8 = puVar3;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_1065d4a24;
    puStack_c0 = &UNK_1108538b0;
    lStack_b8 = param_1;
    puStack_80 = puVar4;
    _objc_retain(param_5);
    uStack_b0 = param_5;
    func_0x00010c2517a0(puVar1,param_2,puVar4,0,0,0,uVar6,PTR___dispatch_main_q_11034be20,
                        &puStack_a8,&puStack_d8);
    _objc_release(uStack_b0);
    _objc_release(puStack_80);
    puVar3 = puStack_78;
  }
  else {
    func_0x00010c0a3040(*(undefined8 *)(param_1 + 0x28),param_2,
                        &PTR____CFConstantStringClassReference_110e55b78,
                        &PTR____CFConstantStringClassReference_110e55db8);
    func_0x00010c0a3040(*(undefined8 *)(param_1 + 0x28),param_2,
                        &PTR____CFConstantStringClassReference_110e55b78,
                        &PTR____CFConstantStringClassReference_110e55dd8);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e55df8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be706c0(param_1,param_2,param_5,0xe,puVar3);
  }
  _objc_release(puVar3);
LAB_1065d4954:
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1065d49dc; end: 1065d4a23;  */

void FUN_1065d49dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c0a3040(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),param_2,
                      &PTR____CFConstantStringClassReference_110e55b78,
                      &PTR____CFConstantStringClassReference_110e55e38);
                    /* WARNING: Could not recover jumptable at 0x0001065d4a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),param_4);
  return;
}



/* Entry: 1065d4a24; end: 1065d4adb;  */

void FUN_1065d4a24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  _objc_retain(param_2);
  func_0x00010c0a3040(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf3ec40(param_2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be706e0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065d4adc; end: 1065d4b6f; -[SCSnapKitCreativeKitLiteDeepLinkRequestParser _parsingFailure:withError:errorMessage:] */

void FUN_1065d4adc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0a4120(uVar1);
  func_0x00010c0a4100(*(undefined8 *)(param_1 + 0x28));
  (**(code **)(param_3 + 0x10))(param_3,param_5,0);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065d4b70; end: 1065d4c17; -[SCSnapKitCreativeKitLiteDeepLinkRequestParser _parsingFailure:withServerError:httpStatusCode:errorMessage:] */

void FUN_1065d4b70(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c0a41a0(uVar1);
  func_0x00010c0a4180(*(undefined8 *)(param_1 + 0x20));
  (**(code **)(param_3 + 0x10))(param_3,param_6,0);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065d4c18; end: 1065d4c87; -[SCSnapKitCreativeKitLiteDeepLinkRequestParser _lensStateWithLensID:launchData:] */

void FUN_1065d4c18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cbe70;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c025a80();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065d4c88; end: 1065d4cf7; -[SCSnapKitCreativeKitLiteDeepLinkRequestParser _lensStateWithLensUUID:launchData:] */

void FUN_1065d4c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cbe70;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c025a80();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065d4cf8; end: 1065d4e83; -[SCSnapKitCreativeKitLiteDeepLinkRequestParser _appStickerStateWithAppDisplayName:attachmentUrl:clientID:] */

void FUN_1065d4cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar2 = PTR_PTR_1126c4978;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = 0x3fa644c1;
  func_0x00010b774c60(0x3fa644c1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c241c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126c4968;
    _objc_alloc(PTR_PTR_1126c4968);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(0x3fe6666666666666);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff37a0(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar2 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e55b18,1,0);
  return;
}



/* Entry: 1065d4e84; end: 1065d4e9b; -[SCSnapKitCreativeKitLiteDeepLinkRequestParser _shouldFetchPasteboardAsync] */

void FUN_1065d4e84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e55b18,1,0);
  return;
}



/* Entry: 1065d4e9c; end: 1065d4f3b; -[SCSnapKitCreativeKitLiteDeepLinkRequestParser _shouldShareToPreview:] */

undefined8 FUN_1065d4e9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae780;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  puVar2 = PTR_PTR_1126c4980;
  _objc_alloc_init(PTR_PTR_1126c4980);
  func_0x00010c1d0440();
  _objc_release(param_3);
  func_0x00010c204b80(puVar1,param_2,puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf1f440(uVar3,param_2,&PTR____CFConstantStringClassReference_110e55ab8,0,puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 1065d4f3c; end: 1065d5267; -[SCSnapKitCreativeKitLiteDeepLinkRequestParser _buildCreativeKitMetadata:] */

void FUN_1065d4f3c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  _objc_retain(param_3);
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = param_3;
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18aaa0(uVar10,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c2049e0(*(undefined8 *)(param_1 + 0x18),param_2,1);
  func_0x00010c204b40(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x48));
  func_0x00010c1b1500(*(undefined8 *)(param_1 + 0x18),param_2,0);
  func_0x00010c1b70c0(*(undefined8 *)(param_1 + 0x18),param_2,0);
  func_0x00010c1b49e0(*(undefined8 *)(param_1 + 0x18),param_2,1);
  puVar3 = PTR_PTR_1126cbe58;
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0e00e0(uVar10,param_2,&PTR____CFConstantStringClassReference_110f00238);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c121320(puVar3,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  puVar4 = puVar3;
  func_0x00010c08fa60();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar4 != (undefined *)0x0) {
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    puVar4 = puVar3;
    func_0x00010c0b5ac0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc2580(puVar5,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9a00(uVar10,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar5 = PTR_PTR_1126cbe58;
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c0e00e0(uVar10,param_2,&PTR____CFConstantStringClassReference_110f00258);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c121320(puVar5,param_2,uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aeee0(uVar11,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(uVar10);
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    uVar11 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar11;
    func_0x00010c149400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2038e0(uVar12,param_2,uVar10);
    _objc_release(uVar10);
    _objc_release(uVar11);
  }
  uVar1 = param_3;
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c08fa60();
  if (uVar6 != 0) {
    func_0x00010c1d03e0(*(undefined8 *)(param_1 + 0x18),param_2,uVar2);
  }
  uVar6 = param_3;
  func_0x00010c0f5820(param_3,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010beb5a40(param_1,param_2,uVar2);
  uVar8 = uVar6;
  func_0x00010c0720c0(uVar6,param_2,&PTR____CFConstantStringClassReference_110de3df8);
  if (((uVar8 & 1) == 0) &&
     (uVar8 = uVar6,
     func_0x00010c0720c0(uVar6,param_2,&PTR____CFConstantStringClassReference_110e55a98),
     (((uint)uVar8 | (uint)lVar7) & 1) == 0)) {
    uVar8 = uVar6;
    func_0x00010c0720c0(uVar6,param_2,&PTR____CFConstantStringClassReference_110dad4b8);
    if ((int)uVar8 == 0) {
      func_0x00010c204b60(*(undefined8 *)(param_1 + 0x18),param_2,0);
      uVar10 = *(undefined8 *)(param_1 + 0x58);
      ppuVar9 = &PTR____CFConstantStringClassReference_110db8b78;
    }
    else {
      func_0x00010c204b60(*(undefined8 *)(param_1 + 0x18),param_2,1);
      uVar10 = *(undefined8 *)(param_1 + 0x58);
      ppuVar9 = &PTR____CFConstantStringClassReference_110dad4b8;
    }
  }
  else {
    func_0x00010c204b60(*(undefined8 *)(param_1 + 0x18),param_2,2);
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    ppuVar9 = &PTR____CFConstantStringClassReference_110de3df8;
  }
  *(undefined ***)(param_1 + 0x58) = ppuVar9;
  _objc_release(uVar10);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065d5268; end: 1065d5307; -[SCSnapKitCreativeKitLiteDeepLinkRequestParser _shouldAllowAttachment:] */

undefined8 FUN_1065d5268(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae780;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  puVar2 = PTR_PTR_1126c4980;
  _objc_alloc_init(PTR_PTR_1126c4980);
  func_0x00010c1d0440();
  _objc_release(param_3);
  func_0x00010c204b80(puVar1,param_2,puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf1f440(uVar3,param_2,&PTR____CFConstantStringClassReference_110e55398,0,puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 1065d5308; end: 1065d53a3; -[SCSnapKitCreativeKitLiteDeepLinkRequestParser .cxx_destruct] */

void FUN_1065d5308(long param_1)

{
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



/* Entry: 1065d53a4; end: 1065d5463; +[SCSnapKitPasteboardHelpers readEncryptedDataAsData:encryptionKey:encryptionIv:] */

void FUN_1065d53a4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_3;
    func_0x00010c156c60(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1065d5464; end: 1065d563b; +[SCSnapKitPasteboardHelpers readEncryptedDataAsArrayOfStrings:encryptionKey:encryptionIv:] */

void FUN_1065d5464(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c121480();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == (undefined1 *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    lStack_f0 = 0;
    puVar3 = PTR__OBJC_CLASS___NSPropertyListSerialization_1126b7208;
    param_3 = param_1;
    func_0x00010c118cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lStack_f0;
    _objc_retain(lStack_f0);
    puVar8 = (undefined *)0x0;
    if ((lVar2 == 0) && (puVar3 != (undefined *)0x0)) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      _objc_retain(puVar3);
      puVar8 = puVar3;
      func_0x00010bf52a60();
      if (puVar8 != (undefined *)0x0) {
        uVar9 = 0;
        lVar10 = *plStack_120;
        do {
          puVar11 = (undefined *)0x0;
          param_3 = (undefined1 *)puVar7;
          uVar5 = uVar9;
          do {
            if (*plStack_120 != lVar10) {
              _objc_enumerationMutation(puVar3);
            }
            uVar9 = *(ulong *)(lStack_128 + (long)puVar11 * 8);
            _objc_retain(uVar9);
            _objc_release(uVar5);
            puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
            uVar5 = uVar9;
            _objc_opt_isKindOfClass(uVar9,puVar4);
            if ((uVar5 & 1) == 0) {
              _objc_release(puVar3);
              _objc_release(uVar9);
              puVar8 = (undefined *)0x0;
              goto LAB_1065d55e4;
            }
            puVar11 = puVar11 + 1;
            uVar5 = uVar9;
          } while (puVar8 != puVar11);
          puVar8 = puVar3;
          puVar7 = &uStack_130;
          func_0x00010bf52a60();
        } while (puVar8 != (undefined *)0x0);
        _objc_release(uVar9);
      }
      _objc_release(puVar3);
      _objc_retain(puVar3);
      param_3 = (undefined1 *)puVar7;
      puVar8 = puVar3;
    }
LAB_1065d55e4:
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(param_3);
    puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    puVar1 = param_3;
    if (((ulong)puVar6 & 1) == 0) {
      puVar1 = (undefined1 *)0x0;
    }
    _objc_retain(puVar1);
    if (puVar1 == (undefined1 *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
    }
    _objc_release(puVar1);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1065d563c; end: 1065d56cb; +[SCSnapKitPasteboardHelpers readDataAsString:] */

void FUN_1065d563c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1065d56cc; end: 1065d5727; +[SCSnapKitPasteboardHelpers readEncyptedDataAsString:encryptionKey:encryptionIv:] */

void FUN_1065d56cc(long param_1)

{
  undefined *puVar1;
  
  func_0x00010c121480();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065d5728; end: 1065d57ef; +[SCSnapKitPasteboardHelpers readDataAsDictionary:] */

void FUN_1065d5728(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSPropertyListSerialization_1126b7208;
    func_0x00010c118cc0(PTR__OBJC_CLASS___NSPropertyListSerialization_1126b7208);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar3);
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1065d57f0; end: 1065d58b7; +[SCSnapKitPasteboardHelpers readDataAsArray:] */

void FUN_1065d57f0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSPropertyListSerialization_1126b7208;
    func_0x00010c118cc0(PTR__OBJC_CLASS___NSPropertyListSerialization_1126b7208);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar3);
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1065d58b8; end: 1065d5913; +[SCSnapKitPasteboardHelpers readEncryptedDataAsBool:encryptionKey:encryptionIv:defaultValue:] */

byte FUN_1065d58b8(long param_1,undefined8 param_2)

{
  byte in_w5;
  byte bStack_21;
  
  func_0x00010c121480();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    bStack_21 = 0;
    func_0x00010bfc3320(param_1,param_2,&bStack_21,1);
    in_w5 = bStack_21;
  }
  _objc_release(param_1);
  return in_w5 & 1;
}



/* Entry: 1065d5914; end: 1065d5987; -[SCSnapKitPasteboardService initWithGraphene:] */

undefined1 * FUN_1065d5914(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1f78;
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



/* Entry: 1065d5988; end: 1065d599b; -[SCSnapKitPasteboardService fetchPasteboardItems] */

void FUN_1065d5988(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa9270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIPasteboard_1126b2090,PTR_s_fetchPasteboardItems__1125c7e40,
             *(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1065d599c; end: 1065d59a7; -[SCSnapKitPasteboardService .cxx_destruct] */

void FUN_1065d599c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065d59a8; end: 1065d5b77;  */

void FUN_1065d59a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cbdf0;
  func_0x00010c241b60(PTR_PTR_1126cbdf0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(param_3,param_2,puVar2);
  puVar3 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x00010bfbedc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0deea0();
  _objc_release(puVar3);
  if (puVar4 == (undefined *)0x0) {
    puVar3 = puVar1;
    func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e55e78,
                        &PTR____CFConstantStringClassReference_110e55e98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(param_3,param_2,puVar3);
    puVar4 = PTR____NSDictionary0__struct_11034ab58;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
    func_0x00010bfbedc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010bf529e0();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = puVar1;
      func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e55e78,
                          &PTR____CFConstantStringClassReference_110e55eb8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0(param_3,param_2,puVar4);
      _objc_release(puVar4);
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = puVar1;
      func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e55e78,
                          &PTR____CFConstantStringClassReference_110e55ed8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0(param_3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_retain(puVar3);
      puVar4 = puVar3;
    }
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1065d5b78; end: 1065d5c3f;  */

void FUN_1065d5b78(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x00010bfbedc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010c0deea0();
  _objc_release(puVar3);
  puVar3 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar1 != (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
    func_0x00010bfbedc0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bf529e0();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar2);
      puVar3 = puVar2;
    }
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1065d5c40; end: 1065d5f8f; -[SCCreativeKitDeepLinkProcessingPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065d5c40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
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
  
  puVar1 = PTR_PTR_1126cbe88;
  _objc_alloc();
  lVar23 = (long)_DAT_11274b58c;
  lVar2 = param_1 + lVar23;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2419e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018080(puVar1,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126cbe90;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11274b590;
  _objc_loadWeakRetained();
  lVar7 = lVar2;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11274b594;
  _objc_loadWeakRetained();
  lVar4 = param_1 + _DAT_11274b598;
  _objc_loadWeakRetained();
  lVar9 = lVar4;
  func_0x00010c1490a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11274b59c;
  _objc_loadWeakRetained();
  lVar11 = lVar5;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11274b5a0;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + lVar23;
  _objc_loadWeakRetained();
  lVar16 = lVar23;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c2419e0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_11274b5a4;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_11274b5a8;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c291140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e920(puVar6,param_2,lVar8,lVar3,lVar10,lVar12,lVar15,puVar1,lVar18,lVar20,lVar22);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar23);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar5);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11274b5ac;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065d5f90; end: 1065d6027; -[SCCreativeKitDeepLinkProcessingPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065d5f90(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274b58c);
  _objc_destroyWeak(param_1 + _DAT_11274b5a0);
  _objc_destroyWeak(param_1 + _DAT_11274b5a8);
  _objc_destroyWeak(param_1 + _DAT_11274b5a4);
  _objc_destroyWeak(param_1 + _DAT_11274b59c);
  _objc_destroyWeak(param_1 + _DAT_11274b598);
  _objc_destroyWeak(param_1 + _DAT_11274b594);
  _objc_destroyWeak(param_1 + _DAT_11274b590);
  _objc_destroyWeak(param_1 + _DAT_11274b5b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274b5ac);
  return;
}



/* Entry: 1065d6028; end: 1065d6377; -[SCCreativeKitLiteDeepLinkProcessingPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065d6028(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
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
  
  puVar1 = PTR_PTR_1126cbe88;
  _objc_alloc();
  lVar23 = (long)_DAT_11274b5b4;
  lVar2 = param_1 + lVar23;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2419e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018080(puVar1,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126cbe98;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11274b5b8;
  _objc_loadWeakRetained();
  lVar7 = lVar2;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11274b5bc;
  _objc_loadWeakRetained();
  lVar4 = param_1 + _DAT_11274b5c0;
  _objc_loadWeakRetained();
  lVar9 = lVar4;
  func_0x00010c1490a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11274b5c4;
  _objc_loadWeakRetained();
  lVar11 = lVar5;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11274b5c8;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_11274b5cc;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + lVar23;
  _objc_loadWeakRetained();
  lVar18 = lVar23;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010c2419e0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_11274b5d0;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c291140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e940(puVar6,param_2,lVar8,lVar3,lVar10,lVar12,lVar14,lVar17,puVar1,lVar20,lVar22);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar23);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar5);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11274b5d4;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065d6378; end: 1065d640f; -[SCCreativeKitLiteDeepLinkProcessingPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065d6378(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274b5b4);
  _objc_destroyWeak(param_1 + _DAT_11274b5cc);
  _objc_destroyWeak(param_1 + _DAT_11274b5d0);
  _objc_destroyWeak(param_1 + _DAT_11274b5c8);
  _objc_destroyWeak(param_1 + _DAT_11274b5c4);
  _objc_destroyWeak(param_1 + _DAT_11274b5c0);
  _objc_destroyWeak(param_1 + _DAT_11274b5bc);
  _objc_destroyWeak(param_1 + _DAT_11274b5b8);
  _objc_destroyWeak(param_1 + _DAT_11274b5d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274b5d4);
  return;
}



/* Entry: 1065d6410; end: 1065d64e7; -[SCCreativeKitWebDeepLinkProcessingPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065d6410(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126cbea0;
  _objc_alloc(PTR_PTR_1126cbea0);
  lVar2 = param_1 + _DAT_11274b5dc;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e580(puVar1,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11274b5e0;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065d64e8; end: 1065d652b; -[SCCreativeKitWebDeepLinkProcessingPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065d64e8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274b5dc);
  _objc_destroyWeak(param_1 + _DAT_11274b5e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274b5e0);
  return;
}



/* Entry: 1065d652c; end: 1065d66f3; -[SCSnapKitCreativeKitDeepLinkProcessor initWithNavigationDelegate:userNetworkServices:safeBrowsingAPI:userPreferences:blizzardLogger:metricsReporter:graphene:circumstanceEngine:userAdIdProvider:] */

undefined1 *
FUN_1065d652c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f1f80;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065d66f4; end: 1065d6707; -[SCSnapKitCreativeKitDeepLinkProcessor identifier] */

void FUN_1065d66f4(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 1065d6708; end: 1065d670f; -[SCSnapKitCreativeKitDeepLinkProcessor priority] */

undefined8 FUN_1065d6708(void)

{
  return 1000;
}



/* Entry: 1065d6710; end: 1065d6777; -[SCSnapKitCreativeKitDeepLinkProcessor canProvideProcessorForFeature:] */

ulong FUN_1065d6710(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad4b8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110de3df8);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1065d6778; end: 1065d67c3; -[SCSnapKitCreativeKitDeepLinkProcessor isValidDeepLink:] */

undefined8 FUN_1065d6778(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d2a0(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1065d67c4; end: 1065d67c7; -[SCSnapKitCreativeKitDeepLinkProcessor makeDeepLinkProcessor] */

void FUN_1065d67c4(void)

{
  return;
}



/* Entry: 1065d67c8; end: 1065d685f; -[SCSnapKitCreativeKitDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_1065d67c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2475e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1c40(param_1,param_2,param_3,uVar1,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065d6860; end: 1065d6abb; -[SCSnapKitCreativeKitDeepLinkProcessor handleOpenURL:sourceApplication:additionalInfo:delegate:] */

undefined8
FUN_1065d6860(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0a2fc0(*(undefined8 *)(param_1 + 0x40));
  _objc_initWeak(auStack_58,param_6);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126cb710;
  _objc_opt_class(PTR_PTR_1126cb710);
  uVar1 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010bf2d020();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      func_0x00010c0a2fc0(*(undefined8 *)(param_1 + 0x40));
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf94720(param_6);
      _objc_release(puVar4);
      uVar5 = 0;
      goto LAB_1065d6a54;
    }
  }
  else {
    func_0x00010c0a2fc0(*(undefined8 *)(param_1 + 0x40));
    _objc_retain(uVar3);
    func_0x00010bf84280(PTR_PTR_1126cb718);
    _objc_release(uVar3);
  }
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1065d6abc;
  puStack_78 = &UNK_110848218;
  lStack_70 = param_1;
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x000100162d98("APPSTORE",&puStack_90);
  _objc_destroyWeak(auStack_60);
  _objc_release(uStack_68);
  uVar5 = 1;
LAB_1065d6a54:
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 1065d6abc; end: 1065d6ce3;  */

void FUN_1065d6abc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c0a2fc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e55f18,
                      &PTR____CFConstantStringClassReference_110e55f78);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cbea8;
  _objc_alloc(PTR_PTR_1126cbea8);
  func_0x00010bff8500();
  puVar3 = PTR_PTR_1126cbeb0;
  _objc_alloc(PTR_PTR_1126cbeb0);
  func_0x00010c018080();
  puVar4 = PTR_PTR_1126cbeb8;
  _objc_alloc(PTR_PTR_1126cbeb8);
  func_0x00010c02f580();
  puVar5 = PTR_PTR_1126cbec0;
  _objc_alloc(PTR_PTR_1126cbec0);
  lVar6 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar6);
  lVar7 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar7);
  func_0x00010c009c40(puVar5);
  _objc_release(lVar7);
  _objc_release(lVar6);
  uVar8 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained();
  uVar9 = uVar8;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar8 = uVar9;
  _objc_opt_respondsToSelector(uVar9,PTR_s_attachUIUsingKeyWindow__1125a0c18);
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  if ((uVar8 & 1) == 0) {
    func_0x00010c0a2fc0(uVar10);
    func_0x00010bf0c980(uVar9);
  }
  else {
    func_0x00010c0a2fc0(uVar10);
    func_0x00010bf0c9c0(uVar9);
  }
  func_0x00010c0a2fc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40));
  _objc_release(uVar9);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


