/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090a3ad8; end: 1090a3adf; -[SCNeoMediaSampleBufferProcessingPipeline canEnqueueSampleBuffer] */

undefined1 FUN_1090a3ad8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x60);
}



/* Entry: 1090a3ae0; end: 1090a3b1f; -[SCNeoMediaSampleBufferProcessingPipeline setEnabled:] */

void FUN_1090a3ae0(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0xb8) == param_3) {
    return;
  }
  *(char *)(param_1 + 0xb8) = (char)param_3;
  if ((param_3 & 1) == 0) {
    func_0x00010be180c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed4cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCanEnqueueSampleBuffer_112592cd8);
  return;
}



/* Entry: 1090a3b20; end: 1090a3bf3; -[SCNeoMediaSampleBufferProcessingPipeline _didDecodeSampleBuffer:] */

void FUN_1090a3b20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [48];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    _CMSampleBufferGetPresentationTimeStamp(&uStack_48,param_3);
    _CMSampleBufferGetDuration(&uStack_60,param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uStack_a8 = uStack_40;
    uStack_b0 = uStack_48;
    uStack_a0 = uStack_38;
    uStack_c8 = uStack_58;
    uStack_d0 = uStack_60;
    uStack_c0 = uStack_50;
    _CMTimeRangeMake(auStack_90,&uStack_b0,&uStack_d0);
    func_0x00010c067140(uVar1);
    func_0x00010bf77680(*(undefined8 *)(param_1 + 0x10));
  }
  func_0x0001090a432c();
  func_0x00010be619c0(param_1);
  return;
}



/* Entry: 1090a3bf4; end: 1090a3c93;  */

void FUN_1090a3bf4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x0001090a4380(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if ((int)lVar1 != 0) {
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    FUN_1090966fc(&PTR____CFConstantStringClassReference_110f20a98,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c149600(uVar2);
    func_0x0001090a42a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be80c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s__processDecodedBuffers_11257dca0);
  return;
}



/* Entry: 1090a3c94; end: 1090a3c9b; -[SCNeoMediaSampleBufferProcessingPipeline forceEnableVTDecoder] */

undefined1 FUN_1090a3c94(long param_1)

{
  return *(undefined1 *)(param_1 + 0x91);
}



/* Entry: 1090a3c9c; end: 1090a3cdf; -[SCNeoMediaSampleBufferProcessingPipeline setFramesNeedsReorderingWithDepth:] */

void FUN_1090a3c9c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  *(undefined1 *)(param_1 + 0x91) = 1;
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x92) & 1) != 0)) {
    uVar1 = *(long *)(param_1 + 0x98) - 1;
    uVar2 = *(long *)(param_1 + 0x88) - 1;
    if (uVar1 <= uVar2) {
      uVar2 = uVar1;
    }
    if (*(long *)(param_1 + 0x88) != 0) {
      uVar1 = uVar2;
    }
    if (uVar1 <= param_3) {
      param_3 = uVar1;
    }
    *(ulong *)(param_1 + 0xa0) = param_3;
  }
  return;
}



/* Entry: 1090a3ce0; end: 1090a407b; -[SCNeoMediaSampleBufferProcessingPipeline enqueueSampleBuffer:] */

void FUN_1090a3ce0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar1 = param_3;
  _CMSampleBufferGetFormatDescription();
  if (uVar1 == 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_109096480(&PTR____CFConstantStringClassReference_110f20ab8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c149600(param_1);
LAB_1090a3ec4:
    func_0x0001090a42c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  uVar2 = param_1;
  func_0x00010bfb4ae0();
  if (((uVar2 & 1) == 0) && (uVar2 = param_1, func_0x00010be91ea0(), (int)uVar2 == 0)) {
    func_0x0001090a43ac();
  }
  else {
    uVar2 = param_1;
    func_0x00010be781c0();
    if ((uVar2 & 1) == 0) {
      _CMFormatDescriptionGetMediaSubType();
      FUN_109096370();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c2778c0();
      _objc_retainAutoreleasedReturnValue();
      FUN_109094c84();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf00b40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c2778c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      FUN_109094a04();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf00b40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      func_0x0001090a43c0();
      func_0x0001090a42d0();
      func_0x0001090a42a0();
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      FUN_109096480(puVar7,puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c149600(param_1);
      func_0x0001090a42d0();
      func_0x0001090a42a0();
      _objc_release(puVar7);
      param_1 = uVar1;
      goto LAB_1090a3ec4;
    }
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    func_0x0001090a432c();
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1090a407c;
    puStack_80 = &UNK_1108a8598;
    puVar8 = auStack_98;
    uStack_78 = param_1;
    uStack_70 = param_3;
    _objc_retainBlock();
    if (*(char *)(param_1 + 99) == '\x01') {
      _CMSampleBufferGetPresentationTimeStamp(&uStack_b0,param_3);
      uStack_c8 = uStack_a8;
      uStack_d0 = uStack_b0;
      uStack_c0 = uStack_a0;
      uStack_e8 = *(undefined8 *)(param_1 + 0x6c);
      uStack_f0 = *(undefined8 *)(param_1 + 100);
      uStack_e0 = *(undefined8 *)(param_1 + 0x74);
      puVar9 = &uStack_d0;
      _CMTimeCompare(puVar9,&uStack_f0);
      if (-1 < (int)puVar9) {
        (**(code **)(puVar8 + 0x10))(puVar8);
      }
    }
    else {
      (**(code **)(puVar8 + 0x10))(puVar8);
    }
    func_0x0001090a42c0();
  }
  else {
    func_0x00010bf963c0();
  }
  func_0x00010bed4cc0(param_1);
  return;
}



/* Entry: 1090a407c; end: 1090a40a3;  */

void FUN_1090a407c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar1 + 0x90) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdfe310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (lVar1,PTR_s__didFinishProcessingSampleBuffer_11255d260,
               *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar1 + 0x48),0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdfd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar1,PTR_s__didDecodeSampleBuffer__11255cde8,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1090a40a4; end: 1090a4127; -[SCNeoMediaSampleBufferProcessingPipeline decoder:didOutputSampleBuffer:] */

void FUN_1090a40a4(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  FUN_109096454();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf99fe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    func_0x00010bf745a0(uVar1);
  }
  else {
    func_0x00010bf745e0(uVar1);
  }
  func_0x0001090a42c0();
  func_0x00010bdfd120(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bed4cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCanEnqueueSampleBuffer_112592cd8);
  return;
}



/* Entry: 1090a4128; end: 1090a412b; -[SCNeoMediaSampleBufferProcessingPipeline decoderDidSkipBuffer:] */

void FUN_1090a4128(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed4cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCanEnqueueSampleBuffer_112592cd8);
  return;
}



/* Entry: 1090a412c; end: 1090a4193; -[SCNeoMediaSampleBufferProcessingPipeline decoder:didFailWithError:] */

void FUN_1090a412c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c149600();
  func_0x0001090a42a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1090a4194; end: 1090a4197; -[SCNeoMediaSampleBufferProcessingPipeline decoderDidReset:] */

