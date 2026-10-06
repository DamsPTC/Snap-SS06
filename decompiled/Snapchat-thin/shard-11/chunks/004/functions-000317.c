/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10860aaf0; end: 10860aaf7; -[SCNotificationPayloadDecryptionResult errorMessage] */

undefined8 FUN_10860aaf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10860aaf8; end: 10860aaff; -[SCNotificationPayloadDecryptionResult timeUsedToDecryptInMs] */

undefined8 FUN_10860aaf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10860ab00; end: 10860ab3b; -[SCNotificationPayloadDecryptionResult .cxx_destruct] */

void FUN_10860ab00(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10860ab3c; end: 10860ac13;  */

void FUN_10860ab3c(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf3ec40(param_3);
  func_0x00010c0df760(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  dVar4 = *(double *)(param_2 + 0x28);
  puVar2 = PTR_PTR_1126b4ea8;
  _objc_alloc(PTR_PTR_1126b4ea8);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720((param_1 - dVar4) * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01a240(puVar2);
  _objc_release(puVar3);
  func_0x00010c0e2fc0(*(undefined8 *)(param_2 + 0x20));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10860ac14; end: 10860acf7;  */

void FUN_10860ac14(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  
  _CACurrentMediaTime();
  dVar6 = *(double *)(param_2 + 0x38);
  puVar3 = PTR_PTR_1126b4ea8;
  _objc_alloc(PTR_PTR_1126b4ea8);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720((param_1 - dVar6) * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(double *)(param_2 + 0x40) * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03ed40(puVar3,param_3,uVar1,uVar2,0,0,0,puVar4,puVar5,0);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c0e2fc0(*(undefined8 *)(param_2 + 0x30),param_3,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10860acf8; end: 10860ad33; -[SCGrpcAuthContextDelegate .cxx_destruct] */

void FUN_10860acf8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10860ad34; end: 10860addb;  */

void FUN_10860ad34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b4ea0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c0b5ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c020de0(puVar1);
  _objc_release(param_3);
  _objc_release(uVar2);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10860addc; end: 10860ae63; +[RTCAudioSession_v141 sharedInstance] */

void FUN_10860addc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_10860ae64;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam000000011372c4b0 != -1) {
    func_0x000107c27d9c(0x11372c4b0,&puStack_48);
  }
  uVar1 = uRam000000011372c4b8;
  _objc_retain(uRam000000011372c4b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10860ae64; end: 10860ae8b;  */

void FUN_10860ae64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam000000011372c4b8;
  uRam000000011372c4b8 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10860ae8c; end: 10860af67; -[RTCAudioSession_v141 init] */

undefined1 * FUN_10860ae8c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd1c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    func_0x00010befa240(puVar2);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10860af68; end: 10860b04b; -[RTCAudioSession_v141 dealloc] */

void FUN_10860af68(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  uVar2 = param_1;
  func_0x00010bf0fb00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puStack_38 = PTR_PTR_1126fd1c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10860b04c; end: 10860b0cf; -[RTCAudioSession_v141 setAudioSession:] */

void FUN_10860b04c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010bef9980(*(undefined8 *)(param_1 + 8),param_2,param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x10);
  return;
}



/* Entry: 10860b0d0; end: 10860b10b; -[RTCAudioSession_v141 audioSession] */

void FUN_10860b0d0(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10860b10c; end: 10860b113; -[RTCAudioSession_v141 session] */

undefined8 FUN_10860b10c(void)

{
  return 0;
}



/* Entry: 10860b114; end: 10860b117; -[RTCAudioSession_v141 setIsActive:] */

void FUN_10860b114(void)

{
  return;
}



/* Entry: 10860b118; end: 10860b11b; -[RTCAudioSession_v141 isActive] */

void FUN_10860b118(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06c8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isAudioEnabled_1125f8c40);
  return;
}



/* Entry: 10860b11c; end: 10860b123; -[RTCAudioSession_v141 isLocked] */

undefined1 FUN_10860b11c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 10860b124; end: 10860b127; -[RTCAudioSession_v141 setUseManualAudio:] */

void FUN_10860b124(void)

{
  return;
}



/* Entry: 10860b128; end: 10860b12f; -[RTCAudioSession_v141 useManualAudio] */

undefined8 FUN_10860b128(void)

{
  return 1;
}



/* Entry: 10860b130; end: 10860b227; -[RTCAudioSession_v141 setIsAudioEnabled:] */

void FUN_10860b130(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  if ((uint)*(byte *)(param_1 + 0x20) == (uint)param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x10);
    return;
  }
  *(char *)(param_1 + 0x20) = (char)param_3;
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x00010befa240(puVar1);
  }
  else {
    func_0x00010c12d5c0(puVar1);
  }
  _objc_release(puVar1);
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010c0dcf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_notifyDidChangeCanPlayOrRecord__112614df8,param_3);
  return;
}



/* Entry: 10860b228; end: 10860b25b; -[RTCAudioSession_v141 isAudioEnabled] */

undefined1 FUN_10860b228(long param_1)

{
  undefined1 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar1 = *(undefined1 *)(param_1 + 0x20);
  _os_unfair_lock_unlock(param_1 + 0x10);
  return uVar1;
}



/* Entry: 10860b25c; end: 10860b3bb; -[RTCAudioSession_v141 addDelegate:] */

void FUN_10860b25c(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong *puStack_38;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    _os_unfair_lock_lock(param_1 + 0x10);
    lVar2 = param_3;
    _objc_initWeak(auStack_60);
    _objc_release(param_3);
    puVar3 = (ulong *)(param_1 + 0x38);
    uVar6 = *(ulong *)(param_1 + 0x30);
    if (uVar6 < *puVar3) {
      _objc_copyWeak(uVar6,auStack_60);
      lVar8 = uVar6 + 8;
    }
    else {
      lVar7 = uVar6 - *(long *)(param_1 + 0x28);
      uVar6 = (lVar7 >> 3) + 1;
      if (uVar6 >> 0x3d != 0) {
        FUN_10860d5f0();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10860b398);
        (*pcVar1)();
      }
      uVar4 = *puVar3 - *(long *)(param_1 + 0x28);
      uVar5 = (long)uVar4 >> 2;
      if (uVar5 <= uVar6) {
        uVar5 = uVar6;
      }
      if (0x7ffffffffffffff7 < uVar4) {
        uVar5 = 0x1fffffffffffffff;
      }
      puStack_38 = puVar3;
      if (uVar5 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_10860d604();
      }
      lVar7 = uVar5 + lVar7;
      _objc_copyWeak(lVar7,auStack_60);
      lVar8 = lVar7 + 8;
      lVar7 = lVar7 + (*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x30));
      FUN_10860d638(*(long *)(param_1 + 0x28),*(long *)(param_1 + 0x30),lVar7);
      uStack_58 = *(undefined8 *)(param_1 + 0x28);
      *(long *)(param_1 + 0x28) = lVar7;
      *(long *)(param_1 + 0x30) = lVar8;
      uStack_40 = *(undefined8 *)(param_1 + 0x38);
      *(ulong *)(param_1 + 0x38) = uVar5 + lVar2 * 8;
      uStack_50 = uStack_58;
      uStack_48 = uStack_58;
      FUN_10860d6a0(&uStack_58);
    }
    *(long *)(param_1 + 0x30) = lVar8;
    _objc_destroyWeak(auStack_60);
    func_0x00010c12f320(param_1);
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  return;
}



/* Entry: 10860b3bc; end: 10860b4e7; -[RTCAudioSession_v141 removeDelegate:] */

void FUN_10860b3bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    return;
  }
  _os_unfair_lock_lock(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x30);
  for (lVar3 = *(long *)(param_1 + 0x28); lVar3 != lVar1; lVar3 = lVar3 + 8) {
    lVar4 = lVar3;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar4 == param_3) break;
  }
  lVar4 = lVar3;
  if (lVar3 != lVar1) {
    while (lVar4 = lVar4 + 8, lVar4 != lVar1) {
      lVar2 = lVar4;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar2 != param_3) {
        lVar2 = lVar4;
        _objc_loadWeakRetained(lVar4);
        _objc_storeWeak(lVar3,lVar2);
        _objc_release(lVar2);
        lVar3 = lVar3 + 8;
      }
    }
  }
  FUN_10860b4e8((long *)(param_1 + 0x28),lVar3,*(undefined8 *)(param_1 + 0x30));
  func_0x00010c12f320(param_1);
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10860b4e8; end: 10860b54f;  */

