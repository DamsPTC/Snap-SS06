/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052f4934; end: 1052f493b; -[SCCaptureSessionForNonLiveStreaming removeOutput:] */

void FUN_1052f4934(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeObject__112628ef8);
  return;
}



/* Entry: 1052f493c; end: 1052f4943; -[SCCaptureSessionForNonLiveStreaming canAddConnection:] */

undefined8 FUN_1052f493c(void)

{
  return 0;
}



/* Entry: 1052f4944; end: 1052f4947; -[SCCaptureSessionForNonLiveStreaming beginConfiguration] */

void FUN_1052f4944(void)

{
  return;
}



/* Entry: 1052f4948; end: 1052f494b; -[SCCaptureSessionForNonLiveStreaming commitConfiguration] */

void FUN_1052f4948(void)

{
  return;
}



/* Entry: 1052f494c; end: 1052f4953; -[SCCaptureSessionForNonLiveStreaming isRunning] */

undefined1 FUN_1052f494c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1052f4954; end: 1052f495f; -[SCCaptureSessionForNonLiveStreaming startRunning] */

void FUN_1052f4954(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 1052f4960; end: 1052f4967; -[SCCaptureSessionForNonLiveStreaming stopRunning] */

void FUN_1052f4960(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 1052f4968; end: 1052f496f; -[SCCaptureSessionForNonLiveStreaming isInterrupted] */

undefined8 FUN_1052f4968(void)

{
  return 0;
}



/* Entry: 1052f4970; end: 1052f4977; -[SCCaptureSessionForNonLiveStreaming isMultitaskingCameraAccessEnabled] */

undefined8 FUN_1052f4970(void)

{
  return 0;
}



/* Entry: 1052f4978; end: 1052f497b; -[SCCaptureSessionForNonLiveStreaming setIsMultitaskingCameraAccessEnabled:] */

void FUN_1052f4978(void)

{
  return;
}



/* Entry: 1052f497c; end: 1052f4983; -[SCCaptureSessionForNonLiveStreaming isMultitaskingCameraAccessSupported] */

undefined8 FUN_1052f497c(void)

{
  return 0;
}



/* Entry: 1052f4984; end: 1052f498b; -[SCCaptureSessionForNonLiveStreaming supportsControls] */

undefined8 FUN_1052f4984(void)

{
  return 0;
}



/* Entry: 1052f498c; end: 1052f498f; -[SCCaptureSessionForNonLiveStreaming removeControl:] */

void FUN_1052f498c(void)

{
  return;
}



/* Entry: 1052f4990; end: 1052f4993; -[SCCaptureSessionForNonLiveStreaming canAddControl:] */

void FUN_1052f4990(void)

{
  return;
}



/* Entry: 1052f4994; end: 1052f499b; -[SCCaptureSessionForNonLiveStreaming isManualDeferredStartSupported] */

undefined8 FUN_1052f4994(void)

{
  return 0;
}



/* Entry: 1052f499c; end: 1052f49a3; -[SCCaptureSessionForNonLiveStreaming automaticallyRunsDeferredStart] */

undefined8 FUN_1052f499c(void)

{
  return 1;
}



/* Entry: 1052f49a4; end: 1052f49a7; -[SCCaptureSessionForNonLiveStreaming setAutomaticallyRunsDeferredStart:] */

void FUN_1052f49a4(void)

{
  return;
}



/* Entry: 1052f49a8; end: 1052f49ab; -[SCCaptureSessionForNonLiveStreaming runDeferredStartWhenNeeded] */

void FUN_1052f49a8(void)

{
  return;
}



/* Entry: 1052f49ac; end: 1052f49b3; -[SCCaptureSessionForNonLiveStreaming automaticallyConfiguresApplicationAudioSession] */

undefined1 FUN_1052f49ac(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1052f49b4; end: 1052f49bb; -[SCCaptureSessionForNonLiveStreaming setAutomaticallyConfiguresApplicationAudioSession:] */

void FUN_1052f49b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 1052f49bc; end: 1052f49c3; -[SCCaptureSessionForNonLiveStreaming sessionPreset] */

undefined8 FUN_1052f49bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1052f49c4; end: 1052f49cb; -[SCCaptureSessionForNonLiveStreaming setSessionPreset:] */

void FUN_1052f49c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1052f49cc; end: 1052f49d3; -[SCCaptureSessionForNonLiveStreaming outputs] */

undefined8 FUN_1052f49cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1052f49d4; end: 1052f4a03; -[SCCaptureSessionForNonLiveStreaming setOutputs:] */

void FUN_1052f49d4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1052f4a04; end: 1052f4a0b; -[SCCaptureSessionForNonLiveStreaming inputs] */

undefined8 FUN_1052f4a04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1052f4a0c; end: 1052f4a3b; -[SCCaptureSessionForNonLiveStreaming setInputs:] */

void FUN_1052f4a0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052f4a3c; end: 1052f4a77; -[SCCaptureSessionForNonLiveStreaming .cxx_destruct] */

void FUN_1052f4a3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1052f4a78; end: 1052f4b5f; -[SCManagedCaptureSessionImplBufferDelegateInfo initWithDelegate:queue:deviceOutput:] */

undefined1 *
FUN_1052f4a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e7620;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1052f4b60; end: 1052f4b77; -[SCManagedCaptureSessionImplBufferDelegateInfo delegate] */

void FUN_1052f4b60(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1052f4b78; end: 1052f4b7f; -[SCManagedCaptureSessionImplBufferDelegateInfo queue] */

undefined8 FUN_1052f4b78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1052f4b80; end: 1052f4b87; -[SCManagedCaptureSessionImplBufferDelegateInfo deviceOutput] */

undefined8 FUN_1052f4b80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1052f4b88; end: 1052f4bbf; -[SCManagedCaptureSessionImplBufferDelegateInfo .cxx_destruct] */

void FUN_1052f4b88(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1052f4bc0; end: 1052f4c4f; -[SCManagedCaptureSessionImpl _removeOutput:] */

void FUN_1052f4bc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0ef240();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c12d760(*(undefined8 *)(param_1 + 8),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052f4c50; end: 1052f4d1b; -[SCManagedCaptureSessionImpl photoOutput] */

void FUN_1052f4c50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fb4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0ef240();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf4b900();
  _objc_release(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(uVar2);
    uVar1 = uVar2;
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052f4d1c; end: 1052f4e0b; -[SCManagedCaptureSessionImpl addPhotoOutputToCaptureSessionIfNeeded] */

void FUN_1052f4d1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fb4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(ulong *)(param_1 + 8);
  func_0x00010c0ef240();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4b900();
  _objc_release(uVar3);
  if ((uVar4 & 1) == 0) {
    lVar5 = param_1;
    func_0x00010c078000(param_1);
    func_0x00010bf17e40(*(undefined8 *)(param_1 + 8));
    func_0x00010bdc7b20(param_1,param_2,uVar2,lVar5,1);
    func_0x00010be01d40(param_1,param_2,uVar2);
    func_0x00010bf427c0(*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1052f4e0c; end: 1052f4e67; -[SCManagedCaptureSessionImpl runDeferredStartWhenNeeded] */

void FUN_1052f4e0c(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x1a,0,0);
  if (iVar1 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c07cd60();
    if (iVar1 != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      func_0x00010bf12120();
      if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1427d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(param_1 + 8),PTR_s_runDeferredStartWhenNeeded_11262e410);
        return;
      }
    }
  }
  return;
}



/* Entry: 1052f4e68; end: 1052f4faf; -[SCManagedCaptureSessionImpl _disableSensorOrientationCompensationIfNeeded:] */

void FUN_1052f4e68(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  iVar1 = 2;
  func_0x000100029b9c(2,0x1a,0,0);
  if (iVar1 != 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf29900();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c22ee40();
      *(char *)(param_1 + 0x79) = (char)uVar5;
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      *(undefined1 *)(param_1 + 0x78) = 1;
    }
    if ((((*(char *)(param_1 + 0x79) == '\x01') &&
         (uVar6 = param_3,
         _objc_opt_respondsToSelector(param_3,PTR_s_isCameraSensorOrientationCompens_1125f9200),
         (uVar6 & 1) != 0)) && (uVar6 = param_3, func_0x00010c06dfc0(), (int)uVar6 != 0)) &&
       (uVar6 = param_3,
       _objc_opt_respondsToSelector(param_3,PTR_s_setCameraSensorOrientationCompen_11263b618),
       (uVar6 & 1) != 0)) {
      func_0x00010c176fe0(param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052f4fb0; end: 1052f522f; -[SCManagedCaptureSessionImpl momentarilyStopStreamingToDelegates] */

void FUN_1052f4fb0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined *unaff_x25;
  undefined8 unaff_x26;
  long unaff_x27;
  undefined *puVar11;
  undefined **unaff_x28;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_228 [128];
  long lStack_1a8;
  undefined **ppuStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar9 = *(long *)(param_1 + 0x10);
  lStack_138 = param_1;
  _objc_retain(lVar9);
  lVar2 = lVar9;
  func_0x00010bf52a60(lVar9,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar2 != 0) {
    unaff_x27 = *plStack_120;
    unaff_x28 = &PTR_PTR_1126b7000;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(lVar9);
        }
        unaff_x26 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        uVar1 = unaff_x26;
        func_0x00010c29a780();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = uVar1;
        func_0x00010c149520();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        uVar1 = unaff_x26;
        func_0x00010c29a780();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = uVar1;
        func_0x00010c149500();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        func_0x00010c29a780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1f5300();
        _objc_release(unaff_x26);
        unaff_x25 = PTR_PTR_1126b70c0;
        _objc_alloc();
        func_0x00010c00ac00();
        func_0x00010befa120(puVar8,param_2,unaff_x25);
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        _objc_release(unaff_x23);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar9;
      func_0x00010bf52a60(lVar9,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar9);
  lVar2 = *(long *)(lStack_138 + 0x70);
  *(undefined **)(lStack_138 + 0x70) = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar9);
  _objc_release(puVar8);
  lVar10 = lVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_1052f5230;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(lVar10 + 0x70);
  ppuStack_1a0 = unaff_x28;
  lStack_198 = unaff_x27;
  uStack_190 = unaff_x26;
  puStack_188 = unaff_x25;
  uStack_180 = unaff_x24;
  uStack_178 = unaff_x23;
  uStack_170 = 0;
  lStack_168 = lVar2;
  lStack_160 = lVar9;
  puStack_158 = puVar8;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010bf529e0();
  lVar2 = 0;
  if (lVar3 != 0) {
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    puVar8 = *(undefined **)(lVar10 + 0x70);
    _objc_retain(puVar8);
    puVar4 = puVar8;
    func_0x00010bf52a60(puVar8,param_2,&uStack_270,auStack_228,0x10);
    if (puVar4 != (undefined *)0x0) {
      lVar2 = *plStack_260;
      do {
        puVar11 = (undefined *)0x0;
        do {
          if (*plStack_260 != lVar2) {
            _objc_enumerationMutation(puVar8);
          }
          lVar3 = *(long *)(lStack_268 + (long)puVar11 * 8);
          lVar9 = lVar3;
          func_0x00010bf6b020();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar9 != 0) {
            lVar9 = lVar3;
            func_0x00010bf70d00();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar9;
            func_0x00010c29a780();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            func_0x00010c149520();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(lVar5);
            _objc_release(lVar9);
            if (lVar6 == 0) {
              lVar9 = lVar3;
              func_0x00010bf70d00(lVar3);
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar9;
              func_0x00010c29a780();
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar3;
              func_0x00010bf6b020(lVar3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c11de00(lVar3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1f5300(lVar5,param_2,lVar6,lVar3);
              _objc_release(lVar3);
              _objc_release(lVar6);
              _objc_release(lVar5);
              _objc_release(lVar9);
            }
          }
          puVar11 = puVar11 + 1;
        } while (puVar4 != puVar11);
        puVar4 = puVar8;
        func_0x00010bf52a60(puVar8,param_2,&uStack_270,auStack_228,0x10);
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(puVar8);
    lVar2 = *(long *)(lVar10 + 0x70);
    *(undefined8 *)(lVar10 + 0x70) = 0;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  __Unwind_Resume();
  uVar7 = *(undefined8 *)(lVar2 + 0x10);
  func_0x00010bfb1920(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c29a780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052f5230; end: 1052f54b7; -[SCManagedCaptureSessionImpl restoreStreamingToCachedDelegatesIfNeeded] */

void FUN_1052f5230(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x19;
  long lVar8;
  long lVar9;
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
  lVar1 = *(long *)(param_1 + 0x70);
  func_0x00010bf529e0();
  lVar5 = 0;
  if (lVar1 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    unaff_x19 = *(long *)(param_1 + 0x70);
    _objc_retain(unaff_x19);
    lVar5 = unaff_x19;
    func_0x00010bf52a60(unaff_x19,param_2,&uStack_130,auStack_e8,0x10);
    if (lVar5 != 0) {
      lVar1 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar1) {
            _objc_enumerationMutation(unaff_x19);
          }
          lVar8 = *(long *)(lStack_128 + lVar9 * 8);
          lVar2 = lVar8;
          func_0x00010bf6b020();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar2 != 0) {
            lVar2 = lVar8;
            func_0x00010bf70d00();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar2;
            func_0x00010c29a780();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar3;
            func_0x00010c149520();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(lVar3);
            _objc_release(lVar2);
            if (lVar4 == 0) {
              lVar2 = lVar8;
              func_0x00010bf70d00(lVar8);
              _objc_retainAutoreleasedReturnValue();
              lVar3 = lVar2;
              func_0x00010c29a780();
              _objc_retainAutoreleasedReturnValue();
              lVar4 = lVar8;
              func_0x00010bf6b020(lVar8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c11de00(lVar8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1f5300(lVar3,param_2,lVar4,lVar8);
              _objc_release(lVar8);
              _objc_release(lVar4);
              _objc_release(lVar3);
              _objc_release(lVar2);
            }
          }
          lVar9 = lVar9 + 1;
        } while (lVar5 != lVar9);
        lVar5 = unaff_x19;
        func_0x00010bf52a60(unaff_x19,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar5 != 0);
    }
    _objc_release(unaff_x19);
    lVar5 = *(long *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x19);
  __Unwind_Resume();
  uVar6 = *(undefined8 *)(lVar5 + 0x10);
  func_0x00010bfb1920(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c29a780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 1052f54b8; end: 1052f5513; -[SCManagedCaptureSessionImpl videoOutput] */

void FUN_1052f54b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29a780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1052f5514; end: 1052f55db; -[SCManagedCaptureSessionImpl removeCaptureDeviceFromSession:] */

void FUN_1052f5514(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c066460();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010bf17e40(*(undefined8 *)(param_1 + 8));
    uVar3 = param_3;
    func_0x00010bfc4bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cba0(*(undefined8 *)(param_1 + 8),param_2,uVar3);
    func_0x00010bf427c0(*(undefined8 *)(param_1 + 8));
    func_0x00010bf31180(param_3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052f55dc; end: 1052f57af; -[SCManagedCaptureSessionImpl startStreamingToStreamer:] */

void FUN_1052f55dc(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
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
  uVar1 = param_1;
  func_0x00010bfd41c0();
  if ((uVar1 & 1) == 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    unaff_x20 = *(long *)(param_1 + 0x10);
    _objc_retain(unaff_x20);
    lVar2 = unaff_x20;
    func_0x00010bf52a60(unaff_x20,param_2,&uStack_130,auStack_e8,0x10);
    if (lVar2 != 0) {
      lVar5 = *plStack_120;
      do {
        lVar6 = 0;
        do {
          if (*plStack_120 != lVar5) {
            _objc_enumerationMutation(unaff_x20);
          }
          uVar3 = *(undefined8 *)(lStack_128 + lVar6 * 8);
          func_0x00010c29a780(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = *(undefined8 *)(param_1 + 0x40);
          func_0x00010c11de00(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1f5300(uVar3,param_2,param_1,uVar4);
          _objc_release(uVar4);
          _objc_release(uVar3);
          lVar6 = lVar6 + 1;
        } while (lVar2 != lVar6);
        lVar2 = unaff_x20;
        func_0x00010bf52a60(unaff_x20,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(unaff_x20);
  }
  _os_unfair_lock_lock(param_1 + 0x50);
  lVar5 = param_3;
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x58));
  _os_unfair_lock_unlock(param_1 + 0x50);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x20);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(lVar5);
  if (lVar5 != 0) {
    _os_unfair_lock_lock(lVar2 + 0x50);
    func_0x00010c12d360(*(undefined8 *)(lVar2 + 0x58),param_2,lVar5);
    _os_unfair_lock_unlock(lVar2 + 0x50);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1052f57b0; end: 1052f580f; -[SCManagedCaptureSessionImpl stopStreamingToStreamer:] */

void FUN_1052f57b0(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (param_3 != 0) {
    _os_unfair_lock_lock(param_1 + 0x50);
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x58),param_2,param_3);
    _os_unfair_lock_unlock(param_1 + 0x50);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052f5810; end: 1052f586f; -[SCManagedCaptureSessionImpl hasAnyActiveStreamingDelegates] */

bool FUN_1052f5810(long param_1)

{
  long lVar1;
  
  _os_unfair_lock_lock(param_1 + 0x50);
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010bf04a20(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _os_unfair_lock_unlock(param_1 + 0x50);
  return lVar1 != 0;
}



/* Entry: 1052f5870; end: 1052f58a3; -[SCManagedCaptureSessionImpl stopRunning] */

void FUN_1052f5870(long param_1,undefined8 param_2)

{
  func_0x00010c1e8060(param_1,param_2,0);
  func_0x00010c1a1260(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c2568b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_stopRunning_112673450);
  return;
}



/* Entry: 1052f58a4; end: 1052f58ab; -[SCManagedCaptureSessionImpl isInterrupted] */

void FUN_1052f58a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c075c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_isInterrupted_1125fb118)
  ;
  return;
}



/* Entry: 1052f58ac; end: 1052f58ef; -[SCManagedCaptureSessionImpl _AVSessionDidStopRunning] */

void FUN_1052f58ac(long param_1)

{
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0b7e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052f58f0; end: 1052f592f; -[SCManagedCaptureSessionImpl _AVSessionDidBeginInterruption] */

void FUN_1052f58f0(long param_1)

{
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0b7e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052f5930; end: 1052f596f; -[SCManagedCaptureSessionImpl _AVSessionDidEndInterruption] */

void FUN_1052f5930(long param_1)

{
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0b7e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052f5970; end: 1052f597f; -[SCManagedCaptureSessionImpl isUnderlyingAVCaptureSession:] */

bool FUN_1052f5970(long param_1,undefined8 param_2,long param_3)

{
  return *(long *)(param_1 + 8) == param_3;
}



/* Entry: 1052f5980; end: 1052f59b3; -[SCManagedCaptureSessionImpl fixCaptureSession] */

void FUN_1052f5980(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c23e400();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2504b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_startRunning_112671b50);
  return;
}



/* Entry: 1052f59b4; end: 1052f5b4b; -[SCManagedCaptureSessionImpl captureOutput:didOutputSampleBuffer:fromConnection:] */

undefined1 *
FUN_1052f59b4(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 auStack_318 [128];
  long lStack_298;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_178;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_1 + 0x50);
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010bf51e00();
  _os_unfair_lock_unlock(param_1 + 0x50);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain(lVar1);
  puVar3 = auStack_d8;
  uVar7 = 0x10;
  lVar9 = lVar1;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    lVar10 = *plStack_110;
    do {
      lVar11 = 0;
      do {
        if (*plStack_110 != lVar10) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010bf30f20(*(undefined8 *)(lStack_118 + lVar11 * 8),param_2,param_3,param_4,param_5
                           );
        lVar11 = lVar11 + 1;
      } while (lVar9 != lVar11);
      puVar3 = auStack_d8;
      uVar7 = 0x10;
      lVar9 = lVar1;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_release(param_5);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar6 = &uStack_240;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  _objc_retain(uVar7);
  _os_unfair_lock_lock(puVar2 + 0x50);
  lVar1 = *(long *)(puVar2 + 0x58);
  func_0x00010bf51e00();
  _os_unfair_lock_unlock(puVar2 + 0x50);
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  _objc_retain(lVar1);
  lVar9 = lVar1;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    lVar10 = *plStack_230;
    do {
      lVar11 = 0;
      do {
        if (*plStack_230 != lVar10) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010bf30f00(*(undefined8 *)(lStack_238 + lVar11 * 8),param_2,puVar5,puVar3,uVar7);
        lVar11 = lVar11 + 1;
      } while (lVar9 != lVar11);
      lVar9 = lVar1;
      puVar6 = &uStack_240;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_release(uVar7);
  puVar3 = (undefined1 *)puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_release(uVar7);
  _objc_release(puVar5);
  __Unwind_Resume();
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 **)(puVar3 + 0x20) = puVar6;
  lStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  plStack_350 = (long *)0x0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  puVar8 = *(undefined1 **)(puVar3 + 0x10);
  _objc_retain(puVar8);
  puVar2 = puVar8;
  func_0x00010bf52a60(puVar8,param_2,&uStack_360,auStack_318,0x10);
  if (puVar2 != (undefined1 *)0x0) {
    lVar9 = *plStack_350;
    do {
      puVar12 = (undefined1 *)0x0;
      do {
        if (*plStack_350 != lVar9) {
          _objc_enumerationMutation(puVar8);
        }
        puVar4 = PTR_PTR_1126aff08;
        uVar7 = *(undefined8 *)(lStack_358 + (long)puVar12 * 8);
        func_0x00010bf70d80(uVar7);
        func_0x00010c073f00(puVar4,param_2,uVar7);
        if ((int)puVar4 != 0) {
          func_0x00010beaa0c0(puVar3,param_2,*(undefined8 *)(puVar3 + 0x20));
        }
        puVar12 = puVar12 + 1;
      } while (puVar2 != puVar12);
      puVar2 = puVar8;
      func_0x00010bf52a60(puVar8,param_2,&uStack_360,auStack_318,0x10);
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar3 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  __Unwind_Resume(puVar3);
  func_0x00010c29a780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010bf48de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c083280(puVar2);
  _objc_release(puVar2);
  return puVar3;
}



/* Entry: 1052f5b4c; end: 1052f5ce3; -[SCManagedCaptureSessionImpl captureOutput:didDropSampleBuffer:fromConnection:] */

long FUN_1052f5b4c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_1 + 0x50);
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010bf51e00();
  _os_unfair_lock_unlock(param_1 + 0x50);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain(lVar1);
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010bf30f00(*(undefined8 *)(lStack_118 + lVar7 * 8),param_2,param_3,param_4,param_5)
        ;
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar1;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_release(param_5);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar2;
  }
  ___stack_chk_fail();
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  __Unwind_Resume();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 **)(lVar2 + 0x20) = puVar5;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lVar6 = *(long *)(lVar2 + 0x10);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_240,auStack_1f8,0x10);
  if (lVar1 != 0) {
    lVar7 = *plStack_230;
    do {
      lVar8 = 0;
      do {
        if (*plStack_230 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        puVar4 = PTR_PTR_1126aff08;
        uVar3 = *(undefined8 *)(lStack_238 + lVar8 * 8);
        func_0x00010bf70d80(uVar3);
        func_0x00010c073f00(puVar4,param_2,uVar3);
        if ((int)puVar4 != 0) {
          func_0x00010beaa0c0(lVar2,param_2,*(undefined8 *)(lVar2 + 0x20));
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar6;
      func_0x00010bf52a60(lVar6,param_2,&uStack_240,auStack_1f8,0x10);
    } while (lVar1 != 0);
  }
  lVar2 = lVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return lVar2;
  }
  ___stack_chk_fail();
  _objc_release(lVar6);
  __Unwind_Resume(lVar2);
  func_0x00010c29a780();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf48de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010c083280(lVar1);
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 1052f5ce4; end: 1052f5e2b; -[SCManagedCaptureSessionImpl setFrontCameraStabilizationMode:] */

long FUN_1052f5ce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar4 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        puVar3 = PTR_PTR_1126aff08;
        uVar2 = *(undefined8 *)(lStack_118 + lVar6 * 8);
        func_0x00010bf70d80(uVar2);
        func_0x00010c073f00(puVar3,param_2,uVar2);
        if ((int)puVar3 != 0) {
          func_0x00010beaa0c0(param_1,param_2,*(undefined8 *)(param_1 + 0x20));
        }
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  lVar1 = lVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar1;
  }
  ___stack_chk_fail();
  _objc_release(lVar4);
  __Unwind_Resume(lVar1);
  func_0x00010c29a780();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf48de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar4;
  func_0x00010c083280(lVar4);
  _objc_release(lVar4);
  return lVar1;
}



/* Entry: 1052f5e2c; end: 1052f5eb7; -[SCManagedCaptureSessionImpl isVideoMirrored] */

undefined8 FUN_1052f5e2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c29a780();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf48de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010c083280(uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1052f5eb8; end: 1052f5f13; -[SCManagedCaptureSessionImpl metadataOutput] */

void FUN_1052f5eb8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cc5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1052f5f14; end: 1052f60a3; -[SCManagedCaptureSessionImpl disableMetadataOutput] */

ulong FUN_1052f5f14(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_218;
  long lStack_190;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf17e40(*(undefined8 *)(param_1 + 8));
  lVar10 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar10);
  lVar1 = lVar10;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(lVar10);
      }
      lVar12 = *(long *)(lVar14 * 8);
      lVar2 = lVar12;
      func_0x00010c0cc5e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        lVar2 = lVar12;
        func_0x00010c0cc5e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be8cc20(param_1);
        _objc_release(lVar2);
        func_0x00010c1c7560(lVar12);
      }
      lVar14 = lVar14 + 1;
    } while (lVar1 != lVar14);
    lVar1 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  uVar3 = *(ulong *)(param_1 + 8);
  func_0x00010bf427c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return uVar3;
  }
  ___stack_chk_fail();
  _objc_release(lVar10);
  __Unwind_Resume();
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c078000();
  func_0x00010bf17e40(*(undefined8 *)(uVar3 + 8));
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  lVar11 = *(long *)(uVar3 + 0x10);
  _objc_retain(lVar11);
  puVar8 = &uStack_260;
  lVar1 = lVar11;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_250;
    uVar13 = *(undefined8 *)PTR__AVMetadataObjectTypeFace_1103480b8;
    do {
      lVar10 = 0;
      do {
        if (*plStack_250 != lVar9) {
          _objc_enumerationMutation(lVar11);
        }
        uVar15 = *(undefined8 *)(lStack_258 + lVar10 * 8);
        puVar4 = PTR_PTR_1126b70e0;
        func_0x00010bf30e60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc7b00(uVar3);
        puVar5 = puVar4;
        func_0x00010bf128c0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bf4b900();
        _objc_release(puVar5);
        if ((int)puVar6 == 0) {
          func_0x00010be8cc20(uVar3);
        }
        else {
          puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
          uStack_218 = uVar13;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c7540(puVar4);
          _objc_release(puVar5);
          func_0x00010c1c7560(uVar15);
        }
        _objc_release(puVar4);
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      puVar8 = &uStack_260;
      lVar1 = lVar11;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar11);
  uVar3 = *(ulong *)(uVar3 + 8);
  func_0x00010bf427c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
    return uVar3;
  }
  ___stack_chk_fail();
  _objc_release(lVar11);
  __Unwind_Resume(uVar3);
  _objc_retain(puVar8);
  puVar4 = PTR__OBJC_CLASS___AVCaptureMetadataOutput_1126b7088;
  _objc_opt_class(PTR__OBJC_CLASS___AVCaptureMetadataOutput_1126b7088);
  puVar7 = puVar8;
  _objc_opt_isKindOfClass(puVar8,puVar4);
  _objc_release(puVar8);
  return (ulong)((uint)puVar7 & 1);
}



/* Entry: 1052f60a4; end: 1052f62d3; -[SCManagedCaptureSessionImpl enableMetadataOutput] */

ulong FUN_1052f60a4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c078000();
  func_0x00010bf17e40(*(undefined8 *)(param_1 + 8));
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  lVar8 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar8);
  puVar7 = &uStack_140;
  lVar1 = lVar8;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar12 = *plStack_130;
    uVar10 = *(undefined8 *)PTR__AVMetadataObjectTypeFace_1103480b8;
    do {
      lVar9 = 0;
      do {
        if (*plStack_130 != lVar12) {
          _objc_enumerationMutation(lVar8);
        }
        uVar11 = *(undefined8 *)(lStack_138 + lVar9 * 8);
        puVar2 = PTR_PTR_1126b70e0;
        func_0x00010bf30e60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc7b00(param_1);
        puVar3 = puVar2;
        func_0x00010bf128c0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf4b900();
        _objc_release(puVar3);
        if ((int)puVar4 == 0) {
          func_0x00010be8cc20(param_1);
        }
        else {
          puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
          uStack_f8 = uVar10;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c7540(puVar2);
          _objc_release(puVar3);
          func_0x00010c1c7560(uVar11);
        }
        _objc_release(puVar2);
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      puVar7 = &uStack_140;
      lVar1 = lVar8;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar8);
  uVar5 = *(ulong *)(param_1 + 8);
  func_0x00010bf427c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar5;
  }
  ___stack_chk_fail();
  _objc_release(lVar8);
  __Unwind_Resume(uVar5);
  _objc_retain(puVar7);
  puVar2 = PTR__OBJC_CLASS___AVCaptureMetadataOutput_1126b7088;
  _objc_opt_class(PTR__OBJC_CLASS___AVCaptureMetadataOutput_1126b7088);
  puVar6 = puVar7;
  _objc_opt_isKindOfClass(puVar7,puVar2);
  _objc_release(puVar7);
  return (ulong)((uint)puVar6 & 1);
}



/* Entry: 1052f62d4; end: 1052f6333; -[SCManagedCaptureSessionImpl _isMetadataOutput:] */

uint FUN_1052f62d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___AVCaptureMetadataOutput_1126b7088;
  _objc_opt_class(PTR__OBJC_CLASS___AVCaptureMetadataOutput_1126b7088);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  _objc_release(param_3);
  return (uint)uVar2 & 1;
}



/* Entry: 1052f6334; end: 1052f64a3; -[SCManagedCaptureSessionImpl configureCaptureControls:] */

void FUN_1052f6334(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar2,PTR_s_supportsControls_1126767a0);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x00010c2635e0();
    if ((uVar2 & 1) != 0) {
      func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x60));
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      plStack_100 = (long *)0x0;
      _objc_retain(param_3);
      lVar3 = param_3;
      func_0x00010bf52a60();
      if (lVar3 != 0) {
        lVar4 = *plStack_100;
        do {
          lVar5 = 0;
          do {
            if (*plStack_100 != lVar4) {
              _objc_enumerationMutation(param_3);
            }
            func_0x00010befa120(*(undefined8 *)(param_1 + 0x60));
            lVar5 = lVar5 + 1;
          } while (lVar3 != lVar5);
          lVar3 = param_3;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
      }
      _objc_release(param_3);
      func_0x00010bdc6340(param_1);
    }
  }
  lVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  lVar4 = lVar3;
  __Unwind_Resume(lVar3);
  pcStack_118 = FUN_1052f64a4;
  iVar1 = 2;
  lStack_130 = lVar3;
  lStack_128 = param_3;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    _objc_initWeak(auStack_138,lVar4);
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_1052f6548;
    puStack_148 = &UNK_110876b10;
    _objc_copyWeak(auStack_140,auStack_138);
    func_0x000100162d98("APPSTORE",&puStack_160);
    _objc_destroyWeak(auStack_140);
    _objc_destroyWeak(auStack_138);
  }
  return;
}



/* Entry: 1052f64a4; end: 1052f6547; -[SCManagedCaptureSessionImpl sessionControlsDidBecomeActive:] */

void FUN_1052f64a4(undefined8 param_1)

{
  int iVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_1052f6548;
    puStack_38 = &UNK_110876b10;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x000100162d98("APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 1052f6548; end: 1052f66ab;  */

void FUN_1052f6548(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    unaff_x20 = *(long *)(param_1 + 0x60);
    _objc_retain(unaff_x20);
    lVar2 = unaff_x20;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar4 = *plStack_110;
      do {
        lVar5 = 0;
        do {
          if (*plStack_110 != lVar4) {
            _objc_enumerationMutation(unaff_x20);
          }
          uVar3 = *(undefined8 *)(lStack_118 + lVar5 * 8);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c15fb80();
          _objc_release(uVar3);
          lVar5 = lVar5 + 1;
        } while (lVar2 != lVar5);
        lVar2 = unaff_x20;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(unaff_x20);
  }
  lVar2 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x20);
  _objc_release(param_1);
  __Unwind_Resume(lVar2);
  pcStack_128 = FUN_1052f66ac;
  iVar1 = 2;
  lStack_140 = unaff_x20;
  lStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    _objc_initWeak(auStack_148,lVar2);
    puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_1052f6750;
    puStack_158 = &UNK_110876b10;
    _objc_copyWeak(auStack_150,auStack_148);
    func_0x000100162d98("APPSTORE",&puStack_170);
    _objc_destroyWeak(auStack_150);
    _objc_destroyWeak(auStack_148);
  }
  return;
}



/* Entry: 1052f66ac; end: 1052f674f; -[SCManagedCaptureSessionImpl sessionControlsDidBecomeInactive:] */

void FUN_1052f66ac(undefined8 param_1)

{
  int iVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_1052f6750;
    puStack_38 = &UNK_110876b10;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x000100162d98("APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 1052f6750; end: 1052f68b3;  */

void FUN_1052f6750(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    unaff_x20 = *(long *)(param_1 + 0x60);
    _objc_retain(unaff_x20);
    lVar1 = unaff_x20;
    func_0x00010bf52a60(unaff_x20,param_2,&uStack_120,auStack_d8,0x10);
    if (lVar1 != 0) {
      lVar3 = *plStack_110;
      do {
        lVar4 = 0;
        do {
          if (*plStack_110 != lVar3) {
            _objc_enumerationMutation(unaff_x20);
          }
          uVar2 = *(undefined8 *)(lStack_118 + lVar4 * 8);
          func_0x00010c269d40(uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c15fba0();
          _objc_release(uVar2);
          lVar4 = lVar4 + 1;
        } while (lVar1 != lVar4);
        lVar1 = unaff_x20;
        func_0x00010bf52a60(unaff_x20,param_2,&uStack_120,auStack_d8,0x10);
      } while (lVar1 != 0);
    }
    _objc_release(unaff_x20);
  }
  lVar1 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x20);
  _objc_release(param_1);
  __Unwind_Resume(lVar1);
  return;
}



/* Entry: 1052f68b4; end: 1052f68b7; -[SCManagedCaptureSessionImpl sessionControlsWillEnterFullscreenAppearance:] */

void FUN_1052f68b4(void)

{
  return;
}



/* Entry: 1052f68b8; end: 1052f68bb; -[SCManagedCaptureSessionImpl sessionControlsWillExitFullscreenAppearance:] */

void FUN_1052f68b8(void)

{
  return;
}



/* Entry: 1052f68bc; end: 1052f68c3; -[SCManagedCaptureSessionImpl skipSessionFix] */

undefined1 FUN_1052f68bc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x7a);
}



/* Entry: 1052f68c4; end: 1052f695b; -[SCManagedCaptureSessionImpl .cxx_destruct] */

void FUN_1052f68c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052f695c; end: 1052f695f; +[SCCaptureDeviceTestEnvironment setTestIsIOS15:] */

void FUN_1052f695c(void)

{
  return;
}



/* Entry: 1052f6960; end: 1052f6967; +[SCCaptureDeviceTestEnvironment testIsIOS15] */

undefined8 FUN_1052f6960(void)

{
  return 0;
}



/* Entry: 1052f6968; end: 1052f696b; +[SCCaptureDeviceTestEnvironment resetTestIsIOS15] */

void FUN_1052f6968(void)

{
  return;
}



/* Entry: 1052f696c; end: 1052f6a53; -[SCCameraAudioCaptureConfigurationImpl initWithCircumstanceEngine:] */

undefined8 * FUN_1052f696c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e7630;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1052f6a54; end: 1052f6a9f;  */

void FUN_1052f6a54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110dd0ab8,0,0);
  uVar2 = 0x40e7700000000000;
  if ((int)uVar1 == 0) {
    uVar2 = 0x40e5888000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0df730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithDouble__1126157e0);
  return;
}



/* Entry: 1052f6aa0; end: 1052f6ab7; -[SCCameraAudioCaptureConfigurationImpl audioLossNotificationEnabled] */

void FUN_1052f6aa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd0a38,0,0);
  return;
}



/* Entry: 1052f6ab8; end: 1052f6acf; -[SCCameraAudioCaptureConfigurationImpl audioLossRetryEnabled] */

void FUN_1052f6ab8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd0a58,0,0);
  return;
}



/* Entry: 1052f6ad0; end: 1052f6ae7; -[SCCameraAudioCaptureConfigurationImpl audioLossAudioQueueDiagnosticsEnabled] */

void FUN_1052f6ad0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd0a78,0,0);
  return;
}



