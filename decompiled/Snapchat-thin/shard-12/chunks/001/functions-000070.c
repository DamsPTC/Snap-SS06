/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ceb31c; end: 108ceb333; -[SCBatchCaptureCollectionViewController snapSegmentExpandedCellShouldHandleTouch:] */

uint FUN_108ceb31c(uint param_1)

{
  func_0x00010beb2940();
  return param_1 ^ 1;
}



/* Entry: 108ceb334; end: 108ceb337; -[SCBatchCaptureCollectionViewController snapSegmentExpandedCell:didChangeStartTime:] */

void FUN_108ceb334(void)

{
  return;
}



/* Entry: 108ceb338; end: 108ceb33b; -[SCBatchCaptureCollectionViewController snapSegmentExpandedCell:didChangeEndTime:] */

void FUN_108ceb338(void)

{
  return;
}



/* Entry: 108ceb33c; end: 108ceb4c7; -[SCBatchCaptureCollectionViewController snapSegmentExpandedCell:didSeekToTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ceb33c(long param_1,undefined8 param_2,undefined8 param_3,double *param_4)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277acd8;
  if (*(long *)(param_1 + lVar3) != 0) {
    pdVar1 = (double *)(param_1 + _DAT_11277acc4);
    if ((*(byte *)((long)pdVar1 + 0xc) & 1) != 0) {
      dStack_68 = pdVar1[1];
      dVar4 = *pdVar1;
      dStack_60 = pdVar1[2];
      dStack_70 = dVar4;
      _CMTimeGetSeconds(&dStack_70);
      dStack_68 = param_4[1];
      dVar5 = *param_4;
      dStack_60 = param_4[2];
      dStack_70 = dVar5;
      _CMTimeGetSeconds(&dStack_70);
      if (ABS(dVar4 - dVar5) <= 0.25) goto LAB_108ceb4a4;
    }
    lVar2 = *(long *)(param_1 + _DAT_11277acc0);
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1554e0(*(undefined8 *)(param_1 + lVar3));
    lVar3 = lVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar3 == 0) {
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
    }
    else {
      func_0x00010c250fe0(&uStack_88,lVar3);
    }
    dStack_98 = param_4[1];
    dStack_a0 = *param_4;
    dStack_90 = param_4[2];
    _CMTimeSubtract(&dStack_70,&dStack_a0,&uStack_88);
    param_4[1] = dStack_68;
    *param_4 = dStack_70;
    param_4[2] = dStack_60;
    param_1 = param_1 + _DAT_11277acc8;
    _objc_loadWeakRetained(param_1);
    dStack_68 = param_4[1];
    dStack_70 = *param_4;
    dStack_60 = param_4[2];
    func_0x00010bf16d00();
    _objc_release(param_1);
    _objc_release(lVar3);
  }
LAB_108ceb4a4:
  _objc_release(param_3);
  return;
}



/* Entry: 108ceb4c8; end: 108ceb6eb; -[SCBatchCaptureCollectionViewController snapSegmentExpandedCell:didTrimSegmentToRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ceb4c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + _DAT_11277acd4);
  func_0x00010bfecfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + _DAT_11277acc0);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1554e0(lVar1);
  lVar3 = lVar2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010c250fe0(&uStack_a0,lVar3);
  }
  uStack_b8 = param_4[1];
  uStack_c0 = *param_4;
  uStack_b0 = param_4[2];
  _CMTimeSubtract(&uStack_f0,&uStack_c0,&uStack_a0);
  uStack_98 = param_4[4];
  uStack_a0 = param_4[3];
  uStack_90 = param_4[5];
  _CMTimeRangeMake(&uStack_80,&uStack_f0,&uStack_a0);
  uStack_e8 = uStack_78;
  uStack_f0 = uStack_80;
  uStack_d8 = uStack_68;
  uStack_e0 = uStack_70;
  uStack_c8 = uStack_58;
  uStack_d0 = uStack_60;
  func_0x00010c1bf360(lVar3);
  lVar2 = param_1 + _DAT_11277acc8;
  _objc_loadWeakRetained(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (lVar3 == 0) {
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
  }
  else {
    func_0x00010c09e0e0(&uStack_f0,lVar3);
  }
  func_0x00010c297240();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1554e0(lVar1);
  func_0x00010bf16d60(lVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11277acdc;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf167a0();
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = lVar1 + _DAT_11277acc8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c13dae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108ceb6ec; end: 108ceb71f; -[SCBatchCaptureCollectionViewController snapSegmentExpandedCellFinishedSeeking:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ceb6ec(long param_1)

{
  param_1 = param_1 + _DAT_11277acc8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c13dae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ceb720; end: 108ceb7a3; -[SCBatchCaptureCollectionViewController snapSegmentExpandedCellDidPressDelete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ceb720(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010beb2940();
  if ((int)lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277acd4);
    func_0x00010bfecfa0(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be68b00(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
  else {
    func_0x00010bdd18c0(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ceb7a4; end: 108ceb863; -[SCBatchCaptureCollectionViewController snapSegmentExpandedCellShouldShowDeleteButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108ceb7a4(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11277acd8;
  if (*(long *)(param_1 + lVar5) == 0) {
    bVar1 = false;
  }
  else {
    lVar4 = *(long *)(param_1 + _DAT_11277acc0);
    _objc_retain(param_3);
    func_0x00010c1585e0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c1554e0(uVar2);
    lVar5 = lVar4;
    func_0x00010c0dfd40(lVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = param_3;
    func_0x00010c268120(param_3);
    _objc_release(param_3);
    lVar3 = lVar5;
    func_0x00010c280560(lVar5);
    bVar1 = lVar4 == lVar3;
    _objc_release(lVar5);
  }
  return bVar1;
}



/* Entry: 108ceb864; end: 108ceb867; -[SCBatchCaptureCollectionViewController snapSegmentExpandedCell:didChangeSelectedTimeSlice:] */

void FUN_108ceb864(void)

{
  return;
}



/* Entry: 108ceb868; end: 108ceb86b; -[SCBatchCaptureCollectionViewController snapSegmentExpandedCell:didChangeSelectedTimeRange:] */

void FUN_108ceb868(void)

{
  return;
}



/* Entry: 108ceb86c; end: 108ceb993; -[SCBatchCaptureCollectionViewController preferredContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108ceb86c(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  lVar5 = (long)_DAT_11277acc0;
  lVar1 = *(long *)(param_4 + lVar5);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    param_3 = *(double *)PTR__CGSizeZero_110347620;
    uVar6 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    lVar1 = *(long *)(param_4 + lVar5);
    func_0x00010c1585e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_5,0,lVar2 + -1);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_4 + _DAT_11277acd8) == 0) {
      dVar7 = 17.5;
    }
    else {
      puVar4 = puVar3;
      func_0x00010c071ae0();
      param_1 = 17.5;
      dVar7 = param_1;
      if ((int)puVar4 == 0) {
        dVar7 = 14.5;
      }
    }
    func_0x00010be19060(param_4,param_5,puVar3);
    _CGRectGetMaxX();
    func_0x00010bfb68e0(*(undefined8 *)(param_4 + _DAT_11277acd4));
    param_3 = (param_1 - dVar7) + -20.0 + param_3;
    _objc_release(puVar3);
    uVar6 = 0x404f000000000000;
  }
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = param_3;
  return auVar8;
}



/* Entry: 108ceb994; end: 108cebbab; -[SCBatchCaptureCollectionViewController _frameForCellAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108ceb994(double param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  
  _objc_retain(param_5);
  lVar9 = (long)_DAT_11277acd0;
  lVar2 = *(long *)(param_3 + lVar9);
  func_0x00010c0dff20(lVar2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_5;
    func_0x00010c1554e0();
    if (-1 < lVar3) {
      lVar10 = (long)_DAT_11277acd8;
      dVar11 = 2.5;
      lVar3 = 0;
      do {
        lVar4 = *(long *)(param_3 + lVar10);
        uVar8 = param_2;
        dVar12 = dVar11;
        if (lVar4 != 0) {
          func_0x00010c1554e0();
          param_1 = dVar11 + 10.0;
          uVar8 = param_2;
          dVar12 = param_1;
          if (lVar3 != lVar4 || lVar3 == 0) {
            dVar12 = dVar11;
          }
        }
        puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_4,0,lVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_3 + _DAT_11277accc);
        func_0x00010c0e00e0(uVar6,param_4,puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc10a0();
        _objc_release(uVar6);
        param_2 = 0x4034000000000000;
        puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c2971a0(dVar12,0x4034000000000000,param_1,uVar8,
                            PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_3 + lVar9),param_4,puVar7,puVar5);
        _objc_release(puVar7);
        param_1 = dVar12 + param_1;
        dVar12 = param_1 + 5.0;
        lVar4 = *(long *)(param_3 + lVar10);
        dVar11 = dVar12;
        if (lVar4 != 0) {
          func_0x00010c1554e0();
          param_1 = dVar12 + 10.0;
          dVar11 = param_1;
          if (lVar3 != lVar4) {
            dVar11 = dVar12;
          }
        }
        _objc_release(puVar5);
        lVar4 = param_5;
        func_0x00010c1554e0();
        bVar1 = lVar3 < lVar4;
        lVar3 = lVar3 + 1;
      } while (bVar1);
    }
    uVar8 = *(undefined8 *)(param_3 + lVar9);
    func_0x00010c0e00e0(uVar8,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1080();
    _objc_release(uVar8);
  }
  else {
    func_0x00010bdc1080(lVar2);
  }
  _objc_release(lVar2);
  _objc_release(param_5);
  return param_1;
}



/* Entry: 108cebbac; end: 108cebbf7; -[SCBatchCaptureCollectionViewController editingSegmentIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108cebbac(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_1;
  func_0x00010be34340();
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + (long)_DAT_11277acd8);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1554f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_section_112632f58);
      return lVar2;
    }
    lVar2 = 0x7fffffffffffffff;
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}



/* Entry: 108cebbf8; end: 108cebc43; -[SCBatchCaptureCollectionViewController editingSnapIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108cebbf8(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_1;
  func_0x00010be34340();
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + (long)_DAT_11277acd8);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c142250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_row_11262e2b0);
      return lVar2;
    }
    lVar2 = 0x7fffffffffffffff;
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}



/* Entry: 108cebc44; end: 108cebc63; -[SCBatchCaptureCollectionViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cebc44(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277acdc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cebc64; end: 108cebc77; -[SCBatchCaptureCollectionViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cebc64(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277acdc,param_3);
  return;
}



/* Entry: 108cebc78; end: 108cebc87; -[SCBatchCaptureCollectionViewController configuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cebc78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277acc0);
}



/* Entry: 108cebc88; end: 108cebcc7; -[SCBatchCaptureCollectionViewController setConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cebc88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277acc0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cebcc8; end: 108cebd6f; -[SCBatchCaptureCollectionViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cebcc8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277acdc);
  _objc_storeStrong(param_1 + _DAT_11277ace0,0);
  _objc_storeStrong(param_1 + _DAT_11277acd0,0);
  _objc_storeStrong(param_1 + _DAT_11277accc,0);
  _objc_storeStrong(param_1 + _DAT_11277acc0,0);
  _objc_storeStrong(param_1 + _DAT_11277acd8,0);
  _objc_storeStrong(param_1 + _DAT_11277ace4,0);
  _objc_storeStrong(param_1 + _DAT_11277acd4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277acc8);
  return;
}



/* Entry: 108cebd70; end: 108cebd87;  */

