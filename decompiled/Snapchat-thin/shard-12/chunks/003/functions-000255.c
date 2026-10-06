/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109057cbc; end: 109057ccf; -[SCVideoDecoder avgFrameDuration] */

void FUN_109057cbc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  param_1[1] = *(undefined8 *)(param_2 + 0x68);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x70);
  return;
}



/* Entry: 109057cd0; end: 109057dff; -[SCVideoDecoder _createAudioSampleBuffer:withPresentationTimeOffset:] */

undefined8 FUN_109057cd0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if (param_3 != 0) {
    _CMSampleBufferGetSampleTimingInfoArray(param_3,0,0,&lStack_48);
    lVar2 = lStack_48;
    lVar1 = lStack_48 * 0x48;
    _malloc();
    _CMSampleBufferGetSampleTimingInfoArray(param_3,lVar2,lVar1,&lStack_48);
    if (0 < lStack_48) {
      lVar2 = 0;
      puVar3 = (undefined8 *)(lVar1 + 0x18);
      uVar6 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
      uVar5 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
      uVar4 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
      do {
        puVar3[4] = uVar6;
        puVar3[3] = uVar5;
        puVar3[5] = uVar4;
        uStack_78 = puVar3[1];
        uStack_80 = *puVar3;
        uStack_70 = puVar3[2];
        uStack_98 = param_4[1];
        uStack_a0 = *param_4;
        uStack_90 = param_4[2];
        _CMTimeSubtract(&uStack_60,&uStack_80,&uStack_a0);
        puVar3[1] = uStack_58;
        *puVar3 = uStack_60;
        puVar3[2] = uStack_50;
        lVar2 = lVar2 + 1;
        puVar3 = puVar3 + 9;
      } while (lVar2 < lStack_48);
    }
    _CMSampleBufferCreateCopyWithNewTiming
              (*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78,param_3,lStack_48,lVar1,&uStack_60)
    ;
    _free(lVar1);
    return uStack_60;
  }
  return 0;
}



/* Entry: 109057e00; end: 109057e17; -[SCVideoDecoder timeRange] */

void FUN_109057e00(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x7c);
  uVar3 = *(undefined8 *)(param_2 + 0x94);
  uVar2 = *(undefined8 *)(param_2 + 0x8c);
  param_1[1] = *(undefined8 *)(param_2 + 0x84);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x9c);
  param_1[5] = *(undefined8 *)(param_2 + 0xa4);
  param_1[4] = uVar1;
  return;
}



/* Entry: 109057e18; end: 109057e2f; -[SCVideoDecoder setTimeRange:] */

void FUN_109057e18(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  uVar5 = param_3[4];
  *(undefined8 *)(param_1 + 0xa4) = param_3[5];
  *(undefined8 *)(param_1 + 0x9c) = uVar5;
  *(undefined8 *)(param_1 + 0x94) = uVar4;
  *(undefined8 *)(param_1 + 0x8c) = uVar3;
  *(undefined8 *)(param_1 + 0x84) = uVar2;
  *(undefined8 *)(param_1 + 0x7c) = uVar1;
  return;
}



/* Entry: 109057e30; end: 109057eb3; -[SCVideoDecoder .cxx_destruct] */

void FUN_109057e30(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109057eb4; end: 10905811b; +[SCVideoDecoderError stableTextForError:] */

void FUN_109057eb4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110f1dcb8;
    goto LAB_1090580fc;
  }
  lVar1 = param_3;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0720c0();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    lVar1 = param_3;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0720c0();
    _objc_release(lVar1);
    if ((int)lVar2 == 0) {
      lVar1 = param_3;
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0720c0();
      _objc_release(lVar1);
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((int)lVar2 == 0) {
        lVar1 = param_3;
        func_0x00010bf87dc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3ec40();
        func_0x00010c14de00(ppuVar4,param_2,&PTR____CFConstantStringClassReference_110ddd4f8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        goto LAB_1090580fc;
      }
      lVar1 = param_3;
      func_0x00010bf3ec40();
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (lVar1 == 0x138c) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110f1ddd8;
        goto LAB_1090580fc;
      }
      func_0x00010bf3ec40();
      ppuVar3 = &PTR____CFConstantStringClassReference_110f1ddf8;
    }
    else {
      lVar1 = param_3;
      func_0x00010bf3ec40();
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (lVar1 == -0x3e9) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110f1dd98;
        goto LAB_1090580fc;
      }
      func_0x00010bf3ec40();
      ppuVar3 = &PTR____CFConstantStringClassReference_110f1ddb8;
    }
  }
  else {
    lVar1 = param_3;
    func_0x00010bf3ec40();
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar1 < -0x2e2d) {
      if (lVar1 == -0x2e47) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110f1dcd8;
        goto LAB_1090580fc;
      }
      if (lVar1 == -0x2e35) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110f1dd38;
        goto LAB_1090580fc;
      }
    }
    else {
      if (lVar1 == -0x2e2d) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110f1dd18;
        goto LAB_1090580fc;
      }
      if (lVar1 == -0x2e18) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110f1dd58;
        goto LAB_1090580fc;
      }
      if (lVar1 == -0x2e2b) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110f1dcf8;
        goto LAB_1090580fc;
      }
    }
    func_0x00010bf3ec40();
    ppuVar3 = &PTR____CFConstantStringClassReference_110f1dd78;
  }
  func_0x00010c14de00(ppuVar4,param_2,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
LAB_1090580fc:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 10905811c; end: 109058123; -[SCVideoDecoderLogger init] */

void FUN_10905811c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c018430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithGrapheneMetric__1125e3ae8,0);
  return;
}



/* Entry: 109058124; end: 1090581b7; -[SCVideoDecoderLogger initWithGrapheneMetric:] */

undefined1 * FUN_109058124(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127000b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_3 == 0) {
      puVar3 = PTR_PTR_1126dd178;
      _objc_alloc_init();
      uVar2 = *(undefined8 *)((long)puVar1 + 8);
      *(undefined **)((long)puVar1 + 8) = puVar3;
    }
    else {
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)puVar1 + 8);
      *(long *)((long)puVar1 + 8) = param_3;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1090581b8; end: 10905822b; -[SCVideoDecoderLogger logDecodeErrorWithProvider:error:] */

