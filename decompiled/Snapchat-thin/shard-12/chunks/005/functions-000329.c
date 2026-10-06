/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091a03fc; end: 1091a044f; -[SCAudioCaptureSessionProvider audioSessionServices] */

void FUN_1091a03fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 8);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1091a0450; end: 1091a04d7; -[SCAudioCaptureSessionProvider audioCaptureSession] */

void FUN_1091a0450(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126dd948;
  _objc_alloc(PTR_PTR_1126dd948);
  uVar2 = param_1;
  func_0x00010bf0fec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff5480(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c1e5300(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091a04d8; end: 1091a053f; -[SCAudioCaptureSessionProvider audioCaptureSessionBecameActive:] */

void FUN_1091a04d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf00560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x20);
  return;
}



/* Entry: 1091a0540; end: 1091a0587; -[SCAudioCaptureSessionProvider audioCaptureSessionBecameInactive:] */

void FUN_1091a0540(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x20);
  return;
}



/* Entry: 1091a0588; end: 1091a05c3; -[SCAudioCaptureSessionProvider .cxx_destruct] */

void FUN_1091a0588(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091a05c4; end: 1091a0723; -[SCAudioCaptureSessionImpl initWithAudioSession:] */

undefined1 * FUN_1091a05c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_112700a60;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    *(undefined1 *)((long)puVar1 + 0xa9) = 0;
    *(undefined4 *)((long)puVar1 + 0x130) = 0;
    *(undefined1 *)((long)puVar1 + 0xc0) = 0;
    func_0x00010be923a0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091a0724; end: 1091a0797; -[SCAudioCaptureSessionImpl dealloc] */

void FUN_1091a0724(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be051c0();
  puStack_28 = PTR_PTR_112700a60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1091a0798; end: 1091a07a3; -[SCAudioCaptureSessionImpl isAudioQueueDiagnosticsEnabled] */

undefined1 FUN_1091a0798(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc0);
}



/* Entry: 1091a07a4; end: 1091a07b7; -[SCAudioCaptureSessionImpl setAudioQueueDiagnosticsEnabled:] */

void FUN_1091a07a4(long param_1,undefined8 param_2,byte param_3)

{
  *(byte *)(param_1 + 0xc0) = param_3;
  if ((param_3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be923b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetAudioQueueDiagnostics_112582288);
  return;
}



/* Entry: 1091a07b8; end: 1091a07c3; -[SCAudioCaptureSessionImpl _shouldCollectAudioQueueDiagnostics] */

undefined1 FUN_1091a07b8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc0);
}



/* Entry: 1091a07c4; end: 1091a0863; -[SCAudioCaptureSessionImpl _resetAudioQueueDiagnostics] */

void FUN_1091a07c4(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  _os_unfair_lock_lock(param_1 + 0x130);
  *(undefined1 *)(param_1 + 0x134) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x130);
  return;
}



/* Entry: 1091a0864; end: 1091a0987; -[SCAudioCaptureSessionImpl _captureAudioSessionStateAtAudioQueueStart] */

void FUN_1091a0864(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar1 = param_1;
  func_0x00010beb2da0();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf0fb00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf12720();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0656e0();
    lVar4 = lVar2;
    func_0x00010bf529e0();
    lVar5 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c104100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _os_unfair_lock_lock(param_1 + 0x130);
    *(char *)(param_1 + 0x134) = (char)lVar3;
    uVar7 = *(undefined8 *)(param_1 + 0x140);
    *(long *)(param_1 + 0x138) = lVar4;
    *(long *)(param_1 + 0x140) = lVar6;
    _objc_release(uVar7);
    _os_unfair_lock_unlock(param_1 + 0x130);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1091a0988; end: 1091a09fb; -[SCAudioCaptureSessionImpl _recordAudioQueueInitialBufferSetupStatus:step:] */

void FUN_1091a0988(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  func_0x00010beb2da0();
  if ((param_3 != 0) && (iVar4 != 0)) {
    plVar1 = (long *)(param_1 + 200);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = (long *)(param_1 + 0xd0);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        return;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = (long)param_3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined8 *)(param_1 + 0xd8) = param_4;
  }
  return;
}



/* Entry: 1091a09fc; end: 1091a0a77; -[SCAudioCaptureSessionImpl _recordAudioQueueRunningAfterStart] */

void FUN_1091a09fc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_28;
  int iStack_24;
  
  lVar1 = param_1;
  func_0x00010beb2da0();
  if ((int)lVar1 != 0) {
    uStack_28 = 4;
    iStack_24 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _AudioQueueGetProperty(uVar2,0x6171726e,&iStack_24,&uStack_28);
    if ((int)uVar2 == 0) {
      *(bool *)(param_1 + 0xe0) = iStack_24 != 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xe0) = 0;
      *(long *)(param_1 + 0xe8) = (long)(int)uVar2;
    }
  }
  return;
}



/* Entry: 1091a0a78; end: 1091a0ae7; -[SCAudioCaptureSessionImpl _recordAudioQueueCallbackWithNumPackets:] */