void FUN_1090a4194(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed4cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCanEnqueueSampleBuffer_112592cd8);
  return;
}



/* Entry: 1090a4198; end: 1090a419b; -[SCNeoMediaSampleBufferProcessingPipeline playableRangeTrackerDidUpdate:] */

void FUN_1090a4198(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed4cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCanEnqueueSampleBuffer_112592cd8);
  return;
}



/* Entry: 1090a419c; end: 1090a41b3; -[SCNeoMediaSampleBufferProcessingPipeline delegate] */

void FUN_1090a419c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090a41b4; end: 1090a41bf; -[SCNeoMediaSampleBufferProcessingPipeline setDelegate:] */

void FUN_1090a41b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xc0,param_3);
  return;
}



/* Entry: 1090a41c0; end: 1090a41c7; -[SCNeoMediaSampleBufferProcessingPipeline processor] */

undefined8 FUN_1090a41c0(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 1090a41c8; end: 1090a41e7; -[SCNeoMediaSampleBufferProcessingPipeline setProcessor:] */

void FUN_1090a41c8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_1090a427c();
  uVar1 = *(undefined8 *)(unaff_x20 + 200);
  *(undefined8 *)(unaff_x20 + 200) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1090a41e8; end: 1090a41ef; -[SCNeoMediaSampleBufferProcessingPipeline enabled] */

undefined1 FUN_1090a41e8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb8);
}



/* Entry: 1090a41f0; end: 1090a41f7; -[SCNeoMediaSampleBufferProcessingPipeline processedQueueState] */

undefined8 FUN_1090a41f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 1090a41f8; end: 1090a41ff; -[SCNeoMediaSampleBufferProcessingPipeline setProcessedQueueState:] */

void FUN_1090a41f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  return;
}



/* Entry: 1090a4200; end: 1090a4207; -[SCNeoMediaSampleBufferProcessingPipeline decodedQueueState] */

undefined8 FUN_1090a4200(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 1090a4208; end: 1090a420f; -[SCNeoMediaSampleBufferProcessingPipeline setDecodedQueueState:] */

void FUN_1090a4208(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  return;
}



/* Entry: 1090a4210; end: 1090a427b; -[SCNeoMediaSampleBufferProcessingPipeline .cxx_destruct] */

void FUN_1090a4210(long param_1)

{
  func_0x0001090a42b0(param_1 + 200);
  _objc_destroyWeak(param_1 + 0xc0);
  func_0x0001090a42b0(param_1 + 0x58);
  func_0x0001090a42b0(param_1 + 0x50);
  func_0x0001090a42b0(param_1 + 0x30);
  func_0x0001090a42b0(param_1 + 0x28);
  func_0x0001090a42b0(param_1 + 0x20);
  func_0x0001090a42b0(param_1 + 0x18);
  func_0x0001090a42b0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090a427c; end: 1090a43ff;  */

void FUN_1090a427c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 1090a4400; end: 1090a450b; -[SCNeoMediaSampleInfo initWithPresentationTime:presentationDuration:decodeTime:duration:bufferPosition:sizeInBytes:samplesPerChunk:isSync:sampleSizes:] */

undefined1 *
FUN_1090a4400(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_12);
  puStack_58 = PTR_PTR_1127004f8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    *(undefined8 *)((long)puVar1 + 0x40) = param_3[2];
    *(undefined8 *)((long)puVar1 + 0x38) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    uVar3 = param_4[1];
    uVar2 = *param_4;
    *(undefined8 *)((long)puVar1 + 0x58) = param_4[2];
    *(undefined8 *)((long)puVar1 + 0x50) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    uVar3 = param_5[1];
    uVar2 = *param_5;
    *(undefined8 *)((long)puVar1 + 0x70) = param_5[2];
    *(undefined8 *)((long)puVar1 + 0x68) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    uVar3 = param_6[1];
    uVar2 = *param_6;
    *(undefined8 *)((long)puVar1 + 0x88) = param_6[2];
    *(undefined8 *)((long)puVar1 + 0x80) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x78) = uVar2;
    *(undefined8 *)((long)puVar1 + 0x10) = param_7;
    *(undefined8 *)((long)puVar1 + 0x18) = param_8;
    *(undefined8 *)((long)puVar1 + 0x20) = param_9;
    *(undefined1 *)((long)puVar1 + 8) = param_10;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_12;
    _objc_release(uVar2);
  }
  _objc_release(param_12);
  return (undefined1 *)puVar1;
}



/* Entry: 1090a450c; end: 1090a454f; -[SCNeoMediaSampleInfo presentationTimeRange] */

void FUN_1090a450c(long param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x38);
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  uStack_20 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = *(undefined8 *)(param_1 + 0x50);
  uStack_50 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = *(undefined8 *)(param_1 + 0x58);
  _CMTimeRangeMake(&uStack_30,&uStack_50);
  return;
}



/* Entry: 1090a4550; end: 1090a45cf; -[SCNeoMediaSampleInfo description] */

void FUN_1090a4550(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  uStack_30 = *(undefined8 *)(param_1 + 0x40);
  _CMTimeGetSeconds(&uStack_40);
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f20b18);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090a45d0; end: 1090a45df; -[SCNeoMediaSampleInfo presentationTime] */

void FUN_1090a45d0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  param_1[1] = *(undefined8 *)(param_2 + 0x38);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x40);
  return;
}



/* Entry: 1090a45e0; end: 1090a45ef; -[SCNeoMediaSampleInfo presentationDuration] */

void FUN_1090a45e0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  param_1[1] = *(undefined8 *)(param_2 + 0x50);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x58);
  return;
}



/* Entry: 1090a45f0; end: 1090a45ff; -[SCNeoMediaSampleInfo decodeTime] */

void FUN_1090a45f0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  param_1[1] = *(undefined8 *)(param_2 + 0x68);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x70);
  return;
}



/* Entry: 1090a4600; end: 1090a460f; -[SCNeoMediaSampleInfo duration] */

void FUN_1090a4600(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  param_1[1] = *(undefined8 *)(param_2 + 0x80);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x88);
  return;
}



/* Entry: 1090a4610; end: 1090a4617; -[SCNeoMediaSampleInfo bufferPosition] */

