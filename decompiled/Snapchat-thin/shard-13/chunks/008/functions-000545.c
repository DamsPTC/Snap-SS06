/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ad7df94; end: 10ad7dfa3; -[LSAVideoPlayer numChannels] */

void FUN_10ad7df94(long param_1)

{
  if (*(long *)(param_1 + 0x68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0ddd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x68),PTR_s_numChannels_112615160);
    return;
  }
  return;
}



/* Entry: 10ad7dfa4; end: 10ad7dfeb; -[LSAVideoPlayer setAudioProcessCallback:] */

void FUN_10ad7dfa4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = *param_3;
  (**(code **)*puVar1)(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010ad7dfe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3[1] + 0x10))(puVar1,param_3 + 1);
  return;
}



/* Entry: 10ad7dfec; end: 10ad7e2c3; -[LSAVideoPlayer copyNextFrame] */

ulong FUN_10ad7dfec(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  double dStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  double dStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  double dStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_sync_enter(param_2);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uVar1 = *(ulong *)(param_2 + 0x38);
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ef240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = uVar2;
  func_0x00010bf52a60();
  if (uVar3 != 0) {
    lVar6 = *plStack_130;
    do {
      uVar7 = 0;
      do {
        if (*plStack_130 != lVar6) {
          _objc_enumerationMutation(uVar2);
        }
        uVar1 = *(ulong *)(lStack_138 + uVar7 * 8);
        puVar4 = PTR__OBJC_CLASS___AVPlayerItemVideoOutput_1126d13c8;
        _objc_opt_class(PTR__OBJC_CLASS___AVPlayerItemVideoOutput_1126d13c8);
        uVar5 = uVar1;
        _objc_opt_isKindOfClass(uVar1,puVar4);
        if ((uVar5 & 1) != 0) {
          _objc_retain(uVar1);
          uVar3 = param_2;
          func_0x00010c100720();
          _objc_retainAutoreleasedReturnValue();
          if (uVar3 == 0) {
            dStack_158 = 0.0;
            uStack_150 = 0;
            uStack_148 = 0;
          }
          else {
            func_0x00010bf60480(&dStack_158,uVar3);
          }
          _objc_release(uVar3);
          uStack_168 = uStack_150;
          dStack_170 = dStack_158;
          uStack_160 = uStack_148;
          uVar3 = uVar1;
          func_0x00010bfd96e0();
          if ((int)uVar3 == 0) {
LAB_10ad7e1cc:
            *param_1 = 0;
          }
          else {
            dStack_170 = 0.0;
            uStack_168 = 0;
            uStack_160 = 0;
            uStack_188 = uStack_150;
            dStack_190 = dStack_158;
            uStack_180 = uStack_148;
            uVar3 = uVar1;
            func_0x00010bf52140();
            *param_1 = uVar3;
            uStack_188 = uStack_168;
            dStack_190 = dStack_170;
            uStack_180 = uStack_160;
            dVar8 = dStack_170;
            _CMTimeGetSeconds(&dStack_190);
            dVar9 = dVar8;
            func_0x00010c0cd640(param_2);
            if ((float)dVar8 < SUB84(dVar9,0)) {
              FUN_10ad579f0(param_1);
              goto LAB_10ad7e1cc;
            }
            func_0x00010c1c7b20(0,param_2);
          }
          _objc_release(uVar1);
          _objc_release(uVar2);
          goto LAB_10ad7e1f0;
        }
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
      uVar3 = uVar2;
      func_0x00010bf52a60();
    } while (uVar3 != 0);
  }
  _objc_release(uVar2);
  *param_1 = 0;
LAB_10ad7e1f0:
  _objc_sync_exit(param_2);
  uVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return uVar3;
  }
  ___stack_chk_fail();
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_sync_exit(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  if ((*(char *)(uVar3 + 9) == '\x01') && ((*(byte *)(uVar3 + 0x7c) & 1) != 0)) {
    return (ulong)(*(long *)(uVar3 + 0x28) != 0x7fffffffffffffff);
  }
  return 0;
}



/* Entry: 10ad7e2c4; end: 10ad7e2f3; -[LSAVideoPlayer isReady] */

bool FUN_10ad7e2c4(long param_1)

{
  if ((*(char *)(param_1 + 9) == '\x01') && ((*(byte *)(param_1 + 0x7c) & 1) != 0)) {
    return *(long *)(param_1 + 0x28) != 0x7fffffffffffffff;
  }
  return false;
}



/* Entry: 10ad7e2f4; end: 10ad7e31b; -[LSAVideoPlayer playCount] */

long FUN_10ad7e2f4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    func_0x00010c0b5740();
    return lVar1;
  }
  return *(long *)(param_1 + 0x58);
}



/* Entry: 10ad7e31c; end: 10ad7e35b; -[LSAVideoPlayer currentTime] */

float FUN_10ad7e31c(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  if (*(long *)(param_2 + 0x38) == 0) {
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_18 = 0;
  }
  else {
    func_0x00010bf60480(&uStack_28);
  }
  _CMTimeGetSeconds(&uStack_28);
  return (float)(double)CONCAT44(uVar2,uVar1);
}



/* Entry: 10ad7e35c; end: 10ad7e427; -[LSAVideoPlayer _startTime] */

void FUN_10ad7e35c(undefined8 *param_1,float param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x00010c0fff40();
  puVar1 = PTR__kCMTimeZero_110348670;
  if (param_2 < 0.0) {
    lVar2 = *(long *)(param_3 + 0x38);
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      func_0x00010bf8b160(param_1,lVar3);
    }
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  uVar4 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  param_1[1] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  *param_1 = uVar4;
  param_1[2] = *(undefined8 *)(puVar1 + 0x10);
  return;
}



/* Entry: 10ad7e428; end: 10ad7e4f3; -[LSAVideoPlayer _endTime] */

void FUN_10ad7e428(undefined8 *param_1,float param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x00010c0fff40();
  puVar1 = PTR__kCMTimeZero_110348670;
  if (0.0 < param_2) {
    lVar2 = *(long *)(param_3 + 0x38);
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      func_0x00010bf8b160(param_1,lVar3);
    }
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  uVar4 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  param_1[1] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  *param_1 = uVar4;
  param_1[2] = *(undefined8 *)(puVar1 + 0x10);
  return;
}



/* Entry: 10ad7e4f4; end: 10ad7e5f3; -[LSAVideoPlayer playedToEnd:] */