void FUN_10860b4e8(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (param_2 != param_3) {
    FUN_10860d6ec(param_3,*(undefined8 *)(param_1 + 8),param_2);
    lVar1 = *(long *)(param_1 + 8);
    while (lVar1 != param_3) {
      lVar1 = lVar1 + -8;
      _objc_destroyWeak(lVar1);
    }
    *(long *)(param_1 + 8) = param_3;
  }
  return;
}



/* Entry: 10860b550; end: 10860b57b; -[RTCAudioSession_v141 lockForConfiguration] */

void FUN_10860b550(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10860b57c; end: 10860b5a7; -[RTCAudioSession_v141 unlockForConfiguration] */

void FUN_10860b57c(long param_1)

{
  _os_unfair_lock_assert_owner(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x14);
  return;
}



/* Entry: 10860b5a8; end: 10860b5ff; -[RTCAudioSession_v141 category] */

void FUN_10860b5a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf0fb00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf33240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10860b600; end: 10860b64f; -[RTCAudioSession_v141 categoryOptions] */

undefined8 FUN_10860b600(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf0fb00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf33580();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10860b650; end: 10860b6a7; -[RTCAudioSession_v141 mode] */

void FUN_10860b650(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf0fb00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0cfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10860b6a8; end: 10860b6f7; -[RTCAudioSession_v141 secondaryAudioShouldBeSilencedHint] */

undefined8 FUN_10860b6a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf0fb00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c154dc0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10860b6f8; end: 10860b74f; -[RTCAudioSession_v141 currentRoute] */

void FUN_10860b6f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf0fb00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf5fe60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10860b750; end: 10860b79f; -[RTCAudioSession_v141 maximumInputNumberOfChannels] */

undefined8 FUN_10860b750(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf0fb00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0c34e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10860b7a0; end: 10860b7ef; -[RTCAudioSession_v141 maximumOutputNumberOfChannels] */

undefined8 FUN_10860b7a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf0fb00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0c35a0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10860b7f0; end: 10860b847; -[RTCAudioSession_v141 inputGain] */

undefined8 FUN_10860b7f0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf0fb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c065a80();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10860b848; end: 10860b897; -[RTCAudioSession_v141 inputGainSettable] */

undefined8 FUN_10860b848(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf0fb00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c065ac0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10860b898; end: 10860b8e7; -[RTCAudioSession_v141 inputAvailable] */

undefined8 FUN_10860b898(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf0fb00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0656e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10860b8e8; end: 10860b93f; -[RTCAudioSession_v141 inputDataSources] */

void FUN_10860b8e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf0fb00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c065900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10860b940; end: 10860b997; -[RTCAudioSession_v141 inputDataSource] */

void FUN_10860b940(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf0fb00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0658e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10860b998; end: 10860b9ef; -[RTCAudioSession_v141 outputDataSources] */

void FUN_10860b998(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf0fb00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0eec60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10860b9f0; end: 10860ba47; -[RTCAudioSession_v141 outputDataSource] */

void FUN_10860b9f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf0fb00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0eec40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10860ba48; end: 10860ba9f; -[RTCAudioSession_v141 sampleRate] */

undefined8 FUN_10860ba48(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf0fb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c149840();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10860baa0; end: 10860baf7; -[RTCAudioSession_v141 preferredSampleRate] */

undefined8 FUN_10860baa0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf0fb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106e00();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10860baf8; end: 10860bb47; -[RTCAudioSession_v141 inputNumberOfChannels] */

undefined8 FUN_10860baf8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf0fb00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c065d00();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10860bb48; end: 10860bb97; -[RTCAudioSession_v141 outputNumberOfChannels] */

undefined8 FUN_10860bb48(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf0fb00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0eef60();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10860bb98; end: 10860bbef; -[RTCAudioSession_v141 outputVolume] */

undefined8 FUN_10860bb98(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf0fb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ef220();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10860bbf0; end: 10860bc47; -[RTCAudioSession_v141 inputLatency] */

undefined8 FUN_10860bbf0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf0fb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c065c40();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10860bc48; end: 10860bc9f; -[RTCAudioSession_v141 outputLatency] */

undefined8 FUN_10860bc48(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf0fb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eee80();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10860bca0; end: 10860bcf7; -[RTCAudioSession_v141 IOBufferDuration] */

undefined8 FUN_10860bca0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf0fb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1740();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10860bcf8; end: 10860bd4f; -[RTCAudioSession_v141 preferredIOBufferDuration] */

undefined8 FUN_10860bcf8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf0fb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106be0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10860bd50; end: 10860bd57; -[RTCAudioSession_v141 setActive:error:] */

undefined8 FUN_10860bd50(void)

{
  return 1;
}



/* Entry: 10860bd58; end: 10860bd5f; -[RTCAudioSession_v141 setCategory:mode:options:error:] */

undefined8 FUN_10860bd58(void)

{
  return 1;
}



/* Entry: 10860bd60; end: 10860bd67; -[RTCAudioSession_v141 setCategory:withOptions:error:] */

undefined8 FUN_10860bd60(void)

{
  return 1;
}



/* Entry: 10860bd68; end: 10860bd6f; -[RTCAudioSession_v141 setMode:error:] */

undefined8 FUN_10860bd68(void)

{
  return 1;
}



/* Entry: 10860bd70; end: 10860bdef; -[RTCAudioSession_v141 setInputGain:error:] */

undefined8 FUN_10860bd70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010bf38160();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010bf0fb00(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c1ad3c0(param_1);
    _objc_release(param_2);
  }
  return uVar1;
}



/* Entry: 10860bdf0; end: 10860be6f; -[RTCAudioSession_v141 setPreferredSampleRate:error:] */

undefined8 FUN_10860bdf0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010bf38160();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010bf0fb00(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c1e02a0(param_1);
    _objc_release(param_2);
  }
  return uVar1;
}



/* Entry: 10860be70; end: 10860beef; -[RTCAudioSession_v141 setPreferredIOBufferDuration:error:] */

undefined8 FUN_10860be70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010bf38160();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010bf0fb00(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c1e0020(param_1);
    _objc_release(param_2);
  }
  return uVar1;
}



/* Entry: 10860bef0; end: 10860bf73; -[RTCAudioSession_v141 setPreferredInputNumberOfChannels:error:] */

undefined8
FUN_10860bef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf38160(param_1,param_2,param_4);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010bf0fb00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c1e00a0();
    _objc_release(param_1);
  }
  return uVar1;
}



/* Entry: 10860bf74; end: 10860bff7; -[RTCAudioSession_v141 setPreferredOutputNumberOfChannels:error:] */

undefined8
FUN_10860bf74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf38160(param_1,param_2,param_4);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010bf0fb00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c1e01c0();
    _objc_release(param_1);
  }
  return uVar1;
}



/* Entry: 10860bff8; end: 10860c07b; -[RTCAudioSession_v141 overrideOutputAudioPort:error:] */

undefined8
FUN_10860bff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf38160(param_1,param_2,param_4);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010bf0fb00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0f0320();
    _objc_release(param_1);
  }
  return uVar1;
}



/* Entry: 10860c07c; end: 10860c123; -[RTCAudioSession_v141 setPreferredInput:error:] */

ulong FUN_10860c07c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf38160(param_1,param_2,param_4);
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010bf0fb00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c1e0080();
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10860c124; end: 10860c1cb; -[RTCAudioSession_v141 setInputDataSource:error:] */

ulong FUN_10860c124(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf38160(param_1,param_2,param_4);
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010bf0fb00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c1ad2e0();
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10860c1cc; end: 10860c273; -[RTCAudioSession_v141 setOutputDataSource:error:] */

ulong FUN_10860c1cc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf38160(param_1,param_2,param_4);
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010bf0fb00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c1d6f80();
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10860c274; end: 10860c27b; -[RTCAudioSession_v141 audioSession:didChangeVolume:] */

void FUN_10860c274(double param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dcfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((float)param_1,param_2,PTR_s_notifyDidChangeOutputVolume__112614e00);
  return;
}



/* Entry: 10860c27c; end: 10860c2a3; -[RTCAudioSession_v141 audioSessionDidBeginInterruption:] */

void FUN_10860c27c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1b1fc0(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c0dcf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_notifyDidBeginInterruption_112614df0);
  return;
}



/* Entry: 10860c2a4; end: 10860c2d3; -[RTCAudioSession_v141 audioSession:didEndInterruption:] */

void FUN_10860c2a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c1b1fc0(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0dd050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_notifyDidEndInterruptionWithShou_112614e28,param_4);
  return;
}



/* Entry: 10860c2d4; end: 10860c2d7; -[RTCAudioSession_v141 audioSessionMediaServicesWereLost:] */

void FUN_10860c2d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dd390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_notifyMediaServicesWereLost_112614ef8);
  return;
}



