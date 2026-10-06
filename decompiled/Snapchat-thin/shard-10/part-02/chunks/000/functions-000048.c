/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107a8bc44; end: 107a8bc87;  */

void FUN_107a8bc44(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x94) = *(undefined4 *)(param_1 + 0x28);
    if (*(long *)(lVar1 + 0x38) != 0) {
      func_0x00010c2241a0();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a8bc88; end: 107a8bd37; -[SCMusicAudioPlayer volume] */

undefined4 FUN_107a8bc88(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107a8bd38;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_80);
  uVar1 = *(undefined4 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 107a8bd38; end: 107a8bd4b;  */

void FUN_107a8bd38(long param_1)

{
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x94);
  return;
}



/* Entry: 107a8bd4c; end: 107a8bf6b; -[SCMusicAudioPlayer _initializePlayerIfNeeded] */

void FUN_107a8bd4c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x38) == 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    (**(code **)(lVar1 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = lVar1;
    _objc_release(uVar4);
    if (*(long *)(param_1 + 0x40) != 0) {
      puVar2 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
      func_0x00010c100be0(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16c4c0();
      puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa240();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126c9e68;
      _objc_alloc();
      func_0x00010c037060();
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      *(undefined **)(param_1 + 0x38) = puVar3;
      _objc_release(uVar4);
      func_0x00010c2241a0(*(undefined4 *)(param_1 + 0x94),*(undefined8 *)(param_1 + 0x38));
      func_0x00010c16d460(*(undefined8 *)(param_1 + 0x38));
      puVar3 = PTR_PTR_1126d6280;
      _objc_alloc(PTR_PTR_1126d6280);
      func_0x00010c037020();
      func_0x00010c1ddbc0(*(undefined8 *)(param_1 + 0x38));
      _objc_release(puVar3);
      func_0x00010c1dda40(*(undefined8 *)(param_1 + 0x28));
      _objc_initWeak(auStack_48,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010c0e0780(uVar4);
      _objc_release(puVar3);
      func_0x00010c130d60(*(undefined8 *)(param_1 + 0x38));
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      _objc_release(puVar2);
    }
  }
  return;
}



/* Entry: 107a8bf6c; end: 107a8bffb;  */

void FUN_107a8bf6c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___AVPlayer_1126bf5e8;
  _objc_opt_class(PTR__OBJC_CLASS___AVPlayer_1126bf5e8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c252d60(param_3);
    func_0x00010be74fc0(param_1);
    _objc_release(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a8bffc; end: 107a8c05b; -[SCMusicAudioPlayer _playerDidChangeStatus:] */

void FUN_107a8bffc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (param_3 == 1) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_107a8c05c;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  }
  return;
}



/* Entry: 107a8c05c; end: 107a8c097;  */

void FUN_107a8c05c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar1 + 100) == '\x01') {
    *(undefined1 *)(lVar1 + 100) = 0;
    func_0x00010c108f40(*(undefined8 *)(param_1 + 0x20));
    lVar1 = *(long *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bedd390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s__updatePlaybackIfNeeded_112594e88);
  return;
}



/* Entry: 107a8c098; end: 107a8c0ef; -[SCMusicAudioPlayer _playerDidCompleteSeek] */

void FUN_107a8c098(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107a8c0f0;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 107a8c0f0; end: 107a8c107;  */

void FUN_107a8c0f0(long param_1)

{
  *(long *)(*(long *)(param_1 + 0x20) + 0x68) = *(long *)(*(long *)(param_1 + 0x20) + 0x68) + -1;
                    /* WARNING: Could not recover jumptable at 0x00010bedd390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updatePlaybackIfNeeded_112594e88);
  return;
}



/* Entry: 107a8c108; end: 107a8c1bf; -[SCMusicAudioPlayer _teardownPlayer] */

void FUN_107a8c108(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf5f0a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0(puVar1);
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c130d60(*(undefined8 *)(param_1 + 0x38));
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 100) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c1dda50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setPlayer__1126550b8,0);
  return;
}



/* Entry: 107a8c1c0; end: 107a8c2db; -[SCMusicAudioPlayer _updatePlaybackIfNeeded] */

/* WARNING: Possible PIC construction at 0x000107a8c2bc: Changing call to branch */