void FUN_108cebd70(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef2238;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110ef2238,
                      &PTR____CFConstantStringClassReference_110ef2258,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 108cebd88; end: 108cebe2f; -[SCBatchCaptureSegmentMemoriesItem initWithGalleryEntry:gallerySnaps:] */

undefined1 *
FUN_108cebd88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe448;
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



/* Entry: 108cebe30; end: 108cebe53; -[SCBatchCaptureSegmentMemoriesItem copyWithZone:] */

undefined8 FUN_108cebe30(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108cebe54; end: 108cebec7; -[SCBatchCaptureSegmentMemoriesItem hash] */

undefined8 * FUN_108cebe54(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_108cebf48:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108cebf54;
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
          goto LAB_108cebf54;
        }
        goto LAB_108cebf48;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108cebf54:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108cebec8; end: 108cebf6f; -[SCBatchCaptureSegmentMemoriesItem isEqual:] */

long FUN_108cebec8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108cebf48:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108cebf54;
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
          goto LAB_108cebf54;
        }
        goto LAB_108cebf48;
      }
    }
    lVar3 = 0;
  }
LAB_108cebf54:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108cebf70; end: 108cebf77; -[SCBatchCaptureSegmentMemoriesItem galleryEntry] */

undefined8 FUN_108cebf70(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cebf78; end: 108cebf7f; -[SCBatchCaptureSegmentMemoriesItem gallerySnaps] */

undefined8 FUN_108cebf78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cebf80; end: 108cebfaf; -[SCBatchCaptureSegmentMemoriesItem .cxx_destruct] */

void FUN_108cebf80(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cebfb0; end: 108cebfcb; +[SCBatchCaptureSegmentMemoriesItemBuilder batchCaptureSegmentMemoriesItem] */

void FUN_108cebfb0(void)

{
  _objc_alloc_init(PTR_PTR_1126d4c08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cebfcc; end: 108cec09f; +[SCBatchCaptureSegmentMemoriesItemBuilder batchCaptureSegmentMemoriesItemFromExistingBatchCaptureSegmentMemoriesItem:] */

void FUN_108cebfcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126d4c08;
  _objc_retain(param_3);
  func_0x00010bf16be0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfbcca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2aeac0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfbd940(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = puVar3;
  func_0x00010c2aec60(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108cec0a0; end: 108cec0cf; -[SCBatchCaptureSegmentMemoriesItemBuilder build] */

void FUN_108cec0a0(void)

{
  _objc_alloc(PTR_PTR_1126dbb38);
  func_0x00010c016e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cec0d0; end: 108cec107; -[SCBatchCaptureSegmentMemoriesItemBuilder withGalleryEntry:] */

long FUN_108cec0d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108cec108; end: 108cec13f; -[SCBatchCaptureSegmentMemoriesItemBuilder withGallerySnaps:] */

long FUN_108cec108(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108cec140; end: 108cec16f; -[SCBatchCaptureSegmentMemoriesItemBuilder .cxx_destruct] */

void FUN_108cec140(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cec170; end: 108cec1f7; -[SCAdaptiveVideoTranscodingConfigurationParser _levelToDefaultConfigurationMap] */

void FUN_108cec170(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108cec1f8;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam000000011372e408 != -1) {
    func_0x000107c27d9c(0x11372e408,&puStack_48);
  }
  uVar1 = uRam000000011372e400;
  _objc_retain(uRam000000011372e400);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108cec1f8; end: 108cec433;  */

void FUN_108cec1f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_d8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0390;
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_opt_class();
  func_0x00010bf690e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d03a8;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  lStack_98 = lVar2;
  _objc_opt_class();
  func_0x00010bf690e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d03c0;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_90 = uVar3;
  _objc_opt_class();
  func_0x00010bf690e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d03d8;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uStack_88 = uVar4;
  _objc_opt_class();
  func_0x00010bf690e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d03f0;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uStack_80 = uVar5;
  _objc_opt_class();
  func_0x00010bf690e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0408;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uStack_78 = uVar6;
  _objc_opt_class();
  func_0x00010bf690e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0420;
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = uVar7;
  _objc_opt_class();
  func_0x00010bf690e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0438;
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar8;
  _objc_opt_class();
  func_0x00010bf690e0();
  _objc_retainAutoreleasedReturnValue();
  plVar12 = &lStack_98;
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_60 = uVar9;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,plVar12,&ppuStack_d8,8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam000000011372e400;
  puRam000000011372e400 = puVar10;
  _objc_release(uVar1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010be4c360();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,plVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  func_0x00010c0e00e0(lVar2,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(lVar2);
  if (lVar11 == 0) {
    func_0x000108cecb44();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar11);
    lVar2 = lVar11;
  }
  _objc_release(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108cec434; end: 108cec4db; -[SCAdaptiveVideoTranscodingConfigurationParser _configurationForMediaQualityLevel:] */

void FUN_108cec434(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x00010be4c360();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0e00e0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
  if (lVar2 == 0) {
    func_0x000108cecb44();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    param_1 = lVar2;
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108cec4dc; end: 108cec84f; -[SCAdaptiveVideoTranscodingConfigurationParser configurationForMediaQualityLevel:sourceSize:circumstanceEngine:] */

void FUN_108cec4dc(double param_1,double param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5,undefined *param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_118;
  undefined1 auStack_110 [128];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_118 = param_5;
  _objc_retain(param_6);
  puVar2 = param_3;
  func_0x00010be4c360();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  puVar13 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (puVar4 == (undefined *)0x0) {
    func_0x000108cecb44();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    dVar17 = param_1;
    if (param_2 <= param_1) {
      dVar17 = param_2;
    }
    puVar2 = puVar4;
    func_0x00010c13a500();
    dVar16 = dVar17;
    if ((double)(int)puVar2 <= dVar17) {
      dVar16 = (double)(int)puVar2;
    }
    lVar9 = (long)dVar16;
    puVar2 = puVar4;
    func_0x00010c13a500();
    if (((lVar9 == (int)puVar2) || (param_1 == 0.0)) || (param_2 == 0.0)) {
      func_0x00010bde48a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = param_5;
      puVar2 = param_3;
    }
    else {
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      lStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      plStack_150 = (long *)0x0;
      puVar2 = param_3;
      func_0x00010be4c360();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf52a60();
      if (puVar3 == (undefined *)0x0) {
        _objc_release(puVar2);
        lVar11 = 0;
LAB_108cec7d8:
        puVar13 = puStack_118;
        func_0x00010bde48a0(param_3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar13 = (undefined *)0x0;
        lVar11 = 0;
        lVar10 = *plStack_150;
        do {
          puVar12 = (undefined *)0x0;
          do {
            if (*plStack_150 != lVar10) {
              _objc_enumerationMutation(puVar2);
            }
            lVar14 = *(long *)(lStack_158 + (long)puVar12 * 8);
            puVar5 = param_3;
            func_0x00010be4c360();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
            puVar5 = puVar6;
            func_0x00010c13a500();
            if (puVar13 == (undefined *)0x0) {
              _objc_retain(puVar6);
LAB_108cec6f4:
              _objc_retain(lVar14);
              _objc_release(lVar11);
              lVar11 = lVar14;
              puVar13 = puVar6;
            }
            else {
              puVar7 = puVar13;
              func_0x00010c13a500();
              iVar1 = (int)puVar7;
              iVar15 = (int)puVar5;
              if ((iVar1 < lVar9) || (iVar15 < lVar9)) {
                if (iVar15 < iVar1) goto LAB_108cec70c;
LAB_108cec6e4:
                _objc_retain(puVar6);
                _objc_release(puVar13);
                goto LAB_108cec6f4;
              }
              if (iVar15 < iVar1) goto LAB_108cec6e4;
              if (iVar15 == iVar1) {
                puVar5 = puVar6;
                func_0x00010bf1c7c0();
                puVar7 = puVar13;
                func_0x00010bf1c7c0();
                if ((int)puVar7 < (int)puVar5) goto LAB_108cec6e4;
              }
            }
LAB_108cec70c:
            _objc_release(puVar6);
            puVar12 = puVar12 + 1;
          } while (puVar3 != puVar12);
          puVar3 = puVar2;
          func_0x00010bf52a60(puVar2,param_4,&uStack_160,auStack_110,0x10);
        } while (puVar3 != (undefined *)0x0);
        _objc_release(puVar2);
        if (puVar13 == (undefined *)0x0) {
          if (lVar11 != 0) {
            func_0x00010bfcbfc0(lVar11,param_4,&puStack_118);
          }
          goto LAB_108cec7d8;
        }
        param_3 = puVar13;
        func_0x00010bf51e00(puVar13);
        _objc_release(puVar13);
        func_0x00010c1eca60(param_3,param_4,(int)dVar17);
        if (param_2 <= param_1) {
          param_2 = param_1;
        }
        puVar13 = (undefined *)(ulong)(uint)(int)param_2;
        func_0x00010c1eca20(param_3);
      }
      _objc_release(lVar11);
      puVar2 = param_3;
    }
  }
  _objc_release(puVar4);
  _objc_release(param_6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  func_0x000108cecb44();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_6;
  if ((long)puVar13 < 0x1c2) {
    if ((long)puVar13 < 300) {
      if (puVar13 == (undefined *)0x64) {
        puVar2 = PTR_PTR_1126dbb40;
        _objc_alloc_init(PTR_PTR_1126dbb40);
        _objc_release(param_6);
        func_0x00010c1eca60(puVar2,param_4,0x90);
        func_0x00010c1eca20(puVar2,param_4,0xb0);
        func_0x00010c19f460(puVar2,param_4,0x1e);
        uVar8 = 0x5dc00;
      }
      else {
        if (puVar13 != (undefined *)0xc8) goto LAB_108cecafc;
        puVar2 = PTR_PTR_1126dbb40;
        _objc_alloc_init(PTR_PTR_1126dbb40);
        _objc_release(param_6);
        func_0x00010c1eca60(puVar2,param_4,0x168);
        func_0x00010c1eca20(puVar2,param_4,0x280);
        func_0x00010c19f460(puVar2,param_4,0x1e);
        uVar8 = 800000;
      }
      goto LAB_108cecaf4;
    }
    if (puVar13 == (undefined *)0x12c) {
      func_0x000108cecb44();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_6);
    }
    else if (puVar13 == (undefined *)0x190) {
      puVar2 = PTR_PTR_1126dbb40;
      _objc_alloc_init(PTR_PTR_1126dbb40);
      _objc_release(param_6);
      func_0x00010c1eca60(puVar2,param_4,0x21c);
      func_0x00010c1eca20(puVar2,param_4,0x3c0);
      func_0x00010c19f460(puVar2,param_4,0x1e);
      uVar8 = 2000000;
      goto LAB_108cecaf4;
    }
  }
  else {
    if ((long)puVar13 < 600) {
      if (puVar13 == (undefined *)0x1c2) {
        puVar2 = PTR_PTR_1126dbb40;
        _objc_alloc_init(PTR_PTR_1126dbb40);
        _objc_release(param_6);
        func_0x00010c1eca60(puVar2,param_4,0x280);
        func_0x00010c1eca20(puVar2,param_4,0x480);
        func_0x00010c19f460(puVar2,param_4,0x1e);
        uVar8 = 2600000;
      }
      else {
        if (puVar13 != (undefined *)0x1f4) goto LAB_108cecafc;
        puVar2 = PTR_PTR_1126dbb40;
        _objc_alloc_init(PTR_PTR_1126dbb40);
        _objc_release(param_6);
        func_0x00010c1eca60(puVar2,param_4,0x2d0);
        func_0x00010c1eca20(puVar2,param_4,0x500);
        func_0x00010c19f460(puVar2,param_4,0x1e);
        uVar8 = 3200000;
      }
    }
    else if (puVar13 == (undefined *)0x258) {
      puVar2 = PTR_PTR_1126dbb40;
      _objc_alloc_init(PTR_PTR_1126dbb40);
      _objc_release(param_6);
      func_0x00010c1eca60(puVar2,param_4,0x2d0);
      func_0x00010c1eca20(puVar2,param_4,0x500);
      func_0x00010c19f460(puVar2,param_4,0x1e);
      uVar8 = 5000000;
    }
    else {
      if (puVar13 != (undefined *)0x2bc) goto LAB_108cecafc;
      puVar2 = PTR_PTR_1126dbb40;
      _objc_alloc_init(PTR_PTR_1126dbb40);
      _objc_release(param_6);
      func_0x00010c1eca60(puVar2,param_4,0x438);
      func_0x00010c1eca20(puVar2,param_4,0x780);
      func_0x00010c19f460(puVar2,param_4,0x1e);
      uVar8 = 7000000;
    }
LAB_108cecaf4:
    func_0x00010c171840(puVar2,param_4,uVar8);
  }
LAB_108cecafc:
  puVar3 = PTR_PTR_1126dbb48;
  _objc_alloc_init(PTR_PTR_1126dbb48);
  func_0x00010c17dd20();
  func_0x00010c1e3ee0(puVar3,param_4,2);
  func_0x00010c17dd20(puVar2,param_4,puVar3);
  _objc_release(puVar3);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cec850; end: 108cecb9f; +[SCAdaptiveVideoTranscodingConfigurationParser defaultConfigurationForMediaQualityLevel:] */

void FUN_108cec850(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000108cecb44();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  if (param_3 < 0x1c2) {
    if (param_3 < 300) {
      if (param_3 == 100) {
        puVar1 = PTR_PTR_1126dbb40;
        _objc_alloc_init(PTR_PTR_1126dbb40);
        _objc_release(param_1);
        func_0x00010c1eca60(puVar1,param_2,0x90);
        func_0x00010c1eca20(puVar1,param_2,0xb0);
        func_0x00010c19f460(puVar1,param_2,0x1e);
        uVar3 = 0x5dc00;
      }
      else {
        if (param_3 != 200) goto LAB_108cecafc;
        puVar1 = PTR_PTR_1126dbb40;
        _objc_alloc_init(PTR_PTR_1126dbb40);
        _objc_release(param_1);
        func_0x00010c1eca60(puVar1,param_2,0x168);
        func_0x00010c1eca20(puVar1,param_2,0x280);
        func_0x00010c19f460(puVar1,param_2,0x1e);
        uVar3 = 800000;
      }
    }
    else {
      if (param_3 == 300) {
        func_0x000108cecb44();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_1);
        goto LAB_108cecafc;
      }
      if (param_3 != 400) goto LAB_108cecafc;
      puVar1 = PTR_PTR_1126dbb40;
      _objc_alloc_init(PTR_PTR_1126dbb40);
      _objc_release(param_1);
      func_0x00010c1eca60(puVar1,param_2,0x21c);
      func_0x00010c1eca20(puVar1,param_2,0x3c0);
      func_0x00010c19f460(puVar1,param_2,0x1e);
      uVar3 = 2000000;
    }
  }
  else if (param_3 < 600) {
    if (param_3 == 0x1c2) {
      puVar1 = PTR_PTR_1126dbb40;
      _objc_alloc_init(PTR_PTR_1126dbb40);
      _objc_release(param_1);
      func_0x00010c1eca60(puVar1,param_2,0x280);
      func_0x00010c1eca20(puVar1,param_2,0x480);
      func_0x00010c19f460(puVar1,param_2,0x1e);
      uVar3 = 2600000;
    }
    else {
      if (param_3 != 500) goto LAB_108cecafc;
      puVar1 = PTR_PTR_1126dbb40;
      _objc_alloc_init(PTR_PTR_1126dbb40);
      _objc_release(param_1);
      func_0x00010c1eca60(puVar1,param_2,0x2d0);
      func_0x00010c1eca20(puVar1,param_2,0x500);
      func_0x00010c19f460(puVar1,param_2,0x1e);
      uVar3 = 3200000;
    }
  }
  else if (param_3 == 600) {
    puVar1 = PTR_PTR_1126dbb40;
    _objc_alloc_init(PTR_PTR_1126dbb40);
    _objc_release(param_1);
    func_0x00010c1eca60(puVar1,param_2,0x2d0);
    func_0x00010c1eca20(puVar1,param_2,0x500);
    func_0x00010c19f460(puVar1,param_2,0x1e);
    uVar3 = 5000000;
  }
  else {
    if (param_3 != 700) goto LAB_108cecafc;
    puVar1 = PTR_PTR_1126dbb40;
    _objc_alloc_init(PTR_PTR_1126dbb40);
    _objc_release(param_1);
    func_0x00010c1eca60(puVar1,param_2,0x438);
    func_0x00010c1eca20(puVar1,param_2,0x780);
    func_0x00010c19f460(puVar1,param_2,0x1e);
    uVar3 = 7000000;
  }
  func_0x00010c171840(puVar1,param_2,uVar3);
LAB_108cecafc:
  puVar2 = PTR_PTR_1126dbb48;
  _objc_alloc_init(PTR_PTR_1126dbb48);
  func_0x00010c17dd20();
  func_0x00010c1e3ee0(puVar2,param_2,2);
  func_0x00010c17dd20(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108cecba0; end: 108cecc7f; +[SCMediaTranscodingDestinationInfo createWithDestination:] */

void FUN_108cecba0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c4288;
  _objc_alloc_init();
  if (param_3 < 4) {
    if (param_3 == 1) {
      if (puVar1 != (undefined *)0x0) {
        lVar3 = 0x16;
LAB_108cecc3c:
        puVar1[lVar3] = 1;
        _objc_retain(puVar1);
      }
    }
    else if (param_3 == 2) {
      if (puVar1 != (undefined *)0x0) {
        lVar3 = 0x1b;
        goto LAB_108cecc3c;
      }
    }
    else {
      if (param_3 != 3) goto LAB_108cecc54;
      if (puVar1 != (undefined *)0x0) {
        lVar3 = 0x12;
        goto LAB_108cecc3c;
      }
    }
  }
  else if (param_3 == 4) {
    if (puVar1 != (undefined *)0x0) {
      lVar3 = 0x19;
      goto LAB_108cecc3c;
    }
  }
  else if (param_3 == 5) {
    if (puVar1 != (undefined *)0x0) {
      lVar3 = 0x1c;
      goto LAB_108cecc3c;
    }
  }
  else {
    if (param_3 != 6) goto LAB_108cecc54;
    if (puVar1 != (undefined *)0x0) {
      lVar3 = 0x1a;
      goto LAB_108cecc3c;
    }
  }
  _objc_release(puVar1);
LAB_108cecc54:
  puVar2 = puVar1;
  func_0x00010b68f1bc(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cecc80; end: 108cecd53; -[SCMediaTranscodingDestinationInfo destination] */

ulong FUN_108cecc80(ulong param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    if ((*(byte *)(param_1 + 0x14) & 1) != 0) {
      return 5;
    }
    if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
      return 2;
    }
    if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
      return 4;
    }
    if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
      return 6;
    }
    lVar3 = *(long *)(param_1 + 0x18);
  }
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    if (param_1 == 0) {
      _objc_release(lVar3);
    }
    else {
      bVar1 = *(byte *)(param_1 + 8);
      _objc_release(lVar3);
      if ((bVar1 & 1) != 0) goto LAB_108cecd10;
      if ((*(byte *)(param_1 + 10) & 1) != 0) {
        return 3;
      }
    }
    func_0x00010c073440(param_1);
    param_1 = param_1 & 0xffffffff;
  }
  else {
    _objc_release(lVar3);
LAB_108cecd10:
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108cecd54; end: 108cecdb7; -[SCMediaTranscodingDestinationInfo isForDirectMessages] */

byte FUN_108cecd54(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x18);
  }
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf529e0();
  bVar1 = lVar2 != 0;
  if ((param_1 != 0) && (lVar2 == 0)) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  _objc_release(lVar3);
  return bVar1 & 1;
}



/* Entry: 108cecdb8; end: 108cecdef; -[SCMediaTranscodingDestinationInfo isForDirectMessagesOrPreUpload] */

ulong FUN_108cecdb8(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c073360();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0da670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_noDestinationSpecified_1126143b0);
  return param_1;
}



/* Entry: 108cecdf0; end: 108cece27; -[SCMediaTranscodingDestinationInfo isForPosting] */

byte FUN_108cecdf0(long param_1)

{
  byte bVar1;
  
  if (param_1 == 0) {
    bVar1 = 0;
  }
  else if ((((*(byte *)(param_1 + 0xe) & 1) == 0) && ((*(byte *)(param_1 + 10) & 1) == 0)) &&
          ((*(byte *)(param_1 + 0xb) & 1) == 0)) {
    bVar1 = *(byte *)(param_1 + 0xf);
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}



/* Entry: 108cece28; end: 108cece5f; -[SCMediaTranscodingDestinationInfo isForExporting] */

byte FUN_108cece28(long param_1)

{
  byte bVar1;
  
  if (param_1 == 0) {
    bVar1 = 0;
  }
  else if ((((*(byte *)(param_1 + 0x11) & 1) == 0) && ((*(byte *)(param_1 + 0x12) & 1) == 0)) &&
          ((*(byte *)(param_1 + 0x13) & 1) == 0)) {
    bVar1 = *(byte *)(param_1 + 0x14);
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}



/* Entry: 108cece60; end: 108cecebb; -[SCMediaTranscodingDestinationInfo noDestinationSpecified] */

byte FUN_108cece60(ulong param_1)

{
  ulong uVar1;
  byte bVar2;
  
  uVar1 = param_1;
  func_0x00010c073360();
  if ((((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c073440(), (uVar1 & 1) == 0)) &&
     (uVar1 = param_1, func_0x00010c0733a0(), (uVar1 & 1) == 0)) {
    if (param_1 == 0) {
      bVar2 = 1;
    }
    else {
      bVar2 = *(byte *)(param_1 + 9) ^ 1;
    }
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}



/* Entry: 108cecebc; end: 108cecf0f; -[SCMediaTranscodingDestinationInfo isValid] */

undefined8 FUN_108cecebc(ulong param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  iVar1 = (int)param_1;
  iVar2 = iVar1;
  func_0x00010c073380();
  if (((iVar2 == 0) || (uVar3 = param_1, func_0x00010c0733a0(), (uVar3 & 1) == 0)) &&
     ((func_0x00010c073440(), iVar1 == 0 || (func_0x00010c0733a0(), (param_1 & 1) == 0)))) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 108cecf10; end: 108cecf7b; -[SCMediaTranscodingDestinationInfo isDirectMessageToFriendsOnly] */

bool FUN_108cecf10(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = param_1;
  func_0x00010c073440();
  if (((uVar2 & 1) == 0) && (uVar2 = param_1, func_0x00010c0733a0(), (uVar2 & 1) == 0)) {
    lVar4 = 0;
    if (param_1 != 0) {
      if ((*(byte *)(param_1 + 8) & 1) != 0) goto LAB_108cecf40;
      lVar4 = *(long *)(param_1 + 0x18);
    }
    _objc_retain(lVar4);
    lVar3 = lVar4;
    func_0x00010bf529e0(lVar4);
    bVar1 = lVar3 != 0;
    _objc_release(lVar4);
  }
  else {
LAB_108cecf40:
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 108cecf7c; end: 108cecfc3; -[SCMediaTranscodingDestinationInfo isPostingToSpotlightOnly] */

uint FUN_108cecf7c(long param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if ((((*(char *)(param_1 + 10) != '\x01') || ((*(byte *)(param_1 + 0xb) & 1) != 0)) ||
        ((*(byte *)(param_1 + 0xe) & 1) != 0)) || ((*(byte *)(param_1 + 0xf) & 1) != 0)) {
      return 0;
    }
    func_0x00010c073360();
    uVar1 = (uint)param_1 ^ 1;
  }
  return uVar1;
}



/* Entry: 108cecfc4; end: 108ced017; -[SCMediaTranscodingDestinationInfo isPostingToSpotlightAndSnapMapOnly] */

uint FUN_108cecfc4(long param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if ((((*(char *)(param_1 + 10) != '\x01') || (*(char *)(param_1 + 0xc) != '\x01')) ||
        ((*(byte *)(param_1 + 0xd) & 1) != 0)) ||
       (((*(byte *)(param_1 + 0xe) & 1) != 0 || ((*(byte *)(param_1 + 0xf) & 1) != 0)))) {
      return 0;
    }
    func_0x00010c073360();
    uVar1 = (uint)param_1 ^ 1;
  }
  return uVar1;
}



/* Entry: 108ced018; end: 108ced03f; -[SCMediaTranscodingDestinationInfo isForPublicContents] */

byte FUN_108ced018(long param_1)

{
  byte bVar1;
  
  if (param_1 == 0) {
    bVar1 = 0;
  }
  else if ((*(byte *)(param_1 + 10) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0xb);
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}



/* Entry: 108ced040; end: 108ced08b; -[SCVideoTranscodingAnimatedImageConfigurationProvider bitrateForSending] */

double FUN_108ced040(long param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = 0.0;
  if (*(long *)(param_1 + 8) != 0) {
    dVar1 = *(double *)(*(long *)(param_1 + 8) + 0x18);
  }
  dVar3 = ABS(dVar1 + 0.0) * 2.220446049250313e-16;
  if (dVar3 <= 2.2250738585072014e-308) {
    dVar3 = 2.2250738585072014e-308;
  }
  dVar2 = 1400000.0;
  if (dVar3 <= ABS(dVar1)) {
    dVar2 = dVar1;
  }
  return dVar2;
}



/* Entry: 108ced08c; end: 108ced0d7; -[SCVideoTranscodingAnimatedImageConfigurationProvider bitrateForSaving] */

double FUN_108ced08c(long param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = 0.0;
  if (*(long *)(param_1 + 8) != 0) {
    dVar1 = *(double *)(*(long *)(param_1 + 8) + 0x18);
  }
  dVar3 = ABS(dVar1 + 0.0) * 2.220446049250313e-16;
  if (dVar3 <= 2.2250738585072014e-308) {
    dVar3 = 2.2250738585072014e-308;
  }
  dVar2 = 1400000.0;
  if (dVar3 <= ABS(dVar1)) {
    dVar2 = dVar1;
  }
  return dVar2;
}



/* Entry: 108ced0d8; end: 108ced16f; -[SCVideoTranscodingAnimatedImageConfigurationProvider targetSizeForSending] */

void FUN_108ced0d8(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    if (*(double *)PTR__CGSizeZero_110347620 != 0.0) {
      return;
    }
    if (*(double *)(PTR__CGSizeZero_110347620 + 8) != 0.0) {
      return;
    }
  }
  else {
    bVar1 = false;
    if ((*(double *)(lVar2 + 0x98) == *(double *)PTR__CGSizeZero_110347620) &&
       (bVar1 = false,
       !NAN(*(double *)(lVar2 + 0xa0)) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
      bVar1 = *(double *)(lVar2 + 0xa0) == *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    if (!bVar1) {
      return;
    }
  }
  func_0x00010b690b78(0x500);
  NEON_fmov(0x3fe0000000000000,8);
  return;
}



/* Entry: 108ced170; end: 108ced207; -[SCVideoTranscodingAnimatedImageConfigurationProvider targetSizeForSaving] */

void FUN_108ced170(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    if (*(double *)PTR__CGSizeZero_110347620 != 0.0) {
      return;
    }
    if (*(double *)(PTR__CGSizeZero_110347620 + 8) != 0.0) {
      return;
    }
  }
  else {
    bVar1 = false;
    if ((*(double *)(lVar2 + 0x98) == *(double *)PTR__CGSizeZero_110347620) &&
       (bVar1 = false,
       !NAN(*(double *)(lVar2 + 0xa0)) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
      bVar1 = *(double *)(lVar2 + 0xa0) == *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    if (!bVar1) {
      return;
    }
  }
  func_0x00010b690b78(0x500);
  NEON_fmov(0x3fe0000000000000,8);
  return;
}



/* Entry: 108ced208; end: 108ced20f; -[SCVideoTranscodingAnimatedImageConfigurationProvider shouldMuteAudio] */

undefined8 FUN_108ced208(void)

{
  return 1;
}



/* Entry: 108ced210; end: 108ced363; -[SCVideoTranscodingBaseConfigurationProvider initWithProviderInput:mediaCapabilityDetector:circumstanceEngine:grapheneRegistry:] */

undefined1 *
FUN_108ced210(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fe450;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(long *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bf798;
    _objc_alloc_init();
    if (param_3 == 0) {
      uVar2 = 0;
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_3 + 0x88);
      uVar2 = *(undefined8 *)(param_3 + 0x90);
    }
    puVar4 = puVar3;
    func_0x00010bf467a0(uVar5,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ced364; end: 108ced367; -[SCVideoTranscodingBaseConfigurationProvider bitrateForSending] */

void FUN_108ced364(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd4b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__bitrateFromMediaQualityLevel_112552c80);
  return;
}



/* Entry: 108ced368; end: 108ced693; -[SCVideoTranscodingBaseConfigurationProvider _bitrateFromMediaQualityLevel] */

double FUN_108ced368(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar6;
  
  lVar9 = *(long *)(param_1 + 8);
  dVar13 = 0.0;
  if (lVar9 != 0) {
    dVar16 = *(double *)(lVar9 + 0x18);
    if (*(long *)(lVar9 + 0x58) == 1) {
      uVar11 = *(undefined8 *)(lVar9 + 0x60);
      _objc_retain(uVar11);
      uVar6 = uVar11;
      func_0x00010c073380();
      uVar4 = (uint)uVar6;
      _objc_release(uVar11);
      lVar9 = *(long *)(param_1 + 8);
      dVar13 = dVar16;
      if (lVar9 == 0) goto LAB_108ced3ec;
    }
    else {
      uVar4 = 0;
    }
    dVar13 = 0.0;
    if ((0 < *(long *)(lVar9 + 0x68) & uVar4) == 0) {
      dVar13 = dVar16;
    }
  }
LAB_108ced3ec:
  dVar16 = ABS(dVar13);
  dVar15 = ABS(dVar13 + 0.0) * 2.220446049250313e-16;
  bVar2 = true;
  if ((2.2250738585072014e-308 <= dVar16) && (bVar2 = false, !NAN(dVar16) && !NAN(dVar15))) {
    bVar2 = dVar16 < dVar15;
  }
  if (!bVar2) {
    return dVar13;
  }
  lVar9 = 1300000;
  uVar7 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf1c7c0();
  if (0x176 < ((uint)(uVar7 >> 10) & 0x3fffff)) {
    uVar4 = (uint)*(undefined8 *)(param_1 + 0x10);
    func_0x00010bf1c7c0();
    if (uVar4 < 0x6acfc1) {
      iVar5 = (int)*(undefined8 *)(param_1 + 0x10);
      func_0x00010bf1c7c0();
      lVar9 = (long)iVar5;
    }
  }
  fVar14 = 1.0;
  func_0x00010bfb2cc0(*(undefined8 *)(param_1 + 0x18),param_2,
                      &PTR____CFConstantStringClassReference_110ef23b8,0);
  lVar10 = (long)(fVar14 * (float)lVar9);
  if (fVar14 <= 0.0) {
    lVar10 = lVar9;
  }
  if (*(long *)(param_1 + 8) == 0) {
    dVar13 = 0.0;
  }
  else {
    dVar13 = *(double *)(*(long *)(param_1 + 8) + 0x38);
  }
  dVar16 = -dVar13;
  if (0.0 <= dVar13) {
    dVar16 = dVar13;
  }
  dVar13 = 1.0;
  if (0.2 <= dVar16) {
    dVar13 = dVar16;
  }
  if (1.0 < dVar13) {
    dVar13 = SQRT(dVar13);
  }
  lVar9 = param_1;
  func_0x00010c086760();
  dVar16 = (double)(long)(dVar13 * (double)lVar10) * 5.0;
  if (lVar9 != 1) {
    dVar16 = dVar13 * (double)lVar10;
  }
  lVar9 = (long)dVar16;
  lVar10 = param_1;
  func_0x00010c279f20();
  if ((lVar10 == 1) && (*(long *)(param_1 + 0x18) != 0)) {
    lVar10 = param_1;
    func_0x00010be408c0(param_1,param_2,*(undefined8 *)(param_1 + 8));
    if ((int)lVar10 == 0) {
      lVar10 = param_1;
      func_0x00010be3f9e0(param_1,param_2,*(undefined8 *)(param_1 + 8));
      if ((int)lVar10 == 0) {
        if (*(long *)(param_1 + 8) == 0) {
          _objc_retain(0);
          lVar10 = 0;
LAB_108ced5b0:
          if (*(long *)(param_1 + 8) == 0) {
            _objc_retain(0);
          }
          else {
            lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x60);
            _objc_retain(lVar12);
            if (lVar12 != 0) {
              cVar1 = *(char *)(lVar12 + 0x12);
              _objc_release(lVar12);
              _objc_release(lVar10);
              if (cVar1 != '\x01') goto LAB_108ced624;
              goto LAB_108ced5e4;
            }
          }
          _objc_release(0);
          _objc_release(lVar10);
          goto LAB_108ced624;
        }
        lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x60);
        _objc_retain(lVar10);
        if ((lVar10 == 0) || (*(char *)(lVar10 + 0x11) != '\x01')) goto LAB_108ced5b0;
        _objc_release(lVar10);
LAB_108ced5e4:
        lVar10 = *(long *)(param_1 + 0x18);
        ppuVar8 = &PTR____CFConstantStringClassReference_110ef2358;
        goto LAB_108ced5f0;
      }
      fVar14 = 0.8;
    }
    else {
      fVar14 = 0.85;
    }
    lVar9 = (long)((float)lVar9 * fVar14);
  }
  else {
    lVar10 = param_1;
    func_0x00010c279f20();
    if ((lVar10 != 0) || (lVar10 = *(long *)(param_1 + 0x18), lVar10 == 0)) goto LAB_108ced624;
    ppuVar8 = &PTR____CFConstantStringClassReference_110ef2318;
LAB_108ced5f0:
    fVar14 = 1.0;
    func_0x00010bfb2cc0(lVar10,param_2,ppuVar8,0);
    bVar2 = true;
    bVar3 = false;
    if (fVar14 <= 1.0) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar14)) {
        bVar2 = fVar14 < 0.5;
        bVar3 = false;
      }
    }
    if (bVar2 == bVar3) {
      lVar9 = (long)(fVar14 * (float)lVar9);
    }
  }
LAB_108ced624:
  func_0x00010be60760();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    lVar10 = param_1;
    func_0x00010bf1c7c0();
    if (lVar9 <= (int)lVar10) {
      lVar9 = (long)(int)lVar10;
    }
  }
  _objc_release(param_1);
  return (double)lVar9;
}



/* Entry: 108ced694; end: 108ced8b7; -[SCVideoTranscodingBaseConfigurationProvider bitrateForSaving] */

double FUN_108ced694(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if (*(long *)(param_2 + 8) == 0) {
    _objc_retain(0);
LAB_108ced6f4:
    lVar2 = 0;
    lVar1 = *(long *)(param_2 + 8);
LAB_108ced6fc:
    if (lVar1 == 0) {
      _objc_retain(0);
      lVar1 = 0;
    }
    else {
      lVar1 = *(long *)(lVar1 + 0x60);
      _objc_retain(lVar1);
      if (((lVar1 != 0) && (*(char *)(lVar1 + 0x12) == '\x01')) && (*(long *)(param_2 + 8) != 0)) {
        lVar3 = *(long *)(*(long *)(param_2 + 8) + 0x68);
        _objc_release(lVar1);
        _objc_release(lVar2);
joined_r0x000108ced73c:
        if (0 < lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd4b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (param_2,PTR_s__bitrateFromMediaQualityLevel_112552c80);
          return param_1;
        }
        goto LAB_108ced774;
      }
    }
    _objc_release(lVar1);
  }
  else {
    lVar2 = *(long *)(*(long *)(param_2 + 8) + 0x60);
    _objc_retain(lVar2);
    if (lVar2 == 0) goto LAB_108ced6f4;
    lVar1 = *(long *)(param_2 + 8);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_108ced6fc;
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + 0x68);
      _objc_release(lVar2);
      goto joined_r0x000108ced73c;
    }
  }
  _objc_release(lVar2);
LAB_108ced774:
  lVar2 = *(long *)(param_2 + 8);
  dVar4 = 0.0;
  if (lVar2 != 0) {
    dVar4 = *(double *)(lVar2 + 0x18);
  }
  if ((ABS(dVar4) < 2.2250738585072014e-308) ||
     (ABS(dVar4) < ABS(dVar4 + 0.0) * 2.220446049250313e-16)) {
    if (lVar2 == 0) {
      dVar4 = 0.0;
    }
    else {
      dVar4 = *(double *)(lVar2 + 0x38);
    }
    dVar5 = -dVar4;
    if (0.0 <= dVar4) {
      dVar5 = dVar4;
    }
    dVar6 = 0.2;
    dVar4 = 1.0;
    if (0.2 <= dVar5) {
      dVar4 = dVar5;
    }
    func_0x00010c26a100(param_2);
    dVar7 = dVar5 * dVar6;
    if (2073600.0 <= dVar7) {
      dVar7 = 3.62;
    }
    else if (921600.0 <= dVar7) {
      dVar7 = 5.43;
    }
    else {
      lVar2 = 8;
      if (307200.0 <= dVar7) {
        lVar2 = 0;
      }
      dVar7 = *(double *)(&UNK_10df9fa10 + lVar2);
    }
    lVar2 = (long)(dVar6 * dVar5 * dVar7);
    if (0x7fffff < lVar2) {
      lVar2 = 0x800000;
    }
    if (1.0 < dVar4) {
      dVar4 = SQRT(dVar4);
    }
    func_0x00010c086740();
    dVar5 = (double)(long)(dVar4 * (double)lVar2) * 5.0;
    if (param_2 != 1) {
      dVar5 = dVar4 * (double)lVar2;
    }
    dVar4 = (double)(long)dVar5;
  }
  return dVar4;
}



/* Entry: 108ced8b8; end: 108ced8bb; -[SCVideoTranscodingBaseConfigurationProvider targetSizeForSending] */

void FUN_108ced8b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__targetSizeFromMediaQualityLevel_112590488);
  return;
}



/* Entry: 108ced8bc; end: 108ced97f; -[SCVideoTranscodingBaseConfigurationProvider _targetSizeFromMediaQualityLevel] */

undefined1  [16] FUN_108ced8bc(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  puVar1 = PTR__CGSizeZero_110347620;
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 == 0) {
    dVar8 = 0.0;
    dVar9 = 0.0;
  }
  else {
    dVar9 = *(double *)(lVar4 + 0x98);
    dVar8 = *(double *)(lVar4 + 0xa0);
    if (*(long *)(lVar4 + 0x58) == 1) {
      uVar5 = *(undefined8 *)(lVar4 + 0x60);
      _objc_retain(uVar5);
      uVar3 = uVar5;
      func_0x00010c073380();
      _objc_release(uVar5);
      if ((((int)uVar3 != 0) && (*(long *)(param_1 + 8) != 0)) &&
         (0 < *(long *)(*(long *)(param_1 + 8) + 0x68))) {
        dVar9 = *(double *)puVar1;
        dVar8 = *(double *)(puVar1 + 8);
      }
    }
  }
  dVar6 = *(double *)puVar1;
  dVar7 = *(double *)(puVar1 + 8);
  bVar2 = false;
  if ((dVar9 == dVar6) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
    bVar2 = dVar8 == dVar7;
  }
  if (!bVar2) {
    auVar10._8_8_ = dVar8;
    auVar10._0_8_ = dVar9;
    return auVar10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bee9150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__videoTranscodingTargetSizeForSe_112597df8);
  auVar11._8_8_ = dVar7;
  auVar11._0_8_ = dVar6;
  return auVar11;
}



/* Entry: 108ced980; end: 108cedb33; -[SCVideoTranscodingBaseConfigurationProvider targetSizeForSaving] */

undefined1  [16] FUN_108ced980(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (*(long *)(param_3 + 8) == 0) {
    _objc_retain(0);
LAB_108ced9dc:
    lVar3 = 0;
    lVar2 = *(long *)(param_3 + 8);
LAB_108ced9e4:
    if (lVar2 == 0) {
      _objc_retain(0);
      lVar2 = 0;
LAB_108ceda48:
      _objc_release(lVar2);
      goto LAB_108ceda50;
    }
    lVar2 = *(long *)(lVar2 + 0x60);
    _objc_retain(lVar2);
    if (((lVar2 == 0) || (*(char *)(lVar2 + 0x12) != '\x01')) || (*(long *)(param_3 + 8) == 0))
    goto LAB_108ceda48;
    lVar4 = *(long *)(*(long *)(param_3 + 8) + 0x68);
    _objc_release(lVar2);
    _objc_release(lVar3);
joined_r0x000108ceda24:
    if (0 < lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010becab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_3,PTR_s__targetSizeFromMediaQualityLevel_112590488);
      auVar12._8_8_ = param_2;
      auVar12._0_8_ = param_1;
      return auVar12;
    }
  }
  else {
    lVar3 = *(long *)(*(long *)(param_3 + 8) + 0x60);
    _objc_retain(lVar3);
    if (lVar3 == 0) goto LAB_108ced9dc;
    lVar2 = *(long *)(param_3 + 8);
    if ((*(byte *)(lVar3 + 0x11) & 1) == 0) goto LAB_108ced9e4;
    if (lVar2 != 0) {
      lVar4 = *(long *)(lVar2 + 0x68);
      _objc_release(lVar3);
      goto joined_r0x000108ceda24;
    }
LAB_108ceda50:
    _objc_release(lVar3);
  }
  lVar3 = *(long *)(param_3 + 8);
  if (lVar3 == 0) {
    dVar6 = 0.0;
    dVar5 = 0.0;
  }
  else {
    dVar5 = *(double *)(lVar3 + 0x98);
    dVar6 = *(double *)(lVar3 + 0xa0);
  }
  bVar1 = false;
  if ((dVar5 == *(double *)PTR__CGSizeZero_110347620) &&
     (bVar1 = false, !NAN(dVar6) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
    bVar1 = dVar6 == *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  if (!bVar1) goto LAB_108cedb10;
  func_0x00010bee9140(param_3);
  lVar3 = *(long *)(param_3 + 8);
  if (lVar3 == 0) {
    dVar10 = 0.0;
LAB_108cedabc:
    dVar7 = 0.0;
    dVar8 = dVar10;
  }
  else {
    dVar7 = *(double *)(lVar3 + 0x90);
    dVar9 = *(double *)(lVar3 + 0x30);
    if (dVar9 == 0.0) {
      dVar8 = 0.0;
    }
    else {
      dVar10 = *(double *)(lVar3 + 0x88);
      if (dVar9 == INFINITY) goto LAB_108cedabc;
      dVar8 = dVar7 * dVar9;
      if (dVar10 <= dVar7 * dVar9) {
        dVar7 = dVar10 / dVar9;
        dVar8 = dVar10;
      }
    }
  }
  if (dVar8 <= dVar5) {
    dVar7 = dVar6;
    dVar8 = dVar5;
  }
  dVar5 = (double)((float)(int)(dVar8 * 0.5) + (float)(int)(dVar8 * 0.5));
  dVar6 = (double)((float)(int)(dVar7 * 0.5) + (float)(int)(dVar7 * 0.5));
LAB_108cedb10:
  auVar11._8_8_ = dVar6;
  auVar11._0_8_ = dVar5;
  return auVar11;
}



/* Entry: 108cedb34; end: 108cedb7f; -[SCVideoTranscodingBaseConfigurationProvider keyFrameIntervalForSending] */

long FUN_108cedb34(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x20) != 0) {
      return *(long *)(lVar1 + 0x20);
    }
    if (*(double *)(lVar1 + 0x38) < 0.0) {
      return 1;
    }
  }
  func_0x00010c07b960();
  lVar1 = 0x1e;
  if ((int)param_1 == 0) {
    lVar1 = 300;
  }
  return lVar1;
}



/* Entry: 108cedb80; end: 108cedc73; -[SCVideoTranscodingBaseConfigurationProvider keyFrameIntervalForSaving] */

long FUN_108cedb80(ulong param_1)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x20) != 0) {
      return *(long *)(lVar3 + 0x20);
    }
    if (*(double *)(lVar3 + 0x38) < 0.0) {
      return 1;
    }
  }
  uVar2 = param_1;
  func_0x00010c07b960();
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 8) == 0) {
      _objc_retain(0);
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x60);
      _objc_retain(lVar3);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x11) == '\x01')) {
        _objc_release(lVar3);
        return 0xf;
      }
    }
    if (*(long *)(param_1 + 8) == 0) {
      _objc_retain(0);
    }
    else {
      lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x60);
      _objc_retain(lVar4);
      if (lVar4 != 0) {
        cVar1 = *(char *)(lVar4 + 0x12);
        _objc_release(lVar4);
        _objc_release(lVar3);
        if (cVar1 != '\0') {
          return 0xf;
        }
        return 0x1e;
      }
    }
    _objc_release(0);
    _objc_release(lVar3);
  }
  return 0x1e;
}