/* Entry: 1052f6ae8; end: 1052f6aff; -[SCCameraAudioCaptureConfigurationImpl audioLossSignalMetricsEnabled] */

void FUN_1052f6ae8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd0a98,0,0);
  return;
}



/* Entry: 1052f6b00; end: 1052f6b47; -[SCCameraAudioCaptureConfigurationImpl videoRecordingSampleRate] */

undefined8 FUN_1052f6b00(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1052f6b48; end: 1052f6b9f; -[SCCameraAudioCaptureConfigurationImpl _micFallbackDoubleValueForConfigKey:defaultValue:] */

undefined8 FUN_1052f6b48(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 8);
  uVar2 = param_1;
  func_0x00010bfb2ce0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bf885a0(lVar1);
    param_1 = uVar2;
  }
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 1052f6ba0; end: 1052f6bb3; -[SCCameraAudioCaptureConfigurationImpl micFallbackMinimumAnalyzedAudioDurationMs] */

void FUN_1052f6ba0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be604b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x409f400000000000,param_1,PTR_s__micFallbackDoubleValueForConfig_112575ac8,
             &PTR____CFConstantStringClassReference_110dd0ad8);
  return;
}



/* Entry: 1052f6bb4; end: 1052f6bc7; -[SCCameraAudioCaptureConfigurationImpl micFallbackSilentRecordingMaximumRmsDbfs] */

