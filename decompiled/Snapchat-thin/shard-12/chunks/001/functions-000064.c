/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108cd95fc; end: 108cd9637;  */

void FUN_108cd95fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bdcb540(*(undefined8 *)(param_1 + 0x28),lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108cd9638; end: 108cd975b; -[SCTimelineModeExpandableProgressBarView _transitionToScaleFactor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd9638(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar7 = *(double *)(param_2 + _DAT_11277a960) / param_1;
  *(double *)(param_2 + _DAT_11277a960) = dVar7;
  lVar6 = (long)_DAT_11277a958;
  lVar1 = *(long *)(param_2 + lVar6);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar5 = 0;
    dVar8 = 0.0;
    do {
      uVar2 = *(undefined8 *)(param_2 + lVar6);
      func_0x00010c0dfd40(uVar2,param_3,uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar9 = dVar7 / param_1;
      _objc_release(uVar2);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar9,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d04c0(*(undefined8 *)(param_2 + lVar6),param_3,puVar3,uVar5);
      _objc_release(puVar3);
      uVar2 = *(undefined8 *)(param_2 + _DAT_11277a95c);
      func_0x00010c0dfd40(uVar2,param_3,uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be19140(dVar8,dVar9,param_2);
      func_0x00010c19f0e0(uVar2);
      _objc_release(uVar2);
      uVar5 = uVar5 + 1;
      uVar4 = *(ulong *)(param_2 + lVar6);
      func_0x00010bf529e0();
      dVar7 = dVar8;
      dVar8 = dVar9;
    } while (uVar5 < uVar4);
  }
  return;
}



/* Entry: 108cd975c; end: 108cd9803; -[SCTimelineModeExpandableProgressBarView _frameWithStartProgress:endProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108cd975c(double param_1,undefined8 param_2,double param_3,long param_4)

{
  double dVar1;
  
  if (*(char *)(param_4 + _DAT_11277a970) == '\x01') {
    func_0x00010bf20c00();
    param_1 = param_1 * param_3;
    func_0x00010bf20c00(param_4);
  }
  else {
    dVar1 = param_1;
    func_0x00010be5db80();
    param_1 = dVar1 * param_1 + 2.0;
    func_0x00010be5db80(param_4);
    func_0x00010bf20c00(param_4);
  }
  return param_1;
}



/* Entry: 108cd9804; end: 108cd9847; -[SCTimelineModeExpandableProgressBarView _stopExpandingAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd9804(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a978;
  func_0x00010c2559c0(*(undefined8 *)(param_1 + lVar2),param_2,1);
  func_0x00010bfaf6c0(*(undefined8 *)(param_1 + lVar2),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cd9848; end: 108cd9867; -[SCTimelineModeExpandableProgressBarView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd9848(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277a980);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cd9868; end: 108cd987b; -[SCTimelineModeExpandableProgressBarView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd9868(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277a980,param_3);
  return;
}



/* Entry: 108cd987c; end: 108cd988b; -[SCTimelineModeExpandableProgressBarView isDirectorModeUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108cd987c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277a970);
}



/* Entry: 108cd988c; end: 108cd9907; -[SCTimelineModeExpandableProgressBarView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd988c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277a980);
  _objc_storeStrong(param_1 + _DAT_11277a968,0);
  _objc_storeStrong(param_1 + _DAT_11277a95c,0);
  _objc_storeStrong(param_1 + _DAT_11277a974,0);
  _objc_storeStrong(param_1 + _DAT_11277a958,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277a978,0);
  return;
}



/* Entry: 108cd9908; end: 108cd99d3; -[SCBatchCaptureImageSegmentExportOperation initWithSegment:outputURL:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108cd9908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fe3d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1aa920(puVar1);
    func_0x00010c1d7200(puVar1);
    lVar3 = (long)_DAT_11277a984;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cd99d4; end: 108cd9da7; -[SCBatchCaptureImageSegmentExportOperation main] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd99d4(double param_1,double param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  long lVar13;
  double dVar14;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  undefined *puStack_80;
  
  puStack_80 = PTR_PTR_1126fe3d0;
  lStack_88 = param_3;
  _objc_msgSendSuper2(&lStack_88,PTR_s_main_11260b378);
  uVar1 = 0;
  _dispatch_semaphore_create();
  lVar13 = (long)_DAT_11277a988;
  uVar2 = *(undefined8 *)(param_3 + lVar13);
  func_0x00010bfb6cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar14 = param_1;
  func_0x00010c14e120(uVar2);
  param_1 = param_1 * dVar14;
  param_2 = param_2 * dVar14;
  func_0x00010b690b78(param_1,param_2,0x500);
  puVar3 = PTR_PTR_1126c4288;
  func_0x00010b68eef4();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    puVar3[0x1b] = 1;
    _objc_retain(puVar3);
  }
  _objc_release(puVar3);
  puVar4 = puVar3;
  func_0x00010b68f1bc();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126da0b0;
  _objc_alloc();
  func_0x00010b68e0e4(param_1,param_2,0x4086800000000000,0x4094000000000000,0,0,0,0);
  puVar6 = PTR_PTR_1126da0b8;
  _objc_alloc();
  puVar7 = PTR_PTR_1126b2930;
  func_0x00010bf5e640(PTR_PTR_1126b2930);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040e80();
  _objc_release(puVar7);
  puVar8 = PTR_PTR_1126bc3e0;
  _objc_opt_new(PTR_PTR_1126bc3e0);
  puVar9 = puVar8;
  func_0x00010c29bac0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126da0c0;
  _objc_alloc(PTR_PTR_1126da0c0);
  uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_c0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_b0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  puVar11 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297160(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (*(long *)(param_3 + lVar13) == 0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_c0);
  }
  _CMTimeGetSeconds(&uStack_c0);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01e1e0(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar11);
  puVar7 = PTR_PTR_1126da0d0;
  _objc_alloc();
  func_0x00010c01e080();
  lVar13 = (long)_DAT_11277a990;
  uVar12 = *(undefined8 *)(param_3 + lVar13);
  *(undefined **)(param_3 + lVar13) = puVar7;
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(param_3 + lVar13);
  _objc_retain(uVar1);
  func_0x00010c2505a0(uVar12);
  _dispatch_semaphore_wait(uVar1,0xffffffffffffffff);
  _objc_release(uVar1);
  _objc_release(uVar1);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 108cd9da8; end: 108cd9e8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd9da8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11277a990;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + lVar5);
  func_0x00010c252d60();
  if (lVar1 == 4) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277a98c);
    func_0x00010c0f5800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf0e880(puVar3,param_2,uVar2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad040();
    _objc_release(puVar4);
  }
  else {
    puVar3 = *(undefined **)(*(long *)(param_1 + 0x20) + lVar5);
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277a994);
    *(undefined **)(*(long *)(param_1 + 0x20) + (long)_DAT_11277a994) = puVar4;
  }
  _objc_release(uVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108cd9e90; end: 108cd9edf; -[SCBatchCaptureImageSegmentExportOperation cancel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd9e90(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fe3d0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_cancel_1125a9090);
  func_0x00010bf2efa0(*(undefined8 *)(param_1 + _DAT_11277a990));
  return;
}



/* Entry: 108cd9ee0; end: 108cd9eef; -[SCBatchCaptureImageSegmentExportOperation error] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cd9ee0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a994);
}



/* Entry: 108cd9ef0; end: 108cd9eff; -[SCBatchCaptureImageSegmentExportOperation imageSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cd9ef0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a988);
}



/* Entry: 108cd9f00; end: 108cd9f3f; -[SCBatchCaptureImageSegmentExportOperation setImageSegment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd9f00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a988;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cd9f40; end: 108cd9f4f; -[SCBatchCaptureImageSegmentExportOperation outputURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cd9f40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a98c);
}



/* Entry: 108cd9f50; end: 108cd9f5b; -[SCBatchCaptureImageSegmentExportOperation setOutputURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd9f50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cd9f5c; end: 108cd9fcb; -[SCBatchCaptureImageSegmentExportOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd9f5c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277a98c,0);
  _objc_storeStrong(param_1 + _DAT_11277a988,0);
  _objc_storeStrong(param_1 + _DAT_11277a994,0);
  _objc_storeStrong(param_1 + _DAT_11277a984,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277a990,0);
  return;
}



/* Entry: 108cd9fcc; end: 108cda12b; -[SCBatchCaptureSavingConfiguration initWithBatchCaptureConfiguration:] */

undefined1 * FUN_108cd9fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126fe3d8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar8 = param_3;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar7);
    _objc_release(uVar8);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar8);
    lVar4 = *(long *)((long)puVar1 + 8);
    func_0x00010bf529e0();
    lVar9 = 0;
    if (lVar4 != 0) {
      uVar10 = 0;
      do {
        lVar5 = *(long *)((long)puVar1 + 8);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)((long)puVar1 + 0x10);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar8);
        _objc_release(puVar3);
        lVar4 = lVar5;
        func_0x00010bfb4f60();
        lVar9 = lVar4 + lVar9;
        _objc_release(lVar5);
        uVar10 = uVar10 + 1;
        uVar6 = *(ulong *)((long)puVar1 + 8);
        func_0x00010bf529e0();
      } while (uVar10 < uVar6);
    }
    *(long *)((long)puVar1 + 0x18) = lVar9;
    *(undefined1 *)((long)puVar1 + 0x20) = 1;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cda12c; end: 108cda167; -[SCBatchCaptureSavingConfiguration numberOfMediasToSave] */

