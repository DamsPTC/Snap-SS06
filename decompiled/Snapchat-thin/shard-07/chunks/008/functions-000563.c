/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a72600; end: 105a726ff; -[SCSpectaclesNewSnapNotificationEmitter spectaclesTransferSession:onTransferUpdate:] */

void FUN_105a72600(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  _objc_release(uVar2);
  if (uVar2 == uVar3) {
    uVar3 = param_3;
    func_0x00010bf61080();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c23e340();
    _objc_release(uVar3);
    if ((uVar2 & 1) == 0) {
      if (param_4 == 7) {
        uVar3 = param_3;
        func_0x00010bf44300();
        if (uVar3 < 6) {
          if ((1L << (uVar3 & 0x3f) & 0x39U) == 0) {
            func_0x00010be84ca0(param_1,param_2,param_3);
          }
          else {
            func_0x00010be84b80();
          }
        }
      }
      else if (param_4 == 6) {
        iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
        func_0x00010bf60f40();
        if (iVar1 != 0) {
          func_0x00010be84e40(param_1,param_2,param_3);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a72700; end: 105a727bf; -[SCSpectaclesNewSnapNotificationEmitter _delayPushNotification:] */

void FUN_105a72700(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x38) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    _objc_release(uVar1);
  }
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105a727c0;
  puStack_30 = &UNK_110849530;
  uStack_28 = param_3;
  _objc_retain(param_3);
  uVar1 = 0;
  func_0x0001008553e8(0,&puStack_48);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  _objc_release(uVar2);
  func_0x000100c749e0(0x3f800000,"APPSTORE",*(undefined8 *)(param_1 + 0x38));
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105a727c0; end: 105a727cb;  */

void FUN_105a727c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105a727c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105a727cc; end: 105a7280b; -[SCSpectaclesNewSnapNotificationEmitter _pushPostPairingNewSnapNotification] */

void FUN_105a727cc(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010be33de0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010c11c280(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bea44b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setHasEmitPostPairingNotificati_112586ad0,1)
  ;
  return;
}



/* Entry: 105a7280c; end: 105a72813; -[SCSpectaclesNewSnapNotificationEmitter _pushCaptureCompleteNotification] */

void FUN_105a7280c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11c070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_pushCaptureCompleteNotification_112624a38);
  return;
}



/* Entry: 105a72814; end: 105a7281b; -[SCSpectaclesNewSnapNotificationEmitter _pushContentAvailableNotificationForSession:] */

void FUN_105a72814(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11c090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_pushContentAvailableNotification_112624a40);
  return;
}



/* Entry: 105a7281c; end: 105a72823; -[SCSpectaclesNewSnapNotificationEmitter _pushTransferInterruptedNotificationForSession:] */

void FUN_105a7281c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11c410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_pushTransferInterruptedNotificat_112624b20);
  return;
}



/* Entry: 105a72824; end: 105a72873; -[SCSpectaclesNewSnapNotificationEmitter _pushImportCompleteNotificationForSession:] */

void FUN_105a72824(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010bf60f40(uVar2);
  func_0x00010c11c140(uVar1,param_2,param_3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a72874; end: 105a728c3; -[SCSpectaclesNewSnapNotificationEmitter _setHasEmitPostPairingNotification:] */

void FUN_105a72874(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d05c0(uVar2,param_2,puVar1,&PTR____CFConstantStringClassReference_110e19f38,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a728c4; end: 105a7290b; -[SCSpectaclesNewSnapNotificationEmitter _hasEmitPostPairingNotification] */

undefined8 FUN_105a728c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e19f38);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a7290c; end: 105a72a03; -[SCSpectaclesNewSnapNotificationEmitter _fetchDeviceIconIfNeed] */

void FUN_105a7290c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010c0d70a0();
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010bf706c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      _objc_initWeak(auStack_28,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bfe5640(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_30,auStack_28);
      func_0x00010c297260(uVar3);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_30);
      _objc_destroyWeak(auStack_28);
    }
  }
  return;
}



/* Entry: 105a72a04; end: 105a72a63;  */

