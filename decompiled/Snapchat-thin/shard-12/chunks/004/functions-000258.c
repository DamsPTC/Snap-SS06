/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090660b8; end: 109066127; -[SCVideoEncoder _completeEncodingWithError:] */

void FUN_1090660b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c299ee0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109066128; end: 10906617b; -[SCVideoEncoder _createOutputPixelBuffer] */

/* WARNING: Possible PIC construction at 0x00010906613c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109066140) */
/* WARNING: Removing unreachable block (ram,0x000109066164) */
/* WARNING: Removing unreachable block (ram,0x000109066154) */

void FUN_109066128(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf57870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_createPixelBuffer_1125b37c0);
  return;
}



/* Entry: 10906617c; end: 1090661c7; -[SCVideoEncoder _isValidPixelBuffer:] */

bool FUN_10906617c(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  if (param_3 != 0) {
    lVar2 = param_3;
    _CVPixelBufferGetWidthOfPlane(param_3,0);
    bVar1 = false;
    if (lVar2 != 0) {
      _CVPixelBufferGetHeightOfPlane(param_3,0);
      bVar1 = param_3 != 0;
    }
    return bVar1;
  }
  return false;
}



/* Entry: 1090661c8; end: 10906635f; -[SCVideoEncoder _assetWriterStatusChanged:] */

void FUN_1090661c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,*(undefined8 *)PTR__NSKeyValueChangeNewKey_110345500);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x38);
  func_0x00010c252d60();
  if (lVar2 == 4) {
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c299f20();
    _objc_release(lVar2);
    func_0x00010bddf200(param_1);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x38);
    func_0x00010c252d60();
    if (lVar2 == 3) {
      lVar2 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar2);
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bf987e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      FUN_109053f70();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar4,param_2,&PTR____CFConstantStringClassReference_110f1e278,0xbbd,
                          uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c299ee0(lVar2,param_2,param_1,puVar4);
      _objc_release(puVar4);
      _objc_release(uVar1);
      _objc_release(uVar3);
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109066360; end: 109066423; -[SCVideoEncoder _cleanUpResourceOnCancel] */

void FUN_109066360(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110f1e3b8,1,0);
  if ((int)uVar1 != 0) {
    _objc_initWeak(auStack_28,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 109066424; end: 109066497;  */

void FUN_109066424(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x60) != 0) {
      _CFRelease();
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    _CVPixelBufferRelease(*(undefined8 *)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0x88) = 0;
    func_0x00010c195860(param_1,param_2,1);
    if (*(long *)(param_1 + 0x108) != 0) {
      _dispatch_semaphore_signal();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109066498; end: 1090664bf; -[SCVideoEncoder _getSourcePixelBufferSizeWithInputSize:orientation:] */

undefined1  [16]
FUN_109066498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = param_1;
  uVar1 = param_2;
  if ((1L << (param_5 & 0x3f) & 0xccU) == 0) {
    uVar2 = param_2;
    uVar1 = param_1;
  }
  if (param_5 < 8) {
    param_2 = uVar2;
    param_1 = uVar1;
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1090664c0; end: 10906668b; -[SCVideoEncoder _videoEncoderAudioOutputSettingsForSampleBuffer:] */

void FUN_1090664c0(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _CMSampleBufferGetFormatDescription();
  if ((param_3 == 0) || (_CMAudioFormatDescriptionGetStreamBasicDescription(), param_3 == 0)) {
    uVar9 = 1;
  }
  else {
    uVar9 = *(undefined4 *)(param_3 + 0x1c);
  }
  uVar6 = 0x61616320;
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 == 0) {
    uVar7 = 0;
  }
  else {
    bVar1 = *(char *)(lVar8 + 8) == '\0';
    uVar6 = 0x61616368;
    if (bVar1) {
      uVar6 = 0x61616320;
    }
    uVar7 = 0x40df400000000000;
    if (bVar1) {
      uVar7 = *(undefined8 *)(lVar8 + 0x28);
    }
  }
  uStack_88 = *(undefined8 *)PTR__AVFormatIDKey_11034cf30;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uStack_80 = *(undefined8 *)PTR__AVNumberOfChannelsKey_11034cf58;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_68 = puVar2;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = *(undefined8 *)PTR__AVSampleRateKey_11034cf60;
  ppuStack_58 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185ef0;
  uStack_70 = *(undefined8 *)PTR__AVEncoderBitRateKey_11034cf28;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_60 = puVar5;
  func_0x00010c0df720(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_68,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar5);
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar2);
    __Unwind_Resume();
    lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(puVar4 + 0x18) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(*(long *)(puVar4 + 0x18) + 0x50);
    }
    ppuVar12 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,puVar5,
                        *(undefined8 *)PTR__AVVideoMaxKeyFrameIntervalKey_110348170);
    _objc_release(puVar5);
    if (*(long *)(puVar4 + 0x18) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(*(long *)(puVar4 + 0x18) + 0x20);
    }
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(uVar7,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,puVar5,*(undefined8 *)PTR__AVVideoAverageBitRateKey_110348108
                       );
    _objc_release(puVar5);
    if (*(long *)(puVar4 + 0x18) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(*(long *)(puVar4 + 0x18) + 0x30);
    }
    _objc_retain(uVar7);
    uVar11 = uVar7;
    func_0x00010c0720c0(uVar7,param_2,*(undefined8 *)PTR__AVVideoCodecTypeH264_110348128);
    if ((int)uVar11 == 0) {
      uVar11 = uVar7;
      func_0x00010c0720c0(uVar7,param_2,*(undefined8 *)PTR__AVVideoCodecTypeHEVC_110348130);
      if ((int)uVar11 == 0) {
        puVar10 = (undefined *)0x0;
        goto LAB_1090668c8;
      }
    }
    else {
      if (*(long *)(puVar4 + 0x18) == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(*(long *)(puVar4 + 0x18) + 0x38);
      }
      _objc_retain(uVar11);
      func_0x00010c1d0640(puVar2,param_2,uVar11,*(undefined8 *)PTR__AVVideoProfileLevelKey_110348180
                         );
      _objc_release(uVar11);
    }
    uStack_128 = *(undefined8 *)PTR__AVVideoCodecKey_110348120;
    uStack_120 = *(undefined8 *)PTR__AVVideoCompressionPropertiesKey_110348158;
    puVar3 = puVar2;
    uStack_100 = uVar7;
    func_0x00010bf51e00();
    uStack_118 = *(undefined8 *)PTR__AVVideoWidthKey_1103481a0;
    puVar10 = puVar4;
    puStack_f8 = puVar3;
    if (*(long *)(puVar4 + 0x18) == 0) goto LAB_109066928;
    uVar11 = *(undefined8 *)(*(long *)(puVar4 + 0x18) + 0x10);
    while( true ) {
      puVar5 = ppuVar12[0xae];
      func_0x00010c0df720(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uStack_110 = *(undefined8 *)PTR__AVVideoHeightKey_110348168;
      if (*(long *)(puVar10 + 0x18) == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(*(long *)(puVar10 + 0x18) + 0x18);
      }
      ppuVar12 = (undefined **)ppuVar12[0xae];
      puStack_f0 = puVar5;
      func_0x00010c0df720(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uStack_108 = *(undefined8 *)PTR__AVVideoScalingModeKey_110348188;
      uStack_e0 = *(undefined8 *)PTR__AVVideoScalingModeResizeAspectFill_110348190;
      puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      ppuStack_e8 = ppuVar12;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_100,&uStack_128,5
                         );
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar12);
      _objc_release(puVar5);
      _objc_release(puVar3);
LAB_1090668c8:
      _objc_release(uVar7);
      _objc_release(puVar2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) break;
      ___stack_chk_fail();
LAB_109066928:
      uVar11 = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10906668c; end: 1090669bf; -[SCVideoEncoder _videoEncoderVideoOutputSettings] */

void FUN_10906668c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *unaff_x22;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x50);
  }
  ppuVar5 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,
                      *(undefined8 *)PTR__AVVideoMaxKeyFrameIntervalKey_110348170);
  _objc_release(puVar2);
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(uVar3,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,*(undefined8 *)PTR__AVVideoAverageBitRateKey_110348108);
  _objc_release(puVar2);
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
  }
  _objc_retain(uVar3);
  uVar4 = uVar3;
  func_0x00010c0720c0(uVar3,param_2,*(undefined8 *)PTR__AVVideoCodecTypeH264_110348128);
  if ((int)uVar4 == 0) {
    uVar4 = uVar3;
    func_0x00010c0720c0(uVar3,param_2,*(undefined8 *)PTR__AVVideoCodecTypeHEVC_110348130);
    if ((int)uVar4 == 0) {
      param_1 = (undefined *)0x0;
      goto LAB_1090668c8;
    }
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x38);
    }
    _objc_retain(uVar4);
    func_0x00010c1d0640(puVar1,param_2,uVar4,*(undefined8 *)PTR__AVVideoProfileLevelKey_110348180);
    _objc_release(uVar4);
  }
  uStack_98 = *(undefined8 *)PTR__AVVideoCodecKey_110348120;
  uStack_90 = *(undefined8 *)PTR__AVVideoCompressionPropertiesKey_110348158;
  unaff_x22 = puVar1;
  uStack_70 = uVar3;
  func_0x00010bf51e00();
  uStack_88 = *(undefined8 *)PTR__AVVideoWidthKey_1103481a0;
  puStack_68 = unaff_x22;
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_109066928;
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
  while( true ) {
    puVar2 = ppuVar5[0xae];
    func_0x00010c0df720(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = *(undefined8 *)PTR__AVVideoHeightKey_110348168;
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18);
    }
    ppuVar5 = (undefined **)ppuVar5[0xae];
    puStack_60 = puVar2;
    func_0x00010c0df720(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = *(undefined8 *)PTR__AVVideoScalingModeKey_110348188;
    uStack_50 = *(undefined8 *)PTR__AVVideoScalingModeResizeAspectFill_110348190;
    param_1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_58 = ppuVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_70,&uStack_98,5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(puVar2);
    _objc_release(unaff_x22);
LAB_1090668c8:
    _objc_release(uVar3);
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) break;
    ___stack_chk_fail();
