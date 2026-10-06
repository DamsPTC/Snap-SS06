/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5d96ac; end: 10b5d96fb;  */

void FUN_10b5d96ac(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1221e0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b5d96fc; end: 10b5d98f3; -[SCIdleMonitorV1 receiveTouchEvent:] */

void FUN_10b5d96fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **unaff_x21;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined1 auStack_138 [8];
  undefined1 uStack_130;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c27dd80();
  if ((lVar1 == 0) || (lVar1 = param_3, func_0x00010c27dd80(), lVar1 == 3)) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    lVar1 = param_3;
    func_0x00010bf00c80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf52a60();
    uVar5 = 0;
    if (lVar2 != 0) {
      lVar7 = *plStack_110;
      do {
        lVar8 = 0;
        do {
          if (*plStack_110 != lVar7) {
            _objc_enumerationMutation(lVar1);
          }
          lVar6 = *(long *)(lStack_118 + lVar8 * 8);
          lVar3 = lVar6;
          func_0x00010c0fa9c0();
          if ((lVar3 != 3) && (func_0x00010c0fa9c0(), lVar6 != 4)) {
            uVar5 = 1;
            goto LAB_10b5d9808;
          }
          lVar8 = lVar8 + 1;
        } while (lVar2 != lVar8);
        lVar2 = lVar1;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
      uVar5 = 0;
    }
LAB_10b5d9808:
    _objc_release(lVar1);
    _objc_initWeak(auStack_128,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_10b5d98f4;
    puStack_148 = &UNK_1108488f8;
    _objc_copyWeak(auStack_138,auStack_128);
    uStack_130 = uVar5;
    _objc_retain(param_3);
    lStack_140 = param_3;
    func_0x00010c0f88c0(uVar4);
    _objc_release(lStack_140);
    _objc_destroyWeak(auStack_138);
    _objc_destroyWeak(auStack_128);
    unaff_x21 = &puStack_160;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x21 + 0x28));
  _objc_destroyWeak(auStack_128);
  __Unwind_Resume();
  lVar1 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((*(byte *)(param_3 + 0x30) & 1) == 0) {
      lVar7 = *(long *)(param_3 + 0x20);
      func_0x00010bf00c80();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar7;
      func_0x00010bf529e0();
      _objc_release(lVar7);
      if (lVar2 != 0) {
        *(undefined1 *)(lVar1 + 0x48) = 1;
        func_0x00010be84c20((double)*(float *)(lVar1 + 0x94),lVar1);
        goto LAB_10b5d9970;
      }
    }
    *(undefined1 *)(lVar1 + 0x48) = 0;
    func_0x00010bdda900(lVar1);
  }
LAB_10b5d9970:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b5d98f4; end: 10b5d9983;  */

void FUN_10b5d98f4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      func_0x00010bf00c80();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf529e0();
      _objc_release(lVar2);
      if (lVar3 != 0) {
        *(undefined1 *)(lVar1 + 0x48) = 1;
        func_0x00010be84c20((double)*(float *)(lVar1 + 0x94),lVar1);
        goto LAB_10b5d9970;
      }
    }
    *(undefined1 *)(lVar1 + 0x48) = 0;
    func_0x00010bdda900(lVar1);
  }
LAB_10b5d9970:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b5d9984; end: 10b5d99db;  */

void FUN_10b5d9984(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_1 + 0x38);
      func_0x00010bf529e0();
      if (lVar1 == 0) {
        func_0x00010bde3080(param_1);
        goto LAB_10b5d99c0;
      }
    }
    func_0x00010be84c60(param_1);
  }
LAB_10b5d99c0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b5d99dc; end: 10b5d9ab3; -[SCIdleMonitorV1 markForegroundLaunchStarted:] */

void FUN_10b5d99dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b5d9ab4; end: 10b5d9b23;  */

