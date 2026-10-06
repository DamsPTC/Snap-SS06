/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108cdcb4c; end: 108cdcb87;  */

void FUN_108cdcb4c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beaeda0(param_1);
    func_0x00010beb07a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cdcb88; end: 108cdcbfb; -[SCBatchCaptureImageSegment dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdcb88(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = (long)_DAT_11277aa0c;
  func_0x00010c09faa0(*(undefined8 *)(param_1 + lVar1));
  if (*(long *)(param_1 + _DAT_11277aa34) != 0) {
    _CVPixelBufferRelease();
  }
  func_0x00010c280b40(*(undefined8 *)(param_1 + lVar1));
  puStack_38 = PTR_PTR_1126fe3f8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108cdcbfc; end: 108cdccd7; -[SCBatchCaptureImageSegment _setupPixelBuffer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdcbfc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar5 = (long)_DAT_11277aa0c;
  func_0x00010c09faa0(*(undefined8 *)(param_1 + lVar5));
  lVar7 = (long)_DAT_11277aa34;
  lVar4 = *(long *)(param_1 + lVar7);
  lVar6 = (long)_DAT_11277aa10;
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  _objc_retain(uVar3);
  func_0x00010c280b40(*(undefined8 *)(param_1 + lVar5));
  uVar2 = uVar3;
  if (lVar4 == 0) {
    FUN_108cde39c();
    func_0x00010c14e300(uVar3,param_2,0x10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x00010bf54240();
    func_0x00010c09faa0(*(undefined8 *)(param_1 + lVar5));
    *(undefined8 *)(param_1 + lVar7) = uVar3;
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = uVar2;
    _objc_release(uVar3);
    func_0x00010c280b40(*(undefined8 *)(param_1 + lVar5));
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 108cdccd8; end: 108cdcdc3; -[SCBatchCaptureImageSegment _setupThumbnail] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdccd8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar2 = (long)_DAT_11277aa0c;
  func_0x00010c09faa0(*(undefined8 *)(param_1 + lVar2));
  lVar1 = *(long *)(param_1 + _DAT_11277aa10);
  _objc_retain(lVar1);
  func_0x00010c280b40(*(undefined8 *)(param_1 + lVar2));
  FUN_108cde338();
  lVar2 = lVar1;
  func_0x00010c14e6c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(*(undefined8 *)(param_1 + _DAT_11277aa2c));
  if (lVar2 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108cdcdc4;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(lVar2);
    lStack_38 = lVar2;
    func_0x000107c312d0("APPSTORE",&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 108cdcdc4; end: 108cdce53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdcdc4(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277aa38);
  *(undefined **)(*(long *)(param_1 + 0x20) + (long)_DAT_11277aa38) = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = (undefined8 *)(lVar4 + _DAT_11277aa04);
  uVar5 = puVar3[2];
  uVar6 = *puVar3;
  puVar1[1] = puVar3[1];
  *puVar1 = uVar6;
  puVar1[2] = uVar5;
  uStack_c8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_d0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_c0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_98 = puVar3[1];
  uStack_a0 = *puVar3;
  uStack_90 = puVar3[2];
  _CMTimeRangeMake(&uStack_80,&uStack_d0,&uStack_a0);
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  func_0x00010c1bf0a0(lVar4);
  return;
}



/* Entry: 108cdce54; end: 108cdcee7; -[SCBatchCaptureImageSegment setDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdce54(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11277aa04);
  uVar2 = param_3[2];
  uVar3 = *param_3;
  puVar1[1] = param_3[1];
  *puVar1 = uVar3;
  puVar1[2] = uVar2;
  uStack_98 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_a0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_90 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  uStack_60 = param_3[2];
  _CMTimeRangeMake(&uStack_50,&uStack_a0,&uStack_70);
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_88 = uStack_38;
  uStack_90 = uStack_40;
  uStack_78 = uStack_28;
  uStack_80 = uStack_30;
  func_0x00010c1bf0a0(param_1);
  return;
}



/* Entry: 108cdcee8; end: 108cdcf07; -[SCBatchCaptureImageSegment setStartTimeOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdcee8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11277aa14);
  uVar2 = param_3[2];
  uVar3 = *param_3;
  puVar1[1] = param_3[1];
  *puVar1 = uVar3;
  puVar1[2] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bee21f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateTimeRanges_112596220);
  return;
}



/* Entry: 108cdcf08; end: 108cdcf27; -[SCBatchCaptureImageSegment setLocalContentTimeRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdcf08(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11277aa18);
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
                    /* WARNING: Could not recover jumptable at 0x00010bee21f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateTimeRanges_112596220);
  return;
}



/* Entry: 108cdcf28; end: 108cdcf2b; -[SCBatchCaptureImageSegment setLocalTrimmedTimeRange:] */

void FUN_108cdcf28(void)

{
  return;
}



/* Entry: 108cdcf2c; end: 108cdcf57; -[SCBatchCaptureImageSegment pixelBuffer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cdcf2c(long param_1)

{
  func_0x00010beaeda0();
  return *(undefined8 *)(param_1 + _DAT_11277aa34);
}



/* Entry: 108cdcf58; end: 108cdd03f; -[SCBatchCaptureImageSegment forceSplittedTimeRanges] */

undefined * FUN_108cdcf58(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
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
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf4d840(&uStack_90);
  uStack_a8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_b0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_a0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_c8 = uStack_70;
  uStack_d0 = uStack_78;
  uStack_c0 = uStack_68;
  _CMTimeRangeMake(&uStack_60,&uStack_b0,&uStack_d0);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297240();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 108cdd040; end: 108cdd047; -[SCBatchCaptureImageSegment forceSplittedTimeRangesCount] */

undefined8 FUN_108cdd040(void)

{
  return 1;
}



/* Entry: 108cdd048; end: 108cdd0e7; -[SCBatchCaptureImageSegment _updateTimeRanges] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdd048(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11277aa1c);
  puVar2 = (undefined8 *)(param_1 + _DAT_11277aa14);
  lVar3 = param_1 + _DAT_11277aa18;
  uStack_78 = puVar2[1];
  uStack_80 = *puVar2;
  uStack_70 = puVar2[2];
  uStack_98 = *(undefined8 *)(lVar3 + 0x20);
  uStack_a0 = *(undefined8 *)(lVar3 + 0x18);
  uStack_90 = *(undefined8 *)(lVar3 + 0x28);
  _CMTimeRangeMake(&uStack_60,&uStack_80,&uStack_a0);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  puVar1[3] = uStack_48;
  puVar1[2] = uStack_50;
  puVar1[5] = uStack_38;
  puVar1[4] = uStack_40;
  puVar2 = (undefined8 *)(param_1 + _DAT_11277aa24);
  uVar7 = puVar1[3];
  uVar6 = puVar1[2];
  uVar5 = puVar1[5];
  uVar4 = puVar1[4];
  uVar8 = *puVar1;
  puVar2[1] = puVar1[1];
  *puVar2 = uVar8;
  puVar2[3] = uVar7;
  puVar2[2] = uVar6;
  puVar2[5] = uVar5;
  puVar2[4] = uVar4;
  return;
}



/* Entry: 108cdd0e8; end: 108cdd0f7; -[SCBatchCaptureImageSegment frameImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cdd0e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277aa10);
}



/* Entry: 108cdd0f8; end: 108cdd137; -[SCBatchCaptureImageSegment setFrameImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdd0f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277aa10;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cdd138; end: 108cdd157; -[SCBatchCaptureImageSegment startTimeOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdd138(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11277aa14);
  uVar2 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[2] = puVar1[2];
  return;
}



/* Entry: 108cdd158; end: 108cdd177; -[SCBatchCaptureImageSegment localContentTimeRange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdd158(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11277aa18);
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



/* Entry: 108cdd178; end: 108cdd197; -[SCBatchCaptureImageSegment contentTimeRange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdd178(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11277aa1c);
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



/* Entry: 108cdd198; end: 108cdd1b7; -[SCBatchCaptureImageSegment localTrimmedTimeRange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdd198(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11277aa20);
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



/* Entry: 108cdd1b8; end: 108cdd1d7; -[SCBatchCaptureImageSegment trimmedTimeRange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdd1b8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11277aa24);
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



/* Entry: 108cdd1d8; end: 108cdd1e7; -[SCBatchCaptureImageSegment editedThumbnails] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cdd1d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277aa38);
}



/* Entry: 108cdd1e8; end: 108cdd227; -[SCBatchCaptureImageSegment setEditedThumbnails:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdd1e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277aa38;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cdd228; end: 108cdd237; -[SCBatchCaptureImageSegment thumbnailFuture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cdd228(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277aa30);
}



/* Entry: 108cdd238; end: 108cdd277; -[SCBatchCaptureImageSegment setThumbnailFuture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdd238(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277aa30;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cdd278; end: 108cdd287; -[SCBatchCaptureImageSegment commonMetricLoggingParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cdd278(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277aa28);
}



/* Entry: 108cdd288; end: 108cdd293; -[SCBatchCaptureImageSegment setCommonMetricLoggingParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdd288(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cdd294; end: 108cdd2a3; -[SCBatchCaptureImageSegment contextFilteredFrameImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cdd294(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277aa3c);
}



/* Entry: 108cdd2a4; end: 108cdd2e3; -[SCBatchCaptureImageSegment setContextFilteredFrameImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdd2a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277aa3c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cdd2e4; end: 108cdd303; -[SCBatchCaptureImageSegment duration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdd2e4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11277aa04);
  uVar2 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[2] = puVar1[2];
  return;
}



/* Entry: 108cdd304; end: 108cdd313; -[SCBatchCaptureImageSegment hasAnimatedContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108cdd304(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277aa08);
}



/* Entry: 108cdd314; end: 108cdd323; -[SCBatchCaptureImageSegment setHasAnimatedContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdd314(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277aa08) = param_3;
  return;
}



/* Entry: 108cdd324; end: 108cdd3b3; -[SCBatchCaptureImageSegment .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdd324(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277aa3c,0);
  _objc_storeStrong(param_1 + _DAT_11277aa28,0);
  _objc_storeStrong(param_1 + _DAT_11277aa30,0);
  _objc_storeStrong(param_1 + _DAT_11277aa38,0);
  _objc_storeStrong(param_1 + _DAT_11277aa10,0);
  _objc_storeStrong(param_1 + _DAT_11277aa2c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277aa0c,0);
  return;
}



/* Entry: 108cdd3b4; end: 108cdd3bb; -[SCBatchCaptureSegmentImpl setUniqueId:] */

void FUN_108cdd3b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 108cdd3bc; end: 108cdd3c3; -[SCBatchCaptureSegmentImpl metadata] */

undefined8 FUN_108cdd3bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cdd3c4; end: 108cdd3f3; -[SCBatchCaptureSegmentImpl setMetadata:] */

void FUN_108cdd3c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cdd3f4; end: 108cdd3fb; -[SCBatchCaptureSegmentImpl isTryOnApplied] */

undefined1 FUN_108cdd3f4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108cdd3fc; end: 108cdd403; -[SCBatchCaptureSegmentImpl setIsTryOnApplied:] */

void FUN_108cdd3fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108cdd404; end: 108cdd40b; -[SCBatchCaptureSegmentImpl tryOnMetadata] */

undefined8 FUN_108cdd404(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108cdd40c; end: 108cdd43b; -[SCBatchCaptureSegmentImpl setTryOnMetadata:] */

void FUN_108cdd40c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108cdd43c; end: 108cdd443; -[SCBatchCaptureSegmentImpl assetURL] */

undefined8 FUN_108cdd43c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108cdd444; end: 108cdd44b; -[SCBatchCaptureSegmentImpl isVideoSegment] */

undefined1 FUN_108cdd444(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108cdd44c; end: 108cdd453; -[SCBatchCaptureSegmentImpl hasAudioTrack] */

undefined1 FUN_108cdd44c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108cdd454; end: 108cdd45b; -[SCBatchCaptureSegmentImpl disableAudioTrack] */

undefined1 FUN_108cdd454(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 108cdd45c; end: 108cdd463; -[SCBatchCaptureSegmentImpl setDisableAudioTrack:] */

void FUN_108cdd45c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 108cdd464; end: 108cdd46b; -[SCBatchCaptureSegmentImpl uniqueId] */

undefined8 FUN_108cdd464(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108cdd46c; end: 108cdd473; -[SCBatchCaptureSegmentImpl overlayImage] */

undefined8 FUN_108cdd46c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108cdd474; end: 108cdd4a3; -[SCBatchCaptureSegmentImpl setOverlayImage:] */

void FUN_108cdd474(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cdd4a4; end: 108cdd4ab; -[SCBatchCaptureSegmentImpl frameImage] */

undefined8 FUN_108cdd4a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108cdd4ac; end: 108cdd4db; -[SCBatchCaptureSegmentImpl setFrameImage:] */

void FUN_108cdd4ac(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108cdd4dc; end: 108cdd4e3; -[SCBatchCaptureSegmentImpl thumbnailFuture] */

undefined8 FUN_108cdd4dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108cdd4e4; end: 108cdd513; -[SCBatchCaptureSegmentImpl setThumbnailFuture:] */

void FUN_108cdd4e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cdd514; end: 108cdd51b; -[SCBatchCaptureSegmentImpl editedThumbnails] */

undefined8 FUN_108cdd514(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108cdd51c; end: 108cdd54b; -[SCBatchCaptureSegmentImpl setEditedThumbnails:] */

void FUN_108cdd51c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cdd54c; end: 108cdd553; -[SCBatchCaptureSegmentImpl thumbnailFutures] */

undefined8 FUN_108cdd54c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108cdd554; end: 108cdd583; -[SCBatchCaptureSegmentImpl setThumbnailFutures:] */

void FUN_108cdd554(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108cdd584; end: 108cdd597; -[SCBatchCaptureSegmentImpl startTimeOffset] */

void FUN_108cdd584(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  param_1[1] = *(undefined8 *)(param_2 + 0x98);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0xa0);
  return;
}



/* Entry: 108cdd598; end: 108cdd5ab; -[SCBatchCaptureSegmentImpl setStartTimeOffset:] */

void FUN_108cdd598(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0xa0) = param_3[2];
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  return;
}



/* Entry: 108cdd5ac; end: 108cdd5c3; -[SCBatchCaptureSegmentImpl contentTimeRange] */

void FUN_108cdd5ac(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  uVar3 = *(undefined8 *)(param_2 + 0xc0);
  uVar2 = *(undefined8 *)(param_2 + 0xb8);
  param_1[1] = *(undefined8 *)(param_2 + 0xb0);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 200);
  param_1[5] = *(undefined8 *)(param_2 + 0xd0);
  param_1[4] = uVar1;
  return;
}



/* Entry: 108cdd5c4; end: 108cdd5db; -[SCBatchCaptureSegmentImpl trimmedTimeRange] */

void FUN_108cdd5c4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0xd8);
  uVar3 = *(undefined8 *)(param_2 + 0xf0);
  uVar2 = *(undefined8 *)(param_2 + 0xe8);
  param_1[1] = *(undefined8 *)(param_2 + 0xe0);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0xf8);
  param_1[5] = *(undefined8 *)(param_2 + 0x100);
  param_1[4] = uVar1;
  return;
}



/* Entry: 108cdd5dc; end: 108cdd5f3; -[SCBatchCaptureSegmentImpl localContentTimeRange] */

void FUN_108cdd5dc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x108);
  uVar3 = *(undefined8 *)(param_2 + 0x120);
  uVar2 = *(undefined8 *)(param_2 + 0x118);
  param_1[1] = *(undefined8 *)(param_2 + 0x110);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x128);
  param_1[5] = *(undefined8 *)(param_2 + 0x130);
  param_1[4] = uVar1;
  return;
}



/* Entry: 108cdd5f4; end: 108cdd60b; -[SCBatchCaptureSegmentImpl setLocalContentTimeRange:] */

void FUN_108cdd5f4(long param_1,undefined8 param_2,undefined8 *param_3)

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
  *(undefined8 *)(param_1 + 0x120) = param_3[3];
  *(undefined8 *)(param_1 + 0x118) = uVar3;
  *(undefined8 *)(param_1 + 0x130) = uVar5;
  *(undefined8 *)(param_1 + 0x128) = uVar4;
  *(undefined8 *)(param_1 + 0x110) = uVar2;
  *(undefined8 *)(param_1 + 0x108) = uVar1;
  return;
}



/* Entry: 108cdd60c; end: 108cdd623; -[SCBatchCaptureSegmentImpl localTrimmedTimeRange] */

void FUN_108cdd60c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x138);
  uVar3 = *(undefined8 *)(param_2 + 0x150);
  uVar2 = *(undefined8 *)(param_2 + 0x148);
  param_1[1] = *(undefined8 *)(param_2 + 0x140);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x158);
  param_1[5] = *(undefined8 *)(param_2 + 0x160);
  param_1[4] = uVar1;
  return;
}



/* Entry: 108cdd624; end: 108cdd63b; -[SCBatchCaptureSegmentImpl setLocalTrimmedTimeRange:] */

void FUN_108cdd624(long param_1,undefined8 param_2,undefined8 *param_3)

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
  *(undefined8 *)(param_1 + 0x150) = param_3[3];
  *(undefined8 *)(param_1 + 0x148) = uVar3;
  *(undefined8 *)(param_1 + 0x160) = uVar5;
  *(undefined8 *)(param_1 + 0x158) = uVar4;
  *(undefined8 *)(param_1 + 0x140) = uVar2;
  *(undefined8 *)(param_1 + 0x138) = uVar1;
  return;
}



/* Entry: 108cdd63c; end: 108cdd643; -[SCBatchCaptureSegmentImpl captureSessionID] */

undefined8 FUN_108cdd63c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108cdd644; end: 108cdd64b; -[SCBatchCaptureSegmentImpl setCaptureSessionID:] */

void FUN_108cdd644(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cdd64c; end: 108cdd653; -[SCBatchCaptureSegmentImpl lensSessionID] */

undefined8 FUN_108cdd64c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108cdd654; end: 108cdd65b; -[SCBatchCaptureSegmentImpl setLensSessionID:] */

void FUN_108cdd654(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cdd65c; end: 108cdd663; -[SCBatchCaptureSegmentImpl discardLoggingParams] */

undefined8 FUN_108cdd65c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 108cdd664; end: 108cdd693; -[SCBatchCaptureSegmentImpl setDiscardLoggingParams:] */

void FUN_108cdd664(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cdd694; end: 108cdd69b; -[SCBatchCaptureSegmentImpl forceSplittedTimeRanges] */

undefined8 FUN_108cdd694(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 108cdd69c; end: 108cdd6a3; -[SCBatchCaptureSegmentImpl forceSplittedTimeRangesCount] */

undefined8 FUN_108cdd69c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 108cdd6a4; end: 108cdd6ab; -[SCBatchCaptureSegmentImpl isSaved] */

undefined1 FUN_108cdd6a4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 108cdd6ac; end: 108cdd6b3; -[SCBatchCaptureSegmentImpl setSaved:] */

void FUN_108cdd6ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 108cdd6b4; end: 108cdd6bb; -[SCBatchCaptureSegmentImpl lensMusicTrackMetadata] */

undefined8 FUN_108cdd6b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 108cdd6bc; end: 108cdd6c3; -[SCBatchCaptureSegmentImpl containsTrim] */

undefined1 FUN_108cdd6bc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 108cdd6c4; end: 108cdd6cb; -[SCBatchCaptureSegmentImpl setContainsTrim:] */

void FUN_108cdd6c4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xd) = param_3;
  return;
}



/* Entry: 108cdd6cc; end: 108cdd6d3; -[SCBatchCaptureSegmentImpl commonMetricLoggingParams] */

undefined8 FUN_108cdd6cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 108cdd6d4; end: 108cdd6db; -[SCBatchCaptureSegmentImpl setCommonMetricLoggingParams:] */

void FUN_108cdd6d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cdd6dc; end: 108cdd79b; -[SCBatchCaptureSegmentImpl .cxx_destruct] */

void FUN_108cdd6dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
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
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108cdd79c; end: 108cdd7a7; -[SCBatchCaptureVideoSegment initWithURL:frameImage:] */

void FUN_108cdd79c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c057a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithURL_frameImage_setupAsyn_1125f38b0,param_3,param_4,1,0);
  return;
}



/* Entry: 108cdd7a8; end: 108cdda0b; -[SCBatchCaptureVideoSegment initWithURL:frameImage:setupAsync:withMetrics:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108cdd7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126fe400;
  puVar2 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_11277aac0;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_3;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + (long)_DAT_11277aac4) = 1;
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_11277aac8);
    uVar3 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    puVar1[1] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    *puVar1 = uVar3;
    puVar1[2] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_11277aacc);
    uVar5 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
    uVar3 = *(undefined8 *)PTR__kCMTimeRangeInvalid_110348660;
    uVar8 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
    uVar7 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
    puVar1[1] = uVar5;
    *puVar1 = uVar3;
    puVar1[3] = uVar8;
    puVar1[2] = uVar7;
    uVar10 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x28);
    uVar9 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x20);
    puVar1[5] = uVar10;
    puVar1[4] = uVar9;
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_11277aad0);
    puVar1[1] = uVar5;
    *puVar1 = uVar3;
    puVar1[3] = uVar8;
    puVar1[2] = uVar7;
    puVar1[5] = uVar10;
    puVar1[4] = uVar9;
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_11277aad4);
    puVar1[3] = uVar8;
    puVar1[2] = uVar7;
    puVar1[5] = uVar10;
    puVar1[4] = uVar9;
    puVar1[1] = uVar5;
    *puVar1 = uVar3;
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_11277aad8);
    puVar1[3] = uVar8;
    puVar1[2] = uVar7;
    puVar1[5] = uVar10;
    puVar1[4] = uVar9;
    puVar1[1] = uVar5;
    *puVar1 = uVar3;
    lVar6 = (long)_DAT_11277aadc;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae560;
    _objc_opt_new();
    lVar6 = (long)_DAT_11277aae0;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined **)((long)puVar2 + lVar6) = puVar4;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_11277aae4);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11277aae4) = uVar3;
    _objc_release(uVar5);
    *(undefined1 *)((long)puVar2 + (long)_DAT_11277aae8) = 0;
    lVar6 = (long)_DAT_11277aaec;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_6;
    _objc_release(uVar3);
    if (param_5 == 0) {
      func_0x00010beacae0(puVar2);
    }
    else {
      _objc_initWeak(auStack_68,puVar2);
      uVar3 = 0;
      func_0x000107c312b8(0,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_108cdda0c;
      puStack_78 = &UNK_1108434b0;
      _objc_copyWeak(auStack_70,auStack_68);
      func_0x000107c27d8c(uVar3,&puStack_90);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
    }
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 108cdda0c; end: 108cdda47;  */

void FUN_108cdda0c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beacae0(param_1);
    func_0x00010beb07a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cdda48; end: 108cdda9b; -[SCBatchCaptureVideoSegment _setupFrameImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdda48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277aadc;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  FUN_108cde39c();
  func_0x00010c14e300(uVar2,param_2,0x10);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cdda9c; end: 108cddc17; -[SCBatchCaptureVideoSegment _setupThumbnail] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdda9c(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277aadc);
  FUN_108cde338();
  func_0x00010c14e6c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(*(undefined8 *)(param_1 + _DAT_11277aae0));
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x108cddb5c;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = uVar1;
  _objc_retain(uVar1);
  func_0x000107c312d0("APPSTORE",&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 108cddc18; end: 108cddc37; -[SCBatchCaptureVideoSegment setStartTimeOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cddc18(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11277aac8);
  uVar2 = param_3[2];
  uVar3 = *param_3;
  puVar1[1] = param_3[1];
  *puVar1 = uVar3;
  puVar1[2] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bee21f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateTimeRanges_112596220);
  return;
}



/* Entry: 108cddc38; end: 108cddc57; -[SCBatchCaptureVideoSegment setLocalContentTimeRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cddc38(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11277aacc);
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
                    /* WARNING: Could not recover jumptable at 0x00010bee21f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateTimeRanges_112596220);
  return;
}



/* Entry: 108cddc58; end: 108cddd1b; -[SCBatchCaptureVideoSegment setLocalTrimmedTimeRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cddc58(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
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
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11277aad4);
  uVar6 = param_3[3];
  uVar5 = param_3[2];
  uVar4 = param_3[5];
  uVar3 = param_3[4];
  uVar7 = *param_3;
  puVar1[1] = param_3[1];
  *puVar1 = uVar7;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  puVar1[5] = uVar4;
  puVar1[4] = uVar3;
  func_0x00010c250fe0(&uStack_90);
  uStack_58 = puVar1[1];
  uStack_60 = *puVar1;
  uStack_50 = puVar1[2];
  _CMTimeAdd(&uStack_48,&uStack_60,&uStack_90);
  puVar2 = (undefined8 *)(param_1 + _DAT_11277aad8);
  uStack_58 = uStack_40;
  uStack_60 = uStack_48;
  uStack_50 = uStack_38;
  uStack_a8 = puVar1[4];
  uStack_b0 = puVar1[3];
  uStack_a0 = puVar1[5];
  _CMTimeRangeMake(&uStack_90,&uStack_60,&uStack_b0);
  puVar2[1] = uStack_88;
  *puVar2 = uStack_90;
  puVar2[3] = uStack_78;
  puVar2[2] = uStack_80;
  puVar2[5] = uStack_68;
  puVar2[4] = uStack_70;
  *(undefined8 *)(param_1 + _DAT_11277aaf0) = 0;
  return;
}



/* Entry: 108cddd1c; end: 108cddd4b; -[SCBatchCaptureVideoSegment forceSplittedTimeRanges] */

void FUN_108cddd1c(void)

{
  undefined1 auStack_40 [48];
  
  func_0x00010c09e0e0(auStack_40);
  FUN_108cde538(auStack_40);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cddd4c; end: 108cdddab; -[SCBatchCaptureVideoSegment forceSplittedTimeRangesCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108cddd4c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277aaf0;
  lVar1 = *(long *)(param_1 + lVar3);
  if (lVar1 < 1) {
    lVar1 = param_1;
    func_0x00010bfb4f40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    *(long *)(param_1 + lVar3) = lVar2;
    _objc_release(lVar1);
    lVar1 = *(long *)(param_1 + lVar3);
  }
  return lVar1;
}



/* Entry: 108cdddac; end: 108cdde73; -[SCBatchCaptureVideoSegment hasAudioTrack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108cdddac(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_38;
  
  if (((*(byte *)(param_1 + _DAT_11277aae8) & 1) == 0) && (*(long *)(param_1 + _DAT_11277aac0) != 0)
     ) {
    puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    _objc_retainAutoreleasedReturnValue();
    uStack_38 = 0;
    func_0x00010c266c80(PTR_PTR_1126b0010,param_2,&PTR__OBJC_CLASS___NSConstantArray_111182f18,
                        puVar2,&uStack_38);
    puVar3 = puVar2;
    func_0x00010c279200(puVar2,param_2,*(undefined8 *)PTR__AVMediaTypeAudio_110348070);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf529e0();
    bVar1 = puVar4 != (undefined *)0x0;
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 108cdde74; end: 108cdde83; -[SCBatchCaptureVideoSegment setDisableAudioTrack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdde74(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277aae8) = param_3;
  return;
}



/* Entry: 108cdde84; end: 108cdde93; -[SCBatchCaptureVideoSegment disableAudioTrack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108cdde84(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277aae8);
}



/* Entry: 108cdde94; end: 108cddecb; -[SCBatchCaptureVideoSegment setLensMusicTrackMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cdde94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277aaf4);
  *(undefined8 *)(param_1 + _DAT_11277aaf4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cddecc; end: 108cddfeb; -[SCBatchCaptureVideoSegment _updateTimeRanges] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cddecc(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11277aad0);
  puVar2 = (undefined8 *)(param_1 + _DAT_11277aac8);
  lVar3 = param_1 + _DAT_11277aacc;
  uStack_78 = puVar2[1];
  uStack_80 = *puVar2;
  uStack_70 = puVar2[2];
  uStack_98 = *(undefined8 *)(lVar3 + 0x20);
  uStack_a0 = *(undefined8 *)(lVar3 + 0x18);
  uStack_90 = *(undefined8 *)(lVar3 + 0x28);
  _CMTimeRangeMake(&uStack_60,&uStack_80,&uStack_a0);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  puVar1[3] = uStack_48;
  puVar1[2] = uStack_50;
  puVar1[5] = uStack_38;
  puVar1[4] = uStack_40;
  lVar4 = param_1 + _DAT_11277aad8;
  if (((((*(byte *)(lVar4 + 0xc) & 1) == 0) || ((*(byte *)(lVar4 + 0x24) & 1) == 0)) ||
      (*(long *)(lVar4 + 0x28) != 0)) || (*(long *)(lVar4 + 0x18) < 0)) {
    uStack_58 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_60 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_50 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_78 = *(undefined8 *)(lVar3 + 0x20);
    uStack_80 = *(undefined8 *)(lVar3 + 0x18);
    uStack_70 = *(undefined8 *)(lVar3 + 0x28);
    _CMTimeRangeMake(&uStack_d0,&uStack_60,&uStack_80);
    uStack_58 = uStack_c8;
    uStack_60 = uStack_d0;
    uStack_48 = uStack_b8;
    uStack_50 = uStack_c0;
  }
  else {
    puVar1 = (undefined8 *)(param_1 + _DAT_11277aad4);
    uStack_58 = puVar1[1];
    uStack_60 = *puVar1;
    uStack_48 = puVar1[3];
    uStack_50 = puVar1[2];
    uStack_a8 = puVar1[5];
    uStack_b0 = puVar1[4];
  }
  uStack_40 = uStack_b0;
  uStack_38 = uStack_a8;
  func_0x00010c1bf360(param_1);
  return;
}



/* Entry: 108cddfec; end: 108cddffb; -[SCBatchCaptureVideoSegment isVideoSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108cddfec(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277aac4);
}



/* Entry: 108cddffc; end: 108cde00b; -[SCBatchCaptureVideoSegment assetURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cddffc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277aac0);
}



/* Entry: 108cde00c; end: 108cde01b; -[SCBatchCaptureVideoSegment frameImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cde00c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277aadc);
}



/* Entry: 108cde01c; end: 108cde05b; -[SCBatchCaptureVideoSegment setFrameImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cde01c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277aadc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cde05c; end: 108cde07b; -[SCBatchCaptureVideoSegment startTimeOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cde05c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11277aac8);
  uVar2 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[2] = puVar1[2];
  return;
}



/* Entry: 108cde07c; end: 108cde09b; -[SCBatchCaptureVideoSegment localContentTimeRange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cde07c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11277aacc);
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


