/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0061d2bc; end: 0061d357; -[SCMergedObserver initWithObservableCount:observer:] */

undefined1 *
FUN_0061d2bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac43a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 0061d358; end: 0061d35f; -[SCMergedObserver next:] */

void FUN_0061d358(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00789930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_next__00abd358);
  return;
}



/* Entry: 0061d360; end: 0061d383; -[SCMergedObserver complete] */

void FUN_0061d360(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 8);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_complete_00abaeb0);
    return;
  }
  return;
}



/* Entry: 0061d384; end: 0061d38f; -[SCMergedObserver .cxx_destruct] */

void FUN_0061d384(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 0061d390; end: 0061d397; -[SCMergedObserver .cxx_construct] */

void FUN_0061d390(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 0061d398; end: 0061d46b; -[SCSwitchMapObserver initWithObserver:mapper:] */

undefined1 *
FUN_0061d398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac43b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0061d46c; end: 0061d567; -[SCSwitchMapObserver next:] */

void FUN_0061d46c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  (**(code **)(lVar1 + 0x10))(lVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_00ac3588;
  _objc_alloc(PTR_PTR_00ac3588);
  func_0x00785740();
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x20);
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x007822e0();
  }
  *(undefined1 *)(param_1 + 0x61) = 1;
  lVar3 = lVar1;
  func_0x007923c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar3;
  _objc_release(uVar4);
  __ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x20);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0061d568; end: 0061d5cb; -[SCSwitchMapObserver complete] */

void FUN_0061d568(long param_1)

{
  byte bVar1;
  
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x20);
  if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00779d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_00998b28)(param_1 + 0x20);
    return;
  }
  *(undefined1 *)(param_1 + 0x60) = 1;
  bVar1 = *(byte *)(param_1 + 0x61);
  __ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x20);
  if ((bVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_complete_00abaeb0);
  return;
}



/* Entry: 0061d5cc; end: 0061d623; -[SCSwitchMapObserver proxyObserverDidComplete:] */

void FUN_0061d5cc(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x61) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar2);
  cVar1 = *(char *)(param_1 + 0x60);
  __ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x20);
  if (cVar1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_complete_00abaeb0);
    return;
  }
  return;
}



/* Entry: 0061d624; end: 0061d667; -[SCSwitchMapObserver .cxx_destruct] */

void FUN_0061d624(long param_1)

{
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0061d668; end: 0061d68f; -[SCSwitchMapObserver .cxx_construct] */

long FUN_0061d668(long param_1)

{
  __ZNSt3__115recursive_mutexC1Ev(param_1 + 0x20);
  return param_1;
}



/* Entry: 0061d690; end: 0061d727; -[SCTakeObserver initWithObserver:take:] */

undefined1 *
FUN_0061d690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac43b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0061d728; end: 0061d7b3; -[SCTakeObserver next:] */

void FUN_0061d728(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 0x20);
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar1 = *(long *)(param_1 + 0x18) + 1;
  *(ulong *)(param_1 + 0x18) = uVar1;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x20);
  if ((uVar1 <= uVar2) &&
     (func_0x00789920(*(undefined8 *)(param_1 + 8),param_2,param_3), uVar1 == uVar2)) {
    func_0x007806e0(*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0061d7b4; end: 0061d807; -[SCTakeObserver complete] */

void FUN_0061d7b4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x20);
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar2 = *(ulong *)(param_1 + 0x18);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x20);
  if (uVar2 < uVar1) {
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_complete_00abaeb0);
    return;
  }
  return;
}



/* Entry: 0061d808; end: 0061d833; -[SCTakeObserver .cxx_destruct] */

void FUN_0061d808(long param_1)