void FUN_1090581b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dd180;
  _objc_retain(param_3);
  func_0x00010c24d0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_109068e28(*(undefined8 *)(param_1 + 8),puVar1,param_3,1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10905822c; end: 109058237; -[SCVideoDecoderLogger .cxx_destruct] */

void FUN_10905822c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109058238; end: 1090582ff; -[SCVideoReverseDecoder initWithVideoAsset:] */

undefined8 * FUN_109058238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
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
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127000c0;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    uStack_78 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_80 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_70 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_98 = *(undefined8 *)(PTR__kCMTimePositiveInfinity_110348658 + 8);
    uStack_a0 = *(undefined8 *)PTR__kCMTimePositiveInfinity_110348658;
    uStack_90 = *(undefined8 *)(PTR__kCMTimePositiveInfinity_110348658 + 0x10);
    _CMTimeRangeMake(&uStack_60,&uStack_80,&uStack_a0);
    puVar1[0xd] = uStack_58;
    puVar1[0xc] = uStack_60;
    puVar1[0xf] = uStack_48;
    puVar1[0xe] = uStack_50;
    puVar1[0x11] = uStack_38;
    puVar1[0x10] = uStack_40;
    puVar1[7] = 0;
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 109058300; end: 10905834b; -[SCVideoReverseDecoder dealloc] */

void FUN_109058300(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    _CFRelease();
  }
  puStack_28 = PTR_PTR_1127000c0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10905834c; end: 10905871b; -[SCVideoReverseDecoder prepareFetchingFrameWithError:] */

uint FUN_10905834c(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  uint uVar12;
  long *plVar13;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c279200(lVar2,param_2,*(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    if (param_3 == (long *)0x0) {
      uVar12 = 0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      uVar12 = 0;
      *param_3 = (long)puVar5;
    }
  }
  else {
    func_0x00010c106f40(&uStack_a8,lVar3);
    puVar4 = &uStack_a8;
    func_0x00010b691288();
    *(undefined8 **)(param_1 + 0x28) = puVar4;
    if (*(long *)(param_1 + 8) == 0) {
      uStack_a8 = 0;
      lStack_a0 = 0;
      uStack_98 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_a8);
    }
    *(long *)(param_1 + 0x18) = lStack_a0;
    *(undefined8 *)(param_1 + 0x10) = uStack_a8;
    *(undefined8 *)(param_1 + 0x20) = uStack_98;
    if (param_3 != (long *)0x0) {
      *param_3 = 0;
    }
    puVar5 = PTR__OBJC_CLASS___AVAssetReaderTrackOutput_1126bf5a0;
    func_0x00010bf0b5e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___AVAssetReader_1126bf598;
    _objc_alloc();
    func_0x00010bff4200();
    if ((*param_3 == 0) && (puVar6 != (undefined *)0x0)) {
      func_0x00010befa4c0(puVar6);
      func_0x00010c250140(puVar6);
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      uVar11 = *(undefined8 *)(param_1 + 0x50);
      *(undefined **)(param_1 + 0x50) = puVar10;
      _objc_release(uVar11);
      puVar10 = puVar5;
      func_0x00010bf52120();
      while (puVar10 != (undefined *)0x0) {
        puVar8 = puVar10;
        FUN_10905871c();
        if ((int)puVar8 != 0) {
          uVar11 = *(undefined8 *)(param_1 + 0x50);
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(uVar11);
          _objc_release(puVar8);
        }
        func_0x00010befa120(puVar7);
        _CFRelease(puVar10);
        puVar10 = puVar5;
        func_0x00010bf52120();
      }
      puVar10 = puVar7;
      func_0x00010bf51e00();
      uVar11 = *(undefined8 *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar10;
      _objc_release(uVar11);
      lVar2 = lVar3;
      func_0x00010bfb5b00(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar2;
      func_0x00010bfb1920();
      _objc_release(lVar2);
      uStack_a8 = 0x1090587a4;
      plVar13 = (long *)(param_1 + 0x40);
      *plVar13 = 0;
      uStack_78 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
      ppuStack_70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1e00;
      puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      lStack_a0 = param_1;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      iVar1 = 0;
      _VTDecompressionSessionCreate(0,lVar9,0,puVar10,&uStack_a8,plVar13);
      uVar12 = (uint)(iVar1 == 0);
      if (iVar1 == 0) {
        uVar11 = *(undefined8 *)(param_1 + 0x50);
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        _objc_release(uVar11);
        func_0x00010bdf87c0(param_1);
        func_0x00010c12cd60(*(undefined8 *)(param_1 + 0x50));
        *(undefined8 *)(param_1 + 0x38) = 1;
      }
      else {
        if (*plVar13 != 0) {
          _VTDecompressionSessionInvalidate();
          _CFRelease(*plVar13);
          *plVar13 = 0;
        }
        puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_3 = (long)puVar10;
      }
      _objc_release(puVar7);
    }
    else {
      puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      uVar12 = 0;
      *param_3 = (long)puVar10;
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar12;
  }
  ___stack_chk_fail();
  if ((lVar3 == 0) || (_CMSampleBufferGetSampleAttachmentsArray(), lVar3 == 0)) {
    uVar12 = 0;
  }
  else {
    _CFArrayGetValueAtIndex();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar2;
    func_0x00010bf1f3c0();
    _objc_release(lVar2);
    uVar12 = (uint)lVar9 ^ 1;
    _objc_release(lVar3);
  }
  return uVar12;
}



/* Entry: 10905871c; end: 1090587f3;  */

uint FUN_10905871c(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  if ((param_1 == 0) || (_CMSampleBufferGetSampleAttachmentsArray(param_1,0), param_1 == 0)) {
    uVar3 = 0;
  }
  else {
    _CFArrayGetValueAtIndex();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf1f3c0();
    _objc_release(lVar1);
    uVar3 = (uint)lVar2 ^ 1;
    _objc_release(param_1);
  }
  return uVar3;
}



/* Entry: 1090587f4; end: 1090587fb; -[SCVideoReverseDecoder decodeNextAudioSampleBuffer] */

undefined8 FUN_1090587f4(void)

{
  return 0;
}



/* Entry: 1090587fc; end: 109058803; -[SCVideoReverseDecoder audioProviderStatus] */

undefined8 FUN_1090587fc(void)

{
  return 0;
}



/* Entry: 109058804; end: 109058993; -[SCVideoReverseDecoder _decodeGroupOfPicturesAtFrameIndex:] */

void FUN_109058804(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar3;
  _objc_release(uVar6);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  FUN_10905871c();
  if (iVar2 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x30);
    func_0x00010bf529e0();
    puVar3 = PTR__kCMTimingInfoInvalid_110348688;
    if (param_3 < uVar4) {
      lVar7 = 0;
      uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
      do {
        uVar5 = *(ulong *)(param_1 + 0x30);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        uVar4 = uVar5;
        _CMSampleBufferGetNumSamples();
        if (uVar4 != 0) {
          if ((lVar7 != 0) && (uVar4 = uVar5, FUN_10905871c(), (uVar4 & 1) != 0)) {
            return;
          }
          *(undefined8 *)(param_1 + 0x48) = 0;
          _VTDecompressionSessionDecodeFrame(*(undefined8 *)(param_1 + 0x40),uVar5,0,0,0);
          if (*(long *)(param_1 + 0x48) != 0) {
            uStack_50 = 0;
            uStack_48 = 0;
            _CMVideoFormatDescriptionCreateForImageBuffer
                      (uVar6,*(long *)(param_1 + 0x48),&uStack_50);
            uStack_78 = *(undefined8 *)(puVar3 + 0x28);
            uStack_80 = *(undefined8 *)(puVar3 + 0x20);
            uStack_68 = *(undefined8 *)(puVar3 + 0x38);
            uStack_70 = *(undefined8 *)(puVar3 + 0x30);
            uStack_60 = *(undefined8 *)(puVar3 + 0x40);
            uStack_98 = *(undefined8 *)(puVar3 + 8);
            uStack_a0 = *(undefined8 *)puVar3;
            uStack_88 = *(undefined8 *)(puVar3 + 0x18);
            uStack_90 = *(undefined8 *)(puVar3 + 0x10);
            _CMSampleBufferGetSampleTimingInfo(uVar5,0,&uStack_a0);
            _CMSampleBufferCreateReadyWithImageBuffer
                      (uVar6,*(undefined8 *)(param_1 + 0x48),uStack_50,&uStack_a0,&uStack_48);
            _CVPixelBufferRelease(*(undefined8 *)(param_1 + 0x48));
            uVar1 = uStack_48;
            func_0x00010befa120(*(undefined8 *)(param_1 + 0x58));
            _objc_release(uVar1);
          }
        }
        param_3 = param_3 + 1;
        uVar4 = *(ulong *)(param_1 + 0x30);
        func_0x00010bf529e0();
        lVar7 = lVar7 + -1;
      } while (param_3 < uVar4);
    }
  }
  return;
}



/* Entry: 109058994; end: 109058adb; -[SCVideoReverseDecoder decodeNextVideoFrame:] */

void FUN_109058994(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
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
  
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x50);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c089820(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      _objc_release(uVar2);
      func_0x00010bdf87c0(param_1);
      func_0x00010c12cd60(*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bf66fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_decodeNextVideoFrame__1125b7598,param_3);
      return;
    }
    *(undefined8 *)(param_1 + 0x38) = 2;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x58);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    uStack_38 = 0;
    _CMSampleBufferCreateCopy(0,lVar1,&uStack_38);
    _CMSampleBufferGetPresentationTimeStamp(&uStack_50,uStack_38);
    uStack_78 = *(undefined8 *)(param_1 + 0x18);
    uStack_80 = *(undefined8 *)(param_1 + 0x10);
    uStack_70 = *(undefined8 *)(param_1 + 0x20);
    uStack_98 = uStack_48;
    uStack_a0 = uStack_50;
    uStack_90 = uStack_40;
    _CMTimeSubtract(&uStack_68,&uStack_80,&uStack_a0);
    uStack_78 = uStack_60;
    uStack_80 = uStack_68;
    uStack_70 = uStack_58;
    _CMSampleBufferSetOutputPresentationTimeStamp(uStack_38,&uStack_80);
    func_0x00010c12cd60(*(undefined8 *)(param_1 + 0x58));
    if (lVar1 != 0) {
      _CFRelease(lVar1);
    }
  }
  return;
}



/* Entry: 109058adc; end: 109058ae3; -[SCVideoReverseDecoder videoProviderStatus] */

undefined8 FUN_109058adc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 109058ae4; end: 109058ae7; -[SCVideoReverseDecoder cancelFetching] */

void FUN_109058ae4(void)

{
  return;
}



/* Entry: 109058ae8; end: 109058b03; -[SCVideoReverseDecoder avgFrameDuration] */

void FUN_109058ae8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__kCMTimeInvalid_110348648;
  uVar2 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
  param_1[1] = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
  *param_1 = uVar2;
  param_1[2] = *(undefined8 *)(puVar1 + 0x10);
  return;
}



/* Entry: 109058b04; end: 109058b17; -[SCVideoReverseDecoder timeRange] */

void FUN_109058b04(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  param_1[1] = *(undefined8 *)(param_2 + 0x68);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  param_1[5] = *(undefined8 *)(param_2 + 0x88);
  param_1[4] = uVar1;
  return;
}



/* Entry: 109058b18; end: 109058b2b; -[SCVideoReverseDecoder setTimeRange:] */

void FUN_109058b18(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  uVar3 = param_3[2];
  uVar5 = param_3[5];
  uVar4 = param_3[4];
  *(undefined8 *)(param_1 + 0x78) = param_3[3];
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  *(undefined8 *)(param_1 + 0x80) = uVar4;
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  return;
}



/* Entry: 109058b2c; end: 109058b73; -[SCVideoReverseDecoder .cxx_destruct] */

void FUN_109058b2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109058b74; end: 109058c47; -[SCVideoTranscodingStaticImageFrameProvider initWithImage:frameRate:duration:audioAsset:useIOSurfaceBacking:] */

undefined1 *
FUN_109058b74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1127000c8;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x28) = param_7;
    *(undefined4 *)((long)puVar1 + 100) = 0;
  }
  _objc_release(param_6);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 109058c48; end: 109058c8b; -[SCVideoTranscodingStaticImageFrameProvider prepareFetchingFrameWithError:] */

void FUN_109058c48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be78360();
  if (((int)lVar1 != 0) && (*(long *)(param_1 + 0x48) != 0)) {
    func_0x00010be78300(param_1,param_2,param_3);
  }
  return;
}



/* Entry: 109058c8c; end: 109058cf3; -[SCVideoTranscodingStaticImageFrameProvider decodeNextAudioSampleBuffer] */

undefined8 FUN_109058c8c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x60) == '\x01') {
    _os_unfair_lock_lock(param_1 + 100);
    lVar1 = *(long *)(param_1 + 0x50);
    func_0x00010c252d60();
    if (lVar1 == 1) {
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010bf52120(uVar2);
    }
    else {
      uVar2 = 0;
    }
    _os_unfair_lock_unlock(param_1 + 100);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 109058cf4; end: 109058d0f; -[SCVideoTranscodingStaticImageFrameProvider audioProviderStatus] */

undefined8 FUN_109058cf4(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x60) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010c252d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_status_112672580);
    return uVar1;
  }
  return 0;
}



/* Entry: 109058d10; end: 109058e3b; -[SCVideoTranscodingStaticImageFrameProvider decodeNextVideoFrame:] */

