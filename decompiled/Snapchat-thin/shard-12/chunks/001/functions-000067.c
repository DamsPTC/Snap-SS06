/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ce006c; end: 108ce018f; -[SCVideoFramePlayer commitConfigurationWithSeekToBeginning:] */

void FUN_108ce006c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x50) = 0;
  if ((*(byte *)(param_1 + 0x53) & 1) == 0) {
    if ((*(byte *)(param_1 + 0x39) & 1) == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x51) == '\x01') goto LAB_108ce00ac;
    if ((*(byte *)(param_1 + 0x52) & 1) != 0) {
      func_0x00010c288920(param_1);
      if ((*(byte *)(param_1 + 0x54) & 1) != 0) goto LAB_108ce0160;
      if (*(char *)(param_1 + 0x52) != '\x01') goto LAB_108ce0170;
      goto LAB_108ce0118;
    }
    if ((*(byte *)(param_1 + 0x54) & 1) == 0) goto LAB_108ce0170;
  }
  else {
    if ((*(byte *)(param_1 + 0x39) & 1) == 0) {
      return;
    }
LAB_108ce00ac:
    func_0x00010bedd5c0(0,param_1);
    func_0x00010be91f80(param_1,param_2,0);
    if (*(char *)(param_1 + 0x11) == '\x01') {
      uVar2 = *(undefined8 *)(param_1 + 0x98);
      uVar1 = *(undefined8 *)(param_1 + 0xa8);
      func_0x00010c100ae0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c130d60(uVar2,param_2,uVar1);
      _objc_release(uVar1);
      *(undefined1 *)(param_1 + 0x10) = 1;
    }
    func_0x00010c288920(param_1);
    if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
LAB_108ce0118:
      if (*(char *)(param_1 + 0x11) != '\x01') goto LAB_108ce0170;
    }
  }
LAB_108ce0160:
  if (param_3 != 0) {
    func_0x00010c157120(param_1);
  }
  *(undefined1 *)(param_1 + 0x54) = 0;
LAB_108ce0170:
  *(undefined1 *)(param_1 + 0x53) = 0;
  *(undefined2 *)(param_1 + 0x51) = 0;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x40);
  return;
}



/* Entry: 108ce0190; end: 108ce027f; -[SCVideoFramePlayer replaceCurrentSourceWithSource:] */

undefined8 FUN_108ce0190(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xa8) == param_3) {
    uVar1 = 1;
  }
  else {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    *(long *)(param_1 + 0xa8) = param_3;
    _objc_release(uVar1);
    lVar2 = param_3;
    func_0x00010c29b800();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = 0;
    if (lVar2 != 0) {
      lVar3 = param_3;
      func_0x00010c100ae0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      if (lVar3 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
        *(undefined1 *)(param_1 + 0x10) = 1;
        uVar5 = *(undefined8 *)(param_1 + 0x98);
        uVar4 = *(undefined8 *)(param_1 + 0xa8);
        func_0x00010c100ae0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c130d60(uVar5,param_2,uVar4);
        _objc_release(uVar4);
        func_0x00010c289c60(param_1);
        *(undefined1 *)(param_1 + 0x11) = 1;
      }
    }
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 108ce0280; end: 108ce0353; -[SCVideoFramePlayer setReversePlaybackEnabled:reverseAudioPlayer:] */

void FUN_108ce0280(long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  if (*(byte *)(param_1 + 0x90) != param_3) {
    if (*(char *)(param_1 + 0x11) == '\x01') {
      *(undefined1 *)(param_1 + 0x10) = 1;
    }
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_4;
    _objc_release(uVar1);
    func_0x00010c1675a0(*(undefined8 *)(param_1 + 8),param_2,0);
    func_0x00010c161660(*(undefined8 *)(param_1 + 8),param_2,2);
    *(char *)(param_1 + 0x90) = (char)param_3;
    if (param_3 != 0) {
      func_0x00010c13ffc0(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    if (*(char *)(param_1 + 0x50) == '\x01') {
      *(undefined1 *)(param_1 + 0x52) = 1;
    }
    else if (*(char *)(param_1 + 0x39) == '\x01') {
      func_0x00010c288920(param_1);
      if (*(char *)(param_1 + 0x11) == '\x01') {
        func_0x00010c157120(param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108ce0354; end: 108ce0367; -[SCVideoFramePlayer frameSourceRate] */

undefined8 FUN_108ce0354(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 0xa8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c11fdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_2 + 0xa8),PTR_s_rate_112625990);
    return param_1;
  }
  return 0x3ff0000000000000;
}



/* Entry: 108ce0368; end: 108ce0467; -[SCVideoFramePlayer setFrameSourceRate:] */

/* WARNING: Possible PIC construction at 0x000108ce042c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108ce0430) */
/* WARNING: Removing unreachable block (ram,0x00010c157120) */

void FUN_108ce0368(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  *(double *)(param_2 + 0x58) = param_1;
  dVar4 = param_1;
  func_0x00010c11fdc0(*(undefined8 *)(param_2 + 0xa8));
  if (dVar4 != param_1) {
    lVar1 = *(long *)(param_2 + 0xa8);
    func_0x00010c100ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      if (*(char *)(param_2 + 0x50) != '\x01') {
        func_0x00010bedd5c0(0,param_2);
        func_0x00010c1e7640(param_1,*(undefined8 *)(param_2 + 0xa8));
        if (*(char *)(param_2 + 0x11) == '\x01') {
          uVar3 = *(undefined8 *)(param_2 + 0x98);
          uVar2 = *(undefined8 *)(param_2 + 0xa8);
          func_0x00010c100ae0(uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c130d60(uVar3);
          _objc_release(uVar2);
        }
                    /* WARNING: Could not recover jumptable at 0x00010c288930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_2,PTR_s_updatePlayerRateWithReversePlayb_11267fc70);
        return;
      }
      *(undefined1 *)(param_2 + 0x53) = 1;
    }
  }
  return;
}



/* Entry: 108ce0468; end: 108ce0557; -[SCVideoFramePlayer startRunningAtTime:shouldSeek:] */

void FUN_108ce0468(long param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)(param_1 + 0x39) = 1;
  func_0x00010c288920();
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c100ae0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130d60(uVar3);
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0x11) = 1;
    if (param_4 == 0) {
      return;
    }
    uStack_58 = param_3[1];
    uStack_60 = *param_3;
    uStack_50 = param_3[2];
    uStack_78 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_80 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_70 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    puVar2 = &uStack_60;
    _CMTimeCompare(puVar2,&uStack_80);
    if (((int)puVar2 == 0) && (*(char *)(param_1 + 0x90) != '\x01')) {
      return;
    }
  }
  else if (param_4 == 0) {
    return;
  }
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_50 = param_3[2];
  func_0x00010be9d3c0(param_1);
  return;
}



/* Entry: 108ce0558; end: 108ce0573; -[SCVideoFramePlayer seekInProgress] */

byte FUN_108ce0558(long param_1)

{
  byte bVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    bVar1 = *(byte *)(param_1 + 0x38);
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}



/* Entry: 108ce0574; end: 108ce05b3; -[SCVideoFramePlayer setReversedAudioData:] */

void FUN_108ce0574(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0xb0) != param_3) {
    func_0x00010bf51e00();
    uVar1 = *(undefined8 *)(param_1 + 0xb0);
    *(long *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 108ce05b4; end: 108ce05ff; -[SCVideoFramePlayer updateSeparateAudioPlayback] */

void FUN_108ce05b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c0daac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea7580(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bea1830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xa0),param_1,PTR_s__setAVPlayerVolumes__112585fb0);
  return;
}



/* Entry: 108ce0600; end: 108ce07c7; -[SCVideoFramePlayer _setSeparateAudioPlayerItem:] */

undefined8 FUN_108ce0600(long param_1,undefined8 param_2,ulong param_3)

{
  char cVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar6 = *(ulong *)(param_1 + 0x68);
  _objc_retain(uVar6);
  _objc_retain(param_3);
  if (uVar6 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar6);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar6);
      uVar4 = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x68) = 0;
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = 0;
      _objc_release(uVar4);
      func_0x00010c130d60(*(undefined8 *)(param_1 + 0x80),param_2,0);
      func_0x00010bea1820(*(undefined8 *)(param_1 + 0xa0),param_1);
LAB_108ce06e8:
      uVar4 = 1;
      goto LAB_108ce06ec;
    }
    uVar3 = uVar6;
    func_0x00010c071ae0(uVar6,param_2,param_3);
    _objc_release(param_3);
    _objc_release(uVar6);
    if ((uVar3 & 1) == 0) {
      cVar1 = *(char *)(param_1 + 0x39);
      if (cVar1 == '\x01') {
        if (*(long *)(param_1 + 0x18) != 0) {
          _objc_retain(param_3);
          uVar4 = *(undefined8 *)(param_1 + 0x70);
          *(ulong *)(param_1 + 0x70) = param_3;
          _objc_release(uVar4);
          goto LAB_108ce06e8;
        }
        func_0x00010c0f5fe0(param_1);
      }
      _objc_retain(param_3);
      uVar4 = *(undefined8 *)(param_1 + 0x68);
      *(ulong *)(param_1 + 0x68) = param_3;
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = 0;
      _objc_release(uVar4);
      func_0x00010bea1820(*(undefined8 *)(param_1 + 0xa0),param_1);
      lVar5 = param_1;
      func_0x00010c0f00a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c130d60();
      _objc_release(lVar5);
      uVar4 = 1;
      if (cVar1 != '\0') {
        uVar2 = *(undefined1 *)(param_1 + 0x91);
        *(undefined1 *)(param_1 + 0x91) = 1;
        lVar5 = *(long *)(param_1 + 0xa8);
        func_0x00010c100ae0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 == 0) {
          uStack_58 = 0;
          uStack_50 = 0;
          uStack_48 = 0;
        }
        else {
          func_0x00010bf60480(&uStack_58,lVar5);
        }
        func_0x00010c250500(param_1,param_2,&uStack_58,1);
        _objc_release(lVar5);
        *(undefined1 *)(param_1 + 0x91) = uVar2;
      }
      goto LAB_108ce06ec;
    }
  }
  uVar4 = 0;
LAB_108ce06ec:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 108ce07c8; end: 108ce07df; -[SCVideoFramePlayer currentTime] */

void FUN_108ce07c8(undefined8 *param_1,long param_2)

{
  if (*(long *)(param_2 + 0x98) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf60490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_2 + 0x98),PTR_s_currentTime_1125b5ac8);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 108ce07e0; end: 108ce080f; -[SCVideoFramePlayer seekToBeginning] */

void FUN_108ce07e0(long param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = *(undefined8 *)(param_1 + 200);
  uStack_30 = *(undefined8 *)(param_1 + 0xc0);
  uStack_20 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c157260(param_1,param_2,&uStack_30);
  return;
}



/* Entry: 108ce0810; end: 108ce08cb; -[SCVideoFramePlayer seekToTime:] */

void FUN_108ce0810(long param_1,undefined8 param_2,double *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  
  dStack_38 = param_3[1];
  dStack_40 = *param_3;
  dStack_30 = param_3[2];
  dStack_58 = *(double *)(param_1 + 200);
  dVar2 = *(double *)(param_1 + 0xc0);
  dStack_50 = *(double *)(param_1 + 0xd0);
  pdVar1 = &dStack_40;
  dStack_60 = dVar2;
  _CMTimeCompare(pdVar1,&dStack_60);
  if ((int)pdVar1 < 0) {
    dVar3 = *(double *)(param_1 + 200);
    dVar2 = *(double *)(param_1 + 0xc0);
    param_3[2] = *(double *)(param_1 + 0xd0);
    param_3[1] = dVar3;
    *param_3 = dVar2;
  }
  func_0x00010bfb7060(param_1);
  dStack_58 = param_3[1];
  dStack_60 = *param_3;
  dStack_50 = param_3[2];
  _CMTimeMultiplyByFloat64(&dStack_40,1.0 / dVar2,&dStack_60);
  param_3[1] = dStack_38;
  *param_3 = dStack_40;
  param_3[2] = dStack_30;
  dStack_38 = param_3[1];
  dStack_40 = *param_3;
  func_0x00010be9d3c0(param_1);
  return;
}



/* Entry: 108ce08cc; end: 108ce08cf; -[SCVideoFramePlayer seekToTime:completionHandler:] */

void FUN_108ce08cc(void)

{
  return;
}



/* Entry: 108ce08d0; end: 108ce09e3; -[SCVideoFramePlayer stopPlayingAndSeekSmoothlyToTime:] */

void FUN_108ce08d0(double param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010bfb7060();
  uStack_58 = param_4[1];
  uStack_60 = *param_4;
  uStack_50 = param_4[2];
  _CMTimeMultiplyByFloat64(&uStack_40,1.0 / param_1,&uStack_60);
  param_4[1] = uStack_38;
  *param_4 = uStack_40;
  param_4[2] = uStack_30;
  func_0x00010c0f5fe0(param_2);
  if (*(char *)(param_2 + 0x90) == '\x01') {
    if (*(long *)(param_2 + 0xa8) == 0) {
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_60);
    }
    uStack_78 = param_4[1];
    uStack_80 = *param_4;
    uStack_70 = param_4[2];
    _CMTimeSubtract(&uStack_40,&uStack_60,&uStack_80);
  }
  else {
    uStack_38 = param_4[1];
    uStack_40 = *param_4;
    uStack_30 = param_4[2];
  }
  uStack_58 = uStack_38;
  uStack_60 = uStack_40;
  uStack_50 = uStack_30;
  uStack_78 = *(undefined8 *)(param_2 + 0x28);
  uStack_80 = *(undefined8 *)(param_2 + 0x20);
  uStack_70 = *(undefined8 *)(param_2 + 0x30);
  puVar1 = &uStack_60;
  _CMTimeCompare(puVar1,&uStack_80);
  if ((int)puVar1 != 0) {
    *(undefined8 *)(param_2 + 0x28) = uStack_38;
    *(undefined8 *)(param_2 + 0x20) = uStack_40;
    *(undefined8 *)(param_2 + 0x30) = uStack_30;
    if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
      func_0x00010bebc800(param_2);
    }
  }
  return;
}



