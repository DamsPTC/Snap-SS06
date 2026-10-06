/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ce4048; end: 108ce41c3; -[SCVideoFrameSource multiSnapIndexForFrameTime:] */

long FUN_108ce4048(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar1 = param_1;
  func_0x00010c0d24a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_40 = param_3[2];
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,&uStack_50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d24a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf529e0();
  lVar4 = lVar1;
  func_0x00010bfece00(lVar1,param_2,puVar2,0,lVar3,0x400,&PTR___NSConcreteGlobalBlock_110ac1c80);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(lVar1);
  if (lVar4 < 2) {
    lVar4 = 1;
  }
  return lVar4 + -1;
}



/* Entry: 108ce41c4; end: 108ce42d7; -[SCVideoFrameSource _observePlayerItem] */

void FUN_108ce41c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_s__playerItemDidPlayToEndTime__112534140;
  uVar5 = *(undefined8 *)PTR__AVPlayerItemDidPlayToEndTimeNotification_1103480c0;
  lVar2 = param_1;
  func_0x00010c100ae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240(puVar1,param_2,param_1,puVar3,uVar5,lVar2);
  _objc_release(lVar2);
  _objc_release(puVar1);
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    func_0x00010be66980(param_1);
  }
  lVar2 = *(long *)(param_1 + 0xe0);
  func_0x00010c252d60();
  if (lVar2 == 1) {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  uVar5 = *(undefined8 *)(param_1 + 0xe0);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"status");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0760(uVar4,param_2,uVar5,puVar3,3,PTR_s__playerItemStatusChange__11253cf70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108ce42d8; end: 108ce4393; -[SCVideoFrameSource _observePlayerItemBuffer] */

void FUN_108ce42d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"playbackBufferEmpty");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0760(uVar2,param_2,uVar3,puVar1,3,PTR_s__playerItemBufferDidBecomeEmpty__11253cf78)
  ;
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"playbackLikelyToKeepUp");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0760(uVar3,param_2,uVar2,puVar1,3,PTR_s__playerItemLikelyToKeepUp__11253cf80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ce4394; end: 108ce4437; -[SCVideoFrameSource _unobservePlayerItemBuffer] */

void FUN_108ce4394(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"playbackBufferEmpty");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c281ae0(uVar2,param_2,uVar3,puVar1);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"playbackLikelyToKeepUp");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c281ae0(uVar3,param_2,uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ce4438; end: 108ce448f; -[SCVideoFrameSource _unobservePlayerItem] */

void FUN_108ce4438(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 0xe0) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d560();
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c281a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x78),PTR_s_unobserve__11267e0c8,
               *(undefined8 *)(param_1 + 0xe0));
    return;
  }
  return;
}



/* Entry: 108ce4490; end: 108ce450b; -[SCVideoFrameSource _playerItemReady] */

void FUN_108ce4490(long param_1)

{
  long lVar1;
  
  func_0x00010c129320();
  lVar1 = param_1;
  func_0x00010c100ae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c4c0();
  _objc_release(lVar1);
  *(undefined1 *)(param_1 + 0xb7) = 1;
  param_1 = param_1 + 0xe8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29a2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ce450c; end: 108ce453f; -[SCVideoFrameSource _playerItemDidPlayToEndTime:] */

void FUN_108ce450c(long param_1)

{
  param_1 = param_1 + 0xe8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29a2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ce4540; end: 108ce4613; -[SCVideoFrameSource _playerItemBufferDidBecomeEmpty:] */

void FUN_108ce4540(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)PTR__NSKeyValueChangeOldKey_110345510;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,*(undefined8 *)PTR__NSKeyValueChangeNewKey_110345500);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar3 != 0 || (int)uVar2 == 0) {
    return;
  }
  param_1 = param_1 + 0xe8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29a300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ce4614; end: 108ce46e7; -[SCVideoFrameSource _playerItemLikelyToKeepUp:] */

void FUN_108ce4614(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)PTR__NSKeyValueChangeOldKey_110345510;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,*(undefined8 *)PTR__NSKeyValueChangeNewKey_110345500);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar3 != 0 || (int)uVar2 == 0) {
    return;
  }
  param_1 = param_1 + 0xe8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29a320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ce46e8; end: 108ce483f; -[SCVideoFrameSource _playerItemStatusChange:] */

