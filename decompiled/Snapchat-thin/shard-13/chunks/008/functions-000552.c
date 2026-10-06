/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ad9e364; end: 10ad9e36f;  */

void FUN_10ad9e364(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2241b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             PTR_s_setVolume__112666a90);
  return;
}



/* Entry: 10ad9e370; end: 10ad9e3d7; -[LSAScenariumAudioPlayer panForTrackWithHandle:] */

undefined8 FUN_10ad9e370(undefined8 param_1,long param_2)

{
  func_0x00010becde80();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    param_1 = 0xbf800000;
  }
  else {
    func_0x00010c0f35e0(param_2);
  }
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10ad9e3d8; end: 10ad9e577; -[LSAScenariumAudioPlayer setPan:forTrackWithHandle:] */

undefined8 FUN_10ad9e3d8(float param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar2;
  
  lVar1 = param_2;
  func_0x00010becde80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    if (((byte)uRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f6ac42d,&UNK_10f6accbb,0x170,&UNK_10f6accf1,in_x6,in_x7,param_4
                         );
    }
  }
  else {
    if (ABS(param_1) <= 1.0) {
      if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f6ac42d,&UNK_10f6accbb,0x178,&UNK_10f6acd97,in_x6,in_x7,
                            (double)param_1,param_4);
      }
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      _objc_retain(lVar1);
      func_0x00010c0f7fc0(uVar2);
      _objc_release(lVar1);
      uVar2 = 1;
      goto LAB_10ad9e530;
    }
    if ((uRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f6ac42d,&UNK_10f6accbb,0x175,&UNK_10f6acd40,in_x6,in_x7,
                          (double)param_1,param_4);
    }
  }
  uVar2 = 0;
LAB_10ad9e530:
  _objc_release(lVar1);
  return uVar2;
}



/* Entry: 10ad9e578; end: 10ad9e583;  */

void FUN_10ad9e578(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d8e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),PTR_s_setPan__112653da8
            );
  return;
}



/* Entry: 10ad9e584; end: 10ad9e58b; -[LSAScenariumAudioPlayer addListener:] */

void FUN_10ad9e584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10ad9e58c; end: 10ad9e593; -[LSAScenariumAudioPlayer removeListener:] */

void FUN_10ad9e58c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10ad9e594; end: 10ad9e64f; -[LSAScenariumAudioPlayer _trackForHandle:] */

void FUN_10ad9e594(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x18),0xffffffffffffffff);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x18));
  uVar2 = uVar3;
  func_0x00010bf10140(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10ad9e650; end: 10ad9e73f; -[LSAScenariumAudioPlayer _setAllSoundsMuted:completion:] */

void FUN_10ad9e650(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10ad9e740; end: 10ad9e987;  */

void FUN_10ad9e740(long param_1,undefined8 param_2,byte param_3,undefined1 *param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x21;
  undefined8 unaff_x22;
  long lVar5;
  long lVar6;
  undefined1 auStack_188 [8];
  byte bStack_180;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  char *pcStack_140;
  long lStack_138;
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
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x00010c078420();
    param_3 = *(byte *)(param_1 + 0x30);
    if ((uint)param_3 != (uint)lVar3) {
      func_0x00010c1ca6a0(lVar2);
      _dispatch_semaphore_wait(*(undefined8 *)(lVar2 + 0x18),0xffffffffffffffff);
      unaff_x21 = *(long *)(lVar2 + 8);
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_semaphore_signal(*(undefined8 *)(lVar2 + 0x18));
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        cVar1 = *(char *)(param_1 + 0x30);
        lVar3 = unaff_x21;
        func_0x00010bf529e0();
        pcStack_140 = "YES";
        if (cVar1 == '\0') {
          pcStack_140 = "NO";
        }
        lStack_138 = lVar3;
        func_0x00010ae06f08(1,4,&UNK_10f6ac42d,&UNK_10f6acdd8,0x19e,&UNK_10f6ace1f);
      }
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      _objc_retain(unaff_x21);
      param_3 = (byte)&uStack_130;
      param_4 = auStack_e8;
      lVar3 = unaff_x21;
      func_0x00010bf52a60();
      if (lVar3 != 0) {
        lVar5 = *plStack_120;
        do {
          lVar6 = 0;
          do {
            if (*plStack_120 != lVar5) {
              _objc_enumerationMutation(unaff_x21);
            }
            uVar4 = *(undefined8 *)(lStack_128 + lVar6 * 8);
            func_0x00010bf10140(uVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1ca6a0();
            _objc_release(uVar4);
            lVar6 = lVar6 + 1;
          } while (lVar3 != lVar6);
          param_3 = (byte)&uStack_130;
          param_4 = auStack_e8;
          lVar3 = unaff_x21;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
      }
      unaff_x22 = 0;
      _objc_release(unaff_x21);
      _objc_release(unaff_x21);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
  lVar3 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x21);
  _objc_release(unaff_x21);
  _objc_release(lVar2);
  lVar5 = lVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_10ad9e988;
  uStack_170 = unaff_x22;
  lStack_168 = unaff_x21;
  lStack_160 = lVar3;
  lStack_158 = lVar2;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(param_4);
  _objc_initWeak(auStack_178,lVar5);
  uVar4 = *(undefined8 *)(lVar5 + 0x10);
  _objc_copyWeak(auStack_188,auStack_178);
  bStack_180 = param_3;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar4);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_188);
  _objc_destroyWeak(auStack_178);
  return;
}



/* Entry: 10ad9e988; end: 10ad9ea77; -[LSAScenariumAudioPlayer _setAllSoundsSuspended:completion:] */

void FUN_10ad9e988(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10ad9ea78; end: 10ad9ed9f;  */

void FUN_10ad9ea78(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c0805a0();
    param_3 = (undefined8 *)(ulong)*(byte *)(param_1 + 0x30);
    if ((uint)*(byte *)(param_1 + 0x30) != (uint)lVar2) {
      func_0x00010c2104a0(lVar1);
      _dispatch_semaphore_wait(*(undefined8 *)(lVar1 + 0x18),0xffffffffffffffff);
      unaff_x20 = *(long *)(lVar1 + 8);
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_semaphore_signal(*(undefined8 *)(lVar1 + 0x18));
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010bf529e0();
        func_0x00010ae06f08(1,4,&UNK_10f6ac42d,&UNK_10f6ace56,0x1b4,&UNK_10f6acea1);
      }
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      _objc_retain(unaff_x20);
      param_3 = &uStack_130;
      lVar2 = unaff_x20;
      func_0x00010bf52a60();
      if (lVar2 != 0) {
        lVar8 = *plStack_120;
        do {
          lVar9 = 0;
          do {
            if (*plStack_120 != lVar8) {
              _objc_enumerationMutation(unaff_x20);
            }
            lVar7 = *(long *)(lStack_128 + lVar9 * 8);
            lVar3 = lVar7;
            func_0x00010bf10140(lVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2104a0();
            _objc_release(lVar3);
            if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
              lVar3 = lVar7;
              func_0x00010c100f40();
              lVar5 = lVar7;
              if (lVar3 == 2) {
                func_0x00010bf10140(lVar7);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0fe7e0(lVar7);
                func_0x00010c0feaa0(lVar5);
LAB_10ad9ec20:
                _objc_release(lVar5);
              }
              else {
                lVar3 = lVar7;
                func_0x00010c100f40();
                if (lVar3 == 4) {
                  lVar3 = lVar7;
                  func_0x00010bf10140();
                  _objc_retainAutoreleasedReturnValue();
                  lVar4 = lVar3;
                  func_0x00010c07a400();
                  _objc_release(lVar3);
                  if ((int)lVar4 != 0) {
                    func_0x00010bf10140(lVar7);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c0f5b20();
                    goto LAB_10ad9ec20;
                  }
                }
              }
              func_0x00010c1ddbe0(lVar7);
            }
            lVar9 = lVar9 + 1;
          } while (lVar2 != lVar9);
          param_3 = &uStack_130;
          lVar2 = unaff_x20;
          func_0x00010bf52a60();
        } while (lVar2 != 0);
      }
      _objc_release(unaff_x20);
      _objc_release(unaff_x20);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x20);
  _objc_release(unaff_x20);
  _objc_release(lVar1);
  __Unwind_Resume();
  _objc_retain(param_3);
  lVar1 = lVar2;
  func_0x00010becde80();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 == 0) && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
    func_0x00010ae06f08(1,2,&UNK_10f6ac42d,&UNK_10f6acedc,0x1d4,&UNK_10f6acf1c,in_x6,in_x7,param_3);
  }
  uVar6 = *(undefined8 *)(lVar2 + 0x10);
  _objc_retain(lVar1);
  func_0x00010c0f7fc0(uVar6);
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10ad9eda0; end: 10ad9eec7; -[LSAScenariumAudioPlayer audioTrackDidRequestRestartPlayback:] */