void FUN_1052f6bb4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be604b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0xc051800000000000,param_1,PTR_s__micFallbackDoubleValueForConfig_112575ac8,
             &PTR____CFConstantStringClassReference_110dd0af8);
  return;
}



/* Entry: 1052f6bc8; end: 1052f6bdb; -[SCCameraAudioCaptureConfigurationImpl micFallbackSilentRecordingMaximumPeakDbfs] */

void FUN_1052f6bc8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be604b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0xc04b800000000000,param_1,PTR_s__micFallbackDoubleValueForConfig_112575ac8,
             &PTR____CFConstantStringClassReference_110dd0b18);
  return;
}



/* Entry: 1052f6bdc; end: 1052f6bef; -[SCCameraAudioCaptureConfigurationImpl micFallbackSilentRecordingMinimumNearSilentBufferRatio] */

void FUN_1052f6bdc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be604b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fee666666666666,param_1,PTR_s__micFallbackDoubleValueForConfig_112575ac8,
             &PTR____CFConstantStringClassReference_110dd0b38);
  return;
}



/* Entry: 1052f6bf0; end: 1052f6c03; -[SCCameraAudioCaptureConfigurationImpl micFallbackDigitalSilenceRmsDbfs] */

void FUN_1052f6bf0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be604b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0xc05b800000000000,param_1,PTR_s__micFallbackDoubleValueForConfig_112575ac8,
             &PTR____CFConstantStringClassReference_110dd0b58);
  return;
}