undefined8 FUN_1090a4610(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1090a4618; end: 1090a461f; -[SCNeoMediaSampleInfo sizeInBytes] */

undefined8 FUN_1090a4618(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1090a4620; end: 1090a4627; -[SCNeoMediaSampleInfo samplesPerChunk] */

undefined8 FUN_1090a4620(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1090a4628; end: 1090a462f; -[SCNeoMediaSampleInfo isSync] */

undefined1 FUN_1090a4628(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1090a4630; end: 1090a4637; -[SCNeoMediaSampleInfo sampleSizes] */

undefined8 FUN_1090a4630(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1090a4638; end: 1090a464b; -[SCNeoMediaSampleInfo .cxx_destruct] */

void FUN_1090a4638(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 1090a464c; end: 1090a46e3; -[SCNeoMediaSampleInfoTimeline initWithSampleInfos:] */

undefined1 * FUN_1090a464c(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffd0;
  FUN_1090a4a60();
  _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    uVar3 = unaff_x19;
    FUN_1090a46e4();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(puVar1 + 0x10);
    *(undefined8 *)(puVar1 + 0x10) = uVar3;
    _objc_release(uVar2);
    FUN_1090a46e4();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = unaff_x19;
    _objc_release(uVar3);
  }
  func_0x0001090a4a70();
  return puVar1;
}



/* Entry: 1090a46e4; end: 1090a4717;  */

void FUN_1090a46e4(undefined8 param_1,uint param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR___NSConcreteGlobalBlock_110ad7aa8;
  if ((param_2 & 1) == 0) {
    ppuVar1 = &PTR___NSConcreteGlobalBlock_110ad7a88;
  }
  func_0x00010c246ca0(param_1,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090a4718; end: 1090a47bb; -[SCNeoMediaSampleInfoTimeline indexOfSampleInfoAtPresentationTime:] */

void FUN_1090a4718(long param_1)

{
  func_0x0001090a4ab0(*(undefined8 *)(param_1 + 0x10));
  func_0x0001090a4744();
  return;
}



/* Entry: 1090a47bc; end: 1090a4803; -[SCNeoMediaSampleInfoTimeline boundedIndexOfSampleInfoAtPresentationTime:] */

ulong FUN_1090a47bc(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_1;
  func_0x0001090a4ab0();
  func_0x00010bfece80();
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (lVar2 - 1U <= uVar1) {
    uVar1 = lVar2 - 1U;
  }
  return uVar1;
}



/* Entry: 1090a4804; end: 1090a480b; -[SCNeoMediaSampleInfoTimeline count] */

void FUN_1090a4804(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1090a480c; end: 1090a48a3; -[SCNeoMediaSampleInfoTimeline sampleAfterSample:] */

void FUN_1090a480c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_1090a4a60();
  lVar3 = *(long *)(unaff_x20 + 8);
  if (unaff_x19 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x00010bf67200(&uStack_48);
  }
  func_0x0001090a4744(lVar3,&uStack_48,1);
  uVar1 = *(ulong *)(unaff_x20 + 8);
  func_0x00010bf529e0();
  if (lVar3 + 1U < uVar1) {
    uVar2 = *(undefined8 *)(unaff_x20 + 8);
    func_0x00010c0dfd40(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = 0;
  }
  func_0x0001090a4a70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1090a48a4; end: 1090a48ab; -[SCNeoMediaSampleInfoTimeline sampleInfos] */

undefined8 FUN_1090a48a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1090a48ac; end: 1090a48db; -[SCNeoMediaSampleInfoTimeline .cxx_destruct] */

void FUN_1090a48ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090a48dc; end: 1090a49bb;  */

void FUN_1090a48dc(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001090a4a78();
  _objc_retain();
  if (unaff_x19 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x00010c10f700(&uStack_48);
  }
  if (unaff_x20 == 0) {
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x00010c10f700(&uStack_60);
  }
  func_0x0001090a4a98();
  func_0x0001090a4aa4();
  func_0x0001090a4a70();
  return;
}



/* Entry: 1090a49bc; end: 1090a4a5f;  */

void FUN_1090a49bc(undefined8 param_1,long param_2)

{
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_2 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x00010c10f780(&uStack_50,param_2);
  }
  func_0x0001090a4ac4();
  FUN_1090962c0(&uStack_50,auStack_70);
  return;
}



/* Entry: 1090a4a60; end: 1090a4ad7;  */

void FUN_1090a4a60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 1090a4ad8; end: 1090a4b63; -[SCNeoMediaSegmentInfo initWithPresentationTime:duration:bufferPosition:sizeInBytes:startsWithSyncFrame:] */

void FUN_1090a4ad8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_112700508;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    *(undefined8 *)((long)puVar1 + 0x30) = param_3[2];
    *(undefined8 *)((long)puVar1 + 0x28) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar3 = param_4[1];
    uVar2 = *param_4;
    *(undefined8 *)((long)puVar1 + 0x48) = param_4[2];
    *(undefined8 *)((long)puVar1 + 0x40) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    *(undefined1 *)((long)puVar1 + 8) = param_7;
  }
  return;
}



/* Entry: 1090a4b64; end: 1090a4b77; -[SCNeoMediaSegmentInfo presentationTime] */

void FUN_1090a4b64(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[1] = *(undefined8 *)(param_2 + 0x28);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x30);
  return;
}



/* Entry: 1090a4b78; end: 1090a4b8b; -[SCNeoMediaSegmentInfo duration] */

void FUN_1090a4b78(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  param_1[1] = *(undefined8 *)(param_2 + 0x40);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x48);
  return;
}



/* Entry: 1090a4b8c; end: 1090a4b93; -[SCNeoMediaSegmentInfo bufferPosition] */

undefined8 FUN_1090a4b8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1090a4b94; end: 1090a4b9b; -[SCNeoMediaSegmentInfo sizeInBytes] */

undefined8 FUN_1090a4b94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1090a4b9c; end: 1090a4ba3; -[SCNeoMediaSegmentInfo startsWithSyncFrame] */

undefined1 FUN_1090a4b9c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1090a4ba4; end: 1090a4d33; -[SCNeoMediaStreamParserRegistry initParserClasses:] */

byte * FUN_1090a4ba4(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  long lVar1;
  undefined1 in_ZR;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_68;
  
  pbVar6 = param_3;
  func_0x0001090a51a0();
  puStack_f0 = PTR_PTR_112700510;
  pbVar10 = (byte *)&uStack_f8;
  uStack_f8 = param_1;
  _objc_msgSendSuper2(pbVar10,PTR_s_init_1125d9248);
  uVar9 = 0;
  if (pbVar10 != (byte *)0x0) {
    pbVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    pbVar4 = param_3;
    _objc_retain();
    func_0x0001090a51e0();
    lVar1 = lRam0000000000000000;
    puVar7 = PTR_s_canParseBuffer__1125a8d98;
    while (PTR_s_canParseBuffer__1125a8d98 = puVar7, pbVar4 != (byte *)0x0) {
      pbVar12 = (byte *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        pbVar11 = *(byte **)((long)pbVar12 * 8);
        pbVar5 = pbVar11;
        _objc_opt_respondsToSelector(pbVar11,puVar7);
        if (((ulong)pbVar5 & 1) != 0) {
          pbVar5 = pbVar3;
          func_0x00010befa120();
          pbVar6 = pbVar11;
        }
        pbVar12 = pbVar12 + 1;
        in_ZR = pbVar12 == pbVar4;
      } while (pbVar12 < pbVar4);
      func_0x0001090a51e0();
      pbVar4 = pbVar5;
      puVar7 = PTR_s_canParseBuffer__1125a8d98;
    }
    func_0x0001090a5190();
    func_0x00010bf51e00();
    uVar9 = *(undefined8 *)(pbVar10 + 8);
    *(byte **)(pbVar10 + 8) = pbVar3;
    _objc_release();
    func_0x0001090a51f4();
  }
  func_0x0001090a5190();
  func_0x0001090a51b8(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001090a51f4();
    func_0x0001090a5198();
    func_0x0001090a5190();
    __Unwind_Resume(uVar9);
    pbVar10 = pbVar6;
    _objc_retain();
    func_0x0001090a51fc();
    if (pbVar10 < (byte *)0x11) {
      func_0x0001090a51fc();
    }
    else {
      pbVar10 = (byte *)0x10;
    }
    func_0x00010bf51ec0();
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    puVar7 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25d900();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25d900();
    _objc_retainAutoreleasedReturnValue();
    for (; pbVar10 != (byte *)0x0; pbVar10 = pbVar10 + -1) {
      func_0x00010bf06ba0(puVar7);
      uVar2 = (uint)*pbVar6;
      func_0x000107c2a6dc();
      if (uVar2 == 0) {
        func_0x00010bf070e0(puVar8);
      }
      else {
        func_0x00010bf06ba0(puVar8);
      }
      pbVar6 = pbVar6 + 1;
    }
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090a5208();
    func_0x0001090a51f4();
    func_0x0001090a5198();
    func_0x0001090a5190();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
    return pbVar10;
  }
  return pbVar10;
}



/* Entry: 1090a4d34; end: 1090a4ecb; -[SCNeoMediaStreamParserRegistry _hexStringFromNeoBuffer:] */

void FUN_1090a4d34(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte *pbVar4;
  
  pbVar4 = param_3;
  _objc_retain();
  func_0x0001090a51fc();
  if (pbVar4 < (byte *)0x11) {
    func_0x0001090a51fc();
  }
  else {
    pbVar4 = (byte *)0x10;
  }
  func_0x00010bf51ec0(param_3,param_2,0,pbVar4);
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25d900(PTR__OBJC_CLASS___NSMutableString_1126af7f8,param_2,(long)pbVar4 << 1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25d900(PTR__OBJC_CLASS___NSMutableString_1126af7f8,param_2,pbVar4);
  _objc_retainAutoreleasedReturnValue();
  for (; pbVar4 != (byte *)0x0; pbVar4 = pbVar4 + -1) {
    func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e18c58);
    uVar1 = (uint)*param_3;
    func_0x000107c2a6dc();
    if (uVar1 == 0) {
      func_0x00010bf070e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110dad1f8);
    }
    else {
      func_0x00010bf06ba0(puVar3,param_2,&PTR____CFConstantStringClassReference_110f20b38);
    }
    param_3 = param_3 + 1;
  }
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110eaf438);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090a5208();
  func_0x0001090a51f4();
  func_0x0001090a5198();
  func_0x0001090a5190();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1090a4ecc; end: 1090a5073; -[SCNeoMediaStreamParserRegistry parserCompatibleWithBuffer:error:] */

void FUN_1090a4ecc(undefined *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  long lVar1;
  undefined1 in_ZR;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_68;
  
  func_0x0001090a51a0();
  puVar4 = *(undefined **)(param_1 + 8);
  puVar2 = puVar4;
  _objc_retain();
  func_0x0001090a51cc();
  lVar1 = lRam0000000000000000;
  do {
    if (puVar2 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
      func_0x0001090a5198();
      puVar2 = (undefined *)0x0;
      if (param_4 != (ulong *)0x0) {
        func_0x00010be352a0();
        _objc_retainAutoreleasedReturnValue();
        param_1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d9e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = param_1;
        FUN_109096480();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_4 = (ulong)puVar2;
        puVar5 = param_1;
        _objc_release(param_1);
        puVar2 = (undefined *)0x0;
LAB_1090a4ff0:
        func_0x0001090a5198();
      }
      func_0x0001090a5190();
      func_0x0001090a51b8(uStack_68);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        _objc_release(param_1);
        func_0x0001090a5198();
        func_0x0001090a5190();
        __Unwind_Resume(puVar5);
        if (lRam00000001137309c0 != -1) {
          func_0x000107c27d9c(0x1137309c0,&PTR___NSConcreteGlobalBlock_110ad7ae8);
        }
        puVar2 = puRam00000001137309c8;
        _objc_retain(puRam00000001137309c8);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
      return;
    }
    puVar6 = (undefined *)0x0;
    do {
      in_ZR = lRam0000000000000000 == lVar1;
      if (!(bool)in_ZR) {
        _objc_enumerationMutation(puVar4);
      }
      puVar5 = *(undefined **)((long)puVar6 * 8);
      puVar3 = puVar5;
      func_0x00010bf2cfc0();
      if ((int)puVar3 != 0) {
        _objc_opt_new(puVar5);
        puVar2 = puVar5;
        goto LAB_1090a4ff0;
      }
      puVar6 = puVar6 + 1;
      in_ZR = puVar6 == puVar2;
    } while (puVar6 < puVar2);
    func_0x0001090a51cc();
    puVar2 = puVar3;
  } while( true );
}



/* Entry: 1090a5074; end: 1090a50c7; +[SCNeoMediaStreamParserRegistry sharedRegistry] */

void FUN_1090a5074(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137309c0 != -1) {
    func_0x000107c27d9c(0x1137309c0,&PTR___NSConcreteGlobalBlock_110ad7ae8);
  }
  uVar1 = uRam00000001137309c8;
  _objc_retain(uRam00000001137309c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090a50c8; end: 1090a5183;  */

void FUN_1090a50c8(void)

{
  undefined1 in_ZR;
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126dd478;
  _objc_alloc();
  _objc_opt_class();
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfef120();
  lVar2 = (long)puRam00000001137309c8;
  puRam00000001137309c8 = puVar1;
  _objc_release(lVar2);
  func_0x0001090a5190();
  func_0x0001090a51b8(uVar3);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001090a5190();
  __Unwind_Resume(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar2 + 8,0);
  return;
}



/* Entry: 1090a5184; end: 1090a5213; -[SCNeoMediaStreamParserRegistry .cxx_destruct] */

void FUN_1090a5184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090a5214; end: 1090a524f; -[SCNeoMediaTimeLooper init] */

void FUN_1090a5214(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_112700518;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001090a5400();
  }
  return;
}



/* Entry: 1090a5250; end: 1090a525f; -[SCNeoMediaTimeLooper reset] */

void FUN_1090a5250(void)

{
  func_0x0001090a5400();
  return;
}



/* Entry: 1090a5260; end: 1090a52cf; -[SCNeoMediaTimeLooper didLoopAtRelativeTime:] */

void FUN_1090a5260(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001090a53f4(&uStack_38);
  *(undefined8 *)(param_1 + 0x28) = uStack_30;
  *(undefined8 *)(param_1 + 0x20) = uStack_38;
  *(undefined8 *)(param_1 + 0x30) = uStack_28;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x18) = param_3[2];
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}



/* Entry: 1090a52d0; end: 1090a5327; -[SCNeoMediaTimeLooper timebaseTimeFromRelativeTime:] */

void FUN_1090a52d0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (*(long *)(param_2 + 0x20) != 0) {
    func_0x0001090a53f4();
    return;
  }
  uVar1 = *param_4;
  param_1[1] = param_4[1];
  *param_1 = uVar1;
  param_1[2] = param_4[2];
  return;
}



/* Entry: 1090a5328; end: 1090a53df; -[SCNeoMediaTimeLooper relativeTimeFromTimebaseTime:] */

void FUN_1090a5328(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  
  if (*(long *)(param_2 + 0x20) == 0) {
    lVar1 = *param_4;
    param_1[1] = param_4[1];
    *param_1 = lVar1;
    param_1[2] = param_4[2];
  }
  else {
    lStack_38 = param_4[1];
    lStack_40 = *param_4;
    lStack_30 = param_4[2];
    lStack_58 = *(undefined8 *)(param_2 + 0x28);
    lStack_60 = *(long *)(param_2 + 0x20);
    lStack_50 = *(undefined8 *)(param_2 + 0x30);
    _CMTimeSubtract(param_1,&lStack_40,&lStack_60);
    while (*param_1 < 0) {
      lStack_58 = param_1[1];
      lStack_60 = *param_1;
      lStack_50 = param_1[2];
      func_0x0001090a53f4(&lStack_40);
      param_1[1] = lStack_38;
      *param_1 = lStack_40;
      param_1[2] = lStack_30;
    }
  }
  return;
}



/* Entry: 1090a53e0; end: 1090a5423; -[SCNeoMediaTimeLooper timeOffset] */

void FUN_1090a53e0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[1] = *(undefined8 *)(param_2 + 0x28);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x30);
  return;
}