/* Entry: 108cedc74; end: 108cedc9f; -[SCVideoTranscodingBaseConfigurationProvider audioBitrateForSending] */

double FUN_108cedc74(long param_1)

{
  ulong uVar1;
  double dVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    uVar1 = *(ulong *)(*(long *)(param_1 + 8) + 0x50);
    dVar2 = 64000.0;
    if (uVar1 != 0) {
      dVar2 = (double)uVar1;
    }
    return dVar2;
  }
  return 64000.0;
}



/* Entry: 108cedca0; end: 108cedccb; -[SCVideoTranscodingBaseConfigurationProvider audioBitrateForSaving] */

double FUN_108cedca0(long param_1)

{
  ulong uVar1;
  double dVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    uVar1 = *(ulong *)(*(long *)(param_1 + 8) + 0x50);
    dVar2 = 64000.0;
    if (uVar1 != 0) {
      dVar2 = (double)uVar1;
    }
    return dVar2;
  }
  return 64000.0;
}



/* Entry: 108cedccc; end: 108cedd17; -[SCVideoTranscodingBaseConfigurationProvider transcodingCodecType] */

ulong FUN_108cedccc(ulong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x000109128224();
  if (iVar1 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c2637c0();
    if (iVar1 != 0) {
      func_0x00010beb7260(param_1,param_2,*(undefined8 *)(param_1 + 8));
      return param_1 & 0xffffffff;
    }
  }
  return 0;
}