LAB_109066928:
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1090669c0; end: 109066ad7; -[SCVideoEncoder _appendVideoSampleBuffer:] */

void FUN_1090669c0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  lVar1 = param_3;
  _CMSampleBufferGetImageBuffer();
  _CMSampleBufferGetOutputPresentationTimeStamp(auStack_58,param_3);
  if (param_4 == 0) {
    func_0x00010bf06f60(*(undefined8 *)(param_1 + 0x58));
  }
  else {
    lVar2 = param_1;
    func_0x00010bdf0ec0(param_1);
    _CVPixelBufferLockBaseAddress(lVar1,0);
    _CVPixelBufferLockBaseAddress(lVar2,0);
    lVar3 = lVar1;
    _CVPixelBufferGetPlaneCount();
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        func_0x00010bde9340(param_1);
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    _CVPixelBufferUnlockBaseAddress(lVar2,0);
    _CVPixelBufferUnlockBaseAddress(lVar1,0);
    func_0x00010bf06f60(*(undefined8 *)(param_1 + 0x58));
    _CVPixelBufferRelease(lVar2);
  }
  return;
}



/* Entry: 109066ad8; end: 109066bf7; -[SCVideoEncoder _convertPlaneInputPixelBuffer:outputPixelBuffer:orientation:planeIndex:] */

void FUN_109066ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_3;
  _CVPixelBufferGetWidthOfPlane(param_3,param_6);
  uVar2 = param_3;
  _CVPixelBufferGetHeightOfPlane(param_3,param_6);
  uVar3 = param_3;
  _CVPixelBufferGetBytesPerRowOfPlane(param_3,param_6);
  _CVPixelBufferGetBaseAddressOfPlane(param_3,param_6);
  uVar4 = param_4;
  _CVPixelBufferGetWidthOfPlane(param_4,param_6);
  uVar5 = param_4;
  _CVPixelBufferGetHeightOfPlane(param_4,param_6);
  uVar6 = param_4;
  _CVPixelBufferGetBytesPerRowOfPlane(param_4,param_6);
  _CVPixelBufferGetBaseAddressOfPlane(param_4,param_6);
  if (param_6 == 0) {
    func_0x00010908b688(param_5,param_3,uVar1,uVar2,uVar3,param_4,uVar4,uVar5,uVar6);
  }
  else {
    func_0x00010908b94c(param_5,param_3,uVar1,uVar2,uVar3,param_4,uVar4,uVar5,uVar6);
  }
  return;
}



/* Entry: 109066bf8; end: 109066c37; -[SCVideoEncoder _claimFrameFetchFailure] */

byte FUN_109066bf8(long param_1)

{
  byte bVar1;
  
  _os_unfair_lock_lock(param_1 + 0xd4);
  bVar1 = *(byte *)(param_1 + 0xd0);
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xd0) = 1;
  }
  _os_unfair_lock_unlock(param_1 + 0xd4);
  return bVar1 ^ 1;
}



/* Entry: 109066c38; end: 109066ea7; -[SCVideoEncoder _fetchNextVideoFrameWithTimeoutForFrameProvider:timedOut:] */

undefined1  [16]
FUN_109066c38(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  char *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  uStack_78 = *(undefined8 *)(param_1 + 0x78);
  uStack_80 = *(undefined8 *)(param_1 + 0x70);
  uStack_70 = *(undefined8 *)(param_1 + 0x80);
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x48);
  }
  uStack_c0 = 0;
  uStack_b0 = 0x4012000000;
  pcStack_a8 = FUN_109066ea8;
  uStack_a0 = 0x109066eb4;
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "";
  uStack_e0 = 0;
  uStack_d0 = 0x2020000000;
  uStack_c8 = 0;
  lVar1 = 0;
  puStack_d8 = &uStack_e0;
  puStack_b8 = &uStack_c0;
  _dispatch_semaphore_create();
  uVar2 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_109066eb8;
  puStack_130 = &UNK_110ad6748;
  lStack_128 = param_1;
  _objc_retain(param_3);
  uStack_f0 = uStack_78;
  uStack_f8 = uStack_80;
  uStack_e8 = uStack_70;
  uStack_120 = param_3;
  puStack_110 = &uStack_e0;
  puStack_108 = &uStack_c0;
  uStack_100 = uVar4;
  _objc_retain(lVar1);
  lStack_118 = lVar1;
  func_0x000107c27d8c(uVar2,&puStack_148);
  _objc_release(uVar2);
  uVar4 = 0;
  _dispatch_time(0,(long)(*(double *)(param_1 + 200) * 1000000000.0));
  lVar3 = lVar1;
  _dispatch_semaphore_wait(lVar1,uVar4);
  if (lVar3 == 0) {
    uVar4 = puStack_b8[6];
    uVar2 = puStack_b8[7];
  }
  else {
    _os_unfair_lock_lock(param_1 + 0xd4);
    *(undefined1 *)(puStack_d8 + 3) = 1;
    if (puStack_b8[6] != 0) {
      _CFRelease();
    }
    puStack_b8[6] = 0;
    puStack_b8[7] = 0;
    _os_unfair_lock_unlock(param_1 + 0xd4);
    uVar4 = 0;
    uVar2 = 0;
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 1;
    }
  }
  _objc_release(lStack_118);
  _objc_release(uStack_120);
  _objc_release(lVar1);
  __Block_object_dispose(&uStack_e0,8);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(param_3);
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Entry: 109066ea8; end: 109066eb7;  */

void FUN_109066ea8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}



/* Entry: 109066eb8; end: 109066f5f;  */

void FUN_109066eb8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uStack_48 = *(undefined8 *)(param_1 + 0x58);
  uStack_50 = *(undefined8 *)(param_1 + 0x50);
  uStack_40 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010be12de0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28),&uStack_50,
                      *(undefined8 *)(param_1 + 0x48));
  _os_unfair_lock_lock(*(long *)(param_1 + 0x20) + 0xd4);
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) == '\x01') {
    if (lVar1 != 0) {
      _CFRelease(lVar1);
    }
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    *(long *)(lVar2 + 0x30) = lVar1;
    *(undefined8 *)(lVar2 + 0x38) = param_2;
  }
  _os_unfair_lock_unlock(*(long *)(param_1 + 0x20) + 0xd4);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 109066f60; end: 1090672a7; -[SCVideoEncoder _fetchNextVideoFrameWithFrameProvider:currentPresentationTime:maxFrameRate:] */

/* WARNING: Removing unreachable block (ram,0x000109067084) */
/* WARNING: Removing unreachable block (ram,0x0001090670c4) */
/* WARNING: Removing unreachable block (ram,0x0001090670d0) */

undefined1  [16]
FUN_109066f60(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 auStack_d8 [3];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  uint uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar4 = 0;
    puVar5 = (undefined8 *)0x0;
  }
  else {
    uStack_88 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
    uStack_80 = *(undefined4 *)(PTR__kCMTimeInvalid_110348648 + 8);
    uVar3 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
    uVar6 = *(uint *)(PTR__kCMTimeInvalid_110348648 + 0xc);
    uStack_78 = uStack_88;
    uStack_70 = uStack_80;
    if ((*(byte *)((long)param_4 + 0xc) & 1) != 0) {
      uStack_b8 = param_4[1];
      uStack_c0 = *param_4;
      uStack_b0 = param_4[2];
      _CMTimeMake(auStack_d8,1,param_5);
      _CMTimeAdd(&uStack_a0,&uStack_c0,auStack_d8);
      uStack_b8 = param_4[1];
      uStack_c0 = *param_4;
      uStack_b0 = param_4[2];
      _CMTimeMake(auStack_d8,1,(int)param_5 << 4);
      param_2 = auStack_d8;
      _CMTimeAdd(&uStack_a0,&uStack_c0,param_2);
      uStack_78 = uStack_a0;
      uStack_70 = uStack_98;
      uVar3 = uStack_90;
      uVar6 = uStack_94;
    }
    lVar4 = 0;
    do {
      puVar5 = param_2;
      if (lVar4 != 0) {
        _CFRelease(lVar4);
        puVar5 = param_2;
      }
      lVar4 = param_3;
      func_0x00010bf66fc0();
      param_2 = puVar5;
      _objc_retain(0);
      if (lVar4 == 0) {
        _objc_release(0);
        break;
      }
      _CMSampleBufferGetOutputPresentationTimeStamp(&uStack_a0,lVar4);
      uStack_88 = uStack_a0;
      uStack_80 = uStack_98;
      _objc_release(0);
      if ((uStack_94 & 1) == 0 || (uVar6 & 1) == 0) break;
      uStack_a0 = uStack_88;
      uStack_98 = uStack_80;
      uStack_c0 = uStack_78;
      uStack_b8 = CONCAT44(uVar6,uStack_70);
      puVar1 = &uStack_a0;
      param_2 = &uStack_c0;
      uStack_b0 = uVar3;
      _CMTimeCompare(puVar1,param_2);
    } while ((int)puVar1 < 0);
  }
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_release(param_3);
    __Unwind_Resume();
    if (*(long *)(lVar2 + 0xd8) != 0) {
      _CFRelease();
    }
    *(undefined8 *)(lVar2 + 0xd8) = 0;
    if (*(long *)(lVar2 + 0x60) != 0) {
      _CFRelease();
    }
    *(undefined8 *)(lVar2 + 0x60) = 0;
    uVar3 = *(undefined8 *)(lVar2 + 0x40);
    *(undefined8 *)(lVar2 + 0x40) = 0;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(lVar2 + 0x48);
    *(undefined8 *)(lVar2 + 0x48) = 0;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(lVar2 + 0x38);
    *(undefined8 *)(lVar2 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = uVar3;
    return auVar8;
  }
  auVar7._8_8_ = puVar5;
  auVar7._0_8_ = lVar4;
  return auVar7;
}



