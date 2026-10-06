/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10702ecec; end: 10702ed3f;  */

void FUN_10702ecec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  puVar1 = PTR_PTR_1126d4208;
  func_0x00010bf75640(*(undefined8 *)(param_1 + 0x30),PTR_PTR_1126d4208,param_2,
                      *(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10702ed40; end: 10702ed97; -[SCManagedVideoStreamer didDisplayFrameForController:] */

void FUN_10702ed40(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10702ed98;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x158),param_2,&puStack_38);
  return;
}



/* Entry: 10702ed98; end: 10702ed9f;  */

void FUN_10702ed98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be718b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__performCompletionHandlersForWai_112579fc8);
  return;
}



/* Entry: 10702eda0; end: 10702edf7;  */

void FUN_10702eda0(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be43920(uVar4,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010bdfeaa0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x30),uVar4)
  ;
  _CFRelease(*(undefined8 *)(param_1 + 0x30));
  piVar1 = (int *)(*(long *)(param_1 + 0x20) + 0x90);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 10702edf8; end: 10702edff; -[SCManagedVideoStreamer captureOutput:didDropSampleBuffer:fromConnection:] */

void FUN_10702edf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf75630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didDropSampleBuffer__1125baf30,param_4);
  return;
}



/* Entry: 10702ee00; end: 10702ee37; -[SCManagedVideoStreamer session:cameraDidChangeTrackingState:] */

void FUN_10702ee00(void)

{
  undefined8 in_x3;
  
  _objc_retain(in_x3);
  func_0x00010c279040(in_x3);
  func_0x00010c279060(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x3);
  return;
}



/* Entry: 10702ee38; end: 10702ef23; -[SCManagedVideoStreamer session:didUpdateFrame:] */

void FUN_10702ee38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10702ef24; end: 10702f143;  */

void FUN_10702ef24(double param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (uVar1 == 0) goto LAB_10702f120;
  lVar2 = *(long *)(param_2 + 0x20);
  func_0x00010bf316c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0(*(undefined8 *)(param_2 + 0x20));
  dVar9 = param_1 - *(double *)(uVar1 + 0x60);
  if (lVar2 == 0) {
    if (0.03225806451612903 <= dVar9) goto LAB_10702efe0;
  }
  else {
    func_0x00010c2709c0(*(undefined8 *)(param_2 + 0x20));
    if ((0.03225806451612903 <= dVar9) ||
       (param_1 = param_1 - *(double *)(uVar1 + 0x68), 0.03225806451612903 <= param_1)) {
      lVar3 = lVar2;
      _objc_retainAutorelease();
      func_0x00010bf6dce0();
      if (lVar3 != 0) {
        func_0x00010c1b7b20(uVar1);
        func_0x00010c2709c0(*(undefined8 *)(param_2 + 0x20));
        *(double *)(uVar1 + 0x68) = param_1;
      }
LAB_10702efe0:
      uVar4 = uVar1;
      func_0x00010c29f1a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010bf5ec20();
      _objc_retainAutoreleasedReturnValue();
      if ((uVar5 == 0) || (uVar6 = uVar1, func_0x00010c22e780(), (uVar6 & 1) != 0)) {
        _objc_release(uVar5);
LAB_10702f030:
        uVar7 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010bf31700(uVar7);
        _CVPixelBufferLockBaseAddress();
        func_0x00010c2709c0(*(undefined8 *)(param_2 + 0x20));
        _CMTimeMakeWithSeconds(&uStack_68,1000000);
        uStack_a8 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
        uStack_b0 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
        uStack_a0 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
        uStack_90 = uStack_60;
        uStack_98 = uStack_68;
        uStack_88 = uStack_58;
        uVar8 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
        uStack_80 = uStack_b0;
        uStack_78 = uStack_a8;
        uStack_70 = uStack_a0;
        _CMVideoFormatDescriptionCreateForImageBuffer(uVar8,uVar7,&uStack_b8);
        _CMSampleBufferCreateForImageBuffer(uVar8,uVar7,1,0,0,uStack_b8,&uStack_b0,&uStack_c0);
        _CFRelease(uStack_b8);
        _CVPixelBufferUnlockBaseAddress(uVar7,0);
        func_0x00010c187380(uVar1);
        func_0x00010bdfeaa0(uVar1);
        func_0x00010bed8100(uVar1);
        _CFRelease(uStack_c0);
      }
      else {
        _objc_release(uVar5);
        if (uVar4 != 0) goto LAB_10702f030;
      }
      _objc_release(uVar4);
    }
  }
  _objc_release(lVar2);
LAB_10702f120:
  _objc_release(uVar1);
  return;
}



/* Entry: 10702f144; end: 10702f1d3; -[SCManagedVideoStreamer session:didAddAnchors:] */

void FUN_10702f144(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10702f1d4;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 10702f1d4; end: 10702f1df;  */

void FUN_10702f1d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe8),PTR_s_next__112614028,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10702f1e0; end: 10702f26f; -[SCManagedVideoStreamer session:didUpdateAnchors:] */

void FUN_10702f1e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10702f270;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 10702f270; end: 10702f27b;  */

void FUN_10702f270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf0),PTR_s_next__112614028,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10702f27c; end: 10702f30b; -[SCManagedVideoStreamer session:didRemoveAnchors:] */

void FUN_10702f27c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10702f30c;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 10702f30c; end: 10702f317;  */

void FUN_10702f30c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf8),PTR_s_next__112614028,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10702f318; end: 10702f417; -[SCManagedVideoStreamer session:didFailWithError:] */