{
  __ZNSt3__15mutexD1Ev(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0061d834; end: 0061d857; -[SCTakeObserver .cxx_construct] */

void FUN_0061d834(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}



/* Entry: 0061d858; end: 0061d937; -[SCTimeoutObserver initWithObservable:observer:timeoutInterval:] */

undefined1 *
FUN_0061d858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_00ac43c0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    func_0x0077dca0(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 0061d938; end: 0061da03; -[SCTimeoutObserver next:] */

void FUN_0061d938(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___SCResult_00ac2c10;
  func_0x00792500(PTR__OBJC_CLASS___SCResult_00ac2c10,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00789920(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00787320(*(undefined8 *)(param_1 + 0x18));
  func_0x0077dca0(param_1);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0061da04; end: 0061da53; -[SCTimeoutObserver complete] */

void FUN_0061da04(long param_1)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
  func_0x0077c3e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)(param_1 + 0x28);
  return;
}



/* Entry: 0061da54; end: 0061dacb; -[SCTimeoutObserver dealloc] */

void FUN_0061da54(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00787320(*(undefined8 *)(param_1 + 0x18));
  puStack_28 = PTR_PTR_00ac43c0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0061dacc; end: 0061db8b; -[SCTimeoutObserver _onError] */

void FUN_0061dacc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___SCResult_00ac2c10;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSError_00ac2b00;
  func_0x00782e40(PTR__OBJC_CLASS___NSError_00ac2b00,param_2,PTR_PTR_00b235c0,
                  (long)iRam0000000000b235c8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x007830c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00789920(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077c3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s__complete_00ab9df0);
  return;
}



/* Entry: 0061db8c; end: 0061dbb3; -[SCTimeoutObserver _complete] */

void FUN_0061db8c(long param_1)

{
  func_0x00787320(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_complete_00abaeb0);
  return;
}



/* Entry: 0061dbb4; end: 0061dce3; -[SCTimeoutObserver _startTimer] */

void FUN_0061dbb4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR__OBJC_CLASS___NSTimer_00ac3110;
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = uVar2;
  func_0x007929e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_00ac3108;
  func_0x00788c40(PTR__OBJC_CLASS___NSRunLoop_00ac3108);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077e940();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 0061dce4; end: 0061dd5f;  */

void FUN_0061dce4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    __ZNSt3__15mutex4lockEv(lVar1 + 0x28);
    if (*(long *)(lVar1 + 0x68) == *(long *)(param_1 + 0x28)) {
      func_0x0077d4c0(lVar1);
    }
    __ZNSt3__15mutex6unlockEv(lVar1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(lVar1);
  return;
}



/* Entry: 0061dd60; end: 0061dd9f; -[SCTimeoutObserver .cxx_destruct] */

void FUN_0061dd60(long param_1)

{
  __ZNSt3__15mutexD1Ev(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077a978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_0099acf8)(param_1 + 8);
  return;
}



/* Entry: 0061dda0; end: 0061ddbf; -[SCTimeoutObserver .cxx_construct] */

void FUN_0061dda0(long param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



/* Entry: 0061ddc0; end: 0061de8f; -[SCTimerObserver initWithObserver:timerInterval:performer:] */

undefined1 *
FUN_0061ddc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_00ac43c8;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 0061de90; end: 0061e03b; -[SCTimerObserver next:] */

void FUN_0061de90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(double *)(param_1 + 0x10) <= 0.0) {
    _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 8));
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_68 = PTR___NSConcreteStackBlock_00999f30;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_0061e03c;
    puStack_50 = &UNK_00a0b238;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x0078a5c0(uVar1);
    _objc_release(uStack_48);
    puVar3 = auStack_40;
  }
  else {
    _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 8));
    uVar1 = 0;
    _dispatch_time(0,(long)(*(double *)(param_1 + 0x10) * 1000000000.0));
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x0078ace0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_00999f30;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_0061e084;
    puStack_80 = &UNK_00a0b238;
    _objc_copyWeak(auStack_70,auStack_38);
    _objc_retain(param_3);
    uStack_78 = param_3;
    _dispatch_after(uVar1,uVar2,&puStack_98);
    _objc_release(uVar2);
    _objc_release(uStack_78);
    puVar3 = auStack_70;
  }
  _objc_destroyWeak(puVar3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 0061e03c; end: 0061e083;  */

void FUN_0061e03c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00789920();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0061e084; end: 0061e0cb;  */

void FUN_0061e084(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00789920();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0061e0cc; end: 0061e0d3; -[SCTimerObserver complete] */

void FUN_0061e0cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_complete_00abaeb0);
  return;
}



/* Entry: 0061e0d4; end: 0061e103; -[SCTimerObserver .cxx_destruct] */

void FUN_0061e0d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0061e104; end: 0061e177; -[SCDisposableObserverLifecycle dealloc] */

void FUN_0061e104(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00782300();
  puStack_28 = PTR__OBJC_CLASS___SCDisposableObserverLifecycle_00ac43d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0061e178; end: 0061e2df; -[SCDisposableObserverLifecycle addDisposable:] */

void FUN_0061e178(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  if (puVar2 < *(undefined8 **)(param_1 + 0x58)) {
    _objc_retain(param_3);
    puVar14 = puVar2 + 1;
    *puVar2 = param_3;
  }
  else {
    lVar12 = (long)puVar2 - *(long *)(param_1 + 0x48);
    uVar1 = (lVar12 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_0061e3f8();
LAB_0061e2b8:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x61e2bc);
      (*pcVar4)();
    }
    uVar6 = (long)*(undefined8 **)(param_1 + 0x58) - *(long *)(param_1 + 0x48);
    uVar9 = (long)uVar6 >> 2;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 == 0) {
      lVar5 = 0;
    }
    else {
      if (uVar9 >> 0x3d != 0) {
        FUN_0040cee8();
        goto LAB_0061e2b8;
      }
      lVar5 = uVar9 << 3;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar5 + lVar12);
    _objc_retain(param_3);
    puVar14 = puVar2 + 1;
    *puVar2 = param_3;
    puVar13 = *(undefined8 **)(param_1 + 0x48);
    puVar3 = *(undefined8 **)(param_1 + 0x50);
    puVar2 = (undefined8 *)((long)puVar2 + ((long)puVar13 - (long)puVar3));
    puVar7 = puVar13;
    puVar10 = puVar2;
    if ((long)puVar13 - (long)puVar3 != 0) {
      do {
        uVar11 = *puVar7;
        puVar8 = puVar7 + 1;
        *puVar7 = 0;
        *puVar10 = uVar11;
        puVar7 = puVar8;
        puVar10 = puVar10 + 1;
      } while (puVar8 != puVar3);
      do {
        puVar7 = puVar13 + 1;
        _objc_release(*puVar13);
        puVar13 = puVar7;
      } while (puVar7 != puVar3);
      puVar13 = *(undefined8 **)(param_1 + 0x48);
    }
    *(undefined8 **)(param_1 + 0x48) = puVar2;
    *(undefined8 **)(param_1 + 0x50) = puVar14;
    *(ulong *)(param_1 + 0x58) = lVar5 + uVar9 * 8;
    if (puVar13 != (undefined8 *)0x0) {
      __ZdlPv(puVar13);
    }
  }
  *(undefined8 **)(param_1 + 0x50) = puVar14;
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0061e2e0; end: 0061e37b; -[SCDisposableObserverLifecycle disposeAll] */

void FUN_0061e2e0(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar4;
  undefined8 *puVar3;
  
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar2 = *(undefined8 **)(param_1 + 0x48);
  puVar4 = *(undefined8 **)(param_1 + 0x50);
  if (puVar2 != puVar4) {
    do {
      puVar3 = puVar2 + 1;
      uVar1 = *puVar2;
      _objc_retain(uVar1);
      func_0x007822e0(uVar1);
      _objc_release(uVar1);
      puVar2 = puVar3;
    } while (puVar3 != puVar4);
    puVar2 = *(undefined8 **)(param_1 + 0x48);
    puVar4 = *(undefined8 **)(param_1 + 0x50);
  }
  while (puVar2 != puVar4) {
    puVar4 = puVar4 + -1;
    _objc_release(*puVar4);
  }
  *(undefined8 **)(param_1 + 0x50) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)(param_1 + 8);
  return;
}