/* Entry: 1090672a8; end: 109067303; -[SCVideoEncoder _cleanupForEncoding] */

void FUN_1090672a8(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0xd8) != 0) {
    _CFRelease();
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    _CFRelease();
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109067304; end: 10906730b; -[SCVideoEncoder muxerAudioProcessedFrameCount] */

undefined8 FUN_109067304(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 10906730c; end: 109067313; -[SCVideoEncoder setMuxerAudioProcessedFrameCount:] */

void FUN_10906730c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x130) = param_3;
  return;
}



/* Entry: 109067314; end: 10906731f; -[SCVideoEncoder encodingCancelled] */

byte FUN_109067314(long param_1)

{
  return *(byte *)(param_1 + 0x128) & 1;
}



/* Entry: 109067320; end: 109067327; -[SCVideoEncoder setEncodingCancelled:] */

void FUN_109067320(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x128) = param_3;
  return;
}



/* Entry: 109067328; end: 1090673ef; -[SCVideoEncoder .cxx_destruct] */

void FUN_109067328(long param_1)

{
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090673f0; end: 10906744f;  */

void FUN_1090673f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lStack_40;
  undefined *puStack_38;
  
  if (param_1 != 0) {
    plVar1 = &lStack_40;
    puStack_38 = PTR_PTR_112700148;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      *(undefined8 *)((long)plVar1 + 0x10) = param_3;
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
    }
  }
  return;
}



/* Entry: 109067450; end: 109067473; -[SCVideoEncoderPixelBufferAttributes copyWithZone:] */

undefined8 FUN_109067450(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109067474; end: 1090674d3; -[SCVideoEncoderPixelBufferAttributes hash] */

undefined8 * FUN_109067474(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 8);
  uStack_20 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8) ||
          (*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10))))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x18) == *(long *)(param_3 + 0x18));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar3;
}



/* Entry: 1090674d4; end: 10906757b; -[SCVideoEncoderPixelBufferAttributes isEqual:] */

bool FUN_1090674d4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) ||
         ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
          (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10906757c; end: 109067707;  */

undefined1 *
FUN_10906757c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             undefined1 param_13,undefined8 *param_14,undefined8 param_15)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_a0;
  undefined *puStack_98;
  
  plVar1 = &lStack_a0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_15);
  puVar3 = (undefined1 *)0x0;
  if (param_6 != 0) {
    puStack_98 = PTR_PTR_112700150;
    lStack_a0 = param_6;
    _objc_msgSendSuper2(&lStack_a0,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 0x10) = param_1;
      *(undefined8 *)((long)plVar1 + 0x18) = param_2;
      *(undefined8 *)((long)plVar1 + 0x20) = param_3;
      *(undefined8 *)((long)plVar1 + 0x28) = param_4;
      uVar4 = param_7;
      func_0x00010bf51e00();
      uVar2 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = uVar4;
      _objc_release(uVar2);
      uVar4 = param_8;
      func_0x00010bf51e00();
      uVar2 = *(undefined8 *)((long)plVar1 + 0x38);
      *(undefined8 *)((long)plVar1 + 0x38) = uVar4;
      _objc_release(uVar2);
      uVar4 = param_9;
      func_0x00010bf51e00();
      uVar2 = *(undefined8 *)((long)plVar1 + 0x40);
      *(undefined8 *)((long)plVar1 + 0x40) = uVar4;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x48) = param_10;
      *(undefined8 *)((long)plVar1 + 0x50) = param_11;
      *(undefined1 *)((long)plVar1 + 8) = param_12;
      *(undefined1 *)((long)plVar1 + 9) = param_13;
      uVar2 = param_14[1];
      uVar4 = *param_14;
      uVar6 = param_14[3];
      uVar5 = param_14[2];
      uVar7 = param_14[4];
      *(undefined8 *)((long)plVar1 + 0x90) = param_14[5];
      *(undefined8 *)((long)plVar1 + 0x88) = uVar7;
      *(undefined8 *)((long)plVar1 + 0x80) = uVar6;
      *(undefined8 *)((long)plVar1 + 0x78) = uVar5;
      *(undefined8 *)((long)plVar1 + 0x70) = uVar2;
      *(undefined8 *)((long)plVar1 + 0x68) = uVar4;
      *(undefined8 *)((long)plVar1 + 0x58) = param_5;
      uVar4 = param_15;
      func_0x00010bf51e00();
      uVar2 = *(undefined8 *)((long)plVar1 + 0x60);
      *(undefined8 *)((long)plVar1 + 0x60) = uVar4;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_15);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return puVar3;
}



/* Entry: 109067708; end: 10906772b; -[SCVideoEncoderOutputSettings copyWithZone:] */

undefined8 FUN_109067708(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10906772c; end: 10906792f; -[SCVideoEncoderOutputSettings hash] */

ulong * FUN_10906772c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined1 *puVar11;
  double dVar12;
  double dVar13;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar6 = &uStack_c0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
  uStack_c0 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
  uStack_c0 = uStack_c0 ^ uStack_c0 >> 0x16;
  uVar10 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
  uStack_b8 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
  uStack_b8 = uStack_b8 ^ uStack_b8 >> 0x16;
  uVar10 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
  uStack_b0 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
  uStack_b0 = uStack_b0 ^ uStack_b0 >> 0x16;
  uVar10 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_a8 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
  uStack_a8 = uStack_a8 ^ uStack_a8 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_a0 = uVar3;
  func_0x00010bfde980();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uStack_98 = uVar4;
  func_0x00010bfde980();
  uVar10 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uStack_78 = (ulong)*(byte *)(param_1 + 8);
  uStack_70 = (ulong)*(byte *)(param_1 + 9);
  uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
  uStack_68 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar10 = ~*(ulong *)(param_1 + 0x70) + *(ulong *)(param_1 + 0x70) * 0x40000;
  uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
  uStack_60 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar10 = ~*(ulong *)(param_1 + 0x78) + *(ulong *)(param_1 + 0x78) * 0x40000;
  uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
  uStack_58 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar10 = ~*(ulong *)(param_1 + 0x80) + *(ulong *)(param_1 + 0x80) * 0x40000;
  uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
  uStack_50 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar10 = ~*(ulong *)(param_1 + 0x88) + *(ulong *)(param_1 + 0x88) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x90) + *(ulong *)(param_1 + 0x90) * 0x40000;
  uStack_80 = *(undefined8 *)(param_1 + 0x50);
  uStack_88 = *(undefined8 *)(param_1 + 0x48);
  uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
  uStack_48 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar10 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_40 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uVar10 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
  uStack_38 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_90 = uVar5;
  func_0x00010bfde980();
  uStack_30 = uVar3;
  func_0x000107c3191c(&uStack_c0,0x13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar6 == (ulong *)param_3) {
LAB_109067b68:
    puVar11 = (undefined1 *)0x1;
  }
  else {
    puVar11 = (undefined1 *)0x0;
    if ((puVar6 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_109067b74;
    puVar11 = (undefined1 *)puVar6;
    _objc_opt_class(puVar6);
    puVar7 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar11);
    if ((((ulong)puVar7 & 1) != 0) &&
       ((((*(long *)((long)puVar6 + 0x48) == *(long *)(param_3 + 0x48) &&
          (*(long *)((long)puVar6 + 0x50) == *(long *)(param_3 + 0x50))) &&
         (*(char *)((long)puVar6 + 8) == param_3[8])) && (*(char *)((long)puVar6 + 9) == param_3[9])
        ))) {
      dVar13 = ABS(*(double *)((long)puVar6 + 0x10) - *(double *)(param_3 + 0x10));
      dVar12 = ABS(*(double *)((long)puVar6 + 0x10) + *(double *)(param_3 + 0x10)) *
               2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar13) && (bVar2 = false, !NAN(dVar13) && !NAN(dVar12))) {
        bVar2 = dVar13 < dVar12;
      }
      if (bVar2) {
        dVar13 = ABS(*(double *)((long)puVar6 + 0x18) - *(double *)(param_3 + 0x18));
        dVar12 = ABS(*(double *)((long)puVar6 + 0x18) + *(double *)(param_3 + 0x18)) *
                 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar13) && (bVar2 = false, !NAN(dVar13) && !NAN(dVar12))) {
          bVar2 = dVar13 < dVar12;
        }
        if (bVar2) {
          dVar12 = ABS(*(double *)((long)puVar6 + 0x20) - *(double *)(param_3 + 0x20));
          if ((dVar12 < 2.2250738585072014e-308) ||
             (dVar12 < ABS(*(double *)((long)puVar6 + 0x20) + *(double *)(param_3 + 0x20)) *
                       2.220446049250313e-16)) {
            dVar12 = ABS(*(double *)((long)puVar6 + 0x28) - *(double *)(param_3 + 0x28));
            if ((dVar12 < 2.2250738585072014e-308) ||
               (dVar12 < ABS(*(double *)((long)puVar6 + 0x28) + *(double *)(param_3 + 0x28)) *
                         2.220446049250313e-16)) {
              uStack_118 = *(undefined8 *)((long)puVar6 + 0x70);
              uStack_120 = *(undefined8 *)((long)puVar6 + 0x68);
              uStack_108 = *(undefined8 *)((long)puVar6 + 0x80);
              uStack_110 = *(undefined8 *)((long)puVar6 + 0x78);
              uStack_f8 = *(undefined8 *)((long)puVar6 + 0x90);
              uStack_100 = *(undefined8 *)((long)puVar6 + 0x88);
              uStack_148 = *(undefined8 *)(param_3 + 0x70);
              uStack_150 = *(undefined8 *)(param_3 + 0x68);
              uStack_138 = *(undefined8 *)(param_3 + 0x80);
              uStack_140 = *(undefined8 *)(param_3 + 0x78);
              uStack_128 = *(undefined8 *)(param_3 + 0x90);
              uStack_130 = *(undefined8 *)(param_3 + 0x88);
              puVar8 = &uStack_120;
              _CGAffineTransformEqualToTransform(puVar8,&uStack_150);
              if ((int)puVar8 != 0) {
                dVar12 = ABS(*(double *)((long)puVar6 + 0x58) - *(double *)(param_3 + 0x58));
                if (((((dVar12 < 2.2250738585072014e-308) ||
                      (dVar12 < ABS(*(double *)((long)puVar6 + 0x58) + *(double *)(param_3 + 0x58))
                                * 2.220446049250313e-16)) &&
                     ((lVar9 = *(long *)((long)puVar6 + 0x30), lVar9 == *(long *)(param_3 + 0x30) ||
                      (func_0x00010c071ae0(), (int)lVar9 != 0)))) &&
                    ((lVar9 = *(long *)((long)puVar6 + 0x38), lVar9 == *(long *)(param_3 + 0x38) ||
                     (func_0x00010c071ae0(), (int)lVar9 != 0)))) &&
                   ((lVar9 = *(long *)((long)puVar6 + 0x40), lVar9 == *(long *)(param_3 + 0x40) ||
                    (func_0x00010c071ae0(), (int)lVar9 != 0)))) {
                  puVar11 = *(undefined1 **)((long)puVar6 + 0x60);
                  if (puVar11 != *(undefined1 **)(param_3 + 0x60)) {
                    func_0x00010c071ae0();
                    goto LAB_109067b74;
                  }
                  goto LAB_109067b68;
                }
              }
            }
          }
        }
      }
    }
    puVar11 = (undefined1 *)0x0;
  }