void FUN_1091a0a78(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  iVar4 = (int)param_2;
  func_0x00010beb2da0();
  if (iVar4 != 0) {
    plVar1 = (long *)(param_2 + 0xf0);
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      _CFAbsoluteTimeGetCurrent();
      *(undefined8 *)(param_2 + 0x128) = param_1;
    }
    if (param_4 != 0) {
      plVar1 = (long *)(param_2 + 0xf8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return;
}



/* Entry: 1091a0ae8; end: 1091a0b5f; -[SCAudioCaptureSessionImpl _recordAudioQueueSampleBufferBuildFailureWithErrorCode:step:] */

void FUN_1091a0ae8(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  func_0x00010beb2da0();
  if (iVar4 != 0) {
    plVar1 = (long *)(param_1 + 0x100);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (param_3 == 0) {
      param_3 = -1;
    }
    plVar1 = (long *)(param_1 + 0x108);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        return;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = (long)param_3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined8 *)(param_1 + 0x110) = param_4;
  }
  return;
}



/* Entry: 1091a0b60; end: 1091a0b97; -[SCAudioCaptureSessionImpl _recordAudioQueueSampleBufferForwarded] */

void FUN_1091a0b60(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  func_0x00010beb2da0();
  if (iVar4 != 0) {
    plVar1 = (long *)(param_1 + 0x118);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 1091a0b98; end: 1091a102f; -[SCAudioCaptureSessionImpl audioQueueDiagnosticsSnapshot] */

void FUN_1091a0b98(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = param_1;
  func_0x00010beb2da0();
  if ((int)lVar7 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(param_1 + 200);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5,param_2,puVar6,&PTR____CFConstantStringClassReference_110f2b258);
    _objc_release(puVar6);
    if (lVar7 != 0) {
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                          *(undefined8 *)(param_1 + 0xd0));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5,param_2,puVar6,&PTR____CFConstantStringClassReference_110f2b278);
      _objc_release(puVar6);
      ppuVar1 = &PTR____CFConstantStringClassReference_110f2b5f8;
      if (*(long *)(param_1 + 0xd8) != 2) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110dabe78;
      }
      ppuVar3 = &PTR____CFConstantStringClassReference_110f2b5d8;
      if (*(long *)(param_1 + 0xd8) != 1) {
        ppuVar3 = ppuVar1;
      }
      func_0x00010c1d0640(puVar5,param_2,ppuVar3,&PTR____CFConstantStringClassReference_110f2b298);
    }
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0xe0)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5,param_2,puVar6,&PTR____CFConstantStringClassReference_110f2b2b8);
    _objc_release(puVar6);
    if (*(long *)(param_1 + 0xe8) != 0) {
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5,param_2,puVar6,&PTR____CFConstantStringClassReference_110f2b2d8);
      _objc_release(puVar6);
    }
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df860(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0xf0)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5,param_2,puVar6,&PTR____CFConstantStringClassReference_110f2b2f8);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df860(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0xf8)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5,param_2,puVar6,&PTR____CFConstantStringClassReference_110f2b318);
    _objc_release(puVar6);
    lVar7 = *(long *)(param_1 + 0x100);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5,param_2,puVar6,&PTR____CFConstantStringClassReference_110f2b338);
    _objc_release(puVar6);
    if (lVar7 != 0) {
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                          *(undefined8 *)(param_1 + 0x108));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5,param_2,puVar6,&PTR____CFConstantStringClassReference_110f2b358);
      _objc_release(puVar6);
      ppuVar1 = &PTR____CFConstantStringClassReference_110f2b638;
      if (*(long *)(param_1 + 0x110) != 2) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110dabe78;
      }
      ppuVar3 = &PTR____CFConstantStringClassReference_110f2b618;
      if (*(long *)(param_1 + 0x110) != 1) {
        ppuVar3 = ppuVar1;
      }
      func_0x00010c1d0640(puVar5,param_2,ppuVar3,&PTR____CFConstantStringClassReference_110f2b378);
    }
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df860(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                        *(undefined8 *)(param_1 + 0x118));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5,param_2,puVar6,&PTR____CFConstantStringClassReference_110f2b398);
    _objc_release(puVar6);
    if ((0.0 < *(double *)(param_1 + 0x120)) && (0.0 < *(double *)(param_1 + 0x128))) {
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720((long)((*(double *)(param_1 + 0x128) - *(double *)(param_1 + 0x120)) *
                                1000.0),PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5,param_2,puVar6,&PTR____CFConstantStringClassReference_110f2b3b8);
      _objc_release(puVar6);
    }
    _os_unfair_lock_lock(param_1 + 0x130);
    uVar4 = *(undefined1 *)(param_1 + 0x134);
    uVar2 = *(undefined8 *)(param_1 + 0x138);
    ppuVar3 = *(undefined ***)(param_1 + 0x140);
    _objc_retain(ppuVar3);
    _os_unfair_lock_unlock(param_1 + 0x130);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5,param_2,puVar6,&PTR____CFConstantStringClassReference_110f2b3d8);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5,param_2,puVar6,&PTR____CFConstantStringClassReference_110f2b3f8);
    _objc_release(puVar6);
    ppuVar1 = &PTR____CFConstantStringClassReference_110dabe78;
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar1 = ppuVar3;
    }
    func_0x00010c1d0640(puVar5,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110f2b418);
    puVar6 = puVar5;
    func_0x00010bf51e00(puVar5);
    _objc_release(ppuVar3);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1091a1030; end: 1091a11e7; -[SCAudioCaptureSessionImpl appendAudioQueueBuffer:numPackets:PTS:packetDescriptions:] */

void FUN_1091a1030(long param_1,undefined8 param_2,long param_3,uint param_4,undefined8 *param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_60;
  long lStack_58;
  
  uVar2 = (ulong)param_4;
  uVar3 = (ulong)*(uint *)(param_3 + 0x10);
  lVar1 = param_1;
  func_0x00010be43f60(*(undefined8 *)(param_1 + 0xb0));
  if (((int)lVar1 != 0) && (*(long *)(param_1 + 0xb8) != 0)) {
    uVar2 = (ulong)((double)param_4 / *(double *)(param_1 + 0xb0));
    uVar3 = uVar2 << 1;
  }
  lStack_58 = 0;
  _CMBlockBufferCreateWithMemoryBlock(0,0,uVar3,0,0,0,uVar3,0,&lStack_58);
  if (((*(byte *)(param_1 + 0xa8) & 1) == 0) && (*(char *)(param_1 + 0xa9) == '\x01')) {
    func_0x00010be0dea0(param_1);
    *(undefined1 *)(param_1 + 0xa8) = 1;
  }
  if (lStack_58 == 0) {
    func_0x00010be874e0(param_1);
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + 8);
    lVar1 = param_1;
    func_0x00010be43f60(*(undefined8 *)(param_1 + 0xb0));
    if (((int)lVar1 != 0) && (*(long *)(param_1 + 0xb8) != 0)) {
      func_0x00010befd840(*(undefined8 *)(param_1 + 0xb0),param_1);
      uVar4 = *(undefined8 *)(param_1 + 0xb8);
    }
    _CMBlockBufferReplaceDataBytes(uVar4,lStack_58,0,uVar3);
    lStack_60 = 0;
    uStack_78 = param_5[1];
    uStack_80 = *param_5;
    uStack_70 = param_5[2];
    uVar4 = 0;
    _CMAudioSampleBufferCreateWithPacketDescriptions
              (0,lStack_58,1,0,0,*(undefined8 *)(param_1 + 0xa0),uVar2,&uStack_80,param_6,&lStack_60
              );
    if (lStack_60 == 0) {
      func_0x00010be874e0(param_1,uVar4,uVar4,2);
    }
    else {
      func_0x00010c114560(param_1);
      _CFRelease(lStack_60);
    }
    _CFRelease(lStack_58);
  }
  return;
}



