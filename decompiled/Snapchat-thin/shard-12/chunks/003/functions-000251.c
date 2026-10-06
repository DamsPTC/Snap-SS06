/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090441f8; end: 1090441ff; -[SCCameraCapturerDebugLoggerView tableView:numberOfRowsInSection:] */

void FUN_1090441f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_count_1125b2420);
  return;
}



/* Entry: 109044200; end: 10904420f; -[SCCameraCapturerDebugLoggerView tableView:heightForRowAtIndexPath:] */

undefined8 FUN_109044200(void)

{
  return *(undefined8 *)PTR__UITableViewAutomaticDimension_110345db8;
}



/* Entry: 109044210; end: 10904426f; -[SCCameraCapturerDebugLoggerView .cxx_destruct] */

void FUN_109044210(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109044270; end: 1090444f7; -[SCCapturerBufferedVideoWriter initWithPerformer:speedRate:audioSampleRate:outputURL:videoInputAffineTransform:normalizeUprightInputTransform:delegate:copySampleBufferHandler:error:] */

/* WARNING: Possible PIC construction at 0x000109044c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109044c5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109044c80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109044c38) */
/* WARNING: Removing unreachable block (ram,0x000109044c60) */
/* WARNING: Removing unreachable block (ram,0x000109044c44) */
/* WARNING: Removing unreachable block (ram,0x000109044c50) */
/* WARNING: Removing unreachable block (ram,0x000109044c74) */

undefined **
FUN_109044270(undefined *param_1,undefined *param_2,undefined *param_3,undefined8 param_4,
             undefined **param_5,undefined **param_6,undefined8 *param_7,undefined1 param_8,
             undefined8 param_9,undefined *param_10,long *param_11)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uStack_238;
  undefined1 auStack_1f8 [48];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_80 = PTR_PTR_112700048;
  ppuVar11 = &puStack_88;
  puStack_88 = param_3;
  _objc_msgSendSuper2(ppuVar11,PTR_s_init_1125d9248);
  if (ppuVar11 == (undefined **)0x0) goto LAB_109044498;
  _objc_retain(param_5);
  puVar2 = ppuVar11[1];
  ppuVar11[1] = (undefined *)param_5;
  _objc_release(puVar2);
  ppuVar11[0x15] = param_1;
  ppuVar11[0x16] = param_2;
  puVar7 = (undefined *)param_7[1];
  puVar2 = (undefined *)*param_7;
  puVar8 = (undefined *)param_7[2];
  puVar16 = (undefined *)param_7[5];
  puVar15 = (undefined *)param_7[4];
  ppuVar11[7] = (undefined *)param_7[3];
  ppuVar11[6] = puVar8;
  ppuVar11[9] = puVar16;
  ppuVar11[8] = puVar15;
  ppuVar11[5] = puVar7;
  ppuVar11[4] = puVar2;
  *(undefined1 *)(ppuVar11 + 10) = param_8;
  _objc_storeWeak(ppuVar11 + 2,param_9);
  puVar2 = PTR_PTR_1126b44c8;
  _objc_alloc();
  func_0x00010c030dc0();
  puVar7 = ppuVar11[3];
  ppuVar11[3] = puVar2;
  _objc_release(puVar7);
  uVar13 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  _CMBufferQueueGetCallbacksForUnsortedSampleBuffers();
  uVar12 = uVar13;
  _CMBufferQueueCreate(uVar13,0,puVar7,ppuVar11 + 0x10);
  _CMBufferQueueGetCallbacksForUnsortedSampleBuffers();
  _CMBufferQueueCreate(uVar13,0,uVar12,ppuVar11 + 0x11);
  puVar2 = PTR__OBJC_CLASS___AVAssetWriter_1126bf5a8;
  _objc_alloc();
  ppuVar5 = param_6;
  func_0x00010c057a20();
  puVar7 = ppuVar11[0xc];
  ppuVar11[0xc] = puVar2;
  _objc_release(puVar7);
  _objc_retain(param_10);
  puVar7 = ppuVar11[0x17];
  ppuVar11[0x17] = param_10;
  _objc_release();
  func_0x0001091a2620();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar3 = *param_11;
  if (puVar7 == (undefined *)0x7) {
    if (lVar3 != 0) goto LAB_109044484;
    uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110f1cbd8;
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110f1cbb8;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    *param_11 = (long)puVar2;
    _objc_release();
    _objc_release(puVar7);
  }
  else {
    if (lVar3 == 0) goto LAB_109044498;
LAB_109044484:
    _objc_retainAutorelease();
    *param_11 = lVar3;
  }
  _objc_release(ppuVar11);
  ppuVar11 = (undefined **)0x0;
LAB_109044498:
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppuVar11;
  }
  ___stack_chk_fail();
  lStack_100 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = ppuVar5;
  ppuVar11 = ppuVar5;
  _objc_retain();
  func_0x0001091a2620();
  if (ppuVar9 == (undefined **)0x9) {
    ppuVar9 = (undefined **)0x0;
  }
  else {
    _objc_retain(ppuVar5);
    puVar2 = param_5[0xb];
    param_5[0xb] = (undefined *)ppuVar5;
    _objc_release(puVar2);
    ppuVar11 = ppuVar5;
    func_0x00010c2bdc20();
    if ((int)ppuVar11 != 0) {
      puVar2 = PTR__OBJC_CLASS___AVMutableMetadataItem_1126d3518;
      func_0x00010c0cc520();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b6b40();
      func_0x00010c1b6ce0(puVar2);
      ppuVar11 = ppuVar5;
      func_0x0001090469e4(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220160(puVar2);
      _objc_release(ppuVar11);
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_108 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c73c0(param_5[0xc]);
      _objc_release(puVar7);
      _objc_release(puVar2);
    }
    uStack_148 = *(undefined8 *)PTR__AVFormatIDKey_11034cf30;
    uStack_140 = *(undefined8 *)PTR__AVNumberOfChannelsKey_11034cf58;
    ppuStack_128 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1d28;
    ppuStack_120 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1d40;
    uStack_138 = *(undefined8 *)PTR__AVSampleRateKey_11034cf60;
    puVar14 = param_5[0x16];
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uStack_130 = *(undefined8 *)PTR__AVEncoderBitRateKey_11034cf28;
    puStack_118 = puVar7;
    func_0x00010bf0ed60(ppuVar5);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_110 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar7);
    puVar2 = PTR__OBJC_CLASS___AVAssetWriterInput_1126bf5b0;
    _objc_alloc();
    func_0x00010c02a040();
    puVar7 = param_5[0xd];
    param_5[0xd] = puVar2;
    _objc_release(puVar7);
    func_0x00010c198a40(param_5[0xd]);
    _objc_release(puVar8);
    func_0x00010c2a5040(ppuVar5);
    uVar10 = (ulong)(double)puVar14;
    func_0x00010bfe0640(ppuVar5);
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c2992e0(ppuVar5);
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar7);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c086720(ppuVar5);
    func_0x00010c0df840(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar7);
    _objc_release(puVar2);
    uVar12 = *(undefined8 *)PTR__AVVideoCodecTypeH264_110348128;
    _objc_retain(uVar12);
    uStack_198 = *(undefined8 *)PTR__AVVideoCodecKey_110348120;
    uStack_190 = *(undefined8 *)PTR__AVVideoWidthKey_1103481a0;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uStack_170 = uVar12;
    func_0x00010c0df860();
    _objc_retainAutoreleasedReturnValue();
    uStack_188 = *(undefined8 *)PTR__AVVideoHeightKey_110348168;
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_168 = puVar2;
    func_0x00010c0df860();
    _objc_retainAutoreleasedReturnValue();
    uStack_180 = *(undefined8 *)PTR__AVVideoScalingModeKey_110348188;
    uStack_158 = *(undefined8 *)PTR__AVVideoScalingModeResizeAspectFill_110348190;
    uStack_178 = *(undefined8 *)PTR__AVVideoCompressionPropertiesKey_110348158;
    puVar15 = puVar7;
    puStack_160 = puVar8;
    func_0x00010bf51e00();
    puVar16 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_150 = puVar15;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar16;
    func_0x00010c0d3c80();
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar8);
    _objc_release(puVar2);
    ppuVar11 = ppuVar5;
    func_0x00010bf3f040();
    uStack_238 = uVar12;
    if (ppuVar11 == (undefined **)0x2) {
      uStack_238 = *(undefined8 *)PTR__AVVideoCodecTypeHEVC_110348130;
      _objc_retain(uStack_238);
      _objc_release(uVar12);
      func_0x00010c1d0640(puVar7);
      func_0x00010c1d0560(puVar4);
      puVar2 = puVar7;
      func_0x00010bf51e00(puVar7);
      func_0x00010c1d0560(puVar4);
      _objc_release(puVar2);
      puVar2 = param_5[0xc];
      func_0x00010bf2c4a0();
      if (((ulong)puVar2 & 1) == 0) {
        func_0x00010c12d3e0(puVar7);
        puVar2 = puVar7;
        func_0x00010bf51e00(puVar7);
        func_0x00010c1d0560(puVar4);
        _objc_release(puVar2);
      }
    }
    puVar2 = PTR__OBJC_CLASS___AVAssetWriterInput_1126bf5b0;
    _objc_alloc();
    func_0x00010c02a040();
    puVar8 = param_5[0xe];
    param_5[0xe] = puVar2;
    _objc_release(puVar8);
    func_0x00010c198a40(param_5[0xe]);
    FUN_109046d80(auStack_1f8,(double)uVar10,(double)(ulong)(long)(double)puVar14,param_5 + 4,
                  *(undefined1 *)(param_5 + 10));
    func_0x00010c219960(param_5[0xe]);
    puVar2 = PTR__OBJC_CLASS___AVAssetWriterInputPixelBufferAdaptor_1126d0110;
    _objc_alloc();
    uStack_1c8 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
    ppuStack_1b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1d58;
    uStack_1c0 = *(undefined8 *)PTR__kCVPixelBufferWidthKey_11034a3d0;
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df860();
    _objc_retainAutoreleasedReturnValue();
    uStack_1b8 = *(undefined8 *)PTR__kCVPixelBufferHeightKey_11034a388;
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_1a8 = puVar8;
    func_0x00010c0df860();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_1a0 = puVar15;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff46a0();
    puVar14 = param_5[0xf];
    param_5[0xf] = puVar2;
    _objc_release(puVar14);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar8);
    _objc_release(puVar4);
    _objc_release(uStack_238);
    _objc_release(puVar7);
    param_5[0x19] = (undefined *)0x0;
    param_5[0x18] = (undefined *)0x0;
    param_5[0x1b] = (undefined *)0x0;
    param_5[0x1a] = (undefined *)0x0;
    puVar2 = param_5[0x1d];
    param_5[0x1c] = (undefined *)0x0;
    param_5[0x1d] = (undefined *)0x0;
    _objc_release(puVar2);
    iVar1 = (int)param_5[0xc];
    ppuVar11 = (undefined **)param_5[0xe];
    func_0x00010bf2c460();
    if (iVar1 == 0) {
      uVar6 = 0;
      ppuVar9 = (undefined **)0x0;
      lVar3 = 0xf1;
    }
    else {
      func_0x00010bef93a0(param_5[0xc]);
      *(undefined1 *)((long)param_5 + 0xf1) = 1;
      iVar1 = (int)param_5[0xc];
      ppuVar11 = (undefined **)param_5[0xd];
      func_0x00010bf2c460();
      if (iVar1 == 0) {
        uVar6 = 0;
        ppuVar9 = (undefined **)0x0;
        lVar3 = 0xf0;
      }
      else {
        ppuVar11 = (undefined **)param_5[0xd];
        func_0x00010bef93a0(param_5[0xc]);
        uVar6 = 1;
        lVar3 = 0xf0;
        ppuVar9 = (undefined **)0x1;
      }
    }
    *(undefined1 *)((long)param_5 + lVar3) = uVar6;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_100) {
    ___stack_chk_fail();
    if (ppuVar11 == (undefined **)0x0) {
      return ppuVar5;
    }
    ppuVar5[0x1a] = ppuVar5[0x1a] + 1;
    iVar1 = (int)ppuVar5[0x10];
    _CMBufferQueueIsEmpty();
    if (iVar1 == 0) {
      ppuVar11 = &PTR____CFConstantStringClassReference_110f1cbf8;
    }
    else {
      iVar1 = (int)ppuVar5[0xe];
      func_0x00010c07bca0();
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdcd650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (ppuVar5,PTR_s__appendVideoSampleBuffer__112550f30,ppuVar11);
        return ppuVar5;
      }
      _CMBufferQueueEnqueue(ppuVar5[0x10],ppuVar11);
      ppuVar11 = &PTR____CFConstantStringClassReference_110f1cc38;
    }
                    /* WARNING: Could not recover jumptable at 0x00010be5a770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (ppuVar5,PTR_s__logVideoCMBufferQueueStatusWith_112574378,ppuVar11);
    return ppuVar5;
  }
  return ppuVar9;
}



/* Entry: 1090444f8; end: 109044bf3; -[SCCapturerBufferedVideoWriter prepareWritingWithOutputSettings:] */

/* WARNING: Possible PIC construction at 0x000109044c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109044c5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109044c80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109044c38) */
/* WARNING: Removing unreachable block (ram,0x000109044c60) */
/* WARNING: Removing unreachable block (ram,0x000109044c44) */
/* WARNING: Removing unreachable block (ram,0x000109044c50) */
/* WARNING: Removing unreachable block (ram,0x000109044c74) */

