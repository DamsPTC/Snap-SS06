/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106be8e4c; end: 106be8e9b; -[SCSpectaclesBoomboxViewController boomboxMediaCellDidLoadFirstFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be8e4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11275a7a0) = 0;
  if (*(char *)(param_1 + _DAT_11275a79c) == '\x01') {
    func_0x00010c137fe0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bec1250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__startPressAndHoldTimerWithDelay_11258de38,0);
    return;
  }
  return;
}



/* Entry: 106be8e9c; end: 106be8f2b; -[SCSpectaclesBoomboxViewController boomboxMediaCell:didReceiveError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be8e9c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_11275a7a0);
  if (lVar3 < 3) {
    *(long *)(param_1 + _DAT_11275a7a0) = lVar3 + 1;
    puVar1 = PTR_PTR_1126c9e68;
    _objc_alloc();
    func_0x00010c037060();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11275a778);
    *(undefined **)(param_1 + _DAT_11275a778) = puVar1;
    _objc_release(uVar2);
    func_0x00010bdc51a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fea80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106be8f2c; end: 106be8f6f; -[SCSpectaclesBoomboxViewController _stopPressAndHoldTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be8f2c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275a7a4;
  if (*(long *)(param_1 + lVar2) != 0) {
    _dispatch_source_cancel();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106be8f70; end: 106be908f; -[SCSpectaclesBoomboxViewController _startPressAndHoldTimerWithDelayApplied:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be8f70(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010bec36e0();
  if (*(char *)(param_1 + _DAT_11275a79c) == '\x01') {
    puVar1 = PTR___dispatch_source_type_timer_11034be38;
    _dispatch_source_create
              (PTR___dispatch_source_type_timer_11034be38,0,0,PTR___dispatch_main_q_11034be20);
    lVar5 = (long)_DAT_11275a7a4;
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    uVar3 = 0;
    if (param_3 == 0) {
      uVar3 = 500000000;
    }
    uVar2 = 0;
    _dispatch_time(0,uVar3);
    _dispatch_source_set_timer(uVar4,uVar2,500000000,0);
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106be9090;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    _dispatch_source_set_event_handler(uVar3,&puStack_60);
    _dispatch_resume(*(undefined8 *)(param_1 + lVar5));
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 106be9090; end: 106be90cb;  */

void FUN_106be9090(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bec36e0(param_1);
    func_0x00010be24320(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106be90cc; end: 106be915b; -[SCSpectaclesBoomboxViewController _goToNext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be90cc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(param_1 + _DAT_11275a788);
  func_0x00010bfed1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0840e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar4 = *(ulong *)(param_1 + _DAT_11275a794);
  func_0x00010bf529e0();
  lVar2 = 0;
  if (lVar3 + 1U < uVar4) {
    lVar2 = lVar3 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be614d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__moveToIndex__112575ed0,lVar2);
  return;
}



/* Entry: 106be915c; end: 106be91df; -[SCSpectaclesBoomboxViewController _goToPrevious] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be915c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_11275a788);
  func_0x00010bfed1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0840e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (0 < lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010be614d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__moveToIndex__112575ed0,lVar3 + -1);
    return;
  }
  return;
}



/* Entry: 106be91e0; end: 106be9277; -[SCSpectaclesBoomboxViewController _moveToIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be91e0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (-1 < (long)param_3) {
    uVar1 = *(ulong *)(param_1 + _DAT_11275a794);
    func_0x00010bf529e0();
    if (param_3 < uVar1) {
      *(ulong *)(param_1 + _DAT_11275a770) = param_3;
      uVar3 = *(undefined8 *)(param_1 + _DAT_11275a788);
      puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,param_3,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1525a0(uVar3,param_2,puVar2,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
  return;
}



/* Entry: 106be9278; end: 106be92cf; -[SCSpectaclesBoomboxViewController didFinishWithScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be9278(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + _DAT_11275a784;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12e1e0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106be92d0; end: 106be92ef; -[SCSpectaclesBoomboxViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be92d0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275a798);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106be92f0; end: 106be9303; -[SCSpectaclesBoomboxViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be92f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275a798,param_3);
  return;
}



/* Entry: 106be9304; end: 106be945b; -[SCSpectaclesBoomboxViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106be9304(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275a798);
  _objc_storeStrong(param_1 + _DAT_11275a77c,0);
  _objc_storeStrong(param_1 + _DAT_11275a768,0);
  _objc_storeStrong(param_1 + _DAT_11275a7a4,0);
  _objc_storeStrong(param_1 + _DAT_11275a790,0);
  _objc_storeStrong(param_1 + _DAT_11275a78c,0);
  _objc_storeStrong(param_1 + _DAT_11275a764,0);
  _objc_storeStrong(param_1 + _DAT_11275a76c,0);
  _objc_storeStrong(param_1 + _DAT_11275a794,0);
  _objc_storeStrong(param_1 + _DAT_11275a760,0);
  _objc_storeStrong(param_1 + _DAT_11275a75c,0);
  _objc_storeStrong(param_1 + _DAT_11275a758,0);
  _objc_storeStrong(param_1 + _DAT_11275a778,0);
  _objc_destroyWeak(param_1 + _DAT_11275a784);
  _objc_storeStrong(param_1 + _DAT_11275a780,0);
  _objc_storeStrong(param_1 + _DAT_11275a754,0);
  _objc_storeStrong(param_1 + _DAT_11275a750,0);
  _objc_storeStrong(param_1 + _DAT_11275a74c,0);
  _objc_storeStrong(param_1 + _DAT_11275a748,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275a788,0);
  return;
}



/* Entry: 106be945c; end: 106be95c7; -[SCSpectaclesBoomboxSnapViewSession initWithSessionId:snap:overlay:entryId:memoriesLogger:spectaclesLogger:spectaclesDevice:viewSource:pageHeight:] */

undefined1 *
FUN_106be945c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f5998;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_10;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x58) = param_11;
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106be95c8; end: 106be95eb; -[SCSpectaclesBoomboxSnapViewSession startSession] */

void FUN_106be95c8(undefined8 param_1,long param_2)

{
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 106be95ec; end: 106be9613; -[SCSpectaclesBoomboxSnapViewSession endSession] */

void FUN_106be95ec(undefined8 param_1,long param_2)

{
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010be52b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__logEvent_112572480);
  return;
}



/* Entry: 106be9614; end: 106be961f; -[SCSpectaclesBoomboxSnapViewSession elapsedTime] */

double FUN_106be9614(long param_1)

{
  return *(double *)(param_1 + 0x10) - *(double *)(param_1 + 8);
}



/* Entry: 106be9620; end: 106be968b; -[SCSpectaclesBoomboxSnapViewSession fileType] */

undefined8 FUN_106be9620(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
  func_0x00010b5fa528();
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x40);
    func_0x00010b5fa088();
    if ((lVar2 - 1U < 0xc) && ((0xab3U >> (ulong)((uint)(lVar2 - 1U) & 0x1f) & 1) != 0)) {
      return 5;
    }
    uVar3 = *(ulong *)(param_1 + 0x40);
    func_0x00010b5fa088();
    func_0x00010b5fa4c8();
    if ((uVar3 & 1) != 0) {
      return 6;
    }
  }
  return 0xffffffffffffffff;
}



/* Entry: 106be968c; end: 106be96c7; -[SCSpectaclesBoomboxSnapViewSession deviceId] */

void FUN_106be968c(long param_1)

{
  if (*(long *)(param_1 + 0x18) == 0) {
    func_0x00010bf70720(*(undefined8 *)(param_1 + 0x40));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c15e740();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106be96c8; end: 106be972f; -[SCSpectaclesBoomboxSnapViewSession firmwareVersion] */

void FUN_106be96c8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x40);
    func_0x00010bf704c0(lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfb0d20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106be9730; end: 106be9783; -[SCSpectaclesBoomboxSnapViewSession hardwareVersion] */

void FUN_106be9730(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106be9784; end: 106be9793; -[SCSpectaclesBoomboxSnapViewSession deviceColor] */

void FUN_106be9784(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf40c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x18),PTR_s_color_1125adcb8);
    return;
  }
  return;
}



/* Entry: 106be9794; end: 106be993b; -[SCSpectaclesBoomboxSnapViewSession _logEvent] */

