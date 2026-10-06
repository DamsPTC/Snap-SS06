/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108610c38; end: 108610c93; -[SCTalkScreenSharingStateManager _getState] */

long FUN_108610c38(long param_1)

{
  long lVar1;
  
  _os_unfair_lock_assert_owner(param_1 + 0x20);
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    if (*(char *)(param_1 + 0x25) == '\x01') {
      lVar1 = 3;
      if (*(char *)(param_1 + 0x10) != '\0') {
        lVar1 = 4;
      }
    }
    else {
      lVar1 = (ulong)*(byte *)(param_1 + 0x11) << 2;
    }
  }
  else {
    lVar1 = 1;
  }
  return lVar1;
}



/* Entry: 108610c94; end: 108610c9b; -[SCTalkScreenSharingStateManager isCapturing] */

undefined1 FUN_108610c94(long param_1)

{
  return *(undefined1 *)(param_1 + 0x24);
}



/* Entry: 108610c9c; end: 108610ca3; -[SCTalkScreenSharingStateManager isExtensionRunning] */

undefined1 FUN_108610c9c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x25);
}



/* Entry: 108610ca4; end: 108610cab; -[SCTalkScreenSharingStateManager isSystemRecording] */

undefined1 FUN_108610ca4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x26);
}



/* Entry: 108610cac; end: 108610cb3; -[SCTalkScreenSharingStateManager .cxx_destruct] */

void FUN_108610cac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108610cb4; end: 108610d8f;  */

void FUN_108610cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da830;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010bffb660();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108610d90; end: 108610e1f;  */

void FUN_108610d90(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da838;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010bffe1e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108610e20; end: 108610e93; -[SCCFNotificationHandler initWithDelegate:] */

undefined1 * FUN_108610e20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd1f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)((long)puVar1 + 8);
    _objc_storeWeak(puVar2,param_3);
    _CFNotificationCenterGetDarwinNotifyCenter();
    *(undefined1 **)((long)puVar1 + 0x10) = puVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108610e94; end: 108610ed7; -[SCCFNotificationHandler dealloc] */

void FUN_108610e94(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf3b820();
  puStack_28 = PTR_PTR_1126fd1f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108610ed8; end: 108610f33; -[SCCFNotificationHandler deliverNotification:fromAudioSender:] */

void FUN_108610ed8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0dc120();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108610f34; end: 10861108f; -[SCCFNotificationHandler registerListener:] */

void FUN_108610f34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  _CFNotificationCenterAddObserver(uVar2,param_1,0x108610fe8,param_3,0,4);
  ppuVar3 = &PTR____CFConstantStringClassReference_110ee6118;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = param_3;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _CFNotificationCenterAddObserver
            (*(undefined8 *)(param_1 + 0x10),param_1,0x108610fe8,puVar1,0,4,in_x6,in_x7,uVar2,
             ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108611090; end: 10861109b; -[SCCFNotificationHandler clearListeners] */

void FUN_108611090(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdba55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFNotificationCenterRemoveEveryObserver_11034a6c8)
            (*(undefined8 *)(param_1 + 0x10),param_1);
  return;
}



/* Entry: 10861109c; end: 1086110b3; -[SCCFNotificationHandler postNotification:] */

void FUN_10861109c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdba550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFNotificationCenterPostNotification_11034a6c0)
            (*(undefined8 *)(param_1 + 0x10),param_3,0,0,1);
  return;
}



/* Entry: 1086110b4; end: 1086110bb; -[SCCFNotificationHandler .cxx_destruct] */

void FUN_1086110b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1086110bc; end: 108611217; -[SCScreenCaptureReceiver initWithDelegate:] */

undefined8 * FUN_1086110bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_3);
  puStack_30 = PTR_PTR_1126fd1f8;
  puVar1 = &uStack_38;
  uStack_38 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = auStack_28;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak(puVar1 + 1,puVar2);
    _objc_release(puVar2);
    puVar1[8] = 0;
    puVar3 = &UNK_10f4aa958;
    _dispatch_queue_create(&UNK_10f4aa958,0);
    uVar4 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar4);
    puVar3 = &UNK_10f4aa988;
    _dispatch_queue_create(&UNK_10f4aa988,0);
    uVar4 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126da848;
    _objc_alloc();
    func_0x00010c04a380();
    uVar4 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126da848;
    _objc_alloc();
    func_0x00010c04a380();
    uVar4 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar4);
    func_0x00010beadc60(puVar1);
    puVar3 = PTR_PTR_1126da850;
    _objc_alloc_init();
    uVar4 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar4);
    *(undefined4 *)(puVar1 + 0xb) = 0;
  }
  _objc_destroyWeak(auStack_28);
  return puVar1;
}



/* Entry: 108611218; end: 10861127b; -[SCScreenCaptureReceiver dealloc] */

void FUN_108611218(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    _dispatch_source_cancel();
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010c104940(*(undefined8 *)(param_1 + 0x30));
  }
  puStack_28 = PTR_PTR_1126fd1f8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10861127c; end: 1086112ab; -[SCScreenCaptureReceiver enable] */

void FUN_10861127c(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0x5c) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x58);
  return;
}



/* Entry: 1086112ac; end: 108611303; -[SCScreenCaptureReceiver disable] */

void FUN_1086112ac(long param_1,undefined8 param_2)

