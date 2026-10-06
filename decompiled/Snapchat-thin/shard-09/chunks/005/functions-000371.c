/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106eab888; end: 106eab88f; -[SCSpectaclesFirmwareUpdater performer] */

undefined8 FUN_106eab888(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106eab890; end: 106eab8bf; -[SCSpectaclesFirmwareUpdater setPerformer:] */

void FUN_106eab890(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106eab8c0; end: 106eab927; -[SCSpectaclesFirmwareUpdater .cxx_destruct] */

void FUN_106eab8c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106eab928; end: 106eab9b7; -[SCSpectaclesAmbaWatchdog initWithDevice:] */

undefined1 * FUN_106eab928(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7ab0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    puVar2 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
    func_0x00010c2a2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106eab9b8; end: 106eabb0b; -[SCSpectaclesAmbaWatchdog addKicker:] */

void FUN_106eab9b8(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_3);
  puVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  puVar4 = puVar1;
  func_0x00010c137a00();
  _objc_release(puVar1);
  if (((ulong)puVar4 & 1) != 0) {
    puVar1 = auStack_48;
    _objc_loadWeakRetained();
    _objc_release();
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    puVar4 = (undefined1 *)0x0;
    do {
      puVar2 = param_1;
      func_0x00010c086fc0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf529e0();
      _objc_release(puVar2);
      if (puVar3 <= puVar4) {
        puVar1 = param_1;
        func_0x00010c086fc0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befaaa0();
        _objc_release(puVar1);
        func_0x00010bed3040(param_1);
        break;
      }
      puVar2 = param_1;
      func_0x00010c086fc0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c102e00();
      _objc_release(puVar2);
      puVar4 = puVar4 + 1;
    } while (puVar3 != puVar1);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106eabb0c; end: 106eabc17; -[SCSpectaclesAmbaWatchdog removeKicker:] */

void FUN_106eabb0c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar3 = 0;
  while( true ) {
    uVar1 = param_1;
    func_0x00010c086fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    _objc_release(uVar1);
    if (uVar2 <= uVar3) break;
    uVar1 = param_1;
    func_0x00010c086fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c102e00();
    _objc_release(uVar1);
    if (uVar2 == param_3) {
      uVar1 = param_1;
      func_0x00010c086fc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c131060();
      _objc_release(uVar1);
    }
    uVar3 = uVar3 + 1;
  }
  func_0x00010bed3040(param_1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eabc18; end: 106eabd47; -[SCSpectaclesAmbaWatchdog _updateAmbaWatchdogKickTimer] */

/* WARNING: Possible PIC construction at 0x000106eabcc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106eabcc4) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_106eabc18(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x00010c086fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf431c0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c086fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf023c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    _objc_release();
    if (lVar1 == 0) {
      return;
    }
    lVar1 = param_1;
    func_0x00010bf023c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d00();
    _objc_release(lVar1);
    puVar3 = (undefined *)0x0;
  }
  else {
    _objc_release();
    if (lVar1 != 0) {
      return;
    }
    puVar3 = PTR_PTR_1126bc890;
    func_0x00010c150380(0x4024000000000000,PTR_PTR_1126bc890);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c167b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAmbaWatchdogKickTimer__1126378f0,puVar3);
  return;
}



/* Entry: 106eabd48; end: 106eabdd3; -[SCSpectaclesAmbaWatchdog _kickWatchdog] */

void FUN_106eabd48(long param_1)

{
  long lVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  func_0x00010bed3040(param_1);
  lVar1 = param_1;
  func_0x00010bf023c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf6fd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf023a0();
    _objc_release(lVar1);
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eabdd4; end: 106eabddb; -[SCSpectaclesAmbaWatchdog kickers] */

undefined8 FUN_106eabdd4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106eabddc; end: 106eabe0b; -[SCSpectaclesAmbaWatchdog setKickers:] */

void FUN_106eabddc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eabe0c; end: 106eabe23; -[SCSpectaclesAmbaWatchdog device] */

void FUN_106eabe0c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106eabe24; end: 106eabe2f; -[SCSpectaclesAmbaWatchdog setDevice:] */

void FUN_106eabe24(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106eabe30; end: 106eabe37; -[SCSpectaclesAmbaWatchdog ambaWatchdogKickTimer] */

undefined8 FUN_106eabe30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106eabe38; end: 106eabe67; -[SCSpectaclesAmbaWatchdog setAmbaWatchdogKickTimer:] */

void FUN_106eabe38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eabe68; end: 106eabe9f; -[SCSpectaclesAmbaWatchdog .cxx_destruct] */

void FUN_106eabe68(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106eabea0; end: 106eabfa7;  */

void FUN_106eabea0(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d3090;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc_init(puVar1);
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c075fc0();
  if (((((uVar2 & 1) == 0) && (uVar2 = param_2, func_0x00010c0774a0(), (uVar2 & 1) == 0)) &&
      (uVar2 = param_2, func_0x00010c078aa0(), (uVar2 & 1) == 0)) &&
     (uVar2 = param_2, func_0x00010c074bc0(), (uVar2 & 1) == 0)) {
    func_0x00010c06e7e0();
  }
  _objc_release(param_2);
  _objc_release(param_2);
  func_0x00010c21acc0(puVar1);
  func_0x00010c202c60(puVar1);
  _objc_release(param_1);
  puVar3 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106eabfa8; end: 106eabfcf;  */

/* WARNING: Possible PIC construction at 0x00010002a358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a35c) */

void FUN_106eabfa8(void)

{
  int iVar1;
  undefined **ppuVar2;
  code *pcVar3;
  
  if (lRam00000001136c7fd8 == -1) {
    return;
  }
  ppuVar2 = &PTR___NSConcreteGlobalBlock_110981f08;
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_110981f08);
  if ((bRam0000000113817d58 & 1) == 0) {
    iVar1 = 0x13817d58;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar3 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once");
      pcRam0000000113817d50 = pcVar3;
      func_0x000107c60e4c(0x113817d58);
    }
  }
  pcVar3 = pcRam0000000113817d50;
  func_0x00010002a3a8(&PTR___NSConcreteGlobalBlock_110981f08);
  func_0x000107c61180();
  (*pcVar3)(0x1136c7fd8,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 106eabfd0; end: 106eac0e3;  */

/* WARNING: Possible PIC construction at 0x000106eac000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106eac024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106eac048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106eac06c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106eac090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106eac0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106eac094) */
/* WARNING: Removing unreachable block (ram,0x000106eac070) */
/* WARNING: Removing unreachable block (ram,0x000106eac04c) */
/* WARNING: Removing unreachable block (ram,0x000106eac028) */
/* WARNING: Removing unreachable block (ram,0x000106eac004) */
/* WARNING: Removing unreachable block (ram,0x000106eac0b8) */

void FUN_106eabfd0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  puVar2 = PTR_PTR_1126d2f50;
  _objc_opt_class(PTR_PTR_1126d2f50);
                    /* WARNING: Could not recover jumptable at 0x00010c17c6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_setClass_forClassName__11263cbc8,puVar2,
             &PTR____CFConstantStringClassReference_110e8ad78);
  return;
}



/* Entry: 106eac0e4; end: 106eac28f; -[SCSpectaclesEventListenerAnnouncer spectaclesDevice:onFirmwareUpdate:progress:] */

void FUN_106eac0e4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_spectaclesDevice_onFirmwareUpdat_11266fc38;
  while (PTR_s_spectaclesDevice_onFirmwareUpdat_11266fc38 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_spectaclesDevice_onFirmwareUpdat_11266fc38;
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c248850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_spectaclesDevice_onFirmwareUpdat_11266fc38,
             *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 106eac290; end: 106eac2a3;  */

void FUN_106eac290(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c248850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined4 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             PTR_s_spectaclesDevice_onFirmwareUpdat_11266fc38,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106eac2a4; end: 106eac46b; -[SCSpectaclesEventListenerAnnouncer spectaclesDevice:didFetchFirmwareUpdateDigest:] */

void FUN_106eac2a4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_spectaclesDevice_didFetchFirmwar_11266fbf0;
  while (PTR_s_spectaclesDevice_didFetchFirmwar_11266fbf0 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        _objc_retain(param_4);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_4);
        _objc_release(param_3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_spectaclesDevice_didFetchFirmwar_11266fbf0;
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c248730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_spectaclesDevice_didFetchFirmwar_11266fbf0,
             *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 106eac46c; end: 106eac47b;  */

void FUN_106eac46c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c248730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_spectaclesDevice_didFetchFirmwar_11266fbf0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106eac47c; end: 106eac66b; -[SCSpectaclesEventListenerAnnouncer spectaclesDevice:didCompletedScheduledUpdateWithUserInfo:error:] */

void FUN_106eac47c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_spectaclesDevice_didCompletedSch_11266fbe8;
  while (PTR_s_spectaclesDevice_didCompletedSch_11266fbe8 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        _objc_retain(param_4);
        _objc_retain(param_5);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_5);
        _objc_release(param_4);
        _objc_release(param_3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_spectaclesDevice_didCompletedSch_11266fbe8;
  }
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c248710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_spectaclesDevice_didCompletedSch_11266fbe8,
             *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30),
             *(undefined8 *)(param_3 + 0x38));
  return;
}



/* Entry: 106eac66c; end: 106eac67b;  */

void FUN_106eac66c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c248710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_spectaclesDevice_didCompletedSch_11266fbe8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 106eac67c; end: 106eac81b; -[SCSpectaclesEventListenerAnnouncer spectaclesDeviceDidUpdateState:] */

void FUN_106eac67c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_spectaclesDeviceDidUpdateState__11266fc70;
  while (PTR_s_spectaclesDeviceDidUpdateState__11266fc70 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_spectaclesDeviceDidUpdateState__11266fc70;
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c248930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_spectaclesDeviceDidUpdateState__11266fc70,
             *(undefined8 *)(param_3 + 0x28));
  return;
}



/* Entry: 106eac81c; end: 106eac827;  */

void FUN_106eac81c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c248930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_spectaclesDeviceDidUpdateState__11266fc70,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106eac828; end: 106eac9cb; -[SCSpectaclesEventListenerAnnouncer spectaclesDevice:didUpdateInfo:] */

void FUN_106eac828(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_spectaclesDevice_didUpdateInfo__11266fc20;
  while (PTR_s_spectaclesDevice_didUpdateInfo__11266fc20 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_spectaclesDevice_didUpdateInfo__11266fc20;
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2487f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_spectaclesDevice_didUpdateInfo__11266fc20,
             *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 106eac9cc; end: 106eac9db;  */

void FUN_106eac9cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2487f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_spectaclesDevice_didUpdateInfo__11266fc20,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106eac9dc; end: 106eacb7f; -[SCSpectaclesEventListenerAnnouncer spectaclesDevice:onAlertNotification:] */

void FUN_106eac9dc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_spectaclesDevice_onAlertNotifica_11266fc28;
  while (PTR_s_spectaclesDevice_onAlertNotifica_11266fc28 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_spectaclesDevice_onAlertNotifica_11266fc28;
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c248810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_spectaclesDevice_onAlertNotifica_11266fc28,
             *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 106eacb80; end: 106eacb8f;  */

void FUN_106eacb80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c248810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_spectaclesDevice_onAlertNotifica_11266fc28,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106eacb90; end: 106eacd2f; -[SCSpectaclesEventListenerAnnouncer spectaclesOnDeviceForgotten:] */

void FUN_106eacb90(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_spectaclesOnDeviceForgotten__11266feb0;
  while (PTR_s_spectaclesOnDeviceForgotten__11266feb0 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_spectaclesOnDeviceForgotten__11266feb0;
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c249230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_spectaclesOnDeviceForgotten__11266feb0,
             *(undefined8 *)(param_3 + 0x28));
  return;
}



/* Entry: 106eacd30; end: 106eacd3b;  */

void FUN_106eacd30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c249230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_spectaclesOnDeviceForgotten__11266feb0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106eacd3c; end: 106eacee3; -[SCSpectaclesEventListenerAnnouncer spectaclesOnPairingStateUpdate:deviceInformation:] */

void FUN_106eacd3c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_spectaclesOnPairingStateUpdate_d_11266fed8;
  while (PTR_s_spectaclesOnPairingStateUpdate_d_11266fed8 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_4);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_4);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_spectaclesOnPairingStateUpdate_d_11266fed8;
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2492d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_4 + 0x20),PTR_s_spectaclesOnPairingStateUpdate_d_11266fed8,
             *(undefined8 *)(param_4 + 0x30),*(undefined8 *)(param_4 + 0x28));
  return;
}



/* Entry: 106eacee4; end: 106eacef3;  */

void FUN_106eacee4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2492d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_spectaclesOnPairingStateUpdate_d_11266fed8,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106eacef4; end: 106ead093; -[SCSpectaclesEventListenerAnnouncer spectaclesDeviceDidPair:] */

void FUN_106eacef4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_spectaclesDeviceDidPair__11266fc48;
  while (PTR_s_spectaclesDeviceDidPair__11266fc48 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_spectaclesDeviceDidPair__11266fc48;
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c248890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_spectaclesDeviceDidPair__11266fc48,
             *(undefined8 *)(param_3 + 0x28));
  return;
}



/* Entry: 106ead094; end: 106ead09f;  */

void FUN_106ead094(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c248890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_spectaclesDeviceDidPair__11266fc48,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106ead0a0; end: 106ead243; -[SCSpectaclesEventListenerAnnouncer spectaclesDevice:didUnpairWithReason:] */

void FUN_106ead0a0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_spectaclesDevice_didUnpairWithRe_11266fc18;
  while (PTR_s_spectaclesDevice_didUnpairWithRe_11266fc18 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_spectaclesDevice_didUnpairWithRe_11266fc18;
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2487d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_spectaclesDevice_didUnpairWithRe_11266fc18,
             *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 106ead244; end: 106ead253;  */

void FUN_106ead244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2487d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_spectaclesDevice_didUnpairWithRe_11266fc18,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106ead254; end: 106ead3f3; -[SCSpectaclesEventListenerAnnouncer spectaclesDeviceDidUpdateContentList:] */

void FUN_106ead254(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_spectaclesDeviceDidUpdateContent_11266fc60;
  while (PTR_s_spectaclesDeviceDidUpdateContent_11266fc60 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_spectaclesDeviceDidUpdateContent_11266fc60;
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2488f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_spectaclesDeviceDidUpdateContent_11266fc60,
             *(undefined8 *)(param_3 + 0x28));
  return;
}



/* Entry: 106ead3f4; end: 106ead3ff;  */

void FUN_106ead3f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2488f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_spectaclesDeviceDidUpdateContent_11266fc60,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106ead400; end: 106ead59f; -[SCSpectaclesEventListenerAnnouncer spectaclesDeviceDidUpdateBackupStatus:] */

void FUN_106ead400(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_spectaclesDeviceDidUpdateBackupS_11266fc58;
  while (PTR_s_spectaclesDeviceDidUpdateBackupS_11266fc58 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_spectaclesDeviceDidUpdateBackupS_11266fc58;
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2488d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_spectaclesDeviceDidUpdateBackupS_11266fc58,
             *(undefined8 *)(param_3 + 0x28));
  return;
}



/* Entry: 106ead5a0; end: 106ead5ab;  */

void FUN_106ead5a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2488d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_spectaclesDeviceDidUpdateBackupS_11266fc58,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106ead5ac; end: 106ead74f; -[SCSpectaclesEventListenerAnnouncer spectaclesTransferSession:onTransferUpdate:] */

void FUN_106ead5ac(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_spectaclesTransferSession_onTran_112670088;
  while (PTR_s_spectaclesTransferSession_onTran_112670088 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_spectaclesTransferSession_onTran_112670088;
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c249990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_spectaclesTransferSession_onTran_112670088,
             *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 106ead750; end: 106ead75f;  */

void FUN_106ead750(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c249990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_spectaclesTransferSession_onTran_112670088,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106ead760; end: 106ead903; -[SCSpectaclesEventListenerAnnouncer spectaclesDevice:onDeviceLogsUpdate:] */

void FUN_106ead760(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_spectaclesDevice_onDeviceLogsUpd_11266fc30;
  while (PTR_s_spectaclesDevice_onDeviceLogsUpd_11266fc30 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_spectaclesDevice_onDeviceLogsUpd_11266fc30;
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c248830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_spectaclesDevice_onDeviceLogsUpd_11266fc30,
             *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 106ead904; end: 106ead913;  */

void FUN_106ead904(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c248830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_spectaclesDevice_onDeviceLogsUpd_11266fc30,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106ead914; end: 106eadab7; -[SCSpectaclesEventListenerAnnouncer spectaclesDevice:didReceiveCloudUploadEvent:] */

void FUN_106ead914(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_spectaclesDevice_didReceiveCloud_11266fc00;
  while (PTR_s_spectaclesDevice_didReceiveCloud_11266fc00 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_spectaclesDevice_didReceiveCloud_11266fc00;
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c248770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_spectaclesDevice_didReceiveCloud_11266fc00,
             *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 106eadab8; end: 106eadac7;  */

void FUN_106eadab8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c248770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_spectaclesDevice_didReceiveCloud_11266fc00,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106eadac8; end: 106eadc97; -[SCSpectaclesEventListenerAnnouncer spectaclesDevice:didReceiveClientId:requestAuthzCode:] */

void FUN_106eadac8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_spectaclesDevice_didReceiveClien_11266fbf8;
  while (PTR_s_spectaclesDevice_didReceiveClien_11266fbf8 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        _objc_retain(param_4);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_4);
        _objc_release(param_3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_spectaclesDevice_didReceiveClien_11266fbf8;
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c248750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_spectaclesDevice_didReceiveClien_11266fbf8,
             *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30),
             *(undefined1 *)(param_3 + 0x38));
  return;
}



/* Entry: 106eadc98; end: 106eadcab;  */

void FUN_106eadc98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c248750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_spectaclesDevice_didReceiveClien_11266fbf8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined1 *)(param_1 + 0x38));
  return;
}



/* Entry: 106eadcac; end: 106eade73; -[SCSpectaclesEventListenerAnnouncer spectaclesDevice:didReceiveWifiAPList:] */

void FUN_106eadcac(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_spectaclesDevice_didReceiveWifiA_11266fc10;
  while (PTR_s_spectaclesDevice_didReceiveWifiA_11266fc10 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        _objc_retain(param_4);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_4);
        _objc_release(param_3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_spectaclesDevice_didReceiveWifiA_11266fc10;
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2487b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_spectaclesDevice_didReceiveWifiA_11266fc10,
             *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 106eade74; end: 106eade83;  */

void FUN_106eade74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2487b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_spectaclesDevice_didReceiveWifiA_11266fc10,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106eade84; end: 106eae04b; -[SCSpectaclesEventListenerAnnouncer spectaclesDevice:didReceiveLastCloudUploadTime:] */

void FUN_106eade84(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_spectaclesDevice_didReceiveLastC_11266fc08;
  while (PTR_s_spectaclesDevice_didReceiveLastC_11266fc08 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        _objc_retain(param_4);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_4);
        _objc_release(param_3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_spectaclesDevice_didReceiveLastC_11266fc08;
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c248790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_spectaclesDevice_didReceiveLastC_11266fc08,
             *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 106eae04c; end: 106eae05b;  */

void FUN_106eae04c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c248790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_spectaclesDevice_didReceiveLastC_11266fc08,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106eae05c; end: 106eae1cb; -[SCSpectaclesEventListenerAnnouncer spectaclesOnBluetoothStateUpdate:] */

void FUN_106eae05c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_spectaclesOnBluetoothStateUpdate_11266fea8;
  while (PTR_s_spectaclesOnBluetoothStateUpdate_11266fea8 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f7fc0();
        _objc_release(uVar5);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_spectaclesOnBluetoothStateUpdate_11266fea8;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c249210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_spectaclesOnBluetoothStateUpdate_11266fea8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106eae1cc; end: 106eae1d7;  */

void FUN_106eae1cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c249210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_spectaclesOnBluetoothStateUpdate_11266fea8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106eae1d8; end: 106eae377; -[SCSpectaclesEventListenerAnnouncer spectaclesDeviceDidUpdateDeviceName:] */

void FUN_106eae1d8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_spectaclesDeviceDidUpdateDeviceN_11266fc68;
  while (PTR_s_spectaclesDeviceDidUpdateDeviceN_11266fc68 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_spectaclesDeviceDidUpdateDeviceN_11266fc68;
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c248910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_spectaclesDeviceDidUpdateDeviceN_11266fc68,
             *(undefined8 *)(param_3 + 0x28));
  return;
}



/* Entry: 106eae378; end: 106eae383;  */

void FUN_106eae378(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c248910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_spectaclesDeviceDidUpdateDeviceN_11266fc68,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106eae384; end: 106eae523; -[SCSpectaclesEventListenerAnnouncer spectaclesDeviceDidSetUpFeatureCatalog:] */

void FUN_106eae384(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_spectaclesDeviceDidSetUpFeatureC_11266fc50;
  while (PTR_s_spectaclesDeviceDidSetUpFeatureC_11266fc50 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_spectaclesDeviceDidSetUpFeatureC_11266fc50;
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2488b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_spectaclesDeviceDidSetUpFeatureC_11266fc50,
             *(undefined8 *)(param_3 + 0x28));
  return;
}



/* Entry: 106eae524; end: 106eae52f;  */

void FUN_106eae524(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2488b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_spectaclesDeviceDidSetUpFeatureC_11266fc50,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106eae530; end: 106eae613; -[SCSpectaclesManager pairedDeviceSupportsLensExplorer] */

undefined8 FUN_106eae530(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c124d20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106eae614; end: 106eae65f; -[SCSpectaclesManager connectedDevices] */

void FUN_106eae614(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106eae660; end: 106eae6cf;  */

undefined8 FUN_106eae660(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf48940();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c06b700(param_2);
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 106eae6d0; end: 106eae713; -[SCSpectaclesManager firstConnectedDevice] */

void FUN_106eae6d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf48720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106eae714; end: 106eae757; -[SCSpectaclesManager firstPairedDevice] */

void FUN_106eae714(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be6fc40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106eae758; end: 106eae793; -[SCSpectaclesManager pairedDeviceCount] */

undefined8 FUN_106eae758(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be6fc40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106eae794; end: 106eae7cf; -[SCSpectaclesManager connectedDeviceCount] */

undefined8 FUN_106eae794(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf48720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106eae7d0; end: 106eae927; -[SCSpectaclesManager deviceWithSerialNumber:] */

undefined1 * FUN_106eae7d0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        puVar6 = *(undefined1 **)(lStack_128 + lVar9 * 8);
        puVar10 = puVar6;
        func_0x00010c15e740();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar10;
        puVar5 = (undefined8 *)param_3;
        func_0x00010c0720c0();
        _objc_release(puVar10);
        if (((ulong)puVar1 & 1) != 0) {
          _objc_retain(puVar6);
          goto LAB_106eae8d8;
        }
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
      lVar8 = param_1;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  puVar6 = (undefined1 *)0x0;
LAB_106eae8d8:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar5);
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    func_0x00010bf71280();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010bf52a60();
    puVar10 = (undefined1 *)0x0;
    if (puVar1 != (undefined1 *)0x0) {
      lVar8 = *plStack_250;
      do {
        puVar10 = (undefined1 *)0x0;
        do {
          if (*plStack_250 != lVar8) {
            _objc_enumerationMutation(param_3);
          }
          uVar2 = *(ulong *)(lStack_258 + (long)puVar10 * 8);
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010bf86080();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c0720c0();
          _objc_release(uVar3);
          _objc_release(uVar2);
          if ((uVar4 & 1) != 0) {
            puVar10 = (undefined1 *)0x1;
            goto LAB_106eaea3c;
          }
          puVar10 = puVar10 + 1;
        } while (puVar1 != puVar10);
        puVar1 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_260,auStack_218,0x10);
      } while (puVar1 != (undefined1 *)0x0);
      puVar10 = (undefined1 *)0x0;
    }
LAB_106eaea3c:
    _objc_release(param_3);
    _objc_release(puVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
      return puVar10;
    }
    ___stack_chk_fail();
    func_0x00010bf71280();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined1 *)puVar5;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 106eae928; end: 106eaea8b; -[SCSpectaclesManager isDeviceNameTaken:] */

undefined8 FUN_106eae928(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
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
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf52a60();
  uVar5 = 0;
  if (lVar1 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        uVar2 = *(ulong *)(lStack_128 + lVar7 * 8);
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf86080();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        _objc_release(uVar2);
        if ((uVar4 & 1) != 0) {
          uVar5 = 1;
          goto LAB_106eaea3c;
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
    uVar5 = 0;
  }
LAB_106eaea3c:
  _objc_release(param_1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar5;
  }
  ___stack_chk_fail();
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return uVar5;
}



/* Entry: 106eaea8c; end: 106eaead7; -[SCSpectaclesManager _pairedDevices] */

void FUN_106eaea8c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106eaead8; end: 106eaeaf3;  */

uint FUN_106eaead8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c082060(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 106eaeaf4; end: 106eaedaf; -[SCSpectaclesManager startPairingFlowForDeviceWithUserDisplayName:targetDeviceProductType:] */

void FUN_106eaeaf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0f3240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c228640(param_1);
    lVar1 = param_1;
    func_0x00010bf10f60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126d30a0;
    _objc_alloc();
    lVar1 = param_1;
    func_0x00010bf71080(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bf04760(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf34940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c249600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010bfac4e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010c2946e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00c440(puVar3,param_2,lVar1,lVar4,lVar6,lVar7,lVar2,lVar8,lVar9);
    func_0x00010c1d8d00(param_1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0f3240(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c0f32a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d8d80(lVar1,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126d30a8;
    func_0x00010bf6fcc0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126d30b0;
    _objc_alloc_init();
    if (puVar3 != (undefined *)0x0) {
      lVar1 = param_1;
      func_0x00010c0f3240(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6fc0();
      _objc_release(lVar1);
    }
    if (puVar10 != (undefined *)0x0) {
      lVar1 = param_1;
      func_0x00010c0f3240(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6fc0();
      _objc_release(lVar1);
    }
    func_0x00010c0f3240(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c250740();
    _objc_release(param_1);
    _objc_release(puVar10);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eaedb0; end: 106eaee8f; -[SCSpectaclesManager stopPairingFlowForNewDevice] */

void FUN_106eaedb0(long param_1)

{
  long lVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar1 = param_1;
  func_0x00010c0f3240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_28,param_1);
    func_0x00010c0f3240(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010bf2f040(param_1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 106eaee90; end: 106eaeec7;  */

void FUN_106eaee90(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1d8d00(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eaeec8; end: 106eaeef7; -[SCSpectaclesManager factoryResetNewDevice] */

void FUN_106eaeec8(undefined8 param_1)

{
  func_0x00010c0f3240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9f4e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eaeef8; end: 106eaef53; -[SCSpectaclesManager confirmUnpairPreviousDevice] */

void FUN_106eaeef8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c0f3240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c0f3240(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf48060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106eaef54; end: 106eaefaf; -[SCSpectaclesManager confirmKeepPreviousDevicePaired] */

void FUN_106eaef54(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c0f3240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c0f3240(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf47f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106eaefb0; end: 106eaefdf; -[SCSpectaclesManager confirmKeepPairingAfterValidatingRequest] */

void FUN_106eaefb0(undefined8 param_1)

{
  func_0x00010c0f3240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf47ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eaefe0; end: 106eaf07f; -[SCSpectaclesManager setPairingDeviceName:] */

void FUN_106eaefe0(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0f3240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = param_3;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c0c78;
    func_0x00010c27c880(PTR_PTR_1126c0c78,param_2,param_3,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c0f3240(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d8ce0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106eaf080; end: 106eaf0bb; -[SCSpectaclesManager pairingMaxDeviceNameLimit] */

undefined8 FUN_106eaf080(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0f3240();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f32e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106eaf0bc; end: 106eaf0ff; -[SCSpectaclesManager pairingDeviceNameWithoutEmoji] */

void FUN_106eaf0bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0f3240();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f3040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106eaf100; end: 106eaf143; -[SCSpectaclesManager pairingDeviceNameWithEmoji] */

void FUN_106eaf100(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0f3240();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f3020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106eaf144; end: 106eaf187; -[SCSpectaclesManager pairingDeviceEmoji] */

void FUN_106eaf144(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0f3240();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f3060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106eaf188; end: 106eaf1ff; -[SCSpectaclesManager setPairingSessionId:] */

void FUN_106eaf188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf51e00(param_3);
  func_0x00010c1d8d20(param_1,param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010c0f3240(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8d80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eaf200; end: 106eaf26f; -[SCSpectaclesManager setPairingDeviceLocationEnabled:] */

void FUN_106eaf200(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c0f3240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c0f3240(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d8ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106eaf270; end: 106eaf2b3; -[SCSpectaclesManager pairingUpdate] */

void FUN_106eaf270(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0f3240();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f3540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106eaf2b4; end: 106eaf2f7; -[SCSpectaclesManager pairingDeviceInfo] */

void FUN_106eaf2b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0f3240();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f2e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106eaf2f8; end: 106eaf35b; -[SCSpectaclesManager dealloc] */

void FUN_106eaf2f8(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x68));
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f7ab8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106eaf35c; end: 106eaf3d7; -[SCSpectaclesManager setupCentralManager] */

void FUN_106eaf35c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf34940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06f880();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  func_0x00010bf34940(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf57500();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eaf3d8; end: 106eaf3df; -[SCSpectaclesManager clearCacheExceptForCurrentUser] */

void FUN_106eaf3d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3abf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_clearCacheExceptForCurrentUser_1125ac4a0);
  return;
}



/* Entry: 106eaf3e0; end: 106eaf60f; -[SCSpectaclesManager renameDevice:inputNameWithoutEmoji:] */

void FUN_106eaf3e0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0b8300();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0708a0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR_PTR_1126c0c78;
    func_0x00010c078700(PTR_PTR_1126c0c78,param_2,param_4);
    puVar5 = PTR_PTR_1126c0c78;
    if ((int)puVar3 != 0) {
      uVar4 = param_3;
      func_0x00010c0d4f60(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010bf8e2c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d5000(puVar5,param_2,param_4,uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      _objc_release(uVar4);
      puVar3 = PTR_PTR_1126c0c78;
      uVar4 = param_3;
      func_0x00010bfd38e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010c074be0();
      func_0x00010c27c880(puVar3,param_2,puVar5,uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(uVar4);
      uVar4 = param_3;
      func_0x000106e937b0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18fca0();
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f260(puVar5,param_2,puVar6);
      func_0x00010c1b83a0(uVar4,param_2,puVar5);
      _objc_release(puVar6);
      uVar7 = uVar4;
      func_0x00010c0692a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1daae0();
      _objc_release(uVar7);
      func_0x00010c248900(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
      func_0x00010bf095a0(*(undefined8 *)(param_1 + 0x68));
      uVar7 = *(undefined8 *)(param_1 + 0x90);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f260(puVar5,param_2,puVar6);
      func_0x00010c285100(uVar7,param_2,param_4,param_3,puVar5,0);
      _objc_release(puVar6);
      _objc_release(uVar7);
      _objc_release(uVar4);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eaf610; end: 106eaf6df; -[SCSpectaclesManager loadDevicesFromFileWithCompletionHandler:] */

void FUN_106eaf610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  func_0x00010c09b100(uRam00000001138466e8);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106eaf6e0; end: 106eaf713;  */

void FUN_106eaf6e0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4d160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eaf714; end: 106eaf7eb; -[SCSpectaclesManager _loadDevicesFromFileWithCompletionHandler:] */

void FUN_106eaf714(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106eaf7ec;
  puStack_50 = &UNK_110848708;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x000100a0df38(uVar1,&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106eaf7ec; end: 106eaf833;  */

void FUN_106eaf7ec(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c13e1e0(*(undefined8 *)(lVar1 + 0x68),param_2,*(undefined8 *)(lVar1 + 0x60));
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106eaf834; end: 106eaf90b; -[SCSpectaclesManager loadDevicesFromServerWithCompletionHandler:] */

void FUN_106eaf834(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106eaf90c;
  puStack_50 = &UNK_110848708;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x000100a0df38(uVar1,&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106eaf90c; end: 106eaf9e7;  */

void FUN_106eaf90c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x90);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_38,param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    func_0x00010c1348e0(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106eaf9e8; end: 106eafa63;  */

void FUN_106eaf9e8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (((int)param_2 != 0) && (param_3 != 0)) {
      func_0x00010c1233c0(lVar1);
    }
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eafa64; end: 106eafab3; -[SCSpectaclesManager reconcileDevicesFromServer:] */

void FUN_106eafa64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf71080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1233c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eafab4; end: 106eafb0f; -[SCSpectaclesManager activateDevice:] */

void FUN_106eafab4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c15e740(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010beef9a0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