undefined1  [16] FUN_109058d10(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  ulong uStack_90;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((*(double *)(param_1 + 0x20) * (double)*(ulong *)(param_1 + 0x18) <
       (double)*(ulong *)(param_1 + 0x30)) || (*(long *)(param_1 + 0x38) == 0)) {
    func_0x00010be8a4c0(param_1);
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    uStack_90 = 0;
    *param_3 = puVar1;
  }
  else {
    _CMTimeMake(&uStack_38);
    uStack_78 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
    uStack_80 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
    uStack_70 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
    uStack_60 = uStack_30;
    uStack_68 = uStack_38;
    uStack_58 = uStack_28;
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    uStack_50 = uStack_80;
    uStack_48 = uStack_78;
    uStack_40 = uStack_70;
    _CMVideoFormatDescriptionCreateForImageBuffer(uVar2,*(undefined8 *)(param_1 + 0x38),&uStack_88);
    uStack_90 = 0;
    _CMSampleBufferCreateForImageBuffer
              (uVar2,*(undefined8 *)(param_1 + 0x38),1,0,0,uStack_88,&uStack_80,&uStack_90);
    _CFRelease(uStack_88);
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uStack_90;
  return auVar3;
}



/* Entry: 109058e3c; end: 109058e7f; -[SCVideoTranscodingStaticImageFrameProvider videoProviderStatus] */

undefined1 FUN_109058e3c(long param_1)

{
  double dVar1;
  double dVar2;
  
  if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
    return 4;
  }
  dVar1 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x30));
  dVar2 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x18));
  if (*(double *)(param_1 + 0x20) * dVar2 < dVar1) {
    return 2;
  }
  return *(long *)(param_1 + 0x38) != 0;
}



/* Entry: 109058e80; end: 109058ebb; -[SCVideoTranscodingStaticImageFrameProvider cancelFetching] */

void FUN_109058e80(long param_1)

{
  func_0x00010be8a4c0();
  *(undefined1 *)(param_1 + 0x40) = 1;
  _os_unfair_lock_lock(param_1 + 100);
  func_0x00010bf2eca0(*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 100);
  return;
}



/* Entry: 109058ebc; end: 109058ed7; -[SCVideoTranscodingStaticImageFrameProvider avgFrameDuration] */

void FUN_109058ebc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__kCMTimeInvalid_110348648;
  uVar2 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
  param_1[1] = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
  *param_1 = uVar2;
  param_1[2] = *(undefined8 *)(puVar1 + 0x10);
  return;
}



/* Entry: 109058ed8; end: 10905918f; -[SCVideoTranscodingStaticImageFrameProvider _createIOSurfaceImagePixelBuffer] */

long FUN_109058ed8(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double unaff_d8;
  double unaff_d9;
  double unaff_d10;
  double unaff_d11;
  undefined8 uVar15;
  long alStack_180 [6];
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  undefined1 auStack_e0 [48];
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c23d0a0(*(undefined8 *)(param_5 + 0x10));
  lVar8 = (long)param_1;
  func_0x00010c23d0a0(*(undefined8 *)(param_5 + 0x10));
  lVar10 = (long)param_2;
  uStack_a8 = *(undefined8 *)PTR__kCVPixelBufferCGImageCompatibilityKey_11034a380;
  uStack_a0 = *(undefined8 *)PTR__kCVPixelBufferCGBitmapContextCompatibilityKey_11034a378;
  puStack_90 = PTR____kCFBooleanTrue_11034ab68;
  puStack_88 = PTR____kCFBooleanTrue_11034ab68;
  uStack_98 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
  puStack_80 = PTR____NSDictionary0__struct_11034ab58;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  lStack_b0 = 0;
  uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  _CVPixelBufferCreate(uVar2,lVar8,lVar10,0x42475241,puVar1,&lStack_b0);
  lVar5 = 0;
  dVar11 = param_1;
  dVar13 = param_2;
  if ((int)uVar2 == 0 && lStack_b0 != 0) {
    lVar5 = lStack_b0;
    _CVPixelBufferGetBytesPerRow();
    lVar9 = lStack_b0;
    _CVPixelBufferGetIOSurface();
    dVar11 = param_1;
    dVar13 = param_2;
    if (lVar9 != 0) {
      _CVPixelBufferLockBaseAddress(lStack_b0,0);
      lVar9 = lStack_b0;
      _CVPixelBufferGetBaseAddress();
      lVar3 = lVar9;
      _CGColorSpaceCreateDeviceRGB();
      _CGBitmapContextCreate(lVar9,lVar8,lVar10,8,lVar5,lVar3,0x2002);
      if (lVar9 != 0) {
        uVar2 = *(undefined8 *)(param_5 + 0x10);
        func_0x00010bfe8380();
        func_0x00010c23d0a0(*(undefined8 *)(param_5 + 0x10));
        func_0x00010b690f98(auStack_e0,uVar2);
        _CGContextConcatCTM(lVar9,auStack_e0);
        uVar4 = *(ulong *)(param_5 + 0x10);
        func_0x00010bfe8380();
        if ((uVar4 < 8) && ((1L << (uVar4 & 0x3f) & 0xccU) != 0)) {
          func_0x00010c23d0a0(*(undefined8 *)(param_5 + 0x10));
          func_0x00010c23d0a0(*(undefined8 *)(param_5 + 0x10));
          uVar2 = *(undefined8 *)(param_5 + 0x10);
          func_0x00010bdc1020(uVar2);
          dVar11 = 0.0;
          dVar13 = 0.0;
          param_3 = param_2;
          param_4 = param_1;
          unaff_d8 = param_2;
          param_2 = param_1;
        }
        else {
          func_0x00010c23d0a0(*(undefined8 *)(param_5 + 0x10));
          func_0x000107c308a4();
          uVar2 = *(undefined8 *)(param_5 + 0x10);
          func_0x00010bdc1020(uVar2);
          dVar11 = param_1;
          dVar13 = param_2;
          unaff_d8 = param_1;
          unaff_d10 = param_3;
          unaff_d11 = param_4;
        }
        _CGContextDrawImage(dVar11,dVar13,param_3,param_4,lVar9,uVar2);
        _CGColorSpaceRelease(lVar3);
        _CGContextRelease(lVar9);
        _CVPixelBufferUnlockBaseAddress(lStack_b0,0);
        lVar5 = lStack_b0;
        unaff_d9 = param_2;
        goto LAB_109059104;
      }
      _CGColorSpaceRelease(lVar3);
      _CVPixelBufferUnlockBaseAddress(lStack_b0,0);
      dVar11 = param_1;
      dVar13 = param_2;
    }
    _CVPixelBufferRelease(lStack_b0);
    lVar5 = 0;
  }
LAB_109059104:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return lVar5;
  }
  ___stack_chk_fail();
  dStack_150 = unaff_d11;
  dStack_148 = unaff_d10;
  dStack_140 = unaff_d9;
  dStack_138 = unaff_d8;
  func_0x00010c23d0a0(*(undefined8 *)(puVar1 + 0x10));
  lVar8 = (long)dVar11;
  func_0x00010c23d0a0(*(undefined8 *)(puVar1 + 0x10));
  lVar9 = (long)dVar13;
  lVar10 = lVar8 * 4;
  lVar5 = lVar10 * lVar9;
  _malloc();
  if (lVar5 != 0) {
    lVar3 = lVar5;
    _CGColorSpaceCreateDeviceRGB();
    lVar6 = lVar5;
    _CGBitmapContextCreate(lVar5,lVar8,lVar9,8,lVar10,lVar3,0x2002);
    if (lVar6 != 0) {
      uVar2 = *(undefined8 *)(puVar1 + 0x10);
      func_0x00010bfe8380(uVar2);
      func_0x00010c23d0a0(*(undefined8 *)(puVar1 + 0x10));
      func_0x00010b690f98(alStack_180,uVar2);
      _CGContextConcatCTM(lVar6,alStack_180);
      uVar4 = *(ulong *)(puVar1 + 0x10);
      func_0x00010bfe8380();
      if ((uVar4 < 8) && ((1L << (uVar4 & 0x3f) & 0xccU) != 0)) {
        func_0x00010c23d0a0(*(undefined8 *)(puVar1 + 0x10));
        func_0x00010c23d0a0(*(undefined8 *)(puVar1 + 0x10));
        uVar2 = *(undefined8 *)(puVar1 + 0x10);
        func_0x00010bdc1020(uVar2);
        dVar12 = 0.0;
        dVar14 = 0.0;
        param_3 = dVar13;
        param_4 = dVar11;
      }
      else {
        func_0x00010c23d0a0(*(undefined8 *)(puVar1 + 0x10));
        func_0x000107c308a4();
        uVar2 = *(undefined8 *)(puVar1 + 0x10);
        func_0x00010bdc1020(uVar2);
        dVar12 = dVar11;
        dVar14 = dVar13;
      }
      _CGContextDrawImage(dVar12,dVar14,param_3,param_4,lVar6,uVar2);
      _CGColorSpaceRelease(lVar3);
      _CGContextRelease(lVar6);
      uVar7 = *(undefined8 *)PTR__kCVPixelBufferCGBitmapContextCompatibilityKey_11034a378;
      uVar15 = 0;
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf720a0();
      _objc_retainAutoreleasedReturnValue();
      alStack_180[0] = 0;
      uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
      _CVPixelBufferCreateWithBytes
                (uVar2,lVar8,lVar9,0x42475241,lVar5,lVar10,FUN_1090593d4,0,puVar1,alStack_180,uVar7,
                 uVar15);
      lVar8 = alStack_180[0];
      if ((int)uVar2 != 0 || alStack_180[0] == 0) {
        _free(lVar5);
        lVar8 = 0;
      }
      _objc_release(puVar1);
      return lVar8;
    }
    _CGColorSpaceRelease(lVar3);
    _free(lVar5);
  }
  return 0;
}



/* Entry: 109059190; end: 1090593d3; -[SCVideoTranscodingStaticImageFrameProvider _createImagePixelBuffer] */