void FUN_10ad7e4f4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_40 [24];
  undefined1 auStack_28 [8];
  
  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
  if (*(char *)(param_1 + 10) == '\x01') {
    _objc_initWeak(auStack_28,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bec1c00(auStack_40,param_1);
    uStack_78 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_80 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_70 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_60 = uStack_80;
    uStack_58 = uStack_78;
    uStack_50 = uStack_70;
    _objc_copyWeak(auStack_88,auStack_28);
    func_0x00010c157300(uVar1);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 10ad7e5f4; end: 10ad7e63b;  */

void FUN_10ad7e5f4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c13d1c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ad7e63c; end: 10ad7e747; -[LSAVideoPlayer createOutput] */

void FUN_10ad7e63c(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  char *in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar13;
  char *pcVar14;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [24];
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_c0;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___AVPlayerItemVideoOutput_1126d13c8;
  _objc_alloc(PTR__OBJC_CLASS___AVPlayerItemVideoOutput_1126d13c8);
  uStack_48 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = &uStack_48;
  uVar12 = 1;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  func_0x00010c0361e0(puVar2);
  _objc_release(puVar4);
  puVar5 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar3);
  __Unwind_Resume();
  lStack_c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  _objc_retain(uVar12);
  puVar2 = PTR_s_status_112672580;
  _NSStringFromSelector(PTR_s_status_112672580);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar10;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)puVar3 == 0) {
    puStack_1d8 = PTR_PTR_1127012a8;
    puStack_1e0 = puVar5;
    _objc_msgSendSuper2(&puStack_1e0,PTR_s_observeValueForKeyPath_ofObject__112615e88,puVar10,
                        puVar11,uVar12,in_x5);
    goto LAB_10ad7ea9c;
  }
  bVar1 = puVar5[9];
  if (PTR_LOOP_113307bc0 == in_x5) {
    in_x5 = *(char **)(puVar5 + 0x38);
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = in_x5;
    func_0x00010c252d60();
    _objc_release(in_x5);
    if (pcVar7 == (char *)0x2) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        in_x5 = *(char **)(puVar5 + 0x38);
        func_0x00010bf5f0a0();
        _objc_retainAutoreleasedReturnValue();
        pcVar14 = in_x5;
        func_0x00010bf987e0();
        _objc_retainAutoreleasedReturnValue();
        pcVar8 = pcVar14;
        func_0x00010c09e4e0();
        _objc_retainAutoreleasedReturnValue();
        pcVar9 = pcVar8;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
        pcVar7 = "";
        if (pcVar9 != (char *)0x0) {
          pcVar7 = pcVar9;
        }
        func_0x00010ae06f08(0,1,&UNK_10f6ab2de,&UNK_10f6ab386,0x18a,&UNK_10f6ab3c8,in_x6,in_x7,
                            pcVar7);
        _objc_release(pcVar8);
        _objc_release(pcVar14);
        _objc_release(in_x5);
      }
    }
    else if (pcVar7 == (char *)0x1) {
LAB_10ad7ea24:
      puVar5[9] = 1;
    }
  }
  else if (PTR_LOOP_113307bc8 == in_x5) {
    lVar6 = *(long *)(puVar5 + 0x30);
    func_0x00010c252d60();
    if (lVar6 != 2) {
      if (lVar6 != 1) goto LAB_10ad7ea2c;
      in_x5 = *(char **)(puVar5 + 0x30);
      func_0x00010c0b5860();
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = in_x5;
      func_0x00010bf529e0();
      _objc_release(in_x5);
      if (pcVar7 < (char *)0xb) {
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        lStack_178 = 0;
        uStack_180 = 0;
        uStack_168 = 0;
        plStack_170 = (long *)0x0;
        in_x5 = *(char **)(puVar5 + 0x30);
        func_0x00010c0b5860();
        _objc_retainAutoreleasedReturnValue();
        pcVar7 = in_x5;
        func_0x00010bf52a60();
        if (pcVar7 != (char *)0x0) {
          lVar6 = *plStack_170;
          do {
            pcVar14 = (char *)0x0;
            do {
              if (*plStack_170 != lVar6) {
                _objc_enumerationMutation(in_x5);
              }
              uVar13 = *(undefined8 *)(lStack_178 + (long)pcVar14 * 8);
              puVar2 = puVar5;
              func_0x00010bf57660(puVar5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa4c0(uVar13);
              _objc_release(puVar2);
              pcVar14 = pcVar14 + 1;
            } while (pcVar7 != pcVar14);
            pcVar7 = in_x5;
            func_0x00010bf52a60();
          } while (pcVar7 != (char *)0x0);
        }
        _objc_release(in_x5);
        goto LAB_10ad7ea24;
      }
    }
    func_0x00010bf6f020(puVar5);
    func_0x00010bf582e0(puVar5);
    func_0x00010c13d1c0(puVar5);
  }
LAB_10ad7ea2c:
  if (((puVar5[9] == '\x01') && ((bVar1 & 1) == 0)) && (*(float *)(puVar5 + 0x14) != 0.0)) {
    uVar13 = *(undefined8 *)(puVar5 + 0x38);
    _CMTimeMakeWithSeconds(auStack_198,(double)*(float *)(puVar5 + 0x14),1000);
    uStack_1c8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_1d0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_1c0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_1b0 = uStack_1d0;
    uStack_1a8 = uStack_1c8;
    uStack_1a0 = uStack_1c0;
    func_0x00010c157300(uVar13);
  }
LAB_10ad7ea9c:
  _objc_release(uVar12);
  _objc_release(puVar11);
  puVar2 = puVar10;
  _objc_release(puVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(in_x5);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  __Unwind_Resume(puVar2);
  return;
}



/* Entry: 10ad7e748; end: 10ad7eb97; -[LSAVideoPlayer observeValueForKeyPath:ofObject:change:context:] */

void FUN_10ad7e748(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,char *param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [24];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_s_status_112672580;
  _NSStringFromSelector(PTR_s_status_112672580);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)uVar8 == 0) {
    puStack_188 = PTR_PTR_1127012a8;
    lStack_190 = param_1;
    _objc_msgSendSuper2(&lStack_190,PTR_s_observeValueForKeyPath_ofObject__112615e88,param_3,param_4
                        ,param_5,param_6);
    goto LAB_10ad7ea9c;
  }
  bVar1 = *(byte *)(param_1 + 9);
  if (PTR_LOOP_113307bc0 == param_6) {
    param_6 = *(char **)(param_1 + 0x38);
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = param_6;
    func_0x00010c252d60();
    _objc_release(param_6);
    if (pcVar4 == (char *)0x2) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        param_6 = *(char **)(param_1 + 0x38);
        func_0x00010bf5f0a0();
        _objc_retainAutoreleasedReturnValue();
        pcVar9 = param_6;
        func_0x00010bf987e0();
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = pcVar9;
        func_0x00010c09e4e0();
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar5;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
        pcVar4 = "";
        if (pcVar6 != (char *)0x0) {
          pcVar4 = pcVar6;
        }
        func_0x00010ae06f08(0,1,&UNK_10f6ab2de,&UNK_10f6ab386,0x18a,&UNK_10f6ab3c8,param_7,param_8,
                            pcVar4);
        _objc_release(pcVar5);
        _objc_release(pcVar9);
        _objc_release(param_6);
      }
    }
    else if (pcVar4 == (char *)0x1) {
LAB_10ad7ea24:
      *(undefined1 *)(param_1 + 9) = 1;
    }
  }
  else if (PTR_LOOP_113307bc8 == param_6) {
    lVar3 = *(long *)(param_1 + 0x30);
    func_0x00010c252d60();
    if (lVar3 != 2) {
      if (lVar3 != 1) goto LAB_10ad7ea2c;
      param_6 = *(char **)(param_1 + 0x30);
      func_0x00010c0b5860();
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = param_6;
      func_0x00010bf529e0();
      _objc_release(param_6);
      if (pcVar4 < (char *)0xb) {
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        lStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        plStack_120 = (long *)0x0;
        param_6 = *(char **)(param_1 + 0x30);
        func_0x00010c0b5860();
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = param_6;
        func_0x00010bf52a60();
        if (pcVar4 != (char *)0x0) {
          lVar3 = *plStack_120;
          do {
            pcVar9 = (char *)0x0;
            do {
              if (*plStack_120 != lVar3) {
                _objc_enumerationMutation(param_6);
              }
              uVar8 = *(undefined8 *)(lStack_128 + (long)pcVar9 * 8);
              lVar7 = param_1;
              func_0x00010bf57660(param_1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa4c0(uVar8);
              _objc_release(lVar7);
              pcVar9 = pcVar9 + 1;
            } while (pcVar4 != pcVar9);
            pcVar4 = param_6;
            func_0x00010bf52a60();
          } while (pcVar4 != (char *)0x0);
        }
        _objc_release(param_6);
        goto LAB_10ad7ea24;
      }
    }
    func_0x00010bf6f020(param_1);
    func_0x00010bf582e0(param_1);
    func_0x00010c13d1c0(param_1);
  }
LAB_10ad7ea2c:
  if (((*(char *)(param_1 + 9) == '\x01') && ((bVar1 & 1) == 0)) &&
     (*(float *)(param_1 + 0x14) != 0.0)) {
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    _CMTimeMakeWithSeconds(auStack_148,(double)*(float *)(param_1 + 0x14),1000);
    uStack_178 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_180 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_170 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_160 = uStack_180;
    uStack_158 = uStack_178;
    uStack_150 = uStack_170;
    func_0x00010c157300(uVar8);
  }
LAB_10ad7ea9c:
  _objc_release(param_5);
  _objc_release(param_4);
  uVar8 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume(uVar8);
  return;
}