/* Entry: 1091a11e8; end: 1091a1243; -[SCAudioCaptureSessionImpl processAudioSampleBuffer:] */

void FUN_1091a11e8(long param_1)

{
  func_0x00010be87500();
  param_1 = param_1 + 0x148;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf0ee60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091a1244; end: 1091a125b; -[SCAudioCaptureSessionImpl _isSpeedRateValidAndActive:] */

bool FUN_1091a1244(double param_1)

{
  return param_1 != 1.0 && 0.0 < param_1;
}



/* Entry: 1091a125c; end: 1091a12d3; -[SCAudioCaptureSessionImpl adjustAudioDataSpeedRateFromAudioData:numberOfSamplesInOriginalAudioData:speedRate:adjustedAudioSamples:] */

void FUN_1091a125c(double param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5,
                  long param_6)

{
  ulong uVar1;
  
  if (param_1 <= 1.0) {
    if (0 < (long)param_5) {
      uVar1 = 0;
      do {
        *(undefined2 *)(param_6 + (long)(int)((double)uVar1 / param_1) * 2) =
             *(undefined2 *)(param_4 + uVar1 * 2);
        uVar1 = uVar1 + 1;
      } while (param_5 != uVar1);
    }
  }
  else if (0 < (long)((double)(long)param_5 / param_1)) {
    uVar1 = 0;
    do {
      *(undefined2 *)(param_6 + uVar1 * 2) =
           *(undefined2 *)(param_4 + (long)(int)(param_1 * (double)uVar1) * 2);
      uVar1 = uVar1 + 1;
    } while ((long)((double)(long)param_5 / param_1) != uVar1);
  }
  return;
}



/* Entry: 1091a12d4; end: 1091a1327; -[SCAudioCaptureSessionImpl _fadeInAudioBuffer:] */

void FUN_1091a12d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar2 = *(uint *)(param_3 + 0x10);
  uVar1 = uVar2;
  if (1000 < uVar2) {
    uVar1 = 0x3e9;
  }
  if (1 < uVar2) {
    uVar3 = 0;
    lVar4 = *(long *)(param_3 + 8);
    do {
      *(short *)(lVar4 + uVar3 * 2) =
           (short)(int)(((float)uVar3 * (float)(int)*(short *)(lVar4 + uVar3 * 2)) /
                       (float)(uVar1 >> 1));
      uVar3 = uVar3 + 1;
    } while (uVar1 >> 1 != uVar3);
  }
  return;
}



/* Entry: 1091a1328; end: 1091a16cb; -[SCAudioCaptureSessionImpl _generateErrorForType:errorCode:format:] */

void FUN_1091a1328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
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
  undefined8 uVar12;
  long lVar13;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  uVar12 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  _objc_release(param_3);
  __Unwind_Resume(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bf17c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1091a16cc; end: 1091a16d3; -[SCAudioCaptureSessionImpl beginAudioRecordingAsynchronouslyWithSampleRate:devicePosition:audioContentWillBeIgnored:completionHandler:] */

void FUN_1091a16cc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf17c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,0x3ff0000000000000,param_2,PTR_s_beginAudioRecordingAsynchronousl_1125a38b0);
  return;
}



/* Entry: 1091a16d4; end: 1091a17ef; -[SCAudioCaptureSessionImpl beginAudioRecordingAsynchronouslyWithSampleRate:speedRate:devicePosition:audioContentWillBeIgnored:completionHandler:] */

void FUN_1091a16d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_7);
  func_0x00010be923a0(param_3);
  *(undefined8 *)(param_3 + 0xb0) = param_2;
  *(undefined8 *)(param_3 + 0xb8) = 0;
  lVar1 = param_3 + 0x150;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf0ee80();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_3 + 8);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1091a17f0;
  puStack_80 = &UNK_110adf248;
  lStack_78 = param_3;
  uStack_68 = param_5;
  uStack_60 = param_1;
  uStack_58 = param_6;
  _objc_retain(param_7);
  uStack_70 = param_7;
  func_0x00010c0f7fc0(uVar2,param_4,&puStack_98);
  _objc_release(uStack_70);
  _objc_release(param_7);
  return;
}



/* Entry: 1091a17f0; end: 1091a190b;  */

