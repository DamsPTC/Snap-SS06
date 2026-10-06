/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107044a1c; end: 107044a23; -[SCChatAudioNotePlayer reset] */

void FUN_107044a1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c139e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetWithCompletion__11262c1b0,0);
  return;
}



/* Entry: 107044a24; end: 107044a27; -[SCChatAudioNotePlayer resetWithCompletion:] */

void FUN_107044a24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopWithCompletion__1126735f0);
  return;
}



/* Entry: 107044a28; end: 107044ac7; -[SCChatAudioNotePlayer togglePlayPause:] */

void FUN_107044a28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107044ac8;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_60);
  func_0x00010be713a0(param_1,param_2,ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107044ac8; end: 107044ad3;  */

void FUN_107044ac8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becce70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__togglePlayPauseHelper__112590d40,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107044ad4; end: 107044b3b; -[SCChatAudioNotePlayer _togglePlayPauseHelper:] */

void FUN_107044ad4(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) - 1U < 2) {
    if (param_3 != 0) {
      func_0x00010bf885a0(param_3);
      func_0x00010c187d00(*(undefined8 *)(param_1 + 8));
    }
    func_0x00010c0fe360(param_1);
  }
  else if (*(long *)(param_1 + 0x28) == 0) {
    func_0x00010c0f5b20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107044b3c; end: 107044b4b; -[SCChatAudioNotePlayer isPlaying] */

bool FUN_107044b3c(long param_1)

{
  return *(long *)(param_1 + 0x28) == 0;
}



/* Entry: 107044b4c; end: 107044b5b; -[SCChatAudioNotePlayer isPaused] */

bool FUN_107044b4c(long param_1)

{
  return *(long *)(param_1 + 0x28) == 1;
}



/* Entry: 107044b5c; end: 107044b6b; -[SCChatAudioNotePlayer isStopped] */

bool FUN_107044b5c(long param_1)

{
  return *(long *)(param_1 + 0x28) == 2;
}



/* Entry: 107044b6c; end: 107044ba3; -[SCChatAudioNotePlayer currentPlaybackTime] */

undefined8 FUN_107044b6c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x00010c07a400();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf60490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_2 + 8),PTR_s_currentTime_1125b5ac8)
    ;
    return param_1;
  }
  return *(undefined8 *)(param_2 + 0x38);
}



/* Entry: 107044ba4; end: 107044be3; -[SCChatAudioNotePlayer _getPerformer] */

void FUN_107044ba4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  if (lVar1 == 0) {
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107044be4; end: 107044c3b; -[SCChatAudioNotePlayer _perform:] */

void FUN_107044be4(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x60);
  if ((uVar1 == 0) || (func_0x00010c06fc80(), (uVar1 & 1) != 0)) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x60),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107044c3c; end: 107044ceb; -[SCChatAudioNotePlayer audioPlayerDidFinishPlaying:successfully:] */

void FUN_107044c3c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    func_0x00010c137fe0(param_1);
  }
  else {
    *(undefined8 *)(param_1 + 0x28) = 2;
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf0f4a0();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
    _objc_release(uVar2);
    func_0x00010c1a9bc0(*(undefined8 *)(param_1 + 0x40),param_2,0);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010bf8b160(param_3);
    func_0x00010bf953e0(uVar2);
    func_0x00010be8b700(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107044cec; end: 107044cef; -[SCChatAudioNotePlayer audioPlayerDecodeErrorDidOccur:error:] */

void FUN_107044cec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reset_11262ba18);
  return;
}



/* Entry: 107044cf0; end: 107044e67; -[SCChatAudioNotePlayer _createAudioConfigurationWithCallback:] */

void FUN_107044cf0(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x68);
  if (*(long *)(param_1 + 0x30) == 0) {
    puVar1 = PTR_PTR_1126aed60;
    func_0x00010bf46680(PTR_PTR_1126aed60);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf55480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126aed60;
    func_0x00010c0d3da0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010be21740(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107044e68;
    puStack_50 = &UNK_110859a38;
    _objc_retain(param_3);
    puVar4 = puVar1;
    uStack_48 = param_3;
    func_0x00010bf47660(puVar1,param_2,puVar2,puVar3,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(uStack_48);
  }
  else {
    puVar2 = param_1;
    func_0x00010be21740(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
  }
  _objc_release(puVar2);
  _os_unfair_lock_unlock(param_1 + 0x68);
  _objc_release(param_3);
  return;
}



/* Entry: 107044e68; end: 107044e73;  */

void FUN_107044e68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107044e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107044e74; end: 10704501f; -[SCChatAudioNotePlayer _removeAudioConfigurationWithCompletion:] */

void FUN_107044e74(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x68);
  if (*(long *)(param_1 + 0x30) == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
  }
  else if (param_3 == 0) {
    puVar2 = PTR_PTR_1126aed60;
    func_0x00010c0d3da0(PTR_PTR_1126aed60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1288c0();
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release(uVar3);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    puVar2 = PTR_PTR_1126aed60;
    func_0x00010c0d3da0(PTR_PTR_1126aed60);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010be21740(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010c1288c0(puVar2);
    _objc_release(lVar1);
    _objc_release(puVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _os_unfair_lock_unlock(param_1 + 0x68);
  _objc_release(param_3);
  return;
}



/* Entry: 107045020; end: 107045073;  */

void FUN_107045020(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b0e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107045074; end: 1070450f7; -[SCChatAudioNotePlayer _onRelinquishConfigurationWithCompletion:error:] */

void FUN_107045074(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x68);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  (**(code **)(param_3 + 0x10))(param_3);
  _os_unfair_lock_unlock(param_1 + 0x68);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070450f8; end: 107045103; -[SCChatAudioNotePlayer updateDelegate:] */

void FUN_1070450f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 107045104; end: 107045137; -[SCChatAudioNotePlayer audioSessionDidBeginInterruption:] */

void FUN_107045104(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c07a400();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0f5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_pause_11261b0e8);
    return;
  }
  return;
}



/* Entry: 107045138; end: 10704513b; -[SCChatAudioNotePlayer audioSession:didEndInterruption:] */

void FUN_107045138(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07a410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isPlaying_1125fc310);
  return;
}



/* Entry: 10704513c; end: 10704513f; -[SCChatAudioNotePlayer audioSessionRouteDidChangeReasonNewDeviceAvailable:] */

void FUN_10704513c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07a410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isPlaying_1125fc310);
  return;
}



/* Entry: 107045140; end: 107045173; -[SCChatAudioNotePlayer audioSessionRouteDidChangeReasonOldDeviceUnavailable:] */

void FUN_107045140(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c07a400();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0f5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_pause_11261b0e8);
    return;
  }
  return;
}



