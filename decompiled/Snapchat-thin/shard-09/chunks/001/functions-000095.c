/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1069c00cc; end: 1069c012b; -[SCConnectedLensInTalkController stop] */

void FUN_1069c00cc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bee36e0(param_1,param_2,0);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1069c012c; end: 1069c018f; -[SCConnectedLensInTalkController toggleSelfStream:] */

void FUN_1069c012c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bee36e0();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  *(char *)(param_1 + 0x28) = (char)param_3;
  return;
}



/* Entry: 1069c0190; end: 1069c01eb; -[SCConnectedLensInTalkController registerLocalPreviewViewFreezingManager:] */

void FUN_1069c0190(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010bfb7760(*(undefined8 *)(param_1 + 0x38),param_2,
                        &PTR____CFConstantStringClassReference_110e66db8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069c01ec; end: 1069c023b; -[SCConnectedLensInTalkController registerConnectedLensViewFreezer:] */

void FUN_1069c01ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeWeak(param_1 + 0x40,param_3);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb7740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069c023c; end: 1069c03a7; -[SCConnectedLensInTalkController registerRemoteParticipantViewFreezer:] */

void FUN_1069c023c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x48,param_3);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x30));
  _objc_initWeak(auStack_58,param_1);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c12a280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  lVar5 = lVar4;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(long *)(param_1 + 0x30) = lVar5;
  _objc_release(uVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1069c03a8; end: 1069c03d7;  */

void FUN_1069c03a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c07b860(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 1069c03d8; end: 1069c0437;  */

void FUN_1069c03d8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010bee3700(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069c0438; end: 1069c049f; -[SCConnectedLensInTalkController _updateViewFreezersForRemoteIsSelfStream:] */

void FUN_1069c0438(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x30));
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release(uVar2);
  }
  else if (param_3 == 0) {
    func_0x00010c27fb60(lVar1);
  }
  else {
    func_0x00010bfb7740();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069c04a0; end: 1069c052f; -[SCConnectedLensInTalkController _updateViewFreezersForLocalIsSelfStream:] */

void FUN_1069c04a0(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  if (*(byte *)(param_1 + 0x28) != param_3) {
    if (param_3 == 0) {
      lVar1 = param_1 + 0x40;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bfb7740();
      _objc_release(lVar1);
      func_0x00010c27fb80(*(undefined8 *)(param_1 + 0x38),param_2,
                          &PTR____CFConstantStringClassReference_110e66db8);
    }
    else {
      func_0x00010bfb7760(*(undefined8 *)(param_1 + 0x38),param_2,
                          &PTR____CFConstantStringClassReference_110e66db8);
      lVar1 = param_1 + 0x40;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c27fb60();
      _objc_release(lVar1);
    }
    *(char *)(param_1 + 0x28) = (char)param_3;
  }
  return;
}



/* Entry: 1069c0530; end: 1069c059b; -[SCConnectedLensInTalkController .cxx_destruct] */

void FUN_1069c0530(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069c059c; end: 1069c060f; -[SCLensTalkVideoFrameProviderAdapter initWithVideoFrameProvider:] */

undefined1 * FUN_1069c059c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f41a8;
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



/* Entry: 1069c0610; end: 1069c0693; -[SCLensTalkVideoFrameProviderAdapter currentFrame] */

long FUN_1069c0610(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf5ec20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe6d20();
  _objc_release(lVar1);
  lVar1 = lVar2;
  _CVPixelBufferGetPixelFormatType();
  if ((int)lVar1 == 0x34323066) {
    func_0x00010bdeb1c0(param_1,param_2,lVar2);
    _CFRelease(lVar2);
    lVar2 = param_1;
  }
  return lVar2;
}



/* Entry: 1069c0694; end: 1069c0723; -[SCLensTalkVideoFrameProviderAdapter currentFrameTimestampUs] */

void FUN_1069c0694(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf5ec20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf5ec20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c270c60();
    func_0x00010c0df7c0(puVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1069c0724; end: 1069c0a07; -[SCLensTalkVideoFrameProviderAdapter _createBGRAPixelBufferFromYUV420fBuffer:] */

void FUN_1069c0724(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong *puVar14;
  int iVar15;
  long lStack_178;
  ulong uStack_170;
  ulong uStack_168;
  long lStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  long lStack_118;
  undefined1 auStack_110 [136];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _CVPixelBufferLockBaseAddress(param_3,1);
  lStack_118 = 0;
  uVar4 = param_3;
  _CVPixelBufferGetWidth();
  uVar5 = param_3;
  _CVPixelBufferGetHeight();
  uVar6 = param_3;
  _CVPixelBufferGetBaseAddressOfPlane(param_3,0);
  uVar7 = param_3;
  _CVPixelBufferGetBaseAddressOfPlane(param_3,1);
  bVar3 = false;
  if (uVar6 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    if (uVar7 != 0) {
      uVar8 = param_3;
      _CVPixelBufferGetBytesPerRowOfPlane(param_3,0);
      uVar9 = param_3;
      _CVPixelBufferGetBytesPerRowOfPlane(param_3,1);
      uStack_150 = uVar5 >> 1;
      uStack_148 = uVar4 >> 1;
      uStack_88 = *(undefined8 *)PTR__kCVPixelBufferCGImageCompatibilityKey_11034a380;
      uStack_80 = *(undefined8 *)PTR__kCVPixelBufferCGBitmapContextCompatibilityKey_11034a378;
      puStack_70 = PTR____kCFBooleanTrue_11034ab68;
      puStack_68 = PTR____kCFBooleanTrue_11034ab68;
      uStack_78 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
      puStack_60 = PTR____NSDictionary0__struct_11034ab58;
      puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      uStack_158 = uVar7;
      uStack_140 = uVar9;
      uStack_138 = uVar6;
      uStack_130 = uVar5;
      uStack_128 = uVar4;
      uStack_120 = uVar8;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
      _CVPixelBufferCreate(uVar11,uVar4,uVar5,0x42475241,puVar10,&lStack_118);
      bVar3 = false;
      if (((int)uVar11 == 0) && (lStack_118 != 0)) {
        _CVPixelBufferLockBaseAddress(lStack_118,0);
        lVar12 = lStack_118;
        _CVPixelBufferGetBaseAddress();
        lVar13 = lStack_118;
        _CVPixelBufferGetBytesPerRow();
        lStack_178 = lVar12;
        uStack_170 = uVar5;
        uStack_168 = uVar4;
        lStack_160 = lVar13;
        _vImageConvert_YpCbCrToARGB_GenerateConversion
                  (*(undefined8 *)PTR__kvImage_YpCbCrToARGBMatrix_ITU_R_601_4_110347850,
                   &UNK_10dde3310,auStack_110,4,0,0);
        puVar14 = &uStack_138;
        _vImageConvert_420Yp8_CbCr8ToARGB8888
                  (puVar14,&uStack_158,&lStack_178,auStack_110,&UNK_10dde3330,0xff,0);
        bVar3 = puVar14 == (ulong *)0x0;
        if (puVar14 != (ulong *)0x0) {
          _CVPixelBufferUnlockBaseAddress(lStack_118,0);
          _CVPixelBufferRelease(lStack_118);
        }
      }
      _objc_release(puVar10);
      bVar1 = false;
    }
  }
  while( true ) {
    iVar15 = 1;
    _CVPixelBufferUnlockBaseAddress(param_3);
    if (lStack_118 != 0) {
      iVar15 = 0;
      _CVPixelBufferUnlockBaseAddress();
    }
    if (bVar1) break;
    lVar12 = lStack_118;
    if (!bVar3) {
      lVar12 = 0;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail(lVar12);
    if (iVar15 == 0) {
      __Unwind_Resume(lVar12);
      _objc_terminate();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(lVar12 + 8,0);
      return;
    }
    _objc_begin_catch(lVar12);
    bVar3 = false;
    bVar1 = true;
  }
  _objc_exception_rethrow();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1069c098c);
  (*pcVar2)();
}



/* Entry: 1069c0a08; end: 1069c0a13; -[SCLensTalkVideoFrameProviderAdapter .cxx_destruct] */

void FUN_1069c0a08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069c0a14; end: 1069c0a63; -[SCModularCallTransitionAnimator initWithIsInteractive:isPresenting:] */

void FUN_1069c0a14(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f41b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
  }
  return;
}



/* Entry: 1069c0a64; end: 1069c0a6f; -[SCModularCallTransitionAnimator transitionDuration:] */

undefined8 FUN_1069c0a64(void)

{
  return 0x3fd3333333333333;
}



/* Entry: 1069c0a70; end: 1069c0a9f; -[SCModularCallTransitionAnimator animateTransition:] */

void FUN_1069c0a70(undefined8 param_1)

{
  func_0x00010c069820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24dc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069c0aa0; end: 1069c0e03; -[SCModularCallTransitionAnimator interruptibleAnimatorForTransition:] */

void FUN_1069c0aa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 in_d3;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  
  _objc_retain(param_3);
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    uVar1 = param_3;
    func_0x00010bf4b2a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    uStack_c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_d0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_c0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_b0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    uVar7 = 0;
    _CGAffineTransformTranslate(&uStack_a0,0,in_d3,&uStack_d0);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010c29c220(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c29ce60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaef80(param_3);
    func_0x00010c19f0e0(uVar2);
    func_0x00010c27a940(param_1);
    if (*(char *)(param_1 + 9) == '\x01') {
      uVar3 = param_3;
      func_0x00010bf4b2a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(uVar3);
      uStack_c8 = uStack_98;
      uStack_d0 = uStack_a0;
      uStack_b8 = uStack_88;
      uStack_c0 = uStack_90;
      uStack_a8 = uStack_78;
      uStack_b0 = uStack_80;
      func_0x00010c219960(uVar2);
      puVar5 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
      _objc_alloc();
      _objc_retain(uVar2);
      func_0x00010c00ea00(uVar7);
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar5;
      _objc_release(uVar7);
      uVar3 = uVar2;
      if (*(char *)(param_1 + 8) == '\x01') {
        func_0x00010c21e900(uVar2);
        _objc_storeWeak(param_1 + 0x20,uVar2);
        func_0x00010c1d99e0(*(undefined8 *)(param_1 + 0x10));
        func_0x00010befa220(*(undefined8 *)(param_1 + 0x10));
      }
    }
    else {
      uVar3 = param_3;
      func_0x00010c29ce60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010bf4b2a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066fe0();
      _objc_release(uVar4);
      puVar5 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
      _objc_alloc();
      _objc_retain(uVar3);
      func_0x00010c00ea00(uVar7);
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar5;
      _objc_release(uVar7);
      _objc_release(uVar3);
    }
    _objc_release(uVar3);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    func_0x00010bef78c0(uVar7);
    lVar6 = *(long *)(param_1 + 0x10);
    _objc_retain(lVar6);
    _objc_release(param_3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    _objc_retain(lVar6);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 1069c0e04; end: 1069c0e77;  */

void FUN_1069c0e04(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_40 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_20 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_40);
  return;
}



/* Entry: 1069c0e78; end: 1069c0ea3;  */

void FUN_1069c0e78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = uVar2;
  func_0x00010c27ac00(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf43bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_completeTransition__1125ae898,(uint)uVar1 ^ 1);
  return;
}



/* Entry: 1069c0ea4; end: 1069c0fc7; -[SCModularCallTransitionAnimator observeValueForKeyPath:ofObject:change:context:] */

void FUN_1069c0ea4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    puStack_48 = PTR_PTR_1126f41b0;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_observeValueForKeyPath_ofObject__112615e88,param_3,param_4,
                        param_5,param_6);
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x10);
    func_0x00010c07cd60();
    if (*(char *)(param_1 + 9) == '\x01') {
      if ((uVar2 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
          lVar3 = param_1 + 0x20;
          _objc_loadWeakRetained(lVar3);
          func_0x00010c21e900();
          _objc_release(lVar3);
          *(undefined1 *)(param_1 + 0x18) = 1;
        }
      }
      else if (*(byte *)(param_1 + 0x18) != 0) {
        func_0x00010c1d99e0(*(undefined8 *)(param_1 + 0x10));
        func_0x00010c12d580(*(undefined8 *)(param_1 + 0x10));
      }
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069c0fc8; end: 1069c0ff3; -[SCModularCallTransitionAnimator .cxx_destruct] */

void FUN_1069c0fc8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1069c0ff4; end: 1069c1077; -[SCModularCallInteractiveTransition initWithAnimator:isPresenting:] */

undefined1 *
FUN_1069c0ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f41b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069c1078; end: 1069c10ef; -[SCModularCallInteractiveTransition finishTransition] */

void FUN_1069c1078(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfaf8e0();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c069820(uVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c0f5bc0(uVar2);
  func_0x00010c24dc40(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1069c10f0; end: 1069c11e7; -[SCModularCallInteractiveTransition cancelTransitionWithCompletion:] */

void FUN_1069c10f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf2e5a0();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c069820(uVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c0f5bc0(uVar2);
  func_0x00010c1ede40(uVar2,param_2,1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1069c11e8;
  puStack_40 = &UNK_110852668;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bef78c0(uVar2,param_2,&puStack_58);
  func_0x00010c24dc40(uVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1069c11e8; end: 1069c11fb;  */

void FUN_1069c11e8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001069c11f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1069c11fc; end: 1069c1263; -[SCModularCallInteractiveTransition startInteractiveTransition:] */

void FUN_1069c11fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x10,param_3);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c069820(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24dc40();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069c1264; end: 1069c1273; -[SCModularCallInteractiveTransition wantsInteractiveStart] */

byte FUN_1069c1264(long param_1)

{
  return (*(byte *)(param_1 + 0x18) ^ 0xff) & 1;
}



/* Entry: 1069c1274; end: 1069c129f; -[SCModularCallInteractiveTransition .cxx_destruct] */

void FUN_1069c1274(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069c12a0; end: 1069c12a3; -[SCModularCallNoOpTransitionAnimator animateTransition:] */

void FUN_1069c12a0(void)

{
  return;
}



/* Entry: 1069c12a4; end: 1069c12ab; -[SCModularCallNoOpTransitionAnimator transitionDuration:] */

undefined8 FUN_1069c12a4(void)

{
  return 0;
}



/* Entry: 1069c12ac; end: 1069c12fb; -[SCModularCallNoOpTransitionAnimator interruptibleAnimatorForTransition:] */

void FUN_1069c12ac(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 8);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1069c12fc; end: 1069c1307; -[SCModularCallNoOpTransitionAnimator .cxx_destruct] */

void FUN_1069c12fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069c1308; end: 1069c1343; -[SCModularCallCancellingTransition startInteractiveTransition:] */

void FUN_1069c1308(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf2e5a0(param_3);
  func_0x00010bf43bc0(param_3,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069c1344; end: 1069c136f; -[SCModularCallAdaptiveTransitioningDelegate finishTransition] */

void FUN_1069c1344(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfafd80(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069c1370; end: 1069c139b; -[SCModularCallAdaptiveTransitioningDelegate cancelTransitionWithCompletion:] */

void FUN_1069c1370(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf2f3c0(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069c139c; end: 1069c13a7; -[SCModularCallAdaptiveTransitioningDelegate dispose] */

void FUN_1069c139c(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



/* Entry: 1069c13a8; end: 1069c1407; -[SCModularCallAdaptiveTransitioningDelegate animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_1069c13a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    _objc_alloc_init(PTR_PTR_1126cf8f8);
  }
  else {
    puVar1 = PTR_PTR_1126cf900;
    _objc_alloc(PTR_PTR_1126cf900);
    func_0x00010c075b60(param_1);
    func_0x00010c01f180(puVar1,param_2,param_1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069c1408; end: 1069c144b; -[SCModularCallAdaptiveTransitioningDelegate animationControllerForDismissedController:] */

void FUN_1069c1408(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cf900;
  _objc_alloc(PTR_PTR_1126cf900);
  func_0x00010c075b60(param_1);
  func_0x00010c01f180(puVar1,param_2,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069c144c; end: 1069c14e7; -[SCModularCallAdaptiveTransitioningDelegate interactionControllerForPresentation:] */

void FUN_1069c144c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    puVar3 = PTR_PTR_1126cf908;
    _objc_alloc_init(PTR_PTR_1126cf908);
  }
  else {
    lVar1 = param_1;
    func_0x00010c075b60();
    if ((int)lVar1 == 0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126cf910;
      _objc_alloc();
      func_0x00010bff3080();
      uVar2 = *(undefined8 *)(param_1 + 8);
      *(undefined **)(param_1 + 8) = puVar3;
      _objc_release(uVar2);
      puVar3 = *(undefined **)(param_1 + 8);
      _objc_retain(puVar3);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1069c14e8; end: 1069c1563; -[SCModularCallAdaptiveTransitioningDelegate interactionControllerForDismissal:] */

void FUN_1069c14e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c075b60();
  if ((int)lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126cf910;
    _objc_alloc();
    func_0x00010bff3080();
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1069c1564; end: 1069c156b; -[SCModularCallAdaptiveTransitioningDelegate isInteractive] */

undefined1 FUN_1069c1564(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 1069c156c; end: 1069c1573; -[SCModularCallAdaptiveTransitioningDelegate setIsInteractive:] */

void FUN_1069c156c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 1069c1574; end: 1069c157f; -[SCModularCallAdaptiveTransitioningDelegate .cxx_destruct] */

void FUN_1069c1574(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069c1580; end: 1069c15ef; -[SCModularCallAdaptiveUIContainer initWithPresentingViewController:] */

undefined1 * FUN_1069c1580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f41c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    *(undefined1 *)((long)puVar1 + 0x20) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069c15f0; end: 1069c167b; -[SCModularCallAdaptiveUIContainer setIsFullscreen:] */

void FUN_1069c15f0(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  if (*(byte *)(param_1 + 0x20) != param_3) {
    *(char *)(param_1 + 0x20) = (char)param_3;
    lVar1 = param_1;
    func_0x00010be7f820();
    if (lVar1 == 3) {
      if ((param_3 & 1) == 0) {
LAB_10be03aa0:
                    /* WARNING: Could not recover jumptable at 0x00010be03ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s__dismissViewControllerInteractiv_11255e848);
        return;
      }
    }
    else if (lVar1 == 2) {
      if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf2f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(param_1 + 0x18),PTR_s_cancelTransitionWithCompletion__1125a9698,0
                  );
        return;
      }
    }
    else if (lVar1 == 1) {
      if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfafd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(param_1 + 0x18),PTR_s_finishTransition_1125c9908);
        return;
      }
      goto LAB_10be03aa0;
    }
  }
  return;
}



/* Entry: 1069c167c; end: 1069c1703; +[SCModularCallAdaptiveUIContainer rootViewControllerFromVC:] */

void FUN_1069c167c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  lVar2 = param_3;
  if (param_3 == 0) {
    lVar2 = 0;
LAB_1069c16e8:
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  do {
    lVar1 = lVar2;
    func_0x00010c0f3ca0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar1 = lVar2;
      func_0x00010c10fd00();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) goto LAB_1069c16e8;
    }
    _objc_release(lVar2);
    lVar2 = lVar1;
  } while( true );
}



/* Entry: 1069c1704; end: 1069c181b; -[SCModularCallAdaptiveUIContainer attachUI:] */

void FUN_1069c1704(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf29320(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b00();
  func_0x00010bf941a0(lVar1);
  uVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126c8138;
  _objc_opt_class(PTR_PTR_1126c8138);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  _objc_release(uVar2);
  if ((uVar4 & 1) == 0) {
    func_0x00010be7f4c0(param_1);
  }
  else {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1069c181c;
    puStack_58 = &UNK_110841f80;
    lStack_50 = param_1;
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x000100c749e0(0x3e4ccccd,"APPSTORE",&puStack_70);
    _objc_release(uStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1069c181c; end: 1069c1827;  */

void FUN_1069c181c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7f4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentViewController__11257d6d0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1069c1828; end: 1069c189f; -[SCModularCallAdaptiveUIContainer cameraControllerForAttachUI] */

void FUN_1069c1828(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cf918;
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1417e0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126cf918;
  func_0x00010bfaf160(PTR_PTR_1126cf918,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069c18a0; end: 1069c1a73; +[SCModularCallAdaptiveUIContainer findCameraViewControllerStartingFrom:] */

void FUN_1069c18a0(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 *unaff_x21;
  undefined1 *unaff_x22;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
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
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_3);
  if (param_3 == (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c8138;
    _objc_opt_class(PTR_PTR_1126c8138);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if (((ulong)puVar6 & 1) == 0) {
      unaff_x21 = param_3;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      if (unaff_x21 == (undefined1 *)0x0) {
LAB_1069c1950:
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        lStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        plStack_120 = (long *)0x0;
        unaff_x22 = param_3;
        func_0x00010bf38f00();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = unaff_x22;
        func_0x00010bf52a60();
        if (puVar3 != (undefined1 *)0x0) {
          lVar7 = *plStack_120;
          do {
            puVar8 = (undefined1 *)0x0;
            do {
              if (*plStack_120 != lVar7) {
                _objc_enumerationMutation(unaff_x22);
              }
              puVar4 = *(undefined8 **)(lStack_128 + (long)puVar8 * 8);
              puVar6 = param_1;
              func_0x00010bfaf160();
              _objc_retainAutoreleasedReturnValue();
              if (puVar6 != (undefined1 *)0x0) goto LAB_1069c19fc;
              puVar8 = puVar8 + 1;
            } while (puVar3 != puVar8);
            puVar3 = unaff_x22;
            puVar4 = &uStack_130;
            func_0x00010bf52a60();
          } while (puVar3 != (undefined1 *)0x0);
        }
        puVar6 = (undefined1 *)0x0;
LAB_1069c19fc:
        _objc_release(unaff_x22);
        puVar3 = (undefined1 *)puVar4;
      }
      else {
        unaff_x22 = unaff_x21;
        func_0x00010c10fd00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (unaff_x22 != param_3) goto LAB_1069c1950;
        puVar6 = param_1;
        puVar3 = unaff_x21;
        func_0x00010bfaf160();
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 == (undefined1 *)0x0) goto LAB_1069c1950;
      }
      _objc_release(unaff_x21);
    }
    else {
      _objc_retain(param_3);
      puVar6 = param_3;
    }
  }
  puVar8 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1069c1a74;
  puStack_160 = unaff_x22;
  puStack_158 = unaff_x21;
  puStack_150 = param_1;
  puStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  puVar6 = puVar8;
  func_0x00010be7f820();
  if ((long)puVar6 < 2) {
    if (puVar6 == (undefined1 *)0x0) {
      func_0x00010bf86d40(*(undefined8 *)(puVar8 + 0x18));
      if (puVar3 != (undefined1 *)0x0) {
        (**(code **)(puVar3 + 0x10))(puVar3);
      }
      goto LAB_1069c1bec;
    }
    if (puVar6 != (undefined1 *)0x1) goto LAB_1069c1bec;
    iVar1 = (int)*(undefined8 *)(puVar8 + 0x18);
    func_0x00010c075b60();
    if (iVar1 != 0) {
      puVar6 = puVar3;
      _objc_retainBlock();
      uVar5 = *(undefined8 *)(puVar8 + 0x28);
      *(undefined1 **)(puVar8 + 0x28) = puVar6;
      _objc_release(uVar5);
      _objc_initWeak(auStack_168,puVar8);
      uVar5 = *(undefined8 *)(puVar8 + 0x18);
      _objc_copyWeak(auStack_170,auStack_168);
      _objc_retain(puVar3);
      func_0x00010bf2f3c0(uVar5);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_170);
      _objc_destroyWeak(auStack_168);
      goto LAB_1069c1bec;
    }
  }
  else {
    if (puVar6 == (undefined1 *)0x2) {
      puVar6 = puVar3;
      _objc_retainBlock();
      uVar5 = *(undefined8 *)(puVar8 + 0x28);
      *(undefined1 **)(puVar8 + 0x28) = puVar6;
      _objc_release(uVar5);
      func_0x00010bfafd80(*(undefined8 *)(puVar8 + 0x18));
      goto LAB_1069c1bec;
    }
    if (puVar6 != (undefined1 *)0x3) goto LAB_1069c1bec;
    func_0x00010c1b1f20(*(undefined8 *)(puVar8 + 0x18));
  }
  puVar8 = puVar8 + 0x10;
  _objc_loadWeakRetained(puVar8);
  puVar6 = puVar8;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
  _objc_release(puVar6);
  _objc_release(puVar8);
LAB_1069c1bec:
  _objc_release(puVar3);
  return;
}



/* Entry: 1069c1a74; end: 1069c1c23; -[SCModularCallAdaptiveUIContainer detachUI:] */

void FUN_1069c1a74(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010be7f820();
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x18));
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))(param_3);
      }
      goto LAB_1069c1bec;
    }
    if (lVar2 != 1) goto LAB_1069c1bec;
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    func_0x00010c075b60();
    if (iVar1 != 0) {
      lVar2 = param_3;
      _objc_retainBlock();
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      *(long *)(param_1 + 0x28) = lVar2;
      _objc_release(uVar3);
      _objc_initWeak(auStack_38,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      _objc_copyWeak(auStack_40,auStack_38);
      _objc_retain(param_3);
      func_0x00010bf2f3c0(uVar3);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
      goto LAB_1069c1bec;
    }
  }
  else {
    if (lVar2 == 2) {
      lVar2 = param_3;
      _objc_retainBlock();
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      *(long *)(param_1 + 0x28) = lVar2;
      _objc_release(uVar3);
      func_0x00010bfafd80(*(undefined8 *)(param_1 + 0x18));
      goto LAB_1069c1bec;
    }
    if (lVar2 != 3) goto LAB_1069c1bec;
    func_0x00010c1b1f20(*(undefined8 *)(param_1 + 0x18));
  }
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
  _objc_release(lVar2);
  _objc_release(param_1);
LAB_1069c1bec:
  _objc_release(param_3);
  return;
}



/* Entry: 1069c1c24; end: 1069c1c8b;  */

void FUN_1069c1c24(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
  else {
    uVar2 = 0;
    if (*(long *)(lVar1 + 0x28) != 0) {
      (**(code **)(*(long *)(lVar1 + 0x28) + 0x10))();
      uVar2 = *(undefined8 *)(lVar1 + 0x28);
    }
    *(undefined8 *)(lVar1 + 0x28) = 0;
    _objc_release(uVar2);
    *(undefined1 *)(lVar1 + 0x30) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069c1c8c; end: 1069c1d6f; -[SCModularCallAdaptiveUIContainer _presentViewController:] */

void FUN_1069c1c8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126cf920;
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar4);
  func_0x00010c1b1f20(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c219b20(param_3);
  func_0x00010c1c8b80(param_3);
  _objc_storeWeak(param_1 + 0x10,param_3);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94800();
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10eda0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069c1d70; end: 1069c1e0f; -[SCModularCallAdaptiveUIContainer _dismissViewControllerInteractively] */

void FUN_1069c1d70(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c1b1f20(*(undefined8 *)(param_1 + 0x18),param_2,1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
  _objc_release(lVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 1069c1e10; end: 1069c1e4b;  */

void FUN_1069c1e10(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))();
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x30) = 1;
  }
  return;
}



/* Entry: 1069c1e4c; end: 1069c1f87; -[SCModularCallAdaptiveUIContainer _presentationState] */

undefined8 FUN_1069c1e4c(long param_1)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  lVar3 = param_1 + 0x10;
  _objc_loadWeakRetained();
  if ((lVar3 == 0) || (bVar2 = *(byte *)(param_1 + 0x30), _objc_release(), (bVar2 & 1) != 0)) {
    return 0;
  }
  uVar4 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar5 = uVar4;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  if (uVar5 == 0) {
    uVar5 = param_1 + 0x10;
    _objc_loadWeakRetained();
    uVar6 = uVar5;
    func_0x00010c06d1a0();
    if ((uVar6 & 1) == 0) {
      uVar6 = param_1 + 0x10;
      _objc_loadWeakRetained();
      uVar9 = uVar6;
      func_0x00010c06d1e0();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      if ((uVar9 & 1) == 0) {
        return 0;
      }
      goto LAB_1069c1ec8;
    }
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
LAB_1069c1ec8:
  lVar3 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar7 = lVar3;
  func_0x00010c06d1a0();
  if ((int)lVar7 == 0) {
    lVar7 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010c06d1e0();
    _objc_release(lVar7);
    _objc_release(lVar3);
    if ((int)lVar8 == 0) {
      return 3;
    }
  }
  else {
    _objc_release(lVar3);
  }
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar3 = param_1;
  func_0x00010c06d1a0();
  uVar1 = 1;
  if ((int)lVar3 != 0) {
    uVar1 = 2;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1069c1f88; end: 1069c1fc7; -[SCModularCallAdaptiveUIContainer .cxx_destruct] */

void FUN_1069c1f88(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1069c1fc8; end: 1069c1fcf; -[SCTBaseLocalVideoWrapperView initWithFrame:cameraUIProvider:] */

void FUN_1069c1fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c013fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithFrame_cameraUIProvider_l_1125e29b8,param_3,0);
  return;
}



/* Entry: 1069c1fd0; end: 1069c20d3; -[SCTBaseLocalVideoWrapperView initWithFrame:cameraUIProvider:lensUIProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1069c1fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f41c8;
  uStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112755034),param_7);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    if (param_8 != 0) {
      _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112755038),param_8);
    }
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 1069c20d4; end: 1069c2123; -[SCTBaseLocalVideoWrapperView setTouchesAllowed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c20d4(long param_1)

{
  if (*(long *)(param_1 + _DAT_11275503c) != 0) {
    param_1 = param_1 + _DAT_112755038;
    _objc_loadWeakRetained(param_1);
    func_0x00010c218de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1069c2124; end: 1069c21bb; -[SCTBaseLocalVideoWrapperView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c2124(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f41c8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  lVar2 = (long)_DAT_11275503c;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == param_1) {
    func_0x00010bf20c00(param_1);
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar2));
  }
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112755040));
  return;
}



/* Entry: 1069c21bc; end: 1069c228b; -[SCTBaseLocalVideoWrapperView attachCameraPreview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c21bc(long param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if ((*(byte *)(param_1 + _DAT_112755044) & 1) == 0) {
    _objc_initWeak(auStack_28,param_1);
    param_1 = param_1 + _DAT_112755034;
    _objc_loadWeakRetained(param_1);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010bfcc2a0(param_1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 1069c228c; end: 1069c22d3;  */

void FUN_1069c228c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd0260();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069c22d4; end: 1069c2347; -[SCTBaseLocalVideoWrapperView _attachCameraPreview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c22d4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar2 = (long)_DAT_11275503c;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010c066fa0(param_1,param_2,param_3,0);
    func_0x00010bf20c00(param_1);
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar2));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069c2348; end: 1069c2403; -[SCTBaseLocalVideoWrapperView freezeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c2348(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)_DAT_112755044;
  if ((*(byte *)(param_1 + lVar3) & 1) != 0) {
    return;
  }
  lVar1 = param_1;
  func_0x00010c245f60(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010befbb60(param_1,param_2,lVar1);
    func_0x00010bf20c00(param_1);
    func_0x00010c19f0e0(lVar1);
    lVar4 = (long)_DAT_112755040;
    _objc_retain(lVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = lVar1;
    _objc_release(uVar2);
  }
  lVar4 = (long)_DAT_11275503c;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar4));
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + lVar3) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069c2404; end: 1069c24b7; -[SCTBaseLocalVideoWrapperView unfreezeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c2404(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112755044;
  if (*(char *)(param_1 + lVar3) == '\x01') {
    lVar2 = param_1 + _DAT_112755034;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bfcc2a0();
    _objc_release(lVar2);
    lVar2 = (long)_DAT_112755040;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + lVar3) = 0;
  }
  return;
}



/* Entry: 1069c24b8; end: 1069c24c3;  */

void FUN_1069c24b8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd0270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__attachCameraPreview__112551a38,param_2);
  return;
}



/* Entry: 1069c24c4; end: 1069c251b; -[SCTBaseLocalVideoWrapperView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c24c4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112755040,0);
  _objc_storeStrong(param_1 + _DAT_11275503c,0);
  _objc_destroyWeak(param_1 + _DAT_112755038);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112755034);
  return;
}



/* Entry: 1069c251c; end: 1069c254f; -[SCTConnectedLensWrapperView initWithFrame:cameraUIProvider:lensUIProvider:] */

void FUN_1069c251c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f41d0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFrame_cameraUIProvider_l_1125e29b8);
  return;
}



/* Entry: 1069c2550; end: 1069c2673; +[SCTConnectedLensWrapperView bindAttributes:] */

void FUN_1069c2550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf1a080(param_3,param_2,&PTR____CFConstantStringClassReference_110e66df8,0,
                      &PTR___NSConcreteGlobalBlock_110951520,&PTR___NSConcreteGlobalBlock_110951540)
  ;
  func_0x00010bf1a080(param_3,param_2,&PTR____CFConstantStringClassReference_110e66e18,0,
                      &PTR___NSConcreteGlobalBlock_110951580,&PTR___NSConcreteGlobalBlock_1109515c0)
  ;
  func_0x00010bf1a080(param_3,param_2,&PTR____CFConstantStringClassReference_110e66e38,0,
                      &PTR___NSConcreteGlobalBlock_1109515e0,&PTR___NSConcreteGlobalBlock_110951600)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069c2674; end: 1069c2683;  */

void FUN_1069c2674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdce130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__applyEnableSharedLensTouches__1125511e8,
             *(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 1069c2684; end: 1069c2707;  */

void FUN_1069c2684(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1069c2708;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_2;
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 1069c2708; end: 1069c272b;  */

void FUN_1069c2708(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdce130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__applyEnableSharedLensTouches__1125511e8,0);
  return;
}



/* Entry: 1069c272c; end: 1069c272f; -[SCTConnectedLensWrapperView _applyEnableSharedLensTouches:] */

void FUN_1069c272c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c218df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTouchesAllowed__112663da0);
  return;
}



/* Entry: 1069c2730; end: 1069c285b; -[SCTLocalVideoWrapperView initWithFrame:cameraUIProvider:lensUIProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1069c2730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f41d8;
  uStack_70 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_70,
                      PTR_s_initWithFrame_cameraUIProvider_l_1125e29b8,param_7,param_8);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112755048),param_7);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    lVar4 = (long)_DAT_11275504c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112755050),param_8);
    func_0x00010bef9040(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 1069c285c; end: 1069c28cb; +[SCTLocalVideoWrapperView bindAttributes:] */

void FUN_1069c285c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf1a080(param_3,param_2,&PTR____CFConstantStringClassReference_110e66e58,0,
                      &PTR___NSConcreteGlobalBlock_110951640,&PTR___NSConcreteGlobalBlock_110951680)
  ;
  func_0x00010bf1a080(param_3,param_2,&PTR____CFConstantStringClassReference_110e66e18,0,
                      &PTR___NSConcreteGlobalBlock_1109516a0,&PTR___NSConcreteGlobalBlock_1109516c0)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069c28cc; end: 1069c28e7;  */

undefined8 FUN_1069c28cc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bea4280(param_2);
  return 1;
}



/* Entry: 1069c28e8; end: 1069c28ff;  */

void FUN_1069c28e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea4290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__setGestureRecognizerEnabled__112586a48,0);
  return;
}



/* Entry: 1069c2900; end: 1069c2937; -[SCTLocalVideoWrapperView _setGestureRecognizerEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c2900(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_11275504c));
                    /* WARNING: Could not recover jumptable at 0x00010c218df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTouchesAllowed__112663da0,param_3);
  return;
}



/* Entry: 1069c2938; end: 1069c29ef; -[SCTLocalVideoWrapperView _cameraPreviewTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c2938(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010c09ef00(param_5,param_4,param_3);
  lVar1 = param_3 + _DAT_112755048;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf20c00(param_3);
  func_0x00010c16d2c0(param_1,param_2,lVar1);
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126cf928;
  func_0x00010c268d00(PTR_PTR_1126cf928);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_3,param_4,puVar2);
  func_0x00010c17a6a0(param_1,param_2,puVar2);
  func_0x00010c23ade0(puVar2,param_4,&PTR___NSConcreteGlobalBlock_110951700,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1069c29f0; end: 1069c29f7;  */

void FUN_1069c29f0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 1069c29f8; end: 1069c2a37; -[SCTLocalVideoWrapperView gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1069c29f8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112755050;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c06f2c0();
  _objc_release(param_1);
  return (uint)lVar1 ^ 1;
}



/* Entry: 1069c2a38; end: 1069c2a7f; -[SCTLocalVideoWrapperView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c2a38(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275504c,0);
  _objc_destroyWeak(param_1 + _DAT_112755050);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112755048);
  return;
}



/* Entry: 1069c2a80; end: 1069c2d7b; -[SCTScreenShareVideoWrapperView initWithFrame:videoView:applicationLifecycleEvents:zoomEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1069c2a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,int param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined *puStack_88;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_88 = PTR_PTR_1126f41e0;
  puVar1 = &uStack_90;
  uStack_90 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    uVar8 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_112755054;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = uVar8;
    _objc_release(uVar7);
    func_0x00010c1be240(*(undefined8 *)((long)puVar1 + lVar9));
    *(char *)((long)puVar1 + (long)_DAT_112755058) = (char)param_9;
    lVar9 = *(long *)((long)puVar1 + lVar9);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar9 != 0) {
      puVar2 = puVar1;
      if (param_9 != 0) {
        func_0x00010beaf8a0(puVar1);
        puVar2 = *(undefined8 **)((long)puVar1 + (long)_DAT_11275505c);
      }
      func_0x00010befbb60(puVar2);
      func_0x00010c17d4c0(puVar1);
      if (param_8 != 0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf07b60();
        *(bool *)((long)puVar1 + (long)_DAT_112755060) = puVar4 == (undefined *)0x2;
        _objc_release(puVar3);
        puVar3 = PTR_PTR_1126ae810;
        _objc_opt_new();
        uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_112755064);
        *(undefined **)((long)puVar1 + (long)_DAT_112755064) = puVar3;
        _objc_release(uVar8);
        _objc_initWeak(auStack_98,puVar1);
        lVar5 = param_8;
        func_0x00010c2a6420(param_8);
        _objc_retainAutoreleasedReturnValue();
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0xc2000000;
        pcStack_b0 = FUN_1069c2d7c;
        puStack_a8 = &UNK_110846510;
        _objc_copyWeak(auStack_a0,auStack_98);
        lVar6 = lVar5;
        func_0x00010c25ff60(lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1a3e0();
        _objc_release(lVar6);
        _objc_release(lVar5);
        lVar5 = param_8;
        func_0x00010bf75dc0(param_8);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_c8,auStack_98);
        lVar6 = lVar5;
        func_0x00010c25ff60(lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1a3e0();
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_destroyWeak(auStack_c8);
        _objc_destroyWeak(auStack_a0);
        _objc_destroyWeak(auStack_98);
      }
      _objc_release(lVar9);
    }
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 1069c2d7c; end: 1069c2ddb;  */

void FUN_1069c2d7c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be67ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069c2ddc; end: 1069c2e2b; -[SCTScreenShareVideoWrapperView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c2ddc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c255780(*(undefined8 *)(param_1 + _DAT_112755054));
  puStack_28 = PTR_PTR_1126f41e0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1069c2e2c; end: 1069c2ed3; -[SCTScreenShareVideoWrapperView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c2e2c(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f41e0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  lVar1 = *(long *)(param_1 + _DAT_112755054);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    if (*(char *)(param_1 + _DAT_112755058) == '\x01') {
      func_0x00010bfb68e0(param_1);
      func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11275505c));
    }
    func_0x00010bed86c0(*(undefined8 *)(param_1 + _DAT_112755068),
                        ((undefined8 *)(param_1 + _DAT_112755068))[1],param_1);
  }
  return;
}



/* Entry: 1069c2ed4; end: 1069c2fc7; +[SCTScreenShareVideoWrapperView viewFactoryWithRuntime:videoView:applicationLifecycleEvents:zoomEnabled:] */

void FUN_1069c2ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126cf8d0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1069c2fc8;
  puStack_50 = &UNK_110951720;
  uStack_48 = param_4;
  uStack_40 = param_5;
  uStack_38 = param_6;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_3;
  func_0x00010c0b7ac0(param_3,param_2,&puStack_68,&PTR___NSConcreteGlobalBlock_110951750,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1069c2fc8; end: 1069c31af;  */

void FUN_1069c2fc8(void)

{
  _objc_alloc(PTR_PTR_1126cf8d0);
  func_0x00010c0151a0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069c31b0; end: 1069c31bb;  */

void FUN_1069c31b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beaa050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setVideoSinkId__1125881b8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1069c31bc; end: 1069c323f;  */

void FUN_1069c31bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1069c3240;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_2;
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 1069c3240; end: 1069c3257;  */

void FUN_1069c3240(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beaa050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setVideoSinkId__1125881b8,0);
  return;
}



/* Entry: 1069c3258; end: 1069c32ff;  */

void FUN_1069c3258(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1069c3300;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_2;
  uStack_28 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1069c3300; end: 1069c330b;  */

void FUN_1069c3300(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea6130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setOnVideoFinishedLoadingAction_1125871f0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1069c330c; end: 1069c338f;  */

void FUN_1069c330c(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1069c3390;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_2;
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 1069c3390; end: 1069c339b;  */

void FUN_1069c3390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea6130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setOnVideoFinishedLoadingAction_1125871f0,0);
  return;
}



/* Entry: 1069c339c; end: 1069c3443;  */

void FUN_1069c339c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1069c3444;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_2;
  uStack_28 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1069c3444; end: 1069c344f;  */

void FUN_1069c3444(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea6110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setOnScaleChangedAction__1125871e8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}


