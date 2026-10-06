/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052c7f2c; end: 1052c7f6f; -[SCAudioSessionCore preferredSampleRate] */

undefined8 FUN_1052c7f2c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106e00();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1052c7f70; end: 1052c7fab; -[SCAudioSessionCore inputNumberOfChannels] */

undefined8 FUN_1052c7f70(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c065d00();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1052c7fac; end: 1052c7fe7; -[SCAudioSessionCore outputNumberOfChannels] */

undefined8 FUN_1052c7fac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0eef60();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1052c7fe8; end: 1052c8033; -[SCAudioSessionCore setOutputVolume:] */

void FUN_1052c7fe8(float param_1,undefined8 param_2)

{
  float fVar1;
  
  fVar1 = 0.99999;
  if (param_1 <= 0.99999) {
    fVar1 = param_1;
  }
  func_0x00010bfe1540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(fVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1052c8034; end: 1052c8077; -[SCAudioSessionCore inputLatency] */

undefined8 FUN_1052c8034(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c065c40();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1052c8078; end: 1052c80bb; -[SCAudioSessionCore outputLatency] */

undefined8 FUN_1052c8078(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eee80();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1052c80bc; end: 1052c80ff; -[SCAudioSessionCore IOBufferDuration] */

undefined8 FUN_1052c80bc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1740();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1052c8100; end: 1052c8143; -[SCAudioSessionCore preferredIOBufferDuration] */

undefined8 FUN_1052c8100(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106be0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1052c8144; end: 1052c8197; -[SCAudioSessionCore setInputGain:error:] */

undefined8 FUN_1052c8144(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c1ad3c0(param_1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1052c8198; end: 1052c81eb; -[SCAudioSessionCore setPreferredSampleRate:error:] */

undefined8 FUN_1052c8198(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c1e02a0(param_1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1052c81ec; end: 1052c823f; -[SCAudioSessionCore setPreferredIOBufferDuration:error:] */

undefined8 FUN_1052c81ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c1e0020(param_1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1052c8240; end: 1052c8293; -[SCAudioSessionCore setPreferredInputNumberOfChannels:error:] */

undefined8 FUN_1052c8240(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1e00a0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1052c8294; end: 1052c82e7; -[SCAudioSessionCore setPreferredOutputNumberOfChannels:error:] */

undefined8 FUN_1052c8294(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1e01c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1052c82e8; end: 1052c833b; -[SCAudioSessionCore overrideOutputAudioPort:error:] */

undefined8 FUN_1052c82e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f0320();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1052c833c; end: 1052c83a7; -[SCAudioSessionCore setPreferredInput:error:] */

undefined8 FUN_1052c833c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c15fac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1e0080();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1052c83a8; end: 1052c8413; -[SCAudioSessionCore setInputDataSource:error:] */

undefined8 FUN_1052c83a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c15fac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1ad2e0();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1052c8414; end: 1052c847f; -[SCAudioSessionCore setOutputDataSource:error:] */

undefined8 FUN_1052c8414(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c15fac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1d6f80();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1052c8480; end: 1052c848b; -[SCAudioSessionCore requestRecordPermission:] */

void FUN_1052c8480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c136430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_requestRecordPermissionWithLoggi_11262b328,1,param_3);
  return;
}



/* Entry: 1052c848c; end: 1052c85b3; -[SCAudioSessionCore requestRecordPermissionWithLogging:permissionBlock:] */

void FUN_1052c848c(ulong param_1,undefined8 param_2,int param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,1);
    }
  }
  else {
    if (param_3 != 0) {
      func_0x00010c1238e0();
    }
    func_0x00010c15fac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010c136400(param_1);
    _objc_release(param_1);
    _objc_release(param_4);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1052c85b4; end: 1052c865b;  */

void FUN_1052c85b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    puVar1 = PTR_PTR_1126b6df0;
    _objc_alloc_init(PTR_PTR_1126b6df0);
    func_0x00010c1dab80();
    func_0x00010c160cc0(puVar1);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b29e0();
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001052c8648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x10))(lVar3,param_2);
    return;
  }
  return;
}



/* Entry: 1052c865c; end: 1052c86ff; -[SCAudioSessionCore isPlayingSound] */

bool FUN_1052c865c(float param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  
  if (*(char *)(param_2 + 0x39) == '\x01') {
    uVar1 = param_2;
    func_0x00010c15fac0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf33240();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010be3ec00(param_2,param_3,uVar2);
    if ((uVar3 & 1) == 0) {
      func_0x00010c0ef220(param_2);
      bVar4 = 0.0 < param_1;
    }
    else {
      bVar4 = false;
    }
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    func_0x00010c0ef220(param_2);
    bVar4 = 0.0 < param_1;
  }
  return bVar4;
}



/* Entry: 1052c8700; end: 1052c8707; -[SCAudioSessionCore setIsOverridingMuteSwitch:] */

void FUN_1052c8700(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 1052c8708; end: 1052c879b; -[SCAudioSessionCore checkIsPlayingSoundWithCompletion:] */

void FUN_1052c8708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b6df8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1052c879c;
  puStack_48 = &UNK_110875d40;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf384e0(puVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1052c879c; end: 1052c87d7;  */

void FUN_1052c879c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  *(bool *)(*(long *)(param_1 + 0x20) + 0x39) = param_2 == 1;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c07a4e0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001052c87d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  return;
}



/* Entry: 1052c87d8; end: 1052c88db; -[SCAudioSessionCore checkStatusWithCallbackPerformer:callback:] */

void FUN_1052c87d8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b6df8;
  if ((param_3 != 0) || (param_4 == 0)) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1052c88dc;
    puStack_60 = &UNK_110875d70;
    _objc_retain(param_4);
    lStack_48 = param_4;
    _objc_retain(param_3);
    lStack_58 = param_3;
    uStack_50 = param_1;
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf38500(puVar1,param_2,&puStack_78,uVar2);
    _objc_release(uVar2);
    _objc_release(param_1);
    _objc_release(lStack_58);
    _objc_release(lStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1052c88dc; end: 1052c88ff;  */

void FUN_1052c88dc(long param_1,long param_2)

{
  if ((*(long *)(param_1 + 0x30) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdff9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s__didReceiveSecretFeatureOn_perfo_11255d808,
               param_2 == 1);
    return;
  }
  return;
}



/* Entry: 1052c8900; end: 1052c8a27; -[SCAudioSessionCore _didReceiveSecretFeatureOn:performer:callback:] */

void FUN_1052c8900(long param_1,undefined8 param_2,int param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  byte bStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    *(char *)(param_1 + 0x39) = (char)param_3;
    if (param_3 == 0) {
      bVar4 = 0;
    }
    else {
      lVar1 = param_1;
      func_0x00010c15fac0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf33240();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010be3ec00(param_1,param_2,lVar2);
      bVar4 = (byte)lVar3 ^ 1;
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_1;
    func_0x00010c07a4e0();
    func_0x00010c2940a0();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1052c8a28;
    puStack_58 = &UNK_110875da0;
    _objc_retain(param_5);
    uStack_47 = (undefined1)lVar1;
    uStack_46 = (undefined1)param_1;
    lStack_50 = param_5;
    bStack_48 = bVar4;
    func_0x00010c0f7fc0(param_4,param_2,&puStack_70);
    _objc_release(lStack_50);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1052c8a28; end: 1052c8a43;  */

void FUN_1052c8a28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001052c8a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28),
             *(undefined1 *)(param_1 + 0x29),*(undefined1 *)(param_1 + 0x2a));
  return;
}



/* Entry: 1052c8a44; end: 1052c8aeb; -[SCAudioSessionCore currentAudioStateWithCompletion:] */

void FUN_1052c8a44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1052c8aec;
  puStack_40 = &UNK_110875dd0;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf385a0(param_1,param_2,uVar1,&puStack_58);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1052c8aec; end: 1052c8b17;  */

void FUN_1052c8aec(long param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 3;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  if (param_3 == 0) {
    uVar1 = 1;
  }
  uVar2 = 2;
  if (param_4 == 0) {
    uVar2 = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001052c8b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar2);
  return;
}



/* Entry: 1052c8b18; end: 1052c8beb; -[SCAudioSessionCore setVolumeHUDEnabled:] */

void FUN_1052c8b18(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if (param_3 == 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c14cac0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf51e00();
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      *(undefined **)(param_1 + 0x28) = puVar4;
      _objc_release(uVar1);
      _objc_release(puVar3);
      _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bea25b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setBounds_112586310);
      return;
    }
  }
  else if (*(long *)(param_1 + 0x28) != 0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14ca80();
    _objc_release(puVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1052c8bec; end: 1052c8bfb; -[SCAudioSessionCore volumeHUDEnabled] */

bool FUN_1052c8bec(long param_1)

{
  return *(long *)(param_1 + 0x28) == 0;
}



/* Entry: 1052c8bfc; end: 1052c8c37; -[SCAudioSessionCore isOtherAudioPlaying] */

undefined8 FUN_1052c8bfc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c079600();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1052c8c38; end: 1052c8dab; -[SCAudioSessionCore userUsingHeadphones] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x0001052c8cd0 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

long FUN_1052c8c38(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf5fe60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c0ef240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010bf51e00();
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_retain(lVar2);
  lVar6 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar3 = *(ulong *)(lVar8 * 8);
      func_0x00010c104100();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      if ((uVar4 & 1) != 0) {
        lVar6 = 1;
        goto LAB_1052c8d60;
      }
      lVar8 = lVar8 + 1;
    } while (lVar6 != lVar8);
    lVar6 = lVar2;
    func_0x00010bf52a60();
  }
  lVar6 = 0;
LAB_1052c8d60:
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return lVar6;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf5fe60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c0ef240();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x00010bf51e00();
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  lVar6 = 0;
  if (lVar2 != 0) {
    do {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        uVar7 = *(undefined8 *)(lVar6 * 8);
        if (lRam00000001136ba2b0 != -1) {
          func_0x00010002a2fc(&lRam00000001136ba2b0,&PTR___NSConcreteGlobalBlock_110875cf0);
        }
        uVar4 = uRam00000001136ba2a8;
        _objc_retain(uRam00000001136ba2a8);
        func_0x00010c104100();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        func_0x00010bf4b900();
        _objc_release(uVar7);
        _objc_release(uVar4);
        if ((uVar3 & 1) != 0) {
          lVar6 = 1;
          goto LAB_1052c8f18;
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar5;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    lVar6 = 0;
  }
LAB_1052c8f18:
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return lVar6;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf5fe60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0ef240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010bf51e00();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_retain(lVar2);
  lVar6 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar6 == 0) {
      lVar6 = 0;
LAB_1052c9090:
      _objc_release(lVar2);
      _objc_release(lVar2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
        return lVar6;
      }
      ___stack_chk_fail();
      lVar6 = lVar2;
      func_0x00010bf5fe60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be3e060(lVar2);
      _objc_release(lVar6);
      return lVar2;
    }
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar3 = *(ulong *)(lVar5 * 8);
      func_0x00010c104100();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      if ((uVar4 & 1) != 0) {
        lVar6 = 1;
        goto LAB_1052c9090;
      }
      lVar5 = lVar5 + 1;
    } while (lVar6 != lVar5);
    lVar6 = lVar2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1052c8dac; end: 1052c8f67; -[SCAudioSessionCore userUsingBluetoothOutput] */

long FUN_1052c8dac(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf5fe60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c0ef240();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010bf51e00();
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_retain(lVar8);
  lVar2 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  lVar6 = 0;
  if (lVar2 != 0) {
    do {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar8);
        }
        uVar7 = *(undefined8 *)(lVar6 * 8);
        if (lRam00000001136ba2b0 != -1) {
          func_0x00010002a2fc(0x1136ba2b0,&PTR___NSConcreteGlobalBlock_110875cf0);
        }
        uVar4 = uRam00000001136ba2a8;
        _objc_retain(uRam00000001136ba2a8);
        func_0x00010c104100();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        func_0x00010bf4b900();
        _objc_release(uVar7);
        _objc_release(uVar4);
        if ((uVar3 & 1) != 0) {
          lVar6 = 1;
          goto LAB_1052c8f18;
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar8;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    lVar6 = 0;
  }
LAB_1052c8f18:
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return lVar6;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf5fe60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar8;
  func_0x00010c0ef240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010bf51e00();
  _objc_release(lVar6);
  _objc_release(lVar8);
  _objc_retain(lVar2);
  lVar6 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar6 == 0) {
      lVar6 = 0;
LAB_1052c9090:
      _objc_release(lVar2);
      _objc_release(lVar2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
        return lVar6;
      }
      ___stack_chk_fail();
      lVar6 = lVar2;
      func_0x00010bf5fe60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be3e060(lVar2);
      _objc_release(lVar6);
      return lVar2;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar3 = *(ulong *)(lVar8 * 8);
      func_0x00010c104100();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      if ((uVar4 & 1) != 0) {
        lVar6 = 1;
        goto LAB_1052c9090;
      }
      lVar8 = lVar8 + 1;
    } while (lVar6 != lVar8);
    lVar6 = lVar2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1052c8f68; end: 1052c90db; -[SCAudioSessionCore userUsingCarPlay] */

long FUN_1052c8f68(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf5fe60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c0ef240();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010bf51e00();
  _objc_release(lVar6);
  _objc_release(param_1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain(lVar1);
  lVar6 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar6 != 0) {
    lVar7 = *plStack_110;
    puVar5 = *(undefined1 **)PTR__AVAudioSessionPortCarAudio_11034cee0;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        uVar2 = *(ulong *)(lStack_118 + lVar8 * 8);
        func_0x00010c104100();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        puVar4 = (undefined8 *)puVar5;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) {
          lVar6 = 1;
          goto LAB_1052c9090;
        }
        lVar8 = lVar8 + 1;
      } while (lVar6 != lVar8);
      lVar6 = lVar1;
      puVar4 = &uStack_120;
      func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar6 != 0);
  }
  lVar6 = 0;
LAB_1052c9090:
  _objc_release(lVar1);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar6;
  }
  ___stack_chk_fail();
  lVar6 = lVar1;
  func_0x00010bf5fe60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3e060(lVar1,param_2,lVar6,puVar4);
  _objc_release(lVar6);
  return lVar1;
}



/* Entry: 1052c90dc; end: 1052c9133; -[SCAudioSessionCore isAirPodsConnecting:] */

undefined8 FUN_1052c90dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf5fe60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3e060(param_1,param_2,uVar1,param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1052c9134; end: 1052c918b; -[SCAudioSessionCore isAirPodsDisconnecting:] */

undefined8 FUN_1052c9134(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c112840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3e060(param_1,param_2,uVar1,param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1052c918c; end: 1052c9333; -[SCAudioSessionCore _isAirPodsAudioSessionRoute:useNameHint:] */

long FUN_1052c918c(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
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
  func_0x00010c0ef240();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf51e00();
  _objc_release(param_3);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(lVar1);
  lVar4 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar4 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(lVar1);
        }
        uVar5 = *(ulong *)(lStack_128 + lVar7 * 8);
        uVar2 = uVar5;
        func_0x00010c104100();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((int)uVar3 != 0) {
          if (param_4 != 0) {
            func_0x00010c1040e0();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar5;
            func_0x00010bf4bb00();
            _objc_release(uVar5);
            if ((uVar2 & 1) == 0) goto LAB_1052c92b0;
          }
          lVar4 = 1;
          goto LAB_1052c92e4;
        }
LAB_1052c92b0:
        lVar7 = lVar7 + 1;
      } while (lVar4 != lVar7);
      lVar4 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar4 != 0);
  }
  lVar4 = 0;
LAB_1052c92e4:
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return lVar4;
  }
  ___stack_chk_fail();
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(lVar1);
  return lVar1;
}



/* Entry: 1052c9334; end: 1052c93ff; -[SCAudioSessionCore resetAudioInputPortLocationOrientationPolarPattern] */

void FUN_1052c9334(undefined8 param_1)

{
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 1052c9400; end: 1052c9407; -[SCAudioSessionCore setAudioInputPortWithLocation:orientation:polarPattern:] */

void FUN_1052c9400(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16bd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAudioInputPortWithLocation_or_112638978);
  return;
}



/* Entry: 1052c9408; end: 1052c952b; -[SCAudioSessionCore setAudioInputPortWithLocation:orientation:polarPattern:completion:] */

void FUN_1052c9408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1052c952c;
  puStack_70 = &UNK_110852488;
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  uStack_50 = param_1;
  uStack_48 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_88);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1052c952c; end: 1052c97a7;  */

/* WARNING: Removing unreachable block (ram,0x0001052c971c) */

ulong FUN_1052c952c(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_1 + 0x38);
  func_0x00010bdd6fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf646e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar8 == 0) {
      uVar11 = 0;
LAB_1052c9738:
      uVar5 = 0;
      _objc_release(lVar4);
      lVar8 = *(long *)(param_1 + 0x40);
      if (lVar8 != 0) {
        (**(code **)(lVar8 + 0x10))(lVar8,uVar11,0);
      }
      _objc_release(lVar3);
      _objc_release(0);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
        ___stack_chk_fail();
        func_0x00010c15fac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        return (ulong)(uVar5 == 0);
      }
      return uVar5;
    }
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      uVar10 = *(ulong *)(lVar12 * 8);
      uVar5 = uVar10;
      func_0x00010c09ea00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0720c0();
      if ((uVar6 & 1) == 0) {
        _objc_release(uVar5);
      }
      else {
        uVar6 = uVar10;
        func_0x00010c0ed100();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c0720c0();
        _objc_release(uVar6);
        _objc_release(uVar5);
        if ((int)uVar7 != 0) {
          uVar5 = uVar10;
          func_0x00010c263220();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf4b900();
          _objc_release(uVar5);
          if ((int)uVar6 == 0) {
            iVar2 = 0;
          }
          else {
            func_0x00010c1e0240();
            iVar2 = (int)uVar10;
            _objc_retain(0);
          }
          lVar8 = lVar3;
          func_0x00010c1dfee0();
          _objc_retain(0);
          uVar11 = 0;
          if (((int)lVar8 != 0) && (iVar2 != 0)) {
            uVar11 = *(undefined8 *)(param_1 + 0x38);
            func_0x00010c1e0080();
            _objc_retain(0);
          }
          _objc_retain(0);
          _objc_release(0);
          _objc_release(0);
          goto LAB_1052c9738;
        }
      }
      lVar12 = lVar12 + 1;
    } while (lVar8 != lVar12);
    lVar8 = lVar4;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1052c97a8; end: 1052c97db; -[SCAudioSessionCore noSoundCheckAudioSessionIsNil] */