void FUN_108ce46e8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)PTR__NSKeyValueChangeOldKey_110345510;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,*(undefined8 *)PTR__NSKeyValueChangeNewKey_110345500);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar1;
  func_0x00010c067fc0();
  _objc_release(lVar1);
  if (lVar2 == lVar3) {
    return;
  }
  lVar1 = param_1;
  func_0x00010c100ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c252d60();
  _objc_release(lVar1);
  if (lVar2 == 2) {
    *(undefined1 *)(param_1 + 0xb7) = 0;
    lVar1 = param_1 + 0xe8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c29a2c0();
    _objc_release(lVar1);
  }
  else if (lVar2 == 1) {
    func_0x00010be75120(param_1);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  uVar6 = *(undefined8 *)(param_1 + 0xe0);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"status");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c281ae0(uVar5,param_2,uVar6,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 108ce4840; end: 108ce4a8f; -[SCVideoFrameSource setRate:] */

void FUN_108ce4840(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [48];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar9 = *(double *)(param_2 + 0xc0);
  lVar2 = param_2;
  if (param_1 != dVar9) {
    if (*(long *)(param_2 + 8) == 0) {
      func_0x00010bf0b060(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      dVar9 = *(double *)(param_2 + 0xc0);
    }
    *(double *)(param_2 + 0x120) = dVar9;
    *(double *)(param_2 + 0xc0) = param_1;
    func_0x00010c0ed4c0(auStack_158,param_2);
    _CMTimeMultiplyByFloat64(&uStack_110,1.0 / param_1,auStack_158);
    if (*(long *)(param_2 + 8) == 0) {
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_128);
    }
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    uVar11 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar10 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uVar7 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_188 = uStack_120;
    uStack_190 = uStack_128;
    uStack_180 = uStack_118;
    uStack_170 = uVar10;
    uStack_168 = uVar11;
    uStack_160 = uVar7;
    _CMTimeRangeMake(auStack_158,&uStack_170,&uStack_190);
    uStack_168 = uStack_108;
    uStack_170 = uStack_110;
    uStack_160 = uStack_100;
    func_0x00010c14e420(uVar5);
    lVar6 = *(long *)(param_2 + 0x18);
    _objc_retain(lVar6);
    lVar1 = lVar6;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(lVar6);
        }
        uVar5 = *(undefined8 *)(lVar8 * 8);
        uStack_188 = uStack_120;
        uStack_190 = uStack_128;
        uStack_180 = uStack_118;
        uStack_170 = uVar10;
        uStack_168 = uVar11;
        uStack_160 = uVar7;
        _CMTimeRangeMake(auStack_158,&uStack_170,&uStack_190);
        uStack_168 = uStack_108;
        uStack_170 = uStack_110;
        uStack_160 = uStack_100;
        func_0x00010c14e420(uVar5);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar6;
      func_0x00010bf52a60();
    }
    _objc_release(lVar6);
    func_0x00010bf0b060();
    _objc_retainAutoreleasedReturnValue();
    param_4 = lVar2;
    func_0x00010be1a980(param_2);
    _objc_release(lVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
  _objc_retain(param_4);
  func_0x00010c100be0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar4 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar4 != 0) {
    func_0x00010bf16200(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16be60(puVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108ce4a90; end: 108ce4b4b; -[SCVideoFrameSource _generateAndConfigurePlayerItemFromAsset:] */

void FUN_108ce4a90(undefined8 param_1,undefined8 param_2,long param_3)

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
    func_0x00010bf16200(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16be60(puVar1,param_2,param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ce4b4c; end: 108ce4b9b; -[SCVideoFrameSource _prefetchedFrameKeyForFrameTime:] */

void FUN_108ce4b4c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  uStack_30 = param_3[2];
  _CMTimeGetSeconds(&uStack_40);
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ce4b9c; end: 108ce4c73; -[SCVideoFrameSource _mixedAudioTrack:withVolumeProportion:] */

void FUN_108ce4b9c(undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = PTR_PTR_1126bf680;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  if (param_4 == 0) {
    _objc_retain(0);
    uVar2 = 0;
    uVar3 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_4 + 0x10);
    _objc_retain(uVar2);
    uStack_58 = *(undefined8 *)(param_4 + 0x28);
    uStack_60 = *(undefined8 *)(param_4 + 0x20);
    uStack_50 = *(undefined8 *)(param_4 + 0x30);
    uVar3 = *(undefined8 *)(param_4 + 0x18);
  }
  _objc_retain(uVar3);
  _objc_release(param_4);
  func_0x00010b744494(param_1,puVar1,uVar2,&uStack_60,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ce4c74; end: 108ce4c8b; -[SCVideoFrameSource itemTimeStartOffset] */

void FUN_108ce4c74(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  param_1[2] = *(undefined8 *)(param_2 + 0x138);
  uVar1 = *(undefined8 *)(param_2 + 0x128);
  param_1[1] = *(undefined8 *)(param_2 + 0x130);
  *param_1 = uVar1;
  return;
}



/* Entry: 108ce4c8c; end: 108ce4ca3; -[SCVideoFrameSource setItemTimeStartOffset:] */

void FUN_108ce4c8c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x138) = param_3[2];
  *(undefined8 *)(param_1 + 0x130) = uVar2;
  *(undefined8 *)(param_1 + 0x128) = uVar1;
  return;
}



/* Entry: 108ce4ca4; end: 108ce4cab; -[SCVideoFrameSource rate] */

undefined8 FUN_108ce4ca4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 108ce4cac; end: 108ce4cb3; -[SCVideoFrameSource renderOrientation] */

undefined8 FUN_108ce4cac(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 108ce4cb4; end: 108ce4cbb; -[SCVideoFrameSource setRenderOrientation:] */

void FUN_108ce4cb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 200) = param_3;
  return;
}



/* Entry: 108ce4cbc; end: 108ce4cc3; -[SCVideoFrameSource didProcessFirstFrame] */

undefined1 FUN_108ce4cbc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb0);
}



/* Entry: 108ce4cc4; end: 108ce4ccb; -[SCVideoFrameSource setDidProcessFirstFrame:] */

void FUN_108ce4cc4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb0) = param_3;
  return;
}



/* Entry: 108ce4ccc; end: 108ce4cd3; -[SCVideoFrameSource originalAsset] */

