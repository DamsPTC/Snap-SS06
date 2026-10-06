/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108cde09c; end: 108cde0bb; -[SCBatchCaptureVideoSegment contentTimeRange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cde09c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11277aad0);
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



/* Entry: 108cde0bc; end: 108cde0db; -[SCBatchCaptureVideoSegment localTrimmedTimeRange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cde0bc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11277aad4);
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



/* Entry: 108cde0dc; end: 108cde0fb; -[SCBatchCaptureVideoSegment trimmedTimeRange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cde0dc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11277aad8);
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



/* Entry: 108cde0fc; end: 108cde10b; -[SCBatchCaptureVideoSegment editedThumbnails] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cde0fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277aaf8);
}



/* Entry: 108cde10c; end: 108cde14b; -[SCBatchCaptureVideoSegment setEditedThumbnails:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cde10c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277aaf8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cde14c; end: 108cde15b; -[SCBatchCaptureVideoSegment thumbnailFuture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cde14c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277aae4);
}



/* Entry: 108cde15c; end: 108cde19b; -[SCBatchCaptureVideoSegment setThumbnailFuture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cde15c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277aae4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cde19c; end: 108cde1ab; -[SCBatchCaptureVideoSegment lensMusicTrackMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cde19c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277aaf4);
}



/* Entry: 108cde1ac; end: 108cde1bb; -[SCBatchCaptureVideoSegment containsTrim] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108cde1ac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277aaac);
}



/* Entry: 108cde1bc; end: 108cde1cb; -[SCBatchCaptureVideoSegment setContainsTrim:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cde1bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277aaac) = param_3;
  return;
}



/* Entry: 108cde1cc; end: 108cde1db; -[SCBatchCaptureVideoSegment commonMetricLoggingParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cde1cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277aaec);
}



/* Entry: 108cde1dc; end: 108cde1e7; -[SCBatchCaptureVideoSegment setCommonMetricLoggingParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cde1dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cde1e8; end: 108cde1f7; -[SCBatchCaptureVideoSegment rawVideoDataFileURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cde1e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277aafc);
}



/* Entry: 108cde1f8; end: 108cde237; -[SCBatchCaptureVideoSegment setRawVideoDataFileURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cde1f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277aafc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cde238; end: 108cde247; -[SCBatchCaptureVideoSegment codecType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cde238(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277aab0);
}



/* Entry: 108cde248; end: 108cde257; -[SCBatchCaptureVideoSegment setCodecType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cde248(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277aab0) = param_3;
  return;
}



/* Entry: 108cde258; end: 108cde267; -[SCBatchCaptureVideoSegment isMultiSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108cde258(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277aab4);
}



/* Entry: 108cde268; end: 108cde277; -[SCBatchCaptureVideoSegment setIsMultiSnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cde268(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277aab4) = param_3;
  return;
}



/* Entry: 108cde278; end: 108cde287; -[SCBatchCaptureVideoSegment isInfiniteDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108cde278(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277aab8);
}



/* Entry: 108cde288; end: 108cde297; -[SCBatchCaptureVideoSegment setIsInfiniteDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cde288(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277aab8) = param_3;
  return;
}



/* Entry: 108cde298; end: 108cde337; -[SCBatchCaptureVideoSegment .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cde298(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277aafc,0);
  _objc_storeStrong(param_1 + _DAT_11277aaec,0);
  _objc_storeStrong(param_1 + _DAT_11277aaf4,0);
  _objc_storeStrong(param_1 + _DAT_11277aae4,0);
  _objc_storeStrong(param_1 + _DAT_11277aaf8,0);
  _objc_storeStrong(param_1 + _DAT_11277aadc,0);
  _objc_storeStrong(param_1 + _DAT_11277aac0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277aae0,0);
  return;
}



/* Entry: 108cde338; end: 108cde39b;  */

undefined1  [16] FUN_108cde338(double param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar1);
  auVar2._8_8_ = param_1 * 62.0;
  auVar2._0_8_ = param_1 * 35.0;
  return auVar2;
}



/* Entry: 108cde39c; end: 108cde483;  */

undefined8 FUN_108cde39c(double param_1,undefined8 param_2,undefined8 param_3,double param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c075d00();
  if ((int)puVar2 == 0) {
    param_4 = 1280.0;
  }
  else {
    puVar2 = PTR_PTR_1126b2930;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c07e1a0();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if ((int)puVar3 == 0) {
      param_4 = 1280.0;
      goto LAB_108cde464;
    }
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    param_4 = param_4 * param_1;
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
LAB_108cde464:
  uVar4 = NEON_fminnm(param_4,0x4094000000000000);
  return uVar4;
}



/* Entry: 108cde484; end: 108cde537;  */

long FUN_108cde484(double *param_1)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  
  dStack_48 = param_1[1];
  dVar3 = *param_1;
  dStack_40 = param_1[2];
  dStack_50 = dVar3;
  _CMTimeGetSeconds(&dStack_50);
  dStack_48 = param_1[1];
  dVar4 = *param_1;
  dStack_40 = param_1[2];
  dStack_50 = dVar4;
  _CMTimeGetSeconds(&dStack_50);
  lVar1 = 3;
  if (3.0 <= dVar4) {
    lVar1 = 4;
  }
  lVar2 = 5;
  if (dVar4 < 4.0) {
    lVar2 = lVar1;
  }
  lVar1 = 6;
  if (dVar4 < 5.0) {
    lVar1 = lVar2;
  }
  lVar2 = (long)((dVar3 + -1.0) / 10.0);
  if (lVar2 + 1 < lVar1) {
    lVar1 = lVar2 + 1;
  }
  return lVar1;
}