long FUN_1090444f8(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined1 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  double dVar16;
  undefined8 uStack_1a8;
  undefined1 auStack_168 [48];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = param_3;
  lVar10 = param_3;
  _objc_retain();
  func_0x0001091a2620();
  if (lVar13 == 9) {
    lVar14 = 0;
  }
  else {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    *(long *)(param_1 + 0x58) = param_3;
    _objc_release(uVar2);
    lVar10 = param_3;
    func_0x00010c2bdc20();
    if ((int)lVar10 != 0) {
      puVar3 = PTR__OBJC_CLASS___AVMutableMetadataItem_1126d3518;
      func_0x00010c0cc520();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b6b40();
      func_0x00010c1b6ce0(puVar3);
      lVar10 = param_3;
      func_0x0001090469e4(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220160(puVar3);
      _objc_release(lVar10);
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_78 = puVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c73c0(*(undefined8 *)(param_1 + 0x60));
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    uStack_b8 = *(undefined8 *)PTR__AVFormatIDKey_11034cf30;
    uStack_b0 = *(undefined8 *)PTR__AVNumberOfChannelsKey_11034cf58;
    ppuStack_98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1d28;
    ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1d40;
    uStack_a8 = *(undefined8 *)PTR__AVSampleRateKey_11034cf60;
    dVar16 = *(double *)(param_1 + 0xb0);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uStack_a0 = *(undefined8 *)PTR__AVEncoderBitRateKey_11034cf28;
    puStack_88 = puVar4;
    func_0x00010bf0ed60(param_3);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_80 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___AVAssetWriterInput_1126bf5b0;
    _objc_alloc();
    func_0x00010c02a040();
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    *(undefined **)(param_1 + 0x68) = puVar3;
    _objc_release(uVar2);
    func_0x00010c198a40(*(undefined8 *)(param_1 + 0x68));
    _objc_release(puVar5);
    func_0x00010c2a5040(param_3);
    uVar15 = (ulong)dVar16;
    func_0x00010bfe0640(param_3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c2992e0(param_3);
    func_0x00010c0df720(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c086720(param_3);
    func_0x00010c0df840(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar3);
    uVar2 = *(undefined8 *)PTR__AVVideoCodecTypeH264_110348128;
    _objc_retain(uVar2);
    uStack_108 = *(undefined8 *)PTR__AVVideoCodecKey_110348120;
    uStack_100 = *(undefined8 *)PTR__AVVideoWidthKey_1103481a0;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uStack_e0 = uVar2;
    func_0x00010c0df860();
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = *(undefined8 *)PTR__AVVideoHeightKey_110348168;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_d8 = puVar3;
    func_0x00010c0df860();
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = *(undefined8 *)PTR__AVVideoScalingModeKey_110348188;
    uStack_c8 = *(undefined8 *)PTR__AVVideoScalingModeResizeAspectFill_110348190;
    uStack_e8 = *(undefined8 *)PTR__AVVideoCompressionPropertiesKey_110348158;
    puVar6 = puVar4;
    puStack_d0 = puVar5;
    func_0x00010bf51e00();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_c0 = puVar6;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c0d3c80();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    lVar10 = param_3;
    func_0x00010bf3f040();
    uStack_1a8 = uVar2;
    if (lVar10 == 2) {
      uStack_1a8 = *(undefined8 *)PTR__AVVideoCodecTypeHEVC_110348130;
      _objc_retain(uStack_1a8);
      _objc_release(uVar2);
      func_0x00010c1d0640(puVar4);
      func_0x00010c1d0560(puVar8);
      puVar3 = puVar4;
      func_0x00010bf51e00(puVar4);
      func_0x00010c1d0560(puVar8);
      _objc_release(puVar3);
      uVar9 = *(ulong *)(param_1 + 0x60);
      func_0x00010bf2c4a0();
      if ((uVar9 & 1) == 0) {
        func_0x00010c12d3e0(puVar4);
        puVar3 = puVar4;
        func_0x00010bf51e00(puVar4);
        func_0x00010c1d0560(puVar8);
        _objc_release(puVar3);
      }
    }
    puVar3 = PTR__OBJC_CLASS___AVAssetWriterInput_1126bf5b0;
    _objc_alloc();
    func_0x00010c02a040();
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    *(undefined **)(param_1 + 0x70) = puVar3;
    _objc_release(uVar2);
    func_0x00010c198a40(*(undefined8 *)(param_1 + 0x70));
    FUN_109046d80(auStack_168,(double)uVar15,(double)(ulong)(long)dVar16,param_1 + 0x20,
                  *(undefined1 *)(param_1 + 0x50));
    func_0x00010c219960(*(undefined8 *)(param_1 + 0x70));
    puVar3 = PTR__OBJC_CLASS___AVAssetWriterInputPixelBufferAdaptor_1126d0110;
    _objc_alloc();
    uStack_138 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
    ppuStack_120 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1d58;
    uStack_130 = *(undefined8 *)PTR__kCVPixelBufferWidthKey_11034a3d0;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df860();
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = *(undefined8 *)PTR__kCVPixelBufferHeightKey_11034a388;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_118 = puVar5;
    func_0x00010c0df860();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_110 = puVar6;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff46a0();
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    *(undefined **)(param_1 + 0x78) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar8);
    _objc_release(uStack_1a8);
    _objc_release(puVar4);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    uVar2 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    _objc_release(uVar2);
    iVar1 = (int)*(undefined8 *)(param_1 + 0x60);
    lVar10 = *(long *)(param_1 + 0x70);
    func_0x00010bf2c460();
    if (iVar1 == 0) {
      uVar12 = 0;
      lVar14 = 0;
      lVar13 = 0xf1;
    }
    else {
      func_0x00010bef93a0(*(undefined8 *)(param_1 + 0x60));
      *(undefined1 *)(param_1 + 0xf1) = 1;
      iVar1 = (int)*(undefined8 *)(param_1 + 0x60);
      lVar10 = *(long *)(param_1 + 0x68);
      func_0x00010bf2c460();
      if (iVar1 == 0) {
        uVar12 = 0;
        lVar14 = 0;
        lVar13 = 0xf0;
      }
      else {
        lVar10 = *(long *)(param_1 + 0x68);
        func_0x00010bef93a0(*(undefined8 *)(param_1 + 0x60));
        uVar12 = 1;
        lVar13 = 0xf0;
        lVar14 = 1;
      }
    }
    *(undefined1 *)(param_1 + lVar13) = uVar12;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (lVar10 == 0) {
      return param_3;
    }
    *(long *)(param_3 + 0xd0) = *(long *)(param_3 + 0xd0) + 1;
    iVar1 = (int)*(undefined8 *)(param_3 + 0x80);
    _CMBufferQueueIsEmpty();
    if (iVar1 == 0) {
      ppuVar11 = &PTR____CFConstantStringClassReference_110f1cbf8;
    }
    else {
      iVar1 = (int)*(undefined8 *)(param_3 + 0x70);
      func_0x00010c07bca0();
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdcd650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_3,PTR_s__appendVideoSampleBuffer__112550f30,lVar10);
        return param_3;
      }
      _CMBufferQueueEnqueue(*(undefined8 *)(param_3 + 0x80),lVar10);
      ppuVar11 = &PTR____CFConstantStringClassReference_110f1cc38;
    }
                    /* WARNING: Could not recover jumptable at 0x00010be5a770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_3,PTR_s__logVideoCMBufferQueueStatusWith_112574378,ppuVar11);
    return param_3;
  }
  return lVar14;
}



/* Entry: 109044bf4; end: 109044cdf; -[SCCapturerBufferedVideoWriter appendVideoSampleBuffer:] */

/* WARNING: Possible PIC construction at 0x000109044c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109044c5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109044c80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109044c38) */
/* WARNING: Removing unreachable block (ram,0x000109044c60) */
/* WARNING: Removing unreachable block (ram,0x000109044c44) */
/* WARNING: Removing unreachable block (ram,0x000109044c50) */
/* WARNING: Removing unreachable block (ram,0x000109044c74) */

void FUN_109044bf4(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined **ppuVar2;
  
  if (param_3 == 0) {
    return;
  }
  *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 0xd0) + 1;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x80);
  _CMBufferQueueIsEmpty();
  if (iVar1 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f1cbf8;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x70);
    func_0x00010c07bca0();
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdcd650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__appendVideoSampleBuffer__112550f30,param_3);
      return;
    }
    _CMBufferQueueEnqueue(*(undefined8 *)(param_1 + 0x80),param_3);
    ppuVar2 = &PTR____CFConstantStringClassReference_110f1cc38;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be5a770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logVideoCMBufferQueueStatusWith_112574378,ppuVar2);
  return;
}



/* Entry: 109044ce0; end: 109044e43; -[SCCapturerBufferedVideoWriter appendAudioSampleBuffer:] */

void FUN_109044ce0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_3 != 0) {
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
    iVar1 = (int)*(undefined8 *)(param_1 + 0x88);
    _CMBufferQueueIsEmpty();
    if (iVar1 == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x68);
      func_0x00010c07bca0();
      if (iVar1 != 0) {
        do {
          lVar2 = *(long *)(param_1 + 0x88);
          _CMBufferQueueDequeueAndRetain();
          if (lVar2 == 0) break;
          iVar1 = (int)*(undefined8 *)(param_1 + 0x68);
          func_0x00010bf06fe0();
          if (iVar1 == 0) {
            *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + 1;
            if (*(long *)(param_1 + 0xe8) == 0) {
              lVar3 = *(long *)(param_1 + 0x60);
              func_0x00010c252d60();
              if (lVar3 == 3) {
                uVar5 = *(undefined8 *)(param_1 + 0x60);
                func_0x00010bf987e0();
                _objc_retainAutoreleasedReturnValue();
                uVar6 = *(undefined8 *)(param_1 + 0xe8);
                *(undefined8 *)(param_1 + 0xe8) = uVar5;
                _objc_release(uVar6);
              }
            }
          }
          else {
            *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
          }
          _CFRelease(lVar2);
          uVar4 = *(ulong *)(param_1 + 0x68);
          func_0x00010c07bca0();
        } while ((uVar4 & 1) != 0);
      }
    }
    iVar1 = (int)*(undefined8 *)(param_1 + 0x68);
    func_0x00010c07bca0();
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbb5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__CMBufferQueueEnqueue_110348280)(*(undefined8 *)(param_1 + 0x88),param_3);
      return;
    }
    iVar1 = (int)*(undefined8 *)(param_1 + 0x68);
    func_0x00010bf06fe0();
    if (iVar1 == 0) {
      *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + 1;
      if (*(long *)(param_1 + 0xe8) == 0) {
        lVar2 = *(long *)(param_1 + 0x60);
        func_0x00010c252d60();
        if (lVar2 == 3) {
          uVar5 = *(undefined8 *)(param_1 + 0x60);
          func_0x00010bf987e0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = *(undefined8 *)(param_1 + 0xe8);
          *(undefined8 *)(param_1 + 0xe8) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(uVar6);
          return;
        }
      }
    }
    else {
      *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
    }
  }
  return;
}



/* Entry: 109044e44; end: 109044fff; -[SCCapturerBufferedVideoWriter startWritingAtSourceTime:] */

undefined * FUN_109044e44(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x0001091a2620();
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar1 == 8) {
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x60);
    func_0x00010c251d20();
    if ((uVar2 & 1) != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = (undefined *)0x1;
      func_0x00010c0e0760(uVar6);
      _objc_release(puVar3);
      uVar7 = param_3[1];
      uVar6 = *param_3;
      *(undefined8 *)(param_1 + 0xa0) = param_3[2];
      *(undefined8 *)(param_1 + 0x98) = uVar7;
      *(undefined8 *)(param_1 + 0x90) = uVar6;
      puVar3 = *(undefined **)(param_1 + 0x60);
      func_0x00010c2508a0();
      goto LAB_109044fc8;
    }
    puVar5 = *(undefined **)(param_1 + 0x60);
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010bf51e00();
  }
  _objc_release(puVar5);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  func_0x00010c29be80();
  _objc_release(param_1);
  _objc_release();
  puVar5 = (undefined *)0x0;
LAB_109044fc8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return puVar5;
  }
  ___stack_chk_fail();
  _CMBufferQueueReset(*(undefined8 *)(puVar3 + 0x80));
  _CMBufferQueueReset(*(undefined8 *)(puVar3 + 0x88));
  func_0x00010bf2f520(*(undefined8 *)(puVar3 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010be5a770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar3,PTR_s__logVideoCMBufferQueueStatusWith_112574378,
             &PTR____CFConstantStringClassReference_110f1cc98);
  return puVar3;
}



/* Entry: 109045000; end: 10904503f; -[SCCapturerBufferedVideoWriter cancelWriting] */

void FUN_109045000(long param_1)

{
  _CMBufferQueueReset(*(undefined8 *)(param_1 + 0x80));
  _CMBufferQueueReset(*(undefined8 *)(param_1 + 0x88));
  func_0x00010bf2f520(*(undefined8 *)(param_1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010be5a770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logVideoCMBufferQueueStatusWith_112574378,
             &PTR____CFConstantStringClassReference_110f1cc98);
  return;
}



/* Entry: 109045040; end: 109045327; -[SCCapturerBufferedVideoWriter finishWritingAtSourceTime:withCompletionHanlder:] */

void FUN_109045040(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x68);
  func_0x00010c07bca0();
  if (iVar1 != 0) {
    do {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x88);
      _CMBufferQueueIsEmpty();
      if (iVar1 != 0) break;
      lVar2 = *(long *)(param_1 + 0x88);
      _CMBufferQueueDequeueAndRetain();
      if (lVar2 == 0) break;
      iVar1 = (int)*(undefined8 *)(param_1 + 0x68);
      func_0x00010bf06fe0();
      if (iVar1 == 0) {
        *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + 1;
      }
      else {
        *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
      }
      _CFRelease(lVar2);
      uVar3 = *(ulong *)(param_1 + 0x68);
      func_0x00010c07bca0();
    } while ((uVar3 & 1) != 0);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x70);
  func_0x00010c07bca0();
  if (iVar1 != 0) {
    do {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x80);
      _CMBufferQueueIsEmpty();
      if (iVar1 != 0) break;
      lVar2 = *(long *)(param_1 + 0x80);
      _CMBufferQueueDequeueAndRetain();
      if (lVar2 == 0) break;
      func_0x00010bf06fe0(*(undefined8 *)(param_1 + 0x70));
      *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + 1;
      _CFRelease(lVar2);
      uVar3 = *(ulong *)(param_1 + 0x70);
      func_0x00010c07bca0();
    } while ((uVar3 & 1) != 0);
  }
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_109045328;
  puStack_a0 = &UNK_110ad6190;
  uStack_80 = param_3[1];
  uStack_88 = *param_3;
  uStack_78 = param_3[2];
  lStack_98 = param_1;
  _objc_retain(param_4);
  ppuVar4 = &puStack_b8;
  uStack_90 = param_4;
  _objc_retainBlock();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x88);
  _CMBufferQueueIsEmpty();
  if (iVar1 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x80);
    _CMBufferQueueIsEmpty();
    if (iVar1 != 0) {
      (*(code *)ppuVar4[2])(ppuVar4);
      goto LAB_1090452c8;
    }
  }
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x2020000000;
  uStack_c0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x2020000000;
  uStack_e0 = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x68);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar4);
  func_0x00010c135d80(uVar6);
  _objc_release(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar4);
  func_0x00010c135d80(uVar6);
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar4);
  __Block_object_dispose(&uStack_f8,8);
  __Block_object_dispose(&uStack_d8,8);