bool FUN_1052c97a8(long param_1)

{
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 == 0;
}



/* Entry: 1052c97dc; end: 1052c9873; -[SCAudioSessionCore selectedDataSourceName] */

void FUN_1052c97dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf5fe60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c066460();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar1 = uVar2;
  func_0x00010c159540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf645c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1052c9874; end: 1052c99cb; -[SCAudioSessionCore _builtInMicPort] */

/* WARNING: Type propagation algorithm not settling */

void FUN_1052c9874(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined *puStack_308;
  undefined8 uStack_300;
  code *pcStack_2f8;
  undefined *puStack_2f0;
  undefined **ppuStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined1 **ppuStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined1 *puStack_2a0;
  long lStack_298;
  long lStack_290;
  long alStack_288 [3];
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined *puStack_230;
  undefined **ppuStack_228;
  undefined1 auStack_220 [128];
  long lStack_1a0;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar12 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf12720();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain();
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar17 = *plStack_120;
    puVar14 = *(undefined1 **)PTR__AVAudioSessionPortBuiltInMic_11034cec8;
    do {
      lVar18 = 0;
      do {
        if (*plStack_120 != lVar17) {
          _objc_enumerationMutation(param_1);
        }
        puVar16 = *(undefined **)(lStack_128 + lVar18 * 8);
        puVar3 = puVar16;
        func_0x00010c104100();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        puVar12 = (undefined8 *)puVar14;
        func_0x00010c0720c0();
        _objc_release(puVar3);
        if ((int)puVar4 != 0) {
          _objc_retain(puVar16);
          goto LAB_1052c997c;
        }
        lVar18 = lVar18 + 1;
      } while (lVar2 != lVar18);
      lVar2 = param_1;
      puVar12 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  puVar16 = (undefined *)0x0;
LAB_1052c997c:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_138 = FUN_1052c99cc;
    lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_140 = &stack0xfffffffffffffff0;
    func_0x00010bdd6fc0();
    _objc_retainAutoreleasedReturnValue();
    alStack_288[2] = 0;
    alStack_288[1] = 0;
    uStack_268 = 0;
    plStack_270 = (long *)0x0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    lVar2 = param_1;
    func_0x00010bf646e0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar2;
    func_0x00010bf52a60();
    if (lVar17 != 0) {
      lVar18 = *plStack_270;
      puStack_2a0 = (undefined1 *)puVar12;
      lStack_298 = param_1;
      do {
        lVar15 = 0;
        do {
          if (*plStack_270 != lVar18) {
            _objc_enumerationMutation(lVar2);
          }
          uVar19 = *(ulong *)(alStack_288[2] + lVar15 * 8);
          uVar5 = uVar19;
          func_0x00010c09ea00();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c0720c0();
          if ((uVar6 & 1) == 0) {
            _objc_release(uVar5);
          }
          else {
            uVar6 = uVar19;
            func_0x00010c0ed100();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            func_0x00010c0720c0();
            _objc_release(uVar6);
            _objc_release(uVar5);
            if ((int)uVar7 != 0) {
              alStack_288[0] = 0;
              func_0x00010c1e0240(uVar19,param_2,
                                  *(undefined8 *)
                                   PTR__AVAudioSessionPolarPatternOmnidirectional_11034cea0,
                                  alStack_288);
              lVar18 = alStack_288[0];
              _objc_retain(alStack_288[0]);
              lStack_290 = 0;
              func_0x00010c1dfee0(lStack_298,param_2,uVar19,&lStack_290);
              lVar17 = lStack_290;
              _objc_retain(lStack_290);
              ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
              bVar1 = lVar17 == 0 && lVar18 == 0;
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puStack_2a0);
              _objc_retainAutoreleasedReturnValue();
              puStack_2c0 = puVar3;
              if (lVar17 == 0 && lVar18 == 0) {
                func_0x00010c14de00(ppuVar11,param_2,
                                    &PTR____CFConstantStringClassReference_110dcf1f8);
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                lVar15 = lVar17;
                func_0x00010c292820();
                _objc_retainAutoreleasedReturnValue();
                lVar8 = lVar15;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                lVar9 = lVar18;
                func_0x00010c292820();
                _objc_retainAutoreleasedReturnValue();
                lVar10 = lVar9;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                lStack_2b8 = lVar8;
                lStack_2b0 = lVar10;
                func_0x00010c14de00(ppuVar11,param_2,
                                    &PTR____CFConstantStringClassReference_110dcf218);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar10);
                _objc_release(lVar9);
                _objc_release(lVar8);
                _objc_release(lVar15);
              }
              _objc_release(puVar3);
              _objc_release(lVar18);
              _objc_release(lVar17);
              param_1 = lStack_298;
              goto LAB_1052c9c9c;
            }
          }
          lVar15 = lVar15 + 1;
        } while (lVar17 != lVar15);
        lVar17 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,alStack_288 + 1,auStack_220,0x10);
        param_1 = lStack_298;
      } while (lVar17 != 0);
    }
    bVar1 = false;
    ppuVar11 = &PTR____CFConstantStringClassReference_110daafd8;