/* Entry: 108cedd18; end: 108cedd1f; -[SCVideoTranscodingBaseConfigurationProvider h264ProfileLevelForSend] */

void FUN_108cedd18(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(param_1 + 0x18);
  _objc_retain();
  puVar4 = (undefined8 *)PTR__AVVideoProfileLevelH264MainAutoLevel_110348178;
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x00010c067f00(lVar2,param_2,&PTR____CFConstantStringClassReference_110ef2418,0,0);
    uVar1 = (int)lVar3 - 1;
    puVar4 = (undefined8 *)PTR__AVVideoProfileLevelH264MainAutoLevel_110348178;
    if (uVar1 < 3) {
      puVar4 = (undefined8 *)(&PTR__AVVideoProfileLevelH264Main41_110ac1e08)[uVar1];
    }
  }
  uVar5 = *puVar4;
  _objc_retain(uVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 108cedd20; end: 108cedd4f; -[SCVideoTranscodingBaseConfigurationProvider h264ProfileLevelForSaving] */

void FUN_108cedd20(void)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)PTR__AVVideoProfileLevelH264MainAutoLevel_110348178;
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108cedd50; end: 108cedd9b; -[SCVideoTranscodingBaseConfigurationProvider maxFrameRate] */

ulong FUN_108cedd50(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 8) == 0) {
    uVar3 = 0x3c;
  }
  else {
    uVar2 = *(ulong *)(*(long *)(param_1 + 8) + 0x40);
    uVar3 = 0x3c;
    if (uVar2 != 0) {
      uVar3 = uVar2;
    }
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010bfb6f20();
  if ((ulong)(long)iVar1 <= uVar3) {
    uVar3 = (long)iVar1;
  }
  return uVar3;
}