void FUN_107a8c1c0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (((((*(byte *)(param_1 + 0x61) & 1) == 0) && ((*(byte *)(param_1 + 0x60) & 1) == 0)) &&
      ((*(byte *)(param_1 + 0x62) & 1) == 0)) &&
     (*(char *)(param_1 + 99) == '\x01' && *(long *)(param_1 + 0x68) < 1)) {
    func_0x00010be3b8c0(param_1);
    lVar2 = *(long *)(param_1 + 0x38);
    if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
      func_0x00010c252d60();
      if (lVar2 == 1) {
        uVar5 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
        uVar4 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
        uVar1 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
        func_0x00010c1e7680((float)*(double *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x38));
        if (0.0 < *(double *)(param_1 + 0x70)) {
          uVar1 = *(undefined8 *)(param_1 + 0x30);
          ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb308;
          goto code_r0x00010c0d9840;
        }
        *(undefined8 *)(param_1 + 0x50) = uVar5;
        *(undefined8 *)(param_1 + 0x48) = uVar4;
        *(undefined8 *)(param_1 + 0x58) = uVar1;
      }
      return;
    }
    func_0x00010c0fe6a0((float)*(double *)(param_1 + 0x70));
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb308;
  }
  else {
    func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x38));
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb2f0;
  }
code_r0x00010c0d9840:
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_next__112614028,ppuVar3);
  return;
}



/* Entry: 107a8c2dc; end: 107a8c333; -[SCMusicAudioPlayer audioSessionDidBeginInterruption:] */

void FUN_107a8c2dc(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107a8c334;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 107a8c334; end: 107a8c347;  */

void FUN_107a8c334(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x61) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bedd390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updatePlaybackIfNeeded_112594e88);
  return;
}



/* Entry: 107a8c348; end: 107a8c39f; -[SCMusicAudioPlayer audioSession:didEndInterruption:] */

void FUN_107a8c348(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107a8c3a0;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 107a8c3a0; end: 107a8c3af;  */

void FUN_107a8c3a0(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x61) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bedd390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updatePlaybackIfNeeded_112594e88);
  return;
}



/* Entry: 107a8c3b0; end: 107a8c407; -[SCMusicAudioPlayer audioSessionMediaServicesWereReset:] */

void FUN_107a8c3b0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107a8c408;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 107a8c408; end: 107a8c42f;  */

void FUN_107a8c408(long param_1)

{
  func_0x00010becb040(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bedd390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updatePlaybackIfNeeded_112594e88);
  return;
}



/* Entry: 107a8c430; end: 107a8c487; -[SCMusicAudioPlayer _playerItemDidReachEnd:] */

void FUN_107a8c430(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107a8c488;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 107a8c488; end: 107a8c56f;  */

void FUN_107a8c488(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x92) == '\x01') {
    func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),param_2,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb2f0);
    _objc_initWeak(auStack_28,*(undefined8 *)(param_1 + 0x20));
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c157280(uVar1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 107a8c570; end: 107a8c5eb;  */

void FUN_107a8c570(long param_1,int param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_1);
  return;
}



/* Entry: 107a8c5ec; end: 107a8c5f3;  */

void FUN_107a8c5ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedd390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updatePlaybackIfNeeded_112594e88);
  return;
}



/* Entry: 107a8c5f4; end: 107a8c64b; -[SCMusicAudioPlayer _audioSessionWillDeactivate:] */

void FUN_107a8c5f4(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107a8c64c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 107a8c64c; end: 107a8c65f;  */

void FUN_107a8c64c(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x60) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bedd390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updatePlaybackIfNeeded_112594e88);
  return;
}



/* Entry: 107a8c660; end: 107a8c6b7; -[SCMusicAudioPlayer _audioSessionActivated:] */

void FUN_107a8c660(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107a8c6b8;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 107a8c6b8; end: 107a8c6c7;  */

void FUN_107a8c6b8(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bedd390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updatePlaybackIfNeeded_112594e88);
  return;
}



/* Entry: 107a8c6c8; end: 107a8c71f; -[SCMusicAudioPlayer _applicationDidBecomeActive:] */

void FUN_107a8c6c8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107a8c720;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 107a8c720; end: 107a8c72f;  */

void FUN_107a8c720(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x62) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bedd390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updatePlaybackIfNeeded_112594e88);
  return;
}