LAB_1052c9c9c:
    _objc_release(lVar2);
    ppuStack_240 = &PTR____CFConstantStringClassReference_110f78d38;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,bVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_238 = &PTR____CFConstantStringClassReference_110f78d58;
    ppuStack_228 = &PTR____CFConstantStringClassReference_110dcf238;
    if (ppuVar11 != (undefined **)0x0) {
      ppuStack_228 = ppuVar11;
    }
    ppuVar13 = &puStack_230;
    puVar16 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_230 = puVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(param_1);
    _objc_release(ppuVar11);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a0) {
      ___stack_chk_fail();
      pcStack_2c8 = FUN_1052c9d6c;
      puStack_2e0 = puVar16;
      puStack_2d8 = puVar3;
      ppuStack_2d0 = &puStack_140;
      _objc_retain(ppuVar13);
      puStack_308 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_300 = 0xc2000000;
      pcStack_2f8 = FUN_1052c9df0;
      puStack_2f0 = &UNK_110875e00;
      ppuStack_2e8 = ppuVar13;
      _objc_retain(ppuVar13);
      func_0x00010bf66240(ppuVar11,param_2,&puStack_308);
      _objc_release(ppuStack_2e8);
      _objc_release(ppuVar13);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 1052c99cc; end: 1052c9d6b; -[SCAudioSessionCore tryUseFrontMicWithErrorCode:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_1052c99cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  long alStack_158 [3];
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bdd6fc0();
  _objc_retainAutoreleasedReturnValue();
  alStack_158[2] = 0;
  alStack_158[1] = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lVar2 = param_1;
  func_0x00010bf646e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar14 = *plStack_140;
    uStack_170 = param_3;
    lStack_168 = param_1;
    do {
      lVar15 = 0;
      do {
        if (*plStack_140 != lVar14) {
          _objc_enumerationMutation(lVar2);
        }
        uVar16 = *(ulong *)(alStack_158[2] + lVar15 * 8);
        uVar4 = uVar16;
        func_0x00010c09ea00();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c0720c0();
        if ((uVar5 & 1) == 0) {
          _objc_release(uVar4);
        }
        else {
          uVar5 = uVar16;
          func_0x00010c0ed100();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c0720c0();
          _objc_release(uVar5);
          _objc_release(uVar4);
          if ((int)uVar6 != 0) {
            alStack_158[0] = 0;
            func_0x00010c1e0240(uVar16,param_2,
                                *(undefined8 *)
                                 PTR__AVAudioSessionPolarPatternOmnidirectional_11034cea0,
                                alStack_158);
            lVar14 = alStack_158[0];
            _objc_retain(alStack_158[0]);
            lStack_160 = 0;
            func_0x00010c1dfee0(lStack_168,param_2,uVar16,&lStack_160);
            lVar3 = lStack_160;
            _objc_retain(lStack_160);
            ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
            bVar1 = lVar3 == 0 && lVar14 == 0;
            puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uStack_170);
            _objc_retainAutoreleasedReturnValue();
            puStack_190 = puVar7;
            if (lVar3 == 0 && lVar14 == 0) {
              func_0x00010c14de00(ppuVar11,param_2,&PTR____CFConstantStringClassReference_110dcf1f8)
              ;
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              lVar15 = lVar3;
              func_0x00010c292820();
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar15;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              lVar9 = lVar14;
              func_0x00010c292820();
              _objc_retainAutoreleasedReturnValue();
              lVar10 = lVar9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              lStack_188 = lVar8;
              lStack_180 = lVar10;
              func_0x00010c14de00(ppuVar11,param_2,&PTR____CFConstantStringClassReference_110dcf218)
              ;
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar10);
              _objc_release(lVar9);
              _objc_release(lVar8);
              _objc_release(lVar15);
            }
            _objc_release(puVar7);
            _objc_release(lVar14);
            _objc_release(lVar3);
            param_1 = lStack_168;
            goto LAB_1052c9c9c;
          }
        }
        lVar15 = lVar15 + 1;
      } while (lVar3 != lVar15);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,alStack_158 + 1,auStack_f0,0x10);
      param_1 = lStack_168;
    } while (lVar3 != 0);
  }
  bVar1 = false;
  ppuVar11 = &PTR____CFConstantStringClassReference_110daafd8;