LAB_1090452c8:
  _objc_release(ppuVar4);
  _objc_release(uStack_90);
  _objc_release(param_4);
  return;
}



/* Entry: 109045328; end: 1090454c3;  */

void FUN_109045328(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_1 + 0x20);
  uStack_58 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x40);
  uStack_78 = *(undefined8 *)(lVar2 + 0x98);
  uStack_80 = *(undefined8 *)(lVar2 + 0x90);
  uStack_70 = *(undefined8 *)(lVar2 + 0xa0);
  func_0x00010bdc9620(&uStack_48,*(undefined8 *)(lVar2 + 0xa8),lVar2,param_2,&uStack_60,&uStack_80);
  uStack_58 = uStack_40;
  uStack_60 = uStack_48;
  uStack_50 = uStack_38;
  func_0x00010bf95400(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60),param_2,&uStack_60);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x10904542c;
  puStack_98 = &UNK_11084aaa8;
  uStack_90 = uVar3;
  _objc_retain(uVar1);
  uStack_88 = uVar1;
  _objc_retain(uVar3);
  func_0x00010bfaff80(uVar4,param_2,&puStack_b0);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uVar3);
  return;
}



/* Entry: 1090454c4; end: 109045693;  */

void FUN_1090454c4(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
  _CMBufferQueueIsEmpty();
  if (iVar2 == 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x60);
    func_0x00010c252d60();
    if (lVar3 == 1) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x88);
      _CMBufferQueueDequeueAndRetain();
      if (lVar3 != 0) {
        iVar2 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
        func_0x00010bf06fe0();
        lVar1 = 200;
        if (iVar2 == 0) {
          lVar1 = 0xe0;
        }
        *(long *)(*(long *)(param_1 + 0x20) + lVar1) =
             *(long *)(*(long *)(param_1 + 0x20) + lVar1) + 1;
        _CFRelease(lVar3);
      }
      goto LAB_10904556c;
    }
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  if ((*(byte *)(lVar3 + 0x18) & 1) == 0) {
    *(undefined1 *)(lVar3 + 0x18) = 1;
    func_0x00010c0bb0a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68));
  }
LAB_10904556c:
  if ((*(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) == '\x01') &&
     (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x0001090455a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 109045694; end: 109045707; -[SCCapturerBufferedVideoWriter cleanUp] */

void FUN_109045694(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c281b20(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be5a770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logVideoCMBufferQueueStatusWith_112574378,
             &PTR____CFConstantStringClassReference_110f1ccb8);
  return;
}



/* Entry: 109045708; end: 109045767; -[SCCapturerBufferedVideoWriter dealloc] */

void FUN_109045708(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _CFRelease(*(undefined8 *)(param_1 + 0x80));
  _CFRelease(*(undefined8 *)(param_1 + 0x88));
  func_0x00010bf3a4a0(*(undefined8 *)(param_1 + 0xb8));
  func_0x00010c281b20(*(undefined8 *)(param_1 + 0x18));
  puStack_28 = PTR_PTR_112700048;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 109045768; end: 1090457fb; -[SCCapturerBufferedVideoWriter assetWriterStatusChanged:] */

void FUN_109045768(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c252d60();
  if (lVar1 == 3) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010bf987e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    func_0x00010c29be80(lVar1,param_2,uVar3,&PTR____CFConstantStringClassReference_110f1ccd8);
    _objc_release(uVar3);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1090457fc; end: 10904589b; -[SCCapturerBufferedVideoWriter _appendVideoSampleBuffer:] */

void FUN_1090457fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _CMSampleBufferGetPresentationTimeStamp(&uStack_38,param_3);
  uStack_68 = uStack_30;
  uStack_70 = uStack_38;
  uStack_60 = uStack_28;
  uStack_88 = *(undefined8 *)(param_1 + 0x98);
  uStack_90 = *(undefined8 *)(param_1 + 0x90);
  uStack_80 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bdc9620(&uStack_50,*(undefined8 *)(param_1 + 0xa8),param_1,param_2,&uStack_70,
                      &uStack_90);
  _CMSampleBufferGetImageBuffer(param_3);
  uStack_68 = uStack_48;
  uStack_70 = uStack_50;
  uStack_60 = uStack_40;
  func_0x00010bf06f60(*(undefined8 *)(param_1 + 0x78),param_2,param_3,&uStack_70);
  *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + 1;
  return;
}



/* Entry: 10904589c; end: 1090458eb; -[SCCapturerBufferedVideoWriter _logVideoCMBufferQueueStatusWithContext:] */

void FUN_10904589c(long param_1)

{
  int iVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x80);
  _CMBufferQueueIsEmpty();
  if (iVar1 == 0) {
    _CMBufferQueueGetBufferCount(*(undefined8 *)(param_1 + 0x80));
    _CMBufferQueueGetFirstPresentationTimeStamp(auStack_38,*(undefined8 *)(param_1 + 0x80));
    _CMBufferQueueGetMaxPresentationTimeStamp(auStack_50,*(undefined8 *)(param_1 + 0x80));
  }
  return;
}



/* Entry: 1090458ec; end: 1090459c3; -[SCCapturerBufferedVideoWriter _adjustedTimeForTime:startTime:speedRate:] */

void FUN_1090458ec(undefined8 *param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  bVar1 = true;
  if ((0.0 < param_2) && (bVar1 = false, !NAN(param_2))) {
    bVar1 = param_2 == 1.0;
  }
  if (bVar1) {
    uVar2 = *param_5;
    param_1[1] = param_5[1];
    *param_1 = uVar2;
    param_1[2] = param_5[2];
  }
  else {
    uStack_58 = param_5[1];
    uStack_60 = *param_5;
    uStack_50 = param_5[2];
    uStack_78 = param_6[1];
    uStack_80 = *param_6;
    uStack_70 = param_6[2];
    _CMTimeSubtract(&uStack_48,&uStack_60,&uStack_80);
    uStack_78 = uStack_40;
    uStack_80 = uStack_48;
    uStack_70 = uStack_38;
    _CMTimeMultiplyByFloat64(&uStack_60,1.0 / param_2,&uStack_80);
    uStack_78 = uStack_58;
    uStack_80 = uStack_60;
    uStack_70 = uStack_50;
    uStack_98 = param_6[1];
    uStack_a0 = *param_6;
    uStack_90 = param_6[2];
    _CMTimeAdd(param_1,&uStack_80,&uStack_a0);
  }
  return;
}



/* Entry: 1090459c4; end: 1090459cb; -[SCCapturerBufferedVideoWriter countOfAudioSamplesAppended] */

undefined8 FUN_1090459c4(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 1090459cc; end: 1090459d3; -[SCCapturerBufferedVideoWriter countOfVideoSamplesAppended] */

undefined8 FUN_1090459cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 1090459d4; end: 1090459db; -[SCCapturerBufferedVideoWriter countOfAudioSamplesAppendedByUser] */

undefined8 FUN_1090459d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 1090459dc; end: 1090459e3; -[SCCapturerBufferedVideoWriter countOfVideoSamplesAppendedByUser] */

undefined8 FUN_1090459dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 1090459e4; end: 1090459eb; -[SCCapturerBufferedVideoWriter countOfAudioSamplesAppendFailed] */

undefined8 FUN_1090459e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 1090459ec; end: 1090459f3; -[SCCapturerBufferedVideoWriter audioSampleAppendError] */

undefined8 FUN_1090459ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 1090459f4; end: 1090459fb; -[SCCapturerBufferedVideoWriter isAudioWriterPrepared] */

undefined1 FUN_1090459f4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf0);
}



/* Entry: 1090459fc; end: 109045a03; -[SCCapturerBufferedVideoWriter isVideoWriterPrepared] */

undefined1 FUN_1090459fc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf1);
}



/* Entry: 109045a04; end: 109045a8f; -[SCCapturerBufferedVideoWriter .cxx_destruct] */

void FUN_109045a04(long param_1)

{
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109045a90; end: 109045bc3;  */

void FUN_109045a90(double param_1,undefined8 param_2,double param_3,double param_4)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  dVar2 = param_3;
  _objc_release(puVar1);
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  dRam0000000113730760 = 0.0;
  if (param_3 != 0.0) {
    dVar2 = (param_4 - param_1) - dVar2;
    if (dVar2 == 0.0) {
      dRam0000000113730760 = INFINITY;
    }
    else {
      dRam0000000113730760 = param_3 / dVar2;
    }
  }
  return;
}



/* Entry: 109045bc4; end: 109045c67;  */

void FUN_109045bc4(double param_1,undefined8 param_2,double param_3,double param_4)

{
  int iVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  dVar4 = param_3;
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c14d9e0();
  iVar1 = (int)puVar2;
  func_0x000107c30a70();
  dVar3 = 30.0;
  if (iVar1 == 0) {
    dVar3 = 0.0;
  }
  dRam0000000113730768 =
       (double)(float)(int)((param_3 * (param_4 - dVar3)) / ((param_4 - param_1) - dVar4));
  dRam0000000113730770 = param_4 - dVar3;
  return;
}



/* Entry: 109045c68; end: 109045e03;  */

void FUN_109045c68(double param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  puVar1 = param_2;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  puVar2 = param_2;
  func_0x00010bfe8380(param_2);
  dVar9 = param_1;
  FUN_109045e04(puVar1,puVar2);
  if ((int)puVar1 == 0) {
    _objc_retain(param_2);
    puVar1 = param_2;
  }
  else {
    puVar2 = param_2;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    puVar1 = param_2;
    func_0x00010bfe8380(param_2);
    puVar3 = puVar2;
    _CGImageGetWidth();
    puVar4 = puVar2;
    _CGImageGetHeight();
    puVar5 = puVar4;
    func_0x000107c30a70();
    puVar6 = puVar3;
    puVar7 = puVar4;
    if (((int)puVar5 != 0) && (puVar5 = PTR_PTR_1126b9e78, func_0x00010c072be0(), (int)puVar5 != 0))
    {
      puVar7 = (undefined *)((ulong)puVar4 & 0xfffffffffffffffe);
      func_0x000107c2aaf0(puVar3);
      dVar8 = (double)puVar7 / dVar9;
      if ((double)puVar3 <= (double)puVar7 / dVar9) {
        dVar8 = (double)puVar3;
      }
      puVar6 = (undefined *)((long)dVar8 & 0xfffffffffffffffe);
    }
    FUN_10904637c(param_1,puVar6,puVar7,puVar1,&uStack_58,&uStack_60);
    dVar9 = (double)puVar3;
    uVar10 = NEON_ucvtf(uStack_58);
    uVar11 = NEON_ucvtf(uStack_60);
    FUN_10904647c(dVar9,(double)puVar4,uVar10,uVar11);
    _CGImageCreateWithImageInRect(puVar2);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14e120(param_2);
    func_0x00010bfe8380(param_2);
    func_0x00010bfe9260(dVar9,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _CGImageRelease(puVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109045e04; end: 109045e7b;  */

bool FUN_109045e04(double param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  double dVar2;
  
  dVar2 = 1.0 / param_1;
  if ((1L << (param_3 & 0x3f) & 0xccU) == 0) {
    dVar2 = param_1;
  }
  if (param_3 < 8) {
    param_1 = dVar2;
  }
  uVar1 = param_2;
  _CGImageGetWidth();
  _CGImageGetHeight(param_2);
  return 2 < (uVar1 - (long)(param_1 * (double)param_2)) + 1;
}



/* Entry: 109045e7c; end: 1090460a7;  */

ulong FUN_109045e7c(ulong param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uStack_68;
  
  if (param_2 == 0) {
    return 0;
  }
  uStack_68 = 0;
  uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  _CVPixelBufferPoolCreatePixelBuffer(uVar3,param_2,&uStack_68);
  if ((int)uVar3 == 0) {
    uVar12 = param_1;
    _CVPixelBufferGetWidth();
    uVar4 = param_1;
    _CVPixelBufferGetHeight();
    uVar13 = uStack_68;
    _CVPixelBufferGetWidth();
    uVar5 = uStack_68;
    _CVPixelBufferGetHeight();
    if ((uVar13 <= uVar12) && (uVar5 <= uVar4)) {
      uVar6 = param_1;
      _CVPixelBufferGetPlaneCount();
      uVar14 = uStack_68;
      _CVPixelBufferGetPlaneCount();
      if (uVar6 == uVar14) {
        _CVPixelBufferLockBaseAddress(param_1,1);
        _CVPixelBufferLockBaseAddress(uStack_68,0);
        uVar6 = param_1;
        _CVPixelBufferGetPlaneCount();
        if (uVar6 != 0) {
          uVar14 = 0;
          uVar12 = uVar12 - uVar13 >> 1 & 0x7ffffffffffffffe;
          uVar13 = uVar4 - uVar5 >> 1 & 0x7ffffffffffffffe;
          do {
            uVar7 = param_1;
            _CVPixelBufferGetHeightOfPlane(param_1,uVar14);
            uVar8 = param_1;
            _CVPixelBufferGetBytesPerRowOfPlane(param_1,uVar14);
            uVar9 = param_1;
            _CVPixelBufferGetBaseAddressOfPlane(param_1,uVar14);
            uVar10 = uStack_68;
            _CVPixelBufferGetHeightOfPlane(uStack_68,uVar14);
            uVar11 = uStack_68;
            _CVPixelBufferGetBytesPerRowOfPlane(uStack_68,uVar14);
            uVar5 = uStack_68;
            _CVPixelBufferGetBaseAddressOfPlane(uStack_68,uVar14);
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = (uVar7 * uVar13) / uVar4;
            }
            lVar1 = uVar9 + uVar2 * uVar8 + uVar12;
            if ((uVar7 == uVar10 && (uVar12 == 0 && uVar13 == 0)) && (uVar8 == uVar11)) {
              _memcpy(uVar5,lVar1,uVar8 * uVar7);
            }
            else {
              uVar2 = uVar8 - uVar12;
              if (uVar11 <= uVar8 - uVar12) {
                uVar2 = uVar11;
              }
              for (; uVar10 != 0; uVar10 = uVar10 - 1) {
                _memcpy(uVar5,lVar1,uVar2);
                lVar1 = lVar1 + uVar8;
                uVar5 = uVar5 + uVar11;
              }
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 != uVar6);
        }
        _CVPixelBufferUnlockBaseAddress(param_1,1);
        _CVPixelBufferUnlockBaseAddress(uStack_68,0);
        return uStack_68;
      }
    }
    _CFRelease(uStack_68);
  }
  return 0;
}



/* Entry: 1090460a8; end: 1090461b3;  */

long FUN_1090460a8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if (param_2 == 0) {
    return 0;
  }
  lStack_38 = 0;
  lVar1 = *(long *)PTR__kCFAllocatorDefault_11034ab78;
  _CMVideoFormatDescriptionCreateForImageBuffer(lVar1,param_2,&lStack_38);
  if (lStack_38 != 0) {
    uStack_58 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 0x28);
    uStack_60 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 0x20);
    uStack_48 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 0x38);
    uStack_50 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 0x30);
    uStack_40 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 0x40);
    uStack_78 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 8);
    uStack_80 = *(undefined8 *)PTR__kCMTimingInfoInvalid_110348688;
    uStack_68 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 0x18);
    uStack_70 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 0x10);
    _CMSampleBufferGetSampleTimingInfo(param_1,0,&uStack_80);
    lStack_88 = 0;
    _CMSampleBufferCreateForImageBuffer(lVar1,param_2,1,0,0,lStack_38,&uStack_80,&lStack_88);
    _CFRelease(lStack_38);
    _CFRelease(param_2);
    if (lStack_88 != 0) {
      _CMCopyDictionaryOfAttachments(lVar1,param_1,1);
      if (lVar1 == 0) {
        return lStack_88;
      }
      _CMSetAttachments(lStack_88,lVar1,1);
      _CFRelease(lVar1);
      return lStack_88;
    }
  }
  return 0;
}