void FUN_10b5d9ab4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c24e7c0(uVar2,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x80);
    *(undefined8 *)(lVar1 + 0x80) = uVar2;
    _objc_release(uVar3);
    if (*(long *)(lVar1 + 0x50) != 2) {
      *(undefined8 *)(lVar1 + 0x50) = 2;
      func_0x00010bddad60(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b5d9b24; end: 10b5d9bcb; -[SCIdleMonitorV1 unmarkStartComplete] */

void FUN_10b5d9b24(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f88c0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10b5d9bcc; end: 10b5d9c03;  */

void FUN_10b5d9bcc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdda920(param_1);
    *(undefined2 *)(param_1 + 0x4a) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b5d9c04; end: 10b5d9c53; -[SCIdleMonitorV1 _shouldSuspendDuringCriticalSection] */

bool FUN_10b5d9c04(long param_1)

{
  bool bVar1;
  
  _os_unfair_lock_lock(param_1 + 0x78);
  if (*(char *)(param_1 + 0x4c) == '\x01') {
    bVar1 = *(long *)(param_1 + 0x50) != 1;
  }
  else {
    bVar1 = false;
  }
  _os_unfair_lock_unlock(param_1 + 0x78);
  return bVar1;
}



/* Entry: 10b5d9c54; end: 10b5d9c87; -[SCIdleMonitorV1 _shouldContinueScheduleHeadlessIdle] */

void FUN_10b5d9c54(void)

{
  func_0x00010bf529e0();
  return;
}



/* Entry: 10b5d9c88; end: 10b5d9cc3; -[SCIdleMonitorV1 _scheduleHeadlessIdleFinished] */

bool FUN_10b5d9c88(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    bVar1 = *(long *)(param_1 + 0x50) != 2;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10b5d9cc4; end: 10b5d9d77; -[SCIdleMonitorV1 _cancelScheduledHeadlessIdle] */

void FUN_10b5d9cc4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  uVar1 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar1);
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    lVar3 = *(long *)PTR__UIBackgroundTaskInvalid_110345af0;
    if (*(long *)(param_1 + 0x20) != lVar3) {
      FUN_10b6f9900();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf94260();
      _objc_release(uVar2);
      *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 10b5d9d78; end: 10b5d9e93; -[SCIdleMonitorV1 _scheduleHeadlessIdle] */

void FUN_10b5d9d78(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(char *)(param_1 + 0x60) == '\x01') {
    lVar1 = param_1;
    FUN_10b6f9900();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf17d00();
    *(long *)(param_1 + 0x20) = lVar3;
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b5d9e94;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  uVar4 = 0;
  func_0x000107c27d90(0,&puStack_60);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  _objc_release(uVar5);
  func_0x00010c0f7fe0((double)*(float *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x58));
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10b5d9e94; end: 10b5d9ef3;  */

void FUN_10b5d9e94(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010beb2e60();
    if ((int)lVar1 == 0) {
      lVar1 = param_1;
      func_0x00010be9b0e0();
      if ((int)lVar1 != 0) {
        *(undefined8 *)(param_1 + 0x50) = 3;
      }
      func_0x00010bddad60(param_1);
    }
    else {
      func_0x00010be84c40(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b5d9ef4; end: 10b5da06b; -[SCIdleMonitorV1 _pushForFutureHeadlessIdleRequest] */

void FUN_10b5d9ef4(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar2 = param_1;
  func_0x00010beb2e60();
  if ((int)lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010be9b0e0();
    if ((int)lVar2 == 0) goto LAB_10b5da038;
  }
  else {
    uVar5 = 0;
    do {
      if (uVar5 != 0) {
        func_0x00010c12d360(*(undefined8 *)(param_1 + 0x38));
      }
      func_0x00010c0f7fa0(uVar5);
      uVar1 = uVar5;
      func_0x00010c077480();
      if ((uVar1 & 1) != 0) {
        if (uVar5 != 0) {
          _objc_initWeak(auStack_38,param_1);
          puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_58 = 0xc2000000;
          pcStack_50 = FUN_10b5da06c;
          puStack_48 = &UNK_1108434b0;
          _objc_copyWeak(auStack_40,auStack_38);
          uVar3 = 0;
          func_0x000107c27d90(0,&puStack_60);
          uVar4 = *(undefined8 *)(param_1 + 0x18);
          *(undefined8 *)(param_1 + 0x18) = uVar3;
          _objc_release(uVar4);
          func_0x00010c0f7fe0((double)*(float *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x58));
          _objc_destroyWeak(auStack_40);
          _objc_destroyWeak(auStack_38);
          _objc_release(uVar5);
          return;
        }
        break;
      }
      _objc_release(uVar5);
      lVar2 = *(long *)(param_1 + 0x40);
      func_0x00010bf529e0();
      if (lVar2 == 0) break;
      uVar5 = *(ulong *)(param_1 + 0x40);
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0x40));
    } while (uVar5 != 0);
  }
  *(undefined8 *)(param_1 + 0x50) = 3;
LAB_10b5da038:
                    /* WARNING: Could not recover jumptable at 0x00010bddad70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cancelScheduledHeadlessIdle_1125544f8);
  return;
}



/* Entry: 10b5da06c; end: 10b5da0cb;  */

void FUN_10b5da06c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010beb2e60();
    if ((int)lVar1 == 0) {
      lVar1 = param_1;
      func_0x00010be9b0e0();
      if ((int)lVar1 != 0) {
        *(undefined8 *)(param_1 + 0x50) = 3;
      }
      func_0x00010bddad60(param_1);
    }
    else {
      func_0x00010be84c40(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b5da0cc; end: 10b5da247; -[SCIdleMonitorV1 _pushForFuturePrioritizedStart] */

void FUN_10b5da0cc(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(char *)(param_1 + 0x4a) != '\x01') {
    return;
  }
  uVar4 = 0;
  do {
    func_0x00010c0f7fa0(uVar4);
    uVar1 = uVar4;
    func_0x00010c077480();
    if ((uVar1 & 1) != 0) {
      if (uVar4 != 0) {
        _objc_initWeak(auStack_48,param_1);
        puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_68 = 0xc2000000;
        pcStack_60 = FUN_10b5da248;
        puStack_58 = &UNK_1108434b0;
        _objc_copyWeak(auStack_50,auStack_48);
        uVar2 = 0;
        func_0x000107c27d90(0,&puStack_70);
        uVar3 = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 0x10) = uVar2;
        _objc_release(uVar3);
        func_0x00010c0f7fe0((double)*(float *)(param_1 + 0x8c),*(undefined8 *)(param_1 + 0x58));
        _objc_destroyWeak(auStack_50);
        _objc_destroyWeak(auStack_48);
        _objc_release(uVar4);
        return;
      }
      break;
    }
    _objc_release(uVar4);
    uVar4 = *(ulong *)(param_1 + 0x30);
    func_0x00010bf529e0();
    puVar5 = (ulong *)(param_1 + 0x30);
    if (uVar4 == 0) {
      uVar4 = *(ulong *)(param_1 + 0x38);
      func_0x00010bf529e0();
      puVar5 = (ulong *)(param_1 + 0x38);
      if (uVar4 == 0) break;
    }
    uVar4 = *puVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3c0(*puVar5);
  } while (uVar4 != 0);
                    /* WARNING: Could not recover jumptable at 0x00010bde3090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__completePrioritizedStart_1125565c0);
  return;
}



/* Entry: 10b5da248; end: 10b5da29f;  */

void FUN_10b5da248(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_1 + 0x38);
      func_0x00010bf529e0();
      if (lVar1 == 0) {
        func_0x00010bde3080(param_1);
        goto LAB_10b5da284;
      }
    }
    func_0x00010be84c60(param_1);
  }
LAB_10b5da284:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b5da2a0; end: 10b5da2e3; -[SCIdleMonitorV1 _completePrioritizedStart] */

void FUN_10b5da2a0(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x4b) = 1;
  if ((*(byte *)(param_1 + 0x4f) & 1) == 0) {
    func_0x00010be84c20((double)*(float *)(param_1 + 0x8c),param_1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b5da2e4; end: 10b5da34b; -[SCIdleMonitorV1 _cancelFuturePrioritizedStart] */

void FUN_10b5da2e4(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10b5da34c; end: 10b5da433; -[SCIdleMonitorV1 _attemptExecuteOps] */

void FUN_10b5da34c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  *(undefined1 *)(param_1 + 0x4f) = 0;
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010c0b6be0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf5f4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (((ulong)puVar3 & 1) == 0) {
    func_0x00010be84c20((double)*(float *)(param_1 + 0x8c),param_1);
  }
  lVar4 = *(long *)(param_1 + 0x28);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0x28),param_2,0);
    func_0x00010c0f7fa0(lVar4);
  }
  lVar5 = *(long *)(param_1 + 0x28);
  func_0x00010bf529e0();
  *(bool *)(param_1 + 0x49) = lVar5 != 0;
  func_0x00010be84c20((double)*(float *)(param_1 + 0x8c),param_1);
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 10b5da434; end: 10b5da4f3; -[SCIdleMonitorV1 .cxx_destruct] */

void FUN_10b5da434(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5da4f4; end: 10b5da827;  */

/* WARNING: Removing unreachable block (ram,0x00010b5daea4) */
/* WARNING: Removing unreachable block (ram,0x00010b5da7e8) */
/* WARNING: Removing unreachable block (ram,0x00010b5dab1c) */
/* WARNING: Removing unreachable block (ram,0x00010b5db228) */

void FUN_10b5da4f4(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7,char *param_8)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 *puVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  char *pcVar16;
  long lVar17;
  long *plVar18;
  char *unaff_x25;
  char *unaff_x26;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 *puStack_4f0;
  undefined1 auStack_4e8 [24];
  undefined8 auStack_4d0 [2];
  char cStack_4b9;
  long lStack_4b8;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 *puStack_440;
  undefined1 auStack_438 [24];
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  char *pcStack_400;
  char *pcStack_3f8;
  char *pcStack_3f0;
  char *pcStack_3e8;
  char *pcStack_3e0;
  char *pcStack_3d8;
  undefined1 ****ppppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  char acStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined1 auStack_370 [24];
  undefined1 auStack_358 [24];
  char acStack_340 [23];
  char cStack_329;
  long lStack_328;
  undefined1 ***pppuStack_2d0;
  code *pcStack_2c8;
  char acStack_2c0 [24];
  undefined1 *puStack_2a8;
  char acStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [24];
  char acStack_240 [23];
  char cStack_229;
  long lStack_228;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1b8 [24];
  char *pcStack_1a0;
  char acStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  char *pcStack_130;
  char *pcStack_128;
  char *pcStack_120;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  char acStack_d8 [24];
  char *pcStack_c0;
  char acStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar5 = param_4;
  pcVar12 = param_5;
  pcVar13 = param_6;
  pcVar4 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_2 != 0) {
    plVar18 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(acStack_b8,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_a0,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_88,pcVar1);
    _objc_retain(param_6);
    if (param_6 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(param_6);
      unaff_x26 = param_6;
      func_0x00010bdc3520();
    }
    _objc_release(param_6);
    func_0x000107c278b8(auStack_70,unaff_x26);
    acStack_d8[0] = '\0';
    acStack_d8[1] = '\0';
    acStack_d8[2] = '\0';
    acStack_d8[3] = '\0';
    acStack_d8[4] = '\0';
    acStack_d8[5] = '\0';
    acStack_d8[6] = '\0';
    acStack_d8[7] = '\0';
    acStack_d8[8] = '\0';
    acStack_d8[9] = '\0';
    acStack_d8[10] = '\0';
    acStack_d8[0xb] = '\0';
    acStack_d8[0xc] = '\0';
    acStack_d8[0xd] = '\0';
    acStack_d8[0xe] = '\0';
    acStack_d8[0xf] = '\0';
    acStack_d8[0x10] = '\0';
    acStack_d8[0x11] = '\0';
    acStack_d8[0x12] = '\0';
    acStack_d8[0x13] = '\0';
    acStack_d8[0x14] = '\0';
    acStack_d8[0x15] = '\0';
    acStack_d8[0x16] = '\0';
    acStack_d8[0x17] = '\0';
    func_0x000107c27984(acStack_d8,acStack_b8,&lStack_58,4);
    pcVar1 = "\x01";
    unaff_x25 = acStack_d8;
    pcVar5 = acStack_d8;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_c0 = unaff_x25;
    func_0x000107c278ac(&pcStack_c0);
    lVar17 = 0;
    pcVar12 = param_7;
    do {
      if ((&cStack_59)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x60);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  pcStack_120 = acStack_b8;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_120);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_e8 = FUN_10b5da828;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar8 = pcVar5;
  pcVar11 = pcVar12;
  pcVar14 = pcVar13;
  pcVar16 = pcVar4;
  pcStack_130 = unaff_x26;
  pcStack_128 = unaff_x25;
  pcStack_118 = pcVar2;
  pcStack_110 = param_6;
  pcStack_108 = param_5;
  pcStack_100 = param_4;
  pcStack_f8 = param_3;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  _objc_retain(pcVar12);
  _objc_retain(pcVar13);
  if (pcVar3 != (char *)0x0) {
    plVar18 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(acStack_198,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x000107c278b8(auStack_180,pcVar2);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar2 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x000107c278b8(auStack_168,pcVar2);
    _objc_retain(pcVar13);
    if (pcVar13 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar13);
      unaff_x26 = pcVar13;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar13);
    func_0x000107c278b8(auStack_150,unaff_x26);
    acStack_1b8[0] = '\0';
    acStack_1b8[1] = '\0';
    acStack_1b8[2] = '\0';
    acStack_1b8[3] = '\0';
    acStack_1b8[4] = '\0';
    acStack_1b8[5] = '\0';
    acStack_1b8[6] = '\0';
    acStack_1b8[7] = '\0';
    acStack_1b8[8] = '\0';
    acStack_1b8[9] = '\0';
    acStack_1b8[10] = '\0';
    acStack_1b8[0xb] = '\0';
    acStack_1b8[0xc] = '\0';
    acStack_1b8[0xd] = '\0';
    acStack_1b8[0xe] = '\0';
    acStack_1b8[0xf] = '\0';
    acStack_1b8[0x10] = '\0';
    acStack_1b8[0x11] = '\0';
    acStack_1b8[0x12] = '\0';
    acStack_1b8[0x13] = '\0';
    acStack_1b8[0x14] = '\0';
    acStack_1b8[0x15] = '\0';
    acStack_1b8[0x16] = '\0';
    acStack_1b8[0x17] = '\0';
    func_0x000107c27984(acStack_1b8,acStack_198,&lStack_138,4);
    pcVar6 = "";
    unaff_x25 = acStack_1b8;
    pcVar8 = acStack_1b8;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_1a0 = unaff_x25;
    func_0x000107c278ac(&pcStack_1a0);
    lVar17 = 0;
    pcVar11 = pcVar4;
    do {
      if ((&cStack_139)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_150 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x60);
  }
  _objc_release(pcVar13);
  _objc_release(pcVar12);
  _objc_release(pcVar5);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar13);
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != acStack_198);
  _objc_release(pcVar13);
  _objc_release(pcVar12);
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar9 = acStack_2c0;
  pcStack_1c8 = FUN_10b5dab5c;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar6;
  pcVar5 = pcVar8;
  pcVar12 = pcVar11;
  pcVar13 = pcVar14;
  pcVar2 = pcVar16;
  pcVar3 = param_8;
  ppuStack_1d0 = &puStack_f0;
  _objc_retain(pcVar6);
  _objc_retain(pcVar8);
  _objc_retain(pcVar11);
  _objc_retain(pcVar14);
  iVar15 = (int)pcVar2;
  if (pcVar4 != (char *)0x0) {
    plVar18 = *(long **)(pcVar4 + 8);
    pcVar1 = "";
    (**(code **)(*plVar18 + 0x28))();
    iVar15 = (int)pcVar2;
    if ((int)plVar18 != 0) {
      plVar18 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar6;
        _objc_retainAutorelease(pcVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      func_0x000107c278b8(acStack_2a0,pcVar1);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar1 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x000107c278b8(auStack_288,pcVar1);
      _objc_retain(pcVar11);
      if (pcVar11 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar11);
        pcVar1 = pcVar11;
        func_0x00010bdc3520(pcVar11);
      }
      _objc_release(pcVar11);
      func_0x000107c278b8(auStack_270,pcVar1);
      _objc_retain(pcVar14);
      if (pcVar14 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar14);
        pcVar1 = pcVar14;
        func_0x00010bdc3520(pcVar14);
      }
      _objc_release(pcVar14);
      func_0x000107c278b8(auStack_258,pcVar1);
      unaff_x26 = acStack_240;
      pcVar1 = "true";
      if ((int)pcVar16 == 0) {
        pcVar1 = "false";
      }
      func_0x000107c278b8(unaff_x26,pcVar1);
      acStack_2c0[0] = '\0';
      acStack_2c0[1] = '\0';
      acStack_2c0[2] = '\0';
      acStack_2c0[3] = '\0';
      acStack_2c0[4] = '\0';
      acStack_2c0[5] = '\0';
      acStack_2c0[6] = '\0';
      acStack_2c0[7] = '\0';
      acStack_2c0[8] = '\0';
      acStack_2c0[9] = '\0';
      acStack_2c0[10] = '\0';
      acStack_2c0[0xb] = '\0';
      acStack_2c0[0xc] = '\0';
      acStack_2c0[0xd] = '\0';
      acStack_2c0[0xe] = '\0';
      acStack_2c0[0xf] = '\0';
      acStack_2c0[0x10] = '\0';
      acStack_2c0[0x11] = '\0';
      acStack_2c0[0x12] = '\0';
      acStack_2c0[0x13] = '\0';
      acStack_2c0[0x14] = '\0';
      acStack_2c0[0x15] = '\0';
      acStack_2c0[0x16] = '\0';
      acStack_2c0[0x17] = '\0';
      func_0x000107c27984(acStack_2c0,acStack_2a0,&lStack_228,5);
      pcVar12 = (char *)((long)param_8 * 100);
      pcVar1 = "";
      (**(code **)(*plVar18 + 0x18))(plVar18);
      puStack_2a8 = acStack_2c0;
      func_0x000107c278ac(&puStack_2a8);
      lVar17 = 0;
      pcVar5 = pcVar9;
      do {
        if ((&cStack_229)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)(acStack_240 + lVar17));
        }
        iVar15 = (int)pcVar2;
        lVar17 = lVar17 + -0x18;
      } while (lVar17 != -0x78);
    }
  }
  _objc_release(pcVar14);
  _objc_release(pcVar11);
  _objc_release(pcVar8);
  pcVar4 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar14);
  do {
    unaff_x26 = unaff_x26 + -0x18;
  } while (unaff_x26 != acStack_2a0);
  _objc_release(pcVar14);
  _objc_release(pcVar11);
  _objc_release(pcVar8);
  _objc_release(pcVar6);
  __Unwind_Resume();
  puVar10 = &uStack_3c0;
  pcStack_2c8 = FUN_10b5daee4;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar1;
  pcVar6 = pcVar5;
  pcVar8 = pcVar12;
  pppuStack_2d0 = &ppuStack_1d0;
  _objc_retain(pcVar1);
  iVar7 = (int)pcVar6;
  _objc_retain(pcVar5);
  _objc_retain(pcVar12);
  _objc_retain(pcVar13);
  if (pcVar4 != (char *)0x0) {
    plVar18 = *(long **)(pcVar4 + 8);
    pcVar2 = "\x01";
    (**(code **)(*plVar18 + 0x28))();
    if ((int)plVar18 != 0) {
      plVar18 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x000107c278b8(acStack_3a0,pcVar4);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar4 = "";
      }
      else {
        _objc_retainAutorelease(pcVar5);
        pcVar4 = pcVar5;
        func_0x00010bdc3520(pcVar5);
      }
      _objc_release(pcVar5);
      func_0x000107c278b8(auStack_388,pcVar4);
      _objc_retain(pcVar12);
      if (pcVar12 == (char *)0x0) {
        pcVar4 = "";
      }
      else {
        _objc_retainAutorelease(pcVar12);
        pcVar4 = pcVar12;
        func_0x00010bdc3520(pcVar12);
      }
      _objc_release(pcVar12);
      func_0x000107c278b8(auStack_370,pcVar4);
      _objc_retain(pcVar13);
      if (pcVar13 == (char *)0x0) {
        pcVar4 = "";
      }
      else {
        _objc_retainAutorelease(pcVar13);
        pcVar4 = pcVar13;
        func_0x00010bdc3520(pcVar13);
      }
      _objc_release(pcVar13);
      func_0x000107c278b8(auStack_358,pcVar4);
      unaff_x26 = acStack_340;
      pcVar4 = "true";
      if (iVar15 == 0) {
        pcVar4 = "false";
      }
      func_0x000107c278b8(unaff_x26,pcVar4);
      uStack_3c0 = 0;
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      func_0x000107c27984(&uStack_3c0,acStack_3a0,&lStack_328,5);
      pcVar2 = "\x01";
      (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_110d24e60,&uStack_3c0,pcVar3);
      puStack_3a8 = (undefined1 *)&uStack_3c0;
      func_0x000107c278ac(&puStack_3a8);
      lVar17 = 0;
      pcVar8 = pcVar3;
      do {
        if ((&cStack_329)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)(acStack_340 + lVar17));
        }
        iVar7 = (int)puVar10;
        lVar17 = lVar17 + -0x18;
      } while (lVar17 != -0x78);
    }
  }
  _objc_release(pcVar13);
  _objc_release(pcVar12);
  _objc_release(pcVar5);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar13);
  pcStack_400 = acStack_3a0;
  do {
    unaff_x26 = unaff_x26 + -0x18;
  } while (unaff_x26 != pcStack_400);
  _objc_release(pcVar13);
  _objc_release(pcVar12);
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  pcVar3 = pcVar4;
  __Unwind_Resume();
  pcStack_3c8 = FUN_10b5db268;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar2;
  pcStack_3f8 = pcVar4;
  pcStack_3f0 = pcVar13;
  pcStack_3e8 = pcVar12;
  pcStack_3e0 = pcVar5;
  pcStack_3d8 = pcVar1;
  ppppuStack_3d0 = &pppuStack_2d0;
  iVar15 = iVar7;
  _objc_retain(pcVar2);
  if (pcVar3 != (char *)0x0) {
    plVar18 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar2;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x000107c278b8(auStack_438,pcVar1);
    pcVar1 = "true";
    if (iVar7 == 0) {
      pcVar1 = "false";
    }
    func_0x000107c278b8(auStack_420,pcVar1);
    uStack_458 = 0;
    uStack_450 = 0;
    uStack_448 = 0;
    func_0x000107c27984(&uStack_458,auStack_438,&lStack_408,2);
    pcVar6 = "";
    puVar10 = &uStack_458;
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_110d24eb0,puVar10,pcVar8);
    puStack_440 = &uStack_458;
    func_0x000107c278ac(&puStack_440);
    lVar17 = 0;
    do {
      if ((&cStack_409)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_420 + lVar17));
      }
      iVar15 = (int)puVar10;
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x30);
  }
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_408) {
    ___stack_chk_fail();
    _objc_release(pcVar2);
    _objc_release(pcVar2);
    __Unwind_Resume();
    lStack_4b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar5 = pcVar6;
    _objc_retain(pcVar6);
    if (pcVar1 != (char *)0x0) {
      _objc_retain(pcVar6);
      plVar18 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar6;
        _objc_retainAutorelease(pcVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      func_0x000107c278b8(auStack_4e8,pcVar1);
      pcVar1 = "true";
      if (iVar15 == 0) {
        pcVar1 = "false";
      }
      func_0x000107c278b8(auStack_4d0,pcVar1);
      uStack_508 = 0;
      uStack_500 = 0;
      uStack_4f8 = 0;
      func_0x000107c27984(&uStack_508,auStack_4e8,&lStack_4b8,2);
      (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_110d24f00,&uStack_508,(long)(param_1 * 1000.0));
      puStack_4f0 = &uStack_508;
      func_0x000107c278ac(&puStack_4f0);
      lVar17 = 0;
      do {
        if ((&cStack_4b9)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4d0 + lVar17));
        }
        lVar17 = lVar17 + -0x18;
      } while (lVar17 != -0x30);
      pcVar5 = pcVar6;
      _objc_release(pcVar6);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4b8) {
      ___stack_chk_fail();
      _objc_release(pcVar6);
      _objc_release(pcVar6);
      _objc_release(pcVar6);
      __Unwind_Resume(pcVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(pcVar5 + 8,0);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar6);
    return;
  }
  return;
}