/* Entry: 1052f6c04; end: 1052f6c17; -[SCCameraAudioCaptureConfigurationImpl micFallbackHealthyRecordingMinimumRmsDbfs] */

void FUN_1052f6c04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be604b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0xc049000000000000,param_1,PTR_s__micFallbackDoubleValueForConfig_112575ac8,
             &PTR____CFConstantStringClassReference_110dd0b78);
  return;
}



/* Entry: 1052f6c18; end: 1052f6c43; -[SCCameraAudioCaptureConfigurationImpl micFallbackConsecutiveSilentRecordingsToActivateCount] */

long FUN_1052f6c18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110dd0b98,5,0);
  return (long)(int)uVar1;
}



/* Entry: 1052f6c44; end: 1052f6c5b; -[SCCameraAudioCaptureConfigurationImpl micFallbackEnabled] */

void FUN_1052f6c44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd0bb8,0,0);
  return;
}



/* Entry: 1052f6c5c; end: 1052f6c8f; -[SCCameraAudioCaptureConfigurationImpl micFallbackConsecutiveSilentRecordingCountOverride] */

undefined ** FUN_1052f6c5c(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  puVar1 = PTR____kCFBooleanFalse_11034ab60;
  func_0x00010bf1f3c0();
  if ((int)puVar1 != 0) {
    ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf2a8;
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf2a8,PTR_s_integerValue_1125f7a00);
    return ppuVar2;
  }
  return (undefined **)0xffffffffffffffff;
}