/* Entry: 1090461b4; end: 1090461f3;  */

long FUN_1090461b4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = param_1;
  _CMSampleBufferGetImageBuffer();
  FUN_109045e7c();
  if (lVar1 != 0) {
    lStack_38 = 0;
    lVar2 = *(long *)PTR__kCFAllocatorDefault_11034ab78;
    _CMVideoFormatDescriptionCreateForImageBuffer(lVar2,lVar1,&lStack_38);
    if (lStack_38 != 0) {
      uStack_58 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 0x28);
      uStack_60 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 0x20);
      uStack_48 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 0x38);
      uStack_50 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 0x30);
      uStack_40 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 0x40);
      uStack_78 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 8);
      uStack_80 = *(undefined8 *)PTR__kCMTimingInfoInvalid_110348688;
      uStack_68 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 0x18);
      uStack_70 = *(undefined8 *)(PTR__kCMTimingInfoInvalid_110348688 + 0x10);
      _CMSampleBufferGetSampleTimingInfo(param_1,0,&uStack_80);
      lStack_88 = 0;
      _CMSampleBufferCreateForImageBuffer(lVar2,lVar1,1,0,0,lStack_38,&uStack_80,&lStack_88);
      _CFRelease(lStack_38);
      _CFRelease(lVar1);
      if (lStack_88 != 0) {
        _CMCopyDictionaryOfAttachments(lVar2,param_1,1);
        if (lVar2 == 0) {
          return lStack_88;
        }
        _CMSetAttachments(lStack_88,lVar2,1);
        _CFRelease(lVar2);
        return lStack_88;
      }
    }
    return 0;
  }
  return 0;
}



/* Entry: 1090461f4; end: 10904637b;  */

undefined8 FUN_1090461f4(ulong param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_58;
  
  _CVPixelBufferGetWidth();
  _CVPixelBufferGetHeight(param_1);
  _CVPixelBufferGetPixelFormatType(param_1);
  uVar2 = param_1;
  _CVBufferGetAttachments(param_1,1);
  func_0x00010c0d3c80();
  func_0x00010c1d0560();
  if (param_2 == 0) {
    iVar1 = (int)*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  }
  else {
    _CMMemoryPoolGetAllocator();
    iVar1 = (int)param_2;
  }
  _CVPixelBufferCreate();
  if (iVar1 == 0) {
    uVar7 = param_1;
    _CVPixelBufferLockBaseAddress(param_1,1);
    if ((int)uVar7 == 0) {
      _CVPixelBufferLockBaseAddress(0,0);
      uVar3 = param_1;
      _CVPixelBufferGetPlaneCount();
      uVar7 = 0;
      if (uVar3 < 2) {
        uVar3 = 1;
      }
      do {
        uStack_58 = 0;
        _CVPixelBufferGetBaseAddressOfPlane(0,uVar7);
        uVar4 = param_1;
        _CVPixelBufferGetBaseAddressOfPlane(param_1,uVar7);
        uVar5 = param_1;
        _CVPixelBufferGetHeightOfPlane(param_1,uVar7);
        uVar6 = param_1;
        _CVPixelBufferGetBytesPerRowOfPlane(param_1,uVar7);
        _memcpy(uStack_58,uVar4,uVar6 * uVar5);
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
      _CVPixelBufferUnlockBaseAddress(param_1,1);
      _CVPixelBufferUnlockBaseAddress(0,0);
    }
    else {
      _CFRelease();
    }
  }
  _objc_release(uVar2);
  return 0;
}



/* Entry: 10904637c; end: 109046467;  */

void FUN_10904637c(double param_1,ulong param_2,ulong param_3,ulong param_4,ulong *param_5,
                  ulong *param_6)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  
  if ((param_4 < 8) && ((1L << (param_4 & 0x3f) & 0xccU) != 0)) {
    param_1 = 1.0 / param_1;
  }
  puVar1 = PTR_PTR_1126b9e78;
  func_0x00010c072be0();
  fVar3 = (float)param_2;
  fVar2 = (float)(int)(param_1 * (double)param_3);
  if ((int)puVar1 == 0) {
    if (fVar2 < fVar3) {
      *param_6 = param_3;
      param_6 = param_5;
    }
    else {
      *param_5 = param_2;
      fVar2 = (float)(int)((double)param_2 / param_1);
    }
  }
  else if (fVar3 < fVar2) {
    *param_6 = param_3;
    param_6 = param_5;
    if (fVar3 <= fVar2) {
      fVar2 = fVar3;
    }
  }
  else {
    *param_5 = param_2;
    fVar2 = (float)(int)((double)param_2 / param_1);
    if ((float)param_3 <= (float)(int)((double)param_2 / param_1)) {
      fVar2 = (float)param_3;
    }
  }
  *param_6 = (long)fVar2;
  return;
}



/* Entry: 109046468; end: 10904647b;  */

double FUN_109046468(ulong param_1,undefined8 param_2,ulong param_3)

{
  unkuint9 Var1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  
  Var1 = (unkuint9)param_1;
  func_0x000107c30a70();
  dVar4 = (double)(unkint9)Var1 - (double)param_3;
  if ((int)param_1 == 0) {
    dVar3 = dVar4 * 0.5;
  }
  else {
    puVar2 = PTR_PTR_1126b9e78;
    func_0x00010c072be0();
    dVar3 = (double)(float)(int)(dVar4 * 0.5);
    if ((int)puVar2 == 0) {
      dVar3 = dVar4;
    }
  }
  return dVar3;
}



/* Entry: 10904647c; end: 10904651b;  */

double FUN_10904647c(double param_1,undefined8 param_2,double param_3,int param_4)

{
  undefined *puVar1;
  double dVar2;
  
  func_0x000107c30a70();
  param_1 = param_1 - param_3;
  if (param_4 == 0) {
    dVar2 = param_1 * 0.5;
  }
  else {
    puVar1 = PTR_PTR_1126b9e78;
    func_0x00010c072be0();
    dVar2 = (double)(float)(int)(param_1 * 0.5);
    if ((int)puVar1 == 0) {
      dVar2 = param_1;
    }
  }
  return dVar2;
}



/* Entry: 10904651c; end: 109046797;  */

void FUN_10904651c(float param_1,undefined8 param_2,double param_3,undefined *param_4)

