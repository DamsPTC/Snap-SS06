/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10906f5ac; end: 10906f687; -[SCImageProcessVideoPlaybackSessionImpl _remakeVideoOutput] */

void FUN_10906f5ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___AVPlayerItemVideoOutput_1126d13c8;
  _objc_alloc();
  uStack_48 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
  ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1ed8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&uStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0361e0(puVar1,param_2,puVar2);
  uVar6 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined **)(param_1 + 0xf0) = puVar1;
  _objc_release(uVar6);
  _objc_release(puVar2);
  lVar3 = *(long *)(param_1 + 0xf0);
  lVar5 = 1;
  func_0x00010c2102a0();
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined1 *)(param_1 + 0x1a8) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
  _objc_retain(lVar5);
  func_0x00010c100be0(puVar1,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010c279200(lVar5,param_2,*(undefined8 *)PTR__AVMediaTypeAudio_110348070);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  if (lVar5 != 0) {
    func_0x00010c16be60(puVar1,param_2,*(undefined8 *)(lVar3 + 0x1f0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10906f688; end: 10906f727; -[SCImageProcessVideoPlaybackSessionImpl _generateAndConfigurePlayerItemFromAsset:] */

void FUN_10906f688(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
  _objc_retain(param_3);
  func_0x00010c100be0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c279200(param_3,param_2,*(undefined8 *)PTR__AVMediaTypeAudio_110348070);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    func_0x00010c16be60(puVar1,param_2,*(undefined8 *)(param_1 + 0x1f0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10906f728; end: 10906f77b; -[SCImageProcessVideoPlaybackSessionImpl _rescaleAndChangePlayerItemIfNecessaryIgnoringOldSpeed:] */

void FUN_10906f728(long param_1)

{
  func_0x00010bed1b40();
  func_0x00010be91fa0(*(undefined4 *)(param_1 + 0x154),param_1);
  func_0x00010be8afa0(param_1);
  func_0x00010be66940(param_1);
  if (*(long *)(param_1 + 0x1f0) != 0) {
    func_0x00010bdcdaa0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea1830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined4 *)(param_1 + 0x130),param_1,PTR_s__setAVPlayerVolumes__112585fb0);
  return;
}



/* Entry: 10906f77c; end: 10906f83b; -[SCImageProcessVideoPlaybackSessionImpl _applyAudioProcessorMix] */

/* WARNING: Possible PIC construction at 0x00010906f79c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010906f7f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010906f81c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010906f7f4) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Removing unreachable block (ram,0x00010906f7a0) */
/* WARNING: Removing unreachable block (ram,0x00010906f820) */

void FUN_10906f77c(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0xe8) == 0) {
    if (*(char *)(param_1 + 0x13d) == '\x01') {
      func_0x00010c16be60(*(undefined8 *)(param_1 + 0xf8),param_2,0);
      func_0x00010bf5f0a0(*(undefined8 *)(param_1 + 0x118));
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf5f0a0(*(undefined8 *)(param_1 + 0x118));
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c16be70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10906f83c; end: 10906f853; -[SCImageProcessVideoPlaybackSessionImpl _didFinishSeeking] */

void FUN_10906f83c(long param_1)

{
  if ((*(long *)(param_1 + 0x178) == 0) && (*(long *)(param_1 + 0x1c8) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c16bf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAudioOverrideAsset__1126389f8);
    return;
  }
  return;
}



/* Entry: 10906f854; end: 10906f85b; -[SCImageProcessVideoPlaybackSessionImpl _warmupCommandsIfNeededForOutputSize:] */

void FUN_10906f854(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a1db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xb8),PTR_s_warmupCommandsIfNeededForOutputS_112686190);
  return;
}



/* Entry: 10906f85c; end: 10906f85f; -[SCImageProcessVideoPlaybackSessionImpl audioSessionDidBeginInterruption:] */

void FUN_10906f85c(void)

{
  return;
}



/* Entry: 10906f860; end: 10906f873; -[SCImageProcessVideoPlaybackSessionImpl audioSession:didEndInterruption:] */

void FUN_10906f860(long param_1)

{
  if (*(char *)(param_1 + 0x13c) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bedd550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updatePlayerRateWithReversePlay_112594ef8)
    ;
    return;
  }
  return;
}



/* Entry: 10906f874; end: 10906f887; -[SCImageProcessVideoPlaybackSessionImpl audioSessionRouteDidChangeReasonNewDeviceAvailable:] */

void FUN_10906f874(long param_1)

{
  if (*(char *)(param_1 + 0x13c) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bedd550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updatePlayerRateWithReversePlay_112594ef8)
    ;
    return;
  }
  return;
}



/* Entry: 10906f888; end: 10906f96f; -[SCImageProcessVideoPlaybackSessionImpl audioSessionRouteDidChangeReasonOldDeviceUnavailable:] */

void FUN_10906f888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x10906f930;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000107c312d4(0x3e4ccccd,"APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10906f970; end: 10906f973; -[SCImageProcessVideoPlaybackSessionImpl _onReceiveStopNotification:] */

void FUN_10906f970(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2568b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopRunning_112673450);
  return;
}



/* Entry: 10906f974; end: 10906f97b; -[SCImageProcessVideoPlaybackSessionImpl disableAudioPlayback] */

undefined1 FUN_10906f974(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1e8);
}



/* Entry: 10906f97c; end: 10906f983; -[SCImageProcessVideoPlaybackSessionImpl setDisableAudioPlayback:] */

void FUN_10906f97c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1e8) = param_3;
  return;
}



/* Entry: 10906f984; end: 10906f99b; -[SCImageProcessVideoPlaybackSessionImpl startTimestamp] */

void FUN_10906f984(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  param_1[2] = *(undefined8 *)(param_2 + 0x218);
  uVar1 = *(undefined8 *)(param_2 + 0x208);
  param_1[1] = *(undefined8 *)(param_2 + 0x210);
  *param_1 = uVar1;
  return;
}



/* Entry: 10906f99c; end: 10906f9b3; -[SCImageProcessVideoPlaybackSessionImpl setStartTimestamp:] */

void FUN_10906f99c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x218) = param_3[2];
  *(undefined8 *)(param_1 + 0x210) = uVar2;
  *(undefined8 *)(param_1 + 0x208) = uVar1;
  return;
}



/* Entry: 10906f9b4; end: 10906f9c7; -[SCImageProcessVideoPlaybackSessionImpl endTimestamp] */

void FUN_10906f9b4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x220);
  param_1[1] = *(undefined8 *)(param_2 + 0x228);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x230);
  return;
}



/* Entry: 10906f9c8; end: 10906f9db; -[SCImageProcessVideoPlaybackSessionImpl setEndTimestamp:] */

void FUN_10906f9c8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x230) = param_3[2];
  *(undefined8 *)(param_1 + 0x228) = uVar2;
  *(undefined8 *)(param_1 + 0x220) = uVar1;
  return;
}



/* Entry: 10906f9dc; end: 10906f9e3; -[SCImageProcessVideoPlaybackSessionImpl preciseSeeking] */

undefined1 FUN_10906f9dc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1e9);
}



/* Entry: 10906f9e4; end: 10906f9eb; -[SCImageProcessVideoPlaybackSessionImpl setPreciseSeeking:] */

void FUN_10906f9e4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1e9) = param_3;
  return;
}



