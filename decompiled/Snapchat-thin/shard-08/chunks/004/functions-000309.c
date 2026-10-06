/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106159c5c; end: 106159e2b; -[SCFeatureContinuousCaptureImpl _goToPreviewWithTimelinePlayback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106159c5c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar9 = (long)_DAT_112740778;
  lVar1 = *(long *)(param_1 + lVar9);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010bde59a0(param_1);
    uVar3 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c1585e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar5 = PTR__OBJC_CLASS___AVAsset_1126aff38;
    uVar3 = uVar4;
    func_0x00010bf0b7e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0b9e0(puVar5,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (puVar5 == (undefined *)0x0) {
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_68,puVar5);
    }
    uStack_78 = uStack_60;
    uStack_80 = uStack_68;
    uStack_70 = uStack_58;
    uVar10 = uStack_68;
    _CMTimeGetSeconds(&uStack_80);
    puVar6 = PTR_PTR_1126b5fb0;
    _objc_alloc(PTR_PTR_1126b5fb0);
    uVar3 = uVar4;
    func_0x00010bf0b7e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bfb6cc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0613a0(uVar10,puVar6,param_2,uVar3,0,uVar7,0,0);
    _objc_release(uVar7);
    _objc_release(uVar3);
    puVar8 = PTR_PTR_1126ae560;
    _objc_opt_new(PTR_PTR_1126ae560);
    func_0x00010bf43d60();
    func_0x00010becf2e0(param_1,param_2,6,*(undefined8 *)(param_1 + _DAT_112740768));
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
  }
  return;
}



/* Entry: 106159e2c; end: 106159e93; -[SCFeatureContinuousCaptureImpl _didAppendVideoSampleBufferAtTime:] */

void FUN_106159e2c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106159e94;
  puStack_38 = &UNK_11084e430;
  uStack_20 = param_3[1];
  uStack_28 = *param_3;
  uStack_18 = param_3[2];
  uStack_30 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  return;
}



/* Entry: 106159e94; end: 106159f9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106159e94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_68 = *(undefined8 *)(param_1 + 0x30);
  dVar3 = *(double *)(param_1 + 0x28);
  uStack_60 = *(undefined8 *)(param_1 + 0x38);
  dStack_70 = dVar3;
  _CMTimeGetSeconds(&dStack_70);
  dVar4 = dVar3;
  func_0x00010c123ea0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127407d0));
  dVar6 = *(double *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127407c0);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127407a8);
  func_0x00010bf2b240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1838c0(dVar3);
  _objc_release(uVar1);
  if ((*(ulong *)(*(long *)(param_1 + 0x20) + (long)_DAT_112740768) | 2) == 3) {
    dVar5 = dVar3 / dVar4;
    if (dVar4 <= 0.0) {
      dVar5 = dVar3;
    }
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112740788);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar5 + dVar6,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1,param_2,puVar2);
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 106159f9c; end: 10615a0e3; -[SCFeatureContinuousCaptureImpl _updateSegmentCaptureProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106159f9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  double dStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_112740778;
  lVar2 = *(long *)(param_1 + lVar7);
  func_0x00010c1581e0();
  if (lVar2 != 0) {
    uVar6 = 0;
    dVar9 = 0.0;
    do {
      lVar3 = *(long *)(param_1 + lVar7);
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      if (lVar2 == 0) {
        dStack_78 = 0.0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        func_0x00010c27c900(&uStack_90,lVar2);
      }
      uStack_a8 = uStack_70;
      dStack_b0 = dStack_78;
      uStack_a0 = uStack_68;
      dVar8 = dStack_78;
      _CMTimeGetSeconds(&dStack_b0);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      dVar9 = dVar9 + dVar8;
      func_0x00010be5dce0(param_1);
      func_0x00010c0df720(dVar9 / dVar8,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(lVar2);
      uVar6 = uVar6 + 1;
      uVar5 = *(ulong *)(param_1 + lVar7);
      func_0x00010c1581e0();
    } while (uVar6 < uVar5);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 10615a0e4; end: 10615a183; -[SCFeatureContinuousCaptureImpl _maxRecordingDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10615a0e4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_2;
  func_0x00010bebcc20();
  uVar2 = *(undefined8 *)(param_2 + _DAT_112740730);
  if ((int)lVar1 == 0) {
    func_0x00010c123da0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c276a00();
  }
  else {
    func_0x00010bf7f280();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c2420();
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 10615a184; end: 10615a187; -[SCFeatureContinuousCaptureImpl maxRecordingDuration] */

void FUN_10615a184(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5dcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__maxRecordingDuration_1125750d8);
  return;
}



/* Entry: 10615a188; end: 10615a1f7; -[SCFeatureContinuousCaptureImpl remainingCaptureDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10615a188(double param_1,long param_2)

{
  double dVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_2 + _DAT_112740778) == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x00010c276460(&uStack_48);
  }
  _CMTimeGetSeconds(&uStack_48);
  dVar1 = param_1;
  func_0x00010be5dce0(param_2);
  dVar1 = dVar1 - param_1;
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  return dVar1;
}



/* Entry: 10615a1f8; end: 10615a253; -[SCFeatureContinuousCaptureImpl didReachMaxDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10615a1f8(double param_1,long param_2)

{
  double dVar1;
  
  if (*(long *)(param_2 + _DAT_1127407d0) == 0) {
    dVar1 = 0.05;
  }
  else {
    func_0x00010c0ce520();
    dVar1 = param_1;
    if (param_1 <= 0.05) {
      dVar1 = 0.05;
    }
  }
  func_0x00010c1291e0(param_2);
  return param_1 < dVar1;
}



/* Entry: 10615a254; end: 10615a29b; -[SCFeatureContinuousCaptureImpl _snapEditorEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10615a254(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740734);
  func_0x00010c27d8a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c240920();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10615a29c; end: 10615a2cb; -[SCFeatureContinuousCaptureImpl _captureDurationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615a29c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740788);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10615a2cc; end: 10615a2fb; -[SCFeatureContinuousCaptureImpl _isCapturingObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615a2cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740784);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10615a2fc; end: 10615a5bf; -[SCFeatureContinuousCaptureImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615a2fc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127407c4,0);
  _objc_storeStrong(param_1 + _DAT_112740790,0);
  _objc_storeStrong(param_1 + _DAT_1127407e0,0);
  _objc_storeStrong(param_1 + _DAT_1127407dc,0);
  _objc_storeStrong(param_1 + _DAT_1127407b8,0);
  _objc_storeStrong(param_1 + _DAT_112740750,0);
  _objc_storeStrong(param_1 + _DAT_11274078c,0);
  _objc_storeStrong(param_1 + _DAT_112740784,0);
  _objc_storeStrong(param_1 + _DAT_112740788,0);
  _objc_storeStrong(param_1 + _DAT_1127407b4,0);
  _objc_storeStrong(param_1 + _DAT_1127407d4,0);
  _objc_storeStrong(param_1 + _DAT_1127407d0,0);
  _objc_storeStrong(param_1 + _DAT_112740778,0);
  _objc_storeStrong(param_1 + _DAT_1127407e4,0);
  _objc_destroyWeak(param_1 + _DAT_1127407bc);
  _objc_destroyWeak(param_1 + _DAT_11274079c);
  _objc_storeStrong(param_1 + _DAT_1127407a0,0);
  _objc_storeStrong(param_1 + _DAT_1127407c8,0);
  _objc_storeStrong(param_1 + _DAT_112740760,0);
  _objc_storeStrong(param_1 + _DAT_1127407a8,0);
  _objc_storeStrong(param_1 + _DAT_11274077c,0);
  _objc_storeStrong(param_1 + _DAT_112740794,0);
  _objc_storeStrong(param_1 + _DAT_112740798,0);
  _objc_destroyWeak(param_1 + _DAT_112740758);
  _objc_destroyWeak(param_1 + _DAT_112740754);
  _objc_destroyWeak(param_1 + _DAT_11274074c);
  _objc_destroyWeak(param_1 + _DAT_112740748);
  _objc_storeStrong(param_1 + _DAT_112740740,0);
  _objc_storeStrong(param_1 + _DAT_11274073c,0);
  _objc_storeStrong(param_1 + _DAT_112740738,0);
  _objc_storeStrong(param_1 + _DAT_112740734,0);
  _objc_storeStrong(param_1 + _DAT_112740730,0);
  _objc_storeStrong(param_1 + _DAT_11274072c,0);
  _objc_destroyWeak(param_1 + _DAT_112740728);
  _objc_storeStrong(param_1 + _DAT_11274071c,0);
  _objc_storeStrong(param_1 + _DAT_112740718,0);
  _objc_storeStrong(param_1 + _DAT_112740714,0);
  _objc_storeStrong(param_1 + _DAT_112740710,0);
  _objc_storeStrong(param_1 + _DAT_11274070c,0);
  _objc_storeStrong(param_1 + _DAT_112740708,0);
  _objc_storeStrong(param_1 + _DAT_112740704,0);
  _objc_storeStrong(param_1 + _DAT_112740700,0);
  _objc_storeStrong(param_1 + _DAT_1127406fc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127406f8,0);
  return;
}



/* Entry: 10615a5c0; end: 10615aa5f;  */