/* Entry: 10860c2d8; end: 10860c2db; -[RTCAudioSession_v141 audioSessionMediaServicesWereReset:] */

void FUN_10860c2d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dd3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_notifyMediaServicesWereReset_112614f00);
  return;
}



/* Entry: 10860c2dc; end: 10860c403; -[RTCAudioSession_v141 handleRouteChangeNotification:] */

void FUN_10860c2dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c2827c0(uVar2);
  uVar3 = param_3;
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c0dcfc0(param_1,param_2,uVar1,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10860c404; end: 10860c433; -[RTCAudioSession_v141 handleCallKitActivate:] */

void FUN_10860c404(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x22) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x10);
  return;
}



/* Entry: 10860c434; end: 10860c45f; -[RTCAudioSession_v141 handleCallKitDeactivate:] */

void FUN_10860c434(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x22) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x10);
  return;
}



/* Entry: 10860c460; end: 10860c53b; +[RTCAudioSession_v141 lockError] */

void FUN_10860c460(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong *extraout_x8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e2e0(puVar4);
  puVar6 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  __Unwind_Resume();
  _os_unfair_lock_lock(puVar6 + 0x10);
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  lVar8 = *(long *)(puVar6 + 0x28);
  lVar1 = *(long *)(puVar6 + 0x30);
  lVar2 = lVar1 - lVar8;
  if (lVar2 != 0) {
    uVar7 = lVar2 >> 3;
    if (uVar7 >> 0x3d != 0) {
      FUN_10860d5f0();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10860c5d4);
      (*pcVar3)();
    }
    FUN_10860d604();
    *extraout_x8 = uVar7;
    extraout_x8[2] = uVar7 + param_2 * 8;
    do {
      _objc_copyWeak(uVar7,lVar8);
      lVar8 = lVar8 + 8;
      uVar7 = uVar7 + 8;
    } while (lVar8 != lVar1);
    extraout_x8[1] = uVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(puVar6 + 0x10);
  return;
}



