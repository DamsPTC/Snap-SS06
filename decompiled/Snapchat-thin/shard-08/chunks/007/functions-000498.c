/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106557990; end: 106557a83;  */

byte FUN_106557990(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_2;
  func_0x00010c0c43a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf360();
  _objc_release(uVar2);
  bVar1 = *(byte *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  _objc_release(param_2);
  return (bVar1 ^ 0xff) & 1;
}



/* Entry: 106557a84; end: 106557a8b; -[SCChatTextContentViewModel shouldActOnLinkGesture] */

undefined8 FUN_106557a84(void)

{
  return 1;
}



/* Entry: 106557a8c; end: 106557a8f; -[SCChatTextContentViewModel mentionViewModels] */

void FUN_106557a8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ca830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_mentions_112610420);
  return;
}



/* Entry: 106557a90; end: 106557abf;  */

void FUN_106557a90(long param_1,undefined1 param_2)

{
  func_0x00010c065360();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 106557ac0; end: 106557bc7; +[SCBaseMediaThumbnailViewModelFactory createViewModelFromChatMediaContent:messageBodyType:isGroupConversation:isLockedConversation:senderUserId:senderDisplayName:recipientDisplayName:recipientUserId:contentDelivery:chatMediaFetcher:] */

void FUN_106557ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  puVar1 = PTR_PTR_1126b44a0;
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_x7);
  _objc_retain(in_x6);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c028f00();
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106557bc8; end: 106557bdf;  */

void FUN_106557bc8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106557be0; end: 106557d9b;  */

void FUN_106557be0(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 1;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc61a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108ef4364();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x50) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar1 = (undefined1)*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
  func_0x00010c076ea0();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x18) = uVar1;
  return;
}



/* Entry: 106557d9c; end: 106557f03;  */

void FUN_106557d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x24;
  long lVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c0ee920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  if (lVar5 == 0) {
    unaff_x24 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = unaff_x24;
    func_0x00010bfebfc0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(lVar2);
  uVar3 = *(undefined8 *)(lVar6 + 0x28);
  *(long *)(lVar6 + 0x28) = lVar2;
  _objc_release(uVar3);
  if (lVar5 == 0) {
    _objc_release(lVar2);
    _objc_release(unaff_x24);
  }
  _objc_release(lVar5);
  _objc_release(lVar1);
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) == 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = param_2;
    _objc_release(uVar3);
    lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = param_3;
    _objc_release(uVar3);
  }
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar3 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106557f04; end: 10655877b; -[SCChatMessageViewModelFactoryV3 initWithUserSession:polaroidViewTransitionResolver:pluginManager:accessoryPluginManager:graphene:valdiRuntimeProvider:circumstanceEngine:snapCountDownManager:groupsDataFetcher:snapchattersSynchronousDataFetcher:snapchattersDataTracking:connectivityMonitor:friendmojiPresenter:contentDelivery:mediaFetcher:valdiContextCreator:blizzardLogger:messagingExperimentService:chatEligibilityProvider:urlSpamProvider:normalizedSpamCheckURLFinder:notificationToMessageReadyLogger:viewModelGenerationPerformer:ctpItemViewService:plusFeatureGating:groupChatAddButtonViewModelProvider:groupsCustomColorsFetcher:chatMessageDisplayStateLogger:] */

undefined8 *
FUN_106557f04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
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
  _objc_retain();
  _objc_retain();
  _objc_retain(param_30);
  puStack_80 = PTR_PTR_1126f1b10;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar1 != (undefined8 *)0x0) {
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_10655877c;
    puStack_98 = &UNK_1108429c8;
    _objc_retain(param_20);
    uStack_90 = param_20;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0x20];
    puVar1[0x20] = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126ae720;
    puStack_d8 = puVar3;
    uStack_d0 = 0xc2000000;
    uStack_c8 = 0x1065587d8;
    puStack_c0 = &UNK_1108429c8;
    _objc_retain(param_20);
    uStack_b8 = param_20;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0x21];
    puVar1[0x21] = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126ae720;
    puStack_100 = puVar3;
    uStack_f8 = 0xc2000000;
    uStack_f0 = 0x106558834;
    puStack_e8 = &UNK_1108429c8;
    _objc_retain(param_20);
    uStack_e0 = param_20;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0x22];
    puVar1[0x22] = puVar2;
    _objc_release(uVar6);
    _objc_storeWeak(puVar1 + 0x25,param_3);
    _objc_retain(param_4);
    uVar6 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar6);
    _objc_retain(param_5);
    uVar6 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar6);
    _objc_retain(param_6);
    uVar6 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar6);
    _objc_retain(param_7);
    uVar6 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126cb7a0;
    _objc_opt_new();
    uVar6 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar6);
    _objc_retain(param_8);
    uVar6 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar6);
    _objc_retain(param_9);
    uVar6 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar6);
    _objc_retain(param_20);
    uVar6 = puVar1[0x13];
    puVar1[0x13] = param_20;
    _objc_release(uVar6);
    _objc_retain(param_10);
    uVar6 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar6);
    _objc_retain(param_11);
    uVar6 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar6);
    _objc_retain(param_12);
    uVar6 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar6);
    _objc_retain(param_13);
    uVar6 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar6);
    _objc_retain(param_14);
    uVar6 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar6);
    _objc_retain(param_15);
    uVar6 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar6);
    _objc_retain(param_16);
    uVar6 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar6);
    _objc_retain(param_17);
    uVar6 = puVar1[0x10];
    puVar1[0x10] = param_17;
    _objc_release(uVar6);
    _objc_retain(param_18);
    uVar6 = puVar1[0x11];
    puVar1[0x11] = param_18;
    _objc_release(uVar6);
    _objc_retain(param_19);
    uVar6 = puVar1[0x12];
    puVar1[0x12] = param_19;
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126c6cc0;
    _objc_alloc();
    uVar6 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c007820();
    uVar7 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar7);
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126cb7a8;
    _objc_opt_new();
    uVar6 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    _objc_release(uVar6);
    _objc_retain(param_21);
    uVar6 = puVar1[0x15];
    puVar1[0x15] = param_21;
    _objc_release(uVar6);
    _objc_retain(param_22);
    uVar6 = puVar1[0x16];
    puVar1[0x16] = param_22;
    _objc_release(uVar6);
    _objc_retain(param_23);
    uVar6 = puVar1[0x17];
    puVar1[0x17] = param_23;
    _objc_release(uVar6);
    _objc_retain(param_25);
    uVar6 = puVar1[0x1e];
    puVar1[0x1e] = param_25;
    _objc_release(uVar6);
    _objc_retain(param_26);
    uVar6 = puVar1[0x19];
    puVar1[0x19] = param_26;
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar6 = puVar1[0x1f];
    puVar1[0x1f] = puVar3;
    _objc_release(uVar6);
    _objc_retain(param_24);
    uVar6 = puVar1[0x18];
    puVar1[0x18] = param_24;
    _objc_release(uVar6);
    _objc_retain(param_27);
    uVar6 = puVar1[0x1a];
    puVar1[0x1a] = param_27;
    _objc_release(uVar6);
    _objc_retain(param_28);
    uVar6 = puVar1[0x1b];
    puVar1[0x1b] = param_28;
    _objc_release(uVar6);
    _objc_retain(param_29);
    uVar6 = puVar1[0x1c];
    puVar1[0x1c] = param_29;
    _objc_release(uVar6);
    _objc_retain(param_30);
    uVar6 = puVar1[0x1d];
    puVar1[0x1d] = param_30;
    _objc_release(uVar6);
    _objc_initWeak(auStack_108,puVar1);
    uVar4 = puVar1[0x18];
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0dcae0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_110,auStack_108);
    uVar5 = uVar7;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_108);
    _objc_release(uStack_e0);
    _objc_release(uStack_b8);
    _objc_release(uStack_90);
  }
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



/* Entry: 10655877c; end: 1065588d7;  */

void FUN_10655877c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c082300();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1065588d8; end: 10655894f; -[SCChatMessageViewModelFactoryV3 _processNotificationToMessageReadyLifecycleEvent:] */

void FUN_1065588d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106558950;
  puStack_20 = &UNK_110855e40;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106558968;
  puStack_48 = &UNK_110842e18;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bd6e0(param_3,param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 106558950; end: 106558973;  */

void FUN_106558950(long param_1,long param_2)

{
  if (param_2 == 1) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x120) = 1;
  }
  return;
}



/* Entry: 106558974; end: 10655947b; -[SCChatMessageViewModelFactoryV3 viewModelForMessage:messageGroup:withConversation:conversationSubtypeMetadata:conversationParticipants:earlierContentExists:config:previousViewModel:parsingData:messageAnimationData:snapchattersData:postSnapActionsParams:currentUserSnapchatter:reactionMetadata:] */