LAB_109067b74:
  _objc_release(param_3);
  return (ulong *)puVar11;
}



/* Entry: 109067930; end: 109067b93; -[SCVideoEncoderOutputSettings isEqual:] */

long FUN_109067930(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack_90;
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
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_109067b68:
    lVar5 = 1;
  }
  else {
    lVar5 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_109067b74;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48) &&
          (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      dVar7 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar6 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar6))) {
        bVar1 = dVar7 < dVar6;
      }
      if (bVar1) {
        dVar7 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
        dVar6 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar6))) {
          bVar1 = dVar7 < dVar6;
        }
        if (bVar1) {
          dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
          if ((dVar6 < 2.2250738585072014e-308) ||
             (dVar6 < ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                      2.220446049250313e-16)) {
            dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
            if ((dVar6 < 2.2250738585072014e-308) ||
               (dVar6 < ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                        2.220446049250313e-16)) {
              uStack_58 = *(undefined8 *)(param_1 + 0x70);
              uStack_60 = *(undefined8 *)(param_1 + 0x68);
              uStack_48 = *(undefined8 *)(param_1 + 0x80);
              uStack_50 = *(undefined8 *)(param_1 + 0x78);
              uStack_38 = *(undefined8 *)(param_1 + 0x90);
              uStack_40 = *(undefined8 *)(param_1 + 0x88);
              uStack_88 = *(undefined8 *)(param_3 + 0x70);
              uStack_90 = *(undefined8 *)(param_3 + 0x68);
              uStack_78 = *(undefined8 *)(param_3 + 0x80);
              uStack_80 = *(undefined8 *)(param_3 + 0x78);
              uStack_68 = *(undefined8 *)(param_3 + 0x90);
              uStack_70 = *(undefined8 *)(param_3 + 0x88);
              puVar4 = &uStack_60;
              _CGAffineTransformEqualToTransform(puVar4,&uStack_90);
              if ((int)puVar4 != 0) {
                dVar6 = ABS(*(double *)(param_1 + 0x58) - *(double *)(param_3 + 0x58));
                if (((((dVar6 < 2.2250738585072014e-308) ||
                      (dVar6 < ABS(*(double *)(param_1 + 0x58) + *(double *)(param_3 + 0x58)) *
                               2.220446049250313e-16)) &&
                     ((lVar5 = *(long *)(param_1 + 0x30), lVar5 == *(long *)(param_3 + 0x30) ||
                      (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
                    ((lVar5 = *(long *)(param_1 + 0x38), lVar5 == *(long *)(param_3 + 0x38) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
                   ((lVar5 = *(long *)(param_1 + 0x40), lVar5 == *(long *)(param_3 + 0x40) ||
                    (func_0x00010c071ae0(), (int)lVar5 != 0)))) {
                  lVar5 = *(long *)(param_1 + 0x60);
                  if (lVar5 != *(long *)(param_3 + 0x60)) {
                    func_0x00010c071ae0();
                    goto LAB_109067b74;
                  }
                  goto LAB_109067b68;
                }
              }
            }
          }
        }
      }
    }
    lVar5 = 0;
  }
LAB_109067b74:
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 109067b94; end: 109067bdb; -[SCVideoEncoderOutputSettings .cxx_destruct] */

void FUN_109067b94(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 109067bdc; end: 109067cc7;  */

undefined1 *
FUN_109067bdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_112700158;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = uVar2;
      _objc_release(uVar3);
      *(undefined1 *)((long)plVar1 + 8) = param_5;
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 109067cc8; end: 109067ceb; -[SCNGSMEAVCustomCompositorImageSegmentsInfo copyWithZone:] */

undefined8 FUN_109067cc8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109067cec; end: 109067d6f; -[SCNGSMEAVCustomCompositorImageSegmentsInfo hash] */

undefined8 * FUN_109067cec(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar3 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_109067e18:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_109067e24;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_109067e24;
          }
          goto LAB_109067e18;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_109067e24:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 109067d70; end: 109067e3f; -[SCNGSMEAVCustomCompositorImageSegmentsInfo isEqual:] */

long FUN_109067d70(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_109067e18:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_109067e24;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_109067e24;
          }
          goto LAB_109067e18;
        }
      }
    }
    lVar3 = 0;
  }
LAB_109067e24:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 109067e40; end: 109067e7b; -[SCNGSMEAVCustomCompositorImageSegmentsInfo .cxx_destruct] */

void FUN_109067e40(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 109067e7c; end: 109067e9f; -[SCMediaCompositionImageInput copyWithZone:] */

undefined8 FUN_109067e7c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109067ea0; end: 109067f23; -[SCMediaCompositionImageInput hash] */

undefined8 * FUN_109067ea0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_109067fcc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_109067fd8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[3] == param_3[3])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_109067fd8;
          }
          goto LAB_109067fcc;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_109067fd8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 109067f24; end: 109067ff3; -[SCMediaCompositionImageInput isEqual:] */

long FUN_109067f24(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_109067fcc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_109067fd8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_109067fd8;
          }
          goto LAB_109067fcc;
        }
      }
    }
    lVar3 = 0;
  }
LAB_109067fd8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 109067ff4; end: 10906802f; -[SCMediaCompositionImageInput .cxx_destruct] */

void FUN_109067ff4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109068030; end: 109068053; -[SCMediaCompositionVideoInput copyWithZone:] */

undefined8 FUN_109068030(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109068054; end: 1090680c7; -[SCMediaCompositionVideoInput hash] */

undefined8 * FUN_109068054(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_109068148:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_109068154;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_109068154;
        }
        goto LAB_109068148;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_109068154:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1090680c8; end: 10906816f; -[SCMediaCompositionVideoInput isEqual:] */

long FUN_1090680c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_109068148:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_109068154;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_109068154;
        }
        goto LAB_109068148;
      }
    }
    lVar3 = 0;
  }
LAB_109068154:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 109068170; end: 10906819f; -[SCMediaCompositionVideoInput .cxx_destruct] */