/* Entry: 107045174; end: 1070451ff; -[SCChatAudioNotePlayer .cxx_destruct] */

void FUN_107045174(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107045200; end: 1070453fb;  */

void FUN_107045200(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___AVAsset_1126aff38;
    func_0x00010bf0b9e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar1);
      _objc_retain(param_4);
      _objc_retain(puVar4);
      _objc_retain(puVar3);
      _objc_retain(puVar2);
      func_0x00010c09c640(puVar1);
      _objc_release(puVar5);
      _objc_release(param_4);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_107045558;
  puStack_138 = &UNK_1108b6770;
  uStack_108 = *(undefined8 *)(param_4 + 0x48);
  uVar8 = *(undefined8 *)(param_4 + 0x20);
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_4 + 0x28);
  uStack_130 = uVar8;
  _objc_retain(uVar9);
  uVar8 = *(undefined8 *)(param_4 + 0x30);
  uStack_128 = uVar9;
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_4 + 0x38);
  uStack_120 = uVar8;
  _objc_retain(uVar9);
  uVar8 = *(undefined8 *)(param_4 + 0x40);
  uStack_118 = uVar9;
  _objc_retain(uVar8);
  ppuVar6 = &puStack_150;
  uStack_110 = uVar8;
  _objc_retainBlock();
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if ((int)puVar1 == 0) {
    (*(code *)ppuVar6[2])(ppuVar6);
  }
  else {
    uVar8 = 0x19;
    func_0x0001000819a8(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010007380c();
    _objc_release(uVar8);
  }
  _objc_release(ppuVar6);
  _objc_release(uStack_110);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  _objc_release(uStack_128);
  _objc_release(uStack_130);
  return;
}



/* Entry: 1070453fc; end: 107045557;  */