/* Entry: 108ce09e4; end: 108ce0b73; -[SCVideoFramePlayer _smoothSeekToTime] */

void FUN_108ce09e4(long param_1,undefined8 param_2)

{
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined1 *)(param_1 + 0x38) = 1;
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x108ce0aec;
  puStack_68 = &UNK_110a55a38;
  uStack_98 = *(undefined8 *)(param_1 + 0x28);
  uStack_a0 = *(undefined8 *)(param_1 + 0x20);
  uStack_90 = *(undefined8 *)(param_1 + 0x30);
  uStack_d8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_e0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_d0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_c0 = uStack_e0;
  uStack_b8 = uStack_d8;
  uStack_b0 = uStack_d0;
  lStack_60 = param_1;
  uStack_40 = uStack_58;
  uStack_38 = uStack_50;
  uStack_30 = uStack_48;
  func_0x00010c157300(*(undefined8 *)(param_1 + 0x98),param_2,&uStack_a0,&uStack_c0,&uStack_e0,
                      &puStack_80);
  if (*(char *)(param_1 + 0x90) == '\x01') {
    uStack_98 = uStack_38;
    uStack_a0 = uStack_40;
    uStack_90 = uStack_30;
    func_0x00010c157260(*(undefined8 *)(param_1 + 8),param_2,&uStack_a0);
  }
  else {
    uStack_98 = uStack_38;
    uStack_a0 = uStack_40;
    uStack_90 = uStack_30;
    func_0x00010bdd1300(param_1,param_2,&uStack_a0,0);
  }
  return;
}



/* Entry: 108ce0b74; end: 108ce0b9b; -[SCVideoFramePlayer _pause] */

void FUN_108ce0b74(undefined8 param_1)

{
  func_0x00010be61a60();
                    /* WARNING: Could not recover jumptable at 0x00010bedd5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_1,PTR_s__updatePlayersRate__112594f18);
  return;
}



/* Entry: 108ce0b9c; end: 108ce0ba3; -[SCVideoFramePlayer pauseRunning] */

void FUN_108ce0b9c(long param_1)

{
  *(undefined1 *)(param_1 + 0x39) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be70bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pause_112579c98);
  return;
}



/* Entry: 108ce0ba4; end: 108ce0bcf; -[SCVideoFramePlayer stop] */

void FUN_108ce0ba4(long param_1)

{
  *(undefined1 *)(param_1 + 0x39) = 0;
  func_0x00010bedd5c0(0);
  *(undefined1 *)(param_1 + 0x11) = 0;
  return;
}



/* Entry: 108ce0bd0; end: 108ce0c17; -[SCVideoFramePlayer _updatePlayersRate:] */

/* WARNING: Possible PIC construction at 0x000108ce0bf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108ce0bf4) */

void FUN_108ce0bd0(double param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e7650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((float)param_1,*(undefined8 *)(param_2 + 0x98),PTR_s_setRate__1126577b8);
  return;
}



/* Entry: 108ce0c18; end: 108ce0c37; -[SCVideoFramePlayer _isPaused] */

bool FUN_108ce0c18(float param_1,long param_2)

{
  func_0x00010c11fdc0(*(undefined8 *)(param_2 + 0x98));
  return param_1 == 0.0;
}



/* Entry: 108ce0c38; end: 108ce0c73; -[SCVideoFramePlayer _muteAllPlayers] */

/* WARNING: Possible PIC construction at 0x000108ce0c50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108ce0c54) */

void FUN_108ce0c38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2241b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x98),PTR_s_setVolume__112666a90);
  return;
}



/* Entry: 108ce0c74; end: 108ce0d3b; -[SCVideoFramePlayer _setAVPlayerVolumes:] */

/* WARNING: Possible PIC construction at 0x000108ce0cb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108ce0ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108ce0d20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108ce0d14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108ce0d24) */
/* WARNING: Removing unreachable block (ram,0x000108ce0ce8) */
/* WARNING: Removing unreachable block (ram,0x000108ce0cb8) */
/* WARNING: Removing unreachable block (ram,0x000108ce0d2c) */
/* WARNING: Removing unreachable block (ram,0x000108ce0d18) */
/* WARNING: Removing unreachable block (ram,0x000108ce0d20) */

void FUN_108ce0c74(double param_1,long param_2)