void FUN_1091a17f0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (((*(char *)(lVar1 + 0xa9) == '\x01') && ((*(byte *)(param_1 + 0x40) & 1) == 0)) &&
     (*(long *)(param_1 + 0x30) != -1)) {
    func_0x00010bf0fb00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined8 *)PTR__AVAudioSessionOrientationFront_11034ce98;
    if ((*(long *)(param_1 + 0x30) == 0) ||
       (puVar3 = (undefined8 *)PTR__AVAudioSessionOrientationBack_11034ce90,
       *(long *)(param_1 + 0x30) == 1)) {
      uVar4 = *puVar3;
      _objc_retain(uVar4);
    }
    else {
      uVar4 = 0;
    }
    func_0x00010c16bd40(lVar1);
    _objc_release(uVar4);
    _objc_release(lVar1);
    lVar1 = *(long *)(param_1 + 0x20);
  }
  func_0x00010bdd3160(*(undefined8 *)(param_1 + 0x38),lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1091a190c; end: 1091a19b3; -[SCAudioCaptureSessionImpl disposeAudioRecordingSynchronouslyWithCompletionHandler:] */

void FUN_1091a190c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1091a19b4;
  puStack_48 = &UNK_1107d0af0;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091a19b4; end: 1091a1a17;  */

void FUN_1091a19b4(long param_1)

{
  long lVar1;
  
  func_0x00010be051c0(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x20) + 0x150;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf0eea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1091a1a18; end: 1091a1ddb; -[SCAudioCaptureSessionImpl _beginAudioRecordingWithSampleRate:] */

void FUN_1091a1a18(double param_1,double param_2)

{
  int iVar1;
  double *pdVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  undefined4 auStack_b4 [8];
  undefined4 uStack_94;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  double dStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010bddb4e0();
  dVar8 = param_2;
  func_0x00010bf0fb00();
  _objc_retainAutoreleasedReturnValue();
  dVar9 = dVar8;
  func_0x00010c0656e0();
  _objc_release(dVar8);
  if (SUB84(dVar9,0) != 0) {
    uStack_58 = 0x100000002;
    uStack_60 = 0xc6c70636d;
    uStack_50 = 0x100000002;
    uStack_48 = 0x10;
    dStack_68 = param_1;
    _objc_retain(param_2);
    if (lRam0000000113732850 != -1) {
      func_0x000107c27d9c(0x113732850,&PTR___NSConcreteGlobalBlock_110adf278);
    }
    dStack_90 = param_2;
    func_0x0001078f00b8(uRam0000000113732848,&dStack_90,&dStack_90);
    _objc_release(param_2);
    pdVar2 = &dStack_68;
    _AudioQueueNewInput(pdVar2,FUN_1091a1ddc,param_2,0,0,0,(long)param_2 + 0x20);
    if ((int)pdVar2 != 0) {
      uStack_88 = uStack_60;
      dStack_90 = dStack_68;
      uStack_78 = uStack_50;
      uStack_80 = uStack_58;
      uStack_70 = uStack_48;
      func_0x00010be1b0c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      dVar8 = param_2;
      goto LAB_1091a1d7c;
    }
    uVar6 = (uint)(dStack_68 * 0.024000000208616257);
    if ((int)uStack_50 == 0) {
      if ((int)uStack_58 == 0) {
        auStack_b4[0] = 4;
        _AudioQueueGetProperty
                  (*(undefined8 *)((long)param_2 + 0x20),0x786f7073,&dStack_90,auStack_b4);
      }
      else {
        dStack_90 = (double)CONCAT44(dStack_90._4_4_,(int)uStack_58);
      }
      uVar7 = uVar6;
      if ((uStack_58._4_4_ != 0) && (uVar7 = 0, uStack_58._4_4_ != 0)) {
        uVar7 = uVar6 / uStack_58._4_4_;
      }
      if (uVar7 < 2) {
        uVar7 = 1;
      }
      uVar6 = uVar7 * dStack_90._0_4_;
    }
    else {
      uVar6 = (int)uStack_50 * uVar6;
    }
    dVar9 = *(double *)((long)param_2 + 0xb0);
    dVar8 = param_2;
    func_0x00010be43f60();
    if (SUB84(dVar8,0) != 0) {
      dVar9 = (double)uVar6 / *(double *)((long)param_2 + 0xb0);
      lVar3 = (long)dVar9;
      _calloc(lVar3,2);
      *(long *)((long)param_2 + 0xb8) = lVar3;
    }
    lVar3 = 0x28;
    do {
      _AudioQueueAllocateBuffer(*(undefined8 *)((long)param_2 + 0x20),uVar6,(long)param_2 + lVar3);
      func_0x00010be874a0(param_2);
      _AudioQueueEnqueueBuffer
                (*(undefined8 *)((long)param_2 + 0x20),*(undefined8 *)((long)param_2 + lVar3),0,0);
      func_0x00010be874a0(param_2);
      lVar3 = lVar3 + 8;
    } while (lVar3 != 0xa0);
    uStack_94 = 0x28;
    uVar4 = *(undefined8 *)((long)param_2 + 0x20);
    _AudioQueueGetProperty(uVar4,0x61716674,&dStack_68,&uStack_94);
    dVar8 = param_2;
    if ((int)uVar4 != 0) {
      uStack_88 = uStack_60;
      dStack_90 = dStack_68;
      uStack_78 = uStack_50;
      uStack_80 = uStack_58;
      uStack_70 = uStack_48;
      func_0x00010be1b0c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be051c0(param_2);
      goto LAB_1091a1d7c;
    }
    _bzero(auStack_b4,0x20);
    auStack_b4[0] = 0x640001;
    iVar1 = 0;
    _CMAudioFormatDescriptionCreate(0,&dStack_68,0x20,auStack_b4,0,0,0,(long)param_2 + 0xa0);
    if (iVar1 != 0) {
      uStack_88 = uStack_60;
      dStack_90 = dStack_68;
      uStack_78 = uStack_50;
      uStack_80 = uStack_58;
      uStack_70 = uStack_48;
      func_0x00010be1b0c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be051c0(param_2);
      goto LAB_1091a1d7c;
    }
    dVar5 = param_2;
    func_0x00010beb2da0();
    if (SUB84(dVar5,0) != 0) {
      _CFAbsoluteTimeGetCurrent();
      *(double *)((long)param_2 + 0x120) = dVar9;
    }
    uVar4 = *(undefined8 *)((long)param_2 + 0x20);
    _AudioQueueStart(uVar4,0);
    if ((int)uVar4 != 0) {
      uStack_88 = uStack_60;
      dStack_90 = dStack_68;
      uStack_78 = uStack_50;
      uStack_80 = uStack_58;
      uStack_70 = uStack_48;
      func_0x00010be1b0c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be051c0(param_2);
      goto LAB_1091a1d7c;
    }
    func_0x00010be874c0(param_2);
  }
  dVar8 = 0.0;
LAB_1091a1d7c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(dVar8);
  return;
}



/* Entry: 1091a1ddc; end: 1091a1f6f;  */

void FUN_1091a1ddc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_58 [8];
  long lStack_50;
  
  if (lRam0000000113732850 != -1) {
    func_0x000107c27d9c(0x113732850,&PTR___NSConcreteGlobalBlock_110adf278);
  }
  func_0x0001078efe58(auStack_58,uRam0000000113732848);
  do {
    if (lStack_50 == 0) {
      func_0x0001078f0080(auStack_58);
      return;
    }
    if (*(long *)(lStack_50 + 0x20) <= param_1) {
      if (param_1 <= *(long *)(lStack_50 + 0x20)) {
        func_0x0001078f0080(auStack_58);
        _objc_retain(param_1);
        func_0x00010be87480(param_1);
        if (param_5 != 0) {
          uVar1 = *(ulong *)(param_4 + 8);
          if (lRam0000000113732858 != -1) {
            func_0x000107c27d9c(0x113732858,&PTR___NSConcreteGlobalBlock_110adf298);
          }
          dVar2 = (double)NEON_ucvtf((ulong)uRam0000000113732860);
          dVar3 = (double)NEON_ucvtf((ulong)uRam0000000113732864);
          _CMTimeMakeWithSeconds(auStack_58,(((double)uVar1 * dVar2) / dVar3) / 1000000000.0,600);
          func_0x00010bf06a00(param_1);
        }
        _AudioQueueEnqueueBuffer(param_2,param_3,0,0);
        _objc_release(param_1);
        return;
      }
      lStack_50 = lStack_50 + 8;
    }
    lStack_50 = *(long *)lStack_50;
  } while( true );
}



/* Entry: 1091a1f70; end: 1091a2047; -[SCAudioCaptureSessionImpl _disposeAudioRecording] */

void FUN_1091a1f70(long param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    _AudioQueueStop(lVar1,1);
    _AudioQueueDispose(*(undefined8 *)(param_1 + 0x20),1);
    *(undefined1 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(long *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    _CFRelease();
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  _free(*(undefined8 *)(param_1 + 0xb8));
  *(undefined8 *)(param_1 + 0xb8) = 0;
  _objc_retain(param_1);
  if (lRam0000000113732850 != -1) {
    func_0x000107c27d9c(0x113732850,&PTR___NSConcreteGlobalBlock_110adf278);
  }
  lStack_28 = param_1;
  func_0x0001078f1ffc(uRam0000000113732848,&lStack_28);
  _objc_release(param_1);
  return;
}



/* Entry: 1091a2048; end: 1091a209b; -[SCAudioCaptureSessionImpl audioSession] */

void FUN_1091a2048(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1091a209c; end: 1091a20b3; -[SCAudioCaptureSessionImpl delegate] */

void FUN_1091a209c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x148);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091a20b4; end: 1091a20bf; -[SCAudioCaptureSessionImpl setDelegate:] */

void FUN_1091a20b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x148,param_3);
  return;
}



/* Entry: 1091a20c0; end: 1091a20d7; -[SCAudioCaptureSessionImpl providerDelegate] */

void FUN_1091a20c0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x150);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091a20d8; end: 1091a20e3; -[SCAudioCaptureSessionImpl setProviderDelegate:] */