void FUN_10615a5c0(undefined8 *param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,ulong param_10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  double in_stack_00000000;
  
  FUN_10615aa60();
  if ((param_10 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = param_2;
    param_1[2] = param_3;
    param_1[3] = param_4;
    param_1[4] = param_5;
    param_1[5] = param_6;
    param_1[6] = param_7;
    param_1[7] = param_8;
    param_1[8] = param_9;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    param_1[0x13] = 0;
    return;
  }
  FUN_10615aa60(param_6,param_7,param_8,param_9);
  if ((param_10 & 1) != 0) {
    dVar1 = param_2;
    uVar7 = param_3;
    uVar8 = param_4;
    uVar10 = param_5;
    _CGRectIntersection();
    FUN_10615aa60();
    if ((param_10 & 1) != 0) {
      dVar9 = 1.0 / in_stack_00000000;
      if ((0x7fffffffffffffff < (ulong)in_stack_00000000 ||
          0x3fe < (long)ABS(in_stack_00000000) + 0xfff0000000000000U >> 0x35) &&
          0xffffffffffffe < (long)in_stack_00000000 - 1U) {
        dVar9 = 1.0;
      }
      dVar2 = dVar1;
      _CGRectGetMinX(dVar1,uVar7,uVar8,uVar10);
      dVar3 = param_2;
      _CGRectGetMinX(param_2,param_3,param_4,param_5);
      dVar4 = param_2;
      _CGRectGetMinX(param_2,param_3,param_4,param_5);
      dVar5 = dVar1;
      _CGRectGetMinX(dVar1,uVar7,uVar8,uVar10);
      dVar6 = ABS(dVar5);
      if (ABS(dVar5) <= ABS(dVar4)) {
        dVar6 = ABS(dVar4);
      }
      if (dVar6 <= 1.0) {
        dVar6 = 1.0;
      }
      if (dVar2 - dVar3 <= dVar9 + dVar6 * 1.7763568394002505e-15) {
        dVar2 = dVar1;
        _CGRectGetMinY(dVar1,uVar7,uVar8,uVar10);
        dVar3 = param_2;
        _CGRectGetMinY(param_2,param_3,param_4,param_5);
        dVar4 = param_2;
        _CGRectGetMinY(param_2,param_3,param_4,param_5);
        dVar5 = dVar1;
        _CGRectGetMinY(dVar1,uVar7,uVar8,uVar10);
        dVar6 = ABS(dVar5);
        if (ABS(dVar5) <= ABS(dVar4)) {
          dVar6 = ABS(dVar4);
        }
        if (dVar6 <= 1.0) {
          dVar6 = 1.0;
        }
        if (dVar2 - dVar3 <= dVar9 + dVar6 * 1.7763568394002505e-15) {
          dVar2 = param_2;
          _CGRectGetMaxX(param_2,param_3,param_4,param_5);
          dVar3 = dVar1;
          _CGRectGetMaxX(dVar1,uVar7,uVar8,uVar10);
          dVar4 = param_2;
          _CGRectGetMaxX(param_2,param_3,param_4,param_5);
          dVar5 = dVar1;
          _CGRectGetMaxX(dVar1,uVar7,uVar8,uVar10);
          dVar6 = ABS(dVar5);
          if (ABS(dVar5) <= ABS(dVar4)) {
            dVar6 = ABS(dVar4);
          }
          if (dVar6 <= 1.0) {
            dVar6 = 1.0;
          }
          if (dVar2 - dVar3 <= dVar9 + dVar6 * 1.7763568394002505e-15) {
            dVar2 = param_2;
            _CGRectGetMaxY(param_2,param_3,param_4,param_5);
            dVar3 = dVar1;
            _CGRectGetMaxY(dVar1,uVar7,uVar8,uVar10);
            dVar4 = param_2;
            _CGRectGetMaxY(param_2,param_3,param_4,param_5);
            dVar5 = dVar1;
            _CGRectGetMaxY(dVar1,uVar7,uVar8,uVar10);
            dVar6 = ABS(dVar5);
            if (ABS(dVar5) <= ABS(dVar4)) {
              dVar6 = ABS(dVar4);
            }
            if (dVar6 <= 1.0) {
              dVar6 = 1.0;
            }
            if (dVar2 - dVar3 <= dVar9 + dVar6 * 1.7763568394002505e-15) {
              FUN_10615ab5c(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_1)
              ;
              return;
            }
          }
        }
      }
      *(undefined1 *)param_1 = 1;
      *(undefined4 *)((long)param_1 + 1) = 0;
      *(undefined4 *)((long)param_1 + 4) = 0;
      param_1[1] = param_2;
      param_1[2] = param_3;
      param_1[3] = param_4;
      param_1[4] = param_5;
      param_1[5] = param_6;
      param_1[6] = param_7;
      param_1[7] = param_8;
      param_1[8] = param_9;
      param_1[9] = dVar1;
      param_1[10] = uVar7;
      param_1[0xb] = uVar8;
      param_1[0xc] = uVar10;
      param_1[0xd] = dVar1;
      param_1[0xe] = uVar7;
      param_1[0xf] = uVar8;
      param_1[0x10] = uVar10;
      param_1[0x11] = 0x4034000000000000;
      uVar8 = 0;
      uVar7 = 1;
      goto LAB_10615a9fc;
    }
  }
  *(undefined2 *)param_1 = 0x101;
  *(undefined4 *)((long)param_1 + 2) = 0;
  *(undefined2 *)((long)param_1 + 6) = 0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  param_1[5] = param_6;
  param_1[6] = param_7;
  param_1[7] = param_8;
  param_1[8] = param_9;
  param_1[9] = param_2;
  param_1[10] = param_3;
  param_1[0xb] = param_4;
  param_1[0xc] = param_5;
  param_1[0xd] = param_2;
  param_1[0xe] = param_3;
  param_1[0xf] = param_4;
  param_1[0x10] = param_5;
  param_1[0x11] = 0x4020000000000000;
  uVar8 = 1;
  uVar7 = 0;
LAB_10615a9fc:
  param_1[0x13] = uVar8;
  param_1[0x12] = uVar7;
  return;
}



/* Entry: 10615aa60; end: 10615ab5b;  */

bool FUN_10615aa60(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  double dVar2;
  
  dVar2 = param_1;
  _CGRectGetMinX();
  if ((((0x7fefffffffffffff < (ulong)ABS(dVar2)) ||
       (dVar2 = param_1, _CGRectGetMinY(param_1,param_2,param_3,param_4),
       0x7fefffffffffffff < (ulong)ABS(dVar2))) ||
      (dVar2 = param_1, _CGRectGetWidth(param_1,param_2,param_3,param_4),
      0x7fefffffffffffff < (ulong)ABS(dVar2))) ||
     ((dVar2 = param_1, _CGRectGetHeight(param_1,param_2,param_3,param_4),
      0x7fefffffffffffff < (ulong)ABS(dVar2) ||
      (dVar2 = param_1, _CGRectGetWidth(param_1,param_2,param_3,param_4), dVar2 <= 0.0)))) {
    bVar1 = false;
  }
  else {
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    bVar1 = 0.0 < param_1;
  }
  return bVar1;
}



/* Entry: 10615ab5c; end: 10615abab;  */

void FUN_10615ab5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 *param_9)

{
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  *param_9 = 1;
  *(undefined4 *)(param_9 + 1) = 0;
  *(undefined4 *)(param_9 + 4) = 0;
  *(undefined8 *)(param_9 + 8) = param_1;
  *(undefined8 *)(param_9 + 0x10) = param_2;
  *(undefined8 *)(param_9 + 0x18) = param_3;
  *(undefined8 *)(param_9 + 0x20) = param_4;
  *(undefined8 *)(param_9 + 0x28) = param_5;
  *(undefined8 *)(param_9 + 0x30) = param_6;
  *(undefined8 *)(param_9 + 0x38) = param_7;
  *(undefined8 *)(param_9 + 0x40) = param_8;
  *(undefined8 *)(param_9 + 0x50) = in_stack_00000008;
  *(undefined8 *)(param_9 + 0x48) = in_stack_00000000;
  *(undefined8 *)(param_9 + 0x58) = in_stack_00000010;
  *(undefined8 *)(param_9 + 0x60) = in_stack_00000018;
  *(undefined8 *)(param_9 + 0x68) = param_1;
  *(undefined8 *)(param_9 + 0x70) = param_2;
  *(undefined8 *)(param_9 + 0x78) = param_3;
  *(undefined8 *)(param_9 + 0x80) = param_4;
  *(undefined8 *)(param_9 + 0x88) = 0x4020000000000000;
  *(undefined8 *)(param_9 + 0x98) = 1;
  *(undefined8 *)(param_9 + 0x90) = 0;
  return;
}