void FUN_105a72a04(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_3 == 0) && (param_1 != 0)) {
    func_0x00010c18c960(*(undefined8 *)(param_1 + 0x18));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a72a64; end: 105a72acb; -[SCSpectaclesNewSnapNotificationEmitter .cxx_destruct] */

void FUN_105a72a64(long param_1)

{
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



/* Entry: 105a72acc; end: 105a72d9f; -[SCSpectaclesNewSnapNotificationEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a72acc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar1 = param_1;
  func_0x00010bdf07c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b68a8;
    _objc_alloc();
    lVar3 = param_1 + _DAT_11272e404;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c0e35c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0312e0(puVar2,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar5 = PTR_PTR_1126c1c38;
    _objc_alloc();
    lVar3 = param_1 + _DAT_11272e408;
    _objc_loadWeakRetained(lVar3);
    lVar6 = lVar3;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = (long)_DAT_11272e40c;
    lVar4 = param_1 + lVar11;
    _objc_loadWeakRetained(lVar4);
    lVar7 = lVar4;
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011c60(puVar5,param_2,lVar6,lVar7);
    _objc_release(lVar7);
    _objc_release(lVar4);
    _objc_release(lVar6);
    _objc_release(lVar3);
    puVar8 = PTR_PTR_1126c1c40;
    _objc_alloc(PTR_PTR_1126c1c40);
    lVar3 = param_1 + _DAT_11272e410;
    _objc_loadWeakRetained(lVar3);
    lVar6 = lVar3;
    func_0x00010bf07a00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_11272e414;
    _objc_loadWeakRetained(lVar4);
    lVar7 = lVar4;
    func_0x00010bf5f860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3ac0(puVar8,param_2,lVar6,lVar7);
    _objc_release(lVar7);
    _objc_release(lVar4);
    _objc_release(lVar6);
    _objc_release(lVar3);
    puVar9 = PTR_PTR_1126c1c48;
    _objc_alloc();
    lVar3 = param_1 + lVar11;
    _objc_loadWeakRetained(lVar3);
    lVar6 = lVar3;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + lVar11;
    _objc_loadWeakRetained(lVar4);
    lVar7 = lVar4;
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c030260(puVar9,param_2,lVar1,puVar5,puVar8,lVar6,lVar7,puVar2);
    uVar10 = *(undefined8 *)(param_1 + _DAT_11272e418);
    *(undefined **)(param_1 + _DAT_11272e418) = puVar9;
    _objc_release(uVar10);
    _objc_release(lVar7);
    _objc_release(lVar4);
    _objc_release(lVar6);
    _objc_release(lVar3);
    param_1 = param_1 + lVar11;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c249020();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(param_1);
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a72da0; end: 105a72f9b; -[SCSpectaclesNewSnapNotificationEntryPoint _createNewSnapNotificationSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a72da0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_11272e40c;
  lVar1 = param_1 + lVar8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c263740();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 == 0) {
    puVar4 = PTR_PTR_1126c1c58;
    _objc_alloc(PTR_PTR_1126c1c58);
    lVar1 = param_1 + _DAT_11272e41c;
    _objc_loadWeakRetained(lVar1);
    lVar5 = lVar1;
    func_0x00010c0dc6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_11272e420;
    _objc_loadWeakRetained(lVar2);
    lVar6 = lVar2;
    func_0x00010c26b280();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + lVar8;
    _objc_loadWeakRetained(lVar3);
    lVar7 = lVar3;
    func_0x00010bf4d720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02ffa0(puVar4,param_2,lVar5,lVar6,lVar7);
  }
  else {
    puVar4 = PTR_PTR_1126c1c50;
    _objc_alloc(PTR_PTR_1126c1c50);
    lVar1 = param_1 + _DAT_11272e41c;
    _objc_loadWeakRetained(lVar1);
    lVar5 = lVar1;
    func_0x00010c0dc6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + lVar8;
    _objc_loadWeakRetained(lVar2);
    lVar6 = lVar2;
    func_0x00010bf4d720();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_11272e420;
    _objc_loadWeakRetained(lVar3);
    lVar7 = lVar3;
    func_0x00010c26b280();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + lVar8;
    _objc_loadWeakRetained(param_1);
    lVar8 = param_1;
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02ff20(puVar4,param_2,lVar5,lVar6,lVar7,lVar8);
    _objc_release(lVar8);
    _objc_release(param_1);
  }
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105a72f9c; end: 105a7301f; -[SCSpectaclesNewSnapNotificationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a72f9c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272e420);
  _objc_destroyWeak(param_1 + _DAT_11272e408);
  _objc_destroyWeak(param_1 + _DAT_11272e41c);
  _objc_destroyWeak(param_1 + _DAT_11272e404);
  _objc_destroyWeak(param_1 + _DAT_11272e414);
  _objc_destroyWeak(param_1 + _DAT_11272e410);
  _objc_destroyWeak(param_1 + _DAT_11272e40c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e418,0);
  return;
}



/* Entry: 105a73020; end: 105a730ef; -[SCSpectaclesOnMemoriesMonitor initWithApplicationLifecycleEvents:currentPageTracker:] */

undefined1 *
FUN_105a73020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eb848;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x20) = 1;
    func_0x00010be65b80(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a730f0; end: 105a73163; -[SCSpectaclesOnMemoriesMonitor currentlyOnMemoriesSnapsTab] */

bool FUN_105a730f0(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = PTR_PTR_1126afdd8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfcbb00(uVar2);
  func_0x00010bfc8740(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x20) == '\x01') {
    lVar4 = *(long *)(param_1 + 0x10);
    func_0x00010bfcbb00(lVar4);
    bVar1 = lVar4 == 0x6c;
  }
  else {
    bVar1 = false;
  }
  _objc_release(puVar3);
  return bVar1;
}



/* Entry: 105a73164; end: 105a7316b; -[SCSpectaclesOnMemoriesMonitor _setIsAppActive:] */

void FUN_105a73164(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 105a7316c; end: 105a732eb; -[SCSpectaclesOnMemoriesMonitor _observeApplicationLifecycleEvents] */

void FUN_105a7316c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2a6420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105a732ec;
  puStack_68 = &UNK_110846510;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf75dc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105a732ec; end: 105a7334b;  */

void FUN_105a732ec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea4c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a7334c; end: 105a73387; -[SCSpectaclesOnMemoriesMonitor .cxx_destruct] */

void FUN_105a7334c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a73388; end: 105a73423; -[SCSpectaclesOnboardingMonitor initWithFeatureSettings:device:] */

undefined1 *
FUN_105a73388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eb850;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_4);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a73424; end: 105a7361f; -[SCSpectaclesOnboardingMonitor _seenOnboardingKeyPath] */

void FUN_105a73424(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c075fc0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  if ((int)lVar4 == 0) {
    lVar3 = lVar2;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0774a0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if ((int)lVar4 == 0) {
      lVar2 = param_1 + 8;
      _objc_loadWeakRetained();
      lVar3 = lVar2;
      func_0x00010bfd38e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c078880();
      _objc_release(lVar3);
      _objc_release(lVar2);
      if ((int)lVar4 == 0) {
        lVar2 = param_1 + 8;
        _objc_loadWeakRetained();
        lVar3 = lVar2;
        func_0x00010bfd38e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c078aa0();
        _objc_release(lVar3);
        _objc_release(lVar2);
        if ((int)lVar4 == 0) {
          param_1 = param_1 + 8;
          _objc_loadWeakRetained();
          lVar2 = param_1;
          func_0x00010bfd38e0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010c06e7e0();
          _objc_release(lVar2);
          _objc_release(param_1);
          if ((int)lVar3 == 0) {
            puVar6 = (undefined *)0x0;
            goto LAB_105a735f8;
          }
          puVar5 = &UNK_10f322cbe;
        }
        else {
          puVar5 = &UNK_10f322c92;
        }
      }
      else {
        puVar5 = &UNK_10f322c66;
      }
    }
    else {
      puVar5 = &UNK_10f322c3b;
    }
  }
  else {
    lVar3 = lVar2;
    func_0x00010c263aa0();
    _objc_release(lVar2);
    if ((int)lVar3 == 0) {
      puVar5 = &UNK_10f322c10;
    }
    else {
      puVar5 = &UNK_10f322bdf;
    }
  }
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
LAB_105a735f8:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105a73620; end: 105a7383f; -[SCSpectaclesOnboardingMonitor seenOnboardingVideo] */

long FUN_105a73620(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar1 = lVar3;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c075fc0();
  _objc_release(lVar1);
  _objc_release(lVar3);
  lVar3 = param_1 + 8;
  _objc_loadWeakRetained();
  if ((int)lVar2 == 0) {
    lVar1 = lVar3;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c078880();
    _objc_release(lVar1);
    _objc_release(lVar3);
    if ((int)lVar2 == 0) {
      lVar3 = param_1 + 8;
      _objc_loadWeakRetained();
      lVar1 = lVar3;
      func_0x00010bfd38e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0774a0();
      _objc_release(lVar1);
      _objc_release(lVar3);
      if ((int)lVar2 == 0) {
        lVar3 = param_1 + 8;
        _objc_loadWeakRetained();
        lVar1 = lVar3;
        func_0x00010bfd38e0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c078aa0();
        _objc_release(lVar1);
        _objc_release(lVar3);
        if ((int)lVar2 == 0) {
          lVar3 = param_1 + 8;
          _objc_loadWeakRetained();
          lVar1 = lVar3;
          func_0x00010bfd38e0();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar1;
          func_0x00010c06e7e0();
          _objc_release(lVar1);
          _objc_release(lVar3);
          if ((int)lVar2 == 0) {
            param_1 = param_1 + 8;
            _objc_loadWeakRetained(param_1);
            lVar3 = param_1;
            func_0x00010bfd38e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c074bc0();
            _objc_release(lVar3);
            lVar3 = 1;
          }
          else {
            param_1 = *(long *)(param_1 + 0x10);
            func_0x00010c269d40(param_1);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = param_1;
            func_0x00010c1575a0();
          }
        }
        else {
          param_1 = *(long *)(param_1 + 0x10);
          func_0x00010c269d40(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = param_1;
          func_0x00010c157a60();
        }
      }
      else {
        param_1 = *(long *)(param_1 + 0x10);
        func_0x00010c269d40(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1;
        func_0x00010c1578e0();
      }
    }
    else {
      param_1 = *(long *)(param_1 + 0x10);
      func_0x00010c269d40(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010c157a40();
    }
  }
  else {
    lVar1 = lVar3;
    func_0x00010c263aa0();
    _objc_release(lVar3);
    param_1 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    if ((int)lVar1 == 0) {
      func_0x00010c157840();
    }
    else {
      func_0x00010c157be0();
    }
  }
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 105a73840; end: 105a739a7; -[SCSpectaclesOnboardingMonitor setupPushNotificationAfterOnboarding:] */

void FUN_105a73840(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
    func_0x00010be9d460();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_105a739a8;
      puStack_68 = &UNK_1108846a8;
      _objc_retain(lVar1);
      lStack_60 = lVar1;
      _objc_retain(param_3);
      uVar6 = uVar2;
      uStack_58 = param_3;
      func_0x00010c0e0c60(uVar2,param_2,puVar3,puVar5,&puStack_80);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = uVar6;
      _objc_release(uVar7);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(uVar2);
      _objc_release(uStack_58);
      _objc_release(lStack_60);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105a739a8; end: 105a73a0f;  */

void FUN_105a739a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf1f3c0();
  _objc_release(param_2);
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105a739fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105a73a10; end: 105a73a47; -[SCSpectaclesOnboardingMonitor .cxx_destruct] */

void FUN_105a73a10(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105a73a48; end: 105a73b37;  */

void FUN_105a73a48(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e19f58;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e19f58,
                      &PTR____CFConstantStringClassReference_110e19f78,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105a73b38; end: 105a73e07; -[SCAppNotification initOTAUpdateAvailableNotificationWithDeviceName:batteryLevel:icon:] */

undefined *
FUN_105a73b38(undefined *param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  lVar1 = param_4;
  _objc_retain(param_4);
  ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_3 == 0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else if (param_4 == 0) {
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000109025870();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  lVar1 = param_3;
  _objc_release();
  func_0x000109026008();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1370;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111843e0;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 7;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  puVar3 = puVar6;
  lVar2 = param_5;
  FUN_105a73e08(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c030320();
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(lVar1);
  _objc_release(ppuVar8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010c1d0560(puVar3);
  }
  puVar6 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 105a73e08; end: 105a73e8f;  */

void FUN_105a73e08(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    func_0x00010c1d0560(puVar1);
  }
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a73e90; end: 105a740cf; -[SCAppNotification initOTAUpdateSuccessfulNotificationWithVersion:icon:] */

undefined *
FUN_105a73e90(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined1 auStack_460 [8];
  undefined1 auStack_458 [8];
  undefined *puStack_450;
  undefined *puStack_448;
  undefined1 ***pppuStack_440;
  code *pcStack_438;
  undefined **ppuStack_428;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  undefined **ppuStack_410;
  undefined **ppuStack_408;
  undefined **ppuStack_400;
  undefined *puStack_3f8;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  undefined **ppuStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined *puStack_3a0;
  undefined **ppuStack_398;
  undefined **ppuStack_390;
  undefined **ppuStack_388;
  undefined8 uStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined *puStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined8 uStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined *puStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined8 uStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined *puStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined8 uStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined *puStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined *puStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined **ppuStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = param_3;
  _objc_retain();
  func_0x000109026020();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = puVar1;
  func_0x000109026038();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = param_3;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110dad058;
  puVar2 = PTR_PTR_1126b1370;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110dad0b8;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110dad858;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110f9e838;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110f9e878;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110dad398;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110f9e9d8;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110f9e958;
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111843e0;
  puStack_98 = puVar2;
  puStack_90 = puVar1;
  puStack_88 = puVar3;
  puStack_80 = puVar1;
  puStack_78 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110e12eb8;
  uVar5 = 7;
  ppuStack_68 = ppuVar4;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_60 = uVar5;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(puVar2);
  puVar2 = puVar6;
  FUN_105a73e08(puVar6,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar13 = puVar2;
  func_0x00010c030320();
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release(puVar3);
  puVar7 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_105a740d0;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar13;
  puStack_130 = puVar6;
  uStack_128 = uVar5;
  ppuStack_120 = ppuVar4;
  puStack_118 = puVar2;
  puStack_110 = puVar3;
  uStack_108 = param_4;
  puStack_100 = param_1;
  puStack_f8 = puVar1;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain();
  func_0x000109026050();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_198 = &PTR____CFConstantStringClassReference_110dad058;
  puVar3 = PTR_PTR_1126b1370;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_190 = &PTR____CFConstantStringClassReference_110dad0b8;
  ppuStack_188 = &PTR____CFConstantStringClassReference_110f9e838;
  ppuStack_150 = &PTR____CFConstantStringClassReference_110dad398;
  ppuStack_180 = &PTR____CFConstantStringClassReference_110f9e9d8;
  ppuStack_178 = &PTR____CFConstantStringClassReference_110f9e958;
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111843e0;
  puStack_168 = puVar3;
  puStack_160 = puVar8;
  puStack_158 = puVar8;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_170 = &PTR____CFConstantStringClassReference_110e12eb8;
  uVar5 = 7;
  ppuStack_148 = ppuVar4;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_140 = uVar5;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  puVar3 = puVar1;
  FUN_105a73e08(puVar1,puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  uVar15 = 2;
  puVar14 = puVar3;
  func_0x00010c030320();
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return puVar7;
  }
  ___stack_chk_fail();
  pcStack_1a8 = FUN_105a74298;
  puVar16 = (undefined *)0x0;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = PTR_PTR_1126b1370;
  puStack_1f0 = puVar6;
  puStack_1e8 = puVar1;
  uStack_1e0 = uVar5;
  ppuStack_1d8 = ppuVar4;
  puStack_1d0 = puVar3;
  puStack_1c8 = puVar13;
  puStack_1c0 = puVar7;
  puStack_1b8 = puVar8;
  ppuStack_1b0 = &puStack_f0;
  if ((long)puVar14 < 0x43) {
    if (puVar14 == (undefined *)0x3c) {
      ppuStack_248 = &PTR____CFConstantStringClassReference_110dad058;
      func_0x00010c25d500();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_240 = &PTR____CFConstantStringClassReference_110dad0b8;
      ppuVar11 = &PTR____CFConstantStringClassReference_110e1a0b8;
      ppuVar4 = ppuVar11;
      puStack_220 = puVar9;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0b8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_238 = &PTR____CFConstantStringClassReference_110dad858;
      ppuVar10 = &PTR____CFConstantStringClassReference_110e1a0d8;
      ppuStack_218 = ppuVar4;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0d8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_230 = &PTR____CFConstantStringClassReference_110f9e878;
      ppuStack_210 = ppuVar10;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0b8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_228 = &PTR____CFConstantStringClassReference_110e12eb8;
      uVar5 = 7;
      ppuStack_208 = ppuVar11;
      func_0x000107fcbeb0();
      _objc_retainAutoreleasedReturnValue();
      uStack_200 = uVar5;
      goto LAB_105a748fc;
    }
    if (puVar14 != (undefined *)0x3d) {
      if (puVar14 != (undefined *)0x42) goto LAB_105a74958;
      ppuStack_2d8 = &PTR____CFConstantStringClassReference_110dad058;
      func_0x00010c25d500();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_2d0 = &PTR____CFConstantStringClassReference_110dad0b8;
      ppuVar4 = &PTR____CFConstantStringClassReference_110e1a118;
      puStack_2b0 = puVar9;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a118,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_2c8 = &PTR____CFConstantStringClassReference_110dad858;
      ppuVar10 = &PTR____CFConstantStringClassReference_110e1a0d8;
      ppuStack_2a8 = ppuVar4;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0d8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_2c0 = &PTR____CFConstantStringClassReference_110f9e878;
      ppuVar11 = &PTR____CFConstantStringClassReference_110e17ef8;
      ppuStack_2a0 = ppuVar10;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e17ef8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_2b8 = &PTR____CFConstantStringClassReference_110e12eb8;
      uVar5 = 7;
      ppuStack_298 = ppuVar11;
      func_0x000107fcbeb0();
      _objc_retainAutoreleasedReturnValue();
      uStack_290 = uVar5;
      goto LAB_105a748fc;
    }
    ppuStack_288 = &PTR____CFConstantStringClassReference_110dad058;
    func_0x00010c25d500();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_280 = &PTR____CFConstantStringClassReference_110dad0b8;
    ppuVar10 = &PTR____CFConstantStringClassReference_110e1a0f8;
    ppuVar4 = ppuVar10;
    puStack_268 = puVar9;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0f8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_278 = &PTR____CFConstantStringClassReference_110f9e878;
    ppuStack_260 = ppuVar4;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0f8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_270 = &PTR____CFConstantStringClassReference_110e12eb8;
    ppuVar11 = (undefined **)0x7;
    ppuStack_258 = ppuVar10;
    func_0x000107fcbeb0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_250 = ppuVar11;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if ((long)puVar14 < 0x45) {
      if (puVar14 == (undefined *)0x43) {
        ppuStack_328 = &PTR____CFConstantStringClassReference_110dad058;
        func_0x00010c25d500();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_320 = &PTR____CFConstantStringClassReference_110dad0b8;
        ppuVar4 = &PTR____CFConstantStringClassReference_110e1a138;
        puStack_300 = puVar9;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a138,0);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_318 = &PTR____CFConstantStringClassReference_110dad858;
        ppuVar10 = &PTR____CFConstantStringClassReference_110e1a0d8;
        ppuStack_2f8 = ppuVar4;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0d8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_310 = &PTR____CFConstantStringClassReference_110f9e878;
        ppuVar11 = &PTR____CFConstantStringClassReference_110e17ed8;
        ppuStack_2f0 = ppuVar10;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e17ed8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_308 = &PTR____CFConstantStringClassReference_110e12eb8;
        uVar5 = 7;
        ppuStack_2e8 = ppuVar11;
        func_0x000107fcbeb0();
        _objc_retainAutoreleasedReturnValue();
        uStack_2e0 = uVar5;
      }
      else {
        if (puVar14 != (undefined *)0x44) goto LAB_105a74958;
        ppuStack_378 = &PTR____CFConstantStringClassReference_110dad058;
        func_0x00010c25d500();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_370 = &PTR____CFConstantStringClassReference_110dad0b8;
        ppuVar4 = &PTR____CFConstantStringClassReference_110e1a158;
        puStack_350 = puVar9;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a158,0);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_368 = &PTR____CFConstantStringClassReference_110dad858;
        ppuVar10 = &PTR____CFConstantStringClassReference_110e1a0d8;
        ppuStack_348 = ppuVar4;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0d8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_360 = &PTR____CFConstantStringClassReference_110f9e878;
        ppuVar11 = &PTR____CFConstantStringClassReference_110e17e98;
        ppuStack_340 = ppuVar10;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e17e98,0);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_358 = &PTR____CFConstantStringClassReference_110e12eb8;
        uVar5 = 7;
        ppuStack_338 = ppuVar11;
        func_0x000107fcbeb0();
        _objc_retainAutoreleasedReturnValue();
        uStack_330 = uVar5;
      }
    }
    else if (puVar14 == (undefined *)0x45) {
      ppuStack_3c8 = &PTR____CFConstantStringClassReference_110dad058;
      func_0x00010c25d500();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_3c0 = &PTR____CFConstantStringClassReference_110dad0b8;
      ppuVar4 = &PTR____CFConstantStringClassReference_110e1a178;
      puStack_3a0 = puVar9;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a178,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_3b8 = &PTR____CFConstantStringClassReference_110dad858;
      ppuVar10 = &PTR____CFConstantStringClassReference_110e1a0d8;
      ppuStack_398 = ppuVar4;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0d8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_3b0 = &PTR____CFConstantStringClassReference_110f9e878;
      ppuVar11 = &PTR____CFConstantStringClassReference_110e17eb8;
      ppuStack_390 = ppuVar10;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e17eb8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_3a8 = &PTR____CFConstantStringClassReference_110e12eb8;
      uVar5 = 7;
      ppuStack_388 = ppuVar11;
      func_0x000107fcbeb0();
      _objc_retainAutoreleasedReturnValue();
      uStack_380 = uVar5;
    }
    else {
      if (puVar14 != (undefined *)0x46) goto LAB_105a74958;
      ppuStack_428 = &PTR____CFConstantStringClassReference_110dad058;
      func_0x00010c25d500();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_420 = &PTR____CFConstantStringClassReference_110dad0b8;
      ppuVar4 = &PTR____CFConstantStringClassReference_110e1a198;
      puStack_3f8 = puVar9;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a198,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_418 = &PTR____CFConstantStringClassReference_110dad858;
      ppuVar10 = &PTR____CFConstantStringClassReference_110e1a0d8;
      ppuStack_3f0 = ppuVar4;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0d8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_410 = &PTR____CFConstantStringClassReference_110f9e878;
      ppuVar11 = &PTR____CFConstantStringClassReference_110e1a1b8;
      ppuStack_3e8 = ppuVar10;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a1b8,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_3d8 = PTR____kCFBooleanTrue_11034ab68;
      ppuStack_408 = &PTR____CFConstantStringClassReference_110f9e9d8;
      ppuStack_400 = &PTR____CFConstantStringClassReference_110e12eb8;
      uVar5 = 1;
      ppuStack_3e0 = ppuVar11;
      func_0x000107fcbeb0();
      _objc_retainAutoreleasedReturnValue();
      uStack_3d0 = uVar5;
    }
LAB_105a748fc:
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  _objc_release(ppuVar4);
  _objc_release(puVar9);
  uVar15 = 2;
  puVar14 = puVar3;
  func_0x00010c030320();
  _objc_retain();
  _objc_release(puVar3);
  puVar16 = puVar2;
LAB_105a74958:
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1f8) {
    ___stack_chk_fail();
    ppuVar4 = &puStack_470;
    pcStack_438 = FUN_105a74a78;
    puStack_450 = puVar16;
    puStack_448 = puVar2;
    pppuStack_440 = &ppuStack_1b0;
    _objc_initWeak(auStack_458,puVar14);
    _objc_initWeak(auStack_460,uVar15);
    puStack_468 = PTR_PTR_1126eb858;
    puStack_470 = puVar3;
    _objc_msgSendSuper2(&puStack_470,PTR_s_init_1125d9248);
    if (ppuVar4 != (undefined **)0x0) {
      puVar12 = auStack_458;
      _objc_loadWeakRetained(puVar12);
      _objc_storeWeak((undefined1 *)((long)ppuVar4 + 8),puVar12);
      _objc_release(puVar12);
      puVar12 = auStack_460;
      _objc_loadWeakRetained(puVar12);
      _objc_storeWeak((undefined1 *)((long)ppuVar4 + 0x10),puVar12);
      _objc_release(puVar12);
    }
    _objc_destroyWeak(auStack_460);
    _objc_destroyWeak(auStack_458);
    return (undefined *)ppuVar4;
  }
  return puVar16;
}



/* Entry: 105a740d0; end: 105a74297; -[SCAppNotification initOTAUpdateFailedNotificationWithIcon:] */

undefined1 * FUN_105a740d0(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined1 **ppuVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 *puStack_390;
  undefined *puStack_388;
  undefined1 auStack_380 [8];
  undefined1 auStack_378 [8];
  undefined1 *puStack_370;
  undefined1 *puStack_368;
  undefined1 **ppuStack_360;
  code *pcStack_358;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined *puStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined *puStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined8 uStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined *puStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined8 uStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined *puStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined8 uStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined *puStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined8 uStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined *puStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain();
  func_0x000109026050();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110dad058;
  puVar2 = PTR_PTR_1126b1370;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110dad0b8;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110f9e838;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110dad398;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110f9e9d8;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110f9e958;
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111843e0;
  puStack_88 = puVar2;
  puStack_80 = puVar1;
  puStack_78 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e12eb8;
  uVar4 = 7;
  ppuStack_68 = ppuVar3;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_60 = uVar4;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  puVar2 = puVar5;
  FUN_105a73e08(puVar5,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = 2;
  puVar10 = puVar2;
  func_0x00010c030320();
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_105a74298;
  puVar11 = (undefined1 *)0x0;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b1370;
  puStack_d0 = &stack0xfffffffffffffff0;
  if ((long)puVar10 < 0x43) {
    if (puVar10 == (undefined *)0x3c) {
      ppuStack_168 = &PTR____CFConstantStringClassReference_110dad058;
      func_0x00010c25d500();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_160 = &PTR____CFConstantStringClassReference_110dad0b8;
      ppuVar8 = &PTR____CFConstantStringClassReference_110e1a0b8;
      ppuVar3 = ppuVar8;
      puStack_140 = puVar2;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0b8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_158 = &PTR____CFConstantStringClassReference_110dad858;
      ppuVar6 = &PTR____CFConstantStringClassReference_110e1a0d8;
      ppuStack_138 = ppuVar3;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0d8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_150 = &PTR____CFConstantStringClassReference_110f9e878;
      ppuStack_130 = ppuVar6;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0b8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_148 = &PTR____CFConstantStringClassReference_110e12eb8;
      uVar4 = 7;
      ppuStack_128 = ppuVar8;
      func_0x000107fcbeb0();
      _objc_retainAutoreleasedReturnValue();
      uStack_120 = uVar4;
      goto LAB_105a748fc;
    }
    if (puVar10 != (undefined *)0x3d) {
      if (puVar10 != (undefined *)0x42) goto LAB_105a74958;
      ppuStack_1f8 = &PTR____CFConstantStringClassReference_110dad058;
      func_0x00010c25d500();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_1f0 = &PTR____CFConstantStringClassReference_110dad0b8;
      ppuVar3 = &PTR____CFConstantStringClassReference_110e1a118;
      puStack_1d0 = puVar2;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a118,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_1e8 = &PTR____CFConstantStringClassReference_110dad858;
      ppuVar6 = &PTR____CFConstantStringClassReference_110e1a0d8;
      ppuStack_1c8 = ppuVar3;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0d8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_1e0 = &PTR____CFConstantStringClassReference_110f9e878;
      ppuVar8 = &PTR____CFConstantStringClassReference_110e17ef8;
      ppuStack_1c0 = ppuVar6;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e17ef8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_1d8 = &PTR____CFConstantStringClassReference_110e12eb8;
      uVar4 = 7;
      ppuStack_1b8 = ppuVar8;
      func_0x000107fcbeb0();
      _objc_retainAutoreleasedReturnValue();
      uStack_1b0 = uVar4;
      goto LAB_105a748fc;
    }
    ppuStack_1a8 = &PTR____CFConstantStringClassReference_110dad058;
    func_0x00010c25d500();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1a0 = &PTR____CFConstantStringClassReference_110dad0b8;
    ppuVar6 = &PTR____CFConstantStringClassReference_110e1a0f8;
    ppuVar3 = ppuVar6;
    puStack_188 = puVar2;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0f8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_198 = &PTR____CFConstantStringClassReference_110f9e878;
    ppuStack_180 = ppuVar3;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0f8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_190 = &PTR____CFConstantStringClassReference_110e12eb8;
    ppuVar8 = (undefined **)0x7;
    ppuStack_178 = ppuVar6;
    func_0x000107fcbeb0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_170 = ppuVar8;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if ((long)puVar10 < 0x45) {
      if (puVar10 == (undefined *)0x43) {
        ppuStack_248 = &PTR____CFConstantStringClassReference_110dad058;
        func_0x00010c25d500();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_240 = &PTR____CFConstantStringClassReference_110dad0b8;
        ppuVar3 = &PTR____CFConstantStringClassReference_110e1a138;
        puStack_220 = puVar2;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a138,0);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_238 = &PTR____CFConstantStringClassReference_110dad858;
        ppuVar6 = &PTR____CFConstantStringClassReference_110e1a0d8;
        ppuStack_218 = ppuVar3;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0d8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_230 = &PTR____CFConstantStringClassReference_110f9e878;
        ppuVar8 = &PTR____CFConstantStringClassReference_110e17ed8;
        ppuStack_210 = ppuVar6;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e17ed8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_228 = &PTR____CFConstantStringClassReference_110e12eb8;
        uVar4 = 7;
        ppuStack_208 = ppuVar8;
        func_0x000107fcbeb0();
        _objc_retainAutoreleasedReturnValue();
        uStack_200 = uVar4;
      }
      else {
        if (puVar10 != (undefined *)0x44) goto LAB_105a74958;
        ppuStack_298 = &PTR____CFConstantStringClassReference_110dad058;
        func_0x00010c25d500();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_290 = &PTR____CFConstantStringClassReference_110dad0b8;
        ppuVar3 = &PTR____CFConstantStringClassReference_110e1a158;
        puStack_270 = puVar2;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a158,0);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_288 = &PTR____CFConstantStringClassReference_110dad858;
        ppuVar6 = &PTR____CFConstantStringClassReference_110e1a0d8;
        ppuStack_268 = ppuVar3;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0d8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_280 = &PTR____CFConstantStringClassReference_110f9e878;
        ppuVar8 = &PTR____CFConstantStringClassReference_110e17e98;
        ppuStack_260 = ppuVar6;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e17e98,0);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_278 = &PTR____CFConstantStringClassReference_110e12eb8;
        uVar4 = 7;
        ppuStack_258 = ppuVar8;
        func_0x000107fcbeb0();
        _objc_retainAutoreleasedReturnValue();
        uStack_250 = uVar4;
      }
    }
    else if (puVar10 == (undefined *)0x45) {
      ppuStack_2e8 = &PTR____CFConstantStringClassReference_110dad058;
      func_0x00010c25d500();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_2e0 = &PTR____CFConstantStringClassReference_110dad0b8;
      ppuVar3 = &PTR____CFConstantStringClassReference_110e1a178;
      puStack_2c0 = puVar2;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a178,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_2d8 = &PTR____CFConstantStringClassReference_110dad858;
      ppuVar6 = &PTR____CFConstantStringClassReference_110e1a0d8;
      ppuStack_2b8 = ppuVar3;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0d8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_2d0 = &PTR____CFConstantStringClassReference_110f9e878;
      ppuVar8 = &PTR____CFConstantStringClassReference_110e17eb8;
      ppuStack_2b0 = ppuVar6;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e17eb8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_2c8 = &PTR____CFConstantStringClassReference_110e12eb8;
      uVar4 = 7;
      ppuStack_2a8 = ppuVar8;
      func_0x000107fcbeb0();
      _objc_retainAutoreleasedReturnValue();
      uStack_2a0 = uVar4;
    }
    else {
      if (puVar10 != (undefined *)0x46) goto LAB_105a74958;
      ppuStack_348 = &PTR____CFConstantStringClassReference_110dad058;
      func_0x00010c25d500();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_340 = &PTR____CFConstantStringClassReference_110dad0b8;
      ppuVar3 = &PTR____CFConstantStringClassReference_110e1a198;
      puStack_318 = puVar2;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a198,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_338 = &PTR____CFConstantStringClassReference_110dad858;
      ppuVar6 = &PTR____CFConstantStringClassReference_110e1a0d8;
      ppuStack_310 = ppuVar3;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0d8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_330 = &PTR____CFConstantStringClassReference_110f9e878;
      ppuVar8 = &PTR____CFConstantStringClassReference_110e1a1b8;
      ppuStack_308 = ppuVar6;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a1b8,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_2f8 = PTR____kCFBooleanTrue_11034ab68;
      ppuStack_328 = &PTR____CFConstantStringClassReference_110f9e9d8;
      ppuStack_320 = &PTR____CFConstantStringClassReference_110e12eb8;
      uVar4 = 1;
      ppuStack_300 = ppuVar8;
      func_0x000107fcbeb0();
      _objc_retainAutoreleasedReturnValue();
      uStack_2f0 = uVar4;
    }
LAB_105a748fc:
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  _objc_release(ppuVar8);
  _objc_release(ppuVar6);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  uVar4 = 2;
  puVar10 = puVar5;
  func_0x00010c030320();
  _objc_retain();
  _objc_release(puVar5);
  puVar11 = puVar1;
LAB_105a74958:
  puVar7 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    ppuVar9 = &puStack_390;
    pcStack_358 = FUN_105a74a78;
    puStack_370 = puVar11;
    puStack_368 = puVar1;
    ppuStack_360 = &puStack_d0;
    _objc_initWeak(auStack_378,puVar10);
    _objc_initWeak(auStack_380,uVar4);
    puStack_388 = PTR_PTR_1126eb858;
    puStack_390 = puVar7;
    _objc_msgSendSuper2(&puStack_390,PTR_s_init_1125d9248);
    if (ppuVar9 != (undefined1 **)0x0) {
      puVar1 = auStack_378;
      _objc_loadWeakRetained(puVar1);
      _objc_storeWeak((undefined1 *)((long)ppuVar9 + 8),puVar1);
      _objc_release(puVar1);
      puVar1 = auStack_380;
      _objc_loadWeakRetained(puVar1);
      _objc_storeWeak((undefined1 *)((long)ppuVar9 + 0x10),puVar1);
      _objc_release(puVar1);
    }
    _objc_destroyWeak(auStack_380);
    _objc_destroyWeak(auStack_378);
    return (undefined1 *)ppuVar9;
  }
  return puVar11;
}



/* Entry: 105a74298; end: 105a74a77; -[SCAppNotification initWithSpectaclesPushType:] */

undefined1 *
FUN_105a74298(undefined1 *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined1 **ppuVar8;
  undefined1 *puVar9;
  undefined1 *puStack_2d0;
  undefined *puStack_2c8;
  undefined1 auStack_2c0 [8];
  undefined1 auStack_2b8 [8];
  undefined1 *puStack_2b0;
  undefined1 *puStack_2a8;
  undefined1 *puStack_2a0;
  code *pcStack_298;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined *puStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined *puStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined8 uStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined *puStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined *puStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar9 = (undefined1 *)0x0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b1370;
  if ((long)param_3 < 0x43) {
    if (param_3 == (undefined *)0x3c) {
      ppuStack_a8 = &PTR____CFConstantStringClassReference_110dad058;
      func_0x00010c25d500();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_a0 = &PTR____CFConstantStringClassReference_110dad0b8;
      ppuVar6 = &PTR____CFConstantStringClassReference_110e1a0b8;
      ppuVar3 = ppuVar6;
      puStack_80 = puVar2;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0b8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_98 = &PTR____CFConstantStringClassReference_110dad858;
      ppuVar4 = &PTR____CFConstantStringClassReference_110e1a0d8;
      ppuStack_78 = ppuVar3;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0d8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_90 = &PTR____CFConstantStringClassReference_110f9e878;
      ppuStack_70 = ppuVar4;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0b8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_88 = &PTR____CFConstantStringClassReference_110e12eb8;
      uVar1 = 7;
      ppuStack_68 = ppuVar6;
      func_0x000107fcbeb0();
      _objc_retainAutoreleasedReturnValue();
      uStack_60 = uVar1;
      goto LAB_105a748fc;
    }
    if (param_3 != (undefined *)0x3d) {
      if (param_3 != (undefined *)0x42) goto LAB_105a74958;
      ppuStack_138 = &PTR____CFConstantStringClassReference_110dad058;
      func_0x00010c25d500();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_130 = &PTR____CFConstantStringClassReference_110dad0b8;
      ppuVar3 = &PTR____CFConstantStringClassReference_110e1a118;
      puStack_110 = puVar2;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a118,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_128 = &PTR____CFConstantStringClassReference_110dad858;
      ppuVar4 = &PTR____CFConstantStringClassReference_110e1a0d8;
      ppuStack_108 = ppuVar3;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0d8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_120 = &PTR____CFConstantStringClassReference_110f9e878;
      ppuVar6 = &PTR____CFConstantStringClassReference_110e17ef8;
      ppuStack_100 = ppuVar4;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e17ef8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_118 = &PTR____CFConstantStringClassReference_110e12eb8;
      uVar1 = 7;
      ppuStack_f8 = ppuVar6;
      func_0x000107fcbeb0();
      _objc_retainAutoreleasedReturnValue();
      uStack_f0 = uVar1;
      goto LAB_105a748fc;
    }
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110dad058;
    func_0x00010c25d500();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110dad0b8;
    ppuVar4 = &PTR____CFConstantStringClassReference_110e1a0f8;
    ppuVar3 = ppuVar4;
    puStack_c8 = puVar2;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0f8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110f9e878;
    ppuStack_c0 = ppuVar3;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0f8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110e12eb8;
    ppuVar6 = (undefined **)0x7;
    ppuStack_b8 = ppuVar4;
    func_0x000107fcbeb0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_b0 = ppuVar6;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if ((long)param_3 < 0x45) {
      if (param_3 == (undefined *)0x43) {
        ppuStack_188 = &PTR____CFConstantStringClassReference_110dad058;
        func_0x00010c25d500();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_180 = &PTR____CFConstantStringClassReference_110dad0b8;
        ppuVar3 = &PTR____CFConstantStringClassReference_110e1a138;
        puStack_160 = puVar2;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a138,0);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_178 = &PTR____CFConstantStringClassReference_110dad858;
        ppuVar4 = &PTR____CFConstantStringClassReference_110e1a0d8;
        ppuStack_158 = ppuVar3;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0d8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_170 = &PTR____CFConstantStringClassReference_110f9e878;
        ppuVar6 = &PTR____CFConstantStringClassReference_110e17ed8;
        ppuStack_150 = ppuVar4;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e17ed8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_168 = &PTR____CFConstantStringClassReference_110e12eb8;
        uVar1 = 7;
        ppuStack_148 = ppuVar6;
        func_0x000107fcbeb0();
        _objc_retainAutoreleasedReturnValue();
        uStack_140 = uVar1;
      }
      else {
        if (param_3 != (undefined *)0x44) goto LAB_105a74958;
        ppuStack_1d8 = &PTR____CFConstantStringClassReference_110dad058;
        func_0x00010c25d500();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_1d0 = &PTR____CFConstantStringClassReference_110dad0b8;
        ppuVar3 = &PTR____CFConstantStringClassReference_110e1a158;
        puStack_1b0 = puVar2;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a158,0);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_1c8 = &PTR____CFConstantStringClassReference_110dad858;
        ppuVar4 = &PTR____CFConstantStringClassReference_110e1a0d8;
        ppuStack_1a8 = ppuVar3;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0d8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_1c0 = &PTR____CFConstantStringClassReference_110f9e878;
        ppuVar6 = &PTR____CFConstantStringClassReference_110e17e98;
        ppuStack_1a0 = ppuVar4;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e17e98,0);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_1b8 = &PTR____CFConstantStringClassReference_110e12eb8;
        uVar1 = 7;
        ppuStack_198 = ppuVar6;
        func_0x000107fcbeb0();
        _objc_retainAutoreleasedReturnValue();
        uStack_190 = uVar1;
      }
    }
    else if (param_3 == (undefined *)0x45) {
      ppuStack_228 = &PTR____CFConstantStringClassReference_110dad058;
      func_0x00010c25d500();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_220 = &PTR____CFConstantStringClassReference_110dad0b8;
      ppuVar3 = &PTR____CFConstantStringClassReference_110e1a178;
      puStack_200 = puVar2;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a178,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_218 = &PTR____CFConstantStringClassReference_110dad858;
      ppuVar4 = &PTR____CFConstantStringClassReference_110e1a0d8;
      ppuStack_1f8 = ppuVar3;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0d8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_210 = &PTR____CFConstantStringClassReference_110f9e878;
      ppuVar6 = &PTR____CFConstantStringClassReference_110e17eb8;
      ppuStack_1f0 = ppuVar4;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e17eb8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_208 = &PTR____CFConstantStringClassReference_110e12eb8;
      uVar1 = 7;
      ppuStack_1e8 = ppuVar6;
      func_0x000107fcbeb0();
      _objc_retainAutoreleasedReturnValue();
      uStack_1e0 = uVar1;
    }
    else {
      if (param_3 != (undefined *)0x46) goto LAB_105a74958;
      ppuStack_288 = &PTR____CFConstantStringClassReference_110dad058;
      func_0x00010c25d500();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_280 = &PTR____CFConstantStringClassReference_110dad0b8;
      ppuVar3 = &PTR____CFConstantStringClassReference_110e1a198;
      puStack_258 = puVar2;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a198,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_278 = &PTR____CFConstantStringClassReference_110dad858;
      ppuVar4 = &PTR____CFConstantStringClassReference_110e1a0d8;
      ppuStack_250 = ppuVar3;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a0d8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_270 = &PTR____CFConstantStringClassReference_110f9e878;
      ppuVar6 = &PTR____CFConstantStringClassReference_110e1a1b8;
      ppuStack_248 = ppuVar4;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1a1b8,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_238 = PTR____kCFBooleanTrue_11034ab68;
      ppuStack_268 = &PTR____CFConstantStringClassReference_110f9e9d8;
      ppuStack_260 = &PTR____CFConstantStringClassReference_110e12eb8;
      uVar1 = 1;
      ppuStack_240 = ppuVar6;
      func_0x000107fcbeb0();
      _objc_retainAutoreleasedReturnValue();
      uStack_230 = uVar1;
    }
LAB_105a748fc:
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(ppuVar6);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  param_4 = 2;
  param_3 = puVar7;
  func_0x00010c030320();
  _objc_retain();
  _objc_release(puVar7);
  puVar9 = param_1;
LAB_105a74958:
  puVar5 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    ppuVar8 = &puStack_2d0;
    pcStack_298 = FUN_105a74a78;
    puStack_2b0 = puVar9;
    puStack_2a8 = param_1;
    puStack_2a0 = &stack0xfffffffffffffff0;
    _objc_initWeak(auStack_2b8,param_3);
    _objc_initWeak(auStack_2c0,param_4);
    puStack_2c8 = PTR_PTR_1126eb858;
    puStack_2d0 = puVar5;
    _objc_msgSendSuper2(&puStack_2d0,PTR_s_init_1125d9248);
    if (ppuVar8 != (undefined1 **)0x0) {
      puVar9 = auStack_2b8;
      _objc_loadWeakRetained(puVar9);
      _objc_storeWeak((undefined1 *)((long)ppuVar8 + 8),puVar9);
      _objc_release(puVar9);
      puVar9 = auStack_2c0;
      _objc_loadWeakRetained(puVar9);
      _objc_storeWeak((undefined1 *)((long)ppuVar8 + 0x10),puVar9);
      _objc_release(puVar9);
    }
    _objc_destroyWeak(auStack_2c0);
    _objc_destroyWeak(auStack_2b8);
    return (undefined1 *)ppuVar8;
  }
  return puVar9;
}



/* Entry: 105a74a78; end: 105a74b4b; -[SCSpectaclesFirmwareNotificationEmitter initWithNotificationManager:device:] */

undefined1 *
FUN_105a74a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puVar1 = &uStack_40;
  _objc_initWeak(auStack_28,param_3);
  _objc_initWeak(auStack_30,param_4);
  puStack_38 = PTR_PTR_1126eb858;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = auStack_28;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),puVar2);
    _objc_release(puVar2);
    puVar2 = auStack_30;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),puVar2);
    _objc_release(puVar2);
  }
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return (undefined1 *)puVar1;
}