{
  _os_unfair_lock_lock(param_1 + 0x58);
  if (*(char *)(param_1 + 0x5c) == '\x01') {
    *(undefined1 *)(param_1 + 0x5c) = 0;
    func_0x00010bec3060(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x58);
  return;
}



/* Entry: 108611304; end: 108611357; -[SCScreenCaptureReceiver stopAsync] */

void FUN_108611304(long param_1,undefined8 param_2)

{
  _os_unfair_lock_lock(param_1 + 0x58);
  if (*(char *)(param_1 + 0x5c) == '\x01') {
    func_0x00010bec3060(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x58);
  return;
}



/* Entry: 108611358; end: 108611407; -[SCScreenCaptureReceiver notifyIntentToStart] */

void FUN_108611358(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _os_unfair_lock_lock(param_1 + 0x58);
  if (*(char *)(param_1 + 0x5c) == '\x01') {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108611408;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x000107c27d8c(uVar1,&puStack_60);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _os_unfair_lock_unlock(param_1 + 0x58);
  return;
}



/* Entry: 108611408; end: 10861142b;  */

void FUN_108611408(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x5d) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10861142c; end: 108611487; -[SCScreenCaptureReceiver _stopImpl:] */

void FUN_10861142c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_108611488;
  puStack_28 = &UNK_110845ce0;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x000107c27d8c(*(undefined8 *)(param_1 + 0x10),&puStack_40);
  return;
}



/* Entry: 108611488; end: 108611527;  */

void FUN_108611488(long param_1)

{
  undefined **ppuVar1;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010be8f8e0(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x40) != 0) {
    func_0x00010c104940(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
    ppuVar1 = &PTR____CFConstantStringClassReference_110ee6718;
    if (*(char *)(param_1 + 0x28) == '\0') {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ee6738;
    }
    func_0x00010be90120(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bec3c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__stopWithMessage__11258e8b8,ppuVar1);
    return;
  }
  return;
}



/* Entry: 108611528; end: 10861158f; -[SCScreenCaptureReceiver _reportFinishErrors] */

void FUN_108611528(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  if (*(char *)(param_1 + 0x5d) == '\x01') {
    if ((*(byte *)(param_1 + 0x5e) & 1) != 0) goto LAB_10861155c;
    ppuVar1 = &PTR____CFConstantStringClassReference_110ee6538;
  }
  else {
    if (*(byte *)(param_1 + 0x5e) == 0) goto LAB_10861157c;
LAB_10861155c:
    if ((*(byte *)(param_1 + 0x5f) & 1) != 0) goto LAB_10861157c;
    ppuVar1 = &PTR____CFConstantStringClassReference_110ee6518;
  }
  func_0x00010be90120(param_1,param_2,&PTR____CFConstantStringClassReference_110ee6418,ppuVar1);
LAB_10861157c:
  *(undefined2 *)(param_1 + 0x5d) = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  return;
}



/* Entry: 108611590; end: 108611697; -[SCScreenCaptureReceiver _setupListeners] */

/* WARNING: Possible PIC construction at 0x0001086115dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001086115fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010861161c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010861163c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010861165c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010861167c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108611660) */
/* WARNING: Removing unreachable block (ram,0x000108611640) */
/* WARNING: Removing unreachable block (ram,0x000108611620) */
/* WARNING: Removing unreachable block (ram,0x000108611600) */
/* WARNING: Removing unreachable block (ram,0x0001086115e0) */
/* WARNING: Removing unreachable block (ram,0x000108611680) */

void FUN_108611590(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126da858;
  _objc_alloc();
  func_0x00010c00a2c0();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c126990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_registerListener__112627480,
             &PTR____CFConstantStringClassReference_110ee6178);
  return;
}



/* Entry: 108611698; end: 1086116bb; -[SCScreenCaptureReceiver _updateLastFrame] */

void FUN_108611698(undefined8 param_1,long param_2)

{
  func_0x000107c31804();
  *(undefined8 *)(param_2 + 0x48) = param_1;
  return;
}



/* Entry: 1086116bc; end: 108611713; -[SCScreenCaptureReceiver _checkFrameTimeout] */

void FUN_1086116bc(double param_1,long param_2)

{
  if ((*(long *)(param_2 + 0x40) == 1) &&
     (func_0x000107c31804(), 7.0 < param_1 - *(double *)(param_2 + 0x48))) {
                    /* WARNING: Could not recover jumptable at 0x00010be6b070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s__onReceiverError__1125785b8,
               &PTR____CFConstantStringClassReference_110ee64f8);
    return;
  }
  return;
}



/* Entry: 108611714; end: 108611867; -[SCScreenCaptureReceiver _onServerStarted] */

void FUN_108611714(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x40) == 0) {
    func_0x00010beda360();
    _objc_initWeak(auStack_38,param_1);
    puVar1 = PTR___dispatch_source_type_timer_11034be38;
    _dispatch_source_create
              (PTR___dispatch_source_type_timer_11034be38,0,0,*(undefined8 *)(param_1 + 0x10));
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    *(undefined **)(param_1 + 0x50) = puVar1;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108611868;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    _dispatch_source_set_event_handler(uVar3,&puStack_60);
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    uVar3 = 0;
    _dispatch_time(0,1000000000);
    _dispatch_source_set_timer(uVar4,uVar3,1000000000,1000000000);
    _dispatch_resume(*(undefined8 *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x40) = 1;
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c150f80();
    _objc_release(lVar2);
    func_0x00010be90120(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 108611868; end: 108611893;  */

void FUN_108611868(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddd960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108611894; end: 1086118fb; -[SCScreenCaptureReceiver _stopWithMessage:] */

void FUN_108611894(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010c255780(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c255780(*(undefined8 *)(param_1 + 0x28));
    _dispatch_source_cancel(*(undefined8 *)(param_1 + 0x50));
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + 0x40) = 0;
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c150fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1086118fc; end: 10861195b; -[SCScreenCaptureReceiver _onPause] */

void FUN_1086118fc(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x40) == 1) {
    *(undefined8 *)(param_1 + 0x40) = 2;
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c150f40();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be90130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__reportReceiverEvent_type__1125819e8,
               &PTR____CFConstantStringClassReference_110ee6358,0);
    return;
  }
  return;
}



/* Entry: 10861195c; end: 1086119bf; -[SCScreenCaptureReceiver _onResume] */

void FUN_10861195c(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x40) == 2) {
    *(undefined8 *)(param_1 + 0x40) = 1;
    func_0x00010beda360();
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c150f60();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be90130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__reportReceiverEvent_type__1125819e8,
               &PTR____CFConstantStringClassReference_110ee6378,0);
    return;
  }
  return;
}



/* Entry: 1086119c0; end: 1086119c7; -[SCScreenCaptureReceiver _reportReceiverEvent:type:] */

void FUN_1086119c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be90150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__reportReceiverEvent_type_fromAu_1125819f0,param_3,param_4,0);
  return;
}



/* Entry: 1086119c8; end: 108611a7b; -[SCScreenCaptureReceiver _reportReceiverEvent:type:fromAudioSender:] */