/* Entry: 108cde538; end: 108cde78f;  */

void FUN_108cde538(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined1 auStack_168 [24];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _CMTimeMakeWithSeconds(&uStack_68,0x4024000000000000,10);
  _CMTimeMakeWithSeconds(&uStack_80,0x4026000000000000,10);
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_f8 = param_1[4];
  uStack_100 = param_1[3];
  uStack_f0 = param_1[5];
  uStack_148 = uStack_78;
  uStack_150 = uStack_80;
  uStack_140 = uStack_70;
  puVar6 = &uStack_100;
  _CMTimeCompare(puVar6,&uStack_150);
  iVar4 = (int)puVar6;
  puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  uVar1 = uStack_150;
  uVar2 = uStack_148;
  uVar3 = uStack_140;
  uStack_150 = uStack_98;
  uStack_148 = uStack_90;
  uStack_140 = uStack_88;
  while (PTR__OBJC_CLASS___NSValue_1126afdf8 = puVar7, -1 < iVar4) {
    uStack_c8 = 0x100000001;
    uStack_d0 = 2;
    uStack_c0 = 0;
    uStack_98 = uStack_150;
    uStack_90 = uStack_148;
    uStack_88 = uStack_140;
    _CMTimeSubtract(&uStack_100,&uStack_150,&uStack_d0);
    uStack_148 = uStack_60;
    uStack_150 = uStack_68;
    uStack_140 = uStack_58;
    _CMTimeMinimum(&uStack_d0,&uStack_150,&uStack_100);
    uStack_148 = uStack_a8;
    uStack_150 = uStack_b0;
    uStack_140 = uStack_a0;
    uStack_118 = uStack_c8;
    uStack_120 = uStack_d0;
    uStack_110 = uStack_c0;
    _CMTimeRangeMake(&uStack_100,&uStack_150,&uStack_120);
    uStack_148 = uStack_f8;
    uStack_150 = uStack_100;
    uStack_138 = uStack_e8;
    uStack_140 = uStack_f0;
    uStack_128 = uStack_d8;
    uStack_130 = uStack_e0;
    _CMTimeRangeGetEnd(&uStack_120,&uStack_150);
    uStack_148 = uStack_a8;
    uStack_150 = uStack_b0;
    uStack_138 = uStack_98;
    uStack_140 = uStack_a0;
    uStack_128 = uStack_88;
    uStack_130 = uStack_90;
    _CMTimeRangeGetEnd(auStack_168,&uStack_150);
    _CMTimeRangeFromTimeToTime(&uStack_b0,&uStack_120,auStack_168);
    uStack_148 = uStack_f8;
    uStack_150 = uStack_100;
    uStack_138 = uStack_e8;
    uStack_140 = uStack_f0;
    uStack_128 = uStack_d8;
    uStack_130 = uStack_e0;
    puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297240(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5);
    _objc_release(puVar7);
    uStack_f8 = uStack_90;
    uStack_100 = uStack_98;
    uStack_f0 = uStack_88;
    uStack_148 = uStack_78;
    uStack_150 = uStack_80;
    uStack_140 = uStack_70;
    puVar6 = &uStack_100;
    _CMTimeCompare(puVar6,&uStack_150);
    puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    uVar1 = uStack_150;
    uVar2 = uStack_148;
    uVar3 = uStack_140;
    uStack_150 = uStack_98;
    uStack_148 = uStack_90;
    uStack_140 = uStack_88;
    iVar4 = (int)puVar6;
  }
  uStack_e8 = uStack_150;
  uStack_150 = uVar1;
  uStack_e0 = uStack_148;
  uStack_148 = uVar2;
  uStack_d8 = uStack_140;
  uStack_140 = uVar3;
  uStack_100 = uStack_b0;
  uStack_f8 = uStack_a8;
  uStack_f0 = uStack_a0;
  uStack_98 = uStack_e8;
  uStack_90 = uStack_e0;
  uStack_88 = uStack_d8;
  func_0x00010c297240(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar5);
  _objc_release(puVar7);
  puVar7 = puVar5;
  func_0x00010bf51e00(puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108cde790; end: 108cde80f; -[SCFrameSourcesBatch initWithFrameSources:] */

undefined1 * FUN_108cde790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe408;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0d3c80();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    func_0x00010bed2f80(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cde810; end: 108cde83f; -[SCFrameSourcesBatch removeFrameSourceAtIndex:] */

void FUN_108cde810(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c12d3c0(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bee0950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateStartTimeOffsetFromIndex__112595bf8,param_3);
  return;
}



/* Entry: 108cde840; end: 108cde867; -[SCFrameSourcesBatch frameSources] */

void FUN_108cde840(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108cde868; end: 108cdea17; -[SCFrameSourcesBatch sourceContainingItemTime:] */

void FUN_108cde868(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
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
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar10 = *plStack_150;
    do {
      lVar11 = 0;
      do {
        if (*plStack_150 != lVar10) {
          _objc_enumerationMutation(lVar2);
        }
        lVar9 = *(long *)(lStack_158 + lVar11 * 8);
        if (lVar9 == 0) {
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_188 = 0;
          uStack_190 = 0;
        }
        else {
          func_0x00010c084be0(&uStack_190,lVar9);
        }
        uVar13 = param_3[1];
        uVar12 = *param_3;
        uVar8 = param_3[2];
        uStack_118 = uStack_188;
        uStack_120 = uStack_190;
        uStack_110 = uStack_180;
        uStack_e8 = param_3[1];
        uStack_f0 = *param_3;
        uStack_e0 = param_3[2];
        puVar4 = &uStack_120;
        _CMTimeCompare(puVar4,&uStack_f0);
        if ((int)puVar4 < 1) {
          uStack_118 = uStack_188;
          uStack_120 = uStack_190;
          uStack_108 = uStack_178;
          uStack_110 = uStack_180;
          uStack_f8 = uStack_168;
          uStack_100 = uStack_170;
          _CMTimeRangeGetEnd(&uStack_f0,&uStack_120);
          puVar4 = &uStack_f0;
          uStack_120 = uVar12;
          uStack_118 = uVar13;
          uStack_110 = uVar8;
          _CMTimeCompare(puVar4,&uStack_120);
          if (-1 < (int)puVar4) {
            _objc_retain(lVar9);
            goto LAB_108cde9d4;
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  lVar9 = 0;
LAB_108cde9d4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar9);
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(ulong *)(lVar2 + 8);
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126d4d70;
  _objc_opt_class(PTR_PTR_1126d4d70);
  uVar7 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar6);
  uVar1 = uVar5;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  func_0x00010c192d40(uVar1);
  _objc_release(uVar1);
  func_0x00010bee0940(lVar2);
  return;
}



/* Entry: 108cdea18; end: 108cdeacb; -[SCFrameSourcesBatch updateImageFrameSourceDuration:atIndex:] */

void FUN_108cdea18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c0dfd20(uVar2,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d4d70;
  _objc_opt_class(PTR_PTR_1126d4d70);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010c192d40(uVar1);
  _objc_release(uVar1);
  func_0x00010bee0940(param_1);
  return;
}



/* Entry: 108cdeacc; end: 108cdead3; -[SCFrameSourcesBatch _updateAllStartTimeOffsets] */

void FUN_108cdeacc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee0950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateStartTimeOffsetFromIndex__112595bf8,0)
  ;
  return;
}



/* Entry: 108cdead4; end: 108cdec77; -[SCFrameSourcesBatch _updateStartTimeOffsetFromIndex:] */

void FUN_108cdead4(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  double dVar3;
  double dStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  double dStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_58 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  dVar3 = *(double *)PTR__kCMTimeZero_110348670;
  uStack_50 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  dStack_60 = dVar3;
  if (0 < (long)param_3) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c0dfd20(lVar1,param_2,param_3 - 1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      dVar3 = 0.0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      dStack_90 = 0.0;
    }
    else {
      func_0x00010c084be0(&dStack_90,lVar1);
    }
    _CMTimeRangeGetEnd(&dStack_60,&dStack_90);
    _objc_release(lVar1);
  }
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0();
  if (param_3 < uVar2) {
    do {
      lVar1 = *(long *)(param_1 + 8);
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        dStack_90 = 0.0;
        uStack_88 = 0;
        uStack_80 = 0;
      }
      else {
        func_0x00010bf8b160(&dStack_90,lVar1);
      }
      func_0x00010c11fdc0(lVar1);
      if (dVar3 != 1.0) {
        func_0x00010c11fdc0(lVar1);
        uStack_c8 = uStack_88;
        dStack_d0 = dStack_90;
        uStack_c0 = uStack_80;
        _CMTimeMultiplyByFloat64(&dStack_b0,&dStack_d0);
        uStack_88 = uStack_a8;
        dStack_90 = dStack_b0;
        uStack_80 = uStack_a0;
      }
      uStack_a8 = uStack_58;
      dStack_b0 = dStack_60;
      uStack_a0 = uStack_50;
      func_0x00010c1b6320(lVar1);
      uStack_c8 = uStack_58;
      dStack_d0 = dStack_60;
      uStack_c0 = uStack_50;
      uStack_e8 = uStack_88;
      dStack_f0 = dStack_90;
      uStack_e0 = uStack_80;
      _CMTimeAdd(&dStack_b0,&dStack_d0,&dStack_f0);
      uStack_58 = uStack_a8;
      dStack_60 = dStack_b0;
      uStack_50 = uStack_a0;
      dVar3 = dStack_b0;
      _objc_release(lVar1);
      param_3 = param_3 + 1;
      uVar2 = *(ulong *)(param_1 + 8);
      func_0x00010bf529e0();
    } while (param_3 < uVar2);
  }
  return;
}



/* Entry: 108cdec78; end: 108cdec83; -[SCFrameSourcesBatch .cxx_destruct] */

void FUN_108cdec78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cdec84; end: 108cded1f; -[SCFrameSourcesSequencer initWithFrameSourcesBatch:] */

undefined1 * FUN_108cdec84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe410;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bfb70c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x38) = 0xffffffffffffffff;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cded20; end: 108cded7b; -[SCFrameSourcesSequencer currentVideoSource] */

void FUN_108cded20(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126d4d68;
  uVar4 = *(ulong *)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108cded7c; end: 108cdedd7; -[SCFrameSourcesSequencer currentImageSource] */

void FUN_108cded7c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126d4d70;
  uVar4 = *(ulong *)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108cdedd8; end: 108cdee07; -[SCFrameSourcesSequencer reset] */

void FUN_108cdedd8(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x38) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 108cdee08; end: 108cdee8f; -[SCFrameSourcesSequencer advance] */

void FUN_108cdee08(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *(undefined1 *)(param_1 + 10) = 1;
  lVar1 = param_1;
  func_0x00010c075740();
  if ((int)lVar1 == 0) {
    uStack_28 = *(undefined8 *)(param_1 + 0x38);
    uStack_30 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bdc9780(param_1,param_2,&uStack_28,&uStack_30);
    func_0x00010be68320(param_1,param_2,uStack_28,uStack_30);
  }
  else {
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb70a0();
    _objc_release(lVar1);
  }
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}



/* Entry: 108cdee90; end: 108cdef2b; -[SCFrameSourcesSequencer advanceToSourceIndex:sourceMultiSnapIndex:] */

void FUN_108cdee90(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  *(undefined1 *)(param_1 + 10) = 1;
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != *(long *)(param_1 + 0x10)) || (param_4 != *(long *)(param_1 + 0x18))) {
    puVar2 = PTR_PTR_1126d4d68;
    _objc_opt_class(PTR_PTR_1126d4d68);
    _objc_opt_isKindOfClass(lVar1,puVar2);
    func_0x00010be68320(param_1);
  }
  *(undefined1 *)(param_1 + 10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108cdef2c; end: 108cdf157; -[SCFrameSourcesSequencer _isPlayTime:afterSourceAtIndex:snapIndex:] */

ulong FUN_108cdef2c(ulong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                   ulong param_5)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  
  puVar5 = &uStack_e0;
  iVar1 = (int)&uStack_e0;
  uVar6 = param_1;
  func_0x00010bfb70c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (uVar2 == 0) {
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_60,uVar2);
  }
  puVar3 = PTR_PTR_1126d4d68;
  _objc_retain(uVar2);
  _objc_opt_class(puVar3);
  uVar6 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  _objc_release(uVar2);
  if (((uVar6 & 1) != 0) && (uVar2 != 0)) {
    _objc_retain(uVar2);
    uVar6 = uVar2;
    func_0x00010c0d2640();
    if (uVar6 <= param_5) {
      _objc_release(uVar2);
      uVar6 = 1;
      goto LAB_108cdf134;
    }
    uVar6 = uVar2;
    func_0x00010c0d24a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    if (uVar4 == 0) {
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      func_0x00010bdc1120(&uStack_90,uVar4);
    }
    _objc_release(uVar4);
    _objc_release(uVar6);
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    uStack_b8 = uStack_68;
    uStack_c0 = uStack_70;
    _CMTimeRangeGetEnd(&uStack_b0,&uStack_e0);
    uStack_58 = uStack_a8;
    uStack_60 = uStack_b0;
    uStack_50 = uStack_a0;
    _objc_release(uVar2);
  }
  func_0x00010c07cae0();
  if ((param_1 & 1) == 0) {
    if (uVar2 == 0) {
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
    }
    else {
      func_0x00010c084c00(&uStack_e0,uVar2);
    }
    uStack_a8 = uStack_58;
    uStack_b0 = uStack_60;
    uStack_a0 = uStack_50;
    _CMTimeAdd(&uStack_90,&uStack_e0,&uStack_b0);
    uStack_d8 = param_3[1];
    uStack_e0 = *param_3;
    uStack_d0 = param_3[2];
    _CMTimeCompare(&uStack_e0,&uStack_90);
    uVar6 = (ulong)(0 < iVar1);
  }
  else {
    if (uVar2 == 0) {
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x00010c084c00(&uStack_90,uVar2);
    }
    uStack_d8 = param_3[1];
    uStack_e0 = *param_3;
    uStack_d0 = param_3[2];
    _CMTimeCompare(&uStack_e0,&uStack_90);
    uVar6 = (ulong)puVar5 >> 0x1f & 1;
  }
LAB_108cdf134:
  _objc_release(uVar2);
  return uVar6;
}