/* Entry: 105a74b4c; end: 105a74c6b; -[SCSpectaclesFirmwareNotificationEmitter spectaclesOnFirmwareUpdateForDevice:failedFromState:] */

void FUN_105a74b4c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_release(param_3);
  _objc_release(lVar1);
  if ((param_4 != 1) && (param_3 == lVar1)) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x105a74bf4;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_58);
  }
  return;
}



/* Entry: 105a74c6c; end: 105a74e17; -[SCSpectaclesFirmwareNotificationEmitter spectaclesOnFirmwareUpdateEvent:device:] */

void FUN_105a74c6c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 auStack_80 [5];
  undefined8 auStack_58 [5];
  
  puVar2 = auStack_80;
  _objc_retain(param_4);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_release(param_4);
  _objc_release(lVar1);
  if (param_4 == lVar1) {
    if (param_3 - 2U < 3) {
      uVar3 = 0x105a74d28;
      puVar2 = auStack_58;
    }
    else {
      if (param_3 != 5) {
        return;
      }
      uVar3 = 0x105a74da0;
    }
    *puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puVar2[1] = 0xc2000000;
    puVar2[2] = uVar3;
    puVar2[3] = &UNK_110842e18;
    puVar2[4] = param_1;
    func_0x0001000d76cc("APPSTORE");
  }
  return;
}