undefined8 FUN_108ce4ccc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 108ce4cd4; end: 108ce4cdb; -[SCVideoFrameSource playerItem] */

undefined8 FUN_108ce4cd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 108ce4cdc; end: 108ce4ce3; -[SCVideoFrameSource nonBaseAudioPlayerItem] */

undefined8 FUN_108ce4cdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108ce4ce4; end: 108ce4ceb; -[SCVideoFrameSource baseAudioPlayerItemVolume] */

undefined8 FUN_108ce4ce4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108ce4cec; end: 108ce4d03; -[SCVideoFrameSource delegate] */

void FUN_108ce4cec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xe8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ce4d04; end: 108ce4d0f; -[SCVideoFrameSource setDelegate:] */

void FUN_108ce4d04(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xe8,param_3);
  return;
}



/* Entry: 108ce4d10; end: 108ce4d17; -[SCVideoFrameSource multiSnapTimeRanges] */

undefined8 FUN_108ce4d10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 108ce4d18; end: 108ce4d1f; -[SCVideoFrameSource didDeleteTimeRange] */

undefined1 FUN_108ce4d18(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb1);
}



/* Entry: 108ce4d20; end: 108ce4d27; -[SCVideoFrameSource setDidDeleteTimeRange:] */

void FUN_108ce4d20(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb1) = param_3;
  return;
}



/* Entry: 108ce4d28; end: 108ce4d2f; -[SCVideoFrameSource firstVSyncHostTime] */

undefined8 FUN_108ce4d28(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 108ce4d30; end: 108ce4d37; -[SCVideoFrameSource setFirstVSyncHostTime:] */

void FUN_108ce4d30(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0xf0) = param_1;
  return;
}



/* Entry: 108ce4d38; end: 108ce4d3f; -[SCVideoFrameSource hasExtractedFrame] */

undefined1 FUN_108ce4d38(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb2);
}



/* Entry: 108ce4d40; end: 108ce4d47; -[SCVideoFrameSource setHasExtractedFrame:] */

void FUN_108ce4d40(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb2) = param_3;
  return;
}



/* Entry: 108ce4d48; end: 108ce4d4f; -[SCVideoFrameSource noNewPixelBufferCount] */

undefined8 FUN_108ce4d48(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 108ce4d50; end: 108ce4d57; -[SCVideoFrameSource setNoNewPixelBufferCount:] */

void FUN_108ce4d50(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xf8) = param_3;
  return;
}



/* Entry: 108ce4d58; end: 108ce4d5f; -[SCVideoFrameSource remakeVideoOutputTryCount] */

undefined8 FUN_108ce4d58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 108ce4d60; end: 108ce4d67; -[SCVideoFrameSource setRemakeVideoOutputTryCount:] */

void FUN_108ce4d60(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x100) = param_3;
  return;
}



/* Entry: 108ce4d68; end: 108ce4d6f; -[SCVideoFrameSource continuousAudioPlay] */

undefined1 FUN_108ce4d68(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb3);
}



/* Entry: 108ce4d70; end: 108ce4d77; -[SCVideoFrameSource setContinuousAudioPlay:] */

void FUN_108ce4d70(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb3) = param_3;
  return;
}



/* Entry: 108ce4d78; end: 108ce4d7f; -[SCVideoFrameSource usePlaybackOptimizedAsset] */

undefined1 FUN_108ce4d78(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb4);
}



/* Entry: 108ce4d80; end: 108ce4d87; -[SCVideoFrameSource setUsePlaybackOptimizedAsset:] */

void FUN_108ce4d80(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb4) = param_3;
  return;
}



/* Entry: 108ce4d88; end: 108ce4d8f; -[SCVideoFrameSource isEditingMode] */

undefined1 FUN_108ce4d88(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb5);
}



/* Entry: 108ce4d90; end: 108ce4d97; -[SCVideoFrameSource setIsEditingMode:] */

void FUN_108ce4d90(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb5) = param_3;
  return;
}



/* Entry: 108ce4d98; end: 108ce4d9f; -[SCVideoFrameSource useSingleCompositionForVideoFrameSource] */

undefined1 FUN_108ce4d98(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb6);
}



/* Entry: 108ce4da0; end: 108ce4da7; -[SCVideoFrameSource setUseSingleCompositionForVideoFrameSource:] */

void FUN_108ce4da0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb6) = param_3;
  return;
}



/* Entry: 108ce4da8; end: 108ce4daf; -[SCVideoFrameSource asset] */

undefined8 FUN_108ce4da8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 108ce4db0; end: 108ce4ddf; -[SCVideoFrameSource setAsset:] */

void FUN_108ce4db0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108ce4de0; end: 108ce4de7; -[SCVideoFrameSource sourceReady] */

undefined1 FUN_108ce4de0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb7);
}



/* Entry: 108ce4de8; end: 108ce4def; -[SCVideoFrameSource setSourceReady:] */

void FUN_108ce4de8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb7) = param_3;
  return;
}



/* Entry: 108ce4df0; end: 108ce4df7; -[SCVideoFrameSource playbackBufferMonitoringEnabled] */

undefined1 FUN_108ce4df0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb8);
}



/* Entry: 108ce4df8; end: 108ce4dff; -[SCVideoFrameSource videoOutput] */

undefined8 FUN_108ce4df8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 108ce4e00; end: 108ce4e13; -[SCVideoFrameSource originalDuration] */