/* Entry: 108cdf158; end: 108cdf2b7; -[SCFrameSourcesSequencer _onChangeToSourceAtIndex:snapIndex:] */

void FUN_108cdf158(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  _objc_retain(uVar6);
  lVar7 = *(long *)(param_1 + 0x18);
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (uVar1 <= param_3) goto LAB_108cdf2a0;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _objc_release(uVar5);
  *(ulong *)(param_1 + 0x38) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  puVar3 = PTR_PTR_1126d4d68;
  uVar8 = *(ulong *)(param_1 + 0x10);
  _objc_retain(uVar6);
  _objc_opt_class(puVar3);
  uVar4 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar3);
  uVar1 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  if (uVar1 == 0) {
LAB_108cdf234:
    if (uVar6 != uVar8) goto LAB_108cdf23c;
LAB_108cdf274:
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb70a0();
  }
  else {
    uVar4 = uVar6;
    func_0x00010bf747a0();
    if ((int)uVar4 == 0) {
      if (uVar1 != *(ulong *)(param_1 + 0x10)) goto LAB_108cdf234;
      if (lVar7 != *(long *)(param_1 + 0x18)) goto LAB_108cdf23c;
      goto LAB_108cdf274;
    }
    func_0x00010c18d580(uVar6);
LAB_108cdf23c:
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb7080();
  }
  _objc_release(param_1);
  _objc_release(uVar1);