{
  undefined8 uVar1;
  float fVar2;
  double dVar3;
  
  if ((*(long *)(param_2 + 0x68) == 0) || (*(char *)(param_2 + 0x92) != '\x01')) {
    if (*(char *)(param_2 + 0x90) == '\x01') {
      uVar1 = *(undefined8 *)(param_2 + 0x98);
      fVar2 = 0.0;
    }
    else {
      dVar3 = param_1;
      func_0x00010bf15e60(*(undefined8 *)(param_2 + 0xa8));
      fVar2 = (float)(param_1 * dVar3);
      uVar1 = *(undefined8 *)(param_2 + 0x98);
    }
  }
  else {
    dVar3 = param_1;
    func_0x00010bf15e60(*(undefined8 *)(param_2 + 0xa8));
    fVar2 = (float)(param_1 * dVar3);
    uVar1 = *(undefined8 *)(param_2 + 0x98);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2241b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(fVar2,uVar1,PTR_s_setVolume__112666a90);
  return;
}



/* Entry: 108ce0d3c; end: 108ce105b; -[SCVideoFramePlayer _seekVideoAndAudioToTime:] */

void FUN_108ce0d3c(float param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  func_0x00010c11fdc0(*(undefined8 *)(param_2 + 0x98));
  lVar2 = *(long *)(param_2 + 0x98);
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 != 0) &&
     (((bVar1 = *(byte *)(param_2 + 0x10), _objc_release(), (bVar1 & 1) != 0 || (param_1 != 0.0)) &&
      ((*(byte *)((long)param_4 + 0xc) & 1) != 0)))) {
    *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x18) + 1;
    if (*(char *)(param_2 + 0x90) == '\x01') {
      _objc_initWeak(auStack_58,param_2);
      uVar3 = *(undefined8 *)(param_2 + 0x98);
      if (*(long *)(param_2 + 0xa8) == 0) {
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
      }
      else {
        func_0x00010bf8b160(&uStack_90);
      }
      uStack_a8 = param_4[1];
      uStack_b0 = *param_4;
      uStack_a0 = param_4[2];
      _CMTimeSubtract(&uStack_70,&uStack_90,&uStack_b0);
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_108ce105c;
      puStack_c0 = &UNK_110849200;
      _objc_copyWeak(auStack_b8,auStack_58);
      uStack_a8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_b0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_a0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      uStack_90 = uStack_b0;
      uStack_88 = uStack_a8;
      uStack_80 = uStack_a0;
      func_0x00010c157300(uVar3);
      uStack_68 = param_4[1];
      uStack_70 = *param_4;
      uStack_60 = param_4[2];
      func_0x00010c157260(*(undefined8 *)(param_2 + 8));
      _objc_destroyWeak(auStack_b8);
      _objc_destroyWeak(auStack_58);
    }
    else {
      if (*(char *)(param_2 + 0x91) == '\x01') {
        _objc_initWeak(auStack_58,param_2);
        uVar3 = *(undefined8 *)(param_2 + 0x98);
        puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_f8 = 0xc2000000;
        uStack_f0 = 0x108ce1084;
        puStack_e8 = &UNK_110849200;
        _objc_copyWeak(auStack_e0,auStack_58);
        uStack_68 = param_4[1];
        uStack_70 = *param_4;
        uStack_60 = param_4[2];
        uStack_a8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
        uStack_b0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
        uStack_a0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
        uStack_90 = uStack_b0;
        uStack_88 = uStack_a8;
        uStack_80 = uStack_a0;
        func_0x00010c157300(uVar3);
        _objc_destroyWeak(auStack_e0);
        lVar2 = -0x48;
      }
      else {
        _objc_initWeak(&uStack_90,param_2);
        uVar3 = *(undefined8 *)(param_2 + 0x98);
        _objc_copyWeak(auStack_108,&uStack_90);
        uStack_68 = param_4[1];
        uStack_70 = *param_4;
        uStack_60 = param_4[2];
        func_0x00010c157280(uVar3);
        _objc_destroyWeak(auStack_108);
        lVar2 = -0x80;
      }
      _objc_destroyWeak(&stack0xfffffffffffffff0 + lVar2);
      uStack_68 = param_4[1];
      uStack_70 = *param_4;
      uStack_60 = param_4[2];
      func_0x00010bdd1300(param_2);
    }
    *(bool *)(param_2 + 0x10) = param_1 != 0.0;
  }
  return;
}



/* Entry: 108ce105c; end: 108ce10d3;  */

void FUN_108ce105c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108ce10d4; end: 108ce11cf; -[SCVideoFramePlayer _audioPlayerSeekToTime:preciseSeeking:] */

void FUN_108ce10d4(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = param_1 + 0xb8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c29a260();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = param_1 + 0xb8;
    _objc_loadWeakRetained();
    if (lVar3 == 0) {
      uStack_58 = param_3[1];
      uStack_60 = *param_3;
      uStack_50 = param_3[2];
    }
    else {
      lVar4 = param_1 + 0xb8;
      _objc_loadWeakRetained();
      if (lVar4 == 0) {
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
      }
      else {
        uStack_78 = param_3[1];
        uStack_80 = *param_3;
        uStack_70 = param_3[2];
        func_0x00010c29a240(&uStack_60,lVar4,param_2,&uStack_80);
      }
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
    if (*(char *)(param_1 + 0x92) == '\x01') {
      uStack_78 = uStack_58;
      uStack_80 = uStack_60;
      uStack_70 = uStack_50;
      func_0x00010bdd12e0(param_1,param_2,*(undefined8 *)(param_1 + 0x80),&uStack_80,param_4);
    }
  }
  return;
}



/* Entry: 108ce11d0; end: 108ce129f; -[SCVideoFramePlayer _audioPlayer:seekToTime:preciseSeeking:] */

void FUN_108ce11d0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  int param_5)

{
  long lVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar1 != 0) && ((*(byte *)((long)param_4 + 0xc) & 1) != 0)) {
    if (param_5 == 0) {
      uStack_48 = param_4[1];
      uStack_50 = *param_4;
      uStack_40 = param_4[2];
      func_0x00010c157260(param_3,param_2,&uStack_50);
    }
    else {
      uStack_48 = param_4[1];
      uStack_50 = *param_4;
      uStack_40 = param_4[2];
      uStack_88 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_90 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_80 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      uStack_70 = uStack_90;
      uStack_68 = uStack_88;
      uStack_60 = uStack_80;
      func_0x00010c1572c0(param_3,param_2,&uStack_50,&uStack_70,&uStack_90);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108ce12a0; end: 108ce139f; -[SCVideoFramePlayer updatePlayerRateWithReversePlayback] */

/* WARNING: Possible PIC construction at 0x000108ce12f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108ce1358: Changing call to branch */

void FUN_108ce12a0(long param_1)

{
  undefined8 uVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  
  dVar3 = *(double *)(param_1 + 0xa0);
  func_0x00010bea1820();
  if (*(char *)(param_1 + 0x90) == '\x01') {
    func_0x00010bfb7060(param_1);
    dVar3 = dVar3 * *(double *)(param_1 + 0x40);
    fVar4 = (float)dVar3;
    func_0x00010c11fdc0(*(undefined8 *)(param_1 + 8));
    if (SUB84(dVar3,0) == fVar4) {
      fVar2 = (float)*(double *)(param_1 + 0x40);
      fVar4 = -fVar2;
      func_0x00010c11fdc0(*(undefined8 *)(param_1 + 0x98));
      if (fVar2 == fVar4) {
        return;
      }
      uVar1 = *(undefined8 *)(param_1 + 0x98);
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 8);
    }
  }
  else {
    func_0x00010c11fdc0(*(undefined8 *)(param_1 + 8));
    if (SUB84(dVar3,0) != 0.0) {
      func_0x00010c1e7640(0,*(undefined8 *)(param_1 + 8));
    }
    dVar3 = *(double *)(param_1 + 0x40);
    fVar4 = (float)dVar3;
    func_0x00010c11fdc0(*(undefined8 *)(param_1 + 0x98));
    fVar2 = SUB84(dVar3,0);
    if (fVar2 == fVar4) {
      if (*(char *)(param_1 + 0x92) != '\x01') {
        return;
      }
      func_0x00010c11fdc0(*(undefined8 *)(param_1 + 0x80));
      if (fVar2 == fVar4) {
        return;
      }
      uVar1 = *(undefined8 *)(param_1 + 0x80);
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x98);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0fe6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(fVar4,uVar1,PTR_s_playImmediatelyAtRate__11261d3c8);
  return;
}



/* Entry: 108ce13a0; end: 108ce1403; -[SCVideoFramePlayer _rescaleAndChangePlayerItemIfNecessaryIgnoringOldSpeed:] */

void FUN_108ce13a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1e7640(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0xa8));
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  uVar1 = uVar2;
  func_0x00010bf0b060(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1609c0(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bea1830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xa0),param_1,PTR_s__setAVPlayerVolumes__112585fb0);
  return;
}



/* Entry: 108ce1404; end: 108ce163b; -[SCVideoFramePlayer reverseAudioPlayer] */

void FUN_108ce1404(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [48];
  
  lVar8 = *(long *)(param_1 + 8);
  if (*(long *)(param_1 + 0xb0) == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    _objc_release(lVar8);
    lVar8 = 0;
  }
  else if (lVar8 == 0) {
    puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_alloc();
    func_0x00010c0082a0();
    uVar6 = *(undefined8 *)(param_1 + 0x60);
    *(undefined **)(param_1 + 0x60) = puVar1;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010bf15e80(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
    func_0x00010bf45600(PTR__OBJC_CLASS___AVMutableComposition_1126beaa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c277e40(uVar6);
    puVar2 = puVar1;
    func_0x00010bef9f20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_1 + 0x60) == 0) {
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_a0);
    }
    uVar11 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar10 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uVar9 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_c0 = uVar10;
    uStack_b8 = uVar11;
    uStack_b0 = uVar9;
    _CMTimeRangeMake(auStack_80,&uStack_c0,&uStack_a0);
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c279200(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar10;
    uStack_98 = uVar11;
    uStack_90 = uVar9;
    func_0x00010c067160(puVar2);
    _objc_retain(0);
    _objc_release(uVar7);
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
    func_0x00010c100be0(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16c4c0();
    puVar5 = PTR_PTR_1126c9e68;
    _objc_alloc();
    func_0x00010c0370a0();
    uVar7 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar5;
    _objc_release(uVar7);
    lVar8 = *(long *)(param_1 + 8);
    _objc_retain(lVar8);
    _objc_release(0);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(uVar6);
  }
  else {
    _objc_retain(lVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 108ce163c; end: 108ce16ab; -[SCVideoFramePlayer overrideAudioPlayer] */

void FUN_108ce163c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x80);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126c9e68;
    _objc_alloc();
    func_0x00010c037060();
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    *(undefined **)(param_1 + 0x80) = puVar1;
    _objc_release(uVar2);
    func_0x00010c161660(*(undefined8 *)(param_1 + 0x80),param_2,2);
    func_0x00010c1675a0(*(undefined8 *)(param_1 + 0x80),param_2,0);
    lVar3 = *(long *)(param_1 + 0x80);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108ce16ac; end: 108ce173b; -[SCVideoFramePlayer _restartOverrideAudioWhenPlayToEndTimeNotification:] */

void FUN_108ce16ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x80);
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_3);
  if (param_3 == lVar1) {
    uStack_48 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_50 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_40 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    func_0x00010bdd1300(param_1,param_2,&uStack_50,1);
  }
  return;
}



/* Entry: 108ce173c; end: 108ce1743; -[SCVideoFramePlayer player] */

undefined8 FUN_108ce173c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 108ce1744; end: 108ce1773; -[SCVideoFramePlayer setPlayer:] */