void FUN_1086119c8(long param_1,undefined8 param_2,undefined *param_3,undefined **param_4,
                  int param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != (undefined *)0x0) {
    puVar2 = param_3;
    if (param_5 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110ee6458;
    if (param_4 != (undefined **)0x0) {
      ppuVar1 = param_4;
    }
    FUN_108612a90(*(undefined8 *)(param_1 + 0x38),puVar2,ppuVar1,1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108611a7c; end: 108611b2f; -[SCScreenCaptureReceiver _reportExtensionEvent:type:fromAudioSender:] */

void FUN_108611a7c(long param_1,undefined8 param_2,undefined *param_3,undefined **param_4,
                  int param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != (undefined *)0x0) {
    puVar2 = param_3;
    if (param_5 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110ee6458;
    if (param_4 != (undefined **)0x0) {
      ppuVar1 = param_4;
    }
    FUN_108612860(*(undefined8 *)(param_1 + 0x38),puVar2,ppuVar1,1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108611b30; end: 108611bcb; -[SCScreenCaptureReceiver _onReceiverError:] */

void FUN_108611b30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c104940(uVar2,param_2,&PTR____CFConstantStringClassReference_110ee62f8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ee6758);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec3c40(param_1,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010be90120(param_1,param_2,&PTR____CFConstantStringClassReference_110ee63d8,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108611bcc; end: 108611c7b; -[SCScreenCaptureReceiver _onStop:] */

void FUN_108611bcc(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x40) != 0) {
    if (param_3 == (undefined **)0x0) {
      func_0x00010bec3c40(param_1,param_2,&PTR____CFConstantStringClassReference_110ee6798);
      ppuVar2 = &PTR____CFConstantStringClassReference_110ee64b8;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110ee6778);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bec3c40(param_1,param_2,puVar1);
      _objc_release(puVar1);
      ppuVar2 = param_3;
    }
    func_0x00010be90120(param_1,param_2,&PTR____CFConstantStringClassReference_110ee63b8,ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108611c7c; end: 108611d8f; -[SCScreenCaptureReceiver _onStart] */

void FUN_108611c7c(long param_1,undefined8 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0x40) == 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x108611cec;
    puStack_38 = &UNK_11087ec20;
    lStack_30 = param_1;
    uStack_28 = param_2;
    func_0x00010c24d9a0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_50);
  }
  *(undefined1 *)(param_1 + 0x5e) = 1;
  return;
}



/* Entry: 108611d90; end: 108611da3;  */

void FUN_108611d90(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c255790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),PTR_s_stop_112673008);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be6b690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x20),PTR_s__onServerStarted_112578740)
  ;
  return;
}



/* Entry: 108611da4; end: 108611eff; -[SCScreenCaptureReceiver _onNotification:enabled:fromAudioSender:] */

void FUN_108611da4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (lRam000000011372c4c0 != -1) {
    func_0x000107c27d9c(0x11372c4c0,&PTR___NSConcreteGlobalBlock_110a5b520);
  }
  lVar1 = lRam000000011372c4c8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010be8f840(param_1);
    goto LAB_108611ec8;
  }
  if ((param_4 & 1) == 0) {
    func_0x00010be90180(param_1);
LAB_108611e48:
    lVar2 = lVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067fc0();
    _objc_release(lVar2);
    if (lVar3 == 0) goto LAB_108611ec8;
  }
  else {
    func_0x00010bdcda40();
    func_0x00010be90180(param_1);
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_108611e48;
  }
  lVar2 = lVar1;
  func_0x00010c0dfd40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0dfd40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8f840(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_108611ec8:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108611f00; end: 10861231f;  */

void FUN_108611f00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_148 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cffe8;
  ppuStack_140 = &PTR____CFConstantStringClassReference_110ee6558;
  ppuStack_138 = &PTR____CFConstantStringClassReference_110ee6458;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110ee6178;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_148,3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_128 = &PTR____CFConstantStringClassReference_110ee6198;
  ppuStack_160 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0000;
  ppuStack_158 = &PTR____CFConstantStringClassReference_110ee6578;
  ppuStack_150 = &PTR____CFConstantStringClassReference_110ee6458;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_d0 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_160,3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_120 = &PTR____CFConstantStringClassReference_110ee61b8;
  ppuStack_178 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0018;
  ppuStack_170 = &PTR____CFConstantStringClassReference_110ee6598;
  ppuStack_168 = &PTR____CFConstantStringClassReference_110ee6458;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c8 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_178,3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_118 = &PTR____CFConstantStringClassReference_110ee61d8;
  ppuStack_190 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0030;
  ppuStack_188 = &PTR____CFConstantStringClassReference_110ee65b8;
  ppuStack_180 = &PTR____CFConstantStringClassReference_110ee6458;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c0 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_190,3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_110 = &PTR____CFConstantStringClassReference_110ee61f8;
  ppuStack_1a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0048;
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110ee65d8;
  ppuStack_198 = &PTR____CFConstantStringClassReference_110ee6458;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_b8 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_1a8,3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_108 = &PTR____CFConstantStringClassReference_110ee6218;
  ppuStack_1c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0060;
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_110ee64b8;
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_110ee6458;
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_b0 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_1c0,3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_100 = &PTR____CFConstantStringClassReference_110ee6238;
  ppuStack_1d8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0078;
  ppuStack_1d0 = &PTR____CFConstantStringClassReference_110ee6658;
  ppuStack_1c8 = &PTR____CFConstantStringClassReference_110ee6458;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a8 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_1d8,3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110ee62b8;
  ppuStack_1f0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0048;
  ppuStack_1e8 = &PTR____CFConstantStringClassReference_110ee6618;
  ppuStack_1e0 = &PTR____CFConstantStringClassReference_110ee6458;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a0 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_1f0,3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110ee62d8;
  ppuStack_208 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0048;
  ppuStack_200 = &PTR____CFConstantStringClassReference_110ee6638;
  ppuStack_1f8 = &PTR____CFConstantStringClassReference_110ee6458;
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_208,3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110ee6258;
  ppuStack_220 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0090;
  ppuStack_218 = &PTR____CFConstantStringClassReference_110ee6678;
  ppuStack_210 = &PTR____CFConstantStringClassReference_110ee66b8;
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_220,3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110ee6278;
  ppuStack_238 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0090;
  ppuStack_230 = &PTR____CFConstantStringClassReference_110ee6678;
  ppuStack_228 = &PTR____CFConstantStringClassReference_110ee66d8;
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_238,3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110ee6298;
  ppuStack_250 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0048;
  ppuStack_248 = &PTR____CFConstantStringClassReference_110ee65f8;
  ppuStack_240 = &PTR____CFConstantStringClassReference_110ee6458;
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_250,3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = &puStack_d0;
  puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar13;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam000000011372c4c8;
  puRam000000011372c4c8 = puVar14;
  _objc_release(uVar1);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar16);
  ppuVar17 = ppuVar16;
  func_0x00010c0dfd40(ppuVar16,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar17;
  func_0x00010c067fc0();
  _objc_release(ppuVar17);
  if ((long)ppuVar15 < 4) {
    if (ppuVar15 == (undefined **)0x1) {
      func_0x00010be6b960(puVar2);
    }
    else if (ppuVar15 == (undefined **)0x2) {
      func_0x00010be6a9e0(puVar2);
    }
    else if (ppuVar15 == (undefined **)0x3) {
      func_0x00010be6b2a0(puVar2);
    }
  }
  else {
    if (ppuVar15 == (undefined **)0x4) {
      ppuVar17 = (undefined **)0x0;
    }
    else {
      if (ppuVar15 != (undefined **)0x5) {
        if (ppuVar15 == (undefined **)0x6) {
          ppuVar17 = ppuVar16;
          func_0x00010c0dfd40(ppuVar16,param_2,2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be6ba00(puVar2,param_2,ppuVar17);
          _objc_release(ppuVar17);
        }
        goto LAB_108612410;
      }
      ppuVar17 = &PTR____CFConstantStringClassReference_110ee64d8;
    }
    func_0x00010be6ba00(puVar2,param_2,ppuVar17);
  }
LAB_108612410:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar16);
  return;
}



/* Entry: 108612320; end: 108612423; -[SCScreenCaptureReceiver _applyAction:] */

