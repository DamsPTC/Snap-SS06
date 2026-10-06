/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1061540d0; end: 106154117;  */

void FUN_1061540d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be78480();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106154118; end: 1061541ff; -[SCFeatureContinuousCaptureImpl _autoEnableHandsFreeForSpotlightCreateIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106154118(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)_DAT_11274079c;
  lVar3 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if ((((lVar3 != 0) && (*(long *)(param_1 + _DAT_1127407a0) != 0)) &&
      (*(long *)(param_1 + _DAT_112740744) == 0xd)) &&
     ((*(byte *)(param_1 + _DAT_1127407a4) & 1) == 0)) {
    lVar3 = (long)_DAT_11274073c;
    puVar1 = PTR_PTR_1126b9b20;
    func_0x00010c2904c0(PTR_PTR_1126b9b20,param_2,*(undefined8 *)(param_1 + lVar3));
    if (((((ulong)puVar1 & 1) == 0) &&
        (puVar1 = PTR_PTR_1126b9b20,
        func_0x00010c0e9a80(PTR_PTR_1126b9b20,param_2,*(undefined8 *)(param_1 + lVar3)),
        ((ulong)puVar1 & 1) == 0)) &&
       (puVar1 = PTR_PTR_1126b9b20,
       func_0x00010c0e9aa0(PTR_PTR_1126b9b20,param_2,*(undefined8 *)(param_1 + lVar3)),
       (int)puVar1 == 0)) {
      return;
    }
    param_1 = param_1 + lVar2;
    _objc_loadWeakRetained(param_1);
    func_0x00010c216f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106154200; end: 1061542bb; -[SCFeatureContinuousCaptureImpl _autoEnableHandsFreeForSnapEditorCreateIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106154200(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11274079c;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  _objc_release();
  if ((((lVar1 != 0) && (*(long *)(param_1 + _DAT_1127407a0) != 0)) &&
      (*(long *)(param_1 + _DAT_112740744) == 10)) &&
     ((*(byte *)(param_1 + _DAT_1127407a4) & 1) == 0)) {
    puVar2 = PTR_PTR_1126b9b20;
    func_0x00010bf11700(PTR_PTR_1126b9b20,param_2,*(undefined8 *)(param_1 + _DAT_11274073c));
    if ((int)puVar2 != 0) {
      param_1 = param_1 + lVar3;
      _objc_loadWeakRetained(param_1);
      func_0x00010c216f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1061542bc; end: 106154303; -[SCFeatureContinuousCaptureImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061542bc(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_1127406f4) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_1127406f4) = 1;
  func_0x00010bea97e0();
  func_0x00010bdd16c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdd16b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__autoEnableHandsFreeForSnapEdito_112551f48);
  return;
}



/* Entry: 106154304; end: 10615433b; -[SCFeatureContinuousCaptureImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106154304(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127407a8);
  *(undefined8 *)(param_1 + _DAT_1127407a8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10615433c; end: 10615433f; -[SCFeatureContinuousCaptureImpl resetMetrics] */

void FUN_10615433c(void)

{
  return;
}



/* Entry: 106154340; end: 10615434b; -[SCFeatureContinuousCaptureImpl usageMetrics] */

undefined * FUN_106154340(void)

{
  return PTR____NSDictionary0__struct_11034ab58;
}



/* Entry: 10615434c; end: 1061543bb; -[SCFeatureContinuousCaptureImpl configureWithCameraToolbar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615434c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274079c;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + lVar1,param_3);
  func_0x00010bdf4da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc4a0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061543bc; end: 1061546b3; -[SCFeatureContinuousCaptureImpl _createToolbarItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061543bc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar5 = (long)_DAT_1127407a0;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126c7918;
    _objc_alloc();
    func_0x00010c037be0();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    func_0x00010c1b6340(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c177460(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c1cdb60(*(undefined8 *)(param_1 + lVar5));
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c1fb140(uVar3);
    func_0x00010b0aec84();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cdba0(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    func_0x00010b0aec9c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb640(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c160fc0(uVar3);
    func_0x00010b0aec84();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    func_0x0001008b0f58();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1610c0(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    func_0x0001008b0f70();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1610e0(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    _objc_initWeak(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf2c660(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1061546b4;
    puStack_78 = &UNK_11090ba70;
    _objc_copyWeak(auStack_70,auStack_68);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf735a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_98,auStack_68);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010be30aa0(param_1);
    lVar4 = *(long *)(param_1 + lVar5);
    _objc_retain(lVar4);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  else {
    _objc_retain(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1061546b4; end: 10615485f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061546b4(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) goto LAB_106154814;
  lVar2 = param_1 + _DAT_112740728;
  _objc_loadWeakRetained();
  lVar4 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c074a00();
  _objc_release(lVar4);
  _objc_release(lVar2);
  if ((int)lVar3 != 0) {
    func_0x00010c200100(param_2);
    goto LAB_106154814;
  }
  _objc_initWeak(auStack_48,param_1);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_1127407a0);
  func_0x00010c07d660();
  if (iVar1 == 0) {
LAB_106154800:
    func_0x00010c200100(param_2);
  }
  else {
    lVar4 = *(long *)(param_1 + _DAT_112740778);
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    if (lVar2 == 0) goto LAB_106154800;
    func_0x00010c200100(param_2);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_2);
    func_0x00010be7b0a0(param_1);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_50);
  }
  _objc_destroyWeak(auStack_48);
LAB_106154814:
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 106154860; end: 10615492b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106154860(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c273a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar5 = (long)_DAT_1127407a0;
    func_0x00010c1b4280(*(undefined8 *)(lVar1 + lVar5),param_2,0);
    lVar3 = lVar1 + _DAT_11274079c;
    _objc_loadWeakRetained(lVar3);
    if (lVar2 == 0) {
      func_0x00010c216f40(lVar3,param_2,*(undefined8 *)(lVar1 + lVar5),0);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c273a80(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216f40(lVar3,param_2,uVar4,1);
      _objc_release(uVar4);
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10615492c; end: 1061549d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615492c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_1127407a0);
    func_0x00010c07d660();
    if (iVar1 == 0) {
      func_0x00010becf1a0(param_1,param_2,0);
      *(undefined1 *)(param_1 + _DAT_1127407ac) = 0;
      *(undefined1 *)(param_1 + _DAT_1127407b0) = 0;
    }
    else {
      func_0x00010becf1a0(param_1,param_2,1);
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127406fc);
    func_0x00010bfa1820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2b740();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061549d4; end: 106154a67; -[SCFeatureContinuousCaptureImpl shouldBlockTouchAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061549d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (*(long *)(param_3 + _DAT_112740768) == 0) {
    return 0;
  }
  lVar2 = (long)_DAT_1127407b8;
  uVar1 = *(ulong *)(param_3 + lVar2);
  if (((uVar1 != 0) && (func_0x00010c074c20(), (uVar1 & 1) == 0)) &&
     (*(long *)(param_3 + _DAT_1127407a8) != 0)) {
    func_0x00010bf51200(param_1,param_2,*(undefined8 *)(param_3 + lVar2));
    uVar1 = *(ulong *)(param_3 + lVar2);
    func_0x00010bf4ba20();
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 106154a68; end: 106154a8b; -[SCFeatureContinuousCaptureImpl processPlayButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106154a68(long param_1)

{
  if (*(long *)(param_1 + _DAT_112740768) == 4) {
                    /* WARNING: Could not recover jumptable at 0x00010becf2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState_oldState__112591660,3,4)
    ;
    return;
  }
  return;
}



/* Entry: 106154a8c; end: 106154abf; -[SCFeatureContinuousCaptureImpl processPauseButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106154a8c(long param_1)

{
  if ((*(ulong *)(param_1 + _DAT_112740768) | 2) == 3) {
    *(undefined1 *)(param_1 + _DAT_112740774) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010becf2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState_oldState__112591660,4);
    return;
  }
  return;
}



/* Entry: 106154ac0; end: 106154ac3; -[SCFeatureContinuousCaptureImpl handleRecordingDidReachEnd] */

void FUN_106154ac0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becf190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToFinishingSessionOnC_112591608);
  return;
}



/* Entry: 106154ac4; end: 106154ae3; -[SCFeatureContinuousCaptureImpl reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106154ac4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becf2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__transitionToState_oldState__112591660,
             (ulong)*(byte *)(param_1 + _DAT_1127407a4) << 1,
             *(undefined8 *)(param_1 + _DAT_112740768));
  return;
}



/* Entry: 106154ae4; end: 106154b23; -[SCFeatureContinuousCaptureImpl totalRecordedDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106154ae4(undefined8 param_1,long param_2)

{
  undefined1 auStack_28 [24];
  
  if (*(long *)(param_2 + _DAT_112740778) != 0) {
    func_0x00010c276460(auStack_28);
    _CMTimeGetSeconds(auStack_28);
    return param_1;
  }
  return 0;
}



/* Entry: 106154b24; end: 106154b53; -[SCFeatureContinuousCaptureImpl segmentEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106154b24(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274078c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106154b54; end: 106154b63; -[SCFeatureContinuousCaptureImpl clearSegmentDiscardEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106154b54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3b1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112740778),PTR_s_clearDirectSnapDiscard_1125ac618);
  return;
}



/* Entry: 106154b64; end: 106154bbb; -[SCFeatureContinuousCaptureImpl exposeCaptureServiceScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106154b64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127407bc;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d500();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106154bbc; end: 106154bef; -[SCFeatureContinuousCaptureImpl removeCaptureServiceScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106154bbc(long param_1)

{
  param_1 = param_1 + _DAT_1127407bc;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12b640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106154bf0; end: 106154bf3; -[SCFeatureContinuousCaptureImpl captureComponent:willCompleteWithStillImageData:discardRelatedData:captureConfiguration:] */

void FUN_106154bf0(void)

{
  return;
}



/* Entry: 106154bf4; end: 106154bf7; -[SCFeatureContinuousCaptureImpl captureComponent:didCompleteWithError:] */

void FUN_106154bf4(void)

{
  return;
}



/* Entry: 106154bf8; end: 106154bfb; -[SCFeatureContinuousCaptureImpl captureComponent:didCompleteRecoveryWithImage:recoveryData:] */

void FUN_106154bf8(void)

{
  return;
}



/* Entry: 106154bfc; end: 106154bff; -[SCFeatureContinuousCaptureImpl imageCaptureDidComplete] */

void FUN_106154bfc(void)

{
  return;
}



/* Entry: 106154c00; end: 106154c57; -[SCFeatureContinuousCaptureImpl videoCaptureWillStartRecordingWithCaptureConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106154c00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127407bc;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c299640();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106154c58; end: 106154c8b; -[SCFeatureContinuousCaptureImpl videoCaptureDidReachUnlimitedMovementThreshold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106154c58(long param_1)

{
  param_1 = param_1 + _DAT_1127407bc;
  _objc_loadWeakRetained(param_1);
  func_0x00010c299500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106154c8c; end: 106154c8f; -[SCFeatureContinuousCaptureImpl captureComponent:willFinishRecordingWithVideoSize:placeholderImage:videoFuture:] */

void FUN_106154c8c(void)

{
  return;
}



/* Entry: 106154c90; end: 106155093; -[SCFeatureContinuousCaptureImpl videoCaptureDidFinishRecordingWithRecordedVideo:captureConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106154c90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  double dStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___AVAsset_1126aff38;
  uVar4 = param_3;
  func_0x00010c29bb40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0b9e0(puVar1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (puVar1 == (undefined *)0x0) {
    dStack_88 = 0.0;
    uStack_80 = 0;
    uStack_78 = 0;
  }
  else {
    func_0x00010bf8b160(&dStack_88,puVar1);
  }
  lVar7 = (long)_DAT_112740778;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  uVar4 = param_3;
  func_0x00010c29bb40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0fd9a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bef0a60(param_4);
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = uStack_80;
  dStack_a0 = dStack_88;
  uStack_90 = uStack_78;
  func_0x00010c0d9540(uVar6,param_2,uVar4,&dStack_a0,uVar2,8,uVar3,0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar4 = param_4;
  func_0x00010bf311e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179260(uVar6,param_2,uVar4);
  _objc_release(uVar4);
  uVar4 = param_4;
  func_0x00010c096b40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcbe0(uVar6,param_2,uVar4);
  _objc_release(uVar4);
  uVar4 = param_4;
  func_0x00010bef0a60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162820(uVar6,param_2,uVar4);
  _objc_release(uVar4);
  uVar4 = param_4;
  func_0x00010bef0b60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162880(uVar6,param_2,uVar4);
  _objc_release(uVar4);
  uVar4 = param_4;
  func_0x00010bef0520(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162560(uVar6,param_2,uVar4);
  _objc_release(uVar4);
  uVar4 = param_4;
  func_0x00010bf6f7a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c600(uVar6,param_2,uVar4);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c2702a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18e120(uVar6,param_2,uVar4,0,0);
  _objc_release(uVar4);
  func_0x00010be75d60(param_1,param_2,uVar6);
  func_0x00010befb2c0(*(undefined8 *)(param_1 + lVar7),param_2,uVar6);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274078c);
  puVar5 = PTR_PTR_1126c8578;
  func_0x00010bf5a480(PTR_PTR_1126c8578);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010bed4b00(param_1);
  func_0x00010bedf5c0(param_1);
  func_0x00010bed9da0(param_1,param_2,1);
  uStack_98 = uStack_80;
  dStack_a0 = dStack_88;
  uStack_90 = uStack_78;
  dVar8 = dStack_88;
  _CMTimeGetSeconds(&dStack_a0);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112740790);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar4,param_2,puVar5);
  _objc_release(puVar5);
  dVar8 = dVar8 + *(double *)(param_1 + _DAT_1127407c0);
  *(double *)(param_1 + _DAT_1127407c0) = dVar8;
  if (*(long *)(param_1 + lVar7) == 0) {
    dStack_a0 = 0.0;
    uStack_98 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010c276460(&dStack_a0);
  }
  _CMTimeGetSeconds(&dStack_a0);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127407a8);
  func_0x00010bf2b240(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1838a0(dVar8);
  _objc_release(uVar4);
  func_0x00010bdc89e0(param_1,param_2,uVar6);
  if (*(long *)(param_1 + _DAT_112740768) == 5) {
    func_0x00010be242e0(param_1);
  }
  else {
    param_1 = param_1 + _DAT_1127407bc;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2994c0();
    _objc_release(param_1);
  }
  _objc_release(uVar6);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106155094; end: 1061550f7; -[SCFeatureContinuousCaptureImpl setRecordingState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106155094(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 == 5) && (*(long *)(param_1 + _DAT_112740768) == 4)) {
    return;
  }
  param_1 = param_1 + _DAT_1127407bc;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1e9000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061550f8; end: 1061551d7; -[SCFeatureContinuousCaptureImpl videoCaptureDidAbortRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061550f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = (long)_DAT_11274076c;
  if (*(long *)(param_1 + _DAT_112740768) == 3) {
    *(undefined1 *)(param_1 + lVar1) = 1;
    func_0x00010becf2e0(param_1,param_2,4,3);
  }
  *(undefined1 *)(param_1 + lVar1) = 0;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112740788);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + _DAT_1127407c0),PTR__OBJC_CLASS___NSNumber_1126ae570
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010bedf5c0(param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127407a8);
  func_0x00010bf2b240(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c138640();
  _objc_release(uVar3);
  param_1 = param_1 + _DAT_1127407bc;
  _objc_loadWeakRetained(param_1);
  func_0x00010c299440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061551d8; end: 1061552af; -[SCFeatureContinuousCaptureImpl videoCaptureDidCancelRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061551d8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = (long)_DAT_11274076c;
  if (*(long *)(param_1 + _DAT_112740768) == 3) {
    *(undefined1 *)(param_1 + lVar1) = 1;
    func_0x00010becf2e0(param_1,param_2,4,3);
  }
  *(undefined1 *)(param_1 + lVar1) = 0;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112740788);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + _DAT_1127407c0),PTR__OBJC_CLASS___NSNumber_1126ae570
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127407a8);
  func_0x00010bf2b240(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c138640();
  _objc_release(uVar3);
  param_1 = param_1 + _DAT_1127407bc;
  _objc_loadWeakRetained(param_1);
  func_0x00010c299460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061552b0; end: 10615531f; -[SCFeatureContinuousCaptureImpl videoCaptureDidCompleteRecoveryWithRecoveryData:videoFuture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061552b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127407bc;
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c299480();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106155320; end: 1061553f7; -[SCFeatureContinuousCaptureImpl videoCaptureDidFailRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106155320(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = (long)_DAT_11274076c;
  if (*(long *)(param_1 + _DAT_112740768) == 3) {
    *(undefined1 *)(param_1 + lVar1) = 1;
    func_0x00010becf2e0(param_1,param_2,4,3);
  }
  *(undefined1 *)(param_1 + lVar1) = 0;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112740788);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + _DAT_1127407c0),PTR__OBJC_CLASS___NSNumber_1126ae570
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127407a8);
  func_0x00010bf2b240(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c138640();
  _objc_release(uVar3);
  param_1 = param_1 + _DAT_1127407bc;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2994a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061553f8; end: 106155433; -[SCFeatureContinuousCaptureImpl videoCaptureDidReachEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061553f8(long param_1)

{
  func_0x00010becf180();
  param_1 = param_1 + _DAT_1127407bc;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2994e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106155434; end: 1061554a7; -[SCFeatureContinuousCaptureImpl videoCaptureDidStopRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106155434(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274076c;
  if ((*(ulong *)(param_1 + _DAT_112740768) & 0xfffffffffffffffd) == 1 &&
      1 < *(ulong *)(param_1 + _DAT_112740768) - 5) {
    *(undefined1 *)(param_1 + lVar1) = 1;
    func_0x00010becf2e0(param_1,param_2,4);
  }
  *(undefined1 *)(param_1 + lVar1) = 0;
  param_1 = param_1 + _DAT_1127407bc;
  _objc_loadWeakRetained(param_1);
  func_0x00010c299520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061554a8; end: 1061554e7; -[SCFeatureContinuousCaptureImpl videoCaptureHasStartedRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1061554a8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127407bc;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c299560();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1061554e8; end: 106155573; -[SCFeatureContinuousCaptureImpl videoCaptureRecordingTooShort] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061554e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + _DAT_112740768) == 3) {
    func_0x00010becf2e0(param_1,param_2,4,3);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127407a8);
  func_0x00010bf2b240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c138640();
  _objc_release(uVar1);
  param_1 = param_1 + _DAT_1127407bc;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2995a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106155574; end: 1061555b3; -[SCFeatureContinuousCaptureImpl videoCaptureShouldEndRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106155574(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127407bc;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c2995c0();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1061555b4; end: 1061555f3; -[SCFeatureContinuousCaptureImpl videoCaptureShouldPrepareRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1061555b4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127407bc;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c2995e0();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1061555f4; end: 106155633; -[SCFeatureContinuousCaptureImpl videoCaptureShouldStartRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1061555f4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127407bc;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c299600();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 106155634; end: 10615566b; -[SCFeatureContinuousCaptureImpl didTapDoneButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106155634(long param_1,undefined8 param_2)

{
  func_0x00010be5a0c0(param_1,param_2,0x61);
                    /* WARNING: Could not recover jumptable at 0x00010becf2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__transitionToState_oldState__112591660,5,
             *(undefined8 *)(param_1 + _DAT_112740768));
  return;
}



/* Entry: 10615566c; end: 106155693; -[SCFeatureContinuousCaptureImpl didTapUndoButton] */

void FUN_10615566c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be5a0c0(param_1,param_2,0x5e);
                    /* WARNING: Could not recover jumptable at 0x00010be7f190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentUndoAlertV2_11257d600);
  return;
}



/* Entry: 106155694; end: 106155a03; -[SCFeatureContinuousCaptureImpl _presentUndoAlertV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106155694(long param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_a0;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x00010619f964();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106155a04;
  puStack_b0 = &UNK_1108482a8;
  _objc_copyWeak(auStack_a8,auStack_a0);
  func_0x00010beff460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x00010619f97c();
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar4;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x106155a7c;
  puStack_d8 = &UNK_1108482a8;
  _objc_copyWeak(auStack_d0,auStack_a0);
  func_0x00010beff460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = PTR_PTR_1126aed70;
  func_0x00010619f934();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = auStack_a0;
  _objc_copyWeak(auStack_f8,puVar11);
  func_0x00010beff460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar6 = puVar5;
  func_0x00010619f94c();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar2;
  puStack_90 = puVar3;
  puStack_88 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010c211b40(puVar5);
  param_1 = param_1 + _DAT_11274074c;
  _objc_loadWeakRetained();
  lVar8 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0cfca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_f8);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_d0);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_a8);
  puVar1 = auStack_a0;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  __Unwind_Resume(puVar1);
  _objc_retain(puVar11);
  puVar10 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar10);
  func_0x00010be5a0c0();
  _objc_release(puVar10);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010be01f20();
  _objc_release(puVar1);
  func_0x00010bf84b00(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 106155a04; end: 106155b4f;  */

void FUN_106155a04(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be5a0c0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be01f20();
  _objc_release(param_1);
  func_0x00010bf84b00(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106155b50; end: 106155ba7;  */

void FUN_106155b50(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5a0c0();
  _objc_release(param_1);
  func_0x00010bf84b00(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106155ba8; end: 106155f23; -[SCFeatureContinuousCaptureImpl _presentDisableModeAlertWithConfirmAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106155ba8(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = auStack_90;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x00010619f91c();
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106155f24;
  puStack_a8 = &UNK_110853c30;
  _objc_copyWeak(auStack_98,auStack_90);
  _objc_retain(param_3);
  lStack_a0 = param_3;
  func_0x00010beff460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x00010619f934();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = auStack_90;
  _objc_copyWeak(auStack_c8,puVar9);
  func_0x00010beff460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = *(undefined **)(param_1 + _DAT_112740778);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf529e0();
  _objc_release(puVar4);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar5 < (undefined *)0x2) {
    func_0x00010619f9ac();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
  }
  else {
    func_0x00010619f994();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar2;
  puStack_80 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar5);
  _objc_release(puVar4);
  func_0x00010c211b40(puVar5);
  param_1 = param_1 + _DAT_11274074c;
  _objc_loadWeakRetained();
  lVar7 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0cfca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_c8);
  _objc_release(puVar2);
  _objc_release(lStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
  _objc_retain(puVar9);
  lVar7 = param_3 + 0x28;
  _objc_loadWeakRetained(lVar7);
  func_0x00010be5a0c0();
  _objc_release(lVar7);
  if (*(long *)(param_3 + 0x20) != 0) {
    (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
  }
  func_0x00010bf84b00(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 106155f24; end: 106155f93;  */

void FUN_106155f24(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be5a0c0();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  func_0x00010bf84b00(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106155f94; end: 106155feb;  */

void FUN_106155f94(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5a0c0();
  _objc_release(param_1);
  func_0x00010bf84b00(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106155fec; end: 1061562ef; -[SCFeatureContinuousCaptureImpl _discardLastClip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106155fec(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar7 = (long)_DAT_112740778;
  lVar1 = *(long *)(param_2 + lVar7);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar6 = *(undefined8 *)(param_2 + _DAT_11274078c);
    puVar3 = PTR_PTR_1126c8578;
    func_0x00010bf81140(PTR_PTR_1126c8578,param_3,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar6,param_3,puVar3);
    _objc_release(puVar3);
  }
  lVar4 = *(long *)(param_2 + _DAT_112740710);
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar4);
  lVar1 = lVar5;
  func_0x00010c09dea0();
  if (lVar1 != 0) {
    lVar1 = lVar5;
    func_0x00010c09dea0(lVar5);
    puVar3 = PTR_PTR_1126affe8;
    func_0x00010c09e180(PTR_PTR_1126affe8,param_3,lVar1 + -1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6c760(lVar5,param_3,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  func_0x00010bf6c200(*(undefined8 *)(param_2 + lVar7));
  func_0x00010bedf5c0(param_2);
  func_0x00010bed9da0(param_2,param_3,0);
  lVar4 = (long)_DAT_112740790;
  lVar1 = *(long *)(param_2 + lVar4);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar6 = *(undefined8 *)(param_2 + lVar4);
    func_0x00010c089820(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar6);
    param_1 = *(double *)(param_2 + _DAT_1127407c0) - param_1;
    *(double *)(param_2 + _DAT_1127407c0) = param_1;
    func_0x00010c12cd60(*(undefined8 *)(param_2 + lVar4));
  }
  if (*(long *)(param_2 + lVar7) == 0) {
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
  }
  else {
    func_0x00010c276460(&uStack_78);
  }
  _CMTimeGetSeconds(&uStack_78);
  lVar1 = (long)_DAT_1127407a8;
  uVar6 = *(undefined8 *)(param_2 + lVar1);
  func_0x00010bf2b240(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1838a0(param_1);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_2 + lVar1);
  func_0x00010bf2b240(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf81020();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_2 + lVar1);
  func_0x00010bf2b240(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1838c0(param_1);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_2 + _DAT_112740788);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_2 + _DAT_1127407c0),PTR__OBJC_CLASS___NSNumber_1126ae570
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar6,param_3,puVar3);
  _objc_release(puVar3);
  lVar7 = *(long *)(param_2 + lVar7);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010bf529e0();
  _objc_release(lVar7);
  if (lVar1 == 0) {
    uVar6 = *(undefined8 *)(param_2 + _DAT_1127407c4);
    *(undefined8 *)(param_2 + _DAT_1127407c4) = 0;
    _objc_release(uVar6);
    func_0x00010becf2e0(param_2,param_3,(ulong)*(byte *)(param_2 + _DAT_1127407a4) << 1,
                        *(undefined8 *)(param_2 + _DAT_112740768));
  }
  _objc_release(lVar5);
  _objc_release(lVar2);
  return;
}



/* Entry: 1061562f0; end: 106156367; -[SCFeatureContinuousCaptureImpl _logUnifiedCameraActionWithItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061562f0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127406fc;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b800();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106156368; end: 106156517; -[SCFeatureContinuousCaptureImpl _createDurationTimerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106156368(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126c8580;
  _objc_alloc(PTR_PTR_1126c8580);
  lVar9 = param_1;
  func_0x00010bddb5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be3eba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00eba0(puVar1,param_2,lVar9,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar9);
  lVar9 = (long)_DAT_1127407a8;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar9),param_2,puVar1);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010c1a7f60(puVar1,param_2,1);
  puVar3 = PTR_PTR_1126c8588;
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bf1ff80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bf2bb60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c013c80(0x4024000000000000,puVar3,param_2,puVar1,uVar4,uVar6);
  uVar8 = *(undefined8 *)(param_1 + _DAT_1127407c8);
  *(undefined **)(param_1 + _DAT_1127407c8) = puVar3;
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar3 = puVar1;
  func_0x00010bf34860(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bf34860(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010bf493a0(puVar3,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106156518; end: 10615653b; -[SCFeatureContinuousCaptureImpl _transitionToFinishingSessionOnCaptureDidReachEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106156518(long param_1)

{
  if ((*(ulong *)(param_1 + _DAT_112740768) | 2) == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010becf2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState_oldState__112591660,5);
    return;
  }
  return;
}



/* Entry: 10615653c; end: 106156683; -[SCFeatureContinuousCaptureImpl _updateVideoDurationTimerVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615653c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112740740);
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06b680();
  _objc_release(uVar1);
  if (((uVar2 & 1) != 0) || (*(long *)(param_1 + _DAT_112740744) == 0xb)) {
    return;
  }
  if (*(char *)(param_1 + _DAT_11274075c) == '\x01') {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112740760);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_106156650;
  }
  lVar4 = *(long *)(param_1 + _DAT_112740768);
  if (lVar4 != 1) {
    if (lVar4 == 4) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_112740760);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106156650;
    }
    if (lVar4 != 3) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_112740760);
      func_0x00010bfe6360(uVar3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106156650;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_112740760);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
LAB_106156650:
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106156684; end: 106156747; -[SCFeatureContinuousCaptureImpl _updateToolbarButtonVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106156684(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + _DAT_1127407a0) != 0) {
    lVar2 = (long)_DAT_11274079c;
    lVar1 = param_1 + lVar2;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
      if (*(long *)(param_1 + _DAT_112740768) - 1U < 6) {
        if ((*(byte *)(param_1 + _DAT_1127407a4) & 1) != 0) {
          return;
        }
        param_1 = param_1 + lVar2;
        _objc_loadWeakRetained(param_1);
        func_0x00010bfe2c00();
      }
      else {
        if (*(long *)(param_1 + _DAT_112740768) != 0) {
          return;
        }
        param_1 = param_1 + lVar2;
        _objc_loadWeakRetained(param_1);
        func_0x00010c23a840();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 106156748; end: 10615678b; -[SCFeatureContinuousCaptureImpl _updateRuntimePinnedToolbarItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106156748(long param_1)

{
  param_1 = param_1 + _DAT_11274079c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c281d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10615678c; end: 1061568e3; -[SCFeatureContinuousCaptureImpl _transitionToHandsFreeCameraModeStateActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615678c(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  if (*(byte *)(param_1 + _DAT_1127407a4) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_1127407a4) = (char)param_3;
  uVar1 = 2;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  func_0x00010becf2e0(param_1,param_2,uVar1,*(undefined8 *)(param_1 + _DAT_112740768));
  lVar2 = param_1 + _DAT_112740728;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c8590;
  puVar4 = PTR_PTR_1126c8598;
  if (param_3 == 0) {
    func_0x00010bfeb8a0(PTR_PTR_1126c8598);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bef03e0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bfd34c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284100(lVar3);
  _objc_release(puVar5);
  if ((param_3 & 1) == 0) {
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  else {
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  func_0x00010bed9be0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bed9070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateHandsFreeTapToRecordToolt_112593dc0);
  return;
}



/* Entry: 1061568e4; end: 1061568eb; -[SCFeatureContinuousCaptureImpl _handleMainCameraViewDidFullyDisappear] */

void FUN_1061568e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf8370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__deactivateHandsFreeModeIfNeeded_11255ba78,0)
  ;
  return;
}



/* Entry: 1061568ec; end: 1061568f3; -[SCFeatureContinuousCaptureImpl _handleAppDidEnterBackground] */

void FUN_1061568ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf8370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__deactivateHandsFreeModeIfNeeded_11255ba78,1)
  ;
  return;
}



/* Entry: 1061568f4; end: 10615699b; -[SCFeatureContinuousCaptureImpl _deactivateHandsFreeModeIfNeededWithSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061568f4(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + _DAT_112740768) != 2) {
    return;
  }
  if (param_3 == 0) {
    uVar1 = *(ulong *)(param_1 + _DAT_11274071c);
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c078280();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  param_1 = param_1 + _DAT_11274079c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c216f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10615699c; end: 106156ad3; -[SCFeatureContinuousCaptureImpl _transitionToState:oldState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615699c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740768;
  if ((*(long *)(param_1 + lVar2) != param_3) &&
     (((*(char *)(param_1 + _DAT_112740764) != '\x01' || (param_3 != 1)) ||
      ((*(byte *)(param_1 + _DAT_1127407a4) & 1) != 0)))) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127407a8);
    func_0x00010bf2b240(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4fd40();
    _objc_release(uVar1);
    *(long *)(param_1 + lVar2) = param_3;
    func_0x00010bed4b00(param_1);
    func_0x00010be30d60(param_1);
    func_0x00010bed9be0(param_1);
    func_0x00010bee3420(param_1);
    func_0x00010bee2500(param_1);
    func_0x00010beded00(param_1);
    func_0x00010bed9dc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bed9070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateHandsFreeTapToRecordToolt_112593dc0)
    ;
    return;
  }
  return;
}



/* Entry: 106156ad4; end: 106156ee3; -[SCFeatureContinuousCaptureImpl _handleStateTransition:oldState:] */

/* WARNING: Possible PIC construction at 0x000106156b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106156cd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106156b8c) */
/* WARNING: Removing unreachable block (ram,0x000106156cd8) */
/* WARNING: Removing unreachable block (ram,0x000106156cfc) */
/* WARNING: Removing unreachable block (ram,0x000106156d10) */
/* WARNING: Removing unreachable block (ram,0x000106156d7c) */
/* WARNING: Removing unreachable block (ram,0x000106156e0c) */
/* WARNING: Removing unreachable block (ram,0x000106156dbc) */
/* WARNING: Removing unreachable block (ram,0x000106156dd4) */
/* WARNING: Removing unreachable block (ram,0x000106156e14) */
/* WARNING: Removing unreachable block (ram,0x000106156de8) */
/* WARNING: Removing unreachable block (ram,0x000106156e2c) */
/* WARNING: Removing unreachable block (ram,0x000106156e44) */
/* WARNING: Removing unreachable block (ram,0x000106156e48) */
/* WARNING: Removing unreachable block (ram,0x000106156e70) */
/* WARNING: Removing unreachable block (ram,0x000106156e4c) */
/* WARNING: Removing unreachable block (ram,0x000106156ed0) */
/* WARNING: Removing unreachable block (ram,0x000106156d40) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106156ad4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  if (param_3 < 3) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        if ((*(char *)(param_1 + _DAT_112740764) == '\x01') &&
           (*(char *)(param_1 + _DAT_1127407a4) != '\x01')) {
          return;
        }
        func_0x00010be64920(param_1,param_2,1);
        goto LAB_106156c90;
      }
      if (param_3 != 2) {
        return;
      }
    }
    uVar1 = *(undefined8 *)(param_1 + _DAT_11274071c);
    func_0x00010bfa1820(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e7200();
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + _DAT_112740774) = 0;
    *(undefined1 *)(param_1 + _DAT_112740770) = 0;
    *(undefined8 *)(param_1 + _DAT_1127407c0) = 0;
    func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112740790));
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127407c4);
    *(undefined8 *)(param_1 + _DAT_1127407c4) = 0;
    _objc_release(uVar1);
    func_0x00010be64920(param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112740784);
    puVar3 = PTR____kCFBooleanFalse_11034ab60;
  }
  else {
    if (param_3 != 3) {
      if (param_3 != 4) {
        if (param_3 != 5) {
          return;
        }
        if (param_4 != 4) {
          return;
        }
        goto LAB_106156c40;
      }
      uVar1 = *(undefined8 *)(param_1 + _DAT_112740784);
      puVar3 = PTR____kCFBooleanFalse_11034ab60;
      goto code_r0x00010c0d9840;
    }
    uVar1 = *(undefined8 *)(param_1 + _DAT_11274071c);
    func_0x00010bfa1820(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e7200();
    _objc_release(uVar1);
    func_0x00010c1291e0(param_1);
    lVar2 = param_1;
    func_0x00010bf78ec0();
    if ((int)lVar2 != 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_11274070c);
      func_0x00010bfa1820(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c256760();
      _objc_release(uVar1);
      func_0x00010becf2e0(param_1);
LAB_106156c40:
                    /* WARNING: Could not recover jumptable at 0x00010be242f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__goToPreviewAfterSnapDocReady_112566a58);
      return;
    }
LAB_106156c90:
    uVar1 = *(undefined8 *)(param_1 + _DAT_112740784);
    puVar3 = PTR____kCFBooleanTrue_11034ab68;
  }
code_r0x00010c0d9840:
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_next__112614028,puVar3);
  return;
}



/* Entry: 106156ee4; end: 10615702b; -[SCFeatureContinuousCaptureImpl _updateCameraModeActivationInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106156ee4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = (long)_DAT_112740768;
  lVar5 = *(long *)(param_1 + lVar6);
  if (*(char *)(param_1 + _DAT_112740770) == '\x01') {
    lVar1 = *(long *)(param_1 + _DAT_112740778);
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      _objc_release(lVar1);
      goto LAB_106156f48;
    }
    uVar7 = *(ulong *)(param_1 + lVar6);
    _objc_release(lVar1);
    if ((uVar7 & 0xfffffffffffffffe) == 4 || lVar5 == 0) goto LAB_106156f84;
  }
  else {
LAB_106156f48:
    if (lVar5 == 0) {
LAB_106156f84:
      puVar3 = PTR_PTR_1126c8598;
      func_0x00010bfeb8a0(PTR_PTR_1126c8598);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = 0;
      goto LAB_106156fa0;
    }
  }
  puVar3 = PTR_PTR_1126c8598;
  func_0x00010bef03e0(PTR_PTR_1126c8598);
  _objc_retainAutoreleasedReturnValue();
LAB_106156fa0:
  lVar6 = param_1 + _DAT_112740728;
  _objc_loadWeakRetained(lVar6);
  lVar2 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c8590;
  func_0x00010bf4fd00(PTR_PTR_1126c8590,param_2,puVar3,lVar5,
                      *(undefined8 *)(param_1 + _DAT_112740778));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284100(lVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10615702c; end: 10615745b; -[SCFeatureContinuousCaptureImpl _notifyExternalComponentsWithContinuousCaptureActive:] */

/* WARNING: Possible PIC construction at 0x000106157570: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106157574) */
/* WARNING: Removing unreachable block (ram,0x000106157608) */
/* WARNING: Removing unreachable block (ram,0x0001061576dc) */
/* WARNING: Removing unreachable block (ram,0x0001061576c8) */
/* WARNING: Removing unreachable block (ram,0x0001061576e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Removing unreachable block (ram,0x0001061575e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615702c(ulong param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(param_1 + (long)_DAT_112740740);
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06b680();
  _objc_release();
  if (((uVar2 & 1) == 0) && (*(long *)(param_1 + (long)_DAT_112740744) != 0xb)) {
    lVar11 = (long)_DAT_11274070c;
    uVar1 = *(ulong *)(param_1 + lVar11);
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release();
    if (param_3 == 0) {
      if (uVar2 == param_1) {
        lVar6 = param_1 + (long)_DAT_1127407bc;
        _objc_loadWeakRetained(lVar6);
        uVar4 = *(undefined8 *)(param_1 + lVar11);
        func_0x00010bfa1820(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18b5e0();
        _objc_release(uVar4);
        _objc_release(lVar6);
      }
      lVar10 = (long)_DAT_112740778;
      lVar6 = *(long *)(param_1 + lVar10);
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar6;
      func_0x00010bf529e0();
      _objc_release(lVar6);
      if (lVar11 != 0) {
        lVar13 = *(long *)(param_1 + lVar10);
        func_0x00010c1585e0();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar13;
        func_0x00010bf52a60();
        lVar6 = lRam0000000000000000;
        while (lVar11 != 0) {
          lVar12 = 0;
          do {
            if (lRam0000000000000000 != lVar6) {
              _objc_enumerationMutation(lVar13);
            }
            uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11274078c);
            puVar7 = PTR_PTR_1126c8578;
            func_0x00010bf81140();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0d9840(uVar4);
            _objc_release(puVar7);
            lVar12 = lVar12 + 1;
          } while (lVar11 != lVar12);
          lVar11 = lVar13;
          func_0x00010bf52a60();
        }
        _objc_release(lVar13);
        func_0x00010bf6b5c0(*(undefined8 *)(param_1 + lVar10));
        func_0x00010bed9da0(param_1);
      }
      lVar11 = (long)_DAT_112740710;
      uVar3 = *(undefined8 *)(param_1 + lVar11);
      func_0x00010c0cfdc0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c137fe0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar1 = *(ulong *)(param_1 + lVar11);
      func_0x00010c0cfdc0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar2;
      func_0x00010c240000();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c179060();
      _objc_release(uVar8);
      _objc_release(uVar2);
      _objc_release();
      goto LAB_106157420;
    }
    if (uVar2 == param_1) goto LAB_106157420;
    uVar3 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010bfa1820(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(param_1 + (long)_DAT_1127407bc,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010bfa1820(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(uVar4);
    uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112740710);
    func_0x00010c0cfdc0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179060();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar5);
    lVar10 = (long)_DAT_112740778;
    lVar6 = *(long *)(param_1 + lVar10);
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar6;
    func_0x00010bf529e0();
    _objc_release(lVar6);
    if (lVar11 != 0) {
      func_0x00010bf3c5a0(param_1);
    }
    uVar1 = *(ulong *)(param_1 + lVar10);
    func_0x00010c1c9fc0();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) goto code_r0x00010bed4b00;
  }
  else {
LAB_106157420:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return;
    }
  }
  param_1 = uVar1;
  ___stack_chk_fail();
  lVar10 = (long)_DAT_112740778;
  lVar6 = *(long *)(param_1 + lVar10);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar6;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (lVar9 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(lVar6);
      }
      uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11274078c);
      puVar7 = PTR_PTR_1126c8578;
      func_0x00010bf81140(PTR_PTR_1126c8578);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar4);
      _objc_release(puVar7);
      lVar13 = lVar13 + 1;
    } while (lVar9 != lVar13);
    lVar9 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  func_0x00010bf6b5c0(*(undefined8 *)(param_1 + lVar10));
code_r0x00010bed4b00:
                    /* WARNING: Could not recover jumptable at 0x00010bed4b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCameraModeActivationInfo_112592c68);
  return;
}



/* Entry: 10615745c; end: 10615760b; -[SCFeatureContinuousCaptureImpl clearVideoSegments] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615745c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar9 = (long)_DAT_112740778;
  lVar1 = *(long *)(param_1 + lVar9);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar1);
        }
        uVar8 = *(undefined8 *)(param_1 + _DAT_11274078c);
        puVar2 = PTR_PTR_1126c8578;
        func_0x00010bf81140(PTR_PTR_1126c8578,param_2,*(undefined8 *)(lStack_128 + lVar11 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar8,param_2,puVar2);
        _objc_release(puVar2);
        lVar11 = lVar11 + 1;
      } while (lVar7 != lVar11);
      lVar7 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar7 != 0);
  }
  _objc_release(lVar1);
  func_0x00010bf6b5c0(*(undefined8 *)(param_1 + lVar9));
  func_0x00010bed4b00(param_1);
  func_0x00010bed9da0(param_1,param_2,0);
  lVar7 = (long)_DAT_1127407a8;
  uVar8 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bf2b240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1838c0(0);
  _objc_release(uVar8);
  lVar7 = *(long *)(param_1 + lVar7);
  func_0x00010bf2b240();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 0;
  func_0x00010c1838a0(0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = (long)_DAT_112740710;
  uVar3 = *(undefined8 *)(lVar7 + lVar10);
  func_0x00010c0cfdc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar7 + _DAT_11274072c);
  func_0x00010c293220(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  lVar11 = (long)_DAT_112740778;
  lVar9 = *(long *)(lVar7 + lVar11);
  func_0x00010c2702a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = *(long *)(lVar7 + lVar11);
    func_0x00010c2702a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar9);
  func_0x00010c215ae0(*(undefined8 *)(lVar7 + lVar11),param_2,lVar1);
  uVar5 = *(undefined8 *)(lVar7 + lVar10);
  func_0x00010c0cfdc0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c2407e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660();
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar5);
  func_0x00010c179060(uVar4,param_2,4);
  uVar3 = uVar8;
  func_0x00010c29b300(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar12 = (ulong)((uVar12 & 0x7fffffffffffffff) == 0x7ff0000000000000);
  func_0x000108068fc0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd500(uVar4,param_2,uVar12);
  _objc_release(uVar12);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10615760c; end: 1061577e3; -[SCFeatureContinuousCaptureImpl _configureSnapDocForTimelinePlayback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615760c(ulong param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = (long)_DAT_112740710;
  uVar1 = *(undefined8 *)(param_2 + lVar9);
  func_0x00010c0cfdc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + _DAT_11274072c);
  func_0x00010c293220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar10 = (long)_DAT_112740778;
  lVar4 = *(long *)(param_2 + lVar10);
  func_0x00010c2702a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar5 = *(long *)(param_2 + lVar10);
    func_0x00010c2702a0(lVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar4);
  func_0x00010c215ae0(*(undefined8 *)(param_2 + lVar10),param_3,lVar5);
  uVar6 = *(undefined8 *)(param_2 + lVar9);
  func_0x00010c0cfdc0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c2407e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660();
  _objc_release(uVar7);
  _objc_release(uVar1);
  _objc_release(uVar6);
  func_0x00010c179060(uVar3,param_3,4);
  uVar1 = uVar2;
  func_0x00010c29b300(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar8 = (ulong)((param_1 & 0x7fffffffffffffff) == 0x7ff0000000000000);
  func_0x000108068fc0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd500(uVar3,param_3,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar1);
  _objc_release(lVar5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1061577e4; end: 106157e8f; -[SCFeatureContinuousCaptureImpl _setUpObservers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061577e4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  lVar13 = (long)_DAT_112740794;
  if (*(long *)(param_1 + lVar13) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar12 = *(undefined8 *)(param_1 + lVar13);
    *(undefined **)(param_1 + lVar13) = puVar1;
    _objc_release(uVar12);
    _objc_initWeak(auStack_80,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112740718);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar2;
    func_0x00010c0b7ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar12;
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0c42e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106157e90;
    puStack_90 = &UNK_11084e400;
    _objc_copyWeak(auStack_88,auStack_80);
    uVar4 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112740714);
    func_0x00010bfa1820(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bfd3580();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_106158068;
    puStack_b8 = &UNK_110842a38;
    _objc_copyWeak(auStack_b0,auStack_80);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11274071c);
    func_0x00010bfa1820(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0d32c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = puVar1;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_106158194;
    puStack_e0 = &UNK_11084eff0;
    _objc_copyWeak(auStack_d8,auStack_80);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    lVar13 = param_1 + _DAT_112740728;
    _objc_loadWeakRetained(lVar13);
    lVar6 = lVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bfbbc00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = puVar1;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_106158408;
    puStack_108 = &UNK_11090baf0;
    _objc_copyWeak(auStack_100,auStack_80);
    lVar9 = lVar8;
    func_0x00010c25ff60(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar13);
    lVar13 = param_1 + _DAT_112740748;
    _objc_loadWeakRetained(lVar13);
    puStack_148 = puVar1;
    uStack_140 = 0xc2000000;
    pcStack_138 = FUN_1061584e0;
    puStack_130 = &UNK_11084efc0;
    puVar10 = auStack_128;
    _objc_copyWeak(puVar10,auStack_80);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297280(lVar13);
    _objc_release(puVar10);
    _objc_release(lVar13);
    uVar11 = *(undefined8 *)(param_1 + _DAT_112740750);
    func_0x00010bfa1820(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar11;
    func_0x00010bf8c7c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0e0ec0();
    _objc_retainAutoreleasedReturnValue();
    puStack_170 = puVar1;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_106158924;
    puStack_158 = &UNK_110842a38;
    _objc_copyWeak(auStack_150,auStack_80);
    uVar4 = uVar5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar11);
    lVar13 = param_1 + _DAT_112740758;
    _objc_loadWeakRetained();
    puStack_198 = puVar1;
    uStack_190 = 0xc2000000;
    pcStack_188 = FUN_106158984;
    puStack_180 = &UNK_11090b470;
    _objc_copyWeak(auStack_178,auStack_80);
    lVar6 = lVar13;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar6);
    _objc_release(lVar13);
    param_1 = param_1 + _DAT_112740754;
    _objc_loadWeakRetained(param_1);
    lVar13 = param_1;
    func_0x00010bf75dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_1a0,auStack_80);
    lVar6 = lVar13;
    func_0x00010c25ff60(lVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar6);
    _objc_release(lVar13);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_1a0);
    _objc_destroyWeak(auStack_178);
    _objc_destroyWeak(auStack_150);
    _objc_destroyWeak(auStack_128);
    _objc_destroyWeak(auStack_100);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_88);
    _objc_release(uVar12);
    _objc_destroyWeak(auStack_80);
  }
  return;
}



/* Entry: 106157e90; end: 106157f8b;  */

void FUN_106157e90(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106157f8c;
  puStack_50 = &UNK_11090b530;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  func_0x00010c0e3800(param_2);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0e37e0(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 106157f8c; end: 106157ff3;  */

void FUN_106157f8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddb880();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106157ff4; end: 106158067;  */

void FUN_106157ff4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
  }
  else {
    func_0x00010c10f7a0(&uStack_38,param_3);
  }
  func_0x00010bdfc340(param_1,param_2,&uStack_38);
  _objc_release(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 106158068; end: 106158193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106158068(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) goto LAB_106158174;
  lVar1 = param_2;
  func_0x00010c067fc0();
  if (lVar1 == 0) {
    if ((((*(byte *)(param_1 + _DAT_112740774) & 1) != 0) ||
        (*(long *)(param_1 + _DAT_112740768) != 1)) ||
       ((*(byte *)(param_1 + _DAT_1127407a4) & 1) != 0)) goto LAB_106158174;
    *(undefined1 *)(param_1 + _DAT_112740774) = 0;
  }
  else {
    if (((lVar1 != 4) || (*(char *)(param_1 + _DAT_1127407a4) != '\x01')) ||
       ((*(long *)(param_1 + _DAT_112740744) == 0xb ||
        ((*(ulong *)(param_1 + _DAT_112740768) & 0xfffffffffffffffd) != 0)))) goto LAB_106158174;
    uVar2 = *(ulong *)(param_1 + _DAT_112740740);
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06b680();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) goto LAB_106158174;
  }
  func_0x00010becf2e0(param_1);
LAB_106158174:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106158194; end: 106158407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106158194(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) goto LAB_1061583e0;
  lVar2 = param_2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_1127407d4;
  _objc_retain();
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  *(long *)(param_1 + lVar11) = lVar2;
  _objc_release(uVar3);
  lVar11 = (long)_DAT_112740778;
  func_0x00010c1c9fc0(*(undefined8 *)(param_1 + lVar11));
  func_0x00010bed4b00(param_1);
  if (lVar2 == 0) {
    uVar12 = 0;
  }
  else {
    lVar9 = lVar2;
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar9 == 0) {
      uVar12 = 0;
    }
    else {
      lVar4 = lVar9;
      func_0x00010c0b3ae0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        uVar12 = 0;
      }
      else {
        lVar5 = lVar4;
        func_0x00010c0fbb60();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c08fa60();
        uVar12 = (uint)(lVar6 != 0);
        _objc_release(lVar5);
      }
      _objc_release(lVar4);
    }
    _objc_release(lVar9);
  }
  lVar9 = lVar2;
  func_0x00010c15a4a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar9;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247a20();
  _objc_release(lVar4);
  _objc_release(lVar9);
  if (lVar2 == 0) {
    uVar10 = 1;
  }
  else {
    puVar7 = PTR_PTR_1126c85a0;
    func_0x00010c07eec0();
    uVar10 = uVar12 | (uint)puVar7;
  }
  puVar7 = PTR_PTR_1126b9b20;
  func_0x00010bf116e0();
  if ((uVar10 & 1) == 0) {
    puVar8 = PTR_PTR_1126b9b20;
    func_0x00010bf11740();
    uVar1 = (uint)puVar8;
  }
  else {
    uVar1 = 0;
  }
  if ((uVar12 & (uint)puVar7) == 0 && ((uVar10 ^ 1) & uVar1 & 1) == 0) {
    if ((lVar2 == 0) && (*(char *)(param_1 + _DAT_1127407ac) == '\x01')) {
      *(undefined1 *)(param_1 + _DAT_1127407ac) = 0;
      lVar9 = *(long *)(param_1 + lVar11);
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar9;
      func_0x00010bf529e0();
      _objc_release(lVar9);
      if (lVar11 == 0) goto LAB_106158360;
    }
  }
  else if ((*(byte *)(param_1 + _DAT_1127407a4) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_1127407ac) = 1;
LAB_106158360:
    lVar11 = param_1 + _DAT_11274079c;
    _objc_loadWeakRetained(lVar11);
    func_0x00010c216f40();
    _objc_release(lVar11);
  }
  _objc_release(lVar2);
LAB_1061583e0:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106158408; end: 1061584af;  */

void FUN_106158408(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0be6c0(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061584b0; end: 1061584df;  */

void FUN_1061584b0(void)

{
  return;
}



/* Entry: 1061584e0; end: 1061587c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061584e0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 == 0)) {
    _objc_initWeak(auStack_78,param_1);
    lVar1 = param_2;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bef0d60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e0ec0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1061587c8;
    puStack_88 = &UNK_110842a38;
    _objc_copyWeak(auStack_80,auStack_78);
    lVar5 = lVar4;
    func_0x00010c25ff60(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bef0b80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e0ec0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a8,auStack_78);
    lVar5 = lVar4;
    func_0x00010c25ff60(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bef0a40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + _DAT_1127407b4);
    *(long *)(param_1 + _DAT_1127407b4) = lVar2;
    _objc_release(uVar6);
    _objc_release(lVar1);
    func_0x00010be30aa0(param_1);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1061587c8; end: 106158923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061587c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010bf1f3c0();
    *(char *)(param_1 + _DAT_1127407cc) = (char)uVar1;
    func_0x00010bed9be0(param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127407a8);
    func_0x00010bf2b240(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c286400();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106158924; end: 106158983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106158924(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010bf1f3c0();
    *(char *)(param_1 + _DAT_11274075c) = (char)uVar1;
    func_0x00010bee3420(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106158984; end: 106158a3f;  */

void FUN_106158984(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c1540(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106158a40; end: 106158a43;  */

void FUN_106158a40(void)

{
  return;
}



/* Entry: 106158a44; end: 106158a6f;  */

void FUN_106158a44(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2be20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106158a70; end: 106158a77;  */

void FUN_106158a70(void)

{
  return;
}



/* Entry: 106158a78; end: 106158aab;  */

void FUN_106158a78(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be25ac0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106158aac; end: 106158b2b; -[SCFeatureContinuousCaptureImpl _updateInnerCircleVisibilityWithHandsFreeModeActive:isPreInitialCapture:isLensCarouselActive:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106158aac(long param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127407a8);
  func_0x00010bf2b240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (((param_3 == 0) || (param_4 == 0)) || (param_5 != 0)) {
    func_0x00010bfe2120(uVar1,param_2,param_6);
  }
  else {
    func_0x00010c237e80(uVar1,param_2,param_6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106158b2c; end: 106158bf7; -[SCFeatureContinuousCaptureImpl _updateHandsFreeTapToRecordTooltipVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106158b2c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126c85a8;
  uVar4 = *(ulong *)(param_1 + _DAT_1127407a8);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 != 0) {
    puVar2 = PTR_PTR_1126b9b20;
    func_0x00010bfd35c0();
    if ((((int)puVar2 == 0) || (*(char *)(param_1 + _DAT_1127407a4) != '\x01')) ||
       (*(long *)(param_1 + _DAT_112740768) != 2)) {
      func_0x00010bfe1fc0(uVar4);
    }
    else {
      func_0x00010c237ae0(uVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106158bf8; end: 106158dbf; -[SCFeatureContinuousCaptureImpl _handleSpotlightLensUnlockForActiveLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106158bf8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c85a0;
  func_0x00010c07f3c0(PTR_PTR_1126c85a0,param_2,*(undefined8 *)(param_1 + _DAT_112740720),
                      *(undefined8 *)(param_1 + _DAT_112740724));
  if ((int)puVar1 == 0) goto LAB_106158d58;
  puVar1 = PTR_PTR_1126b9b20;
  func_0x00010bf11720(PTR_PTR_1126b9b20,param_2,*(undefined8 *)(param_1 + _DAT_11274073c));
  if ((param_3 == 0) || ((int)puVar1 == 0)) {
    if (param_3 != 0) goto LAB_106158cf4;
  }
  else {
    uVar2 = param_3;
    func_0x00010c079580();
    if ((((uVar2 & 1) == 0) && (lVar4 = (long)_DAT_1127407d8, (*(byte *)(param_1 + lVar4) & 1) == 0)
        ) && ((*(byte *)(param_1 + _DAT_1127407a4) & 1) == 0)) {
      lVar5 = (long)_DAT_11274079c;
      lVar3 = param_1 + lVar5;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar3 != 0) {
        if (*(long *)(param_1 + _DAT_1127407a0) != 0) {
          lVar5 = param_1 + lVar5;
          _objc_loadWeakRetained(lVar5);
          func_0x00010c216f40();
          _objc_release(lVar5);
          *(undefined1 *)(param_1 + _DAT_1127407b0) = 1;
          *(undefined1 *)(param_1 + lVar4) = 1;
        }
      }
      goto LAB_106158d58;
    }
LAB_106158cf4:
    uVar2 = param_3;
    func_0x00010c079580();
    if ((int)uVar2 == 0) goto LAB_106158d58;
  }
  if ((*(char *)(param_1 + _DAT_1127407b0) == '\x01') &&
     (*(undefined1 *)(param_1 + _DAT_1127407b0) = 0, (*(byte *)(param_1 + _DAT_1127407ac) & 1) == 0)
     ) {
    lVar3 = *(long *)(param_1 + _DAT_112740778);
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    if (lVar4 == 0) {
      lVar3 = (long)_DAT_11274079c;
      lVar4 = param_1 + lVar3;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar4 != 0) {
        if (*(long *)(param_1 + _DAT_1127407a0) != 0) {
          param_1 = param_1 + lVar3;
          _objc_loadWeakRetained(param_1);
          func_0x00010c216f40();
          _objc_release(param_1);
        }
      }
    }
  }
LAB_106158d58:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106158dc0; end: 106158e23; -[SCFeatureContinuousCaptureImpl _updateInterstitialViewVisibilityWithContinuousCaptureState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106158dc0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 3) {
    if (param_3 == 4) {
      func_0x00010c1766e0(*(undefined8 *)(param_1 + _DAT_1127407a8),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010beb9730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showInterstitialFooter_11258bf70);
      return;
    }
    func_0x00010c1766e0(*(undefined8 *)(param_1 + _DAT_1127407a8),param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be35890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideInterstitialFooter_11256afc0);
  return;
}



/* Entry: 106158e24; end: 106159143; -[SCFeatureContinuousCaptureImpl _showInterstitialFooter] */

/* WARNING: Possible PIC construction at 0x000106159104: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106158e24(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  
  lVar14 = (long)_DAT_1127407a8;
  if (*(long *)(param_1 + lVar14) == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
      return;
    }
    ___stack_chk_fail();
    lVar14 = *(long *)(param_1 + _DAT_1127407b8);
    if (lVar14 == 0) {
      return;
    }
    uVar12 = 1;
  }
  else {
    lVar15 = (long)_DAT_1127407b8;
    if (*(long *)(param_1 + lVar15) == 0) {
      puVar1 = PTR_PTR_1126c85b0;
      _objc_alloc();
      func_0x00010c00a4e0();
      uVar12 = *(undefined8 *)(param_1 + lVar15);
      *(undefined **)(param_1 + lVar15) = puVar1;
      _objc_release(uVar12);
      uVar2 = *(undefined8 *)(param_1 + lVar14);
      func_0x00010bfe1240();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      func_0x00010bf0ca20(uVar12);
      puVar1 = PTR_PTR_1126c8588;
      _objc_alloc();
      uVar3 = *(undefined8 *)(param_1 + lVar14);
      func_0x00010bf1ff80(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar14);
      func_0x00010bf2bb60(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c013c80(0);
      uVar13 = *(undefined8 *)(param_1 + _DAT_1127407dc);
      *(undefined **)(param_1 + _DAT_1127407dc) = puVar1;
      _objc_release(uVar13);
      _objc_release(uVar2);
      _objc_release(uVar4);
      _objc_release(uVar3);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar5 = *(undefined8 *)(param_1 + lVar15);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar14);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + lVar15);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + lVar14);
      func_0x00010c2793a0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar7;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + lVar15);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + lVar14);
      func_0x00010bf2b240(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar10;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar9;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1);
      _objc_release(puVar11);
      _objc_release(uVar13);
      _objc_release(uVar4);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar3);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar2);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar12);
    }
    func_0x00010bed9da0(param_1);
    lVar14 = *(long *)(param_1 + lVar15);
    uVar12 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar14,PTR_s_setHidden__1126479f8,uVar12);
  return;
}



/* Entry: 106159144; end: 10615915f; -[SCFeatureContinuousCaptureImpl _hideInterstitialFooter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106159144(long param_1)

{
  if (*(long *)(param_1 + _DAT_1127407b8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_1127407b8),PTR_s_setHidden__1126479f8,1);
    return;
  }
  return;
}



/* Entry: 106159160; end: 1061591e7; -[SCFeatureContinuousCaptureImpl _updateInterstitialClipThumbnailsScrollingToLastClip:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106159160(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((*(char *)(param_1 + _DAT_112740780) == '\x01') &&
     (lVar2 = *(long *)(param_1 + _DAT_1127407b8), lVar2 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112740778);
    func_0x00010c1585e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28c5c0(lVar2,param_2,uVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1061591e8; end: 10615936b; -[SCFeatureContinuousCaptureImpl _populateFirstFrameThumbnailForSegment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061591e8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  if (*(char *)(param_2 + _DAT_112740780) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(puVar1);
    lVar2 = param_4;
    func_0x00010bfb6cc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010be91fe0(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19d080(param_4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010bfb6cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      _objc_initWeak(auStack_48,param_2);
      _objc_copyWeak(auStack_58,auStack_48);
      _objc_retain(param_4);
      uStack_50 = param_1;
      func_0x00010c285d60(param_4);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_58);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10615936c; end: 10615941f;  */

void FUN_10615936c(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106159420;
  puStack_50 = &UNK_110842a68;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 106159420; end: 1061594b3;  */

void FUN_106159420(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = uVar4;
    func_0x00010bfb6cc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010be91fe0(*(undefined8 *)(param_1 + 0x30),lVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19d080(uVar4,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(uVar2);
    func_0x00010bed9da0(lVar1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1061594b4; end: 106159643; -[SCFeatureContinuousCaptureImpl _rescaledThumbnailFutureWithImage:scale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061594b4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126ae558;
  if (param_4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_opt_new(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x00010bfe9ca0(puVar2,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar4 = (long)_DAT_1127407e0;
    if (*(long *)(param_2 + lVar4) == 0) {
      puVar2 = PTR_PTR_1126ae790;
      _objc_alloc();
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,&UNK_10f36b7ec);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c021520(puVar2,param_3,puVar1,0x19,0,2);
      uVar3 = *(undefined8 *)(param_2 + lVar4);
      *(undefined **)(param_2 + lVar4) = puVar2;
      _objc_release(uVar3);
      _objc_release(puVar1);
    }
    puVar1 = PTR_PTR_1126ae560;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_2 + lVar4);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106159644;
    puStack_70 = &UNK_110844b80;
    _objc_retain(param_4);
    lStack_68 = param_4;
    puStack_60 = puVar1;
    uStack_58 = param_1;
    _objc_retain(puVar1);
    func_0x00010c0f7fc0(uVar3,param_3,&puStack_88);
    puVar2 = puVar1;
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_60);
    _objc_release(lStack_68);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106159644; end: 1061596cb;  */

void FUN_106159644(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x00010c14e6c0(0x4041800000000000,0x404f000000000000,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_opt_new(PTR__OBJC_CLASS___UIImage_1126aea68);
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1061596cc; end: 106159793; -[SCFeatureContinuousCaptureImpl _capturerDidBeginRecordingWithCapturerState:session:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061596cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = (long)_DAT_112740768;
  if (*(long *)(param_1 + lVar3) == 3) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112740714);
    func_0x00010bfa1820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27d620();
    _objc_release(uVar2);
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_1127407d0);
    func_0x00010c094b40();
    if (((iVar1 != 0) && ((*(byte *)(param_1 + _DAT_112740764) & 1) == 0)) &&
       (*(long *)(param_1 + lVar3) == 4)) {
      func_0x00010becf2e0(param_1,param_2,3,4);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106159794; end: 1061597cb; -[SCFeatureContinuousCaptureImpl _prepareForRecordingWithVideoCaptureConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106159794(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127407d0);
  *(undefined8 *)(param_1 + _DAT_1127407d0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061597cc; end: 106159b33; -[SCFeatureContinuousCaptureImpl _addTimelineSegmentToSnapDoc:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061597cc(ulong param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 uStack_80;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar1 = *(long *)(param_2 + _DAT_112740710);
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar13;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  _objc_release(lVar1);
  lVar13 = lVar2;
  func_0x00010c09dea0();
  if (lVar13 == 0) {
    uVar3 = *(undefined8 *)(param_2 + _DAT_11274072c);
    func_0x00010c293220(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar12;
    func_0x00010c29b300(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    uVar4 = (ulong)((param_1 & 0x7fffffffffffffff) == 0x7ff0000000000000);
    func_0x000108068fc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dd500(lVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar12);
  }
  puVar5 = PTR_PTR_1126affc0;
  lVar13 = param_4;
  func_0x00010bf0b7e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29a0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  lVar13 = (long)_DAT_112740718;
  uVar6 = *(undefined8 *)(param_2 + lVar13);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar6;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb24e0();
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar12);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_2 + lVar13);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar6;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf70d80();
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar12);
  _objc_release(uVar6);
  puVar8 = PTR_PTR_1126affc8;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126affd8;
  func_0x00010c0cb140(PTR_PTR_1126affd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4d00(puVar8);
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uStack_80 = 0;
  puVar10 = PTR_PTR_1126affe0;
  func_0x00010bef70e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_2 + _DAT_1127407c4);
  *(undefined **)(param_2 + _DAT_1127407c4) = puVar10;
  _objc_release(uVar12);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(lVar2);
  lVar13 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_106159b34;
  lVar1 = *(long *)(lVar13 + _DAT_1127407c4);
  puStack_b0 = puVar5;
  lStack_a8 = lVar2;
  lStack_a0 = param_2;
  lStack_98 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(lVar1);
  if (lVar1 == 0) {
    func_0x00010be24300(lVar13);
  }
  else {
    _objc_initWeak(auStack_b8,lVar13);
    puVar11 = auStack_c0;
    _objc_copyWeak(puVar11,auStack_b8);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(lVar1);
    _objc_release(puVar11);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106159b34; end: 106159c27; -[SCFeatureContinuousCaptureImpl _goToPreviewAfterSnapDocReady] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106159b34(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar2 = *(long *)(param_1 + _DAT_1127407c4);
  _objc_retain(lVar2);
  if (lVar2 == 0) {
    func_0x00010be24300(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    puVar1 = auStack_40;
    _objc_copyWeak(puVar1,auStack_38);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(lVar2);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 106159c28; end: 106159c5b;  */

void FUN_106159c28(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be24300(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