/* Entry: 0061e37c; end: 0061e3d7; -[SCDisposableObserverLifecycle .cxx_destruct] */

void FUN_0061e37c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x48);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x50);
    puVar1 = puVar2;
    if (puVar2 != puVar3) {
      do {
        puVar3 = puVar3 + -1;
        _objc_release(*puVar3);
      } while (puVar3 != puVar2);
      puVar1 = *(undefined8 **)(param_1 + 0x48);
    }
    *(undefined8 **)(param_1 + 0x50) = puVar2;
    __ZdlPv(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00779ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_00998be0)(param_1 + 8);
  return;
}



/* Entry: 0061e3d8; end: 0061e3f7; -[SCDisposableObserverLifecycle .cxx_construct] */

void FUN_0061e3d8(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 0061e3f8; end: 0061e40b;  */

undefined1 * FUN_0061e3f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  char **ppcVar2;
  undefined8 uVar3;
  char *pcStack_40;
  undefined *puStack_38;
  
  pcVar1 = "vector";
  FUN_0040d774();
  ppcVar2 = &pcStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac43d8;
  pcStack_40 = pcVar1;
  _objc_msgSendSuper2(&pcStack_40,PTR_s_init_00abbf70);
  if (ppcVar2 != (char **)0x0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)ppcVar2 + 8);
    *(undefined8 *)((long)ppcVar2 + 8) = param_3;
    _objc_release(uVar3);
    *(undefined1 *)((long)ppcVar2 + 0x10) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)ppcVar2;
}



/* Entry: 0061e40c; end: 0061e49b; -[SCAssertingObserver initWithObserver:] */

undefined1 * FUN_0061e40c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac43d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0061e49c; end: 0061e4a3; -[SCAssertingObserver next:] */

void FUN_0061e49c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00789930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_next__00abd358);
  return;
}



/* Entry: 0061e4a4; end: 0061e4cb; -[SCAssertingObserver complete] */

void FUN_0061e4a4(long param_1)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  
  pcVar1 = (char *)(param_1 + 0x10);
  do {
    if (*pcVar1 != '\0') {
      ClearExclusiveLocal();
      break;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_complete_00abaeb0);
  return;
}



/* Entry: 0061e4cc; end: 0061e4d7; -[SCAssertingObserver .cxx_destruct] */

void FUN_0061e4cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0061e4d8; end: 0061e4df; -[SCAssertingObserver .cxx_construct] */

void FUN_0061e4d8(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 0061e4e0; end: 0061e58f; -[SCMulticastObserver next:] */

void FUN_0061e4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lStack_48;
  long lStack_40;
  
  _objc_retain(param_3);
  func_0x0077d4a0(&lStack_48,param_1);
  for (lVar2 = lStack_48; lVar2 != lStack_40; lVar2 = lVar2 + 8) {
    lVar1 = lVar2;
    _objc_loadWeakRetained(lVar2);
    func_0x00789920();
    _objc_release(lVar1);
  }
  FUN_0061e9b0(&lStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 0061e590; end: 0061e60f; -[SCMulticastObserver complete] */

void FUN_0061e590(void)

{
  long lVar1;
  long lVar2;
  long lStack_48;
  long lStack_40;
  
  func_0x0077d4a0(&lStack_48);
  for (lVar2 = lStack_48; lVar2 != lStack_40; lVar2 = lVar2 + 8) {
    lVar1 = lVar2;
    _objc_loadWeakRetained(lVar2);
    func_0x007806e0();
    _objc_release(lVar1);
  }
  FUN_0061e9b0(&lStack_48);
  return;
}



/* Entry: 0061e610; end: 0061e7b3; -[SCMulticastObserver addObserver:] */

void FUN_0061e610(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  lVar7 = param_3;
  _objc_initWeak(auStack_68);
  uVar2 = *(ulong *)(param_1 + 0x50);
  if (uVar2 < *(ulong *)(param_1 + 0x58)) {
    _objc_copyWeak(uVar2,auStack_68);
    lVar8 = uVar2 + 8;
  }
  else {
    lVar8 = uVar2 - *(long *)(param_1 + 0x48);
    uVar2 = (lVar8 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_0061ea18();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x61e788);
      (*pcVar4)();
    }
    uVar5 = *(ulong *)(param_1 + 0x58) - *(long *)(param_1 + 0x48);
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar2) {
      uVar6 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      uVar6 = 0;
      lVar7 = 0;
    }
    else {
      FUN_0061ea2c();
    }
    lVar8 = uVar6 + lVar8;
    _objc_copyWeak(lVar8,auStack_68);
    lVar9 = *(long *)(param_1 + 0x48);
    lVar3 = *(long *)(param_1 + 0x50);
    lVar1 = lVar8 + (lVar9 - lVar3);
    lVar10 = lVar9;
    lVar11 = lVar1;
    if (lVar3 != lVar9) {
      do {
        _objc_moveWeak(lVar11,lVar10);
        lVar10 = lVar10 + 8;
        lVar11 = lVar11 + 8;
      } while (lVar10 != lVar3);
      do {
        _objc_destroyWeak(lVar9);
        lVar9 = lVar9 + 8;
      } while (lVar9 != lVar3);
      lVar9 = *(long *)(param_1 + 0x48);
    }
    lVar8 = lVar8 + 8;
    *(long *)(param_1 + 0x48) = lVar1;
    *(long *)(param_1 + 0x50) = lVar8;
    *(ulong *)(param_1 + 0x58) = uVar6 + lVar7 * 8;
    if (lVar9 != 0) {
      __ZdlPv(lVar9);
    }
  }
  *(long *)(param_1 + 0x50) = lVar8;
  _objc_destroyWeak(auStack_68);
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return;
}