void FUN_108ce1744(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ce1774; end: 108ce177b; -[SCVideoFramePlayer volume] */

undefined8 FUN_108ce1774(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 108ce177c; end: 108ce1783; -[SCVideoFramePlayer playerRate] */

undefined8 FUN_108ce177c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108ce1784; end: 108ce178b; -[SCVideoFramePlayer reversePlaybackEnabled] */

undefined1 FUN_108ce1784(long param_1)

{
  return *(undefined1 *)(param_1 + 0x90);
}



/* Entry: 108ce178c; end: 108ce1793; -[SCVideoFramePlayer preciseSeeking] */

undefined1 FUN_108ce178c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x91);
}



/* Entry: 108ce1794; end: 108ce179b; -[SCVideoFramePlayer setPreciseSeeking:] */

void FUN_108ce1794(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x91) = param_3;
  return;
}



/* Entry: 108ce179c; end: 108ce17a3; -[SCVideoFramePlayer currentSource] */

undefined8 FUN_108ce179c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 108ce17a4; end: 108ce17b7; -[SCVideoFramePlayer startTimestamp] */

void FUN_108ce17a4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xc0);
  param_1[1] = *(undefined8 *)(param_2 + 200);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0xd0);
  return;
}



/* Entry: 108ce17b8; end: 108ce17cb; -[SCVideoFramePlayer setStartTimestamp:] */

void FUN_108ce17b8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0xd0) = param_3[2];
  *(undefined8 *)(param_1 + 200) = uVar2;
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  return;
}



/* Entry: 108ce17cc; end: 108ce17d3; -[SCVideoFramePlayer reversedAudioData] */

undefined8 FUN_108ce17cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 108ce17d4; end: 108ce17eb; -[SCVideoFramePlayer audioSeekingDelegate] */

void FUN_108ce17d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ce17ec; end: 108ce17f7; -[SCVideoFramePlayer setAudioSeekingDelegate:] */

void FUN_108ce17ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xb8,param_3);
  return;
}



/* Entry: 108ce17f8; end: 108ce17ff; -[SCVideoFramePlayer useSeparatePlayerForNonBaseAudio] */

undefined1 FUN_108ce17f8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x92);
}



/* Entry: 108ce1800; end: 108ce1807; -[SCVideoFramePlayer setUseSeparatePlayerForNonBaseAudio:] */

void FUN_108ce1800(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x92) = param_3;
  return;
}



/* Entry: 108ce1808; end: 108ce1893; -[SCVideoFramePlayer .cxx_destruct] */

void FUN_108ce1808(long param_1)

{
  _objc_destroyWeak(param_1 + 0xb8);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ce1894; end: 108ce198b; -[SCVideoFrameSource initWithURL:] */

undefined * FUN_108ce1894(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  uStack_48 = *(undefined8 *)PTR__AVURLAssetPreferPreciseDurationAndTimingKey_1103480f8;
  puStack_40 = PTR____kCFBooleanTrue_11034ab68;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_40,&uStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057ae0(puVar1,param_2,param_3,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bfefc40(param_1,param_2,puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  func_0x00010bfee200();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c1609c0(puVar1,param_2,puVar2);
  }
  _objc_release(puVar2);
  return puVar1;
}



/* Entry: 108ce198c; end: 108ce19db; -[SCVideoFrameSource initWithAVAsset:] */

long FUN_108ce198c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bfee200();
  if (param_1 != 0) {
    func_0x00010c1609c0(param_1,param_2,param_3);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108ce19dc; end: 108ce1abf; -[SCVideoFrameSource init] */

undefined1 * FUN_108ce19dc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe428;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b44c8;
    _objc_alloc();
    func_0x00010c030dc0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined **)((long)puVar1 + 0x78) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0xc0) = 0x3ff0000000000000;
    puVar2 = PTR__kCMTimeZero_110348670;
    uVar3 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    *(undefined8 *)((long)puVar1 + 0x130) = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    *(undefined8 *)((long)puVar1 + 0x128) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x138) = *(undefined8 *)(puVar2 + 0x10);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x30) = 0x3f800000;
    *(undefined8 *)((long)puVar1 + 0x38) = 0x3ff0000000000000;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108ce1ac0; end: 108ce1baf; -[SCVideoFrameSource setURL:] */

void FUN_108ce1ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057ae0();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c1609c0(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  if (*(long *)(puVar1 + 0xd8) == 0) {
    puVar3 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c1d6540(puVar1);
    _objc_release(puVar3);
  }
  if (*(undefined **)(puVar1 + 0x108) != puVar2) {
    _objc_retain(puVar2);
    uVar4 = *(undefined8 *)(puVar1 + 0x108);
    *(undefined **)(puVar1 + 0x108) = puVar2;
    _objc_release(uVar4);
    puVar1[0xb7] = 0;
    uVar4 = *(undefined8 *)(puVar1 + 0x110);
    *(undefined8 *)(puVar1 + 0x110) = 0;
    _objc_release(uVar4);
    puVar3 = puVar1;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c2791a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf529e0();
    _objc_release(puVar5);
    _objc_release(puVar3);
    if (puVar6 == (undefined *)0x0) {
      _objc_initWeak(auStack_98,puVar1);
      func_0x00010bf0af00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_a0,auStack_98);
      func_0x00010c09c640(puVar1);
      _objc_release(puVar1);
      _objc_destroyWeak(auStack_a0);
      _objc_destroyWeak(auStack_98);
    }
    else {
      func_0x00010c289240(puVar1);
      puVar3 = puVar1;
      func_0x00010bf0af00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be1a980(puVar1);
      _objc_release(puVar3);
    }
  }
  _objc_release(puVar2);
  return;
}



/* Entry: 108ce1bb0; end: 108ce1d6f; -[SCVideoFrameSource setAVAsset:] */