/* Entry: 1052f6c90; end: 1052f6cbf; -[SCCameraAudioCaptureConfigurationImpl .cxx_destruct] */

void FUN_1052f6c90(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052f6cc0; end: 1052f6cd7; -[SCCameraHardwareConfigurationImpl fingerDownWarmupReplyCameraEnabled] */

void FUN_1052f6cc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd0d18,0,0);
  return;
}



/* Entry: 1052f6cd8; end: 1052f6cef; -[SCCameraHardwareConfigurationImpl fingerDownWarmupMainCameraEnabled] */

void FUN_1052f6cd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd0d38,0,0);
  return;
}



/* Entry: 1052f6cf0; end: 1052f6d57; -[SCCameraHardwareConfigurationImpl fingerDownWarmupTimeout] */

double FUN_1052f6cf0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = 0x110bf2c0;
  func_0x00010c067ec0();
  if (iVar1 < 1) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c067f00(uVar2,param_2,&PTR____CFConstantStringClassReference_110dd0d58,3000,0);
    iVar1 = (int)uVar2;
  }
  else {
    iVar1 = 0x110bf2c0;
    func_0x00010c067ec0(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf2c0);
  }
  return (double)iVar1 / 1000.0;
}



/* Entry: 1052f6d58; end: 1052f6d83; -[SCCameraHardwareConfigurationImpl fingerDownWarmupDormancyHours] */