void FUN_108612320(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0dfd40(param_3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  _objc_release(lVar1);
  if (lVar2 < 4) {
    if (lVar2 == 1) {
      func_0x00010be6b960(param_1);
    }
    else if (lVar2 == 2) {
      func_0x00010be6a9e0(param_1);
    }
    else if (lVar2 == 3) {
      func_0x00010be6b2a0(param_1);
    }
  }
  else {
    if (lVar2 == 4) {
      ppuVar3 = (undefined **)0x0;
    }
    else {
      if (lVar2 != 5) {
        if (lVar2 == 6) {
          lVar1 = param_3;
          func_0x00010c0dfd40(param_3,param_2,2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be6ba00(param_1,param_2,lVar1);
          _objc_release(lVar1);
        }
        goto LAB_108612410;
      }
      ppuVar3 = &PTR____CFConstantStringClassReference_110ee64d8;
    }
    func_0x00010be6ba00(param_1,param_2,ppuVar3);
  }
LAB_108612410:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108612424; end: 1086124c3; -[SCScreenCaptureReceiver _reportRunState:] */

void FUN_108612424(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c0dfd40(param_3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c067fc0();
  _objc_release(param_3);
  if (lVar1 - 4U < 3) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c150f00();
  }
  else {
    if (lVar1 != 7) {
      return;
    }
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c150f20();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1086124c4; end: 108612603; -[SCScreenCaptureReceiver videoSocketReceiver:onFrame:] */

void FUN_1086124c4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if ((param_4 != 0) && (*(long *)(param_1 + 0x40) != 0)) {
    func_0x00010beda360(param_1);
    if (param_3 == *(long *)(param_1 + 0x20)) {
      *(undefined1 *)(param_1 + 0x5f) = 1;
    }
    _CFRetain(param_4);
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x1086125a4;
    puStack_50 = &UNK_110846540;
    _objc_copyWeak(auStack_48,auStack_38);
    lStack_40 = param_4;
    func_0x000107c27d8c(uVar1,&puStack_68);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108612604; end: 108612607; -[SCScreenCaptureReceiver videoSocketReceiverStreamStarted:] */

void FUN_108612604(void)

{
  return;
}



/* Entry: 108612608; end: 10861260b; -[SCScreenCaptureReceiver videoSocketReceiverStreamStopped:] */

void FUN_108612608(void)

{
  return;
}



/* Entry: 10861260c; end: 108612657; -[SCScreenCaptureReceiver videoSocketReceiverStreamDataError:] */

void FUN_10861260c(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x40) == 1) {
    func_0x00010c104940(*(undefined8 *)(param_1 + 0x30),param_2,
                        &PTR____CFConstantStringClassReference_110ee6318);
                    /* WARNING: Could not recover jumptable at 0x00010be90130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__reportReceiverEvent_type__1125819e8,
               &PTR____CFConstantStringClassReference_110ee6438,0);
    return;
  }
  return;
}



/* Entry: 108612658; end: 10861273b; -[SCScreenCaptureReceiver notificationHandler:onNotification:fromAudioSender:] */

void FUN_108612658(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x58);
  uVar1 = *(undefined1 *)(param_1 + 0x5c);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10861273c;
  puStack_68 = &UNK_110859060;
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_60 = param_4;
  uStack_50 = uVar1;
  uStack_4f = param_5;
  _objc_retain(param_4);
  func_0x000107c27d8c(uVar2,&puStack_80);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _os_unfair_lock_unlock(param_1 + 0x58);
  return;
}



/* Entry: 10861273c; end: 108612777;  */

void FUN_10861273c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a6c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108612778; end: 1086127eb; -[SCScreenCaptureReceiver .cxx_destruct] */

void FUN_108612778(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1086127ec; end: 10861285f; -[SCGrapheneAddliveScreenCaptureEventsMetric2 init] */

undefined1 * FUN_1086127ec(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fd200;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108612860; end: 108612a8f;  */

char * FUN_108612860(long param_1,char *param_2,char *param_3,undefined8 param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_180;
  undefined *puStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar6 = param_3;
  uVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar12 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x000107c27984(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar6 = acStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pcStack_80 = unaff_x23;
    func_0x000107c278ac(&pcStack_80);
    lVar10 = 0;
    puVar12 = auStack_78;
    uVar5 = param_4;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_108612a90;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar6;
  uVar8 = uVar5;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar12;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  puVar12 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
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
    func_0x000107c278b8(auStack_118,pcVar2);
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
    func_0x000107c278b8(auStack_100,pcVar2);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x000107c27984(acStack_138,auStack_118,&lStack_e8,2);
    pcVar7 = acStack_138;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a5b590);
    pcStack_120 = acStack_138;
    func_0x000107c278ac(&pcStack_120);
    lVar10 = 0;
    puVar12 = auStack_118;
    uVar8 = uVar5;
    do {
      if ((&cStack_e9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_180;
  pcStack_148 = FUN_108612cc0;
  puStack_170 = puVar12;
  pcStack_168 = pcVar2;
  pcStack_160 = pcVar6;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar7);
  _objc_retain(uVar8);
  _objc_retain(param_5);
  puStack_178 = PTR_PTR_1126fd208;
  pcStack_180 = pcVar3;
  _objc_msgSendSuper2(&pcStack_180,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    _objc_retain(uVar8);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 8);
    *(undefined8 *)((long)ppcVar4 + 8) = uVar8;
    _objc_release(uVar5);
    _objc_retain(ppcVar4);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 0x10);
    *(char ***)((long)ppcVar4 + 0x10) = ppcVar4;
    _objc_release(uVar5);
    _objc_retain(pcVar7);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 0x18);
    *(char **)((long)ppcVar4 + 0x18) = pcVar7;
    _objc_release(uVar5);
    uVar5 = param_5;
    _objc_retainBlock();
    uVar9 = *(undefined8 *)((long)ppcVar4 + 0x20);
    *(undefined8 *)((long)ppcVar4 + 0x20) = uVar5;
    _objc_release(uVar9);
  }
  _objc_release(param_5);
  _objc_release(uVar8);
  _objc_release(pcVar7);
  return (char *)ppcVar4;
}



/* Entry: 108612a90; end: 108612cbf;  */

char * FUN_108612a90(long param_1,char *param_2,char *param_3,undefined8 param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  char *pcStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  uVar6 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar10 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x000107c27984(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = acStack_98;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110a5b590);
    pcStack_80 = acStack_98;
    func_0x000107c278ac(&pcStack_80);
    lVar8 = 0;
    puVar10 = auStack_78;
    uVar6 = param_4;
    do {
      if ((&cStack_49)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_e0;
  pcStack_a8 = FUN_108612cc0;
  puStack_d0 = puVar10;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(uVar6);
  _objc_retain(param_5);
  puStack_d8 = PTR_PTR_1126fd208;
  pcStack_e0 = pcVar3;
  _objc_msgSendSuper2(&pcStack_e0,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    _objc_retain(uVar6);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 8);
    *(undefined8 *)((long)ppcVar4 + 8) = uVar6;
    _objc_release(uVar5);
    _objc_retain(ppcVar4);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 0x10);
    *(char ***)((long)ppcVar4 + 0x10) = ppcVar4;
    _objc_release(uVar5);
    _objc_retain(pcVar1);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 0x18);
    *(char **)((long)ppcVar4 + 0x18) = pcVar1;
    _objc_release(uVar5);
    uVar5 = param_5;
    _objc_retainBlock();
    uVar7 = *(undefined8 *)((long)ppcVar4 + 0x20);
    *(undefined8 *)((long)ppcVar4 + 0x20) = uVar5;
    _objc_release(uVar7);
  }
  _objc_release(param_5);
  _objc_release(uVar6);
  _objc_release(pcVar1);
  return (char *)ppcVar4;
}



/* Entry: 108612cc0; end: 108612da3; -[SCDataLifetimeExtender initWithData:dispatch:onRelease:] */

undefined1 *
FUN_108612cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fd208;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(puVar1);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 **)((long)puVar1 + 0x10) = puVar1;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    uVar2 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108612da4; end: 108612dfb; -[SCDataLifetimeExtender releaseData] */

void FUN_108612da4(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108612dfc;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x000107c27d8c(*(undefined8 *)(param_1 + 8),&puStack_38);
  return;
}



/* Entry: 108612dfc; end: 108612e03;  */

void FUN_108612dfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddfc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__clear_1125558a8);
  return;
}



/* Entry: 108612e04; end: 108612e2b; -[SCDataLifetimeExtender getData] */

void FUN_108612e04(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108612e2c; end: 108612e7b; -[SCDataLifetimeExtender _clear] */

void FUN_108612e2c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined ***)(param_1 + 0x20) = &PTR___NSConcreteGlobalBlock_110a5b620;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108612e7c; end: 108612e7f;  */

void FUN_108612e7c(void)

{
  return;
}



/* Entry: 108612e80; end: 108612ec7; -[SCDataLifetimeExtender .cxx_destruct] */

void FUN_108612e80(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108612ec8; end: 108612f07; -[SCHTTPVideoMessageHandler init] */

void FUN_108612ec8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126fd210;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x20) = 0xffffffffffffffff;
  }
  return;
}