/* Entry: 10906f9ec; end: 10906f9f3; -[SCImageProcessVideoPlaybackSessionImpl audioProcessorMix] */

undefined8 FUN_10906f9ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1f0);
}



/* Entry: 10906f9f4; end: 10906f9fb; -[SCImageProcessVideoPlaybackSessionImpl isRewindingToBeginning] */

undefined1 FUN_10906f9f4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1ea);
}



/* Entry: 10906f9fc; end: 10906fa03; -[SCImageProcessVideoPlaybackSessionImpl isFastForwardingToEnd] */

undefined1 FUN_10906f9fc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1eb);
}



/* Entry: 10906fa04; end: 10906fa0b; -[SCImageProcessVideoPlaybackSessionImpl timeToPrepareSec] */

undefined8 FUN_10906fa04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1f8);
}



/* Entry: 10906fa0c; end: 10906fa13; -[SCImageProcessVideoPlaybackSessionImpl startPreparingTimeSec] */

undefined8 FUN_10906fa0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x200);
}



/* Entry: 10906fa14; end: 10906fa1b; -[SCImageProcessVideoPlaybackSessionImpl continuousAudioPlay] */

undefined1 FUN_10906fa14(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1ec);
}



/* Entry: 10906fa1c; end: 10906fa23; -[SCImageProcessVideoPlaybackSessionImpl setContinuousAudioPlay:] */

void FUN_10906fa1c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1ec) = param_3;
  return;
}



/* Entry: 10906fa24; end: 10906fb8b; -[SCImageProcessVideoPlaybackSessionImpl .cxx_destruct] */

void FUN_10906fa24(long param_1)

{
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10906fb8c; end: 10906fd2b; -[SCRenderPassPixelSession initWithQueue:image:outputSize:inputId:renderPasses:orientation:viewportTransform:cpuTransform:circumstanceEngine:] */

undefined1 *
FUN_10906fb8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 *param_10,undefined8 *param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_12);
  puStack_78 = PTR_PTR_1127001b8;
  uStack_80 = param_3;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    uVar4 = param_10[1];
    uVar2 = *param_10;
    uVar5 = param_10[2];
    uVar7 = param_10[5];
    uVar6 = param_10[4];
    *(undefined8 *)((long)puVar1 + 0x58) = param_10[3];
    *(undefined8 *)((long)puVar1 + 0x50) = uVar5;
    *(undefined8 *)((long)puVar1 + 0x68) = uVar7;
    *(undefined8 *)((long)puVar1 + 0x60) = uVar6;
    *(undefined8 *)((long)puVar1 + 0x48) = uVar4;
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    uVar4 = param_11[1];
    uVar2 = *param_11;
    uVar5 = param_11[2];
    uVar7 = param_11[5];
    uVar6 = param_11[4];
    *(undefined8 *)((long)puVar1 + 0x88) = param_11[3];
    *(undefined8 *)((long)puVar1 + 0x80) = uVar5;
    *(undefined8 *)((long)puVar1 + 0x98) = uVar7;
    *(undefined8 *)((long)puVar1 + 0x90) = uVar6;
    *(undefined8 *)((long)puVar1 + 0x78) = uVar4;
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    puVar3 = PTR_PTR_1126d1398;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined **)((long)puVar1 + 0xa0) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa8);
    *(undefined8 *)((long)puVar1 + 0xa8) = param_12;
    _objc_release(uVar2);
    uVar2 = param_12;
    func_0x000109128724();
    *(char *)((long)puVar1 + 0xb0) = (char)uVar2;
  }
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10906fd2c; end: 10906fdcb; -[SCRenderPassPixelSession dealloc] */

void FUN_10906fd2c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126dd1b8;
  _objc_alloc(PTR_PTR_1126dd1b8);
  func_0x00010c03e100();
  func_0x00010befafa0(uVar2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d13a8;
  _objc_opt_new(PTR_PTR_1126d13a8);
  func_0x00010befafa0(uVar2);
  _objc_release(puVar1);
  puStack_38 = PTR_PTR_1127001b8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10906fdcc; end: 10906fe8b; -[SCRenderPassPixelSession startRunningWithCompletionHandler:atPresentationTime:] */

void FUN_10906fdcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10906fe8c;
  puStack_60 = &UNK_110ad6190;
  uStack_40 = param_4[1];
  uStack_48 = *param_4;
  uStack_38 = param_4[2];
  uStack_58 = param_1;
  uStack_50 = param_3;
  _objc_retain(param_3);
  func_0x000107c27d8c(uVar1,&puStack_78);
  _objc_release(uVar1);
  _objc_release(uStack_50);
  _objc_release(param_3);
  return;
}



/* Entry: 10906fe8c; end: 10906ff37;  */

void FUN_10906fe8c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  uStack_30 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010be814c0(lVar1,param_2,*(undefined8 *)(lVar1 + 0x10),&uStack_40);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10906ff38;
  puStack_50 = &UNK_1108bd2a0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_48 = uVar2;
  func_0x00010c297260(lVar1,param_2,&puStack_68,0);
  _objc_release(lVar1);
  _objc_release(uStack_48);
  return;
}



/* Entry: 10906ff38; end: 10906ff43;  */

void FUN_10906ff38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010906ff40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10906ff44; end: 1090706cb; -[SCRenderPassPixelSession _processImageWithUpgradedIpp:atPresentationTime:] */