{
  float fVar1;
  double dVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  ulong uStack_90;
  ulong uStack_88;
  
  _objc_retain();
  if (param_1 == 1.0) {
    puVar5 = param_4;
    FUN_109045c68(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = param_4;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    _CGImageGetWidth();
    puVar6 = param_4;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    _CGImageGetHeight();
    dVar13 = (double)puVar5;
    dVar14 = (double)puVar6;
    fVar1 = (float)puVar6;
    dVar15 = param_3;
    dVar2 = ((double)((ulong)puVar6 >> 1) + dVar13 * param_3) / dVar14;
    if (puVar6 < puVar5) {
      fVar1 = (float)puVar5;
      dVar15 = ((double)((ulong)puVar5 >> 1) + dVar14 * param_3) / dVar13;
      dVar2 = param_3;
    }
    param_1 = param_1 * ((float)param_3 / fVar1);
    puVar7 = param_4;
    uStack_90 = (long)dVar15;
    uStack_88 = (long)dVar2;
    func_0x00010bfe8380(param_4);
    FUN_10904637c(param_2,(long)dVar2,(long)dVar15,puVar7,&uStack_88,&uStack_90);
    uVar4 = uStack_88;
    uVar3 = uStack_90;
    puVar7 = param_4;
    _objc_retainAutorelease(param_4);
    func_0x00010bdc1020();
    _CGImageGetBitsPerComponent();
    puVar8 = param_4;
    _objc_retainAutorelease(param_4);
    func_0x00010bdc1020();
    _CGImageGetBitsPerPixel();
    puVar9 = param_4;
    _objc_retainAutorelease(param_4);
    func_0x00010bdc1020();
    _CGImageGetColorSpace();
    puVar10 = param_4;
    _objc_retainAutorelease(param_4);
    func_0x00010bdc1020();
    _CGImageGetBitmapInfo();
    uVar11 = 0;
    _CGBitmapContextCreate(0,uVar4,uVar3,puVar7,(long)puVar8 * uVar4 >> 3,puVar9,puVar10);
    _CGContextSetInterpolationQuality();
    dVar15 = -((double)param_1 * dVar13 * 0.5) + (double)uVar4 * 0.5;
    puVar7 = param_4;
    _objc_retainAutorelease(param_4);
    func_0x00010bdc1020();
    _CGContextDrawImage(dVar15,-((double)param_1 * dVar14 * 0.5) + (double)uVar3 * 0.5,
                        (double)((float)puVar5 * param_1),(double)((float)puVar6 * param_1),uVar11,
                        puVar7);
    uVar12 = uVar11;
    _CGBitmapContextCreateImage(uVar11);
    _CGContextRelease(uVar11);
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14e120(param_4);
    func_0x00010bfe8380(param_4);
    func_0x00010bfe9260(dVar15,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _CGImageRelease(uVar12);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 109046798; end: 1090468e3;  */

void FUN_109046798(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(ulong *)PTR__kCGImagePropertyExifDictionary_110349cd0;
  _CMGetAttachment(param_2,uVar7,0);
  uVar1 = param_2;
  func_0x000107c2aafc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar1);
  func_0x000107c2ab00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(param_2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_58 = puVar2;
  func_0x00010c0df740(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &puStack_58;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(ppuVar8);
  puVar3 = PTR_PTR_1126afed0;
  func_0x00010bfbb140();
  if (((ulong)puVar3 & uVar7) != 0) {
    ppuVar5 = ppuVar8;
    func_0x00010bf6ff40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c073ee0();
    _objc_release(ppuVar5);
    if ((int)ppuVar6 != 0) {
      func_0x00010befa120(puVar2);
    }
    puVar3 = PTR_PTR_1126afed0;
    func_0x00010bfbb140();
    uVar7 = uVar7 & ((ulong)puVar3 ^ 0xffffffffffffffff);
  }
  puVar3 = PTR_PTR_1126afed0;
  func_0x00010bf13820();
  if (((ulong)puVar3 & uVar7) != 0) {
    ppuVar5 = ppuVar8;
    func_0x00010bf6ff40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c06ce80();
    _objc_release(ppuVar5);
    if ((int)ppuVar6 != 0) {
      func_0x00010befa120(puVar2);
    }
    func_0x00010bf13820(PTR_PTR_1126afed0);
  }
  func_0x00010c0db140(PTR_PTR_1126afed0);
  _objc_release(ppuVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1090468e4; end: 109046b77;  */

void FUN_1090468e4(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126afed0;
  func_0x00010bfbb140();
  if (((ulong)puVar1 & param_2) != 0) {
    uVar2 = param_3;
    func_0x00010bf6ff40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c073ee0();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      func_0x00010befa120(param_1);
    }
    puVar1 = PTR_PTR_1126afed0;
    func_0x00010bfbb140();
    param_2 = param_2 & ((ulong)puVar1 ^ 0xffffffffffffffff);
  }
  puVar1 = PTR_PTR_1126afed0;
  func_0x00010bf13820();
  if (((ulong)puVar1 & param_2) != 0) {
    uVar2 = param_3;
    func_0x00010bf6ff40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06ce80();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      func_0x00010befa120(param_1);
    }
    func_0x00010bf13820(PTR_PTR_1126afed0);
  }
  func_0x00010c0db140(PTR_PTR_1126afed0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109046b78; end: 109046d7f;  */

void FUN_109046b78(undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar3 = PTR__CGAffineTransformIdentity_110347008;
  if (param_3 < 3) {
    if (param_3 == 0) {
      uVar6 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      param_1[1] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      *param_1 = uVar6;
      param_1[3] = uVar8;
      param_1[2] = uVar7;
      uVar6 = *(undefined8 *)(puVar3 + 0x20);
      param_1[5] = *(undefined8 *)(puVar3 + 0x28);
      param_1[4] = uVar6;
      return;
    }
    uVar4 = 3;
    if (param_3 != 2) {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 2;
    if (param_3 != 3) {
      uVar4 = (ulong)(param_3 == 4);
    }
  }
  if (param_2 - 1U < 3) {
    lVar5 = *(long *)(&UNK_10dfb29e8 + (param_2 - 1U) * 8);
  }
  else {
    lVar5 = 0;
  }
  uVar1 = *(long *)(&UNK_10dfb2a00 + uVar4 * 8) + lVar5;
  uVar2 = uVar1 + 0x168;
  if ((long)uVar1 < 0 == SCARRY8(*(long *)(&UNK_10dfb2a00 + uVar4 * 8),lVar5)) {
    uVar2 = uVar1;
  }
  if (0x10d < uVar2) {
    uVar2 = 0x10e;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbaaa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGAffineTransformMakeRotation_110347020)((double)uVar2 * 0.017453292519943295);
  return;
}



/* Entry: 109046d80; end: 109046e27;  */

void FUN_109046d80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  int param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_5 != 0) {
    uStack_58 = param_4[1];
    uStack_60 = *param_4;
    uStack_48 = param_4[3];
    uStack_50 = param_4[2];
    uStack_38 = param_4[5];
    uStack_40 = param_4[4];
    iVar1 = (int)&uStack_60;
    _CGAffineTransformIsIdentity();
    if (iVar1 != 0) {
      uVar2 = *param_4;
      uVar4 = param_4[3];
      uVar3 = param_4[2];
      param_1[1] = param_4[1];
      *param_1 = uVar2;
      param_1[3] = uVar4;
      param_1[2] = uVar3;
      uVar2 = param_4[4];
      param_1[5] = param_4[5];
      param_1[4] = uVar2;
      return;
    }
  }
  _CGAffineTransformMakeTranslation(&uStack_60,param_3,0);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_b8 = param_4[1];
  uStack_c0 = *param_4;
  uStack_a8 = param_4[3];
  uStack_b0 = param_4[2];
  uStack_98 = param_4[5];
  uStack_a0 = param_4[4];
  _CGAffineTransformConcat(param_1,&uStack_90,&uStack_c0);
  return;
}



/* Entry: 109046e28; end: 109046ed7;  */

undefined8 FUN_109046e28(ulong param_1)

{
  if (param_1 < 8) {
    return *(undefined8 *)(&UNK_10dfb2a20 + param_1 * 8);
  }
  return 7;
}



/* Entry: 109046ed8; end: 109046f53; -[SCManagedVideoCacheSampleBufferHandler init] */

undefined1 * FUN_109046ed8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700050;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = 3;
    *(undefined1 *)((long)puVar1 + 0x18) = 1;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109046f54; end: 109047007; -[SCManagedVideoCacheSampleBufferHandler appendCachedVideoSampleBuffer:] */

void FUN_109046f54(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0();
  lVar3 = *(long *)(param_1 + 8);
  if (uVar2 < *(ulong *)(param_1 + 0x20)) {
    func_0x00010befa120(lVar3,param_2,param_3);
  }
  else {
    func_0x00010c14da60(lVar3,param_2,*(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010c1494c0(lVar3);
      _CFRelease();
    }
    func_0x00010c130f40(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x10),param_3
                       );
    _objc_release(lVar3);
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(long *)(param_1 + 0x10) + 1;
  uVar5 = *(ulong *)(param_1 + 0x20);
  uVar1 = 0;
  if (uVar5 != 0) {
    uVar1 = uVar2 / uVar5;
  }
  *(ulong *)(param_1 + 0x10) = uVar2 - uVar1 * uVar5;
  func_0x00010bf529e0();
  *(undefined8 *)(param_1 + 0x28) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109047008; end: 1090470e7; -[SCManagedVideoCacheSampleBufferHandler handleCachedSampleBuffersIfNeededWithPresentationTime:processingFrameBlock:completeBlock:] */

void FUN_109047008(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    if (param_5 == 0) goto LAB_1090470c4;
    pcVar3 = *(code **)(param_5 + 0x10);
    uVar2 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x18) = 0;
    lVar1 = param_1;
    func_0x00010beb3ec0();
    if ((int)lVar1 == 0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      func_0x00010be8a3e0(param_1);
    }
    else {
      func_0x00010be26be0(param_1);
    }
    if (param_5 == 0) goto LAB_1090470c4;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    pcVar3 = *(code **)(param_5 + 0x10);
  }
  (*pcVar3)(param_5,uVar2);
LAB_1090470c4:
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1090470e8; end: 10904724b; -[SCManagedVideoCacheSampleBufferHandler _shouldHandleCachedSampleBufferWithCurrentPresentationTime:] */

undefined1 * FUN_1090470e8(long param_1,undefined8 param_2,double *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  long alStack_1a8 [3];
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
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
  lStack_118 = 0;
  lStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar7 = *(long *)(param_1 + 8);
  _objc_retain(lVar7);
  plVar5 = &lStack_120;
  puVar4 = auStack_d8;
  lVar2 = lVar7;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_110;
    do {
      lVar11 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(lVar7);
        }
        func_0x00010c1494c0(*(undefined8 *)(lStack_118 + lVar11 * 8));
        _CMSampleBufferGetPresentationTimeStamp(&dStack_138);
        dStack_148 = param_3[1];
        dVar12 = *param_3;
        dStack_140 = param_3[2];
        dStack_150 = dVar12;
        _CMTimeGetSeconds(&dStack_150);
        dStack_148 = (double)uStack_130;
        dStack_150 = dStack_138;
        dStack_140 = (double)uStack_128;
        dVar13 = dStack_138;
        _CMTimeGetSeconds(&dStack_150);
        if ((0.0 < dVar12 - dVar13) && (dVar12 - dVar13 <= 0.05)) {
          puVar8 = (undefined1 *)0x1;
          goto LAB_109047208;
        }
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      plVar5 = &lStack_120;
      puVar4 = auStack_d8;
      lVar2 = lVar7;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  puVar8 = (undefined1 *)0x0;
LAB_109047208:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  uVar10 = *(ulong *)(lVar7 + 0x20);
  uVar1 = *(ulong *)(lVar7 + 8);
  func_0x00010bf529e0();
  if (uVar1 <= uVar10) {
    uVar10 = uVar1;
  }
  if (uVar10 != 0) {
    uVar10 = 0;
    do {
      func_0x00010bf529e0();
      lVar2 = *(long *)(lVar7 + 8);
      func_0x00010c14da60();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) break;
      uVar1 = *(long *)(lVar7 + 0x10) + 1;
      uVar6 = *(ulong *)(lVar7 + 0x20);
      uVar3 = 0;
      if (uVar6 != 0) {
        uVar3 = uVar1 / uVar6;
      }
      *(ulong *)(lVar7 + 0x10) = uVar1 - uVar3 * uVar6;
      lVar9 = lVar2;
      func_0x00010c1494c0();
      _CMSampleBufferGetPresentationTimeStamp(alStack_1a8);
      if (alStack_1a8[0] < *plVar5) {
        if (puVar4 != (undefined1 *)0x0) {
          (**(code **)(puVar4 + 0x10))(puVar4,lVar9);
        }
      }
      else {
        func_0x00010c1494c0(lVar2);
        _CFRelease();
      }
      _objc_release(lVar2);
      uVar10 = uVar10 + 1;
      uVar1 = *(ulong *)(lVar7 + 0x20);
      uVar3 = *(ulong *)(lVar7 + 8);
      func_0x00010bf529e0();
      if (uVar3 <= uVar1) {
        uVar1 = uVar3;
      }
    } while (uVar10 < uVar1);
  }
  _objc_release(puVar4);
  return puVar4;
}



/* Entry: 10904724c; end: 109047363; -[SCManagedVideoCacheSampleBufferHandler _handleCachedSampleBufferWithCurrentPresentationTime:callbackBlock:] */

void FUN_10904724c(long param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long alStack_58 [3];
  
  _objc_retain(param_4);
  uVar6 = *(ulong *)(param_1 + 0x20);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0();
  if (uVar1 <= uVar6) {
    uVar6 = uVar1;
  }
  if (uVar6 != 0) {
    uVar6 = 0;
    do {
      func_0x00010bf529e0();
      lVar2 = *(long *)(param_1 + 8);
      func_0x00010c14da60();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) break;
      uVar1 = *(long *)(param_1 + 0x10) + 1;
      uVar5 = *(ulong *)(param_1 + 0x20);
      uVar4 = 0;
      if (uVar5 != 0) {
        uVar4 = uVar1 / uVar5;
      }
      *(ulong *)(param_1 + 0x10) = uVar1 - uVar4 * uVar5;
      lVar3 = lVar2;
      func_0x00010c1494c0();
      _CMSampleBufferGetPresentationTimeStamp(alStack_58);
      if (alStack_58[0] < *param_3) {
        if (param_4 != 0) {
          (**(code **)(param_4 + 0x10))(param_4,lVar3);
        }
      }
      else {
        func_0x00010c1494c0(lVar2);
        _CFRelease();
      }
      _objc_release(lVar2);
      uVar6 = uVar6 + 1;
      uVar1 = *(ulong *)(param_1 + 0x20);
      uVar4 = *(ulong *)(param_1 + 8);
      func_0x00010bf529e0();
      if (uVar4 <= uVar1) {
        uVar1 = uVar4;
      }
    } while (uVar6 < uVar1);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 109047364; end: 10904745b; -[SCManagedVideoCacheSampleBufferHandler _releaseCachedSampleBuffers] */

long FUN_109047364(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
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
  lVar3 = *(long *)(param_1 + 8);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        lVar2 = *(long *)(lStack_108 + lVar5 * 8);
        func_0x00010c1494c0();
        if (lVar2 != 0) {
          _CFRelease();
        }
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar3;
  }
  ___stack_chk_fail();
  return *(long *)(lVar3 + 0x28);
}



/* Entry: 10904745c; end: 109047463; -[SCManagedVideoCacheSampleBufferHandler bufferedFrameCount] */

undefined8 FUN_10904745c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 109047464; end: 10904746f; -[SCManagedVideoCacheSampleBufferHandler .cxx_destruct] */

void FUN_109047464(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109047470; end: 1090474af; -[SCManagedVideoCapturerAudioSignalMetrics init] */

void FUN_109047470(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_112700058;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x40) = 0xc05e000000000000;
  }
  return;
}



/* Entry: 1090474b0; end: 1090476ff; -[SCManagedVideoCapturerAudioSignalMetrics trackAudioSampleBuffer:] */

void FUN_1090474b0(long param_1,undefined8 param_2,double *param_3)

{
  short *psVar1;
  short sVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  short *psVar6;
  ulong uVar7;
  uint uVar8;
  short *psVar10;
  ulong uVar11;
  ulong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  short *psStack_60;
  short *psStack_58;
  ulong uVar9;
  
  if (param_3 != (double *)0x0) {
    pdVar3 = param_3;
    _CMSampleBufferGetFormatDescription();
    if (((((pdVar3 != (double *)0x0) &&
          (_CMAudioFormatDescriptionGetStreamBasicDescription(), pdVar3 != (double *)0x0)) &&
         (*(int *)(pdVar3 + 1) == 0x6c70636d)) &&
        ((0.0 < *pdVar3 && (*(int *)(pdVar3 + 4) == 0x10)))) &&
       (((*(uint *)((long)pdVar3 + 0xc) & 0xe) == 0xc &&
        (_CMSampleBufferGetDataBuffer(), param_3 != (double *)0x0)))) {
      pdVar4 = param_3;
      _CMBlockBufferGetDataLength();
      psVar1 = (short *)((ulong)pdVar4 & 0xfffffffffffffffe);
      if (psVar1 != (short *)0x0) {
        psStack_60 = (short *)0x0;
        psStack_58 = (short *)0x0;
        pdVar5 = param_3;
        _CMBlockBufferGetDataPointer(param_3,0,&psStack_60,0,&psStack_58);
        if ((((int)pdVar5 != 0) || (psStack_58 == (short *)0x0)) ||
           (psVar6 = (short *)0x0, psVar10 = psStack_58, psStack_60 < psVar1)) {
          psVar6 = psVar1;
          _malloc();
          if (psVar6 == (short *)0x0) {
            return;
          }
          _CMBlockBufferCopyDataBytes(param_3,0,psVar1,psVar6);
          psVar10 = psVar6;
          if ((int)param_3 != 0) {
            _free(psVar6);
            return;
          }
        }
        uVar12 = 0;
        uVar11 = (ulong)pdVar4 >> 1;
        dVar15 = 0.0;
        uVar7 = uVar11;
        do {
          sVar2 = *psVar10;
          uVar8 = -(int)sVar2;
          if (-1 < sVar2) {
            uVar8 = (uint)sVar2;
          }
          uVar9 = (ulong)uVar8;
          if (uVar12 <= uVar9) {
            uVar12 = uVar9;
          }
          dVar15 = dVar15 + ((double)uVar9 / 32768.0) * ((double)uVar9 / 32768.0);
          uVar7 = uVar7 - 1;
          psVar10 = psVar10 + 1;
        } while (uVar7 != 0);
        if (psVar6 != (short *)0x0) {
          _free();
        }
        uVar7 = (ulong)*(uint *)(pdVar3 + 3);
        if (*(uint *)(pdVar3 + 3) == 0) {
          uVar8 = *(uint *)((long)pdVar3 + 0x1c);
          if (uVar8 < 2) {
            uVar8 = 1;
          }
          uVar7 = (ulong)uVar8 << 1;
        }
        dVar16 = ((double)psVar1 / (double)uVar7) / *pdVar3;
        if (dVar15 / (double)uVar11 <= 0.0) {
          dVar14 = -120.0;
        }
        else {
          dVar13 = SQRT(dVar15 / (double)uVar11);
          _log10();
          dVar14 = -120.0;
          if (-120.0 < dVar13 * 20.0) {
            dVar14 = dVar13 * 20.0;
          }
        }
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + (long)psVar1;
        *(double *)(param_1 + 0x28) = dVar16 + *(double *)(param_1 + 0x28);
        *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
        *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + uVar11;
        uVar7 = *(ulong *)(param_1 + 0x48);
        if ((long)*(ulong *)(param_1 + 0x48) <= (long)uVar12) {
          uVar7 = uVar12;
        }
        *(ulong *)(param_1 + 0x48) = uVar7;
        dVar13 = dVar14;
        if (dVar14 <= *(double *)(param_1 + 0x40)) {
          dVar13 = *(double *)(param_1 + 0x40);
        }
        *(double *)(param_1 + 0x38) = dVar15 + *(double *)(param_1 + 0x38);
        *(double *)(param_1 + 0x40) = dVar13;
        if (dVar14 <= -60.0) {
          *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
          *(double *)(param_1 + 0x30) = dVar16 + *(double *)(param_1 + 0x30);
        }
      }
    }
  }
  return;
}



/* Entry: 109047700; end: 109047aab; -[SCManagedVideoCapturerAudioSignalMetrics snapshotDictionary] */

void FUN_109047700(undefined *param_1,undefined8 param_2)

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
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
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
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = *(ulong *)(param_1 + 0x18);
  if ((uVar13 == 0) || (uVar15 = *(ulong *)(param_1 + 0x10), uVar15 == 0)) {
    puVar14 = (undefined *)0x0;
  }
  else {
    dVar18 = -12000.0;
    dVar16 = dVar18;
    if (0 < (long)*(ulong *)(param_1 + 0x48)) {
      dVar16 = (double)*(ulong *)(param_1 + 0x48) / 32768.0;
      _log10();
      dVar16 = dVar16 * 20.0;
      if (dVar16 <= -120.0) {
        dVar16 = -120.0;
      }
      dVar16 = dVar16 * 100.0;
    }
    dVar17 = *(double *)(param_1 + 0x38) / (double)uVar15;
    if (0.0 < dVar17) {
      dVar17 = SQRT(dVar17);
      _log10();
      dVar17 = dVar17 * 20.0;
      if (dVar17 <= -120.0) {
        dVar17 = -120.0;
      }
      dVar18 = dVar17 * 100.0;
    }
    dVar17 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x20));
    ppuStack_150 = &PTR____CFConstantStringClassReference_110f1ccf8;
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
    ppuStack_148 = &PTR____CFConstantStringClassReference_110f1cd18;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_f0 = puVar1;
    func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                        (long)(*(double *)(param_1 + 0x28) * 1000.0));
    _objc_retainAutoreleasedReturnValue();
    ppuStack_140 = &PTR____CFConstantStringClassReference_110f1cd38;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_e8 = puVar2;
    func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x10)
                       );
    _objc_retainAutoreleasedReturnValue();
    ppuStack_138 = &PTR____CFConstantStringClassReference_110f1cd58;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_e0 = puVar3;
    func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x18)
                       );
    _objc_retainAutoreleasedReturnValue();
    ppuStack_130 = &PTR____CFConstantStringClassReference_110f1cd78;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_d8 = puVar4;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x48)
                       );
    _objc_retainAutoreleasedReturnValue();
    ppuStack_128 = &PTR____CFConstantStringClassReference_110f1cd98;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_d0 = puVar5;
    func_0x00010c0df720((double)(long)dVar16 / 100.0);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_120 = &PTR____CFConstantStringClassReference_110f1cdb8;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_c8 = puVar6;
    func_0x00010c0df720((double)(long)dVar18 / 100.0);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_118 = &PTR____CFConstantStringClassReference_110f1cdd8;
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_c0 = puVar7;
    func_0x00010c0df720((double)(long)(*(double *)(param_1 + 0x40) * 100.0) / 100.0);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b0 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185ec0;
    ppuStack_110 = &PTR____CFConstantStringClassReference_110f1cdf8;
    ppuStack_108 = &PTR____CFConstantStringClassReference_110f1ce18;
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_b8 = puVar8;
    func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                        (long)(*(double *)(param_1 + 0x30) * 1000.0));
    _objc_retainAutoreleasedReturnValue();
    ppuStack_100 = &PTR____CFConstantStringClassReference_110f1ce38;
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_a8 = puVar9;
    func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x20)
                       );
    _objc_retainAutoreleasedReturnValue();
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110f1ce58;
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_a0 = puVar10;
    func_0x00010c0df720((double)(long)((dVar17 / (double)uVar13) * 100.0) / 100.0);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_98 = puVar11;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_f0,&ppuStack_150,
                        0xc);
    _objc_retainAutoreleasedReturnValue();
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
    _objc_release();
    param_1 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    puVar14 = *(undefined **)(param_1 + 0x18);
    if (puVar14 == (undefined *)0x0) {
      puVar14 = PTR_PTR_1126dd0d0;
      _objc_opt_new();
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      *(undefined **)(param_1 + 0x18) = puVar14;
      _objc_release(uVar12);
      puVar14 = *(undefined **)(param_1 + 0x18);
    }
    _objc_retain(puVar14);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 109047aac; end: 109047afb; -[SCManagedVideoCapturerHandlerImpl videoFrameSampler] */