void FUN_108ce1bb0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xd8) == 0) {
    lVar1 = param_3;
    func_0x00010bf51e00(param_3);
    func_0x00010c1d6540(param_1);
    _objc_release(lVar1);
  }
  if (*(long *)(param_1 + 0x108) != param_3) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x108);
    *(long *)(param_1 + 0x108) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)(param_1 + 0xb7) = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x110);
    *(undefined8 *)(param_1 + 0x110) = 0;
    _objc_release(uVar2);
    lVar1 = param_1;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c2791a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (lVar4 == 0) {
      _objc_initWeak(auStack_48,param_1);
      func_0x00010bf0af00(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010c09c640(param_1);
      _objc_release(param_1);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    else {
      func_0x00010c289240(param_1);
      lVar1 = param_1;
      func_0x00010bf0af00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be1a980(param_1);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108ce1d70; end: 108ce1dcb;  */

void FUN_108ce1d70(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c289240(param_1);
    lVar1 = param_1;
    func_0x00010bf0af00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1a980(param_1,param_2,lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ce1dcc; end: 108ce1edb; -[SCVideoFrameSource setOriginalAsset:] */

void FUN_108ce1dcc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(long *)(param_1 + 0xd8) = param_3;
  _objc_release(uVar1);
  if (param_3 == 0) {
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_60,param_3);
  }
  *(undefined8 *)(param_1 + 0x60) = uStack_58;
  *(undefined8 *)(param_1 + 0x58) = uStack_60;
  *(undefined8 *)(param_1 + 0x68) = uStack_50;
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (*(long *)(param_1 + 0x70) == 0) {
    func_0x00010c0ed4c0(auStack_78,param_1);
    uStack_88 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_90 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_80 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    _CMTimeRangeMake(&uStack_60,&uStack_90,auStack_78);
    func_0x00010c297240(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a100();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(undefined **)(param_1 + 0x70) = puVar3;
    _objc_release(uVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108ce1edc; end: 108ce1f57; -[SCVideoFrameSource updateRenderOrientation] */

void FUN_108ce1edc(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = &uStack_60;
  lVar1 = param_1;
  func_0x00010c29b800();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x00010c106f40(&uStack_60,lVar1);
  }
  func_0x00010b691288();
  _objc_release(lVar1);
  func_0x00010b69138c();
  *(undefined8 **)(param_1 + 200) = puVar2;
  return;
}



/* Entry: 108ce1f58; end: 108ce2047; -[SCVideoFrameSource videoOutputSetting] */

void FUN_108ce1f58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long lVar4;
  long lStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 0xd0);
  if (lVar4 == 0) {
    uStack_68 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
    uStack_60 = *(undefined8 *)PTR__kCVPixelBufferOpenGLESCompatibilityKey_11034a3a8;
    ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0378;
    puStack_40 = PTR____kCFBooleanTrue_11034ab68;
    uStack_58 = *(undefined8 *)PTR__kCVPixelBufferOpenGLCompatibilityKey_11034a3a0;
    uStack_50 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
    puStack_38 = PTR____kCFBooleanTrue_11034ab68;
    ppuStack_30 = &PTR__OBJC_CLASS___NSConstantDictionary_111174fb8;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_48,&uStack_68,4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined **)(param_1 + 0xd0) = puVar1;
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + 0xd0);
    unaff_x19 = param_1;
  }
  lVar2 = lVar4;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_108ce2048;
  uVar3 = *(undefined8 *)(lVar2 + 0x108);
  *(undefined8 *)(lVar2 + 0x108) = 0;
  lStack_90 = lVar4;
  lStack_88 = unaff_x19;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar2 + 0xd8);
  *(undefined8 *)(lVar2 + 0xd8) = 0;
  _objc_release(uVar3);
  func_0x00010bf2eca0(lVar2);
  puStack_98 = PTR_PTR_1126fe428;
  lStack_a0 = lVar2;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108ce2048; end: 108ce20a7; -[SCVideoFrameSource dealloc] */

void FUN_108ce2048(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  _objc_release(uVar1);
  func_0x00010bf2eca0(param_1);
  puStack_28 = PTR_PTR_1126fe428;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108ce20a8; end: 108ce210f; -[SCVideoFrameSource startReading] */

void FUN_108ce20a8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = param_1;
  func_0x00010bf0b060(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c1609c0(param_1,param_2,lVar2);
  }
  else {
    func_0x00010be1a980();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108ce2110; end: 108ce2143; -[SCVideoFrameSource cancelReading] */

void FUN_108ce2110(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010c139270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetPlayerItem_11262beb8);
  return;
}



/* Entry: 108ce2144; end: 108ce21cb; -[SCVideoFrameSource resetPlayerItem] */

void FUN_108ce2144(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010bed1b40();
  lVar1 = param_1;
  func_0x00010c100ae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29a780(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d760(lVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = 0;
  _objc_release(uVar3);
  *(undefined1 *)(param_1 + 0xb7) = 0;
  return;
}



/* Entry: 108ce21cc; end: 108ce2213; -[SCVideoFrameSource duration] */

void FUN_108ce21cc(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x00010c0ed4c0(auStack_38);
  _CMTimeMultiplyByFloat64(param_1,1.0 / *(double *)(param_2 + 0xc0),auStack_38);
  return;
}



/* Entry: 108ce2214; end: 108ce226f; -[SCVideoFrameSource itemTimeRange] */

void FUN_108ce2214(undefined8 param_1,long param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x00010c0ed4c0(auStack_48);
  uStack_58 = *(undefined8 *)(param_2 + 0x130);
  uStack_60 = *(undefined8 *)(param_2 + 0x128);
  uStack_50 = *(undefined8 *)(param_2 + 0x138);
  _CMTimeRangeMake(param_1,&uStack_60,auStack_48);
  return;
}



/* Entry: 108ce2270; end: 108ce2277; -[SCVideoFrameSource isSourceReady] */

undefined1 FUN_108ce2270(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb7);
}



/* Entry: 108ce2278; end: 108ce2303; -[SCVideoFrameSource _generateAndSetCurrentPlayerItemFromAsset:] */

void FUN_108ce2278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be1a8a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bee8b20(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2213a0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010be8eaa0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ce2304; end: 108ce23d3; -[SCVideoFrameSource _replaceCurrentPlayerItemWith:] */

void FUN_108ce2304(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xe0) != param_3) {
    func_0x00010bed1b40(param_1);
    if (*(long *)(param_1 + 0x110) != 0) {
      func_0x00010c12d760(*(undefined8 *)(param_1 + 0xe0));
    }
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0xe0);
    *(long *)(param_1 + 0xe0) = param_3;
    _objc_release(uVar1);
    lVar2 = param_1;
    func_0x00010c2909e0();
    if ((int)lVar2 != 0) {
      func_0x00010c16be60(*(undefined8 *)(param_1 + 0xe0),param_2,*(undefined8 *)(param_1 + 0xa8));
    }
    uVar1 = *(undefined8 *)(param_1 + 0x110);
    *(undefined8 *)(param_1 + 0x110) = 0;
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0xb7) = 0;
    lVar2 = param_1;
    func_0x00010c100ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c252d60();
    _objc_release(lVar2);
    if (lVar3 == 1) {
      func_0x00010be75120(param_1);
    }
    func_0x00010be66940(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ce23d4; end: 108ce23eb; -[SCVideoFrameSource itemTimeForHostTime:] */

void FUN_108ce23d4(undefined8 *param_1,long param_2)

{
  if (*(long *)(param_2 + 0x110) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c084bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_2 + 0x110),PTR_s_itemTimeForHostTime__1125fed00);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 108ce23ec; end: 108ce251f; -[SCVideoFrameSource acquirePixelBufferForItemTime:itemTimeForDisplay:] */

undefined8 FUN_108ce23ec(ulong param_1,undefined8 param_2,double *param_3,double *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  double dVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  dStack_48 = param_3[1];
  dVar3 = *param_3;
  dStack_40 = param_3[2];
  dStack_50 = dVar3;
  func_0x00010bf52140(uVar1,param_2,&dStack_50);
  if (param_4 != (double *)0x0) {
    func_0x00010c11fdc0(param_1);
    if (dVar3 != 1.0) {
      func_0x00010c11fdc0(param_1);
      dStack_68 = param_4[1];
      dStack_70 = *param_4;
      dStack_60 = param_4[2];
      _CMTimeMultiplyByRatio(&dStack_50,&dStack_70,(int)dVar3,1);
      param_4[1] = dStack_48;
      *param_4 = dStack_50;
      param_4[2] = dStack_40;
    }
    dStack_68 = param_4[1];
    dStack_70 = *param_4;
    dStack_60 = param_4[2];
    uStack_88 = *(undefined8 *)(param_1 + 0x130);
    uStack_90 = *(undefined8 *)(param_1 + 0x128);
    uStack_80 = *(undefined8 *)(param_1 + 0x138);
    _CMTimeAdd(&dStack_50,&dStack_70,&uStack_90);
    param_4[1] = dStack_48;
    *param_4 = dStack_50;
    param_4[2] = dStack_40;
    uVar2 = param_1;
    func_0x00010c2907a0();
    if (((int)uVar2 != 0) && (uVar2 = param_1, func_0x00010c0712a0(), (uVar2 & 1) == 0)) {
      dStack_68 = param_4[1];
      dStack_70 = *param_4;
      dStack_60 = param_4[2];
      func_0x00010bfb71e0(&dStack_50,param_1);
      param_4[1] = dStack_48;
      *param_4 = dStack_50;
      param_4[2] = dStack_40;
    }
  }
  return uVar1;
}



/* Entry: 108ce2520; end: 108ce2553; -[SCVideoFrameSource acquirePixelBufferForItemTime:forSegmentAtIndex:itemTimeForDisplay:] */

void FUN_108ce2520(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  uStack_20 = param_3[2];
  func_0x00010beedc60(param_1,param_2,&uStack_30,param_5);
  return;
}



/* Entry: 108ce2554; end: 108ce2587; -[SCVideoFrameSource hasNewPixelBufferForItemTime:] */

void FUN_108ce2554(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  uStack_20 = param_3[2];
  func_0x00010bfd96e0(*(undefined8 *)(param_1 + 0x110),param_2,&uStack_30);
  return;
}



/* Entry: 108ce2588; end: 108ce2693; -[SCVideoFrameSource remakeVideoOutput] */

void FUN_108ce2588(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x110) != 0) {
    lVar1 = param_1;
    func_0x00010c100ae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d760();
    _objc_release(lVar1);
  }
  puVar2 = PTR__OBJC_CLASS___AVPlayerItemVideoOutput_1126d13c8;
  _objc_alloc();
  lVar1 = param_1;
  func_0x00010c29a7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0361e0(puVar2,param_2,lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x110);
  *(undefined **)(param_1 + 0x110) = puVar2;
  _objc_release(uVar4);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c29a780(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2102a0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c100ae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29a780(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa4c0(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar1);
  *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0x100) + 1;
  return;
}



/* Entry: 108ce2694; end: 108ce26e7; -[SCVideoFrameSource videoTrack] */

void FUN_108ce2694(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010c279200(uVar1,param_2,*(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108ce26e8; end: 108ce273b; -[SCVideoFrameSource baseAudioTrack] */

void FUN_108ce26e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010c279200(uVar1,param_2,*(undefined8 *)PTR__AVMediaTypeAudio_110348070);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108ce273c; end: 108ce2763; -[SCVideoFrameSource setPlaybackBufferMonitoringEnabled:] */

void FUN_108ce273c(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0xb8) != param_3) {
    *(char *)(param_1 + 0xb8) = (char)param_3;
    if (*(long *)(param_1 + 0xe0) != 0) {
      if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be66990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__observePlayerItemBuffer_112577400);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bed1b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__unobservePlayerItemBuffer_112592088);
      return;
    }
  }
  return;
}



/* Entry: 108ce2764; end: 108ce2847; -[SCVideoFrameSource multiSnapsCount] */

long FUN_108ce2764(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [48];
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (*(long *)(param_1 + 0x70) == 0) {
    func_0x00010c0ed4c0(auStack_78,param_1);
    uStack_88 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_90 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_80 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    _CMTimeRangeMake(auStack_60,&uStack_90,auStack_78);
    func_0x00010c297240(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a100();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    *(undefined **)(param_1 + 0x70) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar1);
  }
  func_0x00010c0d24a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 108ce2848; end: 108ce28e7; -[SCVideoFrameSource startTimeForSnapAtIndex:] */

void FUN_108ce2848(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_2 + 0x70);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_60,lVar1);
  }
  uStack_70 = *(undefined8 *)(param_2 + 0x138);
  uStack_78 = *(undefined8 *)(param_2 + 0x130);
  uStack_80 = *(undefined8 *)(param_2 + 0x128);
  uStack_98 = uStack_58;
  uStack_a0 = uStack_60;
  uStack_90 = uStack_50;
  _CMTimeAdd(param_1,&uStack_80,&uStack_a0);
  _objc_release(lVar1);
  return;
}



/* Entry: 108ce28e8; end: 108ce2983; -[SCVideoFrameSource endTimeForSnapAtIndex:] */

void FUN_108ce28e8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  func_0x00010c250f60(auStack_48);
  lVar1 = *(long *)(param_2 + 0x70);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_80,lVar1);
  }
  uStack_98 = uStack_60;
  uStack_a0 = uStack_68;
  uStack_90 = uStack_58;
  _CMTimeAdd(param_1,auStack_48,&uStack_a0);
  _objc_release(lVar1);
  return;
}



/* Entry: 108ce2984; end: 108ce29bb; -[SCVideoFrameSource assetVideoTrack] */

