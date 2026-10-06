/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10702cd60; end: 10702cd67; -[SCDisplayLink setPaused:] */

void FUN_10702cd60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_setPaused__112654088)
  ;
  return;
}



/* Entry: 10702cd68; end: 10702cd6f; -[SCDisplayLink preferredFramesPerSecond] */

void FUN_10702cd68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c106b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_preferredFramesPerSecond_11261f4f0);
  return;
}



/* Entry: 10702cd70; end: 10702cd77; -[SCDisplayLink setPreferredFramesPerSecond:] */

void FUN_10702cd70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1dfff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setPreferredFramesPerSecond__112655a20);
  return;
}



/* Entry: 10702cd78; end: 10702cda7; -[SCDisplayLink .cxx_destruct] */

void FUN_10702cd78(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10702cda8; end: 10702d137; -[SCManagedVideoFileStreamer initWithPlaybackForURL:secondaryPlaybackURL:hardwareResource:hardwareRequestHandlerUpdatesObservable:] */

undefined8 *
FUN_10702cda8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_5);
  _objc_retain(param_6);
  puStack_50 = PTR_PTR_1126f84e0;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x17] = 3;
    puVar1[0x1e] = 0;
    puVar2 = auStack_48;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak(puVar1 + 4,puVar2);
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126d41e0;
    _objc_alloc();
    puVar2 = auStack_48;
    _objc_loadWeakRetained(puVar2);
    func_0x00010c019ae0();
    uVar5 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar5 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar5);
    uVar5 = 1;
    _dispatch_semaphore_create();
    uVar6 = puVar1[8];
    puVar1[8] = uVar5;
    _objc_release(uVar6);
    *(undefined4 *)((long)puVar1 + 0x84) = 0;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar5 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
    func_0x00010bf85b60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar5);
    uVar5 = puVar1[0xb];
    puVar3 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc2c0(uVar5);
    _objc_release(puVar3);
    func_0x00010c1dffe0(puVar1[0xb]);
    func_0x00010c1d9980(puVar1[0xb]);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar5 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126d41e8;
    _objc_alloc();
    puVar4 = PTR_PTR_1126d41f0;
    _objc_opt_new(PTR_PTR_1126d41f0);
    func_0x00010c0360c0();
    uVar5 = puVar1[0x18];
    puVar1[0x18] = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126d4200;
    _objc_alloc();
    func_0x00010c037080();
    uVar5 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar5);
    if (param_4 != 0) {
      puVar3 = PTR_PTR_1126d4200;
      _objc_alloc();
      func_0x00010c037080();
      uVar5 = puVar1[0xf];
      puVar1[0xf] = puVar3;
      _objc_release(uVar5);
    }
    func_0x00010bf47260(puVar1);
    func_0x00010bf473e0(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10702d138; end: 10702d167; -[SCManagedVideoFileStreamer addSampleBufferDisplayController:] */

void FUN_10702d138(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10702d168; end: 10702d16f; -[SCManagedVideoFileStreamer setSampleBufferDisplayEnabled:] */

void FUN_10702d168(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 10702d170; end: 10702d173; -[SCManagedVideoFileStreamer setKeepLateFramesEnabled:] */

void FUN_10702d170(void)

{
  return;
}



/* Entry: 10702d174; end: 10702d177; -[SCManagedVideoFileStreamer stopStreamingWithoutRemovingPreview] */

void FUN_10702d174(void)

{
  return;
}



/* Entry: 10702d178; end: 10702d17b; -[SCManagedVideoFileStreamer stopStreamingAndFlushPreviewAfterDelay:] */

void FUN_10702d178(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopStreaming_112673500);
  return;
}



/* Entry: 10702d17c; end: 10702d17f; -[SCManagedVideoFileStreamer preemptivelyFlushOutdatedPreview] */

void FUN_10702d17c(void)

{
  return;
}



/* Entry: 10702d180; end: 10702d18b; -[SCManagedVideoFileStreamer waitUntilSampleBufferDisplayed:completionHandler:] */

/* WARNING: Possible PIC construction at 0x00010007386c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100073870) */

void FUN_10702d180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  code *pcVar2;
  
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  if ((bRam0000000113817cd8 & 1) == 0) {
    iVar1 = 0x13817cd8;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar2 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_async");
      pcRam0000000113817cd0 = pcVar2;
      func_0x000107c60e4c(0x113817cd8);
    }
  }
  pcVar2 = pcRam0000000113817cd0;
  func_0x00010002a3a8(param_4);
  func_0x000107c61180();
  (*pcVar2)(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10702d18c; end: 10702d1e7; -[SCManagedVideoFileStreamer startStreaming] */

/* WARNING: Possible PIC construction at 0x00010702d1d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010702d1d8) */

void FUN_10702d18c(long param_1)

{
  if ((*(byte *)(param_1 + 0x99) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x99) = 1;
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x30));
  func_0x00010bef7de0(param_1);
  func_0x00010bef7de0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c0fe370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x70),PTR_s_play_11261d2f8);
  return;
}