long FUN_109059190(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  long alStack_a0 [6];
  
  func_0x00010c23d0a0(*(undefined8 *)(param_5 + 0x10));
  lVar8 = (long)param_1;
  func_0x00010c23d0a0(*(undefined8 *)(param_5 + 0x10));
  lVar10 = (long)param_2;
  lVar9 = lVar8 * 4;
  lVar1 = lVar9 * lVar10;
  _malloc();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    _CGColorSpaceCreateDeviceRGB();
    lVar3 = lVar1;
    _CGBitmapContextCreate(lVar1,lVar8,lVar10,8,lVar9,lVar2,0x2002);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(param_5 + 0x10);
      func_0x00010bfe8380(uVar4);
      func_0x00010c23d0a0(*(undefined8 *)(param_5 + 0x10));
      func_0x00010b690f98(alStack_a0,uVar4);
      _CGContextConcatCTM(lVar3,alStack_a0);
      uVar5 = *(ulong *)(param_5 + 0x10);
      func_0x00010bfe8380();
      if ((uVar5 < 8) && ((1L << (uVar5 & 0x3f) & 0xccU) != 0)) {
        func_0x00010c23d0a0(*(undefined8 *)(param_5 + 0x10));
        func_0x00010c23d0a0(*(undefined8 *)(param_5 + 0x10));
        uVar4 = *(undefined8 *)(param_5 + 0x10);
        func_0x00010bdc1020(uVar4);
        dVar11 = 0.0;
        dVar12 = 0.0;
        param_3 = param_2;
        param_4 = param_1;
      }
      else {
        func_0x00010c23d0a0(*(undefined8 *)(param_5 + 0x10));
        func_0x000107c308a4();
        uVar4 = *(undefined8 *)(param_5 + 0x10);
        func_0x00010bdc1020(uVar4);
        dVar11 = param_1;
        dVar12 = param_2;
      }
      _CGContextDrawImage(dVar11,dVar12,param_3,param_4,lVar3,uVar4);
      _CGColorSpaceRelease(lVar2);
      _CGContextRelease(lVar3);
      uVar7 = *(undefined8 *)PTR__kCVPixelBufferCGBitmapContextCompatibilityKey_11034a378;
      uVar13 = 0;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf720a0();
      _objc_retainAutoreleasedReturnValue();
      alStack_a0[0] = 0;
      uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
      _CVPixelBufferCreateWithBytes
                (uVar4,lVar8,lVar10,0x42475241,lVar1,lVar9,FUN_1090593d4,0,puVar6,alStack_a0,uVar7,
                 uVar13);
      lVar8 = alStack_a0[0];
      if ((int)uVar4 != 0 || alStack_a0[0] == 0) {
        _free(lVar1);
        lVar8 = 0;
      }
      _objc_release(puVar6);
      return lVar8;
    }
    _CGColorSpaceRelease(lVar2);
    _free(lVar1);
  }
  return 0;
}



/* Entry: 1090593d4; end: 1090593db;  */

void FUN_1090593d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1090593dc; end: 109059403; -[SCVideoTranscodingStaticImageFrameProvider _releasePixelBuffer] */

void FUN_1090593dc(long param_1)

{
  _CVPixelBufferRelease(*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 109059404; end: 109059487; -[SCVideoTranscodingStaticImageFrameProvider _prepareFetchingImageFrameWithError:] */

bool FUN_109059404(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010bdee8c0();
  }
  else {
    func_0x00010bdeea00();
  }
  *(long *)(param_1 + 0x38) = lVar1;
  if ((param_3 != (undefined8 *)0x0) && (lVar1 == 0)) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110f1dc98,0x1389,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_3 = puVar2;
  }
  return lVar1 != 0;
}



/* Entry: 109059488; end: 10905975b; -[SCVideoTranscodingStaticImageFrameProvider _prepareFetchingAudioFrameWithError:] */

undefined * FUN_109059488(undefined *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *extraout_x8;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x48) == 0) {
    puVar5 = (undefined *)0x0;
    goto LAB_109059724;
  }
  puVar5 = PTR__OBJC_CLASS___AVAssetReader_1126bf598;
  _objc_alloc();
  func_0x00010bff4200();
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar5;
  _objc_release(uVar4);
  if ((*param_3 != 0) || (*(long *)(param_1 + 0x50) == 0)) {
    param_1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    puVar5 = (undefined *)0x0;
    *param_3 = (long)param_1;
    goto LAB_109059724;
  }
  uStack_118 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_120 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_110 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_e8 = *(undefined8 *)(PTR__kCMTimePositiveInfinity_110348658 + 8);
  uStack_f0 = *(undefined8 *)PTR__kCMTimePositiveInfinity_110348658;
  uStack_e0 = *(undefined8 *)(PTR__kCMTimePositiveInfinity_110348658 + 0x10);
  _CMTimeRangeMake(&uStack_d8,&uStack_120,&uStack_f0);
  uStack_118 = uStack_d0;
  uStack_120 = uStack_d8;
  uStack_108 = uStack_c0;
  uStack_110 = uStack_c8;
  uStack_f8 = uStack_b0;
  uStack_100 = uStack_b8;
  func_0x00010c214ec0(*(undefined8 *)(param_1 + 0x50));
  puVar5 = *(undefined **)(param_1 + 0x48);
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (puVar1 == (undefined *)0x0) {
LAB_109059700:
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    puVar5 = (undefined *)0x0;
    *param_3 = (long)puVar2;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___AVAssetReaderTrackOutput_1126bf5a0;
    _objc_alloc();
    uStack_a8 = *(undefined8 *)PTR__AVFormatIDKey_11034cf30;
    uStack_a0 = *(undefined8 *)PTR__AVSampleRateKey_11034cf60;
    ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1e18;
    ppuStack_70 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185ee0;
    uStack_98 = *(undefined8 *)PTR__AVLinearPCMBitDepthKey_11034cf38;
    uStack_90 = *(undefined8 *)PTR__AVLinearPCMIsBigEndianKey_11034cf40;
    ppuStack_68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1e30;
    puStack_60 = PTR____kCFBooleanFalse_11034ab60;
    uStack_88 = *(undefined8 *)PTR__AVLinearPCMIsFloatKey_11034cf48;
    uStack_80 = *(undefined8 *)PTR__AVLinearPCMIsNonInterleaved_11034cf50;
    puStack_58 = PTR____kCFBooleanFalse_11034ab60;
    puStack_50 = PTR____kCFBooleanFalse_11034ab60;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054b20();
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    *(undefined **)(param_1 + 0x58) = puVar5;
    _objc_release(uVar4);
    _objc_release(puVar2);
    uVar3 = *(ulong *)(param_1 + 0x50);
    func_0x00010bf2c480();
    if ((uVar3 & 1) == 0) goto LAB_109059700;
    func_0x00010befa4c0(*(undefined8 *)(param_1 + 0x50));
    func_0x00010c250140(*(undefined8 *)(param_1 + 0x50));
    puVar5 = (undefined *)0x1;
    param_1[0x60] = 1;
  }
  _objc_release();
  param_1 = puVar1;
LAB_109059724:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    uVar7 = *(undefined8 *)(param_1 + 0x80);
    uVar6 = *(undefined8 *)(param_1 + 0x78);
    extraout_x8[1] = *(undefined8 *)(param_1 + 0x70);
    *extraout_x8 = uVar4;
    extraout_x8[3] = uVar7;
    extraout_x8[2] = uVar6;
    uVar4 = *(undefined8 *)(param_1 + 0x88);
    extraout_x8[5] = *(undefined8 *)(param_1 + 0x90);
    extraout_x8[4] = uVar4;
    return param_1;
  }
  return puVar5;
}



/* Entry: 10905975c; end: 109059773; -[SCVideoTranscodingStaticImageFrameProvider timeRange] */

void FUN_10905975c(undefined8 *param_1,long param_2)

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



/* Entry: 109059774; end: 10905978b; -[SCVideoTranscodingStaticImageFrameProvider setTimeRange:] */

void FUN_109059774(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  uVar5 = param_3[4];
  *(undefined8 *)(param_1 + 0x90) = param_3[5];
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  *(undefined8 *)(param_1 + 0x80) = uVar4;
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  return;
}



/* Entry: 10905978c; end: 1090597df; -[SCVideoTranscodingStaticImageFrameProvider .cxx_destruct] */

void FUN_10905978c(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090597e0; end: 1090598a3; -[SCVideoTranscodingStaticSampleBufferProvider initWithAsset:staticFrameConfig:] */

undefined1 *
FUN_1090597e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127000d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
    lVar3 = *(long *)((long)puVar1 + 8);
    lVar4 = 0;
    if (lVar3 != 0) {
      dVar5 = (double)NEON_ucvtf(*(undefined8 *)(lVar3 + 0x10));
      lVar4 = (long)(*(double *)(lVar3 + 8) * dVar5);
    }
    *(long *)((long)puVar1 + 0x38) = lVar4;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1090598a4; end: 109059b3f; -[SCVideoTranscodingStaticSampleBufferProvider prepareFetchingFrameWithError:] */

long FUN_1090598a4(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___AVAssetReader_1126bf598;
  _objc_alloc();
  func_0x00010bff4200();
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar2;
  _objc_release(uVar6);
  if ((*param_3 == 0) && (*(long *)(param_1 + 0x18) != 0)) {
    lVar7 = *(long *)(param_1 + 8);
    if (lVar7 == 0) goto LAB_109059b34;
    uStack_c8 = *(undefined8 *)(lVar7 + 0x20);
    uStack_d0 = *(undefined8 *)(lVar7 + 0x18);
    uStack_c0 = *(undefined8 *)(lVar7 + 0x28);
    goto LAB_109059958;
  }
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  param_1 = 0;
  *param_3 = (long)puVar2;
  do {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return param_1;
    }
    ___stack_chk_fail();
LAB_109059b34:
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
LAB_109059958:
    uStack_98 = *(undefined8 *)(PTR__kCMTimePositiveInfinity_110348658 + 8);
    uStack_a0 = *(undefined8 *)PTR__kCMTimePositiveInfinity_110348658;
    uStack_90 = *(undefined8 *)(PTR__kCMTimePositiveInfinity_110348658 + 0x10);
    _CMTimeRangeMake(&uStack_88,&uStack_d0,&uStack_a0);
    uStack_c8 = uStack_80;
    uStack_d0 = uStack_88;
    uStack_b8 = uStack_70;
    uStack_c0 = uStack_78;
    uStack_a8 = uStack_60;
    uStack_b0 = uStack_68;
    func_0x00010c214ec0(*(undefined8 *)(param_1 + 0x18));
    lVar3 = *(long *)(param_1 + 0x10);
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar7 == 0) {
LAB_109059ac8:
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      param_1 = 0;
      *param_3 = (long)puVar2;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___AVAssetReaderTrackOutput_1126bf5a0;
      _objc_alloc();
      uStack_58 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
      ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1e48;
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c054b20();
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      *(undefined **)(param_1 + 0x20) = puVar2;
      _objc_release(uVar6);
      _objc_release(puVar4);
      iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
      func_0x00010bf2c480();
      if (iVar1 == 0) goto LAB_109059ac8;
      func_0x00010befa4c0(*(undefined8 *)(param_1 + 0x18));
      func_0x00010c106f40(&uStack_d0,lVar7);
      puVar5 = &uStack_d0;
      func_0x00010b691288();
      *(undefined8 **)(param_1 + 0x40) = puVar5;
      func_0x00010c250140(*(undefined8 *)(param_1 + 0x18));
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf52120();
      *(undefined8 *)(param_1 + 0x28) = uVar6;
      func_0x00010bf2eca0(*(undefined8 *)(param_1 + 0x18));
      lVar3 = *(long *)(param_1 + 0x28);
      _CMSampleBufferGetNumSamples();
      *(long *)(param_1 + 0x48) = lVar3;
      if (lVar3 < 1) goto LAB_109059ac8;
      param_1 = 1;
    }
    _objc_release(lVar7);
  } while( true );
}



