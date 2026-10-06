/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1000f499c; end: 1000f49ab;  */

void FUN_1000f499c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1000f49ac; end: 1000f49cf;  */

void FUN_1000f49ac(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000f49d0; end: 1000f4c9f; -[SCCameraHardwareInitOperation initWithDelegate:managedCaptureSession:cameraHardwareResource:deviceCapacityAnalyzer:devicePosition:userPreferences:systemConfiguration:isMultiCamSessionRequired:hardwareRequestHandlerUpdatesObservable:featureStartupEventBus:captureDeviceManager:] */

undefined8
FUN_1000f49d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174();
  func_0x000107c615f0(param_13);
  func_0x000107c615f0(param_14);
  uVar1 = param_3;
  func_0x0001000f4ae4(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_12,
                      param_13,param_14);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_6);
  return uVar1;
}



/* Entry: 1000f4ca0; end: 1000f4d13; -[SCCameraHardwareOperationBase initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1000f4ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e8a40;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + (long)_DAT_1127246a0),param_3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000f4d14; end: 1000f4d8f; -[SCCameraSynchronousOperation init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1000f4d14(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8a50;
  uStack_30 = param_2;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x000107c6071c();
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127246bc) = param_1;
    FUN_100078e94();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127246c0);
    *(undefined1 **)((long)puVar1 + (long)_DAT_1127246c0) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000f4d90; end: 1000f4e7f;  */

bool FUN_1000f4d90(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x000107c4d9c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f9c798);
  func_0x000107c61180();
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    puVar2 = PTR_PTR_1126e1968;
    func_0x000107c610f4();
    func_0x000107c4636c();
    bVar1 = false;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar2;
      func_0x000107c447bc();
      if ((int)puVar3 == 0) {
        bVar1 = false;
      }
      else {
        puVar3 = puVar2;
        func_0x000107c400ec();
        func_0x000107c61180();
        if (puVar3 == (undefined *)0x0) {
          bVar1 = false;
        }
        else {
          puVar4 = puVar3;
          func_0x000107c3ce88(puVar3);
          bVar1 = (param_3 & (long)(int)puVar4) != 0;
        }
        func_0x000107c61170(puVar3);
      }
    }
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_1);
  return bVar1;
}



/* Entry: 1000f4e80; end: 1000f4f6b; -[SCCameraHardwareRequest .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001000f4e98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000f4eb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000f4ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000f4ee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000f4ef8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000f4ee4) */
/* WARNING: Removing unreachable block (ram,0x0001000f4ecc) */
/* WARNING: Removing unreachable block (ram,0x0001000f4eb4) */
/* WARNING: Removing unreachable block (ram,0x0001000f4e9c) */
/* WARNING: Removing unreachable block (ram,0x0001000f4efc) */

void FUN_1000f4e80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0xa0,0);
  return;
}



/* Entry: 1000f4f6c; end: 1000f4faf; -[SCAudioSessionCore _updateNonMuteVolume] */

void FUN_1000f4f6c(float param_1,long param_2)

{
  double dVar1;
  
  func_0x000107c4e144();
  dVar1 = 0.5;
  if (0.05 < param_1) {
    func_0x000107c4e144(param_2);
    dVar1 = (double)param_1;
  }
  *(double *)(param_2 + 0x30) = dVar1;
  return;
}



/* Entry: 1000f4fb0; end: 1000f4fcb; -[SCAudioSessionCore outputVolume] */

float FUN_1000f4fb0(long param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x18);
  if (0.99999 <= fVar1) {
    fVar1 = 1.0;
  }
  return fVar1;
}



/* Entry: 1000f4fcc; end: 1000f5143; -[SCAudioSessionCore _setupNotifications] */

/* WARNING: Possible PIC construction at 0x0001000f5080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000f50c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000f5110: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000f50cc) */
/* WARNING: Removing unreachable block (ram,0x0001000f5084) */
/* WARNING: Removing unreachable block (ram,0x0001000f5114) */

void FUN_1000f4fcc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b6e00;
  func_0x000107c610fc();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar1;
  func_0x000107c61170(uVar3);
  puVar1 = PTR_PTR_1126b44c8;
  func_0x000107c610f4();
  func_0x000107c47ba0();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = param_1;
  func_0x000107c52030(param_1);
  func_0x000107c61180();
  func_0x000107c4da24(uVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010befa250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x68),PTR_s_addObserver_selector_name_object_11259c238,
             param_1,PTR_s_onAVAudioSessionRouteChanged__1125289a0,
             *(undefined8 *)PTR__AVAudioSessionRouteChangeNotification_11034cef8,0);
  return;
}



/* Entry: 1000f5144; end: 1000f5163; -[SCAudioSessionListenerAnnouncer .cxx_construct] */

void FUN_1000f5144(long param_1)

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
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 1000f5164; end: 1000f516b; -[FBKVOController initWithObserver:] */

void FUN_1000f5164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c030ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithObserver_retainObserved__1125e9da8,param_3,1);
  return;
}



/* Entry: 1000f516c; end: 1000f522b; -[FBKVOController initWithObserver:retainObserved:] */

undefined1 * FUN_1000f516c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_112700790;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x50),param_3);
    puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x000107c610f4();
    func_0x000107c47070();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c6125c((undefined1 *)((long)puVar1 + 0x10),0);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000f522c; end: 1000f52d3; -[FBKVOController observe:keyPath:options:action:] */

/* WARNING: Possible PIC construction at 0x0001000f52b0: Changing call to branch */

void FUN_1000f522c(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (((param_3 == (undefined *)0x0) || (lVar1 = param_4, func_0x000107c4adac(), param_6 == 0)) ||
     (lVar1 == 0)) {
    func_0x000107c61170(param_4);
  }
  else {
    puVar2 = PTR_PTR_1126dd6d0;
    func_0x000107c610f4(PTR_PTR_1126dd6d0);
    func_0x000107c46158();
    func_0x000107c3bff0(param_1,param_2,param_3,puVar2);
    param_3 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1000f52d4; end: 1000f52e3; -[_FBKVOInfo initWithController:keyPath:options:action:] */

void FUN_1000f52d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c004990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithController_keyPath_optio_1125dec30);
  return;
}



/* Entry: 1000f52e4; end: 1000f53d3; -[_FBKVOInfo initWithController:keyPath:options:block:action:context:] */

undefined1 *
FUN_1000f52e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  puStack_58 = PTR_PTR_112700780;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000f53d4; end: 1000f54e3; -[FBKVOController _observe:info:] */

/* WARNING: Possible PIC construction at 0x0001000f54b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000f54c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000f54b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000f54bc) */
/* WARNING: Removing unreachable block (ram,0x0001000f54cc) */