/* Entry: 10702d1e8; end: 10702d22b; -[SCManagedVideoFileStreamer stopStreaming] */

void FUN_10702d1e8(long param_1)

{
  if (*(char *)(param_1 + 0x99) == '\x01') {
    *(undefined1 *)(param_1 + 0x99) = 0;
    func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x70));
    func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010c12d5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeObservers_112628f98);
    return;
  }
  return;
}



/* Entry: 10702d22c; end: 10702d233; -[SCManagedVideoFileStreamer addObserver:withFrameSamplingRate:] */

void FUN_10702d22c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_addObserver_withFrameSamplingRat_11259c240);
  return;
}



/* Entry: 10702d234; end: 10702d23b; -[SCManagedVideoFileStreamer removeObserver:] */

void FUN_10702d234(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2564b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_stopObservingManagedVideoDataSou_112673350);
  return;
}



/* Entry: 10702d23c; end: 10702d243; -[SCManagedVideoFileStreamer setAsOutput:devicePosition:] */

void FUN_10702d23c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x10) = param_4;
  return;
}



/* Entry: 10702d244; end: 10702d24b; -[SCManagedVideoFileStreamer setDevicePosition:] */

void FUN_10702d244(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10702d24c; end: 10702d257; -[SCManagedVideoFileStreamer setVideoOrientation:] */

void FUN_10702d24c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c29a770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x90),PTR_s_videoOrientationChanged__112684400);
  return;
}



/* Entry: 10702d258; end: 10702d25f; -[SCManagedVideoFileStreamer setViewportOrientation:] */

void FUN_10702d258(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xf0) = param_3;
  return;
}



/* Entry: 10702d260; end: 10702d263; -[SCManagedVideoFileStreamer invalidateCameraRenderRegion] */

void FUN_10702d260(void)

{
  return;
}



/* Entry: 10702d264; end: 10702d267; -[SCManagedVideoFileStreamer beginConfiguration] */

void FUN_10702d264(void)

{
  return;
}



/* Entry: 10702d268; end: 10702d26b; -[SCManagedVideoFileStreamer commitConfiguration] */

void FUN_10702d268(void)

{
  return;
}



/* Entry: 10702d26c; end: 10702d26f; -[SCManagedVideoFileStreamer setupWithSession:devicePosition:] */

void FUN_10702d26c(void)

{
  return;
}



/* Entry: 10702d270; end: 10702d273; -[SCManagedVideoFileStreamer setupWithARSession:] */

void FUN_10702d270(void)

{
  return;
}



/* Entry: 10702d274; end: 10702d277; -[SCManagedVideoFileStreamer setZoomFactor:] */

void FUN_10702d274(void)

{
  return;
}



/* Entry: 10702d278; end: 10702d27b; -[SCManagedVideoFileStreamer activateTorch] */

void FUN_10702d278(void)

{
  return;
}



/* Entry: 10702d27c; end: 10702d283; -[SCManagedVideoFileStreamer shouldRecreateWhenSessionChange] */

undefined8 FUN_10702d27c(void)

{
  return 1;
}



/* Entry: 10702d284; end: 10702d34b; -[SCManagedVideoFileStreamer outputMediaDataWillChange:] */