/* Entry: 1090a5424; end: 1090a543b; -[SCNeoMediaTimeRange timeRange] */

void FUN_1090a5424(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  param_1[1] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  param_1[5] = *(undefined8 *)(param_2 + 0x30);
  param_1[4] = uVar1;
  return;
}



/* Entry: 1090a543c; end: 1090a54a7; -[SCNeoMediaTrackArray init] */

undefined1 * FUN_1090a543c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700520;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1090a54a8; end: 1090a55d3; -[SCNeoMediaTrackArray allValues] */

void FUN_1090a54a8(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 extraout_x8;
  undefined *puVar8;
  undefined *puVar9;
  
  lVar1 = param_1;
  func_0x0001090a5a5c();
  iVar7 = (int)param_3;
  if (*(long *)(lVar1 + 8) == 0) {
    puVar4 = *(undefined **)(param_1 + 0x10);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x0001090a5a94();
    func_0x0001090a5a28();
    lVar1 = lRam0000000000000000;
    iVar7 = (int)param_3;
    while (puVar4 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x0001090a5a8c();
        }
        puVar8 = *(undefined **)((long)puVar9 * 8);
        puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
        _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
        puVar3 = puVar8;
        _objc_opt_isKindOfClass(puVar8,puVar2);
        if (((ulong)puVar3 & 1) == 0) {
          puVar3 = puVar6;
          func_0x00010befa120();
          param_3 = puVar8;
        }
        puVar9 = puVar9 + 1;
        in_ZR = puVar9 == puVar4;
      } while (puVar9 < puVar4);
      func_0x0001090a5a28();
      iVar7 = (int)param_3;
      puVar4 = puVar3;
    }
    func_0x0001090a5a9c();
    func_0x00010bf51e00();
    puVar4 = puVar6;
    func_0x0001090a5a84();
  }
  func_0x0001090a5a48(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uVar5 = *(ulong *)(puVar4 + 8);
    if (uVar5 == 0) {
      puVar6 = *(undefined **)(puVar4 + 0x10);
      func_0x00010c0dff20(puVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf529e0();
      if ((ulong)(long)iVar7 < uVar5) {
        puVar6 = *(undefined **)(puVar4 + 8);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
        _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
        puVar9 = puVar6;
        _objc_opt_isKindOfClass(puVar6,puVar4);
        if (((ulong)puVar9 & 1) == 0) {
          _objc_retain(puVar6);
        }
        else {
          puVar6 = (undefined *)0x0;
        }
        func_0x0001090a5a84();
      }
      else {
        puVar6 = (undefined *)0x0;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1090a55d4; end: 1090a567b; -[SCNeoMediaTrackArray valueForTrackId:] */

void FUN_1090a55d4(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 == 0) {
    uVar1 = *(ulong *)(param_1 + 0x10);
    func_0x00010c0dff20(uVar1,param_2,(long)param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf529e0();
    if ((ulong)(long)param_3 < uVar1) {
      uVar1 = *(ulong *)(param_1 + 8);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
      uVar3 = uVar1;
      _objc_opt_isKindOfClass(uVar1,puVar2);
      if ((uVar3 & 1) == 0) {
        _objc_retain(uVar1);
      }
      else {
        uVar1 = 0;
      }
      func_0x0001090a5a84();
    }
    else {
      uVar1 = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090a567c; end: 1090a578b; -[SCNeoMediaTrackArray _convertArrayToDictionary] */

void FUN_1090a567c(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined1 in_ZR;
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  undefined8 extraout_x8;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *unaff_x23;
  ulong uVar8;
  
  func_0x0001090a5a5c();
  puVar1 = PTR_PTR_1126dd3e0;
  _objc_opt_new();
  uVar5 = *(ulong *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release();
  func_0x0001090a5a94();
  func_0x0001090a5a28();
  lVar3 = lRam0000000000000000;
  uVar4 = (uint)param_4;
  if (uVar5 != 0) {
    lVar6 = 0;
    do {
      uVar8 = 0;
      lVar6 = (long)(int)lVar6;
      uVar2 = uVar5;
      do {
        if (lRam0000000000000000 != lVar3) {
          func_0x0001090a5a8c();
        }
        func_0x0001090a5a6c(0);
        func_0x0001090a5a78();
        if ((uVar2 & 1) == 0) {
          uVar2 = *(ulong *)(param_1 + 0x10);
          param_3 = unaff_x23;
          param_4 = lVar6;
          func_0x00010c1d0560();
        }
        lVar6 = lVar6 + 1;
        uVar8 = uVar8 + 1;
        in_ZR = uVar8 == uVar5;
      } while (uVar8 < uVar5);
      func_0x0001090a5a28();
      uVar4 = (uint)param_4;
      uVar5 = uVar2;
    } while (uVar2 != 0);
  }
  func_0x0001090a5a9c();
  lVar3 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release();
  func_0x0001090a5a48(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    _objc_retain(param_3);
    uVar5 = (ulong)(int)uVar4;
    if ((0x14 < uVar4) && (*(long *)(lVar3 + 8) != 0)) {
      func_0x00010bde8f80(lVar3);
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if (uVar8 == 0) {
      if (param_3 == (undefined *)0x0) {
        func_0x00010c12d3e0(*(undefined8 *)(lVar3 + 0x10),param_2,uVar5);
      }
      else {
        func_0x00010c1d0560(*(undefined8 *)(lVar3 + 0x10),param_2,param_3,uVar5);
      }
    }
    else {
      while (func_0x00010bf529e0(), uVar8 <= uVar5) {
        uVar7 = *(undefined8 *)(lVar3 + 8);
        puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar7,param_2,puVar1);
        _objc_release(puVar1);
        uVar8 = *(ulong *)(lVar3 + 8);
      }
      puVar1 = param_3;
      if (param_3 == (undefined *)0x0) {
        puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c1d04c0(*(undefined8 *)(lVar3 + 8),param_2,puVar1,uVar5);
      if (param_3 == (undefined *)0x0) {
        _objc_release(puVar1);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 1090a578c; end: 1090a588f; -[SCNeoMediaTrackArray setValue:forTrackId:] */

void FUN_1090a578c(long param_1,undefined8 param_2,undefined *param_3,uint param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar3 = (ulong)(int)param_4;
  if ((0x14 < param_4) && (*(long *)(param_1 + 8) != 0)) {
    func_0x00010bde8f80(param_1);
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 == 0) {
    if (param_3 == (undefined *)0x0) {
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x10),param_2,uVar3);
    }
    else {
      func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x10),param_2,param_3,uVar3);
    }
  }
  else {
    while (func_0x00010bf529e0(), uVar1 <= uVar3) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar4,param_2,puVar2);
      _objc_release(puVar2);
      uVar1 = *(ulong *)(param_1 + 8);
    }
    puVar2 = param_3;
    if (param_3 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1d04c0(*(undefined8 *)(param_1 + 8),param_2,puVar2,uVar3);
    if (param_3 == (undefined *)0x0) {
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090a5890; end: 1090a59eb; -[SCNeoMediaTrackArray enumerateObjectsWithBlock:] */

void FUN_1090a5890(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined1 in_ZR;
  ulong uVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  long lVar4;
  int iVar5;
  ulong uVar6;
  
  uVar2 = param_3;
  func_0x0001090a5a5c();
  _objc_retain();
  if (*(long *)(param_1 + 8) == 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    _objc_retain(param_3);
    func_0x00010bf97b80();
  }
  else {
    func_0x0001090a5a94();
    func_0x0001090a5a3c();
    lVar1 = lRam0000000000000000;
    lVar4 = 0;
    if (uVar2 != 0) {
      iVar5 = 0;
      do {
        uVar6 = 0;
        uVar3 = uVar2;
        do {
          if (lRam0000000000000000 != lVar1) {
            func_0x0001090a5a8c();
          }
          func_0x0001090a5a6c(0);
          func_0x0001090a5a78();
          if ((uVar3 & 1) == 0) {
            uVar3 = param_3;
            (**(code **)(param_3 + 0x10))(param_3,iVar5);
          }
          iVar5 = iVar5 + 1;
          uVar6 = uVar6 + 1;
          in_ZR = uVar6 == uVar2;
        } while (uVar6 < uVar2);
        func_0x0001090a5a3c();
        uVar2 = uVar3;
      } while (uVar3 != 0);
      lVar4 = 0;
    }
  }
  func_0x0001090a5a9c();
  func_0x0001090a5a84();
  func_0x0001090a5a48(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0001090a59f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + 0x20) + 0x10))();
  return;
}



/* Entry: 1090a59ec; end: 1090a59f7;  */

void FUN_1090a59ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090a59f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1090a59f8; end: 1090a5a27; -[SCNeoMediaTrackArray .cxx_destruct] */

void FUN_1090a59f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090a5a28; end: 1090a5aa3;  */

void FUN_1090a5a28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1090a5aa4; end: 1090a5b93; -[SCNeoMediaTrackInfo initWithType:index:trackId:mediaDuration:codec:hdlr:videoWidth:videoHeight:frameRate:preferredTransform:formatDescription:numReorderFrames:] */

undefined1 *
FUN_1090a5aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 *param_7,undefined4 param_8,
             undefined4 param_9,undefined8 param_10,undefined8 param_11,undefined8 *param_12,
             long param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_112700528;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined4 *)((long)puVar1 + 8) = param_6;
    uVar3 = param_7[1];
    uVar2 = *param_7;
    *(undefined8 *)((long)puVar1 + 0x60) = param_7[2];
    *(undefined8 *)((long)puVar1 + 0x58) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    *(undefined4 *)((long)puVar1 + 0xc) = param_8;
    *(undefined4 *)((long)puVar1 + 0x10) = param_9;
    *(undefined8 *)((long)puVar1 + 0x28) = param_10;
    *(undefined8 *)((long)puVar1 + 0x30) = param_11;
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
    uVar3 = param_12[1];
    uVar2 = *param_12;
    uVar5 = param_12[3];
    uVar4 = param_12[2];
    uVar6 = param_12[4];
    *(undefined8 *)((long)puVar1 + 0x90) = param_12[5];
    *(undefined8 *)((long)puVar1 + 0x88) = uVar6;
    *(undefined8 *)((long)puVar1 + 0x80) = uVar5;
    *(undefined8 *)((long)puVar1 + 0x78) = uVar4;
    *(undefined8 *)((long)puVar1 + 0x70) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    *(long *)((long)puVar1 + 0x40) = param_13;
    *(undefined8 *)((long)puVar1 + 0x48) = param_14;
    if (param_13 != 0) {
      _CFRetain();
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1090a5b94; end: 1090a5c07; -[SCNeoMediaTrackInfo dealloc] */

void FUN_1090a5b94(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    _CFRelease();
  }
  puStack_28 = PTR_PTR_112700528;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090a5c08; end: 1090a5dab; -[SCNeoMediaTrackInfo isEqual:] */

bool FUN_1090a5c08(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
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
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    bVar1 = true;
    goto LAB_1090a5d7c;
  }
  puVar2 = PTR_PTR_1126dd350;
  _objc_opt_class(PTR_PTR_1126dd350);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
    goto LAB_1090a5d7c;
  }
  _objc_retain(param_3);
  if (((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18)) &&
      (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
     (*(int *)(param_1 + 8) == *(int *)(param_3 + 8))) {
    uStack_48 = *(undefined8 *)(param_1 + 0x58);
    uStack_50 = *(undefined8 *)(param_1 + 0x50);
    uStack_40 = *(undefined8 *)(param_1 + 0x60);
    uStack_78 = *(undefined8 *)(param_3 + 0x58);
    uStack_80 = *(undefined8 *)(param_3 + 0x50);
    uStack_70 = *(undefined8 *)(param_3 + 0x60);
    puVar4 = &uStack_50;
    _CMTimeCompare(puVar4,&uStack_80);
    if ((((int)puVar4 != 0) || (*(int *)(param_1 + 0xc) != *(int *)(param_3 + 0xc))) ||
       ((*(int *)(param_1 + 0x10) != *(int *)(param_3 + 0x10) ||
        ((*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28) ||
         (*(long *)(param_1 + 0x30) != *(long *)(param_3 + 0x30))))))) goto LAB_1090a5d74;
    uStack_48 = *(undefined8 *)(param_1 + 0x70);
    uStack_50 = *(undefined8 *)(param_1 + 0x68);
    uStack_38 = *(undefined8 *)(param_1 + 0x80);
    uStack_40 = *(undefined8 *)(param_1 + 0x78);
    uStack_28 = *(undefined8 *)(param_1 + 0x90);
    uStack_30 = *(undefined8 *)(param_1 + 0x88);
    uStack_78 = *(undefined8 *)(param_3 + 0x70);
    uStack_80 = *(undefined8 *)(param_3 + 0x68);
    uStack_68 = *(undefined8 *)(param_3 + 0x80);
    uStack_70 = *(undefined8 *)(param_3 + 0x78);
    uStack_58 = *(undefined8 *)(param_3 + 0x90);
    uStack_60 = *(undefined8 *)(param_3 + 0x88);
    puVar4 = &uStack_50;
    _CGAffineTransformEqualToTransform(puVar4,&uStack_80);
    if ((((ulong)puVar4 & 1) != 0) ||
       ((*(double *)(param_1 + 0x38) != *(double *)(param_3 + 0x38) ||
        (*(long *)(param_1 + 0x48) != *(long *)(param_3 + 0x48))))) goto LAB_1090a5d74;
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    _CMFormatDescriptionEqual(uVar5,*(undefined8 *)(param_3 + 0x40));
    bVar1 = (int)uVar5 != 0;
  }
  else {
LAB_1090a5d74:
    bVar1 = false;
  }
  func_0x0001090a5fc0();
LAB_1090a5d7c:
  func_0x0001090a5fc0();
  return bVar1;
}



/* Entry: 1090a5dac; end: 1090a5f43; -[SCNeoMediaTrackInfo description] */

void FUN_1090a5dac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  
  func_0x00010c27dd80();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec9e0();
  func_0x00010c277e80();
  func_0x00010c0c4ba0(&uStack_88,param_1);
  _CMTimeGetSeconds(&uStack_88);
  uVar2 = param_1;
  func_0x00010bf3efc0();
  if ((int)uVar2 != 0) {
    uStack_84 = 0;
    uStack_85 = (undefined1)uVar2;
    uStack_86 = (undefined1)((ulong)uVar2 >> 8);
    uStack_87 = (undefined1)((ulong)uVar2 >> 0x10);
    uStack_88 = (undefined1)((ulong)uVar2 >> 0x18);
    func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&uStack_88,1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c29bd60();
  func_0x00010c29a420();
  func_0x00010bfb6f20(param_1);
  func_0x00010c0de5a0();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f20b98);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090a5fc8();
  func_0x0001090a5fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1090a5f44; end: 1090a5f4b; -[SCNeoMediaTrackInfo type] */

undefined8 FUN_1090a5f44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1090a5f4c; end: 1090a5f53; -[SCNeoMediaTrackInfo index] */

undefined8 FUN_1090a5f4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1090a5f54; end: 1090a5f5b; -[SCNeoMediaTrackInfo trackId] */

undefined4 FUN_1090a5f54(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1090a5f5c; end: 1090a5f6f; -[SCNeoMediaTrackInfo mediaDuration] */

void FUN_1090a5f5c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  param_1[1] = *(undefined8 *)(param_2 + 0x58);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x60);
  return;
}



/* Entry: 1090a5f70; end: 1090a5f77; -[SCNeoMediaTrackInfo codec] */

undefined4 FUN_1090a5f70(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 1090a5f78; end: 1090a5f7f; -[SCNeoMediaTrackInfo hdlr] */

undefined4 FUN_1090a5f78(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 1090a5f80; end: 1090a5f87; -[SCNeoMediaTrackInfo videoWidth] */

undefined8 FUN_1090a5f80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1090a5f88; end: 1090a5f8f; -[SCNeoMediaTrackInfo videoHeight] */

undefined8 FUN_1090a5f88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1090a5f90; end: 1090a5f97; -[SCNeoMediaTrackInfo frameRate] */

undefined8 FUN_1090a5f90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1090a5f98; end: 1090a5faf; -[SCNeoMediaTrackInfo preferredTransform] */

void FUN_1090a5f98(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  uVar3 = *(undefined8 *)(param_2 + 0x80);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  param_1[1] = *(undefined8 *)(param_2 + 0x70);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  param_1[5] = *(undefined8 *)(param_2 + 0x90);
  param_1[4] = uVar1;
  return;
}



/* Entry: 1090a5fb0; end: 1090a5fb7; -[SCNeoMediaTrackInfo formatDescription] */

undefined8 FUN_1090a5fb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1090a5fb8; end: 1090a5fdb; -[SCNeoMediaTrackInfo numReorderFrames] */

undefined8 FUN_1090a5fb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1090a5fdc; end: 1090a6097; -[SCNeoMediaTrackSampleInfoIndexer init] */

undefined1 * FUN_1090a5fdc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112700530;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar3 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    *(undefined8 *)((long)puVar1 + 0x18) = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar4;
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    func_0x0001090a6b7c(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    func_0x0001090a6b7c(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1090a6098; end: 1090a617b; -[SCNeoMediaTrackSampleInfoIndexer appendSampleInfo:] */

void FUN_1090a6098(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001090a6b6c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  _objc_release(uVar1);
  func_0x00010befa120(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined1 *)(unaff_x20 + 0x48) = 0;
  lVar2 = unaff_x19;
  func_0x00010c080720();
  if ((int)lVar2 != 0) {
    func_0x00010befa120(*(undefined8 *)(unaff_x20 + 0x28));
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    _objc_release(uVar1);
  }
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_50 = *(undefined8 *)(unaff_x20 + 8);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x18);
  if (unaff_x19 == 0) {
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
  }
  else {
    func_0x00010c10f700(&uStack_80);
    func_0x00010bf8b160(&uStack_98);
  }
  _CMTimeAdd(auStack_68,&uStack_80,&uStack_98);
  _CMTimeMaximum(&uStack_38,&uStack_50,auStack_68);
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_30;
  *(undefined8 *)(unaff_x20 + 8) = uStack_38;
  *(undefined8 *)(unaff_x20 + 0x18) = uStack_28;
  func_0x0001090a6b1c();
  return;
}



/* Entry: 1090a617c; end: 1090a61bb; -[SCNeoMediaTrackSampleInfoIndexer _sampleInfosTimeline] */

void FUN_1090a617c(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
    func_0x0001090a6b5c();
    func_0x00010c041400();
    uVar1 = *(undefined8 *)(unaff_x19 + 0x30);
    *(long *)(unaff_x19 + 0x30) = param_1;
    func_0x0001090a6b7c(uVar1);
    lVar2 = *(long *)(unaff_x19 + 0x30);
  }
  func_0x0001090a6ba8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1090a61bc; end: 1090a61fb; -[SCNeoMediaTrackSampleInfoIndexer _syncSampleInfosTimeline] */

void FUN_1090a61bc(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 == 0) {
    func_0x0001090a6b5c();
    func_0x00010c041400();
    uVar1 = *(undefined8 *)(unaff_x19 + 0x38);
    *(long *)(unaff_x19 + 0x38) = param_1;
    func_0x0001090a6b7c(uVar1);
    lVar2 = *(long *)(unaff_x19 + 0x38);
  }
  func_0x0001090a6ba8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1090a61fc; end: 1090a624b; -[SCNeoMediaTrackSampleInfoIndexer _indexOfSampleAtTime:] */

undefined8 FUN_1090a61fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010be987e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090a6bc0();
  func_0x00010bfece80();
  func_0x0001090a6b10();
  return param_3;
}



/* Entry: 1090a624c; end: 1090a62d7; -[SCNeoMediaTrackSampleInfoIndexer sampleAtTime:] */

void FUN_1090a624c(ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  uStack_30 = param_3[2];
  uVar2 = param_1;
  func_0x00010be38cc0(param_1,param_2,&uStack_40);
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (uVar2 < uVar1) {
    func_0x00010c149800(*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    FUN_1090a6b10();
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1090a62d8; end: 1090a6633; -[SCNeoMediaTrackSampleInfoIndexer syncSampleAtTime:toleranceBefore:toleranceAfter:] */

void FUN_1090a62d8(long param_1,undefined8 param_2,double *param_3,double *param_4,double *param_5)

{
  uint uVar1;
  long lVar2;
  double *pdVar3;
  double *pdVar4;
  long lVar5;
  long lVar6;
  double *pdVar7;
  long lVar8;
  double *pdVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  double dStack_90;
  undefined8 uStack_88;
  double dStack_80;
  
  lVar2 = param_1;
  func_0x00010bec9c60();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010bf529e0();
  if (lVar8 == 0) {
    lVar8 = 0;
  }
  else {
    func_0x0001090a6bd4();
    dStack_148 = param_4[1];
    dStack_150 = *param_4;
    dStack_140 = param_4[2];
    _CMTimeSubtract(&dStack_90,&dStack_e0,&dStack_150);
    if ((uStack_88._4_4_ & 0x1d) != 1) {
      _CMTimeMake(&dStack_e0,0,*(undefined4 *)(param_1 + 0x10));
      uStack_88 = dStack_d8;
      dStack_90 = dStack_e0;
      dStack_80 = dStack_d0;
    }
    func_0x0001090a6bd4();
    dVar11 = param_5[1];
    dVar12 = *param_5;
    dStack_140 = param_5[2];
    dStack_150 = dVar12;
    dStack_148 = dVar11;
    _CMTimeAdd(&dStack_b0,&dStack_e0,&dStack_150);
    uVar1 = uStack_a8._4_4_ & 0x1d;
    if (uVar1 != 1) {
      dVar11 = *(double *)(param_1 + 0x10);
      dVar12 = *(double *)(param_1 + 8);
      dStack_a0 = *(double *)(param_1 + 0x18);
      dStack_b0 = dVar12;
      uStack_a8 = dVar11;
    }
    func_0x0001090a6be8();
    dStack_f8 = uStack_a8;
    dStack_100 = dStack_b0;
    dStack_f0 = dStack_a0;
    dStack_120 = dVar12;
    dStack_118 = dVar11;
    _CMTimeSubtract(&dStack_180,&dStack_100,&dStack_120);
    pdVar3 = &dStack_150;
    _CMTimeRangeMake(&dStack_e0,pdVar3,&dStack_180);
    func_0x0001090a6be8();
    func_0x0001090a6b94();
    dStack_148 = uStack_a8;
    dStack_150 = dStack_b0;
    dStack_140 = dStack_a0;
    pdVar4 = pdVar3;
    func_0x0001090a6b94();
    dStack_148 = param_3[1];
    dVar11 = *param_3;
    dStack_140 = param_3[2];
    dStack_150 = dVar11;
    _CMTimeGetSeconds(&dStack_150);
    lVar8 = 0;
    dVar12 = 0.0;
    for (pdVar9 = pdVar3; pdVar9 <= pdVar4; pdVar9 = (double *)((long)pdVar9 + 1)) {
      lVar5 = lVar2;
      func_0x00010c149800();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      if (lVar6 == 0) {
        uStack_138 = 0;
        dStack_140 = 0.0;
        uStack_128 = 0;
        uStack_130 = 0;
        dStack_148 = 0.0;
        dStack_150 = 0.0;
      }
      else {
        func_0x00010c10f780(&dStack_150,lVar6);
      }
      dStack_f8 = dStack_148;
      dStack_100 = dStack_150;
      dStack_f0 = dStack_140;
      dStack_178 = dStack_d8;
      dStack_180 = dStack_e0;
      uStack_168 = uStack_c8;
      dStack_170 = dStack_d0;
      uStack_158 = uStack_b8;
      uStack_160 = uStack_c0;
      func_0x0001090a6b8c(&dStack_120);
      pdVar7 = &dStack_100;
      _CMTimeCompare(pdVar7,&dStack_120);
      if ((int)pdVar7 < 1) {
        dStack_178 = dStack_148;
        dStack_180 = dStack_150;
        uStack_168 = uStack_138;
        dStack_170 = dStack_140;
        uStack_158 = uStack_128;
        uStack_160 = uStack_130;
        func_0x0001090a6b8c(&dStack_100);
        func_0x0001090a6b2c();
        pdVar7 = &dStack_100;
        _CMTimeCompare(pdVar7,&dStack_180);
        if (-1 < (int)pdVar7) {
          dStack_178 = dStack_148;
          dStack_180 = dStack_150;
          dStack_170 = dStack_140;
          dVar10 = dStack_150;
          _CMTimeGetSeconds(&dStack_180);
          if ((lVar8 == 0) || (ABS(dVar11 - dVar10) < dVar12)) {
            _objc_retain(lVar6);
            func_0x0001090a6b24();
            lVar8 = lVar6;
            dVar12 = ABS(dVar11 - dVar10);
          }
        }
      }
      _objc_release(lVar6);
    }
    if ((lVar8 == 0) && (0 < (long)pdVar3)) {
      func_0x00010c149800(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090a6b84();
      lVar8 = lVar2;
    }
  }
  func_0x0001090a6b1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 1090a6634; end: 1090a6793; -[SCNeoMediaTrackSampleInfoIndexer firstSyncSampleBeforeTime:] */

void FUN_1090a6634(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auStack_90 [32];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  func_0x00010bec9c60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    uStack_68 = param_3[1];
    uStack_70 = *param_3;
    uStack_60 = param_3[2];
    lVar1 = param_1;
    func_0x00010bf20ac0();
    do {
      if (lVar1 < 1) break;
      lVar2 = param_1;
      func_0x00010c149800();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
      }
      else {
        func_0x00010c10f700(&uStack_70,lVar2);
      }
      func_0x0001090a6bc0();
      puVar3 = &uStack_70;
      _CMTimeCompare(puVar3,auStack_90);
      _objc_release(lVar2);
      func_0x0001090a6b84();
      lVar1 = lVar1 + -1;
    } while (0 < (int)puVar3);
    func_0x00010c149800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090a6b84();
  }
  func_0x0001090a6b1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}


