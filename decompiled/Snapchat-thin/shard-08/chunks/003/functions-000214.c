/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105fbe368; end: 105fbe4eb;  */

void FUN_105fbe368(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c28d4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_2;
    func_0x00010c28d4a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x105fbe46c;
    puStack_40 = &UNK_110903fa0;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    lVar2 = lVar1;
    uStack_38 = uVar3;
    func_0x0001006372a4(lVar1,&puStack_58);
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained(param_1);
      func_0x00010be8b8e0();
      _objc_release(param_1);
    }
    _objc_release(lVar2);
    _objc_release(uStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105fbe4ec; end: 105fbe56b; -[SCVoiceNoteMessageComposerPlugin _getOrCreateMessageSubjectForMessageId:] */

void FUN_105fbe4ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_assert_owner(param_1 + 0xb8);
  puVar1 = *(undefined **)(param_1 + 0x98);
  func_0x00010c0e00e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_opt_new(PTR_PTR_1126ae820);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x98),param_2,puVar1,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fbe56c; end: 105fbe573; -[SCVoiceNoteMessageComposerPlugin activeConversationIdObservable] */

undefined8 FUN_105fbe56c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 105fbe574; end: 105fbe58b; -[SCVoiceNoteMessageComposerPlugin uiContainer] */

void FUN_105fbe574(long param_1)

{
  _objc_loadWeakRetained(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fbe58c; end: 105fbe597; -[SCVoiceNoteMessageComposerPlugin setUiContainer:] */

void FUN_105fbe58c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 200,param_3);
  return;
}



/* Entry: 105fbe598; end: 105fbe59f; -[SCVoiceNoteMessageComposerPlugin activeConversationInformationObservable] */