/* Entry: 108612f08; end: 108612f4f; -[SCHTTPVideoMessageHandler clearIncoming] */

void FUN_108612f08(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
  return;
}



/* Entry: 108612f50; end: 108612fe3; -[SCHTTPVideoMessageHandler appendIncomingBytes:onError:] */

void FUN_108612f50(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (lVar1 = param_3, _dispatch_data_get_size(), lVar1 != 0)) {
    uStack_40 = 0;
    uStack_38 = 0;
    lVar1 = param_3;
    _dispatch_data_create_map(param_3,&uStack_38,&uStack_40);
    func_0x00010bdcd180(param_1);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108612fe4; end: 1086131d3; -[SCHTTPVideoMessageHandler _appendIncomingBytes:length:onError:] */

void FUN_108612fe4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_5);
  if (*(long *)(param_1 + 8) == 0) {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    _CFHTTPMessageCreateEmpty(uVar1,0);
    uVar5 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar1;
    _objc_release(uVar5);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010bf06a40();
    goto LAB_108613050;
  }
  uVar6 = *(ulong *)(param_1 + 8);
  _CFHTTPMessageAppendBytes(uVar6,param_3,param_4);
  uVar2 = uVar6;
  _CFHTTPMessageIsHeaderComplete();
  if ((int)uVar2 == 0) goto LAB_108613050;
  uVar2 = uVar6;
  _CFHTTPMessageCopyAllHeaderFields();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(ulong *)(param_1 + 0x18) = uVar2;
  _objc_release(uVar1);
  lVar7 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar7);
  _objc_retain(lVar7);
  if (lVar7 == 0) {
LAB_1086130ec:
    lVar8 = -1;
  }
  else {
    lVar3 = lVar7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) goto LAB_1086130ec;
    lVar8 = lVar3;
    func_0x00010c067fc0();
    _objc_release(lVar3);
  }
  _objc_release(lVar7);
  _objc_release(lVar7);
  *(long *)(param_1 + 0x20) = lVar8;
  if ((*(long *)(param_1 + 0x18) == 0) || (lVar8 < 0)) {
    func_0x00010bf3b580(param_1);
    (**(code **)(param_5 + 0x10))(param_5);
    goto LAB_108613050;
  }
  _CFHTTPMessageCopyBody();
  if (uVar6 == 0) {
    if (0 < *(long *)(param_1 + 0x20)) goto LAB_108613174;
    puVar4 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    _objc_alloc_init();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar4;
LAB_1086131c4:
    _objc_release(uVar1);
  }
  else {
    uVar2 = uVar6;
    func_0x00010c08fa60();
    if (((long)*(ulong *)(param_1 + 0x20) < 1) || (*(ulong *)(param_1 + 0x20) <= uVar2)) {
      _objc_retain(uVar6);
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      *(ulong *)(param_1 + 0x10) = uVar6;
      goto LAB_1086131c4;
    }
LAB_108613174:
    puVar4 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x00010bf64a60();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar4;
    _objc_release(uVar1);
    if (uVar6 != 0) {
      func_0x00010bf06ae0(*(undefined8 *)(param_1 + 0x10));
    }
  }
  _objc_release(uVar6);
LAB_108613050:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1086131d4; end: 108613207; -[SCHTTPVideoMessageHandler isIncomingReady] */

bool FUN_1086131d4(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  bVar1 = false;
  if (uVar2 != 0) {
    func_0x00010c08fa60();
    bVar1 = *(ulong *)(param_1 + 0x20) <= uVar2;
  }
  return bVar1;
}



/* Entry: 108613208; end: 10861328b; -[SCHTTPVideoMessageHandler getIncomingFrameNumber] */

long FUN_108613208(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar2);
  _objc_retain(lVar2);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x00010c0e00e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110ee67b8);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar3 = lVar1;
      func_0x00010c067fc0();
      _objc_release(lVar1);
      goto LAB_108613268;
    }
  }
  lVar3 = -1;
LAB_108613268:
  _objc_release(lVar2);
  _objc_release(lVar2);
  return lVar3;
}



/* Entry: 10861328c; end: 1086132cb; -[SCHTTPVideoMessageHandler isAudioFrame] */

bool FUN_10861328c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110ee6858);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 1086132cc; end: 108613b03; -[SCHTTPVideoMessageHandler makeIncomingSampleBuffer:onRelease:onError:] */