void FUN_108ce4e00(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  param_1[1] = *(undefined8 *)(param_2 + 0x60);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x68);
  return;
}



/* Entry: 108ce4e14; end: 108ce4e1b; -[SCVideoFrameSource assetVideoComposition] */

undefined8 FUN_108ce4e14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 108ce4e1c; end: 108ce4e23; -[SCVideoFrameSource lastRate] */

undefined8 FUN_108ce4e1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 108ce4e24; end: 108ce4f3f; -[SCVideoFrameSource .cxx_destruct] */

void FUN_108ce4e24(long param_1)

{
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_destroyWeak(param_1 + 0xe8);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 108ce4f40; end: 108ce4ffb; -[SCImageProcessBatchCapturePlaybackSession initWithQueue:player:frameSourcesBatch:layer:videoPlaybackLogger:commandManager:] */

undefined8
FUN_108ce4f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010bfee7c0(param_1,param_2,param_3,param_5,0);
  func_0x00010c228ca0();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 108ce4ffc; end: 108ce525b; -[SCImageProcessBatchCapturePlaybackSession initEmptyPlaybackSessionWithQueue:frameSourcesBatch:commandManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108ce4ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fe430;
  puVar2 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[1];
    puVar2[1] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[0x17];
    puVar2[0x17] = param_5;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_11277ac7c;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_4;
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010bfb70c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beacb00(puVar2);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126dbb18;
    _objc_alloc();
    func_0x00010c015280();
    lVar6 = (long)_DAT_11277ac80;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined **)((long)puVar2 + lVar6) = puVar4;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar2 + lVar6));
    uVar7 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar5 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uVar3 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    func_0x00010c209aa0(puVar2);
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_11277ac84);
    puVar1[1] = uVar7;
    *puVar1 = uVar5;
    puVar1[2] = uVar3;
    uVar3 = 0;
    _dispatch_semaphore_create();
    uVar5 = puVar2[7];
    puVar2[7] = uVar3;
    _objc_release(uVar5);
    _dispatch_semaphore_signal(puVar2[7]);
    _dispatch_semaphore_signal(puVar2[7]);
    puVar4 = PTR__CGAffineTransformIdentity_110347008;
    uVar3 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    puVar2[0x12] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    puVar2[0x11] = uVar3;
    puVar2[0x14] = uVar7;
    puVar2[0x13] = uVar5;
    uVar3 = *(undefined8 *)(puVar4 + 0x20);
    puVar2[0x16] = *(undefined8 *)(puVar4 + 0x28);
    puVar2[0x15] = uVar3;
    puVar2[0xe] = 2;
    puVar2[8] = 0x3fc999999999999a;
    puVar4 = PTR_PTR_1126d8a00;
    _objc_alloc_init();
    uVar3 = puVar2[0x10];
    puVar2[0x10] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126d1398;
    _objc_opt_new();
    uVar3 = puVar2[0x19];
    puVar2[0x19] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126dbb20;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11277ac88);
    *(undefined **)((long)puVar2 + (long)_DAT_11277ac88) = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11277ac8c);
    *(undefined **)((long)puVar2 + (long)_DAT_11277ac8c) = puVar4;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar2 + (long)_DAT_11277ac90) = 0x3f800000;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 108ce525c; end: 108ce5473; -[SCImageProcessBatchCapturePlaybackSession setupInitializationWithPlayer:layer:videoPlaybackLogger:commandManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce525c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar8 = (long)_DAT_11277ac94;
  if (*(long *)(param_5 + lVar8) == 0) {
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)(param_5 + lVar8);
    *(undefined8 *)(param_5 + lVar8) = param_8;
    _objc_release(uVar2);
  }
  puVar3 = PTR_PTR_1126bf4e8;
  _objc_alloc();
  puVar4 = PTR_PTR_1126bf4b8;
  _objc_opt_new(PTR_PTR_1126bf4b8);
  func_0x00010c01cce0();
  uVar2 = *(undefined8 *)(param_5 + 0x28);
  *(undefined **)(param_5 + 0x28) = puVar3;
  _objc_release(uVar2);
  _objc_release(puVar4);
  if (param_10 != 0) {
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)(param_5 + 0xb8);
    *(long *)(param_5 + 0xb8) = param_10;
    _objc_release(uVar2);
  }
  func_0x00010bef9980(*(undefined8 *)(param_5 + 0x80));
  lVar7 = (long)_DAT_11277ac98;
  _objc_retain(param_9);
  uVar2 = *(undefined8 *)(param_5 + lVar7);
  *(undefined8 *)(param_5 + lVar7) = param_9;
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126dbb28;
  _objc_alloc();
  func_0x00010bfefc80();
  lVar7 = (long)_DAT_11277ac9c;
  uVar2 = *(undefined8 *)(param_5 + lVar7);
  *(undefined **)(param_5 + lVar7) = puVar3;
  _objc_release(uVar2);
  func_0x00010c1dfc40(*(undefined8 *)(param_5 + lVar7));
  uVar5 = *(ulong *)(param_5 + _DAT_11277aca0);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d4d68;
  _objc_opt_class(PTR_PTR_1126d4d68);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar3);
  uVar1 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar6 = uVar1;
  func_0x00010c2907a0();
  _objc_release(uVar1);
  if ((int)uVar6 != 0) {
    func_0x00010c21da80(*(undefined8 *)(param_5 + lVar7));
  }
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar8));
  func_0x00010bf4e040(*(undefined8 *)(param_5 + lVar8));
  func_0x00010b690ad8(param_3,param_4,param_1);
  func_0x00010b690acc();
  func_0x00010beea780(param_5);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 108ce5474; end: 108ce552b; -[SCImageProcessBatchCapturePlaybackSession dealloc] */

