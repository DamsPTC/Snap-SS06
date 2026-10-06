/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10857adf4; end: 10857af43; -[SCNGSMEBasePlayer _registerForNotifications] */

void FUN_10857adf4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10857af44; end: 10857afe3; -[SCNGSMEBasePlayer _playerItemDidPlayToEndTime:] */

void FUN_10857af44(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_3);
  if (param_3 != lVar1) {
    return;
  }
  if (*(char *)(param_1 + 0x130) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c1573b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_seekVideoAndAudioToBeginning_112633708);
    return;
  }
  func_0x00010bea65e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be841f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__publishPhaseEvent__11257ea18,2);
  return;
}



/* Entry: 10857afe4; end: 10857b157; -[SCNGSMEBasePlayer _playerFailedToPlayToEnd:] */

void FUN_10857afe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c252d60();
  *(undefined8 *)(param_1 + 0x98) = uVar5;
  uVar5 = param_3;
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = uVar5;
  func_0x00010c0e00e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  func_0x00010c0ac640(*(undefined8 *)(param_1 + 0x140));
  func_0x00010be87900(param_1);
  func_0x00010bf60480(&uStack_68,param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  puVar2 = PTR_PTR_1126bf5d8;
  _objc_alloc(PTR_PTR_1126bf5d8);
  uVar7 = *(undefined4 *)(param_1 + 0xa0);
  lVar3 = param_1;
  func_0x00010be0af20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = uStack_60;
  uStack_80 = uStack_68;
  uStack_70 = uStack_58;
  lVar4 = param_1;
  uVar5 = uStack_68;
  func_0x00010be7f780(param_1);
  func_0x00010be18f20(param_1);
  uStack_78 = uStack_60;
  uStack_80 = uStack_68;
  uStack_70 = uStack_58;
  func_0x00010af1f234(uVar7,uVar5,puVar2,6,&uStack_80,lVar3,lVar4);
  func_0x00010c0d9840(uVar6);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 10857b158; end: 10857b15f; -[SCNGSMEBasePlayer _onReceiveStopNotification:] */

void FUN_10857b158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_pause_11261b0e8);
  return;
}



/* Entry: 10857b160; end: 10857b173; -[SCNGSMEBasePlayer _applicationDidBecomeActive:] */

void FUN_10857b160(long param_1)

{
  if (*(char *)(param_1 + 0x78) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c2504b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_startRunning_112671b50);
    return;
  }
  return;
}



/* Entry: 10857b174; end: 10857b32f; -[SCNGSMEBasePlayer _prepareVideoPlayback] */

void FUN_10857b174(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c101100();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar4;
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar4 = 1;
  if (*(char *)(param_1 + 0x130) != '\0') {
    uVar4 = 2;
  }
  func_0x00010c161660(*(undefined8 *)(param_1 + 8),param_2,uVar4);
  func_0x00010c2241a0(*(undefined4 *)(param_1 + 0x7c),*(undefined8 *)(param_1 + 8));
  func_0x00010be01bc0(param_1);
  puVar2 = PTR__kCMTimeZero_110348670;
  uVar4 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  *(undefined8 *)(param_1 + 0x168) = uVar4;
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(puVar2 + 0x10);
  puVar2 = PTR__kCMTimeInvalid_110348648;
  *(undefined1 *)(param_1 + 0x48) = 0;
  uVar4 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(puVar2 + 8);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(puVar2 + 0x10);
  if (*(long *)(param_1 + 0x20) == 0) {
    func_0x00010be0afe0(param_1);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,*(undefined8 *)(param_1 + 0x138));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4,param_2,puVar2);
    _objc_release(puVar2);
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c252d60();
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c26f180();
  *(undefined8 *)(param_1 + 0x90) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c252d60();
  *(undefined8 *)(param_1 + 0x98) = uVar4;
  func_0x00010bdf1580(param_1,param_2,(long)*(double *)(param_1 + 0x158),
                      (long)*(double *)(param_1 + 0x160));
  puVar2 = PTR_PTR_1126b44c8;
  _objc_alloc();
  func_0x00010c030dc0();
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  *(undefined **)(param_1 + 0x80) = puVar2;
  _objc_release(uVar4);
  func_0x00010be66900(param_1);
  func_0x00010be895a0(param_1);
  if ((*(uint *)(param_1 + 0x18c) & 0x1d) == 1) {
    uStack_48 = *(undefined8 *)(param_1 + 0x188);
    uStack_50 = *(undefined8 *)(param_1 + 0x180);
    uStack_40 = *(undefined8 *)(param_1 + 400);
    func_0x00010c196240(param_1,param_2,&uStack_50);
  }
  return;
}



/* Entry: 10857b330; end: 10857b39f; -[SCNGSMEBasePlayer _disableClosedCaptions] */