LAB_1052c9c9c:
  _objc_release(lVar2);
  ppuStack_110 = &PTR____CFConstantStringClassReference_110f78d38;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,bVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_108 = &PTR____CFConstantStringClassReference_110f78d58;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110dcf238;
  if (ppuVar11 != (undefined **)0x0) {
    ppuStack_f8 = ppuVar11;
  }
  ppuVar13 = &puStack_100;
  puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_100 = puVar7;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(param_1);
  _objc_release(ppuVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_198 = FUN_1052c9d6c;
    puStack_1b0 = puVar12;
    puStack_1a8 = puVar7;
    puStack_1a0 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar13);
    puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1d0 = 0xc2000000;
    pcStack_1c8 = FUN_1052c9df0;
    puStack_1c0 = &UNK_110875e00;
    ppuStack_1b8 = ppuVar13;
    _objc_retain(ppuVar13);
    func_0x00010bf66240(ppuVar11,param_2,&puStack_1d8);
    _objc_release(ppuStack_1b8);
    _objc_release(ppuVar13);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1052c9d6c; end: 1052c9def; -[SCAudioSessionCore debugInfoWithCompletion:] */

void FUN_1052c9d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1052c9df0;
  puStack_30 = &UNK_110875e00;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf66240(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1052c9df0; end: 1052c9e03;  */

void FUN_1052c9df0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001052c9dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1052c9e04; end: 1052ca0db; -[SCAudioSessionCore debugInfoWithUploadInfoCompletion:] */

void FUN_1052c9e04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1052ca0dc;
  uStack_60 = 0x1052ca0ec;
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  puStack_78 = &uStack_80;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = puVar1;
  func_0x00010bf070e0(puStack_78[5]);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1052ca0f4;
  puStack_90 = &UNK_110875e30;
  ppuVar2 = &puStack_a8;
  puStack_88 = &uStack_80;
  _objc_retainBlock();
  uVar3 = param_1;
  func_0x00010c15fac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf33240();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)ppuVar2[2])(ppuVar2,&PTR____CFConstantStringClassReference_110dcef38,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c15fac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf33580();
  uVar4 = param_1;
  func_0x00010be36660(param_1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)ppuVar2[2])(ppuVar2,&PTR____CFConstantStringClassReference_110dcf298,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c15fac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0cfd40();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)ppuVar2[2])(ppuVar2,&PTR____CFConstantStringClassReference_110dcf2b8,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010bf66220(param_1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)ppuVar2[2])(ppuVar2,&PTR____CFConstantStringClassReference_110dcf2d8,uVar3);
  _objc_release(uVar3);
  func_0x00010bf070e0(puStack_78[5]);
  puVar1 = PTR_PTR_1126b6df8;
  _objc_retain(param_3);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf38500(puVar1);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(puStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1052ca0dc; end: 1052ca0f3;  */

void FUN_1052ca0dc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1052ca0f4; end: 1052ca127;  */

void FUN_1052ca0f4(long param_1,undefined8 param_2)

{
  func_0x00010bf06ba0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),param_2,
                      &PTR____CFConstantStringClassReference_110dcf278);
  return;
}



