/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105fe386c; end: 105fe38df; -[SCTalkV3Mixin _runBlockAndUpdateChatVisiblityIfNeeded:] */

void FUN_105fe386c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be3ee00();
  (**(code **)(param_3 + 0x10))(param_3);
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010be3ee00();
  if ((int)uVar1 != (int)uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bed53b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateChatVisibility_112592e90);
    return;
  }
  return;
}



/* Entry: 105fe38e0; end: 105fe390b; -[SCTalkV3Mixin _isChatVisibleToUser] */

byte FUN_105fe38e0(long param_1)

{
  byte bVar1;
  
  if ((*(char *)(param_1 + 0x80) == '\x01') && ((*(byte *)(param_1 + 0x81) & 1) == 0)) {
    bVar1 = *(byte *)(param_1 + 0x82) ^ 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 105fe390c; end: 105fe398b; -[SCTalkV3Mixin _isMonologueConversation:] */

undefined8 FUN_105fe390c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c074920();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = param_3;
    func_0x00010c12a5a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(uVar2,param_2,uVar1);
    _objc_release(uVar1);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105fe398c; end: 105fe3b2f; -[SCTalkV3Mixin _observeRemoteParticipantChangesForConversationId:conversationMetadata:] */

void FUN_105fe398c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0xb0) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c12a300();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xb0) = uVar1;
    _objc_release(uVar3);
    _objc_initWeak(auStack_58,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0xb0);
    puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e0e60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    _objc_retain(param_4);
    uVar1 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105fe3b30; end: 105fe3b83;  */

void FUN_105fe3b30(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be270e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fe3b84; end: 105fe3bff; -[SCTalkV3Mixin _handleChangesToRemoteParticipants:forConversationId:conversationMetadata:] */

void FUN_105fe3b84(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf529e0();
  if (param_3 == 0) {
    func_0x00010bdfb3c0(param_1);
  }
  else if (*(long *)(param_1 + 0x20) == 0) {
    func_0x00010bdf4880(param_1,param_2,param_4,param_5);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105fe3c00; end: 105fe3c5b; -[SCTalkV3Mixin _handleChatPeekEvent:] */

void FUN_105fe3c00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105fe3c5c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010c0c0240(param_3,param_2,&puStack_38,0);
  return;
}



/* Entry: 105fe3c5c; end: 105fe3c67;  */

void FUN_105fe3c5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24fd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),PTR_s_startPeeking_112671978);
  return;
}



/* Entry: 105fe3c68; end: 105fe3d4f; -[SCTalkV3Mixin .cxx_destruct] */

void FUN_105fe3c68(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 105fe3d50; end: 105fe3ef7; -[SCSuccessfulCallMessagePlugin initWithCurrentUserId:shakeToReportScopeExposer:shakeToReportScopeServices:callFeedbackScopeExposer:callFeedbackScopeServices:modularCallLauncher:deckServices:messagingMessageProvider:] */

undefined1 *
FUN_105fe3d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

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
  puStack_68 = PTR_PTR_1126eed90;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
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



/* Entry: 105fe3ef8; end: 105fe4407; -[SCSuccessfulCallMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_105fe3ef8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  double dVar15;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined **ppuStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = *(undefined ***)(param_1 + 0x40);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bf4ce20();
  if ((int)ppuVar3 == 8) {
    ppuVar3 = ppuVar2;
    func_0x00010c253320(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010bf288c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf283e0();
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar2;
    func_0x00010c253320(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010bf288c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bf27e60();
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    uVar13 = *(undefined8 *)(param_1 + 8);
    ppuVar3 = ppuVar1;
    func_0x00010c0cb8c0(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(uVar13);
    _objc_release(ppuVar3);
    puVar6 = PTR_PTR_1126c6e00;
    _objc_alloc();
    dVar15 = (double)((ulong)ppuVar5 & 0xffffffff);
    func_0x00010c01eca0(dVar15);
    lVar7 = param_4;
    func_0x0001070b1c70();
    if ((int)lVar7 == 0) {
      lVar7 = param_4;
      func_0x0001070b1d3c(param_4,*(undefined8 *)(param_1 + 8));
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR_PTR_1126b55b8;
      if (lVar7 == 0) {
        puVar14 = (undefined *)0x0;
      }
      else {
        lVar8 = lVar7;
        func_0x00010c2923e0(lVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7ef20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
      }
      _objc_release(lVar7);
    }
    else {
      puVar14 = PTR_PTR_1126b55b8;
      func_0x00010bfce840();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar3 = ppuVar1;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126c6e08;
    _objc_opt_new(PTR_PTR_1126c6e08);
    func_0x00010c183b80();
    _objc_initWeak(auStack_80,param_1);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105fe4408;
    puStack_a0 = &UNK_1108500c8;
    _objc_retain(puVar14);
    puStack_98 = puVar14;
    lStack_90 = param_1;
    _objc_retain(ppuVar3);
    ppuStack_88 = ppuVar3;
    func_0x00010c1d36c0(puVar9);
    ppuVar4 = ppuVar2;
    func_0x00010c253320();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bf288c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar5;
    func_0x00010bf28560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    ppuVar4 = ppuVar10;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    if (ppuVar5 == (undefined **)0x0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110dbe8f8;
    }
    else {
      ppuVar5 = ppuVar10;
      func_0x00010c272380();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar4);
    func_0x00010c1757c0(puVar9);
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar4 = ppuVar1;
    func_0x00010c0cb9a0(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c0df720(dVar15 * 1000.0,puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c215dc0(puVar9);
    _objc_release(puVar12);
    _objc_release(ppuVar4);
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_105fe4548;
    puStack_c8 = &UNK_1108434b0;
    _objc_copyWeak(auStack_c0,auStack_80);
    func_0x00010c18fea0(puVar9);
    _objc_copyWeak(auStack_e8,auStack_80);
    func_0x00010c18fac0(puVar9);
    puVar12 = PTR_PTR_1126c67d8;
    _objc_alloc(PTR_PTR_1126c67d8);
    puVar11 = PTR_PTR_1126c6e10;
    func_0x00010bf44480(PTR_PTR_1126c6e10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000660(puVar12);
    _objc_release(puVar11);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_release(ppuVar5);
    _objc_release(ppuVar10);
    _objc_release(ppuStack_88);
    _objc_release(puStack_98);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar9);
    _objc_release(ppuVar3);
    _objc_release(puVar14);
    _objc_release(puVar6);
  }
  else {
    puVar12 = (undefined *)0x0;
  }
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 105fe4408; end: 105fe4547;  */

void FUN_105fe4408(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x105fe44b0;
  puStack_58 = &UNK_110858b70;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uStack_48 = uVar2;
  uStack_40 = uVar3;
  uStack_38 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_50);
  return;
}