LAB_108cdf2a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 108cdf2b8; end: 108cdf4db; -[SCFrameSourcesSequencer _advanceCurrentSourceIndexTo:snapIndexTo:] */

void FUN_108cdf2b8(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined **ppuVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  double dStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  double dStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_108cdf4dc;
  uStack_70 = 0x108cdf4ec;
  lVar1 = param_1;
  puStack_88 = &uStack_90;
  func_0x00010bf60b60();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = *(undefined8 *)(param_1 + 0x38);
  puStack_d8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x2020000000;
  uStack_b8 = *(undefined8 *)(param_1 + 0x18);
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_108cdf4f4;
  puStack_f8 = &UNK_1109072a8;
  ppuVar2 = &puStack_110;
  lStack_f0 = param_1;
  puStack_e8 = &uStack_90;
  puStack_c8 = puStack_d8;
  puStack_a8 = puStack_e0;
  lStack_68 = lVar1;
  _objc_retainBlock();
  do {
    (*(code *)ppuVar2[2])(ppuVar2);
    uVar5 = puStack_c8[3];
    uVar3 = puStack_88[5];
    func_0x00010c0d2640();
    if (uVar3 <= uVar5) break;
    lVar4 = puStack_88[5];
    func_0x00010c0d24a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      dStack_128 = 0.0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
    }
    else {
      func_0x00010bdc1120(&uStack_140,lVar1);
    }
    uStack_158 = uStack_120;
    dStack_160 = dStack_128;
    uStack_150 = uStack_118;
    dVar6 = dStack_128;
    _CMTimeGetSeconds(&dStack_160);
    _objc_release(lVar1);
    _objc_release(lVar4);
  } while (dVar6 == 0.0);
  *param_3 = puStack_a8[3];
  *param_4 = puStack_c8[3];
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_d0,8);
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(lStack_68);
  return;
}