void FUN_1091a20d8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x150,param_3);
  return;
}



/* Entry: 1091a20e4; end: 1091a213b; -[SCAudioCaptureSessionImpl .cxx_destruct] */

void FUN_1091a20e4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x150);
  _objc_destroyWeak(param_1 + 0x148);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091a213c; end: 1091a2167; -[SCAudioCaptureSessionImpl .cxx_construct] */

void FUN_1091a213c(long param_1)

{
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  return;
}



/* Entry: 1091a2168; end: 1091a2197;  */

void FUN_1091a2168(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = puVar1 + 1;
  puRam0000000113732848 = puVar1;
  return;
}



/* Entry: 1091a2198; end: 1091a21a3;  */

void FUN_1091a2198(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbeff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_timebase_info_11034c5d8)(0x113732860);
  return;
}



/* Entry: 1091a21a4; end: 1091a21a7; +[SCCameraWidenedFOVSettingsProvider previewVerticalOffset] */

void FUN_1091a21a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd93f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cameraPreviewEdgeInsets_112553e98);
  return;
}



/* Entry: 1091a21a8; end: 1091a21b3; +[SCCameraWidenedFOVSettingsProvider legacyAllScreenSupportedForCameraGeometry] */

void FUN_1091a21a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08ebd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b9aa0,PTR_s_legacyAllScreenSupportedForCamer_112601500);
  return;
}



/* Entry: 1091a21b4; end: 1091a21d7; +[SCCameraWidenedFOVSettingsProvider safeAreaInsets] */

void FUN_1091a21b4(undefined8 param_1)

{
  func_0x00010c08f440();
                    /* WARNING: Could not recover jumptable at 0x00010c149030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_safeAreaInsetsWithExistingInsets_11262fe28);
  return;
}



/* Entry: 1091a21d8; end: 1091a225f; +[SCCameraWidenedFOVSettingsProvider differenceInLengthBetweenCapriAndRegularCamera] */

double FUN_1091a21d8(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = param_4;
  func_0x00010c072be0();
  dVar4 = 0.0;
  if (((int)uVar1 != 0) && (dVar4 = dRam0000000113732868, dRam0000000113732868 == 0.0)) {
    func_0x00010c29cd40(PTR_PTR_1126b9aa0);
    dVar2 = dVar4;
    func_0x00010becd4c0(param_4);
    dVar3 = 48.0;
    func_0x00010bdd5500(param_4);
    dVar4 = (dVar4 - dVar2) + (param_3 - dVar3);
    dRam0000000113732868 = dVar4;
  }
  return dVar4;
}



/* Entry: 1091a2260; end: 1091a226b; +[SCCameraWidenedFOVSettingsProvider _topInset] */

void FUN_1091a2260(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b9aa0,PTR_s_legacySafeAreaInsetsForCameraGeo_112601720);
  return;
}