/* Entry: 10615abac; end: 10615ac8b;  */

char * FUN_10615abac(char *param_1,char *param_2)

{
  char *pcVar1;
  
  if (*param_1 != *param_2) {
    return (char *)0x0;
  }
  if (param_1[1] == param_2[1]) {
    pcVar1 = param_1;
    _CGRectEqualToRect(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                       *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                       *(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                       *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
    if ((int)pcVar1 == 0) {
      return pcVar1;
    }
    _CGRectEqualToRect(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                       *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                       *(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30),
                       *(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40));
    if ((int)pcVar1 == 0) {
      return pcVar1;
    }
    _CGRectEqualToRect(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                       *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                       *(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x50),
                       *(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x60));
    if ((int)pcVar1 == 0) {
      return pcVar1;
    }
    _CGRectEqualToRect(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                       *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),
                       *(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x70),
                       *(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x80));
    if ((int)pcVar1 == 0) {
      return pcVar1;
    }
    if ((*(double *)(param_1 + 0x88) == *(double *)(param_2 + 0x88)) &&
       (*(long *)(param_1 + 0x90) == *(long *)(param_2 + 0x90))) {
      return (char *)(ulong)(*(long *)(param_1 + 0x98) == *(long *)(param_2 + 0x98));
    }
  }
  return (char *)0x0;
}



/* Entry: 10615ac8c; end: 10615af37; -[SCFeatureCoolRecordingImpl initWithCameraViewType:viewControllerLifecycleObservable:mainCameraViewControllerLifecycleEvents:recipientNameFeature:cameraHardwareResource:customAppThemeProvider:plusSubscriptionInfoProvider:cameraConfiguration:circumstanceEngine:renderTarget:ghostImageAnimationDisabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10615ac8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             byte param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126efe48;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127407ec) = param_3;
    lVar4 = (long)_DAT_1127407f0;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127407f4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127407f8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127407fc;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112740800;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112740804;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112740808;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274080c);
    *(undefined **)((long)puVar1 + (long)_DAT_11274080c) = puVar3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112740810;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112740814;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    *(byte *)((long)puVar1 + (long)_DAT_112740818) = param_13 ^ 1;
    func_0x00010bec7f20(puVar1);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274081c) = 1;
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10615af38; end: 10615af67; -[SCFeatureCoolRecordingImpl captureColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615af38(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740820);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10615af68; end: 10615b077; -[SCFeatureCoolRecordingImpl ringStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10615af68(long param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + _DAT_112740824) & 1) != 0) {
    return 0xffffffffffffffff;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112740820);
  func_0x00010bf41080();
  if (iVar1 < 0xff0000) {
    if (iVar1 < 0x52ff00) {
      if (iVar1 == 0x66ff) {
        return 3;
      }
      if (iVar1 == 0xf0ff) {
        return 2;
      }
    }
    else {
      if (iVar1 == 0x52ff00) {
        return 1;
      }
      if (iVar1 == 0xbd04ff) {
        return 4;
      }
    }
  }
  else if (iVar1 < 0xff7a00) {
    if (iVar1 == 0xff0000) {
      return 6;
    }
    if (iVar1 == 0xff01b8) {
      return 5;
    }
  }
  else {
    if (iVar1 == 0xff7a00) {
      return 7;
    }
    if (iVar1 == 0xfffc00) {
      return 0;
    }
  }
  return 8;
}



/* Entry: 10615b078; end: 10615b20f; -[SCFeatureCoolRecordingImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615b078(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112740828;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = param_3;
  _objc_release(uVar1);
  lVar5 = param_1;
  func_0x00010beb7440();
  *(char *)(param_1 + _DAT_11274082c) = (char)lVar5;
  if (((int)lVar5 != 0) && (lVar5 = (long)_DAT_112740830, *(long *)(param_1 + lVar5) == 0)) {
    puVar2 = PTR_PTR_1126c85b8;
    _objc_alloc();
    func_0x00010c0027e0();
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar1);
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c1732e0(*(undefined8 *)(param_1 + lVar5));
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  func_0x00010beaafe0(param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112740800);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6bf80(param_1);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 10615b210; end: 10615b277;  */

void FUN_10615b210(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcdb60();
  _objc_release(param_1);
  return;
}



/* Entry: 10615b278; end: 10615b3f3; -[SCFeatureCoolRecordingImpl beginObservingVideoCaptureEvents:imageCaptureEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615b278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10615b3f4;
  puStack_78 = &UNK_11084ec60;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_copyWeak(auStack_98,auStack_68);
  uVar1 = param_4;
  func_0x00010c25ff60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10615b3f4; end: 10615b57f;  */

void FUN_10615b3f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10615b580;
  puStack_70 = &UNK_11084ec30;
  _objc_copyWeak(auStack_68,param_1 + 0x20);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10615b5e0;
  puStack_98 = &UNK_11084ec30;
  _objc_copyWeak(auStack_90,param_1 + 0x20);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x10615b60c;
  puStack_c0 = &UNK_11084ec30;
  _objc_copyWeak(auStack_b8,param_1 + 0x20);
  _objc_copyWeak(auStack_e0,param_1 + 0x20);
  func_0x00010c0bd6a0(param_2);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 10615b580; end: 10615b5df;  */

void FUN_10615b580(undefined8 param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010c0ce520(param_3);
  _objc_release(param_3);
  func_0x00010be00140(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10615b5e0; end: 10615b663;  */

void FUN_10615b5e0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be09720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10615b664; end: 10615b70f;  */

void FUN_10615b664(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c17a0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10615b710; end: 10615b73b;  */

void FUN_10615b710(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be09720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10615b73c; end: 10615b9b3; -[SCFeatureCoolRecordingImpl _subscribeToObservables] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615b73c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  if (*(long *)(param_1 + _DAT_1127407ec) == 0) {
    uVar7 = *(undefined8 *)(param_1 + _DAT_1127407f8);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10615b9b4;
    puStack_78 = &UNK_11090b470;
    puVar6 = auStack_70;
    _objc_copyWeak(puVar6,auStack_68);
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + _DAT_1127407f4);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10615bb10;
    puStack_a0 = &UNK_11084e590;
    puVar6 = auStack_98;
    _objc_copyWeak(puVar6,auStack_68);
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
  }
  _objc_release(uVar7);
  _objc_destroyWeak(puVar6);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740800);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c0,auStack_68);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 10615b9b4; end: 10615baaf;  */

void FUN_10615b9b4(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10615bab0;
  puStack_60 = &UNK_1108434b0;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0c1540(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 10615bab0; end: 10615bb07;  */

void FUN_10615bab0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee94c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10615bb08; end: 10615bb0f;  */

void FUN_10615bb08(void)

{
  return;
}



/* Entry: 10615bb10; end: 10615bc13;  */

void FUN_10615bb10(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10615bc1c;
  puStack_60 = &UNK_110849200;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0c15c0(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 10615bc14; end: 10615bc1b;  */

void FUN_10615bc14(void)

{
  return;
}



/* Entry: 10615bc1c; end: 10615bc47;  */

void FUN_10615bc1c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee94c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10615bc48; end: 10615bc4b;  */

void FUN_10615bc48(void)

{
  return;
}



/* Entry: 10615bc4c; end: 10615bcbf;  */

void FUN_10615bc4c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee9500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10615bcc0; end: 10615bd37; -[SCFeatureCoolRecordingImpl _didScheduleRecordRequestWithMinimumVideoDuration:] */

void FUN_10615bcc0(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010bde9820();
  if ((int)uVar1 != 0) {
    uVar1 = param_2;
    func_0x00010bdd5260();
    if ((int)uVar1 != 0) {
      func_0x00010beb81e0(param_1 + 0.3,param_2);
    }
    uVar1 = param_2;
    func_0x00010be23fc0();
    if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beb8090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1 + 0.3,param_2,PTR_s__showBlinkingGhostWithDelay__11258b9c8);
      return;
    }
  }
  return;
}



/* Entry: 10615bd38; end: 10615bd5b; -[SCFeatureCoolRecordingImpl _endAllEffects] */

void FUN_10615bd38(undefined8 param_1)

{
  func_0x00010be35440();
                    /* WARNING: Could not recover jumptable at 0x00010be354d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideBorderView_11256aed0);
  return;
}



/* Entry: 10615bd5c; end: 10615bd6f; -[SCFeatureCoolRecordingImpl _viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615bd5c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11274081c) = 1;
  return;
}



/* Entry: 10615bd70; end: 10615bd9b; -[SCFeatureCoolRecordingImpl _viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615bd70(long param_1)

{
  func_0x00010be09720();
  *(undefined1 *)(param_1 + _DAT_11274081c) = 0;
  return;
}



/* Entry: 10615bd9c; end: 10615be57; -[SCFeatureCoolRecordingImpl _onThemeChanged:] */

void FUN_10615bd9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf30a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf000();
  _objc_release(param_3);
  return;
}



/* Entry: 10615be58; end: 10615bf07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615be58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x34);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112740820);
  *(undefined **)(*(long *)(param_1 + 0x20) + (long)_DAT_112740820) = puVar1;
  _objc_release(uVar2);
  lVar3 = (long)_DAT_112740828;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3);
  func_0x00010bf2b240(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e2d20();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3);
  func_0x00010bf2b240(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e3440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10615bf08; end: 10615c097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615bf08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112740820);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112740820) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112740828;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  func_0x00010bf2b240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e2d20();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  func_0x00010bf2b240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0e3440(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10615c098; end: 10615c1ab; -[SCFeatureCoolRecordingImpl _showBorderWithDelay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615c098(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char acStack_e0 [104];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lVar2 = (long)_DAT_112740834;
  iVar1 = (int)*(undefined8 *)(param_2 + lVar2);
  func_0x00010c12c960();
  if (*(char *)(param_2 + _DAT_11274082c) == '\x01') {
    lVar3 = (long)_DAT_112740830;
    func_0x00010c266bc0(*(undefined8 *)(param_2 + lVar3));
    if (*(long *)(param_2 + lVar3) != 0) {
      func_0x00010bf5e240(acStack_e0);
      if (acStack_e0[0] == '\x01') {
        func_0x00010beab140(uStack_78,uStack_70,uStack_68,uStack_60,uStack_58,param_2);
        func_0x00010c285fa0(uStack_78,uStack_70,uStack_68,uStack_60,uStack_58,
                            *(undefined8 *)(param_2 + lVar2));
        if (lStack_48 == 0) {
          func_0x00010c235de0(param_1,*(undefined8 *)(param_2 + lVar2));
        }
        else {
          func_0x00010c235dc0();
        }
      }
    }
    return;
  }
  func_0x000100478f84();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beb81d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,param_2,PTR_s__showBorderViewForNotchedDeviceW_11258ba18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beb81b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,PTR_s__showBorderViewForNonNotchedDevi_11258ba10);
  return;
}



/* Entry: 10615c1ac; end: 10615c223; -[SCFeatureCoolRecordingImpl _showBorderViewForNotchedDeviceWithDelay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615c1ac(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x00010bee9e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010bf51460(lVar1,param_3,*(undefined8 *)(param_2 + _DAT_112740828));
  func_0x00010beab120(param_2);
  func_0x00010c235de0(param_1,*(undefined8 *)(param_2 + _DAT_112740834));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10615c224; end: 10615c273; -[SCFeatureCoolRecordingImpl _showBorderViewForNonNotchedDeviceWithDelay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615c224(undefined8 param_1,long param_2)

{
  func_0x00010bf20c00(*(undefined8 *)(param_2 + _DAT_112740828));
  func_0x00010beab120(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c235dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,*(undefined8 *)(param_2 + _DAT_112740834),
             PTR_s_showAnimatedWithBorderRevealDela_11266b198);
  return;
}



/* Entry: 10615c274; end: 10615c2a7; -[SCFeatureCoolRecordingImpl _hideBorderView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615c274(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740834;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10615c2a8; end: 10615c2ff; -[SCFeatureCoolRecordingImpl _setupBorderViewWithFrame:] */

void FUN_10615c2a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bde9d20();
                    /* WARNING: Could not recover jumptable at 0x00010beab150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,param_4,uVar1,param_5,
             PTR_s__setupBorderViewWithFrame_corner_1125885f8);
  return;
}



/* Entry: 10615c300; end: 10615c42b; -[SCFeatureCoolRecordingImpl _setupBorderViewWithFrame:cornerRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615c300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126c85c0;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_6 + _DAT_112740800);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c123e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c014260(param_1,param_2,param_3,param_4,param_5);
  lVar7 = (long)_DAT_112740834;
  uVar6 = *(undefined8 *)(param_6 + lVar7);
  *(undefined **)(param_6 + lVar7) = puVar1;
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c21e900(*(undefined8 *)(param_6 + lVar7));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_6 + _DAT_112740828),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_6 + lVar7));
  return;
}



/* Entry: 10615c42c; end: 10615c45b; -[SCFeatureCoolRecordingImpl _applyBorderGeometry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615c42c(long param_1,undefined8 param_2,char *param_3)

{
  if ((*(long *)(param_1 + _DAT_112740834) != 0) && (*param_3 == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010c285fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_3 + 0x68),*(undefined8 *)(param_3 + 0x70),
               *(undefined8 *)(param_3 + 0x78),*(undefined8 *)(param_3 + 0x80),
               *(undefined8 *)(param_3 + 0x88),*(long *)(param_1 + _DAT_112740834),
               PTR_s_updateFrame_cornerRadius__11267f210);
    return;
  }
  return;
}



/* Entry: 10615c45c; end: 10615c813; -[SCFeatureCoolRecordingImpl _setupBlinkingGhostViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10615c45c(undefined *param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  double dVar14;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = (long)_DAT_112740838;
  puVar12 = param_1;
  if ((*(long *)(param_1 + lVar13) != 0) || (func_0x00010be23fc0(), (int)puVar12 == 0))
  goto LAB_10615c7d8;
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e42bf8);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  uVar10 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar2;
  _objc_release(uVar10);
  lVar11 = (long)_DAT_112740828;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar11),param_2,*(undefined8 *)(param_1 + lVar13));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar13),param_2,1);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar13),param_2,1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar13),param_2,0);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf34860(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar13);
  uStack_80 = uVar10;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar13);
  uStack_78 = uVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  dVar14 = 30.0;
  uVar8 = uVar6;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar10);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar2 = param_1;
  func_0x00010be43200();
  if ((int)puVar2 == 0) {
    cVar1 = param_1[_DAT_11274082c];
    uVar10 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    if (cVar1 == '\x01') {
      uVar8 = *(undefined8 *)(param_1 + _DAT_112740830);
      func_0x00010c267220();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar10;
      func_0x00010bf493c0(0x4037000000000000,uVar10,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c162480();
      goto LAB_10615c760;
    }
    uVar8 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
    uVar9 = uVar10;
    func_0x00010bf493c0(dVar14 + 23.0,uVar10,param_2,uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + _DAT_1127407f0);
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c122ee0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar10;
    func_0x00010bf493c0(0x4024000000000000,uVar10,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar4);
LAB_10615c760:
    _objc_release(uVar3);
  }
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar10);
  _objc_release();
LAB_10615c7d8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar12;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar12 + _DAT_1127407ec) == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    lVar13 = (long)_DAT_1127407f0;
    uVar9 = *(undefined8 *)(puVar12 + lVar13);
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c07be60();
    if ((int)uVar10 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      uVar3 = *(undefined8 *)(puVar12 + lVar13);
      func_0x00010bfa1820(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar3;
      func_0x00010c122ee0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar10;
      func_0x00010c074c20();
      puVar12 = (undefined *)(ulong)((uint)uVar8 ^ 1);
      _objc_release(uVar10);
      _objc_release(uVar3);
    }
    _objc_release(uVar9);
  }
  return puVar12;
}



/* Entry: 10615c814; end: 10615c8c3; -[SCFeatureCoolRecordingImpl _isRecipientViewVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10615c814(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  
  if (*(long *)(param_1 + _DAT_1127407ec) == 0) {
    uVar5 = 0;
  }
  else {
    lVar6 = (long)_DAT_1127407f0;
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c07be60();
    if ((int)uVar2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010bfa1820(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c122ee0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c074c20();
      uVar5 = (uint)uVar4 ^ 1;
      _objc_release(uVar2);
      _objc_release(uVar3);
    }
    _objc_release(uVar1);
  }
  return uVar5;
}



/* Entry: 10615c8c4; end: 10615c92b; -[SCFeatureCoolRecordingImpl _shouldUseRuntimeViewfinderGeometry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10615c8c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740808);
  func_0x00010c23c780(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c142ea0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10615c92c; end: 10615cd3f; -[SCFeatureCoolRecordingImpl _showBlinkingGhostWithDelay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615c92c(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  double dVar11;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
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
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_2 + _DAT_112740800);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1cc80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x34);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = (undefined8 *)(param_2 + _DAT_112740838);
    func_0x00010c216160(*puVar10,param_3,puVar5);
    _objc_release(puVar5);
  }
  else {
    puVar10 = (undefined8 *)(param_2 + _DAT_112740838);
    func_0x00010c216160(*puVar10,param_3,lVar4);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = (undefined *)*puVar10;
  func_0x00010c1a7f60(puVar5,param_3,0);
  if (*(char *)(param_2 + _DAT_112740818) == '\x01') {
    uStack_e8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_f0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_d8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_e0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_d0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    _CGAffineTransformScale(&uStack_c0,0x3f847ae147ae147b,0x3f847ae147ae147b,&uStack_f0);
    uStack_e8 = uStack_b8;
    uStack_f0 = uStack_c0;
    uStack_d8 = uStack_a8;
    uStack_e0 = uStack_b0;
    uStack_c8 = uStack_98;
    uStack_d0 = uStack_a0;
    func_0x00010c219960(*puVar10,param_3,&uStack_f0);
    puVar5 = PTR__OBJC_CLASS___UISpringTimingParameters_1126b6230;
    _objc_alloc();
    func_0x00010c008200(0x3fe4cccccccccccd,0x4024000000000000,0x4024000000000000);
    puVar6 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
    puStack_120 = puVar5;
    _objc_alloc();
    func_0x00010c00eb20(0x3fd3333333333333);
    puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_10615cd40;
    puStack_100 = &UNK_110842e18;
    puStack_128 = puVar6;
    lStack_f8 = param_2;
    func_0x00010bef6cc0();
    func_0x00010c24dc80(param_1,puVar6);
    puVar5 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
    _objc_opt_new(PTR__OBJC_CLASS___CAAnimationGroup_1126b5710);
    puVar6 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_3,
                        &PTR____CFConstantStringClassReference_110dbf678);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192d40(0x3fd3333333333333);
    func_0x00010c1a1180(puVar6,param_3,&PTR__OBJC_CLASS___NSConstantDoubleNumber_111184690);
    func_0x00010c216920(puVar6,param_3,&PTR__OBJC_CLASS___NSConstantDoubleNumber_1111846a0);
    uVar9 = *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_110346d78;
    puVar7 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_3,uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar6,param_3,puVar7);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_3,
                        &PTR____CFConstantStringClassReference_110dbf678);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16fd40(0x3fd3333333333333);
    dVar11 = 0.4;
    func_0x00010c192d40(0x3fd999999999999a,puVar7);
    func_0x00010c1a1180(puVar7,param_3,&PTR__OBJC_CLASS___NSConstantDoubleNumber_1111846a0);
    func_0x00010c216920(puVar7,param_3,&PTR__OBJC_CLASS___NSConstantDoubleNumber_111184690);
    puVar8 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_3,uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar7,param_3,puVar8);
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar6;
    puStack_88 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_90,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c168400(puVar5,param_3,puVar8);
    _objc_release(puVar8);
    _CACurrentMediaTime();
    func_0x00010c16fd40(param_1 + dVar11 + 1.0,puVar5);
    func_0x00010c1eabe0(0x7f800000,puVar5);
    func_0x00010c192d40(0x3ff0000000000000,puVar5);
    uVar9 = *puVar10;
    func_0x00010c08c0e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(uVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puStack_128);
    puVar5 = puStack_120;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10615cd40;
  uStack_168 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_170 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_158 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_160 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_148 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_150 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010c219960(*(undefined8 *)(*(long *)(puVar5 + 0x20) + (long)_DAT_112740838),param_3,
                      &uStack_170);
  return;
}



/* Entry: 10615cd40; end: 10615cd87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615cd40(long param_1,undefined8 param_2)

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
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112740838),param_2,
                      &uStack_40);
  return;
}



/* Entry: 10615cd88; end: 10615cddb; -[SCFeatureCoolRecordingImpl _hideBlinkingGhost] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615cd88(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740838;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar2),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 10615cddc; end: 10615ce43; -[SCFeatureCoolRecordingImpl _borderAnimationEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10615cddc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740804);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c080120();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10615ce44; end: 10615ce4b; -[SCFeatureCoolRecordingImpl _ghostIconEnabled] */

undefined8 FUN_10615ce44(void)

{
  return 1;
}



/* Entry: 10615ce4c; end: 10615ceb7; -[SCFeatureCoolRecordingImpl _currentCaptureColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615ce4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112740820;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x34);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10615ceb8; end: 10615cf27; -[SCFeatureCoolRecordingImpl _viewWithBounceAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615ceb8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740814);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29f120();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10615cf28; end: 10615cf5b; -[SCFeatureCoolRecordingImpl _coolRecordingAnimationEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10615cf28(long param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + _DAT_11274081c) == '\x01') {
    bVar1 = *(byte *)(param_1 + _DAT_112740824) ^ 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 10615cf5c; end: 10615cf93; -[SCFeatureCoolRecordingImpl _cornerRadius] */

undefined8 FUN_10615cf5c(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126b9aa0;
  func_0x00010c2351e0();
  uVar3 = 0x4034000000000000;
  iVar1 = (int)puVar2;
  if (((ulong)puVar2 & 1) == 0) {
    func_0x000100478f84(0x4034000000000000);
    uVar3 = 0x402a000000000000;
    if (iVar1 == 0) {
      uVar3 = 0x4020000000000000;
    }
  }
  return uVar3;
}



/* Entry: 10615cf94; end: 10615d0b3; -[SCFeatureCoolRecordingImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615cf94(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112740820,0);
  _objc_storeStrong(param_1 + _DAT_112740834,0);
  _objc_storeStrong(param_1 + _DAT_112740838,0);
  _objc_storeStrong(param_1 + _DAT_112740830,0);
  _objc_storeStrong(param_1 + _DAT_112740814,0);
  _objc_storeStrong(param_1 + _DAT_112740810,0);
  _objc_storeStrong(param_1 + _DAT_112740808,0);
  _objc_storeStrong(param_1 + _DAT_112740804,0);
  _objc_storeStrong(param_1 + _DAT_112740800,0);
  _objc_storeStrong(param_1 + _DAT_1127407fc,0);
  _objc_storeStrong(param_1 + _DAT_1127407f0,0);
  _objc_storeStrong(param_1 + _DAT_1127407f8,0);
  _objc_storeStrong(param_1 + _DAT_1127407f4,0);
  _objc_storeStrong(param_1 + _DAT_11274080c,0);
  _objc_storeStrong(param_1 + _DAT_11274083c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740828,0);
  return;
}



/* Entry: 10615d0b4; end: 10615d0fb; -[SCFeatureCoolRecordingLayoutObservationView didMoveToWindow] */

void FUN_10615d0b4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126efe50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_didMoveToWindow_112527020);
  func_0x00010be64960(param_1);
  return;
}



/* Entry: 10615d0fc; end: 10615d143; -[SCFeatureCoolRecordingLayoutObservationView layoutSubviews] */

void FUN_10615d0fc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126efe50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010be64960(param_1);
  return;
}



/* Entry: 10615d144; end: 10615d18b; -[SCFeatureCoolRecordingLayoutObservationView safeAreaInsetsDidChange] */

void FUN_10615d144(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126efe50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_safeAreaInsetsDidChange_11252f690);
  func_0x00010be64960(param_1);
  return;
}