void FUN_106be9794(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c094a20();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010bf8d0e0(param_2);
  lVar5 = param_2;
  func_0x00010bfad120(param_2);
  lVar6 = param_2;
  func_0x00010bf70720(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  func_0x00010bfb0d20(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_2;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2;
  func_0x00010bf700a0();
  func_0x00010c0a1c80(param_1,uVar1,param_3,uVar2,uVar4,uVar10,lVar5,lVar6,lVar7,lVar8,lVar9,
                      *(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x58));
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010bf8d0e0(param_2);
  func_0x00010c0a1c60(uVar2,param_3,uVar4,uVar1,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106be993c; end: 106be9943; -[SCSpectaclesBoomboxSnapViewSession snap] */

undefined8 FUN_106be993c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106be9944; end: 106be994b; -[SCSpectaclesBoomboxSnapViewSession overlay] */

undefined8 FUN_106be9944(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106be994c; end: 106be9953; -[SCSpectaclesBoomboxSnapViewSession entryId] */

undefined8 FUN_106be994c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106be9954; end: 106be995b; -[SCSpectaclesBoomboxSnapViewSession viewSource] */

undefined8 FUN_106be9954(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106be995c; end: 106be99c7; -[SCSpectaclesBoomboxSnapViewSession .cxx_destruct] */

void FUN_106be995c(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106be99c8; end: 106be9abf; -[SCSpectaclesBoomboxStoryViewSession initWithEntryId:sessionId:spectaclesLogger:viewSource:] */

undefined1 *
FUN_106be99c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f59a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106be9ac0; end: 106be9ac7; -[SCSpectaclesBoomboxStoryViewSession addSnapViewSession:] */

void FUN_106be9ac0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_addObject__11259c1f0)
  ;
  return;
}



/* Entry: 106be9ac8; end: 106be9ceb; -[SCSpectaclesBoomboxStoryViewSession endSession] */

void FUN_106be9ac8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar8 = 0.0;
  lVar5 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  if (lVar1 == 0) {
    dVar10 = 0.0;
  }
  else {
    dVar10 = 0.0;
    do {
      lVar7 = 0;
      do {
        dVar9 = dVar8;
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar5);
          dVar9 = dVar8;
        }
        lVar6 = *(long *)(lVar7 * 8);
        func_0x00010bf8d0e0(lVar6);
        dVar8 = dVar9;
        func_0x00010bfad120();
        if (lVar6 != 5) {
          func_0x00010bfad120();
        }
        dVar10 = dVar10 + dVar9;
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar5;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar5);
  lVar7 = *(long *)(param_1 + 0x18);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010bf70720(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010bfb0d20(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar7;
  func_0x00010bfd38e0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf700a0();
  func_0x00010c0a1ca0(dVar10,uVar2);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(lVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    _objc_storeStrong(lVar7 + 0x20,0);
    _objc_storeStrong(lVar7 + 0x18,0);
    _objc_storeStrong(lVar7 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(lVar7 + 8,0);
    return;
  }
  return;
}



/* Entry: 106be9cec; end: 106be9d33; -[SCSpectaclesBoomboxStoryViewSession .cxx_destruct] */

void FUN_106be9cec(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106be9d34; end: 106be9e47; -[SCSpectaclesBoomboxViewingMetricsSession initWithSpectaclesLogger:spectaclesManager:memoriesLogger:viewSource:] */

undefined1 *
FUN_106be9d34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f59a8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106be9e48; end: 106bea08f; -[SCSpectaclesBoomboxViewingMetricsSession startSnapViewSession:overlay:entryId:pageHeight:] */

void FUN_106be9e48(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c089820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf953c0();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_2 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar11 = lVar3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  if (lVar11 == 0) {
    uVar1 = 0;
  }
  else {
    do {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar3);
        }
        uVar1 = *(undefined8 *)(lVar12 * 8);
        uVar4 = uVar1;
        func_0x00010c15e740();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_4;
        func_0x00010bf70720();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        func_0x00010c0720c0();
        _objc_release(lVar5);
        _objc_release(uVar4);
        if ((int)uVar6 != 0) {
          _objc_retain(uVar1);
          goto LAB_106be9fdc;
        }
        lVar12 = lVar12 + 1;
      } while (lVar11 != lVar12);
      lVar11 = lVar3;
      func_0x00010bf52a60();
    } while (lVar11 != 0);
    uVar1 = 0;
  }
LAB_106be9fdc:
  _objc_release(lVar3);
  puVar7 = PTR_PTR_1126d1400;
  _objc_alloc();
  func_0x00010c045220(param_1);
  func_0x00010c250840();
  func_0x00010befa120(*(undefined8 *)(param_2 + 0x20));
  _objc_release(puVar7);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_4 + 0x20);
  func_0x00010c089820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf953c0();
  _objc_release(uVar1);
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar10 = *(long *)(param_4 + 0x20);
  _objc_retain(lVar10);
  lVar2 = lVar10;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar10);
      }
      uVar1 = *(undefined8 *)(lVar12 * 8);
      func_0x00010bf97200(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar8 == (undefined *)0x0) {
        puVar8 = PTR_PTR_1126d1408;
        _objc_alloc(PTR_PTR_1126d1408);
        func_0x00010c0102c0();
        func_0x00010c1d0640(puVar7);
      }
      func_0x00010befb6e0(puVar8);
      _objc_release(puVar8);
      _objc_release(uVar1);
      lVar12 = lVar12 + 1;
    } while (lVar2 != lVar12);
    lVar2 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  puVar9 = puVar7;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar9;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (puVar8 != (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar9);
      }
      func_0x00010bf953c0(*(undefined8 *)((long)puVar13 * 8));
      puVar13 = puVar13 + 1;
    } while (puVar8 != puVar13);
    puVar8 = puVar9;
    func_0x00010bf52a60();
  }
  _objc_release(puVar9);
  func_0x00010c12adc0(*(undefined8 *)(param_4 + 0x20));
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar7 + 0x28,0);
  _objc_storeStrong(puVar7 + 0x20,0);
  _objc_storeStrong(puVar7 + 0x18,0);
  _objc_storeStrong(puVar7 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar7 + 8,0);
  return;
}



/* Entry: 106bea090; end: 106bea2e3; -[SCSpectaclesBoomboxViewingMetricsSession endSession] */

void FUN_106bea090(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c089820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf953c0();
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar8 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar8);
  lVar4 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar8);
      }
      uVar2 = *(undefined8 *)(lVar10 * 8);
      func_0x00010bf97200(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 == (undefined *)0x0) {
        puVar5 = PTR_PTR_1126d1408;
        _objc_alloc(PTR_PTR_1126d1408);
        func_0x00010c0102c0();
        func_0x00010c1d0640(puVar3);
      }
      func_0x00010befb6e0(puVar5);
      _objc_release(puVar5);
      _objc_release(uVar2);
      lVar10 = lVar10 + 1;
    } while (lVar4 != lVar10);
    lVar4 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  puVar6 = puVar3;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(puVar6);
      }
      func_0x00010bf953c0(*(undefined8 *)((long)puVar9 * 8));
      puVar9 = puVar9 + 1;
    } while (puVar5 != puVar9);
    puVar5 = puVar6;
    func_0x00010bf52a60();
  }
  _objc_release(puVar6);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar3 + 0x28,0);
  _objc_storeStrong(puVar3 + 0x20,0);
  _objc_storeStrong(puVar3 + 0x18,0);
  _objc_storeStrong(puVar3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar3 + 8,0);
  return;
}



/* Entry: 106bea2e4; end: 106bea337; -[SCSpectaclesBoomboxViewingMetricsSession .cxx_destruct] */

void FUN_106bea2e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bea338; end: 106beab2b; -[SCSpectaclesCustomExportEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bea338(ulong param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined **ppuVar21;
  long lVar22;
  undefined **ppuVar23;
  undefined *puVar24;
  ulong *puVar25;
  long lVar26;
  undefined *puVar27;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  ulong uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar26 = (long)_DAT_11275a800;
  lVar22 = param_1 + lVar26;
  _objc_loadWeakRetained(lVar22);
  lVar2 = lVar22;
  func_0x00010bf00920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bde4140();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (ulong *)(param_1 + (long)_DAT_11275a804);
  uVar20 = *puVar1;
  *puVar1 = uVar3;
  _objc_release(uVar20);
  _objc_release(lVar2);
  _objc_release(lVar22);
  puVar25 = puVar1;
  if (*puVar1 == 0) {
    lVar22 = param_1 + lVar26;
    _objc_loadWeakRetained(lVar22);
    lVar2 = lVar22;
    func_0x00010bf00920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010be0c740();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = (ulong *)(param_1 + (long)_DAT_11275a80c);
    uVar20 = *puVar25;
    *puVar25 = uVar3;
    _objc_release(uVar20);
    _objc_release(lVar2);
    _objc_release(lVar22);
  }
  lVar22 = param_1 + (long)_DAT_11275a808;
  _objc_loadWeakRetained(lVar22);
  lVar2 = lVar22;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067f80();
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar22);
  uVar20 = *puVar25;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecde0();
  _objc_release(puVar5);
  uVar6 = *puVar25;
  func_0x00010bf529e0();
  uVar3 = 0;
  if (uVar20 <= uVar6) {
    uVar3 = uVar20;
  }
  lVar22 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar2 = lVar22;
  func_0x00010bf00920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(lVar22);
  ppuVar23 = (undefined **)0x0;
  if (lVar4 == 1) {
    ppuVar21 = (undefined **)(param_1 + lVar26);
    _objc_loadWeakRetained();
    ppuVar7 = ppuVar21;
    func_0x00010bf00920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar23 = ppuVar8;
    func_0x000107fdccc8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar21);
  }
  ppuVar21 = (undefined **)(long)_DAT_11275a810;
  _objc_retain(ppuVar23);
  uVar9 = *(undefined8 *)(param_1 + (long)ppuVar21);
  *(undefined ***)(param_1 + (long)ppuVar21) = ppuVar23;
  _objc_release(uVar9);
  if (*puVar1 == 0) {
    func_0x00010beb8880(param_1);
    ppuVar7 = ppuVar23;
    goto LAB_106beaab0;
  }
  lVar22 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar2 = lVar22;
  func_0x00010c1599e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf529e0();
  if (lVar4 == 1) {
    lVar4 = param_1 + lVar26;
    _objc_loadWeakRetained();
    lVar10 = lVar4;
    func_0x00010c15a0a0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010bf529e0();
    _objc_release(lVar10);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar22);
    if (lVar11 != 0) goto LAB_106bea740;
    lVar22 = param_1 + (long)_DAT_11275a830;
    _objc_loadWeakRetained();
    lVar10 = lVar22;
    func_0x00010c0c7ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + lVar26;
    _objc_loadWeakRetained(lVar2);
    lVar12 = lVar2;
    func_0x00010c1599e0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + lVar26;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c2917c0();
    lVar14 = lVar11;
    func_0x00010bef1780();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_88 = lVar14;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    _objc_release(lVar4);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar2);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar22);
    ppuVar21 = &PTR_PTR_110a0c3b8;
  }
  else {
    _objc_release(lVar2);
    _objc_release(lVar22);
LAB_106bea740:
    puVar5 = (undefined *)(param_1 + (long)_DAT_11275a830);
    _objc_loadWeakRetained();
    puVar15 = puVar5;
    func_0x00010c0c7ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
    lVar22 = param_1 + lVar26;
    _objc_loadWeakRetained(lVar22);
    lVar10 = lVar22;
    func_0x00010c1599e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ecd40(puVar27);
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR__OBJC_CLASS___NSSet_1126ae870;
    lVar2 = param_1 + lVar26;
    _objc_loadWeakRetained(lVar2);
    lVar11 = lVar2;
    func_0x00010c15a0a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar24);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + lVar26;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c2917c0();
    puVar17 = puVar16;
    func_0x00010bef18c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(puVar24);
    _objc_release(lVar11);
    _objc_release(lVar2);
    _objc_release(puVar27);
    _objc_release(lVar10);
    _objc_release(lVar22);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar5);
    ppuVar21 = &PTR_PTR_110a0c3b0;
  }
  puVar24 = *ppuVar21;
  _objc_retain(puVar24);
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(puVar17);
  puVar5 = puVar17;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    lVar22 = *plStack_140;
    do {
      puVar27 = (undefined *)0x0;
      do {
        if (*plStack_140 != lVar22) {
          _objc_enumerationMutation(puVar17);
        }
        uVar9 = *(undefined8 *)(lStack_148 + (long)puVar27 * 8);
        lVar2 = param_1 + (long)_DAT_11275a814;
        _objc_loadWeakRetained(lVar2);
        func_0x00010c207660(uVar9);
        _objc_release(lVar2);
        puVar27 = puVar27 + 1;
      } while (puVar5 != puVar27);
      puVar5 = puVar17;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar17);
  _objc_initWeak(auStack_158,param_1);
  uVar20 = param_1;
  func_0x000106beab50(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar20;
  func_0x00010c0c7d00();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar6;
  func_0x00010bef14a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + lVar26;
  _objc_loadWeakRetained(lVar26);
  lVar22 = lVar26;
  func_0x00010bfbb120();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_106beab74;
  puStack_168 = &UNK_1108434b0;
  _objc_copyWeak(auStack_160,auStack_158);
  puStack_1c0 = puVar5;
  uStack_1b8 = 0xc2000000;
  pcStack_1b0 = FUN_106beabb0;
  puStack_1a8 = &UNK_110967100;
  _objc_retain(puVar24);
  ppuVar21 = &puStack_1c0;
  puStack_1a0 = puVar24;
  _objc_copyWeak(auStack_190,auStack_158);
  uStack_188 = uVar3;
  _objc_retain(puVar17);
  puStack_198 = puVar17;
  func_0x00010c10f2c0(uVar19);
  _objc_release(lVar22);
  _objc_release(lVar26);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar6);
  _objc_release(uVar20);
  _objc_release(puStack_198);
  _objc_destroyWeak(auStack_190);
  _objc_release(puStack_1a0);
  _objc_destroyWeak(auStack_160);
  _objc_destroyWeak(auStack_158);
  _objc_release(puVar24);
  _objc_release(puVar17);
  ppuVar7 = &puStack_180;
