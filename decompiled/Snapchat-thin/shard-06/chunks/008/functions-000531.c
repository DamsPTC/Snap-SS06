/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e243cc; end: 104e24403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e243cc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112713cc8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf9bb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e24404; end: 104e24413;  */

void FUN_104e24404(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104e24414; end: 104e244ab; -[SCVoiceoverViewController _showFailureNotification] */

void FUN_104e24414(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126afde0;
  uVar1 = param_1;
  func_0x000109201be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55ce0(puVar2,param_2,uVar1,&PTR____CFConstantStringClassReference_110db69b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d3a0(puVar2,param_2,param_1,0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104e244ac; end: 104e24593; -[SCVoiceoverViewController _seekToEndOfAudio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e244ac(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = (long)_DAT_112713c90;
  if (*(long *)(param_1 + lVar2) == 0) {
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x00010c0c20a0(&uStack_60);
    if (*(long *)(param_1 + lVar2) != 0) {
      func_0x00010bf5e7c0(&uStack_78);
      goto LAB_104e24500;
    }
  }
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
LAB_104e24500:
  _CMTimeMinimum(&uStack_48,&uStack_60,&uStack_78);
  lVar2 = param_1 + _DAT_112713cb4;
  _objc_loadWeakRetained(lVar2);
  uStack_58 = uStack_40;
  uStack_60 = uStack_48;
  uStack_50 = uStack_38;
  func_0x00010c2a0b60();
  _objc_release(lVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713cb8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_58 = uStack_40;
  uStack_60 = uStack_48;
  uStack_50 = uStack_38;
  func_0x00010c288960();
  _objc_release(uVar1);
  return;
}



/* Entry: 104e24594; end: 104e245b3; -[SCVoiceoverViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e24594(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112713cc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e245b4; end: 104e245c7; -[SCVoiceoverViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e245b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112713cc8,param_3);
  return;
}



/* Entry: 104e245c8; end: 104e245e7; -[SCVoiceoverViewController mediaPlaybackManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e245c8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112713cb4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e245e8; end: 104e245fb; -[SCVoiceoverViewController setMediaPlaybackManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e245e8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112713cb4,param_3);
  return;
}



/* Entry: 104e245fc; end: 104e24723; -[SCVoiceoverViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e245fc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112713cb4);
  _objc_destroyWeak(param_1 + _DAT_112713cc8);
  _objc_storeStrong(param_1 + _DAT_112713cd4,0);
  _objc_storeStrong(param_1 + _DAT_112713cd0,0);
  _objc_storeStrong(param_1 + _DAT_112713ccc,0);
  _objc_storeStrong(param_1 + _DAT_112713ce0,0);
  _objc_storeStrong(param_1 + _DAT_112713ca8,0);
  _objc_storeStrong(param_1 + _DAT_112713cc4,0);
  _objc_storeStrong(param_1 + _DAT_112713cc0,0);
  _objc_storeStrong(param_1 + _DAT_112713cbc,0);
  _objc_storeStrong(param_1 + _DAT_112713cb8,0);
  _objc_storeStrong(param_1 + _DAT_112713cb0,0);
  _objc_storeStrong(param_1 + _DAT_112713cac,0);
  _objc_storeStrong(param_1 + _DAT_112713ca4,0);
  _objc_storeStrong(param_1 + _DAT_112713c9c,0);
  _objc_storeStrong(param_1 + _DAT_112713c94,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713c90,0);
  return;
}



/* Entry: 104e24724; end: 104e24847; -[SCVoiceoverViewModel initWithAudio:audioSession:maxDuration:grapheneLogger:audioMixToggleInitialValue:mixingProportionValue:] */

undefined1 *
FUN_104e24724(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e4698;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    uVar4 = param_6[1];
    uVar2 = *param_6;
    *(undefined8 *)((long)puVar1 + 0x40) = param_6[2];
    *(undefined8 *)((long)puVar1 + 0x38) = uVar4;
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x2d) = param_8;
    *(undefined4 *)((long)puVar1 + 0x28) = param_1;
    func_0x00010bdd4320(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 104e24848; end: 104e2487f; -[SCVoiceoverViewModel startRecording] */

void FUN_104e24848(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c07bee0();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf188b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_beginRecordingSegment_1125a3bd0);
  return;
}



/* Entry: 104e24880; end: 104e248b7; -[SCVoiceoverViewModel stopRecording] */

void FUN_104e24880(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c07bee0();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf951d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_endRecordingSegment_1125c2e18);
    return;
  }
  return;
}



/* Entry: 104e248b8; end: 104e248f7; -[SCVoiceoverViewModel undoLastSegment] */

void FUN_104e248b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  func_0x00010c27f900(*(undefined8 *)(param_1 + 0x10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  *(undefined1 *)(param_1 + 0x2c) = 1;
  return;
}



/* Entry: 104e248f8; end: 104e2490f; -[SCVoiceoverViewModel durationOfSegmentAtIndex:] */

void FUN_104e248f8(undefined8 *param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c08fb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_2 + 0x10),PTR_s_lengthOfSegmentAtIndex__1126018d0);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 104e24910; end: 104e24a53; -[SCVoiceoverViewModel createVoiceoverAudioWithCompletion:] */

void FUN_104e24910(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0df320(*(undefined8 *)(param_1 + 0x10));
    func_0x00010c0a9300(uVar2);
    _objc_initWeak(auStack_48,param_1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_104e24a54;
    puStack_60 = &UNK_1108527a8;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    ppuVar1 = &puStack_78;
    lStack_58 = param_3;
    _objc_retainBlock(ppuVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010be60c20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5a0e0(uVar2);
    _objc_release(param_1);
    _objc_release(ppuVar1);
    _objc_release(lStack_58);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  else {
    (**(code **)(param_3 + 0x10))(param_3,*(long *)(param_1 + 8),1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104e24a54; end: 104e24ac3;  */

void FUN_104e24a54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be29de0();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e24ac4; end: 104e24bb7; -[SCVoiceoverViewModel setAudioMixingEnabled:] */

void FUN_104e24ac4(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((*(byte *)(param_1 + 0x2d) != param_3) &&
     (*(char *)(param_1 + 0x2d) = (char)param_3, *(long *)(param_1 + 8) != 0)) {
    puVar1 = PTR_PTR_1126b0d70;
    _objc_alloc();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c1585e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be60c20(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf0ed20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf0ef80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043aa0(puVar1,param_2,uVar2,lVar3,uVar4,uVar5);
    uVar6 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(uVar2);
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  return;
}



/* Entry: 104e24bb8; end: 104e24bcf; -[SCVoiceoverViewModel currentDuration] */

void FUN_104e24bb8(undefined8 *param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfbb770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_2 + 0x10),PTR_s_fullAudioLength_1125cc780);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 104e24bd0; end: 104e24bd7; -[SCVoiceoverViewModel numberOfSegments] */

void FUN_104e24bd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0df330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_numberOfSegments_1126156e0);
  return;
}



/* Entry: 104e24bd8; end: 104e24bdf; -[SCVoiceoverViewModel isRecording] */

void FUN_104e24bd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07bef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_isRecording_1125fc9c8);
  return;
}



/* Entry: 104e24be0; end: 104e24be7; -[SCVoiceoverViewModel recordingEventPublisher] */

void FUN_104e24be0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c123dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_recordingEventPublisher_112626990);
  return;
}



/* Entry: 104e24be8; end: 104e24ce3; -[SCVoiceoverViewModel _bindToAudioSessionRecording] */

void FUN_104e24be8(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_70;
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104e24ce4;
  puStack_58 = &UNK_110852758;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retainBlock(&puStack_70);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c123dc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104e24ce4; end: 104e24d97;  */

void FUN_104e24ce4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bdc20(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104e24d98; end: 104e24d9f;  */

void FUN_104e24d98(void)

{
  return;
}



/* Entry: 104e24da0; end: 104e24dd3;  */

void FUN_104e24da0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ec20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e24dd4; end: 104e24e07; -[SCVoiceoverViewModel _handleRecordingEndedWithSuccess:] */

void FUN_104e24dd4(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  return;
}



/* Entry: 104e24e08; end: 104e24e63; -[SCVoiceoverViewModel _handleFinishedCreatingVoiceoverAudioWithAudio:success:] */

void FUN_104e24e08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0a9340(*(undefined8 *)(param_1 + 0x18),param_2,param_4);
  if ((int)param_4 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e24e64; end: 104e24ea3; -[SCVoiceoverViewModel _mixingProportion] */

void FUN_104e24e64(long param_1)

{
  if (*(char *)(param_1 + 0x2d) == '\x01') {
    func_0x00010c0df740(*(undefined4 *)(param_1 + 0x28),PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e24ea4; end: 104e24eb7; -[SCVoiceoverViewModel maxDuration] */

void FUN_104e24ea4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  param_1[1] = *(undefined8 *)(param_2 + 0x38);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x40);
  return;
}



/* Entry: 104e24eb8; end: 104e24ebf; -[SCVoiceoverViewModel hasChanges] */

undefined1 FUN_104e24eb8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2c);
}



/* Entry: 104e24ec0; end: 104e24ec7; -[SCVoiceoverViewModel isAudioMixed] */

undefined1 FUN_104e24ec0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2d);
}



/* Entry: 104e24ec8; end: 104e24f0f; -[SCVoiceoverViewModel .cxx_destruct] */

void FUN_104e24ec8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e24f10; end: 104e24f57; +[SCVoiceoverRecordingButtonEvent began] */

void FUN_104e24f10(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0da0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e24f58; end: 104e24fa3; +[SCVoiceoverRecordingButtonEvent ended] */

void FUN_104e24f58(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0da0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e24fa4; end: 104e24fc7; -[SCVoiceoverRecordingButtonEvent copyWithZone:] */

undefined8 FUN_104e24fa4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104e24fc8; end: 104e24fcf; -[SCVoiceoverRecordingButtonEvent hash] */

undefined8 FUN_104e24fc8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104e24fd0; end: 104e25013; -[SCVoiceoverRecordingButtonEvent internalInit] */

void FUN_104e24fd0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e46a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e25014; end: 104e2509b; -[SCVoiceoverRecordingButtonEvent isEqual:] */

bool FUN_104e25014(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 104e2509c; end: 104e25113; -[SCVoiceoverRecordingButtonEvent matchBegan:ended:] */

void FUN_104e2509c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    lVar1 = param_4;
    if (param_4 == 0) goto LAB_104e250e4;
  }
  else {
    lVar1 = param_3;
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_104e250e4;
  }
  (**(code **)(lVar1 + 0x10))();
LAB_104e250e4:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e25114; end: 104e2515f; +[SCVoiceoverAudioSessionRecordingEvent began] */

void FUN_104e25114(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0d58;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e25160; end: 104e251bb; +[SCVoiceoverAudioSessionRecordingEvent endedWithSuccess:] */

void FUN_104e25160(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0d58;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  puVar2[0x10] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e251bc; end: 104e25203; +[SCVoiceoverAudioSessionRecordingEvent failedToBegin] */

void FUN_104e251bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0d58;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e25204; end: 104e25227; -[SCVoiceoverAudioSessionRecordingEvent copyWithZone:] */

undefined8 FUN_104e25204(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104e25228; end: 104e25283; -[SCVoiceoverAudioSessionRecordingEvent hash] */

void FUN_104e25228(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uStack_20 = (ulong)*(byte *)(param_1 + 0x10);
  puVar1 = &uStack_28;
  func_0x000100505190(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126e46a8;
  puStack_60 = puVar1;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e25284; end: 104e252c7; -[SCVoiceoverAudioSessionRecordingEvent internalInit] */

void FUN_104e25284(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e46a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e252c8; end: 104e2535f; -[SCVoiceoverAudioSessionRecordingEvent isEqual:] */

bool FUN_104e252c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 104e25360; end: 104e2540b; -[SCVoiceoverAudioSessionRecordingEvent matchFailedToBegin:began:ended:] */

void FUN_104e25360(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,*(undefined1 *)(param_1 + 0x10));
    }
  }
  else {
    if (lVar1 == 1) {
      if (param_4 == 0) goto LAB_104e253e8;
      pcVar2 = *(code **)(param_4 + 0x10);
      lVar1 = param_4;
    }
    else {
      if ((lVar1 != 0) || (param_3 == 0)) goto LAB_104e253e8;
      pcVar2 = *(code **)(param_3 + 0x10);
      lVar1 = param_3;
    }
    (*pcVar2)(lVar1);
  }
LAB_104e253e8:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e2540c; end: 104e25457; +[SCVoiceoverPlaybackButtonEvent pause] */

void FUN_104e2540c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0d90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e25458; end: 104e2549f; +[SCVoiceoverPlaybackButtonEvent play] */

void FUN_104e25458(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0d90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e254a0; end: 104e254c3; -[SCVoiceoverPlaybackButtonEvent copyWithZone:] */

undefined8 FUN_104e254a0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104e254c4; end: 104e254cb; -[SCVoiceoverPlaybackButtonEvent hash] */

undefined8 FUN_104e254c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104e254cc; end: 104e2550f; -[SCVoiceoverPlaybackButtonEvent internalInit] */

void FUN_104e254cc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e46b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e25510; end: 104e25597; -[SCVoiceoverPlaybackButtonEvent isEqual:] */

bool FUN_104e25510(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 104e25598; end: 104e2560f; -[SCVoiceoverPlaybackButtonEvent matchPlay:pause:] */

void FUN_104e25598(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    lVar1 = param_4;
    if (param_4 == 0) goto LAB_104e255e0;
  }
  else {
    lVar1 = param_3;
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_104e255e0;
  }
  (**(code **)(lVar1 + 0x10))();
LAB_104e255e0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e25610; end: 104e25683; -[SCVoiceoverGrapheneLogger initWithGrapheneRegistry:] */

undefined1 * FUN_104e25610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e46b8;
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



/* Entry: 104e25684; end: 104e2573f; -[SCVoiceoverGrapheneLogger logVoiceoverOpenedWithVoiceoverAudio:] */

void FUN_104e25684(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b0e08;
  func_0x00010c0e9d60(PTR_PTR_1126b0e08);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2a0ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104e25740; end: 104e257fb; -[SCVoiceoverGrapheneLogger logVoiceoverSavedWithVoiceoverAudio:] */

void FUN_104e25740(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b0e08;
  func_0x00010c14b8c0(PTR_PTR_1126b0e08);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2a0ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104e257fc; end: 104e2587b; -[SCVoiceoverGrapheneLogger logVoiceoverRecordingSucceeded] */

void FUN_104e257fc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b0e08;
  func_0x00010c123f20(PTR_PTR_1126b0e08);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2a0ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e2587c; end: 104e25947; -[SCVoiceoverGrapheneLogger logVoiceoverRecordingFailedWithAction:] */

void FUN_104e2587c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  
  puVar1 = PTR_PTR_1126b0e08;
  func_0x00010c123de0(PTR_PTR_1126b0e08);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  if (param_3 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110db6a98;
  }
  else {
    if (param_3 != 1) goto LAB_104e258f4;
    ppuVar5 = &PTR____CFConstantStringClassReference_110db6ab8;
  }
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110db6a78,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
LAB_104e258f4:
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2a0ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104e25948; end: 104e2599f; -[SCVoiceoverGrapheneLogger logLatencyBeginForVoiceoverOpenedWithVoiceoverAudio:] */

void FUN_104e25948(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _CACurrentMediaTime();
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 104e259a0; end: 104e25a83; -[SCVoiceoverGrapheneLogger logLatencyEndForVoiceoverOpenedWithVoiceoverAudio] */

void FUN_104e259a0(double param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  _CACurrentMediaTime();
  dVar5 = param_1;
  func_0x00010bf885a0(*(undefined8 *)(param_2 + 0x10));
  puVar1 = PTR_PTR_1126b0e08;
  func_0x00010c0e9320(PTR_PTR_1126b0e08);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2a0ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1 - dVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104e25a84; end: 104e25af7; -[SCVoiceoverGrapheneLogger logLatencyBeginForVoiceoverAudioStitch:] */

void FUN_104e25a84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _CACurrentMediaTime();
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104e25af8; end: 104e25c37; -[SCVoiceoverGrapheneLogger logLatencyEndForVoiceoverAudioStitchWithSuccess:] */

void FUN_104e25af8(double param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  
  _CACurrentMediaTime();
  dVar6 = param_1;
  func_0x00010bf885a0(*(undefined8 *)(param_2 + 0x20));
  puVar2 = PTR_PTR_1126b0e08;
  func_0x00010bf10060(PTR_PTR_1126b0e08);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c25d700(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110db6a58,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db6ad8;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db6af8;
  }
  puVar2 = puVar4;
  func_0x00010c2ac460(puVar4,param_3,&PTR____CFConstantStringClassReference_110dab0d8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar5 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c2a0ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1 - dVar6);
  _objc_release(uVar3);
  _objc_release(uVar5);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104e25c38; end: 104e25c7f; -[SCVoiceoverGrapheneLogger .cxx_destruct] */

void FUN_104e25c38(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e25c80; end: 104e25cab; +[SCGrapheneVoiceoverMetric openedCount] */

void FUN_104e25c80(void)

{
  _objc_alloc(PTR_PTR_1126b0e08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e25cac; end: 104e25cd7; +[SCGrapheneVoiceoverMetric recordingSuccessCount] */

void FUN_104e25cac(void)

{
  _objc_alloc(PTR_PTR_1126b0e08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e25cd8; end: 104e25d03; +[SCGrapheneVoiceoverMetric recordingFailedCount] */

void FUN_104e25cd8(void)

{
  _objc_alloc(PTR_PTR_1126b0e08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e25d04; end: 104e25d2f; +[SCGrapheneVoiceoverMetric savedCount] */

void FUN_104e25d04(void)

{
  _objc_alloc(PTR_PTR_1126b0e08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e25d30; end: 104e25d5b; +[SCGrapheneVoiceoverMetric openLatency] */

void FUN_104e25d30(void)

{
  _objc_alloc(PTR_PTR_1126b0e08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e25d5c; end: 104e25d87; +[SCGrapheneVoiceoverMetric audioStitchLatency] */

void FUN_104e25d5c(void)

{
  _objc_alloc(PTR_PTR_1126b0e08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e25d88; end: 104e25e27; -[SCGrapheneVoiceoverMetric description] */

void FUN_104e25d88(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db6b18;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110db6b18,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e46c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 104e25e28; end: 104e25f9b; -[SCGrapheneRegistry voiceoverGraphene] */

void FUN_104e25e28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104e25eb0;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136b90a8 != -1) {
    func_0x00010002a2fc(0x1136b90a8,&puStack_48);
  }
  uVar1 = uRam00000001136b90a0;
  _objc_retain(uRam00000001136b90a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e25f9c; end: 104e27067; -[SCActivityFeedEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e25f9c(long param_1)

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
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  undefined *puVar78;
  undefined *puVar79;
  undefined **ppuVar80;
  undefined *puVar81;
  undefined **ppuVar82;
  long lVar83;
  long lVar84;
  long lVar85;
  long lVar86;
  undefined8 uVar87;
  long lVar88;
  long lVar89;
  long lVar90;
  long lVar91;
  long lVar92;
  long lVar93;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  puVar1 = PTR_PTR_1126b0e10;
  _objc_alloc();
  lVar89 = (long)_DAT_112713d2c;
  lVar2 = param_1 + lVar89;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar83 = (long)_DAT_112713d30;
  lVar4 = param_1 + lVar83;
  _objc_loadWeakRetained();
  lVar93 = lVar4;
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar93;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112713d34;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c2426c0();
  _objc_retainAutoreleasedReturnValue();
  lVar84 = (long)_DAT_112713d38;
  lVar8 = param_1 + lVar84;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar85 = (long)_DAT_112713d3c;
  lVar10 = param_1 + lVar85;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010bf50420();
  _objc_retainAutoreleasedReturnValue();
  lVar86 = (long)_DAT_112713d40;
  lVar12 = param_1 + lVar86;
  _objc_loadWeakRetained(lVar12);
  lVar13 = lVar12;
  func_0x00010c0f14e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ddc0();
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar93);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar14 = PTR_PTR_1126b0e18;
  _objc_alloc();
  lVar2 = param_1 + lVar89;
  _objc_loadWeakRetained(lVar2);
  lVar8 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112713d44;
  _objc_loadWeakRetained(lVar4);
  lVar6 = param_1 + _DAT_112713d48;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c05e0c0();
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_112713d4c;
  _objc_loadWeakRetained();
  lVar4 = lVar2;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_initWeak(auStack_80,param_1);
  puVar16 = PTR_PTR_1126aeaf8;
  _objc_alloc();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x104e27068;
  puStack_90 = &UNK_110849680;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010c0311a0();
  uVar87 = *(undefined8 *)(param_1 + _DAT_112713d50);
  *(undefined **)(param_1 + _DAT_112713d50) = puVar16;
  _objc_release(uVar87);
  lVar93 = (long)_DAT_112713d54;
  lVar2 = param_1 + lVar93;
  _objc_loadWeakRetained();
  lVar4 = lVar2;
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar6;
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar2);
  puVar16 = PTR_PTR_1126b0e20;
  _objc_alloc();
  lVar2 = param_1 + lVar89;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar84 = param_1 + lVar84;
  _objc_loadWeakRetained(lVar84);
  func_0x00010c05e640();
  _objc_release(lVar84);
  _objc_release(lVar4);
  _objc_release(lVar2);
  puVar18 = PTR_PTR_1126b0e28;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112713d5c;
  _objc_loadWeakRetained(lVar2);
  lVar6 = lVar2;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d820();
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar2);
  puVar78 = PTR_PTR_1126b0e30;
  _objc_alloc();
  lVar89 = param_1 + lVar89;
  _objc_loadWeakRetained();
  lVar19 = lVar89;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar88 = (long)_DAT_112713d60;
  lVar2 = param_1 + lVar88;
  _objc_loadWeakRetained();
  lVar20 = lVar2;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112713d64;
  _objc_loadWeakRetained();
  lVar21 = lVar4;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar88;
  _objc_loadWeakRetained();
  lVar22 = lVar6;
  func_0x00010bef1580();
  _objc_retainAutoreleasedReturnValue();
  lVar91 = (long)_DAT_112713d68;
  lVar8 = param_1 + lVar91;
  _objc_loadWeakRetained();
  lVar23 = lVar8;
  func_0x00010bfcfa80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + lVar88;
  _objc_loadWeakRetained();
  lVar24 = lVar10;
  func_0x00010bf25020();
  _objc_retainAutoreleasedReturnValue();
  lVar83 = param_1 + lVar83;
  _objc_loadWeakRetained();
  lVar25 = lVar83;
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  lVar85 = param_1 + lVar85;
  _objc_loadWeakRetained();
  lVar26 = lVar85;
  func_0x00010bf50420();
  _objc_retainAutoreleasedReturnValue();
  lVar90 = (long)_DAT_112713d6c;
  lVar12 = param_1 + lVar90;
  _objc_loadWeakRetained();
  lVar27 = lVar12;
  func_0x00010bf50180();
  _objc_retainAutoreleasedReturnValue();
  lVar84 = param_1 + _DAT_112713d70;
  _objc_loadWeakRetained();
  lVar28 = lVar84;
  func_0x00010c15ada0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112713d74;
  _objc_loadWeakRetained();
  lVar29 = lVar3;
  func_0x00010c29cc80();
  _objc_retainAutoreleasedReturnValue();
  lVar93 = param_1 + lVar93;
  _objc_loadWeakRetained();
  lVar30 = lVar93;
  func_0x00010beef000();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112713d80;
  _objc_loadWeakRetained();
  lVar31 = lVar5;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = lVar31;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112713d84;
  _objc_loadWeakRetained();
  lVar33 = lVar7;
  func_0x00010bf67f80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112713d90;
  _objc_loadWeakRetained();
  lVar34 = lVar9;
  func_0x00010c1490a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112713d94;
  _objc_loadWeakRetained();
  lVar35 = lVar11;
  func_0x00010c24bf40();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar35;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar92 = (long)_DAT_112713d98;
  lVar13 = param_1 + lVar92;
  _objc_loadWeakRetained();
  lVar37 = lVar13;
  func_0x00010bf1d860();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = lVar37;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar90 = param_1 + lVar90;
  _objc_loadWeakRetained();
  lVar39 = lVar90;
  func_0x00010bfb9e40();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = param_1 + _DAT_112713da0;
  _objc_loadWeakRetained();
  lVar41 = lVar40;
  func_0x00010c131940();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = param_1 + lVar88;
  _objc_loadWeakRetained();
  lVar43 = lVar42;
  func_0x00010c241240();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = param_1 + lVar88;
  _objc_loadWeakRetained();
  lVar45 = lVar44;
  func_0x00010c0e4ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_1 + lVar88;
  _objc_loadWeakRetained();
  lVar47 = lVar46;
  func_0x00010c0dcb20();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = param_1 + _DAT_112713da4;
  _objc_loadWeakRetained();
  lVar49 = lVar48;
  func_0x00010befc3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = param_1 + _DAT_112713ddc;
  _objc_loadWeakRetained();
  lVar91 = param_1 + lVar91;
  _objc_loadWeakRetained();
  lVar51 = lVar91;
  func_0x00010c0d8300();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = param_1 + _DAT_112713da8;
  _objc_loadWeakRetained();
  lVar53 = lVar52;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1 + _DAT_112713dac;
  _objc_loadWeakRetained();
  lVar55 = lVar54;
  func_0x00010bfea2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = lVar55;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = lVar56;
  func_0x00010bfea320();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = lVar57;
  func_0x00010bfea2c0();
  _objc_retainAutoreleasedReturnValue();
  lVar59 = param_1 + _DAT_112713db0;
  _objc_loadWeakRetained();
  lVar60 = lVar59;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = param_1 + _DAT_112713db4;
  _objc_loadWeakRetained();
  lVar62 = lVar61;
  func_0x00010c0cf020();
  _objc_retainAutoreleasedReturnValue();
  lVar63 = param_1 + _DAT_112713db8;
  _objc_loadWeakRetained();
  lVar64 = lVar63;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar86 = param_1 + lVar86;
  _objc_loadWeakRetained();
  lVar92 = param_1 + lVar92;
  _objc_loadWeakRetained();
  lVar65 = param_1 + _DAT_112713dbc;
  _objc_loadWeakRetained();
  lVar66 = lVar65;
  func_0x00010c112f80();
  _objc_retainAutoreleasedReturnValue();
  lVar67 = param_1 + lVar88;
  _objc_loadWeakRetained();
  lVar68 = lVar67;
  func_0x00010c247d20();
  _objc_retainAutoreleasedReturnValue();
  lVar69 = param_1 + _DAT_112713dc4;
  _objc_loadWeakRetained();
  lVar70 = param_1 + lVar88;
  _objc_loadWeakRetained();
  lVar71 = lVar70;
  func_0x00010bf19400();
  _objc_retainAutoreleasedReturnValue();
  lVar72 = param_1 + lVar88;
  _objc_loadWeakRetained();
  lVar73 = lVar72;
  func_0x00010bf193e0();
  _objc_retainAutoreleasedReturnValue();
  lVar74 = param_1 + _DAT_112713de0;
  _objc_loadWeakRetained();
  lVar75 = param_1 + _DAT_112713dcc;
  _objc_loadWeakRetained();
  lVar76 = lVar75;
  func_0x00010bf5b4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar77 = param_1 + _DAT_112713dd0;
  _objc_loadWeakRetained();
  func_0x00010c05e2a0();
  _objc_release(lVar77);
  _objc_release(lVar76);
  _objc_release(lVar75);
  _objc_release(lVar74);
  _objc_release(lVar73);
  _objc_release(lVar72);
  _objc_release(lVar71);
  _objc_release(lVar70);
  _objc_release(lVar69);
  _objc_release(lVar68);
  _objc_release(lVar67);
  _objc_release(lVar66);
  _objc_release(lVar65);
  _objc_release(lVar92);
  _objc_release(lVar86);
  _objc_release(lVar64);
  _objc_release(lVar63);
  _objc_release(lVar62);
  _objc_release(lVar61);
  _objc_release(lVar60);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar91);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar90);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar13);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar11);
  _objc_release(lVar34);
  _objc_release(lVar9);
  _objc_release(lVar33);
  _objc_release(lVar7);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar5);
  _objc_release(lVar30);
  _objc_release(lVar93);
  _objc_release(lVar29);
  _objc_release(lVar3);
  _objc_release(lVar28);
  _objc_release(lVar84);
  _objc_release(lVar27);
  _objc_release(lVar12);
  _objc_release(lVar26);
  _objc_release(lVar85);
  _objc_release(lVar25);
  _objc_release(lVar83);
  _objc_release(lVar24);
  _objc_release(lVar10);
  _objc_release(lVar23);
  _objc_release(lVar8);
  _objc_release(lVar22);
  _objc_release(lVar6);
  _objc_release(lVar21);
  _objc_release(lVar4);
  _objc_release(lVar20);
  _objc_release(lVar2);
  _objc_release(lVar19);
  _objc_release(lVar89);
  _objc_storeWeak(param_1 + _DAT_112713dd4,puVar78);
  lVar2 = param_1 + _DAT_112713dd8;
  _objc_loadWeakRetained();
  lVar4 = lVar2;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  param_1 = param_1 + lVar88;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  ppuVar80 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar78 == (undefined *)0x0) {
    ppuVar80 = &PTR____CFConstantStringClassReference_110db6c78;
  }
  else {
    _objc_retain(puVar78);
    puVar79 = puVar78;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar78);
    _objc_release(puVar79);
  }
  puVar79 = puVar78;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar82 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar79 == (undefined *)0x0) {
    ppuVar82 = &PTR____CFConstantStringClassReference_110db6c78;
  }
  else {
    _objc_retain(puVar79);
    puVar81 = puVar79;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar79);
    _objc_release(puVar81);
  }
  func_0x000104e27114(&PTR____CFConstantStringClassReference_110db6bf8);
  _objc_release(ppuVar82);
  _objc_release(puVar79);
  _objc_release(ppuVar80);
  puVar79 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar79);
  _objc_retain(lVar2);
  _objc_retain(lVar4);
  func_0x00010bf0c9a0(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(puVar78);
  _objc_release(puVar18);
  _objc_release(puVar16);
  _objc_release(lVar17);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(lVar15);
  _objc_release(puVar14);
  _objc_release(puVar1);
  return;
}



/* Entry: 104e27068; end: 104e27173;  */

void FUN_104e27068(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd0140();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e27174; end: 104e2720b;  */

void FUN_104e27174(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (0.0 < param_1) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar1);
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                        &PTR____CFConstantStringClassReference_110db6c98);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 104e2720c; end: 104e2734f;  */

void FUN_104e2720c(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  
  FUN_104e27174(*(undefined8 *)(param_1 + 0x38));
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) {
    lVar4 = 0;
    ppuVar2 = &PTR____CFConstantStringClassReference_110db6c78;
  }
  else {
    _objc_retain(lVar4);
    lVar1 = lVar4;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar1);
    lVar4 = *(long *)(param_1 + 0x20);
  }
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar4 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110db6c78;
  }
  else {
    lVar1 = lVar4;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  func_0x000104e27114(&PTR____CFConstantStringClassReference_110db6c18);
  _objc_release(ppuVar3);
  _objc_release(lVar4);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c24fc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_startPage__112671938,3);
  return;
}



/* Entry: 104e27350; end: 104e2744b; -[SCActivityFeedEntryPoint _attachAlertViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e27350(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  param_2 = param_2 + _DAT_112713dd4;
  _objc_loadWeakRetained();
  lVar1 = param_2;
  func_0x00010bef15c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104e2744c;
  puStack_60 = &UNK_110844b80;
  uStack_58 = param_4;
  lStack_50 = lVar1;
  uStack_48 = param_1;
  _objc_retain(param_4);
  func_0x00010c10eda0(lVar1,param_3,param_4,1,&puStack_78);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(lVar1);
  return;
}



/* Entry: 104e2744c; end: 104e27453;  */

void FUN_104e2744c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (0.0 < *(double *)(param_1 + 0x30)) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar1);
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db6c98);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 104e27454; end: 104e2761b; -[SCActivityFeedEntryPoint _detachAlertViewControllerWithCompletionBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e27454(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  param_2 = param_2 + _DAT_112713dd4;
  _objc_loadWeakRetained();
  lVar1 = param_2;
  func_0x00010bef15c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar2 == 0) {
    if (lVar1 == 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110db6c78;
    }
    else {
      _objc_retain(lVar1);
      lVar4 = lVar1;
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(ppuVar5,param_3,&PTR____CFConstantStringClassReference_110db6c58);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_release(lVar4);
    }
    func_0x000104e27114(&PTR____CFConstantStringClassReference_110db6c38);
    _objc_release(ppuVar5);
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar3);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104e2761c;
    puStack_78 = &UNK_110845188;
    _objc_retain(lVar2);
    lStack_70 = lVar2;
    lStack_68 = lVar1;
    uStack_58 = param_1;
    _objc_retain(param_4);
    lStack_60 = param_4;
    func_0x00010bf84b00(lVar1,param_3,1,&puStack_90);
    _objc_release(lStack_60);
    _objc_release(lStack_70);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 104e2761c; end: 104e27657;  */

void FUN_104e2761c(long param_1)

{
  FUN_104e27174(*(undefined8 *)(param_1 + 0x38));
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104e27648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 104e27658; end: 104e278c3; -[SCActivityFeedEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e27658(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112713de0);
  _objc_storeStrong(param_1 + _DAT_112713dc8,0);
  _objc_storeStrong(param_1 + _DAT_112713dc0,0);
  _objc_destroyWeak(param_1 + _DAT_112713d48);
  _objc_destroyWeak(param_1 + _DAT_112713d44);
  _objc_storeStrong(param_1 + _DAT_112713d8c,0);
  _objc_storeStrong(param_1 + _DAT_112713d7c,0);
  _objc_storeStrong(param_1 + _DAT_112713d78,0);
  _objc_storeStrong(param_1 + _DAT_112713d58,0);
  _objc_storeStrong(param_1 + _DAT_112713d9c,0);
  _objc_storeStrong(param_1 + _DAT_112713d88,0);
  _objc_destroyWeak(param_1 + _DAT_112713dc4);
  _objc_destroyWeak(param_1 + _DAT_112713dcc);
  _objc_destroyWeak(param_1 + _DAT_112713dd8);
  _objc_destroyWeak(param_1 + _DAT_112713dbc);
  _objc_destroyWeak(param_1 + _DAT_112713d40);
  _objc_destroyWeak(param_1 + _DAT_112713db8);
  _objc_destroyWeak(param_1 + _DAT_112713db4);
  _objc_destroyWeak(param_1 + _DAT_112713d70);
  _objc_destroyWeak(param_1 + _DAT_112713dac);
  _objc_destroyWeak(param_1 + _DAT_112713da8);
  _objc_destroyWeak(param_1 + _DAT_112713d2c);
  _objc_destroyWeak(param_1 + _DAT_112713d34);
  _objc_destroyWeak(param_1 + _DAT_112713d5c);
  _objc_destroyWeak(param_1 + _DAT_112713d80);
  _objc_destroyWeak(param_1 + _DAT_112713d6c);
  _objc_destroyWeak(param_1 + _DAT_112713d38);
  _objc_destroyWeak(param_1 + _DAT_112713da0);
  _objc_destroyWeak(param_1 + _DAT_112713d94);
  _objc_destroyWeak(param_1 + _DAT_112713d90);
  _objc_destroyWeak(param_1 + _DAT_112713dd0);
  _objc_destroyWeak(param_1 + _DAT_112713db0);
  _objc_destroyWeak(param_1 + _DAT_112713d84);
  _objc_destroyWeak(param_1 + _DAT_112713d30);
  _objc_destroyWeak(param_1 + _DAT_112713d68);
  _objc_destroyWeak(param_1 + _DAT_112713d3c);
  _objc_destroyWeak(param_1 + _DAT_112713d98);
  _objc_destroyWeak(param_1 + _DAT_112713d64);
  _objc_destroyWeak(param_1 + _DAT_112713d54);
  _objc_destroyWeak(param_1 + _DAT_112713d74);
  _objc_destroyWeak(param_1 + _DAT_112713ddc);
  _objc_destroyWeak(param_1 + _DAT_112713da4);
  _objc_destroyWeak(param_1 + _DAT_112713d4c);
  _objc_destroyWeak(param_1 + _DAT_112713d60);
  _objc_storeStrong(param_1 + _DAT_112713d50,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112713dd4);
  return;
}



/* Entry: 104e278c4; end: 104e287fb; -[SCActivityFeedViewController initWithUserSession:profileId:valdiRuntimeProvider:activityFeedScopeDelegate:grpcServiceFactory:businessProfileAndUserData:conversationManager:conversationIdResolver:conversationDataUpdateAnnouncer:bitmojiSelfieFetcher:composerAnimatedImageViewFactory:chatPresenter:alertPresenter:myStoriesStore:blizzardLogger:snapInsightsScopeExposer:snapRepostMentionScopeExposer:actionSheetPresenterFactory:navigationDelegate:deepLinkHandler:deepLinkSendToScopeExposer:webBrowserScopeExposer:safeBrowsingAPI:spotlightRepliesRequestSender:reportPagePresenter:blockedUserStore:friendsFeedEntryStore:ourStoryDeepLinkScopeExposer:safetyReportScopeExposer:spotlightRepliesUpdateAnnouncer:snapIdFromPushNotification:onLoadEventId:notificationType:payoutsPresenterProvider:addToStoryCameraScopeLauncher:addToStoryCameraScopeBuilder:networkingClient:circumstanceEngine:storyPlayerCreator:featureSettingsService:storiesNetworkRequester:networkConnectivityMonitor:pageLauncherServices:composerPeopleBridgeFriendServices:adRenderDataParser:sourceType:memoriesPickerScopeExposer:memoriesPickerV2ScopeServices:bellIconLastSeenTimestamp:bellIconIsBadged:spotlightSubmissionScopeExposer:spotlightSubmissionScopeServices:creatorInfoProvider:chatReactionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104e278c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                    undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                    undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                    undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                    undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                    long param_33,long param_34,undefined8 param_35,undefined8 param_36,
                    undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                    undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                    undefined8 param_45,long param_46,undefined8 param_47,undefined8 param_48,
                    undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                    undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
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
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_55);
  _objc_retain(param_56);
  puVar1 = PTR_PTR_1126b0e38;
  _objc_alloc();
  uVar10 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdddc20(param_1);
  uVar21 = param_8;
  func_0x00010bf25080(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2c3e0();
  func_0x00010c03af60();
  _objc_release(uVar21);
  _objc_release(uVar10);
  uVar10 = param_8;
  func_0x00010bf63640(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1744e0(puVar1);
  _objc_release(uVar10);
  func_0x00010c1d2960(puVar1);
  func_0x00010c204680(puVar1);
  func_0x00010c1ce740(puVar1);
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar10 = param_42;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c157440();
  func_0x00010c0df6e0(puVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a6b80(puVar1);
  _objc_release(puVar22);
  _objc_release(uVar10);
  func_0x00010c207200(puVar1);
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000108f4841c(param_40,0);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1af580(puVar1);
  _objc_release(puVar22);
  func_0x00010c16fda0(puVar1);
  func_0x00010c16fd80(puVar1);
  puVar2 = PTR_PTR_1126b0e40;
  _objc_alloc();
  func_0x00010c05d1a0();
  puVar3 = PTR_PTR_1126b0e48;
  _objc_alloc();
  func_0x00010c061900();
  uVar10 = param_5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar10;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  puVar5 = PTR_PTR_1126afe50;
  _objc_alloc();
  func_0x00010c040b80();
  func_0x00010c1c1bc0();
  puVar6 = PTR_PTR_1126b0e50;
  _objc_alloc();
  func_0x00010c048100();
  uVar10 = param_41;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar10;
  func_0x00010bf56860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  func_0x00010c1e1580(uVar7);
  puVar8 = PTR_PTR_1126b0e58;
  _objc_alloc();
  func_0x00010c048500();
  uVar10 = param_20;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010c0b7620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  lVar24 = (long)_DAT_112713de4;
  _objc_retain(param_31);
  uVar10 = *(undefined8 *)(param_1 + lVar24);
  *(undefined8 *)(param_1 + lVar24) = param_31;
  _objc_release(uVar10);
  puVar22 = PTR_PTR_1126b0e60;
  _objc_alloc();
  func_0x00010c04b4a0();
  uVar10 = *(undefined8 *)(param_1 + _DAT_112713de8);
  *(undefined **)(param_1 + _DAT_112713de8) = puVar22;
  _objc_release(uVar10);
  puVar11 = PTR_PTR_1126b0e68;
  _objc_alloc();
  func_0x00010c02e980();
  puVar12 = PTR_PTR_1126b0e70;
  _objc_alloc();
  func_0x00010c03e760();
  uVar13 = param_36;
  func_0x00010c0f6b60();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126b0e78;
  _objc_alloc();
  func_0x00010c061700();
  lVar25 = (long)_DAT_112713dec;
  _objc_retain(param_45);
  uVar10 = *(undefined8 *)(param_1 + lVar25);
  *(undefined8 *)(param_1 + lVar25) = param_45;
  _objc_release(uVar10);
  puVar15 = PTR_PTR_1126b0c98;
  _objc_alloc();
  func_0x00010c0368e0();
  lVar24 = param_46;
  func_0x00010bfb8b80();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar24;
  (**(code **)(lVar24 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  _objc_release(lVar24);
  puVar18 = PTR_PTR_1126aff58;
  _objc_alloc();
  func_0x00010c038f60();
  puVar19 = PTR_PTR_1126b0e80;
  _objc_alloc(PTR_PTR_1126b0e80);
  uVar10 = param_8;
  func_0x00010bf25000(param_8);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar10;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0585e0(puVar19);
  _objc_release(uVar21);
  _objc_release(uVar10);
  puVar20 = PTR_PTR_1126b0e88;
  _objc_alloc();
  uVar10 = param_7;
  func_0x00010c269d40(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0196a0();
  _objc_release(uVar10);
  func_0x00010c17ade0(puVar20);
  func_0x00010c1e6d80(puVar20);
  uVar10 = param_13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167ec0(puVar20);
  _objc_release(uVar10);
  func_0x00010c1cba60(puVar20);
  func_0x00010c166b20(puVar20);
  func_0x00010c171b20(puVar20);
  func_0x00010c204880(puVar20);
  func_0x00010c204e60(puVar20);
  func_0x00010c161e00(puVar20);
  func_0x00010c21d360(puVar20);
  func_0x00010c208580(puVar20);
  func_0x00010c21f160(puVar20);
  func_0x00010c171da0(puVar20);
  func_0x00010c1d9e80(puVar20);
  func_0x00010c1768a0(puVar20);
  uVar10 = param_39;
  func_0x00010c269d40(param_39);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cc960(puVar20);
  _objc_release(uVar10);
  lVar24 = param_1;
  func_0x00010bdf31e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fd700(puVar20);
  _objc_release(lVar24);
  func_0x00010c20d600(puVar20);
  puVar22 = PTR_PTR_1126b0e90;
  _objc_alloc();
  uVar10 = param_42;
  func_0x00010c269d40(param_42);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011c80();
  func_0x00010c20fd40(puVar20);
  _objc_release(puVar22);
  _objc_release(uVar10);
  func_0x00010c1a0100(puVar20);
  uVar21 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c0f14e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar21;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d83e0(puVar20);
  _objc_release(uVar10);
  _objc_release(uVar21);
  func_0x00010c1c4ea0(puVar20);
  uVar10 = param_56;
  func_0x00010bf44980(param_56);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17bb40(puVar20);
  _objc_release(uVar21);
  _objc_release(uVar10);
  _objc_initWeak(auStack_80,param_1);
  puVar22 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104e287fc;
  puStack_90 = &UNK_1108434b0;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010c1d2040(puVar20);
  puStack_d8 = puVar22;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x104e28828;
  puStack_c0 = &UNK_110841fb0;
  _objc_copyWeak(auStack_b0,auStack_80);
  _objc_retain(param_4);
  uStack_b8 = param_4;
  func_0x00010c1d2840(puVar20);
  puVar22 = PTR_PTR_1126b0e98;
  _objc_alloc();
  func_0x00010c061d40();
  lVar24 = (long)_DAT_112713df0;
  uVar10 = *(undefined8 *)(param_1 + lVar24);
  *(undefined **)(param_1 + lVar24) = puVar22;
  _objc_release(uVar10);
  puStack_e0 = PTR_PTR_1126e46c8;
  plVar23 = &lStack_e8;
  lStack_e8 = param_1;
  _objc_msgSendSuper2(plVar23,PTR_s_initWithValdiView__1125f5a88,*(undefined8 *)(param_1 + lVar24));
  if (plVar23 != (long *)0x0) {
    puVar22 = PTR_PTR_1126b0ea0;
    _objc_alloc_init();
    lVar24 = (long)_DAT_112713df4;
    uVar10 = *(undefined8 *)((long)plVar23 + lVar24);
    *(undefined **)((long)plVar23 + lVar24) = puVar22;
    _objc_release(uVar10);
    func_0x00010bf77520(*(undefined8 *)((long)plVar23 + lVar24));
    func_0x00010c189400(plVar23);
    _objc_storeWeak((long)plVar23 + (long)_DAT_112713df8,param_6);
    lVar24 = (long)_DAT_112713dfc;
    _objc_retain(param_33);
    uVar10 = *(undefined8 *)((long)plVar23 + lVar24);
    *(long *)((long)plVar23 + lVar24) = param_33;
    _objc_release(uVar10);
    lVar24 = (long)_DAT_112713e00;
    _objc_retain(param_40);
    uVar10 = *(undefined8 *)((long)plVar23 + lVar24);
    *(undefined8 *)((long)plVar23 + lVar24) = param_40;
    _objc_release(uVar10);
    *(bool *)((long)plVar23 + (long)_DAT_112713e04) = param_33 != 0 && param_34 != 0;
  }
  _objc_release(uStack_b8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(lVar17);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
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
  return plVar23;
}



/* Entry: 104e287fc; end: 104e288eb;  */

void FUN_104e287fc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6bda0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e288ec; end: 104e2893f; -[SCActivityFeedViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e288ec(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29cae0(*(undefined8 *)(param_1 + _DAT_112713df4),param_2,param_1);
  puStack_28 = PTR_PTR_1126e46c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  return;
}



/* Entry: 104e28940; end: 104e289a7; -[SCActivityFeedViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e28940(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29e740(*(undefined8 *)(param_1 + _DAT_112713df4),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_1126e46c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0,param_3);
  func_0x00010c1cbec0(param_1);
  return;
}



/* Entry: 104e289a8; end: 104e28a17; -[SCActivityFeedViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e289a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29c6c0(*(undefined8 *)(param_1 + _DAT_112713df4),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_1126e46c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0,param_3);
  func_0x00010c1cbec0(param_1);
  func_0x00010be2e960(param_1);
  return;
}



/* Entry: 104e28a18; end: 104e28a77; -[SCActivityFeedViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e28a18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29e860(*(undefined8 *)(param_1 + _DAT_112713df4),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_1126e46c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438,param_3);
  return;
}



/* Entry: 104e28a78; end: 104e28ad7; -[SCActivityFeedViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e28a78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29c8a0(*(undefined8 *)(param_1 + _DAT_112713df4),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_1126e46c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48,param_3);
  return;
}



/* Entry: 104e28ad8; end: 104e28b8b; -[SCActivityFeedViewController setNeedsStatusBarAppearanceUpdate] */

void FUN_104e28ad8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e46c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc80(puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1070e0(param_1);
  func_0x00010c14dc40(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 104e28b8c; end: 104e28c1b; -[SCActivityFeedViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e28b8c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010c2a5e40(*(undefined8 *)(param_1 + _DAT_112713df4),param_2,param_1);
  lVar2 = (long)_DAT_112713df8;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar2 = param_1 + lVar2;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bef1520();
    _objc_release(lVar2);
  }
  puStack_38 = PTR_PTR_1126e46c8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104e28c1c; end: 104e28c8f; -[SCActivityFeedViewController beginAppearanceTransition:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e28c1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010bf17b20(*(undefined8 *)(param_1 + _DAT_112713df4),param_2,param_1,param_3,param_4);
  puStack_38 = PTR_PTR_1126e46c8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_beginAppearanceTransition_animat_1125a3868,param_3,param_4);
  return;
}



/* Entry: 104e28c90; end: 104e28ce3; -[SCActivityFeedViewController endAppearanceTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e28c90(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf941c0(*(undefined8 *)(param_1 + _DAT_112713df4),param_2,param_1);
  puStack_28 = PTR_PTR_1126e46c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_endAppearanceTransition_1125c2a10);
  return;
}



/* Entry: 104e28ce4; end: 104e28d5f; -[SCActivityFeedViewController willMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e28ce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713df4);
  _objc_retain(param_3);
  func_0x00010c2a6760(uVar1);
  puStack_38 = PTR_PTR_1126e46c8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_willMoveToParentViewController__1126873f8,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 104e28d60; end: 104e28ddb; -[SCActivityFeedViewController didMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e28d60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713df4);
  _objc_retain(param_3);
  func_0x00010bf77ea0(uVar1);
  puStack_38 = PTR_PTR_1126e46c8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_didMoveToParentViewController__1125bb948,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 104e28ddc; end: 104e28de3; -[SCActivityFeedViewController shouldDismissViewControllerWhenEnterBackground] */

undefined8 FUN_104e28ddc(void)

{
  return 0;
}



/* Entry: 104e28de4; end: 104e28deb; -[SCActivityFeedViewController shouldDismissViewControllerLater] */

undefined8 FUN_104e28de4(void)

{
  return 1;
}



/* Entry: 104e28dec; end: 104e28df3; -[SCActivityFeedViewController shouldPopToRootViewController] */

undefined8 FUN_104e28dec(void)

{
  return 0;
}



/* Entry: 104e28df4; end: 104e28dfb; -[SCActivityFeedViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_104e28df4(void)

{
  return 1;
}



/* Entry: 104e28dfc; end: 104e28e03; -[SCActivityFeedViewController viewControllerPrefersSelfDismiss] */

undefined8 FUN_104e28dfc(void)

{
  return 1;
}



/* Entry: 104e28e04; end: 104e28e67; -[SCActivityFeedViewController viewControllerDismissSelf] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e28e04(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713df8;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + lVar2;
    _objc_loadWeakRetained(param_1);
    func_0x00010bef1540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}