/* Entry: 107a8c730; end: 107a8c787; -[SCMusicAudioPlayer _applicationWillResignActive:] */

void FUN_107a8c730(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107a8c788;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 107a8c788; end: 107a8c79b;  */

void FUN_107a8c788(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x62) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bedd390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updatePlaybackIfNeeded_112594e88);
  return;
}



/* Entry: 107a8c79c; end: 107a8c88f; -[SCMusicAudioPlayer _setUpVolumeObservations] */

void FUN_107a8c79c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x80));
  lVar1 = *(long *)(param_1 + 0x88);
  if (lVar1 != 0) {
    func_0x00010c0d4100();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    lVar2 = lVar1;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    *(long *)(param_1 + 0x80) = lVar2;
    _objc_release(uVar3);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_40);
  }
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107a8c890; end: 107a8c8f7;  */

void FUN_107a8c890(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010bf1f3c0(param_2);
    func_0x00010c2241a0((float)((uint)uVar1 ^ 1),param_1);
    uVar1 = param_2;
    func_0x00010bf1f3c0();
    *(char *)(param_1 + 0x90) = (char)uVar1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107a8c8f8; end: 107a8c903; -[SCMusicAudioPlayer isPlaying] */

byte FUN_107a8c8f8(long param_1)

{
  return *(byte *)(param_1 + 0x91) & 1;
}



/* Entry: 107a8c904; end: 107a8c90b; -[SCMusicAudioPlayer shouldLoop] */

undefined1 FUN_107a8c904(long param_1)

{
  return *(undefined1 *)(param_1 + 0x92);
}



/* Entry: 107a8c90c; end: 107a8c913; -[SCMusicAudioPlayer setShouldLoop:] */

void FUN_107a8c90c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x92) = param_3;
  return;
}



/* Entry: 107a8c914; end: 107a8c91b; -[SCMusicAudioPlayer playerEventObservable] */

undefined8 FUN_107a8c914(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107a8c91c; end: 107a8c933; -[SCMusicAudioPlayer suspendDelegate] */

void FUN_107a8c91c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a8c934; end: 107a8c93f; -[SCMusicAudioPlayer setSuspendDelegate:] */

void FUN_107a8c934(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x98,param_3);
  return;
}



/* Entry: 107a8c940; end: 107a8c9e3; -[SCMusicAudioPlayer .cxx_destruct] */

void FUN_107a8c940(long param_1)