LAB_106beaab0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(ppuVar21 + 6);
    _objc_destroyWeak(ppuVar7 + 4);
    _objc_destroyWeak(auStack_158);
    __Unwind_Resume();
    if (ppuVar23 != (undefined **)0x0) {
      _objc_loadWeakRetained((long)ppuVar23 + (long)_DAT_11275a830);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 106beab2c; end: 106beab73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106beab2c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275a830);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106beab74; end: 106beabaf;  */

void FUN_106beab74(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc53c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106beabb0; end: 106bead5f;  */

void FUN_106beabb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c0720c0();
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (iVar1 == 0) {
    lVar3 = lVar2;
    func_0x000106beab50();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0c7d00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bef14a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,param_1 + 0x30);
    func_0x00010bf9d300(lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_68);
  }
  else {
    func_0x00010beb8880(lVar2);
    _objc_release(lVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 106bead60; end: 106beadc3;  */

void FUN_106bead60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc53c0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106beadc4; end: 106beaff7; -[SCSpectaclesCustomExportEntryPoint _showCustomExportWithDefaultOptionIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106beadc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  lVar1 = param_1 + _DAT_11275a818;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf027a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11275a800;
  lVar4 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c2917c0();
  func_0x00010b5f57a8();
  func_0x00010c0a4400(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_68,param_1);
  lVar1 = param_1 + _DAT_11275a81c;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010bf27760();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar6;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bf00920();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_70 = param_3;
  func_0x00010c134d00(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 106beaff8; end: 106beb1bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106beaff8(long param_1,undefined *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == (undefined *)0x0) {
      param_2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      _objc_alloc_init(PTR__OBJC_CLASS___UIImage_1126aea68);
    }
    lVar2 = *(long *)(lVar1 + _DAT_11275a820);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = lVar1 + _DAT_11275a800;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x00010bf00920();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x000109023acc();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      lVar2 = lVar1;
      if (*(long *)(lVar1 + _DAT_11275a804) == 0) {
        func_0x00010bee98a0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bee9920();
        _objc_retainAutoreleasedReturnValue();
      }
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_106beb1bc;
      puStack_70 = &UNK_110842a68;
      _objc_copyWeak(auStack_60,param_1 + 0x20);
      _objc_retain(lVar2);
      uStack_58 = *(undefined8 *)(param_1 + 0x28);
      lStack_68 = lVar2;
      func_0x000100162d98("APPSTORE",&puStack_88);
      _objc_release(lStack_68);
      _objc_destroyWeak(auStack_60);
      _objc_release(lVar2);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106beb1bc; end: 106beb2f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106beb1bc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d1410;
    _objc_alloc(PTR_PTR_1126d1410);
    lVar10 = (long)_DAT_11275a800;
    lVar3 = lVar1 + lVar10;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    lVar5 = lVar1 + lVar10;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c26df80();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1 + lVar10;
    _objc_loadWeakRetained(lVar10);
    lVar7 = lVar10;
    func_0x00010bf00920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056a80(puVar2,param_2,lVar4,lVar1,uVar9,uVar8,lVar6,lVar7);
    _objc_release(lVar7);
    _objc_release(lVar10);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + _DAT_11275a820),param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106beb2f8; end: 106beb413; -[SCSpectaclesCustomExportEntryPoint spectaclesCustomExportUIScope:didShareWithOptionAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106beb2f8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11275a820;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == param_3) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c12e1c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = param_4;
    func_0x00010c2a4ae0(uVar2);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106beb414; end: 106beb5cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106beb414(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010be1ba00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010beb4aa0();
    _objc_initWeak(auStack_68,param_1);
    lVar3 = param_1 + _DAT_11275a828;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c0c7d00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bef14a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_11275a800;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010bfbb120();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_68);
    uStack_70 = (undefined1)lVar2;
    func_0x00010c10f0e0(lVar6);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 106beb5d0; end: 106beb63b;  */

void FUN_106beb5d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc53c0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106beb63c; end: 106beb7ef; -[SCSpectaclesCustomExportEntryPoint spectaclesCustomExportUIScope:didSaveWithOptionAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106beb63c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11275a820;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == param_3) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar5));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010be1ba00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010beb4aa0();
    _objc_initWeak(auStack_58,param_1);
    param_1 = param_1 + _DAT_11275a828;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c0c7d00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bef14a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,auStack_58);
    uStack_60 = (undefined1)lVar5;
    func_0x00010c14b460(lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106beb7f0; end: 106beb85b;  */

void FUN_106beb7f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc53c0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106beb85c; end: 106beb9df; -[SCSpectaclesCustomExportEntryPoint spectaclesCustomExportUIScopeDidCancel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106beb85c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = (long)_DAT_11275a820;
  lVar5 = *(long *)(param_1 + lVar7);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar5);
  if (lVar5 != param_3) {
    return;
  }
  lVar5 = param_1 + _DAT_11275a818;
  _objc_loadWeakRetained(lVar5);
  lVar1 = lVar5;
  func_0x00010bf027a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11275a810);
  lVar8 = (long)_DAT_11275a800;
  lVar3 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c2917c0();
  func_0x00010b5f57a8();
  func_0x00010c0a43c0(lVar2,param_2,uVar6,lVar4,0);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar5);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar7));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar5 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar5);
  lVar7 = lVar5;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf614a0(lVar7,param_2,param_1,0,1,0,0);
  _objc_release(param_1);
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 106beb9e0; end: 106beba37; -[SCSpectaclesCustomExportEntryPoint _shouldOpenYoutubeWithOptionAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106beb9e0(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_11275a80c);
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067fc0();
    bVar1 = lVar3 == 7;
    _objc_release(lVar2);
  }
  return bVar1;
}