void FUN_1070453fc(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107045558;
  puStack_78 = &UNK_1108b6770;
  uStack_48 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = uVar3;
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar4;
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar3;
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = uVar4;
  _objc_retain(uVar3);
  ppuVar1 = &puStack_90;
  uStack_50 = uVar3;
  _objc_retainBlock();
  puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if ((int)puVar2 == 0) {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  else {
    uVar3 = 0x19;
    func_0x0001000819a8(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010007380c();
    _objc_release(uVar3);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  return;
}



/* Entry: 107045558; end: 107045577;  */

void FUN_107045558(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be32f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s__handleValuesLoadedForAsset_trac_11256a560,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 107045578; end: 1070457af;  */

void FUN_107045578(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [48];
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_1;
  _objc_opt_class();
  func_0x00010bec2880();
  _objc_release(param_4);
  lVar2 = param_1;
  _objc_opt_class();
  func_0x00010bec2880();
  _objc_release(param_5);
  _objc_opt_class();
  func_0x00010bec2880();
  _objc_release(param_6);
  if ((((lVar1 == 2) && (lVar2 == 2)) && (param_1 == 2)) &&
     (lVar1 = param_3, func_0x00010c07a2c0(), (int)lVar1 != 0)) {
    lVar1 = param_3;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
      func_0x00010bf45600(PTR__OBJC_CLASS___AVMutableComposition_1126beaa8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bef9f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c106f40(auStack_80,lVar2);
      func_0x00010c1e0300(puVar4);
      if (param_3 == 0) {
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
      }
      else {
        func_0x00010bf8b160(&uStack_a0,param_3);
      }
      uVar7 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uVar6 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uVar5 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      uStack_c0 = uVar6;
      uStack_b8 = uVar7;
      uStack_b0 = uVar5;
      _CMTimeRangeMake(auStack_80,&uStack_c0,&uStack_a0);
      uStack_a0 = uVar6;
      uStack_98 = uVar7;
      uStack_90 = uVar5;
      func_0x00010c067160(puVar4);
      if (param_7 != 0) {
        (**(code **)(param_7 + 0x10))(param_7,puVar3);
      }
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(lVar2);
    }
  }
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 1070457b0; end: 1070457d7;  */

void FUN_1070457b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  func_0x00010c2533c0(param_4,param_2,param_3,&uStack_18);
  return;
}



/* Entry: 1070457d8; end: 1070461c7; +[SCBaseMediaMessageOperaParser pagesForChatMediaContent:message:isGroupConversation:recipientUserId:userSession:viewLocation:messageProperties:circumstanceEngine:contentDelivery:chatMediaFetcher:musicContentRestrictionServices:featureSettingsService:] */

void FUN_1070457d8(float param_1,long param_2,undefined8 param_3,undefined **param_4,
                  undefined *param_5,uint param_6,undefined *param_7,undefined *param_8,
                  undefined *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  ulong param_13,undefined8 param_14,undefined8 param_15)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined **ppuVar23;
  undefined *puVar24;
  float fVar25;
  undefined *puStack_e0;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar23 = param_4;
  puVar24 = param_5;
  puVar14 = param_7;
  puVar22 = param_8;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  ppuVar3 = param_4;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar8 = PTR____NSArray0__struct_11034ab48;
  if (ppuVar3 == (undefined **)0x0) goto LAB_107046134;
  lVar4 = param_2;
  _objc_opt_class();
  func_0x00010beb2060();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0d3c80();
  _objc_release(lVar4);
  uVar6 = param_13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c077820();
  _objc_release(uVar6);
  if ((uVar7 & 1) == 0) {
    func_0x00010c0c56c0(param_4);
    func_0x00010be6f5a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(lVar5);
    _objc_release(param_2);
    puVar8 = PTR_PTR_1126c9e40;
    _objc_opt_new();
    puVar24 = puVar8;
    func_0x00010c2b6360();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar24;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar24);
    _objc_release(puVar8);
    ppuVar23 = &puStack_88;
    puVar24 = (undefined *)0x1;
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar9;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar4 = param_2;
    func_0x00010bdd2b20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(lVar5);
    _objc_release(lVar4);
    if (param_6 == 0) {
      uVar1 = 0;
    }
    else {
      puVar8 = param_5;
      func_0x00010c07ea80();
      uVar1 = (uint)puVar8;
    }
    puVar8 = param_5;
    func_0x00010c07d080();
    if ((int)puVar8 == 0) {
      uVar2 = 0;
    }
    else {
      puVar8 = param_5;
      func_0x00010c07ea80();
      uVar2 = (uint)puVar8;
    }
    lVar4 = lVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar4;
    func_0x00010bf1f3c0();
    if ((int)lVar10 == 0) {
LAB_107045ad4:
      _objc_release(lVar4);
LAB_107045adc:
      if (((param_6 | uVar2) & 1) == 0) {
        puVar8 = param_5;
        func_0x00010c06e580();
        uVar2 = (uint)puVar8;
        goto LAB_107045b70;
      }
LAB_107045b78:
      puVar8 = param_5;
      func_0x00010c0cb8c0(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar24 = param_5;
      func_0x00010c0cb9a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be6f020(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(lVar5);
      _objc_release(param_2);
      _objc_release(puVar24);
      _objc_release(puVar8);
    }
    else {
      lVar10 = lVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010bf1f3c0();
      if ((int)lVar11 != 0) {
        _objc_release(lVar10);
        goto LAB_107045ad4;
      }
      ppuVar3 = param_4;
      func_0x00010bf8b160(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      lVar11 = lVar5;
      fVar25 = param_1;
      func_0x00010c0e00e0(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      _objc_release(lVar11);
      _objc_release(ppuVar3);
      _objc_release(lVar10);
      _objc_release(lVar4);
      if (param_1 <= fVar25) goto LAB_107045adc;
      uVar2 = 0;
LAB_107045b70:
      if (((uVar1 | uVar2) & 1) != 0) goto LAB_107045b78;
    }
    puVar9 = PTR_PTR_1126c9e40;
    _objc_opt_new();
    lVar4 = lVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      lVar4 = lVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar4;
      func_0x00010c0b4ca0();
      _objc_release(lVar4);
      if (lVar10 != 1) {
        func_0x00010c1d0640(lVar5);
      }
    }
    lVar4 = lVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      func_0x00010c1d0640(lVar5);
    }
    param_6 = param_6 ^ 1;
    puVar8 = param_5;
    FUN_1070c0b20(param_5,param_6,param_11);
    uVar12 = param_15;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfde1a0();
    _objc_release(uVar12);
    puVar13 = PTR_PTR_1126b2390;
    puVar22 = param_7;
    func_0x00010c0f39e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107b281fc(lVar5,puVar13);
    puVar24 = puVar13;
    func_0x00010bf4e420();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126b5c10;
    _objc_opt_class(PTR_PTR_1126b5c10);
    puVar15 = puVar24;
    _objc_opt_isKindOfClass(puVar24,puVar14);
    puVar14 = puVar24;
    if (((ulong)puVar15 & 1) == 0) {
      puVar14 = (undefined *)0x0;
    }
    _objc_retain(puVar14);
    _objc_release(puVar24);
    uVar12 = param_14;
    func_0x00010bf4d340(param_14);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_4;
    func_0x00010c0c5180(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108534aa8(param_9);
    func_0x00010c2884e0(uVar16);
    _objc_release(ppuVar3);
    _objc_release(uVar16);
    _objc_release(uVar12);
    if (((param_6 & 1) == 0) && ((uint)puVar8 != 0)) {
      puVar24 = PTR_PTR_1126b23b0;
      _objc_alloc(PTR_PTR_1126b23b0);
      puVar8 = PTR_PTR_1126b23b8;
      puStack_e0 = param_5;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfcf600(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = param_5;
      func_0x00010c0cb8c0(param_5);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = param_4;
      func_0x00010c0c5180(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar14;
      func_0x0001090196c0();
      _objc_retainAutoreleasedReturnValue();
      param_9 = (undefined *)0x1;
      puVar22 = puVar17;
      func_0x00010c03e660(puVar24);
      func_0x00010c1d0640(lVar5);
      _objc_release(puVar24);
      _objc_release(puVar17);
      _objc_release(ppuVar3);
      _objc_release(puVar15);
      _objc_release(puVar8);
LAB_107045f0c:
      _objc_release(puStack_e0);
    }
    else if ((param_6 & (uint)puVar8) == 1) {
      puVar24 = PTR_PTR_1126b23b0;
      _objc_alloc(PTR_PTR_1126b23b0);
      puVar8 = PTR_PTR_1126b23b8;
      puStack_e0 = param_7;
      if (param_7 == (undefined *)0x0) {
        puStack_e0 = param_5;
        func_0x00010c0cb8c0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar15 = puVar13;
      func_0x00010c290fa0();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar15;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar13;
      func_0x00010c290fa0();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar18;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2942e0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = param_5;
      func_0x00010c0cb8c0(param_5);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = param_4;
      func_0x00010c0c5180(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar14;
      func_0x0001090196c0();
      _objc_retainAutoreleasedReturnValue();
      param_9 = (undefined *)0x1;
      puVar22 = puVar21;
      func_0x00010c03e660(puVar24);
      func_0x00010c1d0640(lVar5);
      _objc_release(puVar24);
      _objc_release(puVar21);
      _objc_release(ppuVar3);
      _objc_release(puVar20);
      _objc_release(puVar8);
      _objc_release(puVar19);
      _objc_release(puVar18);
      _objc_release(puVar17);
      _objc_release(puVar15);
      if (param_7 == (undefined *)0x0) goto LAB_107045f0c;
    }
    func_0x00010c2b6360(puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar15 = puVar9;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar23 = &puStack_90;
    puVar24 = (undefined *)0x1;
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar15;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    puVar14 = param_9;
  }
  _objc_release(puVar9);
  _objc_release(lVar5);
LAB_107046134:
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_retain(ppuVar23);
    _objc_retain(puVar24);
    _objc_retain(puVar14);
    puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_retain(puVar22);
    func_0x00010bf71e20(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0c6c20(ppuVar23);
    func_0x0001085439dc();
    func_0x00010c0df780(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar9);
    _objc_release(puVar8);
    puVar8 = puVar22;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar22);
    puVar22 = puVar8;
    func_0x00010c077820();
    _objc_release(puVar8);
    if ((int)puVar22 == 0) {
      func_0x00010c0c56c0(ppuVar23);
      func_0x00010be6f5a0(param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c1d0640(puVar9);
      ppuVar3 = param_4;
      func_0x00010be6f540(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(puVar9);
      _objc_release(ppuVar3);
      func_0x00010be6f680(param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bef7f60(puVar9);
    _objc_release(param_4);
    puVar8 = puVar9;
    func_0x00010bf51e00(puVar9);
    _objc_release(puVar9);
    _objc_release(puVar14);
    _objc_release(puVar24);
    _objc_release(ppuVar23);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1070461c8; end: 107046397; +[SCBaseMediaMessageOperaParser _basePagePropertiesForChatMediaContent:message:circumstanceEngine:contentDelivery:chatMediaFetcher:] */

void FUN_1070461c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_7);
  func_0x00010bf71e20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010c0c6c20(param_3);
  func_0x0001085439dc();
  func_0x00010c0df780(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110db9478);
  _objc_release(puVar3);
  uVar2 = param_7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  uVar4 = uVar2;
  func_0x00010c077820(uVar2,param_2,param_3,0);
  _objc_release(uVar2);
  if ((int)uVar4 == 0) {
    uVar2 = param_3;
    func_0x00010c0c56c0(param_3);
    func_0x00010be6f5a0(param_1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c1d0640(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9d90,
                        &PTR____CFConstantStringClassReference_110f0bc38);
    uVar2 = param_1;
    func_0x00010be6f540(param_1,param_2,param_3,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar1,param_2,uVar2);
    _objc_release(uVar2);
    func_0x00010be6f680(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bef7f60(puVar1,param_2,param_1);
  _objc_release(param_1);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107046398; end: 107046457; +[SCBaseMediaMessageOperaParser _pagePropertiesForSpectaclesChatMediaContentIfNeeded:] */

void FUN_107046398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0c6c20(param_4);
  uVar2 = param_4;
  func_0x00010c2a5040(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar3 = param_4;
  uVar4 = param_1;
  func_0x00010bfe0640(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf885a0(uVar3);
  func_0x00010be6f6a0(param_1,uVar4,param_2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 107046458; end: 10704659b; +[SCBaseMediaMessageOperaParser _pagePropertiesForSpectaclesChatMediaType:mediaSize:] */

void FUN_107046458(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  if ((0xc < param_5 + 1U) || ((1L << (param_5 + 1U & 0x3f) & 0x129fU) == 0)) {
    bVar2 = false;
    if ((param_1 == *(double *)PTR__CGSizeZero_110347620) &&
       (bVar2 = false, !NAN(param_2) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
      bVar2 = param_2 == *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    if (!bVar2) {
      puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c2971c0(param_1,param_2,PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3,param_4,puVar4,&PTR____CFConstantStringClassReference_110f0d418);
      _objc_release(puVar4);
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x0001085440bc();
    uVar1 = (int)param_5 - 9;
    if (uVar1 < 4) {
      uVar5 = *(undefined8 *)(&UNK_10de1e898 + (ulong)uVar1 * 8);
    }
    else {
      uVar5 = 2;
    }
    func_0x00010c0df840(puVar4,param_4,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3,param_4,puVar4,&PTR____CFConstantStringClassReference_110f53c98);
    _objc_release(puVar4);
  }
  puVar4 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10704659c; end: 1070466fb; +[SCBaseMediaMessageOperaParser _pagePropertiesForPendingMediaLoadState:] */

void FUN_10704659c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010be6dbc0(param_1);
  func_0x00010c0df780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar2);
  if (param_3 == 3) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e49a38;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e49a38,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110e49a58;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e49a58,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    func_0x00010c1d0640(puVar1);
    ppuVar5 = &PTR____CFConstantStringClassReference_110db3738;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3738,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
  }
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1070466fc; end: 1070467c3; +[SCBaseMediaMessageOperaParser _pageChromePropertiesForMessage:sender:timestamp:] */

void FUN_1070466fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfb5a00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_5,1,0x18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  puVar3 = PTR____kCFBooleanTrue_11034ab68;
  func_0x00010c1d0640(puVar2,param_2,PTR____kCFBooleanTrue_11034ab68,
                      &PTR____CFConstantStringClassReference_110f0d838);
  func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110f0d878);
  puVar3 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1070467c4; end: 107046877; +[SCBaseMediaMessageOperaParser _populateOverlayInPagePropertiesIfNecessary:overlayCacheId:contentDelivery:] */

undefined8
FUN_1070467c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010bf4b4c0();
  _objc_release(param_5);
  if ((int)uVar1 != 0) {
    func_0x00010be6eca0(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3,param_2,param_1);
    _objc_release(param_1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 107046878; end: 107046c4f; +[SCBaseMediaMessageOperaParser _pagePropertiesForLoadedChatMediaContent:contentDelivery:] */

void FUN_107046878(undefined8 param_1,undefined8 param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 2;
  func_0x0001085436d4(2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b4630;
  func_0x00010be75f00();
  uVar2 = uVar3;
  if (((ulong)puVar4 & 1) == 0) {
    uVar2 = param_3;
    func_0x000108543920(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010be75f00(PTR_PTR_1126b4630);
  }
  uVar3 = param_3;
  func_0x00010c0c6c20();
  if ((uVar3 < 0x13) && ((1L << (uVar3 & 0x3f) & 0x7f6b0U) != 0)) {
    func_0x00010c141c40(param_3);
  }
  uVar3 = param_3;
  func_0x00010c0c6c20();
  puVar4 = PTR_PTR_1126b4630;
  uVar5 = param_3;
  puVar7 = param_4;
  uVar8 = param_3;
  switch(uVar3) {
  case 0:
  case 7:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x13:
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 1;
    func_0x0001085436d4(1,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be6f760(puVar4);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 1:
  case 2:
  case 0xb:
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 3;
    func_0x0001085436d4(3,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010c29bc40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be6f780(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar9);
    goto code_r0x000107046b9c;
  case 3:
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 1;
    func_0x0001085436d4(1,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be6f740(puVar4);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 4:
  case 5:
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0x11:
  case 0x12:
  case 0x14:
  case 0x15:
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 3;
    func_0x0001085436d4(3,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010c29bc40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be6f780(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar9);
code_r0x000107046b9c:
    _objc_release(uVar8);
    puVar4 = puVar7;
    goto code_r0x000107046ba0;
  default:
    goto LAB_107046bb8;
  }
  func_0x00010bef7f60(puVar1);
code_r0x000107046ba0:
  _objc_release(puVar4);
  _objc_release(uVar6);
  _objc_release(uVar5);
LAB_107046bb8:
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107046c50; end: 107046cef; +[SCBaseMediaMessageOperaParser _sharedPagePropertiesForChatMediaContent:] */

void FUN_107046c50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b2368;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010c2b53a0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c1531a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107046cf0; end: 107046d03; +[SCBaseMediaMessageOperaParser _operaPageLoadingStateFromChatMediaContentLoadState:] */

undefined8 FUN_107046cf0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if ((param_3 + 1U & 0xfffffffffffffffb) == 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 107046d04; end: 107046d9f; +[SCBaseMediaMessageOperaParser _overlayPropertiesWithOverlayImageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107046d04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined8 uVar11;
  undefined **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined ***pppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 **ppuStack_1a0;
  code *pcStack_198;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  long lStack_168;
  undefined **ppuStack_160;
  undefined ***pppuStack_158;
  undefined8 **ppuStack_150;
  code *pcStack_148;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110f0c098;
  uStack_30 = param_3;
  _objc_retain(param_3);
  puVar7 = &uStack_30;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    pcStack_48 = FUN_107046da0;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110f0c058;
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110f0c078;
    ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9da8;
    ppuStack_98 = &PTR____CFConstantStringClassReference_110f0c0f8;
    puStack_88 = puVar7;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_retain(puVar7);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar6 = &ppuStack_90;
    pppuVar9 = &ppuStack_a8;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_80 = puVar2;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      pcStack_b8 = FUN_107046e98;
      lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_c0 = &puStack_50;
      _objc_retain(pppuVar9);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_138 = &PTR____CFConstantStringClassReference_110f0c238;
      ppuStack_130 = &PTR____CFConstantStringClassReference_110f0c258;
      ppuStack_118 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9da8;
      ppuStack_110 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9dc0;
      puStack_108 = PTR____kCFBooleanFalse_11034ab60;
      ppuStack_128 = &PTR____CFConstantStringClassReference_110f0c318;
      ppuStack_120 = &PTR____CFConstantStringClassReference_110f0c0f8;
      _objc_retain(pppuVar6);
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_100 = puVar1;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0d3c80();
      _objc_release(puVar2);
      _objc_release(puVar1);
      func_0x00010c1d0640(puVar3);
      _objc_release(pppuVar6);
      if (pppuVar9 != (undefined ***)0x0) {
        func_0x00010c1d0640(puVar3);
      }
      ppuVar8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9da8;
      func_0x00010c1d0640(puVar3);
      _objc_release(pppuVar9);
      puVar1 = puVar3;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
        ___stack_chk_fail();
        puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        ppuStack_160 = &PTR____CFConstantStringClassReference_110f0c258;
        pcStack_148 = FUN_107047024;
        lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_188 = &PTR____CFConstantStringClassReference_110f0c158;
        ppuStack_180 = &PTR____CFConstantStringClassReference_110f0c178;
        ppuStack_178 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9da8;
        ppuStack_170 = ppuVar8;
        pppuStack_158 = pppuVar9;
        ppuStack_150 = &ppuStack_c0;
        _objc_retain(ppuVar8);
        pppuVar9 = &ppuStack_178;
        pppuVar10 = &ppuStack_188;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar8;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
          ___stack_chk_fail();
          pppuVar5 = &ppuStack_1d0;
          pcStack_198 = FUN_1070470d8;
          puStack_1c0 = puVar3;
          pppuStack_1b8 = pppuVar6;
          ppuStack_1b0 = ppuVar8;
          puStack_1a8 = puVar1;
          ppuStack_1a0 = &ppuStack_150;
          _objc_retain(pppuVar9);
          puStack_1c8 = PTR_PTR_1126f8608;
          ppuStack_1d0 = ppuVar4;
          _objc_msgSendSuper2(&ppuStack_1d0,PTR_s_initWithMessage_props__1125e86f8,pppuVar9,
                              pppuVar10);
          if (pppuVar5 != (undefined ***)0x0) {
            pppuVar6 = pppuVar9;
            func_0x00010bf5d820();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = *(undefined8 *)((long)pppuVar5 + (long)_DAT_1127631e0);
            *(undefined ****)((long)pppuVar5 + (long)_DAT_1127631e0) = pppuVar6;
            _objc_release(uVar11);
            pppuVar6 = pppuVar9;
            func_0x00010c07fa40();
            *(char *)((long)pppuVar5 + (long)_DAT_1127631e4) = (char)pppuVar6;
          }
          _objc_release(pppuVar9);
          return (undefined1 *)pppuVar5;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 107046da0; end: 107046e97; +[SCBaseMediaMessageOperaParser _pagePropertiesWithImageId:rotationEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107046da0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined8 uVar10;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined ***pppuStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined8 **ppuStack_160;
  code *pcStack_158;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  long lStack_128;
  undefined **ppuStack_120;
  undefined ***pppuStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110f0c058;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110f0c078;
  ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9da8;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110f0c0f8;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar6 = &ppuStack_50;
  pppuVar8 = &ppuStack_68;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_78 = FUN_107046e98;
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_80 = &stack0xfffffffffffffff0;
    _objc_retain(pppuVar8);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110f0c238;
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110f0c258;
    ppuStack_d8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9da8;
    ppuStack_d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9dc0;
    puStack_c8 = PTR____kCFBooleanFalse_11034ab60;
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110f0c318;
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110f0c0f8;
    _objc_retain(pppuVar6);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_c0 = puVar1;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0d3c80();
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x00010c1d0640(puVar3);
    _objc_release(pppuVar6);
    if (pppuVar8 != (undefined ***)0x0) {
      func_0x00010c1d0640(puVar3);
    }
    ppuVar7 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9da8;
    func_0x00010c1d0640(puVar3);
    _objc_release(pppuVar8);
    puVar2 = puVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
      ___stack_chk_fail();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      ppuStack_120 = &PTR____CFConstantStringClassReference_110f0c258;
      pcStack_108 = FUN_107047024;
      lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_148 = &PTR____CFConstantStringClassReference_110f0c158;
      ppuStack_140 = &PTR____CFConstantStringClassReference_110f0c178;
      ppuStack_138 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9da8;
      ppuStack_130 = ppuVar7;
      pppuStack_118 = pppuVar8;
      ppuStack_110 = &puStack_80;
      _objc_retain(ppuVar7);
      pppuVar8 = &ppuStack_138;
      pppuVar9 = &ppuStack_148;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
        ___stack_chk_fail();
        pppuVar5 = &ppuStack_190;
        pcStack_158 = FUN_1070470d8;
        puStack_180 = puVar3;
        pppuStack_178 = pppuVar6;
        ppuStack_170 = ppuVar7;
        puStack_168 = puVar2;
        ppuStack_160 = &ppuStack_110;
        _objc_retain(pppuVar8);
        puStack_188 = PTR_PTR_1126f8608;
        ppuStack_190 = ppuVar4;
        _objc_msgSendSuper2(&ppuStack_190,PTR_s_initWithMessage_props__1125e86f8,pppuVar8,pppuVar9);
        if (pppuVar5 != (undefined ***)0x0) {
          pppuVar6 = pppuVar8;
          func_0x00010bf5d820();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = *(undefined8 *)((long)pppuVar5 + (long)_DAT_1127631e0);
          *(undefined ****)((long)pppuVar5 + (long)_DAT_1127631e0) = pppuVar6;
          _objc_release(uVar10);
          pppuVar6 = pppuVar8;
          func_0x00010c07fa40();
          *(char *)((long)pppuVar5 + (long)_DAT_1127631e4) = (char)pppuVar6;
        }
        _objc_release(pppuVar8);
        return (undefined1 *)pppuVar5;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 107046e98; end: 107047023; +[SCBaseMediaMessageOperaParser _pagePropertiesWithImageId:videoURL:rotationEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107046e98(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined8 uVar9;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110f0c238;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110f0c258;
  ppuStack_68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9da8;
  ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9dc0;
  puStack_58 = PTR____kCFBooleanFalse_11034ab60;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110f0c318;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110f0c0f8;
  _objc_retain(param_3);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c1d0640(puVar3);
  _objc_release(param_3);
  if (param_4 != 0) {
    func_0x00010c1d0640(puVar3);
  }
  ppuVar7 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9da8;
  func_0x00010c1d0640(puVar3);
  _objc_release(param_4);
  puVar1 = puVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110f0c258;
    pcStack_98 = FUN_107047024;
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110f0c158;
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110f0c178;
    ppuStack_c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9da8;
    ppuStack_c0 = ppuVar7;
    lStack_a8 = param_4;
    puStack_a0 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar7);
    pppuVar8 = &ppuStack_c8;
    pppuVar6 = &ppuStack_d8;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
      ___stack_chk_fail();
      pppuVar5 = &ppuStack_120;
      pcStack_e8 = FUN_1070470d8;
      puStack_110 = puVar3;
      uStack_108 = param_3;
      ppuStack_100 = ppuVar7;
      puStack_f8 = puVar1;
      ppuStack_f0 = &puStack_a0;
      _objc_retain(pppuVar8);
      puStack_118 = PTR_PTR_1126f8608;
      ppuStack_120 = ppuVar4;
      _objc_msgSendSuper2(&ppuStack_120,PTR_s_initWithMessage_props__1125e86f8,pppuVar8,pppuVar6);
      if (pppuVar5 != (undefined ***)0x0) {
        pppuVar6 = pppuVar8;
        func_0x00010bf5d820();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)((long)pppuVar5 + (long)_DAT_1127631e0);
        *(undefined ****)((long)pppuVar5 + (long)_DAT_1127631e0) = pppuVar6;
        _objc_release(uVar9);
        pppuVar6 = pppuVar8;
        func_0x00010c07fa40();
        *(char *)((long)pppuVar5 + (long)_DAT_1127631e4) = (char)pppuVar6;
      }
      _objc_release(pppuVar8);
      return (undefined1 *)pppuVar5;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 107047024; end: 1070470d7; +[SCBaseMediaMessageOperaParser _pagePropertiesWithGifId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107047024(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined8 uVar5;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f0c158;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f0c178;
  ppuStack_38 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9da8;
  uStack_30 = param_3;
  _objc_retain(param_3);
  pppuVar4 = &ppuStack_38;
  pppuVar3 = &ppuStack_48;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  puVar2 = &uStack_90;
  _objc_retain(pppuVar4);
  puStack_88 = PTR_PTR_1126f8608;
  uStack_90 = param_3;
  _objc_msgSendSuper2(&uStack_90,PTR_s_initWithMessage_props__1125e86f8,pppuVar4,pppuVar3);
  if (puVar2 != (undefined8 *)0x0) {
    pppuVar3 = pppuVar4;
    func_0x00010bf5d820();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_1127631e0);
    *(undefined ****)((long)puVar2 + (long)_DAT_1127631e0) = pppuVar3;
    _objc_release(uVar5);
    pppuVar3 = pppuVar4;
    func_0x00010c07fa40();
    *(char *)((long)puVar2 + (long)_DAT_1127631e4) = (char)pppuVar3;
  }
  _objc_release(pppuVar4);
  return (undefined1 *)puVar2;
}



/* Entry: 1070470d8; end: 107047187; -[SCStackedStickerCollectionViewModel initWithMessage:props:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1070470d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f8608;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithMessage_props__1125e86f8,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf5d820();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127631e0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127631e0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010c07fa40();
    *(char *)((long)puVar1 + (long)_DAT_1127631e4) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107047188; end: 10704730f; -[SCStackedStickerCollectionViewModel isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107047188(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_50;
  undefined *puStack_48;
  
  iVar3 = (int)&uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126f8608;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_isEqual__1125fa0c8,param_3);
  puVar5 = PTR_PTR_1126cb608;
  if (iVar3 == 0) {
LAB_107047290:
    bVar4 = false;
    goto LAB_1070472ec;
  }
  if (param_1 == param_3) {
    bVar4 = true;
    goto LAB_1070472ec;
  }
  if (param_3 == 0) goto LAB_107047290;
  _objc_retain(param_3);
  _objc_opt_class(puVar5);
  uVar6 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar5);
  uVar1 = param_3;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if ((uVar6 & 1) == 0) {
LAB_1070472e0:
    bVar4 = false;
  }
  else {
    uVar8 = *(ulong *)(param_1 + (long)_DAT_1127631e0);
    uVar6 = param_3;
    func_0x00010c0846e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar8);
    _objc_retain(uVar6);
    if (uVar8 != uVar6) {
      if (uVar6 == 0) {
        _objc_release(uVar8);
      }
      else {
        uVar7 = uVar8;
        func_0x00010c071ae0();
        _objc_release(uVar6);
        _objc_release(uVar8);
        _objc_release(uVar6);
        if ((int)uVar7 != 0) goto LAB_1070472b8;
      }
      goto LAB_1070472e0;
    }
    _objc_release(uVar6);
    _objc_release(uVar8);
    _objc_release(uVar6);
LAB_1070472b8:
    bVar2 = *(byte *)(param_1 + (long)_DAT_1127631e4);
    uVar6 = param_3;
    func_0x00010c07bbc0(param_3);
    bVar4 = (uint)bVar2 == (uint)uVar6;
  }
  _objc_release(uVar1);
LAB_1070472ec:
  _objc_release(param_3);
  return bVar4;
}



/* Entry: 107047310; end: 10704731f; -[SCStackedStickerCollectionViewModel itemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107047310(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127631e0);
}



/* Entry: 107047320; end: 10704732f; -[SCStackedStickerCollectionViewModel isReaction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107047320(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127631e4);
}



/* Entry: 107047330; end: 107047343; -[SCStackedStickerCollectionViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107047330(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127631e0,0);
  return;
}



/* Entry: 107047344; end: 107047373; -[SCBaseMediaThumbnailViewModel clearOldData] */

void FUN_107047344(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107047374; end: 1070473c7; -[SCBaseMediaThumbnailViewModel displayedMedia] */

undefined8 FUN_107047374(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 1070473c8; end: 107047427; -[SCBaseMediaThumbnailViewModel representsMedia:] */

undefined8 FUN_1070473c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = param_2;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 107047428; end: 10704747b; -[SCBaseMediaThumbnailViewModel mediaIdentifier] */

undefined8 FUN_107047428(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 10704747c; end: 107047483; -[SCBaseMediaThumbnailViewModel trackingId] */

undefined8 FUN_10704747c(void)

{
  return 0;
}



/* Entry: 107047484; end: 1070474d7; -[SCBaseMediaThumbnailViewModel loadMedia] */

undefined8 FUN_107047484(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 1070474d8; end: 10704752b; -[SCBaseMediaThumbnailViewModel height] */

undefined8 FUN_1070474d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 10704752c; end: 10704757f; -[SCBaseMediaThumbnailViewModel width] */

undefined8 FUN_10704752c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 107047580; end: 107047587; -[SCBaseMediaThumbnailViewModel isCircular] */

undefined8 FUN_107047580(void)

{
  return 0;
}



/* Entry: 107047588; end: 1070475db; -[SCBaseMediaThumbnailViewModel mediaSaved] */

undefined8 FUN_107047588(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 1070475dc; end: 10704762f; -[SCBaseMediaThumbnailViewModel mediaLoaded] */

undefined8 FUN_1070475dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 107047630; end: 107047683; -[SCBaseMediaThumbnailViewModel shouldDisplayActivityIndicator] */

undefined8 FUN_107047630(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 107047684; end: 1070476d7; -[SCBaseMediaThumbnailViewModel shouldDisplaySendingOverlay] */

undefined8 FUN_107047684(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 1070476d8; end: 10704772b; -[SCBaseMediaThumbnailViewModel shouldDisplayFailedToSend] */

undefined8 FUN_1070476d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 10704772c; end: 10704777f; -[SCBaseMediaThumbnailViewModel shouldDisplayTapToLoad] */

undefined8 FUN_10704772c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 107047780; end: 107047787; -[SCBaseMediaThumbnailViewModel shouldDisplayFailedToLoad] */

undefined8 FUN_107047780(void)

{
  return 0;
}



/* Entry: 107047788; end: 1070477db; -[SCBaseMediaThumbnailViewModel fetchMediaAvailability] */

void FUN_107047788(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar4 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar4;
  _objc_retain(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar4);
  _objc_exception_throw(puVar1);
  _objc_retain(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw();
  uVar4 = *(undefined8 *)(puVar1 + 0x68);
  _objc_retain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1070477dc; end: 10704783b; -[SCBaseMediaThumbnailViewModel fetchImageToSaveWithCompletionHandler:] */

void FUN_1070477dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  _objc_retain(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw();
  uVar3 = *(undefined8 *)(puVar1 + 0x68);
  _objc_retain(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10704783c; end: 10704789b; -[SCBaseMediaThumbnailViewModel fetchImageToDisplayWithCompletionHandler:scaledToSize:] */

void FUN_10704783c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  uVar2 = *(undefined8 *)(puVar1 + 0x68);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10704789c; end: 1070478c3; -[SCBaseMediaThumbnailViewModel imageToDisplay] */

void FUN_10704789c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070478c4; end: 1070478cb; -[SCBaseMediaThumbnailViewModel containsGif] */

undefined8 FUN_1070478c4(void)

{
  return 0;
}



/* Entry: 1070478cc; end: 10704791f; -[SCBaseMediaThumbnailViewModel containsVideo] */

void FUN_1070478cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c29bb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107047920; end: 10704797f; -[SCBaseMediaThumbnailViewModel fetchVideoOverlayForExportWithCompletionHandler:] */

void FUN_107047920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c29bb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107047980; end: 1070479df; -[SCBaseMediaThumbnailViewModel fetchVideoOverlayThumbnailWithSize:WithCompletionHandler:] */

void FUN_107047980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = param_2;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c29bb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1070479e0; end: 107047a33; -[SCBaseMediaThumbnailViewModel videoURL] */

void FUN_1070479e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c29bb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107047a34; end: 107047a37; -[SCBaseMediaThumbnailViewModel saveableVideoURL] */

void FUN_107047a34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29bb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_videoURL_1126848f8);
  return;
}



/* Entry: 107047a38; end: 107047cb7; -[SCBaseMediaThumbnailViewModel isEqual:] */

ulong FUN_107047a38(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d42e8;
  _objc_opt_class(PTR_PTR_1126d42e8);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
    goto LAB_107047c20;
  }
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar2);
  _objc_retain(uVar4);
  if (uVar2 == uVar4) {
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar2);
LAB_107047b24:
    uVar2 = param_1;
    func_0x00010c0cb5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0cb5a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar2);
    _objc_retain(uVar4);
    if (uVar2 == uVar4) {
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(uVar4);
      _objc_release(uVar2);
    }
    else {
      if (uVar4 == 0) goto LAB_107047ba0;
      uVar3 = uVar2;
      func_0x00010c071ae0();
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(uVar4);
      _objc_release(uVar2);
      if ((uVar3 & 1) == 0) goto LAB_107047c14;
    }
    uVar4 = param_1;
    func_0x00010c076ee0();
    uVar2 = param_3;
    func_0x00010c076ee0();
    if ((int)uVar4 == (int)uVar2) {
      uVar4 = param_1;
      func_0x00010c07d880();
      uVar2 = param_3;
      func_0x00010c07d880();
      if ((int)uVar4 == (int)uVar2) {
        func_0x00010bf86a80();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010bf86a80();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_1);
        _objc_retain(uVar2);
        if (param_1 == uVar2) {
          uVar4 = 1;
        }
        else if (uVar2 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = param_1;
          func_0x00010c071ae0(param_1);
        }
        _objc_release(uVar2);
        _objc_release(param_1);
        goto LAB_107047ba8;
      }
    }
LAB_107047c14:
    uVar4 = 0;
  }
  else {
    if (uVar4 != 0) {
      uVar3 = uVar2;
      func_0x00010c071ae0();
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(uVar4);
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) goto LAB_107047b24;
      goto LAB_107047c14;
    }
LAB_107047ba0:
    uVar4 = 0;
    param_1 = uVar2;
LAB_107047ba8:
    _objc_release(uVar2);
    _objc_release(param_1);
  }
  _objc_release(param_3);
LAB_107047c20:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 107047cb8; end: 107047cbf; -[SCBaseMediaThumbnailViewModel thumbnailSize] */

undefined1  [16] FUN_107047cb8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x78);
}



/* Entry: 107047cc0; end: 107047cc7; -[SCBaseMediaThumbnailViewModel setThumbnailSize:] */

void FUN_107047cc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x78) = param_1;
  *(undefined8 *)(param_3 + 0x80) = param_2;
  return;
}



/* Entry: 107047cc8; end: 107047ccf; -[SCBaseMediaThumbnailViewModel messageId] */

undefined8 FUN_107047cc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107047cd0; end: 107047cd7; -[SCBaseMediaThumbnailViewModel setMessageId:] */

void FUN_107047cd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107047cd8; end: 107047cdf; -[SCBaseMediaThumbnailViewModel analyticsMessageId] */

undefined8 FUN_107047cd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107047ce0; end: 107047ce7; -[SCBaseMediaThumbnailViewModel setAnalyticsMessageId:] */

void FUN_107047ce0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107047ce8; end: 107047cef; -[SCBaseMediaThumbnailViewModel conversationId] */

undefined8 FUN_107047ce8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107047cf0; end: 107047cf7; -[SCBaseMediaThumbnailViewModel setConversationId:] */

void FUN_107047cf0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107047cf8; end: 107047cff; -[SCBaseMediaThumbnailViewModel senderDisplayName] */

undefined8 FUN_107047cf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107047d00; end: 107047d07; -[SCBaseMediaThumbnailViewModel setSenderDisplayName:] */

void FUN_107047d00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107047d08; end: 107047d0f; -[SCBaseMediaThumbnailViewModel recipientDisplayName] */

undefined8 FUN_107047d08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107047d10; end: 107047d17; -[SCBaseMediaThumbnailViewModel setRecipientDisplayName:] */

void FUN_107047d10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107047d18; end: 107047d1f; -[SCBaseMediaThumbnailViewModel senderUserId] */

undefined8 FUN_107047d18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107047d20; end: 107047d27; -[SCBaseMediaThumbnailViewModel setSenderUserId:] */

void FUN_107047d20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107047d28; end: 107047d2f; -[SCBaseMediaThumbnailViewModel recipientUserId] */

undefined8 FUN_107047d28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107047d30; end: 107047d5f; -[SCBaseMediaThumbnailViewModel setRecipientUserId:] */

void FUN_107047d30(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107047d60; end: 107047d67; -[SCBaseMediaThumbnailViewModel bodyType] */

undefined8 FUN_107047d60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107047d68; end: 107047d6f; -[SCBaseMediaThumbnailViewModel setBodyType:] */

void FUN_107047d68(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 107047d70; end: 107047d77; -[SCBaseMediaThumbnailViewModel isFailed] */

undefined1 FUN_107047d70(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107047d78; end: 107047d7f; -[SCBaseMediaThumbnailViewModel setIsFailed:] */

void FUN_107047d78(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 107047d80; end: 107047d87; -[SCBaseMediaThumbnailViewModel isSending] */

undefined1 FUN_107047d80(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107047d88; end: 107047d8f; -[SCBaseMediaThumbnailViewModel setIsSending:] */

void FUN_107047d88(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 107047d90; end: 107047d97; -[SCBaseMediaThumbnailViewModel isSentByUser] */

undefined1 FUN_107047d90(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107047d98; end: 107047d9f; -[SCBaseMediaThumbnailViewModel setIsSentByUser:] */

void FUN_107047d98(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 107047da0; end: 107047da7; -[SCBaseMediaThumbnailViewModel isSaved] */

undefined1 FUN_107047da0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}