/* Entry: 10615d18c; end: 10615d1a7; -[SCFeatureCoolRecordingLayoutObservationView _notifyGeometryDidChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615d18c(long param_1)

{
  if (*(long *)(param_1 + _DAT_112740840) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010615d1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + _DAT_112740840) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10615d1a8; end: 10615d1b7; -[SCFeatureCoolRecordingLayoutObservationView geometryDidChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10615d1a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112740840);
}



/* Entry: 10615d1b8; end: 10615d1c3; -[SCFeatureCoolRecordingLayoutObservationView setGeometryDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615d1b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10615d1c4; end: 10615d1d7; -[SCFeatureCoolRecordingLayoutObservationView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615d1c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740840,0);
  return;
}



/* Entry: 10615d1d8; end: 10615d277; -[SCFeatureCoolRecordingLayoutController initWithContainerView:] */

undefined1 *
FUN_10615d1d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_7);
  puStack_28 = PTR_PTR_1126efe58;
  uStack_30 = param_5;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_7);
    func_0x00010bf20c00(param_7);
    *(undefined8 *)((long)puVar1 + 0x50) = param_1;
    *(undefined8 *)((long)puVar1 + 0x58) = param_2;
    *(undefined8 *)((long)puVar1 + 0x60) = param_3;
    *(undefined8 *)((long)puVar1 + 0x68) = param_4;
    func_0x00010bf20c00(param_7);
    *(undefined8 *)((long)puVar1 + 0x70) = param_1;
    *(undefined8 *)((long)puVar1 + 0x78) = param_2;
    *(undefined8 *)((long)puVar1 + 0x80) = param_3;
    *(undefined8 *)((long)puVar1 + 0x88) = param_4;
    func_0x00010be3cda0(puVar1);
    func_0x00010c266bc0(puVar1);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 10615d278; end: 10615d29f; -[SCFeatureCoolRecordingLayoutController systemSafeAreaGuide] */