void FUN_109068170(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090681a0; end: 109068213; -[SCGrapheneTranscodingConcurrencyCountMetric2 init] */

undefined1 * FUN_1090681a0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700170;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109068214; end: 1090684d3;  */

/* WARNING: Removing unreachable block (ram,0x00010906849c) */

void FUN_109068214(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  char *unaff_x24;
  char acStack_158 [24];
  char *pcStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar6 = param_4;
  pcVar4 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar9 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_a0,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x000107c27984(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110ad6778,acStack_c0,param_6);
    puStack_a8 = acStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar8 = 0;
    pcVar6 = pcVar2;
    pcVar4 = param_6;
    do {
      if ((&cStack_59)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar8 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  puStack_f8 = auStack_a0;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != puStack_f8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_1090684d4;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar7 = pcVar6;
  puStack_100 = unaff_x24;
  pcStack_f0 = pcVar2;
  pcStack_e8 = param_5;
  pcStack_e0 = param_4;
  pcStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  if (pcVar3 != (char *)0x0) {
    plVar9 = *(long **)(pcVar3 + 8);
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
    func_0x000107c278b8(auStack_138,pcVar2);
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
    func_0x000107c278b8(auStack_120,pcVar2);
    acStack_158[0] = '\0';
    acStack_158[1] = '\0';
    acStack_158[2] = '\0';
    acStack_158[3] = '\0';
    acStack_158[4] = '\0';
    acStack_158[5] = '\0';
    acStack_158[6] = '\0';
    acStack_158[7] = '\0';
    acStack_158[8] = '\0';
    acStack_158[9] = '\0';
    acStack_158[10] = '\0';
    acStack_158[0xb] = '\0';
    acStack_158[0xc] = '\0';
    acStack_158[0xd] = '\0';
    acStack_158[0xe] = '\0';
    acStack_158[0xf] = '\0';
    acStack_158[0x10] = '\0';
    acStack_158[0x11] = '\0';
    acStack_158[0x12] = '\0';
    acStack_158[0x13] = '\0';
    acStack_158[0x14] = '\0';
    acStack_158[0x15] = '\0';
    acStack_158[0x16] = '\0';
    acStack_158[0x17] = '\0';
    func_0x000107c27984(acStack_158,auStack_138,&lStack_108,2);
    pcVar5 = "\x01";
    pcVar7 = acStack_158;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110ad67c8,pcVar7,pcVar4);
    pcStack_140 = acStack_158;
    func_0x000107c278ac(&pcStack_140);
    lVar8 = 0;
    do {
      if ((&cStack_109)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(pcVar6);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    _objc_release(pcVar6);
    _objc_release(pcVar1);
    __Unwind_Resume();
    _objc_retain(pcVar5);
    _objc_retain(pcVar7);
    if (pcVar4 != (char *)0x0) {
      FUN_1090684d4(pcVar4,pcVar5,pcVar7,(long)(param_1 * 1000.0));
    }
    _objc_release(pcVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar5);
    return;
  }
  return;
}



/* Entry: 1090684d4; end: 109068703;  */

void FUN_1090684d4(double param_1,long param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  long *plVar5;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar3 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar5 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_78,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
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
    pcVar1 = "\x01";
    pcVar3 = acStack_98;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110ad67c8,pcVar3,param_5);
    pcStack_80 = acStack_98;
    func_0x000107c278ac(&pcStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
  }
  _objc_release(param_4);
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(pcVar1);
  _objc_retain(pcVar3);
  if (pcVar2 != (char *)0x0) {
    FUN_1090684d4(pcVar2,pcVar1,pcVar3,(long)(param_1 * 1000.0));
  }
  _objc_release(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 109068704; end: 109068797;  */

void FUN_109068704(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    FUN_1090684d4(param_2,param_3,param_4,(long)(param_1 * 1000.0));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109068798; end: 109068a57;  */

/* WARNING: Removing unreachable block (ram,0x000109068a20) */

char * FUN_109068798(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char **ppcVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x24;
  char *pcStack_f0;
  undefined *puStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
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
    func_0x000107c278b8(auStack_a0,pcVar1);
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
    func_0x000107c278b8(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110ad6818,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar3 = 0;
    do {
      if ((&cStack_59)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar3 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    ppcVar2 = &pcStack_f0;
    pcStack_c8 = FUN_109068a58;
    puStack_e8 = PTR_PTR_112700178;
    pcStack_f0 = pcVar1;
    pcStack_e0 = param_3;
    pcStack_d8 = param_2;
    puStack_d0 = &stack0xfffffffffffffff0;
    _objc_msgSendSuper2(&pcStack_f0,PTR_s_init_1125d9248);
    if (ppcVar2 != (char **)0x0) {
      pcVar1 = (char *)ppcVar2;
      (*(code *)PTR_DAT_113403208)();
      *(char **)((long)ppcVar2 + 8) = pcVar1;
    }
    return (char *)ppcVar2;
  }
  return pcVar1;
}



/* Entry: 109068a58; end: 109068acb; -[SCGrapheneNgsmeCompositorMetric2 init] */

undefined1 * FUN_109068a58(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700178;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109068acc; end: 109068c3f;  */

undefined * FUN_109068acc(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f54a862;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110ad68e8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110ad68e8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_109068c40;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f54a862;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110ad6938,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar3 = puVar2;
  __Unwind_Resume();
  ppuVar4 = &puStack_130;
  pcStack_108 = FUN_109068db4;
  puStack_128 = PTR_PTR_112700180;
  puStack_130 = puVar3;
  puStack_120 = puVar2;
  puStack_118 = puVar1;
  ppuStack_110 = &puStack_90;
  _objc_msgSendSuper2(&puStack_130,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined **)0x0) {
    puVar5 = (undefined1 *)ppuVar4;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)ppuVar4 + 8) = puVar5;
  }
  return (undefined *)ppuVar4;
}



/* Entry: 109068c40; end: 109068db3;  */

undefined * FUN_109068c40(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f54a862;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110ad6938,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar2 = puVar1;
  __Unwind_Resume();
  ppuVar3 = &puStack_b0;
  pcStack_88 = FUN_109068db4;
  puStack_a8 = PTR_PTR_112700180;
  puStack_b0 = puVar2;
  puStack_a0 = puVar1;
  puStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    puVar4 = (undefined1 *)ppuVar3;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)ppuVar3 + 8) = puVar4;
  }
  return (undefined *)ppuVar3;
}



/* Entry: 109068db4; end: 109068e27; -[SCGrapheneVideoDecodingMetric2 init] */

undefined1 * FUN_109068db4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700180;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109068e28; end: 109069057;  */

char * FUN_109068e28(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uVar13;
  char *pcStack_f0;
  undefined *puStack_e8;
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
  pcVar1 = param_3;
  uVar8 = param_4;
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
    unaff_x23 = acStack_98;
    pcVar1 = acStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110ad69a8);
    pcStack_80 = unaff_x23;
    func_0x000107c278ac(&pcStack_80);
    lVar10 = 0;
    puVar12 = auStack_78;
    uVar8 = param_4;
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
  ppcVar4 = &pcStack_f0;
  pcStack_a8 = FUN_109069058;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar12;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(uVar8);
  puStack_e8 = PTR_PTR_112700188;
  pcStack_f0 = pcVar3;
  _objc_msgSendSuper2(&pcStack_f0,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    _objc_retain(pcVar1);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 8);
    *(char **)((long)ppcVar4 + 8) = pcVar1;
    _objc_release(uVar5);
    puVar6 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar5 = *(undefined8 *)((long)ppcVar4 + 0x10);
    *(undefined **)((long)ppcVar4 + 0x10) = puVar6;
    _objc_release(uVar5);
    _objc_release(puVar7);
    puVar6 = PTR__CGAffineTransformIdentity_110347008;
    uVar5 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uVar13 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uVar9 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    *(undefined8 *)((long)ppcVar4 + 0x78) =
         *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    *(undefined8 *)((long)ppcVar4 + 0x70) = uVar5;
    *(undefined8 *)((long)ppcVar4 + 0x88) = uVar13;
    *(undefined8 *)((long)ppcVar4 + 0x80) = uVar9;
    uVar5 = *(undefined8 *)(puVar6 + 0x20);
    *(undefined8 *)((long)ppcVar4 + 0x98) = *(undefined8 *)(puVar6 + 0x28);
    *(undefined8 *)((long)ppcVar4 + 0x90) = uVar5;
    uVar5 = 1;
    _dispatch_semaphore_create();
    uVar9 = *(undefined8 *)((long)ppcVar4 + 0xa0);
    *(undefined8 *)((long)ppcVar4 + 0xa0) = uVar5;
    _objc_release(uVar9);
    puVar6 = PTR_PTR_1126dd228;
    _objc_alloc_init();
    uVar5 = *(undefined8 *)((long)ppcVar4 + 0xd0);
    *(undefined **)((long)ppcVar4 + 0xd0) = puVar6;
    _objc_release(uVar5);
    _objc_retain(uVar8);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 0xd8);
    *(undefined8 *)((long)ppcVar4 + 0xd8) = uVar8;
    _objc_release(uVar5);
    puVar6 = PTR_PTR_1126bf4b8;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)ppcVar4 + 0xe0);
    *(undefined **)((long)ppcVar4 + 0xe0) = puVar6;
    _objc_release(uVar5);
    puVar6 = PTR_PTR_1126d1398;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)ppcVar4 + 0xe8);
    *(undefined **)((long)ppcVar4 + 0xe8) = puVar6;
    _objc_release(uVar5);
  }
  _objc_release(uVar8);
  _objc_release(pcVar1);
  return (char *)ppcVar4;
}



/* Entry: 109069058; end: 1090691e7; -[SCImageProcessColorFilterSessionImpl initWithQueue:commandManager:] */

undefined1 *
FUN_109069058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_112700188;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR__CGAffineTransformIdentity_110347008;
    uVar2 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x78) =
         *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    *(undefined8 *)((long)puVar1 + 0x88) = uVar6;
    *(undefined8 *)((long)puVar1 + 0x80) = uVar5;
    uVar2 = *(undefined8 *)(puVar3 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x98) = *(undefined8 *)(puVar3 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x90) = uVar2;
    uVar2 = 1;
    _dispatch_semaphore_create();
    uVar5 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined8 *)((long)puVar1 + 0xa0) = uVar2;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126dd228;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xd0);
    *(undefined **)((long)puVar1 + 0xd0) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xd8);
    *(undefined8 *)((long)puVar1 + 0xd8) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bf4b8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xe0);
    *(undefined **)((long)puVar1 + 0xe0) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d1398;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xe8);
    *(undefined **)((long)puVar1 + 0xe8) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1090691e8; end: 10906932f; -[SCImageProcessColorFilterSessionImpl setImage:withScaledImageFuture:] */