/* Entry: 108cdf4dc; end: 108cdf4f3;  */

void FUN_108cdf4dc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108cdf4f4; end: 108cdf64b;  */

void FUN_108cdf4f4(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c0dfd40(uVar2,param_2,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18)
                     );
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d4d68;
  _objc_opt_class(PTR_PTR_1126d4d68);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar8 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar8 = 0;
  }
  _objc_retain(uVar8);
  _objc_release(uVar2);
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(ulong *)(lVar6 + 0x28) = uVar8;
  _objc_release(uVar5);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c07cae0();
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  if (iVar1 == 0) {
    if ((lVar6 != 0) &&
       (uVar8 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18), func_0x00010c0d2640(),
       uVar8 < lVar6 - 1U)) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      lVar6 = *(long *)(lVar7 + 0x18) + 1;
LAB_108cdf5f8:
      *(long *)(lVar7 + 0x18) = lVar6;
      return;
    }
    uVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) + 1;
  }
  else {
    if (lVar6 != 0) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      lVar6 = *(long *)(lVar7 + 0x18) + -1;
      if (0 < *(long *)(lVar7 + 0x18)) goto LAB_108cdf5f8;
    }
    lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18);
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
    func_0x00010bf529e0();
    uVar8 = (lVar7 + lVar6) - 1;
  }
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010bf529e0();
  uVar4 = 0;
  if (uVar2 != 0) {
    uVar4 = uVar8 / uVar2;
  }
  *(ulong *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar8 - uVar4 * uVar2;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 0;
  return;
}



/* Entry: 108cdf64c; end: 108cdf7cb; -[SCFrameSourcesSequencer videoPlaybackSession:willRenderFrame:atTime:] */

void FUN_108cdf64c(long param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x00010c07a400();
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010c075740();
      if ((int)lVar1 == 0) {
        lVar1 = *(long *)(param_1 + 0x28);
        uStack_58 = param_5[1];
        uStack_60 = *param_5;
        uStack_50 = param_5[2];
        func_0x00010c2476a0(lVar1,param_2,&uStack_60);
        _objc_retainAutoreleasedReturnValue();
        if (lVar1 == 0) {
          lVar1 = *(long *)(param_1 + 0x30);
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
        }
        if (lVar1 == *(long *)(param_1 + 0x10)) {
          lVar2 = param_1;
          func_0x00010bf60b60();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010c0d2640();
          _objc_release(lVar2);
          if (lVar3 != 0) {
            uStack_58 = param_5[1];
            uStack_60 = *param_5;
            uStack_50 = param_5[2];
            lVar2 = param_1;
            func_0x00010be42aa0(param_1,param_2,&uStack_60,*(undefined8 *)(param_1 + 0x38),
                                *(undefined8 *)(param_1 + 0x18));
            *(char *)(param_1 + 9) = (char)lVar2;
            if ((int)lVar2 != 0) {
              func_0x00010befe2e0(param_1);
            }
          }
        }
        else {
          lVar2 = *(long *)(param_1 + 0x30);
          func_0x00010bfecde0(lVar2,param_2,lVar1);
          if (lVar2 != 0x7fffffffffffffff) {
            func_0x00010be68320(param_1,param_2,lVar2,0);
          }
        }
      }
      else {
        uStack_58 = param_5[1];
        uStack_60 = *param_5;
        uStack_50 = param_5[2];
        lVar1 = param_1;
        func_0x00010be42aa0(param_1,param_2,&uStack_60,*(undefined8 *)(param_1 + 0x38),
                            *(undefined8 *)(param_1 + 0x18));
        if ((int)lVar1 == 0) {
          return;
        }
        func_0x00010bf6b020(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb70a0();
        lVar1 = param_1;
      }
      _objc_release(lVar1);
    }
  }
  return;
}