void FUN_108ce5474(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108ce54f4;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  func_0x00010bcbe2c4("APPSTORE",&puStack_48);
  puStack_50 = PTR_PTR_1126fe430;
  uStack_58 = param_1;
  _objc_msgSendSuper2(&uStack_58,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108ce552c; end: 108ce5643; -[SCImageProcessBatchCapturePlaybackSession prepareToPlay] */

void FUN_108ce552c(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010bddf0c0(param_1);
  }
  func_0x00010be78220(param_1);
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
  puVar1 = PTR_PTR_1126aed60;
  func_0x00010c15fac0(PTR_PTR_1126aed60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ce5644; end: 108ce5827; -[SCImageProcessBatchCapturePlaybackSession _setupCurrentFrameSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ce5644(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d4d68;
  lVar6 = (long)_DAT_11277aca4;
  uVar5 = *(ulong *)(param_1 + lVar6);
  if (param_3 == uVar5) {
    uVar3 = 1;
    goto LAB_108ce5804;
  }
  _objc_retain(uVar5);
  _objc_opt_class(puVar1);
  uVar2 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar1);
  uVar4 = uVar5;
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  *(ulong *)(param_1 + lVar6) = param_3;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126d4d68;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar5 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(param_3);
  _objc_release(uVar4);
  if (uVar5 == 0) {
    func_0x00010c130d80(*(undefined8 *)(param_1 + _DAT_11277ac88));
LAB_108ce57f8:
    uVar3 = 1;
  }
  else {
    uVar4 = param_3;
    func_0x00010c100ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar4 == 0) {
      func_0x00010c16bf60(param_3);
      func_0x00010c28c300(*(undefined4 *)(param_1 + _DAT_11277ac90),param_3);
      uVar3 = *(undefined8 *)(param_1 + _DAT_11277ac8c);
      _objc_retain(param_3);
      func_0x00010bf97ce0(uVar3);
      func_0x00010c250140(param_3);
      _objc_release(uVar5);
    }
    uVar4 = *(ulong *)(param_1 + _DAT_11277ac9c);
    func_0x00010c130d80();
    if ((uVar4 & 1) != 0) goto LAB_108ce57f8;
    func_0x00010bddf0c0(param_1);
    uVar3 = 0;
  }
  _objc_release(uVar5);
LAB_108ce5804:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 108ce5828; end: 108ce5833;  */

void FUN_108ce5828(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c86f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setMixedAudioAssetTrack_forKey__11264fbe0,param_3
             ,param_2);
  return;
}



/* Entry: 108ce5834; end: 108ce5843; -[SCImageProcessBatchCapturePlaybackSession isPlaying] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce5834(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07a410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277ac9c),PTR_s_isPlaying_1125fc310);
  return;
}



/* Entry: 108ce5844; end: 108ce5863; -[SCImageProcessBatchCapturePlaybackSession currentTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce5844(undefined8 *param_1,long param_2)

{
  if (*(long *)(param_2 + _DAT_11277ac9c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf60490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_2 + _DAT_11277ac9c),PTR_s_currentTime_1125b5ac8);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 108ce5864; end: 108ce5873; -[SCImageProcessBatchCapturePlaybackSession beginConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce5864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf17e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277ac9c),PTR_s_beginConfiguration_1125a3938);
  return;
}



/* Entry: 108ce5874; end: 108ce5883; -[SCImageProcessBatchCapturePlaybackSession commitConfigurationWithSeekToBeginning:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce5874(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf427f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277ac9c),
             PTR_s_commitConfigurationWithSeekToBeg_1125ae3a0);
  return;
}



/* Entry: 108ce5884; end: 108ce58a7; -[SCImageProcessBatchCapturePlaybackSession volume] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_108ce5884(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  func_0x00010c2a0dc0(*(undefined8 *)(param_2 + _DAT_11277ac9c));
  return (float)(double)CONCAT44(uVar2,uVar1);
}



/* Entry: 108ce58a8; end: 108ce58bb; -[SCImageProcessBatchCapturePlaybackSession setVolume:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce58a8(float param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2241b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)param_1,*(undefined8 *)(param_2 + _DAT_11277ac9c),PTR_s_setVolume__112666a90);
  return;
}



/* Entry: 108ce58bc; end: 108ce58c3; -[SCImageProcessBatchCapturePlaybackSession shouldLoop] */

undefined1 FUN_108ce58bc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x7c);
}



/* Entry: 108ce58c4; end: 108ce58eb; -[SCImageProcessBatchCapturePlaybackSession setShouldLoop:] */

void FUN_108ce58c4(long param_1,undefined8 param_2,uint param_3)

{
  if (((*(byte *)(param_1 + 0x7c) != param_3) &&
      (*(char *)(param_1 + 0x7c) = (char)param_3, param_3 != 0)) &&
     (*(char *)(param_1 + 0x7e) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010c1573b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_seekVideoAndAudioToBeginning_112633708);
    return;
  }
  return;
}