void FUN_109047aac(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126dd0d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 109047afc; end: 109047b4b; -[SCManagedVideoCapturerHandlerImpl sampleNextFrame:] */

void FUN_109047afc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c29a2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c149820();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109047b4c; end: 109047c0b; -[SCManagedVideoCapturerHandlerImpl managedVideoCapturerWillBeginVideoRecording:] */

void FUN_109047b4c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  *(undefined **)(param_1 + 0x28) = puVar2;
  _objc_release(puVar1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(lVar3);
  _objc_release(param_1);
  return;
}



/* Entry: 109047c0c; end: 109047c67;  */

void FUN_109047c0c(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_109047c68;
  puStack_20 = &UNK_110842e18;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c312d0("APPSTORE",&puStack_38);
  return;
}



/* Entry: 109047c68; end: 109047d37;  */

void FUN_109047c68(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x000107c31820(&UNK_10f5493f8);
  lVar2 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0c42e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a5ac0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109047d38; end: 109047def; -[SCManagedVideoCapturerHandlerImpl managedVideoCapturer:didBeginVideoRecording:] */

void FUN_109047d38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_109047df0;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(lVar2,param_2,&puStack_60);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 109047df0; end: 109047e67;  */

void FUN_109047df0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_109047e68;
  puStack_28 = &UNK_110841f80;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uStack_20 = uVar1;
  uStack_18 = uVar2;
  func_0x000107c312d0("APPSTORE",&puStack_40);
  _objc_release(uStack_18);
  return;
}



/* Entry: 109047e68; end: 109047f43;  */

void FUN_109047e68(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x000107c31820(&UNK_10f549417);
  lVar2 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0c42e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72a60();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109047f44; end: 10904805b; -[SCManagedVideoCapturerHandlerImpl managedVideoCapturer:didBeginAudioRecording:] */

void FUN_109047f44(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(lVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 10904805c; end: 10904817b; -[SCManagedVideoCapturerHandlerImpl managedVideoCapturer:willStopWithRecordedVideoFuture:videoSize:placeholderImage:session:] */

void FUN_10904805c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_3 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10904817c;
  puStack_88 = &UNK_1108e75b8;
  lStack_80 = param_3;
  uStack_78 = param_8;
  uStack_70 = param_6;
  uStack_68 = param_7;
  uStack_60 = param_1;
  uStack_58 = param_2;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_8);
  func_0x00010c0f7fc0(lVar2,param_4,&puStack_a0);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_8);
  return;
}



/* Entry: 10904817c; end: 109048233;  */

void FUN_10904817c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_109048234;
  puStack_58 = &UNK_1108e75b8;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar1;
  uStack_48 = uVar3;
  _objc_retain(uVar2);
  uStack_28 = *(undefined8 *)(param_1 + 0x48);
  uStack_30 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar2;
  _objc_retain(uVar1);
  uStack_38 = uVar1;
  func_0x000107c312d0("APPSTORE",&puStack_70);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  return;
}



/* Entry: 109048234; end: 109048317;  */

void FUN_109048234(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x000107c31820(&UNK_10f549435);
  lVar2 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0c42e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a6540(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109048318; end: 109048423; -[SCManagedVideoCapturerHandlerImpl managedVideoCapturer:didSucceedWithRecordedVideo:session:] */

void FUN_109048318(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_109048424;
  puStack_68 = &UNK_11084c4a0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_5;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(lVar2,param_2,&puStack_80);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 109048424; end: 1090484c7;  */

void FUN_109048424(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010bee8ec0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1090484c8;
  puStack_40 = &UNK_110848ba8;
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_30 = uVar2;
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  func_0x000107c312d0("APPSTORE",&puStack_58);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  return;
}



/* Entry: 1090484c8; end: 1090485d7;  */

void FUN_1090484c8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  func_0x000107c31820(&UNK_10f549453);
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0c42e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf76e40();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1090485d8; end: 1090486e3; -[SCManagedVideoCapturerHandlerImpl managedVideoCapturer:didFailWithError:session:] */

void FUN_1090485d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1090486e4;
  puStack_68 = &UNK_11084c4a0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_5;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(lVar2,param_2,&puStack_80);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1090486e4; end: 109048787;  */

void FUN_1090486e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010bee8ec0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_109048788;
  puStack_40 = &UNK_110848ba8;
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_30 = uVar2;
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  func_0x000107c312d0("APPSTORE",&puStack_58);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  return;
}



/* Entry: 109048788; end: 109048897;  */

void FUN_109048788(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  func_0x000107c31820(&UNK_10f549473);
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0c42e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf762a0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 109048898; end: 10904897f; -[SCManagedVideoCapturerHandlerImpl managedVideoCapturer:didCancelVideoRecording:] */

void FUN_109048898(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_109048980;
  puStack_60 = &UNK_110848ba8;
  lStack_58 = param_1;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(lVar2,param_2,&puStack_78);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 109048980; end: 109048a0b;  */

void FUN_109048980(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010bee8ec0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_109048a0c;
  puStack_38 = &UNK_110841f80;
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  func_0x000107c312d0("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  return;
}



/* Entry: 109048a0c; end: 109048b1b;  */

void FUN_109048a0c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  func_0x000107c31820(&UNK_10f549490);
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0c42e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72da0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 109048b1c; end: 109048be3; -[SCManagedVideoCapturerHandlerImpl managedVideoCapturer:didGetError:forType:session:] */

void FUN_109048b1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_4);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0c42e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf771c0();
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109048be4; end: 109048da7; -[SCManagedVideoCapturerHandlerImpl managedVideoCapturerGetExtraFrameHealthInfo:] */

void FUN_109048be4(undefined *param_1,undefined8 param_2,undefined **param_3,undefined ***param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined1 auStack_100 [8];
  undefined ***pppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010bf29120();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bef0ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  puVar4 = puVar1;
  _objc_release(puVar1);
  if (puVar3 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
    puVar3 = (undefined *)0x0;
  }
  else {
    puStack_70 = PTR____kCFBooleanTrue_11034ab68;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110f1ce78;
    ppuStack_80 = &PTR____CFConstantStringClassReference_110db19f8;
    puVar1 = param_1;
    func_0x00010bf29120();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bef0ae0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      unaff_x23 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_78 = &PTR____CFConstantStringClassReference_110de5e58;
    puStack_68 = unaff_x23;
    func_0x00010bf29120();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010bef0ae0();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR____NSArray0__struct_11034ab48;
    if (puVar4 != (undefined *)0x0) {
      puStack_60 = puVar4;
    }
    param_3 = &puStack_70;
    param_4 = &ppuStack_88;
    param_5 = (undefined8 *)0x3;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(param_1);
    if (puVar3 == (undefined *)0x0) {
      _objc_release(unaff_x23);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar4 = puVar1;
    _objc_release(puVar1);
    unaff_x24 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_109048da8;
  puStack_d0 = unaff_x24;
  puStack_c8 = unaff_x23;
  puStack_c0 = puVar3;
  puStack_b8 = puVar5;
  puStack_b0 = puVar2;
  puStack_a8 = puVar1;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  _CFRetain(param_4);
  _objc_initWeak(auStack_d8,puVar4);
  puVar4 = puVar4 + 8;
  _objc_loadWeakRetained(puVar4);
  puVar1 = puVar4;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_100,auStack_d8);
  uStack_e8 = param_5[1];
  uStack_f0 = *param_5;
  uStack_e0 = param_5[2];
  pppuStack_f8 = param_4;
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_release(param_3);
  return;
}



/* Entry: 109048da8; end: 109048ec7; -[SCManagedVideoCapturerHandlerImpl managedVideoCapturer:didAppendVideoSampleBuffer:presentationTimestamp:] */

void FUN_109048da8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  long lVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _CFRetain(param_4);
  _objc_initWeak(auStack_48,param_1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_48);
  uStack_58 = param_5[1];
  uStack_60 = *param_5;
  uStack_50 = param_5[2];
  uStack_68 = param_4;
  func_0x00010c0f7fc0(lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 109048ec8; end: 10904905f;  */

void FUN_109048ec8(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2bf1a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5e980();
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar4 = lVar1 + 8;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf70d80();
    _objc_release(lVar5);
    _objc_release(lVar4);
    puVar6 = PTR_PTR_1126b9e18;
    _objc_alloc();
    _CMSampleBufferGetPresentationTimeStamp(auStack_68,*(undefined8 *)(param_2 + 0x28));
    uStack_78 = *(undefined8 *)(param_2 + 0x38);
    uStack_80 = *(undefined8 *)(param_2 + 0x30);
    uStack_70 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c0389e0((float)param_1);
    _objc_initWeak(auStack_68,lVar1);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_109049060;
    puStack_a0 = &UNK_110842a68;
    _objc_copyWeak(auStack_90,auStack_68);
    uStack_88 = *(undefined8 *)(param_2 + 0x28);
    _objc_retain(puVar6);
    puStack_98 = puVar6;
    func_0x000107c312d0("APPSTORE",&puStack_b8);
    _objc_release(puStack_98);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar6);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 109049060; end: 10904915b;  */

void FUN_109049060(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _CMSampleBufferGetPresentationTimeStamp(auStack_58,*(undefined8 *)(param_1 + 0x30));
    lVar2 = lVar1;
    func_0x00010c29a2a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf795a0();
    _objc_release(lVar2);
    _CFRelease(*(undefined8 *)(param_1 + 0x30));
    lVar2 = lVar1 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c0b7ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0c42e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf724c0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10904915c; end: 1090493d7; -[SCManagedVideoCapturerHandlerImpl _videoRecordingCleanupWithVideoCapturer:] */

void FUN_10904915c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release();
  }
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa260(lVar3,param_2,lVar4,2);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar1);
  uVar5 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar6 = uVar5;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c275d40();
  _objc_release(uVar6);
  _objc_release(uVar5);
  if ((uVar7 & 1) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bfb2500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c217d60();
    _objc_release(uVar9);
    _objc_release(uVar8);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010bfb35a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010c07e580();
  _objc_release(uVar9);
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010bfb35a0();
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar8 == 0) {
    func_0x00010c19e0a0();
  }
  else {
    func_0x00010c2037a0();
  }
  _objc_release(uVar9);
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010bfb35a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010c07e580();
  _objc_release(uVar9);
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010bfb35a0();
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar8 == 0) {
    func_0x00010c19e0a0();
  }
  else {
    func_0x00010c2037a0();
  }
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar10);
  return;
}



/* Entry: 1090493d8; end: 1090493db;  */

void FUN_1090493d8(void)

{
  return;
}



/* Entry: 1090493dc; end: 1090493e3; -[SCManagedVideoCapturerHandlerImpl cameraCaptureLensProvider] */

undefined8 FUN_1090493dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1090493e4; end: 10904942f; -[SCManagedVideoCapturerHandlerImpl .cxx_destruct] */

void FUN_1090493e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 109049430; end: 109049437;  */

void FUN_109049430(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf28f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_cameraAudioCaptureConfiguration_1125a7d88);
  return;
}



/* Entry: 109049438; end: 109049497; -[SCManagedVideoCapturerImpl dealloc] */

void FUN_109049438(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x160));
  uVar1 = *(undefined8 *)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x160) = 0;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x1a0) != 0) {
    _free();
  }
  puStack_28 = PTR_PTR_112700068;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 109049498; end: 10904949f; -[SCManagedVideoCapturerImpl cameraCaptureLensProvider] */