void FUN_10857b330(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 200);
  func_0x0001091286e0();
  if (iVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___AVPlayerMediaSelectionCriteria_1126da1c8;
    _objc_alloc(PTR__OBJC_CLASS___AVPlayerMediaSelectionCriteria_1126da1c8);
    func_0x00010c038400();
    func_0x00010c1c51c0(*(undefined8 *)(param_1 + 8),param_2,puVar2,
                        *(undefined8 *)PTR__AVMediaCharacteristicLegible_110348068);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10857b3a0; end: 10857b3a3; -[SCNGSMEBasePlayer _errorIfNoPlayerItem] */

void FUN_10857b3a0(void)

{
  return;
}



/* Entry: 10857b3a4; end: 10857b3a7; -[SCNGSMEBasePlayer _createPixelBufferPoolIfNeededWithSize:] */

void FUN_10857b3a4(void)

{
  return;
}



/* Entry: 10857b3a8; end: 10857b3ab; -[SCNGSMEBasePlayer _setPlayedToEnd] */

void FUN_10857b3a8(void)

{
  return;
}



/* Entry: 10857b3ac; end: 10857b3f3; -[SCNGSMEBasePlayer _publishPhaseEvent:] */

void FUN_10857b3ac(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da1d0;
  _objc_alloc(PTR_PTR_1126da1d0);
  func_0x00010af1f7c0();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10857b3f4; end: 10857b5db; -[SCNGSMEBasePlayer _presentationFrameNumberForTimestamp:] */

double FUN_10857b3f4(double param_1,long param_2,undefined8 param_3,double *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(char *)(param_2 + 0xe1) == '\x01') && ((*(uint *)((long)param_4 + 0xc) & 0x1d) == 1)) {
    dStack_108 = param_4[1];
    param_1 = *param_4;
    dStack_100 = param_4[2];
    dStack_110 = param_1;
    _CMTimeGetSeconds(&dStack_110);
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    uVar9 = 0;
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    lVar1 = *(long *)(param_2 + 0x20);
    func_0x00010c2791a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010bf52a60();
    fVar10 = 0.0;
    if (lVar5 != 0) {
      lVar7 = *plStack_140;
      do {
        lVar8 = 0;
        do {
          if (*plStack_140 != lVar7) {
            _objc_enumerationMutation(lVar1);
          }
          uVar6 = *(undefined8 *)(lStack_148 + lVar8 * 8);
          uVar2 = uVar6;
          func_0x00010bf0b740();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c0c6c20();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c0720c0();
          _objc_release(uVar3);
          _objc_release(uVar2);
          if ((int)uVar4 != 0) {
            fVar10 = (float)uVar9;
            func_0x00010bf0b740(uVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0da9e0();
            _objc_release(uVar6);
            goto LAB_10857b57c;
          }
          lVar8 = lVar8 + 1;
        } while (lVar5 != lVar8);
        lVar5 = lVar1;
        func_0x00010bf52a60(lVar1,param_3,&uStack_150,auStack_f8,0x10);
      } while (lVar5 != 0);
    }
LAB_10857b57c:
    _objc_release(lVar1);
    param_1 = param_1 * (double)fVar10;
    lVar5 = 1;
    if (0.0 < fVar10) {
      lVar5 = (long)param_1 + 1;
    }
  }
  else {
    lVar5 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return param_1;
  }
  ___stack_chk_fail(lVar5);
  return 0.0;
}



/* Entry: 10857b5dc; end: 10857b5e3; -[SCNGSMEBasePlayer _fpsForStatus] */

undefined8 FUN_10857b5dc(void)

{
  return 0;
}



/* Entry: 10857b5e4; end: 10857b5eb; -[SCNGSMEBasePlayer canChangeModelWithoutRestart:] */

undefined8 FUN_10857b5e4(void)

{
  return 1;
}



/* Entry: 10857b5ec; end: 10857b613; -[SCNGSMEBasePlayer playerModelObservable] */

void FUN_10857b5ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10857b614; end: 10857b63b; -[SCNGSMEBasePlayer playerStatusObservable] */

void FUN_10857b614(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10857b63c; end: 10857b663; -[SCNGSMEBasePlayer playerPhaseObservable] */

void FUN_10857b63c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10857b664; end: 10857b68b; -[SCNGSMEBasePlayer videoFrameObservable] */

void FUN_10857b664(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10857b68c; end: 10857b727; -[SCNGSMEBasePlayer _setUpDisplayLink] */

void FUN_10857b68c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0xd8) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
  func_0x00010bf85b60(PTR__OBJC_CLASS___CADisplayLink_1126b94a8,param_2,param_1,
                      PTR_s__displayLinkCallback__11252f528);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined **)(param_1 + 0xd8) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1dffe0(*(undefined8 *)(param_1 + 0xd8),param_2,0x3c);
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc2c0(uVar2,param_2,puVar1,*(undefined8 *)PTR__NSRunLoopCommonModes_11034aaa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10857b728; end: 10857b763; -[SCNGSMEBasePlayer _tearDownDisplayLink] */

void FUN_10857b728(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0xd8) != 0) {
    func_0x00010c069d00();
    uVar1 = *(undefined8 *)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0xd8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10857b764; end: 10857b793; -[SCNGSMEBasePlayer setPlayerView:] */

void FUN_10857b764(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10857b794; end: 10857b797; -[SCNGSMEBasePlayer _recordPlaybackLoggerCall:] */

void FUN_10857b794(void)

{
  return;
}



/* Entry: 10857b798; end: 10857b79b; -[SCNGSMEBasePlayer _setPlayerViewDispatchBlock:] */

void FUN_10857b798(void)

{
  return;
}



/* Entry: 10857b79c; end: 10857b7c3; -[SCNGSMEBasePlayer setShouldLoop:] */

void FUN_10857b79c(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (*(byte *)(param_1 + 0x130) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x130) = (char)param_3;
  uVar1 = 1;
  if (param_3 != 0) {
    uVar1 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c161670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setActionAtItemEnd__112635fb8,uVar1);
  return;
}



/* Entry: 10857b7c4; end: 10857b7db; -[SCNGSMEBasePlayer setStartTimestamp:] */

void FUN_10857b7c4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x178) = param_3[2];
  *(undefined8 *)(param_1 + 0x170) = uVar2;
  *(undefined8 *)(param_1 + 0x168) = uVar1;
  return;
}



/* Entry: 10857b7dc; end: 10857b993; -[SCNGSMEBasePlayer setEndTimestamp:] */

void FUN_10857b7dc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **unaff_x23;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_3[1];
  uVar4 = *param_3;
  *(undefined8 *)(param_1 + 400) = param_3[2];
  *(undefined8 *)(param_1 + 0x188) = uVar3;
  *(undefined8 *)(param_1 + 0x180) = uVar4;
  puVar1 = *(undefined **)(param_1 + 8);
  if (puVar1 != (undefined *)0x0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      func_0x00010c12eb40();
      puVar1 = *(undefined **)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = 0;
      _objc_release();
    }
    if ((*(uint *)(param_1 + 0x18c) & 0x1d) == 1) {
      uStack_68 = *(undefined8 *)(param_1 + 0x188);
      uStack_70 = *(undefined8 *)(param_1 + 0x180);
      uStack_60 = *(undefined8 *)(param_1 + 400);
      puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297200();
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(&uStack_70,param_1);
      uVar4 = *(undefined8 *)(param_1 + 8);
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_50 = puVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_10857b994;
      puStack_80 = &UNK_1108434b0;
      unaff_x23 = &puStack_98;
      _objc_copyWeak(auStack_78,&uStack_70);
      func_0x00010bef7320();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      _objc_release(uVar3);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(&uStack_70);
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x23 + 4);
  _objc_destroyWeak(&uStack_70);
  __Unwind_Resume();
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained();
  if ((puVar1 != (undefined *)0x0) && (puVar1[0x130] == '\x01')) {
    func_0x00010c1573a0(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10857b994; end: 10857b9d3;  */

void FUN_10857b994(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(char *)(param_1 + 0x130) == '\x01')) {
    func_0x00010c1573a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10857b9d4; end: 10857b9db; -[SCNGSMEBasePlayer setPreciseSeeking:] */

void FUN_10857b9d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x131) = param_3;
  return;
}



/* Entry: 10857b9dc; end: 10857b9ef; -[SCNGSMEBasePlayer setVolume:] */

void FUN_10857b9dc(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x7c) = param_1;
  if (*(long *)(param_2 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c2241b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_2 + 8),PTR_s_setVolume__112666a90);
    return;
  }
  return;
}