long FUN_108cda12c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c07d220();
  if ((int)lVar1 != 0) {
    return *(long *)(param_1 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0df030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_numberOfMediasToSaveForSegmentIn_112615620,
             *(undefined8 *)(param_1 + 0x28));
  return param_1;
}



/* Entry: 108cda168; end: 108cda16f; -[SCBatchCaptureSavingConfiguration setSegmentIndexToSave:] */

void FUN_108cda168(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 108cda170; end: 108cda223; -[SCBatchCaptureSavingConfiguration timeRangesOfMediasToSave] */

void FUN_108cda170(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x00010c07d220();
  lVar2 = *(long *)(param_1 + 8);
  if ((int)lVar1 == 0) {
    func_0x00010c0dfd40(lVar2,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becbfe0(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  else {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_108cda224;
    puStack_30 = &UNK_110ac1b80;
    lStack_28 = param_1;
    func_0x00010bfb2660(lVar2,param_2,&puStack_48);
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108cda224; end: 108cda22f;  */

void FUN_108cda224(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010becbff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__timeRangesForSegment__1125909a0,param_2);
  return;
}



/* Entry: 108cda230; end: 108cda343; -[SCBatchCaptureSavingConfiguration timeRangesOfSegmentsToSave] */

/* WARNING: Possible PIC construction at 0x000108cda2cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108cda2d0) */

void FUN_108cda230(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010c07d220();
  lVar2 = *(long *)(param_1 + 8);
  if ((int)lVar1 == 0) {
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
      return;
    }
    ___stack_chk_fail();
    param_1 = *(long *)(lVar2 + 0x20);
    lVar2 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010becbff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__timeRangesForSegment__1125909a0,lVar2);
  return;
}



/* Entry: 108cda344; end: 108cda34f;  */

void FUN_108cda344(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010becbff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__timeRangesForSegment__1125909a0,param_2);
  return;
}



/* Entry: 108cda350; end: 108cda3c7; -[SCBatchCaptureSavingConfiguration localTimeRangesOfMediasToSave] */

void FUN_108cda350(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010c07d220();
  uVar2 = *(undefined8 *)(param_1 + 8);
  if ((int)lVar1 == 0) {
    func_0x00010c0dfd40(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb4f40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  else {
    func_0x00010bfb2660(uVar2,param_2,&PTR___NSConcreteGlobalBlock_110ac1bd0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108cda3c8; end: 108cda3cf;  */

void FUN_108cda3c8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb4f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_forceSplittedTimeRanges_1125cad78);
  return;
}



/* Entry: 108cda3d0; end: 108cda4af; -[SCBatchCaptureSavingConfiguration localTimeRangesOfSegmentsToSave] */

/* WARNING: Possible PIC construction at 0x000108cda438: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108cda43c) */

void FUN_108cda3d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010c07d220();
  uVar2 = *(undefined8 *)(param_1 + 8);
  if ((int)lVar1 == 0) {
    func_0x00010c0dfd40(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
      return;
    }
    ___stack_chk_fail();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfb4f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108cda4b0; end: 108cda4b7;  */

void FUN_108cda4b0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb4f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_forceSplittedTimeRanges_1125cad78);
  return;
}



/* Entry: 108cda4b8; end: 108cda56b; -[SCBatchCaptureSavingConfiguration segmentMetadataOfMediasToSave] */

void FUN_108cda4b8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x00010c07d220();
  lVar2 = *(long *)(param_1 + 8);
  if ((int)lVar1 == 0) {
    func_0x00010c0dfd40(lVar2,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9d580(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  else {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_108cda56c;
    puStack_30 = &UNK_110ac1b80;
    lStack_28 = param_1;
    func_0x00010bfb2660(lVar2,param_2,&puStack_48);
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108cda56c; end: 108cda577;  */

void FUN_108cda56c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9d590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__segmentMetadatasForSegment__112584f08,param_2);
  return;
}



/* Entry: 108cda578; end: 108cda60b; -[SCBatchCaptureSavingConfiguration numberOfMediasToSaveForSegmentIndex:] */

long FUN_108cda578(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (param_3 < lVar1 - 1U) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c0dfd40(lVar1,param_2,param_3 + 1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c067fc0();
    _objc_release(lVar1);
  }
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c0dfd40(lVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c067fc0();
  _objc_release(lVar2);
  return lVar3 - lVar1;
}



/* Entry: 108cda60c; end: 108cda667; -[SCBatchCaptureSavingConfiguration startIndexOfMediasToSaveForSegmentIndex:] */

undefined8 FUN_108cda60c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010c07d220();
  if ((int)lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0dfd40(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c067fc0();
    _objc_release(uVar2);
  }
  return uVar3;
}



/* Entry: 108cda668; end: 108cda6a7; -[SCBatchCaptureSavingConfiguration segmentIndexForMediaIndex:] */

ulong FUN_108cda668(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c07d220();
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be9d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__segmentIndexForMediaIndex__112584ef8,param_3);
    return param_1;
  }
  return *(ulong *)(param_1 + 0x28);
}



/* Entry: 108cda6a8; end: 108cda6df; -[SCBatchCaptureSavingConfiguration numberOfSegmentsToSave] */

undefined8 FUN_108cda6a8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c07d220();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_count_1125b2420);
    return uVar2;
  }
  return 1;
}



/* Entry: 108cda6e0; end: 108cda71b; -[SCBatchCaptureSavingConfiguration shouldSaveSegmentAtIndex:] */

bool FUN_108cda6e0(ulong param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010c07d220();
  if ((uVar2 & 1) == 0) {
    bVar1 = *(long *)(param_1 + 0x28) == param_3;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 108cda71c; end: 108cda7eb; -[SCBatchCaptureSavingConfiguration _segmentIndexForMediaIndex:] */

long FUN_108cda71c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  lVar2 = lVar2 + -1;
  if (-1 < lVar2) {
    lVar5 = 0;
    lVar4 = lVar2;
    do {
      lVar1 = lVar5 + ((ulong)(lVar4 - lVar5) >> 1);
      lVar3 = *(long *)(param_1 + 0x10);
      func_0x00010c0dfd40(lVar3,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010c067fc0();
      _objc_release(lVar3);
      if (param_3 == lVar2) {
        return lVar1;
      }
      lVar2 = *(long *)(param_1 + 0x10);
      func_0x00010c0dfd40(lVar2,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c067fc0();
      _objc_release(lVar2);
      lVar2 = lVar1 + -1;
      if (lVar3 <= param_3) {
        lVar5 = lVar1 + 1;
        lVar2 = lVar4;
      }
      lVar4 = lVar2;
    } while (lVar5 <= lVar2);
  }
  return lVar2;
}



/* Entry: 108cda7ec; end: 108cda8b3; -[SCBatchCaptureSavingConfiguration _timeRangesForSegment:] */

void FUN_108cda7ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x00010c250fe0(&uStack_48,param_3);
  }
  lVar1 = param_3;
  func_0x00010bfb4f40(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108cda8b4; end: 108cda95b;  */

void FUN_108cda8b4(long param_1,long param_2)

{
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  
  if (param_2 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_50,param_2);
  }
  uStack_68 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  uStack_88 = uStack_48;
  uStack_90 = uStack_50;
  uStack_80 = uStack_40;
  _CMTimeAdd(&uStack_c0,&uStack_70,&uStack_90);
  uStack_40 = uStack_b0;
  uStack_48 = uStack_b8;
  uStack_50 = uStack_c0;
  uStack_a8 = uStack_38;
  uStack_98 = uStack_28;
  uStack_a0 = uStack_30;
  func_0x00010c297240(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cda95c; end: 108cdaa13; -[SCBatchCaptureSavingConfiguration _segmentMetadatasForSegment:] */

void FUN_108cda95c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfb4f60();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (0 < lVar1) {
    do {
      lVar3 = param_3;
      func_0x00010c0cc0c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf51e00();
      func_0x00010befa120(puVar2,param_2,lVar4);
      _objc_release(lVar4);
      _objc_release(lVar3);
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  puVar5 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108cdaa14; end: 108cdaa1b; -[SCBatchCaptureSavingConfiguration isSavingAll] */

undefined1 FUN_108cdaa14(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 108cdaa1c; end: 108cdaa23; -[SCBatchCaptureSavingConfiguration setIsSavingAll:] */

void FUN_108cdaa1c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 108cdaa24; end: 108cdaa2b; -[SCBatchCaptureSavingConfiguration segmentIndexToSave] */

undefined8 FUN_108cdaa24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108cdaa2c; end: 108cdaa5b; -[SCBatchCaptureSavingConfiguration .cxx_destruct] */

void FUN_108cdaa2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cdaa5c; end: 108cdab1b; -[SCBatchCaptureSegmentExportSession initWithBatchCaptureConfiguration:] */

undefined1 * FUN_108cdaa5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fe3e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = param_3;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_alloc_init();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar5);
    func_0x00010c1c3080(*(undefined8 *)((long)puVar1 + 0x10));
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cdab1c; end: 108cdb037; -[SCBatchCaptureSegmentExportSession batchExportToOutputUrls:completionQueue:completionHandler:] */

void FUN_108cdab1c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_1d0;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = param_3;
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b7040;
  func_0x00010c22be80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_retain(param_4);
  puVar5 = puVar4;
  func_0x00010bf1d460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c07d220();
  if (iVar2 == 0) {
    lVar14 = *(long *)(param_1 + 8);
    func_0x00010c1583c0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc6ae0(param_1);
  }
  else {
    lVar14 = *(long *)(param_1 + 8);
    _objc_retain(lVar14);
    lVar15 = lVar14;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    while (lVar15 != 0) {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(lVar14);
        }
        func_0x00010bdc6ae0(param_1);
        lVar16 = lVar16 + 1;
      } while (lVar15 != lVar16);
      lVar15 = lVar14;
      func_0x00010bf52a60();
    }
  }
  _objc_release(lVar14);
  func_0x00010befa340(*(undefined8 *)(param_1 + 0x10));
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = *(long *)(*(long *)(param_3 + 0x20) + 0x10);
  func_0x00010c0ebbc0();
  _objc_retainAutoreleasedReturnValue();
  lStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  plStack_280 = (long *)0x0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  _objc_retain();
  lVar8 = lVar14;
  func_0x00010bf52a60();
  if (lVar8 == 0) {
    uVar9 = 0;
    uVar11 = 0;
  }
  else {
    lVar15 = *plStack_280;
    do {
      lVar10 = 0;
      do {
        if (*plStack_280 != lVar15) {
          _objc_enumerationMutation(lVar14);
        }
        uVar12 = *(ulong *)(lStack_288 + lVar10 * 8);
        uVar11 = uVar12;
        func_0x00010c06e0e0();
        puVar4 = PTR_PTR_1126dbb00;
        if ((uVar11 & 1) != 0) {
          uVar11 = 0;
          uVar9 = 1;
          goto LAB_108cdaf70;
        }
        _objc_retain(uVar12);
        _objc_opt_class(puVar4);
        uVar11 = uVar12;
        _objc_opt_isKindOfClass(uVar12,puVar4);
        uVar1 = uVar12;
        if ((uVar11 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar12);
        uVar11 = uVar12;
        if (uVar1 != 0) {
          uVar6 = uVar12;
          func_0x00010bf987e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (uVar6 == 0) goto LAB_108cdae80;
          func_0x00010bf987e0();
          _objc_retainAutoreleasedReturnValue();
LAB_108cdaf60:
          _objc_release(uVar12);
          goto LAB_108cdaf68;
        }
LAB_108cdae80:
        puVar4 = PTR_PTR_1126dbb08;
        _objc_retain(uVar12);
        _objc_opt_class(puVar4);
        uVar7 = uVar12;
        _objc_opt_isKindOfClass(uVar12,puVar4);
        uVar6 = uVar12;
        if ((uVar7 & 1) == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar12);
        if (uVar6 != 0) {
          uVar7 = uVar12;
          func_0x00010bf987e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (uVar7 != 0) {
            func_0x00010bf987e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar12);
            uVar12 = uVar1;
            goto LAB_108cdaf60;
          }
        }
        _objc_release(uVar6);
        _objc_release(uVar1);
        lVar10 = lVar10 + 1;
      } while (lVar8 != lVar10);
      lVar8 = lVar14;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
    uVar11 = 0;
LAB_108cdaf68:
    uVar9 = 0;
  }
LAB_108cdaf70:
  _objc_release(lVar14);
  if (*(long *)(param_3 + 0x30) != 0) {
    uVar13 = *(undefined8 *)(param_3 + 0x28);
    puStack_2c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2c0 = 0xc2000000;
    pcStack_2b8 = FUN_108cdb038;
    puStack_2b0 = &UNK_1108523f8;
    uStack_298 = uVar9;
    _objc_retain(uVar11);
    uVar3 = *(undefined8 *)(param_3 + 0x30);
    uStack_2a8 = uVar11;
    _objc_retain(uVar3);
    uStack_2a0 = uVar3;
    func_0x000107c27d8c(uVar13,&puStack_2c8);
    _objc_release(uStack_2a0);
    _objc_release(uStack_2a8);
  }
  _objc_release(uVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d0) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)(lVar14 + 0x28);
  if (((*(byte *)(lVar14 + 0x30) & 1) == 0) && (*(long *)(lVar14 + 0x20) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108cdb054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x10))(lVar8,1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108cdb05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar8 + 0x10))(lVar8,0);
  return;
}



/* Entry: 108cdb038; end: 108cdb05f;  */

void FUN_108cdb038(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (((*(byte *)(param_1 + 0x30) & 1) == 0) && (*(long *)(param_1 + 0x20) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108cdb054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108cdb05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,0);
  return;
}



/* Entry: 108cdb060; end: 108cdb2c3; -[SCBatchCaptureSegmentExportSession exportSegmentAtIndex:timeRange:toOutputUrl:circumstanceEngine:completionQueue:completionHandler:] */

void FUN_108cdb060(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar6;
  
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  puVar1 = PTR_PTR_1126b7040;
  _objc_retain(in_x4);
  func_0x00010c22be80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(in_x7);
  _objc_retain(in_x6);
  puVar2 = puVar1;
  func_0x00010bf1d460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(ulong *)(param_1 + 8);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c083320();
  puVar5 = PTR_PTR_1126c4280;
  puVar1 = PTR_PTR_1126c4270;
  uVar6 = uVar3;
  if ((int)uVar4 == 0) {
    _objc_retain(uVar3);
    _objc_opt_class(puVar1);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar1);
    if ((uVar4 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar3);
    puVar1 = PTR_PTR_1126dbb08;
    _objc_alloc(PTR_PTR_1126dbb08);
    func_0x00010c043920();
  }
  else {
    _objc_retain(uVar3);
    _objc_opt_class(puVar5);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar5);
    if ((uVar4 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar3);
    puVar1 = PTR_PTR_1126dbb00;
    _objc_alloc(PTR_PTR_1126dbb00);
    func_0x00010c043960();
  }
  _objc_release(uVar6);
  _objc_release(in_x4);
  func_0x00010befa340(*(undefined8 *)(param_1 + 0x10));
  func_0x00010bef7d60(puVar2);
  func_0x00010befa340(*(undefined8 *)(param_1 + 0x10));
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(in_x6);
  _objc_release(in_x7);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  return;
}



/* Entry: 108cdb2c4; end: 108cdb4c3;  */

void FUN_108cdb2c4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c0ebbc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c06e0e0();
  puVar5 = PTR_PTR_1126dbb00;
  if ((uVar4 & 1) != 0) {
    uVar10 = 0;
    goto LAB_108cdb41c;
  }
  _objc_retain(uVar3);
  _objc_opt_class(puVar5);
  uVar6 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar5);
  uVar1 = uVar3;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 == 0) {
LAB_108cdb394:
    puVar5 = PTR_PTR_1126dbb08;
    _objc_retain(uVar3);
    _objc_opt_class(puVar5);
    uVar10 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar5);
    uVar6 = uVar3;
    if ((uVar10 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar3);
    if (uVar6 == 0) {
      uVar10 = 0;
    }
    else {
      uVar7 = uVar3;
      func_0x00010bf987e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar10 = 0;
      if (uVar7 != 0) {
        uVar10 = uVar3;
        func_0x00010bf987e0();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    _objc_release(uVar6);
  }
  else {
    uVar6 = uVar3;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar6 == 0) goto LAB_108cdb394;
    uVar10 = uVar3;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
LAB_108cdb41c:
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_108cdb4c4;
    puStack_70 = &UNK_1108523f8;
    uStack_58 = (undefined1)uVar4;
    _objc_retain(uVar10);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    uStack_68 = uVar10;
    _objc_retain(uVar8);
    uStack_60 = uVar8;
    func_0x000107c27d8c(uVar9,&puStack_88);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
  }
  _objc_release(uVar10);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 108cdb4c4; end: 108cdb4eb;  */

void FUN_108cdb4c4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (((*(byte *)(param_1 + 0x30) & 1) == 0) && (*(long *)(param_1 + 0x20) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108cdb4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108cdb4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,0);
  return;
}



/* Entry: 108cdb4ec; end: 108cdb4f3; -[SCBatchCaptureSegmentExportSession cancel] */

void FUN_108cdb4ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_cancelAllOperations_1125a90f0);
  return;
}



/* Entry: 108cdb4f4; end: 108cdb53b; -[SCBatchCaptureSegmentExportSession dealloc] */

void FUN_108cdb4f4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2dd20(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_1126fe3e0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108cdb53c; end: 108cdb5f3; -[SCBatchCaptureSegmentExportSession _addExportOperationsForSegment:finishOperation:] */

void FUN_108cdb53c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c083320();
  puVar2 = PTR_PTR_1126c4280;
  if ((int)uVar1 == 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  }
  else {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    func_0x00010bdc6b00(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cdb5f4; end: 108cdb783; -[SCBatchCaptureSegmentExportSession _addExportOperationsForVideoSegment:finishedOperation:] */

void FUN_108cdb5f4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar5 = param_3;
  func_0x00010bfb4f40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf529e0();
  _objc_release(uVar5);
  if (uVar1 != 0) {
    uVar5 = 0;
    do {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0dfd40(uVar2,param_2,*(undefined8 *)(param_1 + 0x18));
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010bfb4f40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if (uVar3 == 0) {
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_80,uVar3);
      }
      _objc_release(uVar3);
      _objc_release(uVar1);
      puVar4 = PTR_PTR_1126dbb00;
      _objc_alloc(PTR_PTR_1126dbb00);
      func_0x00010c043960();
      func_0x00010befa340(*(undefined8 *)(param_1 + 0x10),param_2,puVar4);
      func_0x00010bef7d60(param_4,param_2,puVar4);
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      _objc_release(puVar4);
      _objc_release(uVar2);
      uVar5 = uVar5 + 1;
      uVar1 = param_3;
      func_0x00010bfb4f40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bf529e0();
      _objc_release(uVar1);
    } while (uVar5 < uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108cdb784; end: 108cdb78b; -[SCBatchCaptureSegmentExportSession savingConfiguration] */

undefined8 FUN_108cdb784(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108cdb78c; end: 108cdb7bb; -[SCBatchCaptureSegmentExportSession setSavingConfiguration:] */

void FUN_108cdb78c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cdb7bc; end: 108cdb803; -[SCBatchCaptureSegmentExportSession .cxx_destruct] */

void FUN_108cdb7bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cdb804; end: 108cdb8b7; -[SCBatchCaptureVideoSegmentExportOperation initWithSegment:timeRange:outputURL:] */

undefined8 *
FUN_108cdb804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fe3e8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c221f00(puVar1);
    func_0x00010c1d7200(puVar1);
    func_0x00010c214ec0(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108cdb8b8; end: 108cdbc5b; -[SCBatchCaptureVideoSegmentExportOperation main] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdb8b8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126fe3e8;
  lStack_70 = param_1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_main_11260b378);
  uVar2 = 0;
  _dispatch_semaphore_create();
  lVar10 = param_1;
  func_0x00010c29b180();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar10;
  func_0x00010bfd4500();
  _objc_release(lVar10);
  puVar5 = PTR__OBJC_CLASS___AVAsset_1126aff38;
  if ((int)lVar3 == 0) {
    puVar5 = PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
    func_0x00010bf45600(PTR__OBJC_CLASS___AVMutableComposition_1126beaa8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010bef9f20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___AVAsset_1126aff38;
    uVar4 = *(undefined8 *)(param_1 + _DAT_11277a9c0);
    func_0x00010bf0b7e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0b9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar7 = puVar6;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar1 = (undefined8 *)(param_1 + _DAT_11277a9c8);
    uStack_98 = puVar1[1];
    uStack_a0 = *puVar1;
    uStack_88 = puVar1[3];
    uStack_90 = puVar1[2];
    uStack_78 = puVar1[5];
    uStack_80 = puVar1[4];
    uStack_b8 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
    uStack_c0 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
    uStack_b0 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
    func_0x00010c067160(puVar9);
    if (puVar8 == (undefined *)0x0) {
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
    }
    else {
      func_0x00010c106f40(&uStack_f0,puVar8);
    }
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    func_0x00010c1e0300(puVar9);
    puVar7 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
    _objc_alloc();
    func_0x00010bff4280();
    lVar10 = (long)_DAT_11277a9c4;
    uVar4 = *(undefined8 *)(param_1 + lVar10);
    *(undefined **)(param_1 + lVar10) = puVar7;
    _objc_release(uVar4);
    _objc_release(puVar8);
    _objc_release(puVar6);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11277a9c0);
    func_0x00010bf0b7e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0b9e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar6 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
    _objc_alloc();
    func_0x00010bff4280();
    lVar10 = (long)_DAT_11277a9c4;
    puVar9 = *(undefined **)(param_1 + lVar10);
    *(undefined **)(param_1 + lVar10) = puVar6;
  }
  _objc_release(puVar9);
  _objc_release(puVar5);
  func_0x00010c1d7200(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c1d6fc0(*(undefined8 *)(param_1 + lVar10));
  puVar1 = (undefined8 *)(param_1 + _DAT_11277a9c8);
  uStack_98 = puVar1[1];
  uStack_a0 = *puVar1;
  uStack_88 = puVar1[3];
  uStack_90 = puVar1[2];
  uStack_78 = puVar1[5];
  uStack_80 = puVar1[4];
  func_0x00010c214ec0(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c200aa0(*(undefined8 *)(param_1 + lVar10));
  _objc_initWeak(&uStack_a0,param_1);
  uVar4 = *(undefined8 *)(param_1 + lVar10);
  _objc_copyWeak(auStack_f8,&uStack_a0);
  _objc_retain(uVar2);
  func_0x00010bf9cee0(uVar4);
  _dispatch_semaphore_wait(uVar2,0xffffffffffffffff);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(&uStack_a0);
  _objc_release(uVar2);
  return;
}



/* Entry: 108cdbc5c; end: 108cdbcc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdbc5c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(lVar1 + _DAT_11277a9c4);
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar1 + _DAT_11277a9d0);
  *(undefined8 *)(lVar1 + _DAT_11277a9d0) = uVar2;
  _objc_release(uVar3);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108cdbcc8; end: 108cdbd23; -[SCBatchCaptureVideoSegmentExportOperation cancel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdbcc8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fe3e8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_cancel_1125a9090);
  lVar2 = (long)_DAT_11277a9c4;
  func_0x00010bf2e3c0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  return;
}



/* Entry: 108cdbd24; end: 108cdbd33; -[SCBatchCaptureVideoSegmentExportOperation error] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cdbd24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a9d0);
}



/* Entry: 108cdbd34; end: 108cdbd43; -[SCBatchCaptureVideoSegmentExportOperation videoSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cdbd34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a9c0);
}



/* Entry: 108cdbd44; end: 108cdbd83; -[SCBatchCaptureVideoSegmentExportOperation setVideoSegment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdbd44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a9c0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cdbd84; end: 108cdbd93; -[SCBatchCaptureVideoSegmentExportOperation outputURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cdbd84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a9cc);
}



/* Entry: 108cdbd94; end: 108cdbd9f; -[SCBatchCaptureVideoSegmentExportOperation setOutputURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdbd94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cdbda0; end: 108cdbdbf; -[SCBatchCaptureVideoSegmentExportOperation timeRange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdbda0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11277a9c8);
  uVar2 = *puVar1;
  uVar4 = puVar1[3];
  uVar3 = puVar1[2];
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = puVar1[4];
  param_1[5] = puVar1[5];
  param_1[4] = uVar2;
  return;
}



/* Entry: 108cdbdc0; end: 108cdbddf; -[SCBatchCaptureVideoSegmentExportOperation setTimeRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdbdc0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11277a9c8);
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar3 = param_3[5];
  uVar2 = param_3[4];
  uVar6 = *param_3;
  puVar1[1] = param_3[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  return;
}



/* Entry: 108cdbde0; end: 108cdbdef; -[SCBatchCaptureVideoSegmentExportOperation exportSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cdbde0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a9c4);
}



/* Entry: 108cdbdf0; end: 108cdbe2f; -[SCBatchCaptureVideoSegmentExportOperation setExportSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdbdf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a9c4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cdbe30; end: 108cdbe8f; -[SCBatchCaptureVideoSegmentExportOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdbe30(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277a9c4,0);
  _objc_storeStrong(param_1 + _DAT_11277a9cc,0);
  _objc_storeStrong(param_1 + _DAT_11277a9c0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277a9d0,0);
  return;
}



/* Entry: 108cdbe90; end: 108cdbf53; -[SCBatchCaptureConfigurationImpl init] */

undefined1 * FUN_108cdbe90(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe3f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release();
    *(undefined8 *)((long)puVar1 + 0x18) = 1;
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar3;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126dbb10;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108cdbf54; end: 108cdbf9b; -[SCBatchCaptureConfigurationImpl dealloc] */

void FUN_108cdbf54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf6b5e0(param_1,param_2,0xffffffffffffffff);
  puStack_28 = PTR_PTR_1126fe3f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108cdbf9c; end: 108cdbfdf; -[SCBatchCaptureConfigurationImpl setSegments:] */

void FUN_108cdbf9c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    func_0x00010c0d3c80();
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 108cdbfe0; end: 108cdc007; -[SCBatchCaptureConfigurationImpl segments] */

void FUN_108cdbfe0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108cdc008; end: 108cdc073; -[SCBatchCaptureConfigurationImpl uniqueSnapCreationCount] */

long FUN_108cdc008(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  func_0x00010bf6cf60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  _objc_release(lVar1);
  return lVar3 + lVar2;
}



/* Entry: 108cdc074; end: 108cdc09b; -[SCBatchCaptureConfigurationImpl deletedSegmentCaptureSessionIDs] */

void FUN_108cdc074(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108cdc09c; end: 108cdc1af; -[SCBatchCaptureConfigurationImpl timeRanges] */

void FUN_108cdc09c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf529e0(uVar1);
  func_0x00010bf0a0e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108cdc138;
  puStack_30 = &UNK_110ac1c30;
  _objc_retain();
  puStack_28 = puVar2;
  func_0x00010bf97e80(uVar1,param_2,&puStack_48);
  _objc_release(puStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cdc1b0; end: 108cdc28b; -[SCBatchCaptureConfigurationImpl addBatchCaptureSegment:] */

void FUN_108cdc1b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x00010bf4d840(&uStack_80,lVar1);
    }
    _CMTimeRangeGetEnd(&uStack_48,&uStack_80);
    uStack_78 = uStack_40;
    uStack_80 = uStack_48;
    uStack_70 = uStack_38;
    func_0x00010c209a60(param_3,param_2,&uStack_80);
    _objc_release(lVar1);
  }
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  func_0x00010c21b740(param_3);
  func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,param_3);
  func_0x00010bf16800(*(undefined8 *)(param_1 + 0x20),param_2,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 108cdc28c; end: 108cdc2bb; -[SCBatchCaptureConfigurationImpl updateSegment:atIndex:] */

void FUN_108cdc28c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c1d04c0(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bedf630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateSegmentStartTimeOffsetFro_112595730,param_4);
  return;
}



/* Entry: 108cdc2bc; end: 108cdc373; -[SCBatchCaptureConfigurationImpl deleteSegmentAtIndex:] */

void FUN_108cdc2bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf311e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    lVar2 = lVar1;
    func_0x00010bf311e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3,param_2,lVar2);
    _objc_release(lVar2);
  }
  func_0x00010c12d3c0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  func_0x00010bedf620(param_1,param_2,param_3);
  func_0x00010bf16820(*(undefined8 *)(param_1 + 0x20),param_2,param_1,lVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108cdc374; end: 108cdc3df; -[SCBatchCaptureConfigurationImpl deleteSnapSegmentAtIndexPath:] */

void FUN_108cdc374(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c1554e0(param_3);
  lVar2 = param_3;
  func_0x00010c142240();
  _objc_release(param_3);
  if (lVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf6c790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_deleteSegmentAtIndex__1125b8b88,lVar1);
  return;
}



/* Entry: 108cdc3e0; end: 108cdc3e7; -[SCBatchCaptureConfigurationImpl deleteAllSegments] */

void FUN_108cdc3e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_deleteAllSegmentsWithDiscardMeth_1125b8720,0xffffffffffffffff);
  return;
}



/* Entry: 108cdc3e8; end: 108cdc5df; -[SCBatchCaptureConfigurationImpl deleteAllSegmentsWithDiscardMethod:] */

void FUN_108cdc3e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x21;
  undefined8 unaff_x22;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
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
  undefined8 uStack_160;
  long lStack_158;
  ulong uStack_150;
  ulong uStack_148;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uVar7 = param_3;
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
    unaff_x21 = *(long *)(param_1 + 8);
    _objc_retain(unaff_x21);
    lVar5 = unaff_x21;
    func_0x00010bf52a60(unaff_x21,param_2,&uStack_130,auStack_f0,0x10);
    if (lVar5 != 0) {
      lVar1 = *plStack_120;
      do {
        lVar10 = 0;
        do {
          if (*plStack_120 != lVar1) {
            _objc_enumerationMutation(unaff_x21);
          }
          lVar8 = *(long *)(lStack_128 + lVar10 * 8);
          lVar2 = lVar8;
          func_0x00010bf311e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar2 != 0) {
            uVar9 = *(undefined8 *)(param_1 + 0x10);
            lVar2 = lVar8;
            func_0x00010bf311e0(lVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(uVar9,param_2,lVar2);
            _objc_release(lVar2);
          }
          puVar3 = PTR_PTR_1126c84c8;
          lVar2 = lVar8;
          func_0x00010bf81060(lVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf16ba0(puVar3,param_2,lVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar2);
          func_0x00010c2ac620(puVar3,param_2,param_3);
          _objc_unsafeClaimAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010bf21f60(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c18ed20(lVar8,param_2,puVar4);
          _objc_release(puVar4);
          _objc_release(puVar3);
          lVar10 = lVar10 + 1;
        } while (lVar5 != lVar10);
        lVar5 = unaff_x21;
        func_0x00010bf52a60(unaff_x21,param_2,&uStack_130,auStack_f0,0x10);
        unaff_x22 = 0;
      } while (lVar5 != 0);
    }
    _objc_release(unaff_x21);
    func_0x00010bf168a0(*(undefined8 *)(param_1 + 0x20),param_2,param_1);
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 8));
    lVar5 = *(long *)(param_1 + 0x20);
    uVar7 = param_1;
    func_0x00010bf16880();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_108cdc5e0;
  uStack_178 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_180 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_170 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_160 = unaff_x22;
  lStack_158 = unaff_x21;
  uStack_150 = param_3;
  uStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  if (0 < (long)uVar7) {
    lVar1 = *(long *)(lVar5 + 8);
    func_0x00010c0dfd40(lVar1,param_2,uVar7 - 1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
    }
    else {
      func_0x00010bf4d840(&uStack_1b0,lVar1);
    }
    _CMTimeRangeGetEnd(&uStack_180,&uStack_1b0);
    _objc_release(lVar1);
  }
  while( true ) {
    uVar6 = *(ulong *)(lVar5 + 8);
    func_0x00010bf529e0();
    if (uVar6 <= uVar7) break;
    uVar9 = *(undefined8 *)(lVar5 + 8);
    func_0x00010c0dfd40(uVar9,param_2,uVar7);
    _objc_retainAutoreleasedReturnValue();
    uStack_1a8 = uStack_178;
    uStack_1b0 = uStack_180;
    uStack_1a0 = uStack_170;
    func_0x00010c209a60();
    _objc_release(uVar9);
    lVar1 = *(long *)(lVar5 + 8);
    func_0x00010c0dfd40(lVar1,param_2,uVar7);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
    }
    else {
      func_0x00010bf4d840(&uStack_1b0,lVar1);
    }
    _CMTimeRangeGetEnd(&uStack_1c8,&uStack_1b0);
    uStack_178 = uStack_1c0;
    uStack_180 = uStack_1c8;
    uStack_170 = uStack_1b8;
    _objc_release(lVar1);
    uVar7 = uVar7 + 1;
  }
  return;
}



/* Entry: 108cdc5e0; end: 108cdc723; -[SCBatchCaptureConfigurationImpl _updateSegmentStartTimeOffsetFromIndex:] */

void FUN_108cdc5e0(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
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
  
  uStack_48 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_50 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_40 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  if (0 < (long)param_3) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c0dfd40(lVar1,param_2,param_3 - 1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x00010bf4d840(&uStack_80,lVar1);
    }
    _CMTimeRangeGetEnd(&uStack_50,&uStack_80);
    _objc_release(lVar1);
  }
  while( true ) {
    uVar3 = *(ulong *)(param_1 + 8);
    func_0x00010bf529e0();
    if (uVar3 <= param_3) break;
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0dfd40(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_70 = uStack_40;
    func_0x00010c209a60();
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c0dfd40(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x00010bf4d840(&uStack_80,lVar1);
    }
    _CMTimeRangeGetEnd(&uStack_98,&uStack_80);
    uStack_48 = uStack_90;
    uStack_50 = uStack_98;
    uStack_40 = uStack_88;
    _objc_release(lVar1);
    param_3 = param_3 + 1;
  }
  return;
}



/* Entry: 108cdc724; end: 108cdc76b; -[SCBatchCaptureConfigurationImpl firstFrameImage] */

void FUN_108cdc724(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb6cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108cdc76c; end: 108cdc773; -[SCBatchCaptureConfigurationImpl addListener:] */

void FUN_108cdc76c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 108cdc774; end: 108cdc7ef; -[SCBatchCaptureConfigurationImpl unsavedCount] */

ulong FUN_108cdc774(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c07d080();
  if ((uVar1 & 1) == 0) {
    func_0x00010c1585e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 108cdc7f0; end: 108cdc80b;  */

uint FUN_108cdc7f0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c07d080(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 108cdc80c; end: 108cdc813; -[SCBatchCaptureConfigurationImpl previewEdits] */

undefined8 FUN_108cdc80c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108cdc814; end: 108cdc843; -[SCBatchCaptureConfigurationImpl setPreviewEdits:] */

void FUN_108cdc814(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cdc844; end: 108cdc84b; -[SCBatchCaptureConfigurationImpl batchCaptureSessionID] */

undefined8 FUN_108cdc844(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108cdc84c; end: 108cdc853; -[SCBatchCaptureConfigurationImpl setBatchCaptureSessionID:] */

void FUN_108cdc84c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cdc854; end: 108cdc85b; -[SCBatchCaptureConfigurationImpl isSaved] */

undefined1 FUN_108cdc854(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 108cdc85c; end: 108cdc863; -[SCBatchCaptureConfigurationImpl setSaved:] */

void FUN_108cdc85c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 108cdc864; end: 108cdc86b; -[SCBatchCaptureConfigurationImpl isV2] */

undefined1 FUN_108cdc864(long param_1)

{
  return *(undefined1 *)(param_1 + 0x29);
}



/* Entry: 108cdc86c; end: 108cdc873; -[SCBatchCaptureConfigurationImpl setIsV2:] */

void FUN_108cdc86c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x29) = param_3;
  return;
}



/* Entry: 108cdc874; end: 108cdc8df; -[SCBatchCaptureConfigurationImpl .cxx_destruct] */

void FUN_108cdc874(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cdc8e0; end: 108cdc8eb; -[SCBatchCaptureImageSegment initWithImage:] */

void FUN_108cdc8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01c2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithImage_setupBuffer_withMe_1125e4aa0,param_3,1,0);
  return;
}



/* Entry: 108cdc8ec; end: 108cdcb4b; -[SCBatchCaptureImageSegment initWithImage:setupBuffer:withMetrics:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108cdc8ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fe3f8;
  puVar2 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_11277aa0c);
    *(undefined **)((long)puVar2 + (long)_DAT_11277aa0c) = puVar3;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_11277aa10;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_3;
    _objc_release(uVar4);
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_11277aa14);
    uVar4 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    puVar1[1] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    *puVar1 = uVar4;
    puVar1[2] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_11277aa18);
    uVar5 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
    uVar4 = *(undefined8 *)PTR__kCMTimeRangeInvalid_110348660;
    uVar8 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
    uVar7 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
    puVar1[1] = uVar5;
    *puVar1 = uVar4;
    puVar1[3] = uVar8;
    puVar1[2] = uVar7;
    uVar10 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x28);
    uVar9 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x20);
    puVar1[5] = uVar10;
    puVar1[4] = uVar9;
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_11277aa1c);
    puVar1[1] = uVar5;
    *puVar1 = uVar4;
    puVar1[3] = uVar8;
    puVar1[2] = uVar7;
    puVar1[5] = uVar10;
    puVar1[4] = uVar9;
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_11277aa20);
    puVar1[3] = uVar8;
    puVar1[2] = uVar7;
    puVar1[5] = uVar10;
    puVar1[4] = uVar9;
    puVar1[1] = uVar5;
    *puVar1 = uVar4;
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_11277aa24);
    puVar1[3] = uVar8;
    puVar1[2] = uVar7;
    puVar1[5] = uVar10;
    puVar1[4] = uVar9;
    puVar1[1] = uVar5;
    *puVar1 = uVar4;
    lVar6 = (long)_DAT_11277aa28;
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_5;
    _objc_release(uVar4);
    _CMTimeMakeWithSeconds(&uStack_68,0x3ff0000000000000,100000);
    uStack_78 = uStack_60;
    uStack_80 = uStack_68;
    uStack_70 = uStack_58;
    func_0x00010c192d40(puVar2);
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    lVar6 = (long)_DAT_11277aa2c;
    uVar4 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined **)((long)puVar2 + lVar6) = puVar3;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar2 + lVar6);
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_11277aa30);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11277aa30) = uVar4;
    _objc_release(uVar5);
    if (param_4 != 0) {
      _objc_initWeak(&uStack_80,puVar2);
      uVar4 = 0;
      func_0x000107c312b8(0,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_108cdcb4c;
      puStack_90 = &UNK_1108434b0;
      _objc_copyWeak(auStack_88,&uStack_80);
      func_0x000107c27d8c(uVar4,&puStack_a8);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(&uStack_80);
    }
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar2;
}