/* Entry: 109059b40; end: 109059b47; -[SCVideoTranscodingStaticSampleBufferProvider decodeNextAudioSampleBuffer] */

undefined8 FUN_109059b40(void)

{
  return 0;
}



/* Entry: 109059b48; end: 109059b4f; -[SCVideoTranscodingStaticSampleBufferProvider audioProviderStatus] */

undefined8 FUN_109059b48(void)

{
  return 0;
}



/* Entry: 109059b50; end: 109059c53; -[SCVideoTranscodingStaticSampleBufferProvider decodeNextVideoFrame:] */

undefined1  [16] FUN_109059b50(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar4 = *(long *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x38) < *(long *)(param_1 + 0x30)) {
    if (lVar4 != 0) {
      _CFRelease(lVar4);
    }
  }
  else if (lVar4 != 0) {
    if (*(long *)(param_1 + 8) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x10);
    }
    _CMTimeMake(&uStack_38,*(long *)(param_1 + 0x30),uVar2);
    *(undefined8 *)(param_1 + 0x70) = uStack_30;
    *(undefined8 *)(param_1 + 0x68) = uStack_38;
    *(undefined8 *)(param_1 + 0x78) = uStack_28;
    puVar1 = PTR__kCMTimeInvalid_110348648;
    uVar3 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(puVar1 + 0x10);
    _CMSampleBufferCreateCopyWithNewTiming
              (*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78,*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x48),param_1 + 0x50,&uStack_38);
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    goto LAB_109059c3c;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  uStack_38 = 0;
  uVar3 = 0;
  *param_3 = puVar1;
LAB_109059c3c:
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = uStack_38;
  return auVar5;
}



/* Entry: 109059c54; end: 109059c87; -[SCVideoTranscodingStaticSampleBufferProvider videoProviderStatus] */

undefined1 FUN_109059c54(long param_1)

{
  if ((*(byte *)(param_1 + 0x98) & 1) != 0) {
    return 4;
  }
  if (*(long *)(param_1 + 0x38) < *(long *)(param_1 + 0x30)) {
    return 2;
  }
  return *(long *)(param_1 + 0x28) != 0;
}



/* Entry: 109059c88; end: 109059cbf; -[SCVideoTranscodingStaticSampleBufferProvider cancelFetching] */

void FUN_109059c88(long param_1)

{
  func_0x00010bf2eca0(*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
    _CFRelease();
  }
  *(undefined1 *)(param_1 + 0x98) = 1;
  return;
}



/* Entry: 109059cc0; end: 109059cdb; -[SCVideoTranscodingStaticSampleBufferProvider avgFrameDuration] */

void FUN_109059cc0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__kCMTimeInvalid_110348648;
  uVar2 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
  param_1[1] = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
  *param_1 = uVar2;
  param_1[2] = *(undefined8 *)(puVar1 + 0x10);
  return;
}



/* Entry: 109059cdc; end: 109059cf3; -[SCVideoTranscodingStaticSampleBufferProvider timeRange] */

void FUN_109059cdc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x9c);
  uVar3 = *(undefined8 *)(param_2 + 0xb4);
  uVar2 = *(undefined8 *)(param_2 + 0xac);
  param_1[1] = *(undefined8 *)(param_2 + 0xa4);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0xbc);
  param_1[5] = *(undefined8 *)(param_2 + 0xc4);
  param_1[4] = uVar1;
  return;
}



/* Entry: 109059cf4; end: 109059d0b; -[SCVideoTranscodingStaticSampleBufferProvider setTimeRange:] */

void FUN_109059cf4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  uVar5 = param_3[4];
  *(undefined8 *)(param_1 + 0xc4) = param_3[5];
  *(undefined8 *)(param_1 + 0xbc) = uVar5;
  *(undefined8 *)(param_1 + 0xb4) = uVar4;
  *(undefined8 *)(param_1 + 0xac) = uVar3;
  *(undefined8 *)(param_1 + 0xa4) = uVar2;
  *(undefined8 *)(param_1 + 0x9c) = uVar1;
  return;
}



/* Entry: 109059d0c; end: 109059d53; -[SCVideoTranscodingStaticSampleBufferProvider .cxx_destruct] */

void FUN_109059d0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109059d54; end: 109059e27; -[SCVideoEncoderInputPixelBufferAdaptor initWithAssetWriterInput:attributes:] */

undefined1 *
FUN_109059d54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127000d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_4;
    FUN_109059e28(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___AVAssetWriterInputPixelBufferAdaptor_1126d0110;
    _objc_alloc();
    func_0x00010bff46a0();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109059e28; end: 109059f8b;  */

void FUN_109059e28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
  _objc_retain();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
  }
  func_0x00010c0df840(puVar1,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uStack_70 = *(undefined8 *)PTR__kCVPixelBufferWidthKey_11034a3d0;
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 8);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_60 = puVar1;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uStack_68 = *(undefined8 *)PTR__kCVPixelBufferHeightKey_11034a388;
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
  }
  puStack_58 = puVar2;
  _objc_release(param_1);
  func_0x00010c0df840(puVar3,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_60,&uStack_78,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf06f60(*(undefined8 *)(puVar1 + 8));
  return;
}



/* Entry: 109059f8c; end: 109059fcf; -[SCVideoEncoderInputPixelBufferAdaptor appendPixelBuffer:withPresentationTime:] */

void FUN_109059f8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_4[1];
  uStack_30 = *param_4;
  uStack_20 = param_4[2];
  func_0x00010bf06f60(*(undefined8 *)(param_1 + 8),param_2,param_3,&uStack_30);
  return;
}



/* Entry: 109059fd0; end: 10905a01b; -[SCVideoEncoderInputPixelBufferAdaptor createPixelBuffer] */

undefined8 FUN_109059fd0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0fc9c0(uVar1);
  _CVPixelBufferPoolCreatePixelBuffer(uVar2,uVar1,&uStack_28);
  return uStack_28;
}



/* Entry: 10905a01c; end: 10905a05b; -[SCVideoEncoderInputPixelBufferAdaptor createPixelBufferWithAttributes:] */

void FUN_10905a01c(long param_1)

{
  undefined8 uStack_18;
  
  func_0x00010be740e0();
  if (param_1 != 0) {
    uStack_18 = 0;
    _CVPixelBufferPoolCreatePixelBuffer
              (*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78,param_1,&uStack_18);
  }
  return;
}



/* Entry: 10905a05c; end: 10905a15b; -[SCVideoEncoderInputPixelBufferAdaptor _pixelBufferPoolWithAttributes:] */

long FUN_10905a05c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c071ae0();
  if ((int)uVar1 == 0) {
    plVar4 = (long *)(param_1 + 0x20);
    if (*plVar4 != 0) {
      uVar1 = param_3;
      func_0x00010c071ae0();
      lVar2 = *(long *)(param_1 + 0x20);
      if ((uVar1 & 1) == 0) {
        _CVPixelBufferPoolFlush(lVar2,1);
        _CVPixelBufferPoolRelease(*plVar4);
        *plVar4 = 0;
      }
      else if (lVar2 != 0) goto LAB_10905a13c;
    }
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x18) = param_3;
    _objc_release(uVar3);
    uVar1 = param_3;
    FUN_109059e28(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    _CVPixelBufferPoolCreate(uVar3,0,uVar1,plVar4);
    _objc_release(uVar1);
    lVar2 = 0;
    if ((int)uVar3 == 0) {
      lVar2 = *plVar4;
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c0fc9c0(lVar2);
  }
LAB_10905a13c:
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 10905a15c; end: 10905a197; -[SCVideoEncoderInputPixelBufferAdaptor .cxx_destruct] */

void FUN_10905a15c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10905a198; end: 10905a23f; -[SCDelayedTranscodingTask initWithPerformer:transcodingTask:] */

undefined1 *
FUN_10905a198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127000e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10905a240; end: 10905a247; -[SCDelayedTranscodingTask performer] */

undefined8 FUN_10905a240(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10905a248; end: 10905a24f; -[SCDelayedTranscodingTask transcodingTask] */

undefined8 FUN_10905a248(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10905a250; end: 10905a27f; -[SCDelayedTranscodingTask .cxx_destruct] */

void FUN_10905a250(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10905a280; end: 10905a34f; -[SCNGSMEAVCustomCompositor init] */

undefined1 * FUN_10905a280(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127000e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = &UNK_10f54a21c;
    _dispatch_queue_create(&UNK_10f54a21c,0);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = 0;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126da1e8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x58) = 0;
    puVar2 = PTR_PTR_1126dd188;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined **)((long)puVar1 + 0x78) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10905a350; end: 10905a3a3; -[SCNGSMEAVCustomCompositor dealloc] */

void FUN_10905a350(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2ebc0(*(undefined8 *)(param_1 + 0x30));
  if (*(long *)(param_1 + 0x18) != 0) {
    _CFRelease();
  }
  puStack_28 = PTR_PTR_1127000e8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10905a3a4; end: 10905a437; -[SCNGSMEAVCustomCompositor sourcePixelBufferAttributes] */

void FUN_10905a3a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
  uStack_30 = *(undefined8 *)PTR__kCVPixelBufferOpenGLESCompatibilityKey_11034a3a8;
  ppuStack_28 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1e60;
  puStack_20 = PTR____kCFBooleanTrue_11034ab68;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_28,&uStack_38,2);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar2) {
      ___stack_chk_fail();
      *(undefined8 *)(puVar1 + 0x20) = param_1;
      *(undefined8 *)(puVar1 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010c1ea8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(puVar1 + 0x38),PTR_s_setRenderSize__112658460);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10905a438; end: 10905a4cb; -[SCNGSMEAVCustomCompositor requiredPixelBufferAttributesForRenderContext] */

void FUN_10905a438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
  uStack_30 = *(undefined8 *)PTR__kCVPixelBufferOpenGLESCompatibilityKey_11034a3a8;
  ppuStack_28 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1e78;
  puStack_20 = PTR____kCFBooleanTrue_11034ab68;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_28,&uStack_38,2);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010c1ea8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar1 + 0x38),PTR_s_setRenderSize__112658460);
  return;
}