void FUN_10702f318(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10702f418; end: 10702f4fb;  */

void FUN_10702f418(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 8;
    _objc_loadWeakRetained();
    _objc_release();
    puVar7 = PTR__OBJC_CLASS___ARConfiguration_1126b7048;
    if (lVar2 != 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      lVar2 = lVar1 + 8;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf70d80();
      uVar5 = lVar1 + 8;
      _objc_loadWeakRetained(uVar5);
      uVar6 = uVar5;
      func_0x00010c278fc0();
      func_0x00010c14c900(puVar7,param_2,lVar4,uVar6 & 0xffffffffff);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c142b40(uVar8,param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(uVar5);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10702f4fc; end: 10702f50f; -[SCManagedVideoStreamer sessionWasInterrupted:] */

void FUN_10702f4fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f7fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x158),PTR_s_perform__11261ba10,
             &PTR___NSConcreteGlobalBlock_110988e30);
  return;
}



/* Entry: 10702f510; end: 10702f523; -[SCManagedVideoStreamer sessionInterruptionEnded:] */

void FUN_10702f510(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f7fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x158),PTR_s_perform__11261ba10,
             &PTR___NSConcreteGlobalBlock_110988e50);
  return;
}



/* Entry: 10702f524; end: 10702f657; -[SCManagedVideoStreamer _updateFieldOfViewWithARFrame:] */

void FUN_10702f524(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  float fVar5;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010bf28e60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe8980();
    dVar4 = param_1;
    _objc_release(lVar1);
    fVar5 = SUB84(dVar4,0);
    lVar1 = param_4;
    func_0x00010bf28e60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069a20();
    _objc_release(lVar1);
    param_1 = param_1 / (double)(fVar5 + fVar5);
    _atan();
    dVar4 = ((param_1 + param_1) * 180.0) / 3.141592653589793;
    fVar5 = (float)dVar4;
    func_0x00010bfac7a0(param_2);
    if (1.0 < ABS(SUB84(dVar4,0) - fVar5)) {
      func_0x00010c19b900(fVar5,param_2);
      uVar3 = *(undefined8 *)(param_2 + 0xa8);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df740(fVar5,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar3,param_3,puVar2);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10702f658; end: 10702f65b; -[SCManagedVideoStreamer invalidate] */

void FUN_10702f658(void)

{
  return;
}



/* Entry: 10702f65c; end: 10702f6eb; -[SCManagedVideoStreamer _performWithTrace:] */

void FUN_10702f65c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x158);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_10702f6ec;
    puStack_38 = &UNK_110860cf8;
    uStack_28 = 0;
    _objc_retain(param_3);
    lStack_30 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_50);
    _objc_release(lStack_30);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10702f6ec; end: 10702f6f7;  */

void FUN_10702f6ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010702f6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10702f6f8; end: 10702f6ff; -[SCManagedVideoStreamer performer] */

undefined8 FUN_10702f6f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x158);
}



/* Entry: 10702f700; end: 10702f70b; -[SCManagedVideoStreamer currentFrame] */

void FUN_10702f700(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x160,1);
  return;
}



/* Entry: 10702f70c; end: 10702f713; -[SCManagedVideoStreamer fieldOfView] */

undefined4 FUN_10702f70c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x154);
}



/* Entry: 10702f714; end: 10702f71b; -[SCManagedVideoStreamer setFieldOfView:] */

void FUN_10702f714(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x154) = param_1;
  return;
}



/* Entry: 10702f71c; end: 10702f727; -[SCManagedVideoStreamer lastDepthData] */

void FUN_10702f71c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x168,1);
  return;
}



/* Entry: 10702f728; end: 10702f72f; -[SCManagedVideoStreamer videoOrientation] */

undefined8 FUN_10702f728(long param_1)

{
  return *(undefined8 *)(param_1 + 0x170);
}



/* Entry: 10702f730; end: 10702f737; -[SCManagedVideoStreamer processingPipeline] */

undefined8 FUN_10702f730(long param_1)

{
  return *(undefined8 *)(param_1 + 0x178);
}



/* Entry: 10702f738; end: 10702f73f; -[SCManagedVideoStreamer sampleBufferDisplayController] */

undefined8 FUN_10702f738(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10702f740; end: 10702f747; -[SCManagedVideoStreamer setShouldCacheCurrentFrame:] */

void FUN_10702f740(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x151) = param_3;
  return;
}



/* Entry: 10702f748; end: 10702f74f; -[SCManagedVideoStreamer didAddAnchorsObservable] */