/* Entry: 10ad7eb98; end: 10ad7eb9b;  */

void FUN_10ad7eb98(void)

{
  return;
}



/* Entry: 10ad7eb9c; end: 10ad7ec4f; -[LSAVideoPlayer destroyLooperAndQueuePlayer] */

void FUN_10ad7eb9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = PTR_s_status_112672580;
  _NSStringFromSelector(PTR_s_status_112672580);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d580(uVar2,param_2,param_1,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ad7ec50; end: 10ad7ed2f; -[LSAVideoPlayer destroyRegularPlayer] */

void FUN_10ad7ec50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf5f0a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_s_status_112672580;
  _NSStringFromSelector(PTR_s_status_112672580);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d580(uVar1,param_2,param_1,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  func_0x00010c130d60(*(undefined8 *)(param_1 + 0x38),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ad7ed30; end: 10ad7ef1f; -[LSAVideoPlayer suspendAudio] */

void FUN_10ad7ed30(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_sync_enter(param_1);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2791a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(lVar2);
        }
        uVar3 = *(undefined8 *)(lStack_128 + lVar6 * 8);
        func_0x00010bf0b740();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bfd8ee0();
        _objc_release(uVar3);
        if ((int)uVar4 != 0) {
          *(undefined1 *)(param_1 + 0xc) = 1;
          goto LAB_10ad7ee58;
        }
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
LAB_10ad7ee58:
  _objc_release(lVar2);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    func_0x00010c289100(param_1);
  }
  _objc_sync_exit(param_1);
  lVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    __Unwind_Resume();
    _objc_retain();
    _objc_sync_enter(lVar2);
    if (*(char *)(lVar2 + 0xc) == '\x01') {
      *(undefined1 *)(lVar2 + 0xc) = 0;
      func_0x00010c289100(lVar2);
    }
    _objc_sync_exit(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 10ad7ef20; end: 10ad7ef87; -[LSAVideoPlayer resumeAudio] */

void FUN_10ad7ef20(long param_1)

{
  _objc_retain();
  _objc_sync_enter(param_1);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 0;
    func_0x00010c289100(param_1);
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ad7ef88; end: 10ad7efef; -[LSAVideoPlayer muteAudio] */

void FUN_10ad7ef88(long param_1)

{
  _objc_retain();
  _objc_sync_enter(param_1);
  *(undefined1 *)(param_1 + 0xb) = 1;
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010c2241a0(0);
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ad7eff0; end: 10ad7f057; -[LSAVideoPlayer unmuteAudio] */

void FUN_10ad7eff0(long param_1)

{
  _objc_retain();
  _objc_sync_enter(param_1);
  *(undefined1 *)(param_1 + 0xb) = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010c2241a0((float)*(double *)(param_1 + 0x60));
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ad7f058; end: 10ad7f12f; -[LSAVideoPlayer dealloc] */

void FUN_10ad7f058(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1;
  func_0x00010c2638c0();
  if (((int)lVar1 == 0) || (*(long *)(param_1 + 0x30) == 0)) {
    func_0x00010bf6f0a0(param_1);
  }
  else {
    func_0x00010bf6f020(param_1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(puVar3);
  puStack_28 = PTR_PTR_1127012a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10ad7f130; end: 10ad7f137; -[LSAVideoPlayer numberOfFrames] */

undefined8 FUN_10ad7f130(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10ad7f138; end: 10ad7f13f; -[LSAVideoPlayer setNumberOfFrames:] */

void FUN_10ad7f138(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10ad7f140; end: 10ad7f147; -[LSAVideoPlayer nativeFrameRate] */

undefined8 FUN_10ad7f140(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10ad7f148; end: 10ad7f14f; -[LSAVideoPlayer setNativeFrameRate:] */

void FUN_10ad7f148(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10ad7f150; end: 10ad7f157; -[LSAVideoPlayer setIsPaused:] */

void FUN_10ad7f150(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10ad7f158; end: 10ad7f15f; -[LSAVideoPlayer looper] */

undefined8 FUN_10ad7f158(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10ad7f160; end: 10ad7f18f; -[LSAVideoPlayer setLooper:] */

void FUN_10ad7f160(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10ad7f190; end: 10ad7f197; -[LSAVideoPlayer player] */

undefined8 FUN_10ad7f190(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10ad7f198; end: 10ad7f1c7; -[LSAVideoPlayer setPlayer:] */

void FUN_10ad7f198(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10ad7f1c8; end: 10ad7f1cf; -[LSAVideoPlayer assetReader] */

undefined8 FUN_10ad7f1c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10ad7f1d0; end: 10ad7f1ff; -[LSAVideoPlayer setAssetReader:] */

void FUN_10ad7f1d0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ad7f200; end: 10ad7f207; -[LSAVideoPlayer asset] */

undefined8 FUN_10ad7f200(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10ad7f208; end: 10ad7f237; -[LSAVideoPlayer setAsset:] */

void FUN_10ad7f208(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ad7f238; end: 10ad7f24b; -[LSAVideoPlayer duration] */

void FUN_10ad7f238(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  param_1[1] = *(undefined8 *)(param_2 + 0x78);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x80);
  return;
}



/* Entry: 10ad7f24c; end: 10ad7f25f; -[LSAVideoPlayer setDuration:] */

void FUN_10ad7f24c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x80) = param_3[2];
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  return;
}



/* Entry: 10ad7f260; end: 10ad7f267; -[LSAVideoPlayer persistentRate] */

undefined4 FUN_10ad7f260(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10ad7f268; end: 10ad7f26f; -[LSAVideoPlayer setPersistentRate:] */

void FUN_10ad7f268(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 10ad7f270; end: 10ad7f277; -[LSAVideoPlayer statusReady] */

undefined1 FUN_10ad7f270(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10ad7f278; end: 10ad7f27f; -[LSAVideoPlayer setStatusReady:] */

void FUN_10ad7f278(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10ad7f280; end: 10ad7f287; -[LSAVideoPlayer filepath] */

undefined8 FUN_10ad7f280(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10ad7f288; end: 10ad7f2b7; -[LSAVideoPlayer setFilepath:] */

void FUN_10ad7f288(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ad7f2b8; end: 10ad7f2cb; -[LSAVideoPlayer setPreferredTransform:] */

void FUN_10ad7f2b8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  uVar3 = param_3[2];
  uVar5 = param_3[5];
  uVar4 = param_3[4];
  *(undefined8 *)(param_1 + 200) = param_3[3];
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  *(undefined8 *)(param_1 + 0xd8) = uVar5;
  *(undefined8 *)(param_1 + 0xd0) = uVar4;
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  return;
}



/* Entry: 10ad7f2cc; end: 10ad7f2d3; -[LSAVideoPlayer shouldLoop] */

undefined1 FUN_10ad7f2cc(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10ad7f2d4; end: 10ad7f2db; -[LSAVideoPlayer setShouldLoop:] */

void FUN_10ad7f2d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 10ad7f2dc; end: 10ad7f2e3; -[LSAVideoPlayer loopCount] */

undefined8 FUN_10ad7f2dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10ad7f2e4; end: 10ad7f2eb; -[LSAVideoPlayer setLoopCount:] */

void FUN_10ad7f2e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 10ad7f2ec; end: 10ad7f2f3; -[LSAVideoPlayer initialTimeSec] */

undefined4 FUN_10ad7f2ec(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 10ad7f2f4; end: 10ad7f2fb; -[LSAVideoPlayer setInitialTimeSec:] */

void FUN_10ad7f2f4(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x14) = param_1;
  return;
}



/* Entry: 10ad7f2fc; end: 10ad7f303; -[LSAVideoPlayer isMuted] */

undefined1 FUN_10ad7f2fc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10ad7f304; end: 10ad7f30b; -[LSAVideoPlayer setIsMuted:] */

void FUN_10ad7f304(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 10ad7f30c; end: 10ad7f313; -[LSAVideoPlayer isSuspended] */

undefined1 FUN_10ad7f30c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10ad7f314; end: 10ad7f31b; -[LSAVideoPlayer setIsSuspended:] */

void FUN_10ad7f314(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 10ad7f31c; end: 10ad7f323; -[LSAVideoPlayer lastVolume] */

undefined8 FUN_10ad7f31c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10ad7f324; end: 10ad7f32b; -[LSAVideoPlayer setLastVolume:] */

void FUN_10ad7f324(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x60) = param_1;
  return;
}



/* Entry: 10ad7f32c; end: 10ad7f333; -[LSAVideoPlayer minDisplayTimeSec] */

undefined4 FUN_10ad7f32c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 10ad7f334; end: 10ad7f33b; -[LSAVideoPlayer setMinDisplayTimeSec:] */

void FUN_10ad7f334(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 10ad7f33c; end: 10ad7f343; -[LSAVideoPlayer isObservingLooperStatus] */

undefined1 FUN_10ad7f33c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 10ad7f344; end: 10ad7f34b; -[LSAVideoPlayer setIsObservingLooperStatus:] */

void FUN_10ad7f344(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xd) = param_3;
  return;
}



/* Entry: 10ad7f34c; end: 10ad7f363; -[LSAVideoPlayer audioStreamFormat] */

void FUN_10ad7f34c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  uVar3 = *(undefined8 *)(param_2 + 0xa0);
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  param_1[1] = *(undefined8 *)(param_2 + 0x90);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = *(undefined8 *)(param_2 + 0xa8);
  return;
}



/* Entry: 10ad7f364; end: 10ad7f37b; -[LSAVideoPlayer setAudioStreamFormat:] */

void FUN_10ad7f364(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  *(undefined8 *)(param_1 + 0xa8) = param_3[4];
  *(undefined8 *)(param_1 + 0xa0) = uVar4;
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  return;
}



/* Entry: 10ad7f37c; end: 10ad7f3cf; -[LSAVideoPlayer audioProcessCallback] */

void FUN_10ad7f37c(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0xe8);
  *param_1 = *(undefined8 *)(param_2 + 0xe0);
  (**(code **)(lVar1 + 0x18))(param_1 + 1);
  return;
}



/* Entry: 10ad7f3d0; end: 10ad7f3d7; -[LSAVideoPlayer audioMixProcessing] */

undefined8 FUN_10ad7f3d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10ad7f3d8; end: 10ad7f407; -[LSAVideoPlayer setAudioMixProcessing:] */

void FUN_10ad7f3d8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ad7f408; end: 10ad7f477; -[LSAVideoPlayer .cxx_destruct] */

void FUN_10ad7f408(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0xe8))((undefined8 *)(param_1 + 0xe8));
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 10ad7f478; end: 10ad7f48f; -[LSAVideoPlayer .cxx_construct] */

void FUN_10ad7f478(long param_1)

{
  *(code **)(param_1 + 0xe0) = FUN_10ac41034;
  *(undefined ***)(param_1 + 0xe8) = &PTR_DAT_110950c70;
  return;
}



/* Entry: 10ad7f490; end: 10ad7f5e7;  */

undefined8 * FUN_10ad7f490(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined7 uStack_48;
  char cStack_41;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010bfad420(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  func_0x000107c2b054(&uStack_58,uVar1);
  *param_1 = &PTR_DAT_110c72468;
  param_1[1] = &PTR_FUN_110c724f8;
  if (cStack_41 < '\0') {
    func_0x000107c3192c(param_1 + 2,uStack_58,uStack_50);
    if (cStack_41 < '\0') {
      __ZdlPv(uStack_58);
    }
  }
  else {
    param_1[3] = uStack_50;
    param_1[2] = uStack_58;
    param_1[4] = CONCAT17(cStack_41,uStack_48);
  }
  _objc_release(uVar2);
  *param_1 = &PTR_FUN_110c72370;
  param_1[1] = &PTR_DAT_110c72418;
  uVar2 = 0x10;
  __Znwm();
  FUN_10ad7f9ac();
  param_1[5] = uVar2;
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10ad7f5e8; end: 10ad7f633;  */

void FUN_10ad7f5e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5)

{
  func_0x00010c10a480(param_1,param_3,*(undefined8 *)param_4[5],param_5,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010ad7f630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_4 + 0x50))(param_2,param_4);
  return;
}



/* Entry: 10ad7f634; end: 10ad7f68b;  */

void FUN_10ad7f634(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c157090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(**(undefined8 **)(param_1 + 0x28),PTR_s_seekSec__112633640)
  ;
  return;
}



/* Entry: 10ad7f68c; end: 10ad7f6ab;  */

float FUN_10ad7f68c(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  func_0x00010c2a0dc0(**(undefined8 **)(param_2 + 0x28));
  return (float)(double)CONCAT44(uVar2,uVar1);
}



/* Entry: 10ad7f6ac; end: 10ad7f6db;  */

void FUN_10ad7f6ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07bc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(**(undefined8 **)(param_1 + 0x28),PTR_s_isReady_1125fc920);
  return;
}



/* Entry: 10ad7f6dc; end: 10ad7f783;  */

void FUN_10ad7f6dc(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  plVar1 = (long *)(*(long **)(param_2 + 0x28))[1];
  if (**(long **)(param_2 + 0x28) == 0) {
    uStack_38 = 0;
  }
  else {
    func_0x00010bf52100(&uStack_38);
    if (**(long **)(param_2 + 0x28) != 0) {
      func_0x00010c106f40(&uStack_70);
      goto LAB_10ad7f734;
    }
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
LAB_10ad7f734:
  (**(code **)(*plVar1 + 0x10))(param_1,plVar1,&uStack_38,&uStack_70,1);
  FUN_10ad579f0(&uStack_38);
  return;
}



/* Entry: 10ad7f784; end: 10ad7f79b;  */

void FUN_10ad7f784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c149850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (**(undefined8 **)(param_1 + 0x28),PTR_s_sampleRate_112630030);
  return;
}



/* Entry: 10ad7f79c; end: 10ad7f7db;  */

long FUN_10ad7f79c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = **(undefined8 **)(param_1 + 0x28);
  func_0x00010c0ddd20(uVar1);
  return (long)(int)uVar1;
}



/* Entry: 10ad7f7dc; end: 10ad7f887;  */

void FUN_10ad7f7dc(undefined1 *param_1,long *param_2)

{
  undefined1 *unaff_x19;
  undefined8 uVar1;
  undefined1 *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar1 = **(undefined8 **)(param_1 + 0x28);
    *(long *)((long)register0x00000008 + -0x68) = *param_2;
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x68);
    param_2 = param_2 + 1;
    (**(code **)(*param_2 + 0x18))((undefined1 *)((long)register0x00000008 + -0x60));
    func_0x00010c16c0c0(uVar1);
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x60);
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x60))();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28))
    break;
    ___stack_chk_fail();
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x60))
              ((undefined1 *)((long)register0x00000008 + -0x60));
    unaff_x30 = FUN_10ad7f888;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -8;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
  }
  return;
}



/* Entry: 10ad7f888; end: 10ad7f88f;  */

void FUN_10ad7f888(undefined1 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar1 = **(undefined8 **)(param_1 + 0x20);
    *(long *)((long)register0x00000008 + -0x68) = *param_2;
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x68);
    param_2 = param_2 + 1;
    (**(code **)(*param_2 + 0x18))((undefined1 *)((long)register0x00000008 + -0x60));
    func_0x00010c16c0c0(uVar1);
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x60);
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x60))();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28))
    break;
    ___stack_chk_fail();
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x60))
              ((undefined1 *)((long)register0x00000008 + -0x60));
    unaff_x30 = FUN_10ad7f888;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
  }
  return;
}



/* Entry: 10ad7f890; end: 10ad7f91f;  */

undefined8 * FUN_10ad7f890(undefined8 *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_110c72370;
  param_1[1] = &PTR_DAT_110c72418;
  puVar3 = (undefined8 *)param_1[5];
  param_1[5] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *puVar3;
    *puVar3 = 0;
    _objc_release(uVar1);
    plVar2 = (long *)puVar3[1];
    puVar3[1] = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    _objc_release(*puVar3);
    __ZdlPv(puVar3);
  }
  *param_1 = &PTR_DAT_110c72468;
  param_1[1] = &PTR_FUN_110c724f8;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  return param_1;
}



