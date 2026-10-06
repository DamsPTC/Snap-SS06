/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1064b1b88; end: 1064b1bdb; -[SCContextOperaLayerUIContainer dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b1b88(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c2a5e40(*(undefined8 *)(param_1 + _DAT_112748c2c),param_2,param_1);
  puStack_28 = PTR_PTR_1126f1668;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1064b1bdc; end: 1064b1beb; -[SCContextOperaLayerUIContainer insertAsFirstSubview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1064b1bdc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112748c28);
}



/* Entry: 1064b1bec; end: 1064b1bfb; -[SCContextOperaLayerUIContainer setInsertAsFirstSubview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b1bec(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112748c28) = param_3;
  return;
}



/* Entry: 1064b1bfc; end: 1064b1c0b; -[SCContextOperaLayerUIContainer flushSuperviewLayoutOnAttach] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1064b1bfc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112748c4c);
}



/* Entry: 1064b1c0c; end: 1064b1c1b; -[SCContextOperaLayerUIContainer setFlushSuperviewLayoutOnAttach:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b1c0c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112748c4c) = param_3;
  return;
}



/* Entry: 1064b1c1c; end: 1064b1c9f; -[SCContextOperaLayerUIContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b1c1c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112748c2c,0);
  _objc_storeStrong(param_1 + _DAT_112748c40,0);
  _objc_storeStrong(param_1 + _DAT_112748c54,0);
  _objc_storeStrong(param_1 + _DAT_112748c34,0);
  _objc_destroyWeak(param_1 + _DAT_112748c3c);
  _objc_destroyWeak(param_1 + _DAT_112748c48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112748c30);
  return;
}



/* Entry: 1064b1ca0; end: 1064b1d5f;  */

void FUN_1064b1ca0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  puVar1 = PTR_DAT_1126a4f48;
  while( true ) {
    if (param_1 == 0) {
      PTR_DAT_1126a4f48 = puVar1;
      return;
    }
    PTR_DAT_1126a4f48 = puVar1;
    _objc_retain(param_1);
    lVar2 = param_1;
    func_0x00010010fab4(param_1,puVar1);
    lVar3 = param_1;
    if ((int)lVar2 == 0) {
      lVar3 = 0;
    }
    _objc_retain(lVar3);
    _objc_release(param_1);
    if ((int)lVar2 != 0) break;
    lVar3 = param_1;
    func_0x00010c0f3ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    param_1 = lVar3;
    puVar1 = PTR_DAT_1126a4f48;
  }
  lVar3 = param_1;
  func_0x00010c29cc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82f40();
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064b1d60; end: 1064b1da7;  */

void FUN_1064b1d60(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e50e18;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e50e18,
                      &PTR____CFConstantStringClassReference_110e50df8,0);
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



/* Entry: 1064b1da8; end: 1064b1f6b; -[SCCaptureWorkflow initWithDelegate:captureWorkflowResultDelegate:captureWorkflowPageRouter:applicationLifecycleEvents:captureScope:cameraUIScope:cameraHardwareServices:hardwareStartRunningConfig:timeProvider:] */

undefined1 *
FUN_1064b1da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f1670;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_7);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_8);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_9);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064b1f6c; end: 1064b209f; -[SCCaptureWorkflow beginWorkflow] */

void FUN_1064b1f6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  puVar7 = *(undefined **)(param_1 + 0x60);
  _objc_retain(puVar7);
  if (puVar7 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126afec8;
    func_0x00010bf299c0(PTR_PTR_1126afec8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf29960();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf70d80();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010c2b5f00(puVar1,param_2,lVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126afed0;
    func_0x00010c0db140(PTR_PTR_1126afed0);
    func_0x00010c2b7d00(puVar1,param_2,puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  func_0x00010bebf9e0(param_1,param_2,puVar7);
  func_0x00010c2366e0(*(undefined8 *)(param_1 + 0x30),param_2,param_1);
  func_0x00010be65b80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 1064b20a0; end: 1064b21eb; -[SCCaptureWorkflow _endWorkflowWithDidSendSnap:completion:] */

void FUN_1064b20a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x50) = 1;
    func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x38));
    uVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar3);
      func_0x00010bf31660();
      _objc_release(lVar3);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf2b960(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c1119e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128660();
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(param_4);
    func_0x00010bf834e0(uVar5);
    _objc_release(param_4);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1064b21ec; end: 1064b226f;  */

void FUN_1064b21ec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x20) + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf315c0();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = *(long *)(param_1 + 0x20) + 0x18;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf74ba0(lVar1,param_2,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1064b2270; end: 1064b227b; -[SCCaptureWorkflow endWorkflowWithCompletion:] */

void FUN_1064b2270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be09ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__endWorkflowWithDidSendSnap_comp_112560198,0,param_3);
  return;
}



/* Entry: 1064b227c; end: 1064b2487; -[SCCaptureWorkflow _observeApplicationLifecycleEvents] */

void FUN_1064b227c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c2a6420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1064b2488;
  puStack_78 = &UNK_110846510;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf72840(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1064b2598;
  puStack_a0 = &UNK_110846510;
  _objc_copyWeak(auStack_98,auStack_68);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf75dc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c0,auStack_68);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 1064b2488; end: 1064b2597;  */