/* Entry: 105a74e18; end: 105a74ef3; -[SCSpectaclesFirmwareNotificationEmitter spectaclesDevice:onAlertNotification:] */

void FUN_105a74e18(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (((param_3 == lVar1) && (param_4 - 1U < 0xc)) &&
     ((0xbffU >> (ulong)((uint)(param_4 - 1U) & 0x1f) & 1) != 0)) {
    puVar2 = PTR_PTR_1126b1370;
    _objc_alloc(PTR_PTR_1126b1370);
    func_0x00010c04b060();
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa0a0();
    _objc_release(lVar1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 105a74ef4; end: 105a74f1b; -[SCSpectaclesFirmwareNotificationEmitter .cxx_destruct] */

void FUN_105a74ef4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105a74f1c; end: 105a75083; -[SCSpectaclesOTANotificationEmitter initWithNotificationManager:otaManager:device:iconProvider:userPreferences:userSessionScope:] */

undefined1 *
FUN_105a74f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126eb860;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  func_0x00010beae6e0(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a75084; end: 105a7516f; -[SCSpectaclesOTANotificationEmitter _setupOTAStateObservableIfNeeded] */

void FUN_105a75084(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c252740(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105a75170; end: 105a751b7;  */

void FUN_105a75170(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2d0c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a751b8; end: 105a75227; -[SCSpectaclesOTANotificationEmitter _handleOTAUpdateAppState:] */

void FUN_105a751b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 0x28);
  func_0x00010c071ae0(uVar2,param_2,param_3);
  if ((uVar2 & 1) == 0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_3;
    _objc_release(uVar3);
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010c28d8a0();
    if (iVar1 == 0) {
      func_0x00010be84d40(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 0x58) = 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a75228; end: 105a7527f; -[SCSpectaclesOTANotificationEmitter _pushOTANotificationIfNeeded] */

void FUN_105a75228(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    func_0x00010be10e60(param_1);
    uVar1 = 0x3ff0000000000000;
  }
  else {
    uVar1 = 0x3fc999999999999a;
  }
  if (*(char *)(param_1 + 0x58) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be84d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pushOTANotificationAfterStarted_11257ece8)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be84d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,param_1,PTR_s__pushOTANotificationUpdateAvaila_11257ecf8);
  return;
}



/* Entry: 105a75280; end: 105a7537b; -[SCSpectaclesOTANotificationEmitter _pushOTANotificationAfterStartedUpdateIfNeededAfterDelay:] */

void FUN_105a75280(double param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 auStack_98 [4];
  undefined1 auStack_78 [8];
  undefined8 auStack_70 [4];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_2);
  lVar1 = *(long *)(param_2 + 0x28);
  func_0x00010c252d60();
  if (lVar1 == 3) {
    puVar4 = auStack_70;
    puVar3 = auStack_50;
    pcVar2 = FUN_105a7537c;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x28);
    func_0x00010c252d60();
    if (lVar1 != 2) goto LAB_105a75348;
    puVar3 = auStack_78;
    pcVar2 = (code *)0x105a753a8;
    puVar4 = auStack_98;
  }
  *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puVar4[1] = 0xc2000000;
  puVar4[2] = pcVar2;
  puVar4[3] = &UNK_1108434b0;
  _objc_copyWeak(puVar3,auStack_48);
  func_0x000100c749e0((float)param_1,"APPSTORE",puVar4);
  *(undefined1 *)(param_2 + 0x58) = 0;
  _objc_destroyWeak(puVar3);
LAB_105a75348:
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105a7537c; end: 105a753d3;  */

void FUN_105a7537c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be84ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a753d4; end: 105a75583; -[SCSpectaclesOTANotificationEmitter _pushOTANotificationUpdateAvailableIfNeededAfterDelay:] */

void FUN_105a753d4(double param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = *(long *)(param_2 + 0x28);
  func_0x00010c252d60();
  if (lVar1 != 0xf) {
    return;
  }
  lVar1 = *(long *)(param_2 + 0x28);
  func_0x00010bfed8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    return;
  }
  lVar1 = param_2;
  func_0x00010bdd1c00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_2 + 0x60);
    func_0x00010c071ae0();
    if ((uVar2 & 1) == 0) {
      uVar3 = *(ulong *)(param_2 + 0x40);
      func_0x00010c293780();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c07c8c0();
      if ((uVar2 & 1) == 0) {
        _objc_release(uVar3);
      }
      else {
        uVar4 = *(ulong *)(param_2 + 0x38);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010c071ae0();
        _objc_release(uVar2);
        _objc_release(uVar4);
        _objc_release(uVar3);
        if ((uVar5 & 1) != 0) goto LAB_105a75560;
      }
      _objc_retain(lVar1);
      uVar6 = *(undefined8 *)(param_2 + 0x60);
      *(long *)(param_2 + 0x60) = lVar1;
      _objc_release(uVar6);
      _objc_initWeak(auStack_58,param_2);
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_105a75584;
      puStack_70 = &UNK_110841fb0;
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(lVar1);
      lStack_68 = lVar1;
      func_0x000100c749e0((float)param_1,"APPSTORE",&puStack_88);
      _objc_release(lStack_68);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
  }
LAB_105a75560:
  _objc_release(lVar1);
  return;
}



/* Entry: 105a75584; end: 105a755b7;  */

void FUN_105a75584(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be84e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a755b8; end: 105a75653; -[SCSpectaclesOTANotificationEmitter _pushUpdateSuccessfulNotification] */

void FUN_105a755b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b1370;
  _objc_alloc(PTR_PTR_1126b1370);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf60ae0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfef040(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x50));
  _objc_release(uVar2);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa0a0();
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a75654; end: 105a756c7; -[SCSpectaclesOTANotificationEmitter _pushUpdateFailedNotification] */

void FUN_105a75654(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b1370;
  _objc_alloc(PTR_PTR_1126b1370);
  func_0x00010bfef020();
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa0a0();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a756c8; end: 105a7582f; -[SCSpectaclesOTANotificationEmitter _pushUpdateAvailableNotification:] */

void FUN_105a756c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126b1370;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf86080();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf17500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfef000(puVar1,param_2,lVar4,lVar7,*(undefined8 *)(param_1 + 0x50));
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  lVar5 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa0a0();
  _objc_release(lVar5);
  _objc_release(lVar2);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(param_3);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a75830; end: 105a75907; -[SCSpectaclesOTANotificationEmitter _fetchDeviceIcon] */

void FUN_105a75830(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  if (*(long *)(param_1 + 0x50) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bfe5640(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c297260(uVar1);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_30);
  }
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105a75908; end: 105a7596f;  */

void FUN_105a75908(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_3 == 0) && (param_1 != 0)) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a75970; end: 105a75a63; -[SCSpectaclesOTANotificationEmitter _availableVersion] */

void FUN_105a75970(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105a75a64;
  uStack_30 = 0x105a75a74;
  uStack_28 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfed8e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc9a0();
  _objc_release(uVar1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a75a64; end: 105a75a7b;  */

void FUN_105a75a64(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105a75a7c; end: 105a75ab3;  */

void FUN_105a75a7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a75ab4; end: 105a75b47; -[SCSpectaclesOTANotificationEmitter .cxx_destruct] */

void FUN_105a75ab4(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105a75b48; end: 105a75e53; -[SCSpectaclesOTANotificationEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a75b48(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  lVar12 = (long)_DAT_11272e478;
  lVar1 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126c1c60;
  _objc_alloc();
  lVar11 = (long)_DAT_11272e47c;
  lVar1 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010c0dc6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02ff40(puVar3,param_2,lVar4,lVar2);
  uVar10 = *(undefined8 *)(param_1 + _DAT_11272e480);
  *(undefined **)(param_1 + _DAT_11272e480) = puVar3;
  _objc_release(uVar10);
  _objc_release(lVar4);
  _objc_release(lVar1);
  lVar1 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar1);
  lVar12 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar12);
  lVar1 = lVar12;
  func_0x00010bfb0bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(lVar12);
  lVar1 = lVar2;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar1;
  func_0x00010c06e7e0();
  _objc_release(lVar1);
  if ((int)lVar12 != 0) {
    puVar3 = PTR_PTR_1126b68a8;
    _objc_alloc();
    lVar1 = param_1 + _DAT_11272e484;
    _objc_loadWeakRetained(lVar1);
    lVar12 = lVar1;
    func_0x00010c0e35c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0312e0(puVar3,param_2,lVar12);
    _objc_release(lVar12);
    _objc_release(lVar1);
    puVar6 = PTR_PTR_1126c1c68;
    _objc_alloc();
    lVar11 = param_1 + lVar11;
    _objc_loadWeakRetained();
    lVar5 = lVar11;
    func_0x00010c0dc6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + _DAT_11272e488;
    _objc_loadWeakRetained(lVar1);
    lVar7 = lVar1;
    func_0x00010c0eddc0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + _DAT_11272e48c;
    _objc_loadWeakRetained(lVar12);
    lVar9 = lVar12;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_11272e490;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c02ff80(puVar6,param_2,lVar5,lVar8,lVar2,puVar3,lVar9,lVar4);
    uVar10 = *(undefined8 *)(param_1 + _DAT_11272e494);
    *(undefined **)(param_1 + _DAT_11272e494) = puVar6;
    _objc_release(uVar10);
    _objc_release(lVar4);
    _objc_release(lVar9);
    _objc_release(lVar12);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar1);
    _objc_release(lVar5);
    _objc_release(lVar11);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105a75e54; end: 105a75edb; -[SCSpectaclesOTANotificationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a75e54(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272e490);
  _objc_destroyWeak(param_1 + _DAT_11272e48c);
  _objc_destroyWeak(param_1 + _DAT_11272e488);
  _objc_destroyWeak(param_1 + _DAT_11272e484);
  _objc_destroyWeak(param_1 + _DAT_11272e47c);
  _objc_destroyWeak(param_1 + _DAT_11272e478);
  _objc_storeStrong(param_1 + _DAT_11272e480,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e494,0);
  return;
}



/* Entry: 105a75edc; end: 105a7624f; -[SCSpectaclesFlightImuCalibrationEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a75edc(long param_1,undefined8 param_2)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  
  lVar1 = param_1 + _DAT_11272e498;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf027a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126c1c70;
  _objc_alloc();
  lVar1 = param_1 + _DAT_11272e49c;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010c100e20();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_11272e4a0;
  lVar5 = param_1 + lVar19;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c0e35c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11272e4a4;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c037280(puVar3,param_2,lVar4,lVar6,lVar8);
  lVar15 = (long)_DAT_11272e4a8;
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar3;
  _objc_release(uVar14);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b0870;
  _objc_alloc(PTR_PTR_1126b0870);
  func_0x00010c033f60();
  func_0x00010c222300(*(undefined8 *)(param_1 + lVar15),param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c1c78;
  _objc_alloc();
  lVar16 = (long)_DAT_11272e4ac;
  lVar1 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bfa1c80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010bfb28a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + lVar16;
  _objc_loadWeakRetained(lVar5);
  lVar10 = lVar5;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + lVar16;
  _objc_loadWeakRetained(lVar7);
  lVar11 = lVar7;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + lVar19;
  _objc_loadWeakRetained(lVar19);
  lVar13 = lVar19;
  func_0x00010c0e35c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c013800(puVar3,param_2,lVar9,lVar10,lVar12,lVar13,lVar2);
  lVar18 = (long)_DAT_11272e4b0;
  uVar14 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar3;
  _objc_release(uVar14);
  _objc_release(lVar13);
  _objc_release(lVar19);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar7);
  _objc_release(lVar10);
  _objc_release(lVar5);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar18),param_2,param_1);
  uVar17 = *(undefined8 *)(param_1 + lVar18);
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010beeede0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf47680(uVar17,param_2,uVar14);
  _objc_release(uVar14);
  uVar17 = *(undefined8 *)(param_1 + lVar15);
  uVar14 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c29d9c0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf47da0(uVar17,param_2,uVar14);
  _objc_release(uVar14);
  param_1 = param_1 + lVar16;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105a76250; end: 105a762db; -[SCSpectaclesFlightImuCalibrationEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a76250(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_11272e4ac;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126eb868;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a762dc; end: 105a76327; -[SCSpectaclesFlightImuCalibrationEntryPoint calibrationControllerDidExit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a762dc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11272e4ac;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c150700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf27c80();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a76328; end: 105a76343; -[SCSpectaclesFlightImuCalibrationEntryPoint calibrationController:didPresentAlertDialog:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a76328(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272e4a8),
             PTR_s_presentViewController_animated_c_112621588,param_4,1,0);
  return;
}



/* Entry: 105a76344; end: 105a763bf; -[SCSpectaclesFlightImuCalibrationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a76344(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272e498);
  _objc_destroyWeak(param_1 + _DAT_11272e4a4);
  _objc_destroyWeak(param_1 + _DAT_11272e4a0);
  _objc_destroyWeak(param_1 + _DAT_11272e49c);
  _objc_destroyWeak(param_1 + _DAT_11272e4ac);
  _objc_storeStrong(param_1 + _DAT_11272e4a8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e4b0,0);
  return;
}



/* Entry: 105a763c0; end: 105a7659f; -[SCSpectaclesFlightImuCalibrationController initWithFlightImuCalibrationRPCManager:device:deviceConnectionStateReporter:onDemandResourceFetcher:analyticsLogger:] */

undefined1 *
FUN_105a763c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126eb870;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 8));
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    func_0x00010beab4a0(puVar1);
    func_0x00010beac080(puVar1);
    *(undefined8 *)((long)puVar1 + 0x48) = 0;
    *(undefined8 *)((long)puVar1 + 0x50) = 0;
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be4f140(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)((long)puVar1 + 0x28));
    func_0x00010be770a0(puVar1);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined ***)((long)puVar1 + 0x58) = &PTR__OBJC_CLASS___NSConstantArray_11117f288;
    _objc_release(uVar2);
    *(undefined2 *)((long)puVar1 + 0x60) = 0;
    _objc_release(puVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a765a0; end: 105a766eb; -[SCSpectaclesFlightImuCalibrationController _setupCalibrationStatusObservable] */

void FUN_105a765a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfb2920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105a766ec; end: 105a76733;  */

void FUN_105a766ec(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26c20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a76734; end: 105a7683f; -[SCSpectaclesFlightImuCalibrationController _setupDeviceConnectionStateReporter] */

void FUN_105a76734(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c252740(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105a76840; end: 105a768a3;  */

void FUN_105a76840(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_1 != 0) && (lVar1 = param_2, func_0x00010bf1ca20(), lVar1 != 2)) &&
     ((*(byte *)(param_1 + 0x61) & 1) == 0)) {
    func_0x00010bee38a0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a768a4; end: 105a769c7; -[SCSpectaclesFlightImuCalibrationController configureWithActionObservable:] */

void FUN_105a768a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = auStack_48;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e0ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105a769c8; end: 105a76a0f;  */

void FUN_105a769c8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25080();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a76a10; end: 105a76a17; -[SCSpectaclesFlightImuCalibrationController viewModelPublisher] */

void FUN_105a76a10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 105a76a18; end: 105a76ac7; -[SCSpectaclesFlightImuCalibrationController _startFlightImuCalibration] */

void FUN_105a76a18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010c24ecc0(*(undefined8 *)(param_1 + 8));
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar1;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  func_0x00010c0b0800(uVar3,param_2,lVar2,*(undefined8 *)(param_1 + 0x48));
  _objc_release(puVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105a76ac8; end: 105a76acf; -[SCSpectaclesFlightImuCalibrationController _stopFlightImuCalibration] */

void FUN_105a76ac8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_stopFlightImuCalibrationRequest_112673228);
  return;
}



/* Entry: 105a76ad0; end: 105a76b53; -[SCSpectaclesFlightImuCalibrationController _restartCheeriosIfNecessary] */

void FUN_105a76ad0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126c0c68;
  func_0x00010bf38b20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfb0d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = puVar1;
  func_0x00010c083040(puVar1,param_2,lVar3);
  if ((int)puVar4 != 0) {
    func_0x00010c13bf60(*(undefined8 *)(param_1 + 8));
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a76b54; end: 105a76be7; -[SCSpectaclesFlightImuCalibrationController _handleCalibrationStatusEvent:] */

void FUN_105a76b54(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf27d00();
  if (lVar1 == 4) {
    lVar1 = param_3;
    func_0x00010c13cf20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee3880(param_1,param_2,lVar1);
    _objc_release(lVar1);
  }
  else if (lVar1 == 2) {
    func_0x00010bee38a0(param_1);
  }
  else if (lVar1 == 1) {
    func_0x00010bee3860(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a76be8; end: 105a76c2b; -[SCSpectaclesFlightImuCalibrationController _updateViewModelForCalibrationCompleteState] */

void FUN_105a76be8(long param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 0x61) = 1;
  *(undefined8 *)(param_1 + 0x50) = 2;
  func_0x00010be078e0(param_1,param_2,*(undefined8 *)(param_1 + 0x48),2,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010be95350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__restartCheeriosIfNecessary_112582e70);
  return;
}



/* Entry: 105a76c2c; end: 105a76c47; -[SCSpectaclesFlightImuCalibrationController _updateViewModelForCalibrationErrorState] */

void FUN_105a76c2c(long param_1)

{
  *(undefined8 *)(param_1 + 0x50) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010be078f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__emitCalibrationInProgressPageVi_11255f7d8,
             *(undefined8 *)(param_1 + 0x48),3,0,0);
  return;
}



/* Entry: 105a76c48; end: 105a76c93; -[SCSpectaclesFlightImuCalibrationController _updateViewModelForCalibrationDoingState:] */

void FUN_105a76c48(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be3f520();
  if ((int)lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x50) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010be078f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__emitCalibrationInProgressPageVi_11255f7d8,
               *(undefined8 *)(param_1 + 0x48),2,0,0);
    return;
  }
  return;
}



/* Entry: 105a76c94; end: 105a76d5f; -[SCSpectaclesFlightImuCalibrationController _isCurrentCalibrationPhaseFinishedWithResults:] */

long FUN_105a76c94(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf529e0();
  if ((lVar4 == 0) || (lVar4 = param_3, func_0x00010bf529e0(), lVar4 == 0)) {
    lVar4 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c0dfd40(param_3,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf27c60();
    lVar2 = *(long *)(param_1 + 0x58);
    func_0x00010c0dfd40(lVar2,param_2,*(undefined8 *)(param_1 + 0x48));
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067fc0();
    if (lVar4 == lVar3) {
      lVar4 = lVar1;
      func_0x00010bfaffa0(lVar1);
    }
    else {
      lVar4 = 0;
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 105a76d60; end: 105a76f7f; -[SCSpectaclesFlightImuCalibrationController _presentCancelCalibrationAlertDialog] */

void FUN_105a76d60(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_70;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000109025090();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x0001090250a8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar5 = puVar4;
  func_0x000109025eb8();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000109025ed0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_68 = puVar2;
  puStack_60 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010be79fe0(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_78);
  puVar1 = auStack_70;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume(puVar1);
  puVar8 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar8);
  func_0x00010bec2fc0();
  _objc_release(puVar8);
  puVar8 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar8);
  func_0x00010be026c0();
  _objc_release(puVar8);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010be51540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a76f80; end: 105a76fdf;  */

void FUN_105a76f80(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bec2fc0();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be026c0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be51540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a76fe0; end: 105a76fef;  */

void FUN_105a76fe0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105a76ff0; end: 105a771c7; -[SCSpectaclesFlightImuCalibrationController _presentCalibrationErrorAlertDialog] */

void FUN_105a76ff0(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_68;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x0001090250c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = puVar3;
  func_0x000109025f18();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000109025f30();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010be79fe0(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_70);
  puVar1 = auStack_68;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume(puVar1);
  puVar7 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar7);
  func_0x00010be026c0();
  _objc_release(puVar7);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010be52aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a771c8; end: 105a7720f;  */

void FUN_105a771c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be026c0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be52aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a77210; end: 105a773e7; -[SCSpectaclesFlightImuCalibrationController _presentDownloadAssetsErrorAlertDialog] */

void FUN_105a77210(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_68;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x0001090250c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = puVar3;
  func_0x000109025ee8();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000109025f00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010be79fe0(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_70);
  puVar1 = auStack_68;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume(puVar1);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010be026c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a773e8; end: 105a77413;  */

void FUN_105a773e8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be026c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a77414; end: 105a774e3; -[SCSpectaclesFlightImuCalibrationController _presentAlertDialog:] */

void FUN_105a77414(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105a774e4;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105a774e4; end: 105a7753b;  */

void FUN_105a774e4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x78;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf27c20();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a7753c; end: 105a7756f; -[SCSpectaclesFlightImuCalibrationController _dismissCalibrationPage] */

void FUN_105a7753c(long param_1)

{
  param_1 = param_1 + 0x78;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf27c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a77570; end: 105a77607; -[SCSpectaclesFlightImuCalibrationController _loadingPageViewModel] */

void FUN_105a77570(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126c1c80;
  func_0x000109025de0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000109025e88();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000109025ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09d200(puVar3,param_2,param_1,uVar1,uVar2,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105a77608; end: 105a77737; -[SCSpectaclesFlightImuCalibrationController _emitCalibrationInProgressPageViewModelWithPhase:phaseState:currentPhaseSucceeded:currentPhaseFailed:] */

void FUN_105a77608(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  lVar1 = param_1;
  func_0x00010bee91a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0e00e0(uVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c1c88;
  lVar3 = param_1;
  func_0x00010becf8a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf529e0(uVar4);
  func_0x00010bfeb800(puVar5,param_2,lVar3,param_3,uVar4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar6 = PTR_PTR_1126c1c80;
  func_0x000109025de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf27be0(puVar6,param_2,lVar3,puVar5,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28),param_2,puVar6);
  func_0x00010bec21e0(param_1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a77738; end: 105a7784b; -[SCSpectaclesFlightImuCalibrationController _emitCalibrationCompletePageViewModel] */

void FUN_105a77738(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x00010bee91a0(param_1,param_2,*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0e00e0(uVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c1c88;
  uVar3 = uVar2;
  func_0x000109025f48();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43c80(puVar4,param_2,uVar3,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126c1c80;
  func_0x000109025de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf27be0(puVar5,param_2,uVar3,puVar4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  *(undefined1 *)(param_1 + 0x60) = 1;
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28),param_2,puVar5);
  func_0x00010bddb020(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a7784c; end: 105a778f3; -[SCSpectaclesFlightImuCalibrationController _trayTitleForPhase:] */

void FUN_105a7784c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 3) {
    if (param_3 == 0) {
      func_0x000109025df8();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_3 == 1) {
      func_0x000109025e10();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_3 == 2) {
      func_0x000109025e28();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_3 == 3) {
    func_0x000109025e40(&PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 4) {
    func_0x000109025e58();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 5) {
    func_0x000109025e70();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a778f4; end: 105a7791b; -[SCSpectaclesFlightImuCalibrationController _phaseStateStringForPhaseState:] */

undefined ** FUN_105a778f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 3) {
    return (undefined **)(&PTR_PTR_1108d0290)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e1a218;
}



/* Entry: 105a7791c; end: 105a779b7; -[SCSpectaclesFlightImuCalibrationController _videoViewModelIdFromPhase:phaseState:] */

void FUN_105a7791c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010be737c0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c25ce40(puVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a779b8; end: 105a779d3; -[SCSpectaclesFlightImuCalibrationController flightImuCalibrationRPCManagerDidReceiveStartCalibrationResponse:error:] */

void FUN_105a779b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7a630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentCalibrationErrorAlertDia_11257c328)
    ;
    return;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be078f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__emitCalibrationInProgressPageVi_11255f7d8,0,0,0,0);
  return;
}



/* Entry: 105a779d4; end: 105a779d7; -[SCSpectaclesFlightImuCalibrationController flightImuCalibrationRPCManagerDidReceiveStopCalibrationResponse:error:] */

void FUN_105a779d4(void)

{
  return;
}



/* Entry: 105a779d8; end: 105a779db; -[SCSpectaclesFlightImuCalibrationController flightImuCalibrationRPCManagerDidReceiveRestartDeviceResponse:error:] */

void FUN_105a779d8(void)

{
  return;
}



/* Entry: 105a779dc; end: 105a77a97; -[SCSpectaclesFlightImuCalibrationController _handleAction:] */

void FUN_105a779dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105a77a98;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105a77aa0;
  puStack_48 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x105a77aa8;
  puStack_70 = &UNK_110842e18;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x105a77ab0;
  puStack_98 = &UNK_110842e18;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x105a77ab8;
  puStack_c0 = &UNK_110842e18;
  uStack_b8 = param_1;
  uStack_90 = param_1;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0c0b60(param_3,param_2,&puStack_38,&puStack_60,&puStack_88,&puStack_b0,&puStack_d8);
  return;
}


