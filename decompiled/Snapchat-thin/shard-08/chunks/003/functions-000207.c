/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105fa0314; end: 105fa0347; -[SCCMapDropShareView initWithViewModel:componentContext:runtime:] */

void FUN_105fa0314(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee8d0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105fa0348; end: 105fa0397; -[SCCMapDropShareView setViewModel:] */

void FUN_105fa0348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fa0398; end: 105fa03db; -[SCCMapDropShareView viewModel] */

void FUN_105fa0398(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fa03dc; end: 105fa0417; -[SCCMapDropShareDropDisplayInfo initWithName:bitmojiAvatarId:] */

void FUN_105fa03dc(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105fa04c8(PTR_PTR_1126ee8d8);
  func_0x000105fa04e0(auStack_20);
  return;
}



/* Entry: 105fa0418; end: 105fa042b; +[SCCMapDropShareDropDisplayInfo valdiMarshallableObjectDescriptor] */

void FUN_105fa0418(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110901c48;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fa042c; end: 105fa0463; -[SCCMapDropShareMapDropShareContext initWithPinDisplayInfoObservable:grpcServiceObservable:] */

void FUN_105fa042c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105fa04c8(PTR_PTR_1126ee8e0);
  func_0x000105fa04e0(auStack_20);
  return;
}



/* Entry: 105fa0464; end: 105fa047f; +[SCCMapDropShareMapDropShareContext valdiMarshallableObjectDescriptor] */

void FUN_105fa0464(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110901d20;
  param_1[1] = &PTR_s_SCBridgeObservable_110901db0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fa0480; end: 105fa04b3; -[SCCMapDropShareMapDropShareViewModel initWithLatitude:longitude:] */

void FUN_105fa0480(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105fa04c8(PTR_PTR_1126ee8e8);
  func_0x000105fa04e0(auStack_20);
  return;
}



/* Entry: 105fa04b4; end: 105fa04e7; +[SCCMapDropShareMapDropShareViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fa04b4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_latitude_110901dd0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fa04e8; end: 105fa04f3; +[SCCMapReactionChatCardView componentPath] */

undefined ** FUN_105fa04e8(void)

{
  return &PTR____CFConstantStringClassReference_110e34978;
}



/* Entry: 105fa04f4; end: 105fa0513; -[SCCMapReactionChatCardView initWithViewModel:componentContext:runtime:] */

void FUN_105fa04f4(void)

{
  FUN_105fa06b0(PTR_PTR_1126ee8f0);
  return;
}



/* Entry: 105fa0514; end: 105fa0547; -[SCCMapReactionChatCardView setViewModel:] */

void FUN_105fa0514(void)

{
  func_0x000105fa06c4();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fa06d4();
  func_0x000105fa06ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105fa0548; end: 105fa057f; -[SCCMapReactionChatCardView viewModel] */

void FUN_105fa0548(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fa06e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fa0580; end: 105fa058b; +[SCCMapReactionEmojiPickerView componentPath] */

undefined ** FUN_105fa0580(void)

{
  return &PTR____CFConstantStringClassReference_110e34998;
}



/* Entry: 105fa058c; end: 105fa05ab; -[SCCMapReactionEmojiPickerView initWithViewModel:componentContext:runtime:] */

void FUN_105fa058c(void)

{
  FUN_105fa06b0(PTR_PTR_1126ee8f8);
  return;
}



/* Entry: 105fa05ac; end: 105fa05df; -[SCCMapReactionEmojiPickerView setViewModel:] */

void FUN_105fa05ac(void)

{
  func_0x000105fa06c4();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fa06d4();
  func_0x000105fa06ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105fa05e0; end: 105fa0617; -[SCCMapReactionEmojiPickerView viewModel] */

void FUN_105fa05e0(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fa06e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fa0618; end: 105fa0623; +[SCCNearMeReactionChatCardView componentPath] */

undefined ** FUN_105fa0618(void)

{
  return &PTR____CFConstantStringClassReference_110e349b8;
}



/* Entry: 105fa0624; end: 105fa0643; -[SCCNearMeReactionChatCardView initWithViewModel:componentContext:runtime:] */

void FUN_105fa0624(void)

{
  FUN_105fa06b0(PTR_PTR_1126ee900);
  return;
}



/* Entry: 105fa0644; end: 105fa0677; -[SCCNearMeReactionChatCardView setViewModel:] */

void FUN_105fa0644(void)

{
  func_0x000105fa06c4();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fa06d4();
  func_0x000105fa06ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105fa0678; end: 105fa06af; -[SCCNearMeReactionChatCardView viewModel] */

void FUN_105fa0678(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fa06e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fa06b0; end: 105fa070b;  */

void FUN_105fa06b0(undefined8 param_1,undefined8 param_2)

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



/* Entry: 105fa070c; end: 105fa0717; +[SCCMapMapShareChatCardView componentPath] */

undefined ** FUN_105fa070c(void)

{
  return &PTR____CFConstantStringClassReference_110e349d8;
}



/* Entry: 105fa0718; end: 105fa074b; -[SCCMapMapShareChatCardView initWithViewModel:componentContext:runtime:] */

void FUN_105fa0718(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee908;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105fa074c; end: 105fa079b; -[SCCMapMapShareChatCardView setViewModel:] */

void FUN_105fa074c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fa079c; end: 105fa07df; -[SCCMapMapShareChatCardView viewModel] */

void FUN_105fa079c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fa07e0; end: 105fa087f; -[SCCMapMapShareChatCardContext initWithOnThumbnailTap:onLocationTextTap:] */

undefined8 *
FUN_105fa07e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  puStack_38 = PTR_PTR_1126ee910;
  puVar2 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 105fa0880; end: 105fa089f; +[SCCMapMapShareChatCardContext valdiMarshallableObjectDescriptor] */

void FUN_105fa0880(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110901e30;
  param_1[1] = &PTR_DAT_110901ec0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fa08a0; end: 105fa08df; -[SCCMapMapShareChatCardPromiseData initWithThumbnailUrl:location:sentDuration:isVideo:] */

void FUN_105fa08a0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee918;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105fa08e0; end: 105fa08ef; +[SCCMapMapShareChatCardPromiseData valdiMarshallableObjectDescriptor] */

void FUN_105fa08e0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110901ed8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fa08f0; end: 105fa0923; -[SCCMapMapShareChatCardViewModel init] */

void FUN_105fa08f0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee920;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 105fa0924; end: 105fa093f; +[SCCMapMapShareChatCardViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fa0924(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10ddd1c48;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fa0940; end: 105fa0b9b; -[SCPlaceShareMessagePlugin initWithPlaceProfileDataFetcher:userLocationHelpers:placeFavoritesManager:placeDiscoveryDataFetcher:mapStoryPreviewFetcher:placeStoryPlayerVendor:pageLauncher:blizzardLogger:circumstanceEngine:messagingMessageProvider:] */

undefined8 *
FUN_105fa0940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

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
  puStack_68 = PTR_PTR_1126ee928;
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
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
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



/* Entry: 105fa0b9c; end: 105fa0cdb; -[SCPlaceShareMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_105fa0b9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c0cbe00(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0fd4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar2 = param_1;
    func_0x00010bde8380(param_1,param_2,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee98e0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c67d8;
    _objc_alloc(PTR_PTR_1126c67d8);
    puVar5 = PTR_PTR_1126b2138;
    func_0x00010bf44480(PTR_PTR_1126b2138);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000660(puVar6,param_2,puVar5,param_1,lVar2);
    _objc_release(puVar5);
    _objc_release(param_1);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105fa0cdc; end: 105fa0d0b; -[SCPlaceShareMessagePlugin identifier] */

void FUN_105fa0cdc(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110eebaf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110eebaf8);
  return;
}



/* Entry: 105fa0d0c; end: 105fa0d13; -[SCPlaceShareMessagePlugin pluginType] */

undefined8 FUN_105fa0d0c(void)

{
  return 0;
}



/* Entry: 105fa0d14; end: 105fa0d57; -[SCPlaceShareMessagePlugin dismissPresentedView] */

void FUN_105fa0d14(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf839e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fa0d58; end: 105fa0d73; -[SCPlaceShareMessagePlugin fullMapPageLaunchDidEnd:] */

void FUN_105fa0d58(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x68) != param_3) {
    return;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105fa0d74; end: 105fa11c7; -[SCPlaceShareMessagePlugin _contextForMessage:wrappedMessage:] */

void FUN_105fa0d74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  uVar9 = param_3;
  func_0x00010c15de20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar4 = uVar3;
  func_0x00010c0720c0();
  func_0x00010be89a00(param_1);
  puVar5 = PTR_PTR_1126b2148;
  _objc_alloc_init(PTR_PTR_1126b2148);
  puVar6 = puVar1;
  func_0x00010c272120(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179680(puVar5);
  _objc_release(puVar6);
  puVar6 = puVar2;
  func_0x00010c272120(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dbee0(puVar5);
  _objc_release(puVar6);
  lVar7 = param_1;
  func_0x00010bdf1600();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc2a0(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126ae6b8;
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1804c0(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(uVar9);
  lVar10 = param_1;
  func_0x00010be20b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb5a0(puVar5);
  _objc_release(lVar10);
  func_0x00010c171b20(puVar5);
  uVar9 = param_3;
  func_0x00010c0cb200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf026e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar9 = param_4;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar9;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar15;
  func_0x00010c0fd4c0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c0fd0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar15);
  _objc_release(uVar9);
  uVar9 = 7;
  if ((int)uVar4 == 0) {
    uVar9 = 3;
  }
  puVar6 = PTR_PTR_1126b2158;
  _objc_alloc_init(PTR_PTR_1126b2158);
  func_0x00010c207140();
  uVar15 = 0;
  func_0x000100c6f294(0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207200(puVar6);
  _objc_release(uVar15);
  func_0x00010ba1c764(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dce20(puVar6);
  _objc_release(uVar9);
  func_0x00010c1dc280(puVar5);
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(uVar14);
  _objc_retain(uVar11);
  uStack_70 = (undefined1)uVar4;
  func_0x00010c1a52a0(puVar5);
  _objc_release(uVar11);
  _objc_release(uVar14);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar6);
  _objc_release(uVar14);
  _objc_release(uVar11);
  _objc_release(lVar7);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105fa11c8; end: 105fa11ff;  */

void FUN_105fa11c8(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be47ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fa1200; end: 105fa14f7; -[SCPlaceShareMessagePlugin _registerMessageVisibilityObservableForMessage:isSenderMyAI:placeCardDataSubject:placeAnnotationDataSubject:] */

void FUN_105fa1200(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar7 = *(undefined8 *)(param_1 + 0x88);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105fa14f8;
  puStack_88 = &UNK_1108fe608;
  _objc_retain(param_3);
  uStack_80 = param_3;
  func_0x00010bfad7a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  uVar7 = param_3;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0fd4c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0fd0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar7);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e349f8;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e34a18;
  }
  _objc_retain(ppuVar1);
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  _objc_initWeak(auStack_c8,param_1);
  uVar7 = uVar2;
  func_0x00010bf870a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_d0,auStack_c8);
  _objc_retain(uVar6);
  _objc_retain(ppuVar1);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar3 = uVar7;
  func_0x00010c25ff60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(ppuVar1);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_c8);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(ppuVar1);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uStack_80);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105fa14f8; end: 105fa155f;  */

undefined8 FUN_105fa14f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf490e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x0001070b30c4(param_2,uVar2);
  _objc_release(param_2);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 105fa1560; end: 105fa1663;  */

void FUN_105fa1560(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfee140(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070b31f8();
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fa1664; end: 105fa1673;  */

void FUN_105fa1664(long param_1,undefined1 param_2)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 105fa1674; end: 105fa16ab; -[SCPlaceShareMessagePlugin _createPlaceCardTweaks] */

void FUN_105fa1674(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c6a08;
  _objc_alloc_init(PTR_PTR_1126c6a08);
  func_0x00010c201a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fa16ac; end: 105fa16e3; -[SCPlaceShareMessagePlugin _viewModelForMessage:] */

void FUN_105fa16ac(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2140;
  _objc_alloc_init(PTR_PTR_1126b2140);
  func_0x00010c19d8e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fa16e4; end: 105fa1933; -[SCPlaceShareMessagePlugin _launchMapScopeForPlaceID:chatId:isSenderMyAI:] */

void FUN_105fa16e4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5
                  )

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c08fa60();
  puVar4 = PTR_PTR_1126b5c58;
  if (lVar2 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e349f8;
    if (param_5 == 0) {
      ppuVar1 = (undefined **)0x0;
    }
    _objc_retain(ppuVar1);
    uVar3 = 0;
    func_0x000100c6f294(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fd700(*(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98,
                        *(undefined8 *)(PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8),
                        *(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98,
                        *(undefined8 *)(PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126b5c50;
    _objc_alloc();
    func_0x00010c031b80();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    uStack_68 = 0x105fa1868;
    puStack_60 = &UNK_110848ba8;
    puStack_58 = puVar4;
    puStack_50 = puVar5;
    uStack_48 = param_1;
    _objc_retain();
    _objc_retain(puVar4);
    func_0x0001000d76cc("APPSTORE",&puStack_78);
    _objc_release(puStack_50);
    _objc_release(puStack_58);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(ppuVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105fa1934; end: 105fa1993; -[SCPlaceShareMessagePlugin _getFormattedDistanceToLocationWithLat:lng:] */

void FUN_105fa1934(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc5c20(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105fa1994; end: 105fa1a23; -[SCPlaceShareMessagePlugin _getNativeVenueStoryPlayer] */

void FUN_105fa1994(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + 0x80;
    _objc_loadWeakRetained(lVar4);
    uVar2 = uVar1;
    func_0x00010c0b75a0(uVar1,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    _objc_release(uVar3);
    _objc_release(lVar4);
    _objc_release(uVar1);
    lVar4 = *(long *)(param_1 + 0x38);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105fa1a24; end: 105fa1aa7; -[SCPlaceShareMessagePlugin _handlePlaceShareMessageDataFetchForPlaceID:sourceSpecific:placeCardDataSubject:placeAnnotationDataSubject:completion:] */

void FUN_105fa1a24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010be131c0(param_1,param_2,param_3,param_4,param_5,param_7);
  func_0x00010be13100(param_1,param_2,param_3,param_6);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fa1aa8; end: 105fa1c27; -[SCPlaceShareMessagePlugin _fetchPlaceProfileDataForPlaceID:sourceSpecific:placeCardDataSubject:completion:] */

void FUN_105fa1aa8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bfa7a60(uVar2);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105fa1c28; end: 105fa1d4f;  */

void FUN_105fa1c28(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (param_4 != 0)) {
    puVar3 = PTR_PTR_1126b2160;
    _objc_alloc_init(PTR_PTR_1126b2160);
    func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x28));
    (**(code **)(*(long *)(param_2 + 0x30) + 0x10))(*(long *)(param_2 + 0x30),0);
  }
  else {
    puVar1 = (undefined *)(param_2 + 0x38);
    _objc_loadWeakRetained(puVar1);
    func_0x00010c08aca0(param_3);
    uVar4 = param_1;
    func_0x00010c09abe0(param_3);
    puVar3 = puVar1;
    func_0x00010be1f340(param_1,uVar4,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    lVar2 = param_3;
    func_0x0001068779ec(param_3,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x28));
    (**(code **)(*(long *)(param_2 + 0x30) + 0x10))(*(long *)(param_2 + 0x30),1);
    param_2 = param_2 + 0x38;
    _objc_loadWeakRetained(param_2);
    func_0x00010be131e0();
    _objc_release(param_2);
    _objc_release(lVar2);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fa1d50; end: 105fa1e87; -[SCPlaceShareMessagePlugin _fetchPlaceAnnotationsDataForPlaceID:placeAnnotationDataSubject:] */

void FUN_105fa1d50(long param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010c08fa60();
  if (puVar1 != (undefined *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_4);
    puVar3 = puVar1;
    func_0x00010bfa9360(uVar2);
    _objc_release(puVar1);
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  if ((param_2 != 0) && (puVar3 == (undefined *)0x0)) {
    uVar2 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010687710c(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_3 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105fa1e88; end: 105fa1ed3;  */

void FUN_105fa1e88(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (param_3 == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010687710c(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105fa1ed4; end: 105fa2077; -[SCPlaceShareMessagePlugin _fetchPlaceStoryPreviewForPlaceID:placeCardData:placeCardDataSubject:] */

void FUN_105fa1ed4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x105fa1fe4;
    puStack_50 = &UNK_110901fd0;
    _objc_retain(param_3);
    lStack_48 = param_3;
    _objc_retain(param_4);
    uStack_40 = param_4;
    _objc_retain(param_5);
    uStack_38 = param_5;
    func_0x00010bfa9680(uVar2,param_2,param_3,0,0,&puStack_68);
    _objc_release(uVar2);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
    _objc_release(lStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105fa2078; end: 105fa207f; -[SCPlaceShareMessagePlugin activeConversationIdObservable] */

undefined8 FUN_105fa2078(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 105fa2080; end: 105fa20af; -[SCPlaceShareMessagePlugin setActiveConversationIdObservable:] */

void FUN_105fa2080(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fa20b0; end: 105fa20b7; -[SCPlaceShareMessagePlugin activeConversationInformationObservable] */

undefined8 FUN_105fa20b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 105fa20b8; end: 105fa20e7; -[SCPlaceShareMessagePlugin setActiveConversationInformationObservable:] */

void FUN_105fa20b8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105fa20e8; end: 105fa20ff; -[SCPlaceShareMessagePlugin uiContainer] */

void FUN_105fa20e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fa2100; end: 105fa210b; -[SCPlaceShareMessagePlugin setUiContainer:] */

void FUN_105fa2100(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 105fa210c; end: 105fa2113; -[SCPlaceShareMessagePlugin messageViewEvents] */

undefined8 FUN_105fa210c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 105fa2114; end: 105fa2143; -[SCPlaceShareMessagePlugin setMessageViewEvents:] */

void FUN_105fa2114(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fa2144; end: 105fa2223; -[SCPlaceShareMessagePlugin .cxx_destruct] */

void FUN_105fa2144(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_destroyWeak(param_1 + 0x80);
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



/* Entry: 105fa2224; end: 105fa222f; +[SCCChatMemoriesStoryView componentPath] */

undefined ** FUN_105fa2224(void)

{
  return &PTR____CFConstantStringClassReference_110e34a38;
}



/* Entry: 105fa2230; end: 105fa2263; -[SCCChatMemoriesStoryView initWithViewModel:componentContext:runtime:] */

void FUN_105fa2230(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee930;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105fa2264; end: 105fa22b3; -[SCCChatMemoriesStoryView setViewModel:] */

void FUN_105fa2264(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fa22b4; end: 105fa22f7; -[SCCChatMemoriesStoryView viewModel] */

void FUN_105fa22b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fa22f8; end: 105fa22ff; -[SCCChatMemoriesStorySource__Enum init] */

void FUN_105fa22f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 105fa2300; end: 105fa2323; -[SCCChatMemoriesStoryContext init] */

void FUN_105fa2300(void)

{
  func_0x000105fa2370(PTR_PTR_1126ee938);
  return;
}



/* Entry: 105fa2324; end: 105fa2337; +[SCCChatMemoriesStoryContext valdiMarshallableObjectDescriptor] */

void FUN_105fa2324(undefined8 *param_1)

{
  *param_1 = &PTR_s_onTap_110902000;
  param_1[1] = &PTR_DAT_110902090;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fa2338; end: 105fa235b; -[SCCChatMemoriesStoryViewModel init] */

void FUN_105fa2338(void)

{
  func_0x000105fa2370(PTR_PTR_1126ee940);
  return;
}



/* Entry: 105fa235c; end: 105fa2393; +[SCCChatMemoriesStoryViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fa235c(undefined8 *param_1)

{
  *param_1 = &PTR_s_title_1109020b8;
  param_1[1] = &PTR_DAT_110902118;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fa2394; end: 105fa24a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fa2394(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110e35718;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e35638;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e35658;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110e35598;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110e355f8;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110e355b8;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e355d8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_50,7);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
      ___stack_chk_fail();
      _objc_initWeak(auStack_e8,puVar1);
      puVar2 = PTR_PTR_1126ae720;
      _objc_copyWeak(auStack_f0,auStack_e8);
      func_0x00010bf11fe0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c6a10;
      _objc_alloc(PTR_PTR_1126c6a10);
      func_0x00010c02b520();
      uVar5 = 0;
      if (puVar1 != (undefined *)0x0) {
        uVar5 = *(undefined8 *)(puVar1 + _DAT_11273bcc4);
      }
      _objc_retain(uVar5);
      func_0x00010bf9d660(uVar5);
      _objc_release(uVar5);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_f0);
      _objc_destroyWeak(auStack_e8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fa24a8; end: 105fa25bf; -[SCMessageAccessoryPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fa24a8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c6a10;
  _objc_alloc(PTR_PTR_1126c6a10);
  func_0x00010c02b520();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273bcc4);
  }
  _objc_retain(uVar3);
  func_0x00010bf9d660(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105fa25c0; end: 105fa25ff;  */

void FUN_105fa25c0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5fda0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105fa2600; end: 105fa284b; -[SCMessageAccessoryPluginEntryPoint _messageAccessoryPluginManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fa2600(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  
  if (param_1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = (undefined *)(param_1 + _DAT_11273bcc0);
    _objc_loadWeakRetained();
  }
  puVar1 = puVar9;
  func_0x00010bf22660();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puVar5 = puVar1;
  }
  _objc_retain(puVar5);
  _objc_release(puVar1);
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_11273bcb4;
    _objc_loadWeakRetained(lVar10);
  }
  lVar2 = lVar10;
  func_0x00010bf0c120(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c11e0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar10);
  puVar5 = PTR_PTR_1126c6a18;
  _objc_alloc(PTR_PTR_1126c6a18);
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  FUN_105fa2394();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x000105fa241c();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_11273bcbc;
    _objc_loadWeakRetained(lVar10);
  }
  lVar3 = lVar10;
  func_0x00010bf507a0(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11273bcb8;
    _objc_loadWeakRetained(lVar2);
  }
  lVar8 = lVar2;
  func_0x00010bf50a60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0376c0(puVar5,param_2,puVar1,puVar6,puVar7,lVar3,lVar8,lVar4);
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(lVar4);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105fa284c; end: 105fa28b7; -[SCMessageAccessoryPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fa284c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273bcc4,0);
  _objc_destroyWeak(param_1 + _DAT_11273bcc0);
  _objc_destroyWeak(param_1 + _DAT_11273bcbc);
  _objc_destroyWeak(param_1 + _DAT_11273bcb8);
  _objc_destroyWeak(param_1 + _DAT_11273bcb4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273bcb0);
  return;
}



/* Entry: 105fa28b8; end: 105fa2ad3; -[SCMessageAccessoryPluginManager initWithPlugins:prioritizedCtaPluginIdentifiers:orderedBelowMessagePluginIdentifiers:conversationParticipantProvider:conversationUpdatesPublisher:queue:] */

undefined8 *
FUN_105fa28b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126ee948;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    _objc_copyWeak(auStack_80,auStack_78);
    uVar2 = param_3;
    func_0x00010c25ff60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105fa2ad4; end: 105fa2b43;  */

void FUN_105fa2ad4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bf00560(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be89c80(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fa2b44; end: 105fa2b7b; -[SCMessageAccessoryPluginManager setMessageRenderingPluginManager:] */

void FUN_105fa2b44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bea35b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setDependenciesForPlugins_112586710);
  return;
}



/* Entry: 105fa2b7c; end: 105fa2c0f; -[SCMessageAccessoryPluginManager setChatScrollHandler:uiContainer:presentingViewController:] */

void FUN_105fa2b7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_4;
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_storeWeak(param_1 + 0x60,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bea35b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setDependenciesForPlugins_112586710);
  return;
}



/* Entry: 105fa2c10; end: 105fa2d73; -[SCMessageAccessoryPluginManager ctaAccessoryForMessage:] */

void FUN_105fa2c10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf5d3c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105fa2d74;
  puStack_68 = &UNK_1108a9ea0;
  lStack_60 = lVar1;
  _objc_retain(param_3);
  uStack_58 = param_3;
  func_0x000100504554(lVar5,&puStack_80);
  lVar2 = lVar5;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010be5fea0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf50280(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bde8c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010bdf6440(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
  _objc_release(lVar5);
  _objc_release(uStack_58);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105fa2d74; end: 105fa2def;  */

void FUN_105fa2d74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06c520();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    _objc_retain(param_2);
    uVar2 = param_2;
  }
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105fa2df0; end: 105fa2f7b; -[SCMessageAccessoryPluginManager belowMessageAccessoriesForMessage:] */

void FUN_105fa2df0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bf194a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  lVar5 = *(long *)(param_1 + 0x10);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105fa2f7c;
  puStack_78 = &UNK_1108a9ea0;
  lStack_70 = lVar2;
  _objc_retain(param_3);
  uStack_68 = param_3;
  func_0x000100504554(lVar5,&puStack_90);
  lVar6 = lVar5;
  func_0x00010bf529e0();
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010be5fea0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010bf50280(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bde8c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_1 + 0x70);
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_105fa2ff8;
    puStack_b8 = &UNK_110902160;
    lStack_b0 = lVar2;
    lStack_a8 = lVar3;
    lStack_a0 = lVar4;
    uStack_98 = uVar7;
    _objc_retain(uVar7);
    lVar6 = lVar5;
    func_0x000100504554(lVar5,&puStack_d0);
    _objc_release(uVar7);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar5);
  _objc_release(uStack_68);
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 105fa2f7c; end: 105fa2ff7;  */

void FUN_105fa2f7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06c520();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    _objc_retain(param_2);
    uVar2 = param_2;
  }
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105fa2ff8; end: 105fa30f3;  */

void FUN_105fa2ff8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beed220();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  uVar4 = uVar3;
  func_0x00010c0b8600(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105fa30f4; end: 105fa31bf;  */

void FUN_105fa30f4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126c6a20;
    _objc_alloc(PTR_PTR_1126c6a20);
    lVar1 = param_2;
    func_0x00010c0ec5e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c037600(puVar3);
    _objc_release(lVar1);
  }
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c0ec800(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105fa31c0; end: 105fa31e7; -[SCMessageAccessoryPluginManager updatesObservable] */

void FUN_105fa31c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fa31e8; end: 105fa3217; -[SCMessageAccessoryPluginManager setConversationDisplayInformation:] */

void FUN_105fa31e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fa3218; end: 105fa331b; -[SCMessageAccessoryPluginManager setActionMenuPresenter:] */

void FUN_105fa3218(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010bf194a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105fa331c;
  puStack_60 = &UNK_110902190;
  _objc_retain(param_3);
  uStack_58 = param_3;
  func_0x00010bf97ce0(uVar2,param_2,&puStack_78);
  _objc_release(uVar2);
  func_0x00010bf5d3c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x105fa3388;
  puStack_88 = &UNK_110902190;
  uStack_80 = param_3;
  _objc_retain(param_3);
  func_0x00010bf97ce0(param_1,param_2,&puStack_a0);
  _objc_release(param_1);
  _objc_release(uStack_80);
  _objc_release(uStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fa331c; end: 105fa33f3;  */

void FUN_105fa331c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a5268);
  lVar1 = param_3;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  if (lVar1 != 0) {
    func_0x00010c161ba0(param_3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fa33f4; end: 105fa348f; -[SCMessageAccessoryPluginManager dismissPresentedViews] */

void FUN_105fa33f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf5d3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be03140(param_1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf194a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be03140(param_1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fa3490; end: 105fa3587; -[SCMessageAccessoryPluginManager _messageObservableForMessage:] */

void FUN_105fa3490(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf490e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c285a40(uVar6,param_2,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105fa3588; end: 105fa3667;  */

void FUN_105fa3588(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105fa3668;
  uStack_30 = 0x105fa3678;
  uStack_28 = 0;
  func_0x00010c0c10a0(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fa3668; end: 105fa367f;  */

void FUN_105fa3668(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105fa3680; end: 105fa36b7;  */

void FUN_105fa3680(long param_1,undefined8 param_2)

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



/* Entry: 105fa36b8; end: 105fa3877; -[SCMessageAccessoryPluginManager _conversationInformationObservableForConversationId:] */

void FUN_105fa36b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (uVar2 = param_3, func_0x00010c0720c0(param_3,param_2,*(undefined8 *)(param_1 + 0x30)),
     (int)uVar2 == 0)) {
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105fa3878;
    puStack_60 = &UNK_110902230;
    _objc_retain(param_3);
    uStack_58 = param_3;
    func_0x00010bfad7a0(uVar6,param_2,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf507e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = param_3;
    _objc_release(uVar5);
    puStack_a0 = puVar1;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105fa38c4;
    puStack_88 = &UNK_110902260;
    _objc_retain(param_3);
    uVar5 = uVar2;
    uStack_80 = param_3;
    func_0x00010bf41860(uVar2,param_2,uVar6,&puStack_a0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar5);
    _objc_release(uStack_80);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uStack_58);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar5);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105fa3878; end: 105fa38c3;  */

undefined8 FUN_105fa3878(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf50280(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(uVar1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105fa38c4; end: 105fa399f;  */

void FUN_105fa38c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c6a28;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c089600(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12f740(param_2);
  func_0x00010bf50920(param_2);
  func_0x00010c06e040(param_2);
  _objc_release(param_2);
  func_0x00010c004d20(puVar1);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