void FUN_1064b2488(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 0x30);
    func_0x00010bf2b960();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010bf2b960(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf14400();
      dVar6 = param_1;
      func_0x00010bf5e680(*(undefined8 *)(param_2 + 0x48));
      if ((param_1 <= 0.0) || (dVar6 - *(double *)(param_2 + 0x58) < param_1)) {
        *(undefined1 *)(param_2 + 0x52) = 1;
        uVar5 = *(undefined8 *)(param_2 + 0x30);
        func_0x00010bf2b960(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf17b00();
        _objc_release(uVar5);
      }
      else {
        func_0x00010be09fe0(param_2,param_3,0,0);
      }
      _objc_release(uVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064b2598; end: 1064b2657;  */

void FUN_1064b2598(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x00010bf2b960();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      if (*(char *)(param_1 + 0x52) == '\x01') {
        *(undefined1 *)(param_1 + 0x52) = 0;
        uVar4 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010bf2b960(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf941a0();
        _objc_release(uVar4);
      }
      if (*(char *)(param_1 + 0x51) == '\x01') {
        *(undefined1 *)(param_1 + 0x51) = 0;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064b2658; end: 1064b26b3;  */

void FUN_1064b2658(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + 0x51) = 1;
    func_0x00010bf5e680(*(undefined8 *)(param_2 + 0x48));
    *(undefined8 *)(param_2 + 0x58) = param_1;
    iVar1 = (int)*(undefined8 *)(param_2 + 0x30);
    func_0x00010c22f200();
    if (iVar1 != 0) {
      func_0x00010be09fe0(param_2,param_3,0,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064b26b4; end: 1064b26bf; -[SCCaptureWorkflow leftCameraBackButtonPressed] */

void FUN_1064b26b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be09ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__endWorkflowWithDidSendSnap_comp_112560198,0,0);
  return;
}



/* Entry: 1064b26c0; end: 1064b26cb; -[SCCaptureWorkflow cameraDismissRequested:] */

void FUN_1064b26c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be09ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__endWorkflowWithDidSendSnap_comp_112560198,0,param_3);
  return;
}



/* Entry: 1064b26cc; end: 1064b26cf; -[SCCaptureWorkflow didBeginRecording] */

void FUN_1064b26cc(void)

{
  return;
}



/* Entry: 1064b26d0; end: 1064b26d3; -[SCCaptureWorkflow toggleButtonVisibility:] */

void FUN_1064b26d0(void)

{
  return;
}



/* Entry: 1064b26d4; end: 1064b26d7; -[SCCaptureWorkflow toggleSearchBarAndBitmojiVisibility:] */

void FUN_1064b26d4(void)

{
  return;
}



/* Entry: 1064b26d8; end: 1064b26db; -[SCCaptureWorkflow toggleTimerMode:] */

void FUN_1064b26d8(void)

{
  return;
}



/* Entry: 1064b26dc; end: 1064b26df; -[SCCaptureWorkflow activate] */

void FUN_1064b26dc(void)

{
  return;
}



/* Entry: 1064b26e0; end: 1064b2753; -[SCCaptureWorkflow didCancelFromPreview:] */

void FUN_1064b26e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfa3580();
  _objc_release(lVar1);
  if (((uint)lVar2 >> 10 & 1) == 0) {
    func_0x00010bf84240(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
  }
  else {
    func_0x00010be09fe0(param_1,param_2,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064b2754; end: 1064b275f; -[SCCaptureWorkflow didSendSnapsAndPostToStory:storyTypes:] */

void FUN_1064b2754(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be09ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__endWorkflowWithDidSendSnap_comp_112560198,1,0);
  return;
}



/* Entry: 1064b2760; end: 1064b276b; -[SCCaptureWorkflow didSendChatMessage] */

void FUN_1064b2760(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be09ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__endWorkflowWithDidSendSnap_comp_112560198,1,0);
  return;
}



/* Entry: 1064b276c; end: 1064b2777; -[SCCaptureWorkflow didSendToGallery] */

void FUN_1064b276c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be09ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__endWorkflowWithDidSendSnap_comp_112560198,1,0);
  return;
}



/* Entry: 1064b2778; end: 1064b2783; -[SCCaptureWorkflow didPostStoryWithStoryTypes:] */

void FUN_1064b2778(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be09ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__endWorkflowWithDidSendSnap_comp_112560198,1,0);
  return;
}



/* Entry: 1064b2784; end: 1064b27f3; -[SCCaptureWorkflow didSaveSnapWithParameters:] */

void FUN_1064b2784(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf315e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1064b27f4; end: 1064b28e7; -[SCCaptureWorkflow _startCameraRunningWithConfig:] */

void FUN_1064b27f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf299a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c112d80(param_3);
  uVar4 = param_3;
  func_0x00010c154e80(param_3);
  _objc_release(param_3);
  puVar6 = &UNK_10f37e5f3;
  uVar7 = 0x125;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db92b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18cd00(lVar2,param_2,uVar3,uVar4,&PTR___NSConcreteGlobalBlock_110924fa0,puVar5,in_x6,
                      in_x7,puVar6,uVar7);
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064b28e8; end: 1064b28eb;  */

void FUN_1064b28e8(void)

{
  return;
}



/* Entry: 1064b28ec; end: 1064b2967; -[SCCaptureWorkflow .cxx_destruct] */

void FUN_1064b28ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1064b2968; end: 1064b3973; -[SCCaptureWorkflowNavigationPageRouter initWithPresentingViewController:presentingUIContainer:cameraResources:publicCameraFeatureCatalog:cameraUIServices:touchController:lensDataProvider:timelineDataProvider:cameraCircumstanceEngine:cameraFeatureLoggingServices:cameraUserLoggingServices:cameraLoggingServices:cameraHardwareServices:cameraRequestHandlerServices:cameraDeviceSettingsResolver:renderTarget:renderAgent:cameraStabilityServices:cameraPreviewPresenter:captureServiceScopeExposer:cameraBIPAScopeExposer:cameraBIPAScopeServices:replyConfiguration:cameraLensesViewControllerManager:cameraLensesViewControllerConfigurator:lensCarouselManager:styleContextController:snapchattersDataFetcher:soundEffects:audioSession:currentPageTracker:appTerminationProvider:previewFilterDataProviderFactory:featureSettingsService:legacyLensLogger:userTrackedLogger:storiesLegacySnapInfoCollector:shortcutContextAction:plusServices:lensPlusTierService:systemScope:legacyCameraTooltipsService:cameraUIScope:nightModeServices:lensCarouselStudySettings:locationPermissionsManager:cameraConfigurationServices:appLifeCycleManager:systemConfiguration:customVolumeServices:secretFeatureCheckingServices:appInsightsMetadataStorage:permissionRequestService:notificationPermissionRequester:appStartExperimentReader:captureWorkflowDelegate:cameraModeActivationServices:snapEditorTweakServices:modularCallLauncher:cameraSnapModelServices:] */

undefined8 *
FUN_1064b2968(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             ulong param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61,undefined8 param_62)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  int iVar16;
  undefined8 uVar17;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_55);
  _objc_retain(param_56);
  _objc_retain(param_57);
  _objc_retain();
  _objc_retain(param_59);
  _objc_retain(param_60);
  _objc_retain(param_61);
  _objc_retain(param_62);
  puStack_80 = PTR_PTR_1126f1678;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) goto LAB_1064b373c;
  _objc_retain(param_50);
  uVar2 = puVar1[1];
  puVar1[1] = param_50;
  _objc_release(uVar2);
  _objc_retain(param_49);
  uVar2 = puVar1[3];
  puVar1[3] = param_49;
  _objc_release(uVar2);
  _objc_storeWeak(puVar1 + 2,param_3);
  _objc_storeWeak(puVar1 + 6,param_58);
  _objc_retain(param_45);
  uVar2 = puVar1[7];
  puVar1[7] = param_45;
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c8138;
  _objc_alloc();
  if (param_9 == 0) {
    func_0x00010c04ff80();
  }
  else {
    func_0x00010c0239e0();
  }
  uVar2 = puVar1[4];
  puVar1[4] = puVar3;
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126c8458;
  _objc_alloc();
  func_0x00010bffc040();
  puVar3 = PTR_PTR_1126ae720;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1064b3974;
  puStack_98 = &UNK_1109104b8;
  _objc_retain();
  puStack_90 = puVar4;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_27;
  func_0x00010c269d40(param_27);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf47700();
  _objc_release(uVar2);
  func_0x00010c176920(puVar1[4]);
  func_0x00010c20c680(puVar1[4]);
  uVar2 = param_43;
  func_0x00010bf07a00(param_43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c169920(puVar1[4]);
  _objc_release(uVar2);
  func_0x00010c176380(puVar1[4]);
  uVar17 = puVar1[4];
  uVar2 = param_59;
  func_0x00010bef0220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaf8c0(uVar17);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126c8460;
  _objc_alloc();
  func_0x00010bffc040();
  puVar6 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  puVar7 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  puVar8 = PTR_PTR_1126c3b20;
  _objc_alloc();
  func_0x00010c038ea0();
  uVar2 = param_7;
  func_0x00010bf2b660(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = puVar1[4];
  func_0x00010bf2a1a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a6c0(uVar17);
  _objc_release(uVar9);
  _objc_release(uVar17);
  _objc_release(uVar2);
  uVar10 = param_45;
  func_0x00010bfa3580();
  if (((uint)uVar10 >> 7 & 1) != 0) {
    uVar2 = puVar1[4];
    func_0x00010bf2a1a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eaf60();
    _objc_release(uVar2);
  }
  uVar2 = param_12;
  func_0x00010bf2ac60(param_12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7860(puVar1[4]);
  _objc_release(uVar2);
  uVar2 = param_12;
  func_0x00010bf2a080(param_12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176ae0(puVar1[4]);
  _objc_release(uVar2);
  uVar2 = param_12;
  func_0x00010bf52280(param_12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184120(puVar1[4]);
  _objc_release(uVar2);
  puVar11 = PTR_PTR_1126b7008;
  _objc_alloc_init(PTR_PTR_1126b7008);
  func_0x00010c176740(puVar1[4]);
  _objc_release(puVar11);
  uVar2 = param_13;
  func_0x00010bf1cf00(param_13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c177600(puVar1[4]);
  _objc_release(uVar2);
  uVar2 = param_12;
  func_0x00010c0f9d00(param_12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dabc0(puVar1[4]);
  _objc_release(uVar2);
  func_0x00010c205f20(puVar1[4]);
  func_0x00010c206a00(puVar1[4]);
  func_0x00010c16c360(puVar1[4]);
  func_0x00010c1877a0(puVar1[4]);
  func_0x00010c1e1ca0(puVar1[4]);
  func_0x00010c215980(puVar1[4]);
  func_0x00010c1ffc40(puVar1[4]);
  func_0x00010c1e2080(puVar1[4]);
  func_0x00010c177160(puVar1[4]);
  uVar2 = puVar1[4];
  func_0x00010bf2bbc0(param_5);
  func_0x00010c177780(uVar2);
  uVar2 = param_29;
  func_0x00010c269d40(param_29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188840(puVar1[4]);
  _objc_release(uVar2);
  uVar10 = param_45;
  func_0x00010c150aa0();
  func_0x0001005d3b6c();
  if (uVar10 == 1) {
    uVar2 = param_25;
    func_0x00010c2720a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar2;
    func_0x00010c076240();
    puVar11 = PTR_PTR_1126b2cb8;
    iVar16 = (int)uVar17;
    if (iVar16 != 0) {
      uVar17 = param_11;
      func_0x00010c269d40(param_11);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar17;
      func_0x00010bf398e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071980();
      _objc_release(uVar9);
      _objc_release(uVar17);
      _objc_release(uVar2);
      if ((int)puVar11 == 0) {
        iVar16 = 0;
        goto LAB_1064b33dc;
      }
      puVar11 = PTR_PTR_1126caf68;
      _objc_alloc();
      uVar2 = param_3;
      func_0x00010c29bf00(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = puVar1[3];
      func_0x00010bf45e20(uVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01aa20();
      uVar9 = puVar1[9];
      puVar1[9] = puVar11;
      _objc_release(uVar9);
      _objc_release(uVar17);
      _objc_release(uVar2);
      uVar9 = puVar1[9];
      uVar2 = param_7;
      func_0x00010c272320(param_7);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar2;
      func_0x00010c2722c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf47c60(uVar9);
      _objc_release(uVar17);
    }
    _objc_release(uVar2);
  }
  else {
    iVar16 = 0;
  }
LAB_1064b33dc:
  *(byte *)((long)puVar1 + 0x42) = (byte)iVar16;
  uVar12 = param_45;
  func_0x00010bfa3580();
  puVar11 = PTR_PTR_1126caf80;
  if ((param_4 == 0) || ((uVar12 & 0x40) != 0)) {
    if ((param_4 != 0) && ((uVar12 & 0x40) != 0)) {
      puVar11 = PTR_PTR_1126caf78;
      _objc_alloc();
      func_0x00010bffc100();
      goto LAB_1064b3438;
    }
    uVar2 = param_11;
    func_0x00010c269d40(param_11);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar2;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09a60();
    _objc_release(uVar17);
    _objc_release(uVar2);
    puVar13 = PTR_PTR_1126caf80;
    if ((int)puVar11 == 0) {
      uVar2 = param_11;
      func_0x00010c269d40(param_11);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar2;
      func_0x00010bf398e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf09980();
      *(byte *)(puVar1 + 8) = (byte)iVar16 | (byte)puVar13;
      _objc_release(uVar17);
      _objc_release(uVar2);
      uVar17 = puVar1[4];
      func_0x00010c29bf00(uVar17);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar17;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(0x4014000000000000);
      _objc_release(uVar2);
      _objc_release(uVar17);
      puVar11 = PTR_PTR_1126caf88;
      _objc_alloc();
      puVar14 = puVar1 + 2;
      _objc_loadWeakRetained(puVar14);
      func_0x00010bffc0e0();
      uVar2 = puVar1[5];
      puVar1[5] = puVar11;
      _objc_release(uVar2);
      _objc_release(puVar14);
      *(undefined1 *)((long)puVar1 + 0x41) = 1;
    }
    else {
      puVar11 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      puVar13 = PTR_PTR_1126caf78;
      _objc_alloc();
      func_0x00010bffc100();
      uVar2 = puVar1[5];
      puVar1[5] = puVar13;
      _objc_release(uVar2);
      _objc_release(puVar11);
    }
  }
  else {
    puVar11 = PTR_PTR_1126caf70;
    _objc_alloc();
    func_0x00010bffc0a0();
LAB_1064b3438:
    uVar2 = puVar1[5];
    puVar1[5] = puVar11;
    _objc_release(uVar2);
  }
  func_0x00010c27a8c0(puVar1[9]);
  if (uVar10 == 1) {
    puVar11 = PTR_PTR_1126caf90;
    _objc_alloc_init(PTR_PTR_1126caf90);
    func_0x00010c1eafa0(puVar1[7]);
    _objc_release(puVar11);
    uVar9 = puVar1[7];
    func_0x00010c131b60(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_7;
    func_0x00010c272320(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar2;
    func_0x00010c2722c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24fac0(uVar9);
    _objc_release(uVar17);
    _objc_release(uVar2);
    _objc_release(uVar9);
    _objc_initWeak(auStack_b8,param_45);
    puVar15 = auStack_c0;
    _objc_copyWeak(puVar15,auStack_b8);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(param_28);
    _objc_release(puVar15);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puStack_90);
  _objc_release(puVar4);
LAB_1064b373c:
  _objc_release(param_62);
  _objc_release(param_61);
  _objc_release(param_60);
  _objc_release(param_59);
  _objc_release(param_58);
  _objc_release(param_57);
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1064b3974; end: 1064b399b;  */

void FUN_1064b3974(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064b399c; end: 1064b3a57;  */

void FUN_1064b399c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  if ((param_2 != 0) && (param_3 == 0)) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      lVar1 = param_1;
      func_0x00010c131b60(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_2;
      func_0x00010c269d40(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bef1060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24f960(lVar1);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064b3a58; end: 1064b3b67; -[SCCaptureWorkflowNavigationPageRouter showCameraWithDelegate:] */

void FUN_1064b3a58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1e24c0(*(undefined8 *)(param_1 + 0x20));
  _objc_initWeak(auStack_38,param_1);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf31680(lVar1);
  _objc_release(lVar1);
  uVar2 = 0;
  if (*(char *)(param_1 + 0x40) == '\0') {
    uVar2 = 0x3fb99999a0000000;
  }
  func_0x00010c10ede0(uVar2,*(undefined8 *)(param_1 + 0x28));
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1064b3b68; end: 1064b3bf7;  */

void FUN_1064b3b68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c252440(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c222c20();
    _objc_release(uVar1);
    func_0x00010c1eb380(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064b3bf8; end: 1064b3d1b; -[SCCaptureWorkflowNavigationPageRouter dismissCameraWithCompletion:] */

void FUN_1064b3bf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  ppuVar1 = &puStack_80;
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x42) == '\x01') {
    lVar2 = param_1;
    func_0x00010be3c8c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = 0;
  }
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1064b3d1c;
  puStack_68 = &UNK_1108647e8;
  puStack_48 = puStack_58;
  _objc_retain(param_3);
  uStack_60 = param_3;
  _objc_retainBlock(&puStack_80);
  uVar3 = 0x3fb99999a0000000;
  if (lVar2 != 0) {
    uVar3 = 0;
  }
  func_0x00010bf84b40(uVar3,*(undefined8 *)(param_1 + 0x28));
  _objc_release(ppuVar1);
  _objc_release(uStack_60);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1064b3d1c; end: 1064b3d67;  */

void FUN_1064b3d1c(long param_1)

{
  if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) == 0) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  }
  return;
}



/* Entry: 1064b3d68; end: 1064b3fdf; -[SCCaptureWorkflowNavigationPageRouter _insertSnapBackDismissalSnapshotIfNeeded] */

void FUN_1064b3d68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  
  if (*(char *)(param_5 + 0x41) != '\x01') {
    uVar6 = 0;
    goto LAB_1064b3e34;
  }
  uVar1 = param_5 + 0x10;
  _objc_loadWeakRetained();
  uVar2 = *(ulong *)(param_5 + 0x20);
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar6 == uVar2) {
    uVar6 = uVar2;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((uVar6 != 0) || (uVar6 = uVar2, func_0x00010c06d1a0(), (uVar6 & 1) != 0))
    goto LAB_1064b3e10;
    uVar4 = uVar3;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar6 = 0;
    if (uVar4 != 0) {
      uVar6 = uVar3;
      func_0x00010c245f60();
      _objc_retainAutoreleasedReturnValue();
      if (uVar6 != 0) {
        func_0x00010bf20c00(uVar3);
        uVar4 = uVar1;
        func_0x00010c29bf00(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf51460(param_1,param_2,param_3,param_4,uVar3);
        func_0x00010c19f0e0(uVar6);
        _objc_release(uVar4);
        func_0x00010c21e900(uVar6);
        func_0x00010c1af000(uVar6);
        func_0x00010c160f00(uVar6);
        uVar4 = uVar1;
        func_0x00010c29bf00(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60();
        _objc_release(uVar4);
        uVar4 = uVar3;
        func_0x00010c262ca0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a7f60();
        _objc_release(uVar4);
        func_0x00010c1a7f60(uVar3);
        uVar5 = 0;
        _dispatch_time(0,5000000000);
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0xc2000000;
        pcStack_78 = FUN_1064b3fe0;
        puStack_70 = &UNK_110842e18;
        _objc_retain(uVar6);
        uStack_68 = uVar6;
        func_0x00010058c530(uVar5,PTR___dispatch_main_q_11034be20,&puStack_88);
        _objc_retain(uVar6);
        _objc_release(uStack_68);
      }
      _objc_release(uVar6);
    }
  }
  else {
LAB_1064b3e10:
    uVar6 = 0;
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
LAB_1064b3e34:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1064b3fe0; end: 1064b3fe7;  */

void FUN_1064b3fe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 1064b3fe8; end: 1064b407b; -[SCCaptureWorkflowNavigationPageRouter dismissPreview:] */

void FUN_1064b3fe8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_opt_class(PTR__OBJC_CLASS___UIViewController_1126af898);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c06d1a0();
  if ((uVar3 & 1) == 0) {
    uVar3 = uVar1;
    func_0x00010c10fd00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84b00();
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064b407c; end: 1064b4083; -[SCCaptureWorkflowNavigationPageRouter shouldDismissWorkflowOnBackground] */

void FUN_1064b407c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22f210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_shouldDismissWorkflowOnBackgroun_1126696a8);
  return;
}



/* Entry: 1064b4084; end: 1064b408b; -[SCCaptureWorkflowNavigationPageRouter cameraViewController] */

undefined8 FUN_1064b4084(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1064b408c; end: 1064b40fb; -[SCCaptureWorkflowNavigationPageRouter .cxx_destruct] */

void FUN_1064b408c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064b40fc; end: 1064b42bb;  */

void FUN_1064b40fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new();
  uVar2 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010bf51460(uVar2);
  func_0x00010c19f0e0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  _objc_release(uVar2);
  FUN_1064b42bc(param_2,puVar1);
  uVar2 = param_2;
  FUN_1064b43f4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_retain(puVar1);
  _objc_retain(puVar1);
  _objc_retain(uVar2);
  func_0x00010bf02c20(param_1);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 1064b42bc; end: 1064b43f3;  */

void FUN_1064b42bc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x00010c07ace0();
  if ((uVar1 & 1) == 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1064b4af8;
    puStack_50 = &UNK_110925060;
    _objc_retain(param_2);
    ppuVar2 = &puStack_68;
    uStack_48 = param_2;
    _objc_retainBlock();
    uVar1 = param_1;
    func_0x00010bf2a5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf03fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf02e00();
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bf2a1a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bfe12e0();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)ppuVar2[2])(ppuVar2,uVar3,0);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(ppuVar2);
    _objc_release(uStack_48);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 1064b43f4; end: 1064b45e3;  */

void FUN_1064b43f4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  ppuVar3 = &puStack_60;
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c07ace0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf2a1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf2b240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x00010c245f60(uVar2,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00(uVar2);
    func_0x00010bf51460(uVar2,param_2,0);
    func_0x00010c19f0e0(uVar1);
    func_0x00010c1677c0(0,uVar2);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1064b4cbc;
    puStack_48 = &UNK_1109250d0;
    uStack_40 = uVar1;
    uStack_38 = uVar2;
    _objc_retain(uVar2);
    _objc_retain(uVar1);
    _objc_retainBlock(&puStack_60);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    ppuVar3 = &PTR___NSConcreteGlobalBlock_1109250b0;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1064b45e4; end: 1064b45eb;  */

void FUN_1064b45e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 1064b45ec; end: 1064b469f;  */

void FUN_1064b45ec(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c07ace0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf2a5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf03fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf02e00();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bf2a1a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfe12e0();
    _objc_retainAutoreleasedReturnValue();
    FUN_1064b46a0();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064b46a0; end: 1064b473f;  */

void FUN_1064b46a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  func_0x00010c1677c0(0,param_2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(param_2);
  func_0x00010bf03420(0x3fc99999a0000000,puVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 1064b4740; end: 1064b474b;  */

void FUN_1064b4740(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1064b474c; end: 1064b492b; -[SCCaptureWorkflowPresentationController initWithCameraViewController:presentedViewController:presentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1064b474c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010c07ace0();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (((ulong)puVar1 & 1) == 0) {
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3fd999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_68 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  uVar5 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR_PTR_1126f1680;
  uStack_88 = 0;
  puVar1 = &uStack_78;
  uStack_90 = uVar5;
  uStack_78 = param_1;
  _objc_msgSendSuper2(0,puVar1,PTR_s_initWithGradientColors_blurEffec_11252fd40,puVar4,0,0,param_4,
                      param_5,3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar5);
  if (puVar1 != (undefined8 *)0x0) {
    param_4 = (long)_DAT_112748cc0;
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)((long)puVar1 + param_4);
    *(undefined8 **)((long)puVar1 + param_4) = param_3;
    _objc_release(uVar5);
  }
  _objc_release(puVar4);
  puVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_1064b492c;
  puStack_f8 = PTR_PTR_1126f1680;
  puStack_100 = puVar6;
  puStack_c0 = puVar1;
  uStack_b8 = param_5;
  lStack_b0 = param_4;
  puStack_a8 = param_3;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_100,PTR_s_dismissalTransitionWillBegin_1125283c0);
  lVar8 = (long)_DAT_112748cc0;
  uVar5 = *(undefined8 *)((long)puVar6 + lVar8);
  puVar1 = puVar6;
  func_0x00010bf4b2a0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  FUN_1064b42bc(uVar5,puVar1);
  _objc_release(puVar1);
  puVar1 = puVar6;
  func_0x00010c10fd00(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c27a780();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)((long)puVar6 + lVar8);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(puVar7);
  FUN_1064b43f4();
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_1064b4f3c;
  puStack_d8 = &UNK_110924ff0;
  puStack_d0 = puVar6;
  uStack_c8 = uVar5;
  _objc_retain();
  _objc_retain(puVar6);
  func_0x00010bf02c20(puVar7);
  _objc_release(puVar7);
  _objc_release(puStack_d0);
  _objc_release(uStack_c8);
  _objc_release(uVar5);
  _objc_release(puVar6);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar1);
  return puVar1;
}



/* Entry: 1064b492c; end: 1064b4a93; -[SCCaptureWorkflowPresentationController dismissalTransitionWillBegin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b492c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  puStack_68 = PTR_PTR_1126f1680;
  lStack_70 = param_1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_dismissalTransitionWillBegin_1125283c0);
  lVar4 = (long)_DAT_112748cc0;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  lVar1 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1064b42bc(uVar3,lVar1);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c10fd00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27a780();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(lVar2);
  FUN_1064b43f4();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1064b4f3c;
  puStack_48 = &UNK_110924ff0;
  lStack_40 = param_1;
  uStack_38 = uVar3;
  _objc_retain();
  _objc_retain(param_1);
  func_0x00010bf02c20(lVar2);
  _objc_release(lVar2);
  _objc_release(lStack_40);
  _objc_release(uStack_38);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 1064b4a94; end: 1064b4ae3; -[SCCaptureWorkflowPresentationController dismissalTransitionDidEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b4a94(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1680;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dismissalTransitionDidEnd__11252fd48);
  FUN_1064b45ec(*(undefined8 *)(param_1 + _DAT_112748cc0));
  return;
}



/* Entry: 1064b4ae4; end: 1064b4af7; -[SCCaptureWorkflowPresentationController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b4ae4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112748cc0,0);
  return;
}



/* Entry: 1064b4af8; end: 1064b4c6b;  */

void FUN_1064b4af8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c245f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x20));
  uVar3 = param_2;
  func_0x00010c262ca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(param_2);
  func_0x00010bf51460(uVar3);
  func_0x00010c19f0e0(uVar2);
  _objc_release(uVar3);
  func_0x00010c1677c0(0,param_2);
  _objc_release(param_2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(uVar2);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  func_0x00010bf03420(0x3fc99999a0000000,puVar1);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1064b4c6c; end: 1064b4caf;  */

void FUN_1064b4c6c(long param_1)

{
  long lVar1;
  
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001064b4ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 1064b4cb0; end: 1064b4cbb;  */

void FUN_1064b4cb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 1064b4cbc; end: 1064b4e2b;  */

void FUN_1064b4cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010befbb60(param_7);
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x20));
  func_0x00010bf513e0(param_7);
  _objc_release(param_7);
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x20));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010c27a920(param_6);
  _objc_release(param_6);
  uVar3 = *(undefined8 *)(param_5 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_5 + 0x28);
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(param_5 + 0x20);
  _objc_retain(uVar2);
  func_0x00010bf02ee0(param_1,0,puVar1);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return;
}



/* Entry: 1064b4e2c; end: 1064b4eab;  */

void FUN_1064b4e2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1064b4eac;
  puStack_30 = &UNK_110842e18;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_28 = uVar2;
  func_0x00010bef95a0(0x3fe0000000000000,0x3fe0000000000000,puVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  return;
}



/* Entry: 1064b4eac; end: 1064b4f0f;  */

void FUN_1064b4eac(long param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = 0.0;
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x20));
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x20));
  dVar2 = 25.5;
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar1 + 25.5,dVar2 + 51.0,0x4049800000000000,0x4049800000000000,
             *(undefined8 *)(param_1 + 0x20),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 1064b4f10; end: 1064b4f3b;  */

void FUN_1064b4f10(long param_1)

{
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 1064b4f3c; end: 1064b4f4f;  */

void FUN_1064b4f3c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001064b4f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1064b4f50; end: 1064b50bb; -[SCCaptureWorkflowSwipeTransitionCoordinator initWithCameraViewController:styleContextController:presentingViewController:] */

undefined1 *
FUN_1064b4f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f1688;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_5);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aefc0;
    _objc_alloc();
    func_0x00010c0402e0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    func_0x00010c1c8c00(*(undefined8 *)((long)puVar1 + 0x10));
    func_0x00010c1c8b80(*(undefined8 *)((long)puVar1 + 0x10));
    func_0x00010c1e1260(*(undefined8 *)((long)puVar1 + 0x10));
    puVar3 = PTR_PTR_1126caf98;
    _objc_alloc();
    func_0x00010c00c8e0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be22340(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),puVar4);
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064b50bc; end: 1064b5127; -[SCCaptureWorkflowSwipeTransitionCoordinator presentViewControllerAnimationDuration:] */

void FUN_1064b50bc(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_2 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf17b00();
  _objc_release(lVar1);
  func_0x00010c10edc0(param_1,*(undefined8 *)(param_2 + 0x18),param_3,
                      *(undefined8 *)(param_2 + 0x10),0);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010bf941a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064b5128; end: 1064b52cf; -[SCCaptureWorkflowSwipeTransitionCoordinator dismissViewControllerAnimationDuration:completion:] */

void FUN_1064b5128(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_2 + 8);
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_2 + 8);
    func_0x00010c0d66a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1064b52d0;
    puStack_80 = &UNK_11085b7b0;
    lStack_78 = param_2;
    uStack_68 = param_1;
    _objc_retain(param_4);
    uStack_70 = param_4;
    func_0x00010bf84b00(uVar5,param_3,0,&puStack_98);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uStack_70);
  }
  puVar6 = (undefined *)(param_2 + 0x28);
  _objc_loadWeakRetained();
  puVar7 = puVar6;
  func_0x00010c106ec0();
  puVar8 = puVar1;
  func_0x00010c14cde0();
  _objc_release(puVar6);
  if (puVar7 != puVar8) {
    lVar2 = param_2 + 0x28;
    _objc_loadWeakRetained(lVar2);
    lVar9 = lVar2;
    func_0x00010c106ec0();
    func_0x00010c14dc80(puVar1,param_3,lVar9,0);
    _objc_release(lVar2);
  }
  if (lVar3 == 0) {
    func_0x00010be03a60(param_1,param_2,param_3,param_4);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 1064b52d0; end: 1064b52df;  */

void FUN_1064b52d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             PTR_s__dismissViewControllerAnimationD_11255e838,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1064b52e0; end: 1064b531f; -[SCCaptureWorkflowSwipeTransitionCoordinator shouldDismissWorkflowOnBackground] */

undefined8 FUN_1064b52e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2a0180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c231d80();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1064b5320; end: 1064b53a7; -[SCCaptureWorkflowSwipeTransitionCoordinator _dismissViewControllerAnimationDuration:completion:] */

void FUN_1064b5320(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_2 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf17b00();
  _objc_release(lVar1);
  func_0x00010bf84b40(param_1,*(undefined8 *)(param_2 + 0x18),param_3,param_4);
  _objc_release(param_4);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010bf941a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064b53a8; end: 1064b5447; -[SCCaptureWorkflowSwipeTransitionCoordinator _getRootPresentingViewController] */

void FUN_1064b53a8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar1 = PTR_DAT_1126a53e0;
  while (PTR_DAT_1126a53e0 = puVar1, uVar2 != 0) {
    _objc_retain(uVar2);
    uVar3 = uVar2;
    func_0x00010010fab4(uVar2,puVar1);
    _objc_release(uVar2);
    if (((int)uVar3 != 0) && (uVar3 = uVar2, func_0x00010c076360(), (uVar3 & 1) != 0))
    goto LAB_1064b5434;
    uVar3 = uVar2;
    func_0x00010c0f3ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar3;
    puVar1 = PTR_DAT_1126a53e0;
  }
  uVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(uVar2);
LAB_1064b5434:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1064b5448; end: 1064b546f; -[SCCaptureWorkflowSwipeTransitionCoordinator presentedViewControllerWithSwipeTransitionCoordinator:] */

void FUN_1064b5448(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064b5470; end: 1064b5487; -[SCCaptureWorkflowSwipeTransitionCoordinator presentingViewControllerWithSwipeTransitionCoordinator:] */

void FUN_1064b5470(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064b5488; end: 1064b54fb; -[SCCaptureWorkflowSwipeTransitionCoordinator transitionCoordinator:presentationControllerForPresentedViewController:presentingViewController:] */

void FUN_1064b5488(void)

{
  undefined *puVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  
  puVar1 = PTR_PTR_1126cafa0;
  _objc_retain(in_x4);
  _objc_retain(in_x3);
  _objc_alloc(puVar1);
  func_0x00010bffc080();
  _objc_release(in_x4);
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1064b54fc; end: 1064b5507; -[SCCaptureWorkflowSwipeTransitionCoordinator defaultSwipeInteractionAnimationDuration] */

undefined8 FUN_1064b54fc(void)

{
  return 0x3fb99999a0000000;
}



/* Entry: 1064b5508; end: 1064b550b; -[SCCaptureWorkflowSwipeTransitionCoordinator transitionCoordinator:didBeginWithTransitionType:viewController:] */

void FUN_1064b5508(void)

{
  return;
}



/* Entry: 1064b550c; end: 1064b558b; -[SCCaptureWorkflowSwipeTransitionCoordinator transitionCoordinator:didFinishWithTransitionType:success:interactive:viewController:] */

void FUN_1064b550c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c210a00(*(undefined8 *)(param_1 + 8),param_2,0);
  if (param_4 == 2) {
    uVar1 = *(ulong *)(param_1 + 0x18);
    func_0x00010c07ab40();
    if ((uVar1 & 1) == 0) {
      func_0x00010c131ae0(*(undefined8 *)(param_1 + 8));
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1064b558c; end: 1064b569b; -[SCCaptureWorkflowSwipeTransitionCoordinator transitionCoordinator:shouldBeginTransitionType:gestureRecognizer:interactive:viewController:] */

undefined8
FUN_1064b558c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5,
             undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  if (param_4 == 2) {
    puVar2 = PTR_PTR_1126ae520;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf07b60();
    _objc_release(puVar2);
    if (puVar3 == (undefined *)0x2) {
LAB_1064b5604:
      uVar5 = 1;
      goto LAB_1064b566c;
    }
    uVar4 = param_5;
    func_0x00010c0df520();
    if (uVar4 < 2) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
      func_0x00010c07ab40();
      if (iVar1 != 0) {
        uVar5 = *(undefined8 *)(param_1 + 8);
        func_0x00010bf015a0(uVar5,param_2,param_5 != 0);
        goto LAB_1064b566c;
      }
    }
  }
  else {
    uVar4 = param_5;
    func_0x00010c0df520();
    if ((uVar4 < 2) && (param_4 == 1)) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
      func_0x00010c07ab40();
      if (iVar1 == 0) goto LAB_1064b5604;
    }
  }
  uVar5 = 0;
LAB_1064b566c:
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 1064b569c; end: 1064b574f; -[SCCaptureWorkflowSwipeTransitionCoordinator transitionCoordinator:willBeginWithTransitionType:viewController:] */

void FUN_1064b569c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 == 2) {
    func_0x00010c210a00(*(undefined8 *)(param_1 + 8),param_2,2);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c29bf00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else if (param_4 == 1) {
    func_0x00010c210a00(*(undefined8 *)(param_1 + 8),param_2,1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064b5750; end: 1064b5753; -[SCCaptureWorkflowSwipeTransitionCoordinator transitionCoordinator:willFailWithTransitionType:viewController:] */

void FUN_1064b5750(void)

{
  return;
}



/* Entry: 1064b5754; end: 1064b5787; -[SCCaptureWorkflowSwipeTransitionCoordinator bareboneNavigationControllerDidPresentViewController] */

void FUN_1064b5754(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064b5788; end: 1064b57bb; -[SCCaptureWorkflowSwipeTransitionCoordinator bareboneNavigationControllerDidDismissViewController] */

void FUN_1064b5788(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064b57bc; end: 1064b5813; -[SCCaptureWorkflowSwipeTransitionCoordinator .cxx_destruct] */

void FUN_1064b57bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064b5814; end: 1064b5887; -[SCCaptureWorkflowWrapperViewController initWithParentUIContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1064b5814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1690;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112748cdc),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064b5888; end: 1064b5c07; -[SCCaptureWorkflowWrapperViewController setChildView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b5888(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  ulong uStack_198;
  undefined *puStack_190;
  long lStack_188;
  ulong uStack_180;
  long lStack_178;
  ulong uStack_170;
  long lStack_168;
  ulong uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar8 = *plStack_140;
    do {
      lVar9 = 0;
      do {
        if (*plStack_140 != lVar8) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010c12c960(*(undefined8 *)(lStack_148 + lVar9 * 8));
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = lVar2;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  func_0x00010c219b60(param_3);
  puStack_190 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = param_3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  uStack_160 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_158 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_168 = lVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  uStack_170 = uVar3;
  uStack_110 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  uStack_180 = uVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_178 = lVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_188 = lVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  uStack_198 = uVar4;
  uStack_108 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  uStack_100 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_f8 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_190);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_release(uStack_198);
  _objc_release(lStack_188);
  _objc_release(lStack_178);
  _objc_release(uStack_180);
  _objc_release(uStack_170);
  _objc_release(lStack_168);
  _objc_release(lStack_158);
  _objc_release(uStack_160);
  uVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1a8 = FUN_1064b5c08;
  puStack_1c8 = PTR_PTR_1126f1690;
  uStack_1d0 = uVar3;
  lStack_1c0 = param_1;
  uStack_1b8 = param_3;
  puStack_1b0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&uStack_1d0,PTR_s_viewDidDisappear__112684c48);
  uVar4 = uVar3;
  func_0x00010c06d1a0();
  if (((uVar4 & 1) != 0) || (uVar4 = uVar3, func_0x00010c077fc0(), (int)uVar4 != 0)) {
    lVar1 = uVar3 + (long)_DAT_112748cdc;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf6f440();
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 1064b5c08; end: 1064b5c83; -[SCCaptureWorkflowWrapperViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b5c08(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1690;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidDisappear__112684c48);
  uVar1 = param_1;
  func_0x00010c06d1a0();
  if (((uVar1 & 1) != 0) || (uVar1 = param_1, func_0x00010c077fc0(), (int)uVar1 != 0)) {
    lVar2 = param_1 + (long)_DAT_112748cdc;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf6f440();
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 1064b5c84; end: 1064b5c93; -[SCCaptureWorkflowWrapperViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b5c84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112748cdc);
  return;
}



/* Entry: 1064b5c94; end: 1064b5e47; -[SCCaptureWorkflowTransitionCoordinator initWithCameraViewController:uiContainer:] */

undefined1 *
FUN_1064b5c94(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = &uStack_60;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  uVar6 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126f1698;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bdefca0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined1 **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar6);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010beeb640();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined1 **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar6);
    _objc_retain(param_3);
    uVar6 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = param_3;
    _objc_release();
    func_0x00010b837400();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar6;
    _objc_release(uVar7);
    func_0x00010c1797c0(*(undefined8 *)((long)puVar1 + 0x20));
    func_0x00010c19efc0(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + 0x20));
    func_0x00010c219b20(*(undefined8 *)((long)puVar1 + 0x10));
    func_0x00010c1c8b80(*(undefined8 *)((long)puVar1 + 0x10));
    uVar7 = *(undefined8 *)((long)puVar1 + 0x20);
    puVar3 = param_3;
    func_0x00010bf2a1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 1;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c067a20(uVar7);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126aefc0;
  _objc_retain(uVar6);
  _objc_retain(puVar5);
  _objc_alloc(puVar3);
  func_0x00010c0402e0();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126cafa8;
  _objc_alloc(PTR_PTR_1126cafa8);
  func_0x00010c033c60();
  _objc_release(uVar6);
  func_0x00010c1c8c00(puVar5);
  puVar4 = PTR_PTR_1126b0870;
  _objc_alloc(PTR_PTR_1126b0870);
  func_0x00010c033f60();
  func_0x00010c1fbfa0();
  func_0x00010c17c400(puVar5);
  func_0x00010bf0c980(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 1064b5e48; end: 1064b5f1b; -[SCCaptureWorkflowTransitionCoordinator _wrapCameraViewControllerIfNeeded:managedUIContainer:] */

void FUN_1064b5e48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aefc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0402e0();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126cafa8;
  _objc_alloc(PTR_PTR_1126cafa8);
  func_0x00010c033c60();
  _objc_release(param_4);
  func_0x00010c1c8c00(puVar2,param_2,2);
  puVar3 = PTR_PTR_1126b0870;
  _objc_alloc(PTR_PTR_1126b0870);
  func_0x00010c033f60();
  func_0x00010c1fbfa0();
  func_0x00010c17c400(puVar2,param_2,puVar3);
  func_0x00010bf0c980(puVar3,param_2,puVar1);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1064b5f1c; end: 1064b6047; -[SCCaptureWorkflowTransitionCoordinator _createManagedUIContainer:] */

void FUN_1064b5f1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0;
    puVar1 = PTR_PTR_1126aeaf8;
    _objc_alloc(PTR_PTR_1126aeaf8);
    _objc_retain(param_3);
    _objc_retain(param_3);
    func_0x00010c0311a0(puVar1);
    _objc_release(param_3);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_60,8);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1064b6048; end: 1064b606f;  */

void FUN_1064b6048(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  if ((*(byte *)(lVar1 + 0x18) & 1) != 0) {
    return;
  }
  *(undefined1 *)(lVar1 + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_attachUI__1125a0c08,param_2);
  return;
}



/* Entry: 1064b6070; end: 1064b60cf;  */

void FUN_1064b6070(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  if ((*(byte *)(lVar1 + 0x18) & 1) == 0) {
    if (param_2 != 0) {
      (**(code **)(param_2 + 0x10))(param_2);
    }
  }
  else {
    *(undefined1 *)(lVar1 + 0x18) = 0;
    func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064b60d0; end: 1064b60db; -[SCCaptureWorkflowTransitionCoordinator presentViewControllerAnimationDuration:] */

void FUN_1064b60d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_attachUI__1125a0c08,
             *(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1064b60dc; end: 1064b624f; -[SCCaptureWorkflowTransitionCoordinator dismissViewControllerAnimationDuration:completion:] */

void FUN_1064b60dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar5 = *(undefined **)(param_1 + 0x10);
  _objc_retain(puVar5);
  puVar1 = puVar5;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = puVar5;
    func_0x00010bf38f00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    _objc_retain(puVar1);
    puVar3 = puVar1;
  }
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c106ec0();
  puVar4 = puVar1;
  func_0x00010c14cde0();
  if (puVar2 != puVar4) {
    puVar2 = puVar3;
    func_0x00010c106ec0(puVar3);
    func_0x00010c14dc80(puVar1,param_2,puVar2,0);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1064b6250;
  puStack_58 = &UNK_11084aaa8;
  puStack_50 = puVar5;
  uStack_48 = param_3;
  _objc_retain(param_3);
  _objc_retain(puVar5);
  func_0x00010bf6f440(uVar6,param_2,&puStack_70);
  _objc_release(uStack_48);
  _objc_release(puStack_50);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 1064b6250; end: 1064b631f;  */

void FUN_1064b6250(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cafb0;
    _objc_opt_class(PTR_PTR_1126cafb0);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((uVar4 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c10fd00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar5);
      return;
    }
  }
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001064b62d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1064b6320; end: 1064b6423; -[SCCaptureWorkflowTransitionCoordinator shouldDismissWorkflowOnBackground] */

ulong FUN_1064b6320(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    func_0x00010bf38f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (uVar2 == 0) {
      uVar3 = *(ulong *)(param_1 + 0x10);
      _objc_retain(uVar3);
      goto LAB_1064b63ec;
    }
  }
  puVar4 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_retain(uVar2);
  _objc_opt_class(puVar4);
  uVar5 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar4);
  uVar1 = uVar2;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar3 = uVar2;
  if ((uVar5 & 1) != 0) {
    func_0x00010c2a0180(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
LAB_1064b63ec:
  uVar2 = uVar3;
  func_0x00010c231d80(uVar3);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 1064b6424; end: 1064b644b; -[SCCaptureWorkflowTransitionCoordinator cardToExpandTransition] */

void FUN_1064b6424(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064b644c; end: 1064b64cf; -[SCCaptureWorkflowTransitionCoordinator cardTransitionWillBeginWithView:] */

void FUN_1064b644c(long param_1)

{
  long lVar1;
  
  func_0x00010bf31f60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bf84b00(param_1);
    lVar1 = param_1;
    func_0x00010c27a780(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_1064b40fc();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064b64d0; end: 1064b651b; -[SCCaptureWorkflowTransitionCoordinator cardTransitionEndedWithView:transitionType:] */

void FUN_1064b64d0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  if ((param_4 < 2) && (FUN_1064b45ec(*(undefined8 *)(param_1 + 8),param_4 == 1), param_4 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010c131af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_replyCameraBackButtonPressed_11262a0d8);
    return;
  }
  return;
}