/* Entry: 10860c53c; end: 10860c5ef; -[RTCAudioSession_v141 delegates] */

void FUN_10860c53c(ulong *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  
  _os_unfair_lock_lock(param_2 + 0x10);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar5 = *(long *)(param_2 + 0x28);
  lVar1 = *(long *)(param_2 + 0x30);
  lVar2 = lVar1 - lVar5;
  if (lVar2 != 0) {
    uVar4 = lVar2 >> 3;
    if (uVar4 >> 0x3d != 0) {
      FUN_10860d5f0();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10860c5d4);
      (*pcVar3)();
    }
    FUN_10860d604();
    *param_1 = uVar4;
    param_1[2] = uVar4 + param_3 * 8;
    do {
      _objc_copyWeak(uVar4,lVar5);
      lVar5 = lVar5 + 8;
      uVar4 = uVar4 + 8;
    } while (lVar5 != lVar1);
    param_1[1] = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_2 + 0x10);
  return;
}



/* Entry: 10860c5f0; end: 10860c8df; -[RTCAudioSession_v141 pushDelegate:] */

void FUN_10860c5f0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 auStack_a8 [8];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  puVar10 = *(undefined1 **)(param_1 + 0x28);
  lVar6 = param_3;
  _objc_initWeak(auStack_a8);
  _objc_release(param_3);
  puVar13 = (undefined8 *)(param_1 + 0x38);
  puVar12 = *(undefined1 **)(param_1 + 0x30);
  if (puVar12 < (undefined1 *)*puVar13) {
    if (puVar10 == puVar12) {
      _objc_copyWeak(puVar12,auStack_a8);
      *(undefined1 **)(param_1 + 0x30) = puVar12 + 8;
    }
    else {
      puVar11 = puVar12 + -8;
      puVar14 = puVar12;
      for (puVar15 = puVar11; puVar15 < puVar12; puVar15 = puVar15 + 8) {
        _objc_moveWeak(puVar14,puVar15);
        puVar14 = puVar14 + 8;
      }
      *(undefined1 **)(param_1 + 0x30) = puVar14;
      if (puVar12 != puVar10 + 8) {
        puVar12 = puVar12 + -0x10;
        do {
          puVar15 = puVar12;
          _objc_loadWeakRetained(puVar12);
          _objc_storeWeak(puVar11,puVar15);
          _objc_release(puVar15);
          puVar11 = puVar11 + -8;
          bVar3 = puVar12 != puVar10;
          puVar12 = puVar12 + -8;
        } while (bVar3);
        puVar14 = *(undefined1 **)(param_1 + 0x30);
      }
      lVar6 = 8;
      if (puVar14 <= auStack_a8 || auStack_a8 < puVar10) {
        lVar6 = 0;
      }
      puVar12 = auStack_a8 + lVar6;
      _objc_loadWeakRetained(puVar12);
      _objc_storeWeak(puVar10,puVar12);
      _objc_release(puVar12);
    }
  }
  else {
    puVar15 = *(undefined1 **)(param_1 + 0x28);
    uVar4 = ((long)puVar12 - (long)puVar15 >> 3) + 1;
    if (uVar4 >> 0x3d != 0) {
      FUN_10860d5f0();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10860c8b4);
      (*pcVar2)();
    }
    uVar5 = (long)*puVar13 - (long)puVar15;
    uVar9 = (long)uVar5 >> 2;
    if (uVar9 <= uVar4) {
      uVar9 = uVar4;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar9 = 0x1fffffffffffffff;
    }
    puStack_80 = puVar13;
    if (uVar9 == 0) {
      uVar9 = 0;
      lVar6 = 0;
    }
    else {
      FUN_10860d604();
      lVar6 = lVar6 << 3;
    }
    lVar7 = (long)puVar10 - (long)puVar15;
    uVar4 = uVar9 + lVar7;
    lVar1 = uVar9 + lVar6;
    uVar5 = uVar4;
    uStack_a0 = uVar9;
    uStack_98 = uVar4;
    uStack_90 = uVar4;
    lStack_88 = lVar1;
    if (lVar7 == lVar6) {
      if (puVar10 == puVar15) {
        uVar5 = 8;
        puStack_58 = puVar13;
        __Znwm();
        lStack_88 = uVar5 + 8;
        uStack_a0 = uVar5;
        uStack_98 = uVar5;
        uStack_78 = uVar9;
        uStack_70 = uVar4;
        uStack_68 = uVar4;
        lStack_60 = lVar1;
        FUN_10860d6a0(&uStack_78);
        uVar4 = uVar5;
      }
      else {
        lVar6 = (lVar7 >> 3) + 1;
        uVar5 = uVar4 + ((ulong)(lVar6 - (lVar6 >> 0x3f)) >> 1) * -8;
        FUN_10860d6ec(uVar4,uVar4,uVar5);
        uStack_98 = uVar5;
      }
    }
    _objc_copyWeak(uVar4,auStack_a8);
    lVar6 = uVar4 + 8;
    uStack_90 = lVar6;
    FUN_10860d638(puVar10,*(undefined8 *)(param_1 + 0x30),lVar6);
    lVar6 = lVar6 + (*(long *)(param_1 + 0x30) - (long)puVar10);
    *(undefined1 **)(param_1 + 0x30) = puVar10;
    lVar1 = uVar5 + (*(long *)(param_1 + 0x28) - (long)puVar10);
    uStack_90 = lVar6;
    FUN_10860d638(*(long *)(param_1 + 0x28),puVar10,lVar1);
    uStack_a0 = *(ulong *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar1;
    *(long *)(param_1 + 0x30) = lVar6;
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = lStack_88;
    uStack_98 = uStack_a0;
    uStack_90 = uStack_a0;
    lStack_88 = uVar8;
    FUN_10860d6a0(&uStack_a0);
  }
  _objc_destroyWeak(auStack_a8);
  _os_unfair_lock_unlock(param_1 + 0x10);
  return;
}