void FUN_1000f53d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61260(param_1 + 0x10);
  puVar1 = *(undefined **)(param_1 + 8);
  func_0x000107c4d9c0(puVar1,param_2,param_3);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4cae8();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x000107c520a4(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
      func_0x000107c61180();
      func_0x000107c56bcc(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
    }
    func_0x000107c3d798(puVar1,param_2,param_4);
    func_0x000107c61268(param_1 + 0x10);
    puVar2 = PTR_PTR_1126dd6c8;
    func_0x000107c5a9dc(PTR_PTR_1126dd6c8);
    func_0x000107c61180();
    func_0x000107c4da20();
  }
  else {
    func_0x000107c61268(param_1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1000f54e4; end: 1000f54eb; -[_FBKVOInfo hash] */

void FUN_1000f54e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 1000f54ec; end: 1000f553f; +[_FBKVOSharedController sharedController] */

void FUN_1000f54ec(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113730a88 != -1) {
    FUN_10002a2fc(0x113730a88,&PTR___NSConcreteGlobalBlock_110add588);
  }
  uVar1 = uRam0000000113730a80;
  func_0x000107c61174(uRam0000000113730a80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1000f5540; end: 1000f556b;  */

void FUN_1000f5540(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126dd6c8;
  func_0x000107c610fc();
  uVar1 = puRam0000000113730a80;
  puRam0000000113730a80 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000f556c; end: 1000f55e7; -[_FBKVOSharedController init] */

undefined1 * FUN_1000f556c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700788;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x000107c610f4();
    func_0x000107c47c9c();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c6125c((undefined1 *)((long)puVar1 + 0x10),0);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000f55e8; end: 1000f5693; -[_FBKVOSharedController observe:info:] */

/* WARNING: Possible PIC construction at 0x0001000f567c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000f5680) */

void FUN_1000f55e8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (param_4 != 0) {
    func_0x000107c61260(param_1 + 0x10);
    func_0x000107c3d798(*(undefined8 *)(param_1 + 8),param_2,param_4);
    func_0x000107c61268(param_1 + 0x10);
    func_0x000107c3d7b8(param_3,param_2,param_1,*(undefined8 *)(param_4 + 0x10),
                        *(undefined8 *)(param_4 + 0x18),param_4);
    if (*(char *)(param_4 + 0x38) == '\x02') {
      func_0x000107c4ffa8(param_3,param_2,param_1,*(undefined8 *)(param_4 + 0x10),param_4);
    }
    else if (*(char *)(param_4 + 0x38) == '\0') {
      *(undefined1 *)(param_4 + 0x38) = 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1000f5694; end: 1000f569f; -[SCProximityDevice setDelegate:] */

void FUN_1000f5694(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1000f56a0; end: 1000f56d3;  */

void FUN_1000f56a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000f56d4; end: 1000f5807;  */

void FUN_1000f56d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  (*pcRam00000001137fbf70)(param_1,PTR_s_traitCollection_11267bf78);
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x000107c61158();
  func_0x000107c60b14();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c44a40();
  if ((int)uVar3 == 0) {
    uVar3 = param_1;
    func_0x000107c61158();
    func_0x000107c60b14();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c44a40();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    if ((int)uVar4 == 0) {
      func_0x000107c49c10();
      uVar2 = uVar1;
      func_0x000107c5cea8(uVar1);
      func_0x000107c61180();
      FUN_10007455c(param_1,&UNK_10f7c16d1,&UNK_10f7c1701,uVar2);
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      goto LAB_1000f57e8;
    }
  }
  else {
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61174(uVar1);
  param_1 = uVar1;
LAB_1000f57e8:
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1000f5808; end: 1000f5b6f;  */

undefined * FUN_1000f5808(undefined *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  (*pcRam00000001137fbfc8)(param_1,PTR_s_traitCollection_11267bf78);
  func_0x000107c61180();
  puVar8 = param_1;
  func_0x000107c49c94();
  if ((int)puVar8 == 0) {
    puVar8 = puVar2;
    func_0x000107c5cea0();
    func_0x000107c61180();
  }
  else {
    puVar8 = param_1;
    func_0x000107c3c3ac();
    func_0x000107c61180();
  }
  func_0x000107c61174(param_1);
  func_0x000107c61174(puVar8);
  puVar9 = param_1;
  func_0x000107c61134(param_1,&UNK_10f7c1789);
  func_0x000107c61180();
  if ((puVar9 == (undefined *)0x0) ||
     ((puVar9 != puVar8 && (puVar3 = puVar9, func_0x000107c49cec(), (int)puVar3 == 0)))) {
    func_0x000107c611ec(0x1137fbfc0);
    puVar3 = param_1;
    func_0x000107c61134(param_1,&UNK_10f7c1789);
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    if ((puVar3 == (undefined *)0x0) ||
       ((puVar3 != puVar8 && (puVar9 = puVar3, func_0x000107c49cec(), (int)puVar9 == 0)))) {
      puVar4 = param_1;
      func_0x000107c61134(param_1,&UNK_10f7c17bc);
      func_0x000107c61180();
      if (puVar3 != (undefined *)0x0) {
        if (puVar4 == (undefined *)0x0) {
          puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x000107c3e15c();
          func_0x000107c61180();
          func_0x000107c61188(param_1,&UNK_10f7c17bc,puVar4,0x301);
        }
        puVar9 = puVar4;
        func_0x000107c45344();
        if (puVar9 == (undefined *)0x7fffffffffffffff) {
          func_0x000107c3d798(puVar4);
        }
      }
      func_0x000107c61174(puVar4);
      puVar5 = puVar4;
      func_0x000107c4080c();
      lVar1 = lRam0000000000000000;
      while (puVar5 != (undefined *)0x0) {
        puVar10 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            func_0x000107c61128(puVar4);
          }
          puVar9 = *(undefined **)((long)puVar10 * 8);
          if ((puVar9 == puVar8) || (puVar6 = puVar9, func_0x000107c49cec(), (int)puVar6 != 0)) {
            func_0x000107c61188(param_1,&UNK_10f7c1789,puVar9,0x301);
            func_0x000107c61174(puVar9);
            func_0x000107c61170(puVar4);
            goto LAB_1000f5ac0;
          }
          puVar10 = puVar10 + 1;
        } while (puVar5 != puVar10);
        puVar5 = puVar4;
        func_0x000107c4080c();
      }
      func_0x000107c61170(puVar4);
      func_0x000107c61188(param_1,&UNK_10f7c1789,puVar8,0x301);
      func_0x000107c61174(puVar8);
      puVar9 = puVar8;
LAB_1000f5ac0:
      func_0x000107c61170(puVar4);
    }
    else {
      func_0x000107c61174(puVar3);
      puVar9 = puVar3;
    }
    func_0x000107c611f0(0x1137fbfc0);
  }
  else {
    func_0x000107c61174(puVar9);
    puVar3 = puVar9;
  }
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar8);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return puVar9;
  }
  func_0x000107c60e78();
  func_0x000107c611f0(0x1137fbfc0);
  func_0x000107c60bd8();
  func_0x000107c61134();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    puVar8 = (undefined *)0x1;
  }
  else {
    puVar8 = puVar2;
    func_0x000107c3ebcc(puVar2);
  }
  func_0x000107c61170(puVar2);
  return puVar8;
}



/* Entry: 1000f5b70; end: 1000f5c07;  */

long FUN_1000f5b70(long param_1)

{
  long lVar1;
  
  func_0x000107c61134(param_1,&UNK_10f7c16a9);
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = param_1;
    func_0x000107c3ebcc(param_1);
  }
  func_0x000107c61170(param_1);
  return lVar1;
}



/* Entry: 1000f5c08; end: 1000f5d93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f5c08(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  func_0x000107c61174(param_3);
  uVar5 = (uint)puVar2;
  puVar2 = param_1;
  func_0x000107c4eca0();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c60ba4();
  func_0x000107c61170(puVar2);
  if (puVar3 == (undefined *)0x0) {
    func_0x000107c61174(param_1);
  }
  else {
    iVar1 = 2;
    FUN_100029b9c(2,0x11,0,0);
    if (iVar1 == 0) {
      puVar3 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
      func_0x000107c5ceac();
      func_0x000107c61180();
      puVar2 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_58 = param_1;
      puStack_50 = puVar3;
      func_0x000107c3e17c();
      func_0x000107c61180();
      puVar6 = puVar4;
      func_0x000107c5ceb0(puVar2);
      uVar5 = (uint)puVar6;
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
    }
    else {
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      puStack_70 = &UNK_10b889b2c;
      puStack_68 = &UNK_110d661c8;
      func_0x000107c61174(param_3);
      puStack_60 = param_3;
      uVar5 = (uint)&puStack_80;
      func_0x000107c5ce98(param_1);
      func_0x000107c61180();
      puVar3 = puStack_60;
      puVar2 = param_1;
    }
    func_0x000107c61170(puVar3);
    param_1 = puVar2;
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return;
  }
  func_0x000107c60e78();
  if ((byte)param_3[_DAT_11278e2e4] == uVar5) {
    return;
  }
  param_3[_DAT_11278e2e4] = (char)uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bed2d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1000f5d94; end: 1000f5db3; -[SCBareboneNavigationController setShouldUseNGSSafeAreaInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f5d94(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_11278e2e4) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11278e2e4) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bed2d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateAdditionalSafeAreaInsets_1125924e8);
  return;
}



/* Entry: 1000f5db4; end: 1000f5e27; -[SCBareboneNavigationController _updateAdditionalSafeAreaInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f5db4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c5dee4();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x000107c5de64(param_1);
    func_0x000107c61180();
    func_0x000107c515a0();
    func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed2d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateAdditionalSafeAreaInsetsF_1125924f0)
    ;
    return;
  }
  *(undefined1 *)(param_1 + _DAT_11278e2ec) = 1;
  return;
}



/* Entry: 1000f5e28; end: 1000f5e53;  */

void FUN_1000f5e28(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000f5e54; end: 1000f5e5f;  */

undefined ** FUN_1000f5e54(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1000f5e60; end: 1000f5eeb;  */

void FUN_1000f5e60(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1000f5eec,param_1);
  return;
}



/* Entry: 1000f5eec; end: 1000f5ef3;  */

void FUN_1000f5eec(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  FUN_1000f5ef4();
  func_0x000107c613fc();
  FUN_100083b20(&uStack_38);
  func_0x000107c61170(uStack_38);
  *param_1 = unaff_x20;
  param_1[1] = &PTR_DAT_1103b8508;
  return;
}



/* Entry: 1000f5ef4; end: 1000f5f13;  */

void FUN_1000f5ef4(void)

{
  func_0x000107c61168(&PTR_PTR_112d9d918);
  return;
}



/* Entry: 1000f5f14; end: 1000f5f73;  */

void FUN_1000f5f14(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_1000f5ef4();
  func_0x000107c613fc();
  FUN_100083b20(&uStack_38);
  func_0x000107c61170(uStack_38);
  *param_1 = param_2;
  param_1[1] = &PTR_DAT_1103b8508;
  return;
}



/* Entry: 1000f5f74; end: 1000f5ff3;  */

/* WARNING: Possible PIC construction at 0x0001000f5fd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000f5fdc) */

void FUN_1000f5f74(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef860d0);
  uVar2 = 0x7574726174534353;
  func_0x000107c5fadc(0x7574726174534353,0xe900000000000070);
  FUN_1000f6108(uVar1,uVar2,0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1000f5ff4; end: 1000f6107;  */

void FUN_1000f5ff4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  puVar1 = &UNK_10f82eefb;
  FUN_1000ba800(&UNK_10f82eefb);
  if (puRam00000001137fe060 != (undefined *)0x0) {
    puVar2 = puRam00000001137fe060;
    func_0x000107c4b874();
    func_0x000107c61180();
    if ((puVar2 != (undefined *)0x0) &&
       (puVar3 = puVar2, func_0x000107c49d0c(), ((ulong)puVar3 & 1) == 0)) goto LAB_1000f60bc;
    func_0x000107c61170(puVar2);
  }
  puVar3 = PTR_PTR_1126e3020;
  func_0x000107c5a9f0(PTR_PTR_1126e3020);
  func_0x000107c61180();
  puVar2 = puVar3;
  func_0x000107c4b874();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
LAB_1000f60bc:
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1000f6108; end: 1000f6187;  */

void FUN_1000f6108(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1000f5ff4();
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    FUN_10002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  uVar1 = param_1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(param_1);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1000f6188; end: 1000f66ef; -[_TtC29LocalizedStringLookupProvider25LazyLocalizedStringLookup localizedStringForKey:table:fallbackValue:] */

void FUN_1000f6188(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c5faec(param_3);
  lVar2 = param_2;
  if (param_4 == 0) {
    param_4 = 0;
    lVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
    lVar1 = lVar2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    lVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  func_0x000107c61174(param_1);
  lVar3 = param_2;
  func_0x0001000f6288(param_3,param_2,param_4,lVar1,param_5,lVar2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(lVar2);
  func_0x000107c6142c(lVar1);
  if (lVar3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc(param_3,lVar3);
    func_0x000107c6142c(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1000f66f0; end: 1000f67d7;  */

undefined8 FUN_1000f66f0(ulong param_1,ulong param_2,long param_3)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_88 [72];
  
  if (*(long *)(param_3 + 0x10) == 0) {
    return 0;
  }
  func_0x000107c6068c(auStack_88,*(undefined8 *)(param_3 + 0x28));
  puVar3 = auStack_88;
  func_0x000107c5fb58(puVar3,param_1,param_2);
  func_0x000107c606a8();
  uVar5 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar6 = (ulong)puVar3 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_3 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(param_3 + 0x30) + uVar6 * 0x10);
      uVar4 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar4 == param_1 && uVar2 == param_2) ||
         (func_0x000107c605b8(uVar4,uVar2,param_1,param_2,0), (uVar4 & 1) != 0)) {
        return 1;
      }
      uVar6 = uVar6 + 1 & ~uVar5;
    } while ((*(ulong *)(param_3 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 1000f67d8; end: 1000f682b; +[SCUncompressedLocalizedStringLookup sharedInstance] */

void FUN_1000f67d8(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fe088 != -1) {
    FUN_10002a2fc(0x1137fe088,&PTR___NSConcreteGlobalBlock_110d98da8);
  }
  uVar1 = uRam00000001137fe090;
  func_0x000107c61174(uRam00000001137fe090);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1000f682c; end: 1000f6857;  */

void FUN_1000f682c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e3020;
  func_0x000107c61160();
  uVar1 = puRam00000001137fe090;
  puRam00000001137fe090 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000f6858; end: 1000f6a2f; -[SCUncompressedLocalizedStringLookup localizedStringForKey:table:fallbackValue:] */

void FUN_1000f6858(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c4c12c();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4b878();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar1 = puVar2;
  func_0x000107c49d0c(puVar2,param_2,&PTR____CFConstantStringClassReference_11102e298);
  if (((ulong)puVar1 & 1) == 0) {
    func_0x000107c61174(puVar2);
    puVar1 = puVar2;
  }
  else {
    func_0x0001000bb6d0();
    func_0x000107c61180();
    puVar3 = puVar1;
    func_0x000107c49d0c();
    func_0x000107c61170(puVar1);
    puVar4 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    if (((ulong)puVar3 & 1) == 0) {
      func_0x000107c61174(param_4);
      func_0x000107c61174(param_3);
      func_0x000107c4c12c(puVar4);
      func_0x000107c61180();
      puVar3 = puVar4;
      func_0x000107c4e444();
      func_0x000107c61180();
      puVar5 = PTR__OBJC_CLASS___NSBundle_1126aea78;
      func_0x000107c3ee1c(PTR__OBJC_CLASS___NSBundle_1126aea78,param_2,puVar3);
      func_0x000107c61180();
      puVar1 = puVar5;
      func_0x000107c4b878();
      func_0x000107c61180();
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_3);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar4);
    }
    else {
      func_0x000107c61174(param_3);
      puVar1 = param_3;
    }
  }
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  puVar2 = param_5;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
  }
  func_0x000107c61174(puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1000f6a30; end: 1000f6a33;  */

void FUN_1000f6a30(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61170(uStack_18);
  return;
}



/* Entry: 1000f6a34; end: 1000f6a5b;  */

void FUN_1000f6a34(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61170(uStack_18);
  return;
}



/* Entry: 1000f6a5c; end: 1000f6b3b;  */

/* WARNING: Possible PIC construction at 0x0001000f6ab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000f6b04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000f6ab4) */
/* WARNING: Removing unreachable block (ram,0x0001000f6b2c) */
/* WARNING: Removing unreachable block (ram,0x0001000f6ab8) */
/* WARNING: Removing unreachable block (ram,0x0001000f6ad4) */
/* WARNING: Removing unreachable block (ram,0x0001000f6ad8) */
/* WARNING: Removing unreachable block (ram,0x0001000f6adc) */
/* WARNING: Removing unreachable block (ram,0x0001000f6ae4) */
/* WARNING: Removing unreachable block (ram,0x0001000f6ae8) */
/* WARNING: Removing unreachable block (ram,0x0001000f6aec) */
/* WARNING: Removing unreachable block (ram,0x0001000f6b08) */
/* WARNING: Removing unreachable block (ram,0x0001000f6b10) */

void FUN_1000f6a5c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef860b0);
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c450cc();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000f6b3c; end: 1000f6b43;  */

void FUN_1000f6b3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000f6b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 1000f6b44; end: 1000f6bc7;  */

void FUN_1000f6b44(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1000f6bc8; end: 1000f6bd7;  */

void FUN_1000f6bc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1000f6bd8; end: 1000f6c27;  */

void FUN_1000f6bd8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000f6c28; end: 1000f6c33;  */

void FUN_1000f6c28(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1000f6c34; end: 1000f6cf7;  */

void FUN_1000f6c34(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_70 [24];
  long alStack_58 [3];
  long lStack_40;
  undefined **ppuStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_2;
  func_0x000107c615e8(uVar2);
  func_0x000107c615f0();
  iVar1 = (int)param_2;
  func_0x000107c5ad14(0x3fb999999999999a);
  if (iVar1 != 0) {
    puVar3 = PTR_PTR_1126a6d60;
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar4 = 0;
    func_0x00010142eee8();
    lVar5 = lVar4;
    func_0x000107c613fc();
    *(undefined **)(lVar5 + 0x10) = puVar3;
    ppuStack_38 = &PTR_DAT_1103b65b8;
    alStack_58[0] = lVar5;
    lStack_40 = lVar4;
    func_0x000107c61428(param_1 + 0x18,auStack_70,0x21,0);
    func_0x0001000834e4(param_1 + 0x18);
    FUN_1000778a0(alStack_58,param_1 + 0x18);
    func_0x000107c614a8(auStack_70);
  }
  return;
}



/* Entry: 1000f6cf8; end: 1000f6d37;  */

void FUN_1000f6cf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1000f6d38; end: 1000f6e2f;  */

/* WARNING: Possible PIC construction at 0x0001000f6d8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000f6dd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000f6d90) */
/* WARNING: Removing unreachable block (ram,0x0001000f6dd4) */

void FUN_1000f6d38(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x000107c61174(uVar1);
  func_0x000107c4539c(uVar1);
  func_0x000107c61180();
  func_0x000107c4d9e8();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000f6e30; end: 1000f6e87;  */

void FUN_1000f6e30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000bb6d0();
  func_0x000107c61180();
  if (param_1 == 0) {
    uRam00000001137fe068 = false;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x000107c3f800(PTR__OBJC_CLASS___NSLocale_1126af788,param_2,param_1);
    uRam00000001137fe068 = puVar1 == (undefined *)0x2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1000f6e88; end: 1000f6e9b;  */

void FUN_1000f6e88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000f6e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 1000f6e9c; end: 1000f6eef; +[SCRequestManager cronetStreamEngineFromNnm] */

undefined * FUN_1000f6e9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126dff40;
  puVar1 = PTR_PTR_1126b7f68;
  func_0x000107c40d9c(PTR_PTR_1126b7f68);
  func_0x000107c61180();
  func_0x000107c43fe0(puVar2,param_2,puVar1);
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 1000f6ef0; end: 1000f6f43; +[SCRequestManager cronetConfig] */

void FUN_1000f6ef0(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f45c0 != -1) {
    FUN_10002a2fc(0x1137f45c0,&PTR___NSConcreteGlobalBlock_110ccc310);
  }
  uVar1 = uRam00000001137f45c8;
  func_0x000107c61174(uRam00000001137f45c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1000f6f44; end: 1000f7077;  */

/* WARNING: Possible PIC construction at 0x0001000f6fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000f704c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000f705c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000f7050) */
/* WARNING: Removing unreachable block (ram,0x0001000f6fe0) */
/* WARNING: Removing unreachable block (ram,0x0001000f7060) */

void FUN_1000f6f44(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bd000;
  func_0x000107c441e0();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126dff28;
    func_0x000107c610f4(PTR_PTR_1126dff28);
    func_0x000107c46cf8();
  }
  FUN_1000f73a0();
  func_0x000107c61180();
  func_0x000107c5c168();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1000f7078; end: 1000f70b7;  */

undefined1 FUN_1000f7078(void)

{
  if (lRam00000001137fe8d0 != -1) {
    FUN_10002a2fc(0x1137fe8d0,&PTR___NSConcreteGlobalBlock_110da0288);
  }
  return uRam00000001137fe8c1;
}



/* Entry: 1000f70b8; end: 1000f718b; +[SCAPISecurityUtil getPinningEnabledHostsForCronetIncludeSubdomains] */

void FUN_1000f70b8(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  FUN_1000f7078();
  if ((param_1 & 1) == 0) {
    puVar1 = PTR_PTR_1126e00c8;
    func_0x000107c5a9bc();
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c4a1b4();
    func_0x000107c61170(puVar1);
    if (((ulong)puVar2 & 1) != 0) {
      uVar3 = 0;
      goto LAB_1000f711c;
    }
  }
  func_0x000107c3ba30(PTR_PTR_1126bd000);
  uVar3 = uRam00000001137f4888;
  func_0x000107c61174(uRam00000001137f4888);
LAB_1000f711c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1000f718c; end: 1000f7213; +[SCEndpointSecurityTweaks shared] */

void FUN_1000f718c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_1000f7214;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137f7170 != -1) {
    FUN_10002a2fc(0x1137f7170,&puStack_48);
  }
  uVar1 = uRam00000001137f7178;
  func_0x000107c61174(uRam00000001137f7178);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1000f7214; end: 1000f723b;  */

void FUN_1000f7214(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c610fc();
  uVar1 = uRam00000001137f7178;
  uRam00000001137f7178 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000f723c; end: 1000f7243; -[SCEndpointSecurityTweaks isPinningDisabled] */

undefined8 FUN_1000f723c(void)

{
  return 0;
}



/* Entry: 1000f7244; end: 1000f7283; +[SCAPISecurityUtil _initialize] */

/* WARNING: Possible PIC construction at 0x00010002a358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a35c) */

void FUN_1000f7244(void)

{
  int iVar1;
  undefined **ppuVar2;
  code *pcVar3;
  
  if (lRam00000001137f4890 == -1) {
    return;
  }
  ppuVar2 = &PTR___NSConcreteGlobalBlock_110cd14a0;
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_110cd14a0);
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
  FUN_10002a3a8(&PTR___NSConcreteGlobalBlock_110cd14a0);
  func_0x000107c61180();
  (*pcVar3)(0x1137f4890,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 1000f7284; end: 1000f739f; -[SCNNetworkTypesCertPins initWithHosts:pins:pinsBlob:pinsBlobLen:] */

undefined1 *
FUN_1000f7284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_11270b838;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 8) = param_6;
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000f73a0; end: 1000f746b;  */

void FUN_1000f73a0(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fdf20 != -1) {
    FUN_10002a2fc(0x1137fdf20,&PTR___NSConcreteGlobalBlock_110d98848);
  }
  uVar1 = uRam00000001137fdf18;
  func_0x000107c61174(uRam00000001137fdf18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1000f746c; end: 1000f7493;  */

void FUN_1000f746c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c4ec84(PTR_PTR_1126e0368,param_2,param_1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1000f7494; end: 1000f753f; -[SCExperimentPreferenceStore _checkIsRecoveryNeeded] */

void FUN_1000f7494(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
  func_0x000107c4a300();
  if (iVar1 != 0) {
    uVar2 = 0;
    func_0x000107c60f6c();
    func_0x000107c61174();
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = uVar2;
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    puStack_50 = &UNK_10723f11c;
    puStack_48 = &UNK_1108b9050;
    lStack_40 = param_1;
    uStack_38 = uVar2;
    func_0x000107c61174(uVar2);
    func_0x000107c44244(uVar3,param_2,&puStack_60);
    func_0x000107c61170(uStack_38);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1000f7540; end: 1000f757b;  */

void FUN_1000f7540(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000f757c; end: 1000f7653;  */

void FUN_1000f757c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_60 [48];
  
  FUN_1000298f0();
  func_0x000107c61428();
  uVar1 = *param_2;
  func_0x000107c61174(uVar1);
  uVar2 = 0xd00000000000002e;
  FUN_1000a9a18(0xd00000000000002e,0x800000010ef87370);
  func_0x000107c61170(uVar1);
  puVar3 = PTR_PTR_1126a7548;
  func_0x000107c610f8();
  func_0x000107c46f50();
  func_0x000107c61180();
  FUN_1000f7758();
  func_0x000107c61170(puVar3);
  *param_1 = puVar3;
  func_0x000107c61428(param_2,auStack_60,0,0);
  uVar1 = *param_2;
  func_0x000107c61174(uVar1);
  FUN_1000aa0a8(uVar2);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1000f7654; end: 1000f7737; -[SCPropertyHandlerRegistryImpl initWithIsInternalBuild:] */

undefined1 * FUN_1000f7654(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126e7958;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
    iVar4 = 0x1c9;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e170();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    do {
      uVar3 = *(undefined8 *)((long)puVar1 + 8);
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x000107c4d8b8(PTR__OBJC_CLASS___NSNull_1126aef28);
      func_0x000107c61180();
      func_0x000107c3d798(uVar3);
      func_0x000107c61170(puVar2);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *(undefined1 *)((long)puVar1 + 0x18) = param_3;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000f7738; end: 1000f7757;  */

void FUN_1000f7738(void)

{
  func_0x000107c61168(&PTR_PTR_1127dbdb0);
  return;
}



/* Entry: 1000f7758; end: 1000f9863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f7758(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  long *plVar6;
  long lStack_560;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  long lStack_540;
  long lStack_538;
  long lStack_530;
  long lStack_528;
  long lStack_520;
  long lStack_518;
  long lStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  plVar6 = &lStack_560;
  lVar2 = 0;
  FUN_1000f7738();
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e198c;
  puVar1[1] = 0;
  plVar4 = &lStack_60;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1530;
  func_0x000107c613fc(&UNK_1103d1530,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6e8c;
  puVar1[1] = puVar5;
  plVar4 = &lStack_70;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1558;
  func_0x000107c613fc(&UNK_1103d1558,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6e90;
  puVar1[1] = puVar5;
  plVar4 = &lStack_80;
  lStack_80 = lVar3;
  lStack_78 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1580;
  func_0x000107c613fc(&UNK_1103d1580,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6e94;
  puVar1[1] = puVar5;
  plVar4 = &lStack_90;
  lStack_90 = lVar3;
  lStack_88 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d15a8;
  func_0x000107c613fc(&UNK_1103d15a8,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6e98;
  puVar1[1] = puVar5;
  plVar4 = &lStack_a0;
  lStack_a0 = lVar3;
  lStack_98 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d15d0;
  func_0x000107c613fc(&UNK_1103d15d0,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6e9c;
  puVar1[1] = puVar5;
  plVar4 = &lStack_b0;
  lStack_b0 = lVar3;
  lStack_a8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d15f8;
  func_0x000107c613fc(&UNK_1103d15f8,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6ea0;
  puVar1[1] = puVar5;
  plVar4 = &lStack_c0;
  lStack_c0 = lVar3;
  lStack_b8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1620;
  func_0x000107c613fc(&UNK_1103d1620,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6ea4;
  puVar1[1] = puVar5;
  plVar4 = &lStack_d0;
  lStack_d0 = lVar3;
  lStack_c8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1648;
  func_0x000107c613fc(&UNK_1103d1648,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6ea8;
  puVar1[1] = puVar5;
  plVar4 = &lStack_e0;
  lStack_e0 = lVar3;
  lStack_d8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1670;
  func_0x000107c613fc(&UNK_1103d1670,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6eac;
  puVar1[1] = puVar5;
  plVar4 = &lStack_f0;
  lStack_f0 = lVar3;
  lStack_e8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1698;
  func_0x000107c613fc(&UNK_1103d1698,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6eb0;
  puVar1[1] = puVar5;
  plVar4 = &lStack_100;
  lStack_100 = lVar3;
  lStack_f8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d16c0;
  func_0x000107c613fc(&UNK_1103d16c0,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6eb4;
  puVar1[1] = puVar5;
  plVar4 = &lStack_110;
  lStack_110 = lVar3;
  lStack_108 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d16e8;
  func_0x000107c613fc(&UNK_1103d16e8,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6eb8;
  puVar1[1] = puVar5;
  plVar4 = &lStack_120;
  lStack_120 = lVar3;
  lStack_118 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1710;
  func_0x000107c613fc(&UNK_1103d1710,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6ebc;
  puVar1[1] = puVar5;
  plVar4 = &lStack_130;
  lStack_130 = lVar3;
  lStack_128 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1738;
  func_0x000107c613fc(&UNK_1103d1738,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6ec0;
  puVar1[1] = puVar5;
  plVar4 = &lStack_140;
  lStack_140 = lVar3;
  lStack_138 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1760;
  func_0x000107c613fc(&UNK_1103d1760,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6ec4;
  puVar1[1] = puVar5;
  plVar4 = &lStack_150;
  lStack_150 = lVar3;
  lStack_148 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1788;
  func_0x000107c613fc(&UNK_1103d1788,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6ec8;
  puVar1[1] = puVar5;
  plVar4 = &lStack_160;
  lStack_160 = lVar3;
  lStack_158 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d17b0;
  func_0x000107c613fc(&UNK_1103d17b0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6ecc;
  puVar1[1] = puVar5;
  plVar4 = &lStack_170;
  lStack_170 = lVar3;
  lStack_168 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d17d8;
  func_0x000107c613fc(&UNK_1103d17d8,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6ed0;
  puVar1[1] = puVar5;
  plVar4 = &lStack_180;
  lStack_180 = lVar3;
  lStack_178 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1800;
  func_0x000107c613fc(&UNK_1103d1800,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6ed4;
  puVar1[1] = puVar5;
  plVar4 = &lStack_190;
  lStack_190 = lVar3;
  lStack_188 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1828;
  func_0x000107c613fc(&UNK_1103d1828,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6ed8;
  puVar1[1] = puVar5;
  plVar4 = &lStack_1a0;
  lStack_1a0 = lVar3;
  lStack_198 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1850;
  func_0x000107c613fc(&UNK_1103d1850,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6edc;
  puVar1[1] = puVar5;
  plVar4 = &lStack_1b0;
  lStack_1b0 = lVar3;
  lStack_1a8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1878;
  func_0x000107c613fc(&UNK_1103d1878,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6ee0;
  puVar1[1] = puVar5;
  plVar4 = &lStack_1c0;
  lStack_1c0 = lVar3;
  lStack_1b8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d18a0;
  func_0x000107c613fc(&UNK_1103d18a0,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6ee4;
  puVar1[1] = puVar5;
  plVar4 = &lStack_1d0;
  lStack_1d0 = lVar3;
  lStack_1c8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d18c8;
  func_0x000107c613fc(&UNK_1103d18c8,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6ee8;
  puVar1[1] = puVar5;
  plVar4 = &lStack_1e0;
  lStack_1e0 = lVar3;
  lStack_1d8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d18f0;
  func_0x000107c613fc(&UNK_1103d18f0,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6eec;
  puVar1[1] = puVar5;
  plVar4 = &lStack_1f0;
  lStack_1f0 = lVar3;
  lStack_1e8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1918;
  func_0x000107c613fc(&UNK_1103d1918,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6ef0;
  puVar1[1] = puVar5;
  plVar4 = &lStack_200;
  lStack_200 = lVar3;
  lStack_1f8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1940;
  func_0x000107c613fc(&UNK_1103d1940,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6ef4;
  puVar1[1] = puVar5;
  plVar4 = &lStack_210;
  lStack_210 = lVar3;
  lStack_208 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1968;
  func_0x000107c613fc(&UNK_1103d1968,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6ef8;
  puVar1[1] = puVar5;
  plVar4 = &lStack_220;
  lStack_220 = lVar3;
  lStack_218 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1990;
  func_0x000107c613fc(&UNK_1103d1990,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6efc;
  puVar1[1] = puVar5;
  plVar4 = &lStack_230;
  lStack_230 = lVar3;
  lStack_228 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d19b8;
  func_0x000107c613fc(&UNK_1103d19b8,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f00;
  puVar1[1] = puVar5;
  plVar4 = &lStack_240;
  lStack_240 = lVar3;
  lStack_238 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d19e0;
  func_0x000107c613fc(&UNK_1103d19e0,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f04;
  puVar1[1] = puVar5;
  plVar4 = &lStack_250;
  lStack_250 = lVar3;
  lStack_248 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1a08;
  func_0x000107c613fc(&UNK_1103d1a08,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f08;
  puVar1[1] = puVar5;
  plVar4 = &lStack_260;
  lStack_260 = lVar3;
  lStack_258 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1a30;
  func_0x000107c613fc(&UNK_1103d1a30,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f0c;
  puVar1[1] = puVar5;
  plVar4 = &lStack_270;
  lStack_270 = lVar3;
  lStack_268 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1a58;
  func_0x000107c613fc(&UNK_1103d1a58,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f10;
  puVar1[1] = puVar5;
  plVar4 = &lStack_280;
  lStack_280 = lVar3;
  lStack_278 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e2610;
  puVar1[1] = 0;
  plVar4 = &lStack_290;
  lStack_290 = lVar3;
  lStack_288 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e270c;
  puVar1[1] = 0;
  plVar4 = &lStack_2a0;
  lStack_2a0 = lVar3;
  lStack_298 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e2808;
  puVar1[1] = 0;
  plVar4 = &lStack_2b0;
  lStack_2b0 = lVar3;
  lStack_2a8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e2904;
  puVar1[1] = 0;
  plVar4 = &lStack_2c0;
  lStack_2c0 = lVar3;
  lStack_2b8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e2a30;
  puVar1[1] = 0;
  plVar4 = &lStack_2d0;
  lStack_2d0 = lVar3;
  lStack_2c8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1a80;
  func_0x000107c613fc(&UNK_1103d1a80,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f14;
  puVar1[1] = puVar5;
  plVar4 = &lStack_2e0;
  lStack_2e0 = lVar3;
  lStack_2d8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1aa8;
  func_0x000107c613fc(&UNK_1103d1aa8,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f18;
  puVar1[1] = puVar5;
  plVar4 = &lStack_2f0;
  lStack_2f0 = lVar3;
  lStack_2e8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1ad0;
  func_0x000107c613fc(&UNK_1103d1ad0,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f1c;
  puVar1[1] = puVar5;
  plVar4 = &lStack_300;
  lStack_300 = lVar3;
  lStack_2f8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1af8;
  func_0x000107c613fc(&UNK_1103d1af8,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f20;
  puVar1[1] = puVar5;
  plVar4 = &lStack_310;
  lStack_310 = lVar3;
  lStack_308 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1b20;
  func_0x000107c613fc(&UNK_1103d1b20,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f24;
  puVar1[1] = puVar5;
  plVar4 = &lStack_320;
  lStack_320 = lVar3;
  lStack_318 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1b48;
  func_0x000107c613fc(&UNK_1103d1b48,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f28;
  puVar1[1] = puVar5;
  plVar4 = &lStack_330;
  lStack_330 = lVar3;
  lStack_328 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1b70;
  func_0x000107c613fc(&UNK_1103d1b70,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f2c;
  puVar1[1] = puVar5;
  plVar4 = &lStack_340;
  lStack_340 = lVar3;
  lStack_338 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1b98;
  func_0x000107c613fc(&UNK_1103d1b98,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f30;
  puVar1[1] = puVar5;
  plVar4 = &lStack_350;
  lStack_350 = lVar3;
  lStack_348 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1bc0;
  func_0x000107c613fc(&UNK_1103d1bc0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f34;
  puVar1[1] = puVar5;
  plVar4 = &lStack_360;
  lStack_360 = lVar3;
  lStack_358 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1be8;
  func_0x000107c613fc(&UNK_1103d1be8,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f38;
  puVar1[1] = puVar5;
  plVar4 = &lStack_370;
  lStack_370 = lVar3;
  lStack_368 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1c10;
  func_0x000107c613fc(&UNK_1103d1c10,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f3c;
  puVar1[1] = puVar5;
  plVar4 = &lStack_380;
  lStack_380 = lVar3;
  lStack_378 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1c38;
  func_0x000107c613fc(&UNK_1103d1c38,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f40;
  puVar1[1] = puVar5;
  plVar4 = &lStack_390;
  lStack_390 = lVar3;
  lStack_388 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1c60;
  func_0x000107c613fc(&UNK_1103d1c60,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f44;
  puVar1[1] = puVar5;
  plVar4 = &lStack_3a0;
  lStack_3a0 = lVar3;
  lStack_398 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1c88;
  func_0x000107c613fc(&UNK_1103d1c88,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f48;
  puVar1[1] = puVar5;
  plVar4 = &lStack_3b0;
  lStack_3b0 = lVar3;
  lStack_3a8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1cb0;
  func_0x000107c613fc(&UNK_1103d1cb0,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f4c;
  puVar1[1] = puVar5;
  plVar4 = &lStack_3c0;
  lStack_3c0 = lVar3;
  lStack_3b8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1cd8;
  func_0x000107c613fc(&UNK_1103d1cd8,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f50;
  puVar1[1] = puVar5;
  plVar4 = &lStack_3d0;
  lStack_3d0 = lVar3;
  lStack_3c8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1d00;
  func_0x000107c613fc(&UNK_1103d1d00,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f54;
  puVar1[1] = puVar5;
  plVar4 = &lStack_3e0;
  lStack_3e0 = lVar3;
  lStack_3d8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1d28;
  func_0x000107c613fc(&UNK_1103d1d28,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f58;
  puVar1[1] = puVar5;
  plVar4 = &lStack_3f0;
  lStack_3f0 = lVar3;
  lStack_3e8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1d50;
  func_0x000107c613fc(&UNK_1103d1d50,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f5c;
  puVar1[1] = puVar5;
  plVar4 = &lStack_400;
  lStack_400 = lVar3;
  lStack_3f8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1d78;
  func_0x000107c613fc(&UNK_1103d1d78,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f60;
  puVar1[1] = puVar5;
  plVar4 = &lStack_410;
  lStack_410 = lVar3;
  lStack_408 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1da0;
  func_0x000107c613fc(&UNK_1103d1da0,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f64;
  puVar1[1] = puVar5;
  plVar4 = &lStack_420;
  lStack_420 = lVar3;
  lStack_418 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1dc8;
  func_0x000107c613fc(&UNK_1103d1dc8,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f68;
  puVar1[1] = puVar5;
  plVar4 = &lStack_430;
  lStack_430 = lVar3;
  lStack_428 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1df0;
  func_0x000107c613fc(&UNK_1103d1df0,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f6c;
  puVar1[1] = puVar5;
  plVar4 = &lStack_440;
  lStack_440 = lVar3;
  lStack_438 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1e18;
  func_0x000107c613fc(&UNK_1103d1e18,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f70;
  puVar1[1] = puVar5;
  plVar4 = &lStack_450;
  lStack_450 = lVar3;
  lStack_448 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1e40;
  func_0x000107c613fc(&UNK_1103d1e40,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f74;
  puVar1[1] = puVar5;
  plVar4 = &lStack_460;
  lStack_460 = lVar3;
  lStack_458 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1e68;
  func_0x000107c613fc(&UNK_1103d1e68,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f78;
  puVar1[1] = puVar5;
  plVar4 = &lStack_470;
  lStack_470 = lVar3;
  lStack_468 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1e90;
  func_0x000107c613fc(&UNK_1103d1e90,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f7c;
  puVar1[1] = puVar5;
  plVar4 = &lStack_480;
  lStack_480 = lVar3;
  lStack_478 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1eb8;
  func_0x000107c613fc(&UNK_1103d1eb8,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f80;
  puVar1[1] = puVar5;
  plVar4 = &lStack_490;
  lStack_490 = lVar3;
  lStack_488 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1ee0;
  func_0x000107c613fc(&UNK_1103d1ee0,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f84;
  puVar1[1] = puVar5;
  plVar4 = &lStack_4a0;
  lStack_4a0 = lVar3;
  lStack_498 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1f08;
  func_0x000107c613fc(&UNK_1103d1f08,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f88;
  puVar1[1] = puVar5;
  plVar4 = &lStack_4b0;
  lStack_4b0 = lVar3;
  lStack_4a8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1f30;
  func_0x000107c613fc(&UNK_1103d1f30,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f8c;
  puVar1[1] = puVar5;
  plVar4 = &lStack_4c0;
  lStack_4c0 = lVar3;
  lStack_4b8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1f58;
  func_0x000107c613fc(&UNK_1103d1f58,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f90;
  puVar1[1] = puVar5;
  plVar4 = &lStack_4d0;
  lStack_4d0 = lVar3;
  lStack_4c8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1f80;
  func_0x000107c613fc(&UNK_1103d1f80,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f94;
  puVar1[1] = puVar5;
  plVar4 = &lStack_4e0;
  lStack_4e0 = lVar3;
  lStack_4d8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1fa8;
  func_0x000107c613fc(&UNK_1103d1fa8,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f98;
  puVar1[1] = puVar5;
  plVar4 = &lStack_4f0;
  lStack_4f0 = lVar3;
  lStack_4e8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1fd0;
  func_0x000107c613fc(&UNK_1103d1fd0,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6f9c;
  puVar1[1] = puVar5;
  plVar4 = &lStack_500;
  lStack_500 = lVar3;
  lStack_4f8 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d1ff8;
  func_0x000107c613fc(&UNK_1103d1ff8,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6fa0;
  puVar1[1] = puVar5;
  plVar4 = &lStack_510;
  lStack_510 = lVar3;
  lStack_508 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e3120;
  puVar1[1] = 0;
  plVar4 = &lStack_520;
  lStack_520 = lVar3;
  lStack_518 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d2020;
  func_0x000107c613fc(&UNK_1103d2020,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6fa4;
  puVar1[1] = puVar5;
  plVar4 = &lStack_530;
  lStack_530 = lVar3;
  lStack_528 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d2048;
  func_0x000107c613fc(&UNK_1103d2048,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6fa8;
  puVar1[1] = puVar5;
  plVar4 = &lStack_540;
  lStack_540 = lVar3;
  lStack_538 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d2070;
  func_0x000107c613fc(&UNK_1103d2070,0x11,7);
  puVar5[0x10] = 0;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6fac;
  puVar1[1] = puVar5;
  plVar4 = &lStack_550;
  lStack_550 = lVar3;
  lStack_548 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar4);
  puVar5 = &UNK_1103d2098;
  func_0x000107c613fc(&UNK_1103d2098,0x14,7);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112daa408);
  *puVar1 = &UNK_1014e6fb0;
  puVar1[1] = puVar5;
  lStack_560 = lVar3;
  lStack_558 = lVar2;
  func_0x000107c61154(&lStack_560,PTR_s_init_1125d9248);
  func_0x000107c4fc8c(param_1);
  func_0x000107c61170(plVar6);
  return;
}



/* Entry: 1000f9864; end: 1000f9883;  */

void FUN_1000f9864(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000f9884; end: 1000f98a7;  */

void FUN_1000f9884(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000f98a8; end: 1000f99df;  */

void FUN_1000f98a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000f99e0; end: 1000f9ad7; -[SCPropertyHandlerRegistryImpl registerPropertyHandler:handler:dataType:] */

/* WARNING: Possible PIC construction at 0x0001000f9a9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000f9ab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000f9aa0) */

void FUN_1000f99e0(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_4);
  puVar1 = param_4;
  if (param_4 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x000107c4d8b8(PTR__OBJC_CLASS___NSNull_1126aef28);
    func_0x000107c61180();
  }
  func_0x000107c56bc4(*(undefined8 *)(param_1 + 8),param_2,puVar1,(long)(int)param_3);
  if (param_1[0x18] == '\x01') {
    puVar1 = PTR_PTR_1126b7888;
    func_0x000107c610f4(PTR_PTR_1126b7888);
    func_0x000107c40728(param_1,param_2,param_3);
    func_0x000107c61180();
    func_0x000107c481a0((double)(int)param_3,puVar1,param_2,param_1,param_5);
    param_4 = param_1;
  }
  else {
    func_0x000107c61170(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1000f9ad8; end: 1000f9b07;  */

void FUN_1000f9ad8(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a7500;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  return;
}



/* Entry: 1000f9b08; end: 1000f9b13;  */

void FUN_1000f9b08(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = uStack_58;
  func_0x000107c43f90();
  func_0x000107c61180();
  func_0x000107c615e8(uStack_58);
  func_0x000107c6071c();
  uVar2 = uStack_58;
  func_0x0001000ad7c4();
  FUN_100083b20(&uStack_60);
  uVar3 = 0;
  FUN_1000f9bfc(0);
  func_0x000107c610f8();
  func_0x0001000f9cfc(param_2,uVar1,uVar2,uStack_60,uVar3);
  *param_1 = uVar1;
  return;
}



/* Entry: 1000f9b14; end: 1000f9bd3;  */

void FUN_1000f9b14(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  uVar1 = uStack_58;
  func_0x000107c43f90();
  func_0x000107c61180();
  func_0x000107c615e8(uStack_58);
  func_0x000107c6071c();
  uVar2 = uStack_58;
  func_0x0001000ad7c4();
  FUN_100083b20(&uStack_60);
  uVar3 = 0;
  FUN_1000f9bfc(0);
  func_0x000107c610f8();
  func_0x0001000f9cfc(param_2,uVar1,uVar2,uStack_60,uVar3);
  *param_1 = uVar1;
  return;
}



/* Entry: 1000f9bd4; end: 1000f9bfb; -[SCConfigRepositoryNetworkDefaultImpl getConfigAuthentication] */

void FUN_1000f9bd4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1000f9bfc; end: 1000f9c1b;  */

void FUN_1000f9bfc(void)

{
  func_0x000107c61168(&PTR_PTR_1127db990);
  return;
}



/* Entry: 1000f9c1c; end: 1000f9d4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f9c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _DAT_112daa2e0;
  *(undefined8 *)(unaff_x20 + _DAT_112daa2e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112daa2e8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112daa2f0) = param_1;
  *(undefined8 *)(unaff_x20 + lVar1) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112daa2f8) = param_4;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_2);
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef87090);
  func_0x000107c3ebd4();
  func_0x000107c61170();
  *(char *)(unaff_x20 + _DAT_112daa300) = (char)param_4;
  FUN_1000f9bfc();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000f9d4c; end: 1000f9d9f;  */

void FUN_1000f9d4c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000f9da0; end: 1000f9ddb; -[SCTweaksDataPersister init] */

void FUN_1000f9da0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000f9ddc; end: 1000fa0bf; -[SCConfigManagerImpl initWithConfigMetric:configMetricLogger:grapheneContextManager:repository:performer:connectivityMonitoring:carrierNetworkInfoProvider:repoNetwork:idleMonitor:experimentLogger:experimentStore:appInsightsMetadataStorage:countryCodeRepository:readinessMetricEmitter:propertyHandlerRegistry:identifierProvider:versionProvider:syncEventLogger:appStartExperimentReader:tweaksDataPersister:] */

undefined8
FUN_1000f9ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c61174();
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  uVar1 = param_10;
  func_0x000107c43f90();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126b6ac8;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae4f8;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  func_0x000107c45f8c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,uVar1,param_11,param_12,param_13,param_14,param_15,param_16,param_17,
                      param_18,puVar2,param_19,param_20,param_21,param_22,0);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 1000fa0c0; end: 1000fa88f; -[SCConfigManagerImpl initWithConfigMetric:configMetricLogger:grapheneContextManager:repository:performer:connectivityMonitoring:carrierNetworkInfoProvider:repoNetwork:configUserAuthentication:idleMonitor:experimentLogger:experimentStore:appInsightsMetadataStorage:countryCodeRepository:readinessMetricEmitter:propertyHandlerRegistry:identifierProvider:heuristicRecoveryManager:versionProvider:syncEventLogger:appStartExperimentReader:tweaksDataPersister:forceDefaultsTweak:startupJournalManager:] */

undefined8 *
FUN_1000fa0c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined4 param_26,undefined4 param_27,undefined8 param_28)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174();
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_28);
  puStack_80 = PTR_PTR_1126e7930;
  puVar1 = &uStack_88;
  uStack_88 = param_2;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[3];
    puVar1[3] = param_12;
    func_0x000107c61170(uVar2);
    *(undefined1 *)(puVar1 + 4) = 0;
    func_0x000107c61174(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    func_0x000107c61170(uVar2);
    puVar1[8] = 0;
    func_0x000107c61174(param_9);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[10];
    puVar1[10] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_18);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_18;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_19);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_19;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_20);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_20;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_21);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_21;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_22);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_22;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_23);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_23;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_25);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_25;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b7808;
    func_0x000107c610f4();
    func_0x000107c464bc();
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x000107c61180();
    func_0x000107c55aa4(puVar1);
    func_0x000107c61170(puVar3);
    func_0x000107c61174(param_17);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_17;
    func_0x000107c61170(uVar2);
    func_0x000107c6071c();
    puVar1[0x1f] = param_1;
    func_0x000107c3f994(puVar1[0x1a]);
    func_0x000107c61144(auStack_90,puVar1);
    pcVar4 = "com.cof.waitingQueue";
    func_0x000107c60f50("com.cof.waitingQueue",PTR___dispatch_queue_attr_concurrent_11034be28);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_10010205c;
    puStack_a8 = &UNK_110841fb0;
    func_0x000107c61174(puVar1);
    puStack_a0 = puVar1;
    func_0x000107c6111c(auStack_98,auStack_90);
    FUN_10007380c(pcVar4,&puStack_c0);
    puVar5 = PTR_PTR_1126b7810;
    func_0x000107c610f4();
    func_0x000107c48700();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_13;
    func_0x000107c61170(uVar2);
    puVar5 = PTR_PTR_1126ae820;
    func_0x000107c610fc();
    uVar2 = puVar1[5];
    puVar1[5] = puVar5;
    func_0x000107c61170(uVar2);
    func_0x000107c4d664(puVar1[5]);
    puVar5 = PTR_PTR_1126ae820;
    func_0x000107c610fc();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar5;
    func_0x000107c61170(uVar2);
    func_0x000107c4d664(puVar1[0x18]);
    func_0x000107c3cca4(puVar1);
    puStack_e8 = puVar3;
    uStack_e0 = 0xc2000000;
    puStack_d8 = &UNK_10532ef60;
    puStack_d0 = &UNK_11087b798;
    func_0x000107c6111c(auStack_c8,auStack_90);
    puStack_110 = puVar3;
    uStack_108 = 0xc2000000;
    puStack_100 = &UNK_10532efa8;
    puStack_f8 = &UNK_11087b798;
    func_0x000107c6111c(auStack_f0,auStack_90);
    puStack_138 = puVar3;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_1009a1328;
    puStack_120 = &UNK_110849200;
    func_0x000107c6111c(auStack_118,auStack_90);
    puStack_160 = puVar3;
    uStack_158 = 0xc2000000;
    puStack_150 = &UNK_10532eff0;
    puStack_148 = &UNK_11087b7c8;
    func_0x000107c6111c(auStack_140,auStack_90);
    puStack_188 = puVar3;
    uStack_180 = 0xc2000000;
    puStack_178 = &UNK_10532f038;
    puStack_170 = &UNK_11087b7c8;
    func_0x000107c6111c(auStack_168,auStack_90);
    func_0x000107c6111c(auStack_190,auStack_90);
    func_0x000107c52960(param_12);
    func_0x000107c61120(auStack_190);
    func_0x000107c61120(auStack_168);
    func_0x000107c61120(auStack_140);
    func_0x000107c61120(auStack_118);
    func_0x000107c61120(auStack_f0);
    func_0x000107c61120(auStack_c8);
    func_0x000107c61120(auStack_98);
    func_0x000107c61170(puStack_a0);
    func_0x000107c61170(pcVar4);
    func_0x000107c61120(auStack_90);
  }
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return puVar1;
}



/* Entry: 1000fa890; end: 1000fa9ff; -[SCConfigManagerRecoveryHandler initWithDelegate:heuristicRecoveryManager:configMetricLogger:startupJournalManager:] */

undefined8
FUN_1000fa890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  uVar1 = param_3;
  func_0x0001000fa918(param_3,param_4,param_5,param_6);
  func_0x000107c615e8(param_3);
  return uVar1;
}



/* Entry: 1000faa00; end: 1000faa1f;  */

void FUN_1000faa00(void)

{
  func_0x000107c61168(&PTR_PTR_1127dbb00);
  return;
}



/* Entry: 1000faa20; end: 1000faa4f; -[SCConfigManagerImpl setLastUpdateTimestamp:] */

void FUN_1000faa20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000faa50; end: 1000faadf; -[SCConfigManagerRecoveryHandler checkRecoveryData] */

void FUN_1000faa50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [16];
  undefined8 *puStack_50;
  
  func_0x000107c61174();
  puVar1 = param_1;
  FUN_1000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  puStack_50 = param_1;
  func_0x000107c61174(uVar2);
  FUN_1000b0da8(0xd000000000000020,0x800000010ef87100,FUN_1000faae0,auStack_60);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1000faae0; end: 1000faaeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000faae0(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  
  uVar3 = *(ulong *)(unaff_x20 + 0x10);
  uVar4 = uVar3;
  func_0x000107c6071c();
  puVar1 = (undefined8 *)(uVar3 + _DAT_112daa340);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  FUN_1000fac80();
  if ((uVar4 & 1) == 0) {
    iVar2 = (int)*(undefined8 *)(uVar3 + _DAT_112daa358);
    func_0x000107c4a300();
    if (iVar2 == 0) {
      pbVar5 = *(byte **)(uVar3 + _DAT_112daa368);
      if ((pbVar5 != (byte *)0x0) && (func_0x000107c4aa08(), ((ulong)pbVar5 & 1) == 0)) {
        FUN_1000ad07c();
        if ((*pbVar5 & 1) == 0) {
          func_0x0001000ab060(0);
          FUN_100079360(0);
          uVar6 = 0;
          FUN_1000faf74(0);
          FUN_1000faf94();
          uVar7 = uVar6;
          FUN_1000faff4();
          func_0x000107c61170(uVar6);
          uVar8 = 0;
          func_0x0001000aad1c(0);
          FUN_1000fb25c();
          puVar9 = &UNK_1103d0520;
          func_0x000107c613fc(&UNK_1103d0520,0x18,7);
          func_0x000107c61614(puVar9 + 0x10,uVar3);
          func_0x000107c6157c(puVar9);
          uVar6 = uVar7;
          FUN_1000ab368(uVar7,uVar8,0,0,&UNK_1014e182c,puVar9);
          func_0x000107c61578(puVar9,2);
          func_0x000107c61170(uVar8);
          func_0x000107c61170(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar6);
          return;
        }
      }
    }
    else {
      func_0x0001014e0cc8();
    }
  }
  return;
}



/* Entry: 1000faaec; end: 1000fac5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000faaec(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  uVar3 = param_2;
  func_0x000107c6071c();
  puVar1 = (undefined8 *)(param_2 + _DAT_112daa340);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  FUN_1000fac80();
  if ((uVar3 & 1) == 0) {
    iVar2 = (int)*(undefined8 *)(param_2 + _DAT_112daa358);
    func_0x000107c4a300();
    if (iVar2 == 0) {
      pbVar4 = *(byte **)(param_2 + _DAT_112daa368);
      if ((pbVar4 != (byte *)0x0) && (func_0x000107c4aa08(), ((ulong)pbVar4 & 1) == 0)) {
        FUN_1000ad07c();
        if ((*pbVar4 & 1) == 0) {
          func_0x0001000ab060(0);
          FUN_100079360(0);
          uVar5 = 0;
          FUN_1000faf74(0);
          FUN_1000faf94();
          uVar6 = uVar5;
          FUN_1000faff4();
          func_0x000107c61170(uVar5);
          uVar7 = 0;
          func_0x0001000aad1c(0);
          FUN_1000fb25c();
          puVar8 = &UNK_1103d0520;
          func_0x000107c613fc(&UNK_1103d0520,0x18,7);
          func_0x000107c61614(puVar8 + 0x10,param_2);
          func_0x000107c6157c(puVar8);
          uVar5 = uVar6;
          FUN_1000ab368(uVar6,uVar7,0,0,&UNK_1014e182c,puVar8);
          func_0x000107c61578(puVar8,2);
          func_0x000107c61170(uVar7);
          func_0x000107c61170(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar5);
          return;
        }
      }
    }
    else {
      func_0x0001014e0cc8();
    }
  }
  return;
}



/* Entry: 1000fac5c; end: 1000fac7f;  */

void FUN_1000fac5c(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000fac80; end: 1000fad57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1000fac80(undefined8 param_1,ulong param_2)

{
  char *pcVar1;
  char *pcVar2;
  long unaff_x20;
  
  pcVar1 = *(char **)(unaff_x20 + _DAT_112daa368);
  if ((((pcVar1 == (char *)0x0) || (func_0x000107c4aa08(), ((ulong)pcVar1 & 1) != 0)) ||
      (FUN_1000ad07c(), *pcVar1 == '\x01')) && (func_0x0001014e14a0(), param_2 >> 0x3c < 0xf)) {
    pcVar2 = pcVar1;
    func_0x0001014e08e4();
    FUN_1000b44c0();
    if (((ulong)pcVar2 & 1) != 0) {
      return 1;
    }
  }
  FUN_1000fad58();
  if (param_2 >> 0x3c < 0xf) {
    pcVar2 = pcVar1;
    func_0x0001014e08e4();
    FUN_1000b44c0(pcVar1,param_2);
    if (((ulong)pcVar2 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1000fad58; end: 1000faf73;  */

/* WARNING: Removing unreachable block (ram,0x0001000faecc) */

undefined1  [16] FUN_1000fad58(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long extraout_x12;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [48];
  
  puVar1 = (undefined8 *)0x0;
  func_0x000107c5ede0();
  lVar12 = puVar1[-1];
  puVar2 = puVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar9 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar9 - extraout_x12;
  FUN_1000298f0();
  func_0x000107c61428();
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  uVar4 = 0xd00000000000001d;
  FUN_1000a9a18(0xd00000000000001d,0x800000010ef871f0);
  func_0x000107c61170(uVar3);
  puVar5 = PTR_PTR_1126b7870;
  func_0x000107c61168();
  func_0x000107c44228();
  func_0x000107c61180();
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c5edb4(puVar9);
    func_0x000107c61170(puVar5);
    (**(code **)(lVar12 + 0x20))(lVar10,puVar9,puVar1);
    puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    func_0x000107c415e0();
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c5edc4();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar9);
    puVar7 = puVar5;
    func_0x000107c43418();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
    if ((int)puVar7 != 0) {
      uVar3 = 0;
      lVar11 = lVar10;
      func_0x000107c5ede8(lVar10,0);
      (**(code **)(lVar12 + 8))(lVar10,puVar1);
      goto LAB_1000faf00;
    }
    (**(code **)(lVar12 + 8))(lVar10,puVar1);
  }
  lVar11 = 0;
  uVar3 = 0xf000000000000000;
LAB_1000faf00:
  func_0x000107c61428(puVar2,auStack_90,0,0);
  uVar8 = *puVar2;
  func_0x000107c61174(uVar8);
  FUN_1000aa0a8(uVar4);
  func_0x000107c61170(uVar8);
  auVar13._8_8_ = uVar3;
  auVar13._0_8_ = lVar11;
  return auVar13;
}



/* Entry: 1000faf74; end: 1000faf93;  */

void FUN_1000faf74(void)

{
  func_0x000107c61168(&PTR_PTR_1129e03e8);
  return;
}



/* Entry: 1000faf94; end: 1000faf9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000faf94(void)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309ae20) = 4;
  *(undefined8 *)(unaff_x20 + _DAT_11309ae28) = 0;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}