void FUN_10615d278(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10615d2a0; end: 10615d2cb; -[SCFeatureCoolRecordingLayoutController currentBorderGeometry] */

void FUN_10615d2a0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0xf0);
  uVar3 = *(undefined8 *)(param_2 + 0x108);
  uVar2 = *(undefined8 *)(param_2 + 0x100);
  param_1[0xd] = *(undefined8 *)(param_2 + 0xf8);
  param_1[0xc] = uVar1;
  param_1[0xf] = uVar3;
  param_1[0xe] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x110);
  uVar3 = *(undefined8 *)(param_2 + 0x128);
  uVar2 = *(undefined8 *)(param_2 + 0x120);
  param_1[0x11] = *(undefined8 *)(param_2 + 0x118);
  param_1[0x10] = uVar1;
  param_1[0x13] = uVar3;
  param_1[0x12] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0xb0);
  uVar3 = *(undefined8 *)(param_2 + 200);
  uVar2 = *(undefined8 *)(param_2 + 0xc0);
  param_1[5] = *(undefined8 *)(param_2 + 0xb8);
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0xd0);
  uVar3 = *(undefined8 *)(param_2 + 0xe8);
  uVar2 = *(undefined8 *)(param_2 + 0xe0);
  param_1[9] = *(undefined8 *)(param_2 + 0xd8);
  param_1[8] = uVar1;
  param_1[0xb] = uVar3;
  param_1[10] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  uVar3 = *(undefined8 *)(param_2 + 0xa8);
  uVar2 = *(undefined8 *)(param_2 + 0xa0);
  param_1[1] = *(undefined8 *)(param_2 + 0x98);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Entry: 10615d2cc; end: 10615d2e3; -[SCFeatureCoolRecordingLayoutController borderGeometryDidChange] */