undefined8 FUN_10702f748(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 10702f750; end: 10702f757; -[SCManagedVideoStreamer didUpdateAnchorsObservable] */

undefined8 FUN_10702f750(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 10702f758; end: 10702f75f; -[SCManagedVideoStreamer didRemoveAnchorsObservable] */

undefined8 FUN_10702f758(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 10702f760; end: 10702f767; -[SCManagedVideoStreamer resourceId] */

undefined8 FUN_10702f760(long param_1)

{
  return *(undefined8 *)(param_1 + 0x180);
}



/* Entry: 10702f768; end: 10702f76f; -[SCManagedVideoStreamer viewportOrientation] */

undefined8 FUN_10702f768(long param_1)

{
  return *(undefined8 *)(param_1 + 400);
}



/* Entry: 10702f770; end: 10702f8a3; -[SCManagedVideoStreamer .cxx_destruct] */

void FUN_10702f770(long param_1)

{
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10702f8a4; end: 10702f8e7; -[SCCameraFrameProxyObserver dealloc] */

void FUN_10702f8a4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c256480();
  puStack_28 = PTR_PTR_1126f84f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10702f8e8; end: 10702f913; -[SCCameraFrameProxyObserver stopObservingManagedVideoDataSourceOutputEvent] */

void FUN_10702f8e8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10702f914; end: 10702f91f; -[SCCameraFrameProxyObserver setObserver:] */

void FUN_10702f914(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10702f920; end: 10702f9b7; -[SCCameraFrameProxyObserver .cxx_destruct] */

void FUN_10702f920(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10702f9b8; end: 10702fa93; -[SCCameraFrameObservableDecorator stopObservingManagedVideoDataSourceOutputEvent:] */

void FUN_10702f9b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x40);
  lVar1 = *(long *)(param_1 + 0x38);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10702fa94;
  puStack_40 = &UNK_110988e70;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010bfb2040(lVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x38),param_2,lVar1);
  }
  _objc_release(lVar1);
  _objc_release(uStack_38);
  _os_unfair_lock_unlock(param_1 + 0x40);
  func_0x00010c256480(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10702fa94; end: 10702fad3;  */

bool FUN_10702fa94(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c0e1300(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_release();
  return param_2 == lVar1;
}



/* Entry: 10702fad4; end: 10702fb3b; -[SCCameraFrameObservableDecorator .cxx_destruct] */

void FUN_10702fad4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10702fb3c; end: 10702fbaf; -[SCMetalModule initWithMetalRenderCommand:] */

undefined1 * FUN_10702fb3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8500;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10702fbb0; end: 10702feeb; -[SCMetalModule render:] */

undefined8 FUN_10702fbb0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar9 = *param_3;
  lVar1 = param_1;
  func_0x00010bf45940();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar2 = param_1, func_0x00010c26ce80(), lVar2 != 0)) {
    lVar2 = param_1;
    func_0x00010bf41d60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126d4218;
      _objc_alloc();
      lVar4 = param_1;
      func_0x00010bf6fd20(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03e0c0();
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010bf41ae0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bf92fe0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26d400();
      func_0x00010c0c3060();
      puVar6 = puVar3;
      func_0x00010c247ee0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a5040();
      puVar7 = puVar3;
      func_0x00010c247ee0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe0640();
      _objc_release(puVar7);
      _objc_release(puVar6);
      func_0x00010bf85260(uVar5);
      func_0x00010bf94840(uVar5);
      func_0x00010bf42760(lVar4);
      func_0x00010c2a14a0(lVar4);
      uVar8 = *param_3;
      _CMSampleBufferGetImageBuffer();
      puVar6 = puVar3;
      func_0x00010bf6eea0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _CVPixelBufferLockBaseAddress(uVar8,1);
      _CVPixelBufferGetBaseAddressOfPlane(uVar8,0);
      _CVPixelBufferGetBytesPerRowOfPlane(uVar8,0);
      _CVPixelBufferGetWidthOfPlane(uVar8,0);
      _CVPixelBufferGetHeightOfPlane(uVar8,0);
      func_0x00010bfc3300(puVar6);
      _CVPixelBufferUnlockBaseAddress(uVar8,1);
      _objc_release(puVar6);
      puVar6 = puVar3;
      func_0x00010bf6ee60(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _CVPixelBufferLockBaseAddress(uVar8,1);
      _CVPixelBufferGetBaseAddressOfPlane(uVar8,1);
      _CVPixelBufferGetBytesPerRowOfPlane(uVar8,1);
      _CVPixelBufferGetWidthOfPlane(uVar8,1);
      _CVPixelBufferGetHeightOfPlane(uVar8,1);
      func_0x00010bfc3300(puVar6);
      _CVPixelBufferUnlockBaseAddress(uVar8,1);
      _objc_release(puVar6);
      _objc_release(uVar5);
      _objc_release(lVar4);
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return uVar9;
}



/* Entry: 10702feec; end: 10702ff13; -[SCMetalModule processImage:metadata:] */

void FUN_10702feec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10702ff14; end: 10702fff7; -[SCMetalModule library] */

void FUN_10702ff14(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0f5960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    lVar5 = param_1;
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010c0d8ba0();
    _objc_retain(0);
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar5);
    _objc_release(0);
    _objc_release(puVar2);
    lVar5 = *(long *)(param_1 + 8);
  }
  _objc_retain(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10702fff8; end: 10702fffb; -[SCMetalModule device] */

void FUN_10702fff8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5f490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b2930,PTR_s_currentMetalDevice_1125b56c8);
  return;
}



/* Entry: 10702fffc; end: 107030067; -[SCMetalModule function] */

void FUN_10702fffc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c098b00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfbc000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0d8900(lVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107030068; end: 10703011f; -[SCMetalModule computePipelineState] */

void FUN_107030068(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_48;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 == 0) {
    lVar5 = param_1;
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bfbbf80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uStack_48 = 0;
    lVar3 = lVar5;
    func_0x00010c0d87c0(lVar5,param_2,lVar2,&uStack_48);
    uVar1 = uStack_48;
    _objc_retain(uStack_48);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_release(lVar5);
    _objc_release(uVar1);
    lVar5 = *(long *)(param_1 + 0x18);
  }
  _objc_retain(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 107030120; end: 10703017f; -[SCMetalModule commandQueue] */

void FUN_107030120(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    lVar3 = param_1;
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c0d8720();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar1;
    _objc_release(uVar2);
    _objc_release(lVar3);
    lVar3 = *(long *)(param_1 + 0x20);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107030180; end: 1070301f3; -[SCMetalModule textureCache] */

long FUN_107030180(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    lVar1 = param_1;
    func_0x00010bf6fd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    _CVMetalTextureCacheCreate(uVar2,0,lVar1,0,(long *)(param_1 + 0x28));
    _objc_release(lVar1);
    lVar1 = *(long *)(param_1 + 0x28);
  }
  return lVar1;
}



/* Entry: 1070301f4; end: 1070301fb; -[SCMetalModule metalRenderCommand] */

undefined8 FUN_1070301f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1070301fc; end: 10703024f; -[SCMetalModule .cxx_destruct] */

void FUN_1070301fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107030250; end: 1070302f7; -[SCMetalTextureResource initWithRenderData:textureCache:device:] */

undefined1 *
FUN_107030250(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f8508;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *param_3;
    _CMSampleBufferGetImageBuffer();
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    uVar5 = param_3[3];
    uVar4 = param_3[2];
    uVar3 = param_3[5];
    uVar2 = param_3[4];
    uVar6 = *param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_3[1];
    *(undefined8 *)((long)puVar1 + 8) = uVar6;
    *(undefined8 *)((long)puVar1 + 0x20) = uVar5;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    *(undefined8 *)((long)puVar1 + 0x30) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    *(undefined8 *)((long)puVar1 + 0x80) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1070302f8; end: 1070303af; -[SCMetalTextureResource _getSourceYTextureRef] */

long FUN_1070302f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 == 0) {
    _CVPixelBufferLockBaseAddress(*(undefined8 *)(param_1 + 0x38),1);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar6 = *(undefined8 *)(param_1 + 0x80);
    uVar2 = uVar5;
    _CVPixelBufferGetWidthOfPlane(uVar5,0);
    uVar3 = uVar5;
    _CVPixelBufferGetHeightOfPlane(uVar5,0);
    uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    _CVMetalTextureCacheCreateTextureFromImage(uVar4,uVar6,uVar5,0,10,uVar2,uVar3,0,&uStack_38);
    if ((int)uVar4 != 0) {
      uStack_38 = 0;
    }
    *(undefined8 *)(param_1 + 0x48) = uStack_38;
    _CVPixelBufferUnlockBaseAddress(*(undefined8 *)(param_1 + 0x38),1);
    lVar1 = *(long *)(param_1 + 0x48);
  }
  return lVar1;
}



/* Entry: 1070303b0; end: 1070303c3; -[SCMetalTextureResource sourceYTexture] */

void FUN_1070303b0(void)

{
  func_0x00010be22d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbbe4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CVMetalTextureGetTexture_11034a1b8)();
  return;
}



/* Entry: 1070303c4; end: 10703047b; -[SCMetalTextureResource _getSourceUVTextureRef] */

long FUN_1070303c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x50);
  if (lVar1 == 0) {
    _CVPixelBufferLockBaseAddress(*(undefined8 *)(param_1 + 0x38),1);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar6 = *(undefined8 *)(param_1 + 0x80);
    uVar2 = uVar5;
    _CVPixelBufferGetWidthOfPlane(uVar5,1);
    uVar3 = uVar5;
    _CVPixelBufferGetHeightOfPlane(uVar5,1);
    uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    _CVMetalTextureCacheCreateTextureFromImage(uVar4,uVar6,uVar5,0,0x1e,uVar2,uVar3,1,&uStack_38);
    if ((int)uVar4 != 0) {
      uStack_38 = 0;
    }
    *(undefined8 *)(param_1 + 0x50) = uStack_38;
    _CVPixelBufferUnlockBaseAddress(*(undefined8 *)(param_1 + 0x38),1);
    lVar1 = *(long *)(param_1 + 0x50);
  }
  return lVar1;
}



/* Entry: 10703047c; end: 10703048f; -[SCMetalTextureResource sourceUVTexture] */

void FUN_10703047c(void)

{
  func_0x00010be22d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbbe4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CVMetalTextureGetTexture_11034a1b8)();
  return;
}