/* Entry: 108cdf7cc; end: 108cdf7d3; -[SCFrameSourcesSequencer currentFrameSource] */

undefined8 FUN_108cdf7cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cdf7d4; end: 108cdf7db; -[SCFrameSourcesSequencer currentSnapIndex] */

undefined8 FUN_108cdf7d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108cdf7dc; end: 108cdf7e3; -[SCFrameSourcesSequencer isIndividualLooping] */

undefined1 FUN_108cdf7dc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108cdf7e4; end: 108cdf7eb; -[SCFrameSourcesSequencer setIsIndividualLooping:] */

void FUN_108cdf7e4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108cdf7ec; end: 108cdf7f3; -[SCFrameSourcesSequencer playedToSnapEndTime] */

undefined1 FUN_108cdf7ec(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108cdf7f4; end: 108cdf7fb; -[SCFrameSourcesSequencer setPlayedToSnapEndTime:] */

void FUN_108cdf7f4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 108cdf7fc; end: 108cdf803; -[SCFrameSourcesSequencer seekingInProgress] */

undefined1 FUN_108cdf7fc(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108cdf804; end: 108cdf80b; -[SCFrameSourcesSequencer setSeekingInProgress:] */

void FUN_108cdf804(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 108cdf80c; end: 108cdf813; -[SCFrameSourcesSequencer isReversePlaybackEnabled] */

undefined1 FUN_108cdf80c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 108cdf814; end: 108cdf81b; -[SCFrameSourcesSequencer setIsReversePlaybackEnabled:] */

void FUN_108cdf814(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 108cdf81c; end: 108cdf833; -[SCFrameSourcesSequencer delegate] */

void FUN_108cdf81c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cdf834; end: 108cdf83f; -[SCFrameSourcesSequencer setDelegate:] */

void FUN_108cdf834(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 108cdf840; end: 108cdf847; -[SCFrameSourcesSequencer sourcesBatch] */

undefined8 FUN_108cdf840(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108cdf848; end: 108cdf877; -[SCFrameSourcesSequencer setSourcesBatch:] */

void FUN_108cdf848(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108cdf878; end: 108cdf87f; -[SCFrameSourcesSequencer frameSources] */

undefined8 FUN_108cdf878(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108cdf880; end: 108cdf8af; -[SCFrameSourcesSequencer setFrameSources:] */

void FUN_108cdf880(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108cdf8b0; end: 108cdf8b7; -[SCFrameSourcesSequencer currentFrameSourceIndex] */

undefined8 FUN_108cdf8b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108cdf8b8; end: 108cdf8bf; -[SCFrameSourcesSequencer setCurrentFrameSourceIndex:] */

void FUN_108cdf8b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 108cdf8c0; end: 108cdf903; -[SCFrameSourcesSequencer .cxx_destruct] */

void FUN_108cdf8c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108cdf904; end: 108cdf967; -[SCImageFramePlayer replaceCurrentSourceWithSource:] */

undefined8 FUN_108cdf904(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) != param_3) {
    if (*(long *)(param_1 + 8) != 0) {
      func_0x00010bf2eca0();
    }
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
    func_0x00010c0fe680(param_1);
  }
  _objc_release(param_3);
  return 1;
}



/* Entry: 108cdf968; end: 108cdf96f; -[SCImageFramePlayer playImmediately] */

void FUN_108cdf968(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c250150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_startReading_112671a78);
  return;
}



/* Entry: 108cdf970; end: 108cdf9a3; -[SCImageFramePlayer seekToTime:] */

void FUN_108cdf970(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  uStack_20 = param_3[2];
  func_0x00010c157260(*(undefined8 *)(param_1 + 8),param_2,&uStack_30);
  return;
}



/* Entry: 108cdf9a4; end: 108cdf9eb; -[SCImageFramePlayer startRunningAtTime:] */

void FUN_108cdf9a4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010c0fe680();
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  uStack_30 = param_3[2];
  func_0x00010c157260(param_1,param_2,&uStack_40);
  return;
}



/* Entry: 108cdf9ec; end: 108cdf9f3; -[SCImageFramePlayer currentSource] */

undefined8 FUN_108cdf9ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cdf9f4; end: 108cdf9ff; -[SCImageFramePlayer .cxx_destruct] */

void FUN_108cdf9f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cdfa00; end: 108cdfaa3; -[SCImageFrameSource initWithPixelBuffer:imageOrientation:duration:] */

undefined1 *
FUN_108cdfa00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  puStack_38 = PTR_PTR_1126fe418;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _CVPixelBufferRetain();
    *(undefined8 *)((long)puVar2 + 8) = param_3;
    func_0x00010b69138c();
    *(undefined8 *)((long)puVar2 + 0x30) = param_4;
    uVar3 = param_5[2];
    uVar4 = *param_5;
    *(undefined8 *)((long)puVar2 + 0x60) = param_5[1];
    *(undefined8 *)((long)puVar2 + 0x58) = uVar4;
    *(undefined8 *)((long)puVar2 + 0x68) = uVar3;
    *(undefined8 *)((long)puVar2 + 0x28) = 0x3ff0000000000000;
    puVar1 = PTR__kCMTimeZero_110348670;
    uVar3 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    *(undefined8 *)((long)puVar2 + 0x48) = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    *(undefined8 *)((long)puVar2 + 0x40) = uVar3;
    *(undefined8 *)((long)puVar2 + 0x50) = *(undefined8 *)(puVar1 + 0x10);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 108cdfaa4; end: 108cdfaeb; -[SCImageFrameSource dealloc] */

void FUN_108cdfaa4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _CVPixelBufferRelease(*(undefined8 *)(param_1 + 8));
  puStack_28 = PTR_PTR_1126fe418;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108cdfaec; end: 108cdfb1f; -[SCImageFrameSource startReading] */

void FUN_108cdfaec(undefined8 param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0x20) & 1) == 0) {
    _CACurrentMediaTime();
    *(undefined8 *)(param_2 + 0x10) = param_1;
    *(undefined1 *)(param_2 + 0x20) = 1;
  }
  return;
}



/* Entry: 108cdfb20; end: 108cdfb2b; -[SCImageFrameSource cancelReading] */

void FUN_108cdfb20(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 108cdfb2c; end: 108cdfb6f; -[SCImageFrameSource itemTimeRange] */

void FUN_108cdfb2c(long param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x48);
  uStack_30 = *(undefined8 *)(param_1 + 0x40);
  uStack_20 = *(undefined8 *)(param_1 + 0x50);
  uStack_48 = *(undefined8 *)(param_1 + 0x60);
  uStack_50 = *(undefined8 *)(param_1 + 0x58);
  uStack_40 = *(undefined8 *)(param_1 + 0x68);
  _CMTimeRangeMake(&uStack_30,&uStack_50);
  return;
}



/* Entry: 108cdfb70; end: 108cdfbc3; -[SCImageFrameSource setRate:] */

undefined8 FUN_108cdfb70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  return 1;
}



/* Entry: 108cdfbc4; end: 108cdfbcb; -[SCImageFrameSource isSourceReady] */

undefined8 FUN_108cdfbc4(void)

{
  return 1;
}



/* Entry: 108cdfbcc; end: 108cdfbe3; -[SCImageFrameSource itemTimeForHostTime:] */

void FUN_108cdfbcc(double param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbb870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CMTimeMakeWithSeconds_110348450)
            ((param_1 - *(double *)(param_2 + 0x10)) + *(double *)(param_2 + 0x18),1000000);
  return;
}