/* Entry: 10905a4cc; end: 10905a4d7; -[SCNGSMEAVCustomCompositor setRenderSize:] */

void FUN_10905a4cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x20) = param_1;
  *(undefined8 *)(param_3 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010c1ea8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x38),PTR_s_setRenderSize__112658460);
  return;
}



/* Entry: 10905a4d8; end: 10905a51b; -[SCNGSMEAVCustomCompositor setTotalDuration:] */

void FUN_10905a4d8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x6c) = param_3[2];
  *(undefined8 *)(param_1 + 100) = uVar2;
  *(undefined8 *)(param_1 + 0x5c) = uVar1;
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  uStack_20 = param_3[2];
  func_0x00010c218320(*(undefined8 *)(param_1 + 0x38),param_2,&uStack_30);
  return;
}



/* Entry: 10905a51c; end: 10905a54b; -[SCNGSMEAVCustomCompositor setExpectedVideoTrackIDs:] */

void FUN_10905a51c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10905a54c; end: 10905a553; -[SCNGSMEAVCustomCompositor setHasSegmentTransform:] */

void FUN_10905a54c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 10905a554; end: 10905a59f; -[SCNGSMEAVCustomCompositor setRenderInputImagesAsBGRA:] */

void FUN_10905a554(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_1;
  func_0x00010beb37c0();
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x40);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      return;
    }
  }
  *(char *)(param_1 + 0x81) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1ea7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_setRenderInputImagesAsBGRA__112658420,param_3);
  return;
}



/* Entry: 10905a5a0; end: 10905a5ab; -[SCNGSMEAVCustomCompositor setSessionTextureCacheEnabled:] */

void FUN_10905a5a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x82) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1fddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_setSessionTextureCacheEnabled__11265d198);
  return;
}



/* Entry: 10905a5ac; end: 10905a5b3; -[SCNGSMEAVCustomCompositor addSegmentInfoForTrackID:ngsmeInputID:timeRanges:images:] */

void FUN_10905a5ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befb2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_addSegmentInfoForTrackID_ngsmeIn_11259c660);
  return;
}



/* Entry: 10905a5b4; end: 10905a653; -[SCNGSMEAVCustomCompositor setRenderEffects:] */

void FUN_10905a5b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (lVar1 = param_3, func_0x00010bf529e0(), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10905a654;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x000107c27da4(uVar2,&puStack_60);
    _objc_release(lStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10905a654; end: 10905a68f;  */

void FUN_10905a654(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c1ea7a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x40);
  *(undefined8 *)(lVar1 + 0x40) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10905a690; end: 10905a757; -[SCNGSMEAVCustomCompositor copyLastComposedPixelBuffer] */

undefined8 FUN_10905a690(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x10905a720;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  func_0x000107c27da4(*(undefined8 *)(param_1 + 8),&puStack_70);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 10905a758; end: 10905a823; -[SCNGSMEAVCustomCompositor renderContextChanged:] */

void FUN_10905a758(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10905a7e4;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x000107c27da4(uVar1,&puStack_60);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10905a824; end: 10905a8af; -[SCNGSMEAVCustomCompositor startVideoCompositionRequest:] */

void FUN_10905a824(long param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_50 = FUN_10905a8b0;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x000107c27da4(uVar1,&puStack_60);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10905a8b0; end: 10905a8eb;  */

void FUN_10905a8b0(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010beb37c0();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be80a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__processCompositionRequestMultiT_11257dc38);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be80a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__processCompositionRequestSingle_11257dc40,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10905a8ec; end: 10905a977; -[SCNGSMEAVCustomCompositor _shouldEnableRenderPassGraphFlow] */

byte FUN_10905a8ec(long param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(lVar1 + 0x28);
    }
    _objc_retain(lVar4);
    lVar2 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    _objc_release(lVar1);
    if (lVar2 != 0) {
      bVar3 = 1;
      goto LAB_10905a95c;
    }
  }
  bVar3 = *(byte *)(param_1 + 0x58);
LAB_10905a95c:
  return bVar3 & 1;
}



/* Entry: 10905a978; end: 10905ae2b; -[SCNGSMEAVCustomCompositor _processCompositionRequestSingleTrackFlow:] */

void FUN_10905a978(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c278780();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar1);
  if (lVar2 == 0) {
    _objc_retain(0);
    uVar9 = 0;
    puVar10 = (undefined *)0x0;
  }
  else {
    uVar9 = *(ulong *)(lVar2 + 0x20);
    _objc_retain(uVar9);
    puVar10 = *(undefined **)(lVar2 + 0x18);
  }
  _objc_retain(puVar10);
  if (param_3 == (undefined *)0x0) {
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
  }
  else {
    func_0x00010bf45640(&uStack_98,param_3);
  }
  uVar12 = uVar9;
  func_0x00010bf529e0();
  if (uVar12 != 0) {
    uVar12 = 0;
    do {
      uVar3 = uVar9;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if (uVar3 == 0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_d0,uVar3);
      }
      uStack_e8 = uStack_90;
      uStack_f0 = uStack_98;
      uStack_e0 = uStack_88;
      puVar4 = &uStack_d0;
      _CMTimeRangeContainsTime(puVar4,&uStack_f0);
      if ((int)puVar4 != 0) {
LAB_10905aadc:
        puVar13 = puVar10;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar13);
        if (puVar13 == puVar5) {
          puVar13 = (undefined *)0x0;
        }
        else {
          puVar13 = puVar10;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
        }
        _objc_release(uVar3);
        goto LAB_10905ab4c;
      }
      uStack_c8 = uStack_90;
      uStack_d0 = uStack_98;
      uStack_c0 = uStack_88;
      lVar7 = param_1;
      func_0x00010be3e320();
      if ((int)lVar7 != 0) goto LAB_10905aadc;
      _objc_release(uVar3);
      uVar12 = uVar12 + 1;
      uVar3 = uVar9;
      func_0x00010bf529e0();
    } while (uVar12 < uVar3);
  }
  puVar13 = (undefined *)0x0;
LAB_10905ab4c:
  puVar5 = param_3;
  func_0x00010c247ce0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (puVar13 == (undefined *)0x0 && puVar6 == (undefined *)0x0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      func_0x00010bfafe20(param_3);
      goto LAB_10905adcc;
    }
LAB_10905ada0:
    puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfafe60(param_3);
  }
  else {
    if (puVar13 == (undefined *)0x0) {
      func_0x00010c067ec0(puVar6);
      func_0x00010c2477e0(param_3);
    }
    lVar7 = *(long *)(param_1 + 0x10);
    func_0x00010c0d8e00();
    if (lVar7 == 0) goto LAB_10905ada0;
    puVar5 = param_3;
    func_0x00010c299860();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___AVVideoCompositionInstruction_1126dd190;
    _objc_opt_class(PTR__OBJC_CLASS___AVVideoCompositionInstruction_1126dd190);
    puVar8 = puVar5;
    _objc_opt_isKindOfClass(puVar5,puVar13);
    puVar13 = puVar5;
    if (((ulong)puVar8 & 1) == 0) {
      puVar13 = (undefined *)0x0;
    }
    _objc_retain(puVar13);
    _objc_release(puVar5);
    puVar5 = puVar13;
    func_0x00010c08c380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    puVar13 = puVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_e8 = uStack_90;
    uStack_f0 = uStack_98;
    uStack_e0 = uStack_88;
    puVar5 = puVar13;
    func_0x00010bfcb740();
    _dispatch_group_create();
    _dispatch_group_enter();
    func_0x00010b691288(&uStack_d0);
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_10905ae2c;
    puStack_100 = &UNK_110966ff0;
    uStack_e8 = uStack_90;
    uStack_f0 = uStack_98;
    uStack_e0 = uStack_88;
    puStack_f8 = puVar5;
    _objc_retain(puVar5);
    func_0x00010c114c60(uVar11);
    uVar11 = *(undefined8 *)(param_1 + 8);
    puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_148 = 0xc2000000;
    pcStack_140 = FUN_10905ae34;
    puStack_138 = &UNK_110844b80;
    lStack_130 = param_1;
    lStack_120 = lVar7;
    _objc_retain(param_3);
    puStack_128 = param_3;
    func_0x000107c27d98(puVar5,uVar11,&puStack_150);
    _objc_release(puStack_128);
    _objc_release(puStack_f8);
    _objc_release(puVar5);
  }
  _objc_release(puVar13);