/* Entry: 10b5da828; end: 10b5dab5b;  */

/* WARNING: Removing unreachable block (ram,0x00010b5daea4) */
/* WARNING: Removing unreachable block (ram,0x00010b5dab1c) */
/* WARNING: Removing unreachable block (ram,0x00010b5db228) */

void FUN_10b5da828(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7,char *param_8)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 *puVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  char *pcVar16;
  long lVar17;
  long *plVar18;
  char *unaff_x25;
  char *unaff_x26;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 *puStack_410;
  undefined1 auStack_408 [24];
  undefined8 auStack_3f0 [2];
  char cStack_3d9;
  long lStack_3d8;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 *puStack_360;
  undefined1 auStack_358 [24];
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  char *pcStack_320;
  char *pcStack_318;
  char *pcStack_310;
  char *pcStack_308;
  char *pcStack_300;
  char *pcStack_2f8;
  undefined1 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  char acStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  char acStack_260 [23];
  char cStack_249;
  long lStack_248;
  undefined1 **ppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1e0 [24];
  undefined1 *puStack_1c8;
  char acStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  char acStack_160 [23];
  char cStack_149;
  long lStack_148;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  char acStack_d8 [24];
  char *pcStack_c0;
  char acStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar4 = param_4;
  pcVar11 = param_5;
  pcVar6 = param_6;
  pcVar3 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_2 != 0) {
    plVar18 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(acStack_b8,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_a0,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_88,pcVar1);
    _objc_retain(param_6);
    if (param_6 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(param_6);
      unaff_x26 = param_6;
      func_0x00010bdc3520();
    }
    _objc_release(param_6);
    func_0x000107c278b8(auStack_70,unaff_x26);
    acStack_d8[0] = '\0';
    acStack_d8[1] = '\0';
    acStack_d8[2] = '\0';
    acStack_d8[3] = '\0';
    acStack_d8[4] = '\0';
    acStack_d8[5] = '\0';
    acStack_d8[6] = '\0';
    acStack_d8[7] = '\0';
    acStack_d8[8] = '\0';
    acStack_d8[9] = '\0';
    acStack_d8[10] = '\0';
    acStack_d8[0xb] = '\0';
    acStack_d8[0xc] = '\0';
    acStack_d8[0xd] = '\0';
    acStack_d8[0xe] = '\0';
    acStack_d8[0xf] = '\0';
    acStack_d8[0x10] = '\0';
    acStack_d8[0x11] = '\0';
    acStack_d8[0x12] = '\0';
    acStack_d8[0x13] = '\0';
    acStack_d8[0x14] = '\0';
    acStack_d8[0x15] = '\0';
    acStack_d8[0x16] = '\0';
    acStack_d8[0x17] = '\0';
    func_0x000107c27984(acStack_d8,acStack_b8,&lStack_58,4);
    pcVar1 = "";
    unaff_x25 = acStack_d8;
    pcVar4 = acStack_d8;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_c0 = unaff_x25;
    func_0x000107c278ac(&pcStack_c0);
    lVar17 = 0;
    pcVar11 = param_7;
    do {
      if ((&cStack_59)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x60);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != acStack_b8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  pcVar9 = acStack_1e0;
  pcStack_e8 = FUN_10b5dab5c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar8 = pcVar4;
  pcVar12 = pcVar11;
  pcVar14 = pcVar6;
  pcVar16 = pcVar3;
  pcVar13 = param_8;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  _objc_retain(pcVar11);
  _objc_retain(pcVar6);
  iVar15 = (int)pcVar16;
  if (pcVar2 != (char *)0x0) {
    plVar18 = *(long **)(pcVar2 + 8);
    pcVar5 = "";
    (**(code **)(*plVar18 + 0x28))();
    iVar15 = (int)pcVar16;
    if ((int)plVar18 != 0) {
      plVar18 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x000107c278b8(acStack_1c0,pcVar2);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar2 = pcVar4;
        func_0x00010bdc3520(pcVar4);
      }
      _objc_release(pcVar4);
      func_0x000107c278b8(auStack_1a8,pcVar2);
      _objc_retain(pcVar11);
      if (pcVar11 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar11);
        pcVar2 = pcVar11;
        func_0x00010bdc3520(pcVar11);
      }
      _objc_release(pcVar11);
      func_0x000107c278b8(auStack_190,pcVar2);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar2 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x000107c278b8(auStack_178,pcVar2);
      unaff_x26 = acStack_160;
      pcVar2 = "true";
      if ((int)pcVar3 == 0) {
        pcVar2 = "false";
      }
      func_0x000107c278b8(unaff_x26,pcVar2);
      acStack_1e0[0] = '\0';
      acStack_1e0[1] = '\0';
      acStack_1e0[2] = '\0';
      acStack_1e0[3] = '\0';
      acStack_1e0[4] = '\0';
      acStack_1e0[5] = '\0';
      acStack_1e0[6] = '\0';
      acStack_1e0[7] = '\0';
      acStack_1e0[8] = '\0';
      acStack_1e0[9] = '\0';
      acStack_1e0[10] = '\0';
      acStack_1e0[0xb] = '\0';
      acStack_1e0[0xc] = '\0';
      acStack_1e0[0xd] = '\0';
      acStack_1e0[0xe] = '\0';
      acStack_1e0[0xf] = '\0';
      acStack_1e0[0x10] = '\0';
      acStack_1e0[0x11] = '\0';
      acStack_1e0[0x12] = '\0';
      acStack_1e0[0x13] = '\0';
      acStack_1e0[0x14] = '\0';
      acStack_1e0[0x15] = '\0';
      acStack_1e0[0x16] = '\0';
      acStack_1e0[0x17] = '\0';
      func_0x000107c27984(acStack_1e0,acStack_1c0,&lStack_148,5);
      pcVar12 = (char *)((long)param_8 * 100);
      pcVar5 = "";
      (**(code **)(*plVar18 + 0x18))(plVar18);
      puStack_1c8 = acStack_1e0;
      func_0x000107c278ac(&puStack_1c8);
      lVar17 = 0;
      pcVar8 = pcVar9;
      do {
        if ((&cStack_149)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)(acStack_160 + lVar17));
        }
        iVar15 = (int)pcVar16;
        lVar17 = lVar17 + -0x18;
      } while (lVar17 != -0x78);
    }
  }
  _objc_release(pcVar6);
  _objc_release(pcVar11);
  _objc_release(pcVar4);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
    ___stack_chk_fail();
    _objc_release(pcVar6);
    do {
      unaff_x26 = unaff_x26 + -0x18;
    } while (unaff_x26 != acStack_1c0);
    _objc_release(pcVar6);
    _objc_release(pcVar11);
    _objc_release(pcVar4);
    _objc_release(pcVar1);
    __Unwind_Resume();
    puVar10 = &uStack_2e0;
    pcStack_1e8 = FUN_10b5daee4;
    lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar1 = pcVar5;
    pcVar4 = pcVar8;
    pcVar11 = pcVar12;
    ppuStack_1f0 = &puStack_f0;
    _objc_retain(pcVar5);
    iVar7 = (int)pcVar4;
    _objc_retain(pcVar8);
    _objc_retain(pcVar12);
    _objc_retain(pcVar14);
    if (pcVar3 != (char *)0x0) {
      plVar18 = *(long **)(pcVar3 + 8);
      pcVar1 = "\x01";
      (**(code **)(*plVar18 + 0x28))();
      if ((int)plVar18 != 0) {
        plVar18 = *(long **)(pcVar3 + 8);
        _objc_retain(pcVar5);
        if (pcVar5 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar5;
          _objc_retainAutorelease(pcVar5);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar5);
        func_0x000107c278b8(acStack_2c0,pcVar1);
        _objc_retain(pcVar8);
        if (pcVar8 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar8);
          pcVar1 = pcVar8;
          func_0x00010bdc3520(pcVar8);
        }
        _objc_release(pcVar8);
        func_0x000107c278b8(auStack_2a8,pcVar1);
        _objc_retain(pcVar12);
        if (pcVar12 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar12);
          pcVar1 = pcVar12;
          func_0x00010bdc3520(pcVar12);
        }
        _objc_release(pcVar12);
        func_0x000107c278b8(auStack_290,pcVar1);
        _objc_retain(pcVar14);
        if (pcVar14 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar14);
          pcVar1 = pcVar14;
          func_0x00010bdc3520(pcVar14);
        }
        _objc_release(pcVar14);
        func_0x000107c278b8(auStack_278,pcVar1);
        unaff_x26 = acStack_260;
        pcVar1 = "true";
        if (iVar15 == 0) {
          pcVar1 = "false";
        }
        func_0x000107c278b8(unaff_x26,pcVar1);
        uStack_2e0 = 0;
        uStack_2d8 = 0;
        uStack_2d0 = 0;
        func_0x000107c27984(&uStack_2e0,acStack_2c0,&lStack_248,5);
        pcVar1 = "\x01";
        (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_110d24e60,&uStack_2e0,pcVar13);
        puStack_2c8 = (undefined1 *)&uStack_2e0;
        func_0x000107c278ac(&puStack_2c8);
        lVar17 = 0;
        pcVar11 = pcVar13;
        do {
          if ((&cStack_249)[lVar17] < '\0') {
            __ZdlPv(*(undefined8 *)(acStack_260 + lVar17));
          }
          iVar7 = (int)puVar10;
          lVar17 = lVar17 + -0x18;
        } while (lVar17 != -0x78);
      }
    }
    _objc_release(pcVar14);
    _objc_release(pcVar12);
    _objc_release(pcVar8);
    pcVar4 = pcVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar14);
    pcStack_320 = acStack_2c0;
    do {
      unaff_x26 = unaff_x26 + -0x18;
    } while (unaff_x26 != pcStack_320);
    _objc_release(pcVar14);
    _objc_release(pcVar12);
    _objc_release(pcVar8);
    _objc_release(pcVar5);
    pcVar3 = pcVar4;
    __Unwind_Resume();
    pcStack_2e8 = FUN_10b5db268;
    lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar6 = pcVar1;
    pcStack_318 = pcVar4;
    pcStack_310 = pcVar14;
    pcStack_308 = pcVar12;
    pcStack_300 = pcVar8;
    pcStack_2f8 = pcVar5;
    pppuStack_2f0 = &ppuStack_1f0;
    iVar15 = iVar7;
    _objc_retain(pcVar1);
    if (pcVar3 != (char *)0x0) {
      plVar18 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = pcVar1;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x000107c278b8(auStack_358,pcVar4);
      pcVar4 = "true";
      if (iVar7 == 0) {
        pcVar4 = "false";
      }
      func_0x000107c278b8(auStack_340,pcVar4);
      uStack_378 = 0;
      uStack_370 = 0;
      uStack_368 = 0;
      func_0x000107c27984(&uStack_378,auStack_358,&lStack_328,2);
      pcVar6 = "";
      puVar10 = &uStack_378;
      (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_110d24eb0,puVar10,pcVar11);
      puStack_360 = &uStack_378;
      func_0x000107c278ac(&puStack_360);
      lVar17 = 0;
      do {
        if ((&cStack_329)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_340 + lVar17));
        }
        iVar15 = (int)puVar10;
        lVar17 = lVar17 + -0x18;
      } while (lVar17 != -0x30);
    }
    pcVar4 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_328) {
      ___stack_chk_fail();
      _objc_release(pcVar1);
      _objc_release(pcVar1);
      __Unwind_Resume();
      lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar1 = pcVar6;
      _objc_retain(pcVar6);
      if (pcVar4 != (char *)0x0) {
        _objc_retain(pcVar6);
        plVar18 = *(long **)(pcVar4 + 8);
        _objc_retain(pcVar6);
        if (pcVar6 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar6;
          _objc_retainAutorelease(pcVar6);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar6);
        func_0x000107c278b8(auStack_408,pcVar1);
        pcVar1 = "true";
        if (iVar15 == 0) {
          pcVar1 = "false";
        }
        func_0x000107c278b8(auStack_3f0,pcVar1);
        uStack_428 = 0;
        uStack_420 = 0;
        uStack_418 = 0;
        func_0x000107c27984(&uStack_428,auStack_408,&lStack_3d8,2);
        (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_110d24f00,&uStack_428,(long)(param_1 * 1000.0));
        puStack_410 = &uStack_428;
        func_0x000107c278ac(&puStack_410);
        lVar17 = 0;
        do {
          if ((&cStack_3d9)[lVar17] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_3f0 + lVar17));
          }
          lVar17 = lVar17 + -0x18;
        } while (lVar17 != -0x30);
        pcVar1 = pcVar6;
        _objc_release(pcVar6);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3d8) {
        ___stack_chk_fail();
        _objc_release(pcVar6);
        _objc_release(pcVar6);
        _objc_release(pcVar6);
        __Unwind_Resume(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_storeStrong_11034d330)(pcVar1 + 8,0);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(pcVar6);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10b5dab5c; end: 10b5daee3;  */

/* WARNING: Removing unreachable block (ram,0x00010b5daea4) */
/* WARNING: Removing unreachable block (ram,0x00010b5db228) */

void FUN_10b5dab5c(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,undefined8 param_7,char *param_8)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  undefined8 *puVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *unaff_x26;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 *puStack_330;
  undefined1 auStack_328 [24];
  undefined8 auStack_310 [2];
  char cStack_2f9;
  long lStack_2f8;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined1 auStack_278 [24];
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 *puStack_240;
  char *pcStack_238;
  char *pcStack_230;
  char *pcStack_228;
  char *pcStack_220;
  char *pcStack_218;
  undefined1 **ppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [3];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined1 *puStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [3];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 auStack_80 [2];
  char cStack_69;
  long lStack_68;
  
  pcVar3 = acStack_100;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  pcVar6 = param_4;
  pcVar10 = param_5;
  pcVar12 = param_6;
  uVar14 = param_7;
  pcVar4 = param_8;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  iVar13 = (int)uVar14;
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    pcVar2 = "";
    (**(code **)(*plVar1 + 0x28))();
    iVar13 = (int)uVar14;
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x000107c278b8(auStack_e0,pcVar2);
      _objc_retain(param_4);
      if (param_4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_4);
        pcVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x000107c278b8(auStack_c8,pcVar2);
      _objc_retain(param_5);
      if (param_5 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_5);
        pcVar2 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x000107c278b8(auStack_b0,pcVar2);
      _objc_retain(param_6);
      if (param_6 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_6);
        pcVar2 = param_6;
        func_0x00010bdc3520(param_6);
      }
      _objc_release(param_6);
      func_0x000107c278b8(auStack_98,pcVar2);
      unaff_x26 = auStack_80;
      pcVar2 = "true";
      if ((int)param_7 == 0) {
        pcVar2 = "false";
      }
      func_0x000107c278b8(unaff_x26,pcVar2);
      acStack_100[0] = '\0';
      acStack_100[1] = '\0';
      acStack_100[2] = '\0';
      acStack_100[3] = '\0';
      acStack_100[4] = '\0';
      acStack_100[5] = '\0';
      acStack_100[6] = '\0';
      acStack_100[7] = '\0';
      acStack_100[8] = '\0';
      acStack_100[9] = '\0';
      acStack_100[10] = '\0';
      acStack_100[0xb] = '\0';
      acStack_100[0xc] = '\0';
      acStack_100[0xd] = '\0';
      acStack_100[0xe] = '\0';
      acStack_100[0xf] = '\0';
      acStack_100[0x10] = '\0';
      acStack_100[0x11] = '\0';
      acStack_100[0x12] = '\0';
      acStack_100[0x13] = '\0';
      acStack_100[0x14] = '\0';
      acStack_100[0x15] = '\0';
      acStack_100[0x16] = '\0';
      acStack_100[0x17] = '\0';
      func_0x000107c27984(acStack_100,auStack_e0,&lStack_68,5);
      pcVar10 = (char *)((long)param_8 * 100);
      pcVar2 = "";
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_e8 = acStack_100;
      func_0x000107c278ac(&puStack_e8);
      lVar15 = 0;
      pcVar6 = pcVar3;
      do {
        if ((&cStack_69)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_80 + lVar15));
        }
        iVar13 = (int)uVar14;
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x78);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  pcVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  do {
    unaff_x26 = unaff_x26 + -3;
  } while (unaff_x26 != auStack_e0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar9 = &uStack_200;
  pcStack_108 = FUN_10b5daee4;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar2;
  pcVar5 = pcVar6;
  pcVar11 = pcVar10;
  puStack_110 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  iVar8 = (int)pcVar5;
  _objc_retain(pcVar6);
  _objc_retain(pcVar10);
  _objc_retain(pcVar12);
  if (pcVar3 != (char *)0x0) {
    plVar1 = *(long **)(pcVar3 + 8);
    pcVar7 = "\x01";
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x000107c278b8(auStack_1e0,pcVar3);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar3 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x000107c278b8(auStack_1c8,pcVar3);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar3 = pcVar10;
        func_0x00010bdc3520(pcVar10);
      }
      _objc_release(pcVar10);
      func_0x000107c278b8(auStack_1b0,pcVar3);
      _objc_retain(pcVar12);
      if (pcVar12 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(pcVar12);
        pcVar3 = pcVar12;
        func_0x00010bdc3520(pcVar12);
      }
      _objc_release(pcVar12);
      func_0x000107c278b8(auStack_198,pcVar3);
      unaff_x26 = auStack_180;
      pcVar3 = "true";
      if (iVar13 == 0) {
        pcVar3 = "false";
      }
      func_0x000107c278b8(unaff_x26,pcVar3);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x000107c27984(&uStack_200,auStack_1e0,&lStack_168,5);
      pcVar7 = "\x01";
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d24e60,&uStack_200,pcVar4);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x000107c278ac(&puStack_1e8);
      lVar15 = 0;
      pcVar11 = pcVar4;
      do {
        if ((&cStack_169)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar15));
        }
        iVar8 = (int)puVar9;
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x78);
    }
  }
  _objc_release(pcVar12);
  _objc_release(pcVar10);
  _objc_release(pcVar6);
  pcVar4 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
    ___stack_chk_fail();
    _objc_release(pcVar12);
    puStack_240 = auStack_1e0;
    do {
      unaff_x26 = unaff_x26 + -3;
    } while (unaff_x26 != puStack_240);
    _objc_release(pcVar12);
    _objc_release(pcVar10);
    _objc_release(pcVar6);
    _objc_release(pcVar2);
    pcVar5 = pcVar4;
    __Unwind_Resume();
    pcStack_208 = FUN_10b5db268;
    lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar7;
    pcStack_238 = pcVar4;
    pcStack_230 = pcVar12;
    pcStack_228 = pcVar10;
    pcStack_220 = pcVar6;
    pcStack_218 = pcVar2;
    ppuStack_210 = &puStack_110;
    iVar13 = iVar8;
    _objc_retain(pcVar7);
    if (pcVar5 != (char *)0x0) {
      plVar1 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar7;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(pcVar7);
      func_0x000107c278b8(auStack_278,pcVar2);
      pcVar2 = "true";
      if (iVar8 == 0) {
        pcVar2 = "false";
      }
      func_0x000107c278b8(auStack_260,pcVar2);
      uStack_298 = 0;
      uStack_290 = 0;
      uStack_288 = 0;
      func_0x000107c27984(&uStack_298,auStack_278,&lStack_248,2);
      pcVar3 = "";
      puVar9 = &uStack_298;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d24eb0,puVar9,pcVar11);
      puStack_280 = &uStack_298;
      func_0x000107c278ac(&puStack_280);
      lVar15 = 0;
      do {
        if ((&cStack_249)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar15));
        }
        iVar13 = (int)puVar9;
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
    pcVar2 = pcVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
      ___stack_chk_fail();
      _objc_release(pcVar7);
      _objc_release(pcVar7);
      __Unwind_Resume();
      lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar6 = pcVar3;
      _objc_retain(pcVar3);
      if (pcVar2 != (char *)0x0) {
        _objc_retain(pcVar3);
        plVar1 = *(long **)(pcVar2 + 8);
        _objc_retain(pcVar3);
        if (pcVar3 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = pcVar3;
          _objc_retainAutorelease(pcVar3);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar3);
        func_0x000107c278b8(auStack_328,pcVar2);
        pcVar2 = "true";
        if (iVar13 == 0) {
          pcVar2 = "false";
        }
        func_0x000107c278b8(auStack_310,pcVar2);
        uStack_348 = 0;
        uStack_340 = 0;
        uStack_338 = 0;
        func_0x000107c27984(&uStack_348,auStack_328,&lStack_2f8,2);
        (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d24f00,&uStack_348,(long)(param_1 * 1000.0));
        puStack_330 = &uStack_348;
        func_0x000107c278ac(&puStack_330);
        lVar15 = 0;
        do {
          if ((&cStack_2f9)[lVar15] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_310 + lVar15));
          }
          lVar15 = lVar15 + -0x18;
        } while (lVar15 != -0x30);
        pcVar6 = pcVar3;
        _objc_release(pcVar3);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f8) {
        ___stack_chk_fail();
        _objc_release(pcVar3);
        _objc_release(pcVar3);
        _objc_release(pcVar3);
        __Unwind_Resume(pcVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_storeStrong_11034d330)(pcVar6 + 8,0);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(pcVar3);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10b5daee4; end: 10b5db267;  */

/* WARNING: Removing unreachable block (ram,0x00010b5db228) */

void FUN_10b5daee4(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,int param_7,char *param_8)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  char *pcVar9;
  long lVar10;
  undefined8 *unaff_x26;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_230;
  undefined1 auStack_228 [24];
  undefined8 auStack_210 [2];
  char cStack_1f9;
  long lStack_1f8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined1 auStack_178 [24];
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 *puStack_140;
  char *pcStack_138;
  char *pcStack_130;
  char *pcStack_128;
  char *pcStack_120;
  char *pcStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [3];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 auStack_80 [2];
  char cStack_69;
  long lStack_68;
  
  puVar8 = &uStack_100;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  pcVar3 = param_4;
  pcVar9 = param_5;
  _objc_retain(param_3);
  iVar6 = (int)pcVar3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    pcVar2 = "\x01";
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x000107c278b8(auStack_e0,pcVar2);
      _objc_retain(param_4);
      if (param_4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_4);
        pcVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x000107c278b8(auStack_c8,pcVar2);
      _objc_retain(param_5);
      if (param_5 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_5);
        pcVar2 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x000107c278b8(auStack_b0,pcVar2);
      _objc_retain(param_6);
      if (param_6 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_6);
        pcVar2 = param_6;
        func_0x00010bdc3520(param_6);
      }
      _objc_release(param_6);
      func_0x000107c278b8(auStack_98,pcVar2);
      unaff_x26 = auStack_80;
      pcVar2 = "true";
      if (param_7 == 0) {
        pcVar2 = "false";
      }
      func_0x000107c278b8(unaff_x26,pcVar2);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x000107c27984(&uStack_100,auStack_e0,&lStack_68,5);
      pcVar2 = "\x01";
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d24e60,&uStack_100,param_8);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x000107c278ac(&puStack_e8);
      lVar10 = 0;
      pcVar9 = param_8;
      do {
        if ((&cStack_69)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_80 + lVar10));
        }
        iVar6 = (int)puVar8;
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != -0x78);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  pcVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  puStack_140 = auStack_e0;
  do {
    unaff_x26 = unaff_x26 + -3;
  } while (unaff_x26 != puStack_140);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_108 = FUN_10b5db268;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar2;
  pcStack_138 = pcVar3;
  pcStack_130 = param_6;
  pcStack_128 = param_5;
  pcStack_120 = param_4;
  pcStack_118 = param_3;
  puStack_110 = &stack0xfffffffffffffff0;
  iVar7 = iVar6;
  _objc_retain(pcVar2);
  if (pcVar4 != (char *)0x0) {
    plVar1 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x000107c278b8(auStack_178,pcVar3);
    pcVar3 = "true";
    if (iVar6 == 0) {
      pcVar3 = "false";
    }
    func_0x000107c278b8(auStack_160,pcVar3);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x000107c27984(&uStack_198,auStack_178,&lStack_148,2);
    pcVar5 = "";
    puVar8 = &uStack_198;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d24eb0,puVar8,pcVar9);
    puStack_180 = &uStack_198;
    func_0x000107c278ac(&puStack_180);
    lVar10 = 0;
    do {
      if ((&cStack_149)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar10));
      }
      iVar7 = (int)puVar8;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  pcVar3 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
    ___stack_chk_fail();
    _objc_release(pcVar2);
    _objc_release(pcVar2);
    __Unwind_Resume();
    lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar5;
    _objc_retain(pcVar5);
    if (pcVar3 != (char *)0x0) {
      _objc_retain(pcVar5);
      plVar1 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar5;
        _objc_retainAutorelease(pcVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar5);
      func_0x000107c278b8(auStack_228,pcVar2);
      pcVar2 = "true";
      if (iVar7 == 0) {
        pcVar2 = "false";
      }
      func_0x000107c278b8(auStack_210,pcVar2);
      uStack_248 = 0;
      uStack_240 = 0;
      uStack_238 = 0;
      func_0x000107c27984(&uStack_248,auStack_228,&lStack_1f8,2);
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d24f00,&uStack_248,(long)(param_1 * 1000.0));
      puStack_230 = &uStack_248;
      func_0x000107c278ac(&puStack_230);
      lVar10 = 0;
      do {
        if ((&cStack_1f9)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_210 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != -0x30);
      pcVar2 = pcVar5;
      _objc_release(pcVar5);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1f8) {
      ___stack_chk_fail();
      _objc_release(pcVar5);
      _objc_release(pcVar5);
      _objc_release(pcVar5);
      __Unwind_Resume(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(pcVar2 + 8,0);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar5);
    return;
  }
  return;
}