/* Entry: 10ad7f920; end: 10ad7f92b;  */

undefined8 * FUN_10ad7f920(undefined8 *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_110c72370;
  param_1[1] = &PTR_DAT_110c72418;
  puVar3 = (undefined8 *)param_1[5];
  param_1[5] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *puVar3;
    *puVar3 = 0;
    _objc_release(uVar1);
    plVar2 = (long *)puVar3[1];
    puVar3[1] = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    _objc_release(*puVar3);
    __ZdlPv(puVar3);
  }
  *param_1 = &PTR_DAT_110c72468;
  param_1[1] = &PTR_FUN_110c724f8;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  return param_1;
}



/* Entry: 10ad7f92c; end: 10ad7f957;  */

void FUN_10ad7f92c(void)

{
  FUN_10ad7f890();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad7f958; end: 10ad7f963;  */

void FUN_10ad7f958(void)

{
  return;
}



/* Entry: 10ad7f964; end: 10ad7f98f;  */

float FUN_10ad7f964(float param_1,long *param_2)

{
  float fVar1;
  
  fVar1 = param_1;
  (**(code **)(*param_2 + 0x30))();
  return param_1 * fVar1;
}



/* Entry: 10ad7f990; end: 10ad7f9ab;  */

void FUN_10ad7f990(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad7f994);
  (*pcVar1)();
}