{
  _objc_destroyWeak(param_1 + 0x98);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
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



/* Entry: 107a8c9e4; end: 107a8ca4f; -[SCMusicAudioPlayerSuspendHandler initWithPlayer:] */

undefined1 * FUN_107a8c9e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f99a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a8ca50; end: 107a8caf3; -[SCMusicAudioPlayerSuspendHandler suspend] */

undefined8 FUN_107a8ca50(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c264120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c07a400();
  _objc_release(lVar1);
  if ((int)lVar3 == 0) {
    uVar4 = 2;
  }
  else {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0f5b20();
    _objc_release(param_1);
    uVar4 = 1;
  }
  func_0x00010c0d29e0(lVar2,param_2,lVar3);
  _objc_release(lVar2);
  return uVar4;
}



/* Entry: 107a8caf4; end: 107a8cafb; -[SCMusicAudioPlayerSuspendHandler .cxx_destruct] */

void FUN_107a8caf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107a8cafc; end: 107a8cb5b; +[SCLensExplorerARBarMiniCameraModeMapping miniCameraModeWithCircumstanceEngine:] */

undefined * FUN_107a8cafc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c25d780(param_3,param_2,&PTR____CFConstantStringClassReference_110eab6f8,
                      &PTR____CFConstantStringClassReference_110daafd8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d6288;
  func_0x00010c0ce000(PTR_PTR_1126d6288,param_2,param_3);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107a8cb5c; end: 107a8cbdf; +[SCLensExplorerARBarMiniCameraModeMapping miniCameraModeFromString:] */

undefined8 FUN_107a8cb5c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eab718);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eab738);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eab758);
      uVar2 = 2;
      if ((int)uVar1 == 0) {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 107a8cbe0; end: 107a8cd07; +[SCLensExplorerPrefetchConfig configFromProto:] */

void FUN_107a8cbe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126d6290;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c107320(param_3);
  uVar3 = param_3;
  func_0x00010c107ac0(param_3);
  func_0x00010be774a0(param_1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010c098460(param_3);
  uVar4 = param_3;
  func_0x00010c08a9a0(param_3);
  uVar5 = param_3;
  func_0x00010bf142e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bfa3e00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c107920();
  uVar8 = param_3;
  func_0x00010bf4afa0();
  _objc_release(param_3);
  func_0x00010c038440(puVar1,param_2,uVar2,param_1,(long)(int)uVar3,uVar4,uVar5,uVar6,
                      (long)(int)uVar7,(long)(int)uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a8cd08; end: 107a8cd7f; +[SCLensExplorerPrefetchConfig defaultConfig] */

void FUN_107a8cd08(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bc058;
  _objc_opt_new(PTR_PTR_1126bc058);
  func_0x00010c195460();
  puVar2 = PTR_PTR_1126d6290;
  _objc_alloc(PTR_PTR_1126d6290);
  func_0x00010c038440();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a8cd80; end: 107a8ce43; +[SCLensExplorerPrefetchConfig tweaksConfig] */

void FUN_107a8cd80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bc058;
  _objc_opt_new(PTR_PTR_1126bc058);
  func_0x00010c195460();
  func_0x00010c1e0560(puVar1,param_2,0x5a0);
  func_0x00010c198140(puVar1,param_2,1);
  func_0x00010c1afea0(puVar1,param_2,0);
  func_0x00010c1b5ba0(puVar1,param_2,0);
  puVar2 = PTR_PTR_1126d6290;
  _objc_alloc(PTR_PTR_1126d6290);
  func_0x00010be774c0(param_1);
  func_0x00010c038440(puVar2,param_2,0,param_1,0x19,0x2760,puVar1,PTR____NSArray0__struct_11034ab48,
                      0,0);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a8ce44; end: 107a8ce53; +[SCLensExplorerPrefetchConfig _prefetchModeFromProto:] */

long FUN_107a8ce44(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_3 - 1U < 3) {
    lVar1 = (ulong)(param_3 - 1U) + 1;
  }
  return lVar1;
}



/* Entry: 107a8ce54; end: 107a8ce5b; +[SCLensExplorerPrefetchConfig _prefetchModeFromTweaks] */

undefined8 FUN_107a8ce54(void)

{
  return 0;
}



/* Entry: 107a8ce5c; end: 107a8ce63; -[SCLensExplorerExperiments forceLegacyOrthogonalLayout] */

undefined8 FUN_107a8ce5c(void)

{
  return 0;
}



/* Entry: 107a8ce64; end: 107a8ce6b; -[SCLensExplorerExperiments lensExplorerCarouselButtonEnabled] */

undefined8 FUN_107a8ce64(void)

{
  return 1;
}



/* Entry: 107a8ce6c; end: 107a8ce77; -[SCLensExplorerExperiments lensCollectionsBaseUrl] */

void FUN_107a8ce6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 107a8ce78; end: 107a8cec7; -[SCLensExplorerExperiments lensExplorerGRPCNetworkingEnabled] */

undefined8 FUN_107a8ce78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f440();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107a8cec8; end: 107a8cf0b; -[SCLensExplorerExperiments similarLensServerApiRouteTag] */

void FUN_107a8cec8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107a8d2d8();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25d0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a8cf0c; end: 107a8cfeb; -[SCLensExplorerExperiments lensExplorerPrefetchConfig] */

void FUN_107a8cf0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1195e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126d6298;
  _objc_alloc();
  uVar1 = uVar2;
  func_0x00010c296d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008360(puVar3,param_2,uVar1,0);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126d6290;
  if (puVar3 == (undefined *)0x0) {
    func_0x00010bf690a0(PTR_PTR_1126d6290);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf45ec0(PTR_PTR_1126d6290,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107a8cfec; end: 107a8d047; -[SCLensExplorerExperiments liveLensesInModularCameraAllowedSources] */

void FUN_107a8cfec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25cd80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107a8d048; end: 107a8d04f; -[SCLensExplorerExperiments minicameraTrayHeightPercentage] */

undefined8 FUN_107a8d048(void)

{
  return 0x3fe0000000000000;
}



/* Entry: 107a8d050; end: 107a8d0cf; -[SCLensExplorerExperiments snapchatPlusCategories] */

void FUN_107a8d050(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25d780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf44740(uVar2,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a8d0d0; end: 107a8d11f; -[SCLensExplorerExperiments lensExplorerMemoriesTemplateMaxSnapsCount] */

long FUN_107a8d0d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067f00();
  _objc_release(uVar1);
  return (long)(int)uVar2;
}



/* Entry: 107a8d120; end: 107a8d127; -[SCLensExplorerExperiments lensExplorerSwiftUIEnabled] */

undefined8 FUN_107a8d120(void)

{
  return 0;
}



/* Entry: 107a8d128; end: 107a8d17f; -[SCLensExplorerExperiments offlineTabPositionStrategyType] */

long FUN_107a8d128(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067f00();
  _objc_release(uVar1);
  uVar3 = (uint)uVar2;
  if (2 < uVar3) {
    uVar3 = 0;
  }
  return (long)(int)uVar3;
}



/* Entry: 107a8d180; end: 107a8d1cf; -[SCLensExplorerExperiments offlineLensesFilterUnfetchedEnabled] */

undefined8 FUN_107a8d180(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f440();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107a8d1d0; end: 107a8d21f; -[SCLensExplorerExperiments offlineLensesPrefetchIntervalMinutes] */

uint FUN_107a8d1d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067f00();
  _objc_release(uVar1);
  return (uint)uVar2 & ((int)(uint)uVar2 >> 0x1f ^ 0xffffffffU);
}



/* Entry: 107a8d220; end: 107a8d27b; -[SCLensExplorerExperiments dailyGamesAuxiliaryNamespaceId] */

void FUN_107a8d220(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25d780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107a8d27c; end: 107a8d2cb; -[SCLensExplorerExperiments preventViewModelObservableRemoval] */

undefined8 FUN_107a8d27c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f440();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107a8d2cc; end: 107a8d2eb; -[SCLensExplorerExperiments .cxx_destruct] */

void FUN_107a8d2cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a8d2ec; end: 107a8d367;  */

undefined * FUN_107a8d2ec(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727470 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110eab9d8,
                        &UNK_10dee0d68,&UNK_10dee0d90,4,FUN_107a8d368,0);
    do {
      if (puRam0000000113727470 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727470;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727470,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727470 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727470;
}



/* Entry: 107a8d368; end: 107a8d373;  */

bool FUN_107a8d368(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 107a8d374; end: 107a8d3db; +[LensExplorerPrefetchConfig descriptor] */

void FUN_107a8d374(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727478 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b6e0d0,
                        &PTR____CFConstantStringClassReference_110eab9f8,&PTR_DAT_11323ead8,
                        &PTR_DAT_11323eaf0,8,0x30,0x1c);
    puRam0000000113727478 = puVar1;
  }
  return;
}



/* Entry: 107a8d3dc; end: 107a8d443; +[SCLELensExplorerItemRenderStrategyOverride descriptor] */

void FUN_107a8d3dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727480 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b6e198,
                        &PTR____CFConstantStringClassReference_110eaba18,&PTR_DAT_11323ebf0,
                        &PTR_DAT_11323ec08,1,0x10,0x1c);
    puRam0000000113727480 = puVar1;
  }
  return;
}



/* Entry: 107a8d444; end: 107a8d4c7; +[SCLELensExplorerItemRenderStrategyOverride_Rule descriptor] */

undefined * FUN_107a8d444(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727488 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b6e1c0,
                        &PTR____CFConstantStringClassReference_110e060f8,&PTR_DAT_11323ebf0,
                        &PTR_s_context_11323ec28,4,0x18,0x1c);
    func_0x00010c228780();
    puRam0000000113727488 = puVar1;
  }
  return puRam0000000113727488;
}



/* Entry: 107a8d4c8; end: 107a8d4cf; -[SCLensFavoritesNotificationService lensFavoriteNotifications] */

undefined8 FUN_107a8d4c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107a8d4d0; end: 107a8d4db; -[SCLensFavoritesNotificationService .cxx_destruct] */

void FUN_107a8d4d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a8d4dc; end: 107a8d557; +[SCMessagingTopicsChatConfig_PlatformConfig descriptor] */

undefined * FUN_107a8d4dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727498 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b6e300,
                        &PTR____CFConstantStringClassReference_110eabad8,&PTR_DAT_11323eca8,
                        &PTR_DAT_11323eda0,0xc,4,0x1c);
    func_0x00010c228780();
    puRam0000000113727498 = puVar1;
  }
  return puRam0000000113727498;
}