void FUN_108ce2984(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf0b060();
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ce29bc; end: 108ce2af7; -[SCVideoFrameSource _addBaseAudioTrackToComposition:] */

/* WARNING: Removing unreachable block (ram,0x000108ce2ac0) */

void FUN_108ce29bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [48];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf15e80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = 0;
    _objc_release(uVar2);
    func_0x00010c277e40(lVar1);
    uVar2 = param_3;
    func_0x00010bef9f20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = uVar2;
    _objc_release(uVar3);
    func_0x00010befa140(*(undefined8 *)(param_1 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010bf8b160(&uStack_90,param_1);
    uVar5 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar4 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uVar3 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_b0 = uVar4;
    uStack_a8 = uVar5;
    uStack_a0 = uVar3;
    _CMTimeRangeMake(auStack_70,&uStack_b0,&uStack_90);
    uStack_90 = uVar4;
    uStack_88 = uVar5;
    uStack_80 = uVar3;
    func_0x00010c067160(uVar2);
    _objc_retain(0);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 108ce2af8; end: 108ce2c8b; -[SCVideoFrameSource _addCombinedAudioTracksToComposition:] */

void FUN_108ce2af8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x00010bef6fa0(param_1,param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),param_3);
  puVar1 = PTR__OBJC_CLASS___AVMutableAudioMix_1126bf588;
  func_0x00010bf0f320();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined **)(param_1 + 0xa8) = puVar1;
  _objc_release(uVar6);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if (*(int *)(param_1 + 0x98) != 0) {
    puVar2 = PTR__OBJC_CLASS___AVMutableAudioMixInputParameters_1126bf590;
    func_0x00010bf0f3a0(PTR__OBJC_CLASS___AVMutableAudioMixInputParameters_1126bf590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c218f60();
    uVar8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar7 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uVar6 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_60 = uVar7;
    uStack_58 = uVar8;
    uStack_50 = uVar6;
    func_0x00010c2241c0(0x3f800000,puVar2,param_2,&uStack_60);
    func_0x00010befa140(puVar1,param_2,puVar2);
    lVar3 = param_1;
    func_0x00010bf15e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___AVMutableAudioMixInputParameters_1126bf590;
      func_0x00010bf0f3a0(PTR__OBJC_CLASS___AVMutableAudioMixInputParameters_1126bf590);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x90);
      func_0x00010c277e40(uVar5);
      func_0x00010c218f60(puVar4,param_2,uVar5);
      uStack_60 = uVar7;
      uStack_58 = uVar8;
      uStack_50 = uVar6;
      func_0x00010c2241c0(0,puVar4,param_2,&uStack_60);
      func_0x00010befa140(puVar1,param_2,puVar4);
      _objc_release(puVar4);
    }
    _objc_release(puVar2);
  }
  func_0x00010bdcd2c0(*(undefined4 *)(param_1 + 0x30),param_1,param_2,puVar1,
                      *(undefined8 *)(param_1 + 0x48));
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c1ad580(*(undefined8 *)(param_1 + 0xa8),param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 108ce2c8c; end: 108ce2e1b; -[SCVideoFrameSource assetComposition] */

/* WARNING: Removing unreachable block (ram,0x000108ce2dc0) */

void FUN_108ce2c8c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_60 [48];
  
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 == 0) {
    if (*(long *)(param_1 + 0xd8) == 0) {
      lVar5 = 0;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
      func_0x00010bf45600();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 8);
      *(undefined **)(param_1 + 8) = puVar1;
      _objc_release(uVar3);
      lVar2 = param_1;
      func_0x00010c29b800(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc6000(param_1);
      lVar5 = param_1;
      func_0x00010c2909e0();
      if ((int)lVar5 != 0) {
        func_0x00010bdc6540(param_1);
      }
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010bef9f20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      _objc_release(uVar4);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bf8b160(&uStack_80,param_1);
      uVar7 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uVar6 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uVar4 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      uStack_a0 = uVar6;
      uStack_98 = uVar7;
      uStack_90 = uVar4;
      _CMTimeRangeMake(auStack_60,&uStack_a0,&uStack_80);
      uStack_80 = uVar6;
      uStack_78 = uVar7;
      uStack_70 = uVar4;
      func_0x00010c067160(uVar3);
      _objc_retain(0);
      if (*(long *)(param_1 + 0x10) != 0) {
        func_0x00010c1e7640(*(undefined8 *)(param_1 + 0xc0),param_1);
      }
      lVar5 = *(long *)(param_1 + 8);
      _objc_retain(lVar5);
      _objc_release(lVar2);
      _objc_release(0);
    }
  }
  else {
    _objc_retain(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 108ce2e1c; end: 108ce2e93; -[SCVideoFrameSource _videoCompositionForAsset:] */

void FUN_108ce2e1c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bf0b960();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + 0xd8);
  FUN_109126a88();
  if (iVar1 != 0 && lVar2 == 0) {
    lVar2 = param_3;
    func_0x000109127510(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108ce2e94; end: 108ce2ec3; -[SCVideoFrameSource setMultiSnapTimeRanges:] */

void FUN_108ce2e94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0d3c80();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ce2ec4; end: 108ce2ecb; -[SCVideoFrameSource removeSnapAtIndex:] */

void FUN_108ce2ec4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_removeObjectAtIndex__112628f10);
  return;
}



/* Entry: 108ce2ecc; end: 108ce2ed3; -[SCVideoFrameSource isTime:playableInSnapAtIndex:] */

undefined8 FUN_108ce2ecc(void)

{
  return 1;
}



/* Entry: 108ce2ed4; end: 108ce2edb; -[SCVideoFrameSource isTime:seekableInSnapAtIndex:] */

undefined8 FUN_108ce2ed4(void)

{
  return 1;
}



/* Entry: 108ce2edc; end: 108ce2ee3; -[SCVideoFrameSource supportsContinuousAudioPlay] */

undefined8 FUN_108ce2edc(void)

{
  return 0;
}



/* Entry: 108ce2ee4; end: 108ce2ef7; -[SCVideoFrameSource audioTimeForVideoFrameTime:] */

void FUN_108ce2ee4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *param_4;
  param_1[1] = param_4[1];
  *param_1 = uVar1;
  param_1[2] = param_4[2];
  return;
}



/* Entry: 108ce2ef8; end: 108ce2faf; -[SCVideoFrameSource setAudioOverrideAsset:] */

bool FUN_108ce2ef8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != param_3) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = param_3;
    _objc_release(uVar1);
    lVar2 = param_1;
    func_0x00010c2909e0();
    if ((int)lVar2 == 0) {
      lVar2 = param_1;
      func_0x00010bde68e0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x40);
      *(long *)(param_1 + 0x40) = lVar2;
      _objc_release(uVar1);
      func_0x00010c283b80(param_1);
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 8) = 0;
      _objc_release(uVar1);
      func_0x00010bf0b060(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  _objc_release(param_3);
  return lVar3 != param_3;
}



/* Entry: 108ce2fb0; end: 108ce30e7; -[SCVideoFrameSource setMixedAudioAssetTrack:forKey:] */

