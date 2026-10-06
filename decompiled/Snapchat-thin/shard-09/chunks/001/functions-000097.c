/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1069c6ae4; end: 1069c6aef; -[SCChatInputSnapAccessory setPluginDelegate:] */

void FUN_1069c6ae4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xb0,param_3);
  return;
}



/* Entry: 1069c6af0; end: 1069c6be7; -[SCChatInputSnapAccessory .cxx_destruct] */

void FUN_1069c6af0(long param_1)

{
  _objc_destroyWeak(param_1 + 0xb0);
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_destroyWeak(param_1 + 0xa0);
  _objc_storeStrong(param_1 + 0x98,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1069c6be8; end: 1069c70c3; -[SCChatInputSnapAccessoryPlugin initWithCircumstanceEngine:chatCameraScopeExposer:chatCameraScopeServices:previewFilterDataProviderFactory:previewScopeLauncher:previewScopeBuilderServices:currentPageTracker:previewAssetVideoProvider:activeConversationInformation:groupFetcher:snapchattersDataFetcher:snapchatterPublicInfoFetcher:replyAllGroupId:bundledLensProvider:inputScopeContext:messagingExperimentService:snapDocEditorServices:chatTooltipsService:myAIExperimentConfigProvider:fingerDownWarmer:] */

undefined8 *
FUN_1069c6be8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
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
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain();
  _objc_retain();
  puStack_70 = PTR_PTR_1126f4208;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[4];
    puVar1[4] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[5];
    puVar1[5] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[6];
    puVar1[6] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[7];
    puVar1[7] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[8];
    puVar1[8] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[9];
    puVar1[9] = param_16;
    _objc_release(uVar2);
    puVar1[10] = param_17;
    _objc_retain(param_21);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_22;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cf940;
    _objc_alloc();
    func_0x00010c03e5e0();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    func_0x00010c1ddf20(puVar1[3]);
    _objc_initWeak(auStack_80,puVar1);
    uVar4 = puVar1[4];
    func_0x00010c0b8600(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0e0ea0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_80);
    uVar7 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
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



/* Entry: 1069c70c4; end: 1069c712b;  */

void FUN_1069c70c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c11eca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1069c712c; end: 1069c7173;  */

void FUN_1069c712c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea6a60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069c7174; end: 1069c7307; -[SCChatInputSnapAccessoryPlugin configureInputItem:] */

void FUN_1069c7174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_3;
  _objc_retain(param_3);
  func_0x0001069c4fdc();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001069c4fc8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f40(param_3,param_2,uVar2,uVar3,0);
  func_0x00010c223c40(param_3,param_2,0x2f);
  func_0x00010c1ad540(param_3,param_2,0x10);
  func_0x00010c18ac20(param_3,param_2,&PTR____CFConstantStringClassReference_110f48a78);
  func_0x00010c1ba020(param_3,param_2,1000);
  func_0x00010c160fc0(param_3,param_2,&PTR____CFConstantStringClassReference_110e66f38);
  func_0x00010c182ae0(param_3,param_2,3);
  func_0x00010c181ee0(param_3,param_2,3);
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c14d460();
  _objc_release(puVar4);
  bVar1 = (int)puVar5 == 0;
  uVar6 = 0x4044800000000000;
  if (bVar1) {
    uVar6 = 0x4046000000000000;
  }
  uVar7 = 0x4041000000000000;
  if (bVar1) {
    uVar7 = 0x4043000000000000;
  }
  func_0x00010c202c80(uVar6,uVar7,param_3);
  func_0x00010c1676a0(param_3,param_2,1);
  func_0x00010befbd60(param_3,param_2,param_1,PTR_s__warmupTouchDown_112532910,1);
  func_0x00010befbd60(param_3,param_2,param_1,PTR_s__warmupTouchCancelled_112532918,0x180);
  func_0x00010befbd60(param_3,param_2,param_1,PTR_s__warmupTouchCommitted_112532920,0x40);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069c7308; end: 1069c7343; -[SCChatInputSnapAccessoryPlugin _warmupTouchDown] */

void FUN_1069c7308(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069c7344; end: 1069c737b; -[SCChatInputSnapAccessoryPlugin _warmupTouchCancelled] */

void FUN_1069c7344(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c123000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069c737c; end: 1069c73b3; -[SCChatInputSnapAccessoryPlugin _warmupTouchCommitted] */

void FUN_1069c737c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd08e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069c73b4; end: 1069c73bb; -[SCChatInputSnapAccessoryPlugin position] */

undefined8 FUN_1069c73b4(void)

{
  return 1;
}



/* Entry: 1069c73bc; end: 1069c73c3; -[SCChatInputSnapAccessoryPlugin pluginType] */

undefined8 FUN_1069c73bc(void)

{
  return 2;
}



/* Entry: 1069c73c4; end: 1069c73cb; -[SCChatInputSnapAccessoryPlugin createDrawer] */

undefined8 FUN_1069c73c4(void)

{
  return 0;
}



/* Entry: 1069c73cc; end: 1069c73f3; -[SCChatInputSnapAccessoryPlugin createItemController] */

void FUN_1069c73cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069c73f4; end: 1069c744b; -[SCChatInputSnapAccessoryPlugin didAttemptToSendMessage] */

void FUN_1069c73f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c065820();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b6120;
  func_0x00010bf28e60(PTR_PTR_1126b6120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04500(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069c744c; end: 1069c74bf; -[SCChatInputSnapAccessoryPlugin didPresentFullscreen] */

void FUN_1069c744c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010bec84a0();
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf80200();
  _objc_release(lVar1);
  param_1 = param_1 + 0x78;
  _objc_loadWeakRetained(param_1);
  puVar2 = PTR_PTR_1126b6120;
  func_0x00010bf28e60(PTR_PTR_1126b6120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04540(param_1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069c74c0; end: 1069c7553; -[SCChatInputSnapAccessoryPlugin didDismissFullscreen] */

void FUN_1069c74c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c065820();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b6120;
  func_0x00010bf28e60(PTR_PTR_1126b6120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04400(lVar2,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1069c7554; end: 1069c7687; -[SCChatInputSnapAccessoryPlugin replyParametersForChatIdentifier:] */

void FUN_1069c7554(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  puVar3 = PTR_PTR_1126b1010;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c02ec80();
  func_0x00010c1eb220();
  uVar1 = 0x2a;
  if (*(long *)(param_1 + 0x50) != 1) {
    uVar1 = 3;
  }
  func_0x00010c1d86a0(puVar3,param_2,uVar1);
  func_0x00010c1e6d00(puVar3,param_2,*(undefined8 *)(param_1 + 0x68));
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1069c7688;
  puStack_68 = &UNK_110847310;
  lStack_60 = param_1;
  _objc_retain(puVar3);
  puStack_b0 = puVar2;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1069c7708;
  puStack_98 = &UNK_110847310;
  lStack_90 = param_1;
  puStack_58 = puVar3;
  _objc_retain(puVar3);
  puStack_88 = puVar3;
  func_0x00010c0c11e0(param_3,param_2,&puStack_80,&puStack_b0);
  _objc_release(param_3);
  puVar2 = puStack_88;
  _objc_retain(puVar3);
  _objc_release(puVar2);
  _objc_release(puStack_58);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1069c7688; end: 1069c7707;  */

void FUN_1069c7688(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0ee920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
  func_0x00010bede880(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069c7708; end: 1069c7717;  */

void FUN_1069c7708(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bede870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateReplyParametersForGroupCo_1125953c0,
             param_2,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1069c7718; end: 1069c777f; -[SCChatInputSnapAccessoryPlugin _createBaseReplyParameters] */

void FUN_1069c7718(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b1010;
  _objc_alloc(PTR_PTR_1126b1010);
  func_0x00010c02ec80();
  func_0x00010c1eb220();
  uVar1 = 0x2a;
  if (*(long *)(param_1 + 0x50) != 1) {
    uVar1 = 3;
  }
  func_0x00010c1d86a0(puVar2,param_2,uVar1);
  func_0x00010c1e6d00(puVar2,param_2,*(undefined8 *)(param_1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069c7780; end: 1069c77af; -[SCChatInputSnapAccessoryPlugin _setQuotedMessageId:] */

void FUN_1069c7780(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069c77b0; end: 1069c79ff; -[SCChatInputSnapAccessoryPlugin _presentChatCameraForReplyParameters:overrideCameraLaunchPosition:] */

void FUN_1069c77b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + 0x78;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar8 = PTR_PTR_1126cbf60;
    puVar4 = PTR_PTR_1126cbf68;
    func_0x00010bf8b640(PTR_PTR_1126cbf68);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1 + 0x78;
    _objc_loadWeakRetained();
    uVar6 = uVar5;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c08fa60();
    if (uVar7 < 0xfb) {
      func_0x00010c252940();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar1 = lVar2;
      func_0x00010c260c20(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c252940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(lVar2);
  }
  func_0x00010c1eb2c0(param_3);
  _objc_initWeak(auStack_68,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1069c7a00;
  puStack_90 = &UNK_1108502a8;
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  uStack_88 = param_3;
  _objc_retain(puVar8);
  puStack_80 = puVar8;
  uStack_70 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_a8);
  _objc_release(puStack_80);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar8);
  _objc_release(param_3);
  return;
}



/* Entry: 1069c7a00; end: 1069c7b0f;  */

void FUN_1069c7a00(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(lVar2 + 8);
    func_0x00010c071800();
    if (iVar1 != 0) {
      lVar3 = *(long *)(lVar2 + 8);
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 == 0) {
        lVar3 = lVar2 + 0x78;
        _objc_loadWeakRetained(lVar3);
        lVar4 = lVar3;
        func_0x00010c0fa4a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        uVar6 = *(undefined8 *)(lVar2 + 0x10);
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c271a20(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf23680(uVar6,param_2,lVar4,uVar5,*(undefined8 *)(lVar2 + 0x18),2,
                            *(undefined8 *)(param_1 + 0x28),0,0,*(undefined8 *)(lVar2 + 0x18),0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        func_0x00010c1d78c0(uVar6,param_2,*(undefined8 *)(param_1 + 0x38));
        func_0x00010bf9d620(*(undefined8 *)(lVar2 + 8),param_2,uVar6);
        _objc_release(uVar6);
        _objc_release(lVar4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1069c7b10; end: 1069c7bb7; -[SCChatInputSnapAccessoryPlugin _updateReplyParametersForGroupConversationId:partialReplyParameters:] */

void FUN_1069c7b10(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf85ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_3;
  if (lVar1 != 0) {
    lVar2 = lVar1;
  }
  func_0x00010c1eb080(param_4,param_2,lVar2);
  func_0x00010c1eb300(param_4,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1b2900(param_4,param_2,1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069c7bb8; end: 1069c7caf; -[SCChatInputSnapAccessoryPlugin _updateReplyParametersForSnapchatter:partialReplyParameters:] */

void FUN_1069c7bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010901d7c4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb080(param_4);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb2e0(param_4);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb300(param_4);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010901cdb0(param_3,puVar2);
  _objc_release(param_3);
  func_0x00010c1af8a0(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1069c7cb0; end: 1069c7e4f; -[SCChatInputSnapAccessoryPlugin _handleSnapAccessoryPresentCameraEvent:] */

void FUN_1069c7cb0(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bfee140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = param_3;
    func_0x00010c1319e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b01c0;
    puVar3 = param_3;
    if (puVar2 == (undefined *)0x0) {
      func_0x00010bfee140();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar3;
      func_0x00010bf36840();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c1319e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfcf680(puVar1,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1069c7e50;
    puStack_70 = &UNK_110935850;
    uStack_68 = uVar4;
    lStack_60 = param_1;
    _objc_retain(puVar1);
    puStack_b8 = puVar2;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1069c7f34;
    puStack_a0 = &UNK_110847310;
    lStack_98 = param_1;
    puStack_90 = puVar1;
    puStack_58 = puVar1;
    _objc_retain(puVar1);
    _objc_retain(uVar4);
    func_0x00010c0c11e0(puVar1,param_2,&puStack_88,&puStack_b8);
    _objc_release(puStack_90);
    _objc_release(puStack_58);
    _objc_release(uStack_68);
    _objc_release(puVar1);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069c7e50; end: 1069c7f33;  */

void FUN_1069c7e50(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0ee920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    func_0x00010be14100(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    lVar1 = lVar3;
    func_0x000100bf0d4c(lVar3,param_2);
    _objc_release(param_2);
    if ((int)lVar1 != 0) {
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x58);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1fea0();
      _objc_release(uVar2);
    }
    param_2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c131e60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7a840(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1069c7f34; end: 1069c7f7b;  */

void FUN_1069c7f34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c131e60(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7a840(*(undefined8 *)(param_1 + 0x20),param_2,uVar1,0xffffffffffffffff);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069c7f7c; end: 1069c8157; -[SCChatInputSnapAccessoryPlugin _fetchSnapchatterAndPresentCameraForUserId:chatIdentifier:] */

void FUN_1069c7f7c(long param_1,undefined1 *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined **unaff_x24;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar2 = param_3, func_0x00010c08fa60(), lVar2 != 0)) {
    lVar2 = param_1;
    func_0x00010bdeb380();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_58,param_1);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = param_3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1069c8158;
    puStack_78 = &UNK_11085a578;
    param_2 = auStack_58;
    _objc_copyWeak(auStack_60);
    _objc_retain(param_3);
    lStack_70 = param_3;
    _objc_retain(lVar2);
    lStack_68 = lVar2;
    func_0x00010c09d7c0(lVar1);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(puVar3);
    _objc_release(lStack_68);
    _objc_release(lStack_70);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar2);
    unaff_x24 = &puStack_90;
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x24 + 0x30));
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume();
  _objc_retain(param_2);
  lVar1 = param_3 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar4 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined1 *)0x0) {
      puVar5 = puVar4;
      func_0x000100bf0d4c(puVar4,*(undefined8 *)(param_3 + 0x20));
      if ((int)puVar5 != 0) {
        uVar6 = *(undefined8 *)(lVar1 + 0x58);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1fea0();
        _objc_release(uVar6);
      }
      func_0x00010bede880(lVar1);
      func_0x00010be7a840(lVar1);
    }
    _objc_release(puVar4);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069c8158; end: 1069c822f;  */

void FUN_1069c8158(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000100bf0d4c(lVar2,*(undefined8 *)(param_1 + 0x20));
      if ((int)lVar3 != 0) {
        uVar4 = *(undefined8 *)(lVar1 + 0x58);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1fea0();
        _objc_release(uVar4);
      }
      func_0x00010bede880(lVar1);
      func_0x00010be7a840(lVar1);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069c8230; end: 1069c83cb; -[SCChatInputSnapAccessoryPlugin _subscribeToSnapAccessoryPresentCameraEvents] */

void FUN_1069c8230(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfad7a0(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110951da8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c23f280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2b2440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar4 = *(long *)(param_1 + 0x40);
  uVar2 = uVar3;
  if (lVar4 != 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    uStack_68 = 0x1069c8458;
    puStack_60 = &UNK_110951e38;
    lStack_58 = lVar4;
    _objc_retain(lVar4);
    func_0x00010bfb26a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(lVar4);
  }
  _objc_initWeak(auStack_80,param_1);
  _objc_copyWeak(auStack_88,auStack_80);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1069c83cc; end: 1069c858b;  */

bool FUN_1069c83cc(undefined8 param_1,long param_2)

{
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 != 0;
}



/* Entry: 1069c858c; end: 1069c85a3; -[SCChatInputSnapAccessoryPlugin inputContext] */

void FUN_1069c858c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069c85a4; end: 1069c85af; -[SCChatInputSnapAccessoryPlugin setInputContext:] */

void FUN_1069c85a4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 1069c85b0; end: 1069c85b7; -[SCChatInputSnapAccessoryPlugin inputItem] */

undefined8 FUN_1069c85b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1069c85b8; end: 1069c85e7; -[SCChatInputSnapAccessoryPlugin setInputItem:] */

void FUN_1069c85b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069c85e8; end: 1069c86af; -[SCChatInputSnapAccessoryPlugin .cxx_destruct] */

void FUN_1069c85e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_storeStrong(param_1 + 0x70,0);
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



/* Entry: 1069c86b0; end: 1069c86b7; -[SCChatInputSnapAccessoryPluginProvider providerType] */

undefined8 FUN_1069c86b0(void)

{
  return 1;
}



/* Entry: 1069c86b8; end: 1069c8aa7; -[SCChatInputSnapAccessoryPluginProvider initWithCircumstanceEngine:chatCameraScopeExposer:chatCameraScopeServices:previewFilterDataProviderFactory:previewScopeLauncher:previewScopeExposer:previewScopeBuilderServices:currentPageTracker:previewAssetVideoProvider:groupFetcher:snapchattersDataFetcher:snapchatterPublicInfoFetcher:bundledLensProvider:inputScopeContext:messagingExperimentService:snapDocEditorServices:chatTooltipsService:myAIExperimentConfigProvider:fingerDownWarmer:] */

undefined8 *
FUN_1069c86b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

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
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126f4210;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[3];
    puVar1[3] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[9];
    puVar1[9] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[10];
    puVar1[10] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    puVar1[0xf] = param_16;
    _objc_retain(param_17);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_21;
    _objc_release(uVar2);
  }
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
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



/* Entry: 1069c8aa8; end: 1069c8b5b; -[SCChatInputSnapAccessoryPluginProvider createPluginWithActiveConversationInformation:replyAllGroupId:] */

void FUN_1069c8aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cf948;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bffe3e0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1069c8b5c; end: 1069c8b63; -[SCChatInputSnapAccessoryPluginProvider createObserverWithActiveConversationInformation:replyAllGroupId:] */

undefined8 FUN_1069c8b5c(void)

{
  return 0;
}



/* Entry: 1069c8b64; end: 1069c8c5f; -[SCChatInputSnapAccessoryPluginProvider .cxx_destruct] */

void FUN_1069c8b64(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069c8c60; end: 1069c8dd7;  */

void FUN_1069c8c60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf419e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf12e60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfb7bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010b0e4c28(uVar1,0,uVar2,uVar3,0xffffffffffffffff);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bfb7bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar5 = PTR_PTR_1126ba800;
  _objc_alloc(PTR_PTR_1126ba800);
  uVar1 = param_1;
  func_0x00010bf419e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfffd00(puVar5);
  _objc_release(uVar1);
  puVar6 = PTR_PTR_1126baa60;
  _objc_alloc(PTR_PTR_1126baa60);
  uVar1 = param_1;
  func_0x00010bf419e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c01fe20(puVar6);
  _objc_release(uVar1);
  _objc_release(puVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1069c8dd8; end: 1069c8e97; -[SCChatStickerDrawerQSIProvider initWithCtpItemViewService:presentationModelProvider:] */

undefined1 *
FUN_1069c8dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4218;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069c8e98; end: 1069c90d3; -[SCChatStickerDrawerQSIProvider quickSearchIconForSticker:completion:] */

void FUN_1069c8e98(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010c27dd80();
  if (puVar1 + -1 < (undefined *)0x3) {
    puVar7 = param_3;
    func_0x00010c2540c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c2540c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010c071ae0();
    _objc_release(uVar2);
    _objc_release(puVar7);
    if (((ulong)puVar3 & 1) != 0) goto LAB_1069c9094;
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x10));
    puVar7 = param_3;
    func_0x00010c271a80();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 != (undefined *)0x0) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c10f580(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x00010c29cde0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      uVar5 = uVar2;
      func_0x00010c0e0460(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      uVar6 = uVar5;
      func_0x00010c25ff60(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar6);
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = uVar2;
      _objc_retain(uVar2);
      _objc_release(uVar5);
      _objc_release(param_4);
      _objc_release(uVar2);
      _objc_release(uVar4);
    }
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_1069c9094;
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x10));
    puVar7 = PTR_PTR_1126cf950;
    func_0x00010c138cc0(PTR_PTR_1126cf950);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,puVar7);
  }
  _objc_release(puVar7);
LAB_1069c9094:
  *(ulong *)(param_1 + 0x18) = (ulong)(puVar1 + -1 < (undefined *)0x3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = param_3;
  _objc_release(uVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 1069c90d4; end: 1069c91eb;  */

void FUN_1069c90d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1069c91ec;
  uStack_40 = 0x1069c91fc;
  uStack_38 = 0;
  func_0x00010c0c0800(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126cf950;
  func_0x00010bfe5ce0(PTR_PTR_1126cf950);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1069c91ec; end: 1069c9203;  */

void FUN_1069c91ec(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1069c9204; end: 1069c925b;  */

void FUN_1069c9204(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bfe90c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069c925c; end: 1069c9263; -[SCChatStickerDrawerQSIProvider cancelQSIImageRequest] */

void FUN_1069c925c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 1069c9264; end: 1069c92b7; -[SCChatStickerDrawerQSIProvider .cxx_destruct] */

void FUN_1069c9264(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069c92b8; end: 1069c932f;  */

void FUN_1069c92b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec800(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069c9330; end: 1069ca297; -[SCChatInputStickerPlugin initWithUserSession:activeConversationInformation:cameoServices:ctpRepositoryServices:ctpItemViewService:notificationPool:cameoStickersPresentationServices:stickerSender:textSender:drawerMediaSender:navigationDelegate:groupFetcher:replyAllGroupId:storyReplySender:storyShareSender:userDataFeedServices:circumstanceEngine:bitmojiStickerCategoryIconProvider:stickerSearcher:chatNewMessageProvider:bitmojiAvatarProvider:bitmojiStickerRefresher:friendmojiFilteredContainer:quickReplyDataProvider:quickReplyDataProviderConfiguration:stickerGraphene:userPreferences:bitmojiAppPasteboardObserver:creativeToolsMetricsServices:friendsFeedDataCoordinator:contextNotificationManager:featureSettingsService:ctpSearchServices:bitmojiFriendmojiHintScopeExposer:stickerInjector:messagingExperimentService:creativeToolsABProvider:customStickerManager:customojiServices:aiStickersServiceFactory:plusFeatureGating:spotlightShareSender:discoverFeedBaseDeepLinkProcessor:bitmoji3DContentFetcher:bitmojiClientRenderer:blizzardLogger:appStartExperimentReader:bitmojiAvatarBuilderScopeExposer:stickerContentManager:renderStyleProvider:bitmojiAppEventsEmitter:memoriesPickerV2ScopeExposer:memoriesPickerV2ScopeServices:modularStickerCutoutScopeExposer:remixStickerServices:plusSubscribeScopeExposer:plusSubscribeScopeServices:contextExperimentService:mapChatLocationTrayPresenter:snapPlanChatDrawerPresenter:intentDetectionService:pollChatDrawerPresenter:] */

undefined8 *
FUN_1069c9330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
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
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain();
  _objc_retain();
  _objc_retain(param_53);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain(param_61);
  _objc_retain(param_62);
  _objc_retain(param_63);
  _objc_retain(param_64);
  puStack_80 = PTR_PTR_1126f4220;
  puVar2 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[1];
    puVar2[1] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar2[2];
    puVar2[2] = param_4;
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = puVar2[3];
    puVar2[3] = uVar8;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[0x32];
    puVar2[0x32] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar2[5];
    puVar2[5] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar2[6];
    puVar2[6] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar2[7];
    puVar2[7] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar2[8];
    puVar2[8] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar2[9];
    puVar2[9] = param_12;
    _objc_release(uVar3);
    _objc_storeWeak(puVar2 + 10,param_13);
    _objc_retain(param_14);
    uVar3 = puVar2[0xb];
    puVar2[0xb] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[4];
    puVar2[4] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar2[0x11];
    puVar2[0x11] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar2[0xc];
    puVar2[0xc] = param_15;
    _objc_release(uVar3);
    _objc_retain(param_16);
    uVar3 = puVar2[0xd];
    puVar2[0xd] = param_16;
    _objc_release(uVar3);
    _objc_retain(param_17);
    uVar3 = puVar2[0xe];
    puVar2[0xe] = param_17;
    _objc_release(uVar3);
    _objc_retain(param_18);
    uVar3 = puVar2[0xf];
    puVar2[0xf] = param_18;
    _objc_release(uVar3);
    _objc_retain(param_19);
    uVar3 = puVar2[0x10];
    puVar2[0x10] = param_19;
    _objc_release(uVar3);
    _objc_retain(param_20);
    uVar3 = puVar2[0x13];
    puVar2[0x13] = param_20;
    _objc_release(uVar3);
    _objc_retain(param_21);
    uVar3 = puVar2[0x14];
    puVar2[0x14] = param_21;
    _objc_release(uVar3);
    _objc_retain(param_22);
    uVar3 = puVar2[0x15];
    puVar2[0x15] = param_22;
    _objc_release(uVar3);
    _objc_retain(param_23);
    uVar3 = puVar2[0x16];
    puVar2[0x16] = param_23;
    _objc_release(uVar3);
    _objc_retain(param_25);
    uVar3 = puVar2[0x39];
    puVar2[0x39] = param_25;
    _objc_release(uVar3);
    _objc_retain(param_24);
    uVar3 = puVar2[0x17];
    puVar2[0x17] = param_24;
    _objc_release(uVar3);
    _objc_retain(param_29);
    uVar3 = puVar2[0x18];
    puVar2[0x18] = param_29;
    _objc_release(uVar3);
    _objc_retain(param_31);
    uVar3 = puVar2[0x19];
    puVar2[0x19] = param_31;
    _objc_release(uVar3);
    _objc_retain(param_26);
    uVar3 = puVar2[0x1a];
    puVar2[0x1a] = param_26;
    _objc_release(uVar3);
    _objc_retain(param_27);
    uVar3 = puVar2[0x1b];
    puVar2[0x1b] = param_27;
    _objc_release(uVar3);
    _objc_retain(param_32);
    uVar3 = puVar2[0x31];
    puVar2[0x31] = param_32;
    _objc_release(uVar3);
    _objc_retain(param_33);
    uVar3 = puVar2[0x1c];
    puVar2[0x1c] = param_33;
    _objc_release(uVar3);
    _objc_retain(param_34);
    uVar3 = puVar2[0x1d];
    puVar2[0x1d] = param_34;
    _objc_release(uVar3);
    _objc_retain(param_35);
    uVar3 = puVar2[0x1e];
    puVar2[0x1e] = param_35;
    _objc_release(uVar3);
    _objc_retain(param_36);
    uVar3 = puVar2[0x1f];
    puVar2[0x1f] = param_36;
    _objc_release(uVar3);
    _objc_retain(param_37);
    uVar3 = puVar2[0x20];
    puVar2[0x20] = param_37;
    _objc_release(uVar3);
    _objc_retain(param_39);
    uVar3 = puVar2[0x3b];
    puVar2[0x3b] = param_39;
    _objc_release(uVar3);
    _objc_retain(param_61);
    uVar3 = puVar2[0x3d];
    puVar2[0x3d] = param_61;
    _objc_release(uVar3);
    _objc_retain(param_62);
    uVar3 = puVar2[0x3e];
    puVar2[0x3e] = param_62;
    _objc_release(uVar3);
    _objc_retain(param_63);
    uVar3 = puVar2[0x3f];
    puVar2[0x3f] = param_63;
    _objc_release(uVar3);
    _objc_retain(param_64);
    uVar3 = puVar2[0x41];
    puVar2[0x41] = param_64;
    _objc_release(uVar3);
    _objc_retain(param_40);
    uVar3 = puVar2[0x42];
    puVar2[0x42] = param_40;
    _objc_release(uVar3);
    _objc_retain(param_41);
    uVar3 = puVar2[0x43];
    puVar2[0x43] = param_41;
    _objc_release(uVar3);
    _objc_retain(param_38);
    uVar3 = puVar2[0x3a];
    puVar2[0x3a] = param_38;
    _objc_release(uVar3);
    _objc_retain(param_42);
    uVar3 = puVar2[0x21];
    puVar2[0x21] = param_42;
    _objc_release(uVar3);
    _objc_retain(param_43);
    uVar3 = puVar2[0x22];
    puVar2[0x22] = param_43;
    _objc_release(uVar3);
    _objc_retain(param_48);
    uVar3 = puVar2[0x48];
    puVar2[0x48] = param_48;
    _objc_release(uVar3);
    uVar3 = param_31;
    func_0x00010c254380();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar2[0x24];
    puVar2[0x24] = uVar3;
    _objc_release(uVar8);
    uVar3 = param_31;
    func_0x00010c253960();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar2[0x25];
    puVar2[0x25] = uVar3;
    _objc_release(uVar8);
    _objc_retain(param_49);
    uVar3 = puVar2[0x49];
    puVar2[0x49] = param_49;
    _objc_release(uVar3);
    _objc_retain(param_50);
    uVar3 = puVar2[0x4a];
    puVar2[0x4a] = param_50;
    _objc_release(uVar3);
    _objc_retain(param_51);
    uVar3 = puVar2[0x4b];
    puVar2[0x4b] = param_51;
    _objc_release(uVar3);
    _objc_retain(param_52);
    uVar3 = puVar2[0x23];
    puVar2[0x23] = param_52;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar2[0x26];
    puVar2[0x26] = puVar4;
    _objc_release(uVar3);
    func_0x00010be65ea0(puVar2);
    puVar4 = PTR_PTR_1126bb1d8;
    _objc_alloc_init();
    uVar3 = puVar2[0x29];
    puVar2[0x29] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126bb1d8;
    uVar9 = puVar2[0x29];
    _objc_retain(uVar9);
    _objc_opt_class();
    uVar5 = uVar9;
    _objc_opt_isKindOfClass(uVar9,puVar4);
    uVar1 = uVar9;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar9);
    puVar4 = PTR_PTR_1126bb1e8;
    _objc_alloc();
    func_0x00010c01ce40();
    func_0x00010c1e12a0(uVar1);
    uVar8 = puVar2[0x16];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010bfd46e0();
    _objc_release(uVar8);
    if ((int)uVar3 != 0) {
      func_0x00010bed4100(puVar2);
    }
    func_0x00010bec73a0(puVar2);
    _objc_initWeak(auStack_90,puVar2);
    uVar3 = param_30;
    func_0x00010c269d40(param_30);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010c0f5720();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1069ca298;
    puStack_a0 = &UNK_1108e8f00;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar6 = uVar8;
    func_0x00010c25ff60(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar8);
    _objc_release(uVar3);
    puVar7 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x2b];
    puVar2[0x2b] = puVar7;
    _objc_release(uVar3);
    puVar7 = PTR_PTR_1126cf958;
    _objc_alloc();
    func_0x00010c00a140();
    uVar3 = puVar2[0x2e];
    puVar2[0x2e] = puVar7;
    _objc_release(uVar3);
    uVar3 = param_19;
    func_0x000108d2d098();
    *(char *)(puVar2 + 0x37) = (char)uVar3;
    if ((int)uVar3 != 0) {
      puVar7 = PTR_PTR_1126cf960;
      _objc_alloc();
      func_0x000108d2d0ac(param_19);
      func_0x000108d2d0dc(param_19);
      func_0x00010c0404a0();
      uVar3 = puVar2[0x33];
      puVar2[0x33] = puVar7;
      _objc_release(uVar3);
      func_0x00010c18b5e0(puVar2[0x33]);
    }
    puVar7 = PTR_PTR_1126cf968;
    _objc_alloc();
    func_0x00010c006e80();
    uVar3 = puVar2[0x2f];
    puVar2[0x2f] = puVar7;
    _objc_release(uVar3);
    _objc_retain(param_44);
    uVar3 = puVar2[0x44];
    puVar2[0x44] = param_44;
    _objc_release(uVar3);
    _objc_retain(param_45);
    uVar3 = puVar2[0x45];
    puVar2[0x45] = param_45;
    _objc_release(uVar3);
    _objc_retain(param_46);
    uVar3 = puVar2[0x46];
    puVar2[0x46] = param_46;
    _objc_release(uVar3);
    _objc_retain(param_47);
    uVar3 = puVar2[0x47];
    puVar2[0x47] = param_47;
    _objc_release(uVar3);
    _objc_retain(param_53);
    uVar3 = puVar2[0x4c];
    puVar2[0x4c] = param_53;
    _objc_release(uVar3);
    _objc_retain(param_54);
    uVar3 = puVar2[0x4d];
    puVar2[0x4d] = param_54;
    _objc_release(uVar3);
    _objc_retain(param_55);
    uVar3 = puVar2[0x4e];
    puVar2[0x4e] = param_55;
    _objc_release(uVar3);
    _objc_retain(param_56);
    uVar3 = puVar2[0x4f];
    puVar2[0x4f] = param_56;
    _objc_release(uVar3);
    _objc_retain(param_57);
    uVar3 = puVar2[0x50];
    puVar2[0x50] = param_57;
    _objc_release(uVar3);
    _objc_retain(param_58);
    uVar3 = puVar2[0x51];
    puVar2[0x51] = param_58;
    _objc_release(uVar3);
    _objc_retain(param_59);
    uVar3 = puVar2[0x52];
    puVar2[0x52] = param_59;
    _objc_release(uVar3);
    _objc_retain(param_60);
    uVar3 = puVar2[0x3c];
    puVar2[0x3c] = param_60;
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
    _objc_release(puVar4);
    _objc_release(uVar1);
  }
  _objc_release(param_64);
  _objc_release(param_63);
  _objc_release(param_62);
  _objc_release(param_61);
  _objc_release(param_60);
  _objc_release(param_59);
  _objc_release(param_58);
  _objc_release(param_57);
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
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
  return puVar2;
}



/* Entry: 1069ca298; end: 1069ca2df;  */

void FUN_1069ca298(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd4860();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069ca2e0; end: 1069ca36f;  */

void FUN_1069ca2e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126cbdc8;
    _objc_alloc(PTR_PTR_1126cbdc8);
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf9c660(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05e420(puVar2,param_2,uVar3,uVar1,*(undefined8 *)(param_1 + 0xa0),
                        *(undefined8 *)(param_1 + 0x1d8));
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069ca370; end: 1069ca3d7; -[SCChatInputStickerPlugin _drawerStickerSearchable] */

void FUN_1069ca370(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x298;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010bf5e780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar3 = lVar2;
  func_0x00010010fab4(lVar2,PTR_DAT_1126a56a8);
  lVar1 = lVar2;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1069ca3d8; end: 1069ca693; -[SCChatInputStickerPlugin _tabMetricInfoFromSticker:section:fromSource:searchSource:] */

void FUN_1069ca3d8(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bac28;
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010c2540c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80(param_3);
  func_0x00010c113fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126bac28;
  puVar3 = param_3;
  func_0x00010c2540c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80(param_3);
  func_0x00010c2540e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = param_3;
  func_0x000107d5ecec(param_3,*(undefined8 *)(param_1 + 0x1d8),param_5);
  if ((int)puVar3 == 0) {
    puVar3 = PTR_PTR_1126b6088;
    _objc_alloc(PTR_PTR_1126b6088);
    func_0x00010c032c60();
    _objc_release(param_4);
    puVar6 = PTR_PTR_1126b6090;
    func_0x00010c254280(PTR_PTR_1126b6090);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = param_3;
    func_0x00010c271a80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_3;
    func_0x00010c271a60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06c020();
    _objc_release(puVar6);
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126cf970;
    _objc_alloc();
    puVar6 = puVar3;
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf96f00(puVar3);
    func_0x000107d5eccc();
    func_0x00010c006c60(puVar5);
    _objc_release(param_4);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b6090;
    func_0x00010bf5cc80(PTR_PTR_1126b6090);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1069ca694; end: 1069ca8d3; -[SCChatInputStickerPlugin _chatSendAnalyticsDataModelWithDrawerMetricInfo:memoriesMetricsInfo:] */

void FUN_1069ca694(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bdfb260(param_1,param_2,*(undefined8 *)(param_1 + 0x90));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c11eca0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108606d64();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b1a40;
  _objc_opt_new(PTR_PTR_1126b1a40);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010bf37160(uVar2);
  func_0x00010c2b9b80(puVar4,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa660(puVar4,param_2,0xffffffffffffffff);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ac2e0(puVar4,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aca20(puVar4,param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2b3c60(puVar4,param_2,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc480(puVar4,param_2,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010c2aa640(puVar4,param_2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2afd40(puVar4,param_2,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  lVar6 = *(long *)(param_1 + 0x90);
  func_0x00010bf4f080();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08fa60();
  _objc_release(lVar6);
  if (lVar7 != 0) {
    puVar5 = PTR_PTR_1126b5f90;
    _objc_alloc(PTR_PTR_1126b5f90);
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010bf4f080(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c004680(puVar5,param_2,uVar2);
    _objc_release(uVar2);
    func_0x00010c2ab020(puVar4,param_2,puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  puVar5 = puVar4;
  func_0x00010bf21f60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1069ca8d4; end: 1069ca9cf; -[SCChatInputStickerPlugin _destinationInfoForConversationInformation:] */

void FUN_1069ca8d4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_3 == 0) {
    lVar7 = 0;
  }
  else {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf36840(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf50280(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c10ad20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0df180();
    lVar5 = param_3;
    func_0x00010c10ad20(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar6 = lVar5;
    func_0x00010c0df160(lVar5);
    lVar7 = lVar1;
    func_0x000108606910(lVar1,lVar2,lVar4,lVar6,*(undefined8 *)(param_1 + 0x58));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 1069ca9d0; end: 1069cab67; -[SCChatInputStickerPlugin _subscribeToStickerSendEvents:] */

void FUN_1069ca9d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfad7a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2b2440(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x60);
  uVar3 = uVar2;
  if (lVar4 != 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    uStack_68 = 0x1069cac84;
    puStack_60 = &UNK_110951fa8;
    lStack_58 = lVar4;
    _objc_retain(lVar4);
    func_0x00010bfb26a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(lVar4);
  }
  _objc_initWeak(auStack_80,param_1);
  _objc_copyWeak(auStack_88,auStack_80);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1069cab68; end: 1069cad1b;  */

bool FUN_1069cab68(undefined8 param_1,long param_2)

{
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 != 0;
}



/* Entry: 1069cad1c; end: 1069cadbb;  */

void FUN_1069cad1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0c0460(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069cadbc; end: 1069cae0f;  */

void FUN_1069cadbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0ec5e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eaf00(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069cae10; end: 1069caeb3;  */

void FUN_1069cae10(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c0460(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1069caeb4; end: 1069caefb;  */

void FUN_1069caeb4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be30e20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069caefc; end: 1069caffb; -[SCChatInputStickerPlugin _subscribeToBitmojiAvatarChanges] */

void FUN_1069caefc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf12ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1069caffc; end: 1069cb02f;  */

void FUN_1069caffc(long param_1,long param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bed4100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1069cb030; end: 1069cb1bb; -[SCChatInputStickerPlugin _sendSticker:thumbnail:fromPosition:fromSource:searchSource:] */

void FUN_1069cb030(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126cf978;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0f0a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c680(puVar1,param_2,param_3,uVar2,param_5,param_6,param_7);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126cf980;
  func_0x00010c2553a0(PTR_PTR_1126cf980,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be75cc0(param_1,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010be30e20(param_1,param_2,puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x120);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c27dd80(param_3);
  _objc_release(param_3);
  func_0x00010916771c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar5 = param_1 + 0x298;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar3,param_2,lVar6);
  func_0x00010beed200(param_1);
  func_0x00010c1330c0(uVar4,param_2,uVar2,param_6,(uint)puVar3 ^ 1,param_1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069cb1bc; end: 1069cb213; -[SCChatInputStickerPlugin _populateConversationInformationForStickerSendEvent:] */

void FUN_1069cb1bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1069cb214;
  puStack_20 = &UNK_110951f48;
  uStack_18 = param_1;
  func_0x00010c0c0460(param_3,param_2,&puStack_38);
  return;
}



/* Entry: 1069cb214; end: 1069cb30b;  */

void FUN_1069cb214(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  func_0x00010c1ac6c0(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  _objc_retain(param_2);
  func_0x00010c0b8600(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 1069cb30c; end: 1069cb32b; -[SCChatInputStickerPlugin _shouldDisplayStickerSendUndoNotificationForSource:] */

uint FUN_1069cb30c(undefined8 param_1,undefined8 param_2,long param_3)

{
  return (uint)(0xc < param_3 + 1U) | 0xcf0U >> (ulong)((uint)(param_3 + 1U) & 0x1f) & 1;
}



/* Entry: 1069cb32c; end: 1069cb423; -[SCChatInputStickerPlugin _handleStickerSendEvent:] */

void FUN_1069cb32c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c247520(param_3);
  uVar2 = param_1;
  func_0x00010beb34a0(param_1,param_2,uVar1);
  if ((int)uVar2 == 0) {
    func_0x00010bea05e0(param_1,param_2,param_3);
  }
  else {
    uVar1 = param_3;
    func_0x00010c1319e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bfee140(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1069cb424;
    puStack_48 = &UNK_110841f80;
    uStack_40 = param_1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010be05020(param_1,param_2,uVar1,uVar2,&puStack_60);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1069cb424; end: 1069cb42f;  */

void FUN_1069cb424(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea05f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__sendStickerEvent__112585b20,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1069cb430; end: 1069cb64f; -[SCChatInputStickerPlugin _displayUndoableNotificationWithGroupConversationId:conversationInformation:successBlock:] */

void FUN_1069cb430(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_1069cb650;
  uStack_80 = 0x1069cb660;
  uStack_78 = 0;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_1069cb650;
  uStack_b0 = 0x1069cb660;
  _objc_retain(param_3);
  uVar1 = param_4;
  uStack_a8 = param_3;
  func_0x00010bf36840(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c11e0();
  _objc_release(uVar1);
  func_0x00010bf57500(*(undefined8 *)(param_1 + 0x70));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf57500(*(undefined8 *)(param_1 + 0x68));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf57500(*(undefined8 *)(param_1 + 0x38));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c064e40();
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069cb650; end: 1069cb667;  */

void FUN_1069cb650(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1069cb668; end: 1069cb757;  */

void FUN_1069cb668(long param_1,undefined8 param_2)

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



/* Entry: 1069cb758; end: 1069cbf97; -[SCChatInputStickerPlugin _sendStickerEvent:] */

void FUN_1069cb758(undefined *param_1,undefined8 param_2,undefined *param_3)

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
  undefined **ppuVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined *puStack_1a8;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bfee140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) goto LAB_1069cbe70;
  puVar1 = param_3;
  func_0x00010bfee140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25a520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = param_3;
  func_0x00010c253880();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_3;
  func_0x00010c1554e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104260(param_3);
  puVar6 = param_3;
  func_0x00010c247520();
  func_0x00010c1542c0(param_3);
  puVar1 = param_3;
  func_0x00010bfee140();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c11eca0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c11ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010bfee140();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010c15b9c0();
  _objc_release(puVar1);
  puVar10 = param_1;
  func_0x00010beca360();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b6098;
  _objc_alloc();
  puVar1 = param_1 + 0x298;
  _objc_loadWeakRetained(puVar1);
  func_0x00010bf89e20();
  puVar7 = param_1 + 0x298;
  _objc_loadWeakRetained(puVar7);
  puVar12 = puVar7;
  func_0x00010bf89e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061ca0();
  _objc_release(puVar12);
  _objc_release(puVar7);
  _objc_release(puVar1);
  puVar7 = param_1;
  func_0x00010bddd000();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_98,param_1);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1069cbf98;
  puStack_a8 = &UNK_110850658;
  _objc_copyWeak(auStack_a0,auStack_98);
  ppuVar13 = &puStack_c0;
  _objc_retainBlock();
  puVar1 = param_1 + 0x298;
  _objc_loadWeakRetained(puVar1);
  puVar12 = PTR_PTR_1126b6120;
  func_0x00010c253e20(PTR_PTR_1126b6120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04500(puVar1);
  _objc_release(puVar12);
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010bfee140();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puStack_1a8 = (undefined *)0x0;
  }
  else {
    puStack_1a8 = puVar3;
    func_0x00010853c32c();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar12 = puVar1;
  func_0x00010c06f6c0();
  if ((int)puVar12 == 0) {
    puVar12 = puStack_1a8;
    func_0x00010c131c00();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bf529e0();
    _objc_release(puVar12);
    if (puVar14 != (undefined *)0x0) {
      puVar12 = PTR_PTR_1126b5bd8;
      func_0x00010c24b300();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1069cbaac;
    }
LAB_1069cbc1c:
    puVar12 = param_3;
    func_0x00010c1319e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar3 != (undefined *)0x0 && puVar12 != (undefined *)0x0) {
      puVar12 = PTR_PTR_1126c2810;
      _objc_alloc(PTR_PTR_1126c2810);
      puVar14 = puVar3;
      func_0x00010c15f2e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar3;
      func_0x00010c0c5340(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80();
      func_0x00010c04e240(puVar12);
      _objc_release(puVar16);
      _objc_release(puVar14);
      puVar14 = puVar7;
      func_0x000108604d34(puVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_1 + 0x70);
      func_0x00010c269d40(uVar15);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = param_3;
      func_0x00010c1319e0();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_90 = puVar16;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(ppuVar13);
      _objc_copyWeak(auStack_138,auStack_98);
      _objc_retain(puVar4);
      _objc_retain(param_3);
      _objc_retain(puVar7);
      _objc_retain(puVar8);
      puStack_130 = puVar9;
      puStack_128 = puVar6;
      func_0x00010c15d8c0(uVar15);
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(uVar15);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(param_3);
      _objc_release(puVar4);
      _objc_destroyWeak(auStack_138);
      ppuVar18 = ppuVar13;
      goto LAB_1069cbdfc;
    }
    if ((puVar3 == (undefined *)0x0) ||
       (puVar6 = puVar3, func_0x00010853b5e0(), ((ulong)puVar6 & 1) != 0)) {
      puVar12 = puVar1;
      func_0x00010bf0cb40(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be9efa0(param_1);
      goto LAB_1069cbe08;
    }
    func_0x00010bea0620(param_1);
  }
  else {
    puVar12 = PTR_PTR_1126b5bd8;
    func_0x00010c24bd60();
    _objc_retainAutoreleasedReturnValue();
LAB_1069cbaac:
    if (puVar12 == (undefined *)0x0) goto LAB_1069cbc1c;
    puVar14 = PTR_PTR_1126b5bd0;
    _objc_alloc(PTR_PTR_1126b5bd0);
    puVar16 = puVar3;
    func_0x00010853bdd8(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000c00(puVar14);
    _objc_release(puVar16);
    uVar15 = *(undefined8 *)(param_1 + 0x220);
    func_0x00010c269d40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_1069cc01c;
    puStack_108 = &UNK_110952038;
    _objc_retain(ppuVar13);
    ppuStack_e0 = ppuVar13;
    _objc_copyWeak(auStack_d8,auStack_98);
    _objc_retain(puVar4);
    puStack_100 = puVar4;
    _objc_retain(puVar2);
    puStack_f8 = puVar2;
    _objc_retain(puVar7);
    puStack_f0 = puVar7;
    _objc_retain(puVar8);
    puStack_e8 = puVar8;
    puStack_d0 = puVar9;
    puStack_c8 = puVar6;
    func_0x00010c15cbe0(uVar15);
    _objc_release(puVar16);
    _objc_release(uVar15);
    _objc_release(puStack_e8);
    _objc_release(puStack_f0);
    _objc_release(puStack_f8);
    _objc_release(puStack_100);
    _objc_destroyWeak(auStack_d8);
    ppuVar18 = ppuStack_e0;
LAB_1069cbdfc:
    _objc_release(ppuVar18);
    _objc_release(puVar14);
LAB_1069cbe08:
    _objc_release(puVar12);
  }
  _objc_release(puStack_1a8);
  _objc_release(puVar1);
  _objc_release(ppuVar13);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar7);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_1069cbe70:
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_138);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume();
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3 + 0x298;
    _objc_loadWeakRetained(puVar1);
    puVar2 = PTR_PTR_1126b6120;
    func_0x00010c253e20(PTR_PTR_1126b6120);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04520(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069cbf98; end: 1069cc01b;  */

void FUN_1069cbf98(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x298;
    _objc_loadWeakRetained(lVar1);
    puVar2 = PTR_PTR_1126b6120;
    func_0x00010c253e20(PTR_PTR_1126b6120);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04520(lVar1);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069cc01c; end: 1069cc087;  */

void FUN_1069cc01c(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001069cc048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
    return;
  }
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9efa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069cc088; end: 1069cc123;  */

void FUN_1069cc088(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001069cc0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
    return;
  }
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c1319e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9efa0(lVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069cc124; end: 1069cc443; -[SCChatInputStickerPlugin _sendDirectReplySticker:conversationId:analyticsDataModel:quotedMessageId:sendContextSource:attachedURL:source:completionHandler:] */

void FUN_1069cc124(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7,long param_8,
                  undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_10);
  puVar3 = param_3;
  func_0x000107d5ecec(param_3,*(undefined8 *)(param_1 + 0x1d8),param_9);
  uVar10 = param_6;
  if ((int)puVar3 == 0) {
    puVar3 = param_3;
    puStack_90 = param_7;
    func_0x00010c27dd80();
    if (puVar3 == (undefined *)0x1) {
      puVar3 = *(undefined **)(param_1 + 0x38);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_3;
      func_0x00010c2540c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x000109164214();
      _objc_retainAutoreleasedReturnValue();
      param_7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_78 = param_4;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar5;
      func_0x00010c15bbe0(puVar3);
      _objc_release(param_7);
    }
    else {
      lVar4 = param_8;
      func_0x00010c08fa60();
      if (lVar4 != 0) {
        iVar1 = (int)*(undefined8 *)(param_1 + 0x80);
        func_0x00010bf1f440();
        if (iVar1 != 0) {
          param_7 = *(undefined **)(param_1 + 0x40);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
          uStack_80 = param_4;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c15d840(param_7);
          _objc_release(puVar3);
          _objc_release(param_7);
        }
      }
      puVar3 = param_1;
      func_0x00010be38060();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = *(undefined **)(param_1 + 0x38);
      func_0x00010c269d40(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_88 = param_4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar3;
      func_0x00010c15ccc0(puVar2);
    }
  }
  else {
    puVar3 = param_3;
    func_0x00010c271a60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = *(undefined **)(param_1 + 0x38);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = param_4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x00010c15b780(puVar2);
  }
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar5 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uStack_d0 = param_10;
  pcStack_98 = FUN_1069cc444;
  puStack_e0 = puVar3;
  puStack_d8 = param_7;
  lStack_c8 = param_8;
  uStack_c0 = param_6;
  uStack_b8 = param_5;
  uStack_b0 = param_4;
  puStack_a8 = param_3;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  _objc_retain(uVar10);
  puStack_f8 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x2020000000;
  uStack_e8 = 0xffffffffffffffff;
  uVar7 = uVar10;
  func_0x00010bf89e00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010c267b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0480();
  _objc_release(uVar6);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(puVar5 + 0x100);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar9;
  func_0x00010c271a60(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06c020(uVar7);
  _objc_release(puVar3);
  _objc_release(uVar7);
  puVar3 = PTR_PTR_1126cf988;
  _objc_alloc(PTR_PTR_1126cf988);
  puVar5 = puVar9;
  func_0x00010c0f0a00(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar9;
  func_0x00010c2540c0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar9;
  func_0x00010c27dd80(puVar9);
  func_0x00010916771c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032ca0(puVar3);
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_release(puVar5);
  __Block_object_dispose(&uStack_100,8);
  _objc_release(uVar10);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1069cc444; end: 1069cc64b; -[SCChatInputStickerPlugin _includedStickerDataModelFromSticker:analyticsDataModel:] */

void FUN_1069cc444(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0xffffffffffffffff;
  uVar1 = param_4;
  func_0x00010bf89e00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c267b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0480();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c271a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06c020(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126cf988;
  _objc_alloc(PTR_PTR_1126cf988);
  uVar1 = param_3;
  func_0x00010c0f0a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2540c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c27dd80(param_3);
  func_0x00010916771c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032ca0(puVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1069cc64c; end: 1069cc67b;  */

void FUN_1069cc64c(long param_1,undefined8 param_2)

{
  func_0x00010c247520();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 1069cc67c; end: 1069cc847; -[SCChatInputStickerPlugin _sendStoryReplySticker:conversationId:storyMetadata:analyticsDataModel:source:completionHandler:] */

void FUN_1069cc67c(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  uVar1 = param_3;
  func_0x000107d5ecec(param_3,*(undefined8 *)(param_1 + 0x1d8),param_7);
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c27dd80();
    if (0xc < uVar1) goto LAB_1069cc7bc;
    if ((1L << (uVar1 & 0x3f) & 0x1fdcU) == 0) {
      if (uVar1 != 1) goto LAB_1069cc7bc;
      uVar1 = param_3;
      func_0x00010c2540c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x000109164214();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      puVar4 = PTR_PTR_1126b6078;
      func_0x00010bf8e940(PTR_PTR_1126b6078);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar3 = param_1;
      func_0x00010be38060(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b6078;
      func_0x00010bfebcc0(PTR_PTR_1126b6078);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    uVar3 = param_3;
    func_0x00010c271a60(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b6078;
    func_0x00010bf5cd80(PTR_PTR_1126b6078);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15cd40();
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(uVar3);
LAB_1069cc7bc:
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069cc848; end: 1069cc87f; -[SCChatInputStickerPlugin _isChat] */

bool FUN_1069cc848(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x00010bf4f080(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 == 0;
}



/* Entry: 1069cc880; end: 1069cc897; -[SCChatInputStickerPlugin _isContext] */

uint FUN_1069cc880(uint param_1)

{
  func_0x00010be3ed00();
  return param_1 ^ 1;
}



/* Entry: 1069cc898; end: 1069cc8af; -[SCChatInputStickerPlugin _isChatAndQSIRotationEnabled] */

long FUN_1069cc898(long param_1)

{
  if (*(char *)(param_1 + 0x1b8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be3ed10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isChat_11256d4e0);
    return param_1;
  }
  return 0;
}



/* Entry: 1069cc8b0; end: 1069cc8bf; -[SCChatInputStickerPlugin _currentStickersSuggestionSource:] */

undefined8 FUN_1069cc8b0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1069cc8c0; end: 1069cca4f; -[SCChatInputStickerPlugin _updateBitmojiPresentationModelProvider] */

void FUN_1069cc8c0(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  puVar2 = PTR_PTR_1126ba808;
  _objc_alloc();
  func_0x00010bff7e20();
  uVar7 = *(undefined8 *)(param_1 + 0x150);
  *(undefined **)(param_1 + 0x150) = puVar2;
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x150);
  func_0x00010bdf6740(param_1);
  func_0x00010c283980(uVar7);
  lVar3 = *(long *)(param_1 + 0x1c8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c088c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar4;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar5 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x150);
    lVar3 = lVar4;
    func_0x00010bf1bae0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c286080(uVar7);
    _objc_release(lVar5);
    _objc_release(lVar3);
  }
  puVar2 = PTR_PTR_1126bb1d8;
  uVar8 = *(ulong *)(param_1 + 0x148);
  _objc_retain(uVar8);
  _objc_opt_class(puVar2);
  uVar6 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar2);
  uVar1 = uVar8;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar8);
  if (uVar1 != 0) {
    func_0x00010c1e12a0(uVar8);
    _objc_retain(uVar8);
    uVar7 = *(undefined8 *)(param_1 + 0x148);
    *(ulong *)(param_1 + 0x148) = uVar1;
    _objc_release(uVar7);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1069cca50; end: 1069ccce7; -[SCChatInputStickerPlugin _performLocalStickerSearchWithInputText:] */

void FUN_1069cca50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x1a0) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00();
    if ((int)puVar1 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c078c00();
      if ((int)puVar1 == 0) goto LAB_1069ccc94;
    }
  }
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a8) = param_3;
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x158);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if ((lVar3 == 0) || (lVar3 = *(long *)(param_1 + 0x138), _objc_release(), lVar3 == 0)) {
    func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x138));
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x138);
    *(undefined **)(param_1 + 0x138) = puVar4;
    _objc_release(uVar2);
    func_0x00010bf57500(*(undefined8 *)(param_1 + 0x158));
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_initWeak(auStack_58,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x158);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c1540e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = puVar1;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1069ccce8;
    puStack_68 = &UNK_11092e5a8;
    _objc_copyWeak(auStack_60,auStack_58);
    uVar6 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  if (*(long *)(param_1 + 0x160) != 0) {
    _dispatch_block_cancel();
    uVar2 = *(undefined8 *)(param_1 + 0x160);
    *(undefined8 *)(param_1 + 0x160) = 0;
    _objc_release(uVar2);
  }
  _objc_initWeak(auStack_58,param_1);
  puStack_b0 = puVar1;
  dVar7 = 1.60807493534087e-314;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x1069ccd68;
  puStack_98 = &UNK_110841fb0;
  _objc_copyWeak(auStack_88,auStack_58);
  _objc_retain(param_3);
  uVar2 = 0;
  uStack_90 = param_3;
  func_0x0001008553e8(0,&puStack_b0);
  uVar6 = *(undefined8 *)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x160) = uVar2;
  _objc_release(uVar6);
  uVar2 = *(undefined8 *)(param_1 + 0x158);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1538a0();
  func_0x000100c749e0((float)dVar7,"APPSTORE",*(undefined8 *)(param_1 + 0x160));
  _objc_release(uVar2);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_58);
LAB_1069ccc94:
  _objc_release(param_3);
  return;
}



/* Entry: 1069ccce8; end: 1069ccdc3;  */

void FUN_1069ccce8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0dd560(param_2);
  uVar1 = param_2;
  func_0x00010c154520(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be9c8a0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069ccdc4; end: 1069ccfff; -[SCChatInputStickerPlugin _searchResultsFinishedNotifyResults:searchTerm:] */

void FUN_1069ccdc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar10 = *(long *)(param_1 + 0x1c8);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar10;
  func_0x00010c088c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  lVar10 = lVar1;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar10;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar10);
  if (lVar2 != 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x150);
    lVar10 = lVar1;
    func_0x00010bf1bae0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar10;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c286080(uVar11);
    _objc_release(lVar2);
    _objc_release(lVar10);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x158);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar3;
  func_0x00010bf376a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar11;
  func_0x00010c0d3c80();
  _objc_release(uVar11);
  _objc_release(uVar3);
  func_0x00010bf529e0(uVar4);
  lVar10 = param_1;
  func_0x00010be16340(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar5 = *(ulong *)(param_1 + 0x170);
  func_0x00010c246b20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bede420(param_1);
  _objc_release(uVar6);
  func_0x00010c256880(*(undefined8 *)(param_1 + 0x198));
  uVar6 = param_1 + 0x298;
  _objc_loadWeakRetained();
  uVar7 = uVar6;
  func_0x00010bf5e780();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126cf990;
  _objc_opt_class(PTR_PTR_1126cf990);
  uVar9 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  lVar2 = param_1;
  func_0x00010be3ed20();
  if (((int)lVar2 != 0) && (uVar6 = uVar5, func_0x00010bf529e0(), 1 < uVar6)) {
    if (*(long *)(param_1 + 0x198) != 0 && (uVar9 & 1) == 0) {
      func_0x00010c250440();
    }
  }
  _objc_release(uVar5);
  _objc_release(lVar10);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069cd000; end: 1069cd15f; -[SCChatInputStickerPlugin _filterSearchStickers:searchTerm:maxResults:] */

void FUN_1069cd000(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0xb0);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x1c8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c088c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010bf1bae0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126cf998;
  uVar2 = uVar6;
  func_0x00010bf12ea0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad7c0(puVar5,param_2,param_3,param_4,param_5,uVar2,uVar4,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1069cd160; end: 1069cd1ab; -[SCChatInputStickerPlugin _resetLocalSearchResults] */

void FUN_1069cd160(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be72040(param_1,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  func_0x00010be06900(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069cd1ac; end: 1069cd34b; -[SCChatInputStickerPlugin _observeConversationIdAndActiveConversationInformation:] */

void FUN_1069cd1ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
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
  puVar1 = auStack_68;
  _objc_initWeak(puVar1,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0ec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1069cd34c;
  puStack_78 = &UNK_11084eff0;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_copyWeak(auStack_98,auStack_68);
  uVar2 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 1069cd34c; end: 1069cd3db;  */

void FUN_1069cd34c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebc3c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069cd3dc; end: 1069cd453; -[SCChatInputStickerPlugin _sinkConversationId:] */

void FUN_1069cd3dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1069cd454;
  puStack_20 = &UNK_110904f68;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1069cd49c;
  puStack_48 = &UNK_1108450c8;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bf0a0(param_3,param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 1069cd454; end: 1069cd49b;  */

void FUN_1069cd454(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2564c0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c256890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x198),PTR_s_stopRotation_112673448);
  return;
}



/* Entry: 1069cd49c; end: 1069cd4a3;  */

void FUN_1069cd49c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be92a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__resetDrawerOnConversationChange_112582440);
  return;
}



/* Entry: 1069cd4a4; end: 1069cd4f3; -[SCChatInputStickerPlugin _handleConversationInformation:] */

void FUN_1069cd4a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x150);
  func_0x00010bdf6740(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c283990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_updateAutosuggestContext__11267e888,param_1);
  return;
}



/* Entry: 1069cd4f4; end: 1069cd543; -[SCChatInputStickerPlugin _resetDrawerOnConversationChange] */

void FUN_1069cd4f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bea1a00(param_1,param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  _objc_release(uVar1);
  func_0x00010bede420(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be72050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__performLocalStickerSearchWithIn_11257a1b0,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}