/* Entry: 107030490; end: 107030547; -[SCMetalTextureResource destinationYTexture] */

void FUN_107030490(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___MTLTextureDescriptor_1126d4220;
  lVar4 = *(long *)(param_1 + 0x68);
  if (lVar4 == 0) {
    _CVPixelBufferGetWidthOfPlane(*(undefined8 *)(param_1 + 0x38),0);
    _CVPixelBufferGetHeightOfPlane(*(undefined8 *)(param_1 + 0x38),0);
    func_0x00010c26ce40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28fc60();
    func_0x00010c21d540(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c0d91c0();
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    _objc_release(uVar3);
    _objc_release(puVar1);
    lVar4 = *(long *)(param_1 + 0x68);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107030548; end: 1070305ff; -[SCMetalTextureResource destinationUVTexture] */

void FUN_107030548(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___MTLTextureDescriptor_1126d4220;
  lVar4 = *(long *)(param_1 + 0x70);
  if (lVar4 == 0) {
    _CVPixelBufferGetWidthOfPlane(*(undefined8 *)(param_1 + 0x38),1);
    _CVPixelBufferGetHeightOfPlane(*(undefined8 *)(param_1 + 0x38),1);
    func_0x00010c26ce40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28fc60();
    func_0x00010c21d540(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c0d91c0();
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = uVar2;
    _objc_release(uVar3);
    _objc_release(puVar1);
    lVar4 = *(long *)(param_1 + 0x70);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107030600; end: 10703063f; -[SCMetalTextureResource sampleBufferMetadata] */

undefined1  [16] FUN_107030600(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_18 = 0;
  uStack_20 = 0x3d072b0200000000;
  func_0x000100709e4c(*(undefined8 *)(param_1 + 8),&uStack_20);
  auVar1._8_4_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  auVar1._12_4_ = 0;
  return auVar1;
}



/* Entry: 107030640; end: 107030747; -[SCMetalTextureResource renderingContext] */

void FUN_107030640(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long lVar6;
  long lStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar3 = PTR__OBJC_CLASS___CIContext_1126b3120;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 0x40);
  if (lVar6 == 0) {
    uStack_48 = *(undefined8 *)PTR__kCIContextWorkingFormat_11034ad30;
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                        *(undefined4 *)PTR__kCIFormatRGBAh_11034ad50);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_40 = puVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4f640();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_release(puVar1);
    lVar6 = *(long *)(param_1 + 0x40);
    unaff_x19 = param_1;
  }
  lVar4 = lVar6;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_107030748;
  lStack_70 = lVar6;
  lStack_68 = unaff_x19;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010bf3a200();
  puStack_78 = PTR_PTR_1126f8508;
  lStack_80 = lVar4;
  _objc_msgSendSuper2(&lStack_80,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107030748; end: 10703078b; -[SCMetalTextureResource dealloc] */

void FUN_107030748(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf3a200();
  puStack_28 = PTR_PTR_1126f8508;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10703078c; end: 1070307bf; -[SCMetalTextureResource cleanup] */

void FUN_10703078c(long param_1)

{
  _CVBufferRelease(*(undefined8 *)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x48) = 0;
  _CVBufferRelease(*(undefined8 *)(param_1 + 0x50));
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 1070307c0; end: 1070307c7; -[SCMetalTextureResource device] */

undefined8 FUN_1070307c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1070307c8; end: 1070307cf; -[SCMetalTextureResource textureCache] */

undefined8 FUN_1070307c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1070307d0; end: 10703082f; -[SCMetalTextureResource .cxx_destruct] */

void FUN_1070307d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x40,0);
  return;
}



/* Entry: 107030830; end: 1070309db; -[SCNightModeEnhancementMetalRenderCommand encodeMetalCommand:pipelineState:textureResource:] */

void FUN_107030830(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf45840(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1806a0();
  _objc_release(param_4);
  puVar1 = param_5;
  func_0x00010c1495a0();
  puVar2 = param_5;
  func_0x00010c1495a0();
  func_0x00010c1495a0(param_5);
  puVar3 = param_5;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0d85c0();
  _objc_release(puVar3);
  puVar3 = puVar4;
  _objc_retainAutorelease();
  func_0x00010bf4df40();
  *puVar3 = (int)puVar1;
  puVar3[1] = (int)((ulong)puVar2 >> 0x20);
  puVar3[2] = param_2;
  puVar1 = param_5;
  func_0x00010c247ee0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213a00(param_3);
  _objc_release(puVar1);
  puVar1 = param_5;
  func_0x00010c247da0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213a00(param_3);
  _objc_release(puVar1);
  puVar1 = param_5;
  func_0x00010bf6eea0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213a00(param_3);
  _objc_release(puVar1);
  puVar1 = param_5;
  func_0x00010bf6ee60(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c213a00(param_3);
  _objc_release(puVar1);
  func_0x00010c1741a0(param_3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1070309dc; end: 1070309e7; -[SCNightModeEnhancementMetalRenderCommand functionName] */

undefined ** FUN_1070309dc(void)

{
  return &PTR____CFConstantStringClassReference_110e98e18;
}



/* Entry: 1070309e8; end: 107030a47; -[SCNightModeGammaCorrectionMetalRenderCommand initWithBoostStrength:midTone:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070309e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8510;
  uStack_30 = param_3;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112762ee4) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112762ee8) = param_2;
  }
  return;
}



/* Entry: 107030a48; end: 107030c77; -[SCNightModeGammaCorrectionMetalRenderCommand encodeMetalCommand:pipelineState:textureResource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107030a48(long param_1,float param_2,undefined8 param_3,undefined8 param_4,float *param_5)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf45840(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1806a0();
  _objc_release(param_4);
  func_0x00010c1495a0(param_5);
  dVar6 = *(double *)(param_1 + _DAT_112762eec) * 0.7 + (double)param_2 * 0.3;
  *(double *)(param_1 + _DAT_112762eec) = dVar6;
  dVar8 = *(double *)(param_1 + _DAT_112762ee4);
  dVar7 = *(double *)(param_1 + _DAT_112762ee8);
  pfVar1 = param_5;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  pfVar2 = pfVar1;
  func_0x00010c0d85c0();
  _objc_release(pfVar1);
  if (pfVar2 == (float *)0x0) {
    uVar3 = 0;
  }
  else {
    fVar4 = (float)NEON_fminnm((float)(dVar6 * dVar8 * -0.1 + 1.0),0x3fa66666);
    if (fVar4 <= 1.0) {
      fVar4 = 1.0;
    }
    _logf();
    fVar5 = (float)dVar7;
    _logf();
    pfVar1 = pfVar2;
    _objc_retainAutorelease();
    func_0x00010bf4df40();
    *pfVar1 = fVar4 / fVar5;
    pfVar1 = param_5;
    func_0x00010c247ee0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213a00(param_3);
    _objc_release(pfVar1);
    pfVar1 = param_5;
    func_0x00010c247da0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213a00(param_3);
    _objc_release(pfVar1);
    pfVar1 = param_5;
    func_0x00010bf6eea0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213a00(param_3);
    _objc_release(pfVar1);
    pfVar1 = param_5;
    func_0x00010bf6ee60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213a00(param_3);
    _objc_release(pfVar1);
    func_0x00010c1741a0(param_3);
    _objc_retain(param_3);
    uVar3 = param_3;
  }
  _objc_release(pfVar2);
  _objc_release(param_3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107030c78; end: 107030c83; -[SCNightModeGammaCorrectionMetalRenderCommand functionName] */

undefined ** FUN_107030c78(void)

{
  return &PTR____CFConstantStringClassReference_110e98e38;
}



/* Entry: 107030c84; end: 107030e67; +[SCProcessingModuleUtils pixelBufferFromImage:bufferPool:context:] */

undefined8 ****
FUN_107030c84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 ****param_8,
             undefined8 param_9)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  undefined8 uVar7;
  undefined8 ****ppppuVar8;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 ***pppuStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 ***pppuStack_98;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar6 = param_8;
  _objc_retain(param_7);
  pppuStack_90 = param_8;
  _objc_retain(param_9);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_8 == (undefined8 ****)0x0) {
    uStack_88 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
    uStack_80 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
    puStack_68 = PTR____NSDictionary0__struct_11034ab58;
    ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9c70;
    uStack_78 = *(undefined8 *)PTR__kCVPixelBufferWidthKey_11034a3d0;
    func_0x00010bf9de20(param_7);
    func_0x00010c0df720(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uStack_70 = *(undefined8 *)PTR__kCVPixelBufferHeightKey_11034a388;
    puStack_58 = puVar2;
    func_0x00010bf9de20(param_7);
    func_0x00010c0df720(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    ppppuVar6 = &pppuStack_90;
    uVar5 = uVar7;
    _CVPixelBufferPoolCreate(uVar7,0,puVar4,ppppuVar6);
    _objc_release(puVar4);
    param_8 = (undefined8 ****)pppuStack_90;
    ppppuVar8 = (undefined8 ****)0x0;
    if ((int)uVar5 != 0) goto LAB_107030e18;
  }
  else {
    uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  }
  pppuStack_98 = (undefined8 ****)0x0;
  uVar5 = uVar7;
  _CVPixelBufferPoolCreatePixelBuffer(uVar7,param_8,&pppuStack_98);
  ppppuVar8 = (undefined8 ****)pppuStack_98;
  if ((int)uVar5 == 0) {
    ppppuVar6 = (undefined8 ****)pppuStack_98;
    func_0x00010c12f5e0(param_9);
    ppppuVar8 = (undefined8 ****)pppuStack_98;
  }
LAB_107030e18:
  _objc_release(param_9);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_a8 = FUN_107030e68;
    puVar2 = PTR_PTR_1126d4228;
    pppuStack_d0 = ppppuVar8;
    uStack_c8 = uVar7;
    uStack_c0 = param_9;
    uStack_b8 = param_7;
    puStack_b0 = &stack0xfffffffffffffff0;
    func_0x00010c0fc9a0();
    pppuStack_d8 = ppppuVar6;
    if (puVar2 != (undefined *)0x0) {
      pppuStack_d8 = (undefined8 ****)0x0;
      uStack_f8 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 0x28);
      uStack_100 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 0x20);
      uStack_e8 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 0x38);
      uStack_f0 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 0x30);
      uStack_e0 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 0x40);
      uStack_118 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 8);
      uStack_120 = *(undefined8 *)PTR__kCMTimingInfoInvalid_110348688;
      uStack_108 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 0x18);
      uStack_110 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 0x10);
      _CMSampleBufferGetSampleTimingInfo(ppppuVar6,0,&uStack_120);
      uStack_128 = 0;
      iVar1 = 0;
      _CMVideoFormatDescriptionCreateForImageBuffer(0,puVar2,&uStack_128);
      if (iVar1 == 0) {
        uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
        _CMSampleBufferCreateForImageBuffer(uVar5,puVar2,1,0,0,uStack_128,&uStack_120,&pppuStack_d8)
        ;
        _CVPixelBufferRelease(puVar2);
        if ((int)uVar5 != 0) {
          pppuStack_d8 = ppppuVar6;
        }
      }
      else {
        _CVPixelBufferRelease(puVar2);
        pppuStack_d8 = ppppuVar6;
      }
    }
    return (undefined8 ****)pppuStack_d8;
  }
  return ppppuVar8;
}