void FUN_10ad9eda0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010becde80();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 == 0) && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
    func_0x00010ae06f08(1,2,&UNK_10f6ac42d,&UNK_10f6acedc,0x1d4,&UNK_10f6acf1c,in_x6,in_x7,param_3);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(lVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10ad9eec8; end: 10ad9ef8f;  */

void FUN_10ad9eec8(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0805a0();
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c06b700();
    if (iVar1 != 0) {
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f6ac42d,&UNK_10f6acf6a,0x1d8,&UNK_10f6acfb7,in_x6,in_x7,
                            *(undefined8 *)(param_1 + 0x30));
      }
                    /* WARNING: Could not recover jumptable at 0x00010c0fe370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_play_11261d2f8);
      return;
    }
  }
  if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
    func_0x00010ae06f08(1,2,&UNK_10f6ac42d,&UNK_10f6acf6a,0x1dd,&UNK_10f6acffd,in_x6,in_x7,
                        *(undefined8 *)(param_1 + 0x30));
  }
  return;
}



/* Entry: 10ad9ef90; end: 10ad9ef97; -[LSAScenariumAudioPlayer isActive] */

undefined1 FUN_10ad9ef90(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 10ad9ef98; end: 10ad9ef9f; -[LSAScenariumAudioPlayer setActive:] */

void FUN_10ad9ef98(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10ad9efa0; end: 10ad9efa7; -[LSAScenariumAudioPlayer isMuted] */

undefined1 FUN_10ad9efa0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x29);
}



/* Entry: 10ad9efa8; end: 10ad9efaf; -[LSAScenariumAudioPlayer setMuted:] */

void FUN_10ad9efa8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x29) = param_3;
  return;
}



/* Entry: 10ad9efb0; end: 10ad9efb7; -[LSAScenariumAudioPlayer isSuspended] */

undefined1 FUN_10ad9efb0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2a);
}



/* Entry: 10ad9efb8; end: 10ad9efbf; -[LSAScenariumAudioPlayer setSuspended:] */

void FUN_10ad9efb8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x2a) = param_3;
  return;
}



/* Entry: 10ad9efc0; end: 10ad9f007; -[LSAScenariumAudioPlayer .cxx_destruct] */

void FUN_10ad9efc0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ad9f008; end: 10ad9f1b3; -[LSAScenariumAudioTrack initWithContentsPath:error:delegate:onFinishCallback:] */

undefined1 *
FUN_10ad9f008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112701380;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x40),param_5);
    uVar4 = param_6;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126de098;
    func_0x00010bf0f780();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 8));
    *(undefined1 *)((long)puVar1 + 0x53) = 0;
    *(undefined2 *)((long)puVar1 + 0x51) = 0;
    *(undefined8 *)((long)puVar1 + 0x58) = 0;
    *(undefined4 *)((long)puVar1 + 0x38) = 0x3f800000;
    *(undefined8 *)((long)puVar1 + 0x30) = 0xbff0000000000000;
    uVar4 = 1;
    _dispatch_semaphore_create();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar4;
    _objc_release(uVar3);
    uVar4 = 1;
    _dispatch_semaphore_create();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    _objc_release(uVar3);
    uVar4 = 1;
    _dispatch_semaphore_create();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar4;
    _objc_release(uVar3);
    uVar4 = 1;
    _dispatch_semaphore_create();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar4;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10ad9f1b4; end: 10ad9f22f; -[LSAScenariumAudioTrack dealloc] */

void FUN_10ad9f1b4(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 8),param_2,0);
  puStack_28 = PTR_PTR_112701380;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10ad9f230; end: 10ad9f237; -[LSAScenariumAudioTrack prepareToPlay] */

undefined8 FUN_10ad9f230(void)

{
  return 1;
}



/* Entry: 10ad9f238; end: 10ad9f28b; -[LSAScenariumAudioTrack playWithRepeatCount:] */

void FUN_10ad9f238(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 < 0) {
    func_0x00010c1cfd20(*(undefined8 *)(param_1 + 8),param_2,0xffffffffffffffff);
    lVar1 = param_1;
  }
  else {
    func_0x00010c1cfd20(param_1);
    lVar1 = *(long *)(param_1 + 8);
  }
  func_0x00010c1cfd20(lVar1);
  *(undefined2 *)(param_1 + 0x50) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c0fe370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_play_11261d2f8);
  return;
}



/* Entry: 10ad9f28c; end: 10ad9f297; -[LSAScenariumAudioTrack play] */

void FUN_10ad9f28c(long param_1)

{
  *(undefined1 *)(param_1 + 0x51) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c0fe370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_play_11261d2f8);
  return;
}



/* Entry: 10ad9f298; end: 10ad9f2b3; -[LSAScenariumAudioTrack pause] */

undefined8 FUN_10ad9f298(long param_1)

{
  func_0x00010c0f5b20(*(undefined8 *)(param_1 + 8));
  return 1;
}



/* Entry: 10ad9f2b4; end: 10ad9f2bb; -[LSAScenariumAudioTrack resume] */

void FUN_10ad9f2b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fe370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_play_11261d2f8);
  return;
}



/* Entry: 10ad9f2bc; end: 10ad9f31b; -[LSAScenariumAudioTrack stop] */

undefined8 FUN_10ad9f2bc(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c07a400();
  func_0x00010c0f5b20(*(undefined8 *)(param_1 + 8));
  func_0x00010c187d00(0,*(undefined8 *)(param_1 + 8));
  if (iVar1 != 0) {
    func_0x00010be17520(param_1,param_2,1);
  }
  if (*(char *)(param_1 + 0x53) == '\x01') {
    *(undefined1 *)(param_1 + 0x51) = 1;
  }
  return 1;
}



/* Entry: 10ad9f31c; end: 10ad9f35b; -[LSAScenariumAudioTrack close] */

void FUN_10ad9f31c(long param_1)

{
  undefined8 uVar1;
  
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x20),0xffffffffffffffff);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c255790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_stop_112673008);
  return;
}



/* Entry: 10ad9f35c; end: 10ad9f3cb; -[LSAScenariumAudioTrack setMuted:] */

void FUN_10ad9f35c(undefined4 param_1,long param_2,undefined8 param_3,uint param_4)

{
  _dispatch_semaphore_wait(*(undefined8 *)(param_2 + 0x10),0xffffffffffffffff);
  if (*(byte *)(param_2 + 0x52) != param_4) {
    *(char *)(param_2 + 0x52) = (char)param_4;
    if (param_4 == 0) {
      func_0x00010c2241a0(*(undefined4 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 8));
      *(undefined4 *)(param_2 + 0x38) = 0;
    }
    else {
      func_0x00010c2a0dc0(*(undefined8 *)(param_2 + 8));
      *(undefined4 *)(param_2 + 0x38) = param_1;
      func_0x00010c2241a0(0,*(undefined8 *)(param_2 + 8));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_2 + 0x10));
  return;
}



/* Entry: 10ad9f3cc; end: 10ad9f403; -[LSAScenariumAudioTrack isMuted] */

undefined1 FUN_10ad9f3cc(long param_1)

{
  undefined1 uVar1;
  
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x10),0xffffffffffffffff);
  uVar1 = *(undefined1 *)(param_1 + 0x52);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x10));
  return uVar1;
}



/* Entry: 10ad9f404; end: 10ad9f47b; -[LSAScenariumAudioTrack setSuspended:] */

void FUN_10ad9f404(undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  
  _dispatch_semaphore_wait(*(undefined8 *)(param_2 + 0x18),0xffffffffffffffff);
  if (*(byte *)(param_2 + 0x53) != param_4) {
    *(char *)(param_2 + 0x53) = (char)param_4;
    if (param_4 == 0) {
      if ((*(byte *)(param_2 + 0x51) & 1) == 0) {
        func_0x00010be95e60(param_2);
      }
      *(undefined1 *)(param_2 + 0x51) = 0;
    }
    else {
      iVar1 = (int)*(undefined8 *)(param_2 + 8);
      func_0x00010c07a400();
      if (iVar1 != 0) {
        _CACurrentMediaTime();
        *(undefined8 *)(param_2 + 0x30) = param_1;
      }
      func_0x00010c255780(*(undefined8 *)(param_2 + 8));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_2 + 0x18));
  return;
}



/* Entry: 10ad9f47c; end: 10ad9f4b3; -[LSAScenariumAudioTrack isSuspended] */

undefined1 FUN_10ad9f47c(long param_1)

{
  undefined1 uVar1;
  
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x18),0xffffffffffffffff);
  uVar1 = *(undefined1 *)(param_1 + 0x53);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x18));
  return uVar1;
}