uint FUN_108ce2fb0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf51e00();
    if (param_3 == 0) {
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,0,param_4);
    }
    else {
      lVar1 = param_1;
      func_0x00010be60920(*(undefined4 *)(param_3 + 8),param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,lVar1,param_4);
      _objc_release(lVar1);
    }
    uVar3 = uVar2;
    func_0x00010c071ae0(uVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    if ((uVar3 & 1) == 0) {
      lVar1 = param_1;
      func_0x00010c2909e0();
      if ((int)lVar1 == 0) {
        lVar1 = param_1;
        func_0x00010bde68e0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 0x40);
        *(long *)(param_1 + 0x40) = lVar1;
        _objc_release(uVar4);
        func_0x00010c283b80(param_1);
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(param_1 + 8) = 0;
        _objc_release(uVar4);
        func_0x00010bf0b060(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
    }
    uVar5 = (uint)uVar3 ^ 1;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 108ce30e8; end: 108ce3317; -[SCVideoFrameSource updateVolumeProportion:forAudioTrackWithKey:] */

void FUN_108ce30e8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    fVar7 = *(float *)(param_2 + 0x30);
    fVar9 = 0.0;
    if (0.0 <= (float)param_1) {
      fVar9 = (float)param_1;
    }
    *(float *)(param_2 + 0x30) = fVar9;
    if (fVar9 == fVar7) goto LAB_108ce32cc;
  }
  else {
    lVar2 = *(long *)(param_2 + 0x20);
    func_0x00010c0e00e0(lVar2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) goto LAB_108ce32cc;
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c0e00e0(uVar3,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_2 + 0x20);
    func_0x00010c0e00e0(lVar2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = 0;
    fVar9 = 0.0;
    if (lVar2 != 0) {
      fVar9 = *(float *)(lVar2 + 8);
    }
    _objc_release();
    lVar2 = param_2;
    func_0x00010be60920(param_1,param_2,param_3,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x20),param_3,lVar2,param_4);
    _objc_release(lVar2);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar2 = *(long *)(param_2 + 0x20);
    func_0x00010c0e00e0(lVar2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      uVar8 = *(undefined4 *)(lVar2 + 8);
    }
    func_0x00010c0df740(uVar8,puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    uVar5 = *(undefined8 *)(param_2 + 0x50);
    func_0x00010c0e00e0(uVar5,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar1,param_3,puVar4,uVar5);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(lVar2);
    lVar2 = *(long *)(param_2 + 0x20);
    func_0x00010c0e00e0(lVar2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      fVar7 = 0.0;
    }
    else {
      fVar7 = *(float *)(lVar2 + 8);
    }
    _objc_release();
    _objc_release(uVar3);
    if (fVar7 == fVar9) goto LAB_108ce32cc;
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcd2c0(*(undefined4 *)(param_2 + 0x30),param_2,param_3,puVar4,
                      *(undefined8 *)(param_2 + 0x48));
  puVar6 = puVar4;
  func_0x00010bf51e00(puVar4);
  func_0x00010c1ad580(*(undefined8 *)(param_2 + 0xa0),param_3,puVar6);
  _objc_release(puVar6);
  func_0x00010c16be60(*(undefined8 *)(param_2 + 0x40),param_3,*(undefined8 *)(param_2 + 0xa0));
  func_0x00010c283b80(param_2);
  _objc_release(puVar4);
LAB_108ce32cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108ce3318; end: 108ce3587; -[SCVideoFrameSource _appendMixedTrackVolumesToAVAudioMixInputParameters:separateBaseAudioVolumeProportion:audioTrackVolumeProportions:] */

void FUN_108ce3318(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *unaff_x22;
  undefined *puVar8;
  undefined *unaff_x23;
  ulong uVar9;
  undefined *unaff_x24;
  long lVar10;
  undefined *puVar11;
  float fVar12;
  undefined8 uVar13;
  double dVar14;
  float fVar15;
  ulong unaff_d9;
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 auStack_308 [128];
  long lStack_288;
  ulong uStack_280;
  ulong uStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  ulong uStack_248;
  undefined1 *puStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [128];
  undefined1 auStack_110 [128];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar13 = 0;
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  puStack_1c0 = (undefined8 *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  puVar11 = param_5;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar11;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    unaff_x23 = (undefined *)*puStack_1c0;
    do {
      unaff_x24 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_1c0 != unaff_x23) {
          _objc_enumerationMutation(puVar11);
        }
        func_0x00010bfb2c80(*(undefined8 *)(lStack_1c8 + (long)unaff_x24 * 8));
        param_1 = (ulong)(uint)((float)param_1 + (float)uVar13);
        unaff_x24 = unaff_x24 + 1;
      } while (puVar1 != unaff_x24);
      puVar1 = puVar11;
      func_0x00010bf52a60(puVar11,param_3,&uStack_1d0,auStack_110,0x10);
      unaff_x22 = (undefined *)0x0;
    } while (puVar1 != (undefined *)0x0);
  }
  _objc_release(puVar11);
  uVar4 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  lStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  plStack_200 = (long *)0x0;
  _objc_retain(param_5);
  puVar2 = param_5;
  func_0x00010bf52a60(param_5,param_3,&uStack_210,auStack_190,0x10);
  puVar1 = PTR__kCMTimeZero_110348670;
  if (puVar2 != (undefined *)0x0) {
    lVar10 = *plStack_200;
    do {
      puVar11 = (undefined *)0x0;
      do {
        uVar5 = uVar4;
        if (*plStack_200 != lVar10) {
          _objc_enumerationMutation(param_5);
          uVar5 = uVar4;
        }
        puVar8 = *(undefined **)(lStack_208 + (long)puVar11 * 8);
        puVar3 = puVar8;
        func_0x00010c067ec0();
        unaff_x22 = puVar8;
        uVar4 = uVar5;
        if ((int)puVar3 != 0) {
          unaff_x24 = PTR__OBJC_CLASS___AVMutableAudioMixInputParameters_1126bf590;
          func_0x00010bf0f3a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c218f60();
          unaff_x22 = param_5;
          func_0x00010c0e00e0(param_5,param_3,puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb2c80();
          _objc_release(unaff_x22);
          fVar15 = (float)uVar5 / (float)param_1;
          if ((float)param_1 <= 1.0) {
            fVar15 = (float)uVar5;
          }
          uVar4 = (ulong)(uint)fVar15;
          uStack_228 = *(undefined8 *)(puVar1 + 8);
          uStack_230 = *(undefined8 *)puVar1;
          uStack_220 = *(undefined8 *)(puVar1 + 0x10);
          func_0x00010c2241c0(unaff_x24,param_3,&uStack_230);
          func_0x00010befa140(param_4,param_3,unaff_x24);
          _objc_release(unaff_x24);
          unaff_x23 = puVar3;
          unaff_d9 = uVar5;
        }
        puVar11 = puVar11 + 1;
      } while (puVar2 != puVar11);
      puVar2 = param_5;
      func_0x00010bf52a60(param_5,param_3,&uStack_210,auStack_190,0x10);
      puVar11 = (undefined *)0x0;
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(param_5);
  _objc_release(param_5);
  uVar4 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  pcStack_238 = FUN_108ce3588;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = uVar4;
  uStack_280 = unaff_d9;
  uStack_278 = param_1;
  puStack_270 = unaff_x24;
  puStack_268 = unaff_x23;
  puStack_260 = unaff_x22;
  puStack_258 = puVar11;
  puStack_250 = param_5;
  uStack_248 = param_4;
  puStack_240 = &stack0xfffffffffffffff0;
  func_0x00010c2909e0();
  dVar14 = 1.0;
  if (((uVar5 & 1) == 0) && (dVar14 = 0.0, *(long *)(uVar4 + 0x28) == 0)) {
    fVar15 = *(float *)(uVar4 + 0x30);
    lStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    plStack_340 = (long *)0x0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uVar5 = *(ulong *)(uVar4 + 0x20);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf52a60();
    if (uVar6 != 0) {
      lVar10 = *plStack_340;
      do {
        uVar9 = 0;
        do {
          if (*plStack_340 != lVar10) {
            _objc_enumerationMutation(uVar5);
          }
          lVar7 = *(long *)(lStack_348 + uVar9 * 8);
          if (lVar7 == 0) {
            fVar12 = 0.0;
          }
          else {
            fVar12 = *(float *)(lVar7 + 8);
          }
          fVar15 = fVar15 + fVar12;
          uVar9 = uVar9 + 1;
        } while (uVar6 != uVar9);
        uVar6 = uVar5;
        func_0x00010bf52a60(uVar5,param_3,&uStack_350,auStack_308,0x10);
      } while (uVar6 != 0);
    }
    _objc_release();
    fVar12 = *(float *)(uVar4 + 0x30);
    if (1.0 < fVar15) {
      fVar12 = fVar12 / fVar15;
    }
    dVar14 = (double)fVar12;
  }
  *(double *)(uVar4 + 0x38) = dVar14;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c12adc0(*(undefined8 *)(uVar5 + 0x18));
  func_0x00010befa140(*(undefined8 *)(uVar5 + 0x18),param_3,*(undefined8 *)(uVar5 + 0x90));
  lVar10 = *(long *)(uVar5 + 0x28);
  if (lVar10 == 0) {
    lVar10 = *(long *)(uVar5 + 0x20);
    func_0x00010bf529e0();
    if (lVar10 == 0) goto LAB_108ce3724;
    lVar10 = *(long *)(uVar5 + 0x28);
  }
  func_0x00010bf49640(uVar5,param_3,lVar10,*(undefined8 *)(uVar5 + 0x20),
                      *(undefined8 *)(uVar5 + 0x18));
  _objc_retainAutoreleasedReturnValue();
LAB_108ce3724:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ce3588; end: 108ce36d3; -[SCVideoFrameSource updateBaseAudioPlayerItemVolume] */

void FUN_108ce3588(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  double dVar7;
  float fVar8;
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
  uVar1 = param_1;
  func_0x00010c2909e0();
  dVar7 = 1.0;
  if (((uVar1 & 1) == 0) && (dVar7 = 0.0, *(long *)(param_1 + 0x28) == 0)) {
    fVar8 = *(float *)(param_1 + 0x30);
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf52a60();
    if (uVar2 != 0) {
      lVar4 = *plStack_110;
      do {
        uVar5 = 0;
        do {
          if (*plStack_110 != lVar4) {
            _objc_enumerationMutation(uVar1);
          }
          lVar3 = *(long *)(lStack_118 + uVar5 * 8);
          if (lVar3 == 0) {
            fVar6 = 0.0;
          }
          else {
            fVar6 = *(float *)(lVar3 + 8);
          }
          fVar8 = fVar8 + fVar6;
          uVar5 = uVar5 + 1;
        } while (uVar2 != uVar5);
        uVar2 = uVar1;
        func_0x00010bf52a60(uVar1,param_2,&uStack_120,auStack_d8,0x10);
      } while (uVar2 != 0);
    }
    _objc_release();
    fVar6 = *(float *)(param_1 + 0x30);
    if (1.0 < fVar8) {
      fVar6 = fVar6 / fVar8;
    }
    dVar7 = (double)fVar6;
  }
  *(double *)(param_1 + 0x38) = dVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c12adc0(*(undefined8 *)(uVar1 + 0x18));
  func_0x00010befa140(*(undefined8 *)(uVar1 + 0x18),param_2,*(undefined8 *)(uVar1 + 0x90));
  lVar4 = *(long *)(uVar1 + 0x28);
  if (lVar4 == 0) {
    lVar4 = *(long *)(uVar1 + 0x20);
    func_0x00010bf529e0();
    if (lVar4 == 0) goto LAB_108ce3724;
    lVar4 = *(long *)(uVar1 + 0x28);
  }
  func_0x00010bf49640(uVar1,param_2,lVar4,*(undefined8 *)(uVar1 + 0x20),
                      *(undefined8 *)(uVar1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
LAB_108ce3724:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ce36d4; end: 108ce372f; -[SCVideoFrameSource _constructAudioPlayerItemFromOverrideAndMixedTracks] */

void FUN_108ce36d4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x18));
  func_0x00010befa140(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x90));
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (lVar1 == 0) goto LAB_108ce3724;
    lVar1 = *(long *)(param_1 + 0x28);
  }
  func_0x00010bf49640(param_1,param_2,lVar1,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
LAB_108ce3724:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ce3730; end: 108ce3d07; -[SCVideoFrameSource addAudioTracksFromOverride:mixedTracks:assetAudioTracks:toComposition:] */

void FUN_108ce3730(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lStack_200;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (param_3 != 0) {
    uVar9 = param_6;
    func_0x00010bef9f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa140(param_5);
    uVar11 = uVar9;
    func_0x00010c277e40();
    *(int *)(param_1 + 0x98) = (int)uVar11;
    lVar10 = param_3;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar10;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    if (lVar13 != 0) {
      func_0x00010bf8b160(&uStack_150,param_1);
      uVar16 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uVar15 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uVar11 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      uStack_170 = uVar15;
      uStack_168 = uVar16;
      uStack_160 = uVar11;
      _CMTimeRangeMake(&uStack_130,&uStack_170,&uStack_150);
      uStack_178 = 0;
      uStack_150 = uVar15;
      uStack_148 = uVar16;
      uStack_140 = uVar11;
      func_0x00010c067160(uVar9);
      uVar11 = uStack_178;
      _objc_retain(uStack_178);
      _objc_release(uVar11);
    }
    _objc_release(lVar13);
    _objc_release(uVar9);
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
  _objc_release(uVar9);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar1;
  _objc_release(uVar9);
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  _objc_retain(param_4);
  puVar6 = &uStack_1c0;
  puVar8 = auStack_f8;
  uVar9 = 0x10;
  lStack_200 = param_4;
  func_0x00010bf52a60();
  if (lStack_200 != 0) {
    lVar10 = *plStack_1b0;
    do {
      lVar13 = 0;
      do {
        if (*plStack_1b0 != lVar10) {
          _objc_enumerationMutation(param_4);
        }
        lVar2 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = param_6;
        func_0x00010bef9f20(param_6);
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = *(undefined4 *)(lVar2 + 8);
        }
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df740(uVar14,PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar11 = *(undefined8 *)(param_1 + 0x48);
        func_0x00010c277e40(uVar9);
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar11);
        _objc_release(puVar1);
        _objc_release(puVar3);
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c277e40(uVar9);
        func_0x00010c0df760(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x50));
        _objc_release(puVar1);
        func_0x00010befa140(param_5);
        if (lVar2 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = *(long *)(lVar2 + 0x10);
        }
        _objc_retain(lVar12);
        lVar4 = lVar12;
        func_0x00010c279200();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        _objc_release(lVar12);
        if (lVar5 != 0) {
          if (lVar2 == 0) {
            uStack_130 = 0;
            uStack_128 = 0;
            uStack_120 = 0;
          }
          else {
            uStack_128 = *(undefined8 *)(lVar2 + 0x28);
            uStack_130 = *(undefined8 *)(lVar2 + 0x20);
            uStack_120 = *(undefined8 *)(lVar2 + 0x30);
          }
          func_0x00010bf8b160(&uStack_150,param_1);
          puVar6 = &uStack_130;
          _CMTimeCompare(puVar6,&uStack_150);
          if ((int)puVar6 < 1) {
            if (lVar2 == 0) {
              _objc_retain(0);
              uStack_148 = 0;
              uStack_140 = 0;
              uStack_150 = 0;
              _objc_release(0);
              uStack_170 = 0;
              uStack_168 = 0;
              uStack_160 = 0;
            }
            else {
              lVar12 = *(long *)(lVar2 + 0x10);
              _objc_retain(lVar12);
              if (lVar12 == 0) {
                uStack_150 = 0;
                uStack_148 = 0;
                uStack_140 = 0;
              }
              else {
                func_0x00010bf8b160(&uStack_150,lVar12);
              }
              _objc_release(lVar12);
              uStack_168 = *(undefined8 *)(lVar2 + 0x28);
              uStack_170 = *(undefined8 *)(lVar2 + 0x20);
              uStack_160 = *(undefined8 *)(lVar2 + 0x30);
            }
            uStack_1d8 = uStack_148;
            uStack_1e0 = uStack_150;
            uStack_1d0 = uStack_140;
            _CMTimeAdd(&uStack_130,&uStack_170,&uStack_1e0);
            func_0x00010bf8b160(&uStack_170,param_1);
            puVar6 = &uStack_130;
            _CMTimeCompare(puVar6,&uStack_170);
            if (0 < (int)puVar6) {
              func_0x00010bf8b160(&uStack_170,param_1);
              if (lVar2 == 0) {
                uStack_1e0 = 0;
                uStack_1d8 = 0;
                uStack_1d0 = 0;
              }
              else {
                uStack_1d8 = *(undefined8 *)(lVar2 + 0x28);
                uStack_1e0 = *(undefined8 *)(lVar2 + 0x20);
                uStack_1d0 = *(undefined8 *)(lVar2 + 0x30);
              }
              _CMTimeSubtract(&uStack_130,&uStack_170,&uStack_1e0);
              uStack_148 = uStack_128;
              uStack_150 = uStack_130;
              uStack_140 = uStack_120;
            }
            uStack_168 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
            uStack_170 = *(undefined8 *)PTR__kCMTimeZero_110348670;
            uStack_160 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
            uStack_1d8 = uStack_148;
            uStack_1e0 = uStack_150;
            uStack_1d0 = uStack_140;
            _CMTimeRangeMake(&uStack_130,&uStack_170,&uStack_1e0);
            if (lVar2 == 0) {
              uStack_170 = 0;
              uStack_168 = 0;
              uStack_160 = 0;
            }
            else {
              uStack_168 = *(undefined8 *)(lVar2 + 0x28);
              uStack_170 = *(undefined8 *)(lVar2 + 0x20);
              uStack_160 = *(undefined8 *)(lVar2 + 0x30);
            }
            func_0x00010c067160(uVar9);
            _objc_retain(0);
            _objc_release(0);
          }
        }
        _objc_release(lVar5);
        _objc_release(uVar9);
        _objc_release(lVar2);
        lVar13 = lVar13 + 1;
      } while (lStack_200 != lVar13);
      puVar6 = &uStack_1c0;
      puVar8 = auStack_f8;
      uVar9 = 0x10;
      lStack_200 = param_4;
      func_0x00010bf52a60();
    } while (lStack_200 != 0);
  }
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
  _objc_retain(uVar9);
  _objc_retain(puVar8);
  _objc_retain(puVar6);
  _objc_opt_new(puVar1);
  func_0x00010bef6fa0(param_3);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  puVar3 = PTR__OBJC_CLASS___AVMutableAudioMix_1126bf588;
  func_0x00010bf0f320();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_3 + 0xa0);
  *(undefined **)(param_3 + 0xa0) = puVar3;
  _objc_release(uVar9);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if (*(int *)(param_3 + 0x98) != 0) {
    puVar7 = PTR__OBJC_CLASS___AVMutableAudioMixInputParameters_1126bf590;
    func_0x00010bf0f3a0(PTR__OBJC_CLASS___AVMutableAudioMixInputParameters_1126bf590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c218f60();
    func_0x00010c2241c0(0x3f800000,puVar7);
    func_0x00010befa140(puVar3);
    _objc_release(puVar7);
  }
  func_0x00010bdcd2c0(*(undefined4 *)(param_3 + 0x30),param_3);
  puVar7 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010c1ad580(*(undefined8 *)(param_3 + 0xa0));
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
  func_0x00010c100be0(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c4c0();
  func_0x00010c16be60(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108ce3d08; end: 108ce3ec3; -[SCVideoFrameSource constructAudioPlayerItemFromOverride:mixedTracks:assetAudioTracks:] */

void FUN_108ce3d08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010bef6fa0(param_1,param_2,param_3,param_4,param_5,puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___AVMutableAudioMix_1126bf588;
  func_0x00010bf0f320();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined **)(param_1 + 0xa0) = puVar2;
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if (*(int *)(param_1 + 0x98) != 0) {
    puVar3 = PTR__OBJC_CLASS___AVMutableAudioMixInputParameters_1126bf590;
    func_0x00010bf0f3a0(PTR__OBJC_CLASS___AVMutableAudioMixInputParameters_1126bf590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c218f60();
    uStack_58 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_60 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_50 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    func_0x00010c2241c0(0x3f800000,puVar3,param_2,&uStack_60);
    func_0x00010befa140(puVar2,param_2,puVar3);
    _objc_release(puVar3);
  }
  func_0x00010bdcd2c0(*(undefined4 *)(param_1 + 0x30),param_1,param_2,puVar2,
                      *(undefined8 *)(param_1 + 0x48));
  puVar3 = puVar2;
  func_0x00010bf51e00(puVar2);
  func_0x00010c1ad580(*(undefined8 *)(param_1 + 0xa0),param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
  func_0x00010c100be0(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c4c0();
  func_0x00010c16be60(puVar3,param_2,*(undefined8 *)(param_1 + 0xa0));
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108ce3ec4; end: 108ce3ecb; -[SCVideoFrameSource basePlayerItemAudioMix] */

undefined8 FUN_108ce3ec4(void)

{
  return 0;
}



/* Entry: 108ce3ecc; end: 108ce3edf; -[SCVideoFrameSource frameTimeForPlaybackTime:] */

void FUN_108ce3ecc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *param_4;
  param_1[1] = param_4[1];
  *param_1 = uVar1;
  param_1[2] = param_4[2];
  return;
}



/* Entry: 108ce3ee0; end: 108ce3ef3; -[SCVideoFrameSource playbackTimeForFrameTime:] */

void FUN_108ce3ee0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *param_4;
  param_1[1] = param_4[1];
  *param_1 = uVar1;
  param_1[2] = param_4[2];
  return;
}



/* Entry: 108ce3ef4; end: 108ce4047; -[SCVideoFrameSource playbackStartTimeOfMultiSnapAtIndex:] */

void FUN_108ce3ef4(double *param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR__kCMTimeZero_110348670;
  dVar4 = *(double *)PTR__kCMTimeZero_110348670;
  param_1[1] = *(double *)(PTR__kCMTimeZero_110348670 + 8);
  *param_1 = dVar4;
  param_1[2] = *(double *)(puVar1 + 0x10);
  uVar2 = param_2;
  func_0x00010c0d24a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  if (uVar3 != 0) {
    uVar2 = param_2;
    func_0x00010c0d24a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 == 0) {
      uStack_58 = 0;
      dStack_60 = 0.0;
      uStack_48 = 0;
      uStack_50 = 0;
      dStack_68 = 0.0;
      dStack_70 = 0.0;
    }
    else {
      func_0x00010bdc1120(&dStack_70,uVar3);
    }
    param_1[1] = dStack_68;
    *param_1 = dStack_70;
    param_1[2] = dStack_60;
    dVar4 = dStack_70;
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c2907a0();
    if (((int)uVar2 != 0) && (uVar2 = param_2, func_0x00010c0712a0(), (uVar2 & 1) == 0)) {
      dStack_68 = param_1[1];
      dVar4 = *param_1;
      dStack_60 = param_1[2];
      dStack_70 = dVar4;
      func_0x00010c1004e0(param_1,param_2,param_3,&dStack_70);
    }
  }
  func_0x00010c11fdc0(param_2);
  dStack_88 = param_1[1];
  dStack_90 = *param_1;
  dStack_80 = param_1[2];
  _CMTimeMultiplyByFloat64(&dStack_70,1.0 / dVar4,&dStack_90);
  param_1[1] = dStack_68;
  *param_1 = dStack_70;
  param_1[2] = dStack_60;
  return;
}