/* Entry: 108cedd9c; end: 108ceddaf; -[SCVideoTranscodingBaseConfigurationProvider shouldMuteAudio] */

byte FUN_108cedd9c(long param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    bVar1 = *(byte *)(*(long *)(param_1 + 8) + 9);
  }
  return bVar1 & 1;
}



/* Entry: 108ceddb0; end: 108ceddb7; -[SCVideoTranscodingBaseConfigurationProvider enableStereoAudio] */

void FUN_108ceddb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f22258,0,0);
  return;
}



/* Entry: 108ceddb8; end: 108ceddbf; -[SCVideoTranscodingBaseConfigurationProvider isQualityScoreCalculationEnabled] */

undefined8 FUN_108ceddb8(void)

{
  return 0;
}



/* Entry: 108ceddc0; end: 108ceddc7; -[SCVideoTranscodingBaseConfigurationProvider isStreamingEnabledForSending] */

undefined8 FUN_108ceddc0(void)

{
  return 0;
}



/* Entry: 108ceddc8; end: 108cede63; -[SCVideoTranscodingBaseConfigurationProvider isStreamingEnabledForSaving] */

byte FUN_108ceddc8(long param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  
  if (*(long *)(param_1 + 8) == 0) {
    _objc_retain(0);
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x60);
    _objc_retain(lVar1);
    if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x11) & 1) != 0)) {
      bVar3 = 1;
      goto LAB_108cede34;
    }
  }
  if (*(long *)(param_1 + 8) == 0) {
    _objc_retain(0);
    lVar2 = 0;
LAB_108cede5c:
    bVar3 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x60);
    _objc_retain(lVar2);
    if (lVar2 == 0) goto LAB_108cede5c;
    bVar3 = *(byte *)(lVar2 + 0x12);
  }
  _objc_release(lVar2);