/* Entry: 10860c8e0; end: 10860c9a3; -[RTCAudioSession_v141 removeZeroedDelegates] */

void FUN_10860c8e0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar3 == lVar4) {
LAB_10860c930:
    lVar1 = lVar3 + 8;
    lVar2 = lVar3;
    if (lVar3 != lVar4 && lVar1 != lVar4) {
      do {
        lVar2 = lVar1;
        _objc_loadWeakRetained();
        _objc_release();
        if (lVar2 != 0) {
          lVar2 = lVar1;
          _objc_loadWeakRetained(lVar1);
          _objc_storeWeak(lVar3,lVar2);
          _objc_release(lVar2);
          lVar3 = lVar3 + 8;
        }
        lVar1 = lVar1 + 8;
        lVar2 = lVar3;
      } while (lVar1 != lVar4);
    }
  }
  else {
    do {
      lVar1 = lVar3;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar1 == 0) goto LAB_10860c930;
      lVar3 = lVar3 + 8;
      lVar2 = lVar4;
    } while (lVar3 != lVar4);
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar2 != lVar3) {
    FUN_10860d6ec(lVar3,*(undefined8 *)(param_1 + 0x30),lVar2);
    lVar4 = *(long *)(param_1 + 0x30);
    while (lVar4 != lVar3) {
      lVar4 = lVar4 + -8;
      _objc_destroyWeak(lVar4);
    }
    *(long *)(param_1 + 0x30) = lVar3;
  }
  return;
}