/* Entry: 10ad9f4b4; end: 10ad9f4f3; -[LSAScenariumAudioTrack setNumberOfLoops:] */

void FUN_10ad9f4b4(long param_1,undefined8 param_2,long param_3)

{
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x28),0xffffffffffffffff);
  if (*(long *)(param_1 + 0x58) != param_3) {
    *(long *)(param_1 + 0x58) = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10ad9f4f4; end: 10ad9f52b; -[LSAScenariumAudioTrack numberOfLoops] */

undefined8 FUN_10ad9f4f4(long param_1)

{
  undefined8 uVar1;
  
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x28),0xffffffffffffffff);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



/* Entry: 10ad9f52c; end: 10ad9f577; -[LSAScenariumAudioTrack setVolume:] */

void FUN_10ad9f52c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x00010c078420();
  if ((int)lVar1 != 0) {
    *(int *)(param_2 + 0x38) = (int)param_1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2241b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,*(undefined8 *)(param_2 + 8),PTR_s_setVolume__112666a90);
  return;
}



/* Entry: 10ad9f578; end: 10ad9f5af; -[LSAScenariumAudioTrack volume] */

ulong FUN_10ad9f578(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  uVar2 = (undefined4)param_1;
  lVar1 = param_2;
  func_0x00010c078420();
  if ((int)lVar1 != 0) {
    return (ulong)*(uint *)(param_2 + 0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2a0dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_2 + 8),PTR_s_volume_112685d98);
  return CONCAT44(uVar3,uVar2);
}



/* Entry: 10ad9f5b0; end: 10ad9f5b7; -[LSAScenariumAudioTrack setPan:] */

void FUN_10ad9f5b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d8e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_setPan__112653da8);
  return;
}



/* Entry: 10ad9f5b8; end: 10ad9f5bf; -[LSAScenariumAudioTrack pan] */

void FUN_10ad9f5b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f35f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_pan_11261a790);
  return;
}



/* Entry: 10ad9f5c0; end: 10ad9f5c7; -[LSAScenariumAudioTrack duration] */

void FUN_10ad9f5c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8b170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_duration_1125c0600);
  return;
}



/* Entry: 10ad9f5c8; end: 10ad9f5cf; -[LSAScenariumAudioTrack currentTime] */

void FUN_10ad9f5c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf60490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_currentTime_1125b5ac8);
  return;
}



/* Entry: 10ad9f5d0; end: 10ad9f5d7; -[LSAScenariumAudioTrack setCurrentTime:] */

void FUN_10ad9f5d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c187d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setCurrentTime__11263f960);
  return;
}



/* Entry: 10ad9f5d8; end: 10ad9f5df; -[LSAScenariumAudioTrack isPlaying] */

void FUN_10ad9f5d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07a410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_isPlaying_1125fc310);
  return;
}



/* Entry: 10ad9f5e0; end: 10ad9f66b; -[LSAScenariumAudioTrack audioPlayerDidFinishPlaying:successfully:] */

void FUN_10ad9f5e0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27d8c();
  _objc_release(uVar1);
  return;
}



/* Entry: 10ad9f66c; end: 10ad9f73b;  */

void FUN_10ad9f66c(long param_1)

{
  long lVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar2;
  
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f6ad06e,&UNK_10f6ad120,0xfa,&UNK_10f6ad171,in_x6,in_x7,
                        *(undefined8 *)(param_1 + 0x20));
  }
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0defa0();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (0 < lVar1) {
    func_0x00010c0defa0(uVar2);
    func_0x00010c1cfd20(uVar2);
    lVar1 = *(long *)(param_1 + 0x20) + 0x40;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf10160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be17530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,PTR_s__finishWithSuccess__1125636e8,*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 10ad9f73c; end: 10ad9f837; -[LSAScenariumAudioTrack _resumePlaybackAfterSuspend] */

void FUN_10ad9f73c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar3 = *(double *)(param_1 + 0x30);
  if (dVar3 == -1.0) {
    return;
  }
  _CACurrentMediaTime();
  dVar6 = *(double *)(param_1 + 0x30);
  dVar5 = dVar3;
  func_0x00010bf60480(*(undefined8 *)(param_1 + 8));
  dVar4 = dVar5;
  func_0x00010bf8b160(*(undefined8 *)(param_1 + 8));
  if (dVar4 <= 0.0) {
    return;
  }
  dVar5 = (dVar3 - dVar6) + dVar5;
  dVar3 = dVar5 / dVar4;
  lVar2 = (long)dVar3;
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c0defa0();
    if (-1 < lVar1) {
      lVar1 = param_1;
      func_0x00010c0defa0();
      if (lVar1 < lVar2) {
        func_0x00010c1cfd20(param_1,param_2,0);
        func_0x00010c187d00(0,*(undefined8 *)(param_1 + 8));
        func_0x00010be17520(param_1,param_2,1);
        goto LAB_10ad9f81c;
      }
      lVar1 = param_1;
      func_0x00010c0defa0(param_1);
      func_0x00010c1cfd20(param_1,param_2,lVar1 - lVar2);
    }
  }
  func_0x00010c187d00(dVar5 - (double)(long)dVar3 * dVar4,*(undefined8 *)(param_1 + 8));
  func_0x00010c0fe360(*(undefined8 *)(param_1 + 8));
LAB_10ad9f81c:
  *(undefined8 *)(param_1 + 0x30) = 0xbff0000000000000;
  return;
}



/* Entry: 10ad9f838; end: 10ad9f88f; -[LSAScenariumAudioTrack _finishWithSuccess:] */

void FUN_10ad9f838(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x20),0xffffffffffffffff);
  lVar1 = *(long *)(param_1 + 0x48);
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x50) == '\x01')) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3 ^ 1);
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10ad9f890; end: 10ad9f93b; -[LSAScenariumAudioTrack .cxx_destruct] */

void FUN_10ad9f890(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ad9f93c; end: 10ad9f93f;  */

undefined8 * FUN_10ad9f93c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c73548;
  _objc_storeWeak(param_1 + 4,0);
  _objc_destroyWeak(param_1 + 4);
  FUN_10ad9ff18(param_1[2]);
  return param_1;
}



/* Entry: 10ad9f940; end: 10ad9f953;  */

void FUN_10ad9f940(void)

{
  func_0x00010ad9f8f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad9f954; end: 10ad9fbeb;  */

void FUN_10ad9f954(long param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long in_x4;
  undefined *puVar9;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  uVar4 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar5 = uVar4;
  _objc_opt_respondsToSelector();
  if ((uVar5 & 1) != 0) {
    if (*(long *)(in_x4 + 0x18) == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      FUN_10a217080(&lStack_78,in_x4);
      for (lVar1 = lStack_78; lVar1 != lStack_70; lVar1 = lVar1 + 0x18) {
        lVar6 = in_x4;
        FUN_10a232f74(in_x4,lVar1);
        if (lVar6 == 0) {
          FUN_10a233058(lVar1);
LAB_10ad9fb50:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10ad9fb54);
          (*pcVar3)();
        }
        plVar2 = *(long **)(lVar6 + 0x28);
        if (plVar2 == *(long **)(lVar6 + 0x30)) {
          FUN_10a108c2c(&UNK_10f63b259);
          goto LAB_10ad9fb50;
        }
        if (*(char *)((long)plVar2 + 0x17) < '\0') {
          func_0x000107c3192c(&plStack_90,*plVar2,plVar2[1]);
        }
        else {
          lStack_88 = plVar2[1];
          plStack_90 = (long *)*plVar2;
          lStack_80 = plVar2[2];
        }
        puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        if (lStack_80 < 0) {
          __ZdlPv(plStack_90);
        }
      }
      plStack_90 = &lStack_78;
      func_0x000104c607c8(&plStack_90);
    }
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c098040(uVar4);
    _objc_release(puVar7);
    _objc_release(puVar9);
  }
  _objc_release(uVar4);
  return;
}



/* Entry: 10ad9fbec; end: 10ad9fd03;  */