LAB_108cede34:
  _objc_release(lVar1);
  return bVar3 & 1;
}



/* Entry: 108cede64; end: 108cedf37; -[SCVideoTranscodingBaseConfigurationProvider isChunkedTranscodingEnabled] */

undefined8 FUN_108cede64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  lVar2 = *(long *)(param_1 + 8);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x58) == 1)) {
    uVar3 = *(undefined8 *)(lVar2 + 0x60);
    _objc_retain(uVar3);
    uVar1 = uVar3;
    func_0x00010c073360();
    if (((int)uVar1 == 0) || (*(long *)(param_1 + 8) == 0)) {
      _objc_release(uVar3);
    }
    else {
      lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x78);
      _objc_release(uVar3);
      if (lVar2 == 0xb) {
        uVar1 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110ef2298,0,0);
        if ((int)uVar1 != 0) {
          uVar1 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110ef22b8,10,0);
          if (*(long *)(param_1 + 8) == 0) {
            dVar4 = 0.0;
          }
          else {
            dVar4 = *(double *)(*(long *)(param_1 + 8) + 0x28);
          }
          if ((double)(int)uVar1 <= dVar4) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



/* Entry: 108cedf38; end: 108cedfcf; -[SCVideoTranscodingBaseConfigurationProvider preferredOutputSegmentInterval] */

double FUN_108cedf38(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  double dVar4;
  
  lVar1 = param_1;
  func_0x00010c06e8c0();
  dVar4 = 0.0;
  if ((int)lVar1 != 0) {
    fVar3 = 0.0;
    func_0x00010bfb2cc0(*(undefined8 *)(param_1 + 0x18),param_2,
                        &PTR____CFConstantStringClassReference_110ef22d8,0);
    if (fVar3 <= 0.0) {
      uVar2 = *(ulong *)(param_1 + 0x18);
      func_0x00010c067f00(uVar2,param_2,&PTR____CFConstantStringClassReference_110ef22f8,0,0);
      if ((int)uVar2 < 1) {
        dVar4 = 10.0;
      }
      else {
        if (*(long *)(param_1 + 8) == 0) {
          dVar4 = 0.0;
        }
        else {
          dVar4 = *(double *)(*(long *)(param_1 + 8) + 0x28);
        }
        dVar4 = (double)(long)(dVar4 / (double)(uVar2 & 0xffffffff));
      }
    }
    else {
      dVar4 = (double)fVar3;
    }
  }
  return dVar4;
}



/* Entry: 108cedfd0; end: 108cee07b; -[SCVideoTranscodingBaseConfigurationProvider _qualityLevelWithIntValue:] */

long FUN_108cedfd0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 400) {
    if ((((0x32 < param_3 - 200U) || ((1L << (param_3 - 200U & 0x3f) & 0x4000000100401U) == 0)) &&
        ((0x32 < param_3 - 300U || ((1L << (param_3 - 300U & 0x3f) & 0x4000000100001U) == 0)))) &&
       (param_3 != 100)) {
      return 0;
    }
  }
  else if (param_3 < 500) {
    if ((param_3 != 400) && (param_3 != 0x1c2)) {
      return 0;
    }
  }
  else if (((param_3 != 500) && (param_3 != 600)) && (param_3 != 700)) {
    return 0;
  }
  return param_3;
}