LAB_10905adcc:
  _objc_release(puVar6);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10905ae2c; end: 10905ae33;  */

void FUN_10905ae2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10905ae34; end: 10905ae7f;  */

void FUN_10905ae34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x18) != 0) {
    _CVPixelBufferRelease();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _CVPixelBufferRetain();
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = uVar1;
  func_0x00010bfafe20(*(undefined8 *)(param_1 + 0x28),param_2,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbbf9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CVPixelBufferRelease_11034a298)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10905ae80; end: 10905b513; -[SCNGSMEAVCustomCompositor _processCompositionRequestMultiTrackFlow:] */

void FUN_10905ae80(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  code *pcVar24;
  undefined *puStack_320;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  long lStack_288;
  ulong uStack_280;
  undefined8 *puStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _CACurrentMediaTime();
  if (param_4 == 0) {
    puStack_118 = (undefined8 *)0x0;
    uStack_120 = 0;
    uStack_110 = 0;
  }
  else {
    func_0x00010bf45640(&uStack_120,param_4);
  }
  uVar17 = param_4;
  func_0x00010c299860();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___AVVideoCompositionInstruction_1126dd190;
  _objc_opt_class(PTR__OBJC_CLASS___AVVideoCompositionInstruction_1126dd190);
  uVar4 = uVar17;
  _objc_opt_isKindOfClass(uVar17,puVar3);
  uVar1 = uVar17;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain();
  _objc_release(uVar17);
  uVar17 = uVar1;
  func_0x00010c08c380();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar17;
  func_0x00010bf529e0();
  _objc_release(uVar17);
  lVar5 = *(long *)(param_2 + 0x50);
  func_0x00010bf529e0();
  lVar6 = *(long *)PTR__kCFAllocatorDefault_11034ab78;
  _CFArrayCreateMutable(lVar6,lVar5,PTR__kCFTypeArrayCallBacks_11034ac10);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == lVar5 * 2) {
    puStack_320 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_320 = (undefined *)0x0;
  }
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  lVar14 = *(long *)(param_2 + 0x50);
  _objc_retain(lVar14);
  lVar8 = lVar14;
  func_0x00010bf52a60();
  puVar13 = PTR__CGAffineTransformIdentity_110347008;
  if (lVar8 != 0) {
    lVar15 = *plStack_150;
    uVar17 = *(ulong *)PTR__kCFNull_11034abd8;
    do {
      lVar18 = 0;
      do {
        if (*plStack_150 != lVar15) {
          _objc_enumerationMutation(lVar14);
        }
        uVar16 = *(undefined8 *)(lStack_158 + lVar18 * 8);
        func_0x00010c067ec0(uVar16);
        uVar9 = param_4;
        func_0x00010c2477e0();
        uVar10 = uVar17;
        if (uVar9 != 0) {
          uVar10 = uVar9;
        }
        _CFArrayAppendValue(lVar6,uVar10);
        func_0x00010befa120(puVar3);
        uVar19 = uVar16;
        func_0x00010c067ec0(uVar16);
        uVar10 = uVar1;
        func_0x00010c08c380((int)uVar19 * 2 + -2,uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar10;
        func_0x00010c0dfd20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        puVar21 = *(undefined8 **)(puVar13 + 8);
        uVar19 = *(undefined8 *)puVar13;
        pcVar24 = *(code **)(puVar13 + 0x18);
        uVar23 = *(undefined8 *)(puVar13 + 0x10);
        uVar22 = *(undefined8 *)(puVar13 + 0x28);
        uVar20 = *(undefined8 *)(puVar13 + 0x20);
        puStack_1b8 = puStack_118;
        uStack_1c0 = uStack_120;
        uStack_1b0 = uStack_110;
        uStack_190 = uVar19;
        puStack_188 = puVar21;
        uStack_180 = uVar23;
        pcStack_178 = pcVar24;
        uStack_170 = uVar20;
        uStack_168 = uVar22;
        func_0x00010bfcb740(uVar9);
        func_0x00010b691288(&uStack_190);
        puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7);
        _objc_release(puVar11);
        if (uVar4 == lVar5 << 1) {
          func_0x00010c067ec0(uVar16);
          uVar10 = uVar1;
          func_0x00010c08c380(uVar1);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar10;
          func_0x00010c0dfd20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar10);
          puStack_1e8 = puStack_118;
          uStack_1f0 = uStack_120;
          uStack_1e0 = uStack_110;
          uStack_1c0 = uVar19;
          puStack_1b8 = puVar21;
          uStack_1b0 = uVar23;
          pcStack_1a8 = pcVar24;
          uStack_1a0 = uVar20;
          uStack_198 = uVar22;
          func_0x00010bfcb740(uVar12);
          puStack_1e8 = puStack_1b8;
          uStack_1f0 = uStack_1c0;
          pcStack_1d8 = pcStack_1a8;
          uStack_1e0 = uStack_1b0;
          uStack_1c8 = uStack_198;
          uStack_1d0 = uStack_1a0;
          puVar11 = PTR__OBJC_CLASS___NSValue_1126afdf8;
          func_0x00010c297160(PTR__OBJC_CLASS___NSValue_1126afdf8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puStack_320);
          _objc_release(puVar11);
          _objc_release(uVar12);
        }
        _objc_release(uVar9);
        lVar18 = lVar18 + 1;
      } while (lVar8 != lVar18);
      lVar8 = lVar14;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  _objc_release(lVar14);
  puVar13 = *(undefined **)(param_2 + 0x10);
  func_0x00010c0d8e00();
  if (puVar13 == (undefined *)0x0) {
    puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfafe60(param_4);
    if (lVar6 != 0) {
      _CFRelease();
    }
  }
  else {
    puVar11 = puVar13;
    _dispatch_group_create();
    _dispatch_group_enter();
    puStack_1f8 = &uStack_190;
    uStack_190 = 0;
    uStack_180 = 0x3032000000;
    pcStack_178 = FUN_10905b514;
    uStack_170 = 0x10905b524;
    uStack_168 = 0;
    puStack_1b8 = puStack_118;
    uStack_1c0 = uStack_120;
    uStack_1b0 = uStack_110;
    if (((*(byte *)(param_2 + 0x59) & 1) == 0) && (*(char *)(param_2 + 0x80) == '\x01')) {
      puStack_1b8 = *(undefined8 **)(PTR__kCMTimeZero_110348670 + 8);
      uStack_1c0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_1b0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      *(undefined1 *)(param_2 + 0x59) = 1;
    }
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    uVar16 = *(undefined8 *)(param_2 + 0x38);
    puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_218 = 0xc2000000;
    pcStack_210 = FUN_10905b52c;
    puStack_208 = &UNK_110ad6550;
    puStack_188 = puStack_1f8;
    _objc_retain(puVar11);
    puStack_1e8 = puStack_1b8;
    uStack_1f0 = uStack_1c0;
    uStack_1e0 = uStack_1b0;
    puStack_238 = puStack_118;
    uStack_240 = uStack_120;
    uStack_230 = uStack_110;
    puStack_200 = puVar11;
    func_0x00010c12fcc0(uVar16);
    if (lVar6 != 0) {
      _CFRelease(lVar6);
    }
    uVar16 = *(undefined8 *)(param_2 + 8);
    puStack_2a8 = puVar2;
    uStack_2a0 = 0xc2000000;
    uStack_298 = 0x10905b588;
    puStack_290 = &UNK_110ad6580;
    puStack_278 = &uStack_190;
    lStack_288 = param_2;
    _objc_retain(param_4);
    puStack_250 = puStack_118;
    uStack_258 = uStack_120;
    uStack_248 = uStack_110;
    uStack_280 = param_4;
    puStack_270 = puVar13;
    uStack_268 = param_1;
    lStack_260 = lVar5;
    func_0x000107c27d98(puVar11,uVar16,&puStack_2a8);
    _objc_release(uStack_280);
    _objc_release(puStack_200);
    __Block_object_dispose(&uStack_190,8);
    _objc_release(uStack_168);
  }
  _objc_release(puVar11);
  _objc_release(puStack_320);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = 8;
  __Block_object_dispose(&uStack_190);
  __Unwind_Resume();
  *(undefined8 *)(param_4 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = 0;
  return;
}



/* Entry: 10905b514; end: 10905b52b;  */

void FUN_10905b514(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10905b52c; end: 10905b6ab;  */

void FUN_10905b52c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10905b6ac; end: 10905b873; -[SCNGSMEAVCustomCompositor _reinitializeSingleInputProcessor] */

undefined8 * FUN_10905b6ac(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined *unaff_x22;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
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
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    unaff_x22 = PTR_PTR_1126da0c8;
    _objc_alloc();
    puVar9 = (undefined8 *)PTR_PTR_1126bf4d0;
    func_0x00010c22bec0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b26c8;
    func_0x00010c22b820();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0(*(undefined8 *)(param_1 + 0x10));
    uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_b0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    uStack_c0 = 0;
    uStack_b8 = 0;
    puVar6 = &uStack_80;
    puVar4 = unaff_x22;
    puVar5 = puVar9;
    uStack_80 = uStack_b0;
    uStack_78 = uStack_a8;
    uStack_70 = uStack_a0;
    uStack_68 = uStack_98;
    uStack_60 = uStack_90;
    uStack_58 = uStack_88;
    func_0x00010c01cd40();
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar4;
    _objc_release(uVar8);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar7 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return puVar7;
    }
  }
  else {
    puVar2 = PTR_PTR_1126da130;
    _objc_alloc();
    puVar9 = (undefined8 *)PTR_PTR_1126bf4d0;
    func_0x00010c22bec0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = *(undefined8 **)(param_1 + 0x40);
    puVar3 = puVar2;
    puVar5 = puVar9;
    func_0x00010c01cd20(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    puVar7 = *(undefined8 **)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar9);
      return puVar9;
    }
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_10905b874;
  puStack_f0 = unaff_x22;
  puStack_e8 = puVar2;
  puStack_e0 = puVar9;
  lStack_d8 = param_1;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    func_0x00010bdc1120(&uStack_120,puVar6);
    uStack_168 = uStack_118;
    uStack_170 = uStack_120;
    uStack_158 = uStack_108;
    uStack_160 = uStack_110;
    uStack_148 = uStack_f8;
    uStack_150 = uStack_100;
    _CMTimeRangeGetEnd(&uStack_138,&uStack_170);
    uStack_168 = uStack_130;
    uStack_170 = uStack_138;
    uStack_160 = uStack_128;
    uStack_188 = puVar5[1];
    uStack_190 = *puVar5;
    uStack_180 = puVar5[2];
    puVar9 = &uStack_170;
    _CMTimeCompare(puVar9,&uStack_190);
    uStack_168 = *(undefined8 *)((long)puVar7 + 100);
    uStack_170 = *(undefined8 *)((long)puVar7 + 0x5c);
    uStack_160 = *(undefined8 *)((long)puVar7 + 0x6c);
    uStack_188 = puVar5[1];
    uStack_190 = *puVar5;
    uStack_180 = puVar5[2];
    puVar7 = &uStack_170;
    _CMTimeCompare(puVar7,&uStack_190);
    puVar9 = (undefined8 *)(ulong)((int)puVar9 == 0 && (int)puVar7 == 0);
  }
  _objc_release(puVar6);
  return puVar9;
}