/* Entry: 10ad7f9ac; end: 10ad7fa37;  */

undefined8 * FUN_10ad7f9ac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  _objc_retain(param_2);
  *param_1 = 0;
  puVar1 = (undefined8 *)0x60;
  __Znwm();
  puVar1[0xb] = 0;
  *puVar1 = &PTR_FUN_110c72148;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  *param_1 = param_2;
  param_1[1] = puVar1;
  _objc_release(0);
  return param_1;
}



/* Entry: 10ad7fa38; end: 10ad7fa47; -[LSAVideoWriter initWithURL:outputSize:] */

void FUN_10ad7fa38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c057b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithURL_outputSize_audioInfo_1125f38e0,param_3,0x100000000001,0xac44)
  ;
  return;
}



/* Entry: 10ad7fa48; end: 10ad7fc3b; -[LSAVideoWriter initWithURL:outputSize:audioInfo:] */

undefined8 *
FUN_10ad7fa48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 unaff_x23;
  undefined *unaff_x24;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_5;
  _objc_retain(param_5);
  puStack_a0 = PTR_PTR_1127012b0;
  puVar1 = &uStack_a8;
  uStack_a8 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined2 *)(puVar1 + 6) = 0;
    puVar1[7] = param_1;
    puVar1[8] = param_2;
    *(undefined1 *)(puVar1 + 10) = 0;
    unaff_x23 = 0;
    _dispatch_queue_attr_make_with_qos_class(0,0x19,0xffffffff);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = &UNK_10f6ab40f;
    _dispatch_queue_create(&UNK_10f6ab40f,unaff_x23);
    uVar6 = puVar1[5];
    puVar1[5] = puVar2;
    _objc_release(uVar6);
    uStack_98 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
    unaff_x24 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
    ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2460;
    uStack_88 = *(undefined8 *)PTR__kCVPixelBufferMetalCompatibilityKey_11034a398;
    puStack_70 = PTR____kCFBooleanTrue_11034ab68;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_80 = unaff_x24;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[9];
    puVar1[9] = puVar2;
    _objc_release(uVar6);
    _objc_release(unaff_x24);
    puVar1[0xe] = param_6;
    *(undefined4 *)(puVar1 + 0xf) = param_7;
    puVar5 = param_5;
    func_0x00010bf5a460(puVar1);
    _objc_release(unaff_x23);
  }
  puVar3 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x24);
  _objc_release(unaff_x23);
  _objc_release(puVar1);
  _objc_release(param_5);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_b8 = FUN_10ad7fc3c;
  uStack_e0 = param_6;
  puStack_d8 = puVar3;
  puStack_d0 = puVar1;
  puStack_c8 = param_5;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  uVar6 = puVar4[5];
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_10ad7fccc;
  puStack_f8 = &UNK_110883780;
  puStack_f0 = puVar4;
  puStack_e8 = puVar5;
  _objc_retain(puVar5);
  func_0x000107c27d8c(uVar6,&puStack_110);
  _objc_release(puStack_e8);
  _objc_release(puVar5);
  return puVar5;
}