/* Entry: 108cee07c; end: 108cee137; -[SCVideoTranscodingBaseConfigurationProvider _minimumConfiguration] */

void FUN_108cee07c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c067f00(uVar2,param_2,&PTR____CFConstantStringClassReference_110ef2378,0,0);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c067f00(uVar3,param_2,&PTR____CFConstantStringClassReference_110ef2398,0,0);
  lVar4 = param_1;
  func_0x00010be85180(param_1,param_2,(long)(int)uVar2);
  lVar5 = param_1;
  func_0x00010be85180(param_1,param_2,(long)(int)uVar3);
  bVar6 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    bVar6 = *(byte *)(*(long *)(param_1 + 8) + 8);
  }
  lVar1 = lVar5;
  if (lVar5 <= lVar4) {
    lVar1 = lVar4;
  }
  if ((bVar6 & lVar4 != 0) == 0) {
    lVar1 = lVar5;
  }
  if (lVar1 != 0) {
    func_0x00010bf690e0(PTR_PTR_1126bf798);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cee138; end: 108cee1a7; -[SCVideoTranscodingBaseConfigurationProvider _videoTranscodingTargetSizeForSendSnapVideo] */

void FUN_108cee138(undefined8 param_1)

{
  func_0x00010becaa40();
  func_0x00010becab60(param_1);
  NEON_fmov(0x3fe0000000000000,8);
  return;
}



/* Entry: 108cee1a8; end: 108cee263; -[SCVideoTranscodingBaseConfigurationProvider _targetShorterSideLength] */

long FUN_108cee1a8(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 == 0) {
    dVar5 = 0.0;
    dVar6 = 0.0;
  }
  else {
    dVar5 = *(double *)(lVar4 + 0x88);
    dVar6 = *(double *)(lVar4 + 0x90);
  }
  if (dVar6 <= dVar5) {
    dVar5 = dVar6;
  }
  iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c13a500();
  iVar3 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c13a460();
  if (iVar3 <= iVar2) {
    iVar2 = iVar3;
  }
  dVar6 = (double)iVar2;
  dVar7 = ABS(dVar5 - dVar6) / dVar5;
  bVar1 = true;
  if ((dVar6 <= dVar5) && (bVar1 = false, !NAN(dVar7))) {
    bVar1 = dVar7 < 0.05;
  }
  if (!bVar1) {
    dVar5 = dVar6;
  }
  func_0x00010be60760();
  _objc_retainAutoreleasedReturnValue();
  dVar6 = dVar5;
  if (param_1 != 0) {
    lVar4 = param_1;
    func_0x00010c13a500();
    dVar6 = (double)(int)lVar4;
    if ((double)(int)lVar4 <= dVar5) {
      dVar6 = dVar5;
    }
  }
  _objc_release(param_1);
  return (long)dVar6;
}



/* Entry: 108cee264; end: 108cee2a3; -[SCVideoTranscodingBaseConfigurationProvider _targetAspectRatio] */

double FUN_108cee264(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (0.0 < *(double *)(lVar1 + 0x30)) {
      return *(double *)(lVar1 + 0x30);
    }
    if (0.0 < *(double *)(lVar1 + 0x88)) {
      if (*(double *)(lVar1 + 0x90) <= 0.0) {
        return 0.5625;
      }
      return *(double *)(lVar1 + 0x88) / *(double *)(lVar1 + 0x90);
    }
  }
  return 0.5625;
}



/* Entry: 108cee2a4; end: 108cee2bf; -[SCVideoTranscodingBaseConfigurationProvider _mayAdjustAspectRatio] */

bool FUN_108cee2a4(long param_1)

{
  func_0x00010be3dda0();
  return param_1 < 0xd;
}



/* Entry: 108cee2c0; end: 108cee3f7; -[SCVideoTranscodingBaseConfigurationProvider _iphoneGeneration] */