undefined *
FUN_106558974(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
             long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined *param_15,undefined8 param_16)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 in_stack_fffffffffffffc80;
  undefined4 uVar21;
  byte bStack_270;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puVar3 = param_15;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126cb3c0;
  puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (*(long *)(param_1 + 0x118) == 0) {
    func_0x00010c261400(param_5);
    uVar4 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    func_0x00010c071660(puVar8);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + 0x118);
    *(undefined **)(param_1 + 0x118) = puVar19;
    _objc_release(uVar17);
    _objc_release(uVar4);
  }
  uVar4 = param_11;
  func_0x00010c0cbbe0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = param_3;
  func_0x00010bf490e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar4;
  func_0x00010bf4b900();
  _objc_release(puVar19);
  _objc_release(uVar4);
  uVar4 = param_11;
  func_0x00010c0cb640();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = param_3;
  func_0x00010bf490e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf4b900();
  _objc_release(puVar19);
  _objc_release(uVar4);
  uVar4 = param_11;
  func_0x00010c0cbc00();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = param_3;
  func_0x00010bf490e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf4b900();
  _objc_release(puVar19);
  _objc_release(uVar4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x118);
  func_0x00010bf1f3c0();
  _objc_retain(param_10);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(puVar3);
  _objc_retain(param_5);
  _objc_retain(param_9);
  lVar7 = param_5;
  func_0x00010c261400();
  if (lVar7 == 6) {
LAB_106558cb8:
    bStack_270 = 0;
  }
  else {
    puVar19 = param_3;
    func_0x00010c0cb8c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_retain(puVar3);
    if (puVar19 == puVar3) {
      _objc_release(puVar3);
      _objc_release(puVar19);
      _objc_release(puVar19);
      goto LAB_106558cb8;
    }
    if (puVar3 == (undefined *)0x0) {
      _objc_release();
      _objc_release(puVar19);
LAB_106558ccc:
      if (iVar1 == 0) {
        uVar4 = param_10;
        func_0x00010c22f340();
        bStack_270 = (byte)uVar5 & ((byte)uVar4 ^ 1);
      }
      else {
        puVar8 = param_4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = param_3;
        if (puVar8 != (undefined *)0x0) {
          puVar19 = puVar8;
        }
        _objc_retain(puVar19);
        _objc_release(puVar8);
        uVar4 = param_9;
        func_0x00010c245de0(param_9);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = param_5;
        func_0x00010c074920(param_5);
        lVar9 = param_5;
        func_0x00010c06b1a0(param_5);
        puVar8 = puVar19;
        func_0x00010706b258(puVar19,uVar4,lVar7,lVar9);
        _objc_release(puVar19);
        _objc_release(uVar4);
        uVar4 = param_10;
        func_0x00010c082140();
        bStack_270 = ((byte)uVar4 ^ 1) & (byte)puVar8;
      }
    }
    else {
      puVar8 = puVar19;
      func_0x00010c071ae0();
      _objc_release(puVar3);
      _objc_release(puVar19);
      _objc_release(puVar19);
      if (((ulong)puVar8 & 1) == 0) goto LAB_106558ccc;
      bStack_270 = 0;
    }
  }
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_10);
  uVar4 = param_11;
  func_0x00010c0cb380();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = param_3;
  func_0x00010bf490e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar12;
  func_0x00010c2827c0();
  _objc_release(uVar12);
  _objc_release(puVar19);
  _objc_release(uVar4);
  uVar2 = (uint)*(undefined8 *)(param_1 + 8);
  func_0x00010c071ac0();
  puVar19 = param_4;
  func_0x00010bf529e0();
  if (puVar19 == (undefined *)0x0) {
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_4);
    puVar19 = param_4;
  }
  _objc_retain(puVar19);
  puVar8 = puVar19;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar8 != (undefined *)0x0) {
    puVar20 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(puVar19);
      }
      uVar18 = *(ulong *)((long)puVar20 * 8);
      uVar11 = uVar18;
      func_0x00010c15dfc0();
      if ((uVar11 & 1) == 0) {
        func_0x00010bf026e0(uVar18);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = param_5;
        func_0x00010bfe5d80(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be55f00(param_1);
        _objc_release(lVar9);
        _objc_release(uVar18);
      }
      puVar20 = puVar20 + 1;
    } while (puVar8 != puVar20);
    puVar8 = puVar19;
    func_0x00010bf52a60();
  }
  _objc_release(puVar19);
  if ((param_1[0x120] & 1) == 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x110);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar12;
    func_0x00010bf1f3c0();
    _objc_release(uVar12);
    uVar21 = (undefined4)((ulong)in_stack_fffffffffffffc80 >> 0x20);
    if ((int)uVar4 != 0) goto LAB_106558f78;
  }
  else {
LAB_106558f78:
    _objc_retain(puVar19);
    puVar8 = puVar19;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    uVar21 = (undefined4)((ulong)in_stack_fffffffffffffc80 >> 0x20);
    while (puVar8 != (undefined *)0x0) {
      puVar20 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(puVar19);
        }
        func_0x00010be56880(param_1);
        puVar20 = puVar20 + 1;
      } while (puVar8 != puVar20);
      puVar8 = puVar19;
      func_0x00010bf52a60();
      uVar21 = (undefined4)((ulong)in_stack_fffffffffffffc80 >> 0x20);
    }
    _objc_release(puVar19);
  }
  puVar8 = param_3;
  func_0x0001070b6780(param_3,param_5,puVar3);
  _objc_retain(param_14);
  puVar20 = param_3;
  func_0x00010c0721c0();
  if (((ulong)puVar20 & 1) == 0) {
    puVar20 = param_3;
    func_0x00010c07ea80();
    uVar4 = param_14;
    if (((int)puVar20 != 0) && (puVar20 = param_3, func_0x00010c0791c0(), ((ulong)puVar20 & 1) == 0)
       ) {
      func_0x000107088228(param_14,puVar8);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106559044;
    }
  }
  else {
    uVar4 = 0;
LAB_106559044:
    _objc_release(param_14);
  }
  puVar8 = param_1;
  func_0x00010be216a0();
  if ((puVar8 == (undefined *)0x0) ||
     (puVar8 = param_3, FUN_10655947c(param_3,*(undefined8 *)(param_1 + 0x10)),
     ((ulong)puVar8 & 1) != 0)) {
LAB_1065590cc:
    puVar8 = param_4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_9;
    func_0x00010c245de0(param_9);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_5;
    func_0x00010c074920(param_5);
    lVar9 = param_5;
    func_0x00010c06b1a0(param_5);
    puVar13 = puVar8;
    func_0x00010706b258(puVar8,uVar12,lVar7,lVar9);
    _objc_release(uVar12);
    _objc_release(puVar8);
    uVar12 = param_11;
    func_0x00010c0cb580();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_3;
    func_0x00010bf490e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(uVar12);
    puVar20 = PTR_PTR_1126cb7b0;
    puVar15 = param_15;
    func_0x00010c2923e0(param_15);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = *(undefined **)(param_1 + 0xb0);
    func_0x00010c29d7c0(puVar20,puVar8,param_4,param_5,param_6,param_7,puVar15,(int)uVar5,
                        CONCAT71(CONCAT61(CONCAT51(CONCAT41(uVar21,(char)puVar13),bStack_270),
                                          (char)uVar6),(char)uVar17),uVar14,uVar10,param_12,param_13
                        ,uVar4,param_15,param_16,*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x60),
                        *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x88),
                        *(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x70),
                        *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),puVar8,
                        *(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x100),
                        *(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),
                        *(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    puVar13 = puVar20;
    func_0x00010c082000();
    if ((int)puVar13 != 0) {
      uVar17 = *(undefined8 *)(param_1 + 0x28);
      puVar13 = param_3;
      func_0x00010bf4df40();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar13;
      func_0x000107d60b58();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar15;
      FUN_10655d258(uVar17,puVar15,1);
      _objc_release(puVar15);
      _objc_release(puVar13);
    }
    if (puVar20 != (undefined *)0x0) {
      func_0x00010bed6300(param_1);
      _objc_release(uVar14);
      param_1 = puVar20;
      goto LAB_1065593a0;
    }
    _objc_release(uVar14);
  }
  else {
    puVar20 = param_4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined *)(ulong)uVar2;
    puVar13 = puVar20;
    func_0x00010704aacc();
    _objc_release(puVar20);
    if ((int)puVar13 != 0) goto LAB_1065590cc;
  }
  func_0x00010bee9900(param_1);
  _objc_retainAutoreleasedReturnValue();
LAB_1065593a0:
  _objc_release(uVar4);
  _objc_release(puVar19);
  _objc_release(puVar3);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(puVar8);
  if (param_3 == (undefined *)0x0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    puVar19 = puVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    func_0x00010c101bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar19);
    puVar19 = PTR_DAT_1126a5408;
    _objc_retain(puVar20);
    puVar13 = puVar20;
    func_0x00010010fab4(puVar20,puVar19);
    puVar3 = puVar20;
    if ((int)puVar13 == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar20);
    if (puVar3 == (undefined *)0x0) {
      puVar19 = (undefined *)0x0;
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar15 = puVar20;
      func_0x00010c101d20();
      puVar19 = (undefined *)(ulong)(puVar15 != (undefined *)0x2);
      puVar13 = puVar20;
      if (puVar15 == (undefined *)0x2) {
        puVar13 = puVar3;
      }
    }
    _objc_release(puVar13);
    _objc_release(puVar20);
  }
  _objc_release(puVar8);
  _objc_release(param_3);
  return puVar19;
}



/* Entry: 10655947c; end: 10655956b;  */

bool FUN_10655947c(long param_1,long param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    lVar3 = param_2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c101bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar1 = PTR_DAT_1126a5408;
    _objc_retain(lVar4);
    lVar5 = lVar4;
    func_0x00010010fab4(lVar4,puVar1);
    lVar3 = lVar4;
    if ((int)lVar5 == 0) {
      lVar3 = 0;
    }
    _objc_retain(lVar3);
    _objc_release(lVar4);
    if (lVar3 == 0) {
      bVar2 = false;
      lVar5 = 0;
    }
    else {
      lVar5 = lVar4;
      func_0x00010c101d20();
      bVar2 = lVar5 != 2;
      lVar5 = lVar4;
      if (!bVar2) {
        lVar5 = lVar3;
      }
    }
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar2;
}



/* Entry: 10655956c; end: 10655957f; -[SCChatMessageViewModelFactoryV3 viewModelForToday:isGroupConversation:conversationId:recipientUserId:] */