/* Entry: 1052ca128; end: 1052ca14f;  */

void FUN_1052ca128(long param_1,long param_2)

{
  *(bool *)(*(long *)(param_1 + 0x20) + 0x39) = param_2 == 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdf8650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__debugInfoWithInfo_completion__11255bb30,
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1052ca150; end: 1052ca31f; -[SCAudioSessionCore _debugInfoWithInfo:completion:] */

void FUN_1052ca150(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be6e9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0(param_3);
  func_0x00010bf06ba0(param_3);
  func_0x00010c07a4e0();
  func_0x00010bf06ba0(param_3);
  uVar2 = param_1;
  func_0x00010c15fac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ef220();
  func_0x00010bf06ba0(param_3);
  _objc_release(uVar2);
  func_0x00010bf06ba0(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14db60();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c079600(param_1);
  func_0x00010c0df6e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14db60(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,param_3,puVar3);
  }
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052ca320; end: 1052ca57b; -[SCAudioSessionCore debugInfoCurrentRoutes] */

void FUN_1052ca320(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  
  lVar1 = param_1;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c075960();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf5fe60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c066460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be18ae0(param_1,param_2,lVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf5fe60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ef240();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be18ae0(param_1,param_2,lVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf5fe60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c066460();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar5;
  func_0x00010c159540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf645c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar6 == 0) {
    lVar1 = param_1;
    func_0x00010bf12720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be18ae0(param_1,param_2,lVar1,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar7,param_2,&PTR____CFConstantStringClassReference_110dcf3f8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(lVar1);
  }
  else {
    ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dcf418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(ppuVar7);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1052ca57c; end: 1052ca583; -[SCAudioSessionCore removeListener:] */

void FUN_1052ca57c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1052ca584; end: 1052ca617; -[SCAudioSessionCore setProximityMonitoringEnabled:] */

void FUN_1052ca584(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  lVar1 = param_1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1052ca618;
  puStack_48 = &UNK_110845ce0;
  uStack_38 = (undefined1)param_3;
  lStack_40 = param_1;
  func_0x00010c288ea0(uVar2,param_2,param_3,lVar1,&puStack_60);
  _objc_release(lVar1);
  return;
}



/* Entry: 1052ca618; end: 1052ca657;  */

void FUN_1052ca618(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf04760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0fb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052ca658; end: 1052ca65b; -[SCAudioSessionCore proximityDevice:onProximityStateChange:] */

void FUN_1052ca658(void)

{
  return;
}



/* Entry: 1052ca65c; end: 1052ca757; -[SCAudioSessionCore _setBounds] */

void FUN_1052ca65c(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010c0f98a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 1052ca758; end: 1052ca773;  */

void FUN_1052ca758(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x3a) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c1d72f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3f7fff58,*(undefined8 *)(param_1 + 0x20),PTR_s_setOutputVolume__1126536e0);
  return;
}



/* Entry: 1052ca774; end: 1052ca79f; -[SCAudioSessionCore _cleanNotifications] */

void FUN_1052ca774(long param_1)

{
  func_0x00010c281b20(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c12d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x68),PTR_s_removeObserver__112628f78,param_1);
  return;
}



/* Entry: 1052ca7a0; end: 1052ca82f; -[SCAudioSessionCore onAVAudioSessionVolumeChanged:] */

void FUN_1052ca7a0(float param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c0e00e0(param_4,param_3,*(undefined8 *)PTR__NSKeyValueChangeNewKey_110345500);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(param_4);
  *(float *)(param_2 + 0x18) = param_1;
  if (*(char *)(param_2 + 0x3a) == '\x01') {
    *(undefined1 *)(param_2 + 0x3a) = 0;
    return;
  }
  func_0x00010bf0fba0((double)param_1,*(undefined8 *)(param_2 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bea25b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__setBounds_112586310);
  return;
}



/* Entry: 1052ca830; end: 1052ca8df; -[SCAudioSessionCore onAVAudioSessionRouteChanged:] */

void FUN_1052ca830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 1052ca8e0; end: 1052caa9f;  */

void FUN_1052ca8e0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined8 auStack_e0 [5];
  undefined8 auStack_b8 [5];
  undefined8 auStack_90 [5];
  undefined8 auStack_68 [5];
  
  puVar7 = auStack_e0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067fc0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c292820(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c15fac0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf5fe60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  func_0x00010c187a00(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c1e2700(*(undefined8 *)(param_1 + 0x28));
  if (lVar3 < 3) {
    if (lVar3 == 1) {
      pcVar8 = FUN_1052caaa0;
      puVar7 = auStack_68;
    }
    else {
      if (lVar3 != 2) goto LAB_1052caa54;
      pcVar8 = (code *)0x1052caaac;
      puVar7 = auStack_90;
    }
  }
  else if (lVar3 == 3) {
    pcVar8 = (code *)0x1052caab8;
    puVar7 = auStack_b8;
  }
  else {
    if (lVar3 != 4) goto LAB_1052caa54;
    pcVar8 = (code *)0x1052caac4;
  }
  *puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  puVar7[1] = 0xc2000000;
  puVar7[2] = pcVar8;
  puVar7[3] = &UNK_110842e18;
  puVar7[4] = *(undefined8 *)(param_1 + 0x28);
  func_0x0001000d76cc("APPSTORE");
LAB_1052caa54:
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf287c0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0fe20();
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar5);
  return;
}



/* Entry: 1052caaa0; end: 1052caacf;  */

void FUN_1052caaa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0fe70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60),
             PTR_s_audioSessionRouteDidChangeReason_1125a1940);
  return;
}



/* Entry: 1052caad0; end: 1052caaef; -[SCAudioSessionCore onAVAudioSessionMediaServicesWereLost:] */

void FUN_1052caad0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1052caaf0; end: 1052cab0f; -[SCAudioSessionCore onAVAudioSessionMediaServicesWereReset:] */

void FUN_1052caaf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1052cab10; end: 1052caba7; -[SCAudioSessionCore onAVAudioSessionSilenceSecondaryAudioHintNotification:] */

void FUN_1052cab10(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  _objc_release(lVar1);
  _objc_release(param_3);
  if (lVar2 == 1) {
    uVar3 = 1;
  }
  else {
    if (lVar2 != 0) {
      return;
    }
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bedfef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateSilenceSecondaryAudioHint_112595960,uVar3);
  return;
}



/* Entry: 1052caba8; end: 1052cac3f; -[SCAudioSessionCore _updateSilenceSecondaryAudioHint:] */

void FUN_1052caba8(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0x1c) != param_3) {
    func_0x00010c0f98a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 1052cac40; end: 1052cacbf;  */

void FUN_1052cac40(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 auStack_60 [5];
  undefined8 auStack_38 [5];
  
  cVar3 = *(char *)(param_1 + 0x38);
  puVar1 = auStack_38;
  if (cVar3 == '\0') {
    puVar1 = auStack_60;
  }
  pcVar2 = FUN_1052cacc0;
  if (cVar3 == '\0') {
    pcVar2 = (code *)0x1052caccc;
  }
  *(char *)(*(long *)(param_1 + 0x20) + 0x1c) = cVar3;
  *puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puVar1[1] = 0xc2000000;
  puVar1[2] = pcVar2;
  puVar1[3] = &UNK_110842e18;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bcbe2c4("APPSTORE");
  return;
}



/* Entry: 1052cacc0; end: 1052cacd7;  */

void FUN_1052cacc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0ff10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60),
             PTR_s_audioSessionSilenceSecondaryAudi_1125a1968);
  return;
}