/* Entry: 108cdfbe4; end: 108cdfc2f; -[SCImageFrameSource hasNewPixelBufferForItemTime:] */

bool FUN_108cdfbe4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  uStack_20 = param_3[2];
  uStack_48 = *(undefined8 *)(param_1 + 0x60);
  uStack_50 = *(undefined8 *)(param_1 + 0x58);
  uStack_40 = *(undefined8 *)(param_1 + 0x68);
  puVar1 = &uStack_30;
  _CMTimeCompare(puVar1,&uStack_50);
  return (int)puVar1 < 1;
}



/* Entry: 108cdfc30; end: 108cdfd07; -[SCImageFrameSource acquirePixelBufferForItemTime:itemTimeForDisplay:] */

void FUN_108cdfc30(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  uStack_60 = param_3[2];
  uStack_88 = *(undefined8 *)(param_1 + 0x48);
  uStack_90 = *(undefined8 *)(param_1 + 0x40);
  uStack_80 = *(undefined8 *)(param_1 + 0x50);
  _CMTimeAdd(&uStack_50,&uStack_70,&uStack_90);
  param_4[1] = uStack_48;
  *param_4 = uStack_50;
  param_4[2] = uStack_40;
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_40 = param_3[2];
  uStack_68 = *(undefined8 *)(param_1 + 0x60);
  uStack_70 = *(undefined8 *)(param_1 + 0x58);
  uStack_60 = *(undefined8 *)(param_1 + 0x68);
  puVar1 = &uStack_50;
  _CMTimeCompare(puVar1,&uStack_70);
  if ((int)puVar1 < 1) {
    _CVPixelBufferRetain(*(undefined8 *)(param_1 + 8));
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 0;
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfe7a00();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 108cdfd08; end: 108cdfd3b; -[SCImageFrameSource acquirePixelBufferForItemTime:forSegmentAtIndex:itemTimeForDisplay:] */

void FUN_108cdfd08(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  uStack_20 = param_3[2];
  func_0x00010beedc60(param_1,param_2,&uStack_30,param_5);
  return;
}



/* Entry: 108cdfd3c; end: 108cdfdc3; -[SCImageFrameSource seekToTime:] */

void FUN_108cdfd3c(double param_1,long param_2,undefined8 param_3,double *param_4)

{
  double dVar1;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  
  if (*(char *)(param_2 + 0x20) == '\x01') {
    _CACurrentMediaTime();
    dStack_48 = param_4[1];
    dVar1 = *param_4;
    dStack_40 = param_4[2];
    dStack_50 = dVar1;
    _CMTimeGetSeconds(&dStack_50);
    *(double *)(param_2 + 0x10) = param_1 - dVar1;
    dVar1 = 0.0;
  }
  else {
    dStack_48 = param_4[1];
    dVar1 = *param_4;
    dStack_40 = param_4[2];
    dStack_50 = dVar1;
    _CMTimeGetSeconds(&dStack_50);
  }
  *(double *)(param_2 + 0x18) = dVar1;
  return;
}



/* Entry: 108cdfdc4; end: 108cdfdd7; -[SCImageFrameSource itemTimeStartOffset] */

void FUN_108cdfdc4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  param_1[1] = *(undefined8 *)(param_2 + 0x48);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x50);
  return;
}