void FUN_10906ff44(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5,
                  undefined8 *param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_220 [8];
  undefined8 uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  iVar2 = (int)*(undefined8 *)(param_3 + 0xa8);
  func_0x00010bf1f440();
  if (iVar2 == 0) {
    uVar14 = 1;
  }
  else {
    func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x10));
    uVar14 = 0;
    if (*(double *)(param_3 + 0x20) == param_2) {
      uVar14 = (uint)(*(double *)(param_3 + 0x18) == param_1);
    }
  }
  lVar3 = *(long *)(param_3 + 0x30);
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    uStack_1d8 = *(undefined8 *)(param_3 + 0x48);
    uStack_1e0 = *(undefined8 *)(param_3 + 0x40);
    uStack_1c8 = *(undefined8 *)(param_3 + 0x58);
    uStack_1d0 = *(undefined8 *)(param_3 + 0x50);
    uStack_1b8 = *(undefined8 *)(param_3 + 0x68);
    uStack_1c0 = *(undefined8 *)(param_3 + 0x60);
    uStack_208 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_210 = *(ulong *)PTR__CGAffineTransformIdentity_110347008;
    uStack_1f8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_200 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_1e8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_1f0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    puVar4 = &uStack_1e0;
    _CGAffineTransformEqualToTransform(puVar4,&uStack_210);
    if (((uint)puVar4 & uVar14) == 1) {
      puVar13 = *(undefined **)(param_3 + 0x10);
      puVar9 = PTR_PTR_1126ae558;
      func_0x00010bfe9ca0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10907067c;
    }
  }
  puVar5 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar9 = PTR____kCFBooleanTrue_11034ab68;
  if (param_5 == 0) {
    uVar17 = *(undefined8 *)PTR__kCVPixelBufferOpenGLESCompatibilityKey_11034a3a8;
    puStack_a0 = PTR____kCFBooleanTrue_11034ab68;
    uVar16 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
    puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_b0 = uVar17;
    uStack_a8 = uVar16;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_98 = puVar13;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    uVar12 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    _CVPixelBufferCreate
              (uVar12,(long)*(double *)(param_3 + 0x18),(long)*(double *)(param_3 + 0x20),0x42475241
               ,puVar7,&uStack_210);
    _objc_release(puVar7);
  }
  else {
    uVar6 = param_5;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    _CGImageGetWidth();
    dVar21 = (double)uVar6;
    uVar18 = param_5;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    _CGImageGetHeight();
    dVar20 = (double)uVar18;
    if ((0x780 < uVar6) || (0x780 < uVar18)) {
      func_0x00010b690b78(0x780);
    }
    fVar24 = (float)(int)(dVar21 * 0.125) * 8.0;
    dVar22 = (double)fVar24;
    fVar25 = (float)(int)(dVar20 * 0.125) * 8.0;
    dVar23 = (double)fVar25;
    _objc_retain(param_5);
    uVar6 = param_5;
    func_0x00010bfe8380();
    uVar18 = param_5;
    dVar21 = dVar22;
    dVar20 = dVar23;
    if (uVar6 != 0) {
      dVar21 = dVar23;
      if (fVar25 <= fVar24) {
        dVar21 = dVar22;
      }
      func_0x00010c14e300(dVar21);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_5);
      uVar6 = param_5;
      func_0x00010bfe8380();
      dVar21 = dVar23;
      dVar20 = dVar22;
      if ((uVar6 - 2 & 0xfffffffffffffffa) != 0) {
        dVar21 = dVar22;
        dVar20 = dVar23;
      }
    }
    uVar6 = uVar18;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    _CGImageGetBitsPerComponent();
    uVar8 = uVar18;
    if (uVar6 == 8) {
      uVar6 = uVar18;
      _objc_retainAutorelease();
      func_0x00010bdc1020();
      _CGImageGetBitsPerPixel();
      if (uVar6 != 0x20) goto LAB_109070224;
      func_0x00010bf54260(dVar21,dVar20);
    }
    else {
LAB_109070224:
      func_0x00010bf54220(dVar21,dVar20);
    }
    uStack_210 = uVar8;
    _objc_release(uVar18);
    uVar17 = *(undefined8 *)PTR__kCVPixelBufferOpenGLESCompatibilityKey_11034a3a8;
    uVar16 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
    uVar12 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  }
  puVar7 = PTR_PTR_1126dd1a8;
  _objc_alloc();
  func_0x00010c036180();
  uStack_1d8 = *(undefined8 *)(param_3 + 0x48);
  uStack_1e0 = *(undefined8 *)(param_3 + 0x40);
  uStack_1c8 = *(undefined8 *)(param_3 + 0x58);
  uStack_1d0 = *(undefined8 *)(param_3 + 0x50);
  uStack_1b8 = *(undefined8 *)(param_3 + 0x68);
  uStack_1c0 = *(undefined8 *)(param_3 + 0x60);
  func_0x00010c219960();
  uStack_1d8 = *(undefined8 *)(param_3 + 0x78);
  uStack_1e0 = *(undefined8 *)(param_3 + 0x70);
  uStack_1c8 = *(undefined8 *)(param_3 + 0x88);
  uStack_1d0 = *(undefined8 *)(param_3 + 0x80);
  uStack_1b8 = *(undefined8 *)(param_3 + 0x98);
  uStack_1c0 = *(undefined8 *)(param_3 + 0x90);
  func_0x00010c184da0(puVar7);
  _CVPixelBufferRelease(uStack_210);
  uStack_118 = *(undefined8 *)PTR__kCVPixelBufferMetalCompatibilityKey_11034a398;
  puStack_e8 = puVar9;
  puStack_e0 = puVar9;
  uStack_108 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
  puStack_d8 = PTR____NSDictionary0__struct_11034ab58;
  ppuStack_d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1ef0;
  uStack_100 = *(undefined8 *)PTR__kCVPixelBufferWidthKey_11034a3d0;
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uStack_120 = uVar17;
  uStack_110 = uVar16;
  func_0x00010c0df720(*(undefined8 *)(param_3 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = *(undefined8 *)PTR__kCVPixelBufferHeightKey_11034a388;
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_c8 = puVar9;
  func_0x00010c0df720(*(undefined8 *)(param_3 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uStack_f0 = *(undefined8 *)PTR__kCVPixelBufferPoolAllocationThresholdKey_11034a3c0;
  ppuStack_b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1f08;
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_c0 = puVar13;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar9);
  _CVPixelBufferPoolCreate(uVar12,0,puVar10,&uStack_218);
  _CVPixelBufferPoolCreatePixelBuffer(uVar12,uStack_218,auStack_220);
  func_0x00010bf1f440();
  puVar9 = PTR_PTR_1126d1398;
  _objc_opt_new();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_128 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar5);
  uStack_1d8 = param_6[1];
  uStack_1e0 = *param_6;
  uStack_1d0 = param_6[2];
  puVar11 = puVar9;
  func_0x00010c137060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(puVar13);
  _objc_release(puVar9);
  puVar9 = puVar7;
  func_0x00010bf412e0();
  if (puVar9 == (undefined *)0x1) {
    if (puVar7 == (undefined *)0x0) {
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uVar6 = 0;
      _CGAffineTransformIsIdentity();
      if ((uVar6 & 1) != 0) {
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        goto LAB_10907054c;
      }
      goto LAB_10907062c;
    }
    func_0x00010c27a460(&uStack_1e0,puVar7);
    iVar2 = (int)&uStack_1e0;
    _CGAffineTransformIsIdentity();
    if (iVar2 == 0) goto LAB_10907062c;
    func_0x00010bf53b80(&uStack_1e0,puVar7);
LAB_10907054c:
    iVar2 = (int)&uStack_1e0;
    _CGAffineTransformIsIdentity();
    if ((*(char *)(param_3 + 0xb0) != '\x01') || (iVar2 == 0)) goto LAB_10907062c;
    lVar15 = *(long *)(param_3 + 0x30);
    _objc_retain(lVar15);
    lVar3 = lVar15;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar19 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar15);
        }
        uVar18 = *(ulong *)(lVar19 * 8);
        uVar6 = uVar18;
        func_0x00010c1377e0();
        if (((uVar6 & 1) != 0) || (func_0x00010c26cf40(), uVar18 == 0)) {
          _objc_release(lVar15);
          goto LAB_10907062c;
        }
        lVar19 = lVar19 + 1;
      } while (lVar3 != lVar19);
      lVar3 = lVar15;
      func_0x00010bf52a60();
    }
    _objc_release(lVar15);
    puVar13 = (undefined *)0x0;
    func_0x00010c1429c0(puVar11);
  }
  else {
LAB_10907062c:
    puVar13 = puVar11;
    func_0x00010befafa0(*(undefined8 *)(param_3 + 8));
  }
  puVar9 = puVar5;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar5);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar5);