/* Entry: 107a8d558; end: 107a8d5d3; +[SCMessagingTopicsChatConfig_NativeConfig descriptor] */

undefined * FUN_107a8d558(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137274a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b6e350,
                        &PTR____CFConstantStringClassReference_110eabaf8,&PTR_DAT_11323eca8,
                        &PTR_DAT_11323ecc0,1,8,0x1c);
    func_0x00010c228780();
    puRam00000001137274a0 = puVar1;
  }
  return puRam00000001137274a0;
}



/* Entry: 107a8d5d4; end: 107a8d64f; +[SCMessagingTopicsChatConfig_ServerConfig descriptor] */

undefined * FUN_107a8d5d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137274a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b6e3a0,
                        &PTR____CFConstantStringClassReference_110eabb18,&PTR_DAT_11323eca8,
                        &PTR_DAT_11323ece0,2,4,0x1c);
    func_0x00010c228780();
    puRam00000001137274a8 = puVar1;
  }
  return puRam00000001137274a8;
}



/* Entry: 107a8d650; end: 107a8d79b; -[SCTrayHostViewController initWithDelegate:trayVC:allowedPositions:pullBarType:defaultTrayHeightPercentage:useSpringAnimation:transparentBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107a8d650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = PTR_PTR_1126f99b8;
  uStack_80 = param_2;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127692b0),param_4);
    lVar4 = (long)_DAT_1127692b4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0a08;
    _objc_alloc();
    func_0x00010c055640();
    lVar4 = (long)_DAT_1127692b8;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar3;
    _objc_release(uVar2);
    func_0x00010c167420(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c219e20(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c219c20(*(undefined8 *)((long)puVar1 + lVar4));
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127692bc) = param_7;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127692c0) = param_1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107a8d79c; end: 107a8d7a3; -[SCTrayHostViewController modalPresentationStyle] */