undefined8 FUN_108cee2c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_48;
  
  puVar2 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfd3880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010bfda7c0(puVar3,param_2,&PTR____CFConstantStringClassReference_110ef23d8);
  if ((int)puVar2 == 0) {
    uVar6 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSScanner_1126b3380;
    func_0x00010c14f820(PTR__OBJC_CLASS___NSScanner_1126b3380,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bf66760(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14f5e0(puVar2,param_2,puVar4,0);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bf66760(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    uStack_48 = 0;
    puVar5 = puVar2;
    func_0x00010c14ea40(puVar2,param_2,puVar4,&uStack_48);
    uVar1 = uStack_48;
    _objc_retain(uStack_48);
    _objc_release(puVar4);
    uVar6 = 0;
    if ((int)puVar5 != 0) {
      uVar6 = uVar1;
      func_0x00010c067fc0(uVar1);
    }
    _objc_release(uVar1);
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
  return uVar6;
}



/* Entry: 108cee3f8; end: 108cee5f3; -[SCVideoTranscodingBaseConfigurationProvider _shouldUseHEVCForInput:] */

ulong FUN_108cee3f8(ulong param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  iVar3 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c2637c0();
  if (iVar3 == 0) {
LAB_108cee5d0:
    param_1 = 0;
  }
  else {
    if (*(long *)(param_1 + 8) == 0) {
      _objc_retain(0);
      lVar6 = 0;
LAB_108cee464:
      if (*(long *)(param_1 + 8) == 0) {
        _objc_retain(0);
LAB_108cee4d8:
        _objc_release(0);
        _objc_release(lVar6);
        if (param_3 != 0) goto LAB_108cee498;
LAB_108cee4ec:
        _objc_retain(0);
        _objc_release(0);
        func_0x00010be3f9e0(param_1,param_2,0);
        if ((param_1 & 1) != 0) goto LAB_108cee54c;
        _objc_retain(0);
        _objc_retain(0);
        lVar6 = 0;
LAB_108cee520:
        _objc_release(0);
        _objc_release(lVar6);
        goto LAB_108cee5d0;
      }
      lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x60);
      _objc_retain(lVar7);
      if (lVar7 == 0) goto LAB_108cee4d8;
      bVar1 = *(byte *)(lVar7 + 0x12);
      _objc_release(lVar7);
      _objc_release(lVar6);
      if ((bVar1 & 1) != 0) goto LAB_108cee54c;
      if (param_3 == 0) goto LAB_108cee4ec;
LAB_108cee498:
      lVar6 = *(long *)(param_3 + 0x60);
      _objc_retain(lVar6);
      if (lVar6 == 0) {
        _objc_release(0);
      }
      else {
        cVar2 = *(char *)(lVar6 + 0xe);
        _objc_release(lVar6);
        if (cVar2 == '\x01') {
          func_0x00010be408c0();
          goto LAB_108cee5d4;
        }
      }
      func_0x00010be3f9e0(param_1,param_2,param_3);
      if ((param_1 & 1) == 0) {
        lVar6 = *(long *)(param_3 + 0x60);
        _objc_retain(lVar6);
        if ((lVar6 == 0) || (*(char *)(lVar6 + 10) != '\x01')) {
          lVar7 = *(long *)(param_3 + 0x60);
          _objc_retain(lVar7);
          if (lVar7 == 0) goto LAB_108cee520;
          cVar2 = *(char *)(lVar7 + 0xb);
          _objc_release(lVar7);
          _objc_release(lVar6);
          if (cVar2 != '\x01') goto LAB_108cee5d0;
        }
        else {
          _objc_release(lVar6);
        }
        uVar5 = *(undefined8 *)(param_3 + 0x60);
        _objc_retain(uVar5);
        uVar4 = uVar5;
        func_0x00010c073380(uVar5);
        _objc_release(uVar5);
        param_1 = (ulong)((uint)uVar4 ^ 1);
        goto LAB_108cee5d4;
      }
    }
    else {
      lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x60);
      _objc_retain(lVar6);
      if ((lVar6 == 0) || (*(char *)(lVar6 + 0x11) != '\x01')) goto LAB_108cee464;
      _objc_release(lVar6);
    }
LAB_108cee54c:
    param_1 = 1;
  }
LAB_108cee5d4:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108cee5f4; end: 108cee697; -[SCVideoTranscodingBaseConfigurationProvider _isForMyStoryAndShouldUseHevc:] */

undefined8 FUN_108cee5f4(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c2637c0();
  if (iVar2 != 0) {
    if (param_3 == 0) {
      _objc_retain(0);
    }
    else {
      lVar4 = *(long *)(param_3 + 0x60);
      _objc_retain(lVar4);
      if (lVar4 != 0) {
        cVar1 = *(char *)(lVar4 + 0xe);
        _objc_release(lVar4);
        if (cVar1 == '\x01') {
          uVar3 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010bf1f440(uVar3,param_2,&PTR____CFConstantStringClassReference_110ef2278,0,0);
          goto LAB_108cee67c;
        }
        goto LAB_108cee678;
      }
    }
    _objc_release(0);
  }
LAB_108cee678:
  uVar3 = 0;
LAB_108cee67c:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 108cee698; end: 108cee7e7; -[SCVideoTranscodingBaseConfigurationProvider _isDirectMessageAndShouldUseHEVC:] */

undefined8 FUN_108cee698(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c2637c0();
  if (iVar1 != 0) {
    if (param_3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_3 + 0x60);
    }
    _objc_retain(uVar5);
    uVar2 = uVar5;
    func_0x00010c0709e0();
    _objc_release(uVar5);
    if ((int)uVar2 != 0) {
      puVar3 = PTR_PTR_1126ae780;
      _objc_alloc_init(PTR_PTR_1126ae780);
      puVar4 = PTR_PTR_1126dbb50;
      _objc_alloc_init(PTR_PTR_1126dbb50);
      if (param_3 == 0) {
        _objc_retain(0);
        lVar6 = 0;
LAB_108cee7e0:
        uVar5 = 0;
      }
      else {
        lVar6 = *(long *)(param_3 + 0x60);
        _objc_retain(lVar6);
        if (lVar6 == 0) goto LAB_108cee7e0;
        uVar5 = *(undefined8 *)(lVar6 + 0x18);
      }
      _objc_retain(uVar5);
      uVar2 = uVar5;
      func_0x00010c0d3c80(uVar5);
      func_0x00010c21e700(puVar4,param_2,uVar2);
      _objc_release(uVar2);
      _objc_release(uVar5);
      _objc_release(lVar6);
      func_0x00010c1e8b20(puVar3,param_2,puVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010bf1f440(uVar5,param_2,&PTR____CFConstantStringClassReference_110f6d5f8,0,puVar3);
      _objc_release(puVar4);
      _objc_release(puVar3);
      goto LAB_108cee7a8;
    }
  }
  uVar5 = 0;
LAB_108cee7a8:
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 108cee7e8; end: 108cee83b; -[SCVideoTranscodingBaseConfigurationProvider .cxx_destruct] */

void FUN_108cee7e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cee83c; end: 108cee843; -[SCVideoTranscodingCameraSnapConfigurationProvider isStreamingEnabledForSending] */

undefined8 FUN_108cee83c(void)

{
  return 1;
}



/* Entry: 108cee844; end: 108cee84b; -[SCVideoTranscodingMemoriesConfigurationProvider isStreamingEnabledForSending] */

undefined8 FUN_108cee844(void)

{
  return 1;
}



/* Entry: 108cee84c; end: 108ceec07; -[SCVideoTranscodingSessionDefaultConfigurationProvider videoTranscodingConfigurationWithProviderInput:circumstanceEngine:mediaCapabilityDetector:grapheneRegistry:] */

void FUN_108cee84c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  long lVar16;
  ulong uVar17;
  undefined *puVar18;
  double dVar19;
  double dVar20;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010bdcf6c0(param_3);
  if (param_5 == 0) {
    ppuVar15 = &PTR_PTR_1126dbb60;
LAB_108cee8d4:
    puVar3 = *ppuVar15;
    _objc_alloc();
    func_0x00010c03bb20();
  }
  else {
    if (*(ulong *)(param_5 + 0x58) < 8) {
      ppuVar15 = (undefined **)(&PTR_PTR_110ac1dc8)[*(ulong *)(param_5 + 0x58)];
      goto LAB_108cee8d4;
    }
    puVar3 = (undefined *)0x0;
  }
  func_0x00010bf0eda0(puVar3);
  lVar16 = (long)param_1;
  func_0x00010be3e3c0();
  lVar1 = lVar16;
  if (31999 < lVar16) {
    lVar1 = 32000;
  }
  if ((int)param_3 == 0) {
    lVar1 = lVar16;
  }
  puVar4 = puVar3;
  func_0x00010c279f20();
  if (param_5 == 0) {
    _objc_retain(0);
    _objc_release(0);
    uVar17 = 0;
    goto LAB_108ceea14;
  }
  if (*(long *)(param_5 + 0x58) == 0) {
    lVar16 = *(long *)(param_5 + 0x60);
    _objc_retain(lVar16);
    if (lVar16 == 0) {
      puVar18 = (undefined *)0x0;
    }
    else {
      cVar2 = *(char *)(lVar16 + 10);
      _objc_release(lVar16);
      if (cVar2 != '\x01') goto LAB_108ceea10;
      puVar5 = PTR_PTR_1126dbb90;
      func_0x00010c24ae00(PTR_PTR_1126dbb90);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x000108cef5ec(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar5;
      func_0x00010c2ac460(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar6);
      uVar7 = param_8;
      func_0x00010c269d40(param_8);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c279a60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0();
      _objc_release(uVar8);
      _objc_release(uVar7);
    }
    _objc_release(puVar18);
  }
LAB_108ceea10:
  uVar17 = *(ulong *)(param_5 + 0x60);
LAB_108ceea14:
  _objc_retain(uVar17);
  uVar9 = uVar17;
  func_0x00010c0733a0();
  _objc_release(uVar17);
  puVar18 = PTR_PTR_1126da120;
  _objc_alloc(PTR_PTR_1126da120);
  puVar5 = puVar3;
  func_0x00010c2319e0(puVar3);
  puVar6 = puVar3;
  func_0x00010bf91e20(puVar3);
  puVar10 = puVar3;
  puVar11 = puVar3;
  puVar12 = puVar3;
  puVar13 = puVar3;
  if ((uVar9 & 1) == 0) {
    func_0x00010c07ff80(puVar3);
    func_0x00010c26a120(puVar3);
    dVar19 = param_1;
    func_0x00010bf1c820(puVar3);
    dVar20 = dVar19;
    func_0x00010c086760(puVar3);
    func_0x00010c0c22c0(puVar3);
    func_0x00010bfcfd60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c07ff60();
    func_0x00010c26a100(puVar3);
    dVar19 = param_1;
    func_0x00010bf1c800(puVar3);
    dVar20 = dVar19;
    func_0x00010c086740(puVar3);
    func_0x00010c0c22c0(puVar3);
    func_0x00010bfcfd40();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar14 = puVar3;
  func_0x00010c06e8c0();
  func_0x00010c106d80(puVar3);
  func_0x00010b68dc3c(param_1,param_2,dVar19,(double)lVar1,dVar20,puVar18,puVar5,puVar6,puVar10,
                      (int)param_3,puVar11,puVar12,puVar4,puVar13,(char)puVar14);
  _objc_release(puVar13);
  _objc_release(puVar3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 108ceec08; end: 108ceec0b; -[SCVideoTranscodingSessionDefaultConfigurationProvider _assertThatInputIsValid:] */

void FUN_108ceec08(void)

{
  return;
}



/* Entry: 108ceec0c; end: 108ceed0b; -[SCVideoTranscodingSessionDefaultConfigurationProvider _isAudioFormatHEAAC:input:] */

undefined8 FUN_108ceec0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    lVar1 = 0;
    lVar2 = 0;
LAB_108ceecd0:
    uVar3 = 0;
  }
  else {
    lVar1 = *(long *)(param_4 + 0x60);
    _objc_retain(lVar1);
    uVar3 = param_3;
    if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x11) & 1) != 0)) {
      func_0x00010bf1f440(param_3,param_2,&PTR____CFConstantStringClassReference_110ef2338,0,0);
      goto LAB_108ceecdc;
    }
    lVar2 = *(long *)(param_4 + 0x60);
    _objc_retain(lVar2);
    if ((lVar2 == 0) || (*(char *)(lVar2 + 0x12) != '\x01')) goto LAB_108ceecd0;
    func_0x00010bf1f440(param_3,param_2,&PTR____CFConstantStringClassReference_110ef2338,0,0);
  }
  _objc_release(lVar2);
LAB_108ceecdc:
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 108ceed0c; end: 108ceed57; -[SCVideoTranscodingSpectaclesAnimatedImageConfigurationProvider bitrateForSending] */

double FUN_108ceed0c(long param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = 0.0;
  if (*(long *)(param_1 + 8) != 0) {
    dVar1 = *(double *)(*(long *)(param_1 + 8) + 0x18);
  }
  dVar3 = ABS(dVar1 + 0.0) * 2.220446049250313e-16;
  if (dVar3 <= 2.2250738585072014e-308) {
    dVar3 = 2.2250738585072014e-308;
  }
  dVar2 = 8388608.0;
  if (dVar3 <= ABS(dVar1)) {
    dVar2 = dVar1;
  }
  return dVar2;
}



/* Entry: 108ceed58; end: 108ceeda3; -[SCVideoTranscodingSpectaclesAnimatedImageConfigurationProvider bitrateForSaving] */

double FUN_108ceed58(long param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = 0.0;
  if (*(long *)(param_1 + 8) != 0) {
    dVar1 = *(double *)(*(long *)(param_1 + 8) + 0x18);
  }
  dVar3 = ABS(dVar1 + 0.0) * 2.220446049250313e-16;
  if (dVar3 <= 2.2250738585072014e-308) {
    dVar3 = 2.2250738585072014e-308;
  }
  dVar2 = 16777216.0;
  if (dVar3 <= ABS(dVar1)) {
    dVar2 = dVar1;
  }
  return dVar2;
}



/* Entry: 108ceeda4; end: 108ceedef; -[SCVideoTranscodingSpectaclesAnimatedImageConfigurationProvider targetSizeForSending] */

undefined1  [16] FUN_108ceeda4(long param_1)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar6 [16];
  double dVar5;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    dVar4 = 0.0;
    dVar2 = 0.0;
  }
  else {
    dVar2 = *(double *)(lVar1 + 0x98);
    dVar4 = *(double *)(lVar1 + 0xa0);
  }
  dVar3 = 1280.0;
  if (dVar2 != *(double *)PTR__CGSizeZero_110347620 ||
      dVar4 != *(double *)(PTR__CGSizeZero_110347620 + 8)) {
    dVar3 = dVar2;
  }
  dVar5 = 1280.0;
  if (dVar2 != *(double *)PTR__CGSizeZero_110347620 ||
      dVar4 != *(double *)(PTR__CGSizeZero_110347620 + 8)) {
    dVar5 = dVar4;
  }
  auVar6._8_8_ = dVar5;
  auVar6._0_8_ = dVar3;
  return auVar6;
}



/* Entry: 108ceedf0; end: 108ceee3b; -[SCVideoTranscodingSpectaclesAnimatedImageConfigurationProvider targetSizeForSaving] */

undefined1  [16] FUN_108ceedf0(long param_1)

{
  double dVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar6 [16];
  double dVar5;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    dVar4 = 0.0;
    dVar3 = 0.0;
  }
  else {
    dVar3 = *(double *)(lVar2 + 0x98);
    dVar4 = *(double *)(lVar2 + 0xa0);
  }
  dVar5 = 1816.0;
  dVar1 = 1816.0;
  if (dVar3 != *(double *)PTR__CGSizeZero_110347620 ||
      dVar4 != *(double *)(PTR__CGSizeZero_110347620 + 8)) {
    dVar5 = dVar4;
    dVar1 = dVar3;
  }
  auVar6._8_8_ = dVar5;
  auVar6._0_8_ = dVar1;
  return auVar6;
}



/* Entry: 108ceee3c; end: 108ceee43; -[SCVideoTranscodingSpectaclesAnimatedImageConfigurationProvider shouldMuteAudio] */

undefined8 FUN_108ceee3c(void)

{
  return 1;
}



/* Entry: 108ceee44; end: 108ceeeb7; -[SCVideoTranscodingSpectaclesConfigurationProvider bitrateForSending] */

double FUN_108ceee44(long param_1)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = 0.0;
  if (*(long *)(param_1 + 8) != 0) {
    dVar2 = *(double *)(*(long *)(param_1 + 8) + 0x18);
  }
  dVar4 = ABS(dVar2);
  dVar3 = ABS(dVar2 + 0.0) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar4) && (bVar1 = false, !NAN(dVar4) && !NAN(dVar3))) {
    bVar1 = dVar4 < dVar3;
  }
  if (bVar1) {
    func_0x00010c26a100(param_1);
    func_0x00010becaa60(param_1);
    dVar2 = (double)param_1;
  }
  return dVar2;
}



/* Entry: 108ceeeb8; end: 108ceef2f; -[SCVideoTranscodingSpectaclesConfigurationProvider bitrateForSaving] */

double FUN_108ceeeb8(long param_1)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = 0.0;
  if (*(long *)(param_1 + 8) != 0) {
    dVar2 = *(double *)(*(long *)(param_1 + 8) + 0x18);
  }
  dVar4 = ABS(dVar2);
  dVar3 = ABS(dVar2 + 0.0) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar4) && (bVar1 = false, !NAN(dVar4) && !NAN(dVar3))) {
    bVar1 = dVar4 < dVar3;
  }
  if (bVar1) {
    func_0x00010c26a100(param_1);
    func_0x00010becaa60(param_1);
    dVar2 = (double)param_1;
  }
  return dVar2;
}