long FUN_1052f6d58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110dd0d78,0,0);
  return (long)(int)uVar1;
}



/* Entry: 1052f6d84; end: 1052f6dc7; -[SCCameraHardwareConfigurationImpl warmupCameraConcurrently] */

undefined8 FUN_1052f6d84(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010becb8c0();
  if (((int)uVar1 != 0) && (uVar1 = param_1, func_0x00010bdd3020(), (int)uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdea190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cpuPressureSupportsWarmup_112558200);
    return param_1;
  }
  return 0;
}



/* Entry: 1052f6dc8; end: 1052f6e1b; -[SCCameraHardwareConfigurationImpl shouldDisableFrontCameraSensorOrientationCompensation] */

void FUN_1052f6dc8(long param_1)

{
  int iVar1;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x1a,0,0);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110dd0d98,0,0);
    return;
  }
  return;
}



/* Entry: 1052f6e1c; end: 1052f6e97; -[SCCameraHardwareConfigurationImpl _thermalStateSupportsWarmup] */

bool FUN_1052f6e1c(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c067f00(uVar2,param_2,&PTR____CFConstantStringClassReference_110dd0bf8,0xffffffff,0);
  if ((int)uVar2 == -1) {
    bVar1 = true;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
    func_0x00010c114d40(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c26d100();
    _objc_release(puVar3);
    bVar1 = (long)puVar4 <= (long)(int)uVar2;
  }
  return bVar1;
}



/* Entry: 1052f6e98; end: 1052f6eff; -[SCCameraHardwareConfigurationImpl _batteryStateSupportsWarmup] */

uint FUN_1052f6e98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110dd0c18,0,0);
  if ((int)uVar1 == 0) {
    uVar4 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
    func_0x00010c114d40(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0772e0();
    uVar4 = (uint)puVar3 ^ 1;
    _objc_release(puVar2);
  }
  return uVar4;
}



/* Entry: 1052f6f00; end: 1052f6f73; -[SCCameraHardwareConfigurationImpl _cpuPressureSupportsWarmup] */

bool FUN_1052f6f00(long param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010c067f00(uVar2,param_2,&PTR____CFConstantStringClassReference_110dd0c38,0,0);
  if ((int)uVar2 < 1) {
    bVar1 = true;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
    func_0x00010c114d40(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bef0f00();
    bVar1 = (undefined *)(uVar2 & 0xffffffff) <= puVar4;
    _objc_release(puVar3);
  }
  return bVar1;
}



/* Entry: 1052f6f74; end: 1052f6fa3; -[SCCameraHardwareConfigurationImpl .cxx_destruct] */

void FUN_1052f6f74(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052f6fa4; end: 1052f7017; -[SCCameraNotFoundAlertConfigurationImpl initWithAppStartExperimentReader:] */

undefined1 * FUN_1052f6fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7640;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