ulong FUN_1086132cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long param_5)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_150;
  undefined *puStack_120;
  ulong uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  code *pcStack_f4;
  undefined *puStack_ec;
  undefined8 uStack_e0;
  double adStack_d8 [2];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long alStack_b0 [10];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar9 = *(undefined **)(param_1 + 0x18);
  _objc_retain(puVar9);
  puVar10 = *(undefined **)(param_1 + 0x10);
  _objc_retain(puVar10);
  puVar2 = puVar10;
  func_0x00010c08fa60();
  puVar14 = *(undefined **)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x00010c06c900();
  func_0x00010bf3b580(param_1);
  if ((((puVar10 == (undefined *)0x0) || (puVar9 == (undefined *)0x0)) || ((long)puVar14 < 0)) ||
     (puVar2 < puVar14)) {
    (**(code **)(param_5 + 0x10))(param_5);
    uVar11 = 0;
    goto LAB_108613aac;
  }
  if (puVar2 != puVar14) {
    puVar2 = puVar10;
    func_0x00010c25eac0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    func_0x00010c08fa60(puVar2);
    func_0x00010bdcd180(param_1);
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126da860;
  _objc_alloc();
  func_0x00010c0082e0();
  _objc_retain();
  _objc_retain(puVar9);
  puVar4 = puVar2;
  if ((int)lVar3 == 0) {
    if (puVar2 != (undefined *)0x0) {
      func_0x00010bfc4880();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) goto LAB_108613a88;
      puVar5 = puVar4;
      _objc_retainAutorelease();
      func_0x00010c0d3c60();
      if (puVar14 != (undefined *)0x0) {
        puVar16 = puVar9;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar16 != (undefined *)0x0) {
          puVar15 = puVar16;
          func_0x00010c067fc0();
          _objc_release(puVar16);
          if (puVar15 == (undefined *)0x0) {
            _objc_retain(puVar9);
            _objc_retain(puVar2);
            puVar14 = puVar9;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar14 == (undefined *)0x0) {
              puStack_120 = (undefined *)0xffffffff;
            }
            else {
              puStack_120 = puVar14;
              func_0x00010c067fc0();
              _objc_release(puVar14);
            }
            puVar14 = puVar9;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar14 == (undefined *)0x0) {
              puVar16 = (undefined *)0xffffffffffffffff;
            }
            else {
              puVar16 = puVar14;
              func_0x00010c067fc0();
              _objc_release(puVar14);
            }
            puVar14 = puVar9;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar14 == (undefined *)0x0) {
              puVar15 = (undefined *)0xffffffffffffffff;
            }
            else {
              puVar15 = puVar14;
              func_0x00010c067fc0();
              _objc_release(puVar14);
            }
            puVar14 = puVar9;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar14 == (undefined *)0x0) {
              puVar17 = (undefined *)0xffffffffffffffff;
            }
            else {
              puVar17 = puVar14;
              func_0x00010c067fc0();
              _objc_release(puVar14);
            }
            alStack_b0[0] = 0;
            uStack_150 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
            _CVPixelBufferCreateWithBytes
                      (uStack_150,puVar16,puVar15,puStack_120,puVar5,puVar17,FUN_108613d74,puVar2,0,
                       alStack_b0);
            _objc_release(puVar2);
            puVar14 = puVar9;
            lVar3 = alStack_b0[0];
          }
          else {
            if ((undefined *)0x3 < puVar15) goto LAB_108613a84;
            _objc_retain(puVar2);
            _objc_retain(puVar9);
            puVar16 = puVar9;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar16 == (undefined *)0x0) {
              puStack_160 = (undefined *)0xffffffff;
            }
            else {
              puStack_160 = puVar16;
              func_0x00010c067fc0();
              _objc_release(puVar16);
            }
            puVar16 = puVar9;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar16 == (undefined *)0x0) {
              puStack_168 = (undefined *)0xffffffffffffffff;
            }
            else {
              puStack_168 = puVar16;
              func_0x00010c067fc0();
              _objc_release(puVar16);
            }
            puVar16 = puVar9;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar16 == (undefined *)0x0) {
              puStack_170 = (undefined *)0xffffffffffffffff;
            }
            else {
              puStack_170 = puVar16;
              func_0x00010c067fc0();
              _objc_release(puVar16);
            }
            lVar13 = (long)puVar15 << 3;
            lVar3 = lVar13;
            _malloc();
            lVar7 = lVar13;
            _malloc();
            lVar8 = lVar13;
            _malloc();
            _malloc();
            puVar16 = (undefined *)0x0;
            do {
              puVar17 = puVar9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              if (puVar17 == (undefined *)0x0) {
                puVar18 = (undefined *)0xffffffffffffffff;
              }
              else {
                puVar18 = puVar17;
                func_0x00010c067fc0();
                _objc_release(puVar17);
              }
              *(undefined **)(lVar3 + (long)puVar16 * 8) = puVar5 + (long)puVar18;
              puVar17 = puVar9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              if (puVar17 == (undefined *)0x0) {
                puVar18 = (undefined *)0xffffffffffffffff;
              }
              else {
                puVar18 = puVar17;
                func_0x00010c067fc0();
                _objc_release(puVar17);
              }
              *(undefined **)(lVar7 + (long)puVar16 * 8) = puVar18;
              puVar17 = puVar9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              if (puVar17 == (undefined *)0x0) {
                puVar18 = (undefined *)0xffffffffffffffff;
              }
              else {
                puVar18 = puVar17;
                func_0x00010c067fc0();
                _objc_release(puVar17);
              }
              *(undefined **)(lVar8 + (long)puVar16 * 8) = puVar18;
              puVar17 = puVar9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              if (puVar17 == (undefined *)0x0) {
                puVar18 = (undefined *)0xffffffffffffffff;
              }
              else {
                puVar18 = puVar17;
                func_0x00010c067fc0();
                _objc_release(puVar17);
              }
              *(undefined **)(lVar13 + (long)puVar16 * 8) = puVar18;
              puVar16 = puVar16 + 1;
            } while (puVar15 != puVar16);
            alStack_b0[0] = 0;
            uStack_150 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
            _CVPixelBufferCreateWithPlanarBytes
                      (uStack_150,puStack_168,puStack_170,puStack_160,puVar5,puVar14,puVar15,lVar3,
                       lVar7,lVar8,lVar13,0x108613d78,puVar2,0,alStack_b0);
            _free(lVar3);
            _free(lVar7);
            _free(lVar8);
            _free(lVar13);
            lVar3 = alStack_b0[0];
            _objc_release(puVar9);
            puVar14 = puVar2;
          }
          _objc_release(puVar14);
          if (lVar3 != 0) {
            FUN_108613c5c(alStack_b0,puVar9);
            adStack_d8[0] = 0.0;
            _CMVideoFormatDescriptionCreateForImageBuffer(uStack_150,lVar3,adStack_d8);
            uStack_100 = 0;
            _CMSampleBufferCreateReadyWithImageBuffer
                      (uStack_150,lVar3,adStack_d8[0],alStack_b0,&uStack_100);
            _CFRelease(lVar3);
            _CFRelease(adStack_d8[0]);
            uVar11 = uStack_100;
            goto LAB_108613a8c;
          }
        }
      }
      goto LAB_108613a84;
    }
    uVar11 = 0;
  }
  else {
    func_0x00010bfc4880();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
LAB_108613a88:
      uVar11 = 0;
    }
    else {
      if ((puVar14 == (undefined *)0x0) ||
         (puVar5 = puVar4, func_0x00010c08fa60(), puVar5 != puVar14)) {
LAB_108613a84:
        func_0x00010c128500(puVar2);
        goto LAB_108613a88;
      }
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      puVar5 = puVar9;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 == (undefined *)0x0) {
        adStack_d8[0] = -1.0;
      }
      else {
        puVar16 = puVar5;
        func_0x00010c067fc0();
        _objc_release(puVar5);
        adStack_d8[0] = (double)(long)puVar16;
      }
      adStack_d8[1] = 2.63628054990002e-313;
      puVar5 = puVar9;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 == (undefined *)0x0) {
        iVar1 = -1;
      }
      else {
        puVar16 = puVar5;
        func_0x00010c067fc0();
        iVar1 = (int)puVar16;
        _objc_release(puVar5);
      }
      uStack_b8 = CONCAT44(uStack_b8._4_4_,0x10);
      uStack_c0 = CONCAT44(iVar1,iVar1 << 1);
      uStack_c8 = CONCAT44(1,iVar1 << 1);
      uStack_e0 = 0;
      uVar12 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
      uVar6 = uVar12;
      _CMAudioFormatDescriptionCreate(uVar12,adStack_d8,0,0,0,0,0,&uStack_e0);
      if ((int)uVar6 != 0) goto LAB_108613a84;
      uStack_100 = uStack_100 & 0xffffffff00000000;
      pcStack_f4 = FUN_108613c58;
      puVar5 = puVar4;
      puStack_ec = puVar2;
      _objc_retainAutorelease(puVar4);
      func_0x00010c0d3c60();
      uStack_108 = 0;
      uVar6 = uVar12;
      _CMBlockBufferCreateWithMemoryBlock
                (uVar12,puVar5,puVar14,uVar12,&uStack_100,0,puVar14,0,&uStack_108);
      if ((int)uVar6 != 0) {
        _CFRelease(uStack_e0);
        goto LAB_108613a84;
      }
      FUN_108613c5c(alStack_b0,puVar9);
      uStack_110 = 0;
      uVar11 = 0;
      if ((uStack_c0 & 0xffffffff) != 0) {
        uVar11 = (ulong)puVar14 / (uStack_c0 & 0xffffffff);
      }
      _CMSampleBufferCreate(uVar12,uStack_108,1,0,0,uStack_e0,uVar11,1,alStack_b0,0,0,&uStack_110);
      _CFRelease(uStack_108);
      _CFRelease(uStack_e0);
      uVar11 = uStack_110;
      if ((int)uVar12 != 0) goto LAB_108613a84;
    }