/* Entry: 107030e68; end: 107030f4f; +[SCProcessingModuleUtils sampleBufferFromImage:oldSampleBuffer:bufferPool:context:] */

undefined8 FUN_107030e68(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 in_x3;
  undefined8 uVar4;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_PTR_1126d4228;
  func_0x00010c0fc9a0();
  uVar4 = in_x3;
  if (puVar2 != (undefined *)0x0) {
    uStack_38 = 0;
    uStack_58 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 0x28);
    uStack_60 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 0x20);
    uStack_48 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 0x38);
    uStack_50 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 0x30);
    uStack_40 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 0x40);
    uStack_78 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 8);
    uStack_80 = *(undefined8 *)PTR__kCMTimingInfoInvalid_110348688;
    uStack_68 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 0x18);
    uStack_70 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 0x10);
    _CMSampleBufferGetSampleTimingInfo(in_x3,0,&uStack_80);
    uStack_88 = 0;
    iVar1 = 0;
    _CMVideoFormatDescriptionCreateForImageBuffer(0,puVar2,&uStack_88);
    if (iVar1 == 0) {
      uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
      _CMSampleBufferCreateForImageBuffer(uVar3,puVar2,1,0,0,uStack_88,&uStack_80,&uStack_38);
      _CVPixelBufferRelease(puVar2);
      uVar4 = uStack_38;
      if ((int)uVar3 != 0) {
        uVar4 = in_x3;
      }
    }
    else {
      _CVPixelBufferRelease(puVar2);
    }
  }
  return uVar4;
}