/* Entry: 10ad7fc3c; end: 10ad7fccb; -[LSAVideoWriter createWriterAsync:] */

void FUN_10ad7fc3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10ad7fccc;
  puStack_48 = &UNK_110883780;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x000107c27d8c(uVar1,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10ad7fccc; end: 10ad8039b;  */

void FUN_10ad7fccc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined *unaff_x22;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = (undefined8 *)PTR__OBJC_CLASS___AVAssetWriter_1126bf5a8;
  _objc_alloc(PTR__OBJC_CLASS___AVAssetWriter_1126bf5a8);
  puStack_110 = (undefined8 *)0x0;
  func_0x00010c057a20();
  puVar7 = puStack_110;
  _objc_retain(puStack_110);
  func_0x00010c16aa80(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar11);
  if (puVar7 == (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___AVAssetWriterInput_1126bf5b0;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uStack_a8 = *(undefined8 *)PTR__AVFormatIDKey_11034cf30;
    ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2478;
    uStack_a0 = *(undefined8 *)PTR__AVSampleRateKey_11034cf60;
    func_0x00010bf0f1a0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uStack_98 = *(undefined8 *)PTR__AVNumberOfChannelsKey_11034cf58;
    puStack_80 = puVar2;
    func_0x00010bf0f1a0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = *(undefined8 *)PTR__AVEncoderBitRateKey_11034cf28;
    ppuStack_70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2490;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_78 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02a040();
    lVar10 = *(long *)(param_1 + 0x20);
    uVar9 = *(undefined8 *)(lVar10 + 8);
    *(undefined **)(lVar10 + 8) = puVar1;
    _objc_release(uVar9);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c198a40(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf0ba20(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef93a0();
    _objc_release(uVar9);
    puVar11 = *(undefined8 **)PTR__AVVideoCodecH264_110348110;
    _objc_retain(puVar11);
    uStack_b8 = *(undefined8 *)PTR__AVVideoAverageBitRateKey_110348108;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_b0 = puVar2;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___AVAssetWriterInput_1126bf5b0;
    _objc_alloc();
    uStack_f8 = *(undefined8 *)PTR__AVVideoCodecKey_110348120;
    uStack_f0 = *(undefined8 *)PTR__AVVideoWidthKey_1103481a0;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_d8 = puVar11;
    func_0x00010c0df720(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = *(undefined8 *)PTR__AVVideoHeightKey_110348168;
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_d0 = puVar3;
    func_0x00010c0df720(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40));
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = *(undefined8 *)PTR__AVVideoCompressionPropertiesKey_110348158;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_c8 = puVar1;
    puStack_c0 = unaff_x22;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02a040();
    lVar10 = *(long *)(param_1 + 0x20);
    uVar9 = *(undefined8 *)(lVar10 + 0x10);
    *(undefined **)(lVar10 + 0x10) = puVar2;
    _objc_release(uVar9);
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar3);
    func_0x00010c198a40(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
    puVar2 = PTR__OBJC_CLASS___AVAssetWriterInputPixelBufferAdaptor_1126d0110;
    _objc_alloc(PTR__OBJC_CLASS___AVAssetWriterInputPixelBufferAdaptor_1126d0110);
    uStack_108 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
    ppuStack_100 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2460;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff46a0(puVar2);
    func_0x00010c1dc000(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar2);
    _objc_release(puVar3);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf0ba20(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010bef93a0();
    _objc_release(uVar9);
    puVar5 = (undefined8 *)0x30;
    __Znwm();
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x18) = puVar5;
    puVar5 = (undefined8 *)0x30;
    __Znwm();
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x20) = puVar5;
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf0ba20(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c251d20();
    _objc_release(uVar9);
    puVar6 = *(undefined8 **)(param_1 + 0x20);
    func_0x00010c0fc920();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010c0fc9c0();
    _objc_release(puVar6);
    if (puVar5 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)(param_1 + 0x20);
      func_0x00010c0fc920();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010c0fc9c0();
      func_0x00010c1dc020(*(undefined8 *)(param_1 + 0x20));
      _objc_release(puVar6);
      func_0x00010c0fc9c0(*(undefined8 *)(param_1 + 0x20));
      _CFRetain();
    }
    _objc_release(unaff_x22);
    _objc_release(puVar11);
  }
  else {
    if ((bRam000000011330a9e8 & 1) != 0) {
      puVar11 = puVar7;
      func_0x00010c09e4e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      puVar5 = puVar11;
      func_0x00010bdc3520();
      puStack_120 = puVar5;
      func_0x00010ae06f08(0,1,&UNK_10f6ab428,&UNK_10f6ab45a,0x53,&UNK_10f6ab48c);
      _objc_release(puVar11);
    }
    puVar8 = (undefined8 *)0x1;
    func_0x00010c227440(*(undefined8 *)(param_1 + 0x20));
    puVar6 = puVar7;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(unaff_x22);
  _objc_release(puVar11);
  __Unwind_Resume();
  if ((*(byte *)(puVar7 + 6) & 1) == 0) {
    pcStack_128 = FUN_10ad8039c;
    *(undefined1 *)(puVar7 + 6) = 1;
    puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_10ad80414;
    puStack_158 = &UNK_110ad88a8;
    uStack_140 = puVar8[1];
    uStack_148 = *puVar8;
    uStack_138 = puVar8[2];
    puStack_150 = puVar7;
    puStack_130 = &stack0xfffffffffffffff0;
    func_0x000107c27d8c(puVar7[5],&puStack_170);
  }
  return;
}



/* Entry: 10ad8039c; end: 10ad80413; -[LSAVideoWriter startSessionAtTimeIfRequired:] */

void FUN_10ad8039c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_10ad80414;
    puStack_38 = &UNK_110ad88a8;
    uStack_20 = param_3[1];
    uStack_28 = *param_3;
    uStack_18 = param_3[2];
    lStack_30 = param_1;
    func_0x000107c27d8c(*(undefined8 *)(param_1 + 0x28),&puStack_50);
  }
  return;
}



/* Entry: 10ad80414; end: 10ad8048b;  */

void FUN_10ad80414(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c2be760();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf0ba20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2508a0();
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 10ad8048c; end: 10ad805fb; -[LSAVideoWriter createPixelBufferForWriting] */

void FUN_10ad8048c(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = param_2;
  func_0x00010c2be760();
  if ((int)lVar2 != 0) {
    *param_1 = 0;
    return;
  }
  lVar2 = param_2;
  func_0x00010bf0ba20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = param_2;
    func_0x00010bf0ba20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c252d60();
    if (lVar4 == 1) {
      lVar4 = param_2;
      func_0x00010c0fc9c0();
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (lVar4 != 0) {
        uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
        func_0x00010c0fc9c0(param_2);
        _CVPixelBufferPoolCreatePixelBuffer(uVar5,param_2,&uStack_48);
        iVar1 = (int)uVar5;
        goto joined_r0x00010ad80580;
      }
    }
    else {
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
  }
  uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  _CVPixelBufferCreate
            (uVar5,(long)*(double *)(param_2 + 0x38),(long)*(double *)(param_2 + 0x40),0x42475241,
             *(undefined8 *)(param_2 + 0x48),&uStack_48);
  iVar1 = (int)uVar5;
joined_r0x00010ad80580:
  if (iVar1 != 0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f6ab428,&UNK_10f6ab4bd,0xa4,&UNK_10f6ab4eb);
    }
    uStack_48 = 0;
  }
  *param_1 = uStack_48;
  return;
}