/* Entry: 108cdfdd8; end: 108cdfdeb; -[SCImageFrameSource setItemTimeStartOffset:] */

void FUN_108cdfdd8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x50) = param_3[2];
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return;
}



/* Entry: 108cdfdec; end: 108cdfdf3; -[SCImageFrameSource rate] */

undefined8 FUN_108cdfdec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108cdfdf4; end: 108cdfdfb; -[SCImageFrameSource renderOrientation] */

undefined8 FUN_108cdfdf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108cdfdfc; end: 108cdfe03; -[SCImageFrameSource setRenderOrientation:] */

void FUN_108cdfdfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 108cdfe04; end: 108cdfe0b; -[SCImageFrameSource didProcessFirstFrame] */

undefined1 FUN_108cdfe04(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



/* Entry: 108cdfe0c; end: 108cdfe13; -[SCImageFrameSource setDidProcessFirstFrame:] */

void FUN_108cdfe0c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x21) = param_3;
  return;
}



/* Entry: 108cdfe14; end: 108cdfe2b; -[SCImageFrameSource delegate] */

void FUN_108cdfe14(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cdfe2c; end: 108cdfe37; -[SCImageFrameSource setDelegate:] */

void FUN_108cdfe2c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 108cdfe38; end: 108cdfe4b; -[SCImageFrameSource duration] */

void FUN_108cdfe38(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  param_1[1] = *(undefined8 *)(param_2 + 0x60);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x68);
  return;
}



/* Entry: 108cdfe4c; end: 108cdfe5f; -[SCImageFrameSource setDuration:] */

void FUN_108cdfe4c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x68) = param_3[2];
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  return;
}



/* Entry: 108cdfe60; end: 108cdfe67; -[SCImageFrameSource .cxx_destruct] */

void FUN_108cdfe60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x38);
  return;
}



/* Entry: 108cdfe68; end: 108cdff2b; -[SCVideoFramePlayer initWithAVPlayer:] */

undefined1 * FUN_108cdfe68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe420;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    auVar5 = NEON_fmov(0x3ff0000000000000,8);
    *(long *)((long)puVar2 + 0x48) = auVar5._8_8_;
    *(long *)((long)puVar2 + 0x40) = auVar5._0_8_;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x98);
    *(undefined8 *)((long)puVar2 + 0x98) = param_3;
    _objc_release(uVar3);
    fVar4 = (float)func_0x00010c2a0dc0(*(undefined8 *)((long)puVar2 + 0x98));
    puVar1 = PTR__kCMTimeZero_110348670;
    *(double *)((long)puVar2 + 0xa0) = (double)fVar4;
    uVar3 = *(undefined8 *)puVar1;
    *(undefined8 *)((long)puVar2 + 200) = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)((long)puVar2 + 0xc0) = uVar3;
    *(undefined8 *)((long)puVar2 + 0xd0) = *(undefined8 *)(puVar1 + 0x10);
    func_0x00010c1675a0(*(undefined8 *)((long)puVar2 + 0x98));
    func_0x00010c161660(*(undefined8 *)((long)puVar2 + 0x98));
    *(undefined1 *)((long)puVar2 + 0x92) = 1;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 108cdff2c; end: 108cdff9b; -[SCVideoFramePlayer dealloc] */

void FUN_108cdff2c(long param_1)

{
  undefined *puVar1;
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d560();
    _objc_release(puVar1);
  }
  puStack_28 = PTR_PTR_1126fe420;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108cdff9c; end: 108cdffe7; -[SCVideoFramePlayer setVolume:] */

void FUN_108cdff9c(double param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_1 != *(double *)(param_2 + 0xa0)) {
    uVar1 = param_2;
    func_0x00010be428c0();
    if ((uVar1 & 1) == 0) {
      func_0x00010bea1820(param_1,param_2);
    }
    *(double *)(param_2 + 0xa0) = param_1;
  }
  return;
}



/* Entry: 108cdffe8; end: 108ce0057; -[SCVideoFramePlayer setPlayerRate:] */

void FUN_108cdffe8(double param_1,long param_2)

{
  if ((param_1 != *(double *)(param_2 + 0x48)) || (param_1 != *(double *)(param_2 + 0x40))) {
    *(double *)(param_2 + 0x40) = param_1;
    if (*(char *)(param_2 + 0x50) == '\x01') {
      *(undefined1 *)(param_2 + 0x51) = 1;
    }
    else if (*(char *)(param_2 + 0x39) == '\x01') {
      func_0x00010c288920(param_2);
      *(double *)(param_2 + 0x48) = param_1;
    }
  }
  return;
}



/* Entry: 108ce0058; end: 108ce005f; -[SCVideoFramePlayer isPlaying] */

undefined1 FUN_108ce0058(long param_1)

{
  return *(undefined1 *)(param_1 + 0x39);
}



/* Entry: 108ce0060; end: 108ce006b; -[SCVideoFramePlayer beginConfiguration] */

void FUN_108ce0060(long param_1)

{
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}