/* Entry: 10857b9f0; end: 10857b9f7; -[SCNGSMEBasePlayer volume] */

undefined4 FUN_10857b9f0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x7c);
}



/* Entry: 10857b9f8; end: 10857bb0b; -[SCNGSMEBasePlayer videoOutput] */

void FUN_10857b9f8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_3 + 0x70);
  if (lVar5 == 0) {
    puVar1 = PTR__OBJC_CLASS___AVPlayerItemVideoOutput_1126d13c8;
    _objc_alloc();
    uStack_48 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
    ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cfd48;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_40,&uStack_48,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0361e0(puVar1,param_4,puVar2);
    uVar4 = *(undefined8 *)(param_3 + 0x70);
    *(undefined **)(param_3 + 0x70) = puVar1;
    _objc_release(uVar4);
    _objc_release(puVar2);
    func_0x00010c2102a0(*(undefined8 *)(param_3 + 0x70),param_4,*(long *)(param_3 + 0x148) == 0);
    lVar3 = *(long *)(param_3 + 0x20);
    func_0x00010c252d60();
    lVar5 = *(long *)(param_3 + 0x70);
    if (lVar3 == 1) {
      func_0x00010befa4c0(*(undefined8 *)(param_3 + 0x20),param_4,lVar5);
      lVar5 = *(long *)(param_3 + 0x70);
    }
  }
  lVar3 = lVar5;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar3 + 8) != 0) {
    return;
  }
  *(undefined8 *)(lVar3 + 0x158) = param_1;
  *(undefined8 *)(lVar3 + 0x160) = param_2;
  return;
}



/* Entry: 10857bb0c; end: 10857bb1f; -[SCNGSMEBasePlayer setRenderSize:] */

void FUN_10857bb0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_3 + 8) != 0) {
    return;
  }
  *(undefined8 *)(param_3 + 0x158) = param_1;
  *(undefined8 *)(param_3 + 0x160) = param_2;
  return;
}



/* Entry: 10857bb20; end: 10857bb27; -[SCNGSMEBasePlayer renderSize] */

undefined1  [16] FUN_10857bb20(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x158);
}



/* Entry: 10857bb28; end: 10857bba7; -[SCNGSMEBasePlayer prepareToPlay] */

void FUN_10857bb28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x00010bee67c0();
  if ((int)uVar1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10857bba8;
    puStack_30 = &UNK_110842e18;
    uStack_28 = param_1;
    func_0x000107c312cc("APPSTORE",&puStack_48);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdd39d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__beginPreparingToPlay_112552810);
  return;
}