void FUN_10702d284(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___AVPlayerItemVideoOutput_1126d13c8;
  _objc_opt_class(PTR__OBJC_CLASS___AVPlayerItemVideoOutput_1126d13c8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _CMTimeMake(auStack_48,1,10);
  uVar3 = uVar1;
  func_0x00010bfd96e0();
  if ((uVar3 & 1) == 0) {
    if (uVar1 == *(ulong *)(param_1 + 0x60)) {
      func_0x00010bf47260(param_1);
    }
    else if (uVar1 == *(ulong *)(param_1 + 0x68)) {
      func_0x00010bf473e0(param_1);
    }
  }
  func_0x00010c1d9980(*(undefined8 *)(param_1 + 0x58));
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10702d34c; end: 10702d453; -[SCManagedVideoFileStreamer displayLinkCallback:] */

void FUN_10702d34c(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  double dVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  func_0x00010c2709c0(param_4);
  dVar2 = param_1;
  func_0x00010bf8b160(param_4);
  _objc_release(param_4);
  if (*(long *)(param_2 + 0x60) == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x00010c084bc0(&uStack_48,param_1 + dVar2);
  }
  if (*(long *)(param_2 + 0x68) == 0) {
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x00010c084bc0(&uStack_60,param_1 + dVar2);
  }
  lVar1 = *(long *)(param_2 + 0x40);
  _dispatch_semaphore_wait(lVar1,0);
  if (lVar1 == 0) {
    func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}



/* Entry: 10702d454; end: 10702d9b3;  */

void FUN_10702d454(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  double dStack_70;
  double dStack_68;
  
  lVar14 = *(long *)(param_1 + 0x20) + 0x84;
  _os_unfair_lock_lock(lVar14);
  iVar2 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  uStack_b8 = *(undefined8 *)(param_1 + 0x30);
  lVar13 = *(long *)(param_1 + 0x28);
  uStack_b0 = *(undefined8 *)(param_1 + 0x38);
  lStack_c0 = lVar13;
  func_0x00010bfd96e0();
  fVar16 = (float)lVar13;
  lVar13 = *(long *)(param_1 + 0x20);
  if (iVar2 == 0) {
    if ((*(char *)(lVar13 + 0x99) == '\x01') &&
       (func_0x00010c11fdc0(*(undefined8 *)(lVar13 + 0x78)), fVar16 == 0.0)) {
      func_0x00010c0fe360(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78));
    }
  }
  else {
    uVar3 = *(undefined8 *)(lVar13 + 0x68);
    uStack_b8 = *(undefined8 *)(param_1 + 0x30);
    lStack_c0 = *(long *)(param_1 + 0x28);
    uStack_b0 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf52140();
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88) = uVar3;
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    puVar4 = PTR_PTR_1126cd5b8;
    func_0x00010bf78180(PTR_PTR_1126cd5b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  _os_unfair_lock_unlock(lVar14);
  iVar2 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  uStack_b8 = *(undefined8 *)(param_1 + 0x48);
  lVar14 = *(long *)(param_1 + 0x40);
  uStack_b0 = *(undefined8 *)(param_1 + 0x50);
  lStack_c0 = lVar14;
  func_0x00010bfd96e0();
  fVar16 = (float)lVar14;
  lVar14 = *(long *)(param_1 + 0x20);
  if (iVar2 == 0) {
    if ((*(char *)(lVar14 + 0x99) == '\x01') &&
       (func_0x00010c11fdc0(*(undefined8 *)(lVar14 + 0x70)), fVar16 == 0.0)) {
      func_0x00010c0fe360(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70));
    }
    goto LAB_10702d940;
  }
  uVar5 = *(ulong *)(lVar14 + 0x60);
  uStack_b8 = *(undefined8 *)(param_1 + 0x48);
  lStack_c0 = *(long *)(param_1 + 0x40);
  uStack_b0 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf52140();
  if (uVar5 == 0) goto LAB_10702d940;
  uVar6 = uVar5;
  _CVPixelBufferGetWidth();
  uVar7 = uVar5;
  _CVPixelBufferGetHeight();
  dVar17 = (double)uVar6;
  dVar18 = (double)uVar7;
  lVar14 = *(long *)(param_1 + 0x20);
  bVar1 = false;
  if ((*(double *)(lVar14 + 0x48) == dVar17) &&
     (bVar1 = false, !NAN(*(double *)(lVar14 + 0x50)) && !NAN(dVar18))) {
    bVar1 = *(double *)(lVar14 + 0x50) == dVar18;
  }
  if (!bVar1) {
    *(double *)(lVar14 + 0x48) = dVar17;
    *(double *)(lVar14 + 0x50) = dVar18;
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
    puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    dStack_70 = dVar17;
    dStack_68 = dVar18;
    func_0x00010c297120(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar4);
  }
  _CACurrentMediaTime();
  _CMTimeMake(&lStack_88,(long)(dVar17 * 1000.0),1000);
  lVar13 = *(long *)(param_1 + 0x20);
  lVar14 = *(long *)(lVar13 + 0x18);
  if (lVar14 == 0) {
    uStack_b8 = uStack_80;
    lStack_c0 = lStack_88;
    uStack_b0 = uStack_78;
    func_0x00010bf589c0();
    if (lVar13 != 0) {
      func_0x00010c0d8f40(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90));
      lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0xc0);
      func_0x00010c12fe60();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar8;
      func_0x00010bf529e0();
      _objc_release(lVar8);
      lVar8 = lVar13;
      if (lVar14 != 0) {
        uStack_b0 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
        uStack_a0 = *(undefined8 *)(param_1 + 0x48);
        uStack_a8 = *(undefined8 *)(param_1 + 0x40);
        uStack_98 = *(undefined8 *)(param_1 + 0x50);
        lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0xc0);
        uStack_b8 = 0;
        lStack_c0 = lVar13;
        func_0x00010c12f580();
      }
      lVar15 = *(long *)(param_1 + 0x20);
      func_0x00010c29f1a0();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = *(long *)(param_1 + 0x20) + 0x20;
      _objc_loadWeakRetained(lVar14);
      lVar13 = lVar14;
      func_0x00010c299660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c252d60();
      _objc_release(lVar13);
      _objc_release(lVar14);
      lVar14 = *(long *)(param_1 + 0x20) + 0x20;
      _objc_loadWeakRetained();
      lVar13 = lVar14;
      func_0x00010c255620();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar13;
      func_0x00010c06e2c0();
      if ((int)lVar9 == 0) {
        lVar9 = *(long *)(param_1 + 0x20) + 0x20;
        _objc_loadWeakRetained();
        lVar10 = lVar9;
        func_0x00010bf092a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c06e2c0();
        _objc_release(lVar10);
        _objc_release(lVar9);
        _objc_release(lVar13);
        _objc_release(lVar14);
      }
      else {
        _objc_release(lVar13);
        _objc_release(lVar14);
      }
      puVar4 = PTR_PTR_1126c8eb8;
      _objc_alloc(PTR_PTR_1126c8eb8);
      func_0x000100709514(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8),
                          *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf0));
      func_0x00010c0413a0(puVar4);
      func_0x00010bf78140(lVar15);
      if ((*(char *)(*(long *)(param_1 + 0x20) + 0x80) == '\x01') && (lVar15 == 0)) {
        func_0x00010bf963c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90));
      }
      puVar11 = PTR_PTR_1126d3350;
      _objc_alloc(PTR_PTR_1126d3350);
      func_0x00010c041380();
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
      uStack_b8 = *(undefined8 *)(param_1 + 0x48);
      lStack_c0 = *(long *)(param_1 + 0x40);
      uStack_b0 = *(undefined8 *)(param_1 + 0x50);
      puVar12 = PTR_PTR_1126cd5b8;
      func_0x00010bf78160(PTR_PTR_1126cd5b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar12);
      if (lVar8 != 0) {
        _CFRelease(lVar8);
      }
      _objc_release(puVar11);
      _objc_release(puVar4);
      goto LAB_10702d930;
    }
  }
  else {
    uStack_b8 = uStack_80;
    lStack_c0 = lStack_88;
    uStack_b0 = uStack_78;
    (**(code **)(lVar14 + 0x10))(lVar14,uVar5,&lStack_c0);
    lVar15 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = 0;
LAB_10702d930:
    _objc_release(lVar15);
  }
  _CVBufferRelease(uVar5);