/* Entry: 1052cacd8; end: 1052cadcf; -[SCAudioSessionCore onAVAudioSessionInterruption:] */

void FUN_1052cacd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c067fc0();
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x40) == 0) {
    uVar1 = param_3;
    func_0x00010c292820(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x00010c2827c0(uVar2);
    func_0x00010bf0fbe0(*(undefined8 *)(param_1 + 0x60),param_2,param_1,(uint)uVar1 & 1);
    _objc_release(uVar2);
  }
  else if (*(long *)(param_1 + 0x40) == 1) {
    func_0x00010bf0fc80(*(undefined8 *)(param_1 + 0x60),param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052cadd0; end: 1052cae8f; -[SCAudioSessionCore onApplicationDidBecomeActive] */

void FUN_1052cadd0(undefined8 param_1)

{
  func_0x00010bfb4b20();
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 1052cae90; end: 1052caeb3; -[SCAudioSessionCore forceEndAudioInterruptionIfNeeded] */

void FUN_1052cae90(long param_1)

{
  if (*(long *)(param_1 + 0x40) == 1) {
    *(undefined8 *)(param_1 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf0fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x60),PTR_s_audioSession_didEndInterruption__1125a18a0,
               param_1,0);
    return;
  }
  return;
}



/* Entry: 1052caeb4; end: 1052caebf; -[SCAudioSessionCore hiddenVolumeView] */

void FUN_1052caeb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a1030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b6e08,PTR_s_volumeView_112685e30);
  return;
}



/* Entry: 1052caec0; end: 1052caecb; -[SCAudioSessionCore hiddenVolumeSlider] */

void FUN_1052caec0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a1010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b6e08,PTR_s_volumeSlider_112685e28);
  return;
}



/* Entry: 1052caecc; end: 1052caf33; -[SCAudioSessionCore _isCategorySilencedByMuteSwitch:] */

uint FUN_1052caecc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,
                      *(undefined8 *)PTR__AVAudioSessionCategoryPlayAndRecord_11034ce30);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,*(undefined8 *)PTR__AVAudioSessionCategoryPlayback_11034ce38
                       );
    uVar2 = (uint)uVar1 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1052caf34; end: 1052cb0b7; -[SCAudioSessionCore _outputPortTypes] */

/* WARNING: Type propagation algorithm not settling */