/* Entry: 10857bba8; end: 10857bbaf;  */

void FUN_10857bba8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd39d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__beginPreparingToPlay_112552810);
  return;
}



/* Entry: 10857bbb0; end: 10857bd4f; -[SCNGSMEBasePlayer _beginPreparingToPlay] */

void FUN_10857bbb0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x120) == 0) {
    *(undefined8 *)(param_1 + 0x120) = 1;
    func_0x00010c0ac660(*(undefined8 *)(param_1 + 0x140));
    func_0x00010be87900(param_1);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bee67c0();
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    if ((int)lVar2 == 0) {
      func_0x00010bf18ba0();
      _objc_release(puVar3);
      func_0x00010be79580(param_1);
      func_0x00010be170e0(param_1);
      puVar3 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf95660();
      _objc_release(puVar3);
    }
    else {
      puVar4 = puVar3;
      func_0x00010bf17b60();
      _objc_release(puVar3);
      _objc_initWeak(auStack_48,param_1);
      uVar5 = *(undefined8 *)(param_1 + 0x108);
      _objc_copyWeak(auStack_58,auStack_48);
      puStack_50 = puVar4;
      func_0x00010c0f7fc0(uVar5);
      _objc_destroyWeak(auStack_58);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 10857bd50; end: 10857be97;  */

void FUN_10857bd50(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf941e0();
    _objc_release(puVar2);
  }
  else {
    func_0x00010be79580(lVar1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x10857be24;
    puStack_48 = &UNK_110846540;
    _objc_copyWeak(auStack_40,param_1 + 0x20);
    uStack_38 = *(undefined8 *)(param_1 + 0x28);
    func_0x000107c312d0("APPSTORE",&puStack_60);
    _objc_destroyWeak(auStack_40);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10857be98; end: 10857bfd3; -[SCNGSMEBasePlayer _finishPreparingToPlay] */

void FUN_10857be98(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    func_0x00010bea91c0(param_1);
  }
  while( true ) {
    lVar3 = *(long *)(param_1 + 0x118);
    func_0x00010bf529e0();
    if (lVar3 == 0) break;
    lVar2 = *(long *)(param_1 + 0x118);
    func_0x00010bf51e00();
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x118));
    _objc_retain(lVar2);
    lVar3 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        (**(code **)(*(long *)(lVar5 * 8) + 0x10))();
        lVar5 = lVar5 + 1;
      } while (lVar3 != lVar5);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    }
    _objc_release(lVar2);
    _objc_release(lVar2);
  }
  *(undefined8 *)(param_1 + 0x120) = 2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be798b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10857bfd4; end: 10857bfd7; -[SCNGSMEBasePlayer _prepareToPlayOperation] */

void FUN_10857bfd4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be798b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__prepareVideoPlayback_11257bfc8);
  return;
}



/* Entry: 10857bfd8; end: 10857bfdf; -[SCNGSMEBasePlayer _usePreparePerformer] */

undefined1 FUN_10857bfd8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x110);
}



/* Entry: 10857bfe0; end: 10857bff7; -[SCNGSMEBasePlayer _restartAfterAudioSessionDeactivationOrCategoryChange] */

void FUN_10857bfe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 200),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110ee3298,1,0);
  return;
}



/* Entry: 10857bff8; end: 10857c007; -[SCNGSMEBasePlayer playerPrepared] */

bool FUN_10857bff8(long param_1)

{
  return *(long *)(param_1 + 0x120) == 2;
}



/* Entry: 10857c008; end: 10857c01b; -[SCNGSMEBasePlayer setPlayerPrepared:] */

void FUN_10857c008(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0x120) = uVar1;
  return;
}



/* Entry: 10857c01c; end: 10857c117; -[SCNGSMEBasePlayer _perform:] */

void FUN_10857c01c(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  ulong uStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bee67c0();
  if ((uVar1 & 1) == 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x10857c0c4;
    puStack_38 = &UNK_11084aaa8;
    uStack_30 = param_1;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x000107c312cc("APPSTORE",&puStack_50);
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10857c118; end: 10857c11b; -[SCNGSMEBasePlayer _displayLinkCallback:] */

void FUN_10857c118(void)

{
  return;
}



/* Entry: 10857c11c; end: 10857c2db; -[SCNGSMEBasePlayer getSampleBufferAtTime:] */

ulong FUN_10857c11c(undefined8 param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  double dStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if (*(long *)(param_2 + 8) == 0) {
    func_0x00010be798a0(param_2);
  }
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x00010c252d60();
  if (lVar1 == 1) {
    uVar2 = param_2;
    func_0x00010c29a780();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      dStack_60 = 0.0;
      uStack_58 = 0;
      uStack_50 = 0;
    }
    else {
      func_0x00010c084bc0(&dStack_60,param_1,uVar2);
    }
    _objc_release(uVar2);
    uStack_78 = uStack_58;
    dStack_80 = dStack_60;
    uStack_70 = uStack_50;
    dVar4 = dStack_60;
    _CMTimeGetSeconds(&dStack_80);
    if (dVar4 < 0.0) {
      uStack_58 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      dStack_60 = *(double *)PTR__kCMTimeZero_110348670;
      uStack_50 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    }
    uVar2 = param_2;
    func_0x00010c29a780();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uStack_58;
    dStack_80 = dStack_60;
    uStack_70 = uStack_50;
    uVar3 = uVar2;
    func_0x00010bfd96e0();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      uStack_98 = uStack_58;
      dStack_a0 = dStack_60;
      uStack_90 = uStack_50;
      uStack_b8 = *(undefined8 *)(param_2 + 0xf8);
      uStack_c0 = *(undefined8 *)(param_2 + 0xf0);
      uStack_b0 = *(undefined8 *)(param_2 + 0x100);
      _CMTimeSubtract(&dStack_80,&dStack_a0,&uStack_c0);
      _CMTimeGetSeconds(&dStack_80);
    }
    else {
      uVar2 = param_2;
      func_0x00010c29a780();
      _objc_retainAutoreleasedReturnValue();
      uStack_78 = uStack_58;
      dStack_80 = dStack_60;
      uStack_70 = uStack_50;
      uVar3 = uVar2;
      func_0x00010bf52140();
      _objc_release(uVar2);
      if (uVar3 != 0) {
        *(undefined8 *)(param_2 + 0xf8) = uStack_58;
        *(double *)(param_2 + 0xf0) = dStack_60;
        *(undefined8 *)(param_2 + 0x100) = uStack_50;
        uStack_78 = uStack_58;
        dStack_80 = dStack_60;
        uStack_70 = uStack_50;
        func_0x00010bdf2bc0(param_2);
        _CVPixelBufferRelease(uVar3);
        return param_2;
      }
    }
  }
  return 0;
}