/* Entry: 1091a226c; end: 1091a23cf; +[SCCameraWidenedFOVSettingsProvider _bottomInsetWithAppFooterHeight:] */

double FUN_1091a226c(double param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  iVar1 = (int)param_2;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar5 = param_1;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetHeight();
  dVar3 = dVar5;
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar2);
  dVar4 = 2.0;
  if (dVar3 != 2.0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(puVar2);
    if (dVar4 != 3.0) {
      dVar5 = 26.0;
      goto LAB_1091a22f0;
    }
    if ((((2.2250738585072014e-308 < ABS(dVar5 + -844.0)) &&
         (2.2250738585072014e-308 < ABS(dVar5 + -926.0))) &&
        (2.2250738585072014e-308 < ABS(dVar5 + -812.0))) &&
       (func_0x00010be3f560(), (param_2 & 1) == 0)) {
      func_0x00010be3f580();
      dVar5 = 34.0;
      if (iVar1 == 0) {
        dVar5 = 26.0;
      }
      goto LAB_1091a22f0;
    }
  }
  dVar5 = 34.0;
LAB_1091a22f0:
  return param_1 + dVar5;
}



/* Entry: 1091a23d0; end: 1091a240f; +[SCCameraWidenedFOVSettingsProvider _isCurrentDeviceIPhone12MiniOr13Mini] */

undefined1 FUN_1091a23d0(void)

{
  if (lRam0000000113732898 != -1) {
    func_0x000107c27d9c(0x113732898,&PTR___NSConcreteGlobalBlock_110adf2b8);
  }
  return uRam0000000113732870;
}



/* Entry: 1091a2410; end: 1091a24cb;  */