/* Entry: 10860c9a4; end: 10860c9b7; -[RTCAudioSession_v141 activationCount] */

void FUN_10860c9a4(void)

{
  func_0x00010c06c8c0();
  return;
}



/* Entry: 10860c9b8; end: 10860c9bf; -[RTCAudioSession_v141 webRTCSessionCount] */

undefined4 FUN_10860c9b8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* Entry: 10860c9c0; end: 10860c9c3; -[RTCAudioSession_v141 canPlayOrRecord] */

void FUN_10860c9c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06c8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isAudioEnabled_1125f8c40);
  return;
}



/* Entry: 10860c9c4; end: 10860ca07; -[RTCAudioSession_v141 isInterrupted] */

byte FUN_10860c9c4(long param_1)

{
  byte bVar1;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  if ((*(byte *)(param_1 + 0x22) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x21);
  }
  else {
    bVar1 = 0;
  }
  _os_unfair_lock_unlock(param_1 + 0x10);
  return bVar1 & 1;
}



/* Entry: 10860ca08; end: 10860ca37; -[RTCAudioSession_v141 setIsInterrupted:] */

void FUN_10860ca08(long param_1,undefined8 param_2,undefined1 param_3)

{
  _os_unfair_lock_lock(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x21) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x10);
  return;
}



/* Entry: 10860ca38; end: 10860ca83; -[RTCAudioSession_v141 checkLock:] */

ulong FUN_10860ca38(ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  
  func_0x00010c076ea0();
  if ((param_3 != (undefined8 *)0x0) && ((param_1 & 1) == 0)) {
    puVar1 = PTR_PTR_1126da390;
    func_0x00010c09fb20();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_3 = puVar1;
  }
  return param_1;
}



/* Entry: 10860ca84; end: 10860cacf; -[RTCAudioSession_v141 beginWebRTCSession:] */

long FUN_10860ca84(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  lVar1 = param_1;
  func_0x00010bf38160();
  if ((int)lVar1 != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    func_0x00010c0dd100(param_1);
  }
  return lVar1;
}



/* Entry: 10860cad0; end: 10860cb1b; -[RTCAudioSession_v141 endWebRTCSession:] */

long FUN_10860cad0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  lVar1 = param_1;
  func_0x00010bf38160();
  if ((int)lVar1 != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    func_0x00010c0dd120(param_1);
  }
  return lVar1;
}



/* Entry: 10860cb1c; end: 10860cc6f; -[RTCAudioSession_v141 configureWebRTCSession:] */