void FUN_1090691e8(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_3 + 0xb0);
  *(undefined8 *)(param_3 + 0xb0) = param_5;
  _objc_release(uVar1);
  func_0x00010c23d0a0(param_5);
  dVar3 = param_1;
  func_0x00010c14e120(param_5);
  param_1 = param_1 * dVar3;
  lVar2 = (long)param_1;
  func_0x00010c23d0a0(param_5);
  func_0x00010c14e120(param_5);
  *(long *)(param_3 + 0x48) = lVar2;
  *(long *)(param_3 + 0x50) = (long)(param_2 * param_1);
  _objc_initWeak(auStack_48,param_3);
  uStack_50 = 0;
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_5);
  func_0x00010c297260(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 109069330; end: 1090696af;  */

void FUN_109069330(double param_1,double param_2,long param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  double dVar16;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined1 uStack_98;
  undefined1 auStack_90 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar3 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (((param_4 != 0) && (lVar3 != 0)) && (*(long *)(lVar3 + 0xb0) == *(long *)(param_3 + 0x20))) {
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)(lVar3 + 0xb8);
    *(long *)(lVar3 + 0xb8) = param_4;
    _objc_release(uVar4);
    func_0x00010c23d0a0(param_4);
    dVar16 = param_1;
    func_0x00010c14e120(param_4);
    param_1 = param_1 * dVar16;
    uVar11 = (ulong)param_1;
    func_0x00010c23d0a0(param_4);
    func_0x00010c14e120(param_4);
    lVar14 = (long)(param_2 * dVar16);
    puVar5 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x00010bf64b80();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar5;
    _CGColorSpaceCreateDeviceRGB();
    puVar6 = puVar5;
    _objc_retainAutorelease(puVar5);
    func_0x00010c0d3c60();
    _CGBitmapContextCreate();
    _CGColorSpaceRelease(puVar12);
    lVar7 = param_4;
    _objc_retainAutorelease(param_4);
    func_0x00010bdc1020();
    _CGContextDrawImage(0,0,(double)(long)param_1,(double)(long)(param_2 * dVar16),puVar6,lVar7);
    _CGContextRelease(puVar6);
    uVar13 = *(ulong *)(lVar3 + 0x48);
    if (uVar13 == uVar11) {
      bVar2 = *(long *)(lVar3 + 0x50) != lVar14;
    }
    else {
      bVar2 = true;
    }
    puVar12 = (undefined *)0x0;
    if ((*(char *)(lVar3 + 0xab) == '\x01') && (bVar2)) {
      uVar15 = *(ulong *)(lVar3 + 0x50);
      uVar4 = *(undefined8 *)(param_3 + 0x20);
      uVar1 = uVar13;
      if (uVar13 <= uVar15) {
        uVar1 = uVar15;
      }
      func_0x00010c14e300((double)uVar1,uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      func_0x00010bf64b80();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar12;
      _CGColorSpaceCreateDeviceRGB();
      puVar8 = puVar12;
      _objc_retainAutorelease(puVar12);
      func_0x00010c0d3c60();
      _CGBitmapContextCreate();
      _CGColorSpaceRelease(puVar6);
      uVar9 = uVar4;
      _objc_retainAutorelease(uVar4);
      func_0x00010bdc1020();
      _CGContextDrawImage(0,0,(double)uVar13,(double)uVar15,puVar8,uVar9);
      _CGContextRelease(puVar8);
      _objc_release(uVar4);
    }
    puVar10 = auStack_90;
    _objc_initWeak(puVar10,lVar3);
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = 0;
    _objc_copyWeak(auStack_b8,auStack_90);
    uStack_a8 = uVar11;
    lStack_a0 = lVar14;
    uStack_98 = bVar2;
    _objc_retain(puVar5);
    _objc_retain(puVar12);
    func_0x00010c0f7fc0(puVar10);
    _objc_release(puVar10);
    _objc_release(puVar12);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_release(puVar12);
    _objc_release(puVar5);
  }
  _objc_release(lVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1090696b0; end: 10906975f;  */

void FUN_1090696b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf3a200(lVar1);
    *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(param_1 + 0x48);
    *(undefined1 *)(lVar1 + 0xc0) = *(undefined1 *)(param_1 + 0x50);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = uVar4;
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(lVar1 + 0x58);
    *(undefined8 *)(lVar1 + 0x58) = uVar4;
    _objc_release(uVar2);
    lVar3 = lVar1;
    func_0x00010be1bba0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(lVar1 + 0x68);
    *(long *)(lVar1 + 0x68) = lVar3;
    _objc_release(uVar2);
    *(undefined1 *)(lVar1 + 0xa8) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 109069760; end: 10906979b; -[SCImageProcessColorFilterSessionImpl setRenderer:] */

void FUN_109069760(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0xa8) = 1;
  return;
}



/* Entry: 10906979c; end: 10906980b; -[SCImageProcessColorFilterSessionImpl setViewportTransform:] */

void FUN_10906979c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_38 = param_3[3];
  uStack_40 = param_3[2];
  uStack_28 = param_3[5];
  uStack_30 = param_3[4];
  uStack_78 = *(undefined8 *)(param_1 + 0x78);
  uStack_80 = *(undefined8 *)(param_1 + 0x70);
  uStack_68 = *(undefined8 *)(param_1 + 0x88);
  uStack_70 = *(undefined8 *)(param_1 + 0x80);
  uStack_58 = *(undefined8 *)(param_1 + 0x98);
  uStack_60 = *(undefined8 *)(param_1 + 0x90);
  puVar1 = &uStack_50;
  _CGAffineTransformEqualToTransform(puVar1,&uStack_80);
  if (((ulong)puVar1 & 1) == 0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    uVar4 = param_3[2];
    uVar6 = param_3[5];
    uVar5 = param_3[4];
    *(undefined8 *)(param_1 + 0x88) = param_3[3];
    *(undefined8 *)(param_1 + 0x80) = uVar4;
    *(undefined8 *)(param_1 + 0x98) = uVar6;
    *(undefined8 *)(param_1 + 0x90) = uVar5;
    *(undefined8 *)(param_1 + 0x78) = uVar3;
    *(undefined8 *)(param_1 + 0x70) = uVar2;
    *(undefined1 *)(param_1 + 0xa8) = 1;
  }
  return;
}



/* Entry: 10906980c; end: 109069813; -[SCImageProcessColorFilterSessionImpl setShouldRenderContinuously:] */

void FUN_10906980c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xa9) = param_3;
  return;
}



/* Entry: 109069814; end: 10906981b; -[SCImageProcessColorFilterSessionImpl setShouldRenderFullSizeImageForExport:] */

void FUN_109069814(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xab) = param_3;
  return;
}



/* Entry: 10906981c; end: 109069823; -[SCImageProcessColorFilterSessionImpl setShouldAnimateBackgroundCommand:] */

void FUN_10906981c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xaa) = param_3;
  return;
}



/* Entry: 109069824; end: 109069847; -[SCImageProcessColorFilterSessionImpl notifyInputCommandsChanged] */

void FUN_109069824(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0xa8) = 1;
  puVar1 = PTR__kCMTimeZero_110348670;
  uVar2 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  *(undefined8 *)(param_1 + 0xf0) = uVar2;
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(puVar1 + 0x10);
  return;
}



/* Entry: 109069848; end: 10906988b; -[SCImageProcessColorFilterSessionImpl setOffset:] */

void FUN_109069848(double param_1,long param_2)

{
  int iVar1;
  
  if (*(double *)(param_2 + 0x60) != param_1) {
    *(double *)(param_2 + 0x60) = param_1;
    iVar1 = (int)*(undefined8 *)(param_2 + 0xd8);
    func_0x00010c28aa20((float)param_1);
    if (iVar1 != 0) {
      *(undefined1 *)(param_2 + 0xa8) = 1;
    }
  }
  return;
}



/* Entry: 10906988c; end: 109069a1f; -[SCImageProcessColorFilterSessionImpl filterImageWithCroppingAspectRatio:transcodingTaskId:useBackgroundAnimationCommand:imageFilteringCompletionHandler:] */