/* Entry: 0061e7b4; end: 0061e8b3; -[SCMulticastObserver removeObserver:] */

void FUN_0061e7b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x48);
  lVar4 = *(long *)(param_1 + 0x50);
  lVar2 = lVar3;
  if (lVar3 != lVar4) {
    do {
      lVar1 = lVar2;
      _objc_loadWeakRetained();
      _objc_release();
      lVar3 = lVar2;
      if (lVar1 == param_3) break;
      lVar2 = lVar2 + 8;
      lVar3 = lVar4;
    } while (lVar2 != lVar4);
    lVar4 = *(long *)(param_1 + 0x50);
  }
  if (lVar3 != lVar4) {
    lVar2 = lVar3;
    if (lVar3 + 8 != lVar4) {
      do {
        lVar3 = lVar2 + 8;
        lVar1 = lVar3;
        _objc_loadWeakRetained(lVar3);
        _objc_storeWeak(lVar2,lVar1);
        _objc_release(lVar1);
        lVar1 = lVar2 + 0x10;
        lVar2 = lVar3;
      } while (lVar1 != lVar4);
      lVar4 = *(long *)(param_1 + 0x50);
    }
    while (lVar4 != lVar3) {
      lVar4 = lVar4 + -8;
      _objc_destroyWeak(lVar4);
    }
    *(long *)(param_1 + 0x50) = lVar3;
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0061e8b4; end: 0061e967; -[SCMulticastObserver _observersCopy] */

void FUN_0061e8b4(ulong *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  
  __ZNSt3__15mutex4lockEv(param_2 + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar5 = *(long *)(param_2 + 0x48);
  lVar1 = *(long *)(param_2 + 0x50);
  lVar2 = lVar1 - lVar5;
  if (lVar2 != 0) {
    uVar4 = lVar2 >> 3;
    if (uVar4 >> 0x3d != 0) {
      FUN_0061ea18();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x61e94c);
      (*pcVar3)();
    }
    FUN_0061ea2c();
    *param_1 = uVar4;
    param_1[2] = uVar4 + param_3 * 8;
    do {
      _objc_copyWeak(uVar4,lVar5);
      lVar5 = lVar5 + 8;
      uVar4 = uVar4 + 8;
    } while (lVar5 != lVar1);
    param_1[1] = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)(param_2 + 8);
  return;
}



/* Entry: 0061e968; end: 0061e98f; -[SCMulticastObserver .cxx_destruct] */

void FUN_0061e968(long param_1)

{
  FUN_0061e9b0(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00779ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_00998be0)(param_1 + 8);
  return;
}



/* Entry: 0061e990; end: 0061e9af; -[SCMulticastObserver .cxx_construct] */

void FUN_0061e990(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 0061e9b0; end: 0061ea17;  */

void FUN_0061e9b0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar1);
    return;
  }
  return;
}



/* Entry: 0061ea18; end: 0061ea2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0061ea18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  long lVar2;
  char **ppcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  char *pcStack_70;
  undefined *puStack_68;
  
  pcVar1 = "vector";
  FUN_0040d774();
  if ((ulong)pcVar1 >> 0x3d == 0) {
    lVar2 = (long)pcVar1 << 3;
    __Znwm(lVar2);
    auVar7._8_8_ = pcVar1;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_0040cee8();
  ppcVar3 = &pcStack_70;
  puStack_68 = PTR_PTR_00ac43e0;
  puVar5 = PTR_s_init_00abbf70;
  pcStack_70 = pcVar1;
  _objc_msgSendSuper2(&pcStack_70,PTR_s_init_00abbf70);
  if (ppcVar3 != (char **)0x0) {
    puVar4 = PTR_PTR_00ac3530;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)ppcVar3 + (long)_DAT_00ac5b00);
    *(undefined **)((long)ppcVar3 + (long)_DAT_00ac5b00) = puVar4;
    _objc_release(uVar6);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    func_0x0077f1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)ppcVar3 + (long)_DAT_00ac5b04);
    *(undefined **)((long)ppcVar3 + (long)_DAT_00ac5b04) = puVar4;
    _objc_release(uVar6);
    *(undefined8 *)((long)ppcVar3 + (long)_DAT_00ac5b08) = param_3;
    puVar4 = PTR_PTR_00ac3580;
    _objc_alloc();
    func_0x00785fa0();
    uVar6 = *(undefined8 *)((long)ppcVar3 + (long)_DAT_00ac5b0c);
    *(undefined **)((long)ppcVar3 + (long)_DAT_00ac5b0c) = puVar4;
    _objc_release(uVar6);
  }
  auVar8._8_8_ = puVar5;
  auVar8._0_8_ = ppcVar3;
  return auVar8;
}



/* Entry: 0061ea2c; end: 0061ea5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0061ea2c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong uStack_60;
  undefined *puStack_58;
  
  if (param_1 >> 0x3d == 0) {
    lVar1 = param_1 << 3;
    __Znwm(lVar1);
    auVar6._8_8_ = param_1;
    auVar6._0_8_ = lVar1;
    return auVar6;
  }
  FUN_0040cee8();
  puVar2 = &uStack_60;
  puStack_58 = PTR_PTR_00ac43e0;
  puVar4 = PTR_s_init_00abbf70;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar2 != (ulong *)0x0) {
    puVar3 = PTR_PTR_00ac3530;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_00ac5b00);
    *(undefined **)((long)puVar2 + (long)_DAT_00ac5b00) = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    func_0x0077f1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_00ac5b04);
    *(undefined **)((long)puVar2 + (long)_DAT_00ac5b04) = puVar3;
    _objc_release(uVar5);
    *(undefined8 *)((long)puVar2 + (long)_DAT_00ac5b08) = param_3;
    puVar3 = PTR_PTR_00ac3580;
    _objc_alloc();
    func_0x00785fa0();
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_00ac5b0c);
    *(undefined **)((long)puVar2 + (long)_DAT_00ac5b0c) = puVar3;
    _objc_release(uVar5);
  }
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = puVar2;
  return auVar7;
}



/* Entry: 0061ea60; end: 0061eb67; -[SCClearableReplaySubject initWithBufferSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_0061ea60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_00ac43e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_00ac3530;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5b00);
    *(undefined **)((long)puVar1 + (long)_DAT_00ac5b00) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    func_0x0077f1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5b04);
    *(undefined **)((long)puVar1 + (long)_DAT_00ac5b04) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5b08) = param_3;
    puVar2 = PTR_PTR_00ac3580;
    _objc_alloc();
    func_0x00785fa0();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5b0c);
    *(undefined **)((long)puVar1 + (long)_DAT_00ac5b0c) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0061eb68; end: 0061eb8f; +[SCClearableReplaySubject clearableReplaySubjectWithBufferSize:] */