void FUN_10615d2cc(long param_1)

{
  _objc_retainBlock(*(undefined8 *)(param_1 + 0x130));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10615d2e4; end: 10615d313; -[SCFeatureCoolRecordingLayoutController setBorderGeometryDidChange:] */

void FUN_10615d2e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10615d314; end: 10615d3af; -[SCFeatureCoolRecordingLayoutController synchronizeLayout] */

void FUN_10615d314(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x13b) & 1) != 0) {
    return;
  }
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      func_0x00010beca0a0(param_1,param_2,lVar1);
    }
    else {
      func_0x00010beca120(param_1,param_2,lVar1,lVar2);
      func_0x00010beca040(param_1,param_2,lVar1,lVar2);
      *(undefined1 *)(param_1 + 0x13a) = 1;
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10615d3b0; end: 10615d3b3; -[SCFeatureCoolRecordingLayoutController invalidate] */

void FUN_10615d3b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__invalidate_11256cf68);
  return;
}



/* Entry: 10615d3b4; end: 10615d3f7; -[SCFeatureCoolRecordingLayoutController dealloc] */

void FUN_10615d3b4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be3d720();
  puStack_28 = PTR_PTR_1126efe58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10615d3f8; end: 10615d67f; -[SCFeatureCoolRecordingLayoutController _synchronizeSystemSafeAreaForContainerView:window:] */

void FUN_10615d3f8(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,ulong param_8)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010c148fc0(param_8);
  dVar3 = param_1;
  dVar7 = param_2;
  dVar9 = param_3;
  dVar11 = param_4;
  func_0x00010bf20c00(param_8);
  dVar3 = param_2 + dVar3;
  dVar7 = param_1 + dVar7;
  dVar9 = dVar9 - (param_2 + param_4);
  dVar11 = dVar11 - (param_1 + param_3);
  func_0x00010bf513e0(param_7);
  dVar4 = dVar3;
  dVar8 = dVar7;
  dVar10 = dVar9;
  dVar12 = dVar11;
  func_0x00010bf20c00(param_7);
  _objc_release(param_7);
  if (*(char *)(param_5 + 0x138) == '\x01') {
    uVar1 = param_5 + 0x10;
    _objc_loadWeakRetained();
    if ((param_8 == uVar1) &&
       (uVar2 = uVar1,
       _CGRectEqualToRect(dVar4,dVar8,dVar10,dVar12,*(undefined8 *)(param_5 + 0x50),
                          *(undefined8 *)(param_5 + 0x58),*(undefined8 *)(param_5 + 0x60),
                          *(undefined8 *)(param_5 + 0x68)), (uVar2 & 1) != 0)) {
      _CGRectEqualToRect(dVar3,dVar7,dVar9,dVar11,*(undefined8 *)(param_5 + 0x70),
                         *(undefined8 *)(param_5 + 0x78),*(undefined8 *)(param_5 + 0x80),
                         *(undefined8 *)(param_5 + 0x88));
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) goto LAB_10615d658;
    }
    else {
      _objc_release(uVar1);
    }
  }
  dVar5 = dVar3;
  _CGRectGetMinY(dVar3,dVar7,dVar9,dVar11);
  dVar6 = dVar4;
  _CGRectGetMinY(dVar4,dVar8,dVar10,dVar12);
  func_0x00010c181140(dVar5 - dVar6,*(undefined8 *)(param_5 + 0x28));
  dVar5 = dVar3;
  _CGRectGetMinX(dVar3,dVar7,dVar9,dVar11);
  dVar6 = dVar4;
  _CGRectGetMinX(dVar4,dVar8,dVar10,dVar12);
  func_0x00010c181140(dVar5 - dVar6,*(undefined8 *)(param_5 + 0x30));
  dVar5 = dVar3;
  _CGRectGetMaxY(dVar3,dVar7,dVar9,dVar11);
  dVar6 = dVar4;
  _CGRectGetMaxY(dVar4,dVar8,dVar10,dVar12);
  func_0x00010c181140(dVar5 - dVar6,*(undefined8 *)(param_5 + 0x38));
  dVar5 = dVar3;
  _CGRectGetMaxX(dVar3,dVar7,dVar9,dVar11);
  dVar6 = dVar4;
  _CGRectGetMaxX(dVar4,dVar8,dVar10,dVar12);
  func_0x00010c181140(dVar5 - dVar6,*(undefined8 *)(param_5 + 0x40));
  _objc_storeWeak(param_5 + 0x10,param_8);
  *(double *)(param_5 + 0x50) = dVar4;
  *(double *)(param_5 + 0x58) = dVar8;
  *(double *)(param_5 + 0x60) = dVar10;
  *(double *)(param_5 + 0x68) = dVar12;
  *(double *)(param_5 + 0x70) = dVar3;
  *(double *)(param_5 + 0x78) = dVar7;
  *(double *)(param_5 + 0x80) = dVar9;
  *(double *)(param_5 + 0x88) = dVar11;
  *(undefined1 *)(param_5 + 0x138) = 1;
LAB_10615d658:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 10615d680; end: 10615d737; -[SCFeatureCoolRecordingLayoutController _synchronizeDetachedBorderGeometryForContainerView:] */