void FUN_1052caf34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [256];
  long lStack_1a0;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5fe60();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c0ef240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar12;
  func_0x00010bf51e00();
  _objc_release(lVar12);
  _objc_release(param_1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain(lVar2);
  puVar7 = &uStack_120;
  iVar8 = (int)auStack_d8;
  lVar12 = lVar2;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    lVar13 = *plStack_110;
    do {
      lVar14 = 0;
      do {
        if (*plStack_110 != lVar13) {
          _objc_enumerationMutation(lVar2);
        }
        uVar3 = *(undefined8 *)(lStack_118 + lVar14 * 8);
        func_0x00010c104100();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcf458);
        _objc_release(uVar3);
        lVar14 = lVar14 + 1;
      } while (lVar12 != lVar14);
      puVar7 = &uStack_120;
      iVar8 = (int)auStack_d8;
      lVar12 = lVar2;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar7);
    puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    lStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    plStack_2d0 = (long *)0x0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    _objc_retain(puVar7);
    puVar9 = &uStack_2e0;
    puVar4 = puVar7;
    func_0x00010bf52a60();
    if (puVar4 != (undefined8 *)0x0) {
      lVar12 = *plStack_2d0;
      do {
        puVar9 = (undefined8 *)0x0;
        do {
          if (*plStack_2d0 != lVar12) {
            _objc_enumerationMutation(puVar7);
          }
          lVar14 = *(long *)(lStack_2d8 + (long)puVar9 * 8);
          lVar2 = lVar14;
          func_0x00010c104100();
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar14;
          func_0x00010bdc2a80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcf478);
          _objc_release(lVar13);
          _objc_release(lVar2);
          if (iVar8 == 0) {
            func_0x00010c159540();
            _objc_retainAutoreleasedReturnValue();
            lVar2 = lVar14;
            func_0x00010bf645c0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcf4d8);
            _objc_release(lVar2);
          }
          else {
            func_0x00010bf070e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcf498);
            uStack_2f8 = 0;
            uStack_300 = 0;
            uStack_2e8 = 0;
            uStack_2f0 = 0;
            lStack_318 = 0;
            uStack_320 = 0;
            uStack_308 = 0;
            plStack_310 = (long *)0x0;
            func_0x00010bf646e0();
            _objc_retainAutoreleasedReturnValue();
            lVar2 = lVar14;
            func_0x00010bf52a60();
            if (lVar2 != 0) {
              lVar13 = *plStack_310;
              do {
                lVar11 = 0;
                do {
                  if (*plStack_310 != lVar13) {
                    _objc_enumerationMutation(lVar14);
                  }
                  uVar3 = *(undefined8 *)(lStack_318 + lVar11 * 8);
                  func_0x00010bf645c0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bf06ba0(puVar1,param_2,
                                      &PTR____CFConstantStringClassReference_110dcf4b8);
                  _objc_release(uVar3);
                  lVar11 = lVar11 + 1;
                } while (lVar2 != lVar11);
                lVar2 = lVar14;
                func_0x00010bf52a60(lVar14,param_2,&uStack_320,auStack_2a0,0x10);
              } while (lVar2 != 0);
            }
          }
          _objc_release(lVar14);
          puVar9 = (undefined8 *)((long)puVar9 + 1);
        } while (puVar9 != puVar4);
        puVar9 = &uStack_2e0;
        puVar4 = puVar7;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined8 *)0x0);
    }
    _objc_release(puVar7);
    _objc_release(puVar7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a0) {
      ___stack_chk_fail();
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = (uint)puVar9;
      if (((ulong)puVar9 & 1) != 0) {
        func_0x00010befa120(puVar5,param_2,&PTR____CFConstantStringClassReference_110dcf4f8);
      }
      if ((uVar10 >> 1 & 1) != 0) {
        func_0x00010befa120(puVar5,param_2,&PTR____CFConstantStringClassReference_110dcf518);
      }
      if ((uVar10 >> 2 & 1) != 0) {
        func_0x00010befa120(puVar5,param_2,&PTR____CFConstantStringClassReference_110dcf538);
      }
      if ((uVar10 >> 3 & 1) != 0) {
        func_0x00010befa120(puVar5,param_2,&PTR____CFConstantStringClassReference_110dcf558);
      }
      puVar6 = puVar5;
      func_0x00010bf529e0();
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar6 == (undefined *)0x0) {
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar6;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar6 = puVar5;
        func_0x00010bf446e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110dbf078);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcf578);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1052cb0b8; end: 1052cb377; -[SCAudioSessionCore _formatRoute:printAllDataSource:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_1052cb0b8(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_3);
  puVar7 = &uStack_1b0;
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_1a0;
    do {
      lVar8 = 0;
      do {
        if (*plStack_1a0 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        lVar13 = *(long *)(lStack_1a8 + lVar8 * 8);
        lVar3 = lVar13;
        func_0x00010c104100();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar13;
        func_0x00010bdc2a80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcf478);
        _objc_release(lVar12);
        _objc_release(lVar3);
        if (param_4 == 0) {
          func_0x00010c159540();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar13;
          func_0x00010bf645c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcf4d8);
          _objc_release(lVar3);
        }
        else {
          func_0x00010bf070e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcf498);
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          func_0x00010bf646e0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar13;
          func_0x00010bf52a60();
          if (lVar3 != 0) {
            lVar12 = *plStack_1e0;
            do {
              lVar10 = 0;
              do {
                if (*plStack_1e0 != lVar12) {
                  _objc_enumerationMutation(lVar13);
                }
                uVar4 = *(undefined8 *)(lStack_1e8 + lVar10 * 8);
                func_0x00010bf645c0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcf4b8)
                ;
                _objc_release(uVar4);
                lVar10 = lVar10 + 1;
              } while (lVar3 != lVar10);
              lVar3 = lVar13;
              func_0x00010bf52a60(lVar13,param_2,&uStack_1f0,auStack_170,0x10);
            } while (lVar3 != 0);
          }
        }
        _objc_release(lVar13);
        lVar8 = lVar8 + 1;
      } while (lVar8 != lVar2);
      puVar7 = &uStack_1b0;
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = (uint)puVar7;
    if (((ulong)puVar7 & 1) != 0) {
      func_0x00010befa120(puVar5,param_2,&PTR____CFConstantStringClassReference_110dcf4f8);
    }
    if ((uVar9 >> 1 & 1) != 0) {
      func_0x00010befa120(puVar5,param_2,&PTR____CFConstantStringClassReference_110dcf518);
    }
    if ((uVar9 >> 2 & 1) != 0) {
      func_0x00010befa120(puVar5,param_2,&PTR____CFConstantStringClassReference_110dcf538);
    }
    if ((uVar9 >> 3 & 1) != 0) {
      func_0x00010befa120(puVar5,param_2,&PTR____CFConstantStringClassReference_110dcf558);
    }
    puVar6 = puVar5;
    func_0x00010bf529e0();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar6 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar6;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar6 = puVar5;
      func_0x00010bf446e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110dbf078);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcf578);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1052cb378; end: 1052cb4ab; -[SCAudioSessionCore _humanReadableCategoryOptions:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_1052cb378(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = (uint)param_3;
  if ((param_3 & 1) != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcf4f8);
  }
  if ((uVar4 >> 1 & 1) != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcf518);
  }
  if ((uVar4 >> 2 & 1) != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcf538);
  }
  if ((uVar4 >> 3 & 1) != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcf558);
  }
  puVar2 = puVar1;
  func_0x00010bf529e0();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = puVar1;
    func_0x00010bf446e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dbf078);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dcf578);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1052cb4ac; end: 1052cb53f; -[SCAudioSessionCore setStereoRecordingWithLocation:orientation:videoOrientation:] */