LAB_108613a8c:
    _objc_release(puVar4);
  }
  _objc_release(puVar9);
  _objc_release(puVar2);
  _objc_release(puVar2);
LAB_108613aac:
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar11;
}



/* Entry: 108613b04; end: 108613c13; -[SCHTTPVideoMessageHandler makeFrameAckMessage:releaseQueue:] */

void FUN_108613b04(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  uVar4 = *(undefined8 *)PTR__kCFHTTPVersion1_1_11034bad8;
  _objc_retain(in_x3);
  _CFHTTPMessageCreateResponse(uVar3,200,0,uVar4);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _CFHTTPMessageSetHeaderFieldValue(uVar3,&PTR____CFConstantStringClassReference_110ee67b8,puVar1);
  uVar4 = uVar3;
  _CFHTTPMessageCopySerializedMessage();
  _CFRelease(uVar3);
  uVar3 = uVar4;
  _CFDataGetBytePtr(uVar4);
  uVar2 = uVar4;
  _CFDataGetLength(uVar4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc0000000;
  pcStack_48 = FUN_108613c14;
  puStack_40 = &UNK_110848088;
  uStack_38 = uVar4;
  _dispatch_data_create(uVar3,uVar2,in_x3,&puStack_58);
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108613c14; end: 108613c1b;  */

void FUN_108613c14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFRelease_11034a768)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108613c1c; end: 108613c57; -[SCHTTPVideoMessageHandler .cxx_destruct] */

void FUN_108613c1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108613c58; end: 108613c5b;  */

void FUN_108613c58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_releaseData_112627b60);
  return;
}



/* Entry: 108613c5c; end: 108613d73;  */

void FUN_108613c5c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar4 = -1;
  }
  else {
    lVar4 = lVar2;
    func_0x00010c067fc0();
    _objc_release(lVar2);
  }
  lVar2 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar5 = 0xffffffff;
  }
  else {
    lVar5 = lVar2;
    func_0x00010c067fc0();
    _objc_release(lVar2);
  }
  lVar2 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar6 = -1;
  }
  else {
    lVar6 = lVar2;
    func_0x00010c067fc0();
    _objc_release(lVar2);
  }
  puVar1 = PTR__kCMTimeInvalid_110348648;
  uVar8 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
  uVar7 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
  param_1[1] = uVar8;
  *param_1 = uVar7;
  uVar3 = *(undefined8 *)(puVar1 + 0x10);
  param_1[2] = uVar3;
  param_1[7] = uVar8;
  param_1[6] = uVar7;
  param_1[8] = uVar3;
  _CMTimeMakeWithEpoch(param_1 + 3,lVar4,lVar5,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108613d74; end: 108613d7b;  */

void FUN_108613d74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_releaseData_112627b60);
  return;
}



/* Entry: 108613d7c; end: 108613f43; -[SCVideoSocketReceiver initWithSocketFilename:dispatch:delegate:] */

undefined1 *
FUN_108613d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126fd218;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    puVar6 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    func_0x00010c14ce20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    func_0x00010bf4b0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    if (puVar3 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar4 = puVar3;
      func_0x00010bdc2c60(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c0f5800();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    puVar2 = PTR_PTR_1126da868;
    _objc_alloc_init();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126da870;
    _objc_alloc();
    func_0x00010c04a360();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar6);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108613f44; end: 108613f4b; -[SCVideoSocketReceiver start:] */

void FUN_108613f44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24d9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_start__112671090);
  return;
}



/* Entry: 108613f4c; end: 108613f53; -[SCVideoSocketReceiver stop] */

void FUN_108613f4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c255790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_stop_112673008);
  return;
}



/* Entry: 108613f54; end: 1086140c3; -[SCVideoSocketReceiver _processIncomingMessage] */

void FUN_108613f54(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined1 auStack_58 [8];
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfc6560();
  _objc_initWeak(auStack_58,param_1);
  lVar3 = *(long *)(param_1 + 0x20);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1086140c4;
  puStack_70 = &UNK_110846540;
  _objc_copyWeak(auStack_68,auStack_58);
  lStack_60 = lVar1;
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c0b7220();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    if (lVar1 == 1) {
      _CMSampleBufferGetImageBuffer(lVar3);
    }
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c29b340();
    _objc_release(param_1);
    _CFRelease(lVar3);
  }
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1086140c4; end: 108614123;  */

void FUN_1086140c4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9e640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108614124; end: 10861415f; -[SCVideoSocketReceiver _onDataError] */

void FUN_108614124(long param_1)