void FUN_10615d680(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
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
  if (*(char *)(param_1 + 0x13a) == '\x01') {
    *(undefined1 *)(param_1 + 0x13a) = 0;
  }
  else if ((*(byte *)(param_1 + 0x139) & 1) == 0) {
    func_0x00010bf20c00(param_3);
    FUN_10615a5c0(&uStack_d0);
    uStack_108 = uStack_68;
    uStack_110 = uStack_70;
    uStack_f8 = uStack_58;
    uStack_100 = uStack_60;
    uStack_e8 = uStack_48;
    uStack_f0 = uStack_50;
    uStack_d8 = uStack_38;
    uStack_e0 = uStack_40;
    uStack_148 = uStack_a8;
    uStack_150 = uStack_b0;
    uStack_138 = uStack_98;
    uStack_140 = uStack_a0;
    uStack_128 = uStack_88;
    uStack_130 = uStack_90;
    uStack_118 = uStack_78;
    uStack_120 = uStack_80;
    uStack_168 = uStack_c8;
    uStack_170 = uStack_d0;
    uStack_158 = uStack_b8;
    uStack_160 = uStack_c0;
    func_0x00010bdcdb80(param_1,param_2,&uStack_170);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10615d738; end: 10615d893; -[SCFeatureCoolRecordingLayoutController _synchronizeBorderGeometryForContainerView:window:] */

void FUN_10615d738(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_1c0 [8];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  char cStack_11f;
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
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  uVar1 = param_7;
  func_0x00010bf2bb60(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cd20();
  uVar2 = param_1;
  uVar3 = param_2;
  uVar4 = param_3;
  uVar5 = param_4;
  _objc_release(uVar1);
  func_0x00010bf20c00(param_7);
  _objc_release(param_7);
  uVar1 = param_8;
  func_0x00010c150e00(param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  func_0x00010c14e120(uVar1);
  FUN_10615a5c0(&uStack_120,uVar2,uVar3,uVar4,uVar5,param_1,param_2,param_3,param_4);
  _objc_release(uVar1);
  if ((cStack_11f != '\x01') || ((*(byte *)(param_5 + 0x139) & 1) == 0)) {
    uStack_158 = uStack_b8;
    uStack_160 = uStack_c0;
    uStack_148 = uStack_a8;
    uStack_150 = uStack_b0;
    uStack_138 = uStack_98;
    uStack_140 = uStack_a0;
    uStack_128 = uStack_88;
    uStack_130 = uStack_90;
    uStack_198 = uStack_f8;
    uStack_1a0 = uStack_100;
    uStack_188 = uStack_e8;
    uStack_190 = uStack_f0;
    uStack_178 = uStack_d8;
    uStack_180 = uStack_e0;
    uStack_168 = uStack_c8;
    uStack_170 = uStack_d0;
    uStack_1b8 = uStack_118;
    uStack_1a8 = uStack_108;
    uStack_1b0 = uStack_110;
    func_0x00010bdcdb80(param_5,param_6,auStack_1c0);
  }
  return;
}



/* Entry: 10615d894; end: 10615d99f; -[SCFeatureCoolRecordingLayoutController _applyBorderGeometryIfChanged:] */

void FUN_10615d894(long param_1,undefined8 param_2,char *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*param_3 == '\x01') {
    uStack_68 = *(undefined8 *)(param_3 + 0x68);
    uStack_70 = *(undefined8 *)(param_3 + 0x60);
    uStack_58 = *(undefined8 *)(param_3 + 0x78);
    uStack_60 = *(undefined8 *)(param_3 + 0x70);
    uStack_48 = *(undefined8 *)(param_3 + 0x88);
    uStack_50 = *(undefined8 *)(param_3 + 0x80);
    uStack_38 = *(undefined8 *)(param_3 + 0x98);
    uStack_40 = *(undefined8 *)(param_3 + 0x90);
    uStack_a8 = *(undefined8 *)(param_3 + 0x28);
    uStack_b0 = *(undefined8 *)(param_3 + 0x20);
    uStack_98 = *(undefined8 *)(param_3 + 0x38);
    uStack_a0 = *(undefined8 *)(param_3 + 0x30);
    uStack_88 = *(undefined8 *)(param_3 + 0x48);
    uStack_90 = *(undefined8 *)(param_3 + 0x40);
    uStack_78 = *(undefined8 *)(param_3 + 0x58);
    uStack_80 = *(undefined8 *)(param_3 + 0x50);
    uStack_c8 = *(undefined8 *)(param_3 + 8);
    uStack_d0 = *(undefined8 *)param_3;
    uStack_b8 = *(undefined8 *)(param_3 + 0x18);
    uStack_c0 = *(undefined8 *)(param_3 + 0x10);
    uStack_108 = *(undefined8 *)(param_1 + 0xf8);
    uStack_110 = *(undefined8 *)(param_1 + 0xf0);
    uStack_f8 = *(undefined8 *)(param_1 + 0x108);
    uStack_100 = *(undefined8 *)(param_1 + 0x100);
    uStack_e8 = *(undefined8 *)(param_1 + 0x118);
    uStack_f0 = *(undefined8 *)(param_1 + 0x110);
    uStack_d8 = *(undefined8 *)(param_1 + 0x128);
    uStack_e0 = *(undefined8 *)(param_1 + 0x120);
    uStack_148 = *(undefined8 *)(param_1 + 0xb8);
    uStack_150 = *(undefined8 *)(param_1 + 0xb0);
    uStack_138 = *(undefined8 *)(param_1 + 200);
    uStack_140 = *(undefined8 *)(param_1 + 0xc0);
    uStack_128 = *(undefined8 *)(param_1 + 0xd8);
    uStack_130 = *(undefined8 *)(param_1 + 0xd0);
    uStack_118 = *(undefined8 *)(param_1 + 0xe8);
    uStack_120 = *(undefined8 *)(param_1 + 0xe0);
    uStack_168 = *(undefined8 *)(param_1 + 0x98);
    uStack_170 = *(undefined8 *)(param_1 + 0x90);
    uStack_158 = *(undefined8 *)(param_1 + 0xa8);
    uStack_160 = *(undefined8 *)(param_1 + 0xa0);
    puVar1 = &uStack_d0;
    FUN_10615abac(puVar1,&uStack_170);
    if (((ulong)puVar1 & 1) == 0) {
      uVar3 = *(undefined8 *)param_3;
      uVar5 = *(undefined8 *)(param_3 + 0x18);
      uVar4 = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)(param_1 + 0x90) = uVar3;
      *(undefined8 *)(param_1 + 0xa8) = uVar5;
      *(undefined8 *)(param_1 + 0xa0) = uVar4;
      uVar4 = *(undefined8 *)(param_3 + 0x28);
      uVar3 = *(undefined8 *)(param_3 + 0x20);
      uVar6 = *(undefined8 *)(param_3 + 0x38);
      uVar5 = *(undefined8 *)(param_3 + 0x30);
      uVar7 = *(undefined8 *)(param_3 + 0x40);
      uVar9 = *(undefined8 *)(param_3 + 0x58);
      uVar8 = *(undefined8 *)(param_3 + 0x50);
      *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_3 + 0x48);
      *(undefined8 *)(param_1 + 0xd0) = uVar7;
      *(undefined8 *)(param_1 + 0xe8) = uVar9;
      *(undefined8 *)(param_1 + 0xe0) = uVar8;
      *(undefined8 *)(param_1 + 0xb8) = uVar4;
      *(undefined8 *)(param_1 + 0xb0) = uVar3;
      *(undefined8 *)(param_1 + 200) = uVar6;
      *(undefined8 *)(param_1 + 0xc0) = uVar5;
      uVar4 = *(undefined8 *)(param_3 + 0x68);
      uVar3 = *(undefined8 *)(param_3 + 0x60);
      uVar6 = *(undefined8 *)(param_3 + 0x78);
      uVar5 = *(undefined8 *)(param_3 + 0x70);
      uVar7 = *(undefined8 *)(param_3 + 0x80);
      uVar9 = *(undefined8 *)(param_3 + 0x98);
      uVar8 = *(undefined8 *)(param_3 + 0x90);
      *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_3 + 0x88);
      *(undefined8 *)(param_1 + 0x110) = uVar7;
      *(undefined8 *)(param_1 + 0x128) = uVar9;
      *(undefined8 *)(param_1 + 0x120) = uVar8;
      *(undefined8 *)(param_1 + 0xf8) = uVar4;
      *(undefined8 *)(param_1 + 0xf0) = uVar3;
      *(undefined8 *)(param_1 + 0x108) = uVar6;
      *(undefined8 *)(param_1 + 0x100) = uVar5;
      *(byte *)(param_1 + 0x139) = param_3[1] ^ 1;
      lVar2 = *(long *)(param_1 + 0x130);
      if (lVar2 != 0) {
        uStack_68 = *(undefined8 *)(param_3 + 0x68);
        uStack_70 = *(undefined8 *)(param_3 + 0x60);
        uStack_58 = *(undefined8 *)(param_3 + 0x78);
        uStack_60 = *(undefined8 *)(param_3 + 0x70);
        uStack_48 = *(undefined8 *)(param_3 + 0x88);
        uStack_50 = *(undefined8 *)(param_3 + 0x80);
        uStack_38 = *(undefined8 *)(param_3 + 0x98);
        uStack_40 = *(undefined8 *)(param_3 + 0x90);
        uStack_a8 = *(undefined8 *)(param_3 + 0x28);
        uStack_b0 = *(undefined8 *)(param_3 + 0x20);
        uStack_98 = *(undefined8 *)(param_3 + 0x38);
        uStack_a0 = *(undefined8 *)(param_3 + 0x30);
        uStack_88 = *(undefined8 *)(param_3 + 0x48);
        uStack_90 = *(undefined8 *)(param_3 + 0x40);
        uStack_78 = *(undefined8 *)(param_3 + 0x58);
        uStack_80 = *(undefined8 *)(param_3 + 0x50);
        uStack_c8 = *(undefined8 *)(param_3 + 8);
        uStack_d0 = *(undefined8 *)param_3;
        uStack_b8 = *(undefined8 *)(param_3 + 0x18);
        uStack_c0 = *(undefined8 *)(param_3 + 0x10);
        (**(code **)(lVar2 + 0x10))(lVar2,&uStack_d0);
      }
    }
  }
  return;
}



/* Entry: 10615d9a0; end: 10615de73; -[SCFeatureCoolRecordingLayoutController _installOwnedLayoutItemsInContainerView:] */