LAB_10907067c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    if (puVar13 == (undefined *)0x0) {
      puVar9 = PTR__OBJC_CLASS___CIContext_1126b3120;
      _objc_opt_new(PTR__OBJC_CLASS___CIContext_1126b3120);
      uVar12 = *(undefined8 *)(param_5 + 0x28);
      func_0x00010b696578(uVar12,puVar9);
      puVar13 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      _CGImageRelease(uVar12);
      func_0x00010bf43d60(*(undefined8 *)(param_5 + 0x20));
      _objc_release(puVar13);
      _objc_release(puVar9);
    }
    else {
      func_0x00010bf43ca0(*(undefined8 *)(param_5 + 0x20));
    }
    _CVPixelBufferRelease(*(undefined8 *)(param_5 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbbf84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CVPixelBufferPoolRelease_11034a288)(*(undefined8 *)(param_5 + 0x30));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1090706cc; end: 10907076b;  */

void FUN_1090706cc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___CIContext_1126b3120;
    _objc_opt_new(PTR__OBJC_CLASS___CIContext_1126b3120);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010b696578(uVar2,puVar1);
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    _CGImageRelease(uVar2);
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
  _CVPixelBufferRelease(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbbf84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CVPixelBufferPoolRelease_11034a288)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10907076c; end: 109070773; -[SCRenderPassPixelSession useTransparentBackground] */

undefined1 FUN_10907076c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb1);
}



/* Entry: 109070774; end: 10907077b; -[SCRenderPassPixelSession setUseTransparentBackground:] */

void FUN_109070774(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb1) = param_3;
  return;
}



/* Entry: 10907077c; end: 1090707db; -[SCRenderPassPixelSession .cxx_destruct] */

void FUN_10907077c(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090707dc; end: 1090708cb; -[SCCameraPlaybackLogger initWithPlaybackContext:userBlizzardLogger:grapheneLogger:stickyPlaybackMetricVersion:] */

undefined1 *
FUN_1090707dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1127001c0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    puVar2 = (undefined1 *)puVar1;
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined1 **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x3a) = 1;
    *(undefined8 *)((long)puVar1 + 0x60) = 0x7fffffffffffffff;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 200);
    *(undefined8 *)((long)puVar1 + 200) = param_5;
    _objc_release(uVar3);
    *(long *)((long)puVar1 + 0xe8) = param_6 + 2;
    *(undefined8 *)((long)puVar1 + 0xd0) = 0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1090708cc; end: 1090708fb; -[SCCameraPlaybackLogger setCaptureSessionId:] */

void FUN_1090708cc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1090708fc; end: 109070903; -[SCCameraPlaybackLogger setVideoDuration:] */

void FUN_1090708fc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 109070904; end: 10907090b; -[SCCameraPlaybackLogger setIsLaguna:] */

void FUN_109070904(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10907090c; end: 109070973; -[SCCameraPlaybackLogger logVideoPlaybackStickyGapDuration:atSystemTime:] */

void FUN_10907090c(double param_1,double param_2,long param_3)

{
  float fVar1;
  
  if ((0.0 < param_1) && (0.0 <= param_2)) {
    *(double *)(param_3 + 0xd0) = param_1 + *(double *)(param_3 + 0xd0);
    fVar1 = (float)(param_1 / 0.0167) * (float)(param_1 / 0.0167);
    if (param_2 - *(double *)(param_3 + 0xe0) <= 1.0) {
      fVar1 = fVar1 + *(float *)(param_3 + 0xd8);
    }
    *(float *)(param_3 + 0xd8) = fVar1;
    if (*(float *)(param_3 + 0xdc) < fVar1) {
      *(float *)(param_3 + 0xdc) = fVar1;
    }
    *(double *)(param_3 + 0xe0) = param_2;
  }
  return;
}



/* Entry: 109070974; end: 10907098f; -[SCCameraPlaybackLogger stickyGapRatioForTotalPlayTime:] */

int FUN_109070974(double param_1,long param_2)

{
  return (int)((*(double *)(param_2 + 0xd0) / param_1) * 10000.0);
}



/* Entry: 109070990; end: 10907099b; -[SCCameraPlaybackLogger worstStickyScoreForPlaybackSession] */

int FUN_109070990(long param_1)

{
  return (int)*(float *)(param_1 + 0xdc);
}



/* Entry: 10907099c; end: 1090709fb; -[SCCameraPlaybackLogger logVideoPlaybackError:] */

void FUN_10907099c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x3a) == '\x01') {
    lVar1 = param_1;
    func_0x00010be631a0();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x70);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(uVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1090709fc; end: 109070aa3; -[SCCameraPlaybackLogger logVideoPlaybackSetup] */

void FUN_1090709fc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_2 + 0x3a) == '\x01') && ((*(byte *)(param_2 + 0x39) & 1) == 0)) {
    _CACurrentMediaTime();
    *(undefined8 *)(param_2 + 0x30) = param_1;
    puVar1 = PTR_PTR_1126dd240;
    _objc_opt_new(PTR_PTR_1126dd240);
    func_0x00010bde4680(param_2,param_3,puVar1);
    func_0x00010c1b4440(puVar1,param_3,0);
    uVar2 = *(undefined8 *)(param_2 + 0x70);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
    *(undefined1 *)(param_2 + 0x39) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 109070aa4; end: 109070bc3; -[SCCameraPlaybackLogger logVideoPlaybackFirstFrame] */

void FUN_109070aa4(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if ((*(char *)(param_2 + 0x3a) == '\x01') && ((*(byte *)(param_2 + 0x50) & 1) == 0)) {
    _CACurrentMediaTime();
    *(long *)(param_2 + 0x48) = (long)((param_1 - *(double *)(param_2 + 0x30)) * 1000.0);
    puVar1 = PTR_PTR_1126dd240;
    _objc_opt_new(PTR_PTR_1126dd240);
    func_0x00010bde4680(param_2,param_3,puVar1);
    func_0x00010c1b4440(puVar1,param_3,1);
    func_0x00010c1fe6c0(puVar1,param_3,*(undefined8 *)(param_2 + 0x48));
    uVar2 = *(undefined8 *)(param_2 + 0x70);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126dd248;
    _objc_opt_new(PTR_PTR_1126dd248);
    func_0x00010bde4680(param_2,param_3,puVar3);
    uVar2 = *(undefined8 *)(param_2 + 0x70);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
    *(undefined1 *)(param_2 + 0x50) = 1;
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 109070bc4; end: 109070c1b; -[SCCameraPlaybackLogger shouldLogFirstFrameOnPreviewExit] */

bool FUN_109070bc4(double param_1,long param_2)

{
  bool bVar1;
  
  if (*(char *)(param_2 + 0x3a) == '\x01') {
    if ((*(byte *)(param_2 + 0x50) & 1) == 0) {
      _CACurrentMediaTime();
      bVar1 = param_1 - *(double *)(param_2 + 0x30) < 2.0;
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
  return false;
}



/* Entry: 109070c1c; end: 109070c43; -[SCCameraPlaybackLogger playbackSessionId] */

void FUN_109070c1c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109070c44; end: 109070c4b; -[SCCameraPlaybackLogger setLoggingEnabled:] */

void FUN_109070c44(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x3a) = param_3;
  return;
}



/* Entry: 109070c4c; end: 109070c53; -[SCCameraPlaybackLogger setIsBatchCaptureSnap:] */

void FUN_109070c4c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x51) = param_3;
  return;
}



/* Entry: 109070c54; end: 109070c5b; -[SCCameraPlaybackLogger setIsMusicSnap:] */

void FUN_109070c54(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x53) = param_3;
  return;
}



/* Entry: 109070c5c; end: 109070c63; -[SCCameraPlaybackLogger setIsTimelineSnap:] */

void FUN_109070c5c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x52) = param_3;
  return;
}



/* Entry: 109070c64; end: 109070c6b; -[SCCameraPlaybackLogger setHasAudioMixing:] */