LAB_10702d940:
  lVar14 = *(long *)(param_1 + 0x20) + 0x84;
  _os_unfair_lock_lock(lVar14);
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x88) != 0) {
    _CVBufferRelease();
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88) = 0;
  }
  _os_unfair_lock_unlock(lVar14);
  _dispatch_semaphore_signal(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40));
  return;
}



/* Entry: 10702d9b4; end: 10702da4b; -[SCManagedVideoFileStreamer currentCVPixelBufferRef] */

long FUN_10702d9b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _os_unfair_lock_lock(param_1 + 0x84);
  lVar2 = *(long *)(param_1 + 0x88);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    puVar1 = PTR_PTR_1126cd5b8;
    func_0x00010bf747c0(PTR_PTR_1126cd5b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _CVPixelBufferRetain(lVar2);
  _os_unfair_lock_unlock(param_1 + 0x84);
  return lVar2;
}



/* Entry: 10702da4c; end: 10702da67; -[SCManagedVideoFileStreamer preferredFrameTransformForReverseCamera] */

void FUN_10702da4c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__CGAffineTransformIdentity_110347008;
  uVar2 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  param_1[1] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = *(undefined8 *)(puVar1 + 0x20);
  param_1[5] = *(undefined8 *)(puVar1 + 0x28);
  param_1[4] = uVar2;
  return;
}



/* Entry: 10702da68; end: 10702db23; -[SCManagedVideoFileStreamer createSampleBufferFromPixelBuffer:presentationTime:] */

undefined8
FUN_10702da68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0;
  uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  uVar1 = uVar3;
  _CMVideoFormatDescriptionCreateForImageBuffer(uVar3,param_3,&uStack_40);
  uVar2 = 0;
  if ((int)uVar1 == 0) {
    uStack_88 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
    uStack_90 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
    uStack_80 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
    uStack_70 = param_4[1];
    uStack_78 = *param_4;
    uStack_68 = param_4[2];
    uStack_60 = uStack_90;
    uStack_58 = uStack_88;
    uStack_50 = uStack_80;
    _CMSampleBufferCreateForImageBuffer(uVar3,param_3,1,0,0,uStack_40,&uStack_90,&uStack_38);
    _CFRelease(uStack_40);
    uVar2 = uStack_38;
  }
  return uVar2;
}



/* Entry: 10702db24; end: 10702dc87; -[SCManagedVideoFileStreamer configureOutput] */