byte FUN_10ad9fbec(long param_1,undefined8 *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  byte bVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  int iStack_38;
  
  puVar4 = &uStack_50;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_50,*param_2,param_2[1]);
  }
  else {
    uStack_48 = param_2[1];
    uStack_50 = *param_2;
    lStack_40 = param_2[2];
  }
  plVar6 = (long *)(param_1 + 0x10);
  plVar8 = (long *)*plVar6;
  plVar7 = plVar6;
  iStack_38 = param_3;
  if (plVar8 != (long *)0x0) {
    do {
      plVar3 = plVar8 + 4;
      func_0x000107c2abd4(plVar3,&uStack_50);
      uVar2 = (uint)plVar3;
      if ((((ulong)plVar3 & 0xff) == 0) &&
         (uVar2 = (uint)(iStack_38 < (int)plVar8[7]), (int)plVar8[7] < iStack_38)) {
        uVar2 = 0xffffffff;
      }
      if (-1 < (char)uVar2) {
        plVar7 = plVar8;
      }
      plVar8 = *(long **)((long)plVar8 + ((ulong)(uVar2 >> 4) & 8));
    } while (plVar8 != (long *)0x0);
    if (plVar6 != plVar7) {
      func_0x000107c2abd4(&uStack_50,plVar7 + 4);
      cVar1 = (char)puVar4;
      if (((ulong)puVar4 & 0xff) == 0) {
        cVar1 = '\x01';
        if (iStack_38 < (int)plVar7[7]) {
          cVar1 = -1;
        }
        plVar8 = plVar7;
        if (iStack_38 != (int)plVar7[7]) goto LAB_10ad9fcbc;
      }
      else {
LAB_10ad9fcbc:
        plVar8 = plVar6;
        if (-1 < cVar1) {
          plVar8 = plVar7;
        }
      }
      if (plVar6 != plVar8) {
        bVar5 = *(byte *)(plVar8 + 8);
        goto LAB_10ad9fcdc;
      }
    }
  }
  bVar5 = 0;
LAB_10ad9fcdc:
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  return bVar5 & 1;
}



/* Entry: 10ad9fd04; end: 10ad9fd9b;  */

void FUN_10ad9fd04(long param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined4 uStack_38;
  undefined1 uStack_21;
  
  uStack_21 = param_4;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_50,*param_2,param_2[1]);
  }
  else {
    uStack_48 = param_2[1];
    uStack_50 = *param_2;
    lStack_40 = param_2[2];
  }
  uStack_38 = param_3;
  FUN_10ad9fd9c(param_1 + 8,&uStack_50,&uStack_21);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  return;
}



/* Entry: 10ad9fd9c; end: 10ad9fe4f;  */

undefined1  [16] FUN_10ad9fd9c(undefined8 *param_1,ulong param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  
  puVar5 = param_1 + 1;
  puVar2 = param_1;
  FUN_10ad9ff60(param_1,param_2,*puVar5,puVar5);
  if (puVar5 == puVar2) {
LAB_10ad9fe18:
    FUN_10ad9ffd8(param_1,puVar2,param_2,param_2,param_3);
    uVar4 = 1;
  }
  else {
    uVar3 = param_2;
    func_0x000107c2abd4(param_2,puVar2 + 4);
    uVar1 = (uint)uVar3;
    if ((uVar3 & 0xff) == 0) {
      uVar1 = 0;
      if (*(int *)(param_2 + 0x18) < *(int *)(puVar2 + 7)) {
        uVar1 = 0xffffffff;
      }
      if (*(int *)(param_2 + 0x18) != *(int *)(puVar2 + 7)) goto LAB_10ad9fe04;
    }
    else {
LAB_10ad9fe04:
      if ((uVar1 >> 7 & 1) != 0) goto LAB_10ad9fe18;
    }
    uVar4 = 0;
    *(undefined1 *)(puVar2 + 8) = *param_3;
    param_1 = puVar2;
  }
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 10ad9fe50; end: 10ad9fe6b;  */

undefined8 FUN_10ad9fe50(void)

{
  return 0;
}



/* Entry: 10ad9fe6c; end: 10ad9ff17;  */

void FUN_10ad9fe6c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c098080(uVar1);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10ad9ff18; end: 10ad9ff5f;  */

void FUN_10ad9ff18(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10ad9ff18(*param_1);
    FUN_10ad9ff18(param_1[1]);
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      __ZdlPv(param_1[4]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10ad9ff60; end: 10ad9ffd7;  */

long FUN_10ad9ff60(undefined8 param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  
  for (; param_3 != 0; param_3 = *(long *)(param_3 + ((ulong)(uVar1 >> 4) & 8))) {
    uVar2 = param_3 + 0x20;
    func_0x000107c2abd4(uVar2,param_2);
    uVar1 = (uint)uVar2;
    if (((uVar2 & 0xff) == 0) &&
       (uVar1 = (uint)(*(int *)(param_2 + 0x18) < *(int *)(param_3 + 0x38)),
       *(int *)(param_3 + 0x38) < *(int *)(param_2 + 0x18))) {
      uVar1 = 0xffffffff;
    }
    if (-1 < (char)uVar1) {
      param_4 = param_3;
    }
  }
  return param_4;
}



/* Entry: 10ad9ffd8; end: 10ada0087;  */

undefined1  [16]
FUN_10ad9ffd8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined1 *param_5)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_10ada0088(param_1,param_2,&uStack_48,auStack_50,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x48;
    __Znwm();
    uVar4 = *param_4;
    *(undefined8 *)(lVar3 + 0x28) = param_4[1];
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    *(undefined8 *)(lVar3 + 0x30) = param_4[2];
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined4 *)(lVar3 + 0x38) = *(undefined4 *)(param_4 + 3);
    *(undefined1 *)(lVar3 + 0x40) = *param_5;
    FUN_10ada0288(param_1,uStack_48,plVar2,lVar3);
  }
  auVar5[8] = bVar1;
  auVar5._0_8_ = lVar3;
  auVar5._9_7_ = 0;
  return auVar5;
}



/* Entry: 10ada0088; end: 10ada0287;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10ada0088(long *param_1,long *param_2,long *param_3,long *param_4,ulong param_5)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  if (param_1 + 1 != param_2) {
    uVar3 = param_5;
    func_0x000107c2abd4(param_5,param_2 + 4);
    uVar2 = (uint)uVar3;
    if ((uVar3 & 0xff) == 0) {
      uVar2 = 0;
      if (*(int *)(param_5 + 0x18) < (int)param_2[7]) {
        uVar2 = 0xffffffff;
      }
      if (*(int *)(param_5 + 0x18) != (int)param_2[7]) goto LAB_10ada00ec;
    }
    else {
LAB_10ada00ec:
      if ((uVar2 >> 7 & 1) != 0) goto LAB_10ada012c;
    }
    plVar6 = param_2 + 4;
    func_0x000107c2abd4(plVar6,param_5);
    uVar2 = (uint)plVar6;
    if (((ulong)plVar6 & 0xff) == 0) {
      uVar2 = 0;
      if ((int)param_2[7] < *(int *)(param_5 + 0x18)) {
        uVar2 = 0xffffffff;
      }
      if ((int)param_2[7] == *(int *)(param_5 + 0x18)) goto LAB_10ada0120;
    }
    if ((uVar2 >> 7 & 1) == 0) {
LAB_10ada0120:
      *param_3 = (long)param_2;
      *param_4 = (long)param_2;
      return param_4;
    }
    plVar7 = param_2 + 1;
    plVar5 = (long *)*plVar7;
    plVar6 = param_2;
    plVar4 = plVar5;
    if (plVar5 == (long *)0x0) {
      do {
        plVar8 = (long *)plVar6[2];
        bVar1 = (long *)*plVar8 != plVar6;
        plVar6 = plVar8;
      } while (bVar1);
    }
    else {
      do {
        plVar8 = plVar4;
        plVar4 = (long *)*plVar8;
      } while ((long *)*plVar8 != (long *)0x0);
    }
    if (plVar8 != param_1 + 1) {
      uVar3 = param_5;
      func_0x000107c2abd4(param_5,plVar8 + 4);
      uVar2 = (uint)uVar3;
      if ((uVar3 & 0xff) == 0) {
        uVar2 = 0;
        if (*(int *)(param_5 + 0x18) < (int)plVar8[7]) {
          uVar2 = 0xffffffff;
        }
        if (*(int *)(param_5 + 0x18) == (int)plVar8[7]) goto FUN_10ada02dc;
      }
      if ((uVar2 >> 7 & 1) == 0) goto FUN_10ada02dc;
      plVar5 = (long *)*plVar7;
    }
    if (plVar5 != (long *)0x0) {
      *param_3 = (long)plVar8;
      return plVar8;
    }
    *param_3 = (long)param_2;
    return plVar7;
  }
LAB_10ada012c:
  plVar6 = param_2;
  if ((long *)*param_1 == param_2) {
LAB_10ada01c4:
    if (*param_2 != 0) {
      *param_3 = (long)plVar6;
      return plVar6 + 1;
    }
    *param_3 = (long)param_2;
    return param_2;
  }
  plVar4 = param_2;
  plVar5 = (long *)*param_2;
  if ((long *)*param_2 == (long *)0x0) {
    do {
      plVar6 = (long *)plVar4[2];
      bVar1 = (long *)*plVar6 == plVar4;
      plVar4 = plVar6;
    } while (bVar1);
  }
  else {
    do {
      plVar6 = plVar5;
      plVar5 = (long *)plVar6[1];
    } while ((long *)plVar6[1] != (long *)0x0);
  }
  plVar4 = plVar6 + 4;
  func_0x000107c2abd4(plVar4,param_5);
  uVar2 = (uint)plVar4;
  if (((ulong)plVar4 & 0xff) == 0) {
    uVar2 = 0;
    if ((int)plVar6[7] < *(int *)(param_5 + 0x18)) {
      uVar2 = 0xffffffff;
    }
    if ((int)plVar6[7] == *(int *)(param_5 + 0x18)) goto FUN_10ada02dc;
  }
  if ((uVar2 >> 7 & 1) != 0) goto LAB_10ada01c4;
FUN_10ada02dc:
  param_1 = param_1 + 1;
  plVar6 = param_1;
  plVar4 = (long *)*param_1;
  while (plVar4 != (long *)0x0) {
    uVar3 = param_5;
    func_0x000107c2abd4(param_5,plVar4 + 4);
    uVar2 = (uint)uVar3;
    plVar6 = plVar4;
    if ((uVar3 & 0xff) == 0) {
      uVar2 = 0;
      if (*(int *)(param_5 + 0x18) < *(int *)(plVar4 + 7)) {
        uVar2 = 0xffffffff;
      }
      if (*(int *)(param_5 + 0x18) != *(int *)(plVar4 + 7)) goto LAB_10ada0334;
LAB_10ada0338:
      uVar3 = (ulong)(plVar4 + 4);
      func_0x000107c2abd4(uVar3,param_5);
      uVar2 = (uint)uVar3;
      if ((uVar3 & 0xff) == 0) {
        uVar2 = 0;
        if (*(int *)(plVar4 + 7) < *(int *)(param_5 + 0x18)) {
          uVar2 = 0xffffffff;
        }
        if (*(int *)(plVar4 + 7) == *(int *)(param_5 + 0x18)) break;
      }
      if ((uVar2 >> 7 & 1) == 0) break;
      param_1 = plVar4 + 1;
      plVar4 = (long *)plVar4[1];
    }
    else {
LAB_10ada0334:
      if ((uVar2 >> 7 & 1) == 0) goto LAB_10ada0338;
      param_1 = plVar4;
      plVar4 = (long *)*plVar4;
    }
  }
  *param_3 = (long)plVar6;
  return param_1;
}



/* Entry: 10ada0288; end: 10ada02db;  */