ulong FUN_10860cb1c(double param_1,ulong param_2,undefined8 param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  double dVar6;
  ulong uStack_58;
  
  if (param_4 != (ulong *)0x0) {
    *param_4 = 0;
  }
  uVar2 = param_2;
  func_0x00010bf38160(param_2,param_3,param_4);
  if ((int)uVar2 == 0) {
    return 0;
  }
  puVar3 = PTR_PTR_1126da808;
  func_0x00010c2a3ae0(PTR_PTR_1126da808);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0656e0();
  if ((uVar2 & 1) == 0) {
    func_0x00010c27f600(param_2,param_3,0);
    if (param_4 == (ulong *)0x0) goto LAB_10860cc20;
    func_0x00010bf46660(param_2,param_3,&PTR____CFConstantStringClassReference_110ee60d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    uVar4 = 0;
  }
  else {
    func_0x00010c149840(param_2);
    dVar6 = param_1;
    func_0x00010c149840(puVar3);
    if (param_1 == dVar6) {
LAB_10860cc20:
      uVar4 = 0;
      goto LAB_10860cc24;
    }
    uStack_58 = 0;
    func_0x00010c1e02a0(param_1,param_2,param_3,&uStack_58);
    uVar1 = uStack_58;
    _objc_retain(uStack_58);
    uVar5 = (uint)param_2;
    if (param_4 == (ulong *)0x0) {
      uVar5 = 1;
    }
    uVar4 = uVar1;
    if ((uVar5 & 1) != 0) goto LAB_10860cc24;
    _objc_retainAutorelease(uVar1);
    param_2 = uVar1;
  }
  *param_4 = param_2;
LAB_10860cc24:
  _objc_release(puVar3);
  _objc_release(uVar4);
  return uVar2;
}



/* Entry: 10860cc70; end: 10860cc77; -[RTCAudioSession_v141 unconfigureWebRTCSession:] */

undefined8 FUN_10860cc70(void)

{
  return 1;
}



/* Entry: 10860cc78; end: 10860cd77; -[RTCAudioSession_v141 configurationErrorWithDescription:] */

void FUN_10860cc78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_40 = param_3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_40,&uStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e2e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee6098,
                      0xfffffffffffffffe,puVar2);
  _objc_release(puVar2);
  uVar3 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(param_3);
  __Unwind_Resume(uVar3);
  return;
}



/* Entry: 10860cd78; end: 10860cd7b; -[RTCAudioSession_v141 audioSessionDidActivate:] */

void FUN_10860cd78(void)

{
  return;
}



/* Entry: 10860cd7c; end: 10860cd7f; -[RTCAudioSession_v141 audioSessionDidDeactivate:] */

void FUN_10860cd7c(void)

{
  return;
}



/* Entry: 10860cd80; end: 10860ce2b; -[RTCAudioSession_v141 notifyDidBeginInterruption] */

void FUN_10860cd80(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uStack_58;
  ulong uStack_50;
  
  func_0x00010bf6b160(&uStack_58);
  for (uVar1 = uStack_58; uVar1 != uStack_50; uVar1 = uVar1 + 8) {
    uVar2 = uVar1;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    if ((uVar3 & 1) != 0) {
      func_0x00010bf0fc80(uVar2);
    }
    _objc_release(uVar2);
  }
  func_0x00010860d754(&uStack_58);
  return;
}



/* Entry: 10860ce2c; end: 10860cedf; -[RTCAudioSession_v141 notifyDidEndInterruptionWithShouldResumeSession:] */

void FUN_10860ce2c(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uStack_58;
  ulong uStack_50;
  
  func_0x00010bf6b160(&uStack_58);
  for (uVar1 = uStack_58; uVar1 != uStack_50; uVar1 = uVar1 + 8) {
    uVar2 = uVar1;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    if ((uVar3 & 1) != 0) {
      func_0x00010bf0fce0(uVar2);
    }
    _objc_release(uVar2);
  }
  func_0x00010860d754(&uStack_58);
  return;
}



/* Entry: 10860cee0; end: 10860cfc7; -[RTCAudioSession_v141 notifyDidChangeRouteWithReason:previousRoute:] */

void FUN_10860cee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uStack_68;
  ulong uStack_60;
  
  _objc_retain(param_4);
  func_0x00010bf6b160(&uStack_68,param_1);
  for (uVar1 = uStack_68; uVar1 != uStack_60; uVar1 = uVar1 + 8) {
    uVar2 = uVar1;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    if ((uVar3 & 1) != 0) {
      func_0x00010bf0fca0(uVar2);
    }
    _objc_release(uVar2);
  }
  func_0x00010860d754(&uStack_68);
  _objc_release(param_4);
  return;
}



/* Entry: 10860cfc8; end: 10860d073; -[RTCAudioSession_v141 notifyMediaServicesWereLost] */

void FUN_10860cfc8(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uStack_58;
  ulong uStack_50;
  
  func_0x00010bf6b160(&uStack_58);
  for (uVar1 = uStack_58; uVar1 != uStack_50; uVar1 = uVar1 + 8) {
    uVar2 = uVar1;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    if ((uVar3 & 1) != 0) {
      func_0x00010bf0fda0(uVar2);
    }
    _objc_release(uVar2);
  }
  func_0x00010860d754(&uStack_58);
  return;
}