void FUN_10906988c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_6 != 0) {
    lVar4 = *(long *)(param_2 + 0x30);
    uVar2 = *(undefined8 *)(param_2 + 0xb0);
    _objc_retain(uVar2);
    if (lVar4 == 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_109069a20;
      puStack_68 = &UNK_11084aaa8;
      _objc_retain(param_6);
      uStack_60 = uVar2;
      lStack_58 = param_6;
      _objc_retain(uVar2);
      func_0x00010c0f7fc0(uVar3,param_3,&puStack_80);
      _objc_release(uStack_60);
      lVar4 = lStack_58;
    }
    else {
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_109069a8c;
      puStack_98 = &UNK_1108cc7a8;
      _objc_retain(param_6);
      uStack_90 = uVar2;
      lStack_88 = param_6;
      _objc_retain(uVar2);
      ppuVar1 = &puStack_b0;
      _objc_retainBlock(ppuVar1);
      uStack_c8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_d0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_c0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      func_0x00010bdc8080(param_1,param_2,param_3,param_5,ppuVar1,0,param_4,0,0,&uStack_d0);
      _objc_release(ppuVar1);
      _objc_release(uStack_90);
      lVar4 = lStack_88;
    }
    _objc_release(lVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 109069a20; end: 109069a8b;  */

void FUN_109069a20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110f78ed8,
                      &PTR____CFConstantStringClassReference_110f1e3d8,4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 109069a8c; end: 109069aa3;  */

void FUN_109069a8c(long param_1,long param_2)

{
  if (param_2 == 0) {
    param_2 = *(long *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x000109069aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 109069aa4; end: 109069b5f; -[SCImageProcessColorFilterSessionImpl setBackgroundAnimationCommand:] */

void FUN_109069aa4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x18);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071ae0(uVar3,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_109069b4c;
    }
    func_0x00010bdc5fa0(param_1);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x18) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)(param_1 + 0xa8) = 1;
  }
LAB_109069b4c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109069b60; end: 109069c1f; -[SCImageProcessColorFilterSessionImpl _addBackgroundAnimationCommandUnloadRequest] */

/* WARNING: Possible PIC construction at 0x000109069bb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109069bbc) */
/* WARNING: Removing unreachable block (ram,0x000109069bdc) */

void FUN_109069b60(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x18) == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
      ___stack_chk_fail();
      _objc_retain(param_3);
      lVar1 = param_3;
      func_0x00010bf529e0();
      if (lVar1 != 0) {
        uVar3 = *(undefined8 *)(param_1 + 8);
        puVar2 = PTR_PTR_1126d13a0;
        _objc_alloc(PTR_PTR_1126d13a0);
        func_0x00010bfffdc0();
        func_0x00010befafa0(uVar3);
        _objc_release(puVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_3);
      return;
    }
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_30 = *(long *)(param_1 + 0x18);
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_30,1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc8e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__addUnloadRequestForCommands__11254fd28,puVar2);
  return;
}



/* Entry: 109069c20; end: 109069c8f; -[SCImageProcessColorFilterSessionImpl _addUnloadRequestForCommands:] */

void FUN_109069c20(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    puVar2 = PTR_PTR_1126d13a0;
    _objc_alloc(PTR_PTR_1126d13a0);
    func_0x00010bfffdc0();
    func_0x00010befafa0(uVar3,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109069c90; end: 109069ceb; -[SCImageProcessColorFilterSessionImpl dealloc] */

void FUN_109069c90(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  func_0x00010bf3a200(param_1);
  puStack_28 = PTR_PTR_112700188;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 109069cec; end: 109069d17; -[SCImageProcessColorFilterSessionImpl cleanup] */

void FUN_109069cec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf3a2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cleanupCommandsAndRenderer_1125ac258);
  return;
}



/* Entry: 109069d18; end: 109069d9b; -[SCImageProcessColorFilterSessionImpl cleanupCommandsAndRenderer] */

void FUN_109069d18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bdc5fa0();
  func_0x00010c280a60(*(undefined8 *)(param_1 + 0xd8));
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d13a8;
  _objc_opt_new(PTR_PTR_1126d13a8);
  func_0x00010befafa0(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d13b0;
  _objc_alloc(PTR_PTR_1126d13b0);
  func_0x00010c03e200();
  func_0x00010befafa0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109069d9c; end: 109069da3; -[SCImageProcessColorFilterSessionImpl addListener:] */

void FUN_109069d9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xd0),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 109069da4; end: 109069dab; -[SCImageProcessColorFilterSessionImpl removeListener:] */

void FUN_109069da4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xd0),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 109069dac; end: 109069e2b; -[SCImageProcessColorFilterSessionImpl stopRunning] */

void FUN_109069dac(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c1d9980(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  puVar2 = PTR__kCMTimeZero_110348670;
  uVar1 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  *(undefined8 *)(param_1 + 0xf0) = uVar1;
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(puVar2 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf3a2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cleanupCommandsAndRenderer_1125ac258);
  return;
}



/* Entry: 109069e2c; end: 109069f4b; -[SCImageProcessColorFilterSessionImpl startRunning] */

void FUN_109069e2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
  func_0x00010bf85b60(PTR__OBJC_CLASS___CADisplayLink_1126b94a8,param_2,param_1,
                      PTR_s__displayLinkCallback__11252f528);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1dffe0(*(undefined8 *)(param_1 + 0x28),param_2,0x1e);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010bf5fe80(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc2c0(uVar2,param_2,puVar1,*(undefined8 *)PTR__NSRunLoopCommonModes_11034aaa8);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109069f4c; end: 10906a10f; -[SCImageProcessColorFilterSessionImpl _displayLinkCallback:] */

void FUN_109069f4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_a0 [24];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar1 = *(long *)(param_1 + 200) + -1;
    if ((0 < *(long *)(param_1 + 200)) && (*(long *)(param_1 + 200) = lVar1, lVar1 == 0)) {
      *(undefined1 *)(param_1 + 0xa8) = 1;
      *(undefined8 *)(param_1 + 200) = 6;
    }
    if ((((*(byte *)(param_1 + 0xa8) & 1) != 0) || ((*(byte *)(param_1 + 0xa9) & 1) != 0)) ||
       (*(char *)(param_1 + 0xaa) == '\x01')) {
      lVar1 = *(long *)(param_1 + 0xa0);
      _dispatch_semaphore_wait(lVar1,0);
      if (lVar1 == 0) {
        _objc_initWeak(auStack_58,param_1);
        uVar4 = *(undefined8 *)(param_1 + 0xa0);
        _objc_retain(uVar4);
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0xc2000000;
        pcStack_78 = FUN_10906a110;
        puStack_70 = &UNK_110ac1448;
        _objc_copyWeak(auStack_60,auStack_58);
        _objc_retain(uVar4);
        ppuVar2 = &puStack_88;
        uStack_68 = uVar4;
        _objc_retainBlock(ppuVar2);
        puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bf41620(0,0,0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be7f860(auStack_a0,param_1);
        func_0x00010bdc8080(0x7ff0000000000000,param_1);
        _objc_release(puVar3);
        _objc_release(ppuVar2);
        _objc_release(uStack_68);
        _objc_destroyWeak(auStack_60);
        _objc_release(uVar4);
        _objc_destroyWeak(auStack_58);
      }
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10906a110; end: 10906a1e7;  */

void FUN_10906a110(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10906a1e8;
    puStack_60 = &UNK_110842a68;
    _objc_copyWeak(auStack_50,param_1 + 0x28);
    uStack_48 = param_2;
    _objc_retain(param_3);
    uStack_58 = param_3;
    func_0x000107c312d0("APPSTORE",&puStack_78);
    _objc_release(uStack_58);
    _objc_destroyWeak(auStack_50);
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10906a1e8; end: 10906a247;  */

void FUN_10906a1e8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x30) == 3) {
      func_0x00010bf40ec0(*(undefined8 *)(lVar1 + 0xd0),param_2,*(undefined8 *)(param_1 + 0x20));
    }
    else if (*(long *)(param_1 + 0x30) == 2) {
      func_0x00010bf40ea0(*(undefined8 *)(lVar1 + 0xd0),param_2,lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10906a248; end: 10906a5e3; -[SCImageProcessColorFilterSessionImpl _addRequestWithBackgroundAnimationCommand:imageFilteringCompletionHandler:croppingAspectRatio:backgroundColor:transcodingTaskID:requestCompletionHandler:resetShouldSubmitNewRequest:presentationTime:] */

void FUN_10906a248(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,int param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  double dVar10;
  long lStack_100;
  undefined *puStack_f8;
  
  dVar10 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar8 = *(undefined **)(param_2 + 0x20);
  _objc_retain(puVar8);
  lStack_100 = *(long *)(param_2 + 0x30);
  _objc_retain();
  if (param_5 == 0) {
    puStack_f8 = (undefined *)0x0;
  }
  else {
    uVar9 = *(undefined8 *)(param_2 + 0x20);
    _objc_retain(uVar9);
    if (*(char *)(param_2 + 0xab) == '\x01') {
      _objc_release(uVar9);
      if ((*(char *)(param_2 + 0xc0) == '\x01') && (lVar6 = *(long *)(param_2 + 0x58), lVar6 != 0))
      {
        _objc_retain(lVar6);
        _objc_release(lStack_100);
        uVar9 = 0;
        lStack_100 = lVar6;
      }
      else {
        uVar9 = 0;
      }
    }
    puVar2 = PTR_PTR_1126dd230;
    _objc_alloc();
    func_0x00010c016aa0();
    puStack_f8 = PTR_PTR_1126dd238;
    _objc_alloc();
    func_0x00010c036200();
    _objc_release(puVar8);
    _objc_release(uVar9);
    puVar8 = puVar2;
    dVar10 = param_1;
  }
  puVar2 = PTR_DAT_1126a5b18;
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  _objc_retain(uVar7);
  uVar3 = uVar7;
  func_0x000107c318f8(uVar7,puVar2);
  uVar9 = uVar7;
  if ((int)uVar3 == 0) {
    uVar9 = 0;
  }
  _objc_retain(uVar9);
  _objc_release(uVar7);
  uVar3 = uVar9;
  func_0x00010c230440();
  if ((int)uVar3 != 0) {
    func_0x00010c1fff80(param_2);
    func_0x00010bf9f940(uVar9);
    if (1.0 <= dVar10) {
      func_0x00010c1fff80(param_2);
    }
    else {
      func_0x00010bf9f940(uVar9);
      func_0x00010c199d80(dVar10 + 0.10000000149011612,uVar9);
    }
  }
  uVar4 = *(undefined8 *)(param_2 + 0xd8);
  func_0x00010bfc3d60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  _objc_autoreleasePoolPush();
  uVar3 = *(undefined8 *)(param_2 + 0xe8);
  uVar5 = uVar4;
  func_0x00010bf418e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf40e80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_autoreleasePoolPop(uVar7);
  if (param_9 != 0) {
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  func_0x00010befafa0(*(undefined8 *)(param_2 + 8));
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(lStack_100);
  _objc_release(puVar8);
  _objc_release(puStack_f8);
  _objc_autoreleasePoolPop(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10906a5e4; end: 10906a6a3; -[SCImageProcessColorFilterSessionImpl _presentationTime] */

void FUN_10906a5e4(double *param_1,long param_2)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR__kCMTimeZero_110348670;
  dVar2 = *(double *)PTR__kCMTimeZero_110348670;
  param_1[1] = *(double *)(PTR__kCMTimeZero_110348670 + 8);
  *param_1 = dVar2;
  param_1[2] = *(double *)(puVar1 + 0x10);
  if (((*(byte *)(param_2 + 0xa9) & 1) != 0) || (*(char *)(param_2 + 0xaa) == '\x01')) {
    func_0x00010c26a180(*(undefined8 *)(param_2 + 0x28));
    dVar3 = dVar2;
    func_0x00010c2709c0(*(undefined8 *)(param_2 + 0x28));
    _CMTimeMakeWithSeconds(&uStack_48,dVar2 - dVar3,1000);
    uStack_58 = *(undefined8 *)(param_2 + 0xf8);
    uStack_60 = *(undefined8 *)(param_2 + 0xf0);
    uStack_50 = *(undefined8 *)(param_2 + 0x100);
    uStack_78 = uStack_40;
    uStack_80 = uStack_48;
    uStack_70 = uStack_38;
    _CMTimeAdd(param_1,&uStack_60,&uStack_80);
    dVar2 = *param_1;
    *(double *)(param_2 + 0xf8) = param_1[1];
    *(double *)(param_2 + 0xf0) = dVar2;
    *(double *)(param_2 + 0x100) = param_1[2];
  }
  return;
}



/* Entry: 10906a6a4; end: 10906a71f; -[SCImageProcessColorFilterSessionImpl _generateSessionId] */

void FUN_10906a6a4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10906a720; end: 10906a72b; -[SCImageProcessColorFilterSessionImpl _applicationWillResignActive:] */

void FUN_10906a720(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setPaused__112654088,1);
  return;
}



/* Entry: 10906a72c; end: 10906a737; -[SCImageProcessColorFilterSessionImpl _applicationDidBecomeActive:] */

void FUN_10906a72c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setPaused__112654088,0);
  return;
}



/* Entry: 10906a738; end: 10906a73f; -[SCImageProcessColorFilterSessionImpl appliesColorConversionDuringScaling] */

undefined1 FUN_10906a738(long param_1)

{
  return *(undefined1 *)(param_1 + 0x108);
}



/* Entry: 10906a740; end: 10906a747; -[SCImageProcessColorFilterSessionImpl setAppliesColorConversionDuringScaling:] */

void FUN_10906a740(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x108) = param_3;
  return;
}



/* Entry: 10906a748; end: 10906a813; -[SCImageProcessColorFilterSessionImpl .cxx_destruct] */

void FUN_10906a748(long param_1)

{
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10906a814; end: 10906aa03; -[SCImageProcessMultiPixelSession initWithQueue:images:presentationTimes:commands:viewportTransform:backgroundColors:] */

undefined1 *
FUN_10906a814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112700190;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar5);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar5);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar5);
    uVar5 = param_7[1];
    uVar2 = *param_7;
    uVar7 = param_7[3];
    uVar6 = param_7[2];
    uVar8 = param_7[4];
    *(undefined8 *)((long)puVar1 + 0x50) = param_7[5];
    *(undefined8 *)((long)puVar1 + 0x48) = uVar8;
    *(undefined8 *)((long)puVar1 + 0x40) = uVar7;
    *(undefined8 *)((long)puVar1 + 0x38) = uVar6;
    *(undefined8 *)((long)puVar1 + 0x30) = uVar5;
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d1398;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined **)((long)puVar1 + 0x70) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10906aa04; end: 10906aaa3; -[SCImageProcessMultiPixelSession dealloc] */