void FUN_10702db24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010bf5f0a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d760();
    _objc_release(uVar1);
  }
  puVar2 = PTR__OBJC_CLASS___AVPlayerItemVideoOutput_1126d13c8;
  _objc_alloc();
  uStack_48 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
  ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9c10;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&uStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0361e0(puVar2,param_2,puVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar2;
  _objc_release(uVar1);
  _objc_release(puVar3);
  func_0x00010c2102a0(*(undefined8 *)(param_1 + 0x60),param_2,1);
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b640(uVar5,param_2,param_1,uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa4c0();
  _objc_release(uVar1);
  lVar4 = *(long *)(param_1 + 0x60);
  func_0x00010c135f40(0x3fa1111111111111);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(lVar4 + 0x68) != 0) {
    uVar1 = *(undefined8 *)(lVar4 + 0x78);
    func_0x00010bf5f0a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d760();
    _objc_release(uVar1);
  }
  puVar2 = PTR__OBJC_CLASS___AVPlayerItemVideoOutput_1126d13c8;
  _objc_alloc();
  uStack_98 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
  ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9c10;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_90,&uStack_98,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0361e0(puVar2,param_2,puVar3);
  uVar1 = *(undefined8 *)(lVar4 + 0x68);
  *(undefined **)(lVar4 + 0x68) = puVar2;
  _objc_release(uVar1);
  _objc_release(puVar3);
  func_0x00010c2102a0(*(undefined8 *)(lVar4 + 0x68),param_2,1);
  uVar5 = *(undefined8 *)(lVar4 + 0x68);
  uVar1 = *(undefined8 *)(lVar4 + 0x38);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b640(uVar5,param_2,lVar4,uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(lVar4 + 0x78);
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar4 + 0x68);
  func_0x00010befa4c0();
  _objc_release(uVar1);
  lVar4 = *(long *)(lVar4 + 0x68);
  func_0x00010c135f40(0x3fa1111111111111);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(lVar4 + 0x18);
  *(undefined8 *)(lVar4 + 0x18) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10702dc88; end: 10702ddeb; -[SCManagedVideoFileStreamer configureSecondaryOutput] */

void FUN_10702dc88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf5f0a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d760();
    _objc_release(uVar1);
  }
  puVar2 = PTR__OBJC_CLASS___AVPlayerItemVideoOutput_1126d13c8;
  _objc_alloc();
  uStack_48 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
  ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9c10;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&uStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0361e0(puVar2,param_2,puVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar2;
  _objc_release(uVar1);
  _objc_release(puVar3);
  func_0x00010c2102a0(*(undefined8 *)(param_1 + 0x68),param_2,1);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b640(uVar5,param_2,param_1,uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010befa4c0();
  _objc_release(uVar1);
  lVar4 = *(long *)(param_1 + 0x68);
  func_0x00010c135f40(0x3fa1111111111111);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(lVar4 + 0x18);
  *(undefined8 *)(lVar4 + 0x18) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10702ddec; end: 10702de1b; -[SCManagedVideoFileStreamer getNextPixelBufferWithCompletion:] */

void FUN_10702ddec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10702de1c; end: 10702df7f; -[SCManagedVideoFileStreamer addDidPlayToEndTimeNotificationForPlayer:] */

void FUN_10702de1c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010c161660(param_3,param_2,2);
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)PTR__AVPlayerItemDidPlayToEndTimeNotification_1103480c0;
    lVar2 = param_3;
    func_0x00010bf5f0a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10702df80;
    puStack_60 = &UNK_110988dc0;
    _objc_retain(param_3);
    puVar4 = puVar1;
    lStack_58 = param_3;
    func_0x00010befa280(puVar1,param_2,uVar6,lVar2,puVar3,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    lVar5 = param_3;
    func_0x00010bf5f0a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar6,param_2,puVar4,lVar5);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(puVar1);
    _objc_release(lStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10702df80; end: 10702dfdf;  */

void FUN_10702df80(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf5f0a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c157280();
  _objc_release(uVar1);
  return;
}



/* Entry: 10702dfe0; end: 10702dfef; -[SCManagedVideoFileStreamer removeObservers] */

void FUN_10702dfe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_enumerateKeysAndObjectsUsingBloc_1125c38e0,
             &PTR___NSConcreteGlobalBlock_110988e10);
  return;
}



/* Entry: 10702dff0; end: 10702e06f;  */

void FUN_10702dff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf68fa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10702e070; end: 10702e07b; -[SCManagedVideoFileStreamer _applicationDidBackground:] */

void FUN_10702e070(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_setPaused__112654088,1);
  return;
}



/* Entry: 10702e07c; end: 10702e087; -[SCManagedVideoFileStreamer _applicationWillForeground:] */

void FUN_10702e07c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_setPaused__112654088,0);
  return;
}



/* Entry: 10702e088; end: 10702e0d3; -[SCManagedVideoFileStreamer invalidate] */