void FUN_10615d9a0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar6);
  func_0x00010c1a99e0(*(undefined8 *)(param_1 + 0x18));
  func_0x00010bef9680(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c274200(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  _objc_release(uVar7);
  _objc_release(lVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c08de00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  _objc_release(uVar7);
  _objc_release(lVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf1ff80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  _objc_release(uVar7);
  _objc_release(lVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c2793a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  _objc_release(uVar7);
  _objc_release(lVar3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126c85c8;
  _objc_opt_new();
  puVar8 = (undefined8 *)(param_1 + 0x20);
  uVar6 = *puVar8;
  *puVar8 = puVar1;
  _objc_release(uVar6);
  func_0x00010c219b60(*puVar8);
  func_0x00010c21e900(*puVar8);
  func_0x00010c1af000(*puVar8);
  func_0x00010c160f00(*puVar8);
  func_0x00010c066fc0(param_3);
  uVar2 = *puVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c274200(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(uVar2);
  uVar7 = *puVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c08de00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(uVar7);
  uVar4 = *puVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf1ff80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(uVar4);
  uVar5 = *puVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c2793a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(uVar5);
  uStack_a8 = *(undefined8 *)(param_1 + 0x28);
  uStack_98 = *(undefined8 *)(param_1 + 0x38);
  uStack_a0 = *(undefined8 *)(param_1 + 0x30);
  uStack_90 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar6;
  uStack_80 = uVar2;
  uStack_78 = uVar7;
  uStack_70 = uVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = puVar1;
  _objc_release(uVar5);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_initWeak(auStack_b0,param_1);
  _objc_copyWeak(auStack_b8,auStack_b0);
  func_0x00010c1a2e20(*puVar8);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
  __Unwind_Resume(param_3);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010c266bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10615de74; end: 10615de9f;  */

void FUN_10615de74(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c266bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10615dea0; end: 10615e02b; -[SCFeatureCoolRecordingLayoutController _invalidate] */

void FUN_10615dea0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((*(byte *)(param_1 + 0x13b) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x13b) = 1;
    uVar1 = *(undefined8 *)(param_1 + 0x130);
    *(undefined8 *)(param_1 + 0x130) = 0;
    _objc_release(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar5);
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained();
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10615e02c;
    puStack_68 = &UNK_11084c4a0;
    uStack_60 = uVar3;
    uStack_58 = uVar4;
    uStack_50 = uVar5;
    lStack_48 = lVar2;
    _objc_retain(lVar2);
    _objc_retain(uVar5);
    _objc_retain(uVar4);
    _objc_retain(uVar3);
    func_0x00010c0f88c0(uVar1,param_2,&puStack_80);
    _objc_release(uVar1);
    _objc_release(lStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(lVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 10615e02c; end: 10615e0ab;  */

void FUN_10615e02c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c1a2e20(*(undefined8 *)(param_1 + 0x20),param_2,0);
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c0f0780();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x38);
  _objc_release();
  if (lVar1 != lVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_removeLayoutGuide__112628d90,
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10615e0ac; end: 10615e133; -[SCFeatureCoolRecordingLayoutController .cxx_destruct] */

void FUN_10615e0ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10615e134; end: 10615e2a3; -[SCFeatureCoolRecordingBorderView initWithFrame:cornerRadius:theme:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10615e134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126efe60;
  puVar1 = &uStack_70;
  uStack_70 = param_6;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112740888) = param_5;
    _objc_retain(puVar1);
    _objc_retain(puVar1);
    _objc_retain(puVar1);
    func_0x00010c0befc0(param_8);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_8);
  return puVar1;
}



/* Entry: 10615e2a4; end: 10615e2fb;  */

void FUN_10615e2a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x34);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3ab60(*(undefined8 *)(param_1 + 0x28),uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10615e2fc; end: 10615e323;  */

void FUN_10615e2fc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3ab70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             PTR_s__initWithColor_cornerRadius__11256c478,param_2);
  return;
}



/* Entry: 10615e324; end: 10615e3df; -[SCFeatureCoolRecordingBorderView _initWithColor:cornerRadius:] */

void FUN_10615e324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1);
  _objc_release(uVar1);
  _objc_retainAutorelease(param_4);
  func_0x00010bdc0fe0();
  _objc_release(param_4);
  uVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar1);
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x4018000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10615e3e0; end: 10615e64f; -[SCFeatureCoolRecordingBorderView _initWithGradient:cornerRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615e3e0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  uVar6 = param_1;
  _objc_retain(param_5);
  _objc_opt_new();
  lVar5 = (long)_DAT_11274088c;
  uVar3 = *(undefined8 *)(param_3 + lVar5);
  *(undefined **)(param_3 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010bf20c00(param_3);
  func_0x00010c19f0e0(*(undefined8 *)(param_3 + lVar5));
  uVar3 = param_5;
  func_0x00010c27dd80(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0(*(undefined8 *)(param_3 + lVar5));
  _objc_release(uVar3);
  uVar3 = param_5;
  func_0x00010bf416c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x000100504554();
  func_0x00010c17eb60(*(undefined8 *)(param_3 + lVar5));
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = param_5;
  func_0x00010c09f9c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bff00(*(undefined8 *)(param_3 + lVar5));
  _objc_release(uVar3);
  func_0x00010c24fec0(param_5);
  func_0x00010c209760(*(undefined8 *)(param_3 + lVar5));
  func_0x00010bf95080(param_5);
  _objc_release(param_5);
  func_0x00010c196020(uVar6,param_2,*(undefined8 *)(param_3 + lVar5));
  func_0x00010c1842e0(param_1,*(undefined8 *)(param_3 + lVar5));
  func_0x00010c1c2d20(*(undefined8 *)(param_3 + lVar5));
  puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  _objc_opt_new();
  lVar4 = (long)_DAT_112740890;
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  *(undefined **)(param_3 + lVar4) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(param_3);
  func_0x00010bf19a00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(*(undefined8 *)(param_3 + lVar4));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(*(undefined8 *)(param_3 + lVar4));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c20e8e0(*(undefined8 *)(param_3 + lVar4));
  _objc_release(puVar1);
  func_0x00010c1bdd00(0x4028000000000000,*(undefined8 *)(param_3 + lVar4));
  func_0x00010c1c2c00(*(undefined8 *)(param_3 + lVar5));
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10615e650; end: 10615e667;  */

void FUN_10615e650(undefined8 param_1,undefined8 param_2)

{
  _objc_retainAutorelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10615e668; end: 10615e6f7; -[SCFeatureCoolRecordingBorderView updateFrame:cornerRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615e668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4,param_6);
  *(undefined8 *)(param_6 + _DAT_112740888) = param_5;
  func_0x00010beca0e0(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bf42770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___CATransaction_1126b5718,PTR_s_commit_1125ae380);
  return;
}



/* Entry: 10615e6f8; end: 10615e7f3; -[SCFeatureCoolRecordingBorderView _synchronizeLayerGeometry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615e6f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = (long)_DAT_112740888;
  uVar5 = *(undefined8 *)(param_1 + lVar4);
  lVar3 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(uVar5);
  _objc_release(lVar3);
  lVar3 = (long)_DAT_11274088c;
  if (*(long *)(param_1 + lVar3) != 0) {
    func_0x00010bf20c00(param_1);
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar3));
    func_0x00010c1842e0(*(undefined8 *)(param_1 + lVar4),*(undefined8 *)(param_1 + lVar3));
    func_0x00010bf20c00(param_1);
    lVar3 = (long)_DAT_112740890;
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar3));
    func_0x00010c1bdd00(0x4028000000000000,*(undefined8 *)(param_1 + lVar3));
    puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf20c00(param_1);
    func_0x00010bf19a00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    func_0x00010c1d9820(*(undefined8 *)(param_1 + lVar3),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10615e7f4; end: 10615e87f; -[SCFeatureCoolRecordingBorderView showAnimatedWithFadeDelay:] */

void FUN_10615e7f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010c1677c0(0);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10615e880;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_2;
  func_0x00010bf03440(0x3fb999999999999a,param_1,PTR__OBJC_CLASS___UIView_1126aec20,param_3,0x30000,
                      &puStack_58,0);
  return;
}



/* Entry: 10615e880; end: 10615e88b;  */

void FUN_10615e880(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10615e88c; end: 10615ea9f; -[SCFeatureCoolRecordingBorderView showAnimatedWithBorderRevealDelay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615e88c(double param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  
  if (*(long *)(param_2 + _DAT_11274088c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c235df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,param_2,PTR_s_showAnimatedWithFadeDelay__11266b1a0);
    return;
  }
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
  _objc_retainAutoreleasedReturnValue();
  dVar6 = 0.2;
  dVar5 = dVar6;
  func_0x00010c192d40(0x3fc999999999999a);
  puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar1);
  _objc_release(puVar2);
  func_0x00010c1a1180(puVar1);
  func_0x00010c216920(puVar1);
  _CACurrentMediaTime();
  func_0x00010c16fd40(param_1 + dVar5,puVar1);
  lVar3 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(lVar3);
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d40(0x3fc999999999999a);
  puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar2);
  _objc_release(puVar4);
  func_0x00010c1a1180(puVar2);
  func_0x00010c216920(puVar2);
  _CACurrentMediaTime();
  func_0x00010c16fd40(param_1 + dVar6,puVar2);
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(param_2);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10615eaa0; end: 10615eadf; -[SCFeatureCoolRecordingBorderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615eaa0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112740890,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274088c,0);
  return;
}



/* Entry: 10615eae0; end: 10615eb8b; -[SCFeatureDefaultNGSBarImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615eae0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_1 + _DAT_1127408a0);
  func_0x00010c0ce100();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c231360();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    return;
  }
  param_1 = param_1 + _DAT_1127408a4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c136e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