void FUN_1052cb4ac(undefined8 param_1)

{
  func_0x00010c16bd40();
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 1052cb540; end: 1052cb597;  */

void FUN_1052cb540(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15fac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e00c0();
  _objc_release(uVar1);
  return;
}



/* Entry: 1052cb598; end: 1052cb59f; -[SCAudioSessionCore performer] */

undefined8 FUN_1052cb598(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1052cb5a0; end: 1052cb5a7; -[SCAudioSessionCore proximityDevice] */

undefined8 FUN_1052cb5a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1052cb5a8; end: 1052cb5af; -[SCAudioSessionCore announcer] */

undefined8 FUN_1052cb5a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1052cb5b0; end: 1052cb5df; -[SCAudioSessionCore setAnnouncer:] */

void FUN_1052cb5b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052cb5e0; end: 1052cb5e7; -[SCAudioSessionCore notificationCenter] */

undefined8 FUN_1052cb5e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1052cb5e8; end: 1052cb617; -[SCAudioSessionCore setNotificationCenter:] */

void FUN_1052cb5e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052cb618; end: 1052cb62f; -[SCAudioSessionCore callingDelegate] */

void FUN_1052cb618(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1052cb630; end: 1052cb63b; -[SCAudioSessionCore setCallingDelegate:] */

void FUN_1052cb630(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 1052cb63c; end: 1052cb6c7; -[SCAudioSessionCore .cxx_destruct] */

void FUN_1052cb63c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052cb6c8; end: 1052cb6fb; -[SCAudioSessionImpl dealloc] */

void FUN_1052cb6c8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e74d8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1052cb6fc; end: 1052cb773; -[SCAudioSessionImpl hiddenVolumeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052cb6fc(long param_1)

{
  long *plVar1;
  long lStack_30;
  undefined *puStack_28;
  
  plVar1 = &lStack_30;
  if (*(char *)(param_1 + _DAT_112720cc4) == '\x01') {
    puStack_28 = PTR_PTR_1126e74d8;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_hiddenVolumeView_112528a00);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    plVar1 = *(long **)(param_1 + _DAT_112720ccc);
    _objc_retain(plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 1052cb774; end: 1052cb7d7; -[SCAudioSessionImpl hiddenVolumeSlider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052cb774(long param_1)

{
  long lStack_20;
  undefined *puStack_18;
  
  if (*(char *)(param_1 + _DAT_112720cc4) == '\x01') {
    puStack_18 = PTR_PTR_1126e74d8;
    lStack_20 = param_1;
    _objc_msgSendSuper2(&lStack_20,PTR_s_hiddenVolumeSlider_1125d5f10);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_loadWeakRetained(param_1 + _DAT_112720cd0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1052cb7d8; end: 1052cb893; -[SCAudioSessionImpl configureWith:performer:completion:] */

void FUN_1052cb7d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6e10;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bde58c0(param_1,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010c053e20(puVar1,param_2,param_1,param_3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1052cb894; end: 1052cbaa7; -[SCAudioSessionImpl _configureSessionWith:performer:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052cb894(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_3;
  func_0x00010c230180();
  uVar3 = param_3;
  if (((int)uVar2 == 0) || (uVar2 = param_3, func_0x00010bf33240(), uVar2 != 2)) {
    uVar2 = param_3;
    func_0x00010c230180();
    if (((uVar2 & 1) == 0) && (uVar2 = param_3, func_0x00010bf33240(), uVar2 == 2)) {
      func_0x00010c087500(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + _DAT_112720c9c);
      uVar2 = param_3;
      func_0x00010c231980();
      iVar1 = _DAT_112720ca0;
      if ((int)uVar2 != 0) goto LAB_1052cb974;
      uVar9 = 0;
      goto LAB_1052cba20;
    }
    uVar2 = param_3;
    func_0x00010c230180();
    if (((uVar2 & 1) != 0) || (uVar2 = param_3, func_0x00010bf33240(), uVar2 != 1)) {
      param_1 = 0;
      goto LAB_1052cba6c;
    }
    func_0x00010c087500(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0832e0(param_3);
    uVar4 = param_3;
    func_0x00010c235700(param_3);
    uVar5 = param_3;
    func_0x00010c22eb40(param_3);
    uVar6 = param_3;
    func_0x00010c22efa0(param_3);
    uVar7 = param_3;
    func_0x00010c231480(param_3);
    func_0x00010be91700(param_1,param_2,uVar3,uVar2,uVar4,uVar5,(uint)uVar6 ^ 1,uVar7,param_4,
                        param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c087500(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + _DAT_112720cb0);
    iVar1 = _DAT_112720c9c;
LAB_1052cb974:
    uVar9 = *(undefined8 *)(param_1 + iVar1);
LAB_1052cba20:
    uVar2 = param_3;
    func_0x00010c22efa0(param_3);
    uVar4 = param_3;
    func_0x00010c231480(param_3);
    func_0x00010be72600(param_1,param_2,uVar3,uVar8,uVar9,1,(uint)uVar2 ^ 1,uVar4,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
LAB_1052cba6c:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1052cbaa8; end: 1052cbbff; -[SCAudioSessionImpl _requestRecordingWithLabel:isVideoRecord:shouldUseVideoRecordingMode:deactivation:shouldRetryRequest:shouldInterruptCalling:callbackPerformer:callback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052cbaa8(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
                  undefined8 param_6,undefined8 param_7,undefined4 param_8,long param_9,
                  long param_10)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_9);
  lVar1 = param_10;
  _objc_retain();
  if (param_9 == 0 && param_10 == 0) {
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    param_9 = lVar1;
  }
  uVar3 = 0;
  lVar1 = 0x1c;
  if (param_4 == 0) {
    lVar1 = 8;
  }
  uVar2 = *(undefined8 *)(param_1 + *(int *)(&DAT_112720c9c + lVar1));
  if ((param_5 != 0) && (param_4 == 0)) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112720cbc);
  }
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1052cbc00;
  puStack_78 = &UNK_1108538b0;
  lStack_68 = param_10;
  lStack_70 = param_1;
  _objc_retain(param_10);
  func_0x00010be72600(param_1,param_2,param_3,uVar2,uVar3,param_6,param_7,param_8,param_9,
                      &puStack_90);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lStack_68);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1052cbc00; end: 1052cbc6f;  */

void FUN_1052cbc00(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1052cbc70;
  puStack_30 = &UNK_110875ee0;
  func_0x00010bf66240(uStack_28,param_2,&puStack_48);
  return;
}



/* Entry: 1052cbc70; end: 1052cbc7b;  */

void FUN_1052cbc70(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b8650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setLastRecordingRequestDebugInfo_11264bbb8,
             param_2);
  return;
}