undefined8 FUN_107a8d79c(void)

{
  return 5;
}



/* Entry: 107a8d7a4; end: 107a8d7d3; -[SCTrayHostViewController childViewControllerForStatusBarStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a8d7a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127692b4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a8d7d4; end: 107a8d803; -[SCTrayHostViewController childViewControllerForStatusBarHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a8d7d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127692b4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a8d804; end: 107a8d827; -[SCTrayHostViewController presentTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a8d804(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10c5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127692c0),*(undefined8 *)(param_1 + _DAT_1127692b8),
             PTR_s_presentIn_withPullBar_withDefaul_112620b88,param_1,
             *(undefined8 *)(param_1 + _DAT_1127692bc));
  return;
}



/* Entry: 107a8d828; end: 107a8d83b; -[SCTrayHostViewController dismissTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a8d828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127692b8),PTR_s_dismissAnimated__1125be608,1);
  return;
}



/* Entry: 107a8d83c; end: 107a8d883; -[SCTrayHostViewController tray:positionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a8d83c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 2) {
    param_1 = param_1 + _DAT_1127692b0;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf75300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107a8d884; end: 107a8d8cf; -[SCTrayHostViewController tray:heightDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a8d884(undefined8 param_1,long param_2)

{
  param_2 = param_2 + _DAT_1127692b0;
  _objc_loadWeakRetained(param_2);
  func_0x00010c27b420(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107a8d8d0; end: 107a8d91b; -[SCTrayHostViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a8d8d0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127692b4,0);
  _objc_storeStrong(param_1 + _DAT_1127692b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127692b0);
  return;
}



/* Entry: 107a8d91c; end: 107a8d927; -[SCTrayUIContainer initWithPresentingViewController:allowedPositions:pullBarType:defaultTrayHeightPercentage:useSpringAnimation:dismissalHandler:] */

void FUN_107a8d91c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c038f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithPresentingViewController_1125ebdc0);
  return;
}



/* Entry: 107a8d928; end: 107a8da03; -[SCTrayUIContainer initWithPresentingViewController:allowedPositions:pullBarType:defaultTrayHeightPercentage:useSpringAnimation:transparentBackground:dismissalHandler:] */