/* Entry: 105fe4548; end: 105fe4627;  */

void FUN_105fe4548(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0d340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fe4628; end: 105fe466f; -[SCSuccessfulCallMessagePlugin callFeedbackScopeDidDismiss:] */

void FUN_105fe4628(long param_1)

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



/* Entry: 105fe4670; end: 105fe469f; -[SCSuccessfulCallMessagePlugin identifier] */

void FUN_105fe4670(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110eeb898);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110eeb898);
  return;
}



/* Entry: 105fe46a0; end: 105fe46a7; -[SCSuccessfulCallMessagePlugin pluginType] */

undefined8 FUN_105fe46a0(void)

{
  return 0;
}



/* Entry: 105fe46a8; end: 105fe4717; -[SCSuccessfulCallMessagePlugin _exposeShakeToReport] */

void FUN_105fe46a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126c6e18;
  _objc_alloc(PTR_PTR_1126c6e18);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010c045920(puVar3,param_2,uVar1,uVar2,param_1);
  _objc_release(param_1);
  func_0x00010c08b400(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105fe4718; end: 105fe484b; -[SCSuccessfulCallMessagePlugin _exposeCallFeedbackWithCallId:] */

void FUN_105fe4718(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010bf66980(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf66920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar2 = param_1 + 0x60;
  _objc_loadWeakRetained(lVar2);
  uVar4 = uVar1;
  func_0x00010bf55bc0(uVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c141520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = param_1 + 0x60;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf22ac0(uVar4,param_2,param_3,lVar2,PTR_PTR_113369430,uVar3,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20),param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fe484c; end: 105fe494f; -[SCSuccessfulCallMessagePlugin dismissPresentedView] */

void FUN_105fe484c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c150520(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf6f440(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 105fe4950; end: 105fe49a7;  */

void FUN_105fe4950(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fe49a8; end: 105fe49af; -[SCSuccessfulCallMessagePlugin activeConversationIdObservable] */

undefined8 FUN_105fe49a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105fe49b0; end: 105fe49df; -[SCSuccessfulCallMessagePlugin setActiveConversationIdObservable:] */

void FUN_105fe49b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fe49e0; end: 105fe49e7; -[SCSuccessfulCallMessagePlugin activeConversationInformationObservable] */

undefined8 FUN_105fe49e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105fe49e8; end: 105fe4a17; -[SCSuccessfulCallMessagePlugin setActiveConversationInformationObservable:] */

void FUN_105fe49e8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105fe4a18; end: 105fe4a2f; -[SCSuccessfulCallMessagePlugin uiContainer] */

void FUN_105fe4a18(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fe4a30; end: 105fe4a3b; -[SCSuccessfulCallMessagePlugin setUiContainer:] */

void FUN_105fe4a30(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 105fe4a3c; end: 105fe4a53; -[SCSuccessfulCallMessagePlugin presentingViewController] */

void FUN_105fe4a3c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fe4a54; end: 105fe4a5f; -[SCSuccessfulCallMessagePlugin setPresentingViewController:] */

void FUN_105fe4a54(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 105fe4a60; end: 105fe4aff; -[SCSuccessfulCallMessagePlugin .cxx_destruct] */

void FUN_105fe4a60(long param_1)

{
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
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



/* Entry: 105fe4b00; end: 105fe4b0b; +[SCTSuccessfulCallView componentPath] */

undefined ** FUN_105fe4b00(void)

{
  return &PTR____CFConstantStringClassReference_110e35838;
}



/* Entry: 105fe4b0c; end: 105fe4b3f; -[SCTSuccessfulCallView initWithViewModel:componentContext:runtime:] */

void FUN_105fe4b0c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eed98;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105fe4b40; end: 105fe4b8f; -[SCTSuccessfulCallView setViewModel:] */

void FUN_105fe4b40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105fe4b90; end: 105fe4bd3; -[SCTSuccessfulCallView viewModel] */

void FUN_105fe4b90(undefined8 param_1)

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



/* Entry: 105fe4bd4; end: 105fe4bdf; +[SCTMissedCallView componentPath] */

undefined ** FUN_105fe4bd4(void)

{
  return &PTR____CFConstantStringClassReference_110e35858;
}



/* Entry: 105fe4be0; end: 105fe4c13; -[SCTMissedCallView initWithViewModel:componentContext:runtime:] */

void FUN_105fe4be0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eeda0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105fe4c14; end: 105fe4c63; -[SCTMissedCallView setViewModel:] */

void FUN_105fe4c14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105fe4c64; end: 105fe4ca7; -[SCTMissedCallView viewModel] */

void FUN_105fe4c64(undefined8 param_1)

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



/* Entry: 105fe4ca8; end: 105fe4d47; -[SCTSuccessfulCallViewContext initWithConversationId:callId:displayFeedbackTray:] */

undefined8 *
FUN_105fe4ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_38 = PTR_PTR_1126eeda8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 105fe4d48; end: 105fe4d67; +[SCTSuccessfulCallViewContext valdiMarshallableObjectDescriptor] */

void FUN_105fe4d48(undefined8 *param_1)

{
  *param_1 = &PTR_s_conversationId_110905d20;
  param_1[1] = 0;
  param_1[2] = &PTR_s_ob_v_110905cf0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fe4d68; end: 105fe4d8f;  */

undefined8 FUN_105fe4d68(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 105fe4d90; end: 105fe4e0f;  */

void FUN_105fe4d90(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105fe4e6c;
  puStack_30 = &UNK_110842508;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105fe4e10; end: 105fe4e53; -[SCTSuccessfulCallViewModel initWithIsAudio:callDuration:isRecipient:] */

void FUN_105fe4e10(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eedb0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105fe4e54; end: 105fe4e6b; +[SCTSuccessfulCallViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fe4e54(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110905dc8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fe4e6c; end: 105fe4e9b;  */

void FUN_105fe4e6c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105fe4e9c; end: 105fe4ee3; -[SCTMissedCallViewContext initWithConversationId:] */

void FUN_105fe4e9c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eedb8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105fe4ee4; end: 105fe4f0b; +[SCTMissedCallViewContext valdiMarshallableObjectDescriptor] */

void FUN_105fe4ee4(undefined8 *param_1)

{
  *param_1 = &PTR_s_conversationId_110905e70;
  param_1[1] = &PTR_s_SCBridgeObservable_110905f00;
  param_1[2] = &PTR_s_ob_v_110905e28;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fe4f0c; end: 105fe4f33;  */

undefined8 FUN_105fe4f0c(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 105fe4f34; end: 105fe4f97;  */

void FUN_105fe4f34(undefined8 param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x000105fe50c8(FUN_105fe5078);
  _objc_retainBlock(&puStack_48);
  func_0x000105fe50d8();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fe4f98; end: 105fe4fbb;  */

undefined8 FUN_105fe4f98(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(undefined4 *)(param_2 + 1));
  return 0;
}



/* Entry: 105fe4fbc; end: 105fe501f;  */

void FUN_105fe4fbc(undefined8 param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x000105fe50c8(0x105fe5094);
  _objc_retainBlock(&puStack_48);
  func_0x000105fe50d8();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fe5020; end: 105fe505f; -[SCTMissedCallViewModel initWithIsRecipient:isAudio:] */

void FUN_105fe5020(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eedc0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105fe5060; end: 105fe5077; +[SCTMissedCallViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fe5060(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110905f18;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fe5078; end: 105fe50af;  */

void FUN_105fe5078(void)

{
  FUN_105fe50b0();
  return;
}



/* Entry: 105fe50b0; end: 105fe50ef;  */

void FUN_105fe50b0(long param_1,ulong param_2)

{
  ulong uStack0000000000000000;
  
  uStack0000000000000000 = param_2 & 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x000105fe50c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105fe50f0; end: 105fe53eb; -[SCClearConversationsScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe50f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
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
  
  puVar1 = PTR_PTR_1126c6e20;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11273c788;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_11273c78c;
  lVar5 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bfb9e20();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar7 = lVar22;
  func_0x00010bfb9e60();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = (long)_DAT_11273c790;
  lVar8 = param_1 + lVar23;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = (long)_DAT_11273c794;
  lVar10 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c0d5940();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar13 = lVar24;
  func_0x00010bfba0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + lVar23;
  _objc_loadWeakRetained();
  lVar14 = lVar23;
  func_0x00010bf3afa0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_11273c798;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c08ed40();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_11273c79c;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_11273c7a0;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_11273c7a4;
  _objc_loadWeakRetained();
  func_0x00010c05b2a0(puVar1,param_2,lVar4,lVar6,lVar7,lVar9,lVar12,lVar13,lVar14,param_1,lVar16,
                      lVar18,lVar20,lVar21);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar23);
  _objc_release(lVar13);
  _objc_release(lVar24);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar22);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11273c7a8;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105fe53ec; end: 105fe545f; -[SCClearConversationsScopeEntryPoint clearFeedViewControllerDidDealloc:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe53ec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11273c7a8;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf3b040(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105fe5460; end: 105fe54eb; -[SCClearConversationsScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe5460(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273c7a4);
  _objc_destroyWeak(param_1 + _DAT_11273c7a0);
  _objc_destroyWeak(param_1 + _DAT_11273c798);
  _objc_destroyWeak(param_1 + _DAT_11273c79c);
  _objc_destroyWeak(param_1 + _DAT_11273c794);
  _objc_destroyWeak(param_1 + _DAT_11273c78c);
  _objc_destroyWeak(param_1 + _DAT_11273c790);
  _objc_destroyWeak(param_1 + _DAT_11273c7a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273c788);
  return;
}



/* Entry: 105fe54ec; end: 105fe5743;  */

undefined * FUN_105fe54ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0;
  uVar1 = param_1;
  func_0x00010bf96da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0020();
  _objc_release(uVar1);
  if ((*(byte *)(puStack_78 + 3) & 1) == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126c6e28;
    _objc_alloc(PTR_PTR_1126c6e28);
    uVar1 = param_1;
    func_0x00010bfa3d00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x000107cf8700(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bef0c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf866a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_retain();
    func_0x00010bf64de0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb5960(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(puVar5);
    func_0x00010c01b620(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  __Block_object_dispose(&uStack_a0,8);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar7;
}



/* Entry: 105fe5744; end: 105fe5777;  */

void FUN_105fe5744(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105fe5778; end: 105fe58e7; -[SCClearFeedDataSource initWithUserId:friendsFeedDataCoordinator:messagingExperimentService:circumstanceEngine:plusServices:] */

undefined1 *
FUN_105fe5778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126eedc8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar4;
    _objc_release(uVar5);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_7;
    _objc_release(uVar4);
    func_0x00010bec7780(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105fe58e8; end: 105fe590f; -[SCClearFeedDataSource viewModels] */

void FUN_105fe58e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fe5910; end: 105fe5a53; -[SCClearFeedDataSource _subscribeToFeedItemsObservable] */

void FUN_105fe5910(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  _objc_release(uVar5);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bfba080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105fe5a54; end: 105fe5a9b;  */

void FUN_105fe5a54(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4820();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fe5a9c; end: 105fe5c7f; -[SCClearFeedDataSource _updateWithFeedItems:] */

void FUN_105fe5a9c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        lVar3 = *(long *)(lStack_118 + lVar6 * 8);
        FUN_105fe54ec(lVar3,*(undefined8 *)(param_1 + 0x20));
        if (lVar3 != 0) {
          func_0x00010befa120(puVar1);
        }
        _objc_release(lVar3);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_initWeak(auStack_128,param_1);
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_105fe5c80;
  puStack_140 = &UNK_110841fb0;
  _objc_copyWeak(auStack_130,auStack_128);
  _objc_retain(puVar1);
  puStack_138 = puVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_158);
  _objc_release(puStack_138);
  _objc_destroyWeak(auStack_130);
  _objc_destroyWeak(auStack_128);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_130);
  _objc_destroyWeak(auStack_128);
  __Unwind_Resume();
  lVar2 = param_3 + 0x28;
  _objc_loadWeakRetained(lVar2);
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bf51e00(uVar4);
  func_0x00010bee3aa0(lVar2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105fe5c80; end: 105fe5ccb;  */

void FUN_105fe5c80(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00(uVar2);
  func_0x00010bee3aa0(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105fe5ccc; end: 105fe5e4b; -[SCClearFeedDataSource _updateViewModelsAndReload:] */

void FUN_105fe5ccc(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  puVar5 = *(undefined **)(param_1 + 8);
  _objc_retain(puVar5);
  _objc_retain(param_3);
  if (puVar5 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == (undefined *)0x0) {
      _objc_release(puVar5);
    }
    else {
      puVar6 = puVar5;
      func_0x00010c071ae0(puVar5,param_2,param_3);
      _objc_release(param_3);
      _objc_release(puVar5);
      if (((ulong)puVar6 & 1) != 0) goto LAB_105fe5e30;
    }
    puVar5 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar5;
    _objc_release(uVar4);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar6 = param_3;
    func_0x00010bf529e0();
    if (puVar6 != (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
      do {
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = param_3;
        func_0x00010c0dfd40(param_3,param_2,puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar5,param_2,puVar1,puVar3);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(puVar1);
        puVar6 = puVar6 + 1;
        puVar1 = param_3;
        func_0x00010bf529e0();
      } while (puVar6 < puVar1);
    }
    puVar6 = puVar5;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar6;
    _objc_release(uVar4);
    func_0x00010be8a960(param_1);
  }
  _objc_release(puVar5);
LAB_105fe5e30:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fe5e4c; end: 105fe5e77; -[SCClearFeedDataSource _reloadFeed] */

void FUN_105fe5e4c(long param_1)

{
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010c129040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fe5e78; end: 105fe5e8f; -[SCClearFeedDataSource delegate] */

void FUN_105fe5e78(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fe5e90; end: 105fe5e9b; -[SCClearFeedDataSource setDelegate:] */

void FUN_105fe5e90(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 105fe5e9c; end: 105fe5f1b; -[SCClearFeedDataSource .cxx_destruct] */

void FUN_105fe5e9c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105fe5f1c; end: 105fe619b; +[SCClearFeedHelper displayClearConversationAlertWithConfirmationHandler:] */

void FUN_105fe5f1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc7f18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7f18,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  func_0x00010c160fc0(puVar2);
  puVar3 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e35898;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e35898,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110e358b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e358b8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010c235c40(puVar4);
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar1);
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)(param_3 + 0x20);
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105fe61ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar7 + 0x10))(lVar7,1);
    return;
  }
  return;
}



/* Entry: 105fe619c; end: 105fe61f3;  */

void FUN_105fe619c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105fe61ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 105fe61f4; end: 105fe656b; -[SCClearFeedTableLoadingView initWithFriendsFeedLoadingStatusStream:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105fe61f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar1);
  puStack_68 = PTR_PTR_1126eedd0;
  puVar2 = &uStack_70;
  uStack_70 = param_2;
  _objc_msgSendSuper2(0,0,param_1,0x4050800000000000,puVar2,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
    func_0x00010c1b71a0(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c087500(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c087500(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar3 = puVar2;
    func_0x00010c087500(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c087500(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar2);
    _objc_release(puVar3);
    puVar1 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    lVar10 = (long)_DAT_11273c7d8;
    uVar8 = *(undefined8 *)((long)puVar2 + lVar10);
    *(undefined **)((long)puVar2 + lVar10) = puVar1;
    _objc_release(uVar8);
    func_0x00010c1a8560(*(undefined8 *)((long)puVar2 + lVar10));
    func_0x00010c219b60(*(undefined8 *)((long)puVar2 + lVar10));
    func_0x00010befbb60(puVar2);
    func_0x00010bee3fc0(puVar2);
    puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar8 = *(undefined8 *)((long)puVar2 + (long)_DAT_11273c7dc);
    *(undefined **)((long)puVar2 + (long)_DAT_11273c7dc) = puVar1;
    _objc_release(uVar8);
    func_0x00010bef9040(puVar2);
    _objc_initWeak(auStack_78,puVar2);
    uVar8 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010c09d440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0e0ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar7 = uVar6;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar2 + (long)_DAT_11273c7e0);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11273c7e0) = uVar7;
    _objc_release(uVar9);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_4);
  return puVar2;
}



/* Entry: 105fe656c; end: 105fe65cb;  */

void FUN_105fe656c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09d440(param_2);
  _objc_release(param_2);
  func_0x00010bee3fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fe65cc; end: 105fe6677; -[SCClearFeedTableLoadingView _updateViewsWithLoadingStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe65cc(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  
  ppuVar1 = *(undefined ***)(param_1 + _DAT_11273c7d8);
  if (param_3 == 3) {
    func_0x00010c2558c0();
    ppuVar1 = &PTR____CFConstantStringClassReference_110e200f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e200f8,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 1;
  }
  else {
    func_0x00010c24dbc0(ppuVar1);
    uVar3 = 2;
    func_0x00010b0af104();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = param_1;
  func_0x00010c087500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(lVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beda1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateLabelConstraintsWithType__112594220,uVar3);
  return;
}



/* Entry: 105fe6678; end: 105fe6be3; -[SCClearFeedTableLoadingView _updateLabelConstraintsWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe6678(float param_1,undefined *param_2,undefined8 param_3,undefined *param_4)

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
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  uint uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar8 = param_4;
  func_0x00010c0875c0();
  uVar22 = (uint)puVar8;
  if (puVar1 != param_4) {
    func_0x00010c1b71c0(param_2);
    lVar27 = (long)_DAT_11273c7e4;
    uVar22 = (uint)*(undefined8 *)(param_2 + lVar27);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x00010bf65be0();
    if (param_4 == (undefined *)0x2) {
      puVar8 = param_2;
      func_0x00010c087500();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = param_2;
      func_0x00010c1408a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar9;
      func_0x00010bf49500();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      puVar8 = param_2;
      func_0x00010c087500(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4c0e0();
      func_0x00010c1e3380(param_1 + 1.0,puVar1);
      _objc_release(puVar8);
      puVar8 = param_2;
      func_0x00010c087500();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = param_2;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = param_2;
      func_0x00010c087500();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      lVar26 = (long)_DAT_11273c7d8;
      uVar14 = *(undefined8 *)(param_2 + lVar26);
      func_0x00010c1408a0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar13;
      func_0x00010bf493c0(0x402e000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)(param_2 + lVar26);
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = param_2;
      func_0x00010c08e400(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar24 = uVar16;
      func_0x00010bf493c0(0x402e000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar18 = *(undefined8 *)(param_2 + lVar26);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = param_2;
      func_0x00010bf348e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar18;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar25 = *(undefined8 *)(param_2 + lVar27);
      *(undefined **)(param_2 + lVar27) = puVar21;
      _objc_release(uVar25);
      _objc_release(uVar20);
      _objc_release(puVar19);
      _objc_release(uVar18);
      _objc_release(uVar24);
      _objc_release(puVar17);
      _objc_release(uVar16);
      _objc_release(puVar15);
      _objc_release(uVar14);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      uVar22 = (uint)*(undefined8 *)(param_2 + lVar27);
      func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      _objc_release();
    }
    else if (param_4 == (undefined *)0x1) {
      puVar1 = param_2;
      func_0x00010c087500();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar1;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_2;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = param_2;
      func_0x00010c087500();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = param_2;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar12;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = param_2;
      func_0x00010c087500();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar17;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = param_2;
      func_0x00010c08e400(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar19;
      func_0x00010bf49460();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_2;
      func_0x00010c087500();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_2;
      func_0x00010c1408a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010bf49500();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar24 = *(undefined8 *)(param_2 + lVar27);
      *(undefined **)(param_2 + lVar27) = puVar7;
      _objc_release(uVar24);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar21);
      _objc_release(puVar19);
      _objc_release(puVar17);
      _objc_release(puVar15);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar1);
      uVar22 = (uint)*(undefined8 *)(param_2 + lVar27);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x00010beef8c0();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
    return;
  }
  ___stack_chk_fail();
  if ((byte)puVar1[_DAT_11273c7e8] == uVar22) {
    return;
  }
  puVar1[_DAT_11273c7e8] = (char)uVar22;
  if ((uVar22 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(puVar1 + _DAT_11273c7d8),PTR_s_startAnimating_112671118);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar1 + _DAT_11273c7d8),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 105fe6be4; end: 105fe6c17; -[SCClearFeedTableLoadingView setIsOnscreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe6be4(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_11273c7e8) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11273c7e8) = (char)param_3;
  if ((param_3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11273c7d8),PTR_s_startAnimating_112671118);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273c7d8),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 105fe6c18; end: 105fe6c4b; -[SCClearFeedTableLoadingView handleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe6c18(long param_1)

{
  param_1 = param_1 + _DAT_11273c7ec;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb4d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fe6c4c; end: 105fe6c6b; -[SCClearFeedTableLoadingView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe6c4c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11273c7ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fe6c6c; end: 105fe6c7f; -[SCClearFeedTableLoadingView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe6c6c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273c7ec,param_3);
  return;
}



/* Entry: 105fe6c80; end: 105fe6c8f; -[SCClearFeedTableLoadingView isOnscreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105fe6c80(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273c7e8);
}



/* Entry: 105fe6c90; end: 105fe6c9f; -[SCClearFeedTableLoadingView label] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105fe6c90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273c7f0);
}



/* Entry: 105fe6ca0; end: 105fe6cdf; -[SCClearFeedTableLoadingView setLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe6ca0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273c7f0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fe6ce0; end: 105fe6cef; -[SCClearFeedTableLoadingView labelConstraintsType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105fe6ce0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273c7d4);
}



/* Entry: 105fe6cf0; end: 105fe6cff; -[SCClearFeedTableLoadingView setLabelConstraintsType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe6cf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11273c7d4) = param_3;
  return;
}



/* Entry: 105fe6d00; end: 105fe6d0f; -[SCClearFeedTableLoadingView tapGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105fe6d00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273c7dc);
}



/* Entry: 105fe6d10; end: 105fe6d4f; -[SCClearFeedTableLoadingView setTapGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe6d10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273c7dc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fe6d50; end: 105fe6dcb; -[SCClearFeedTableLoadingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe6d50(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273c7dc,0);
  _objc_storeStrong(param_1 + _DAT_11273c7f0,0);
  _objc_destroyWeak(param_1 + _DAT_11273c7ec);
  _objc_storeStrong(param_1 + _DAT_11273c7e4,0);
  _objc_storeStrong(param_1 + _DAT_11273c7d8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273c7e0,0);
  return;
}



/* Entry: 105fe6dcc; end: 105fe7367; -[SCClearFeedTableView initWithUserId:friendsFeedDataCoordinator:friendsFeedLoadingStatusStream:friendsFeedFetcher:conversationManager:nativeMessagingFeedManager:clearConversationActionHandler:legacyChatTooltipsService:messagingExperimentService:circumstanceEngine:plusServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105fe6dcc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_b8 = PTR_PTR_1126eedd8;
  uVar14 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar1 = &uStack_c0;
  uStack_c0 = param_1;
  _objc_msgSendSuper2(uVar14,uVar15,uVar16,uVar17,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar13 = (long)_DAT_11273c7f4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_4;
    _objc_release(uVar2);
    lVar13 = (long)_DAT_11273c7f8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_5;
    _objc_release(uVar2);
    lVar13 = (long)_DAT_11273c7fc;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_6;
    _objc_release(uVar2);
    lVar13 = (long)_DAT_11273c800;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_8;
    _objc_release(uVar2);
    lVar13 = (long)_DAT_11273c804;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_9;
    _objc_release(uVar2);
    lVar13 = (long)_DAT_11273c808;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c6e30;
    _objc_alloc();
    func_0x00010c05b2e0();
    lVar13 = (long)_DAT_11273c80c;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar13));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UITableView_1126aed40;
    _objc_alloc();
    func_0x00010c013de0(uVar14,uVar15,uVar16,uVar17);
    lVar13 = (long)_DAT_11273c810;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar3;
    _objc_release(uVar14);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar13));
    _objc_release(puVar3);
    func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                        *(undefined8 *)((long)puVar1 + lVar13));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fcde0(*(undefined8 *)((long)puVar1 + lVar13));
    _objc_release(puVar3);
    func_0x00010c1eeb20(0x404c000000000000,*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c189840(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar13));
    uVar14 = *(undefined8 *)((long)puVar1 + lVar13);
    _objc_opt_class(PTR_PTR_1126c6e38);
    func_0x00010c125fe0(uVar14);
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar13));
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar14;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar15;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c274200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar16;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar17;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar11);
    _objc_release(uVar17);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar16);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar15);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar14);
    _objc_release(puVar4);
    _objc_release(uVar2);
    func_0x00010c28a960(puVar1);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)(param_3 + _DAT_11273c80c);
  func_0x00010c29db80(lVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bf529e0();
  _objc_release(lVar12);
  return (undefined8 *)(ulong)(lVar13 == 0);
}



/* Entry: 105fe7368; end: 105fe73b3; -[SCClearFeedTableView isEmpty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105fe7368(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11273c80c);
  func_0x00010c29db80(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  return lVar2 == 0;
}



/* Entry: 105fe73b4; end: 105fe73d7; -[SCClearFeedTableView updateSubviews] */

void FUN_105fe73b4(undefined8 param_1)

{
  func_0x00010c28c060();
                    /* WARNING: Could not recover jumptable at 0x00010c09bbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_loadMoreFeedItemsIfCloseToLoadin_112604900);
  return;
}



/* Entry: 105fe73d8; end: 105fe7743; -[SCClearFeedTableView emptyPlaceHolder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe73d8(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  float fVar15;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_11273c814;
  lVar12 = *(long *)(param_1 + lVar14);
  if (lVar12 == 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    func_0x00010c213040();
    ppuVar2 = &PTR____CFConstantStringClassReference_110e20318;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e20318,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar1);
    _objc_release(ppuVar2);
    fVar15 = 0.0;
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar1);
    _objc_release(puVar3);
    uVar13 = *(undefined8 *)(param_1 + lVar14);
    *(undefined **)(param_1 + lVar14) = puVar1;
    _objc_retain(puVar1);
    _objc_release(uVar13);
    func_0x00010befbb60(param_1);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14));
    func_0x00010bf4c0e0(*(undefined8 *)(param_1 + lVar14));
    uVar4 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1;
    func_0x00010c08de00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar4;
    func_0x00010bf49480(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar12);
    _objc_release(uVar4);
    func_0x00010c1e3380(fVar15 + 1.0,uVar13);
    uVar5 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1;
    func_0x00010c2793a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf49520(0xc034000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar12);
    _objc_release(uVar5);
    func_0x00010c1e3380(fVar15 + 1.0,uVar4);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar6 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1;
    func_0x00010c274200(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010bf493c0(0x4042000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010bf34860(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(lVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(lVar12);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar13);
    lVar12 = *(long *)(param_1 + lVar14);
  }
  lVar14 = lVar12;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    lVar11 = (long)_DAT_11273c818;
    lVar12 = *(long *)(lVar14 + lVar11);
    if (lVar12 == 0) {
      puVar3 = PTR_PTR_1126c6e40;
      _objc_alloc();
      func_0x00010c0164a0();
      uVar13 = *(undefined8 *)(lVar14 + lVar11);
      *(undefined **)(lVar14 + lVar11) = puVar3;
      _objc_release(uVar13);
      func_0x00010c18b5e0(*(undefined8 *)(lVar14 + lVar11));
      lVar12 = *(long *)(lVar14 + lVar11);
    }
    _objc_retain(lVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar12);
  return;
}



/* Entry: 105fe7744; end: 105fe77bf; -[SCClearFeedTableView loadingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe7744(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11273c818;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126c6e40;
    _objc_alloc();
    func_0x00010c0164a0();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105fe77c0; end: 105fe78fb; -[SCClearFeedTableView updateViewVisibilities] */

/* WARNING: Possible PIC construction at 0x000105fe78a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105fe78d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105fe78ac) */
/* WARNING: Removing unreachable block (ram,0x000105fe78d4) */
/* WARNING: Removing unreachable block (ram,0x000105fe78dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe77c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273c7fc);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd9360();
  _objc_release(uVar1);
  lVar5 = (long)_DAT_11273c810;
  lVar3 = *(long *)(param_1 + lVar5);
  if ((int)uVar2 == 0) {
    func_0x00010c211660();
    lVar3 = param_1;
    func_0x00010c071780();
    if ((int)lVar3 != 0) {
      func_0x00010bf8ece0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  func_0x00010c267d00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c09d4e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar3 == lVar4) {
    return;
  }
  lVar3 = param_1;
  func_0x00010c09d4e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211660(*(undefined8 *)(param_1 + lVar5));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105fe78fc; end: 105fe7977; -[SCClearFeedTableView tableView:willDisplayCell:forRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe78fc(long param_1)

{
  long lVar1;
  long lVar2;
  long in_x4;
  
  func_0x00010c142240();
  lVar1 = *(long *)(param_1 + _DAT_11273c80c);
  func_0x00010c29db80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (in_x4 < lVar2 + -6) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c09bbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_loadMoreConversationsIfPossibleF_1126048f8,0)
  ;
  return;
}



/* Entry: 105fe7978; end: 105fe79af; -[SCClearFeedTableView loadMoreFeedItemsIfCloseToLoadingView] */

void FUN_105fe7978(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bebbde0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c09bbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_loadMoreConversationsIfPossibleF_1126048f8,0);
    return;
  }
  return;
}



/* Entry: 105fe79b0; end: 105fe7a17; -[SCClearFeedTableView _showingLoadingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105fe79b0(double param_1,double param_2,long param_3)

{
  long lVar1;
  double dVar2;
  
  lVar1 = (long)_DAT_11273c810;
  func_0x00010bf4d5e0(*(undefined8 *)(param_3 + lVar1));
  dVar2 = param_2;
  func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar1));
  _CGRectGetHeight();
  func_0x00010bf4cdc0(*(undefined8 *)(param_3 + lVar1));
  return param_2 - (param_1 - dVar2) < 336.0;
}



/* Entry: 105fe7a18; end: 105fe7a5f; -[SCClearFeedTableView tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105fe7a18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273c80c);
  func_0x00010c29db80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105fe7a60; end: 105fe7b27; -[SCClearFeedTableView tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe7a60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  func_0x00010bf6e060(param_3,param_2,&PTR____CFConstantStringClassReference_110e358f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273c80c);
  func_0x00010c29db80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c142240(param_4);
  _objc_release(param_4);
  uVar3 = uVar1;
  func_0x00010c0dfd40(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0(param_3,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105fe7b28; end: 105fe7b57; -[SCClearFeedTableView reloadTableViewIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe7b28(long param_1)

{
  func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_11273c810));
                    /* WARNING: Could not recover jumptable at 0x00010c28c070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateViewVisibilities_112680a40);
  return;
}