/* Entry: 10ad805fc; end: 10ad806bf; -[LSAVideoWriter writePixelBuffer:forTime:] */

void FUN_10ad805fc(long param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar2 = *param_3;
  if (lVar2 != 0) {
    lStack_38 = lVar2;
    _CFRetain(lVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc6000000;
    pcStack_70 = FUN_10ad806c0;
    puStack_68 = &UNK_110c72568;
    lStack_60 = param_1;
    lStack_58 = lVar2;
    _CFRetain(lVar2);
    uStack_48 = param_4[1];
    uStack_50 = *param_4;
    uStack_40 = param_4[2];
    func_0x000107c27d8c(uVar1,&puStack_80);
    FUN_10ad579f0(&lStack_58);
    FUN_10ad579f0(&lStack_38);
  }
  return;
}



/* Entry: 10ad806c0; end: 10ad807af;  */

void FUN_10ad806c0(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c2be760();
  if (((uVar2 & 1) == 0) && (lVar3 = *(long *)(param_1 + 0x20), (*(byte *)(lVar3 + 0x31) & 1) == 0))
  {
    func_0x00010be181a0();
    if ((int)lVar3 != 0) {
      iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
      func_0x00010c07bca0();
      if (iVar1 != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0fc920(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uStack_38 = *(undefined8 *)(param_1 + 0x38);
        uStack_40 = *(undefined8 *)(param_1 + 0x30);
        uStack_30 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010bf06f60();
        _objc_release(uVar4);
        return;
      }
    }
    uStack_38 = *(undefined8 *)(param_1 + 0x38);
    uStack_40 = *(undefined8 *)(param_1 + 0x30);
    uStack_30 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bdeb900(auStack_48,*(undefined8 *)(param_1 + 0x20));
    FUN_10ad815cc(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),auStack_48);
    FUN_10ad8159c(auStack_48);
  }
  return;
}



/* Entry: 10ad807b0; end: 10ad807fb;  */

void FUN_10ad807b0(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  lVar1 = *(long *)(param_2 + 0x28);
  *(long *)(param_1 + 0x28) = lVar1;
  if (lVar1 != 0) {
    _CFRetain();
  }
  return;
}



/* Entry: 10ad807fc; end: 10ad80823;  */

void FUN_10ad807fc(long param_1)

{
  FUN_10ad579f0(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10ad80824; end: 10ad808d7; -[LSAVideoWriter writeAudioBuffer:] */

void FUN_10ad80824(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar2 = *param_3;
  lStack_38 = lVar2;
  if (lVar2 != 0) {
    _CFRetain(lVar2);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc6000000;
  pcStack_58 = FUN_10ad808d8;
  puStack_50 = &UNK_110c72598;
  lStack_48 = param_1;
  lStack_40 = lVar2;
  if (lVar2 != 0) {
    _CFRetain(lVar2);
  }
  func_0x000107c27d8c(uVar1,&puStack_68);
  FUN_10ad8159c(&lStack_40);
  FUN_10ad8159c(&lStack_38);
  return;
}



/* Entry: 10ad808d8; end: 10ad8094f;  */

void FUN_10ad808d8(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long *plVar23;
  undefined8 *puVar24;
  
  uVar6 = *(ulong *)(param_1 + 0x20);
  func_0x00010c2be760();
  if (((uVar6 & 1) != 0) || (lVar7 = *(long *)(param_1 + 0x20), (*(byte *)(lVar7 + 0x31) & 1) != 0))
  {
    return;
  }
  func_0x00010be18180();
  if ((int)lVar7 != 0) {
    iVar5 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c07bca0();
    if (iVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf06ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),PTR_s_appendSampleBuffer__11259f5a0,
                 *(undefined8 *)(param_1 + 0x28));
      return;
    }
  }
  puVar8 = *(ulong **)(*(long *)(param_1 + 0x20) + 0x20);
  plVar1 = (long *)(param_1 + 0x28);
  puVar24 = (undefined8 *)puVar8[1];
  puVar19 = (undefined8 *)puVar8[2];
  uVar14 = (long)puVar19 - (long)puVar24;
  uVar6 = 0;
  if (uVar14 != 0) {
    uVar6 = ((long)puVar19 - (long)puVar24) * 0x40 - 1;
  }
  uVar3 = puVar8[4];
  uVar16 = puVar8[5];
  uVar18 = uVar16 + uVar3;
  if (uVar6 != uVar18) goto LAB_10ad81898;
  if (uVar3 < 0x200) {
    puVar21 = (undefined8 *)puVar8[3];
    puVar22 = (undefined8 *)*puVar8;
    if (uVar14 < (ulong)((long)puVar21 - (long)puVar22)) {
      uVar10 = 0x1000;
      plVar13 = plVar1;
      __Znwm();
      if (puVar21 == puVar19) {
        if (puVar24 == puVar22) {
          uVar6 = (long)puVar21 - (long)puVar24 >> 2;
          if (puVar19 == puVar24) {
            uVar6 = 1;
          }
          lVar7 = uVar6 * 2;
          FUN_10ad81a04();
          puVar24 = (undefined8 *)(uVar6 + (lVar7 + 6U & 0xfffffffffffffff8));
          lVar7 = puVar8[2] - (long)puVar8[1];
          puVar19 = puVar24;
          if (lVar7 != 0) {
            puVar19 = (undefined8 *)((long)puVar24 + lVar7);
            puVar21 = (undefined8 *)puVar8[1];
            puVar22 = puVar24;
            do {
              *puVar22 = *puVar21;
              lVar7 = lVar7 + -8;
              puVar21 = puVar21 + 1;
              puVar22 = puVar22 + 1;
            } while (lVar7 != 0);
          }
          uVar14 = *puVar8;
          *puVar8 = uVar6;
          puVar8[1] = (ulong)puVar24;
          puVar8[2] = (ulong)puVar19;
          puVar8[3] = uVar6 + (long)plVar13 * 8;
          if (uVar14 != 0) {
            __ZdlPv(uVar14);
            puVar24 = (undefined8 *)puVar8[1];
          }
        }
        puVar24[-1] = uVar10;
        uVar6 = puVar8[1];
        puVar8[1] = uVar6 - 8;
        uVar10 = *(undefined8 *)(uVar6 - 8);
        puVar8[1] = uVar6;
        goto LAB_10ad8162c;
      }
      *puVar19 = uVar10;
      puVar8[2] = puVar8[2] + 8;
    }
    else {
      plVar13 = (long *)((long)puVar21 - (long)puVar22 >> 2);
      if (puVar21 == puVar22) {
        plVar13 = (long *)0x1;
      }
      plVar11 = plVar1;
      FUN_10ad81a04();
      lVar7 = 0x1000;
      plVar12 = plVar11;
      __Znwm();
      plVar15 = (long *)((long)plVar13 + uVar14);
      plVar17 = plVar13 + (long)plVar11;
      plVar9 = plVar13;
      if (uVar14 == (long)plVar11 * 8) {
        if ((long)uVar14 < 1) {
          plVar15 = (long *)((long)plVar15 - (long)plVar13 >> 2);
          if (puVar19 == puVar24) {
            plVar15 = (long *)0x1;
          }
          plVar9 = plVar15;
          FUN_10ad81a04();
          plVar15 = plVar9 + ((ulong)plVar15 >> 2);
          plVar17 = plVar9 + (long)plVar12;
          if (plVar13 != (long *)0x0) {
            __ZdlPv(plVar13);
          }
        }
        else {
          lVar2 = ((long)plVar15 - (long)plVar13 >> 3) + 1;
          plVar15 = plVar15 + -((ulong)(lVar2 - (lVar2 >> 0x3f)) >> 1);
        }
      }
      plVar13 = plVar15 + 1;
      *plVar15 = lVar7;
      plVar11 = (long *)puVar8[2];
      plVar20 = plVar9;
      if (plVar11 != (long *)puVar8[1]) {
        do {
          plVar9 = plVar20;
          plVar23 = plVar15;
          if (plVar15 == plVar20) {
            if (plVar13 < plVar17) {
              lVar7 = ((long)plVar17 - (long)plVar13 >> 3) + 1;
              lVar2 = (long)plVar13 - (long)plVar20;
              lVar4 = (long)plVar13 - (long)plVar20;
              plVar13 = plVar13 + ((ulong)(lVar7 - (lVar7 >> 0x3f)) >> 1);
              plVar23 = (long *)((long)plVar13 - lVar2);
              if (lVar4 != 0) {
                _memmove(plVar23,plVar15,lVar4);
                plVar12 = plVar15;
              }
            }
            else {
              plVar23 = (long *)((long)plVar17 - (long)plVar20 >> 2);
              if ((long)plVar17 - (long)plVar20 == 0) {
                plVar23 = (long *)0x1;
              }
              plVar9 = plVar23;
              FUN_10ad81a04();
              plVar23 = (long *)((long)plVar9 + ((long)plVar23 * 2 + 6U & 0xfffffffffffffff8));
              lVar7 = (long)plVar13 - (long)plVar20;
              plVar13 = plVar23;
              if (lVar7 != 0) {
                plVar13 = (long *)((long)plVar23 + lVar7);
                plVar17 = plVar23;
                do {
                  *plVar17 = *plVar15;
                  lVar7 = lVar7 + -8;
                  plVar17 = plVar17 + 1;
                  plVar15 = plVar15 + 1;
                } while (lVar7 != 0);
              }
              plVar17 = plVar9 + (long)plVar12;
              if (plVar20 != (long *)0x0) {
                __ZdlPv(plVar20);
              }
            }
          }
          plVar11 = plVar11 + -1;
          plVar15 = plVar23 + -1;
          *plVar15 = *plVar11;
          plVar20 = plVar9;
        } while (plVar11 != (long *)puVar8[1]);
      }
      uVar6 = *puVar8;
      *puVar8 = (ulong)plVar9;
      puVar8[1] = (ulong)plVar15;
      puVar8[2] = (ulong)plVar13;
      puVar8[3] = (ulong)plVar17;
      if (uVar6 != 0) {
        __ZdlPv();
      }
    }
  }
  else {
    puVar8[4] = uVar3 - 0x200;
    uVar10 = *puVar24;
    puVar8[1] = (ulong)(puVar24 + 1);
LAB_10ad8162c:
    FUN_10ad81908(puVar8,uVar10);
  }
  puVar24 = (undefined8 *)puVar8[1];
  uVar16 = puVar8[5];
  uVar18 = uVar16 + puVar8[4];
LAB_10ad81898:
  lVar7 = *plVar1;
  *(long *)(puVar24[uVar18 >> 9] + (uVar18 & 0x1ff) * 8) = lVar7;
  if (lVar7 != 0) {
    _CFRetain();
    uVar16 = puVar8[5];
  }
  puVar8[5] = uVar16 + 1;
  return;
}



/* Entry: 10ad80950; end: 10ad8099b;  */

void FUN_10ad80950(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  lVar1 = *(long *)(param_2 + 0x28);
  *(long *)(param_1 + 0x28) = lVar1;
  if (lVar1 != 0) {
    _CFRetain();
  }
  return;
}



/* Entry: 10ad8099c; end: 10ad809c3;  */

void FUN_10ad8099c(long param_1)

{
  FUN_10ad8159c(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10ad809c4; end: 10ad80a9b; -[LSAVideoWriter finishWritingAtTime:error:] */

bool FUN_10ad809c4(long param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_70 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10ad80a9c;
  uStack_30 = 0x10ad80aac;
  uStack_28 = 0;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10ad80ab4;
  puStack_80 = &UNK_110c725c8;
  uStack_60 = param_3[1];
  uStack_68 = *param_3;
  uStack_58 = param_3[2];
  lStack_78 = param_1;
  puStack_48 = puStack_70;
  func_0x000107c27da4(*(undefined8 *)(param_1 + 0x28),&puStack_98);
  bVar1 = false;
  if (param_4 != (long *)0x0) {
    lVar2 = puStack_48[5];
    _objc_retainAutorelease();
    *param_4 = lVar2;
    bVar1 = lVar2 == 0;
  }
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  return bVar1;
}



/* Entry: 10ad80a9c; end: 10ad80ab3;  */

void FUN_10ad80a9c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10ad80ab4; end: 10ad80cd7;  */

void FUN_10ad80ab4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_80;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c2be760();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (iVar1 == 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x31) = 1;
    func_0x00010be16700(*(undefined8 *)(param_1 + 0x20));
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf0ba20(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95400();
    _objc_release(uVar7);
    func_0x00010c0bb0a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
    puVar3 = (undefined *)0x0;
    _dispatch_semaphore_create();
    puVar4 = *(undefined **)(param_1 + 0x20);
    func_0x00010bf0ba20(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar3);
    func_0x00010bfaff80(puVar4);
    _objc_release(puVar4);
    _dispatch_semaphore_wait(puVar3,0xffffffffffffffff);
    _objc_release(puVar3);
    puStack_80 = puVar3;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar7 = *(undefined8 *)(lVar9 + 0x28);
    *(undefined **)(lVar9 + 0x28) = puVar2;
    _objc_release(uVar7);
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puStack_80);
  _objc_release(puVar4);
  _objc_release(puVar3);
  __Unwind_Resume();
  uVar5 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010bf0ba20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(*(long *)(*(long *)(puVar2 + 0x30) + 8) + 0x28);
  *(undefined8 *)(*(long *)(*(long *)(puVar2 + 0x30) + 8) + 0x28) = uVar7;
  _objc_release(uVar8);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(puVar2 + 0x28));
  return;
}