void FUN_1091a2410(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfd3880();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0720c0();
  if ((int)puVar3 == 0) {
    puVar3 = PTR_PTR_1126b2930;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfd3880();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0720c0();
    uRam0000000113732870 = SUB81(puVar5,0);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    uRam0000000113732870 = 1;
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1091a24cc; end: 1091a250b; +[SCCameraWidenedFOVSettingsProvider _isCurrentDeviceIPhone14Pro] */

undefined1 FUN_1091a24cc(void)

{
  if (lRam00000001137328a0 != -1) {
    func_0x000107c27d9c(0x1137328a0,&PTR___NSConcreteGlobalBlock_110adf2d8);
  }
  return uRam0000000113732871;
}



/* Entry: 1091a250c; end: 1091a25c7;  */

void FUN_1091a250c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfd3880();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0720c0();
  if ((int)puVar3 == 0) {
    puVar3 = PTR_PTR_1126b2930;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfd3880();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0720c0();
    uRam0000000113732871 = SUB81(puVar5,0);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    uRam0000000113732871 = 1;
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1091a25c8; end: 1091a2603;  */

undefined8 FUN_1091a25c8(void)

{
  if (lRam00000001137328a8 != -1) {
    func_0x000107c27d9c(0x1137328a8,&PTR___NSConcreteGlobalBlock_110adf2f8);
  }
  return 0;
}



/* Entry: 1091a2604; end: 1091a2643;  */

void FUN_1091a2604(void)

{
  return;
}



/* Entry: 1091a2644; end: 1091a264b; -[SCScanAutomationParameters multiSnapSegmentTime] */

undefined8 FUN_1091a2644(void)

{
  return 0;
}



/* Entry: 1091a264c; end: 1091a27cf; +[SCCameraCapriUtils replicatorMaskPathWithTopLeftPoint:topRightPoint:height:] */

void FUN_1091a264c(double param_1,double param_2,double param_3,double param_4,double param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d18c0(param_1,param_2);
  func_0x00010bef98c0(param_1,param_2 + param_5,puVar2);
  func_0x00010bef6d40(param_1 + param_5,param_2 + param_5,param_5,0x400921fb54442d18,
                      0x4012d97c7f3321d2,puVar2,param_7,1);
  func_0x00010bef98c0(param_1,param_2,puVar2);
  func_0x00010bf3dc80(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d18c0(param_3,param_4);
  func_0x00010bef98c0(param_3,param_4 + param_5,puVar3);
  func_0x00010bef6d40(param_3 - param_5,param_4 + param_5,param_5,0,0x4012d97c7f3321d2,puVar3,
                      param_7,0);
  func_0x00010bef98c0(param_3,param_4,puVar3);
  func_0x00010bf3dc80(puVar3);
  func_0x00010bf06f40(puVar1,param_7,puVar2);
  func_0x00010bf06f40(puVar1,param_7,puVar3);
  func_0x00010bf3dc80(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091a27d0; end: 1091a2953; +[SCCameraCapriUtils replicatorMaskPathWithBottomLeftPoint:bottomRightPoint:height:] */

void FUN_1091a27d0(double param_1,double param_2,double param_3,double param_4,double param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d18c0(param_1,param_2);
  func_0x00010bef98c0(param_1,param_2 - param_5,puVar2);
  func_0x00010bef6d40(param_1 + param_5,param_2 - param_5,param_5,0x400921fb54442d18,
                      0x3ff921fb54442d18,puVar2,param_7,0);
  func_0x00010bef98c0(param_1,param_2,puVar2);
  func_0x00010bf3dc80(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d18c0(param_3,param_4);
  func_0x00010bef98c0(param_3,param_4 - param_5,puVar3);
  func_0x00010bef6d40(param_3 - param_5,param_4 - param_5,param_5,0,0x3ff921fb54442d18,puVar3,
                      param_7,1);
  func_0x00010bef98c0(param_3,param_4,puVar3);
  func_0x00010bf3dc80(puVar3);
  func_0x00010bf06f40(puVar1,param_7,puVar2);
  func_0x00010bf06f40(puVar1,param_7,puVar3);
  func_0x00010bf3dc80(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091a2954; end: 1091a2977; +[SCCameraCapriUtils replicatorOffset] */

undefined8 FUN_1091a2954(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010be3f560();
  uVar1 = 0x3fe0000000000000;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1091a2978; end: 1091a29c3; +[SCCameraCapriUtils iPadCameraTimerBottomPadding] */

void FUN_1091a2978(undefined8 param_1)

{
  func_0x000107c30a64();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c30a68();
  _objc_release(param_1);
  func_0x000107c2bd34();
  return;
}



/* Entry: 1091a29c4; end: 1091a2a03; +[SCCameraCapriUtils _isCurrentDeviceIPhone12MiniOr13Mini] */

undefined1 FUN_1091a29c4(void)

{
  if (lRam00000001137328b8 != -1) {
    func_0x000107c27d9c(0x1137328b8,&PTR___NSConcreteGlobalBlock_110adf318);
  }
  return uRam00000001137328b0;
}



/* Entry: 1091a2a04; end: 1091a2abf;  */

void FUN_1091a2a04(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfd3880();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0720c0();
  if ((int)puVar3 == 0) {
    puVar3 = PTR_PTR_1126b2930;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfd3880();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0720c0();
    uRam00000001137328b0 = SUB81(puVar5,0);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    uRam00000001137328b0 = 1;
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1091a2ac0; end: 1091a2ac3;  */

undefined8
FUN_1091a2ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar3;
  
  func_0x000107c517cc(PTR__OBJC_CLASS___UIScreen_1126aea10);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  uVar5 = param_3;
  func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c51724();
  iVar1 = (int)puVar3;
  uVar6 = uVar5;
  uVar7 = param_4;
  func_0x00010052b600();
  dVar4 = (double)iVar1;
  func_0x00010052b668(dVar4);
  func_0x00010052b8c4(uVar5,param_4,param_1,param_3,dVar4,param_2,uVar6,uVar7);
  func_0x000107c61170(puVar2);
  return uVar5;
}



/* Entry: 1091a2ac4; end: 1091a2b67;  */

undefined1 FUN_1091a2ac4(undefined8 param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  lVar2 = lRam00000001137328c8;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1091a2b68;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  _objc_retain(param_1);
  uVar3 = param_1;
  if (lVar2 != -1) {
    func_0x000107c27d9c(0x1137328c8,&puStack_48);
    uVar3 = uStack_28;
  }
  uVar1 = uRam00000001137328c0;
  _objc_release(uVar3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1091a2b68; end: 1091a2bc7;  */

void FUN_1091a2b68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110f2b718,0,0);
  uRam00000001137328c0 = (char)uVar1;
  return;
}



/* Entry: 1091a2bc8; end: 1091a2c1b; +[SCAudioSessionProvider isMutableSessionAvailable] */

bool FUN_1091a2bc8(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = lRam00000001137328e0;
  func_0x00010c0d3da0(lRam00000001137328e0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  return lVar2 != 0;
}



/* Entry: 1091a2c1c; end: 1091a2c67; +[SCAudioSessionProvider mutableSession] */

void FUN_1091a2c1c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = uRam00000001137328e0;
  func_0x00010c0d3da0(uRam00000001137328e0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1091a2c68; end: 1091a2cbb; +[SCAudioSessionProvider isSessionAvailable] */

bool FUN_1091a2c68(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = lRam00000001137328e0;
  func_0x00010c15fac0(lRam00000001137328e0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  return lVar2 != 0;
}



/* Entry: 1091a2cbc; end: 1091a2d07; +[SCAudioSessionProvider session] */

void FUN_1091a2cbc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = uRam00000001137328e0;
  func_0x00010c15fac0(uRam00000001137328e0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1091a2d08; end: 1091a2d53; +[SCAudioSessionProvider configurationFactory] */

void FUN_1091a2d08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = uRam00000001137328e0;
  func_0x00010bf46680(uRam00000001137328e0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1091a2d54; end: 1091a2e17; +[SCAudioSessionProvider currentAudioStateWithCompletion:] */

void FUN_1091a2d54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010c15fac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1091a2e18;
  puStack_40 = &UNK_110875dd0;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf385a0(param_1,param_2,uVar1,&puStack_58);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1091a2e18; end: 1091a2e43;  */

void FUN_1091a2e18(long param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 3;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  if (param_3 == 0) {
    uVar1 = 1;
  }
  uVar2 = 2;
  if (param_4 == 0) {
    uVar2 = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001091a2e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar2);
  return;
}



/* Entry: 1091a2e44; end: 1091a2fff; -[SCLensProcessingSampleBuffer initWithSampleBuffer:identifier:lensEffectTexture:] */

undefined8 *
FUN_1091a2e44(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [72];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_a0 = PTR_PTR_112700a68;
  puVar1 = &uStack_a8;
  uStack_a8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    func_0x00010be96000(puVar1);
    lVar3 = param_3;
    func_0x00010c1494c0();
    _CMSampleBufferGetImageBuffer();
    lVar4 = param_5;
    func_0x00010c111940();
    if (((lVar4 == 0) || (lVar3 == 0)) || (lVar4 = param_5, func_0x00010c111940(), lVar4 == lVar3))
    {
      lVar3 = param_3;
      func_0x00010c1494c0();
    }
    else {
      lVar3 = param_3;
      func_0x00010c1494c0();
      lVar4 = param_5;
      func_0x00010c111940(param_5);
      lVar5 = lVar3;
      _CMSampleBufferIsValid();
      if ((int)lVar5 == 0) {
        lVar3 = 0;
      }
      else {
        _CMSampleBufferGetSampleTimingInfo(lVar3,0,auStack_88);
        lStack_98 = 0;
        lStack_90 = 0;
        uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
        uVar2 = uVar6;
        _CMVideoFormatDescriptionCreateForImageBuffer(uVar6,lVar4,&lStack_98);
        lVar3 = 0;
        if ((int)uVar2 == 0) {
          _CMSampleBufferCreateReadyWithImageBuffer(uVar6,lVar4,lStack_98,auStack_88,&lStack_90);
          if (lStack_98 != 0) {
            _CFRelease();
          }
          lVar3 = lStack_90;
          if ((int)uVar6 != 0) {
            lVar3 = 0;
          }
        }
      }
    }
    puVar1[3] = lVar3;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1091a3000; end: 1091a307b; -[SCLensProcessingSampleBuffer dealloc] */

void FUN_1091a3000(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1;
  func_0x00010c1494c0();
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar1 != lVar2) {
    _CMSampleBufferIsValid();
    if ((int)lVar2 != 0) {
      _CFRelease(*(undefined8 *)(param_1 + 0x18));
    }
    func_0x00010c111940(*(undefined8 *)(param_1 + 0x20));
    _CVPixelBufferRelease();
  }
  func_0x00010be8a500(param_1);
  puStack_28 = PTR_PTR_112700a68;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1091a307c; end: 1091a30a3; -[SCLensProcessingSampleBuffer sampleBufferId] */

void FUN_1091a307c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091a30a4; end: 1091a30ab; -[SCLensProcessingSampleBuffer sampleBuffer] */

void FUN_1091a30a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1494d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_sampleBuffer_11262ff50);
  return;
}



/* Entry: 1091a30ac; end: 1091a30b3; -[SCLensProcessingSampleBuffer savingSource] */

void FUN_1091a30ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14c030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_savingSource_112630a28);
  return;
}



/* Entry: 1091a30b4; end: 1091a30bb; -[SCLensProcessingSampleBuffer fillMode] */

void FUN_1091a30b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfad590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_fillMode_1125c8f08);
  return;
}



/* Entry: 1091a30bc; end: 1091a30c3; -[SCLensProcessingSampleBuffer orientation] */

void FUN_1091a30bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ed110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_orientation_112618e58);
  return;
}



/* Entry: 1091a30c4; end: 1091a30cb; -[SCLensProcessingSampleBuffer isFileSource] */

void FUN_1091a30c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c072e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_isFileSource_1125fa598);
  return;
}



/* Entry: 1091a30cc; end: 1091a311b; -[SCLensProcessingSampleBuffer _retainSampleBuffer:] */

void FUN_1091a30cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c1494c0();
  _CMSampleBufferGetImageBuffer();
  if (lVar1 != 0) {
    func_0x00010c1494c0(param_3);
    _CFRetain();
    _CVPixelBufferRetain(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091a311c; end: 1091a3163; -[SCLensProcessingSampleBuffer _releaseSampleBuffer:] */

void FUN_1091a311c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c1494c0();
  _CMSampleBufferGetImageBuffer();
  if (lVar1 != 0) {
    _CVPixelBufferRelease();
    func_0x00010c1494c0(param_3);
    _CFRelease();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091a3164; end: 1091a316b; -[SCLensProcessingSampleBuffer previewSampleBuffer] */

undefined8 FUN_1091a3164(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1091a316c; end: 1091a3173; -[SCLensProcessingSampleBuffer lensEffectTexture] */

undefined8 FUN_1091a316c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1091a3174; end: 1091a31af; -[SCLensProcessingSampleBuffer .cxx_destruct] */

void FUN_1091a3174(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091a31b0; end: 1091a31b7; -[SCLensProcessingSharedServices lensProcessingLauncher] */

undefined8 FUN_1091a31b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091a31b8; end: 1091a31bf; -[SCLensProcessingSharedServices lensProcessingTranscodingProvider] */

undefined8 FUN_1091a31b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1091a31c0; end: 1091a31cb; -[SCLensProcessingSharedServices viewportProvider] */

void FUN_1091a31c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 1091a31cc; end: 1091a31d3; -[SCLensProcessingSharedServices setViewportProvider:] */

void FUN_1091a31cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1091a31d4; end: 1091a31df; -[SCLensProcessingSharedServices lensModeProvider] */

void FUN_1091a31d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x30,1);
  return;
}



/* Entry: 1091a31e0; end: 1091a31e7; -[SCLensProcessingSharedServices setLensModeProvider:] */

void FUN_1091a31e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1091a31e8; end: 1091a31f3; -[SCLensProcessingSharedServices lensProcessingCore] */

void FUN_1091a31e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x38,1);
  return;
}



/* Entry: 1091a31f4; end: 1091a31fb; -[SCLensProcessingSharedServices setLensProcessingCore:] */

void FUN_1091a31f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1091a31fc; end: 1091a3207; -[SCLensProcessingSharedServices fpsTracker] */

void FUN_1091a31fc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x40,1);
  return;
}



/* Entry: 1091a3208; end: 1091a320f; -[SCLensProcessingSharedServices setFpsTracker:] */

void FUN_1091a3208(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1091a3210; end: 1091a321b; -[SCLensProcessingSharedServices transcodingLensModeProvider] */

void FUN_1091a3210(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x48,1);
  return;
}



/* Entry: 1091a321c; end: 1091a3223; -[SCLensProcessingSharedServices setTranscodingLensModeProvider:] */

void FUN_1091a321c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1091a3224; end: 1091a322f; -[SCLensProcessingSharedServices transcodingLensProcessingCore] */

void FUN_1091a3224(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x50,1);
  return;
}



/* Entry: 1091a3230; end: 1091a3237; -[SCLensProcessingSharedServices setTranscodingLensProcessingCore:] */

void FUN_1091a3230(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1091a3238; end: 1091a324f; -[SCLensProcessingSharedServices touchController] */

void FUN_1091a3238(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091a3250; end: 1091a325b; -[SCLensProcessingSharedServices setTouchController:] */

void FUN_1091a3250(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 1091a325c; end: 1091a3273; -[SCLensProcessingSharedServices renderTarget] */

void FUN_1091a325c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