/* Entry: 108ce58ec; end: 108ce58fb; -[SCImageProcessBatchCapturePlaybackSession isReversePlaying] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce58ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1401b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277ac9c),PTR_s_reversePlaybackEnabled_11262da88);
  return;
}



/* Entry: 108ce58fc; end: 108ce58ff; -[SCImageProcessBatchCapturePlaybackSession setAudioProcessorMix:] */

void FUN_108ce58fc(void)

{
  return;
}



/* Entry: 108ce5900; end: 108ce590f; -[SCImageProcessBatchCapturePlaybackSession setPlayerRate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce5900(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ddb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277ac9c),PTR_s_setPlayerRate__1126550f8);
  return;
}



/* Entry: 108ce5910; end: 108ce5983; -[SCImageProcessBatchCapturePlaybackSession pauseRunningAndContinueRendering:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce5910(long param_1,undefined8 param_2,ulong param_3)

{
  func_0x00010c0f5fe0(*(undefined8 *)(param_1 + _DAT_11277ac9c));
  func_0x00010c200980(*(undefined8 *)(param_1 + _DAT_11277ac98));
  func_0x00010c29ab80(*(undefined8 *)(param_1 + 0x80));
  if ((param_3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1d9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_setPaused__112654088,1);
  return;
}



/* Entry: 108ce5984; end: 108ce5a0b; -[SCImageProcessBatchCapturePlaybackSession resumeRunning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce5984(double param_1,long param_2)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_2 + _DAT_11277ac9c);
  func_0x00010c07a400();
  if ((iVar1 != 0) &&
     (func_0x00010c11fdc0(*(undefined8 *)(param_2 + _DAT_11277aca4)), param_1 != 0.0)) {
    return;
  }
  func_0x00010c200980(*(undefined8 *)(param_2 + _DAT_11277ac98));
  func_0x00010bec1640(param_2);
  func_0x00010c29aba0(*(undefined8 *)(param_2 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010c1d9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x30),PTR_s_setPaused__112654088,0);
  return;
}



/* Entry: 108ce5a0c; end: 108ce5a33; -[SCImageProcessBatchCapturePlaybackSession stopRunning] */

void FUN_108ce5a0c(long param_1)

{
  func_0x00010bec38a0();
                    /* WARNING: Could not recover jumptable at 0x00010c29abf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_videoPlaybackSessionDidStopRunni_112684520,
             param_1);
  return;
}



/* Entry: 108ce5a34; end: 108ce5ae7; -[SCImageProcessBatchCapturePlaybackSession _stopRunningWithoutAnnounce] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce5a34(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bddf0c0();
  func_0x00010bf2eca0(*(undefined8 *)(param_1 + _DAT_11277aca4));
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aed60;
  func_0x00010c15fac0(PTR_PTR_1126aed60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(puVar1);
  func_0x00010c255780(*(undefined8 *)(param_1 + _DAT_11277ac9c));
  _CVPixelBufferRelease(*(undefined8 *)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x48) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf3a2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cleanupCommandsAndRenderer_1125ac258);
  return;
}



/* Entry: 108ce5ae8; end: 108ce5b63; -[SCImageProcessBatchCapturePlaybackSession cleanupCommandsAndRenderer] */

void FUN_108ce5ae8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c280a60(*(undefined8 *)(param_1 + 0xb8));
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d13a8;
  _objc_opt_new(PTR_PTR_1126d13a8);
  func_0x00010befafa0(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d13b0;
  _objc_alloc(PTR_PTR_1126d13b0);
  func_0x00010c03e200();
  func_0x00010befafa0(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ce5b64; end: 108ce5bd3; -[SCImageProcessBatchCapturePlaybackSession setReversePlaybackEnabled:reverseAudioPlayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce5b64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277ac80);
  _objc_retain(param_4);
  func_0x00010c1b3fc0(uVar1,param_2,param_3);
  func_0x00010c1ede00(*(undefined8 *)(param_1 + _DAT_11277ac9c),param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108ce5bd4; end: 108ce5be3; -[SCImageProcessBatchCapturePlaybackSession setPlayerItemTimeScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce5bd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19f4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277ac9c),PTR_s_setFrameSourceRate__112645758);
  return;
}



/* Entry: 108ce5be4; end: 108ce5bf3; -[SCImageProcessBatchCapturePlaybackSession seekVideoAndAudioToBeginning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce5be4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c157130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277ac9c),PTR_s_seekToBeginning_112633668);
  return;
}



/* Entry: 108ce5bf4; end: 108ce5c2f; -[SCImageProcessBatchCapturePlaybackSession seekToTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce5bf4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  uStack_20 = param_3[2];
  func_0x00010c157260(*(undefined8 *)(param_1 + _DAT_11277ac9c),param_2,&uStack_30);
  return;
}



/* Entry: 108ce5c30; end: 108ce5c6b; -[SCImageProcessBatchCapturePlaybackSession stopPlayingAndSeekSmoothlyToTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce5c30(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  uStack_20 = param_3[2];
  func_0x00010c256620(*(undefined8 *)(param_1 + _DAT_11277ac9c),param_2,&uStack_30);
  return;
}



/* Entry: 108ce5c6c; end: 108ce5cc3; -[SCImageProcessBatchCapturePlaybackSession setPreciseSeeking:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce5c6c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fe430;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setPreciseSeeking__112655938);
  func_0x00010c1dfc40(*(undefined8 *)(param_1 + _DAT_11277ac9c));
  return;
}



/* Entry: 108ce5cc4; end: 108ce5d3f; -[SCImageProcessBatchCapturePlaybackSession setStartTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce5cc4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fe430;
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_40 = param_3[2];
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setStartTimestamp__1126600d0,&uStack_50);
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_40 = param_3[2];
  func_0x00010c209aa0(*(undefined8 *)(param_1 + _DAT_11277ac9c));
  return;
}



/* Entry: 108ce5d40; end: 108ce5e43; -[SCImageProcessBatchCapturePlaybackSession seekToCurrentSegmentBeginning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce5d40(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar2 = param_1;
  func_0x00010be42b80();
  puVar3 = PTR_PTR_1126d4d68;
  if ((int)lVar2 == 0) {
    uVar5 = *(ulong *)(param_1 + _DAT_11277aca4);
    _objc_retain(uVar5);
    _objc_opt_class(puVar3);
    uVar4 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar1 = uVar5;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    if (uVar1 == 0) {
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
    }
    else {
      func_0x00010c100340(&uStack_50,uVar5);
    }
    func_0x00010c250500(*(undefined8 *)(param_1 + _DAT_11277ac9c));
    _objc_release(uVar1);
  }
  else {
    uStack_48 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_50 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_40 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    func_0x00010c2504e0(*(undefined8 *)(param_1 + _DAT_11277ac88));
  }
  return;
}



/* Entry: 108ce5e44; end: 108ce5e4b; -[SCImageProcessBatchCapturePlaybackSession seekToSourceAt:snapIndex:] */

void FUN_108ce5e44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c157230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_seekToSourceAt_snapIndex_shouldS_1126336a8,param_3,param_4,0);
  return;
}