/* Entry: 10b5db268; end: 10b5db44f;  */

void FUN_10b5db268(double param_1,long param_2,char *param_3,int param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  iVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_78,pcVar1);
    pcVar1 = "true";
    if (param_4 == 0) {
      pcVar1 = "false";
    }
    func_0x000107c278b8(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    puVar5 = &uStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110d24eb0,puVar5,param_5);
    puStack_80 = &uStack_98;
    func_0x000107c278ac(&puStack_80);
    lVar6 = 0;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      iVar4 = (int)puVar5;
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar1;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    _objc_retain(pcVar1);
    plVar7 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(auStack_128,pcVar2);
    pcVar2 = "true";
    if (iVar4 == 0) {
      pcVar2 = "false";
    }
    func_0x000107c278b8(auStack_110,pcVar2);
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    func_0x000107c27984(&uStack_148,auStack_128,&lStack_f8,2);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110d24f00,&uStack_148,(long)(param_1 * 1000.0));
    puStack_130 = &uStack_148;
    func_0x000107c278ac(&puStack_130);
    lVar6 = 0;
    do {
      if ((&cStack_f9)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
    pcVar3 = pcVar1;
    _objc_release(pcVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(pcVar3 + 8,0);
  return;
}



/* Entry: 10b5db450; end: 10b5db65f;  */

void FUN_10b5db450(double param_1,long param_2,char *param_3,int param_4)

{
  char *pcVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    _objc_retain(param_3);
    plVar2 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,pcVar1);
    pcVar1 = "true";
    if (param_4 == 0) {
      pcVar1 = "false";
    }
    func_0x000107c278b8(auStack_70,pcVar1);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    func_0x000107c27984(&uStack_a8,auStack_88,&lStack_58,2);
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110d24f00,&uStack_a8,(long)(param_1 * 1000.0));
    puStack_90 = &uStack_a8;
    func_0x000107c278ac(&puStack_90);
    lVar3 = 0;
    do {
      if ((&cStack_59)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
    pcVar1 = param_3;
    _objc_release(param_3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(pcVar1 + 8,0);
  return;
}



/* Entry: 10b5db660; end: 10b5db66b; -[SCLensExplorerStudySettingsServices .cxx_destruct] */

void FUN_10b5db660(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5db66c; end: 10b5db753; -[SCLensExplorerPrefetchConfig initWithPrefetchArchive:prefetchMode:lensesCount:lastUserActivityPeriod:backgroundPrefetchConfig:feedIds:prefetchLensAnimationsCount:containerPrefetchLensesCount:] */

undefined1 *
FUN_10b5db66c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1127064b0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 10b5db754; end: 10b5db777; -[SCLensExplorerPrefetchConfig copyWithZone:] */

undefined8 FUN_10b5db754(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b5db778; end: 10b5db807; -[SCLensExplorerPrefetchConfig hash] */

ulong * FUN_10b5db778(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = (ulong)*(byte *)(param_1 + 8);
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  puVar3 = &uStack_68;
  uStack_40 = uVar2;
  func_0x000107c3191c(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b5db8e8:
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10b5db8f4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        (((((char)puVar3[1] == (char)param_3[1] && (puVar3[2] == param_3[2])) &&
          (puVar3[3] == param_3[3])) && ((puVar3[4] == param_3[4] && (puVar3[7] == param_3[7]))))))
       && (puVar3[8] == param_3[8])) {
      uVar5 = puVar3[5];
      if ((uVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)uVar5 != 0)) {
        puVar6 = (ulong *)puVar3[6];
        if (puVar6 != (ulong *)param_3[6]) {
          func_0x00010c071ae0();
          goto LAB_10b5db8f4;
        }
        goto LAB_10b5db8e8;
      }
    }
    puVar6 = (ulong *)0x0;
  }
LAB_10b5db8f4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b5db808; end: 10b5db90f; -[SCLensExplorerPrefetchConfig isEqual:] */

long FUN_10b5db808(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b5db8e8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b5db8f4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
           (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) &&
          (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
         ((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
          (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))))) &&
       (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))) {
      lVar3 = *(long *)(param_1 + 0x28);
      if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x30);
        if (lVar3 != *(long *)(param_3 + 0x30)) {
          func_0x00010c071ae0();
          goto LAB_10b5db8f4;
        }
        goto LAB_10b5db8e8;
      }
    }
    lVar3 = 0;
  }