/* Entry: 10860d074; end: 10860d11f; -[RTCAudioSession_v141 notifyMediaServicesWereReset] */

void FUN_10860d074(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uStack_58;
  ulong uStack_50;
  
  func_0x00010bf6b160(&uStack_58);
  for (uVar1 = uStack_58; uVar1 != uStack_50; uVar1 = uVar1 + 8) {
    uVar2 = uVar1;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    if ((uVar3 & 1) != 0) {
      func_0x00010bf0fd80(uVar2);
    }
    _objc_release(uVar2);
  }
  func_0x00010860d754(&uStack_58);
  return;
}



/* Entry: 10860d120; end: 10860d1d3; -[RTCAudioSession_v141 notifyDidChangeCanPlayOrRecord:] */

void FUN_10860d120(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uStack_58;
  ulong uStack_50;
  
  func_0x00010bf6b160(&uStack_58);
  for (uVar1 = uStack_58; uVar1 != uStack_50; uVar1 = uVar1 + 8) {
    uVar2 = uVar1;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    if ((uVar3 & 1) != 0) {
      func_0x00010bf0fb40(uVar2);
    }
    _objc_release(uVar2);
  }
  func_0x00010860d754(&uStack_58);
  return;
}



/* Entry: 10860d1d4; end: 10860d27f; -[RTCAudioSession_v141 notifyDidStartPlayOrRecord] */

void FUN_10860d1d4(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uStack_58;
  ulong uStack_50;
  
  func_0x00010bf6b160(&uStack_58);
  for (uVar1 = uStack_58; uVar1 != uStack_50; uVar1 = uVar1 + 8) {
    uVar2 = uVar1;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    if ((uVar3 & 1) != 0) {
      func_0x00010bf0fd00(uVar2);
    }
    _objc_release(uVar2);
  }
  func_0x00010860d754(&uStack_58);
  return;
}



/* Entry: 10860d280; end: 10860d32b; -[RTCAudioSession_v141 notifyDidStopPlayOrRecord] */

void FUN_10860d280(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uStack_58;
  ulong uStack_50;
  
  func_0x00010bf6b160(&uStack_58);
  for (uVar1 = uStack_58; uVar1 != uStack_50; uVar1 = uVar1 + 8) {
    uVar2 = uVar1;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    if ((uVar3 & 1) != 0) {
      func_0x00010bf0fd20(uVar2);
    }
    _objc_release(uVar2);
  }
  func_0x00010860d754(&uStack_58);
  return;
}



/* Entry: 10860d32c; end: 10860d3e7; -[RTCAudioSession_v141 notifyDidChangeOutputVolume:] */

void FUN_10860d32c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uStack_68;
  ulong uStack_60;
  
  func_0x00010bf6b160(&uStack_68);
  for (uVar1 = uStack_68; uVar1 != uStack_60; uVar1 = uVar1 + 8) {
    uVar2 = uVar1;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    if ((uVar3 & 1) != 0) {
      func_0x00010bf0fb60(param_1,uVar2);
    }
    _objc_release(uVar2);
  }
  func_0x00010860d754(&uStack_68);
  return;
}



/* Entry: 10860d3e8; end: 10860d49b; -[RTCAudioSession_v141 notifyDidDetectPlayoutGlitch:] */

void FUN_10860d3e8(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uStack_58;
  ulong uStack_50;
  
  func_0x00010bf6b160(&uStack_58);
  for (uVar1 = uStack_58; uVar1 != uStack_50; uVar1 = uVar1 + 8) {
    uVar2 = uVar1;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    if ((uVar3 & 1) != 0) {
      func_0x00010bf0fbc0(uVar2);
    }
    _objc_release(uVar2);
  }
  func_0x00010860d754(&uStack_58);
  return;
}



/* Entry: 10860d49c; end: 10860d5a7; -[RTCAudioSession_v141 notifyAudioUnitStartFailedWithError:] */

void FUN_10860d49c(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uStack_78;
  ulong uStack_70;
  
  func_0x00010bf6b160(&uStack_78);
  for (uVar1 = uStack_78; uVar1 != uStack_70; uVar1 = uVar1 + 8) {
    uVar2 = uVar1;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    if ((uVar3 & 1) != 0) {
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0fb20(uVar2);
      _objc_release(puVar4);
    }
    _objc_release(uVar2);
  }
  func_0x00010860d754(&uStack_78);
  return;
}



/* Entry: 10860d5a8; end: 10860d5af; -[RTCAudioSession_v141 ignoresPreferredAttributeConfigurationErrors] */

undefined1 FUN_10860d5a8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x23);
}



/* Entry: 10860d5b0; end: 10860d5b7; -[RTCAudioSession_v141 setIgnoresPreferredAttributeConfigurationErrors:] */

void FUN_10860d5b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x23) = param_3;
  return;
}