void FUN_10702e088(long param_1)

{
  undefined *puVar1;
  
  func_0x00010c12d5e0();
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x58));
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10702e0d4; end: 10702e0d7; -[SCManagedVideoFileStreamer clearCurrentFrame] */

void FUN_10702e0d4(void)

{
  return;
}



/* Entry: 10702e0d8; end: 10702e0db; -[SCManagedVideoFileStreamer clearLastDepthData] */

void FUN_10702e0d8(void)

{
  return;
}



/* Entry: 10702e0dc; end: 10702e147; -[SCManagedVideoFileStreamer cameraRenderRegionObservable] */

void FUN_10702e0dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae6b8;
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971a0(0,0,0x3ff0000000000000,0x3ff0000000000000,PTR__OBJC_CLASS___NSValue_1126afdf8)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10702e148; end: 10702e14b; -[SCManagedVideoFileStreamer frameAspectRatio] */

undefined8 FUN_10702e148(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b9e78;
  func_0x000107c49d70();
  if ((int)puVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c269d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b9e78,PTR_s_targetAspectRatio_112678188);
    return param_1;
  }
  if (lRam0000000113730758 != -1) {
    func_0x00010002a2fc(0x113730758,&PTR___NSConcreteGlobalBlock_110ad61c0);
  }
  return uRam0000000113730760;
}



/* Entry: 10702e14c; end: 10702e157; -[SCManagedVideoFileStreamer shouldCacheCurrentFrame] */

byte FUN_10702e14c(long param_1)

{
  return *(byte *)(param_1 + 0x98) & 1;
}



/* Entry: 10702e158; end: 10702e15f; -[SCManagedVideoFileStreamer setShouldCacheCurrentFrame:] */

void FUN_10702e158(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 10702e160; end: 10702e16b; -[SCManagedVideoFileStreamer currentFrame] */

void FUN_10702e160(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xa0,1);
  return;
}



/* Entry: 10702e16c; end: 10702e173; -[SCManagedVideoFileStreamer bufferDimensionObservable] */

undefined8 FUN_10702e16c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10702e174; end: 10702e17b; -[SCManagedVideoFileStreamer fieldOfViewObservable] */

undefined8 FUN_10702e174(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10702e17c; end: 10702e187; -[SCManagedVideoFileStreamer lastDepthData] */

void FUN_10702e17c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xb0,1);
  return;
}



/* Entry: 10702e188; end: 10702e18f; -[SCManagedVideoFileStreamer fieldOfView] */

undefined4 FUN_10702e188(long param_1)

{
  return *(undefined4 *)(param_1 + 0x9c);
}



/* Entry: 10702e190; end: 10702e197; -[SCManagedVideoFileStreamer isStreaming] */

undefined1 FUN_10702e190(long param_1)

{
  return *(undefined1 *)(param_1 + 0x99);
}



/* Entry: 10702e198; end: 10702e19f; -[SCManagedVideoFileStreamer performer] */

undefined8 FUN_10702e198(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10702e1a0; end: 10702e1a7; -[SCManagedVideoFileStreamer videoOrientation] */

undefined8 FUN_10702e1a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10702e1a8; end: 10702e1af; -[SCManagedVideoFileStreamer processingPipeline] */

undefined8 FUN_10702e1a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 10702e1b0; end: 10702e1b7; -[SCManagedVideoFileStreamer sampleBufferDisplayController] */

undefined8 FUN_10702e1b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10702e1b8; end: 10702e1bf; -[SCManagedVideoFileStreamer didAddAnchorsObservable] */

undefined8 FUN_10702e1b8(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 10702e1c0; end: 10702e1c7; -[SCManagedVideoFileStreamer didUpdateAnchorsObservable] */

undefined8 FUN_10702e1c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 10702e1c8; end: 10702e1cf; -[SCManagedVideoFileStreamer didRemoveAnchorsObservable] */

undefined8 FUN_10702e1c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 10702e1d0; end: 10702e1d7; -[SCManagedVideoFileStreamer resourceId] */

undefined8 FUN_10702e1d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 10702e1d8; end: 10702e1e3; -[SCManagedVideoFileStreamer viewfinderProvider] */

void FUN_10702e1d8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xe8,1);
  return;
}



/* Entry: 10702e1e4; end: 10702e1eb; -[SCManagedVideoFileStreamer setViewfinderProvider:] */

void FUN_10702e1e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10702e1ec; end: 10702e1f3; -[SCManagedVideoFileStreamer viewportOrientation] */

undefined8 FUN_10702e1ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 10702e1f4; end: 10702e30f; -[SCManagedVideoFileStreamer .cxx_destruct] */

void FUN_10702e1f4(long param_1)