void FUN_109049498(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf29130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x168),PTR_s_cameraCaptureLensProvider_1125a7df0);
  return;
}



/* Entry: 1090494a0; end: 1090494ff; -[SCManagedVideoCapturerImpl audioCaptureSession] */

void FUN_1090494a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x188);
    func_0x00010bf0ee40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x30),param_2,param_1);
    lVar3 = *(long *)(param_1 + 0x30);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 109049500; end: 109049637; -[SCManagedVideoCapturerImpl activeSession] */

undefined1  [16] FUN_109049500(undefined8 param_1,double param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined8 uStack_88;
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_3 + 200);
  uStack_50 = *(undefined4 *)(param_3 + 0xd0);
  uVar1 = *(uint *)(param_3 + 0xd4);
  uVar11 = *(undefined8 *)(param_3 + 0xd8);
  uStack_68 = *(undefined8 *)(param_3 + 0xe8);
  uStack_60 = *(undefined4 *)(param_3 + 0xf0);
  uVar2 = *(uint *)(param_3 + 0xf4);
  uVar12 = *(undefined8 *)(param_3 + 0xf8);
  if (((uVar1 & 1) == 0) || ((uVar2 & 1) == 0)) {
    uStack_78 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
    dStack_80 = *(double *)PTR__kCMTimeInvalid_110348648;
    uStack_70 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
  }
  else {
    uStack_98 = *(undefined8 *)(param_3 + 0xe8);
    uStack_90 = *(undefined4 *)(param_3 + 0xf0);
    uStack_b0 = *(undefined8 *)(param_3 + 200);
    uStack_a8 = *(undefined4 *)(param_3 + 0xd0);
    uStack_a4 = uVar1;
    uStack_a0 = uVar11;
    uStack_8c = uVar2;
    uStack_88 = uVar12;
    _CMTimeSubtract(&dStack_80,&uStack_98,&uStack_b0);
  }
  puVar3 = PTR_PTR_1126b7070;
  _objc_alloc();
  uStack_98 = uStack_58;
  uStack_90 = uStack_50;
  uStack_b0 = uStack_68;
  uStack_a8 = uStack_60;
  puVar9 = &uStack_98;
  uVar10 = 0;
  dVar13 = dStack_80;
  uStack_a4 = uVar2;
  uStack_a0 = uVar12;
  uStack_8c = uVar1;
  uStack_88 = uVar11;
  func_0x00010c04bb40();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    auVar19._8_8_ = param_2;
    auVar19._0_8_ = dVar13;
    return auVar19;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x00010bf31500(PTR_PTR_1126b7130);
    dVar14 = dVar13;
    dVar17 = param_2;
  }
  else {
    puVar4 = puVar9;
    func_0x00010bfb5ae0();
    _CMVideoFormatDescriptionGetDimensions();
    dVar15 = (double)(int)puVar4;
    dVar16 = (double)(int)((ulong)puVar4 >> 0x20);
    dVar14 = dVar15;
    dVar17 = dVar16;
    if (((((uVar10 & 1) == 0) && ((puVar3[0x219] & 1) == 0)) &&
        (func_0x00010bf31500(PTR_PTR_1126b7130), dVar13 < dVar15)) &&
       (func_0x00010bf31500(PTR_PTR_1126b7130), param_2 < dVar16)) {
      puVar3 = puVar3 + 0x1e8;
      _objc_loadWeakRetained();
      puVar5 = puVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c13a4e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bfb4920();
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar3);
      func_0x00010bf31500(PTR_PTR_1126b7130);
      dVar14 = dVar13;
      dVar17 = param_2;
      if (((ulong)puVar8 & 1) == 0) {
        func_0x00010bf31500(PTR_PTR_1126b7130);
        dVar14 = param_2 / dVar16;
        if (param_2 / dVar16 <= dVar13 / dVar15) {
          dVar14 = dVar13 / dVar15;
        }
        func_0x00010b690ad8(dVar15,dVar16,dVar14);
        func_0x00010b690c5c(2);
        dVar14 = dVar15;
        dVar17 = dVar16;
      }
    }
  }
  _objc_release(puVar9);
  auVar18._8_8_ = dVar17;
  auVar18._0_8_ = dVar14;
  return auVar18;
}



/* Entry: 109049638; end: 10904979b; -[SCManagedVideoCapturerImpl defaultSizeForDeviceFormat:shouldKeepVideoSizeAsOutputSize:] */

undefined1  [16]
FUN_109049638(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
             ulong param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  
  _objc_retain(param_5);
  if (param_5 == 0) {
    func_0x00010bf31500(PTR_PTR_1126b7130);
    dVar7 = param_1;
    dVar10 = param_2;
  }
  else {
    lVar1 = param_5;
    func_0x00010bfb5ae0();
    _CMVideoFormatDescriptionGetDimensions();
    dVar8 = (double)(int)lVar1;
    dVar9 = (double)(int)((ulong)lVar1 >> 0x20);
    dVar7 = dVar8;
    dVar10 = dVar9;
    if (((((param_6 & 1) == 0) && ((*(byte *)(param_3 + 0x219) & 1) == 0)) &&
        (func_0x00010bf31500(PTR_PTR_1126b7130), param_1 < dVar8)) &&
       (func_0x00010bf31500(PTR_PTR_1126b7130), param_2 < dVar9)) {
      uVar2 = param_3 + 0x1e8;
      _objc_loadWeakRetained();
      uVar3 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c13a4e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfb4920();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      func_0x00010bf31500(PTR_PTR_1126b7130);
      dVar7 = param_1;
      dVar10 = param_2;
      if ((uVar6 & 1) == 0) {
        func_0x00010bf31500(PTR_PTR_1126b7130);
        dVar7 = param_2 / dVar9;
        if (param_2 / dVar9 <= param_1 / dVar8) {
          dVar7 = param_1 / dVar8;
        }
        func_0x00010b690ad8(dVar8,dVar9,dVar7);
        func_0x00010b690c5c(2);
        dVar7 = dVar8;
        dVar10 = dVar9;
      }
    }
  }
  _objc_release(param_5);
  auVar11._8_8_ = dVar10;
  auVar11._0_8_ = dVar7;
  return auVar11;
}



/* Entry: 10904979c; end: 10904993f; -[SCManagedVideoCapturerImpl cropSize:toAspectRatio:] */

double FUN_10904979c(undefined8 param_1,double param_2,double param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  double dVar9;
  
  uVar1 = param_4 + 0x1e8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf9a700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf926e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  fVar8 = 2.0;
  dVar9 = 0.5;
  if ((uVar5 & 1) == 0) {
    uVar1 = param_4 + 0x170;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010bf5e320();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf7f200();
    if ((uVar3 & 1) == 0) {
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    else {
      uVar3 = param_4 + 0x1e8;
      _objc_loadWeakRetained();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf9a700();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf92700();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      fVar8 = 2.0;
      dVar9 = 0.5;
      if ((uVar7 & 1) != 0) goto LAB_1090498fc;
    }
    fVar8 = 16.0;
    dVar9 = 0.0625;
  }
LAB_1090498fc:
  return (double)((float)(int)(param_2 * param_3 * dVar9) * fVar8);
}



/* Entry: 109049940; end: 109049e4b; -[SCManagedVideoCapturerImpl startRecordingAsynchronouslyWithOutputSettings:audioConfiguration:maxDuration:speedRate:aspectRatio:toURL:deviceFormat:devicePosition:videoOrientation:viewportOrientation:captureSessionID:isHEVCEncoderEnabled:H264BitrateMultiplier:captureBitrateLadderConfig:shouldKeepVideoSizeAsOutputSize:audioCaptureEnabledInConfiguration:shouldSyncVideoAndMusicPlayer:isHDModeActive:recordGestureStartTimestamp:shouldDisableBufferedRecording:captureOrientationFixEnabled:] */

void FUN_109049940(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  long param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16,
                  undefined4 param_17,undefined8 param_18,undefined4 param_19,undefined4 param_20)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  undefined1 auStack_f0 [8];
  double dStack_e8;
  double dStack_e0;
  undefined8 uStack_d8;
  double dStack_d0;
  double dStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_b0 [16];
  
  dVar7 = param_1;
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_15);
  _objc_retain(param_18);
  if (param_20._1_1_ == '\0') {
    dStack_d0 = param_3;
    if (param_13 - 3U < 2) {
      dVar7 = 1.0;
      if (1.0 <= param_3) goto LAB_109049a70;
    }
    else if ((1 < param_13 - 1U) || (dVar7 = 1.0, param_3 <= 1.0)) goto LAB_109049a70;
    dVar7 = 1.0;
    dStack_d0 = 1.0 / param_3;
  }
  else {
    dVar7 = param_3;
    func_0x000109046c20(param_13,param_14);
    dStack_d0 = dVar7;
  }