void FUN_10906aa04(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d13a0;
  _objc_alloc(PTR_PTR_1126d13a0);
  func_0x00010bfffdc0();
  func_0x00010befafa0(uVar2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d13a8;
  _objc_opt_new(PTR_PTR_1126d13a8);
  func_0x00010befafa0(uVar2);
  _objc_release(puVar1);
  puStack_38 = PTR_PTR_112700190;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10906aaa4; end: 10906ab33; -[SCImageProcessMultiPixelSession runWithCompletion:] */

void FUN_10906aaa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10906ab34;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10906ab34; end: 10906ab9f;  */

void FUN_10906ab34(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010bf529e0();
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    _objc_retainBlock();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
    *(long *)(*(long *)(param_1 + 0x20) + 0x78) = lVar2;
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010be81490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__processImageAtIndex__11257dec0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010906ab9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
  return;
}



/* Entry: 10906aba0; end: 10906afbf; -[SCImageProcessMultiPixelSession _processImageAtIndex:] */

void FUN_10906aba0(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  ulong uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uVar3 = *(ulong *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (param_3 < uVar3) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x00010bdc1140(&uStack_90,lVar5);
    }
    _objc_release(lVar5);
    uStack_c0 = 0;
    uStack_b0 = 0x3032000000;
    pcStack_a8 = FUN_10906afc0;
    uStack_a0 = 0x10906afd0;
    puStack_b8 = &uStack_c0;
    _objc_retain(uVar4);
    puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_10906afd8;
    puStack_d0 = &UNK_110ad6a48;
    ppuVar6 = &puStack_e8;
    puStack_c8 = &uStack_c0;
    uStack_98 = uVar4;
    _objc_retainBlock();
    puStack_120 = puVar9;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_10906b024;
    puStack_108 = &UNK_110ad6a78;
    ppuVar7 = &puStack_120;
    lStack_100 = param_1;
    puStack_f8 = &uStack_c0;
    uStack_f0 = param_3;
    _objc_retainBlock();
    ppuVar8 = ppuVar7;
    _CGColorSpaceCreateDeviceRGB();
    uVar11 = uVar4;
    _objc_retainAutorelease();
    iVar1 = (int)uVar11;
    func_0x00010bdc1020();
    _CGImageGetWidth();
    uVar11 = uVar4;
    _objc_retainAutorelease();
    iVar2 = (int)uVar11;
    func_0x00010bdc1020();
    _CGImageGetHeight();
    if ((iVar2 == 0) || (iVar1 == 0)) {
      func_0x00010bdc7140(param_1);
      func_0x00010be81480(param_1);
    }
    else {
      puVar9 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      func_0x00010bf64b80();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      _objc_retainAutorelease();
      func_0x00010c0d3c60();
      _CGBitmapContextCreate();
      uVar11 = uVar4;
      _objc_retainAutorelease(uVar4);
      func_0x00010bdc1020();
      _CGContextDrawImage(0,0,(double)iVar1,(double)iVar2,puVar10,uVar11);
      _CGColorSpaceRelease(ppuVar8);
      _CGContextRelease(puVar10);
      if (puVar9 == (undefined *)0x0) {
        func_0x00010bdc7140(param_1);
        func_0x00010be81480(param_1);
      }
      else {
        _objc_autoreleasePoolPush();
        uVar3 = *(ulong *)(param_1 + 0x68);
        func_0x00010bf529e0();
        if (uVar3 < 2) {
          puVar13 = (undefined *)0x0;
        }
        else {
          puVar13 = PTR_PTR_1126bfba8;
          _objc_alloc();
          uVar11 = *(undefined8 *)(param_1 + 0x68);
          func_0x00010c0dfd40(uVar11);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = *(undefined8 *)(param_1 + 0x68);
          func_0x00010c0dfd40(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0541c0();
          _objc_release(uVar12);
          _objc_release(uVar11);
        }
        uVar11 = *(undefined8 *)(param_1 + 0x60);
        lVar5 = param_1;
        _objc_opt_class();
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0fcca0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        func_0x00010befafa0(*(undefined8 *)(param_1 + 8));
        _objc_release(puVar13);
        _objc_release(uVar11);
        _objc_autoreleasePoolPop(puVar10);
      }
      _objc_release(puVar9);
    }
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    __Block_object_dispose(&uStack_c0,8);
    _objc_release(uStack_98);
    _objc_release(uVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010906ac4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x78) + 0x10))
            (*(long *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x58));
  return;
}



/* Entry: 10906afc0; end: 10906afd7;  */

void FUN_10906afc0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10906afd8; end: 10906b023;  */

void FUN_10906afd8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10906b024; end: 10906b08b;  */

void FUN_10906b024(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10906b08c;
  puStack_30 = &UNK_11084a858;
  uStack_20 = *(undefined8 *)(param_1 + 0x28);
  lStack_28 = *(long *)(param_1 + 0x20);
  uStack_18 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0f7fc0(*(undefined8 *)(lStack_28 + 0x70),param_2,&puStack_48);
  return;
}



/* Entry: 10906b08c; end: 10906b0c7;  */

void FUN_10906b08c(long param_1,undefined8 param_2)

{
  func_0x00010bdc7140(*(undefined8 *)(param_1 + 0x20),param_2,
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010be81490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__processImageAtIndex__11257dec0,
             *(long *)(param_1 + 0x30) + 1);
  return;
}



/* Entry: 10906b0c8; end: 10906b0d7; -[SCImageProcessMultiPixelSession _addImageToProcessedArray:] */

void FUN_10906b0c8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x58),PTR_s_addObject__11259c1f0);
    return;
  }
  return;
}



/* Entry: 10906b0d8; end: 10906b0df; -[SCImageProcessMultiPixelSession useTransparentBackground] */

undefined1 FUN_10906b0d8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x80);
}