undefined8 FUN_105fbe598(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 105fbe5a0; end: 105fbe5cf; -[SCVoiceNoteMessageComposerPlugin setActiveConversationInformationObservable:] */

void FUN_105fbe5a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fbe5d0; end: 105fbe5d7; -[SCVoiceNoteMessageComposerPlugin messageViewEvents] */

undefined8 FUN_105fbe5d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 105fbe5d8; end: 105fbe607; -[SCVoiceNoteMessageComposerPlugin setMessageViewEvents:] */

void FUN_105fbe5d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fbe608; end: 105fbe61f; -[SCVoiceNoteMessageComposerPlugin chatScrollHandler] */

void FUN_105fbe608(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fbe620; end: 105fbe62b; -[SCVoiceNoteMessageComposerPlugin setChatScrollHandler:] */

void FUN_105fbe620(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xe0,param_3);
  return;
}



/* Entry: 105fbe62c; end: 105fbe77f; -[SCVoiceNoteMessageComposerPlugin .cxx_destruct] */

void FUN_105fbe62c(long param_1)

{
  _objc_destroyWeak(param_1 + 0xe0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_destroyWeak(param_1 + 200);
  _objc_storeStrong(param_1 + 0xc0,0);
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



/* Entry: 105fbe780; end: 105fbea7f; -[SCVoiceNotePlaybackController initWithMessage:conversationId:isGroupConversation:isCurrentUserSender:chatNoteAnimationThumbnailFetcher:audioNotePlayer:userTrackedLogger:startPlaybackObservable:visibilityObservable:messagingMessageProvider:] */

undefined8 *
FUN_105fbe780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

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
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126eeb30;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_4;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x10) = param_5;
    *(undefined1 *)((long)puVar1 + 0x81) = param_6;
    _objc_retain(param_12);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[1];
    puVar1[1] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[2];
    puVar1[2] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[3];
    puVar1[3] = param_9;
    _objc_release(uVar2);
    puVar1[0xc] = 0;
    puVar1[0xb] = 0x3ff0000000000000;
    *(undefined1 *)(puVar1 + 0xd) = 0;
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar2 = param_11;
    func_0x00010bf870a0(param_11);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105fbea80; end: 105fbeac7;  */

void FUN_105fbea80(long param_1,int param_2)

{
  func_0x00010bf1f3c0();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 0) {
    func_0x00010bed2180();
  }
  else {
    func_0x00010bec80a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fbeac8; end: 105fbeaef; -[SCVoiceNotePlaybackController playbackFinishedEvents] */

void FUN_105fbeac8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fbeaf0; end: 105fbeb17; -[SCVoiceNotePlaybackController playbackStatePublisher] */

void FUN_105fbeaf0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fbeb18; end: 105fbeb3f; -[SCVoiceNotePlaybackController playbackFinishedObservable] */

void FUN_105fbeb18(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fbeb40; end: 105fbebaf; -[SCVoiceNotePlaybackController handlePlayButtonTap:] */

void FUN_105fbeb40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,PTR_PTR_1133566c0);
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,PTR_PTR_1133566b8);
    if ((int)uVar1 != 0) {
      func_0x00010be70be0(param_1);
    }
  }
  else {
    func_0x00010be74540(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fbebb0; end: 105fbed6b; -[SCVoiceNotePlaybackController getSamplesForSampleCount:callback:] */

void FUN_105fbebb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c0cbe00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c6c48;
  _objc_alloc(PTR_PTR_1126c6c48);
  uVar4 = uVar1;
  func_0x00010bf026e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010beea380(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c01f0e0(puVar2);
  _objc_release(lVar3);
  _objc_release(uVar4);
  _objc_initWeak(auStack_68,param_1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  func_0x00010c1153c0(uVar4);
  _objc_release(uVar4);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 105fbed6c; end: 105fbee13;  */

void FUN_105fbed6c(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  if (param_2 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_105fbee14;
    puStack_38 = &UNK_110848708;
    _objc_copyWeak(auStack_28,param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
    uStack_30 = uVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_release(uStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 105fbee14; end: 105fbee47;  */

void FUN_105fbee14(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bededa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fbee48; end: 105fbeefb; -[SCVoiceNotePlaybackController handlePlaybackSpeedChanged:] */

void FUN_105fbee48(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_2);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010bdf1a20(param_2);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105fbeefc; end: 105fbef2f;  */

void FUN_105fbeefc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be2e300(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105fbef30; end: 105fbf0d3; -[SCVoiceNotePlaybackController handleOnWaveformScrub:] */

void FUN_105fbef30(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126c6c50;
    _objc_opt_new(PTR_PTR_1126c6c50);
    func_0x00010c1b1940();
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c0cbe00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf026e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167c40(puVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c15ffa0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c07a420();
    *(char *)(param_1 + 0x68) = (char)uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    if (*(char *)(param_1 + 0x68) == '\x01') {
      func_0x00010be70be0(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bdf1a20(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105fbf0d4; end: 105fbf0ff;  */

void FUN_105fbf0d4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2d3c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fbf100; end: 105fbf113; -[SCVoiceNotePlaybackController handleSeek:] */

void FUN_105fbf100(double param_1,long param_2)

{
  *(double *)(param_2 + 0x60) = param_1 / 1000.0;
  return;
}



/* Entry: 105fbf114; end: 105fbf2df; -[SCVoiceNotePlaybackController _handleStartPlaybackEvent:] */

void FUN_105fbf114(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(ulong *)(param_1 + 0x78);
  _objc_retain();
  _objc_retain(uVar4);
  if (uVar1 == uVar4) {
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_release(uVar1);
LAB_105fbf1b0:
    uVar3 = param_3;
    func_0x00010c0cb900();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(ulong *)(param_1 + 0x88);
    func_0x00010c0cbe00(uVar1,param_2,*(undefined8 *)(param_1 + 0x70));
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0cb8c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar3);
    _objc_retain(uVar4);
    if (uVar3 == uVar4) {
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar4);
      _objc_release(uVar1);
      _objc_release(uVar3);
    }
    else {
      if (uVar4 == 0) {
        _objc_release();
        goto LAB_105fbf2bc;
      }
      uVar2 = uVar3;
      func_0x00010c071ae0(uVar3,param_2,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar4);
      _objc_release(uVar1);
      _objc_release(uVar3);
      if ((uVar2 & 1) == 0) goto LAB_105fbf2c8;
    }
    uVar1 = param_3;
    func_0x00010c0cb780();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0b4ca0();
    uVar3 = *(ulong *)(param_1 + 0x70);
    func_0x00010c0ecae0();
    _objc_release(uVar1);
    if (uVar4 == uVar3) {
      func_0x00010be74540(param_1);
    }
  }
  else {
    uVar3 = uVar1;
    if (uVar4 != 0) {
      func_0x00010c071ae0(uVar1,param_2,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar1);
      _objc_release(uVar1);
      if ((int)uVar3 == 0) goto LAB_105fbf2c8;
      goto LAB_105fbf1b0;
    }
LAB_105fbf2bc:
    _objc_release(uVar1);
    _objc_release(uVar3);
  }
LAB_105fbf2c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fbf2e0; end: 105fbf30f; -[SCVoiceNotePlaybackController _clearPlayerSession] */

void FUN_105fbf2e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fbf310; end: 105fbf41b; -[SCVoiceNotePlaybackController _handlePlaybackSpeedChangedHelper:] */

void FUN_105fbf310(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c15ffa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd860(param_1,uVar1,param_3,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar3 = *(ulong *)(param_2 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c15ffa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c07a420(uVar3,param_3,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar3);
  if ((uVar4 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c15ffa0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24fe20(uVar1,param_3,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  *(undefined8 *)(param_2 + 0x58) = param_1;
  return;
}



/* Entry: 105fbf41c; end: 105fbf4bb; -[SCVoiceNotePlaybackController _handleOnWaveformScrubHelper] */

void FUN_105fbf41c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c15ffa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1572a0(uVar3,uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(char *)(param_1 + 0x68) == '\x01') {
    *(undefined1 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be74550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__play_11257aaf0);
    return;
  }
  return;
}



/* Entry: 105fbf4bc; end: 105fbf55f; -[SCVoiceNotePlaybackController _play] */

void FUN_105fbf4bc(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bdf1a20(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105fbf560; end: 105fbf58b;  */

void FUN_105fbf560(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be74740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fbf58c; end: 105fbf643; -[SCVoiceNotePlaybackController _playHelper] */

void FUN_105fbf58c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c15ffa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd860(uVar3,uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c15ffa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24fe20(uVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fbf644; end: 105fbf69f; -[SCVoiceNotePlaybackController _pause] */

void FUN_105fbf644(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c15ffa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5ea0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fbf6a0; end: 105fbf867; -[SCVoiceNotePlaybackController _createPlayerSessionIfNecessaryWithCompletion:] */

void FUN_105fbf6a0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x78) != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      puVar1 = PTR_PTR_1126c6c48;
      _objc_alloc(PTR_PTR_1126c6c48);
      uVar2 = *(undefined8 *)(param_1 + 0x88);
      func_0x00010c0cbe00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf026e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010beea380(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010c01f0e0(puVar1);
      _objc_release(lVar3);
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_initWeak(auStack_58,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(param_3);
      func_0x00010bf57aa0(uVar4);
      _objc_release(uVar4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      _objc_release(puVar1);
    }
    else {
      (**(code **)(param_3 + 0x10))(param_3);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105fbf868; end: 105fbf8bb;  */

void FUN_105fbf868(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2e360();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fbf8bc; end: 105fbf9f7; -[SCVoiceNotePlaybackController _handlePlayerSession:completion:] */

void FUN_105fbf8bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0ff320();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar1 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  (**(code **)(param_4 + 0x10))(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105fbf9f8; end: 105fbfa3f;  */

void FUN_105fbf9f8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2e220();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fbfa40; end: 105fbfb3f; -[SCVoiceNotePlaybackController _handlePlaybackEvent:] */

void FUN_105fbfa40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105fbfb40;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x105fbfb58;
  puStack_58 = &UNK_110842e18;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105fbfb70;
  puStack_80 = &UNK_110842e18;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_105fbfc74;
  puStack_a8 = &UNK_110842e18;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_105fbfcb8;
  puStack_d0 = &UNK_110842e18;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x105fbfcd0;
  puStack_f8 = &UNK_110849810;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x105fbfce8;
  puStack_120 = &UNK_110842e18;
  uStack_118 = param_1;
  uStack_f0 = param_1;
  uStack_c8 = param_1;
  uStack_a0 = param_1;
  uStack_78 = param_1;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010c0bf440(param_3,param_2,&puStack_48,&puStack_70,&puStack_98,&puStack_c0,&puStack_e8,
                      &puStack_110,&puStack_138);
  return;
}



/* Entry: 105fbfb40; end: 105fbfb6f;  */

void FUN_105fbfb40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),PTR_s_next__112614028,
             PTR_PTR_1133566c0);
  return;
}



/* Entry: 105fbfb70; end: 105fbfc73;  */

void FUN_105fbfb70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),param_2,
                      PTR____kCFBooleanTrue_11034ab68);
  func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),param_2,PTR_PTR_1133566b8);
  puVar1 = PTR_PTR_1126c6c40;
  _objc_alloc(PTR_PTR_1126c6c40);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010c0ecae0(uVar2);
  func_0x00010c0df7c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(lVar6 + 0x88);
  uVar2 = *(undefined8 *)(lVar6 + 0x78);
  func_0x00010c0cbe00(uVar4,param_2,*(undefined8 *)(lVar6 + 0x70));
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02b800(puVar1,param_2,puVar3,uVar2,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105fbfc74; end: 105fbfcb7;  */

/* WARNING: Possible PIC construction at 0x000105fbfc94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105fbfc98) */

void FUN_105fbfc74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),PTR_s_next__112614028,
             PTR____kCFBooleanTrue_11034ab68);
  return;
}



/* Entry: 105fbfcb8; end: 105fbfcef;  */

void FUN_105fbfcb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),PTR_s_next__112614028,
             PTR_PTR_1133566b0);
  return;
}



/* Entry: 105fbfcf0; end: 105fbfdcf; -[SCVoiceNotePlaybackController _updateSamplesWithCallback:] */

void FUN_105fbfcf0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(param_3);
  func_0x00010c0cbe00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf53840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  (**(code **)(param_3 + 0x10))(param_3,uVar1,0);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105fbfdd0; end: 105fbff9b; -[SCVoiceNotePlaybackController _voiceNoteDurationMS] */

void FUN_105fbfdd0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  lVar6 = *(long *)(param_1 + 0x88);
  func_0x00010c0cbe00(lVar6,param_2,*(undefined8 *)(param_1 + 0x70));
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = lVar1;
  func_0x00010bf4ce20();
  lVar5 = lVar1;
  if ((int)lVar6 == 6) {
    func_0x00010c0dba60();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf0ed00();
    _objc_retainAutoreleasedReturnValue();
LAB_105fbfe4c:
    _objc_release(lVar5);
    if (lVar6 != 0) {
      lVar5 = lVar6;
      func_0x00010c0dba60();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (lVar5 == 0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        lVar2 = lVar5;
        func_0x00010c0c4bc0(lVar5);
        func_0x00010c0df820(puVar7,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(lVar5);
LAB_105fbff74:
      _objc_release(lVar6);
      goto LAB_105fbff7c;
    }
  }
  else {
    lVar6 = lVar1;
    func_0x00010bf4ce20();
    if ((int)lVar6 == 7) {
      lVar6 = lVar1;
      func_0x00010c242c40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar6;
      func_0x00010c131be0();
      if ((int)lVar2 != 0xf) {
        puVar7 = (undefined *)0x0;
        goto LAB_105fbff74;
      }
      lVar2 = lVar1;
      func_0x00010c242c40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c131e00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0dbae0();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar6);
      if ((int)lVar4 == 1) {
        func_0x00010c242c40();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar5;
        func_0x00010c131e00();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar2;
        func_0x00010bf0ed00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        goto LAB_105fbfe4c;
      }
    }
  }
  puVar7 = (undefined *)0x0;
LAB_105fbff7c:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105fbff9c; end: 105fc0063; -[SCVoiceNotePlaybackController _subscribeToPlaybackEvents] */

void FUN_105fbff9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105fc0064; end: 105fc00ab;  */

void FUN_105fc0064(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be30cc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fc00ac; end: 105fc00bb; -[SCVoiceNotePlaybackController _unsubscribeFromPlaybackEvents] */

void FUN_105fc00ac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fc00bc; end: 105fc017b; -[SCVoiceNotePlaybackController .cxx_destruct] */

void FUN_105fc00bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
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



/* Entry: 105fc017c; end: 105fc02a3; -[SCVoiceNoteTranscriptionPresenter initWithVoiceNoteTranscriptionService:uiContainer:userTrackedLogger:notificationPool:messagingMessageProvider:] */

undefined1 *
FUN_105fc017c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126eeb38;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x38) = 0;
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105fc02a4; end: 105fc04e7; -[SCVoiceNoteTranscriptionPresenter handleTranscriptionMoreButtonTappedForMessage:] */

void FUN_105fc02a4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  if (param_3 == 0) goto LAB_105fc04a4;
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x00010bf4ce20();
    if ((int)lVar3 == 6) {
      lVar7 = lVar2;
      func_0x00010c0dba60();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar3 = lVar2;
      func_0x00010bf4ce20();
      if ((int)lVar3 == 7) {
        lVar3 = lVar2;
        func_0x00010c242c40();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar3;
        func_0x00010c131be0();
        _objc_release(lVar3);
        if ((int)lVar7 == 0xf) {
          lVar3 = lVar2;
          func_0x00010c242c40();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar3;
          func_0x00010c131e00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar3);
          goto LAB_105fc039c;
        }
      }
      lVar7 = 0;
    }
LAB_105fc039c:
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010bf0ed00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c292cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c087f00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(uVar4);
    func_0x00010bea56a0(param_1);
    _objc_initWeak(auStack_68,param_1);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105fc04e8;
    puStack_78 = &UNK_1108434b0;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x0001000d76cc("APPSTORE",&puStack_90);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar6);
    _objc_release(lVar7);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_105fc04a4:
  _objc_release(param_3);
  return;
}



/* Entry: 105fc04e8; end: 105fc0513;  */

void FUN_105fc04e8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7c9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fc0514; end: 105fc0553; -[SCVoiceNoteTranscriptionPresenter _setLocale:] */

void FUN_105fc0514(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x38);
  return;
}



/* Entry: 105fc0554; end: 105fc058f; -[SCVoiceNoteTranscriptionPresenter _locale] */

void FUN_105fc0554(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fc0590; end: 105fc080f; -[SCVoiceNoteTranscriptionPresenter _presentMoreOptionsMenu] */

void FUN_105fc0590(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_78;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126b10a0;
  FUN_105fc3fd4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d0f20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105fc0810;
  puStack_88 = &UNK_110852cd0;
  _objc_copyWeak(auStack_80,auStack_78);
  puVar3 = puVar2;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x000105fc3fec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar4;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x105fc08fc;
  puStack_b0 = &UNK_110852cd0;
  puVar7 = auStack_78;
  _objc_copyWeak(auStack_a8);
  puVar4 = puVar2;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b10a8;
  _objc_alloc(PTR_PTR_1126b10a8);
  func_0x00010c019f40();
  func_0x00010c18b5e0();
  func_0x00010c10c360(puVar5);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_80);
  puVar1 = auStack_78;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  puVar6 = puVar1;
  __Unwind_Resume(puVar1);
  pcStack_d8 = FUN_105fc0810;
  puStack_100 = puVar2;
  puStack_f8 = puVar4;
  puStack_f0 = puVar3;
  puStack_e8 = puVar1;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_copyWeak(auStack_108,puVar6 + 0x20);
  _objc_retain(puVar7);
  func_0x00010bf83000(puVar7);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_108);
  _objc_release(puVar7);
  return;
}



/* Entry: 105fc0810; end: 105fc08c7;  */

void FUN_105fc0810(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf83000(param_2);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105fc08c8; end: 105fc0943;  */

void FUN_105fc08c8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5f5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fc0944; end: 105fc0a07; -[SCVoiceNoteTranscriptionPresenter _menuGiveFeedbackTapped:] */

void FUN_105fc0944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010be02d40(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105fc0a08; end: 105fc0a33;  */

void FUN_105fc0a08(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb9220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fc0a34; end: 105fc0a3b; -[SCVoiceNoteTranscriptionPresenter _menuDoneTapped:] */

void FUN_105fc0a34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissMenu_completion__11255e4f0,param_3,0)
  ;
  return;
}



/* Entry: 105fc0a3c; end: 105fc0b23; -[SCVoiceNoteTranscriptionPresenter _dismissMenu:completion:] */

void FUN_105fc0a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010bf83000(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105fc0b24; end: 105fc0b57;  */

void FUN_105fc0b24(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfb580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fc0b58; end: 105fc0bdf; -[SCVoiceNoteTranscriptionPresenter _detachMenuContainer:] */

void FUN_105fc0b58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105fc0be0;
  puStack_30 = &UNK_110849530;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf6f440(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105fc0be0; end: 105fc0bf3;  */

void FUN_105fc0be0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105fc0bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105fc0bf4; end: 105fc0bfb; -[SCVoiceNoteTranscriptionPresenter actionSheetDidDismiss:] */

void FUN_105fc0bf4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfb590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__detachMenuContainer__11255c700,0);
  return;
}



/* Entry: 105fc0bfc; end: 105fc0c03; -[SCVoiceNoteTranscriptionPresenter _removeFeedbackScreen] */

void FUN_105fc0bfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeFeedbackScreen_112628b68);
  return;
}



/* Entry: 105fc0c04; end: 105fc0cf7; -[SCVoiceNoteTranscriptionPresenter _sendFeedbackEventWithThumbsUp:reasons:] */

void FUN_105fc0c04(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c6c58;
  _objc_opt_new(PTR_PTR_1126c6c58);
  lVar4 = param_4;
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_4;
    func_0x00010bf446e0(param_4,param_2,&PTR____CFConstantStringClassReference_110dbf078);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c227000(puVar1,param_2,param_3);
  func_0x00010c1e8080(puVar1,param_2,lVar4);
  lVar2 = param_1;
  func_0x00010be4f460(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6fa0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(lVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105fc0cf8; end: 105fc0d3f; -[SCVoiceNoteTranscriptionPresenter _showFeedbackScreen] */

void FUN_105fc0cf8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c6c60;
  _objc_alloc();
  func_0x00010c0567c0();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bef83f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_addFeedbackScreen_11259baa0);
  return;
}



/* Entry: 105fc0d40; end: 105fc0d73; -[SCVoiceNoteTranscriptionPresenter didProvidePositiveFeedback] */

void FUN_105fc0d40(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be9f1a0(param_1,param_2,1,0);
  func_0x00010be8c0e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be7b5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentFeedbackNotification_11257c708);
  return;
}



/* Entry: 105fc0d74; end: 105fc0da7; -[SCVoiceNoteTranscriptionPresenter didProvideNegativeFeedbackWithReasons:] */

void FUN_105fc0d74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010be9f1a0(param_1,param_2,0,param_3);
  func_0x00010be8c0e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be7b5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentFeedbackNotification_11257c708);
  return;
}



/* Entry: 105fc0da8; end: 105fc0dab; -[SCVoiceNoteTranscriptionPresenter didCancelFeedback] */

void FUN_105fc0da8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeFeedbackScreen_1125809d8);
  return;
}



/* Entry: 105fc0dac; end: 105fc0de7; -[SCVoiceNoteTranscriptionPresenter _presentFeedbackNotification] */

void FUN_105fc0dac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000105fc4064();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec66c0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fc0de8; end: 105fc0e47; -[SCVoiceNoteTranscriptionPresenter _submitSIGNotification:] */

void FUN_105fc0de8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afde0;
  func_0x00010bf54760(PTR_PTR_1126afde0,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105fc0e48; end: 105fc0e4f; -[SCVoiceNoteTranscriptionPresenter locale] */

undefined8 FUN_105fc0e48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105fc0e50; end: 105fc0e7f; -[SCVoiceNoteTranscriptionPresenter setLocale:] */

void FUN_105fc0e50(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105fc0e80; end: 105fc0eeb; -[SCVoiceNoteTranscriptionPresenter .cxx_destruct] */

void FUN_105fc0e80(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 105fc0eec; end: 105fc0f67; -[SCVoiceNoteFeedbackButton layoutSubviews] */

void FUN_105fc0eec(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126eeb40;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_1;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c271420(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d620();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 105fc0f68; end: 105fc0fc3; -[SCVoiceNoteFeedbackButton setHighlighted:] */

void FUN_105fc0f68(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126eeb40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setHighlighted__112647c38);
  if (param_3 != 0) {
    func_0x00010c07d660(param_1);
    func_0x00010c1fadc0(param_1);
  }
  return;
}



/* Entry: 105fc0fc4; end: 105fc104b; -[SCVoiceNoteFeedbackButton setSelected:] */

void FUN_105fc0fc4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126eeb40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setSelected__11265c598);
  func_0x00010c07d660();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 105fc104c; end: 105fc10e7; -[SCVoiceNoteTranscriptionFeedbackController initWithUIContainer:delegate:] */

undefined1 *
FUN_105fc104c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eeb48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105fc10e8; end: 105fc1227; -[SCVoiceNoteTranscriptionFeedbackController feedbackView] */

void FUN_105fc10e8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
    _objc_initWeak(auStack_48,param_1);
    puVar1 = PTR_PTR_1126c6c68;
    _objc_alloc();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105fc1228;
    puStack_58 = &UNK_110871868;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_copyWeak(auStack_78,auStack_48);
    func_0x00010c0316e0();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x18);
    _objc_retain(lVar3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  else {
    _objc_retain(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105fc1228; end: 105fc1287;  */

void FUN_105fc1228(long param_1,int param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 0) {
    func_0x00010bdff040();
  }
  else {
    func_0x00010bdff060();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fc1288; end: 105fc12b3;  */

void FUN_105fc1288(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fc12b4; end: 105fc135b; -[SCVoiceNoteTranscriptionFeedbackController addFeedbackScreen] */

void FUN_105fc12b4(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105fc135c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105fc135c; end: 105fc1387;  */

void FUN_105fc135c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc6c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fc1388; end: 105fc13df; -[SCVoiceNoteTranscriptionFeedbackController removeFeedbackScreen] */

void FUN_105fc1388(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105fc13e0;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105fc13e0; end: 105fc13e7;  */

void FUN_105fc13e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8c110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__removeFeedbackScreenSafe_1125809e0);
  return;
}



/* Entry: 105fc13e8; end: 105fc177b; -[SCVoiceNoteTranscriptionFeedbackController _setupFeedbackScreenIfNeeded] */

void FUN_105fc13e8(double param_1,undefined8 param_2,double param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  double dVar23;
  
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_alloc_init();
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  func_0x00010c222380(puVar2);
  puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  func_0x00010befbb60(puVar3);
  puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  func_0x00010befbb60(puVar5);
  func_0x00010bef9040(puVar6);
  lVar7 = param_4;
  func_0x00010bfa45a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(puVar5);
  func_0x000100594f4c();
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x00010c14c960(0,0,param_1 + param_3,0,puVar5);
  func_0x00010c14c960(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),puVar6);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar21 = lVar7;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar21;
  func_0x00010bf493c0(0);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  dVar23 = 0.5;
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  lVar12 = lVar10;
  func_0x00010bf493c0((param_1 + param_3) * 0.5 - dVar23);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar7;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar5;
  func_0x00010c2a5060(puVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar13;
  func_0x00010bf49520(0);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar5;
  func_0x00010bfe0660(puVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar16;
  func_0x00010bf49520(0);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar19);
  _objc_release(lVar18);
  _objc_release(puVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(puVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(puVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(puVar8);
  _objc_release(lVar21);
  uVar20 = *(undefined8 *)(param_4 + 0x20);
  *(undefined **)(param_4 + 0x20) = puVar2;
  _objc_release(uVar20);
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    return;
  }
  ___stack_chk_fail();
  lVar21 = *(long *)(puVar3 + 0x20);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar21;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar21);
  if (lVar7 != 0) {
    return;
  }
  func_0x00010beac980(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar3 + 0x10),PTR_s_attachUI__1125a0c08,*(undefined8 *)(puVar3 + 0x20)
            );
  return;
}



/* Entry: 105fc177c; end: 105fc17f3; -[SCVoiceNoteTranscriptionFeedbackController _addFeedbackScreenSafe] */

void FUN_105fc177c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    return;
  }
  func_0x00010beac980(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_attachUI__1125a0c08,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105fc17f4; end: 105fc1863; -[SCVoiceNoteTranscriptionFeedbackController _removeFeedbackScreenSafe] */

void FUN_105fc17f4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_detachUI__1125b96b8,0);
    return;
  }
  return;
}



/* Entry: 105fc1864; end: 105fc188f; -[SCVoiceNoteTranscriptionFeedbackController _didProvidePositiveFeedback] */

void FUN_105fc1864(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf78d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fc1890; end: 105fc18d7; -[SCVoiceNoteTranscriptionFeedbackController _didProvideNegativeFeedbackWithReasons:] */

void FUN_105fc1890(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf78ce0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fc18d8; end: 105fc1903; -[SCVoiceNoteTranscriptionFeedbackController _didCancelFeedback] */

void FUN_105fc18d8(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf72cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fc1904; end: 105fc192f; -[SCVoiceNoteTranscriptionFeedbackController _didTapOutsideFeedback] */

void FUN_105fc1904(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf72cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fc1930; end: 105fc1973; -[SCVoiceNoteTranscriptionFeedbackController .cxx_destruct] */

void FUN_105fc1930(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105fc1974; end: 105fc1a4f; -[SCVoiceNoteTranscriptionFeedbackView initWithOnSubmitBlock:onCancelBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105fc1974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eeb50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273c028);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273c028) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273c02c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273c02c) = uVar2;
    _objc_release(uVar3);
    func_0x00010beabc80(puVar1);
    func_0x00010be3bc80(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105fc1a50; end: 105fc1b07; -[SCVoiceNoteTranscriptionFeedbackView _setupContinerUI] */

void FUN_105fc1a50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c219b60(param_1,param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x1d);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(uVar2);
  func_0x00010c2a5060(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf49420(0x4071800000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fc1b08; end: 105fc2db3; -[SCVoiceNoteTranscriptionFeedbackView _initializeSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fc1b08(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
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
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined *puVar31;
  undefined8 uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bdf4ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,lVar1);
  puVar31 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493c0(0x4038000000000000,lVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  lStack_88 = lVar4;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c08e400(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bf493c0(0x4038000000000000,lVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  lStack_80 = lVar7;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1;
  func_0x00010c1408a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar8;
  func_0x00010bf493c0(0xc038000000000000,lVar8,param_2,lVar37);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_78 = lVar33;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar31,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(lVar33);
  _objc_release(lVar37);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bdece80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,lVar2);
  puVar31 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf1ff80(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf493c0(0x4020000000000000,lVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  lStack_a0 = lVar5;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c08e400(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010bf493a0(lVar6,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar2;
  lStack_98 = lVar8;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar1;
  func_0x00010c1408a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar37;
  func_0x00010bf493a0(lVar37,param_2,lVar33);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_90 = lVar34;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_a0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar31,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar37);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bdedb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,lVar3);
  lVar4 = param_1;
  func_0x00010bdedb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,lVar4);
  lVar5 = param_1;
  func_0x00010bdef720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,lVar5);
  lVar6 = param_1;
  func_0x00010bdedae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,lVar6);
  puVar31 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar7 = lVar3;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar7;
  func_0x00010bf493a0(lVar7,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar3;
  lStack_d0 = lVar37;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar33;
  func_0x00010bf493c0(0xc028000000000000,lVar33,param_2,lVar34);
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar5;
  lStack_c8 = lVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar35;
  func_0x00010bf493c0(0x4038000000000000,lVar35,param_2,lVar36);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar5;
  lStack_c0 = lVar11;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar12;
  func_0x00010bf493c0(0xc01e000000000000,lVar12,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar6;
  lStack_b8 = lVar14;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar16;
  func_0x00010bf493a0(lVar16,param_2,lVar17);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar6;
  lStack_b0 = lVar18;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar5;
  func_0x00010bf348e0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010bf493a0(lVar19,param_2,lVar21);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_a8 = lVar20;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_d0,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar31,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(lVar20);
  _objc_release(lVar21);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar10);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar37);
  _objc_release(lVar8);
  _objc_release(lVar7);
  uVar32 = *(undefined8 *)(param_1 + _DAT_11273c030);
  *(long *)(param_1 + _DAT_11273c030) = lVar6;
  _objc_retain();
  _objc_release(uVar32);
  lVar15 = param_1;
  func_0x00010bded2e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,lVar15);
  lVar13 = param_1;
  func_0x00010bdedae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,lVar13);
  puVar31 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar36 = lVar4;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar15;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar36;
  func_0x00010bf493a0(lVar36,param_2,lVar35);
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar4;
  lStack_100 = lVar10;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar15;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar34;
  func_0x00010bf493c0(0xc028000000000000,lVar34,param_2,lVar33);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar15;
  lStack_f8 = lVar37;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar8;
  func_0x00010bf493a0(lVar8,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar15;
  lStack_f0 = lVar16;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar17;
  func_0x00010bf493c0(0x401e000000000000,lVar17,param_2,lVar18);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar13;
  lStack_e8 = lVar19;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar15;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar11;
  func_0x00010bf493a0(lVar11,param_2,lVar20);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  lStack_e0 = lVar21;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar15;
  func_0x00010bf348e0(lVar15);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar14;
  func_0x00010bf493a0(lVar14,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_d8 = lVar22;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_100,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar31,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(lVar22);
  _objc_release(lVar12);
  _objc_release(lVar14);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar11);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar7);
  _objc_release(lVar8);
  _objc_release(lVar37);
  _objc_release(lVar33);
  _objc_release(lVar34);
  _objc_release(lVar10);
  _objc_release(lVar35);
  _objc_release(lVar36);
  uVar32 = *(undefined8 *)(param_1 + _DAT_11273c034);
  *(long *)(param_1 + _DAT_11273c034) = lVar13;
  _objc_retain();
  _objc_release(uVar32);
  lVar14 = param_1;
  func_0x00010bdedb20();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar14;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar8;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  lVar35 = (long)_DAT_11273c038;
  uVar32 = *(undefined8 *)(param_1 + lVar35);
  *(long *)(param_1 + lVar35) = lVar7;
  _objc_release(uVar32);
  _objc_release(lVar8);
  lVar37 = lVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar37;
  func_0x00010bf493c0(0,lVar37,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar36 = (long)_DAT_11273c03c;
  uVar32 = *(undefined8 *)(param_1 + lVar36);
  *(long *)(param_1 + lVar36) = lVar7;
  _objc_release(uVar32);
  _objc_release(lVar8);
  _objc_release(lVar37);
  func_0x00010befbb60(param_1,param_2,lVar14);
  puVar31 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar10 = lVar14;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar10;
  func_0x00010bf493a0(lVar10,param_2,lVar34);
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar14;
  lStack_120 = lVar33;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar37;
  func_0x00010bf493a0(lVar37,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uStack_110 = *(undefined8 *)(param_1 + lVar36);
  uStack_108 = *(undefined8 *)(param_1 + lVar35);
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_118 = lVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_120,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar31,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(lVar7);
  _objc_release(lVar8);
  _objc_release(lVar37);
  _objc_release(lVar33);
  _objc_release(lVar34);
  _objc_release();
  func_0x000105fc407c();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bdf0660(param_1,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar33 = (long)_DAT_11273c040;
  uVar32 = *(undefined8 *)(param_1 + lVar33);
  *(long *)(param_1 + lVar33) = lVar7;
  _objc_release(uVar32);
  _objc_release(lVar10);
  func_0x00010befbb60(lVar14,param_2,*(undefined8 *)(param_1 + lVar33));
  puVar31 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar23 = *(undefined8 *)(param_1 + lVar33);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar23;
  func_0x00010bf493a0(uVar23,param_2,lVar37);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar33);
  uStack_138 = uVar30;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar24;
  func_0x00010bf493a0(uVar24,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lVar33);
  uStack_130 = uVar28;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar14;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar25;
  func_0x00010bf493a0(uVar25,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_128 = uVar32;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_138,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar31,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar32);
  _objc_release(lVar7);
  _objc_release(uVar25);
  _objc_release(uVar28);
  _objc_release(lVar8);
  _objc_release(uVar24);
  _objc_release(uVar30);
  _objc_release(lVar37);
  _objc_release();
  func_0x000105fc4094();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bdf0660(param_1,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  lVar34 = (long)_DAT_11273c044;
  uVar32 = *(undefined8 *)(param_1 + lVar34);
  *(long *)(param_1 + lVar34) = lVar7;
  _objc_release(uVar32);
  _objc_release(uVar23);
  func_0x00010befbb60(lVar14,param_2,*(undefined8 *)(param_1 + lVar34));
  puVar31 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar25 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar25;
  func_0x00010bf493a0(uVar25,param_2,lVar37);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar34);
  uStack_158 = uVar24;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar23;
  func_0x00010bf493a0(uVar23,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + lVar34);
  uStack_150 = uVar30;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + lVar33);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar26;
  func_0x00010bf493c0(0x4010000000000000,uVar26,param_2,uVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar34);
  uStack_148 = uVar28;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar14;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar29;
  func_0x00010bf493a0(uVar29,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_140 = uVar32;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_158,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar31,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar32);
  _objc_release(lVar7);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar30);
  _objc_release(lVar8);
  _objc_release(uVar23);
  _objc_release(uVar24);
  _objc_release(lVar37);
  _objc_release(uVar25);
  lVar7 = param_1;
  func_0x00010bdf3080();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = (long)_DAT_11273c048;
  uVar32 = *(undefined8 *)(param_1 + lVar37);
  *(long *)(param_1 + lVar37) = lVar7;
  _objc_release(uVar32);
  func_0x00010c195460(*(undefined8 *)(param_1 + lVar37),param_2,0);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar37));
  puVar31 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar30 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar30;
  func_0x00010bf493c0(0x403e000000000000,uVar30,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar37);
  uStack_168 = uVar28;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar24;
  func_0x00010bf493a0(uVar24,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_160 = uVar32;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_168,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar31,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar32);
  _objc_release(lVar7);
  _objc_release(uVar24);
  _objc_release(uVar28);
  _objc_release(lVar8);
  _objc_release(uVar30);
  lVar12 = param_1;
  func_0x00010bdebc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,lVar12);
  lVar8 = lVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar8;
  func_0x00010bf493c0(0xc038000000000000,lVar8,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar8);
  func_0x00010c1e3380(0x443b8000,lVar11);
  puVar31 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar36 = lVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar36;
  func_0x00010bf493c0(0x4020000000000000,lVar36,param_2,uVar32);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar12;
  lStack_188 = lVar35;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar10;
  func_0x00010bf493a0(lVar10,param_2,lVar34);
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar12;
  lStack_180 = lVar33;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar37;
  func_0x00010bf49480(0xc02c000000000000,lVar37,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_178 = lVar8;
  lStack_170 = lVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_188,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar31,param_2,puVar9);
  _objc_release(lVar13);
  _objc_release(lVar6);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar37);
  _objc_release(lVar33);
  _objc_release(lVar34);
  _objc_release(lVar10);
  _objc_release(lVar35);
  _objc_release(uVar32);
  _objc_release(lVar36);
  func_0x00010bed4680(param_1);
  _objc_release(lVar11);
  _objc_release(lVar12);
  _objc_release(lVar14);
  _objc_release(lVar15);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar31 = PTR_PTR_1126aea58;
  _objc_opt_new(PTR_PTR_1126aea58);
  func_0x00010c213040();
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar31,param_2,puVar9);
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar31,param_2,puVar9);
  _objc_release(puVar9);
  func_0x00010c1bdb00(puVar31,param_2,4);
  func_0x00010c219b60(puVar31,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar31);
  return;
}



/* Entry: 105fc2db4; end: 105fc2e63; -[SCVoiceNoteTranscriptionFeedbackView _createLabel] */

void FUN_105fc2db4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new(PTR_PTR_1126aea58);
  func_0x00010c213040();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1bdb00(puVar1,param_2,4);
  func_0x00010c219b60(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fc2e64; end: 105fc2ec7; -[SCVoiceNoteTranscriptionFeedbackView _createTitleLabel] */

void FUN_105fc2e64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bdeeea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ad00();
  uVar1 = param_1;
  func_0x00010c1cfce0(param_1,param_2,1);
  func_0x000105fc4004();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(param_1,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}