/* Entry: 107030f50; end: 107031053; +[SCProcessingPipelineCaptureCoreOrder _modulesOrderingDictionary] */

void FUN_107030f50(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c9fb0 != -1) {
    func_0x00010002a2fc(0x1136c9fb0,&PTR___NSConcreteGlobalBlock_110988ea0);
  }
  uVar1 = uRam00000001136c9fa8;
  _objc_retain(uRam00000001136c9fa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107031054; end: 10703118f; +[SCProcessingPipelineCaptureCoreOrder _commandsOrderingDictionary] */

void FUN_107031054(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c9fc0 != -1) {
    func_0x00010002a2fc(0x1136c9fc0,&PTR___NSConcreteGlobalBlock_110988ec0);
  }
  uVar1 = uRam00000001136c9fb8;
  _objc_retain(uRam00000001136c9fb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107031190; end: 10703119f; -[SCProcessingPipelineCaptureCoreOrder sortModules:] */

void FUN_107031190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c246cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_sortedArrayUsingComparator__11266f550,
             &PTR___NSConcreteGlobalBlock_110988ee0);
  return;
}



/* Entry: 1070311a0; end: 107031463;  */

undefined * FUN_1070311a0(undefined8 param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d41f0;
  func_0x00010be61120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  _objc_opt_class(param_2);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d41f0;
  func_0x00010be61120(PTR_PTR_1126d41f0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  _objc_opt_class(param_3);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c0dff20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar5 = puVar3;
  FUN_107031464(puVar3,puVar4);
  puVar1 = PTR_PTR_1126c8250;
  if (puVar5 == (undefined *)0x0) {
    _objc_retain(param_2);
    _objc_opt_class(puVar1);
    uVar6 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar1);
    uVar2 = param_2;
    if ((uVar6 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_2);
    puVar1 = PTR_PTR_1126c8250;
    _objc_retain(param_3);
    _objc_opt_class(puVar1);
    uVar7 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    uVar6 = param_3;
    if ((uVar7 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(param_3);
    if ((uVar2 != 0) && (uVar6 != 0)) {
      puVar1 = PTR_PTR_1126d41f0;
      func_0x00010bde2260();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_2;
      func_0x00010c0cc900(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar1;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126d41f0;
      func_0x00010bde2260(PTR_PTR_1126d41f0);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_3;
      func_0x00010c0cc900(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar1;
      func_0x00010c0dff20(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(puVar1);
      puVar5 = puVar9;
      FUN_107031464(puVar9,puVar10);
      _objc_release(puVar10);
      _objc_release(puVar9);
    }
    _objc_release(uVar6);
    _objc_release(uVar2);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar5;
}



/* Entry: 107031464; end: 107031507;  */

ulong FUN_107031464(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar2 = (ulong)(param_1 != 0 || param_2 != 0);
  if ((param_1 != 0) && (uVar2 = 0xffffffffffffffff, param_2 != 0)) {
    uVar2 = param_1;
    func_0x00010c2827c0();
    uVar1 = param_2;
    func_0x00010c2827c0();
    if (uVar2 < uVar1) {
      uVar2 = 0xffffffffffffffff;
    }
    else {
      uVar2 = param_1;
      func_0x00010c2827c0(param_1);
      uVar1 = param_2;
      func_0x00010c2827c0(param_2);
      uVar2 = (ulong)(uVar1 < uVar2);
    }
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107031508; end: 10703165f; -[SCProcessingPipelineCaptureCoreOrder isModule:equalTo:] */

ulong FUN_107031508(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_opt_class(param_4);
  uVar6 = param_3;
  func_0x00010c077980();
  puVar3 = PTR_PTR_1126c8250;
  if ((int)uVar6 == 0) {
    uVar6 = 0;
  }
  else {
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar1 = param_3;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    puVar3 = PTR_PTR_1126c8250;
    _objc_retain(param_4);
    _objc_opt_class(puVar3);
    uVar6 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar3);
    uVar2 = param_4;
    if ((uVar6 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_4);
    uVar6 = 1;
    if ((uVar1 != 0) && (uVar2 != 0)) {
      uVar4 = param_3;
      func_0x00010c0cc900(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_4;
      func_0x00010c0cc900(param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class();
      uVar6 = uVar4;
      func_0x00010c077980(uVar4);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 107031660; end: 10703175b; -[SCProcessingPipelineImpl addProcessingModule:] */

void FUN_107031660(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10703175c; end: 1070317cf;  */

void FUN_10703175c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be8c940(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    lVar2 = lVar1;
    func_0x00010c115940(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(lVar2);
    func_0x00010c2014c0(lVar1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1070317d0; end: 1070318cb; -[SCProcessingPipelineImpl removeProcessingModule:] */

void FUN_1070317d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1070318cc; end: 107031913;  */

void FUN_1070318cc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be8c940(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    func_0x00010c2014c0(lVar1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107031914; end: 107031a23; -[SCProcessingPipelineImpl render:] */

void FUN_107031914(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long unaff_x22;
  long lVar8;
  long lVar9;
  undefined8 uStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  undefined8 *puStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined1 *puStack_290;
  undefined8 *puStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1a8;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010c12fe60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = &uStack_110;
  puVar7 = auStack_c8;
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x22 = *plStack_100;
    do {
      lVar8 = 0;
      do {
        if (*plStack_100 != unaff_x22) {
          _objc_enumerationMutation(param_1);
        }
        lVar1 = *(long *)(lStack_108 + lVar8 * 8);
        lStack_138 = param_3[1];
        lStack_140 = *param_3;
        lStack_128 = param_3[3];
        lStack_130 = param_3[2];
        lStack_118 = param_3[5];
        lStack_120 = param_3[4];
        func_0x00010c12f580();
        *param_3 = lVar1;
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      puVar5 = &uStack_110;
      puVar7 = auStack_c8;
      lVar2 = param_1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  lVar2 = *param_3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_270;
  pcStack_148 = FUN_107031a24;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  _objc_retain(puVar5);
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  func_0x00010c12fe60();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010bf52a60();
  puVar3 = puVar5;
  if (lVar8 != 0) {
    lVar1 = *plStack_260;
    do {
      lVar9 = 0;
      puVar6 = puVar3;
      do {
        if (*plStack_260 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        puVar3 = *(undefined8 **)(lStack_268 + lVar9 * 8);
        func_0x00010c114bc0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        lVar9 = lVar9 + 1;
        puVar6 = puVar3;
      } while (lVar8 != lVar9);
      lVar8 = lVar2;
      puVar6 = &uStack_270;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar8 != 0);
  }
  _objc_release(lVar2);
  puVar4 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  pcStack_278 = FUN_107031b88;
  lStack_2a0 = unaff_x22;
  lStack_298 = lVar2;
  puStack_290 = puVar7;
  puStack_288 = puVar5;
  ppuStack_280 = &puStack_150;
  _objc_retain(puVar6);
  puVar5 = puVar4;
  func_0x00010c0fc760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar5 == (undefined8 *)0x0) {
    func_0x00010c115940(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360();
  }
  else {
    puStack_2c8 = &uStack_2d0;
    uStack_2d0 = 0;
    uStack_2c0 = 0x3032000000;
    pcStack_2b8 = FUN_107031d00;
    uStack_2b0 = 0x107031d10;
    puStack_2a8 = (undefined8 *)0x0;
    puVar5 = puVar4;
    func_0x00010c115940(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar6);
    func_0x00010bf97e80(puVar5);
    _objc_release(puVar5);
    if (puStack_2c8[5] != 0) {
      func_0x00010c115940(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360();
      _objc_release(puVar4);
    }
    _objc_release(puVar6);
    __Block_object_dispose(&uStack_2d0,8);
    puVar4 = puStack_2a8;
  }
  _objc_release(puVar4);
  _objc_release(puVar6);
  return;
}



/* Entry: 107031a24; end: 107031b87; -[SCProcessingPipelineImpl processImage:metadata:] */

void FUN_107031a24(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 unaff_x22;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar3 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c12fe60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf52a60();
  lVar2 = param_3;
  if (lVar1 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      lVar4 = lVar2;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(param_1);
        }
        lVar2 = *(long *)(lStack_128 + lVar6 * 8);
        func_0x00010c114bc0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        lVar6 = lVar6 + 1;
        lVar4 = lVar2;
      } while (lVar1 != lVar6);
      lVar1 = param_1;
      puVar3 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar1 != 0);
  }
  _objc_release(param_1);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_107031b88;
  uStack_160 = unaff_x22;
  lStack_158 = param_1;
  uStack_150 = param_4;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  lVar2 = lVar1;
  func_0x00010c0fc760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010c115940(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360();
  }
  else {
    puStack_188 = &uStack_190;
    uStack_190 = 0;
    uStack_180 = 0x3032000000;
    pcStack_178 = FUN_107031d00;
    uStack_170 = 0x107031d10;
    lStack_168 = 0;
    lVar2 = lVar1;
    func_0x00010c115940(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar3);
    func_0x00010bf97e80(lVar2);
    _objc_release(lVar2);
    if (puStack_188[5] != 0) {
      func_0x00010c115940(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360();
      _objc_release(lVar1);
    }
    _objc_release(puVar3);
    __Block_object_dispose(&uStack_190,8);
    lVar1 = lStack_168;
  }
  _objc_release(lVar1);
  _objc_release(puVar3);
  return;
}



/* Entry: 107031b88; end: 107031cff; -[SCProcessingPipelineImpl _removeModuleEqualTo:] */

void FUN_107031b88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0fc760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c115940(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360();
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_107031d00;
    uStack_40 = 0x107031d10;
    lStack_38 = 0;
    lVar1 = param_1;
    func_0x00010c115940(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010bf97e80(lVar1);
    _objc_release(lVar1);
    if (puStack_58[5] != 0) {
      func_0x00010c115940(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360();
      _objc_release(param_1);
    }
    _objc_release(param_3);
    __Block_object_dispose(&uStack_60,8);
    param_1 = lStack_38;
  }
  _objc_release(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 107031d00; end: 107031d17;  */

void FUN_107031d00(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107031d18; end: 107031dab;  */

void FUN_107031d18(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0fc760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c077ee0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = param_2;
    _objc_release(uVar2);
    *param_3 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107031dac; end: 107031db3; -[SCProcessingPipelineImpl performer] */

undefined8 FUN_107031dac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107031db4; end: 107031dbb; -[SCProcessingPipelineImpl pipelineOrder] */

undefined8 FUN_107031db4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107031dbc; end: 107031dc3; -[SCProcessingPipelineImpl processingModulesSet] */

undefined8 FUN_107031dbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107031dc4; end: 107031dcb; -[SCProcessingPipelineImpl setShouldUpdateOrderedModules:] */

void FUN_107031dc4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 107031dcc; end: 107031e1f; -[SCProcessingPipelineImpl .cxx_destruct] */

void FUN_107031dcc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107031e20; end: 107031f57;  */

void FUN_107031e20(ulong param_1)

{
  bool bVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  byte abStack_50 [24];
  long lStack_38;
  
  pbVar2 = abStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  abStack_50[8] = 0x90;
  abStack_50[9] = 0x91;
  abStack_50[10] = 0x8b;
  abStack_50[0xb] = 0x9a;
  abStack_50[0xc] = 0x91;
  abStack_50[0xd] = 0x8b;
  abStack_50[0xe] = 0x8c;
  abStack_50[0xf] = 0;
  abStack_50[0] = 0x9b;
  abStack_50[1] = 0x96;
  abStack_50[2] = 0x8c;
  abStack_50[3] = 0x9c;
  abStack_50[4] = 0x9e;
  abStack_50[5] = 0x8d;
  abStack_50[6] = 0x9b;
  abStack_50[7] = 0xbc;
  _strlen();
  if (pbVar2 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    puVar7 = (undefined1 *)0x1;
    do {
      abStack_50[(long)puVar6] = ~abStack_50[(long)puVar6];
      bVar1 = puVar7 < pbVar2;
      puVar6 = puVar7;
      puVar7 = (undefined1 *)(ulong)((int)puVar7 + 1);
    } while (bVar1);
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _NSSelectorFromString();
  _objc_release(puVar3);
  uVar5 = param_1;
  _objc_opt_respondsToSelector(param_1,puVar4);
  if ((uVar5 & 1) != 0) {
    func_0x00010c0cca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSInvocation_1126b71d0;
    func_0x00010c06abc0(PTR__OBJC_CLASS___NSInvocation_1126b71d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2121a0();
    func_0x00010c1fbb60(puVar3);
    func_0x00010c06abe0(puVar3);
    _objc_release(puVar3);
    _objc_release(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bea4110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107031f58; end: 107031f5f; -[SCCameraViewfinderMetalRenderer suspendRenderingForBackground] */

void FUN_107031f58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea4110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setFrameRenderingEnabled__1125869e8,0);
  return;
}



/* Entry: 107031f60; end: 107032013; -[SCCameraViewfinderMetalRenderer setBlurEnabled:] */

void FUN_107031f60(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(byte *)(param_1 + 0x30) != param_3) {
    *(char *)(param_1 + 0x30) = (char)param_3;
    func_0x00010c19f5e0(*(undefined8 *)(param_1 + 0x88),param_2,param_3 ^ 1);
    if ((((param_3 ^ 1) & 1) == 0) && (*(long *)(param_1 + 0x38) == 0)) {
      puVar1 = PTR__OBJC_CLASS___MPSImageGaussianBlur_1126d4238;
      _objc_alloc();
      uVar2 = *(undefined8 *)(param_1 + 0x88);
      func_0x00010bf6fd20(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00c080(0x41f00000);
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      *(undefined **)(param_1 + 0x38) = puVar1;
      _objc_release(uVar3);
      _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c193470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x38),PTR_s_setEdgeMode__112642738,1);
      return;
    }
  }
  return;
}



/* Entry: 107032014; end: 10703201b; -[SCCameraViewfinderMetalRenderer flushOutdatedPreview] */

void FUN_107032014(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14dab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x88),PTR_s_sc_secretFeature_1126310c8);
  return;
}