{
  func_0x00010bf3db80(*(undefined8 *)(param_1 + 0x18));
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29b360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108614160; end: 1086141cb; -[SCVideoSocketReceiver _sendAck:] */

void FUN_108614160(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0b7180(uVar2,param_2,param_3,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010c2bda00(*(undefined8 *)(param_1 + 0x18),param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1086141cc; end: 1086142cb; -[SCVideoSocketReceiver videoSocketServer:onData:] */

void FUN_1086141cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf06c40(uVar2);
  while( true ) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c0756e0();
    if (iVar1 == 0) break;
    func_0x00010be81500(param_1);
  }
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1086142cc; end: 1086142f7;  */

void FUN_1086142cc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be68900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1086142f8; end: 108614333; -[SCVideoSocketReceiver videoSocketServerConnected:] */

void FUN_1086142f8(long param_1)

{
  func_0x00010bf3b580(*(undefined8 *)(param_1 + 0x20));
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29b380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108614334; end: 10861436f; -[SCVideoSocketReceiver videoSocketServerDisconnected:] */

void FUN_108614334(long param_1)

{
  func_0x00010bf3b580(*(undefined8 *)(param_1 + 0x20));
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29b3a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108614370; end: 1086143af; -[SCVideoSocketReceiver .cxx_destruct] */

void FUN_108614370(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1086143b0; end: 10861448b; -[SCVideoSocketServer initWithSocketFilePath:dispatch:delegate:] */

undefined1 *
FUN_1086143b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fd220;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = 0xffffffffffffffff;
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10861448c; end: 1086144cf; -[SCVideoSocketServer dealloc] */

void FUN_10861448c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c255780();
  puStack_28 = PTR_PTR_1126fd220;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1086144d0; end: 108614527; -[SCVideoSocketServer start:] */

void FUN_1086144d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010bec01a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_3 + 0x10))(param_3,param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108614528; end: 108614577; -[SCVideoSocketServer stop] */

void FUN_108614528(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf3db80();
  if (*(long *)(param_1 + 0x28) != 0) {
    _dispatch_source_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar1);
  }
  if (*(int *)(param_1 + 0x20) != -1) {
    _close();
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  }
  return;
}



/* Entry: 108614578; end: 108614627; -[SCVideoSocketServer writeData:] */

void FUN_108614578(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    _objc_retain(param_3);
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_108614628;
    puStack_58 = &UNK_110a5b6a0;
    lStack_50 = param_1;
    uStack_48 = param_2;
    _dispatch_io_write(lVar2,0,param_3,lVar1,&puStack_70);
    _objc_release(param_3);
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 108614628; end: 10861462b;  */

void FUN_108614628(void)

{
  return;
}



/* Entry: 10861462c; end: 108614877; -[SCVideoSocketServer _startImpl] */

void FUN_10861462c(uint *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  uint *puStack_d0;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined2 uStack_68;
  undefined6 uStack_66;
  undefined2 uStack_60;
  undefined8 uStack_5e;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar1 = (uint *)PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_1;
  if (param_1[8] == 0xffffffff) {
    if (*(long *)(param_1 + 6) == 0) {
      uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_40 = &PTR____CFConstantStringClassReference_110ee6a18;
      puVar4 = (uint *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&uStack_48,1
                         );
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      goto LAB_108614844;
    }
    puVar1 = (uint *)0x1;
    _socket(1,1,0);
    puVar4 = puVar1;
    if (-1 < (int)(uint)puVar1) {
      uStack_c4 = 1;
      _setsockopt();
      if ((int)puVar4 != -1) {
        uStack_5e = 0;
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_66 = 0;
        uStack_70 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_b8 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_c0 = 0x100;
        uVar2 = *(undefined8 *)(param_1 + 6);
        func_0x00010bdc3520();
        _unlink();
        _strncpy((ulong)&uStack_c0 | 2,uVar2,0x67);
        puVar4 = puVar1;
        _bind(puVar1,&uStack_c0,0x6a);
        if ((-1 < (int)puVar4) && (puVar4 = puVar1, _listen(puVar1,0x100), -1 < (int)puVar4)) {
          param_1[8] = (uint)puVar1;
          puVar3 = param_1 + 4;
          _objc_loadWeakRetained(puVar3);
          puVar4 = (uint *)PTR___dispatch_source_type_read_11034be30;
          _dispatch_source_create
                    (PTR___dispatch_source_type_read_11034be30,(ulong)puVar1 & 0xffffffff,0,puVar3);
          _objc_release(puVar3);
          puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_e8 = 0xc2000000;
          pcStack_e0 = FUN_1086149a0;
          puStack_d8 = &UNK_110842e18;
          puStack_d0 = param_1;
          _dispatch_source_set_event_handler(puVar4,&puStack_f0);
          _dispatch_resume(puVar4);
          uVar2 = *(undefined8 *)(param_1 + 10);
          *(uint **)(param_1 + 10) = puVar4;
          _objc_retain(puVar4);
          _objc_release(uVar2);
          _objc_release();
          goto LAB_10861465c;
        }
        _close();
        puVar4 = puVar1;
      }
    }
    FUN_108614878();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar4;
  }
  else {
LAB_10861465c:
    puVar1 = (uint *)0x0;
  }
LAB_108614844:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ___error();
    puVar5 = (undefined4 *)(ulong)*puVar4;
    _strerror();
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar5 == (undefined4 *)0x0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ___error();
      _strerror(*puVar5);
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar1 = (uint *)PTR__OBJC_CLASS___NSError_1126ae858;
    ___error();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdc3d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(ppuVar6[4],PTR_s__acceptConnection_11254e8e8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108614878; end: 10861499f;  */

void FUN_108614878(uint *param_1)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ___error();
  puVar1 = (undefined4 *)(ulong)*param_1;
  _strerror();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar1 == (undefined4 *)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ___error();
    _strerror(*puVar1);
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  ___error();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdc3d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(ppuVar2[4],PTR_s__acceptConnection_11254e8e8);
  return;
}



/* Entry: 1086149a0; end: 1086149a7;  */

void FUN_1086149a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc3d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__acceptConnection_11254e8e8);
  return;
}



/* Entry: 1086149a8; end: 108614b67; -[SCVideoSocketServer _acceptConnection] */

void FUN_1086149a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_1 + 0x24) == -1) {
    uStack_6c = 0x10;
    uVar2 = (ulong)*(uint *)(param_1 + 0x20);
    _accept(uVar2,auStack_68,&uStack_6c);
    if (-1 < (int)uVar2) {
      uStack_70 = 1;
      uVar3 = uVar2;
      _setsockopt();
      if ((int)uVar3 != -1) {
        lVar4 = param_1 + 0x10;
        _objc_loadWeakRetained(lVar4);
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0xc2000000;
        pcStack_90 = FUN_108614b68;
        puStack_88 = &UNK_110a5b6d0;
        lVar5 = 0;
        lStack_80 = param_1;
        uStack_78 = param_2;
        _dispatch_io_create(0,uVar2,lVar4,&puStack_a0);
        _objc_release(lVar4);
        if (lVar5 != 0) {
          _dispatch_io_set_low_water(lVar5,1);
          _dispatch_io_set_high_water(lVar5,0xffffffffffffffff);
          *(int *)(param_1 + 0x24) = (int)uVar2;
          _objc_retain(lVar5);
          uVar6 = *(undefined8 *)(param_1 + 0x30);
          *(long *)(param_1 + 0x30) = lVar5;
          _objc_release(uVar6);
          lVar4 = param_1 + 0x10;
          _objc_loadWeakRetained(lVar4);
          puStack_d0 = puVar1;
          uStack_c8 = 0xc2000000;
          pcStack_c0 = FUN_108614b6c;
          puStack_b8 = &UNK_110a5b6a0;
          lStack_b0 = param_1;
          uStack_a8 = param_2;
          _dispatch_io_read(lVar5,0,0xffffffffffffffff,lVar4,&puStack_d0);
          _objc_release(lVar4);
          param_1 = param_1 + 8;
          _objc_loadWeakRetained(param_1);
          func_0x00010c29b3e0();
          _objc_release(param_1);
        }
        _objc_release(lVar5);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 108614b68; end: 108614b6b;  */

void FUN_108614b68(void)

{
  return;
}



/* Entry: 108614b6c; end: 108614bd7;  */

void FUN_108614b6c(long param_1,int param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x20) + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c29b3c0();
    _objc_release(lVar1);
  }
  if (param_2 != 0) {
    func_0x00010bf3db80(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108614bd8; end: 108614c3b; -[SCVideoSocketServer closeConnection] */

void FUN_108614bd8(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    _dispatch_io_close(*(long *)(param_1 + 0x30),1);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release(uVar1);
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c29b400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108614c3c; end: 108614c87; -[SCVideoSocketServer .cxx_destruct] */

void FUN_108614c3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}