/* Entry: 10857c2dc; end: 10857c453; -[SCNGSMEBasePlayer getRenderedImage] */

void FUN_10857c2dc(undefined *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(ulong *)(param_1 + 200);
  func_0x0001091286a4();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    param_1 = PTR_PTR_1126ae558;
    func_0x00010bfe9c80(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x00010c077480();
    if ((int)puVar2 != 0) {
      func_0x00010bddb740(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10857c420;
    }
    puVar2 = PTR_PTR_1126ae560;
    _objc_alloc_init();
    _objc_initWeak(auStack_38,param_1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10857c454;
    puStack_50 = &UNK_110841fb0;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(puVar2);
    puStack_48 = puVar2;
    func_0x000107c312d0("APPSTORE",&puStack_68);
    param_1 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(puVar2);
LAB_10857c420:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10857c454; end: 10857c54f;  */

void FUN_10857c454(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110f378f8,
                        &PTR____CFConstantStringClassReference_110ee32d8,7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar4,param_2,puVar3);
  }
  else {
    lVar2 = lVar1;
    func_0x00010bddb740(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10857c550;
    puStack_40 = &UNK_11086dbb8;
    puVar3 = *(undefined **)(param_1 + 0x20);
    _objc_retain(puVar3);
    puStack_38 = puVar3;
    func_0x00010c297260(lVar2,param_2,&puStack_58,0);
    _objc_release(lVar2);
    puVar3 = puStack_38;
  }
  _objc_release(puVar3);
  _objc_release(lVar1);
  return;
}



/* Entry: 10857c550; end: 10857c563;  */

void FUN_10857c550(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 10857c564; end: 10857c5d3; -[SCNGSMEBasePlayer _captureRenderedImage] */

void FUN_10857c564(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110f378f8,
                      &PTR____CFConstantStringClassReference_110e08d98,7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae558;
  func_0x00010bfe9c80(PTR_PTR_1126ae558,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10857c5d4; end: 10857c683; -[SCNGSMEBasePlayer _createSampleBufferFromPixelBuffer:presentationTimeStamp:] */

undefined8
FUN_10857c5d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0;
  uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  uVar1 = uVar3;
  _CMVideoFormatDescriptionCreateForImageBuffer(uVar3,param_3,&uStack_40);
  uVar2 = 0;
  if ((int)uVar1 == 0) {
    uStack_88 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
    uStack_90 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
    uStack_80 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
    uStack_70 = param_4[1];
    uStack_78 = *param_4;
    uStack_68 = param_4[2];
    uStack_60 = uStack_90;
    uStack_58 = uStack_88;
    uStack_50 = uStack_80;
    _CMSampleBufferCreateReadyWithImageBuffer(uVar3,param_3,uStack_40,&uStack_90,&uStack_38);
    _CFRelease(uStack_40);
    uVar2 = uStack_38;
  }
  return uVar2;
}



/* Entry: 10857c684; end: 10857c733; -[SCNGSMEBasePlayer startRunning] */

void FUN_10857c684(long param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010c10a180();
  *(undefined1 *)(param_1 + 0x78) = 1;
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010be713a0(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10857c734; end: 10857c783;  */

void FUN_10857c734(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fe360(*(undefined8 *)(param_1 + 8));
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10857c784; end: 10857c82b; -[SCNGSMEBasePlayer pauseRunning] */

void FUN_10857c784(long param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  *(undefined1 *)(param_1 + 0x78) = 0;
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010be713a0(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10857c82c; end: 10857c85f;  */

void FUN_10857c82c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0f5b20(*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10857c860; end: 10857c90f; -[SCNGSMEBasePlayer resumeRunning] */

void FUN_10857c860(long param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010c10a180();
  *(undefined1 *)(param_1 + 0x78) = 1;
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010be713a0(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10857c910; end: 10857c943;  */

void FUN_10857c910(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0fe360(*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10857c944; end: 10857ca9b; -[SCNGSMEBasePlayer stopRunning] */

void FUN_10857c944(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ac660(*(undefined8 *)(param_1 + 0x140));
  func_0x00010be87900(param_1);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar2);
  *(undefined1 *)(param_1 + 0x78) = 0;
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010be713a0(param_1);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  return;
}



/* Entry: 10857ca9c; end: 10857cadf;  */

void FUN_10857ca9c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bea6520(param_1);
    func_0x00010c0f5b20(*(undefined8 *)(param_1 + 8));
    func_0x00010becad00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10857cae0; end: 10857cba3; -[SCNGSMEBasePlayer setPlaybackRate:] */

void FUN_10857cae0(float param_1,undefined8 param_2)

{
  undefined1 auStack_48 [8];
  float fStack_40;
  undefined1 auStack_38 [8];
  
  if (param_1 != 0.0) {
    func_0x00010c10a180(param_2);
  }
  _objc_initWeak(auStack_38,param_2);
  _objc_copyWeak(auStack_48,auStack_38);
  fStack_40 = param_1;
  func_0x00010be713a0(param_2);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10857cba4; end: 10857cbdf;  */

void FUN_10857cba4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1e7640(*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(lVar1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10857cbe0; end: 10857cc83; -[SCNGSMEBasePlayer seekVideoAndAudioToBeginning] */

void FUN_10857cbe0(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010be713a0(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10857cc84; end: 10857cd07;  */

void FUN_10857cc84(long param_1,undefined8 param_2)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + 8) != 0)) {
    uStack_30 = *(undefined8 *)(param_1 + 0x178);
    uStack_38 = *(undefined8 *)(param_1 + 0x170);
    uStack_40 = *(undefined8 *)(param_1 + 0x168);
    uStack_78 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_80 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_70 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_60 = uStack_80;
    uStack_58 = uStack_78;
    uStack_50 = uStack_70;
    func_0x00010c1572c0(*(long *)(param_1 + 8),param_2,&uStack_40,&uStack_60,&uStack_80);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 10857cd08; end: 10857cd3f; -[SCNGSMEBasePlayer seekToTime:] */

void FUN_10857cd08(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  uStack_20 = param_3[2];
  func_0x00010c157280(param_1,param_2,&uStack_30,&PTR___NSConcreteGlobalBlock_110a55a18);
  return;
}



/* Entry: 10857cd40; end: 10857cd43;  */

void FUN_10857cd40(void)

{
  return;
}



/* Entry: 10857cd44; end: 10857ce2b; -[SCNGSMEBasePlayer seekToTime:completionHandler:] */

void FUN_10857cd44(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_58,auStack_38);
  _objc_retain(param_4);
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_40 = param_3[2];
  func_0x00010be713a0(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 10857ce2c; end: 10857cefb;  */

void FUN_10857ce2c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (((lVar1 == 0) || (*(long *)(lVar1 + 8) == 0)) || ((*(byte *)(param_1 + 0x3c) & 1) == 0)) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  }
  else if (*(char *)(lVar1 + 0x131) == '\x01') {
    func_0x00010c157300();
  }
  else {
    func_0x00010c157280();
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10857cefc; end: 10857cff3; -[SCNGSMEBasePlayer stopPlayingAndSeekSmoothlyToTime:] */

void FUN_10857cefc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010c0f5fe0();
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  uStack_30 = param_3[2];
  uStack_58 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = &uStack_40;
  _CMTimeCompare(puVar1,&uStack_60);
  if ((int)puVar1 != 0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    *(undefined8 *)(param_1 + 0x40) = param_3[2];
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
      func_0x00010bebc800(param_1);
    }
  }
  func_0x00010bf60480(&uStack_40,param_1);
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_50 = param_3[2];
  puVar1 = &uStack_60;
  _CMTimeCompare(puVar1,&uStack_40);
  if ((int)puVar1 == 0) {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10857cff4;
    puStack_88 = &UNK_11084e430;
    uStack_70 = param_3[1];
    uStack_78 = *param_3;
    uStack_68 = param_3[2];
    lStack_80 = param_1;
    func_0x000107c312cc("APPSTORE",&puStack_a0);
  }
  return;
}



/* Entry: 10857cff4; end: 10857d02b;  */

void FUN_10857cff4(long param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x30);
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  uStack_20 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010be1a900(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_30);
  return;
}



/* Entry: 10857d02c; end: 10857d0ef; -[SCNGSMEBasePlayer _smoothSeekToTime] */

void FUN_10857d02c(long param_1,undefined8 param_2)

{
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  uint uStack_1c;
  undefined8 uStack_18;
  
  *(undefined1 *)(param_1 + 0x48) = 1;
  uStack_5c = *(uint *)(param_1 + 0x3c);
  if ((uStack_5c & 1) == 0) {
    *(undefined1 *)(param_1 + 0x48) = 0;
    return;
  }
  uStack_58 = *(undefined8 *)(param_1 + 0x40);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10857d0f0;
  puStack_38 = &UNK_110a55a38;
  uStack_28 = *(undefined8 *)(param_1 + 0x30);
  uStack_20 = *(undefined4 *)(param_1 + 0x38);
  uStack_68 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = *(undefined4 *)(param_1 + 0x38);
  uStack_98 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_a0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_90 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_80 = uStack_a0;
  uStack_78 = uStack_98;
  uStack_70 = uStack_90;
  lStack_30 = param_1;
  uStack_1c = uStack_5c;
  uStack_18 = uStack_58;
  func_0x00010c157300(*(undefined8 *)(param_1 + 8),param_2,&uStack_68,&uStack_80,&uStack_a0,
                      &puStack_50);
  return;
}



/* Entry: 10857d0f0; end: 10857d177;  */

void FUN_10857d0f0(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar3 = *(long *)(param_1 + 0x20);
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = *(undefined8 *)(lVar3 + 0x38);
  uStack_60 = *(undefined8 *)(lVar3 + 0x30);
  uStack_50 = *(undefined8 *)(lVar3 + 0x40);
  puVar2 = &uStack_40;
  _CMTimeCompare(puVar2,&uStack_60);
  if ((int)puVar2 == 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x48) = 0;
    puVar1 = PTR__kCMTimeInvalid_110348648;
    lVar3 = *(long *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
    *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
    *(undefined8 *)(lVar3 + 0x30) = uVar4;
    *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(puVar1 + 0x10);
  }
  else {
    func_0x00010bebc800();
  }
  return;
}



/* Entry: 10857d178; end: 10857d197; -[SCNGSMEBasePlayer isPlaying] */

bool FUN_10857d178(float param_1,long param_2)

{
  func_0x00010c11fdc0(*(undefined8 *)(param_2 + 8));
  return param_1 != 0.0;
}



/* Entry: 10857d198; end: 10857d19f; -[SCNGSMEBasePlayer shouldBeRunning] */

undefined1 FUN_10857d198(long param_1)

{
  return *(undefined1 *)(param_1 + 0x78);
}



/* Entry: 10857d1a0; end: 10857d1b7; -[SCNGSMEBasePlayer currentTime] */

void FUN_10857d1a0(undefined8 *param_1,long param_2)

{
  if (*(long *)(param_2 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf60490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_2 + 8),PTR_s_currentTime_1125b5ac8);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10857d1b8; end: 10857d1bb; -[SCNGSMEBasePlayer clearLastFrameImage] */

void FUN_10857d1b8(void)

{
  return;
}



/* Entry: 10857d1bc; end: 10857d1bf; -[SCNGSMEBasePlayer _setPlaceholderImageOnPlayerView] */

void FUN_10857d1bc(void)

{
  return;
}



/* Entry: 10857d1c0; end: 10857d233; -[SCNGSMEBasePlayer _onReceiveAudioSessionDidActivate:] */

void FUN_10857d1c0(undefined8 param_1)

{
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 10857d234; end: 10857d24b;  */

void FUN_10857d234(long param_1)

{
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x78) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c2504b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x20),PTR_s_startRunning_112671b50);
    return;
  }
  return;
}



/* Entry: 10857d24c; end: 10857d31b; -[SCNGSMEBasePlayer _onReceiveAudioSessionWillDeactivate:] */

void FUN_10857d24c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be95300();
  if ((int)lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10857d31c;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x000100c749e0(0x3fc00000,"APPSTORE",&puStack_60);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    FUN_108588f5c(*(undefined8 *)(param_1 + 0x128),1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10857d31c; end: 10857d35b;  */

void FUN_10857d31c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(char *)(param_1 + 0x78) == '\x01')) {
    func_0x00010c2504a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10857d35c; end: 10857d35f; -[SCNGSMEBasePlayer audioSessionDidBeginInterruption:] */

void FUN_10857d35c(void)

{
  return;
}



/* Entry: 10857d360; end: 10857d41b; -[SCNGSMEBasePlayer audioSession:didEndInterruption:] */

void FUN_10857d360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10857d41c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000107c312cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10857d41c; end: 10857d45b;  */

void FUN_10857d41c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(char *)(param_1 + 0x78) == '\x01')) {
    func_0x00010c2504a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10857d45c; end: 10857d543; -[SCNGSMEBasePlayer audioSessionRouteDidChangeReasonCategoryChange:] */

void FUN_10857d45c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be95300();
  if ((int)lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10857d544;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x000107c312cc("APPSTORE",&puStack_60);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    FUN_108588fd4(*(undefined8 *)(param_1 + 0x128),1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10857d544; end: 10857d583;  */

void FUN_10857d544(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(char *)(param_1 + 0x78) == '\x01')) {
    func_0x00010c2504a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10857d584; end: 10857d63f; -[SCNGSMEBasePlayer audioSessionRouteDidChangeReasonNewDeviceAvailable:] */

void FUN_10857d584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10857d640;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000107c312cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10857d640; end: 10857d67f;  */

void FUN_10857d640(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(char *)(param_1 + 0x78) == '\x01')) {
    func_0x00010c2504a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10857d680; end: 10857d767; -[SCNGSMEBasePlayer audioSessionRouteDidChangeReasonOldDeviceUnavailable:] */

void FUN_10857d680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uStack_40 = 0x10857d728;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100c749e0(0x3e4ccccd,"APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10857d768; end: 10857d823; -[SCNGSMEBasePlayer audioSessionSilenceSecondaryAudioHintTypeDidChangeToEnd:] */

void FUN_10857d768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10857d824;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000107c312cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10857d824; end: 10857d863;  */

void FUN_10857d824(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(char *)(param_1 + 0x78) == '\x01')) {
    func_0x00010c2504a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10857d864; end: 10857d91f; -[SCNGSMEBasePlayer audioSessionMediaServicesWereReset:] */

void FUN_10857d864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10857d920;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000107c312cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10857d920; end: 10857d967;  */

void FUN_10857d920(long param_1)

{
  char cVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) &&
     (cVar1 = *(char *)(param_1 + 0x78), func_0x00010be936a0(param_1), cVar1 == '\x01')) {
    func_0x00010c2504a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10857d968; end: 10857daeb; -[SCNGSMEBasePlayer _resetPlayerAfterMediaServicesLoss] */

void FUN_10857d968(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x00010c281b20(*(undefined8 *)(param_1 + 0x80));
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010c12eb40(*(undefined8 *)(param_1 + 8));
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar2);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010c12eb40(*(undefined8 *)(param_1 + 8));
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar2);
  }
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
  func_0x00010c12d5c0(puVar3,param_2,param_1,
                      *(undefined8 *)PTR__AVPlayerItemFailedToPlayToEndTimeNotification_1103480d0,
                      *(undefined8 *)(param_1 + 0x20));
  func_0x00010c12d5c0(puVar3,param_2,param_1,&PTR____CFConstantStringClassReference_110f78c38,0);
  func_0x00010c12d5c0(puVar3,param_2,param_1,
                      *(undefined8 *)PTR__UIApplicationWillResignActiveNotification_110345ae0,0);
  func_0x00010c12d5c0(puVar3,param_2,param_1,
                      *(undefined8 *)PTR__UIApplicationDidBecomeActiveNotification_1103459f8,0);
  func_0x00010c12d5c0(puVar3,param_2,param_1,&PTR____CFConstantStringClassReference_110f1f8b8,0);
  func_0x00010c12d5c0(puVar3,param_2,param_1,&PTR____CFConstantStringClassReference_110f78c98,0);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + 0x120) = 0;
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x118));
  puVar1 = PTR__kCMTimeInvalid_110348648;
  *(undefined1 *)(param_1 + 0x48) = 0;
  uVar2 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(puVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10857daec; end: 10857dcf3; -[SCNGSMEBasePlayer _isCompositionSupported:] */

undefined8 FUN_10857daec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_3 + 8);
  }
  _objc_retain(lVar4);
  _objc_release(lVar4);
  if (lVar4 == 0) {
    param_1 = 0;
    goto LAB_10857dc9c;
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  if (param_3 == 0) goto LAB_10857dcec;
  lVar4 = *(long *)(param_3 + 8);
  do {
    _objc_retain(lVar4);
    lVar1 = lVar4;
    func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_f0,0x10);
    if (lVar1 == 0) {
      _objc_release(lVar4);
      lVar5 = 0;
      iVar6 = 0;
      iVar7 = 0;
LAB_10857dc54:
      lVar4 = 0;
    }
    else {
      iVar7 = 0;
      iVar6 = 0;
      lVar5 = 0;
      lVar9 = *plStack_120;
      do {
        lVar10 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(lVar4);
          }
          lVar8 = *(long *)(lStack_128 + lVar10 * 8);
          if (lVar8 == 0) {
            uVar2 = 0;
          }
          else {
            lVar3 = *(long *)(lVar8 + 8);
            if (lVar3 == 1) {
              iVar7 = iVar7 + 1;
              _objc_retain(lVar8);
              _objc_release(lVar5);
              lVar3 = *(long *)(lVar8 + 8);
              lVar5 = lVar8;
            }
            uVar2 = (uint)(lVar3 == 2);
          }
          iVar6 = uVar2 + iVar6;
          lVar10 = lVar10 + 1;
        } while (lVar1 != lVar10);
        lVar1 = lVar4;
        func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar1 != 0);
      _objc_release(lVar4);
      if (lVar5 == 0) goto LAB_10857dc54;
      lVar4 = *(long *)(lVar5 + 0x20);
    }
    _objc_retain(lVar4);
    lVar1 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    if (lVar1 == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010bec9000(param_1,param_2,iVar7,iVar6);
    }
    _objc_release(lVar5);
LAB_10857dc9c:
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return param_1;
    }
    ___stack_chk_fail();
LAB_10857dcec:
    lVar4 = 0;
  } while( true );
}



/* Entry: 10857dcf4; end: 10857dcfb; -[SCNGSMEBasePlayer _supportedVideoTrackCount:andImageOverlayCount:] */

undefined8 FUN_10857dcf4(void)

{
  return 1;
}



/* Entry: 10857dcfc; end: 10857dd03; -[SCNGSMEBasePlayer playerModel] */

undefined8 FUN_10857dcfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 10857dd04; end: 10857dd33; -[SCNGSMEBasePlayer setPlayerModel:] */

void FUN_10857dd04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x138) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10857dd34; end: 10857dd3b; -[SCNGSMEBasePlayer playbackLogger] */

undefined8 FUN_10857dd34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 10857dd3c; end: 10857dd6b; -[SCNGSMEBasePlayer setPlaybackLogger:] */

void FUN_10857dd3c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10857dd6c; end: 10857dd73; -[SCNGSMEBasePlayer shouldLoop] */

undefined1 FUN_10857dd6c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x130);
}