void FUN_0061eb68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00784de0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0061eb90; end: 0061ec0b; -[SCClearableReplaySubject dealloc] */

void FUN_0061eb90(ulong param_1)

{
  ulong uVar1;
  ulong uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x007875a0();
  if ((uVar1 & 1) == 0) {
    func_0x007806e0(param_1);
  }
  puStack_28 = PTR_PTR_00ac43e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0061ec0c; end: 0061ec6b; -[SCClearableReplaySubject clear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061ec0c(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_00ac5b10;
  __ZNSt3__15mutex4lockEv(param_1 + lVar1);
  func_0x0078b280(*(undefined8 *)(param_1 + _DAT_00ac5b04));
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)(param_1 + lVar1);
  return;
}



/* Entry: 0061ec6c; end: 0061ed83; -[SCClearableReplaySubject next:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061ec6c(long param_1,undefined8 param_2,undefined *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_00ac5b10;
  __ZNSt3__15mutex4lockEv(param_1 + lVar6);
  lVar5 = (long)_DAT_00ac5b08;
  if (*(long *)(param_1 + lVar5) != 0) {
    lVar3 = (long)_DAT_00ac5b04;
    uVar1 = *(ulong *)(param_1 + lVar3);
    func_0x00780e80();
    if (*(ulong *)(param_1 + lVar5) <= uVar1) {
      func_0x0078b480(*(undefined8 *)(param_1 + lVar3),param_2,0);
    }
    uVar4 = *(undefined8 *)(param_1 + lVar3);
    puVar2 = param_3;
    if (param_3 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_00ac2f90;
      func_0x00789b20(PTR__OBJC_CLASS___NSNull_00ac2f90);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x0077e720(uVar4,param_2,puVar2);
    if (param_3 == (undefined *)0x0) {
      _objc_release(puVar2);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + lVar6);
  func_0x00789920(*(undefined8 *)(param_1 + _DAT_00ac5b0c),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0061ed84; end: 0061edb3; -[SCClearableReplaySubject complete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061ed84(long param_1,undefined8 param_2)

{
  func_0x0078e7e0(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac5b0c),PTR_s_complete_00abaeb0);
  return;
}



/* Entry: 0061edb4; end: 0061f013; -[SCClearableReplaySubject subscribe:] */

/* WARNING: Removing unreachable block (ram,0x0061ee84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061edb4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  func_0x0077e7a0(*(undefined8 *)(param_1 + _DAT_00ac5b00));
  lVar6 = (long)_DAT_00ac5b10;
  __ZNSt3__15mutex4lockEv(param_1 + lVar6);
  lVar2 = *(long *)(param_1 + _DAT_00ac5b04);
  func_0x00780e20();
  __ZNSt3__15mutex6unlockEv(param_1 + lVar6);
  _objc_retain(lVar2);
  lVar6 = lVar2;
  func_0x00780ea0();
  while (lVar6 != 0) {
    lVar8 = 0;
    do {
      uVar7 = *(undefined8 *)(lVar8 * 8);
      puVar3 = PTR__OBJC_CLASS___NSNull_00ac2f90;
      func_0x00789b20(PTR__OBJC_CLASS___NSNull_00ac2f90);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar7;
      func_0x007877e0();
      uVar1 = 0;
      if ((int)uVar4 == 0) {
        uVar1 = uVar7;
      }
      _objc_retain(uVar1);
      _objc_release(puVar3);
      func_0x00789920(param_3);
      _objc_release(uVar1);
      lVar8 = lVar8 + 1;
    } while (lVar6 != lVar8);
    lVar6 = lVar2;
    func_0x00780ea0();
  }
  _objc_release(lVar2);
  func_0x007875a0();
  if ((int)param_1 != 0) {
    func_0x007806e0(param_3);
  }
  puVar3 = PTR_PTR_00ac3548;
  _objc_alloc(PTR_PTR_00ac3548);
  func_0x00785e60();
  _objc_release(lVar2);
  lVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar5) {
    ___stack_chk_fail();
    _objc_release(lVar2);
    _objc_release(lVar2);
    _objc_release(param_3);
    __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x0078b4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (*(undefined8 *)(lVar6 + _DAT_00ac5b00),PTR_s_removeObserver__00abda48);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 0061f014; end: 0061f023; -[SCClearableReplaySubject unsubscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061f014(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac5b00),PTR_s_removeObserver__00abda48);
  return;
}



/* Entry: 0061f024; end: 0061f037; -[SCClearableReplaySubject isComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0061f024(long param_1)

{
  return *(byte *)(param_1 + _DAT_00ac5afc) & 1;
}



/* Entry: 0061f038; end: 0061f047; -[SCClearableReplaySubject setIsComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061f038(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_00ac5afc) = param_3;
  return;
}



/* Entry: 0061f048; end: 0061f0a3; -[SCClearableReplaySubject .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061f048(long param_1)

{
  __ZNSt3__15mutexD1Ev(param_1 + _DAT_00ac5b10);
  _objc_storeStrong(param_1 + _DAT_00ac5b04,0);
  _objc_storeStrong(param_1 + _DAT_00ac5b0c,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac5b00,0);
  return;
}



/* Entry: 0061f0a4; end: 0061f0d3; -[SCClearableReplaySubject .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061f0a4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_00ac5b10);
  *puVar1 = 0x32aaaba7;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[7] = 0;
  return;
}



/* Entry: 0061f0d4; end: 0061f1db; -[SCReplaySubject initWithBufferSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_0061f0d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_00ac43e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_00ac3530;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5b18);
    *(undefined **)((long)puVar1 + (long)_DAT_00ac5b18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    func_0x0077f1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5b1c);
    *(undefined **)((long)puVar1 + (long)_DAT_00ac5b1c) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5b20) = param_3;
    puVar2 = PTR_PTR_00ac3580;
    _objc_alloc();
    func_0x00785fa0();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5b24);
    *(undefined **)((long)puVar1 + (long)_DAT_00ac5b24) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0061f1dc; end: 0061f203; +[SCReplaySubject replaySubjectWithBufferSize:] */

void FUN_0061f1dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00784de0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0061f204; end: 0061f27f; -[SCReplaySubject dealloc] */

void FUN_0061f204(ulong param_1)

{
  ulong uVar1;
  ulong uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x007875a0();
  if ((uVar1 & 1) == 0) {
    func_0x007806e0(param_1);
  }
  puStack_28 = PTR_PTR_00ac43e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0061f280; end: 0061f38f; -[SCReplaySubject next:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061f280(long param_1,undefined8 param_2,undefined *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_00ac5b28;
  __ZNSt3__15mutex4lockEv(param_1 + lVar5);
  lVar3 = (long)_DAT_00ac5b1c;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00780e80();
  if (*(ulong *)(param_1 + _DAT_00ac5b20) <= uVar1) {
    func_0x0078b480(*(undefined8 *)(param_1 + lVar3),param_2,0);
  }
  uVar4 = *(undefined8 *)(param_1 + lVar3);
  puVar2 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_00ac2f90;
    func_0x00789b20(PTR__OBJC_CLASS___NSNull_00ac2f90);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x0077e720(uVar4,param_2,puVar2);
  if (param_3 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  __ZNSt3__15mutex6unlockEv(param_1 + lVar5);
  func_0x00789920(*(undefined8 *)(param_1 + _DAT_00ac5b24),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0061f390; end: 0061f3bf; -[SCReplaySubject complete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061f390(long param_1,undefined8 param_2)

{
  func_0x0078e7e0(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac5b24),PTR_s_complete_00abaeb0);
  return;
}



/* Entry: 0061f3c0; end: 0061f5ef; -[SCReplaySubject subscribe:] */

/* WARNING: Removing unreachable block (ram,0x0061f480) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061f3c0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  func_0x0077e7a0(*(undefined8 *)(param_1 + _DAT_00ac5b18));
  lVar8 = (long)_DAT_00ac5b28;
  __ZNSt3__15mutex4lockEv(param_1 + lVar8);
  lVar6 = *(long *)(param_1 + _DAT_00ac5b1c);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00780ea0();
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      uVar7 = *(undefined8 *)(lVar9 * 8);
      puVar3 = PTR__OBJC_CLASS___NSNull_00ac2f90;
      func_0x00789b20(PTR__OBJC_CLASS___NSNull_00ac2f90);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar7;
      func_0x007877e0();
      uVar1 = 0;
      if ((int)uVar4 == 0) {
        uVar1 = uVar7;
      }
      _objc_retain(uVar1);
      _objc_release(puVar3);
      func_0x00789920(param_3);
      _objc_release(uVar1);
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = lVar6;
    func_0x00780ea0();
  }
  _objc_release(lVar6);
  __ZNSt3__15mutex6unlockEv(param_1 + lVar8);
  func_0x007875a0();
  if ((int)param_1 != 0) {
    func_0x007806e0(param_3);
  }
  puVar3 = PTR_PTR_00ac3548;
  _objc_alloc(PTR_PTR_00ac3548);
  func_0x00785e60();
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar5) {
    ___stack_chk_fail();
    _objc_release(lVar6);
    __ZNSt3__15mutex6unlockEv(puVar3 + lVar8);
    _objc_release(param_3);
    __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x0078b4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (*(undefined8 *)(lVar2 + _DAT_00ac5b18),PTR_s_removeObserver__00abda48);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 0061f5f0; end: 0061f5ff; -[SCReplaySubject unsubscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061f5f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac5b18),PTR_s_removeObserver__00abda48);
  return;
}



/* Entry: 0061f600; end: 0061f60f; -[SCReplaySubject buffer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0061f600(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ac5b1c);
}



/* Entry: 0061f610; end: 0061f64f; -[SCReplaySubject setBuffer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061f610(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_00ac5b1c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0061f650; end: 0061f65f; -[SCReplaySubject bufferSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0061f650(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ac5b20);
}



/* Entry: 0061f660; end: 0061f66f; -[SCReplaySubject setBufferSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061f660(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_00ac5b20) = param_3;
  return;
}



/* Entry: 0061f670; end: 0061f683; -[SCReplaySubject isComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0061f670(long param_1)

{
  return *(byte *)(param_1 + _DAT_00ac5b14) & 1;
}



/* Entry: 0061f684; end: 0061f693; -[SCReplaySubject setIsComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061f684(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_00ac5b14) = param_3;
  return;
}



/* Entry: 0061f694; end: 0061f6ef; -[SCReplaySubject .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061f694(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_00ac5b1c,0);
  __ZNSt3__15mutexD1Ev(param_1 + _DAT_00ac5b28);
  _objc_storeStrong(param_1 + _DAT_00ac5b24,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac5b18,0);
  return;
}



/* Entry: 0061f6f0; end: 0061f71f; -[SCReplaySubject .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061f6f0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_00ac5b28);
  *puVar1 = 0x32aaaba7;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[7] = 0;
  return;
}



/* Entry: 0061f720; end: 0061f80b;  */

void _SCBlockCreateByCopyingAttributes(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x10);
  if (lRam0000000000b6c5f8 != -1) {
    _dispatch_once(0xb6c5f8,&PTR___NSConcreteGlobalBlock_00a0b268);
  }
  lVar1 = param_2;
  if ((lVar2 == lRam0000000000b6c600) && (*(long *)(param_1 + 0x20) == 0xd159b10c)) {
    lVar2 = 0x10;
    _dispatch_block_create(0x10,param_2);
    if (*(long *)(lVar2 + 0x20) == 0xd159b10c) {
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(param_1 + 0x38);
      lVar1 = lVar2;
    }
    _objc_retainBlock(lVar1);
    _objc_release(lVar2);
  }
  else {
    _objc_retainBlock(param_2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar1);
  return;
}



/* Entry: 0061f80c; end: 0061f837;  */

void FUN_0061f80c(void)

{
  long lVar1;
  
  lVar1 = 0x10;
  _dispatch_block_create(0x10,&PTR___NSConcreteGlobalBlock_00a0b288);
  uRam0000000000b6c600 = *(undefined8 *)(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 0061f838; end: 0061f83b;  */

void FUN_0061f838(void)

{
  return;
}



/* Entry: 0061f83c; end: 0061fb13; +[SCFuture all:] */

void FUN_0061f83c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  dword *pdVar5;
  dword *pdVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  lVar8 = param_3;
  func_0x00780e80();
  if (lVar8 == 0) {
    puVar4 = PTR__OBJC_CLASS___SCFuture_00ac3590;
    puVar7 = (undefined8 *)PTR____NSArray0__struct_00999d10;
    func_0x007847a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___SCPromise_00ac2d30;
    _objc_opt_new();
    puStack_118 = &uStack_120;
    uStack_120 = 0;
    uStack_110 = 0x2020000000;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    lStack_108 = lVar8;
    func_0x0077f1a0();
    _objc_retainAutoreleasedReturnValue();
    do {
      puVar4 = PTR__OBJC_CLASS___NSNull_00ac2f90;
      func_0x00789b20(PTR__OBJC_CLASS___NSNull_00ac2f90);
      _objc_retainAutoreleasedReturnValue();
      func_0x0077e720(puVar2);
      _objc_release(puVar4);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    puVar3 = PTR_PTR_00ac2c00;
    _objc_opt_new();
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    _objc_retain(param_3);
    puVar7 = &uStack_160;
    lVar8 = param_3;
    func_0x00780ea0();
    if (lVar8 != 0) {
      lVar10 = *plStack_150;
      do {
        lVar11 = 0;
        do {
          if (*plStack_150 != lVar10) {
            _objc_enumerationMutation(param_3);
          }
          uVar9 = *(undefined8 *)(lStack_158 + lVar11 * 8);
          _objc_retain(puVar3);
          _objc_retain(puVar1);
          _objc_retain(puVar2);
          func_0x00793700(uVar9);
          _objc_release(puVar2);
          _objc_release(puVar1);
          _objc_release(puVar3);
          lVar11 = lVar11 + 1;
        } while (lVar8 != lVar11);
        puVar7 = &uStack_160;
        lVar8 = param_3;
        func_0x00780ea0();
      } while (lVar8 != 0);
    }
    _objc_release(param_3);
    puVar4 = puVar1;
    func_0x00783be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    __Block_object_dispose(&uStack_120,8);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  pdVar6 = &MACH_HEADER.cpusubtype;
  __Block_object_dispose(&uStack_120);
  __Unwind_Resume();
  _objc_retain(pdVar6);
  _objc_retain(puVar7);
  uVar9 = *(undefined8 *)(param_3 + 0x20);
  _objc_retainAutorelease(uVar9);
  func_0x0077dea0();
  _os_unfair_lock_lock();
  lVar8 = *(long *)(*(long *)(param_3 + 0x38) + 8);
  if (*(long *)(lVar8 + 0x18) != 0) {
    if (puVar7 == (undefined8 *)0x0) {
      pdVar5 = pdVar6;
      if (pdVar6 == (dword *)0x0) {
        pdVar5 = (dword *)PTR__OBJC_CLASS___NSNull_00ac2f90;
        func_0x00789b20(PTR__OBJC_CLASS___NSNull_00ac2f90);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x0078f460(*(undefined8 *)(param_3 + 0x30));
      if (pdVar6 == (dword *)0x0) {
        _objc_release(pdVar5);
      }
      lVar10 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      lVar8 = *(long *)(lVar10 + 0x18) + -1;
      *(long *)(lVar10 + 0x18) = lVar8;
      if (lVar8 == 0) {
        func_0x00780740(*(undefined8 *)(param_3 + 0x28));
      }
    }
    else {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      func_0x00780720(*(undefined8 *)(param_3 + 0x28));
    }
  }
  _os_unfair_lock_unlock(uVar9);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(pdVar6);
  return;
}



/* Entry: 0061fb14; end: 0061fc17;  */

void FUN_0061fb14(long param_1,undefined *param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retainAutorelease(uVar1);
  func_0x0077dea0();
  _os_unfair_lock_lock();
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  if (*(long *)(lVar3 + 0x18) != 0) {
    if (param_3 == 0) {
      puVar2 = param_2;
      if (param_2 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___NSNull_00ac2f90;
        func_0x00789b20(PTR__OBJC_CLASS___NSNull_00ac2f90);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x0078f460(*(undefined8 *)(param_1 + 0x30));
      if (param_2 == (undefined *)0x0) {
        _objc_release(puVar2);
      }
      lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      lVar3 = *(long *)(lVar4 + 0x18) + -1;
      *(long *)(lVar4 + 0x18) = lVar3;
      if (lVar3 == 0) {
        func_0x00780740(*(undefined8 *)(param_1 + 0x28));
      }
    }
    else {
      *(undefined8 *)(lVar3 + 0x18) = 0;
      func_0x00780720(*(undefined8 *)(param_1 + 0x28));
    }
  }
  _os_unfair_lock_unlock(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 0061fc18; end: 0061fde7; -[SCFuture map:] */

void FUN_0061fc18(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___SCFuture_00ac3590;
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_00ac2b00;
    func_0x00782e40(PTR__OBJC_CLASS___NSError_00ac2b00,param_2,
                    &PTR____CFConstantStringClassReference_00a47860,0x66,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00784780(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___SCPromise_00ac2d30;
    _objc_opt_new();
    puStack_60 = PTR___NSConcreteStackBlock_00999f30;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x61fd3c;
    puStack_48 = &UNK_00a0b2d8;
    puStack_40 = puVar1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    _objc_retain(puVar1);
    func_0x00793700(param_1,param_2,&puStack_60,0);
    puVar2 = puVar1;
    func_0x00783be0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_38);
    _objc_release(puStack_40);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0061fde8; end: 0062000b; -[SCFuture flatMap:] */

void FUN_0061fde8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___SCFuture_00ac3590;
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_00ac2b00;
    func_0x00782e40(PTR__OBJC_CLASS___NSError_00ac2b00,param_2,
                    &PTR____CFConstantStringClassReference_00a47860,0x66,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00784780(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___SCPromise_00ac2d30;
    _objc_opt_new();
    puStack_60 = PTR___NSConcreteStackBlock_00999f30;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x61ff0c;
    puStack_48 = &UNK_00a0b2d8;
    puStack_40 = puVar1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    _objc_retain(puVar1);
    func_0x00793700(param_1,param_2,&puStack_60,0);
    puVar2 = puVar1;
    func_0x00783be0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_38);
    _objc_release(puStack_40);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0062000c; end: 0062001f;  */

void FUN_0062000c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00780730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__00abaec0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00780750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__00abaec8,param_2);
  return;
}



/* Entry: 00620020; end: 00620067; +[SCLazyFuture withFetch:] */

void FUN_00620020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00785520();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 00620068; end: 006200e7; -[SCLazyFuture initWithFetch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_00620068(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac43f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s__init_00aba080);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5b2c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5b2c) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 006200e8; end: 006201db; -[SCLazyFuture valueWithCompletion:performer:preferSynchronous:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006200e8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_00ac43f0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_valueWithCompletion_performer_pr_00abfad8);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar3 = (long)_DAT_00ac5b2c;
  lVar1 = *(long *)(param_1 + lVar3);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (lVar1 != 0) {
    _objc_retain(param_1);
    puStack_68 = PTR___NSConcreteStackBlock_00999f30;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_006201dc;
    puStack_50 = &UNK_00a0b308;
    pcVar4 = *(code **)(lVar1 + 0x10);
    lStack_48 = param_1;
    _objc_retain(param_1);
    (*pcVar4)(lVar1,&puStack_68);
    _objc_release(lStack_48);
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 006201dc; end: 006201ef;  */

void FUN_006201dc(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077c410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__completeWithError__00ab9df8,param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077c470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__completeWithValue__00ab9e10);
  return;
}



/* Entry: 006201f0; end: 00620203; -[SCLazyFuture .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006201f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac5b2c,0);
  return;
}



/* Entry: 00620204; end: 0062020b; -[SCPromise init] */

void FUN_00620204(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007858b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithIgnoreRedundantCompletio_00abc330,0);
  return;
}



/* Entry: 0062020c; end: 0062027b; -[SCPromise initWithIgnoreRedundantCompletions:] */

undefined1 * FUN_0062020c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR__OBJC_CLASS___SCPromise_00ac43f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 0x10) = param_3;
    puVar2 = PTR__OBJC_CLASS___SCFuture_00ac3590;
    _objc_alloc();
    func_0x0077ce20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0062027c; end: 006202c3; -[SCPromise dealloc] */

void FUN_0062027c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x0077c9e0(*(undefined8 *)(param_1 + 8));
  puStack_28 = PTR__OBJC_CLASS___SCPromise_00ac43f8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 006202c4; end: 006202eb; -[SCPromise future] */

void FUN_006202c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 006202ec; end: 006202fb; -[SCPromise completeWithValue:] */

void FUN_006202ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077c490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 8),PTR_s__completeWithValue_ignoreRedunda_00ab9e18,param_3,
             *(undefined1 *)(param_1 + 0x10));
  return;
}



/* Entry: 006202fc; end: 0062030b; -[SCPromise completeWithError:] */

void FUN_006202fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077c430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 8),PTR_s__completeWithError_ignoreRedunda_00ab9e00,param_3,
             *(undefined1 *)(param_1 + 0x10));
  return;
}



/* Entry: 0062030c; end: 00620317; -[SCPromise .cxx_destruct] */

void FUN_0062030c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}