LAB_10b5db8f4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b5db910; end: 10b5db917; -[SCLensExplorerPrefetchConfig prefetchArchive] */

undefined1 FUN_10b5db910(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b5db918; end: 10b5db91f; -[SCLensExplorerPrefetchConfig prefetchMode] */

undefined8 FUN_10b5db918(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b5db920; end: 10b5db927; -[SCLensExplorerPrefetchConfig lensesCount] */

undefined8 FUN_10b5db920(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b5db928; end: 10b5db92f; -[SCLensExplorerPrefetchConfig lastUserActivityPeriod] */

undefined8 FUN_10b5db928(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b5db930; end: 10b5db937; -[SCLensExplorerPrefetchConfig backgroundPrefetchConfig] */

undefined8 FUN_10b5db930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b5db938; end: 10b5db93f; -[SCLensExplorerPrefetchConfig feedIds] */

undefined8 FUN_10b5db938(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b5db940; end: 10b5db947; -[SCLensExplorerPrefetchConfig prefetchLensAnimationsCount] */

undefined8 FUN_10b5db940(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b5db948; end: 10b5db94f; -[SCLensExplorerPrefetchConfig containerPrefetchLensesCount] */

undefined8 FUN_10b5db948(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b5db950; end: 10b5db97f; -[SCLensExplorerPrefetchConfig .cxx_destruct] */

void FUN_10b5db950(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 10b5db980; end: 10b5db987; -[SCLensAssetsDeliveryServices storedRemoteAssetsUploader] */

undefined8 FUN_10b5db980(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b5db988; end: 10b5db98f; -[SCLensAssetsDeliveryServices remoteAssetsUploadOperationStore] */

undefined8 FUN_10b5db988(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b5db990; end: 10b5db997; -[SCLensAssetsDeliveryServices lensRemoteAssetsStore] */

undefined8 FUN_10b5db990(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b5db998; end: 10b5db99f; -[SCLensAssetsDeliveryServices lensRemoteAssetEncryptor] */

undefined8 FUN_10b5db998(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b5db9a0; end: 10b5db9ff; -[SCLensAssetsDeliveryServices .cxx_destruct] */

void FUN_10b5db9a0(long param_1)

{
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



/* Entry: 10b5dba00; end: 10b5dbabf; -[SCLensRemoteAssetsUploadOperationTaskData initWithAssetId:effectId:state:uploadType:] */

undefined1 *
FUN_10b5dba00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1127064c0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b5dbac0; end: 10b5dbae3; -[SCLensRemoteAssetsUploadOperationTaskData copyWithZone:] */

undefined8 FUN_10b5dbac0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b5dbae4; end: 10b5dbb5f; -[SCLensRemoteAssetsUploadOperationTaskData hash] */

undefined8 * FUN_10b5dbae4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  puVar3 = &uStack_48;
  uStack_40 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b5dbc00:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b5dbc0c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && ((puVar3[3] == param_3[3] && (puVar3[4] == param_3[4])))) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10b5dbc0c;
        }
        goto LAB_10b5dbc00;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b5dbc0c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b5dbb60; end: 10b5dbc27; -[SCLensRemoteAssetsUploadOperationTaskData isEqual:] */

long FUN_10b5dbb60(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b5dbc00:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b5dbc0c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b5dbc0c;
        }
        goto LAB_10b5dbc00;
      }
    }
    lVar3 = 0;
  }
LAB_10b5dbc0c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b5dbc28; end: 10b5dbc2f; -[SCLensRemoteAssetsUploadOperationTaskData assetId] */

undefined8 FUN_10b5dbc28(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b5dbc30; end: 10b5dbc37; -[SCLensRemoteAssetsUploadOperationTaskData effectId] */

undefined8 FUN_10b5dbc30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b5dbc38; end: 10b5dbc3f; -[SCLensRemoteAssetsUploadOperationTaskData state] */

undefined8 FUN_10b5dbc38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b5dbc40; end: 10b5dbc47; -[SCLensRemoteAssetsUploadOperationTaskData uploadType] */

undefined8 FUN_10b5dbc40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b5dbc48; end: 10b5dbc77; -[SCLensRemoteAssetsUploadOperationTaskData .cxx_destruct] */

void FUN_10b5dbc48(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5dbc78; end: 10b5dbd23; -[SCLensRemoteAssetsUploadOperationData initWithAssetBatchId:tasks:] */

undefined1 *
FUN_10b5dbc78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127064c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b5dbd24; end: 10b5dbd47; -[SCLensRemoteAssetsUploadOperationData copyWithZone:] */

undefined8 FUN_10b5dbd24(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b5dbd48; end: 10b5dbdbb; -[SCLensRemoteAssetsUploadOperationData hash] */

undefined8 * FUN_10b5dbd48(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b5dbe3c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b5dbe48;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10b5dbe48;
        }
        goto LAB_10b5dbe3c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b5dbe48:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b5dbdbc; end: 10b5dbe63; -[SCLensRemoteAssetsUploadOperationData isEqual:] */

long FUN_10b5dbdbc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b5dbe3c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b5dbe48;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b5dbe48;
        }
        goto LAB_10b5dbe3c;
      }
    }
    lVar3 = 0;
  }
LAB_10b5dbe48:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b5dbe64; end: 10b5dbe6b; -[SCLensRemoteAssetsUploadOperationData assetBatchId] */

undefined8 FUN_10b5dbe64(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b5dbe6c; end: 10b5dbe73; -[SCLensRemoteAssetsUploadOperationData tasks] */

undefined8 FUN_10b5dbe6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b5dbe74; end: 10b5dbea3; -[SCLensRemoteAssetsUploadOperationData .cxx_destruct] */

void FUN_10b5dbe74(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5dbea4; end: 10b5dbf6f; +[SCLensRemoteAssetsUploadOperationEvent didFailUploadingAssetWithAssetId:effectId:error:] */

void FUN_10b5dbea4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c3100;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b5dbf70; end: 10b5dbfdb; +[SCLensRemoteAssetsUploadOperationEvent didFailWithError:] */

void FUN_10b5dbf70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c3100;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b5dbfdc; end: 10b5dc027; +[SCLensRemoteAssetsUploadOperationEvent didSucceed] */

void FUN_10b5dbfdc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c3100;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b5dc028; end: 10b5dc117; +[SCLensRemoteAssetsUploadOperationEvent didSucceedUploadingAssetWithAssetId:effectId:boltUrl:boltCo:] */

void FUN_10b5dc028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c3100;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b5dc118; end: 10b5dc13b; -[SCLensRemoteAssetsUploadOperationEvent copyWithZone:] */

undefined8 FUN_10b5dc118(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b5dc13c; end: 10b5dc1fb; -[SCLensRemoteAssetsUploadOperationEvent hash] */

void FUN_10b5dc13c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_98 = PTR_PTR_1127064d0;
  puStack_a0 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5dc1fc; end: 10b5dc23f; -[SCLensRemoteAssetsUploadOperationEvent internalInit] */

void FUN_10b5dc1fc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1127064d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5dc240; end: 10b5dc387; -[SCLensRemoteAssetsUploadOperationEvent isEqual:] */

long FUN_10b5dc240(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b5dc360:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b5dc36c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if (lVar3 != *(long *)(param_3 + 0x48)) {
                      func_0x00010c071ae0();
                      goto LAB_10b5dc36c;
                    }
                    goto LAB_10b5dc360;
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b5dc36c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b5dc388; end: 10b5dc487; -[SCLensRemoteAssetsUploadOperationEvent matchDidSucceedUploadingAsset:didFailUploadingAsset:didSucceed:didFail:] */

void FUN_10b5dc388(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))
                  (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                   *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
      }
    }
    else if ((lVar1 == 1) && (param_4 != 0)) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                 *(undefined8 *)(param_1 + 0x40));
    }
  }
  else if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
  }
  else if ((lVar1 == 3) && (param_6 != 0)) {
    (**(code **)(param_6 + 0x10))(param_6,*(undefined8 *)(param_1 + 0x48));
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b5dc488; end: 10b5dc4ff; -[SCLensRemoteAssetsUploadOperationEvent .cxx_destruct] */

void FUN_10b5dc488(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b5dc500; end: 10b5dc67b; -[SCLensRemoteAssetUploadInfo initWithAssetId:assetPath:encryptionKey:encryptionIv:effectId:assetBatchId:uploadType:compressionType:] */

undefined1 *
FUN_10b5dc500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1127064d8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b5dc67c; end: 10b5dc69f; -[SCLensRemoteAssetUploadInfo copyWithZone:] */

undefined8 FUN_10b5dc67c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b5dc6a0; end: 10b5dc74b; -[SCLensRemoteAssetUploadInfo hash] */

undefined8 * FUN_10b5dc6a0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  puVar3 = &uStack_68;
  uStack_40 = uVar2;
  func_0x000107c3191c(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b5dc84c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b5dc858;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && ((puVar3[7] == param_3[7] && (puVar3[8] == param_3[8])))) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[6];
                if (puVar6 != (undefined8 *)param_3[6]) {
                  func_0x00010c071ae0();
                  goto LAB_10b5dc858;
                }
                goto LAB_10b5dc84c;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b5dc858:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b5dc74c; end: 10b5dc873; -[SCLensRemoteAssetUploadInfo isEqual:] */

long FUN_10b5dc74c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b5dc84c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b5dc858;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38) &&
        (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if (lVar3 != *(long *)(param_3 + 0x30)) {
                  func_0x00010c071ae0();
                  goto LAB_10b5dc858;
                }
                goto LAB_10b5dc84c;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b5dc858:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b5dc874; end: 10b5dc87b; -[SCLensRemoteAssetUploadInfo assetId] */

undefined8 FUN_10b5dc874(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b5dc87c; end: 10b5dc883; -[SCLensRemoteAssetUploadInfo assetPath] */

undefined8 FUN_10b5dc87c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b5dc884; end: 10b5dc88b; -[SCLensRemoteAssetUploadInfo encryptionKey] */

undefined8 FUN_10b5dc884(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b5dc88c; end: 10b5dc893; -[SCLensRemoteAssetUploadInfo encryptionIv] */

undefined8 FUN_10b5dc88c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b5dc894; end: 10b5dc89b; -[SCLensRemoteAssetUploadInfo effectId] */

undefined8 FUN_10b5dc894(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b5dc89c; end: 10b5dc8a3; -[SCLensRemoteAssetUploadInfo assetBatchId] */

undefined8 FUN_10b5dc89c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b5dc8a4; end: 10b5dc8ab; -[SCLensRemoteAssetUploadInfo uploadType] */

undefined8 FUN_10b5dc8a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b5dc8ac; end: 10b5dc8b3; -[SCLensRemoteAssetUploadInfo compressionType] */

undefined8 FUN_10b5dc8ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b5dc8b4; end: 10b5dc913; -[SCLensRemoteAssetUploadInfo .cxx_destruct] */

void FUN_10b5dc8b4(long param_1)

{
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



/* Entry: 10b5dc914; end: 10b5dc91b; -[SCSystemNetworkServices appBackgroundNetworkStatsProvider] */

undefined8 FUN_10b5dc914(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b5dc91c; end: 10b5dc957; -[SCSystemNetworkServices .cxx_destruct] */

void FUN_10b5dc91c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5dc958; end: 10b5dc993; -[SCUserNetworkServices .cxx_destruct] */

void FUN_10b5dc958(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5dc994; end: 10b5dcadf; -[SCHTTPRequestContext initWithIdentifier:clientSwitchboardConfigKey:breadcrumbs:visibility:requiredConnectivity:maxNumOfRequestAttempts:timeoutInSecond:] */

undefined1 *
FUN_10b5dc994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1127064f0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b5dcae0; end: 10b5dcb03; -[SCHTTPRequestContext copyWithZone:] */

undefined8 FUN_10b5dcae0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b5dcb04; end: 10b5dcba3; -[SCHTTPRequestContext hash] */

undefined8 * FUN_10b5dcb04(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b5dcc8c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b5dcc98;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20) &&
        (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x30);
            if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
              if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
                func_0x00010c071ae0();
                goto LAB_10b5dcc98;
              }
              goto LAB_10b5dcc8c;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b5dcc98:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b5dcba4; end: 10b5dccb3; -[SCHTTPRequestContext isEqual:] */

long FUN_10b5dcba4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b5dcc8c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b5dcc98;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if (lVar3 != *(long *)(param_3 + 0x38)) {
                func_0x00010c071ae0();
                goto LAB_10b5dcc98;
              }
              goto LAB_10b5dcc8c;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b5dcc98:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b5dccb4; end: 10b5dccbb; -[SCHTTPRequestContext identifier] */

undefined8 FUN_10b5dccb4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b5dccbc; end: 10b5dccc3; -[SCHTTPRequestContext clientSwitchboardConfigKey] */

undefined8 FUN_10b5dccbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b5dccc4; end: 10b5dcccb; -[SCHTTPRequestContext breadcrumbs] */

undefined8 FUN_10b5dccc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b5dcccc; end: 10b5dccd3; -[SCHTTPRequestContext visibility] */

undefined8 FUN_10b5dcccc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b5dccd4; end: 10b5dccdb; -[SCHTTPRequestContext requiredConnectivity] */

undefined8 FUN_10b5dccd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b5dccdc; end: 10b5dcce3; -[SCHTTPRequestContext maxNumOfRequestAttempts] */

undefined8 FUN_10b5dccdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b5dcce4; end: 10b5dcceb; -[SCHTTPRequestContext timeoutInSecond] */

undefined8 FUN_10b5dcce4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