/* Entry: 106beba38; end: 106bebc83; -[SCSpectaclesCustomExportEntryPoint _generateProvidersWithOptionAtIndex:isDirectSave:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106beba38(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  long lVar13;
  
  lVar2 = *(long *)(param_1 + _DAT_11275a804);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + _DAT_11275a80c);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067fc0();
    _objc_release(lVar2);
    lVar2 = param_1 + _DAT_11275a808;
    _objc_loadWeakRetained(lVar2);
    lVar4 = lVar2;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1add40();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    lVar13 = (long)_DAT_11275a800;
    lVar2 = param_1 + lVar13;
    _objc_loadWeakRetained();
    lVar5 = lVar2;
    func_0x00010c15a0a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf529e0();
    lVar4 = param_1 + lVar13;
    _objc_loadWeakRetained();
    lVar7 = lVar4;
    func_0x00010c1599e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf529e0();
    _objc_release(lVar7);
    _objc_release(lVar4);
    _objc_release(lVar5);
    _objc_release(lVar2);
    if ((lVar3 == 7) || ((bVar12 = false, param_4 != 0 && (lVar8 + lVar6 == 1)))) {
      uVar9 = param_1 + lVar13;
      _objc_loadWeakRetained(uVar9);
      uVar10 = uVar9;
      func_0x00010bf00920();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010bf529e0();
      bVar12 = 1 < uVar11;
      _objc_release(uVar10);
      _objc_release(uVar9);
    }
    iVar1 = 0;
    if (lVar3 == 7) {
      iVar1 = param_4;
    }
    func_0x00010be83b80(param_1,param_2,lVar3,bVar12,iVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c067fc0();
    _objc_release(lVar2);
    lVar2 = param_1 + _DAT_11275a808;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1add40();
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010be83b60(param_1,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bebc84; end: 106bebe2b; -[SCSpectaclesCustomExportEntryPoint _activityControllerSucceeded:cancelled:uploadToYouTube:activityType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bebc84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,undefined8 param_6)

{
  int iVar1;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar2;
  
  uVar2 = param_6;
  _objc_retain();
  iVar1 = (int)uVar2;
  if ((((int)param_3 != 0) && (param_5 != 0)) && (func_0x000108545068(), iVar1 != 0)) {
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000108545054();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e9b80(puVar3,param_2,puVar4,PTR____NSDictionary0__struct_11034ab58,0);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  lVar8 = (long)_DAT_11275a800;
  if (((int)param_4 != 0) && ((int)param_3 == 0)) {
    lVar5 = param_1 + lVar8;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c2917c0();
    func_0x00010b5f57a8();
    _objc_release(lVar5);
    lVar5 = param_1 + _DAT_11275a818;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010bf027a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a43c0();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  lVar5 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf614a0(lVar6,param_2,param_1,param_3,param_4,0,param_6);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 106bebe2c; end: 106bebf7b; -[SCSpectaclesCustomExportEntryPoint _providersFromCompositionMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bebe2c(undefined **param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined ***pppuVar19;
  undefined4 uVar20;
  undefined *puStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined **ppuStack_160;
  undefined ***pppuStack_158;
  undefined **ppuStack_150;
  long lStack_148;
  undefined **ppuStack_140;
  long lStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined **ppuStack_108;
  undefined ***pppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined1 *puStack_e8;
  undefined4 uStack_dc;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  long lStack_c8;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  pppuVar10 = &ppuStack_60;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = param_1;
  FUN_106beab2c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar13;
  func_0x00010c0c7ce0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_11275a800;
  lVar17 = (long)param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar16 = lVar17;
  func_0x00010bf00920();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar4 = lVar18;
  func_0x00010c2917c0();
  ppuVar5 = ppuVar3;
  func_0x00010bef17c0(ppuVar3,param_2,lVar16,lVar4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = (undefined **)0x1;
  ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_60 = ppuVar5;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  _objc_release(lVar18);
  _objc_release(lVar16);
  _objc_release(lVar17);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_68 = FUN_106bebf7c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = (long)_DAT_11275a800;
  lVar17 = (long)ppuVar13 + lVar16;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bf8c640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar17);
  uVar20 = SUB84(param_3,0);
  if (lVar18 == 0) {
    lVar17 = (long)ppuVar13 + lVar16;
    _objc_loadWeakRetained();
    lVar18 = lVar17;
    func_0x00010bf8c5c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar17);
    ppuVar2 = ppuVar13;
    FUN_106beab2c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar2;
    func_0x00010c0c7ce0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_f0 = ppuVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar19 = (undefined ***)((long)ppuVar13 + lVar16);
    ppuStack_f8 = ppuVar6;
    _objc_loadWeakRetained();
    pppuStack_100 = pppuVar19;
    if (lVar18 != 0) {
      func_0x00010bf8c5c0();
      _objc_retainAutoreleasedReturnValue();
      param_3 = (undefined1 *)((long)ppuVar13 + (long)_DAT_11275a824);
      _objc_loadWeakRetained();
      puVar7 = param_3;
      puStack_e8 = (undefined1 *)pppuVar10;
      uStack_dc = uVar20;
      func_0x00010c08f100();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      ppuStack_108 = ppuVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf5f400();
      lVar17 = (long)ppuVar13 + lVar16;
      _objc_loadWeakRetained();
      lVar18 = lVar17;
      func_0x00010c1109c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = (undefined **)((long)ppuVar13 + lVar16);
      _objc_loadWeakRetained();
      ppuVar3 = ppuVar13;
      func_0x00010bf42a00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuStack_f8;
      ppuVar2 = ppuStack_f8;
      func_0x00010bef1820(ppuStack_f8,param_2,pppuVar19,puVar9,lVar18,ppuVar3,puStack_e8,uStack_dc);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      _objc_release(ppuVar13);
      _objc_release(lVar18);
      _objc_release(lVar17);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(param_3);
      _objc_release(pppuVar19);
      _objc_release(pppuStack_100);
      _objc_release(ppuVar12);
      _objc_release(ppuStack_f0);
      _objc_release(ppuStack_108);
      pppuVar11 = &ppuStack_d8;
      ppuStack_d8 = ppuVar2;
      goto LAB_106bec2f8;
    }
    func_0x00010c1599e0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = (long)ppuVar13 + lVar16;
    _objc_loadWeakRetained();
    lVar18 = lVar17;
    func_0x00010c15a0a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = (undefined **)((long)ppuVar13 + lVar16);
    _objc_loadWeakRetained();
    func_0x00010c2917c0();
    ppuVar3 = ppuStack_f8;
    ppuVar6 = ppuStack_f8;
    pppuVar11 = pppuVar19;
    func_0x00010bef18e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar13);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(pppuVar19);
    _objc_release(pppuStack_100);
    _objc_release(ppuVar3);
    _objc_release(ppuStack_f0);
  }
  else {
    ppuVar12 = ppuVar13;
    FUN_106beab2c();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_f0 = ppuVar12;
    func_0x00010c0c7ce0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_f8 = ppuVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar19 = (undefined ***)((long)ppuVar13 + lVar16);
    _objc_loadWeakRetained();
    pppuStack_100 = pppuVar19;
    func_0x00010bf8c640();
    _objc_retainAutoreleasedReturnValue();
    param_3 = (undefined1 *)((long)ppuVar13 + (long)_DAT_11275a824);
    _objc_loadWeakRetained();
    puVar7 = param_3;
    puStack_e8 = (undefined1 *)pppuVar10;
    uStack_dc = uVar20;
    func_0x00010c08f100();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf5f400();
    lVar17 = (long)ppuVar13 + lVar16;
    _objc_loadWeakRetained();
    lVar18 = lVar17;
    func_0x00010c1109c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = (undefined **)((long)ppuVar13 + lVar16);
    _objc_loadWeakRetained();
    ppuVar3 = ppuVar13;
    func_0x00010bf42a00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar12;
    func_0x00010bef1840(ppuVar12,param_2,pppuVar19,puVar9,lVar18,ppuVar3,puStack_e8,uStack_dc);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_release(ppuVar13);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(param_3);
    _objc_release(pppuVar19);
    _objc_release(pppuStack_100);
    _objc_release(ppuVar12);
    _objc_release(ppuStack_f8);
    _objc_release(ppuStack_f0);
    pppuVar11 = &ppuStack_d0;
    ppuStack_d0 = ppuVar2;
LAB_106bec2f8:
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    pppuVar10 = (undefined ***)puVar7;
  }
  _objc_release(ppuVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    ppuVar5 = &puStack_240;
    pcStack_118 = FUN_106bec3fc;
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_170 = (undefined1 *)pppuVar10;
    puStack_168 = param_3;
    ppuStack_160 = ppuVar12;
    pppuStack_158 = pppuVar19;
    ppuStack_150 = ppuVar3;
    lStack_148 = lVar18;
    ppuStack_140 = ppuVar13;
    lStack_138 = lVar17;
    ppuStack_130 = ppuVar6;
    ppuStack_128 = ppuVar2;
    ppuStack_120 = &puStack_70;
    _objc_retain(pppuVar11);
    lStack_238 = 0;
    puStack_240 = (undefined *)0x0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    pppuVar10 = pppuVar11;
    func_0x00010bf52a60();
    if (pppuVar10 == (undefined ***)0x0) {
      bVar1 = false;
      uVar15 = 0;
      uVar14 = 0;
    }
    else {
      bVar1 = false;
      uVar15 = 0;
      uVar14 = 0;
      lVar17 = *plStack_230;
      do {
        pppuVar19 = (undefined ***)0x0;
        do {
          if (*plStack_230 != lVar17) {
            _objc_enumerationMutation(pppuVar11);
          }
          lVar16 = *(long *)(lStack_238 + (long)pppuVar19 * 8);
          lVar18 = lVar16;
          func_0x00010b5fa088();
          if (lVar18 - 2U < 0xb) {
            func_0x000109023acc();
            uVar15 = (uint)lVar16 ^ 1 | uVar15;
            uVar14 = (uint)lVar16 | uVar14;
          }
          else {
            bVar1 = true;
          }
          pppuVar19 = (undefined ***)((long)pppuVar19 + 1);
        } while (pppuVar10 != pppuVar19);
        pppuVar10 = pppuVar11;
        ppuVar5 = &puStack_240;
        func_0x00010bf52a60();
      } while (pppuVar10 != (undefined ***)0x0);
    }
    ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar15 & 1) != 0) {
      ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c85c0;
      func_0x00010befa120(ppuVar13);
    }
    if ((uVar14 & 1) != 0) {
      ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c85d8;
      func_0x00010befa120(ppuVar13);
    }
    if (bVar1) {
      ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c85f0;
      func_0x00010befa120(ppuVar13);
    }
    ppuVar6 = ppuVar13;
    func_0x00010bf529e0();
    if (ppuVar6 == (undefined **)0x1) {
      ppuVar6 = (undefined **)0x0;
    }
    else {
      ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8608;
      func_0x00010befa120(ppuVar13);
      _objc_retain(ppuVar13);
      ppuVar6 = ppuVar13;
    }
    _objc_release(ppuVar13);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
      ___stack_chk_fail();
      _objc_retain(ppuVar5);
      ppuVar6 = ppuVar5;
      func_0x00010c0dfd40(ppuVar5,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar6;
      func_0x000109023acc();
      _objc_release(ppuVar6);
      if ((int)ppuVar13 == 0) {
        ppuVar6 = ppuVar5;
        func_0x00010c0dfd40(ppuVar5,param_2,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar6;
        func_0x00010b5fa088();
        _objc_release(ppuVar6);
        ppuVar13 = (undefined **)0x0;
        if (ppuVar12 == (undefined **)0xc) {
          ppuVar13 = &PTR__OBJC_CLASS___NSConstantArray_111180fc8;
          func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantArray_111180fc8);
        }
        ppuVar6 = ppuVar5;
        func_0x00010c0dfd40(ppuVar5,param_2,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar6;
        func_0x00010b5fa088();
        _objc_release(ppuVar6);
        if (ppuVar12 == (undefined **)0xb) {
          ppuVar6 = &PTR__OBJC_CLASS___NSConstantArray_111180fe0;
        }
        else {
          ppuVar6 = &PTR__OBJC_CLASS___NSConstantArray_111180ff8;
        }
        func_0x00010c0d3c80(ppuVar6);
        _objc_release(ppuVar13);
      }
      else {
        ppuVar6 = &PTR__OBJC_CLASS___NSConstantArray_111180fb0;
        func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantArray_111180fb0);
      }
      func_0x00010beea460(pppuVar11,param_2,ppuVar5);
      if ((int)pppuVar11 != 0) {
        func_0x00010befa120(ppuVar6,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8650);
      }
      _objc_release(ppuVar5);
    }
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 106bebf7c; end: 106bec3fb; -[SCSpectaclesCustomExportEntryPoint _providersFromExportFormat:shouldMergeIntoSingleSnap:uploadToYouTube:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bebf7c(undefined **param_1,undefined8 param_2,long param_3,undefined **param_4,
                  long param_5)

{
  bool bVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined ***pppuVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  undefined ***pppuVar16;
  undefined4 uVar17;
  undefined *puStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined **ppuStack_100;
  undefined ***pppuStack_f8;
  undefined **ppuStack_f0;
  long lStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_a8;
  undefined ***pppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined4 uStack_7c;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_11275a800;
  lVar15 = (long)param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar2 = lVar15;
  func_0x00010bf8c640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar15);
  uVar17 = (undefined4)param_5;
  if (lVar2 == 0) {
    lVar15 = (long)param_1 + lVar14;
    _objc_loadWeakRetained();
    lVar2 = lVar15;
    func_0x00010bf8c5c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar15);
    ppuVar11 = param_1;
    FUN_106beab2c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar11;
    func_0x00010c0c7ce0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_90 = ppuVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = (undefined ***)((long)param_1 + lVar14);
    ppuStack_98 = ppuVar3;
    _objc_loadWeakRetained();
    pppuStack_a0 = pppuVar4;
    if (lVar2 == 0) {
      func_0x00010c1599e0();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = (long)param_1 + lVar14;
      _objc_loadWeakRetained();
      lVar2 = lVar15;
      func_0x00010c15a0a0();
      _objc_retainAutoreleasedReturnValue();
      param_1 = (undefined **)((long)param_1 + lVar14);
      _objc_loadWeakRetained();
      func_0x00010c2917c0();
      ppuVar8 = ppuStack_98;
      ppuVar3 = ppuStack_98;
      pppuVar9 = pppuVar4;
      func_0x00010bef18e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(lVar2);
      _objc_release(lVar15);
      _objc_release(pppuVar4);
      _objc_release(pppuStack_a0);
      _objc_release(ppuVar8);
      _objc_release(ppuStack_90);
      goto LAB_106bec30c;
    }
    func_0x00010bf8c5c0();
    _objc_retainAutoreleasedReturnValue();
    param_5 = (long)param_1 + (long)_DAT_11275a824;
    _objc_loadWeakRetained();
    lVar5 = param_5;
    lStack_88 = param_3;
    uStack_7c = uVar17;
    func_0x00010c08f100();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    ppuStack_a8 = ppuVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf5f400();
    lVar15 = (long)param_1 + lVar14;
    _objc_loadWeakRetained();
    lVar2 = lVar15;
    func_0x00010c1109c0();
    _objc_retainAutoreleasedReturnValue();
    param_1 = (undefined **)((long)param_1 + lVar14);
    _objc_loadWeakRetained();
    ppuVar8 = param_1;
    func_0x00010bf42a00();
    _objc_retainAutoreleasedReturnValue();
    param_4 = ppuStack_98;
    ppuVar11 = ppuStack_98;
    func_0x00010bef1820(ppuStack_98,param_2,pppuVar4,lVar7,lVar2,ppuVar8,lStack_88,uStack_7c);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
    _objc_release(param_1);
    _objc_release(lVar2);
    _objc_release(lVar15);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(param_5);
    _objc_release(pppuVar4);
    _objc_release(pppuStack_a0);
    _objc_release(param_4);
    _objc_release(ppuStack_90);
    _objc_release(ppuStack_a8);
    pppuVar9 = &ppuStack_78;
    ppuStack_78 = ppuVar11;
  }
  else {
    param_4 = param_1;
    FUN_106beab2c();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_90 = param_4;
    func_0x00010c0c7ce0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_98 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = (undefined ***)((long)param_1 + lVar14);
    _objc_loadWeakRetained();
    pppuStack_a0 = pppuVar4;
    func_0x00010bf8c640();
    _objc_retainAutoreleasedReturnValue();
    param_5 = (long)param_1 + (long)_DAT_11275a824;
    _objc_loadWeakRetained();
    lVar5 = param_5;
    lStack_88 = param_3;
    uStack_7c = uVar17;
    func_0x00010c08f100();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf5f400();
    lVar15 = (long)param_1 + lVar14;
    _objc_loadWeakRetained();
    lVar2 = lVar15;
    func_0x00010c1109c0();
    _objc_retainAutoreleasedReturnValue();
    param_1 = (undefined **)((long)param_1 + lVar14);
    _objc_loadWeakRetained();
    ppuVar8 = param_1;
    func_0x00010bf42a00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = param_4;
    func_0x00010bef1840(param_4,param_2,pppuVar4,lVar7,lVar2,ppuVar8,lStack_88,uStack_7c);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
    _objc_release(param_1);
    _objc_release(lVar2);
    _objc_release(lVar15);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(param_5);
    _objc_release(pppuVar4);
    _objc_release(pppuStack_a0);
    _objc_release(param_4);
    _objc_release(ppuStack_98);
    _objc_release(ppuStack_90);
    pppuVar9 = &ppuStack_70;
    ppuStack_70 = ppuVar11;
  }
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  param_3 = lVar5;
LAB_106bec30c:
  _objc_release(ppuVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    ppuVar10 = &puStack_1e0;
    pcStack_b8 = FUN_106bec3fc;
    lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_110 = param_3;
    lStack_108 = param_5;
    ppuStack_100 = param_4;
    pppuStack_f8 = pppuVar4;
    ppuStack_f0 = ppuVar8;
    lStack_e8 = lVar2;
    ppuStack_e0 = param_1;
    lStack_d8 = lVar15;
    ppuStack_d0 = ppuVar3;
    ppuStack_c8 = ppuVar11;
    puStack_c0 = &stack0xfffffffffffffff0;
    _objc_retain(pppuVar9);
    lStack_1d8 = 0;
    puStack_1e0 = (undefined *)0x0;
    uStack_1c8 = 0;
    plStack_1d0 = (long *)0x0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    pppuVar4 = pppuVar9;
    func_0x00010bf52a60();
    if (pppuVar4 == (undefined ***)0x0) {
      bVar1 = false;
      uVar13 = 0;
      uVar12 = 0;
    }
    else {
      bVar1 = false;
      uVar13 = 0;
      uVar12 = 0;
      lVar15 = *plStack_1d0;
      do {
        pppuVar16 = (undefined ***)0x0;
        do {
          if (*plStack_1d0 != lVar15) {
            _objc_enumerationMutation(pppuVar9);
          }
          lVar14 = *(long *)(lStack_1d8 + (long)pppuVar16 * 8);
          lVar2 = lVar14;
          func_0x00010b5fa088();
          if (lVar2 - 2U < 0xb) {
            func_0x000109023acc();
            uVar13 = (uint)lVar14 ^ 1 | uVar13;
            uVar12 = (uint)lVar14 | uVar12;
          }
          else {
            bVar1 = true;
          }
          pppuVar16 = (undefined ***)((long)pppuVar16 + 1);
        } while (pppuVar4 != pppuVar16);
        pppuVar4 = pppuVar9;
        ppuVar10 = &puStack_1e0;
        func_0x00010bf52a60();
      } while (pppuVar4 != (undefined ***)0x0);
    }
    ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar13 & 1) != 0) {
      ppuVar10 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c85c0;
      func_0x00010befa120(ppuVar11);
    }
    if ((uVar12 & 1) != 0) {
      ppuVar10 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c85d8;
      func_0x00010befa120(ppuVar11);
    }
    if (bVar1) {
      ppuVar10 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c85f0;
      func_0x00010befa120(ppuVar11);
    }
    ppuVar3 = ppuVar11;
    func_0x00010bf529e0();
    if (ppuVar3 == (undefined **)0x1) {
      ppuVar3 = (undefined **)0x0;
    }
    else {
      ppuVar10 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8608;
      func_0x00010befa120(ppuVar11);
      _objc_retain(ppuVar11);
      ppuVar3 = ppuVar11;
    }
    _objc_release(ppuVar11);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
      ___stack_chk_fail();
      _objc_retain(ppuVar10);
      ppuVar11 = ppuVar10;
      func_0x00010c0dfd40(ppuVar10,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar11;
      func_0x000109023acc();
      _objc_release(ppuVar11);
      if ((int)ppuVar3 == 0) {
        ppuVar11 = ppuVar10;
        func_0x00010c0dfd40(ppuVar10,param_2,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar11;
        func_0x00010b5fa088();
        _objc_release(ppuVar11);
        ppuVar11 = (undefined **)0x0;
        if (ppuVar3 == (undefined **)0xc) {
          ppuVar11 = &PTR__OBJC_CLASS___NSConstantArray_111180fc8;
          func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantArray_111180fc8);
        }
        ppuVar3 = ppuVar10;
        func_0x00010c0dfd40(ppuVar10,param_2,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar3;
        func_0x00010b5fa088();
        _objc_release(ppuVar3);
        if (ppuVar8 == (undefined **)0xb) {
          ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_111180fe0;
        }
        else {
          ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_111180ff8;
        }
        func_0x00010c0d3c80(ppuVar3);
        _objc_release(ppuVar11);
      }
      else {
        ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_111180fb0;
        func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantArray_111180fb0);
      }
      func_0x00010beea460(pppuVar9,param_2,ppuVar10);
      if ((int)pppuVar9 != 0) {
        func_0x00010befa120(ppuVar3,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8650);
      }
      _objc_release(ppuVar10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 106bec3fc; end: 106bec5e3; -[SCSpectaclesCustomExportEntryPoint _compositionModesForSnaps:] */