/* Entry: 108ce5e4c; end: 108ce5f73; -[SCImageProcessBatchCapturePlaybackSession seekToSourceAt:snapIndex:shouldSeekToStart:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce5e4c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar3 = *(long *)(param_1 + _DAT_11277aca0);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = _DAT_11277ac80;
  if ((param_5 == 0) && (lVar3 == *(long *)(param_1 + _DAT_11277aca4))) {
    lVar4 = *(long *)(param_1 + _DAT_11277ac80);
    func_0x00010bf600e0();
    if (lVar4 == param_4) goto LAB_108ce5f30;
  }
  iVar2 = (int)*(undefined8 *)(param_1 + iVar1);
  func_0x00010c157420();
  if (iVar2 == 0) {
    func_0x00010befe3c0(*(undefined8 *)(param_1 + iVar1));
  }
  else {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_108ce5f74;
    puStack_60 = &UNK_110858dc0;
    lStack_58 = param_1;
    uStack_50 = param_3;
    lStack_48 = param_4;
    func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&puStack_78);
  }
LAB_108ce5f30:
  if (*(char *)(param_1 + _DAT_11277acac) == '\x01') {
    func_0x00010bedd560(param_1);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 108ce5f74; end: 108ce5f8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce5f74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befe3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277ac80),
             PTR_s_advanceToSourceIndex_sourceMulti_11259d298,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 108ce5f90; end: 108ce601b; -[SCImageProcessBatchCapturePlaybackSession setIsIndividualLooping:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce5f90(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  *(char *)(param_1 + _DAT_11277acac) = (char)param_3;
  func_0x00010c1b1dc0(*(undefined8 *)(param_1 + _DAT_11277ac80));
  func_0x00010c200980(*(undefined8 *)(param_1 + _DAT_11277ac98),param_2,param_3 ^ 1);
  if ((param_3 & 1) == 0) {
    uStack_48 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_50 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_40 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    func_0x00010c209aa0(*(undefined8 *)(param_1 + _DAT_11277ac9c),param_2,&uStack_50);
  }
  return;
}



/* Entry: 108ce601c; end: 108ce604b; -[SCImageProcessBatchCapturePlaybackSession currentItemStartTimeOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce601c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__kCMTimeZero_110348670;
  if (*(long *)(param_2 + _DAT_11277aca4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c084c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_2 + _DAT_11277aca4),PTR_s_itemTimeStartOffset_1125fed10);
    return;
  }
  uVar2 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  param_1[1] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  *param_1 = uVar2;
  param_1[2] = *(undefined8 *)(puVar1 + 0x10);
  return;
}



/* Entry: 108ce604c; end: 108ce61b7; -[SCImageProcessBatchCapturePlaybackSession setMixedAudioAssetTrack:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce604c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + _DAT_11277ac8c));
  uVar2 = *(ulong *)(param_1 + _DAT_11277aca0);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d4d68;
  _objc_retain();
  _objc_opt_class(puVar3);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar4 = uVar1;
  func_0x00010c1c86e0();
  func_0x00010c289c60(*(undefined8 *)(param_1 + _DAT_11277ac9c));
  if ((int)uVar4 != 0) {
    _objc_initWeak(auStack_58,param_1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_108ce61b8;
    puStack_68 = &UNK_1108434b0;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x000107c312d0("APPSTORE",&puStack_80);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108ce61b8; end: 108ce61e3;  */