void FUN_109070c64(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x54) = param_3;
  return;
}



/* Entry: 109070c6c; end: 109070c9b; -[SCCameraPlaybackLogger setPostCaptureLensID:] */

void FUN_109070c6c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 109070c9c; end: 109070caf; -[SCCameraPlaybackLogger setShouldLogSnapItemSwitching:] */

void FUN_109070c9c(long param_1,undefined8 param_2,int param_3)

{
  *(char *)(param_1 + 0xf0) = (char)param_3;
  if (param_3 != 0) {
    *(undefined8 *)(param_1 + 0x60) = 0x7fffffffffffffff;
  }
  return;
}



/* Entry: 109070cb0; end: 109070d13; -[SCCameraPlaybackLogger logCurrentSnapIndex:] */

void FUN_109070cb0(double param_1,long param_2,undefined8 param_3,long param_4)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    if (*(long *)(param_2 + 0x60) != 0x7fffffffffffffff && param_4 == *(long *)(param_2 + 0x60) + 1)
    {
      _CACurrentMediaTime();
      param_1 = param_1 - *(double *)(param_2 + 0x68);
      func_0x00010be57180(param_2);
    }
    *(long *)(param_2 + 0x60) = param_4;
    _CACurrentMediaTime();
    *(double *)(param_2 + 0x68) = param_1;
  }
  return;
}



/* Entry: 109070d14; end: 109070d1b; -[SCCameraPlaybackLogger setImagePlaybackGLESVersion:] */

void FUN_109070d14(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 109070d1c; end: 109070d77; -[SCCameraPlaybackLogger setScaledImageWidthInPixels:heightInPixels:] */

void FUN_109070d1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c7760;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  *(undefined **)(param_1 + 0x80) = puVar1;
  _objc_release(uVar2);
  func_0x00010c2256c0(*(undefined8 *)(param_1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010c1a7d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_setHeight__112647960,param_4);
  return;
}



/* Entry: 109070d78; end: 109070dd3; -[SCCameraPlaybackLogger setImageStatus:withErrorMessage:] */

void FUN_109070d78(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  if (param_3 < 3) {
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    *(undefined **)(param_1 + 0x88) = (&PTR_PTR_110ad6b08)[param_3];
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109070dd4; end: 109070df7; -[SCCameraPlaybackLogger logImageSetupBeginTimeInSeconds] */

void FUN_109070dd4(undefined8 param_1,long param_2)

{
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x98) = param_1;
  return;
}



/* Entry: 109070df8; end: 109070e47; -[SCCameraPlaybackLogger logImageSetupCompletedTimeInSeconds] */

void FUN_109070df8(double param_1,long param_2)

{
  _CACurrentMediaTime();
  *(double *)(param_2 + 0xa0) = param_1;
  if ((*(double *)(param_2 + 0x98) != 0.0) && (*(long *)(param_2 + 0xb0) == 0)) {
    *(long *)(param_2 + 0xb0) = (long)((param_1 - *(double *)(param_2 + 0x98)) * 1000.0);
  }
  return;
}



/* Entry: 109070e48; end: 109070e97; -[SCCameraPlaybackLogger logImageFirstFrameRenderedTimeInSeconds] */

void FUN_109070e48(double param_1,long param_2)

{
  _CACurrentMediaTime();
  *(double *)(param_2 + 0xa8) = param_1;
  if ((*(double *)(param_2 + 0xa0) != 0.0) && (*(long *)(param_2 + 0xb8) == 0)) {
    *(long *)(param_2 + 0xb8) = (long)((param_1 - *(double *)(param_2 + 0xa0)) * 1000.0);
  }
  return;
}



/* Entry: 109070e98; end: 109070ec7; -[SCCameraPlaybackLogger setImageCaptureSessionId:] */

void FUN_109070e98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109070ec8; end: 1090712ab; -[SCCameraPlaybackLogger logCameraVideoPlayerEvent] */

void FUN_109070ec8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  
  dVar10 = *(double *)(param_1 + 0x30);
  if (dVar10 != 0.0) {
    _CACurrentMediaTime();
    dVar10 = dVar10 - *(double *)(param_1 + 0x30);
    puVar1 = PTR_PTR_1126dd250;
    _objc_opt_new(PTR_PTR_1126dd250);
    lVar8 = param_1;
    func_0x00010be74be0(param_1,param_2,*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c175c40(puVar1,param_2,lVar8);
    _objc_release(lVar8);
    func_0x00010c179280(puVar1,param_2,*(undefined8 *)(param_1 + 0x10));
    func_0x00010c1dd800(puVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    func_0x00010c192e60(puVar1,param_2,(long)(*(double *)(param_1 + 0x18) * 1000.0));
    func_0x00010c1e9b80(puVar1,param_2,(long)(dVar10 * 1000.0));
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    if (*(char *)(param_1 + 0x51) == '\x01') {
      func_0x00010befa120(puVar2,param_2,&PTR____CFConstantStringClassReference_110e427d8);
    }
    if (*(char *)(param_1 + 0x52) == '\x01') {
      func_0x00010befa120(puVar2,param_2,&PTR____CFConstantStringClassReference_110e29ef8);
    }
    if (*(char *)(param_1 + 0x53) == '\x01') {
      func_0x00010befa120(puVar2,param_2,&PTR____CFConstantStringClassReference_110e33d18);
    }
    puVar3 = puVar2;
    func_0x00010bf529e0();
    if (puVar3 != (undefined *)0x0) {
      puVar3 = puVar2;
      func_0x00010bf446e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19aca0(puVar1,param_2,puVar3);
      _objc_release(puVar3);
    }
    if ((*(long *)(param_1 + 0x58) == 0) && (*(char *)(param_1 + 0x54) != '\x01')) {
      uVar7 = 0;
    }
    else {
      puVar3 = PTR_PTR_1126da210;
      _objc_opt_new(PTR_PTR_1126da210);
      func_0x00010c1bbd60();
      func_0x00010c1a5920(puVar3,param_2,*(undefined1 *)(param_1 + 0x54));
      func_0x00010c1859e0(puVar1,param_2,puVar3);
      _objc_release(puVar3);
      uVar7 = *(undefined8 *)(param_1 + 0x58);
    }
    func_0x00010c1df0c0(puVar1,param_2,uVar7);
    func_0x00010c1c4720(puVar1,param_2,*(undefined8 *)(param_1 + 0x48));
    lVar8 = *(long *)(param_1 + 0x40);
    if (lVar8 == 0) {
      if (((*(byte *)(param_1 + 0x38) & 1) == 0) &&
         ((*(char *)(param_1 + 0x39) != '\x01' || ((*(byte *)(param_1 + 0x50) & 1) != 0)))) {
        lVar8 = 0;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110daf4f8);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_1 + 0x40);
        *(undefined **)(param_1 + 0x40) = puVar3;
        _objc_release(uVar7);
        lVar8 = *(long *)(param_1 + 0x40);
      }
    }
    func_0x00010c197380(puVar1,param_2,lVar8);
    if (4.0 < dVar10) {
      lVar9 = *(long *)(param_1 + 0x48);
      puVar3 = PTR_PTR_1126dd258;
      func_0x00010c255580(PTR_PTR_1126dd258);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110daea58);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd8fd8,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126dd258;
      func_0x00010c2555a0(PTR_PTR_1126dd258);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110daea58);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd8fd8,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      uVar7 = *(undefined8 *)(param_1 + 200);
      lVar8 = param_1;
      func_0x00010c255520(dVar10 + (double)((float)lVar9 / -1000.0),param_1);
      func_0x00010bef9180(uVar7,param_2,puVar5,(long)(int)lVar8);
      uVar7 = *(undefined8 *)(param_1 + 200);
      lVar8 = param_1;
      func_0x00010c2bd5c0(param_1);
      func_0x00010bef9180(uVar7,param_2,puVar6,(long)(int)lVar8);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    uVar7 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar7);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1090712ac; end: 1090713b3; -[SCCameraPlaybackLogger logCameraImagePlayerEvent] */

void FUN_1090712ac(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_1 + 0xc0);
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126dd260;
    _objc_alloc_init(PTR_PTR_1126dd260);
    func_0x00010c1ddc00();
    if (*(ulong *)(param_1 + 8) < 7) {
      func_0x00010c175c40(puVar3,param_2,(&PTR_PTR_110ad6b20)[*(ulong *)(param_1 + 8)]);
    }
    func_0x00010c1a3c40(puVar3,param_2,*(undefined8 *)(param_1 + 0x78));
    func_0x00010c1ec9a0(puVar3,param_2,*(undefined8 *)(param_1 + 0x80));
    ppuVar1 = &PTR____CFConstantStringClassReference_110db78d8;
    if (*(undefined ***)(param_1 + 0x88) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_1 + 0x88);
    }
    func_0x00010c20a2c0(puVar3,param_2,ppuVar1);
    func_0x00010c1971a0(puVar3,param_2,*(undefined8 *)(param_1 + 0x90));
    func_0x00010c1fe6a0(puVar3,param_2,*(undefined8 *)(param_1 + 0xb0));
    func_0x00010c1fe6c0(puVar3,param_2,*(undefined8 *)(param_1 + 0xb8));
    func_0x00010c1df0c0(puVar3,param_2,*(undefined8 *)(param_1 + 0x58));
    func_0x00010c179280(puVar3,param_2,*(undefined8 *)(param_1 + 0xc0));
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 1090713b4; end: 109071517; -[SCCameraPlaybackLogger _newMediaPlayerEventWithError:] */