void FUN_106bec3fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **ppuVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  ppuVar6 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 == 0) {
    bVar1 = false;
    uVar10 = 0;
    uVar9 = 0;
  }
  else {
    bVar1 = false;
    uVar10 = 0;
    uVar9 = 0;
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        lVar7 = *(long *)(lStack_128 + lVar12 * 8);
        lVar3 = lVar7;
        func_0x00010b5fa088();
        if (lVar3 - 2U < 0xb) {
          func_0x000109023acc();
          uVar10 = (uint)lVar7 ^ 1 | uVar10;
          uVar9 = (uint)lVar7 | uVar9;
        }
        else {
          bVar1 = true;
        }
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = param_3;
      ppuVar6 = &puStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar10 & 1) != 0) {
    ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c85c0;
    func_0x00010befa120(ppuVar8);
  }
  if ((uVar9 & 1) != 0) {
    ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c85d8;
    func_0x00010befa120(ppuVar8);
  }
  if (bVar1) {
    ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c85f0;
    func_0x00010befa120(ppuVar8);
  }
  ppuVar4 = ppuVar8;
  func_0x00010bf529e0();
  if (ppuVar4 == (undefined **)0x1) {
    ppuVar4 = (undefined **)0x0;
  }
  else {
    ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8608;
    func_0x00010befa120(ppuVar8);
    _objc_retain(ppuVar8);
    ppuVar4 = ppuVar8;
  }
  _objc_release(ppuVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(ppuVar6);
    ppuVar8 = ppuVar6;
    func_0x00010c0dfd40(ppuVar6,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar8;
    func_0x000109023acc();
    _objc_release(ppuVar8);
    if ((int)ppuVar4 == 0) {
      ppuVar8 = ppuVar6;
      func_0x00010c0dfd40(ppuVar6,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar8;
      func_0x00010b5fa088();
      _objc_release(ppuVar8);
      ppuVar8 = (undefined **)0x0;
      if (ppuVar4 == (undefined **)0xc) {
        ppuVar8 = &PTR__OBJC_CLASS___NSConstantArray_111180fc8;
        func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantArray_111180fc8);
      }
      ppuVar4 = ppuVar6;
      func_0x00010c0dfd40(ppuVar6,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010b5fa088();
      _objc_release(ppuVar4);
      if (ppuVar5 == (undefined **)0xb) {
        ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_111180fe0;
      }
      else {
        ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_111180ff8;
      }
      func_0x00010c0d3c80(ppuVar4);
      _objc_release(ppuVar8);
    }
    else {
      ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_111180fb0;
      func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantArray_111180fb0);
    }
    func_0x00010beea460(param_3,param_2,ppuVar6);
    if ((int)param_3 != 0) {
      func_0x00010befa120(ppuVar4,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8650);
    }
    _objc_release(ppuVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 106bec5e4; end: 106bec71f; -[SCSpectaclesCustomExportEntryPoint _exportFormatsForSnaps:] */

void FUN_106bec5e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0dfd40(param_3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000109023acc();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    lVar1 = param_3;
    func_0x00010c0dfd40(param_3,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010b5fa088();
    _objc_release(lVar1);
    ppuVar4 = (undefined **)0x0;
    if (lVar2 == 0xc) {
      ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_111180fc8;
      func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantArray_111180fc8);
    }
    lVar1 = param_3;
    func_0x00010c0dfd40(param_3,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010b5fa088();
    _objc_release(lVar1);
    if (lVar2 == 0xb) {
      ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_111180fe0;
    }
    else {
      ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_111180ff8;
    }
    func_0x00010c0d3c80(ppuVar3);
    _objc_release(ppuVar4);
  }
  else {
    ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_111180fb0;
    func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantArray_111180fb0);
  }
  func_0x00010beea460(param_1,param_2,param_3);
  if ((int)param_1 != 0) {
    func_0x00010befa120(ppuVar3,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8650);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 106bec720; end: 106bec923; -[SCSpectaclesCustomExportEntryPoint _viewModelForModes:thumbnail:isThumbnailCircular:] */

void FUN_106bec720(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,int param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_5);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106bec924;
  puStack_68 = &UNK_110967190;
  uStack_58 = (undefined1)param_6;
  _objc_retain(param_5);
  puStack_60 = param_5;
  _objc_retain(param_4);
  ppuVar1 = &puStack_80;
  _objc_retainBlock();
  _objc_retain(param_5);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = param_5;
  if (param_6 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0(param_5);
    func_0x00010c12fbe0(param_1 / 20.0,puVar3,param_3,param_5,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_release(puVar2);
    puVar2 = puVar3;
  }
  puStack_a8 = puVar6;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x106bec9e4;
  puStack_90 = &UNK_1109671c0;
  puStack_88 = puVar2;
  _objc_retain(puVar2);
  ppuVar4 = &puStack_a8;
  _objc_retainBlock();
  puStack_d8 = puVar6;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_106becab8;
  puStack_c0 = &UNK_1109671f0;
  ppuStack_b8 = ppuVar1;
  ppuStack_b0 = ppuVar4;
  _objc_retain();
  _objc_retain(ppuVar1);
  uVar5 = param_4;
  func_0x00010c0b8600(param_4,param_3,&puStack_d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar6 = PTR_PTR_1126d1420;
  _objc_alloc(PTR_PTR_1126d1420);
  func_0x00010c0537e0();
  _objc_release(uVar5);
  _objc_release(ppuStack_b0);
  _objc_release(ppuStack_b8);
  _objc_release(ppuVar4);
  _objc_release(puStack_88);
  _objc_release(ppuVar1);
  _objc_release(puVar2);
  _objc_release(puStack_60);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106bec924; end: 106becab7;  */

void FUN_106bec924(double param_1,long param_2)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (*(char *)(param_2 + 0x28) == '\x01') {
    dVar4 = 1.0;
    dVar2 = param_1;
    _hypot(param_1,0x3ff0000000000000);
    puVar1 = (undefined8 *)(param_2 + 0x20);
    dVar3 = dVar2;
    func_0x00010c23d0a0(*puVar1);
    func_0x00010c23d0a0(*puVar1);
    param_1 = (dVar3 - param_1 * (dVar4 / dVar2)) * 0.5;
    func_0x00010c23d0a0(*puVar1);
  }
  else {
    func_0x00010c23d0a0(*(undefined8 *)(param_2 + 0x20));
    func_0x000100841590();
    func_0x00010b69097c();
  }
  func_0x00010bf5c8a0(param_1,*(undefined8 *)(param_2 + 0x20));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106becab8; end: 106becc3f;  */

void FUN_106becab8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010c067fc0();
  lVar1 = param_3;
  func_0x00010854b8d8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(lVar1);
  lVar1 = 0x20;
  if (param_3 != 4) {
    lVar1 = 0x28;
  }
  lVar1 = *(long *)(param_2 + lVar1);
  (**(code **)(lVar1 + 0x10))(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined *)0x0;
  if (param_3 < 3) {
    if (param_3 == 1) {
      puVar2 = PTR_PTR_1126d1418;
      _objc_alloc(PTR_PTR_1126d1418);
    }
    else {
      if (param_3 != 2) goto LAB_106becc1c;
      puVar2 = PTR_PTR_1126d1418;
      _objc_alloc(PTR_PTR_1126d1418);
    }
  }
  else if (param_3 == 3) {
    puVar2 = PTR_PTR_1126d1418;
    _objc_alloc(PTR_PTR_1126d1418);
  }
  else {
    if (param_3 != 4) goto LAB_106becc1c;
    puVar2 = PTR_PTR_1126d1418;
    _objc_alloc(PTR_PTR_1126d1418);
  }
  func_0x00010c051e00();
LAB_106becc1c:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106becc40; end: 106bece27; -[SCSpectaclesCustomExportEntryPoint _viewModelForFormats:thumbnail:isThumbnailCircular:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106becc40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_4);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 1;
  if (param_5 == 0) {
    uStack_a0 = 2;
  }
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106bece28;
  puStack_78 = &UNK_110967190;
  uStack_68 = (char)param_5;
  _objc_retain(param_4);
  uStack_70 = param_4;
  _objc_retain(param_3);
  ppuVar1 = &puStack_90;
  _objc_retainBlock();
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_106becee8;
  puStack_b8 = &UNK_110967220;
  uStack_b0 = param_4;
  ppuStack_a8 = ppuVar1;
  uStack_98 = (char)param_5;
  _objc_retain();
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010c0b8600(param_3,param_2,&puStack_d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  param_1 = param_1 + _DAT_11275a800;
  _objc_loadWeakRetained();
  lVar3 = param_1;
  func_0x00010bf00920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  if (lVar4 == 1) {
    func_0x00010854b914();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010854b92c();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
  _objc_release(param_1);
  puVar5 = PTR_PTR_1126d1420;
  _objc_alloc(PTR_PTR_1126d1420);
  puVar6 = puVar5;
  func_0x00010854b8fc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0537e0(puVar5,param_2,puVar6,lVar4,1,uVar2);
  _objc_release(puVar6);
  _objc_release(lVar4);
  _objc_release(uVar2);
  _objc_release(ppuStack_a8);
  _objc_release(uStack_b0);
  _objc_release(ppuVar1);
  _objc_release(uStack_70);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106bece28; end: 106becee7;  */

void FUN_106bece28(double param_1,long param_2)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (*(char *)(param_2 + 0x28) == '\x01') {
    dVar4 = 1.0;
    dVar2 = param_1;
    _hypot(param_1,0x3ff0000000000000);
    puVar1 = (undefined8 *)(param_2 + 0x20);
    dVar3 = dVar2;
    func_0x00010c23d0a0(*puVar1);
    func_0x00010c23d0a0(*puVar1);
    param_1 = (dVar3 - param_1 * (dVar4 / dVar2)) * 0.5;
    func_0x00010c23d0a0(*puVar1);
  }
  else {
    func_0x00010c23d0a0(*(undefined8 *)(param_2 + 0x20));
    func_0x000100841590();
    func_0x00010b69097c();
  }
  func_0x00010bf5c8a0(param_1,*(undefined8 *)(param_2 + 0x20));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106becee8; end: 106bed237;  */

void FUN_106becee8(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x00010c067fc0();
  puVar5 = (undefined *)0x0;
  if (param_2 < 4) {
    if (param_2 == 1) {
      puVar5 = PTR_PTR_1126d1418;
      _objc_alloc(PTR_PTR_1126d1418);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010854b944();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_2 == 2) {
      puVar5 = PTR_PTR_1126d1418;
      _objc_alloc(PTR_PTR_1126d1418);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010854b95c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_2 != 3) goto LAB_106bed1b0;
      puVar5 = PTR_PTR_1126d1418;
      _objc_alloc(PTR_PTR_1126d1418);
      puVar2 = *(undefined **)(param_1 + 0x28);
      (**(code **)(puVar2 + 0x10))(0x3ffc71c71c71c71c);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010854b9bc();
      _objc_retainAutoreleasedReturnValue();
    }
LAB_106bed18c:
    func_0x00010c051e00(puVar5);
    _objc_release(puVar3);
  }
  else {
    if (param_2 < 6) {
      if (param_2 == 4) {
        puVar5 = PTR_PTR_1126d1418;
        _objc_alloc(PTR_PTR_1126d1418);
        puVar2 = *(undefined **)(param_1 + 0x28);
        (**(code **)(puVar2 + 0x10))(0x3ff5555555555555);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010854b9a4();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (param_2 != 5) goto LAB_106bed1b0;
        puVar5 = PTR_PTR_1126d1418;
        _objc_alloc(PTR_PTR_1126d1418);
        puVar2 = *(undefined **)(param_1 + 0x28);
        (**(code **)(puVar2 + 0x10))(0x3fe2000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010854b98c();
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_106bed18c;
    }
    if (param_2 == 6) {
      puVar5 = PTR_PTR_1126d1418;
      _objc_alloc(PTR_PTR_1126d1418);
      puVar2 = *(undefined **)(param_1 + 0x28);
      (**(code **)(puVar2 + 0x10))(0x3ff0000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010854b974();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106bed18c;
    }
    if (param_2 != 7) goto LAB_106bed1b0;
    puVar5 = PTR_PTR_1126d1418;
    _objc_alloc(PTR_PTR_1126d1418);
    bVar1 = *(byte *)(param_1 + 0x38);
    if (bVar1 == 1) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
    }
    else {
      puVar2 = (undefined *)0x0;
      puVar3 = puVar5;
    }
    func_0x00010854b9ec();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010854b9d4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051e00(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    if ((bVar1 & 1) == 0) goto LAB_106bed1b0;
  }
  _objc_release(puVar2);
LAB_106bed1b0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106bed238; end: 106bed44f; -[SCSpectaclesCustomExportEntryPoint _vr180ExportSupportedForSnaps:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106bed238(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_108 [12];
  uint uStack_fc;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar9 = (long)_DAT_11275a800;
  lVar6 = param_1 + lVar9;
  _objc_loadWeakRetained();
  lVar1 = lVar6;
  func_0x00010bf8c640();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    _objc_release();
    _objc_release(lVar6);
  }
  else {
    func_0x00010c0b64c0(auStack_108);
    _objc_release(lVar1);
    _objc_release(lVar6);
    if ((uStack_fc & 1) != 0) {
      lVar6 = 0;
      goto LAB_106bed408;
    }
  }
  _objc_retain(param_3);
  lVar6 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar8 = *(long *)(lVar7 * 8);
      lVar2 = lVar8;
      func_0x000109023714();
      if ((int)lVar2 == 0) {
LAB_106bed3fc:
        lVar6 = 0;
        goto LAB_106bed400;
      }
      lVar2 = param_1 + lVar9;
      _objc_loadWeakRetained();
      lVar3 = lVar2;
      func_0x00010c0b64a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar8;
      func_0x00010c241220(lVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010c0b64e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (((lVar5 != 0) || (lVar2 = lVar8, func_0x00010b5fa088(), lVar2 == 9)) ||
         (func_0x00010b5fa088(), lVar8 == 10)) goto LAB_106bed3fc;
      lVar7 = lVar7 + 1;
    } while (lVar6 != lVar7);
    lVar6 = param_3;
    func_0x00010bf52a60();
  }
  lVar6 = 1;
LAB_106bed400:
  _objc_release(param_3);
LAB_106bed408:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return lVar6;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + _DAT_11275a834,0);
  _objc_storeStrong(param_3 + _DAT_11275a820,0);
  _objc_destroyWeak(param_3 + _DAT_11275a81c);
  _objc_destroyWeak(param_3 + _DAT_11275a830);
  _objc_destroyWeak(param_3 + _DAT_11275a82c);
  _objc_destroyWeak(param_3 + _DAT_11275a828);
  _objc_destroyWeak(param_3 + _DAT_11275a824);
  _objc_destroyWeak(param_3 + _DAT_11275a814);
  _objc_destroyWeak(param_3 + _DAT_11275a818);
  _objc_destroyWeak(param_3 + _DAT_11275a808);
  _objc_destroyWeak(param_3 + _DAT_11275a800);
  _objc_storeStrong(param_3 + _DAT_11275a804,0);
  _objc_storeStrong(param_3 + _DAT_11275a80c,0);
  param_3 = param_3 + _DAT_11275a810;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3,0);
  return param_3;
}



/* Entry: 106bed450; end: 106bed52b; -[SCSpectaclesCustomExportEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bed450(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275a834,0);
  _objc_storeStrong(param_1 + _DAT_11275a820,0);
  _objc_destroyWeak(param_1 + _DAT_11275a81c);
  _objc_destroyWeak(param_1 + _DAT_11275a830);
  _objc_destroyWeak(param_1 + _DAT_11275a82c);
  _objc_destroyWeak(param_1 + _DAT_11275a828);
  _objc_destroyWeak(param_1 + _DAT_11275a824);
  _objc_destroyWeak(param_1 + _DAT_11275a814);
  _objc_destroyWeak(param_1 + _DAT_11275a818);
  _objc_destroyWeak(param_1 + _DAT_11275a808);
  _objc_destroyWeak(param_1 + _DAT_11275a800);
  _objc_storeStrong(param_1 + _DAT_11275a804,0);
  _objc_storeStrong(param_1 + _DAT_11275a80c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275a810,0);
  return;
}



/* Entry: 106bed52c; end: 106bed5e7; -[SCSpectaclesCustomExportScopedMemoriesActivityServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bed52c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126d1428;
  _objc_alloc(PTR_PTR_1126d1428);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11275a83c;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c0c7cc0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0b73e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02a320(puVar1,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bed5e8; end: 106bed61f; -[SCSpectaclesCustomExportScopedMemoriesActivityServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bed5e8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275a83c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275a838);
  return;
}



/* Entry: 106bed620; end: 106bed74b; -[SCSpectaclesCustomExportUIScope initWithUIContainer:delegate:viewModel:defaultOptionIndex:thumbnailLiveView:snaps:] */

undefined1 *
FUN_106bed620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f59b0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bed74c; end: 106bed753; -[SCSpectaclesCustomExportUIScope uiContainer] */

undefined8 FUN_106bed74c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106bed754; end: 106bed783; -[SCSpectaclesCustomExportUIScope setUiContainer:] */

void FUN_106bed754(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106bed784; end: 106bed79b; -[SCSpectaclesCustomExportUIScope delegate] */

void FUN_106bed784(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bed79c; end: 106bed7a7; -[SCSpectaclesCustomExportUIScope setDelegate:] */

void FUN_106bed79c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106bed7a8; end: 106bed7af; -[SCSpectaclesCustomExportUIScope viewModel] */

undefined8 FUN_106bed7a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106bed7b0; end: 106bed7df; -[SCSpectaclesCustomExportUIScope setViewModel:] */

void FUN_106bed7b0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106bed7e0; end: 106bed7e7; -[SCSpectaclesCustomExportUIScope defaultOptionIndex] */

undefined8 FUN_106bed7e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106bed7e8; end: 106bed7ef; -[SCSpectaclesCustomExportUIScope setDefaultOptionIndex:] */

void FUN_106bed7e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 106bed7f0; end: 106bed7f7; -[SCSpectaclesCustomExportUIScope thumbnailLiveView] */

undefined8 FUN_106bed7f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106bed7f8; end: 106bed827; -[SCSpectaclesCustomExportUIScope setThumbnailLiveView:] */

void FUN_106bed7f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bed828; end: 106bed82f; -[SCSpectaclesCustomExportUIScope snaps] */

undefined8 FUN_106bed828(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106bed830; end: 106bed85f; -[SCSpectaclesCustomExportUIScope setSnaps:] */

void FUN_106bed830(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106bed860; end: 106bed8af; -[SCSpectaclesCustomExportUIScope .cxx_destruct] */

void FUN_106bed860(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bed8b0; end: 106bedf3b; -[SCSpectaclesMemoriesCustomExportEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bed8b0(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *unaff_x24;
  long lVar15;
  undefined *puVar16;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = param_1;
  FUN_106bedf3c();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar13);
  puVar13 = param_1;
  FUN_106bedf3c();
  _objc_retainAutoreleasedReturnValue();
  if (puVar14 == (undefined *)0x0) {
    puVar4 = puVar13;
    func_0x00010bf00920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    puVar13 = param_1;
    FUN_106bedf3c();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar13;
    func_0x00010c1599e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    puVar14 = param_1;
    FUN_106bedf3c();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar14;
    func_0x00010c15a0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar1 = (undefined *)0x0;
    goto LAB_106beddbc;
  }
  puVar14 = puVar13;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  FUN_106bedf3c();
  _objc_retainAutoreleasedReturnValue();
  unaff_x24 = puVar1;
  func_0x00010c08afa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == (undefined *)0x0) goto LAB_106bedf24;
  puVar16 = param_1 + _DAT_11275a860;
  _objc_loadWeakRetained();
  do {
    puVar2 = puVar16;
    func_0x00010c0cadc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar14);
    _objc_retain(unaff_x24);
    _objc_retain(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar14;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if ((unaff_x24 == (undefined *)0x0) || (puVar4 == (undefined *)0x4)) {
      puVar4 = puVar14;
      func_0x00010bfbdda0();
      func_0x00010b5fa33c();
      if (puVar4 != (undefined *)0x5) {
        puVar5 = puVar14;
        func_0x00010c0e0160();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar4 = (undefined *)0x0;
        if (puVar5 == (undefined *)0x0) goto LAB_106bedc28;
      }
      puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      puVar5 = puVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bfa7340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = puVar6;
      func_0x00010bf52a60(puVar6,param_2,&uStack_140,auStack_f0,0x10);
      if (puVar5 != (undefined *)0x0) {
        lVar12 = *plStack_130;
        do {
          puVar11 = (undefined *)0x0;
          do {
            if (*plStack_130 != lVar12) {
              _objc_enumerationMutation(puVar6);
            }
            lVar15 = *(long *)(lStack_138 + (long)puVar11 * 8);
            lVar7 = lVar15;
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            if (lVar7 != 0) {
              lVar8 = lVar15;
              func_0x00010c241220(lVar15);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar4;
              func_0x00010bf4b900(puVar4,param_2,lVar8);
              _objc_release(lVar8);
              _objc_release(lVar7);
              if (((ulong)puVar9 & 1) == 0) {
                func_0x00010befa120(puVar3,param_2,lVar15);
                func_0x00010c241220(lVar15);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar4,param_2,lVar15);
                _objc_release(lVar15);
              }
            }
            puVar11 = puVar11 + 1;
          } while (puVar5 != puVar11);
          puVar5 = puVar6;
          func_0x00010bf52a60(puVar6,param_2,&uStack_140,auStack_f0,0x10);
        } while (puVar5 != (undefined *)0x0);
      }
      _objc_release(puVar6);
      _objc_release(puVar4);
LAB_106bedc1c:
      _objc_retain(puVar3);
      puVar4 = puVar3;
    }
    else {
      puVar5 = unaff_x24;
      func_0x00010c0e0160();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar4 = (undefined *)0x0;
      if (puVar5 != (undefined *)0x0) {
        func_0x00010befa120(puVar3,param_2,unaff_x24);
        goto LAB_106bedc1c;
      }
    }
LAB_106bedc28:
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(unaff_x24);
    _objc_release(puVar14);
    _objc_release(puVar2);
    _objc_release(puVar16);
    _objc_release(unaff_x24);
    _objc_release(puVar1);
    _objc_release(puVar14);
    _objc_release(puVar13);
    puVar13 = puVar4;
    func_0x00010bf529e0();
    if (puVar13 == (undefined *)0x0) {
      puVar13 = param_1;
      FUN_106bedf3c(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar13;
      func_0x00010bfbb120();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108df9400();
      _objc_release(puVar1);
      _objc_release(puVar13);
      puVar1 = param_1;
      FUN_106bedf3c();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      FUN_106bedf3c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c249080(puVar13,param_2,param_1,0,0,1,0);
      _objc_release(param_1);
      _objc_release(puVar13);
      _objc_release(puVar1);
      puVar13 = (undefined *)0x0;
      puVar16 = (undefined *)0x0;
    }
    else {
      puVar2 = puVar4;
      func_0x00010bf529e0();
      puVar13 = puVar4;
      puVar16 = PTR____NSArray0__struct_11034ab48;
      if ((undefined *)0x1 < puVar2) {
        puVar13 = param_1;
        FUN_106bedf3c();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010bf97060();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_f8 = puVar14;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_f8,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar13);
        puVar13 = PTR____NSArray0__struct_11034ab48;
      }
      _objc_retain(puVar13);
LAB_106beddbc:
      puVar2 = puVar4;
      func_0x00010bf529e0();
      if (puVar2 != (undefined *)0x0) {
        if (param_1 == (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
        }
        else {
          puVar14 = param_1 + _DAT_11275a864;
          _objc_loadWeakRetained();
        }
        unaff_x24 = param_1;
        FUN_106bedf3c();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = unaff_x24;
        func_0x00010c27ece0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = param_1;
        FUN_106bedf3c(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bfbb120();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = param_1;
        FUN_106bedf3c();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar1;
        func_0x00010c2917c0();
        puVar11 = puVar14;
        func_0x00010bf23dc0(puVar14,param_2,puVar2,puVar5,param_1,puVar6,0,0,puVar16,puVar13,puVar4,
                            0,0,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        _objc_release(puVar5);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(unaff_x24);
        _objc_release(puVar14);
        if (param_1 == (undefined *)0x0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined8 *)(param_1 + _DAT_11275a868);
        }
        func_0x00010bf9d620(uVar10,param_2,puVar11);
        _objc_release(puVar11);
      }
    }
    _objc_release(puVar13);
    _objc_release(puVar16);
    _objc_release(puVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
LAB_106bedf24:
    puVar16 = (undefined *)0x0;
  } while( true );
}



/* Entry: 106bedf3c; end: 106bedf5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bedf3c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275a858);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bedf60; end: 106bee08b; -[SCSpectaclesMemoriesCustomExportEntryPoint customExportScope:didSucceedExporting:cancelled:alertDisplayed:activityType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bedf60(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_7);
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_11275a868);
  }
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar3);
  if (lVar3 == param_3) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + _DAT_11275a868);
    }
    func_0x00010c12e1c0(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar3 = param_1;
    FUN_106bedf3c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    FUN_106bedf3c(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c249080(lVar2,param_2,param_1,param_4,param_5,param_6,param_7);
    _objc_release(param_1);
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 106bee08c; end: 106bee0eb; -[SCSpectaclesMemoriesCustomExportEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bee08c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275a868,0);
  _objc_destroyWeak(param_1 + _DAT_11275a864);
  _objc_destroyWeak(param_1 + _DAT_11275a860);
  _objc_destroyWeak(param_1 + _DAT_11275a85c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275a858);
  return;
}



/* Entry: 106bee0ec; end: 106bee157; -[SCMemoriesMergedDataSourceServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bee0ec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275a880,0);
  _objc_destroyWeak(param_1 + _DAT_11275a87c);
  _objc_destroyWeak(param_1 + _DAT_11275a878);
  _objc_destroyWeak(param_1 + _DAT_11275a874);
  _objc_destroyWeak(param_1 + _DAT_11275a870);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275a86c);
  return;
}



/* Entry: 106bee158; end: 106bee18f; -[SCMemoriesSpectaclesContentDataSourcePlugInEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bee158(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275a888);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275a884);
  return;
}



/* Entry: 106bee190; end: 106bee19b; -[SCMergedGalleryDataSource fetchGallerySnapsForEntry:] */

void FUN_106bee190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa73d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_fetchGallerySnapsForEntry_useHig_1125c7698,param_3,0,0);
  return;
}



/* Entry: 106bee19c; end: 106bee2d7; -[SCMergedGalleryDataSource fetchGallerySnapsForEntry:useHighlightContentDataSourceForTemporaryEntries:shouldSort:] */

void FUN_106bee19c(long param_1,undefined8 param_2,undefined *param_3,int param_4,int param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if ((param_4 == 0) || (puVar4 = param_3, func_0x00010b5f6b3c(), (int)puVar4 == 0)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bfa8860();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  puVar2 = puVar4;
  func_0x00010bf529e0();
  if (puVar2 == (undefined *)0x0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
    func_0x00010bf97780();
    if (iVar1 == 0) {
      puVar2 = PTR_PTR_1126af4d0;
      func_0x00010bfa7380(PTR_PTR_1126af4d0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = *(undefined **)(param_1 + 0x40);
      func_0x00010bfa7ca0(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar4);
    puVar4 = puVar2;
  }
  puVar2 = puVar4;
  if (param_5 != 0) {
    puVar3 = param_3;
    func_0x00010c245800(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010b5fca54();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bee2d8; end: 106bee3cb; -[SCMergedGalleryDataSource fetchGallerySnapsForEntry:completionQueue:completionBlock:] */

void FUN_106bee2d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 != 0) && (param_5 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106bee3cc;
    puStack_68 = &UNK_1108465d0;
    lStack_60 = param_1;
    _objc_retain(param_3);
    uStack_58 = param_3;
    _objc_retain(param_4);
    lStack_50 = param_4;
    _objc_retain(param_5);
    lStack_48 = param_5;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
    _objc_release(lStack_48);
    _objc_release(lStack_50);
    _objc_release(uStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106bee3cc; end: 106bee477;  */

void FUN_106bee3cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa7340(uVar3,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106bee478;
  puStack_48 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  uStack_40 = uVar3;
  uStack_38 = uVar2;
  _objc_retain(uVar3);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(uVar3);
  return;
}



/* Entry: 106bee478; end: 106bee487;  */

void FUN_106bee478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106bee484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106bee488; end: 106bee49b; -[SCMergedGalleryDataSource fetchGallerySnapsWithSnapIds:] */

void FUN_106bee488(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa7590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126af4d0,PTR_s_fetchGallerySnapsWithSnapIds_dat_1125c7708,param_3,
             *(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 106bee49c; end: 106bee51f; -[SCMergedGalleryDataSource fetchGalleryEntryForSnap:] */

void FUN_106bee49c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010b5fa088();
  if (lVar1 - 2U < 0xb) {
    puVar2 = *(undefined **)(param_1 + 0x40);
    func_0x00010bfa7cc0(puVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126af4c0;
    func_0x00010bfa7060(PTR_PTR_1126af4c0,param_2,param_3,0,*(undefined8 *)(param_1 + 0x48));
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bee520; end: 106bee60f; -[SCMergedGalleryDataSource fetchActiveGalleryEntryForSnap:] */

void FUN_106bee520(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010b5fa088();
  if (lVar1 - 2U < 0xb) {
    puVar2 = *(undefined **)(param_1 + 0x40);
    func_0x00010bfa7cc0(puVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR_PTR_1126c45e8;
    _objc_alloc(PTR_PTR_1126c45e8);
    puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                        &PTR____CFConstantStringClassReference_110e785d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038000(puVar3,param_2,puVar2,0,0,0,0);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126af4c0;
    func_0x00010bfa7060(PTR_PTR_1126af4c0,param_2,param_3,puVar3,*(undefined8 *)(param_1 + 0x48));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bee610; end: 106bee8c7; -[SCMergedGalleryDataSource fetchActiveGalleryEntriesForSnaps:] */

void FUN_106bee610(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar4 = PTR____NSDictionary0__struct_11034ab58;
  if (lVar2 != 0) {
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(param_3);
    func_0x00010bf71fe0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        lVar10 = *(long *)(lVar11 * 8);
        lVar5 = lVar10;
        func_0x00010b5fa088();
        if (lVar5 - 2U < 0xb) {
          lVar5 = *(long *)(param_1 + 0x40);
          func_0x00010bfa7cc0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar5 != 0) {
            lVar6 = lVar10;
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar6 != 0) {
              func_0x00010c241220(lVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar4);
              _objc_release(lVar10);
            }
          }
          _objc_release(lVar5);
        }
        else {
          func_0x00010befa120(puVar3);
        }
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    puVar7 = puVar3;
    func_0x00010bf529e0();
    if (puVar7 != (undefined *)0x0) {
      puVar7 = PTR_PTR_1126c45e8;
      _objc_alloc(PTR_PTR_1126c45e8);
      puVar8 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c038000(puVar7);
      _objc_release(puVar8);
      puVar8 = PTR_PTR_1126af4c0;
      func_0x00010bfa6ea0(PTR_PTR_1126af4c0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(puVar4);
      _objc_release(puVar8);
      _objc_release(puVar7);
    }
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfa70b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126af4c0,PTR_s_fetchGalleryEntryWithEntryId_dat_1125c75d0);
  return;
}



/* Entry: 106bee8c8; end: 106bee8db; -[SCMergedGalleryDataSource fetchGalleryEntryWithEntryId:] */

void FUN_106bee8c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa70b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126af4c0,PTR_s_fetchGalleryEntryWithEntryId_dat_1125c75d0,param_3,
             *(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 106bee8dc; end: 106bee937; -[SCMergedGalleryDataSource fetchGalleryEntriesWithEntryIds:] */

void FUN_106bee8dc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126af4c0;
  func_0x00010bfa6ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bee938; end: 106bee9b3; -[SCMergedGalleryDataSource countOfGallerySnapsForEntry:] */

undefined * FUN_106bee938(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010bf97780(uVar2,param_2,param_3);
  if ((int)uVar2 == 0) {
    puVar1 = PTR_PTR_1126af4d0;
    func_0x00010bf52da0(PTR_PTR_1126af4d0,param_2,param_3,0,*(undefined8 *)(param_1 + 0x48));
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x40);
    func_0x00010bf52e80(puVar1,param_2,param_3);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106bee9b4; end: 106bee9ef; -[SCMergedGalleryDataSource countOfGallerySnapsForEntryRespectingMultiSnaps:] */

undefined8 FUN_106bee9b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa7340();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000107e2e2c8();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106bee9f0; end: 106beea53; -[SCMergedGalleryDataSource _isEligibleForFetchingFavoritedSnaps:] */

bool FUN_106bee9f0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c07b240();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010c0e0160(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    bVar1 = uVar2 != 0;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_3);
  return bVar1;
}