void FUN_10ada0288(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27d40(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10ada02dc; end: 10ada03a3;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10ada02dc(long param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)(param_1 + 8);
  plVar5 = plVar4;
  plVar1 = (long *)*plVar4;
  while (plVar1 != (long *)0x0) {
    uVar3 = param_3;
    func_0x000107c2abd4(param_3,plVar1 + 4);
    uVar2 = (uint)uVar3;
    plVar5 = plVar1;
    if ((uVar3 & 0xff) == 0) {
      uVar2 = 0;
      if (*(int *)(param_3 + 0x18) < *(int *)(plVar1 + 7)) {
        uVar2 = 0xffffffff;
      }
      if (*(int *)(param_3 + 0x18) != *(int *)(plVar1 + 7)) goto LAB_10ada0334;
LAB_10ada0338:
      uVar3 = (ulong)(plVar1 + 4);
      func_0x000107c2abd4(uVar3,param_3);
      uVar2 = (uint)uVar3;
      if ((uVar3 & 0xff) == 0) {
        uVar2 = 0;
        if (*(int *)(plVar1 + 7) < *(int *)(param_3 + 0x18)) {
          uVar2 = 0xffffffff;
        }
        if (*(int *)(plVar1 + 7) == *(int *)(param_3 + 0x18)) break;
      }
      if ((uVar2 >> 7 & 1) == 0) break;
      plVar4 = plVar1 + 1;
      plVar1 = (long *)plVar1[1];
    }
    else {
LAB_10ada0334:
      if ((uVar2 >> 7 & 1) == 0) goto LAB_10ada0338;
      plVar4 = plVar1;
      plVar1 = (long *)*plVar1;
    }
  }
  *param_2 = (long)plVar5;
  return plVar4;
}



/* Entry: 10ada03a4; end: 10ada0453; -[LSACompositeLensManager initWithPerformer:lensComponent:] */

undefined1 *
FUN_10ada03a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701388;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10ada0454; end: 10ada059f; -[LSACompositeLensManager warmupLensWithLensInfo:async:completion:] */

void FUN_10ada0454(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8;
    func_0x00010bf5eec0(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd11c0();
    _objc_release(puVar1);
  }
  _objc_retain(param_3);
  func_0x00010be72c60(param_1);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10ada05a0; end: 10ada076b;  */

void FUN_10ada05a0(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  plVar5 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
  if (plVar5 == (long *)0x0) {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    plStack_48 = (long *)0x0;
  }
  else {
    lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    plVar1 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    bVar2 = *(byte *)(param_1 + 0x30);
    plStack_48 = plVar5;
    __ZNSt3__119__shared_weak_count4lockEv();
    if ((plStack_48 != (long *)0x0) && (lVar7 != 0)) {
      plVar1 = plStack_48 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_10adabfd8(&uStack_40,uVar6);
      FUN_10a21d2a4(lVar7,&uStack_40,bVar2 ^ 1);
      FUN_10a21eb84(lVar7,uStack_40,1);
      if (plStack_38 != (long *)0x0) {
        plVar1 = plStack_38 + 1;
        do {
          lVar7 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
        }
      }
      if (plStack_48 != (long *)0x0) {
        plVar1 = plStack_48 + 1;
        do {
          lVar7 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(uVar6);
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  return;
}



/* Entry: 10ada076c; end: 10ada08b7; -[LSACompositeLensManager addLensWithLensInfo:async:completion:] */

void FUN_10ada076c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8;
    func_0x00010bf5eec0(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd11c0();
    _objc_release(puVar1);
  }
  _objc_retain(param_3);
  func_0x00010be72c60(param_1);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10ada08b8; end: 10ada0a73;  */

void FUN_10ada08b8(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plStack_48;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  plVar5 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
  if (plVar5 == (long *)0x0) {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    plStack_48 = (long *)0x0;
  }
  else {
    lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    plVar1 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    bVar2 = *(byte *)(param_1 + 0x30);
    plStack_48 = plVar5;
    __ZNSt3__119__shared_weak_count4lockEv();
    if ((plStack_48 != (long *)0x0) && (lVar7 != 0)) {
      plVar1 = plStack_48 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_10adabfd8(auStack_40,uVar6);
      FUN_10a21d2a4(lVar7,auStack_40,bVar2 ^ 1);
      if (plStack_38 != (long *)0x0) {
        plVar1 = plStack_38 + 1;
        do {
          lVar7 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
        }
      }
      if (plStack_48 != (long *)0x0) {
        plVar1 = plStack_48 + 1;
        do {
          lVar7 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(uVar6);
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  return;
}



/* Entry: 10ada0a74; end: 10ada0bb7; -[LSACompositeLensManager removeLensWithLensId:completion:] */

void FUN_10ada0a74(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8;
    func_0x00010bf5eec0(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd11c0();
    _objc_release(puVar1);
  }
  _objc_retain(param_3);
  func_0x00010be72c60(param_1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10ada0bb8; end: 10ada0d53;  */

void FUN_10ada0bb8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plStack_60;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  plVar5 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
  if (plVar5 == (long *)0x0) {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    plStack_60 = (long *)0x0;
  }
  else {
    lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    plVar1 = plVar5 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    plStack_60 = plVar5;
    __ZNSt3__119__shared_weak_count4lockEv();
    if ((plStack_60 != (long *)0x0) && (lVar7 != 0)) {
      plVar1 = plStack_60 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar4 = uVar6;
      _objc_retainAutorelease(uVar6);
      func_0x00010bdc3520();
      func_0x000107c31940(auStack_58,uVar4);
      FUN_10a21d5c0(lVar7,auStack_58);
      if (cStack_41 < '\0') {
        __ZdlPv(auStack_58[0]);
      }
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_60);
      }
    }
  }
  if (plStack_60 != (long *)0x0) {
    plVar1 = plStack_60 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_60);
    }
  }
  _objc_release(uVar6);
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  return;
}



/* Entry: 10ada0d54; end: 10ada0e07; -[LSACompositeLensManager setLensRectangles:completion:] */

void FUN_10ada0d54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10ada0e08;
  puStack_48 = &UNK_110883780;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010be72c60(param_1,param_2,&puStack_60,10,param_4);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10ada0e08; end: 10ada122f;  */

void FUN_10ada0e08(undefined8 param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 *param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined8 uStack_1a0;
  float fStack_198;
  float fStack_194;
  undefined8 uStack_190;
  float fStack_188;
  float fStack_184;
  undefined1 uStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = *(long **)(*(long *)(param_5 + 0x20) + 0x18);
  if (plVar8 == (long *)0x0) {
    plVar9 = *(long **)(param_5 + 0x28);
    _objc_retain(plVar9);
    plStack_1b0 = (long *)0x0;
    plStack_1a8 = (long *)0x0;
  }
  else {
    plVar11 = *(long **)(*(long *)(param_5 + 0x20) + 0x10);
    plVar9 = plVar8 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar9 = *(long **)(param_5 + 0x28);
    _objc_retain(plVar9);
    plStack_1b0 = (long *)0x0;
    plVar4 = plVar8;
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_1a8 = plVar4;
    if ((plVar4 != (long *)0x0) && (plStack_1b0 = plVar11, plVar11 != (long *)0x0)) {
      plVar1 = plVar4 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      dVar15 = 0.0;
      lStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      plStack_150 = (long *)0x0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      plStack_1c0 = plVar11;
      plStack_1b8 = plVar4;
      _objc_retain(plVar9);
      param_7 = &uStack_160;
      plVar5 = plVar9;
      func_0x00010bf52a60();
      if (plVar5 != (long *)0x0) {
        lVar12 = *plStack_150;
        do {
          plVar13 = (long *)0x0;
          do {
            dVar14 = dVar15;
            dVar16 = param_2;
            dVar17 = param_3;
            dVar18 = param_4;
            if (*plStack_150 != lVar12) {
              _objc_enumerationMutation(plVar9);
              dVar14 = dVar15;
              dVar16 = param_2;
              dVar17 = param_3;
              dVar18 = param_4;
            }
            uVar10 = *(undefined8 *)(lStack_158 + (long)plVar13 * 8);
            func_0x00010c1245a0(uVar10);
            uVar6 = uVar10;
            param_3 = dVar17;
            param_4 = dVar18;
            func_0x00010c094540(uVar10);
            _objc_retainAutoreleasedReturnValue();
            _objc_retainAutorelease();
            uVar7 = uVar6;
            func_0x00010bdc3520(uVar6);
            func_0x000107c31940(auStack_178,uVar7);
            dVar15 = dVar14 + dVar17;
            param_2 = dVar16 + dVar18;
            fVar21 = (float)dVar14;
            fVar22 = (float)dVar16;
            fVar19 = (float)dVar15;
            fVar20 = (float)param_2;
            bVar3 = false;
            if ((fVar20 == 1.0) && (bVar3 = false, !NAN(fVar19))) {
              bVar3 = fVar19 == 1.0;
            }
            uStack_180 = false;
            if (fVar22 == 0.0 && fVar21 == 0.0) {
              uStack_180 = bVar3;
            }
            uStack_1a0 = CONCAT44(fVar22,fVar21);
            fStack_198 = fVar19;
            fStack_194 = fVar22;
            uStack_190 = CONCAT44(fVar20,fVar19);
            fStack_188 = fVar21;
            fStack_184 = fVar20;
            FUN_10ad44f68(*plVar11 + 0x178,auStack_178,&uStack_1a0);
            if (cStack_161 < '\0') {
              __ZdlPv(auStack_178[0]);
            }
            _objc_release(uVar6);
            func_0x00010c094540(uVar10);
            _objc_retainAutoreleasedReturnValue();
            _objc_retainAutorelease();
            uVar6 = uVar10;
            func_0x00010bdc3520(uVar10);
            func_0x000107c31940(auStack_178,uVar6);
            if (fVar22 != 0.0 || fVar21 != 0.0) {
              uStack_180 = false;
            }
            else {
              uStack_180 = false;
              if ((fVar20 == 1.0) && (uStack_180 = false, !NAN(fVar19))) {
                uStack_180 = fVar19 == 1.0;
              }
            }
            uStack_1a0 = CONCAT44(fVar22,fVar21);
            fStack_198 = fVar19;
            fStack_194 = fVar22;
            uStack_190 = CONCAT44(fVar20,fVar19);
            fStack_188 = fVar21;
            fStack_184 = fVar20;
            func_0x00010ad44fe8(*plVar11 + 0x178,auStack_178,&uStack_1a0);
            if (cStack_161 < '\0') {
              __ZdlPv(auStack_178[0]);
            }
            _objc_release(uVar10);
            plVar13 = (long *)((long)plVar13 + 1);
          } while (plVar5 != plVar13);
          param_7 = &uStack_160;
          plVar5 = plVar9;
          func_0x00010bf52a60();
        } while (plVar5 != (long *)0x0);
      }
      _objc_release(plVar9);
      do {
        lVar12 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  plVar11 = plStack_1a8;
  if (plStack_1a8 != (long *)0x0) {
    plVar4 = plStack_1a8 + 1;
    do {
      lVar12 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plVar11 = plVar9;
  _objc_release();
  if (plVar8 != (long *)0x0) {
    plVar11 = plVar8;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar9);
  FUN_10ad8b754(&plStack_1c0);
  FUN_10ad8b754(&plStack_1b0);
  _objc_release(plVar9);
  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  __Unwind_Resume();
  _objc_retain(param_7);
  _objc_retain(param_7);
  func_0x00010be72c60(plVar11);
  _objc_release(param_7);
  _objc_release(param_7);
  return;
}



/* Entry: 10ada1230; end: 10ada12f7; -[LSACompositeLensManager setLensRectangles:rectanglesTransform:completion:] */

void FUN_10ada1230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10ada12f8;
  puStack_78 = &UNK_110c735d0;
  uStack_58 = param_4[1];
  uStack_60 = *param_4;
  uStack_48 = param_4[3];
  uStack_50 = param_4[2];
  uStack_38 = param_4[5];
  uStack_40 = param_4[4];
  uStack_70 = param_1;
  uStack_68 = param_3;
  _objc_retain(param_3);
  func_0x00010be72c60(param_1,param_2,&puStack_90,10,param_5);
  _objc_release(uStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 10ada12f8; end: 10ada171f;  */

void FUN_10ada12f8(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  long *plStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  undefined1 auStack_1a4 [36];
  undefined8 uStack_180;
  undefined8 uStack_178;
  double dStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [128];
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = *(long **)(*(long *)(param_1 + 0x20) + 0x10);
  plVar2 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
  if (plVar2 != (long *)0x0) {
    plVar11 = plVar2 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = *plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar11 = *(long **)(param_1 + 0x28);
  _objc_retain(plVar11);
  dVar30 = *(double *)(param_1 + 0x30);
  dVar31 = *(double *)(param_1 + 0x38);
  dVar32 = *(double *)(param_1 + 0x40);
  dVar29 = *(double *)(param_1 + 0x48);
  dVar33 = *(double *)(param_1 + 0x50);
  dVar34 = *(double *)(param_1 + 0x58);
  plStack_1d0 = (long *)0x0;
  plStack_1c8 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar5 = plVar2;
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_1c8 = plVar5;
    if ((plVar5 != (long *)0x0) && (plStack_1d0 = plVar9, plVar9 != (long *)0x0)) {
      plVar1 = plVar5 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      plStack_150 = (long *)0x0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      plStack_1e0 = plVar9;
      plStack_1d8 = plVar5;
      _objc_retain(plVar11);
      param_3 = &uStack_160;
      param_4 = auStack_120;
      plVar6 = plVar11;
      func_0x00010bf52a60();
      if (plVar6 != (long *)0x0) {
        lVar14 = *plStack_150;
        fVar15 = (float)dVar30;
        fVar16 = (float)dVar31;
        fVar17 = (float)dVar32;
        fVar18 = (float)dVar33;
        dVar30 = (double)(ulong)(uint)fVar18;
        fVar20 = (float)dVar34;
        fVar23 = 0.0;
        fVar25 = (float)dVar29;
        fVar28 = 0.0;
        fVar22 = fVar20;
        fVar24 = fVar18;
        fVar26 = fVar20;
        fVar27 = fVar25;
        do {
          plVar12 = (long *)0x0;
          do {
            if (*plStack_150 != lVar14) {
              _objc_enumerationMutation(plVar11);
            }
            uVar13 = *(undefined8 *)(lStack_158 + (long)plVar12 * 8);
            func_0x00010c1245a0(uVar13);
            fVar19 = (float)dVar30;
            fVar21 = (float)(double)CONCAT44(fVar23,fVar22);
            fVar24 = (float)(dVar30 + (double)CONCAT44(fVar26,fVar24));
            fVar26 = (float)((double)CONCAT44(fVar23,fVar22) + (double)CONCAT44(fVar28,fVar27));
            fVar27 = fVar21 * fVar25 + fVar19 * fVar16;
            fVar28 = fVar21 * fVar25 + fVar24 * fVar16;
            fVar22 = fVar21 * fVar17 + fVar19 * fVar15 + fVar18;
            fVar23 = fVar27 + fVar20;
            uStack_178 = CONCAT44(fVar28 + fVar20,fVar21 * fVar17 + fVar24 * fVar15 + fVar18);
            dVar30 = (double)CONCAT44(fVar26 * fVar25 + fVar24 * fVar16 + fVar20,
                                      fVar26 * fVar17 + fVar24 * fVar15 + fVar18);
            uStack_168 = CONCAT44(fVar26 * fVar25 + fVar19 * fVar16 + fVar20,
                                  fVar26 * fVar17 + fVar19 * fVar15 + fVar18);
            uStack_180 = CONCAT44(fVar23,fVar22);
            fVar24 = fVar18;
            fVar26 = fVar20;
            dStack_170 = dVar30;
            func_0x00010a0f578c(auStack_1a4,&uStack_180);
            uVar7 = uVar13;
            func_0x00010c094540();
            _objc_retainAutoreleasedReturnValue();
            _objc_retainAutorelease();
            uVar8 = uVar7;
            func_0x00010bdc3520(uVar7);
            func_0x000107c31940(auStack_1c0,uVar8);
            FUN_10ad44f68(*plVar9 + 0x178,auStack_1c0,auStack_1a4);
            if (cStack_1a9 < '\0') {
              __ZdlPv(auStack_1c0[0]);
            }
            _objc_release(uVar7);
            func_0x00010c094540();
            _objc_retainAutoreleasedReturnValue();
            _objc_retainAutorelease();
            uVar7 = uVar13;
            func_0x00010bdc3520(uVar13);
            func_0x000107c31940(auStack_1c0,uVar7);
            func_0x00010ad44fe8(*plVar9 + 0x178,auStack_1c0,auStack_1a4);
            if (cStack_1a9 < '\0') {
              __ZdlPv(auStack_1c0[0]);
            }
            _objc_release(uVar13);
            plVar12 = (long *)((long)plVar12 + 1);
          } while (plVar6 != plVar12);
          param_3 = &uStack_160;
          param_4 = auStack_120;
          plVar6 = plVar11;
          func_0x00010bf52a60();
        } while (plVar6 != (long *)0x0);
      }
      _objc_release(plVar11);
      do {
        lVar14 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  plVar9 = plStack_1c8;
  if (plStack_1c8 != (long *)0x0) {
    plVar5 = plStack_1c8 + 1;
    do {
      lVar14 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plVar11;
  _objc_release();
  if (plVar2 != (long *)0x0) {
    plVar9 = plVar2;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  FUN_10ad8b754(&plStack_1e0);
  FUN_10ad8b754(&plStack_1d0);
  _objc_release(plVar11);
  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
  __Unwind_Resume();
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == (undefined8 *)0x0) {
    puVar10 = PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8;
    func_0x00010bf5eec0(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd11c0();
    _objc_release(puVar10);
  }
  _objc_retain(param_3);
  func_0x00010be72c60(plVar9);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10ada1720; end: 10ada188b; -[LSACompositeLensManager setDestinationRect:forLensWithId:completion:] */

void FUN_10ada1720(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8;
    func_0x00010bf5eec0(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd11c0();
    _objc_release(puVar1);
  }
  _objc_retain(param_3);
  func_0x00010be72c60(param_1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10ada188c; end: 10ada1aa3;  */

void FUN_10ada188c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  long *plStack_a8;
  undefined8 uStack_a0;
  float fStack_98;
  float fStack_94;
  undefined8 uStack_90;
  float fStack_88;
  float fStack_84;
  undefined1 uStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0x20) + 0x10);
  plVar3 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar8);
  dVar9 = *(double *)(param_1 + 0x30);
  dVar10 = *(double *)(param_1 + 0x38);
  dVar11 = *(double *)(param_1 + 0x40);
  dVar12 = *(double *)(param_1 + 0x48);
  plStack_a8 = (long *)0x0;
  if (((plVar3 != (long *)0x0) &&
      (plStack_a8 = plVar3, __ZNSt3__119__shared_weak_count4lockEv(), plStack_a8 != (long *)0x0)) &&
     (plVar2 != (long *)0x0)) {
    plVar1 = plStack_a8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar6 = uVar8;
    _objc_retainAutorelease(uVar8);
    func_0x00010bdc3520();
    func_0x000107c31940(auStack_78,uVar6);
    uStack_80 = false;
    fStack_88 = (float)dVar9;
    fStack_94 = (float)dVar10;
    fStack_98 = (float)(dVar9 + dVar11);
    fStack_84 = (float)(dVar10 + dVar12);
    uStack_a0 = CONCAT44(fStack_94,fStack_88);
    uStack_90 = CONCAT44(fStack_84,fStack_98);
    if (((fStack_88 == 0.0) && (fStack_94 == 0.0)) &&
       ((uStack_80 = false, fStack_84 == 1.0 && (uStack_80 = false, !NAN(fStack_98))))) {
      uStack_80 = fStack_98 == 1.0;
    }
    func_0x00010ad44fe8(*plVar2 + 0x178,auStack_78,&uStack_a0);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    do {
      lVar7 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
    }
  }
  if (plStack_a8 != (long *)0x0) {
    plVar2 = plStack_a8 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
    }
  }
  _objc_release(uVar8);
  if (plVar3 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
  }
  return;
}



/* Entry: 10ada1aa4; end: 10ada1c0f; -[LSACompositeLensManager setSourceRect:forLensWithId:completion:] */

void FUN_10ada1aa4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8;
    func_0x00010bf5eec0(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd11c0();
    _objc_release(puVar1);
  }
  _objc_retain(param_3);
  func_0x00010be72c60(param_1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10ada1c10; end: 10ada1e27;  */

void FUN_10ada1c10(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  long *plStack_a8;
  undefined8 uStack_a0;
  float fStack_98;
  float fStack_94;
  undefined8 uStack_90;
  float fStack_88;
  float fStack_84;
  undefined1 uStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0x20) + 0x10);
  plVar3 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar8);
  dVar9 = *(double *)(param_1 + 0x30);
  dVar10 = *(double *)(param_1 + 0x38);
  dVar11 = *(double *)(param_1 + 0x40);
  dVar12 = *(double *)(param_1 + 0x48);
  plStack_a8 = (long *)0x0;
  if (((plVar3 != (long *)0x0) &&
      (plStack_a8 = plVar3, __ZNSt3__119__shared_weak_count4lockEv(), plStack_a8 != (long *)0x0)) &&
     (plVar2 != (long *)0x0)) {
    plVar1 = plStack_a8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar6 = uVar8;
    _objc_retainAutorelease(uVar8);
    func_0x00010bdc3520();
    func_0x000107c31940(auStack_78,uVar6);
    uStack_80 = false;
    fStack_88 = (float)dVar9;
    fStack_94 = (float)dVar10;
    fStack_98 = (float)(dVar9 + dVar11);
    fStack_84 = (float)(dVar10 + dVar12);
    uStack_a0 = CONCAT44(fStack_94,fStack_88);
    uStack_90 = CONCAT44(fStack_84,fStack_98);
    if (((fStack_88 == 0.0) && (fStack_94 == 0.0)) &&
       ((uStack_80 = false, fStack_84 == 1.0 && (uStack_80 = false, !NAN(fStack_98))))) {
      uStack_80 = fStack_98 == 1.0;
    }
    FUN_10ad44f68(*plVar2 + 0x178,auStack_78,&uStack_a0);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    do {
      lVar7 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
    }
  }
  if (plStack_a8 != (long *)0x0) {
    plVar2 = plStack_a8 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
    }
  }
  _objc_release(uVar8);
  if (plVar3 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
  }
  return;
}



/* Entry: 10ada1e28; end: 10ada1e9b; -[LSACompositeLensManager setCoreManager:announcer:] */

void FUN_10ada1e28(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  uVar6 = param_3[1];
  uVar5 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  _objc_storeWeak(param_1 + 0x28,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10ada1e9c; end: 10ada1f6b; -[LSACompositeLensManager _performUnsafeBlock:unsafeErrorCode:completion:] */

void FUN_10ada1e9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126db570;
  func_0x00010c091b40(PTR_PTR_1126db570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f9180(param_1,param_2,puVar1,param_3,param_5);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ada1f6c; end: 10ada1fa7; -[LSACompositeLensManager .cxx_destruct] */

void FUN_10ada1f6c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10ada1fa8; end: 10ada1faf; -[LSACompositeLensManager .cxx_construct] */

void FUN_10ada1fa8(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10ada1fb0; end: 10ada208f;  */

long FUN_10ada1fb0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10ada2090; end: 10ada213f;  */

void FUN_10ada2090(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c098020(uVar1);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10ada2140; end: 10ada21c7;  */

undefined8 * FUN_10ada2140(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c73690;
  _objc_storeWeak(param_1 + 1,0);
  _objc_destroyWeak(param_1 + 1);
  return param_1;
}



/* Entry: 10ada21c8; end: 10ada22b3;  */

void FUN_10ada21c8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0980a0(uVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10ada22b4; end: 10ada2357;  */

void FUN_10ada22b4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0980c0(uVar1);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10ada2358; end: 10ada2637; -[LSALensComponent initWithPerformer:announcerQueuePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10ada2358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_112701390;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithPerformer_announcerQueue_1125eac68,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126de130;
    _objc_opt_new();
    lVar4 = (long)_DAT_1127843bc;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR_PTR_1126de138;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127843c0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127843c0) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126de140;
    _objc_alloc();
    func_0x00010c034d80();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127843c4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127843c4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    func_0x00010c229860(puVar1);
    _objc_initWeak(auStack_58,puVar1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10ada2638;
    puStack_68 = &UNK_110876b10;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&puStack_80);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127843c8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127843c8) = puVar2;
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10ada2638; end: 10ada26bf;  */

void FUN_10ada2638(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  func_0x00010c169860(param_1,param_2,puVar2 == (undefined *)0x0);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ada26c0; end: 10ada26c7; -[LSALensComponent applicationDidBecomeActive] */

void FUN_10ada26c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c169870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setApplicationActive__112638038,1);
  return;
}



/* Entry: 10ada26c8; end: 10ada26cf; -[LSALensComponent applicationWillResignActive] */

void FUN_10ada26c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c169870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setApplicationActive__112638038,0);
  return;
}



/* Entry: 10ada26d0; end: 10ada26ff; -[LSALensComponent audioPlayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada26d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127843bc);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10ada2700; end: 10ada283f; -[LSALensComponent setLensWithLensInfo:async:completion:] */

void FUN_10ada2700(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_3 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8;
    func_0x00010bf5eec0(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd11c0();
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126de148;
  _objc_opt_new(PTR_PTR_1126de148);
  puVar1 = puVar2;
  func_0x00010c0ebba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c193dc0(param_1);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ada2840; end: 10ada297f; -[LSALensComponent setCompositeLensWithLensInfos:async:completion:] */

void FUN_10ada2840(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_3 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8;
    func_0x00010bf5eec0(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd11c0();
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126de148;
  _objc_opt_new(PTR_PTR_1126de148);
  puVar1 = puVar2;
  func_0x00010bf454a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c193dc0(param_1);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ada2980; end: 10ada2abb; -[LSALensComponent setLensWhenLoadedWithLensInfo:completion:] */

void FUN_10ada2980(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8;
    func_0x00010bf5eec0(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd11c0();
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126de148;
  _objc_opt_new(PTR_PTR_1126de148);
  puVar1 = puVar2;
  func_0x00010c0ebba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c193dc0(param_1);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ada2abc; end: 10ada2bfb; -[LSALensComponent setCompositeLensWhenLoadedWithLensInfos:async:completion:] */

void FUN_10ada2abc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_3 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8;
    func_0x00010bf5eec0(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd11c0();
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126de148;
  _objc_opt_new(PTR_PTR_1126de148);
  puVar1 = puVar2;
  func_0x00010bf454a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c193dc0(param_1);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ada2bfc; end: 10ada2e6b; -[LSALensComponent setEffectWithOperation:async:keepActiveLensesUntilLoaded:completion:] */

void FUN_10ada2bfc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  if (param_3 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8;
    func_0x00010bf5eec0(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd11c0();
    _objc_release(puVar2);
  }
  lVar1 = param_3;
  func_0x00010bf8ce80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1da240(param_1);
  _objc_release(lVar1);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126db570;
  func_0x00010c091b40(PTR_PTR_1126db570);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010c0f9180(param_1);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(param_6);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 10ada2e6c; end: 10ada3103;  */

void FUN_10ada2e6c(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x21;
  ulong unaff_x22;
  undefined8 unaff_x24;
  long *plVar9;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x20) == 0) {
    plStack_e8 = (long *)0x0;
    plStack_e0 = (long *)0x0;
    plVar6 = (long *)0x0;
  }
  else {
    func_0x00010bf52380(&plStack_d8);
    plStack_e8 = (long *)0x0;
    plStack_e0 = (long *)0x0;
    plVar6 = plStack_d0;
    if (plStack_d0 != (long *)0x0) {
      plVar4 = plStack_d0;
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar4 == (long *)0x0) {
        plVar9 = (long *)0x0;
      }
      else {
        plStack_e8 = plStack_d8;
        plVar9 = plStack_d8;
      }
      plStack_e0 = plVar4;
      if (plStack_d0 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      plVar6 = plStack_d0;
      if (plVar9 != (long *)0x0) {
        iVar3 = (int)*(undefined8 *)(param_1 + 0x20);
        func_0x00010c22ea00();
        if (iVar3 != 0) {
          param_2 = *plVar9;
          FUN_10a219de8(&plStack_d8);
          FUN_10a22afb0(&plStack_d8);
          func_0x00010c200300(*(undefined8 *)(param_1 + 0x20));
        }
        unaff_x21 = *(long **)(param_1 + 0x28);
        func_0x00010bf8ce80();
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x21 != (long *)0x0) {
          unaff_x22 = *(ulong *)(param_1 + 0x20);
          func_0x00010c0f7560();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010bf8ce80(unaff_x24);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = unaff_x22;
          func_0x00010c071ae0();
          _objc_release(unaff_x24);
          _objc_release(unaff_x22);
          plVar6 = unaff_x21;
          _objc_release();
          if ((uVar5 & 1) == 0) goto LAB_10ada3038;
        }
        plVar6 = *(long **)(param_1 + 0x28);
        if (plVar4 != (long *)0x0) {
          plVar9 = plVar4 + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar2) {
              *plVar9 = *plVar9 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        func_0x00010c0f9480();
        *(long **)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = plVar6;
        if (plVar4 != (long *)0x0) {
          plVar9 = plVar4 + 1;
          do {
            lVar8 = *plVar9;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar2) {
              *plVar9 = lVar8 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            plVar6 = plVar4;
          }
        }
        goto LAB_10ada3038;
      }
    }
  }
  if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
    plVar6 = (long *)0x1;
    param_2 = 2;
    func_0x00010ae06f08(1,2,&UNK_10f6ad1fc,&UNK_10f6ad298,0xd8,&UNK_10f6ad2fe);
  }
LAB_10ada3038:
  plVar4 = plStack_e0;
  if (plStack_e0 != (long *)0x0) {
    plVar9 = plStack_e0 + 1;
    do {
      lVar8 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar6 = plVar4;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x24);
  _objc_release(unaff_x22);
  _objc_release(unaff_x21);
  FUN_10ad8b754(&plStack_e8);
  __Unwind_Resume();
  _objc_retain(param_2);
  lVar8 = plVar6[4];
  if (lVar8 != 0) {
    if (param_2 == 0) {
      uVar7 = *(undefined8 *)(*(long *)(plVar6[5] + 8) + 0x18);
    }
    else {
      uVar7 = 2;
    }
    (**(code **)(lVar8 + 0x10))(lVar8,uVar7,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ada3104; end: 10ada316f;  */

void FUN_10ada3104(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (param_2 == 0) {
      uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18);
    }
    else {
      uVar2 = 2;
    }
    (**(code **)(lVar1 + 0x10))(lVar1,uVar2,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ada3170; end: 10ada3273; -[LSALensComponent clearLensWithCompletion:] */

void FUN_10ada3170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010c1da240(param_1,param_2,0);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126db570;
  func_0x00010c091b40(PTR_PTR_1126db570,param_2,5);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10ada3274;
  puStack_40 = &UNK_11087bb00;
  uStack_38 = param_1;
  func_0x00010c0f9180(uVar1,param_2,puVar2,&puStack_58,param_3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10ada3274; end: 10ada3343;  */

void FUN_10ada3274(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bf52380(&lStack_50);
    lStack_40 = 0;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48;
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar4 == (long *)0x0) {
        lVar5 = 0;
      }
      else {
        lStack_40 = lStack_50;
        lVar5 = lStack_50;
      }
      if (plStack_48 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (lVar5 != 0) {
        func_0x00010c15d9a0(*(undefined8 *)(param_1 + 0x20));
        FUN_10a21dfec(lVar5);
      }
      if (plVar4 != (long *)0x0) {
        plVar1 = plVar4 + 1;
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
    }
  }
  return;
}