void FUN_108ce61b8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c138740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ce61e4; end: 108ce63ab; -[SCImageProcessBatchCapturePlaybackSession updateVolumeProportion:forAudioTrackWithKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce61e4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    *(int *)(param_2 + _DAT_11277ac90) = (int)param_1;
  }
  else {
    lVar8 = (long)_DAT_11277ac8c;
    lVar2 = *(long *)(param_2 + lVar8);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) goto LAB_108ce6368;
    lVar2 = *(long *)(param_2 + lVar8);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bf680;
    _objc_alloc(PTR_PTR_1126bf680);
    if (lVar2 == 0) {
      _objc_retain(0);
      uVar6 = 0;
      uVar7 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar2 + 0x10);
      _objc_retain(uVar6);
      uStack_78 = *(undefined8 *)(lVar2 + 0x28);
      uStack_80 = *(undefined8 *)(lVar2 + 0x20);
      uStack_70 = *(undefined8 *)(lVar2 + 0x30);
      uVar7 = *(undefined8 *)(lVar2 + 0x18);
    }
    _objc_retain(uVar7);
    func_0x00010b744494(param_1,puVar3,uVar6,&uStack_80,uVar7);
    func_0x00010c1d0640(*(undefined8 *)(param_2 + lVar8));
    _objc_release(puVar3);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar2);
  }
  uVar4 = *(ulong *)(param_2 + _DAT_11277aca0);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d4d68;
  _objc_opt_class(PTR_PTR_1126d4d68);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar1 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c28c300(param_1,uVar1);
  _objc_release(uVar1);
  func_0x00010c289c60(*(undefined8 *)(param_2 + _DAT_11277ac9c));
  _objc_release(uVar4);
LAB_108ce6368:
  _objc_release(param_4);
  return;
}



/* Entry: 108ce63ac; end: 108ce6503; -[SCImageProcessBatchCapturePlaybackSession setAudioOverrideAsset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce63ac(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xe8) != param_3) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xe8);
    *(long *)(param_1 + 0xe8) = param_3;
    _objc_release(uVar2);
    uVar3 = *(ulong *)(param_1 + _DAT_11277aca0);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d4d68;
    _objc_retain();
    _objc_opt_class(puVar4);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    uVar5 = uVar1;
    func_0x00010c16bf60();
    func_0x00010c289c60(*(undefined8 *)(param_1 + _DAT_11277ac9c));
    if ((int)uVar5 != 0) {
      _objc_initWeak(auStack_48,param_1);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_108ce6504;
      puStack_58 = &UNK_1108434b0;
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x000107c312d0("APPSTORE",&puStack_70);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(uVar1);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108ce6504; end: 108ce652f;  */

void FUN_108ce6504(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c138740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ce6530; end: 108ce658b; -[SCImageProcessBatchCapturePlaybackSession setContinuousAudioPlay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce6530(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fe430;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setContinuousAudioPlay__11263e838);
  func_0x00010c16c320(*(undefined8 *)(param_1 + _DAT_11277ac9c));
  return;
}



/* Entry: 108ce658c; end: 108ce6593; -[SCImageProcessBatchCapturePlaybackSession resetCurrentPlayingSource] */

void FUN_108ce658c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c138770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_resetCurrentPlayingSourceWithDel_11262bbf8,0x7fffffffffffffff);
  return;
}



/* Entry: 108ce6594; end: 108ce66fb; -[SCImageProcessBatchCapturePlaybackSession resetCurrentPlayingSourceWithDeletingSnapAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce6594(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  func_0x00010c0f6000(param_1,param_2,1);
  lVar7 = (long)_DAT_11277aca4;
  lVar2 = *(long *)(param_1 + _DAT_11277aca0);
  func_0x00010bfecde0();
  puVar3 = PTR_PTR_1126d4d68;
  lVar8 = (long)_DAT_11277aca8;
  uVar9 = *(ulong *)(param_1 + lVar8);
  uVar6 = *(ulong *)(param_1 + lVar7);
  _objc_retain(uVar6);
  _objc_opt_class(puVar3);
  uVar4 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar3);
  uVar1 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  uVar4 = uVar1;
  func_0x00010c0d2640();
  _objc_release(uVar1);
  uVar1 = 0x7fffffffffffffff;
  if (uVar9 < uVar4 && uVar9 != param_3) {
    uVar1 = uVar9;
  }
  func_0x00010bf2eca0(*(undefined8 *)(param_1 + lVar7));
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = 0;
  _objc_release(uVar5);
  func_0x00010c130d80(*(undefined8 *)(param_1 + _DAT_11277ac9c));
  *(undefined8 *)(param_1 + lVar8) = 0;
  lVar7 = (long)_DAT_11277ac80;
  func_0x00010c137fe0(*(undefined8 *)(param_1 + lVar7));
  if (lVar2 == 0x7fffffffffffffff || uVar1 == 0x7fffffffffffffff) {
    func_0x00010c1b1dc0(param_1);
  }
  if (*(char *)(param_1 + _DAT_11277acac) == '\x01') {
    func_0x00010c1b1dc0(*(undefined8 *)(param_1 + lVar7));
    func_0x00010c157220(param_1);
  }
  else {
    func_0x00010bec1640(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c29abd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_videoPlaybackSessionDidStartRunn_112684518,
             param_1);
  return;
}