undefined1 *
FUN_107a8d928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f99c0;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_4);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined1 *)((long)puVar1 + 0x38) = param_7;
    uVar2 = param_9;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x39) = param_8;
  }
  _objc_release(param_9);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107a8da04; end: 107a8dad3; -[SCTrayUIContainer attachUI:] */

void FUN_107a8da04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cafb0;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c00af80(*(undefined8 *)(param_1 + 0x18));
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
  _objc_release(uVar2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10eda0();
  _objc_release(param_1);
  return;
}



/* Entry: 107a8dad4; end: 107a8dadf;  */

void FUN_107a8dad4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10ea50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),PTR_s_presentTray_1126214b0);
  return;
}



/* Entry: 107a8dae0; end: 107a8db3b; -[SCTrayUIContainer _handleDismissalAndCompletion] */

void FUN_107a8dae0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar1);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107a8db3c; end: 107a8dbef; -[SCTrayUIContainer detachUI:] */

void FUN_107a8db3c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar3);
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      uVar1 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27b620(0);
      _objc_release(uVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bf84910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_dismissTray_1125bebe8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be28930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleDismissalAndCompletion_112567be8);
  return;
}



/* Entry: 107a8dbf0; end: 107a8dc5f; -[SCTrayUIContainer didDismissTrayHostViewController:] */

void FUN_107a8dbf0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107a8dc60;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010bf84b00(*(undefined8 *)(param_1 + 0x30),param_2,0,&puStack_48);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  return;
}



/* Entry: 107a8dc60; end: 107a8dc67;  */

void FUN_107a8dc60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be28930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleDismissalAndCompletion_112567be8);
  return;
}



/* Entry: 107a8dc68; end: 107a8dcfb; -[SCTrayUIContainer trayHostViewController:heightDidChange:] */

void FUN_107a8dc68(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27b620(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 107a8dcfc; end: 107a8dd13; -[SCTrayUIContainer delegate] */

void FUN_107a8dcfc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a8dd14; end: 107a8dd1f; -[SCTrayUIContainer setDelegate:] */

void FUN_107a8dd14(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 107a8dd20; end: 107a8dd6b; -[SCTrayUIContainer .cxx_destruct] */

void FUN_107a8dd20(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x20);
  return;
}



/* Entry: 107a8dd6c; end: 107a8e09b; -[SCStoriesOperaMediaManager initWithUserSession:storiesMediaCoordinator:playbackAssetRepository:shakePromptHelper:circumstanceEngine:viewLocation:grapheneRegistry:imageDownloader:] */

undefined1 *
FUN_107a8dd6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f99c8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined **)((long)puVar1 + 0x98) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined **)((long)puVar1 + 0xa0) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d62a0;
    _objc_alloc();
    func_0x00010c018500();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_10;
    _objc_release();
    func_0x0001005c6500();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined **)((long)puVar1 + 0x78) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined **)((long)puVar1 + 0x80) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x88) = 0;
    *(undefined8 *)((long)puVar1 + 0x68) = param_6;
    func_0x00010befa240(*(undefined8 *)((long)puVar1 + 0x80));
    func_0x00010befa240(*(undefined8 *)((long)puVar1 + 0x80));
    uVar2 = param_7;
    func_0x00010bf1f440();
    *(char *)((long)puVar1 + 0x8a) = (char)uVar2;
    *(undefined1 *)((long)puVar1 + 0x8b) = 1;
    puVar3 = PTR_PTR_1126d62a8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined **)((long)puVar1 + 0x90) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a8e09c; end: 107a8e0a7; -[SCStoriesOperaMediaManager didReceiveMediaServicesWereLostNotification] */

void FUN_107a8e09c(long param_1)

{
  *(undefined1 *)(param_1 + 0x88) = 1;
  return;
}



/* Entry: 107a8e0a8; end: 107a8e0fb; -[SCStoriesOperaMediaManager didReceiveMediaServicesWereResetNotification] */

void FUN_107a8e0a8(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x88) == '\x01') {
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x30));
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1283e0();
    _objc_release(uVar1);
  }
  *(undefined1 *)(param_1 + 0x88) = 0;
  return;
}



/* Entry: 107a8e0fc; end: 107a8e15b; -[SCStoriesOperaMediaManager dealloc] */

void FUN_107a8e0fc(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1283e0();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f99c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}