LAB_109049a70:
  *(long *)(param_6 + 0x208) = param_13;
  *(undefined8 *)(param_6 + 0x210) = param_14;
  *(char *)(param_6 + 0x201) = param_20._1_1_;
  uVar6 = param_15;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(param_6 + 0x150);
  *(undefined8 *)(param_6 + 0x150) = uVar6;
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126dd0e8;
  _objc_alloc_init();
  uVar6 = *(undefined8 *)(param_6 + 400);
  *(undefined **)(param_6 + 400) = puVar2;
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126dd0f0;
  _objc_alloc_init();
  uVar6 = *(undefined8 *)(param_6 + 0x198);
  *(undefined **)(param_6 + 0x198) = puVar2;
  _objc_release(uVar6);
  _CACurrentMediaTime();
  lVar3 = param_6;
  func_0x00010bf293a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1fa0();
  _objc_release(lVar4);
  _objc_release();
  uVar1 = (undefined4)lVar3;
  _arc4random();
  *(undefined4 *)(param_6 + 0x100) = uVar1;
  *(undefined1 *)(param_6 + 0x1c8) = param_16;
  *(undefined8 *)(param_6 + 0x1d0) = param_4;
  _objc_retain(param_18);
  uVar6 = *(undefined8 *)(param_6 + 0x1d8);
  *(undefined8 *)(param_6 + 0x1d8) = param_18;
  _objc_release(uVar6);
  puVar2 = PTR__kCMTimeInvalid_110348648;
  *(undefined1 *)(param_6 + 0x269) = param_19._1_1_;
  uVar8 = *(undefined8 *)(puVar2 + 8);
  uVar5 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_6 + 0xd0) = uVar8;
  *(undefined8 *)(param_6 + 200) = uVar5;
  uVar6 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(param_6 + 0xd8) = uVar6;
  *(undefined8 *)(param_6 + 0xf0) = uVar8;
  *(undefined8 *)(param_6 + 0xe8) = uVar5;
  *(undefined8 *)(param_6 + 0xf8) = uVar6;
  *(undefined8 *)(param_6 + 0x358) = uVar8;
  *(undefined8 *)(param_6 + 0x350) = uVar5;
  *(undefined8 *)(param_6 + 0x360) = uVar6;
  *(undefined1 *)(param_6 + 0x268) = 0;
  uVar6 = *(undefined8 *)(param_6 + 0x2a0);
  *(undefined8 *)(param_6 + 0x2a0) = 0;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_6 + 0x2a8);
  *(undefined8 *)(param_6 + 0x2a8) = 0;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_6 + 0x2b0);
  *(undefined8 *)(param_6 + 0x2b0) = 0;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_6 + 0x2b8);
  *(undefined8 *)(param_6 + 0x2b8) = 0;
  _objc_release(uVar6);
  *(undefined8 *)(param_6 + 0x2e0) = 0;
  *(undefined8 *)(param_6 + 0x2c8) = 0;
  *(undefined8 *)(param_6 + 0x2c0) = 0;
  *(undefined8 *)(param_6 + 0x2d8) = 0;
  *(undefined8 *)(param_6 + 0x2d0) = 0;
  uVar6 = *(undefined8 *)(param_6 + 0x1b0);
  *(undefined8 *)(param_6 + 0x1b0) = 0;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_6 + 0x1b8);
  *(undefined8 *)(param_6 + 0x1b8) = 0;
  _objc_release(uVar6);
  *(undefined2 *)(param_6 + 0x26d) = 0;
  uVar6 = *(undefined8 *)(param_6 + 0x2f0);
  *(undefined8 *)(param_6 + 0x2f0) = 0;
  *(undefined8 *)(param_6 + 0x2e8) = 0;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_6 + 0x2f8);
  *(undefined8 *)(param_6 + 0x2f8) = 0;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_6 + 0x300);
  *(undefined8 *)(param_6 + 0x300) = 0;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_6 + 0x310);
  *(undefined8 *)(param_6 + 0x310) = 0;
  *(undefined8 *)(param_6 + 0x308) = 0;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_6 + 0x318);
  *(undefined8 *)(param_6 + 0x318) = 0;
  _objc_release(uVar6);
  *(undefined1 *)(param_6 + 0x26f) = 0;
  uVar6 = *(undefined8 *)(param_6 + 800);
  *(undefined8 *)(param_6 + 800) = 0;
  _objc_release(uVar6);
  *(undefined4 *)(param_6 + 0x274) = 0;
  *(undefined1 *)(param_6 + 0x270) = 0;
  uVar6 = *(undefined8 *)(param_6 + 0x328);
  *(undefined8 *)(param_6 + 0x328) = 0;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_6 + 0x330);
  *(undefined8 *)(param_6 + 0x330) = 0;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_6 + 0x338);
  *(undefined8 *)(param_6 + 0x338) = 0;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_6 + 0x340);
  *(undefined8 *)(param_6 + 0x340) = 0;
  _objc_release(uVar6);
  *(undefined8 *)(param_6 + 0x348) = 0;
  *(undefined2 *)(param_6 + 0x26b) = *(undefined2 *)(param_6 + 0x269);
  *(undefined1 *)(param_6 + 0x218) = param_19._2_1_;
  *(undefined1 *)(param_6 + 0x219) = param_19._3_1_;
  *(undefined8 *)(param_6 + 0x98) = param_5;
  *(undefined1 *)(param_6 + 0x200) = (undefined1)param_20;
  func_0x00010be92360(param_6);
  lVar3 = param_6;
  func_0x00010bef0fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_b0,param_6);
  uVar6 = *(undefined8 *)(param_6 + 0x28);
  _objc_copyWeak(auStack_f0,auStack_b0);
  _objc_retain(param_8);
  _objc_retain(param_9);
  dStack_e8 = dVar7;
  dStack_e0 = param_1;
  uStack_d8 = param_2;
  dStack_c8 = param_3;
  _objc_retain(param_10);
  _objc_retain(param_11);
  uStack_c0 = param_12;
  _objc_retain(lVar3);
  uStack_b8 = (undefined1)param_19;
  func_0x00010c0f88c0(uVar6);
  _objc_retain(lVar3);
  _objc_release(lVar3);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_b0);
  _objc_release(param_18);
  _objc_release(param_15);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 109049e4c; end: 109049ea7;  */

void FUN_109049e4c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bec1560(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                      *(undefined8 *)(param_1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 109049ea8; end: 10904a01f; -[SCManagedVideoCapturerImpl _handleRetryBeginAudioRecordingErrorCode:error:micResult:] */

void FUN_109049ea8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  if (param_4 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x168);
    func_0x00010bef0fa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b80e0(uVar6);
    lVar5 = 0;
    param_4 = param_1;
  }
  else {
    func_0x00010bdcd1a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
  }
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10904a020; end: 10904a107; -[SCManagedVideoCapturerImpl _activationErrorCodeFromSessionError:] */

ulong FUN_10904a020(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c067fc0(uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10904a108; end: 10904a20f; -[SCManagedVideoCapturerImpl _shouldAttemptFrontMicRecovery:] */

bool FUN_10904a108(long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((long)param_3 < 0x6e6f7065) {
    if (param_3 == 0xffffffffffffffce) {
      return true;
    }
    uVar1 = 0x21707269;
  }
  else {
    if (param_3 == 0x6e6f7065) {
      return true;
    }
    uVar1 = 0x73697269;
  }
  bVar2 = false;
  if (param_3 != uVar1) {
    param_1 = param_1 + 0x1e8;
    _objc_loadWeakRetained();
    lVar3 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf28f80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf0f260();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(param_1);
    bVar2 = false;
    if ((int)lVar6 != 0) {
      bVar2 = param_3 == 0x77686174 || param_3 == 0xfffffffffffefbbc;
    }
  }
  return bVar2;
}



/* Entry: 10904a210; end: 10904a327; -[SCManagedVideoCapturerImpl _isPhoneCallActive] */

undefined * FUN_10904a210(void)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___CXCallObserver_1126b6e20;
  _objc_alloc_init();
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  puVar4 = puVar3;
  func_0x00010bf289e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  puVar12 = (undefined *)0x0;
  if (puVar5 != (undefined *)0x0) {
    do {
      puVar12 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar4);
        }
        iVar2 = (int)*(undefined8 *)((long)puVar12 * 8);
        func_0x00010bfd6ae0();
        if (iVar2 == 0) {
          puVar12 = (undefined *)0x1;
          goto LAB_10904a2e0;
        }
        puVar12 = puVar12 + 1;
      } while (puVar5 != puVar12);
      puVar5 = puVar4;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined *)0x0);
    puVar12 = (undefined *)0x0;
  }
LAB_10904a2e0:
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    puVar4 = PTR_PTR_1126aed60;
    func_0x00010c15fac0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf12720();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar4;
    func_0x00010c0656e0();
    puVar3[0x26d] = (char)puVar12;
    puVar12 = puVar5;
    func_0x00010bf529e0();
    *(undefined **)(puVar3 + 0x2e8) = puVar12;
    puVar12 = puVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar12;
    func_0x00010c104100();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(puVar3 + 0x2f0);
    *(undefined **)(puVar3 + 0x2f0) = puVar6;
    _objc_release(uVar11);
    _objc_release(puVar12);
    puVar12 = puVar4;
    func_0x00010bf33240();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(puVar3 + 0x2f8);
    *(undefined **)(puVar3 + 0x2f8) = puVar12;
    _objc_release(uVar11);
    puVar12 = puVar4;
    func_0x00010c0cfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(puVar3 + 0x300);
    *(undefined **)(puVar3 + 0x300) = puVar12;
    _objc_release(uVar11);
    puVar12 = puVar4;
    func_0x00010bf33580();
    *(undefined **)(puVar3 + 0x308) = puVar12;
    puVar6 = puVar4;
    func_0x00010bf5fe60();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar6;
    func_0x00010c066460();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar12;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c104100();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(puVar3 + 0x310);
    *(undefined **)(puVar3 + 0x310) = puVar8;
    _objc_release(uVar11);
    _objc_release(puVar7);
    _objc_release(puVar12);
    puVar12 = puVar6;
    func_0x00010c0ef240();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar12;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c104100();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(puVar3 + 0x318);
    *(undefined **)(puVar3 + 0x318) = puVar8;
    _objc_release(uVar11);
    _objc_release(puVar7);
    _objc_release(puVar12);
    puVar12 = puVar4;
    func_0x00010c154dc0();
    puVar3[0x26f] = (char)puVar12;
    puVar12 = puVar3;
    func_0x00010be42940();
    puVar3[0x26e] = (char)puVar12;
    puVar12 = PTR_PTR_1126dd0f8;
    func_0x00010bf41aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(puVar3 + 800);
    *(undefined **)(puVar3 + 800) = puVar12;
    _objc_release(uVar11);
    func_0x00010c065a80(puVar4);
    *(uint *)(puVar3 + 0x274) = CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13)));
    puVar12 = puVar4;
    func_0x00010c065ac0();
    puVar3[0x270] = (char)puVar12;
    iVar2 = 2;
    func_0x000107c31924(2,0x11,0,0);
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (iVar2 != 0) {
      puVar7 = PTR__OBJC_CLASS___AVAudioApplication_1126dd100;
      func_0x00010c22ba80(PTR__OBJC_CLASS___AVAudioApplication_1126dd100);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0759a0();
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(puVar3 + 0x328);
      *(undefined **)(puVar3 + 0x328) = puVar12;
      _objc_release(uVar11);
      _objc_release(puVar7);
    }
    uVar9 = *(undefined8 *)(puVar3 + 0x1c0);
    func_0x00010c278c80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010bf49020();
    *(undefined8 *)(puVar3 + 0x348) = uVar11;
    _objc_release(uVar9);
    _objc_release(puVar6);
    _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return puVar4;
  }
  return puVar12;
}



/* Entry: 10904a328; end: 10904a5bf; -[SCManagedVideoCapturerImpl _captureAudioStateAtRecordingStart] */

void FUN_10904a328(undefined4 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar2 = PTR_PTR_1126aed60;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf12720();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c0656e0();
  *(char *)(param_2 + 0x26d) = (char)puVar4;
  puVar4 = puVar3;
  func_0x00010bf529e0();
  *(undefined **)(param_2 + 0x2e8) = puVar4;
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c104100();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + 0x2f0);
  *(undefined **)(param_2 + 0x2f0) = puVar5;
  _objc_release(uVar10);
  _objc_release(puVar4);
  puVar4 = puVar2;
  func_0x00010bf33240();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + 0x2f8);
  *(undefined **)(param_2 + 0x2f8) = puVar4;
  _objc_release(uVar10);
  puVar4 = puVar2;
  func_0x00010c0cfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + 0x300);
  *(undefined **)(param_2 + 0x300) = puVar4;
  _objc_release(uVar10);
  puVar4 = puVar2;
  func_0x00010bf33580();
  *(undefined **)(param_2 + 0x308) = puVar4;
  puVar5 = puVar2;
  func_0x00010bf5fe60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010c066460();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c104100();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + 0x310);
  *(undefined **)(param_2 + 0x310) = puVar7;
  _objc_release(uVar10);
  _objc_release(puVar6);
  _objc_release(puVar4);
  puVar4 = puVar5;
  func_0x00010c0ef240();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c104100();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + 0x318);
  *(undefined **)(param_2 + 0x318) = puVar7;
  _objc_release(uVar10);
  _objc_release(puVar6);
  _objc_release(puVar4);
  puVar4 = puVar2;
  func_0x00010c154dc0();
  *(char *)(param_2 + 0x26f) = (char)puVar4;
  lVar8 = param_2;
  func_0x00010be42940();
  *(char *)(param_2 + 0x26e) = (char)lVar8;
  puVar4 = PTR_PTR_1126dd0f8;
  func_0x00010bf41aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + 800);
  *(undefined **)(param_2 + 800) = puVar4;
  _objc_release(uVar10);
  func_0x00010c065a80(puVar2);
  *(undefined4 *)(param_2 + 0x274) = param_1;
  puVar4 = puVar2;
  func_0x00010c065ac0();
  *(char *)(param_2 + 0x270) = (char)puVar4;
  iVar1 = 2;
  func_0x000107c31924(2,0x11,0,0);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (iVar1 != 0) {
    puVar6 = PTR__OBJC_CLASS___AVAudioApplication_1126dd100;
    func_0x00010c22ba80(PTR__OBJC_CLASS___AVAudioApplication_1126dd100);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0759a0();
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_2 + 0x328);
    *(undefined **)(param_2 + 0x328) = puVar4;
    _objc_release(uVar10);
    _objc_release(puVar6);
  }
  uVar9 = *(undefined8 *)(param_2 + 0x1c0);
  func_0x00010c278c80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf49020();
  *(undefined8 *)(param_2 + 0x348) = uVar10;
  _objc_release(uVar9);
  _objc_release(puVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10904a5c0; end: 10904a81b; -[SCManagedVideoCapturerImpl _handleQueueCreationResult:speedRate:devicePosition:logContext:block:] */

void FUN_10904a5c0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  uVar6 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x2a8);
  *(long *)(param_2 + 0x2a8) = param_4;
  _objc_release(uVar1);
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x88) = uVar6;
  if (param_4 == 0) {
    puVar2 = PTR_PTR_1126aed60;
    func_0x00010c15fac0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf5fe60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c066460();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar5;
    func_0x00010c104100();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + 0x330);
    *(undefined **)(param_2 + 0x330) = puVar2;
    _objc_release(uVar6);
    puVar2 = puVar5;
    func_0x00010c159540();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf645c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + 0x338);
    *(undefined **)(param_2 + 0x338) = puVar3;
    _objc_release(uVar6);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126dd0f8;
    func_0x00010bef0cc0(PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0);
    func_0x00010c0d4fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + 0x340);
    *(undefined **)(param_2 + 0x340) = puVar2;
    _objc_release(uVar6);
    _objc_release(puVar5);
  }
  _objc_initWeak(auStack_78,param_2);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  _objc_copyWeak(auStack_90,auStack_78);
  _objc_retain(param_7);
  uStack_88 = param_1;
  uStack_80 = param_5;
  _objc_retain(param_4);
  func_0x00010c0f88c0(uVar6);
  _objc_release(param_4);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}