{
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10702e310; end: 10702e353; -[SCManagedVideoStreamer dealloc] */

void FUN_10702e310(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be8a520();
  puStack_28 = PTR_PTR_1126f84e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10702e354; end: 10702e3fb; -[SCManagedVideoStreamer invalidateCameraRenderRegion] */

void FUN_10702e354(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10702e3fc; end: 10702e42b;  */

void FUN_10702e3fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar3 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    uVar2 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    *(undefined8 *)(param_1 + 0x108) = uVar1;
    *(undefined8 *)(param_1 + 0x120) = uVar3;
    *(undefined8 *)(param_1 + 0x118) = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10702e42c; end: 10702e47f; -[SCManagedVideoStreamer setSampleBufferDisplayEnabled:] */

void FUN_10702e42c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10702e480;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010be71ea0(param_1,param_2,&puStack_40);
  return;
}



/* Entry: 10702e480; end: 10702e48f;  */

void FUN_10702e480(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x40) = *(undefined1 *)(param_1 + 0x28);
  return;
}



/* Entry: 10702e490; end: 10702e5a7; -[SCManagedVideoStreamer waitUntilSampleBufferDisplayed:completionHandler:] */

void FUN_10702e490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c07ff20();
  if ((int)uVar1 == 0) {
    func_0x00010007380c(param_3,param_4);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010be71ea0(param_1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10702e5a8; end: 10702e697;  */

void FUN_10702e5a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar4 = *(long *)(lVar1 + 0x50);
    if (lVar4 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(lVar1 + 0x50);
      *(undefined **)(lVar1 + 0x50) = puVar2;
      _objc_release(uVar3);
      lVar4 = *(long *)(lVar1 + 0x50);
    }
    uStack_48 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retainBlock();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_40 = uVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_48,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(lVar4,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010be71ea0();
  return;
}



/* Entry: 10702e698; end: 10702e6e7; -[SCManagedVideoStreamer preemptivelyFlushOutdatedPreview] */

void FUN_10702e698(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10702e6e8;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010be71ea0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10702e6e8; end: 10702e6f3;  */

void FUN_10702e6e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb30f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48),PTR_s_flushOutdatedPreview_1125ca5e0)
  ;
  return;
}



/* Entry: 10702e6f4; end: 10702e743; -[SCManagedVideoStreamer beginConfiguration] */

void FUN_10702e6f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10702e744;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010be71ea0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10702e744; end: 10702e753;  */

void FUN_10702e744(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x20) = 1;
  return;
}



/* Entry: 10702e754; end: 10702e7bb; -[SCManagedVideoStreamer setDevicePosition:] */

void FUN_10702e754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010be091e0();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10702e7bc;
  puStack_38 = &UNK_110848c48;
  uStack_30 = param_1;
  uStack_28 = param_3;
  func_0x00010be71ea0(param_1,param_2,&puStack_50);
  return;
}



/* Entry: 10702e7bc; end: 10702e7d3;  */

void FUN_10702e7bc(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x28) != *(long *)(param_1 + 0x28)) {
    *(long *)(*(long *)(param_1 + 0x20) + 0x28) = *(long *)(param_1 + 0x28);
  }
  return;
}



/* Entry: 10702e7d4; end: 10702e807; -[SCManagedVideoStreamer setVideoOrientation:] */

void FUN_10702e7d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x170) = param_3;
  func_0x00010c221b40(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010c29a770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_videoOrientationChanged__112684400,param_3);
  return;
}



/* Entry: 10702e808; end: 10702e80f; -[SCManagedVideoStreamer setViewportOrientation:] */

void FUN_10702e808(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 400) = param_3;
  return;
}



/* Entry: 10702e810; end: 10702e863; -[SCManagedVideoStreamer setKeepLateFramesEnabled:] */

void FUN_10702e810(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10702e864;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010be71ea0(param_1,param_2,&puStack_40);
  return;
}



/* Entry: 10702e864; end: 10702e907;  */

void FUN_10702e864(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x80) != *(char *)(param_1 + 0x28)) {
    *(char *)(*(long *)(param_1 + 0x20) + 0x80) = *(char *)(param_1 + 0x28);
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010c149520();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x20);
    _objc_release();
    if (lVar1 == lVar3) {
      lVar3 = *(long *)(param_1 + 0x20);
      uVar2 = *(undefined8 *)(lVar3 + 0x18);
      lVar1 = lVar3;
      func_0x00010be987a0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f5320(uVar2,param_2,lVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 10702e908; end: 10702e90f; -[SCManagedVideoStreamer setZoomFactor:] */

void FUN_10702e908(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x98) = param_1;
  return;
}



/* Entry: 10702e910; end: 10702e95f; -[SCManagedVideoStreamer activateTorch] */

void FUN_10702e910(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10702e960;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010be71ea0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10702e960; end: 10702e96f;  */

void FUN_10702e960(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xa1) = 1;
  return;
}



/* Entry: 10702e970; end: 10702e9bf; -[SCManagedVideoStreamer commitConfiguration] */

void FUN_10702e970(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10702e9c0;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010be71ea0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10702e9c0; end: 10702e9cb;  */

void FUN_10702e9c0(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x20) = 0;
  return;
}



/* Entry: 10702e9cc; end: 10702e9d3; -[SCManagedVideoStreamer removeObserver:] */

void FUN_10702e9cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2564b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_stopObservingManagedVideoDataSou_112673350);
  return;
}