void FUN_10655956c(double param_1,double param_2,double param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x4;
  undefined8 in_x5;
  double dVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  _objc_retain(in_x5);
  _objc_retain(in_x4);
  func_0x00010c0b6c20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  dVar3 = param_1;
  func_0x000107064934(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c23d0a0(puVar2);
  func_0x00010c0bafa0(puVar2);
  param_2 = param_2 + dVar3;
  func_0x00010c0bafa0(puVar2);
  param_2 = param_2 + param_3;
  func_0x00010bf21b40(puVar2);
  func_0x00010bf21b40(puVar2);
  puVar1 = PTR_PTR_1126c6d00;
  _objc_alloc(PTR_PTR_1126c6d00);
  func_0x00010c0414c0(param_1,param_1,param_2 + dVar3 + param_3,param_1,param_1);
  _objc_release(in_x5);
  _objc_release(in_x4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106559580; end: 10655963f; -[SCChatMessageViewModelFactoryV3 viewModelForEmptyChatConversation:withMessageRetentionInMinutes:] */

void FUN_106559580(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126cb7b8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  lVar2 = param_3;
  func_0x00010bf37ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010c1ea5c0(puVar1,param_2,lVar2 != 0);
  lVar2 = param_3;
  func_0x00010c074920(param_3);
  _objc_release(param_3);
  func_0x00010c1b2900(puVar1,param_2,lVar2);
  func_0x00010c189b80(0x4024000000000000,puVar1);
  puVar3 = PTR_PTR_1126cb788;
  _objc_alloc(PTR_PTR_1126cb788);
  func_0x00010c03b820();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106559640; end: 106559657; -[SCChatMessageViewModelFactoryV3 viewModelForLoading:conversationId:isGroupConversation:sinceMessageId:recipientUserId:] */

void FUN_106559640(undefined8 param_1,double param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  
  dVar9 = 0.0;
  if (param_6 - 1U < 5) {
    dVar9 = *(double *)(&UNK_10de1e908 + (param_6 - 1U) * 8);
  }
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_7);
  uVar1 = param_7;
  func_0x00010706a28c(param_7,param_9,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_7;
  func_0x00010706a28c(param_7,param_9,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  puVar3 = PTR_PTR_1126d43f0;
  _objc_alloc();
  func_0x00010c026660();
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  dVar8 = dVar9;
  func_0x000107064934();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010c23d0a0(puVar5);
  func_0x00010c0bafa0(puVar5);
  param_2 = param_2 + dVar8;
  func_0x00010c0bafa0(puVar5);
  param_2 = param_2 + param_3;
  func_0x00010bf21b40(puVar5);
  param_2 = param_2 + dVar8;
  func_0x00010bf21b40(puVar5);
  param_2 = param_2 + param_3;
  func_0x00010bf4c660(puVar3);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (dVar8 == 0.0) {
    param_2 = 0.0;
  }
  func_0x00010bf4c660(puVar3);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126c6d00;
  _objc_alloc(PTR_PTR_1126c6d00);
  puVar7 = puVar3;
  func_0x00010c13fda0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0414c0(dVar9,dVar9,param_2,dVar9,dVar9,puVar6);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106559658; end: 1065596ab; -[SCChatMessageViewModelFactoryV3 viewModelForPlaceholder] */

void FUN_106559658(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cb7c0;
  _objc_alloc_init(PTR_PTR_1126cb7c0);
  func_0x00010c189b80(0x4024000000000000);
  puVar2 = PTR_PTR_1126cb7c8;
  _objc_alloc(PTR_PTR_1126cb7c8);
  func_0x00010c03b800();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1065596ac; end: 10655979f; -[SCChatMessageViewModelFactoryV3 viewModelForPendingSnaps:pendingChats:conversationId:recipientUsername:] */

void FUN_1065596ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = &UNK_10f382d85;
  func_0x0001000ba800(&UNK_10f382d85);
  puVar2 = PTR_PTR_1126cb7d0;
  _objc_alloc_init(PTR_PTR_1126cb7d0);
  func_0x00010c1e8820();
  func_0x00010c1da480(puVar2,param_2,param_3);
  func_0x00010c1da1a0(puVar2,param_2,param_4);
  func_0x00010c189b80(0x4024000000000000,puVar2);
  puVar3 = PTR_PTR_1126cb568;
  _objc_alloc(PTR_PTR_1126cb568);
  func_0x00010c03b800();
  _objc_release(puVar2);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1065597a0; end: 106559c87; -[SCChatMessageViewModelFactoryV3 conversationLoadingViewModel:metadata:currentUserId:isInitialLoad:] */

void FUN_1065597a0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
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
  undefined1 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = &UNK_10f382dbe;
  func_0x0001000ba800();
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  uVar13 = *(undefined8 *)(param_1 + 0xe0);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(uVar9);
  _objc_retain(uVar8);
  _objc_retain(uVar13);
  puVar2 = PTR_PTR_1126cb798;
  _objc_alloc();
  func_0x00010bfef520();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2864a0(PTR_PTR_1126cb3b0);
  puVar4 = PTR_PTR_1126cb3b0;
  func_0x00010c08d000();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  dVar14 = 6.81691147847594e-313;
  uStack_98 = 0x2020000000;
  uStack_90 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_106557bc8;
  uStack_b8 = 0x106557bd8;
  uStack_b0 = 0;
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_106557bc8;
  uStack_e8 = 0x106557bd8;
  uStack_e0 = 0;
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_106557bc8;
  uStack_118 = 0x106557bd8;
  uStack_110 = 0;
  puStack_160 = &uStack_168;
  uStack_168 = 0;
  uStack_158 = 0x3032000000;
  pcStack_150 = FUN_106557bc8;
  uStack_148 = 0x106557bd8;
  uStack_140 = 0;
  puStack_190 = &uStack_198;
  uStack_198 = 0;
  uStack_188 = 0x3032000000;
  pcStack_180 = FUN_106557bc8;
  uStack_178 = 0x106557bd8;
  uStack_170 = 0;
  puStack_1b0 = &uStack_1b8;
  uStack_1b8 = 0;
  uStack_1a8 = 0x2020000000;
  uStack_1a0 = 0;
  _objc_retain(uVar9);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(uVar13);
  _objc_retain(uVar8);
  func_0x00010c0be1a0(param_4);
  puVar5 = PTR_PTR_1126cb2f0;
  _objc_alloc(PTR_PTR_1126cb2f0);
  lVar10 = param_3;
  puVar11 = puVar2;
  func_0x00010bfeeee0();
  _objc_release(uVar8);
  _objc_release(uVar13);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar9);
  __Block_object_dispose(&uStack_1b8,8);
  __Block_object_dispose(&uStack_198,8);
  _objc_release(uStack_170);
  __Block_object_dispose(&uStack_168,8);
  _objc_release(uStack_140);
  __Block_object_dispose(&uStack_138,8);
  _objc_release(uStack_110);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar13);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_1b8,8);
    __Block_object_dispose(&uStack_198,8);
    __Block_object_dispose(&uStack_168,8);
    __Block_object_dispose(&uStack_138,8);
    __Block_object_dispose(&uStack_108,8);
    __Block_object_dispose(&uStack_d8,8);
    __Block_object_dispose(&uStack_a8,8);
    func_0x0001000e2a84(puVar1);
    __Unwind_Resume();
    uVar12 = *(ulong *)(param_3 + 0x10);
    _objc_retain(&PTR____CFConstantStringClassReference_110eeba58);
    _objc_retain(puVar11);
    _objc_retain(lVar10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar12;
    func_0x00010c101ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    puVar1 = PTR_PTR_1126cb7d8;
    _objc_retain(uVar6);
    _objc_opt_class(puVar1);
    uVar7 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar1);
    uVar12 = uVar6;
    if ((uVar7 & 1) == 0) {
      uVar12 = 0;
    }
    _objc_retain(uVar12);
    _objc_release(uVar6);
    puVar1 = puVar11;
    func_0x0001070b2918(puVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    uVar7 = uVar12;
    func_0x00010c121180(uVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    uVar8 = *(undefined8 *)(param_3 + 0x88);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(&PTR____CFConstantStringClassReference_110eeba58);
    uVar9 = uVar8;
    func_0x00010bfc84a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _CGRectGetWidth();
    dVar14 = dVar14 + -16.0;
    _objc_release(puVar2);
    puVar5 = PTR_PTR_1126c6d00;
    _objc_alloc(PTR_PTR_1126c6d00);
    uVar8 = uVar9;
    func_0x00010c13fda0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0414c0(dVar14,dVar14,0x4020000000000000,dVar14,dVar14,puVar5);
    _objc_release(lVar10);
    _objc_release(uVar8);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(puVar1);
    _objc_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106559c88; end: 106559f5f; -[SCChatMessageViewModelFactoryV3 addToGroupViewModelForConversation:participants:] */

void FUN_106559c88(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_2 + 0x10);
  _objc_retain(&PTR____CFConstantStringClassReference_110eeba58);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c101ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar2 = PTR_PTR_1126cb7d8;
  _objc_retain(uVar1);
  _objc_opt_class(puVar2);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar7 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar7 = 0;
  }
  _objc_retain(uVar7);
  _objc_release(uVar1);
  uVar4 = param_5;
  func_0x0001070b2918(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar3 = uVar7;
  func_0x00010c121180(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  uVar5 = *(undefined8 *)(param_2 + 0x88);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110eeba58);
  uVar6 = uVar5;
  func_0x00010bfc84a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  param_1 = param_1 + -16.0;
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c6d00;
  _objc_alloc(PTR_PTR_1126c6d00);
  uVar5 = uVar6;
  func_0x00010c13fda0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0414c0(param_1,param_1,0x4020000000000000,param_1,param_1,puVar2);
  _objc_release(param_4);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106559f60; end: 10655a0c7; -[SCChatMessageViewModelFactoryV3 _viewModelForMessage:withConversation:viewModelClass:conversationParticipants:currentUserId:earlierContentExists:config:previousViewModel:showsDateHeader:showsBelowTheFold:showsTimestamp:showsFoldIndicator:cornerMask:currentUserSnapchatter:snapchattersData:postSnapActionsParams:reactionMetadata:] */

void FUN_106559f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdf5940(param_1,param_2,param_4,param_6,param_7,param_8,param_3,param_10,param_9,
                      param_11);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010beb7020(param_1,param_2,param_5,param_10,uVar1,param_3,param_9);
  _objc_release(param_9);
  if ((int)uVar2 == 0) {
    func_0x00010bdf35a0(param_1,param_2,uVar1,param_3,param_5,param_10);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010beddda0(param_1,param_2,param_3,param_10,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_10);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10655a0c8; end: 10655abeb; -[SCChatMessageViewModelFactoryV3 _createViewModelPropsWithConversation:conversationParticipants:currentUserId:earlierContentExists:message:previousViewModel:config:showsDateHeader:showsBelowTheFold:showsTimestamp:showsFoldIndicator:cornerMask:currentUserSnapchatter:snapchattersData:postSnapActionsParams:reactionMetadata:] */

void FUN_10655a0c8(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,long param_8,ulong param_9,
                  undefined8 param_10,byte param_11,undefined4 param_12,byte param_13,
                  undefined4 param_14,undefined8 param_15,undefined8 param_16,ulong param_17,
                  undefined8 param_18)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_18);
  _objc_retain(param_17);
  uVar2 = param_10;
  func_0x00010c245de0(param_10);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c074920(param_4);
  lVar14 = param_4;
  func_0x00010c06b1a0(param_4);
  func_0x00010706b258(param_8,uVar2,lVar1,lVar14);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_8;
  func_0x00010706dddc(param_8,uVar2);
  _objc_release(uVar2);
  func_0x00010bf37ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar2 = 0;
  if (((param_11 & 1) == 0) && (((uint)param_13 & ((uint)lVar1 ^ 1) & 1) == 0)) {
    puVar3 = PTR_PTR_1126cb4d0;
    _objc_opt_class(PTR_PTR_1126cb4d0);
    uVar4 = param_9;
    _objc_opt_isKindOfClass(param_9,puVar3);
    puVar3 = PTR_PTR_1126cb4d0;
    if ((uVar4 & 1) != 0) {
      _objc_retain(param_9);
      _objc_opt_class(puVar3);
      uVar5 = param_9;
      _objc_opt_isKindOfClass(param_9,puVar3);
      uVar4 = param_9;
      if ((uVar5 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(param_9);
      lVar1 = param_8;
      func_0x00010c0cb9a0(param_8);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c2709c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      func_0x00010c26f380(lVar1);
      _objc_release(uVar5);
      _objc_release(lVar1);
      uVar2 = param_1;
    }
  }
  uVar6 = param_5;
  func_0x000108ef5474();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cb7e0;
  _objc_alloc_init(PTR_PTR_1126cb7e0);
  lVar1 = param_2 + 0x128;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c21f2c0(puVar3);
  _objc_release(lVar1);
  func_0x00010c187fa0(puVar3);
  func_0x00010c17c5e0(puVar3);
  func_0x00010c1c72c0(puVar3);
  func_0x00010c181d80(puVar3);
  func_0x00010c1c46e0(puVar3);
  func_0x00010c205f40(puVar3);
  func_0x00010c186860(puVar3);
  func_0x00010c1b4ac0(puVar3);
  func_0x00010c1ea5c0(puVar3);
  func_0x00010c1a5ca0(puVar3);
  func_0x00010c1a6cc0(puVar3);
  lVar1 = param_8;
  func_0x00010c0cb8c0(param_8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_16;
  func_0x00010bd869d0(param_16,&PTR___NSConcreteGlobalBlock_11098cf80,
                      &PTR___NSConcreteGlobalBlock_11098cfc0);
  lVar14 = lVar1;
  func_0x000108ef3960(lVar1,uVar6,uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcac0(puVar3);
  _objc_release(lVar14);
  _objc_release(uVar7);
  _objc_release(lVar1);
  func_0x00010c1a6ce0(puVar3);
  func_0x00010c1a5fa0(puVar3);
  func_0x00010c1a7100(puVar3);
  func_0x00010c1ae6e0(uVar2,puVar3);
  func_0x00010c16fe40(puVar3);
  func_0x00010c1b5500(puVar3);
  lVar1 = param_8;
  func_0x00010c0cb8c0(param_8);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar1;
  func_0x000108ef44cc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fca80(puVar3);
  _objc_release(lVar14);
  _objc_release(lVar1);
  lVar1 = param_8;
  func_0x00010c0cb8c0(param_8);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar1;
  func_0x000108ef47bc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcb00(puVar3);
  _objc_release(lVar14);
  _objc_release(lVar1);
  func_0x00010bf652a0(param_10);
  func_0x00010c189b80(puVar3);
  func_0x00010c2746e0(param_10);
  func_0x00010c217520(puVar3);
  func_0x00010c0f6600(param_10);
  func_0x00010c1d9b00(puVar3);
  func_0x00010c1a4580(puVar3);
  func_0x00010c076ee0(param_4);
  func_0x00010c1b25a0(puVar3);
  func_0x00010c261400(param_4);
  func_0x00010c183d60(puVar3);
  func_0x00010c205f00(puVar3);
  func_0x00010bfdcfe0(param_4);
  func_0x00010c20fd00(puVar3);
  func_0x00010c1ddf80(puVar3);
  func_0x00010c21d4e0(puVar3);
  lVar1 = param_2 + 0x128;
  _objc_loadWeakRetained(lVar1);
  lVar14 = lVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c187f00(puVar3);
  _objc_release(lVar14);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c074920(param_4);
  lVar14 = param_4;
  func_0x00010c0f4aa0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar14;
  func_0x00010bf51e00();
  func_0x00010bea6ac0(param_2);
  _objc_release(lVar13);
  _objc_release(lVar14);
  func_0x0001070b6780(param_8,param_4,param_6);
  func_0x00010c203ba0(puVar3);
  func_0x0001070b6368(param_8,param_4);
  func_0x00010c1b4780(puVar3);
  if ((param_7 & 1) == 0) {
    lVar1 = param_4;
    func_0x00010c0cbb80();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar14 != param_8) goto LAB_10655a6d4;
    func_0x00010c1b1100(puVar3);
  }
  else {
LAB_10655a6d4:
    func_0x00010c0730e0(param_10);
    func_0x00010c1b1100(puVar3);
    if ((param_7 & 1) != 0) goto LAB_10655a714;
  }
  _objc_release(lVar14);
  _objc_release(lVar1);
LAB_10655a714:
  uVar4 = param_17;
  func_0x00010c105080();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf04920();
  _objc_release(uVar4);
  uVar4 = param_17;
  func_0x00010c105080();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010bf529e0();
  dVar16 = 54.0;
  if ((long)(uVar8 - (uVar5 & 0xffffffff)) < 1) {
    dVar16 = 0.0;
  }
  _objc_release(uVar4);
  func_0x00010c1df380(dVar16,puVar3);
  func_0x00010c1df3a0(puVar3);
  _objc_release(param_17);
  lVar1 = param_8;
  func_0x00010706e070(param_8,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x88));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1865a0(puVar3);
  puVar9 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar9);
  dVar16 = dVar16 + -18.0;
  dVar15 = dVar16;
  func_0x00010706a8ac(dVar16,0,0x4022000000000000,0,0x4008000000000000,lVar1);
  lVar14 = *(long *)(param_2 + 0x70);
  uVar2 = param_16;
  func_0x00010bd869d0(param_16,&PTR___NSConcreteGlobalBlock_11098cf80,
                      &PTR___NSConcreteGlobalBlock_11098cfc0);
  func_0x00010c11ece0(dVar15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar14 != 0) {
    puVar9 = PTR_PTR_1126cb7e8;
    _objc_alloc(PTR_PTR_1126cb7e8);
    lVar13 = param_8;
    func_0x00010bf37480(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03c9e0(puVar9);
    func_0x00010c1e6d20(puVar3);
    _objc_release(puVar9);
    _objc_release(lVar13);
  }
  lVar13 = param_8;
  func_0x00010706de7c(param_8,*(undefined8 *)(param_2 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9be0(puVar3);
  _objc_release(lVar13);
  lVar13 = param_8;
  func_0x00010706e1ec(param_8,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x88));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16fe00(puVar3);
  _objc_release(lVar13);
  lVar13 = param_8;
  func_0x00010bf490e0(param_8);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_4;
  func_0x00010c0cbb80(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar13);
  uVar2 = *(undefined8 *)(param_2 + 0xa0);
  dVar15 = dVar16;
  func_0x00010c29d7a0(dVar16,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_18);
  func_0x00010c1e7b40(puVar3);
  _objc_release(uVar2);
  func_0x00010c26f460(PTR_PTR_1126cb4d0);
  puVar9 = PTR_PTR_1126cb7f0;
  func_0x00010c261400(param_4);
  func_0x00010c15dd60(dVar16 - dVar15,puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcae0(puVar3);
  _objc_release(puVar9);
  func_0x00010c171b20(puVar3);
  lVar13 = *(long *)(param_2 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar13;
  func_0x00010c101bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  puVar9 = PTR_DAT_1126a5280;
  _objc_retain(lVar10);
  lVar11 = lVar10;
  func_0x00010010fab4(lVar10,puVar9);
  lVar13 = lVar10;
  if ((int)lVar11 == 0) {
    lVar13 = 0;
  }
  _objc_retain(lVar13);
  _objc_release(lVar10);
  if (lVar13 != 0) {
    lVar11 = lVar10;
    func_0x00010bfe5ec0(lVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e05e0(puVar3);
    _objc_release(lVar11);
    lVar11 = lVar10;
    func_0x00010c108320(lVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e06e0(puVar3);
    _objc_release(lVar11);
  }
  _objc_release(lVar13);
  _objc_release(lVar10);
  _objc_release(lVar14);
  _objc_release(lVar1);
  _objc_release(uVar6);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10655abec; end: 10655ac2f;  */

bool FUN_10655abec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010beedca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010beeed20();
  _objc_release(param_2);
  return (int)uVar1 == 4;
}



/* Entry: 10655ac30; end: 10655ad5f; -[SCChatMessageViewModelFactoryV3 _shouldUpdateViewModelForClass:previousViewModel:messageProps:message:config:] */

ulong FUN_10655ac30(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                   ulong param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar4 = param_4;
  _objc_opt_isKindOfClass(param_4,param_3);
  if ((((uVar4 & 1) != 0) && (uVar4 = param_5, func_0x00010bfdbdc0(), (uVar4 & 1) == 0)) &&
     (uVar4 = param_5, func_0x00010bfd6220(), (uVar4 & 1) == 0)) {
    puVar1 = PTR_PTR_1126cb308;
    _objc_opt_class(PTR_PTR_1126cb308);
    uVar4 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    if ((uVar4 & 1) != 0) {
      _objc_retain(param_4);
      uVar2 = param_7;
      func_0x00010c245de0(param_7);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c089d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c282800();
      uVar4 = param_4;
      func_0x00010bf2d8a0(param_4);
      _objc_release(param_4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      goto LAB_10655ad24;
    }
  }
  uVar4 = 0;
LAB_10655ad24:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return uVar4;
}



/* Entry: 10655ad60; end: 10655adc3; -[SCChatMessageViewModelFactoryV3 _updatePreviousViewModelForMessage:previousViewModel:viewModelProps:] */

void FUN_10655ad60(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cb308;
  _objc_opt_class(PTR_PTR_1126cb308);
  uVar2 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010befb940(param_4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 10655adc4; end: 10655ae5f; -[SCChatMessageViewModelFactoryV3 _createSingleMessageViewModelWithViewModelProps:message:viewModelClass:previousViewModel:] */

void FUN_10655adc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_5);
  func_0x00010c02b440();
  _objc_release(param_3);
  func_0x00010bed6300(param_1,param_2,param_5,param_6,param_4);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 10655ae60; end: 10655afab; -[SCChatMessageViewModelFactoryV3 _updateCornersBasedOnPreviousViewModel:previousViewModel:message:] */

void FUN_10655ae60(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126cb4d0;
  _objc_opt_class(PTR_PTR_1126cb4d0);
  uVar2 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  if ((uVar2 & 1) != 0) {
    _objc_retain(param_4);
    uVar3 = param_3;
    func_0x00010c234240();
    if ((int)uVar3 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010706dddc(param_5,uVar3);
      func_0x00010c173620(param_4);
      _objc_release(uVar3);
    }
    else {
      func_0x00010c173620(param_4);
    }
    uVar3 = param_3;
    FUN_10655afac();
    if ((int)uVar3 != 0) {
      uVar2 = param_4;
      FUN_10655afac();
      if ((int)uVar2 != 0) {
        func_0x00010c234240(param_3);
      }
      func_0x00010c2175c0(param_3);
    }
    uVar2 = param_4;
    FUN_10655afac();
    if ((int)uVar2 != 0) {
      uVar3 = param_3;
      FUN_10655afac();
      if ((int)uVar3 != 0) {
        func_0x00010c234240(param_3);
      }
      func_0x00010c1736e0(param_4);
    }
    _objc_release(param_4);
  }
  func_0x00010c173620(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10655afac; end: 10655b007;  */

ulong FUN_10655afac(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126cb578;
  _objc_opt_class(PTR_PTR_1126cb578);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x00010bf4b560(param_1);
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10655b008; end: 10655b2cf; -[SCChatMessageViewModelFactoryV3 _getPayloadViewModelClassForMessage:] */

void FUN_10655b008(long param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
LAB_10655b064:
    puVar7 = (undefined *)0x0;
    goto LAB_10655b224;
  }
  puVar7 = param_3;
  func_0x00010bfddc80();
  if ((int)puVar7 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x100);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) goto LAB_10655b064;
  }
  puVar4 = param_3;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf4ce20();
  puVar7 = (undefined *)0x0;
  iVar1 = (int)puVar5;
  puVar5 = puVar4;
  if (iVar1 < 7) {
    if (iVar1 == 3) {
      puVar7 = puVar4;
      func_0x00010bf9e280();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar7;
      func_0x00010c245420();
      _objc_release(puVar7);
      if (puVar5 < (undefined *)0x2) {
LAB_10655b190:
        puVar7 = PTR_PTR_1126cb6f0;
        _objc_opt_class(PTR_PTR_1126cb6f0);
      }
      else {
LAB_10655b208:
        puVar7 = (undefined *)0x0;
      }
      _objc_retain(puVar7);
    }
    else if (iVar1 == 4) {
      func_0x00010c253880(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_3;
      FUN_1064f9bc0(param_3,puVar5);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10655b1cc;
    }
  }
  else if (iVar1 == 7) {
    puVar7 = puVar4;
    func_0x00010c242c40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar7;
    func_0x00010c131be0();
    _objc_release(puVar7);
    iVar1 = (int)puVar5;
    if (iVar1 == 0x11) goto LAB_10655b0a8;
    if (iVar1 != 0xd) {
      if (iVar1 == 0xc) {
        puVar7 = puVar4;
        func_0x00010c242c40();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar7;
        func_0x00010c131ce0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c245420();
        _objc_release(puVar5);
        _objc_release(puVar7);
        if ((undefined *)0x1 < puVar6) goto LAB_10655b208;
        goto LAB_10655b190;
      }
      goto LAB_10655b218;
    }
    puVar7 = puVar4;
    func_0x00010c242c40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar7;
    func_0x00010c132140();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c2544c0();
    _objc_release(puVar5);
    _objc_release(puVar7);
    puVar7 = (undefined *)0x0;
    iVar1 = (int)puVar6;
    if (iVar1 < 2) {
      if (iVar1 != 0) {
        if (iVar1 != 1) goto LAB_10655b0a8;
LAB_10655b2ac:
        puVar5 = param_3;
        func_0x00010c06d4a0();
        puVar7 = PTR_PTR_1126cb330;
        if ((int)puVar5 != 0) {
          puVar7 = PTR_PTR_1126cb328;
        }
        goto LAB_10655b0c0;
      }
    }
    else if (iVar1 != 2) {
      if (iVar1 == 3) goto LAB_10655b2ac;
      goto LAB_10655b0a8;
    }
  }
  else if (iVar1 == 8) {
    func_0x00010c253320(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_3;
    FUN_1064f9c40(param_3,puVar5);
    _objc_retainAutoreleasedReturnValue();
LAB_10655b1cc:
    _objc_release(puVar5);
  }
  else {
    if (iVar1 != 0xb) goto LAB_10655b21c;
LAB_10655b0a8:
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c06e5a0();
    puVar7 = PTR_PTR_1126cb560;
    if (iVar1 == 0) {
LAB_10655b218:
      puVar7 = (undefined *)0x0;
    }
    else {
LAB_10655b0c0:
      _objc_opt_class(puVar7);
      _objc_retainAutoreleasedReturnValue();
    }
  }
LAB_10655b21c:
  _objc_release(puVar4);
LAB_10655b224:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10655b2d0; end: 10655b34f; -[SCChatMessageViewModelFactoryV3 _messageIsSentByUser:] */

undefined8 FUN_10655b2d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c0cb8c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x128;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10655b350; end: 10655b4df; -[SCChatMessageViewModelFactoryV3 _setRecipientInfoForOneOnOneConversationOnProps:isGroupConversation:conversationParticipants:message:] */

void FUN_10655b350(int param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (((param_4 & 1) == 0) && (func_0x00010be5fe80(), param_1 != 0)) {
    lVar1 = param_3;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000107d605f8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      func_0x00010c1e8a60(param_3);
      lVar1 = param_3;
      func_0x00010c122e00(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010bfce400(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010c244a80(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bd869d0();
      lVar6 = lVar1;
      func_0x000108ef3960(lVar1,lVar2,lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e88c0(param_3);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    _objc_release(lVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10655b4e0; end: 10655b567; -[SCChatMessageViewModelFactoryV3 _logMessageDisplayInitializedForMessage:conversationId:] */

void FUN_10655b4e0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0xe8);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aa2e0();
    _objc_release(param_4);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10655b568; end: 10655b6b7; -[SCChatMessageViewModelFactoryV3 _logNotificationToMessageReadyForMessage:conversation:] */

void FUN_10655b568(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_3;
    FUN_10655947c(param_3,*(undefined8 *)(param_1 + 0x10));
    if ((uVar1 & 1) != 0) goto LAB_10655b698;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = param_3;
    func_0x00010bf4df40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000107d60b58();
    _objc_retainAutoreleasedReturnValue();
    FUN_10655d3cc(uVar4,uVar2,1);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  puVar3 = PTR_PTR_1126c0960;
  uVar4 = param_4;
  func_0x00010bfe5d80(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf026e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cb7c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c123800();
  _objc_release(uVar4);
  _objc_release(puVar3);
LAB_10655b698:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10655b6b8; end: 10655b6cf; -[SCChatMessageViewModelFactoryV3 userSession] */

void FUN_10655b6b8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x128);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10655b6d0; end: 10655b893; -[SCChatMessageViewModelFactoryV3 .cxx_destruct] */

void FUN_10655b6d0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x128);
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



/* Entry: 10655b894; end: 10655b997; -[SCGroupUpdateChatViewModel initWithMessage:props:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10655b894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c1a6cc0(param_4);
  puStack_38 = PTR_PTR_1126f1b18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithMessage_props__1125e86f8,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bfcf4e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274a5b0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274a5b0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274a5b4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274a5b4) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010c244a80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274a5b8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274a5b8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10655b998; end: 10655ba8f; -[SCGroupUpdateChatViewModel isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10655b998(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lStack_40;
  undefined *puStack_38;
  
  iVar4 = (int)&lStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f1b18;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_isEqual__1125fa0c8,param_3);
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    _objc_retain(param_3);
    iVar4 = (int)*(undefined8 *)(param_1 + _DAT_11274a5b0);
    uVar1 = param_3;
    func_0x00010bf4bc60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0();
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + _DAT_11274a5b8);
      uVar2 = param_3;
      func_0x00010c244a80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071ae0(uVar3);
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10655ba90; end: 10655babf; -[SCGroupUpdateChatViewModel reusableCellIdentifier] */

void FUN_10655ba90(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e9e598);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e9e598);
  return;
}



/* Entry: 10655bac0; end: 10655bac7; -[SCGroupUpdateChatViewModel viewModelType] */

undefined8 FUN_10655bac0(void)

{
  return 1;
}



/* Entry: 10655bac8; end: 10655bb3b; -[SCGroupUpdateChatViewModel bodyContentWidth] */

undefined8 FUN_10655bac8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af270;
  uVar2 = param_2;
  func_0x00010bf0e560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f65a0(param_2);
  func_0x00010c23d600(puVar1,param_3,uVar2,0);
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 10655bb3c; end: 10655bb43; -[SCGroupUpdateChatViewModel needsExtraSpacingOnTop] */

undefined8 FUN_10655bb3c(void)

{
  return 1;
}



/* Entry: 10655bb44; end: 10655bbbb; -[SCGroupUpdateChatViewModel payloadBodyHeight] */

double FUN_10655bb44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  
  puVar1 = PTR_PTR_1126af270;
  uVar2 = param_1;
  func_0x00010bf0e560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f65a0(param_1);
  dVar3 = 1.79769313486232e+308;
  func_0x00010c23d600(puVar1,param_2,uVar2,0);
  _objc_release(uVar2);
  return dVar3 + 2.0;
}



/* Entry: 10655bbbc; end: 10655bbc3; -[SCGroupUpdateChatViewModel payloadVerticalMargin] */

undefined8 FUN_10655bbbc(void)

{
  return 0;
}



/* Entry: 10655bbc4; end: 10655bc37; -[SCGroupUpdateChatViewModel attributedTextForLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10655bbc4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274a5b0);
  lVar1 = param_1;
  func_0x00010bf60940();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107082838(uVar2,lVar1,*(undefined8 *)(param_1 + _DAT_11274a5b4),
                      *(undefined8 *)(param_1 + _DAT_11274a5b8));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10655bc38; end: 10655bc47; -[SCGroupUpdateChatViewModel content] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10655bc38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a5b0);
}



/* Entry: 10655bc48; end: 10655bc97; -[SCGroupUpdateChatViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10655bc48(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274a5b8,0);
  _objc_storeStrong(param_1 + _DAT_11274a5b0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274a5b4,0);
  return;
}



/* Entry: 10655bc98; end: 10655be9f; -[SCMediaChatViewModel initWithMessage:props:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10655bc98(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  double dVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f1b20;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithMessage_props__1125e86f8,param_4,param_5);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bfe0640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    dVar7 = (double)param_1;
    *(double *)((long)puVar1 + (long)_DAT_11274a5d0) = dVar7;
    _objc_release(uVar5);
    fVar6 = SUB84(dVar7,0);
    uVar5 = uVar2;
    func_0x00010c2a5040(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    *(double *)((long)puVar1 + (long)_DAT_11274a5d4) = (double)fVar6;
    _objc_release(uVar5);
    uVar5 = param_4;
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x000107d60b58();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274a5d8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274a5d8) = uVar4;
    _objc_release(uVar3);
    _objc_release(uVar5);
    uVar5 = param_4;
    func_0x00010c27dd80();
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274a5dc) = uVar5;
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274a5e0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274a5e0) = uVar2;
    _objc_retain(uVar2);
    _objc_release(uVar5);
    uVar5 = param_4;
    func_0x00010c15dfc0();
    *(char *)((long)puVar1 + (long)_DAT_11274a5e4) = (char)uVar5;
    uVar5 = param_5;
    func_0x00010bf4c240();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274a5e8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274a5e8) = uVar5;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0cb8c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0720c0();
    *(char *)((long)puVar1 + (long)_DAT_11274a5ec) = (char)uVar5;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0cb8c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0720c0();
    *(char *)((long)puVar1 + (long)_DAT_11274a5f0) = (char)uVar5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10655bea0; end: 10655bee7; -[SCMediaChatViewModel reusableCellIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10655bea0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db9f38);
  return;
}



/* Entry: 10655bee8; end: 10655bfdb; -[SCMediaChatViewModel isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10655bee8(double param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  long lStack_40;
  undefined *puStack_38;
  
  iVar1 = (int)&lStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1b20;
  lStack_40 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_isEqual__1125fa0c8,param_4);
  if (iVar1 != 0) {
    _objc_opt_class(param_2);
    lVar3 = param_4;
    func_0x00010c077980();
    if ((int)lVar3 != 0) {
      _objc_retain(param_4);
      dVar5 = *(double *)(param_2 + _DAT_11274a5d0);
      func_0x00010c0c5120(param_4);
      if ((dVar5 == param_1) &&
         (dVar5 = *(double *)(param_2 + _DAT_11274a5d4), func_0x00010c0c7220(param_4),
         dVar5 == param_1)) {
        lVar4 = *(long *)(param_2 + _DAT_11274a5dc);
        lVar3 = param_4;
        func_0x00010bf1ec00(param_4);
        bVar2 = lVar4 == lVar3;
      }
      else {
        bVar2 = false;
      }
      _objc_release(param_4);
      goto LAB_10655bf9c;
    }
  }
  bVar2 = false;
LAB_10655bf9c:
  _objc_release(param_4);
  return bVar2;
}



/* Entry: 10655bfdc; end: 10655bfe3; -[SCMediaChatViewModel viewModelType] */

undefined8 FUN_10655bfdc(void)

{
  return 3;
}



/* Entry: 10655bfe4; end: 10655bffb; -[SCMediaChatViewModel payloadBodyHeight] */

undefined8 FUN_10655bfe4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c26e2a0();
  return param_2;
}



/* Entry: 10655bffc; end: 10655bfff; -[SCMediaChatViewModel payloadLabelHeight] */

void FUN_10655bffc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2767f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_totalLabelHeight_11267b420);
  return;
}



/* Entry: 10655c000; end: 10655c023; -[SCMediaChatViewModel payloadVerticalMargin] */

undefined8 FUN_10655c000(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12f740();
  uVar1 = 0;
  if (param_1 == 0) {
    uVar1 = 0x4008000000000000;
  }
  return uVar1;
}



/* Entry: 10655c024; end: 10655c083; -[SCMediaChatViewModel bodyContentWidth] */

/* WARNING: Possible PIC construction at 0x00010655c06c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010655c070) */

void FUN_10655c024(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c12f740();
  if ((int)uVar1 == 0) {
    func_0x00010c0f6600(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c26e650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_thumbnailWidth_1126793b8);
  return;
}



/* Entry: 10655c084; end: 10655c0bf; -[SCMediaChatViewModel shouldDisplayTapToLoad] */

undefined8 FUN_10655c084(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c28d620();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c22fd40();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10655c0c0; end: 10655c0ff; -[SCMediaChatViewModel statusLabelMargins] */

undefined8 FUN_10655c0c0(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12f740();
  uVar1 = 0x4000000000000000;
  if (param_1 == 0) {
    uVar1 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  }
  return uVar1;
}



/* Entry: 10655c100; end: 10655c103; -[SCMediaChatViewModel thumbnailWidth] */

void FUN_10655c100(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26e2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_thumbnailSize_1126792d0);
  return;
}



/* Entry: 10655c104; end: 10655c11b; -[SCMediaChatViewModel thumbnailHeight] */

undefined8 FUN_10655c104(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c26e2a0();
  return param_2;
}



/* Entry: 10655c11c; end: 10655c357; -[SCMediaChatViewModel updatedThumbnailViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10655c11c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  
  puVar8 = PTR_PTR_1126cb7f8;
  lVar11 = *(long *)(param_1 + _DAT_11274a5e0);
  puVar12 = (undefined *)0x0;
  if (lVar11 != 0) {
    lVar9 = (long)_DAT_11274a5dc;
    uVar10 = *(undefined8 *)(param_1 + lVar9);
    lVar1 = param_1;
    func_0x00010c074920(param_1);
    lVar2 = param_1;
    func_0x00010c076ee0(param_1);
    lVar3 = param_1;
    func_0x00010c15df40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c15dbc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c122b60();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c122e00();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + _DAT_11274a5e8);
    lVar7 = param_1;
    func_0x00010bf36be0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5a060(puVar8,param_2,lVar11,uVar10,lVar1,lVar2,lVar3,lVar4,lVar5,lVar6,uVar13,
                        lVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar11 = param_1;
    func_0x00010c0cb5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c6f00(puVar8,param_2,lVar11);
    _objc_release(lVar11);
    lVar11 = param_1;
    func_0x00010bf026e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167c60(puVar8,param_2,lVar11);
    _objc_release(lVar11);
    lVar11 = param_1;
    func_0x00010bf50280(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c183b80(puVar8,param_2,lVar11);
    _objc_release(lVar11);
    lVar11 = param_1;
    func_0x00010c0728e0(param_1);
    func_0x00010c1b0d80(puVar8,param_2,lVar11);
    lVar11 = param_1;
    func_0x00010c07d980(param_1);
    func_0x00010c1b43e0(puVar8,param_2,lVar11);
    func_0x00010c172da0(puVar8,param_2,*(undefined8 *)(param_1 + lVar9));
    puVar12 = puVar8;
  }
  func_0x00010c1b4380(puVar12,param_2,*(undefined1 *)(param_1 + _DAT_11274a5e4));
  lVar11 = param_1;
  func_0x00010c07d080(param_1);
  func_0x00010c1b4100(puVar12,param_2,lVar11);
  func_0x00010c26e2a0(param_1);
  func_0x00010c214380(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10655c358; end: 10655c4c7; -[SCMediaChatViewModel thumbnailSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10655c358(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double in_d3;
  double dVar7;
  undefined1 auVar8 [16];
  
  lVar1 = param_1;
  func_0x00010c0cb560();
  dVar4 = 200.0;
  dVar6 = 150.0;
  if ((int)lVar1 == 0) {
    dVar6 = 200.0;
  }
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  dVar7 = dVar4;
  func_0x00010c0f6600(param_1);
  dVar7 = dVar4 + dVar7 * -2.0 + -9.0;
  _objc_release(puVar2);
  dVar4 = dVar6;
  func_0x00010be71020(dVar7,param_1);
  dVar7 = dVar7 - dVar4;
  dVar4 = dVar7 - in_d3;
  func_0x00010bf5d040(param_1);
  dVar4 = dVar4 - dVar7;
  lVar1 = param_1;
  func_0x00010c12f740();
  if ((int)lVar1 != 0) {
    func_0x00010c0f6540(param_1);
    dVar4 = dVar4 - in_d3;
  }
  dVar7 = *(double *)(param_1 + _DAT_11274a5d4);
  if ((dVar7 <= 0.0) || (*(double *)(param_1 + _DAT_11274a5d0) <= 0.0)) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _CGRectGetWidth();
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    dVar5 = dVar7;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _CGRectGetHeight();
    dVar7 = dVar7 / dVar5;
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    dVar7 = dVar7 / *(double *)(param_1 + _DAT_11274a5d0);
  }
  dVar5 = 0.5625;
  if (0.5625 <= dVar7) {
    dVar5 = dVar7;
  }
  dVar7 = dVar4 / dVar5;
  if (dVar6 * dVar5 <= dVar4) {
    dVar4 = dVar6 * dVar5;
    dVar7 = dVar6;
  }
  auVar8._8_8_ = dVar7;
  auVar8._0_8_ = dVar4;
  return auVar8;
}



/* Entry: 10655c4c8; end: 10655c5a3; -[SCMediaChatViewModel _payloadViewInsetsForWidth:maxHeight:] */

undefined8
FUN_10655c4c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_5;
  uVar5 = param_1;
  uVar3 = param_2;
  func_0x00010c0f6760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar5 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  }
  else {
    func_0x00010c11eba0(param_5);
    lVar1 = param_5;
    uVar2 = uVar5;
    uVar4 = uVar3;
    func_0x00010c0f6760(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6540(param_5);
    func_0x00010706aa28(uVar5,uVar3,param_1,param_2,uVar2,uVar4,param_3,param_4,lVar1);
    _objc_release(lVar1);
  }
  return uVar5;
}



/* Entry: 10655c5a4; end: 10655c5b3; -[SCMediaChatViewModel isSending] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10655c5a4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274a5e4);
}



/* Entry: 10655c5b4; end: 10655c5c7; -[SCMediaChatViewModel firstLabelSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10655c5b4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11274a5bc);
}



/* Entry: 10655c5c8; end: 10655c5db; -[SCMediaChatViewModel secondLabelSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10655c5c8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11274a5c0);
}



/* Entry: 10655c5dc; end: 10655c5ef; -[SCMediaChatViewModel thirdLabelSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10655c5dc(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11274a5c4);
}



/* Entry: 10655c5f0; end: 10655c603; -[SCMediaChatViewModel fourthLabelSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10655c5f0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11274a5c8);
}



/* Entry: 10655c604; end: 10655c613; -[SCMediaChatViewModel totalLabelHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10655c604(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a5cc);
}



/* Entry: 10655c614; end: 10655c623; -[SCMediaChatViewModel attributedFirstLabelText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10655c614(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a5f4);
}



/* Entry: 10655c624; end: 10655c633; -[SCMediaChatViewModel attributedSecondLabelText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10655c624(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a5f8);
}



/* Entry: 10655c634; end: 10655c643; -[SCMediaChatViewModel attributedThirdLabelText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10655c634(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a5fc);
}



/* Entry: 10655c644; end: 10655c653; -[SCMediaChatViewModel attributedFourthLabelText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10655c644(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a600);
}



/* Entry: 10655c654; end: 10655c663; -[SCMediaChatViewModel mediaV3] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10655c654(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a5e0);
}



/* Entry: 10655c664; end: 10655c673; -[SCMediaChatViewModel mediaHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10655c664(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a5d0);
}



/* Entry: 10655c674; end: 10655c683; -[SCMediaChatViewModel setMediaHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10655c674(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11274a5d0) = param_1;
  return;
}



/* Entry: 10655c684; end: 10655c693; -[SCMediaChatViewModel mediaWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10655c684(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a5d4);
}



/* Entry: 10655c694; end: 10655c6a3; -[SCMediaChatViewModel setMediaWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10655c694(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11274a5d4) = param_1;
  return;
}



/* Entry: 10655c6a4; end: 10655c6b3; -[SCMediaChatViewModel bodyType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10655c6a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a5dc);
}



/* Entry: 10655c6b4; end: 10655c6c3; -[SCMediaChatViewModel setBodyType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10655c6b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11274a5dc) = param_3;
  return;
}



/* Entry: 10655c6c4; end: 10655c753; -[SCMediaChatViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10655c6c4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274a5e0,0);
  _objc_storeStrong(param_1 + _DAT_11274a600,0);
  _objc_storeStrong(param_1 + _DAT_11274a5fc,0);
  _objc_storeStrong(param_1 + _DAT_11274a5f8,0);
  _objc_storeStrong(param_1 + _DAT_11274a5f4,0);
  _objc_storeStrong(param_1 + _DAT_11274a5d8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274a5e8,0);
  return;
}



/* Entry: 10655c754; end: 10655cc2f; -[SCSavedSnapMediaChatViewModel initWithMessage:props:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10655c754(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
             ulong param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126f1b28;
  puVar4 = &uStack_70;
  uStack_70 = param_3;
  _objc_msgSendSuper2(puVar4,PTR_s_initWithMessage_props__1125e86f8,param_5,param_6);
  if (puVar4 != (undefined8 *)0x0) {
    uVar5 = param_6;
    func_0x00010bf60940();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_5;
    func_0x00010c0cb8c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c071ae0();
    _objc_release(uVar6);
    uVar6 = param_6;
    func_0x00010c07ebe0();
    uVar8 = param_6;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c0ecc20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    uVar8 = param_6;
    func_0x00010c244a80();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bd869d0();
    _objc_release(uVar8);
    puVar11 = PTR__OBJC_CLASS___NSSet_1126ae870;
    uVar8 = param_5;
    func_0x00010c14ba60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    uVar8 = param_5;
    func_0x00010c078120(param_5);
    uVar12 = param_5;
    func_0x00010c0761a0(param_5);
    puVar13 = puVar11;
    func_0x000107087bb0(puVar11,uVar5,uVar9,uVar10,uVar8,uVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x0001070873ac();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)((long)puVar4 + (long)_DAT_11274a604);
    *(undefined **)((long)puVar4 + (long)_DAT_11274a604) = puVar14;
    _objc_release(uVar17);
    _objc_release(puVar13);
    puVar1 = (undefined8 *)((long)puVar4 + (long)_DAT_11274a608);
    func_0x00010bebc4a0(puVar4);
    puVar13 = PTR__OBJC_CLASS___NSSet_1126ae870;
    *puVar1 = param_1;
    puVar1[1] = param_2;
    uVar8 = param_5;
    func_0x00010c1512a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar8;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    _objc_release(uVar8);
    puVar14 = puVar13;
    func_0x000107087f34(puVar13,uVar5,uVar7 & 0xffffffff,uVar6 & 0xffffffff,uVar9,uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x0001070873ac();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = (long)_DAT_11274a60c;
    uVar17 = *(undefined8 *)((long)puVar4 + lVar18);
    *(undefined **)((long)puVar4 + lVar18) = puVar15;
    _objc_release(uVar17);
    _objc_release(puVar14);
    puVar14 = PTR__OBJC_CLASS___NSSet_1126ae870;
    if (*(long *)((long)puVar4 + lVar18) == 0) {
      uVar8 = param_5;
      func_0x00010c151a40(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar8;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      _objc_release(uVar8);
      puVar15 = puVar14;
      func_0x000107087d84(puVar14,uVar5,uVar7 & 0xffffffff,uVar6 & 0xffffffff,uVar9,uVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar15;
      func_0x0001070873ac();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = *(undefined8 *)((long)puVar4 + lVar18);
      *(undefined **)((long)puVar4 + lVar18) = puVar16;
      _objc_release(uVar17);
      _objc_release(puVar15);
      _objc_release(puVar14);
    }
    puVar2 = (undefined8 *)((long)puVar4 + (long)_DAT_11274a610);
    func_0x00010bebc4a0(puVar4);
    *puVar2 = param_1;
    puVar2[1] = param_2;
    uVar6 = param_5;
    func_0x00010c131620();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010708758c();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x0001070873ac();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)((long)puVar4 + (long)_DAT_11274a614);
    *(ulong *)((long)puVar4 + (long)_DAT_11274a614) = uVar8;
    _objc_release(uVar17);
    _objc_release(uVar7);
    puVar3 = (undefined8 *)((long)puVar4 + (long)_DAT_11274a618);
    func_0x00010bebc4a0(puVar4);
    *puVar3 = param_1;
    puVar3[1] = param_2;
    uVar7 = param_5;
    func_0x00010c131460();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x000107087790();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)((long)puVar4 + (long)_DAT_11274a61c);
    *(ulong *)((long)puVar4 + (long)_DAT_11274a61c) = uVar8;
    _objc_release(uVar17);
    lVar18 = (long)_DAT_11274a620;
    func_0x00010bebc4a0(puVar4);
    *(undefined8 *)((long)puVar4 + lVar18) = param_1;
    ((undefined8 *)((long)puVar4 + lVar18))[1] = param_2;
    *(double *)((long)puVar4 + (long)_DAT_11274a624) =
         param_2 + (double)puVar1[1] + (double)puVar2[1] + (double)puVar3[1];
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(puVar13);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar5);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar4;
}



/* Entry: 10655cc30; end: 10655cc6f; -[SCSavedSnapMediaChatViewModel reusableCellIdentifier] */

void FUN_10655cc30(int param_1)

{
  undefined **ppuVar1;
  
  func_0x00010c07d980();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e53cf8;
  if (param_1 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e53cd8;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10655cc70; end: 10655cc77; -[SCSavedSnapMediaChatViewModel viewModelType] */

undefined8 FUN_10655cc70(void)

{
  return 6;
}



/* Entry: 10655cc78; end: 10655cc7f; -[SCSavedSnapMediaChatViewModel canReply] */

undefined8 FUN_10655cc78(void)

{
  return 1;
}



/* Entry: 10655cc80; end: 10655cf6b; -[SCSavedSnapMediaChatViewModel isEqual:] */

undefined8
FUN_10655cc80(double param_1,double param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  ulong *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  ulong uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_5);
  puStack_78 = PTR_PTR_1126f1b28;
  puVar2 = &uStack_80;
  uStack_80 = param_3;
  _objc_msgSendSuper2(puVar2,PTR_s_isEqual__1125fa0c8,param_5);
  puVar3 = PTR_PTR_1126cb560;
  if ((int)puVar2 == 0) {
    uVar12 = 0;
    goto LAB_10655cf3c;
  }
  _objc_retain(param_5);
  _objc_opt_class(puVar3);
  uVar4 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar3);
  uVar1 = param_5;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_5);
  if (uVar1 == 0) {
LAB_10655cf30:
    uVar12 = 0;
  }
  else {
    func_0x00010bfb1780(param_3);
    dVar13 = param_1;
    dVar15 = param_2;
    func_0x00010bfb1780(param_5);
    uVar12 = 0;
    if ((param_1 == dVar13) && (param_2 == dVar15)) {
      func_0x00010c154c00(param_3);
      dVar14 = dVar13;
      dVar16 = dVar15;
      func_0x00010c154c00(param_5);
      uVar12 = 0;
      if ((dVar13 == dVar14) && (dVar15 == dVar16)) {
        func_0x00010c26d1c0(param_3);
        dVar13 = dVar14;
        dVar15 = dVar16;
        func_0x00010c26d1c0(param_5);
        uVar12 = 0;
        if ((dVar14 == dVar13) && (dVar16 == dVar15)) {
          func_0x00010bfb6560(param_3);
          dVar14 = dVar13;
          dVar16 = dVar15;
          func_0x00010bfb6560(param_5);
          uVar12 = 0;
          if ((dVar13 == dVar14) && (dVar15 == dVar16)) {
            uVar4 = param_3;
            func_0x00010bf0dfe0();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = param_5;
            func_0x00010bf0dfe0(param_5);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar4;
            func_0x00010c071b80();
            if ((int)uVar6 != 0) {
              uVar6 = param_3;
              func_0x00010bf0e200();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = param_5;
              func_0x00010bf0e200(param_5);
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar6;
              func_0x00010c071b80();
              if ((int)uVar8 != 0) {
                uVar8 = param_3;
                func_0x00010bf0e640();
                _objc_retainAutoreleasedReturnValue();
                uVar9 = param_5;
                func_0x00010bf0e640(param_5);
                _objc_retainAutoreleasedReturnValue();
                uVar10 = uVar8;
                func_0x00010c071b80();
                if ((int)uVar10 != 0) {
                  func_0x00010bf0e000();
                  _objc_retainAutoreleasedReturnValue();
                  uVar10 = param_5;
                  func_0x00010bf0e000(param_5);
                  _objc_retainAutoreleasedReturnValue();
                  uVar11 = param_3;
                  func_0x00010c071b80();
                  _objc_release(uVar10);
                  _objc_release(param_3);
                  _objc_release(uVar9);
                  _objc_release(uVar8);
                  _objc_release(uVar7);
                  _objc_release(uVar6);
                  _objc_release(uVar5);
                  _objc_release(uVar4);
                  if ((uVar11 & 1) == 0) goto LAB_10655cf30;
                  uVar12 = 1;
                  goto LAB_10655cf34;
                }
                _objc_release(uVar9);
                _objc_release(uVar8);
              }
              _objc_release(uVar7);
              _objc_release(uVar6);
            }
            _objc_release(uVar5);
            _objc_release(uVar4);
            goto LAB_10655cf30;
          }
        }
      }
    }
  }
LAB_10655cf34:
  _objc_release(uVar1);
LAB_10655cf3c:
  _objc_release(param_5);
  return uVar12;
}



/* Entry: 10655cf6c; end: 10655d003; -[SCSavedSnapMediaChatViewModel thumbnailSize] */

undefined1  [16] FUN_10655cf6c(double param_1,undefined8 param_2)

{
  double dVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar2);
  dVar6 = (double)NEON_fminnm(param_1 * 0.3499999940395355,0x4072c00000000000);
  dVar3 = 0.5625;
  func_0x00010c0c7220(param_2);
  dVar4 = dVar3;
  func_0x00010c0c5120(param_2);
  dVar5 = dVar6;
  dVar1 = dVar6 / 0.5625;
  if (dVar3 <= dVar4) {
    dVar5 = dVar6 / 0.5625;
    dVar1 = dVar6;
  }
  auVar7._8_8_ = dVar5;
  auVar7._0_8_ = dVar1;
  return auVar7;
}



/* Entry: 10655d004; end: 10655d083; -[SCSavedSnapMediaChatViewModel _sizeForLabel:] */

undefined1  [16]
FUN_10655d004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined1 auVar1 [16];
  
  if (param_5 != 0) {
    _objc_retain(param_5);
    func_0x00010c0f65a0(param_3);
    func_0x00010c12f740(param_3);
    func_0x0001070880e4(param_1,param_5,param_3);
    _objc_release(param_5);
    auVar1._8_8_ = param_2;
    auVar1._0_8_ = param_1;
    return auVar1;
  }
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 10655d084; end: 10655d097; -[SCSavedSnapMediaChatViewModel firstLabelSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10655d084(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11274a608);
}



/* Entry: 10655d098; end: 10655d0ab; -[SCSavedSnapMediaChatViewModel secondLabelSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10655d098(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11274a610);
}



/* Entry: 10655d0ac; end: 10655d0bf; -[SCSavedSnapMediaChatViewModel thirdLabelSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10655d0ac(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11274a618);
}



/* Entry: 10655d0c0; end: 10655d0d3; -[SCSavedSnapMediaChatViewModel fourthLabelSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10655d0c0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11274a620);
}



/* Entry: 10655d0d4; end: 10655d0e3; -[SCSavedSnapMediaChatViewModel totalLabelHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10655d0d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a624);
}



/* Entry: 10655d0e4; end: 10655d0f3; -[SCSavedSnapMediaChatViewModel attributedFirstLabelText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10655d0e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a604);
}



/* Entry: 10655d0f4; end: 10655d103; -[SCSavedSnapMediaChatViewModel attributedSecondLabelText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10655d0f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a60c);
}



/* Entry: 10655d104; end: 10655d113; -[SCSavedSnapMediaChatViewModel attributedThirdLabelText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10655d104(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a614);
}



/* Entry: 10655d114; end: 10655d123; -[SCSavedSnapMediaChatViewModel attributedFourthLabelText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10655d114(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a61c);
}



/* Entry: 10655d124; end: 10655d183; -[SCSavedSnapMediaChatViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10655d124(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274a61c,0);
  _objc_storeStrong(param_1 + _DAT_11274a614,0);
  _objc_storeStrong(param_1 + _DAT_11274a60c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274a604,0);
  return;
}



/* Entry: 10655d184; end: 10655d1e3;  */

void FUN_10655d184(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e53d18;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e53d18,
                      &PTR____CFConstantStringClassReference_110e53d38,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10655d1e4; end: 10655d257; -[SCGrapheneChatScopeMetric2 init] */

undefined1 * FUN_10655d1e4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f1b30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10655d258; end: 10655d3cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *****
FUN_10655d258(long param_1,undefined8 *****param_2,undefined8 *****param_3,undefined8 *****param_4)

{
  undefined8 *****pppppuVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  undefined *puVar4;
  undefined8 *****pppppuVar5;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 *****pppppuVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined8 ****ppppuVar20;
  long lVar21;
  long lVar22;
  undefined8 ****ppppuStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 ***pppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 ***pppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pppppuVar2 = (undefined8 *****)&pppuStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar1 = param_2;
  pppppuVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar19 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *****)0x0) {
      pppppuVar1 = (undefined8 *****)&UNK_10f382f10;
    }
    else {
      pppppuVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pppppuVar1);
    pppuStack_80 = (undefined8 ****)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&pppuStack_80,auStack_60,&lStack_48,1);
    pppppuVar1 = (undefined8 *****)&UNK_11092a8f8;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_68 = (undefined1 *)&pppuStack_80;
    func_0x00010007e5dc(&puStack_68);
    pppppuVar3 = pppppuVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pppppuVar3 = pppppuVar2;
      param_4 = param_3;
    }
  }
  pppppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pppppuVar5 = (undefined8 *****)&pppuStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar17 = pppppuVar3;
  _objc_retain(pppppuVar1);
  if (pppppuVar2 != (undefined8 *****)0x0) {
    ppppuVar20 = pppppuVar2[1];
    _objc_retain(pppppuVar1);
    if (pppppuVar1 == (undefined8 *****)0x0) {
      pppppuVar2 = (undefined8 *****)&UNK_10f382f10;
    }
    else {
      pppppuVar2 = pppppuVar1;
      _objc_retainAutorelease(pppppuVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar1);
    func_0x00010002b838(auStack_e0,pppppuVar2);
    pppuStack_100 = (undefined8 ****)0x0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&pppuStack_100,auStack_e0,&lStack_c8,1);
    (*(code *)(*ppppuVar20)[3])(ppppuVar20,&UNK_11092a948,&pppuStack_100);
    puStack_e8 = (undefined1 *)&pppuStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pppppuVar17 = pppppuVar5;
    param_4 = pppppuVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pppppuVar17 = pppppuVar5;
      param_4 = pppppuVar3;
    }
  }
  pppppuVar3 = pppppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pppppuVar3;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar1);
  _objc_release(pppppuVar1);
  __Unwind_Resume();
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pppppuVar17);
  _objc_retain(param_4);
  puStack_190 = PTR_PTR_1126f1b38;
  pppppuVar1 = &ppppuStack_198;
  ppppuStack_198 = pppppuVar3;
  _objc_msgSendSuper2(pppppuVar1,PTR_s_init_1125d9248);
  if (pppppuVar1 != (undefined8 *****)0x0) {
    func_0x00010c219b60(pppppuVar1);
    puVar4 = PTR_PTR_1126b1870;
    _objc_alloc();
    func_0x00010c0639c0();
    lVar21 = (long)_DAT_11274a62c;
    uVar18 = *(undefined8 *)((long)pppppuVar1 + lVar21);
    *(undefined **)((long)pppppuVar1 + lVar21) = puVar4;
    _objc_release(uVar18);
    func_0x00010c219b60(*(undefined8 *)((long)pppppuVar1 + lVar21));
    pppppuVar3 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar2 = pppppuVar3;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar5 = pppppuVar17;
    func_0x00010bf44480(pppppuVar17);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar6 = pppppuVar17;
    func_0x00010c29d560(pppppuVar17);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar7 = pppppuVar17;
    func_0x00010bf443a0(pppppuVar17);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar8 = pppppuVar2;
    func_0x00010bf55720();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = (long)_DAT_11274a630;
    uVar18 = *(undefined8 *)((long)pppppuVar1 + lVar22);
    *(undefined8 ******)((long)pppppuVar1 + lVar22) = pppppuVar8;
    _objc_release(uVar18);
    _objc_release(pppppuVar7);
    _objc_release(pppppuVar6);
    _objc_release(pppppuVar5);
    _objc_release(pppppuVar2);
    _objc_release(pppppuVar3);
    func_0x00010c1ee6c0(*(undefined8 *)((long)pppppuVar1 + lVar22));
    func_0x00010befbb60(pppppuVar1);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar9 = *(undefined8 *)((long)pppppuVar1 + lVar21);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar3 = pppppuVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_188 = uVar18;
    uVar10 = *(undefined8 *)((long)pppppuVar1 + lVar21);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar2 = pppppuVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_180 = uVar11;
    uVar12 = *(undefined8 *)((long)pppppuVar1 + lVar21);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar5 = pppppuVar1;
    func_0x00010bfe0660(pppppuVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_178 = uVar13;
    uVar14 = *(undefined8 *)((long)pppppuVar1 + lVar21);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar6 = pppppuVar1;
    func_0x00010c08e400(pppppuVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_170 = uVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar16);
    _objc_release(uVar15);
    _objc_release(pppppuVar6);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(pppppuVar5);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(pppppuVar2);
    _objc_release(uVar10);
    _objc_release(uVar18);
    _objc_release(pppppuVar3);
    _objc_release(uVar9);
  }
  _objc_release(param_4);
  _objc_release(pppppuVar17);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return pppppuVar1;
  }
  ___stack_chk_fail();
  return pppppuVar17;
}