undefined * FUN_1090713b4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_3 < 5) {
    if (*(char *)(param_1 + 0x38) != '\x01') {
      return (undefined *)0x0;
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    puVar1 = PTR_PTR_1126dd240;
    _objc_opt_new(PTR_PTR_1126dd240);
    func_0x00010c1b4440();
  }
  else {
    puVar1 = PTR_PTR_1126dd248;
    _objc_opt_new(PTR_PTR_1126dd248);
    if ((*(long *)(param_1 + 0x58) != 0) || (*(char *)(param_1 + 0x54) == '\x01')) {
      puVar2 = PTR_PTR_1126da210;
      _objc_opt_new(PTR_PTR_1126da210);
      func_0x00010c1bbd60();
      func_0x00010c1a5920(puVar2,param_2,*(undefined1 *)(param_1 + 0x54));
      func_0x00010c1859e0(puVar1,param_2,puVar2);
      _objc_release(puVar2);
    }
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daf4f8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar2;
  _objc_release(uVar3);
  func_0x00010c197380(puVar1,param_2,*(undefined8 *)(param_1 + 0x40));
  func_0x00010c1dd800(puVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1b5100(puVar1,param_2,*(undefined1 *)(param_1 + 0x52));
  func_0x00010c1af760(puVar1,param_2,*(undefined1 *)(param_1 + 0x51));
  func_0x00010c1b2b00(puVar1,param_2,*(undefined1 *)(param_1 + 0x53));
  func_0x00010be74be0(param_1,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c175c40(puVar1,param_2,param_1);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 109071518; end: 1090715c7; -[SCCameraPlaybackLogger _configPlaybackEvent:] */

void FUN_109071518(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be74be0(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c175c40(param_3,param_2,lVar1);
  _objc_release(lVar1);
  func_0x00010c1dd800(param_3,param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010c206e20(param_3,param_2,(long)(*(double *)(param_1 + 0x18) * 1000.0));
  func_0x00010c1b5100(param_3,param_2,*(undefined1 *)(param_1 + 0x52));
  func_0x00010c1af760(param_3,param_2,*(undefined1 *)(param_1 + 0x51));
  func_0x00010c1b2b00(param_3,param_2,*(undefined1 *)(param_1 + 0x53));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090715c8; end: 1090715ef; -[SCCameraPlaybackLogger _playbackCallerFromContext:] */

undefined ** FUN_1090715c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 6) {
    return (undefined **)(&PTR_PTR_110ad6b58)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110de3df8;
}



/* Entry: 1090715f0; end: 109071663; -[SCCameraPlaybackLogger _logPlayerItemSwitchingLatency:] */

void FUN_1090715f0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dd268;
  _objc_opt_new(PTR_PTR_1126dd268);
  func_0x00010c1b62e0();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109071664; end: 10907166b; -[SCCameraPlaybackLogger shouldLogSnapItemSwitching] */

undefined1 FUN_109071664(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf0);
}



/* Entry: 10907166c; end: 1090716fb; -[SCCameraPlaybackLogger .cxx_destruct] */

void FUN_10907166c(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1090716fc; end: 1090717ef; -[SCCameraPlaybackLoggerServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090716fc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112780c28);
  *(undefined **)(param_1 + _DAT_112780c28) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126dd278;
  _objc_alloc(PTR_PTR_1126dd278);
  func_0x00010bffb880();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1090717f0; end: 109071907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090717f0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126dd270;
    _objc_alloc(PTR_PTR_1126dd270);
    lVar1 = param_1 + _DAT_112780c34;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_112780c30;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfe8620();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c036c60(puVar7,param_2,0,lVar2,lVar6,1);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 109071908; end: 10907199f; -[SCCameraPlaybackLoggerServiceProvider end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109071908(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = (long)_DAT_112780c28;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a20e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a24c0();
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1127001c8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090719a0; end: 1090719f3; -[SCCameraPlaybackLoggerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090719a0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112780c34);
  _objc_destroyWeak(param_1 + _DAT_112780c30);
  _objc_destroyWeak(param_1 + _DAT_112780c2c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112780c28,0);
  return;
}



/* Entry: 1090719f4; end: 109071a67; -[SCCameraPlaybackLoggerServices initWithCameraPlaybackLogger:] */

undefined1 * FUN_1090719f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127001d0;
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



/* Entry: 109071a68; end: 109071a6f; -[SCCameraPlaybackLoggerServices cameraPlaybackLogger] */

undefined8 FUN_109071a68(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109071a70; end: 109071a7b; -[SCCameraPlaybackLoggerServices .cxx_destruct] */

void FUN_109071a70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109071a7c; end: 109071b13; +[SCImageProcessMissEtikateFilterCPUCommand sharedCommand] */

void FUN_109071a7c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137307c0 != -1) {
    func_0x000107c27d9c(0x1137307c0,&PTR___NSConcreteGlobalBlock_110ad6bb8);
  }
  uVar1 = uRam00000001137307c8;
  _objc_retain(uRam00000001137307c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109071b14; end: 109071b47; -[SCImageProcessMissEtikateFilterCPUCommand _initWithLookupTable:] */

void FUN_109071b14(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127001d8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithLookupTable__11253f5e8);
  return;
}



/* Entry: 109071b48; end: 109071b53; -[SCImageProcessMissEtikateFilterCPUCommand commandName] */

undefined ** FUN_109071b48(void)

{
  return &PTR____CFConstantStringClassReference_110f1e538;
}



/* Entry: 109071b54; end: 109071c33; +[SCImageProcessPrototypeLookUpTableFilterCPUCommand sharedCommandWithLookupName:] */

void FUN_109071b54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if (lRam00000001137307d0 != -1) {
    func_0x000107c27d9c(0x1137307d0,&PTR___NSConcreteGlobalBlock_110ad6bd8);
  }
  lVar1 = lRam00000001137307d8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = param_3;
    FUN_10907c53c(param_3);
    puVar3 = PTR_PTR_1126bf480;
    _objc_alloc(PTR_PTR_1126bf480);
    func_0x00010be3ad20();
    func_0x00010c1d0640(lRam00000001137307d8);
    _CGImageRelease(uVar2);
    _objc_release(puVar3);
  }
  lVar1 = lRam00000001137307d8;
  func_0x00010c0e00e0(lRam00000001137307d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 109071c34; end: 109071c67;  */

void FUN_109071c34(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137307d8;
  puRam00000001137307d8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109071c68; end: 109071c9b; -[SCImageProcessPrototypeLookUpTableFilterCPUCommand _initWithLookupTable:] */

void FUN_109071c68(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127001e0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithLookupTable__11253f5e8);
  return;
}



/* Entry: 109071c9c; end: 109071ca7; -[SCImageProcessPrototypeLookUpTableFilterCPUCommand commandName] */

undefined ** FUN_109071c9c(void)

{
  return &PTR____CFConstantStringClassReference_110f1e558;
}



/* Entry: 109071ca8; end: 109071ce7;  */

void FUN_109071ca8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d8a78;
  _objc_alloc();
  func_0x00010c060ac0();
  uVar1 = puRam00000001137307e8;
  puRam00000001137307e8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109071ce8; end: 109071cef; -[SCImageProcessAnimatedTexturesCommand initWithImages:] */

void FUN_109071ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01d0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithImages_tintColors__1125e4e20,param_3,0);
  return;
}



/* Entry: 109071cf0; end: 109071e03; -[SCImageProcessAnimatedTexturesCommand initWithImages:tintColors:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_109071cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (lRam00000001137307e0 != -1) {
    func_0x000107c27d9c(0x1137307e0,&PTR___NSConcreteGlobalBlock_110ad6bf8);
  }
  uVar2 = uRam00000001137307e8;
  _objc_retain(uRam00000001137307e8);
  puStack_38 = PTR_PTR_1127001e8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithProgram__11253a1b0,uVar2);
  _objc_release(uVar2);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112780c3c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112780c3c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112780c40);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112780c40) = uVar2;
    _objc_release(uVar3);
    _CACurrentMediaTime();
    *(undefined8 *)((long)puVar1 + (long)_DAT_112780c44) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112780c48) = 0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 109071e04; end: 109072197; -[SCImageProcessAnimatedTexturesCommand loadWithContext:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_109071e04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  long lStack_90;
  undefined *puStack_88;
  
  _objc_retain(param_3);
  puStack_88 = PTR_PTR_1127001e8;
  plVar10 = &lStack_90;
  lStack_90 = param_1;
  _objc_msgSendSuper2(plVar10,PTR_s_loadWithContext_error__112604c28,param_3,param_4);
  if ((int)plVar10 != 0) {
    lVar2 = param_1;
    func_0x00010c117700();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010c117700();
    uVar1 = (undefined4)lVar8;
    _glGetAttribLocation();
    *(undefined4 *)(param_1 + _DAT_112780c4c) = uVar1;
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c117700();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010c117700();
    uVar1 = (undefined4)lVar8;
    _glGetAttribLocation();
    *(undefined4 *)(param_1 + _DAT_112780c50) = uVar1;
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c117700();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010c117700();
    uVar1 = (undefined4)lVar8;
    _glGetUniformLocation();
    *(undefined4 *)(param_1 + _DAT_112780c54) = uVar1;
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c117700();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010c117700();
    uVar1 = (undefined4)lVar8;
    _glGetUniformLocation();
    *(undefined4 *)(param_1 + _DAT_112780c58) = uVar1;
    _objc_release(lVar2);
    lVar8 = (long)_DAT_112780c3c;
    lVar2 = *(long *)(param_1 + lVar8);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      _objc_retainAutorelease();
      func_0x00010bdc1020();
      _objc_release(uVar3);
      uVar3 = uVar4;
      _CGImageGetWidth();
      _CGImageGetHeight();
      iVar11 = (int)uVar3;
      uVar3 = uVar4;
      _CGColorSpaceCreateDeviceRGB();
      iVar9 = (int)uVar4;
      lVar2 = *(long *)(param_1 + lVar8);
      func_0x00010bf529e0(lVar2);
      uVar4 = 0;
      _CGBitmapContextCreate(0,(long)iVar11,lVar2 * iVar9,8,(long)(iVar11 << 2),uVar3,1);
      lVar2 = *(long *)(param_1 + lVar8);
      func_0x00010bf529e0();
      if (lVar2 != 0) {
        lVar2 = 0;
        uVar12 = 0;
        dVar14 = (double)iVar11;
        dVar15 = (double)iVar9;
        do {
          uVar5 = *(undefined8 *)(param_1 + lVar8);
          func_0x00010c0dfd40(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          _objc_retainAutorelease();
          func_0x00010bdc1020();
          _objc_release(uVar5);
          dVar16 = (double)lVar2;
          _CGContextClearRect(0,dVar16,dVar14,dVar15,uVar4);
          _CGContextSetBlendMode(uVar4,0);
          _CGContextDrawImage(0,dVar16,dVar14,dVar15,uVar4,uVar6);
          lVar13 = (long)_DAT_112780c40;
          uVar7 = *(ulong *)(param_1 + lVar13);
          if ((uVar7 != 0) && (func_0x00010bf529e0(), uVar12 < uVar7)) {
            _CGContextSetBlendMode(uVar4,0x14);
            uVar5 = *(undefined8 *)(param_1 + lVar13);
            func_0x00010c0dfd40(uVar5);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            _objc_retainAutorelease();
            func_0x00010bdc0fe0();
            _CGContextSetFillColorWithColor(uVar4,uVar6);
            _objc_release(uVar5);
            _CGContextFillRect(0,dVar16,dVar14,dVar15,uVar4);
          }
          uVar12 = uVar12 + 1;
          uVar7 = *(ulong *)(param_1 + lVar8);
          func_0x00010bf529e0();
          lVar2 = lVar2 + iVar9;
        } while (uVar12 < uVar7);
      }
      _CGBitmapContextGetData(uVar4);
      func_0x00010bf529e0(*(undefined8 *)(param_1 + lVar8));
      uVar6 = param_3;
      func_0x00010bf596e0();
      *(int *)(param_1 + _DAT_112780c5c) = (int)uVar6;
      _CGColorSpaceRelease(uVar3);
      _CGContextRelease(uVar4);
      plVar10 = (long *)((ulong)plVar10 & 0xffffffff);
    }
  }
  _objc_release(param_3);
  return plVar10;
}



/* Entry: 109072198; end: 10907220b; -[SCImageProcessAnimatedTexturesCommand unloadWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_109072198(long param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  plVar1 = &lStack_30;
  puStack_28 = PTR_PTR_1127001e8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_unloadWithError__11267dcf0);
  if ((int)plVar1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112780c3c);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      _glDeleteTextures(1,param_1 + _DAT_112780c5c);
    }
  }
  return (undefined1 *)plVar1;
}



/* Entry: 10907220c; end: 10907257f; -[SCImageProcessAnimatedTexturesCommand runWithContext:pixelSize:bytesPerRow:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_10907220c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             ulong param_9,ulong param_10,undefined4 param_11,undefined4 param_12,
             undefined8 *param_13,undefined8 param_14,undefined8 param_15)

{
  float fVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  double dVar13;
  undefined4 uStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  float fStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_14);
  lVar11 = param_3;
  _objc_opt_class(param_3);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109079e0c(param_6,param_7,param_8,param_9,param_10,100,0,lVar11,param_15);
  _objc_release(lVar11);
  if ((int)param_6 != 0) {
    lVar11 = param_3;
    func_0x00010c117700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28fd20();
    _objc_release(lVar11);
    _glBlendFunc(1,0x303);
    _glEnable(0xbe2);
    uStack_a8 = param_13[1];
    uStack_b0 = *param_13;
    uStack_98 = param_13[3];
    uStack_a0 = param_13[2];
    uStack_88 = param_13[5];
    uStack_90 = param_13[4];
    lVar11 = param_3;
    func_0x00010bf89d00(param_1,param_2);
    if ((int)lVar11 != 0) {
      _glActiveTexture(0x84c2);
      _glBindTexture(0xde1,*(undefined4 *)(param_3 + _DAT_112780c5c));
      _glUniform1i(*(undefined4 *)(param_3 + _DAT_112780c54),2);
      fVar12 = 1.0;
      if (*(char *)(param_3 + _DAT_112780c60) == '\x01') {
        fVar12 = (float)*(double *)(param_3 + _DAT_112780c48);
      }
      dVar13 = (double)(ulong)(uint)fVar12;
      _glUniform1f(*(undefined4 *)(param_3 + _DAT_112780c58));
      _CACurrentMediaTime();
      uVar10 = (ulong)(int)(ABS(dVar13 - *(double *)(param_3 + _DAT_112780c44)) / 0.1);
      lVar11 = (long)_DAT_112780c3c;
      uVar4 = *(ulong *)(param_3 + lVar11);
      func_0x00010bf529e0();
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar10 / uVar4;
      }
      uVar10 = uVar10 - uVar7 * uVar4;
      uVar5 = *(undefined8 *)(param_3 + lVar11);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      _objc_retainAutorelease();
      iVar3 = (int)uVar6;
      func_0x00010bdc1020();
      _objc_release(uVar5);
      iVar2 = iVar3;
      _CGImageGetWidth();
      _CGImageGetHeight();
      fVar12 = 1.0;
      if (*(char *)(param_3 + _DAT_112780c64) == '\0') {
        fVar12 = 0.2;
      }
      fVar1 = ((((float)iVar3 * fVar12) / (float)iVar2) * (float)param_9) / (float)param_10;
      uStack_b0 = CONCAT44(fVar1,-fVar12);
      uStack_a8 = CONCAT44(fVar1,fVar12);
      uStack_a0 = CONCAT44(-fVar1,-fVar12);
      uStack_98 = CONCAT44(-fVar1,fVar12);
      lVar9 = (long)_DAT_112780c4c;
      _glVertexAttribPointer(*(undefined4 *)(param_3 + lVar9),2,0x1406,0,0,&uStack_b0);
      _glEnableVertexAttribArray(*(undefined4 *)(param_3 + lVar9));
      uVar7 = *(ulong *)(param_3 + lVar11);
      func_0x00010bf529e0();
      uStack_d0 = 0;
      fStack_cc = (float)((1.0 / (double)uVar7) * (double)uVar10);
      uStack_c8 = 0x3f800000;
      uStack_c0 = 0;
      fStack_bc = (float)((1.0 / (double)uVar7) * (double)(uVar10 + 1));
      uStack_b8 = 0x3f800000;
      lVar11 = (long)_DAT_112780c50;
      fStack_c4 = fStack_cc;
      fStack_b4 = fStack_bc;
      _glVertexAttribPointer(*(undefined4 *)(param_3 + lVar11),2,0x1406,0,0,&uStack_d0);
      _glEnableVertexAttribArray(*(undefined4 *)(param_3 + lVar11));
      _glDrawArrays(5,0,4);
      ppuVar8 = (undefined **)PTR____NSDictionary0__struct_11034ab58;
      goto LAB_109072534;
    }
  }
  ppuVar8 = (undefined **)0x0;
LAB_109072534:
  _objc_release(param_14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return ppuVar8;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110f1e598;
}



/* Entry: 109072580; end: 10907258b; -[SCImageProcessAnimatedTexturesCommand commandName] */

undefined ** FUN_109072580(void)

{
  return &PTR____CFConstantStringClassReference_110f1e598;
}



/* Entry: 10907258c; end: 109072683; -[SCImageProcessAnimatedTexturesCommand isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10907258c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uStack_40;
  undefined *puStack_38;
  
  iVar2 = (int)&uStack_40;
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar6 = 1;
    goto LAB_109072664;
  }
  puVar3 = PTR_PTR_1126d89f8;
  _objc_opt_class(PTR_PTR_1126d89f8);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
LAB_109072650:
    uVar6 = 0;
  }
  else {
    puStack_38 = PTR_PTR_1127001e8;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,PTR_s_baseisEqual__11253a1b8,param_3);
    if (iVar2 == 0) goto LAB_109072650;
    lVar5 = *(long *)(param_3 + (long)_DAT_112780c3c);
    if ((lVar5 != 0 || *(long *)(param_1 + (long)_DAT_112780c3c) != 0) &&
       (func_0x00010c071b60(), (int)lVar5 == 0)) goto LAB_109072650;
    lVar5 = *(long *)(param_3 + (long)_DAT_112780c40);
    if ((lVar5 != 0 || *(long *)(param_1 + (long)_DAT_112780c40) != 0) &&
       (func_0x00010c071b60(), (int)lVar5 == 0)) goto LAB_109072650;
    uVar6 = 1;
  }
  _objc_release(uVar1);
LAB_109072664:
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 109072684; end: 109072693; -[SCImageProcessAnimatedTexturesCommand fadeRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109072684(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112780c48);
}



/* Entry: 109072694; end: 1090726a3; -[SCImageProcessAnimatedTexturesCommand setFadeRatio:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109072694(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112780c48) = param_1;
  return;
}



/* Entry: 1090726a4; end: 1090726b3; -[SCImageProcessAnimatedTexturesCommand shouldFade] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1090726a4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112780c60);
}



/* Entry: 1090726b4; end: 1090726c3; -[SCImageProcessAnimatedTexturesCommand setShouldFade:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090726b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112780c60) = param_3;
  return;
}



/* Entry: 1090726c4; end: 1090726d3; -[SCImageProcessAnimatedTexturesCommand shouldUseFullWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1090726c4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112780c64);
}



/* Entry: 1090726d4; end: 1090726e3; -[SCImageProcessAnimatedTexturesCommand setShouldUseFullWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090726d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112780c64) = param_3;
  return;
}