/* Entry: 10702e9d4; end: 10702e9db; -[SCManagedVideoStreamer shouldRecreateWhenSessionChange] */

undefined8 FUN_10702e9d4(void)

{
  return 0;
}



/* Entry: 10702e9dc; end: 10702ea03; -[SCManagedVideoStreamer fieldOfViewObservable] */

void FUN_10702e9dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10702ea04; end: 10702ea2b; -[SCManagedVideoStreamer bufferDimensionObservable] */

void FUN_10702ea04(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10702ea2c; end: 10702ea33; -[SCManagedVideoStreamer frameAspectRatio] */

undefined8 FUN_10702ea2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 10702ea34; end: 10702eacb; -[SCManagedVideoStreamer currentCVPixelBufferRef] */

undefined8 FUN_10702ea34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0xd0) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    puVar1 = PTR_PTR_1126cd5b8;
    func_0x00010bf747c0(PTR_PTR_1126cd5b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2,param_2,puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _os_unfair_lock_lock(param_1 + 0xd8);
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  _CVPixelBufferRetain(uVar2);
  _os_unfair_lock_unlock(param_1 + 0xd8);
  return uVar2;
}



/* Entry: 10702eacc; end: 10702eadb; -[SCManagedVideoStreamer preferredFrameTransformForReverseCamera] */

void FUN_10702eacc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(long *)(param_1 + 400) - 1;
  if (uVar2 < 3) {
    lVar3 = *(long *)(&UNK_10dfb2ab0 + uVar2 * 8);
  }
  else {
    lVar3 = 0;
  }
  uVar2 = *(long *)(param_1 + 0x170) - 2;
  if (uVar2 < 3) {
    lVar4 = *(long *)(&UNK_10dfb2a60 + uVar2 * 8);
  }
  else {
    lVar4 = 0;
  }
  uVar2 = lVar4 + lVar3;
  uVar1 = uVar2 + 0x168;
  if ((long)uVar2 < 0 == SCARRY8(lVar4,lVar3)) {
    uVar1 = uVar2;
  }
  if (0x10d < uVar1) {
    uVar1 = 0x10e;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbaaa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGAffineTransformMakeRotation_110347020)((double)uVar1 * 0.017453292519943295);
  return;
}



/* Entry: 10702eadc; end: 10702eb97; -[SCManagedVideoStreamer _saveSecondaryCameraBuffer:] */

void FUN_10702eadc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _os_unfair_lock_lock(param_1 + 0xd8);
  if (*(long *)(param_1 + 0xd0) != 0) {
    _CVPixelBufferRelease();
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (param_3 != 0) {
    if (*(long *)(param_1 + 0xe0) == 0) {
      uVar1 = 0;
      _CMMemoryPoolCreate();
      *(undefined8 *)(param_1 + 0xe0) = uVar1;
    }
    _CMSampleBufferGetImageBuffer();
    func_0x0001090461f4();
    *(long *)(param_1 + 0xd0) = param_3;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2 = PTR_PTR_1126cd5b8;
    func_0x00010bf78180(PTR_PTR_1126cd5b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0xd8);
  return;
}



/* Entry: 10702eb98; end: 10702ebc3;  */

void FUN_10702eb98(long param_1,undefined8 param_2)

{
  func_0x00010bdfea80(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFRelease_11034a768)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10702ebc4; end: 10702eceb; -[SCManagedVideoStreamer didDropSampleBuffer:] */

void FUN_10702ebc4(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_68 [24];
  
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    _CACurrentMediaTime();
    _CMSampleBufferGetPresentationTimeStamp(auStack_68,param_3);
    _CMTimeGetSeconds(auStack_68);
    _CMGetAttachment(param_3,*(undefined8 *)
                              PTR__kCMSampleBufferAttachmentKey_DroppedFrameReason_1103485e8,0);
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if (param_3 != (undefined **)0x0) {
      ppuVar1 = param_3;
    }
    _objc_retain(ppuVar1);
    _objc_retain(ppuVar1);
    func_0x00010be71ea0(param_1);
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c29b540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c149560();
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010bf75600(*(undefined8 *)(param_1 + 0x58));
    _objc_release(ppuVar1);
    _objc_release(ppuVar1);
  }
  return;
}