/* Entry: 10905b874; end: 10905b95f; -[SCNGSMEAVCustomCompositor _isAtLastImageEnd:imageTimeRanges:] */

bool FUN_10905b874(long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010bdc1120(&uStack_60,param_4);
    uStack_a8 = uStack_58;
    uStack_b0 = uStack_60;
    uStack_98 = uStack_48;
    uStack_a0 = uStack_50;
    uStack_88 = uStack_38;
    uStack_90 = uStack_40;
    _CMTimeRangeGetEnd(&uStack_78,&uStack_b0);
    uStack_a8 = uStack_70;
    uStack_b0 = uStack_78;
    uStack_a0 = uStack_68;
    uStack_c8 = param_3[1];
    uStack_d0 = *param_3;
    uStack_c0 = param_3[2];
    puVar2 = &uStack_b0;
    _CMTimeCompare(puVar2,&uStack_d0);
    uStack_a8 = *(undefined8 *)(param_1 + 100);
    uStack_b0 = *(undefined8 *)(param_1 + 0x5c);
    uStack_a0 = *(undefined8 *)(param_1 + 0x6c);
    uStack_c8 = param_3[1];
    uStack_d0 = *param_3;
    uStack_c0 = param_3[2];
    puVar3 = &uStack_b0;
    _CMTimeCompare(puVar3,&uStack_d0);
    bVar1 = (int)puVar2 == 0 && (int)puVar3 == 0;
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 10905b960; end: 10905b967; -[SCNGSMEAVCustomCompositor playbackMode] */

undefined1 FUN_10905b960(long param_1)

{
  return *(undefined1 *)(param_1 + 0x80);
}



/* Entry: 10905b968; end: 10905b96f; -[SCNGSMEAVCustomCompositor setPlaybackMode:] */

void FUN_10905b968(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 10905b970; end: 10905b977; -[SCNGSMEAVCustomCompositor renderInputImagesAsBGRA] */

undefined1 FUN_10905b970(long param_1)

{
  return *(undefined1 *)(param_1 + 0x81);
}



/* Entry: 10905b978; end: 10905b97f; -[SCNGSMEAVCustomCompositor sessionTextureCacheEnabled] */

undefined1 FUN_10905b978(long param_1)

{
  return *(undefined1 *)(param_1 + 0x82);
}



/* Entry: 10905b980; end: 10905b9f7; -[SCNGSMEAVCustomCompositor .cxx_destruct] */

void FUN_10905b980(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10905b9f8; end: 10905b9ff; -[SCNGSMECompositorLogger init] */

void FUN_10905b9f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c018430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithGrapheneMetric__1125e3ae8,0);
  return;
}



/* Entry: 10905ba00; end: 10905baa7; -[SCNGSMECompositorLogger initWithGrapheneMetric:] */

undefined1 * FUN_10905ba00(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127000f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_3 == 0) {
      puVar3 = PTR_PTR_1126dd198;
      _objc_alloc_init();
      uVar2 = *(undefined8 *)((long)puVar1 + 8);
      *(undefined **)((long)puVar1 + 8) = puVar3;
    }
    else {
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)puVar1 + 8);
      *(long *)((long)puVar1 + 8) = param_3;
    }
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    *(undefined8 *)((long)puVar1 + 0x18) = 0x100000258;
    *(undefined8 *)((long)puVar1 + 0x10) = 0x708;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10905baa8; end: 10905bccf; -[SCNGSMECompositorLogger logFrameProcessedWithDurationMs:outTime:mediaCount:] */

void FUN_10905baa8(long param_1,undefined8 param_2,int param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _objc_retain(param_5);
  uStack_78 = *(undefined8 *)(param_1 + 0x18);
  uStack_80 = *(undefined8 *)(param_1 + 0x10);
  uStack_70 = *(undefined8 *)(param_1 + 0x20);
  uStack_98 = 0x100000258;
  uStack_a0 = 0x708;
  uStack_90 = 0;
  _CMTimeSubtract(&uStack_60,&uStack_80,&uStack_a0);
  uStack_78 = param_4[1];
  uStack_80 = *param_4;
  uStack_70 = param_4[2];
  puVar1 = &uStack_80;
  _CMTimeCompare(puVar1,&uStack_60);
  if ((int)puVar1 != -1) {
    uStack_58 = param_4[1];
    uStack_60 = *param_4;
    uStack_50 = param_4[2];
    uStack_78 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_80 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_70 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    puVar1 = &uStack_60;
    _CMTimeCompare(puVar1,&uStack_80);
    if (((int)puVar1 != 0) || (*(long *)(param_1 + 0x28) == 0)) {
      uStack_58 = param_4[1];
      uStack_60 = *param_4;
      uStack_50 = param_4[2];
      uStack_78 = *(undefined8 *)(param_1 + 0x18);
      uStack_80 = *(undefined8 *)(param_1 + 0x10);
      uStack_70 = *(undefined8 *)(param_1 + 0x20);
      puVar1 = &uStack_60;
      _CMTimeCompare(puVar1,&uStack_80);
      if ((int)puVar1 == 1) {
        if (*(long *)(param_1 + 0x28) != 0) {
          func_0x00010be53a00(param_1);
          uStack_78 = *(undefined8 *)(param_1 + 0x18);
          uStack_80 = *(undefined8 *)(param_1 + 0x10);
          uStack_70 = *(undefined8 *)(param_1 + 0x20);
          uStack_98 = 0x100000258;
          uStack_a0 = 0x708;
          uStack_90 = 0;
          _CMTimeAdd(&uStack_60,&uStack_80,&uStack_a0);
          *(undefined8 *)(param_1 + 0x18) = uStack_58;
          *(undefined8 *)(param_1 + 0x10) = uStack_60;
          *(undefined8 *)(param_1 + 0x20) = uStack_50;
          *(undefined8 *)(param_1 + 0x30) = 0;
        }
        lVar2 = 1;
      }
      else {
        lVar2 = *(long *)(param_1 + 0x28) + 1;
      }
      goto LAB_10905bc1c;
    }
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0x100000258;
  *(undefined8 *)(param_1 + 0x10) = 0x708;
  lVar2 = 1;
  *(undefined8 *)(param_1 + 0x30) = 0;
LAB_10905bc1c:
  *(long *)(param_1 + 0x28) = lVar2;
  *(double *)(param_1 + 0x30) = *(double *)(param_1 + 0x30) + (double)param_3;
  uStack_58 = param_4[1];
  uStack_60 = *param_4;
  uStack_50 = param_4[2];
  uStack_78 = *(undefined8 *)(param_1 + 0x18);
  uStack_80 = *(undefined8 *)(param_1 + 0x10);
  uStack_70 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = &uStack_60;
  _CMTimeCompare(puVar1,&uStack_80);
  if ((int)puVar1 == 0) {
    func_0x00010be53a00(param_1);
    uStack_78 = *(undefined8 *)(param_1 + 0x18);
    uStack_80 = *(undefined8 *)(param_1 + 0x10);
    uStack_70 = *(undefined8 *)(param_1 + 0x20);
    uStack_98 = 0x100000258;
    uStack_a0 = 0x708;
    uStack_90 = 0;
    _CMTimeAdd(&uStack_60,&uStack_80,&uStack_a0);
    *(undefined8 *)(param_1 + 0x18) = uStack_58;
    *(undefined8 *)(param_1 + 0x10) = uStack_60;
    *(undefined8 *)(param_1 + 0x20) = uStack_50;
    *(long *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  _objc_release(param_5);
  return;
}



/* Entry: 10905bcd0; end: 10905bd6f; -[SCNGSMECompositorLogger _logFrameProcessedReportingPeriodWithMediaCount:] */

void FUN_10905bcd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  
  if (*(ulong *)(param_1 + 0x28) != 0) {
    dVar1 = (double)*(ulong *)(param_1 + 0x28);
    dVar2 = *(double *)(param_1 + 0x30);
    func_0x00010c25d700(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_109068acc(*(undefined8 *)(param_1 + 8),param_3,(long)(dVar2 / dVar1));
    FUN_109068c40(*(undefined8 *)(param_1 + 8),param_3,
                  (long)(int)(100.0 - (double)(long)((dVar1 * 100.0) / 90.0)));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 10905bd70; end: 10905bd83; -[SCNGSMECompositorLogger timestampForNextReport] */

void FUN_10905bd70(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = *(undefined8 *)(param_2 + 0x18);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x20);
  return;
}



/* Entry: 10905bd84; end: 10905bd8b; -[SCNGSMECompositorLogger reportingFrameCount] */

undefined8 FUN_10905bd84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


