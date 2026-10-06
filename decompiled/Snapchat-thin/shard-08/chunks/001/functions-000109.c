/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105dc753c; end: 105dc76a3;  */

void FUN_105dc753c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  ppuVar2 = &puStack_60;
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x105dc7610;
    puStack_48 = &UNK_1108e9370;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uStack_40 = uVar4;
    uStack_38 = param_3;
    _objc_retainBlock(&puStack_60);
    puVar3 = (undefined1 *)ppuVar2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(param_2);
    _objc_release(puVar3);
    _objc_release(ppuVar2);
    _objc_release(uStack_40);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 105dc76a4; end: 105dc76ab;  */

void FUN_105dc76a4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_future_1125ccaa0);
  return;
}



/* Entry: 105dc76ac; end: 105dc7943; -[SCPreviewFeatureTimelineImpl _generateImagesAndTimeRangesFromSegments:images:imageTimeRanges:] */

void FUN_105dc76ac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
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
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_108 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_110 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_100 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  puVar5 = &uStack_150;
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_140;
    do {
      lVar6 = 0;
      do {
        if (*plStack_140 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        puVar4 = PTR_DAT_1126a4e40;
        lVar7 = *(long *)(lStack_148 + lVar6 * 8);
        _objc_retain(lVar7);
        lVar3 = lVar7;
        func_0x00010010fab4(lVar7,puVar4);
        lVar1 = lVar7;
        if ((int)lVar3 == 0) {
          lVar1 = 0;
        }
        _objc_retain(lVar1);
        _objc_release(lVar7);
        if (lVar1 == 0) {
          if (lVar7 != 0) goto LAB_105dc7870;
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
        }
        else {
          lVar3 = lVar7;
          func_0x00010bfb6cc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar3 != 0) {
            lVar3 = lVar7;
            func_0x00010bfb6cc0(lVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(param_4);
            _objc_release(lVar3);
            puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
            func_0x00010c27c900(&uStack_1b0,lVar7);
            uStack_1c8 = uStack_108;
            uStack_1d0 = uStack_110;
            uStack_1c0 = uStack_100;
            uStack_1e8 = uStack_190;
            uStack_1f0 = uStack_198;
            uStack_1e0 = uStack_188;
            _CMTimeRangeMake(&uStack_180,&uStack_1d0,&uStack_1f0);
            func_0x00010c297240(puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(param_5);
            _objc_release(puVar4);
          }
LAB_105dc7870:
          func_0x00010c27c900(&uStack_180,lVar7);
        }
        uStack_1a8 = uStack_108;
        uStack_1b0 = uStack_110;
        uStack_1a0 = uStack_100;
        uStack_1c8 = uStack_160;
        uStack_1d0 = uStack_168;
        uStack_1c0 = uStack_158;
        _CMTimeAdd(&uStack_110,&uStack_1b0,&uStack_1d0);
        _objc_release(lVar1);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      puVar5 = &uStack_150;
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c28fca0();
  param_3 = param_3 + 0x38;
  _objc_loadWeakRetained(param_3);
  lVar2 = param_3;
  if (puVar5 == (undefined8 *)0x1) {
    func_0x00010bf5fa60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf605c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105dc7944; end: 105dc79ab; -[SCPreviewFeatureTimelineImpl _getVideoAssetForTimelineConfiguration:] */

void FUN_105dc7944(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c28fca0();
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  if (param_3 == 1) {
    func_0x00010bf5fa60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf605c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105dc79ac; end: 105dc7a07; -[SCPreviewFeatureTimelineImpl _getVideoCompositionForTimelineConfiguration:] */

void FUN_105dc79ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c28fca0();
  if (param_3 == 1) {
    lVar1 = 0;
  }
  else {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bf605a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105dc7a08; end: 105dc7a7b; -[SCPreviewFeatureTimelineImpl _outputOverlaySize] */

undefined1  [16]
FUN_105dc7a08(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  param_5 = param_5 + 0x18;
  _objc_loadWeakRetained(param_5);
  func_0x00010bf4cf40();
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar1);
  _objc_release(param_5);
  auVar2._8_8_ = param_4 * param_1;
  auVar2._0_8_ = param_3 * param_1;
  return auVar2;
}



/* Entry: 105dc7a7c; end: 105dc7bd3; -[SCPreviewFeatureTimelineImpl _generateThumbnailSampleTimesForVideoDuration:thumbnailCount:] */

void FUN_105dc7a7c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar6 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar5 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_78 = param_3[1];
  uStack_80 = *param_3;
  uStack_70 = param_3[2];
  uStack_50 = uVar6;
  uStack_48 = uVar7;
  uStack_40 = uVar5;
  _CMTimeMultiplyByRatio(&uStack_68,&uStack_80,1,param_4);
  uStack_98 = param_3[1];
  uStack_a0 = *param_3;
  uStack_90 = param_3[2];
  puVar3 = &uStack_80;
  uStack_80 = uVar6;
  uStack_78 = uVar7;
  uStack_70 = uVar5;
  _CMTimeCompare(puVar3,&uStack_a0);
  iVar1 = (int)puVar3;
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  uVar5 = uStack_80;
  uVar6 = uStack_78;
  uVar7 = uStack_70;
  uStack_80 = uStack_50;
  uStack_78 = uStack_48;
  uStack_70 = uStack_40;
  while (PTR__OBJC_CLASS___NSValue_1126afdf8 = puVar4, uStack_50 = uStack_80, uStack_48 = uStack_78,
        uStack_40 = uStack_70, iVar1 < 0) {
    func_0x00010c297200(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar4);
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_70 = uStack_40;
    uStack_98 = uStack_60;
    uStack_a0 = uStack_68;
    uStack_90 = uStack_58;
    _CMTimeAdd(&uStack_50,&uStack_80,&uStack_a0);
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_70 = uStack_40;
    uStack_98 = param_3[1];
    uStack_a0 = *param_3;
    uStack_90 = param_3[2];
    puVar3 = &uStack_80;
    _CMTimeCompare(puVar3,&uStack_a0);
    puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    uVar5 = uStack_80;
    uVar6 = uStack_78;
    uVar7 = uStack_70;
    uStack_80 = uStack_50;
    uStack_78 = uStack_48;
    uStack_70 = uStack_40;
    iVar1 = (int)puVar3;
  }
  uStack_80 = uVar5;
  uStack_78 = uVar6;
  uStack_70 = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105dc7bd4; end: 105dc7dbf; -[SCPreviewFeatureTimelineImpl _generateEditedThumbnailsWithRequest:] */

void FUN_105dc7bd4(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  double dStack_78;
  double dStack_70;
  undefined1 auStack_68 [8];
  
  ppuVar3 = &puStack_a0;
  _objc_retain(param_5);
  if (param_5 == 0) {
    _objc_retain(0);
    dVar8 = param_1;
  }
  else {
    lVar6 = *(long *)(param_5 + 0x28);
    _objc_retain(lVar6);
    dVar8 = param_1;
    if (lVar6 != 0) {
      uVar7 = *(undefined8 *)(param_5 + 0x28);
      _objc_retain(uVar7);
      func_0x00010bdc10a0(uVar7);
      dVar8 = param_1;
      _objc_release(uVar7);
      dVar9 = *(double *)PTR__CGSizeZero_110347620;
      dVar10 = *(double *)(PTR__CGSizeZero_110347620 + 8);
      goto LAB_105dc7c6c;
    }
  }
  lVar6 = 0;
  param_1 = *(double *)PTR__CGSizeZero_110347620;
  param_2 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  dVar9 = param_1;
  dVar10 = param_2;
LAB_105dc7c6c:
  _objc_release(lVar6);
  bVar1 = false;
  if ((param_1 == dVar9) && (bVar1 = false, !NAN(param_2) && !NAN(dVar10))) {
    bVar1 = param_2 == dVar10;
  }
  if (bVar1) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    param_1 = dVar8 * 35.0;
    param_2 = dVar8 * 62.0;
    _objc_release(puVar2);
  }
  _objc_initWeak(auStack_68,param_3);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105dc7dc0;
  puStack_88 = &UNK_1108e9470;
  _objc_copyWeak(auStack_80,auStack_68);
  dStack_78 = param_1;
  dStack_70 = param_2;
  _objc_retainBlock(&puStack_a0);
  uVar4 = *(undefined8 *)(param_3 + 0x110);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bfc05a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105dc7dc0; end: 105dc7ee7;  */

void FUN_105dc7dc0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_80;
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105dc7ee8;
  puStack_68 = &UNK_1108e9440;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(puVar1);
  puStack_60 = puVar1;
  _objc_retainBlock(&puStack_80);
  puVar3 = (undefined1 *)ppuVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(param_2);
  _objc_release(puVar3);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(puStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105dc7ee8; end: 105dc7fcf;  */

void FUN_105dc7ee8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be767a0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if ((param_3 == 0) && (lVar2 != 0)) {
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14cfe0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105dc7fd0; end: 105dc81db; -[SCPreviewFeatureTimelineImpl _postProcessThumbnail:targetSize:] */

void FUN_105dc7fd0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar10 = param_1;
  _objc_retain(param_5);
  uVar1 = param_3 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06e820();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar9 = param_5;
  if ((uVar3 & 1) == 0) {
    _objc_retain(param_5);
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + 0x1f8);
    func_0x00010c09df80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar6 = *(undefined8 *)(param_3 + 0x168);
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bf926c0();
    _objc_release(uVar6);
    if ((int)uVar4 == 0) {
      uVar4 = uVar5;
      func_0x00010bf5c9c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010bf52160();
    }
    else {
      uVar4 = *(undefined8 *)(param_3 + 0x168);
      func_0x00010c240000(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126affe8;
      func_0x00010c09e180(PTR_PTR_1126affe8);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x000107ffcb24(uVar4,puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
    }
    _objc_release(uVar4);
    puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120(uVar6);
    func_0x00010c14e720(param_1,param_2,uVar10,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 105dc81dc; end: 105dc8343; -[SCPreviewFeatureTimelineImpl _applyOverlayState:toSegment:] */

void FUN_105dc81dc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    uVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c06ba20();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      _objc_initWeak(auStack_48,param_1);
      uVar3 = param_4;
      func_0x00010bfb13c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      uVar4 = param_4;
      _objc_retain(param_4);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(uVar3);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105dc8344; end: 105dc8543;  */

void FUN_105dc8344(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 unaff_x22;
  undefined8 uVar7;
  undefined **unaff_x28;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (param_2 != 0)) && (param_3 == 0)) {
    unaff_x22 = *(undefined8 *)(lVar1 + 0x110);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = param_2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    if (*(long *)(param_1 + 0x28) == 0) {
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x00010bfb13e0(&uStack_90);
    }
    func_0x00010c297200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_105dc8544;
    puStack_a8 = &UNK_11085c6a8;
    lVar6 = param_1 + 0x30;
    _objc_copyWeak(auStack_98);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar7);
    uStack_a0 = uVar7;
    func_0x00010bf08740(unaff_x22);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(unaff_x22);
    _objc_release(uStack_a0);
    _objc_destroyWeak(auStack_98);
    unaff_x28 = &puStack_c0;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x28 + 0x28));
  lVar5 = param_2;
  __Unwind_Resume();
  pcStack_c8 = FUN_105dc8544;
  uStack_f0 = unaff_x22;
  lStack_e8 = lVar1;
  lStack_e0 = param_3;
  lStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(lVar6);
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_105dc8604;
  puStack_110 = &UNK_110848218;
  _objc_copyWeak(auStack_f8,lVar5 + 0x28);
  _objc_retain(lVar6);
  uVar7 = *(undefined8 *)(lVar5 + 0x20);
  lStack_108 = lVar6;
  _objc_retain(uVar7);
  uStack_100 = uVar7;
  func_0x000100162d98("APPSTORE",&puStack_128);
  _objc_release(uStack_100);
  _objc_release(lStack_108);
  _objc_destroyWeak(auStack_f8);
  _objc_release(lVar6);
  return;
}



/* Entry: 105dc8544; end: 105dc8603;  */

void FUN_105dc8544(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105dc8604;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105dc8604; end: 105dc86b7;  */

void FUN_105dc8604(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x20;
    _objc_loadWeakRetained(lVar2);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfb1920(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a120(puVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193ac0(lVar2,param_2,puVar4,*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105dc86b8; end: 105dc889b; -[SCPreviewFeatureTimelineImpl _thumbnailGenerationRequestWithVideoAsset:videoComposition:sampleTimes:thumbnailSize:overlay:videoTrackedImages:images:imageTimeRanges:] */

void FUN_105dc86b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar1 = PTR_PTR_1126c4268;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010aefb480(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010aefb4f8();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010aefb53c();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010aefb64c();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971c0(param_1,param_2,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010aefb608(puVar1,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010aefb718(puVar1,param_10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010aefb75c();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010becbb60(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  puVar2 = puVar1;
  func_0x00010aefb6d4(puVar1,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010aefb4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105dc889c; end: 105dc8f43; -[SCPreviewFeatureTimelineImpl _thumbnailGenerationOverlayStateWithOverlay:videoTrackedImages:sampleTimes:thumbnailSize:] */

void FUN_105dc889c(double param_1,double param_2,long param_3,undefined *param_4,long param_5,
                  long param_6,undefined *param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar17 = param_1;
  dVar18 = param_2;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_3 + 0x1f8);
  func_0x00010c09df80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_3 + 0x168);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf926c0();
  _objc_release(uVar3);
  if ((int)uVar4 == 0) {
    lVar1 = lVar2;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010bf52160();
  }
  else {
    lVar1 = *(long *)(param_3 + 0x168);
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR_PTR_1126affe8;
    func_0x00010c09e180(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    param_4 = puVar16;
    func_0x000107ffcb24(lVar1,puVar16);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar16);
  }
  _objc_release(lVar1);
  lVar1 = param_3 + 8;
  _objc_loadWeakRetained();
  lVar9 = lVar1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar9;
  func_0x00010c06e820();
  _objc_release(lVar9);
  _objc_release(lVar1);
  if ((int)lVar6 != 0) {
    dVar17 = 1.0;
    func_0x00010c1f5fe0(lVar5);
  }
  puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c2a0420();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar9;
  func_0x00010c27e680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar8 = PTR_PTR_1126b26d8;
    func_0x00010bf978e0(PTR_PTR_1126b26d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar7);
    _objc_release(puVar8);
  }
  lVar9 = lVar6;
  func_0x00010bf529e0();
  if (lVar9 != 0) {
    lVar9 = lVar6;
    func_0x00010c0b8600(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar7);
    _objc_release(lVar9);
  }
  puVar8 = puVar7;
  func_0x00010bf529e0();
  if (puVar8 == (undefined *)0x0) {
    lVar9 = 0;
  }
  else {
    puVar8 = PTR_PTR_1126b26e0;
    func_0x00010c29b780(PTR_PTR_1126b26e0);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = *(long *)(param_3 + 0x48);
    func_0x00010bf41e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
  }
  lVar10 = lVar9;
  func_0x00010bf529e0();
  if (lVar10 != 0) {
    func_0x00010befa160(puVar16);
  }
  lVar10 = param_6;
  if (param_5 != 0) {
    func_0x00010c23d0a0(param_5);
    func_0x00010c23d0a0(param_5);
    dVar17 = dVar17 / dVar18;
    dVar19 = 0.0;
    dVar18 = param_2;
    if (((dVar17 != 0.0) && (dVar18 = 0.0, dVar19 = param_1, dVar17 != INFINITY)) &&
       (dVar18 = param_2, dVar19 = param_2 * dVar17, param_1 <= param_2 * dVar17)) {
      dVar18 = param_1 / dVar17;
      dVar19 = param_1;
    }
    dVar17 = dVar19 / param_1;
    puVar8 = PTR_PTR_1126b2700;
    _objc_alloc(PTR_PTR_1126b2700);
    func_0x00010c055500(0x3fe0000000000000,0x3fe0000000000000,0x3ff0000000000000,0);
    puVar11 = PTR_PTR_1126c41f8;
    func_0x00010c252d00(PTR_PTR_1126c41f8);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126c4200;
    _objc_alloc(PTR_PTR_1126c4200);
    func_0x00010c02fc00(dVar17,dVar18 / param_2);
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar8);
  }
  func_0x00010c29aae0(lVar2);
  lVar13 = lVar10;
  func_0x00010bf529e0();
  if (lVar13 != 0) {
    puVar8 = PTR_PTR_1126b26f0;
    func_0x00010bf41e00(dVar17,PTR_PTR_1126b26f0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar16);
    _objc_release(puVar8);
  }
  if (lVar5 == 0) {
    uStack_c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_d0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_c0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_b0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  }
  else {
    func_0x00010bf27a60(&uStack_d0,lVar5);
  }
  uVar14 = 0;
  _CGAffineTransformIsIdentity();
  puVar8 = puVar16;
  if ((lVar1 == 0) && ((uVar14 & 1) == 0)) {
    puVar11 = PTR_PTR_1126b26c8;
    func_0x00010c22b820();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar11;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar12;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar15;
    func_0x00010c0d3c80();
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar12);
    _objc_release(puVar11);
  }
  puVar16 = puVar8;
  func_0x00010bf529e0();
  if (puVar16 == (undefined *)0x0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    puVar11 = param_7;
    func_0x00010c0b8600(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126c4ac0;
    func_0x00010aefb9ac(PTR_PTR_1126c4ac0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010aefba04();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297160(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010aefba48(puVar12,puVar16);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar16);
    puVar16 = puVar12;
    param_4 = puVar11;
    func_0x00010aefba8c(puVar12,puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010aefb9cc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar11);
  }
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(lVar1);
  _objc_release(lVar9);
  _objc_release(puVar8);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(param_7);
  _objc_release(lVar10);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf97970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b26d8,PTR_s_entryWithLensId__1125c3800,param_4)
  ;
  return;
}



/* Entry: 105dc8f44; end: 105dc8f53;  */

void FUN_105dc8f44(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b26d8,PTR_s_entryWithLensId__1125c3800,param_2)
  ;
  return;
}



/* Entry: 105dc8f54; end: 105dc901b;  */

void FUN_105dc8f54(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x00010bdc1140(&uStack_48,param_2);
  }
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  lVar1 = *(long *)(param_1 + 0x20) + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x00010bfb71e0(&uStack_60,lVar1);
  }
  func_0x00010c297200(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105dc901c; end: 105dc90f3; -[SCPreviewFeatureTimelineImpl _setGeofilterAttachmentUrlIfNeededToEphemeralMediaList:] */

void FUN_105dc901c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0xe0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0d6c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    param_1 = param_1 + 0x200;
    _objc_loadWeakRetained();
    lVar2 = param_1;
    func_0x00010bfa2840();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c28f360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(param_1);
    lVar2 = lVar3;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      func_0x00010c16b3c0(param_3,param_2,lVar3);
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105dc90f4; end: 105dc9487; -[SCPreviewFeatureTimelineImpl _showDiscardUnsupporttedEditsWarningWithPreviewExitType:] */

undefined1 * FUN_105dc90f4(long param_1,undefined1 *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined **unaff_x27;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x1f8);
  func_0x00010c09df80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar13;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c140140();
  _objc_release(uVar3);
  _objc_release(uVar13);
  _objc_release(uVar2);
  puVar5 = *(undefined1 **)(param_1 + 0x98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf208a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release();
  uVar1 = (uint)uVar4;
  if (puVar6 != (undefined1 *)0x0) {
    uVar1 = 1;
  }
  if (uVar1 == 1) {
    puVar5 = auStack_80;
    _objc_initWeak(puVar5,param_1);
    puVar7 = PTR_PTR_1126aed70;
    func_0x000108eded08();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105dc9488;
    puStack_98 = &UNK_1108e9190;
    unaff_x27 = &puStack_b0;
    param_2 = auStack_80;
    _objc_copyWeak(auStack_90,param_2);
    uStack_88 = param_3;
    func_0x00010beff480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar8 = PTR_PTR_1126aed70;
    func_0x000108ede780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar9 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    if ((uint)uVar4 != 0) {
      func_0x000108edebd0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ba0(puVar9);
      _objc_release();
    }
    if (puVar6 != (undefined1 *)0x0) {
      func_0x000108ede768();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ba0(puVar9);
      _objc_release(puVar10);
    }
    func_0x000108edecd8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf070e0(puVar9);
    _objc_release(puVar10);
    puVar10 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar11 = puVar10;
    func_0x000108edecf0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar7;
    puStack_70 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar10);
    _objc_release(puVar12);
    _objc_release(puVar11);
    func_0x00010c211b40(puVar10);
    uVar13 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237000();
    _objc_release(uVar13);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_destroyWeak(auStack_90);
    puVar5 = auStack_80;
    _objc_destroyWeak();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return (undefined1 *)(ulong)uVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x27 + 4);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  _objc_retain(param_2);
  puVar5 = puVar5 + 0x20;
  _objc_loadWeakRetained();
  if (puVar5 != (undefined1 *)0x0) {
    puVar6 = puVar5 + 0x20;
    _objc_loadWeakRetained(puVar6);
    func_0x00010c1e1c00();
    _objc_release(puVar6);
    puVar6 = puVar5 + 0x200;
    _objc_loadWeakRetained(puVar6);
    func_0x00010bfa2800();
    _objc_release(puVar6);
    func_0x00010bf84b00(param_2);
  }
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return param_2;
}



/* Entry: 105dc9488; end: 105dc951b;  */

void FUN_105dc9488(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c1e1c00();
    _objc_release(lVar1);
    lVar1 = param_1 + 0x200;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bfa2800();
    _objc_release(lVar1);
    func_0x00010bf84b00(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105dc951c; end: 105dc952b;  */

void FUN_105dc951c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105dc952c; end: 105dc9983; -[SCPreviewFeatureTimelineImpl _validatePreviewEdits] */

undefined * FUN_105dc952c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x1f8);
  func_0x00010c09df80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar2;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eddc0();
  _objc_release(uVar15);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126b00e8;
  lVar3 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c110b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c270220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar6 = puVar5;
  func_0x00010c14b920();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar7 = puVar6;
  func_0x00010bfc1240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puVar7 = puVar6;
  func_0x00010bfc1160(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72020(puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar10 = puVar6;
  func_0x00010bfc1240();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar10;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar7 != (undefined *)0x0) {
    puVar16 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar10);
      }
      uVar15 = *(undefined8 *)((long)puVar16 * 8);
      uVar2 = uVar15;
      func_0x00010c081f00();
      if ((int)uVar2 != 0) {
        func_0x00010c12d360(puVar8);
        func_0x00010bfadea0(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0(puVar9);
        _objc_release(uVar15);
      }
      puVar16 = puVar16 + 1;
    } while (puVar7 != puVar16);
    puVar7 = puVar10;
    func_0x00010bf52a60();
  }
  _objc_release(puVar10);
  func_0x00010c1a2be0(puVar6);
  func_0x00010c1a2b80(puVar6);
  uVar11 = *(undefined8 *)(param_1 + 0x1f8);
  func_0x00010c09df80(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar11;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar2;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar15;
  func_0x00010bfc1440();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar1;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar15);
  _objc_release(uVar2);
  _objc_release(uVar11);
  uVar1 = *(undefined8 *)(param_1 + 0x1f8);
  func_0x00010c09df80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar2;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a2c80();
  _objc_release(uVar15);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar13 = *(undefined8 *)(param_1 + 0x1f8);
  func_0x00010c09df80(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar13;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar2;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar15;
  func_0x00010bfc1460();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar1;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar15);
  _objc_release(uVar2);
  _objc_release(uVar13);
  uVar1 = *(undefined8 *)(param_1 + 0x1f8);
  func_0x00010c09df80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar2;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a2ca0();
  _objc_release(uVar15);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar11);
  _objc_release(uVar12);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x00010c081f00(param_2);
  return (undefined *)(ulong)((uint)param_2 ^ 1);
}



/* Entry: 105dc9984; end: 105dc99bb;  */

uint FUN_105dc9984(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c081f00(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 105dc99bc; end: 105dc9a5f; -[SCPreviewFeatureTimelineImpl _isTimelineDraftFromMemories] */

long FUN_105dc99bc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010c243400();
  if (lVar4 == 7) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010b5fac18();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  else {
    lVar4 = 0;
  }
  _objc_release(lVar1);
  return lVar4;
}



/* Entry: 105dc9a60; end: 105dca0f3; -[SCPreviewFeatureTimelineImpl _exportVideosForTimelineDraftSavingWithCompletion:] */

void FUN_105dc9a60(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [48];
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  long lStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  long lStack_200;
  undefined **ppuStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
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
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010c1581e0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = param_1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = (undefined *)0x0;
    puVar7 = puVar1;
    (**(code **)(param_3 + 0x10))(param_3,0,puVar1,0,0);
    iVar10 = (int)puVar7;
    puVar7 = puVar1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    lStack_200 = param_3;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = unaff_x23;
    _dispatch_group_create();
    puVar2 = param_1 + 0x20;
    puStack_1d0 = puVar9;
    _objc_loadWeakRetained();
    puVar9 = puVar2;
    func_0x00010c1581e0();
    _objc_release(puVar2);
    unaff_x24 = (undefined *)0x0;
    if (puVar9 != (undefined *)0x0) {
      unaff_x24 = (undefined *)0x0;
      ppuStack_1f8 = &PTR____CFConstantStringClassReference_110f314b8;
      puStack_1f0 = param_1;
      puStack_1e8 = unaff_x23;
      puStack_1e0 = puVar1;
      do {
        puVar2 = param_1 + 0x20;
        _objc_loadWeakRetained();
        puVar9 = puVar2;
        func_0x00010c1585e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar9;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        _objc_release(puVar2);
        puVar2 = puVar7;
        func_0x00010bf0b7e0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar2);
        puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        if (puVar7 == (undefined *)0x0) {
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
        }
        else {
          func_0x00010bf4d840(&uStack_d0,puVar7);
        }
        func_0x00010c297240(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(unaff_x23);
        _objc_release(puVar2);
        if (puVar7 == (undefined *)0x0) {
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
        }
        else {
          func_0x00010bf4d840(&uStack_d0,puVar7);
          func_0x00010c27c900(&uStack_100,puVar7);
        }
        uStack_118 = uStack_b0;
        uStack_120 = uStack_b8;
        uStack_110 = uStack_a8;
        uStack_138 = uStack_e0;
        uStack_140 = uStack_e8;
        uStack_130 = uStack_d8;
        puVar3 = &uStack_120;
        _CMTimeCompare(puVar3,&uStack_140);
        puVar2 = PTR_DAT_1126a4e40;
        if ((int)puVar3 != 0) {
          _objc_retain(puVar7);
          puVar9 = puVar7;
          func_0x00010010fab4(puVar7,puVar2);
          puVar2 = puVar7;
          if ((int)puVar9 == 0) {
            puVar2 = (undefined *)0x0;
          }
          _objc_retain(puVar2);
          _objc_release(puVar7);
          ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSValue_1126afdf8;
          if (puVar2 == (undefined *)0x0) {
            _dispatch_group_enter(puStack_1d0);
            puVar1 = PTR_PTR_1126b1350;
            _objc_alloc(PTR_PTR_1126b1350);
            func_0x00010bfeee60();
            ppuVar4 = ppuStack_1f8;
            func_0x000108553e88(ppuStack_1f8,&PTR____CFConstantStringClassReference_110dbab38,1,
                                puVar1);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar1);
            puVar9 = PTR_PTR_1126c4ac8;
            _objc_alloc();
            puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
            if (puVar7 == (undefined *)0x0) {
              uStack_b8 = 0;
              uStack_c0 = 0;
              uStack_a8 = 0;
              uStack_b0 = 0;
              uStack_c8 = 0;
              uStack_d0 = 0;
            }
            else {
              func_0x00010c09e0e0(&uStack_d0,puVar7);
            }
            func_0x00010c297240();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_90 = puVar1;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
            ppuStack_98 = ppuVar4;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0525e0();
            puStack_1d8 = puVar9;
            _objc_release(puVar6);
            _objc_release(puVar5);
            _objc_release(puVar1);
            puVar6 = PTR_PTR_1126c4ad0;
            _objc_alloc(PTR_PTR_1126c4ad0);
            puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
            puVar9 = puVar7;
            func_0x00010bf0b7e0(puVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf0b9e0(puVar1);
            _objc_retainAutoreleasedReturnValue();
            param_1 = puStack_1f0;
            func_0x00010c060b80(puVar6);
            _objc_release(puVar1);
            _objc_release(puVar9);
            uVar11 = 2;
            func_0x0001000819a8(2,0);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = puStack_1e0;
            puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_188 = 0xc2000000;
            pcStack_180 = FUN_105dca0f4;
            puStack_178 = &UNK_1108e9550;
            _objc_retain(puStack_1e0);
            unaff_x23 = puStack_1e8;
            puStack_170 = puVar1;
            puStack_148 = unaff_x24;
            _objc_retain(puStack_1e8);
            puStack_168 = unaff_x23;
            _objc_retain(puVar7);
            puVar5 = puStack_1d0;
            puStack_158 = param_1;
            puStack_160 = puVar7;
            _objc_retain(puStack_1d0);
            puVar9 = puStack_1d8;
            puStack_150 = puVar5;
            func_0x00010bf16e60(puVar6);
            _objc_release(uVar11);
            _objc_release(puStack_150);
            _objc_release(puStack_160);
            _objc_release(puStack_168);
            _objc_release(puStack_170);
            _objc_release(puVar6);
            _objc_release(puVar9);
          }
          else {
            if (puVar7 == (undefined *)0x0) {
              uStack_b8 = 0;
              uStack_c0 = 0;
              uStack_a8 = 0;
              uStack_b0 = 0;
              uStack_c8 = 0;
              uStack_d0 = 0;
            }
            else {
              func_0x00010c27c900(&uStack_d0,puVar7);
            }
            func_0x00010c297240(ppuVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c130f40(unaff_x23);
          }
          _objc_release(ppuVar4);
          _objc_release(puVar2);
        }
        _objc_release(puVar7);
        unaff_x24 = unaff_x24 + 1;
        puVar2 = param_1 + 0x20;
        _objc_loadWeakRetained();
        puVar9 = puVar2;
        func_0x00010c1581e0();
        _objc_release(puVar2);
      } while (unaff_x24 < puVar9);
    }
    puVar7 = (undefined *)0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    param_3 = lStack_200;
    puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1c0 = 0xc2000000;
    pcStack_1b8 = FUN_105dca224;
    puStack_1b0 = &UNK_11084a9e8;
    _objc_retain(lStack_200);
    lStack_198 = param_3;
    puStack_1a8 = puVar1;
    puStack_1a0 = unaff_x23;
    _objc_retain(unaff_x23);
    _objc_retain(puVar1);
    puVar2 = puStack_1d0;
    iVar10 = (int)&puStack_1c8;
    puVar9 = puVar7;
    func_0x000100bc0718(puStack_1d0);
    _objc_release(puVar7);
    _objc_release(puStack_1a0);
    _objc_release(puStack_1a8);
    _objc_release(lStack_198);
    _objc_release(unaff_x23);
  }
  _objc_release(puVar1);
  _objc_release(puVar2);
  lVar8 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  pcStack_208 = FUN_105dca0f4;
  puStack_240 = unaff_x24;
  puStack_238 = unaff_x23;
  puStack_230 = param_1;
  lStack_228 = param_3;
  puStack_220 = puVar2;
  puStack_218 = puVar7;
  puStack_210 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  if ((iVar10 != 0) && (puVar1 = puVar9, func_0x00010bf529e0(), puVar1 == (undefined *)0x1)) {
    uVar11 = *(undefined8 *)(lVar8 + 0x20);
    puVar1 = puVar9;
    func_0x00010bfb1920(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130f40(uVar11);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    uVar11 = *(undefined8 *)(lVar8 + 0x28);
    if (*(long *)(lVar8 + 0x30) == 0) {
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_298 = 0;
      uStack_2a0 = 0;
    }
    else {
      func_0x00010c09e0e0(&uStack_2a0);
    }
    uStack_2b8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_2c0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_2b0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_2d8 = uStack_280;
    uStack_2e0 = uStack_288;
    uStack_2d0 = uStack_278;
    _CMTimeRangeMake(auStack_270,&uStack_2c0,&uStack_2e0);
    func_0x00010c297240(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130f40(uVar11);
    _objc_release(puVar1);
  }
  _dispatch_group_leave(*(undefined8 *)(lVar8 + 0x40));
  _objc_release(puVar9);
  return;
}



/* Entry: 105dca0f4; end: 105dca223;  */

void FUN_105dca0f4(long param_1,long param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [48];
  
  _objc_retain(param_2);
  if ((param_3 != 0) && (lVar1 = param_2, func_0x00010bf529e0(), lVar1 == 1)) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130f40(uVar3);
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    if (*(long *)(param_1 + 0x30) == 0) {
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      func_0x00010c09e0e0(&uStack_a0);
    }
    uStack_b8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_c0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_b0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_d8 = uStack_80;
    uStack_e0 = uStack_88;
    uStack_d0 = uStack_78;
    _CMTimeRangeMake(auStack_70,&uStack_c0,&uStack_e0);
    func_0x00010c297240(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130f40(uVar3);
    _objc_release(puVar2);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x40));
  _objc_release(param_2);
  return;
}



/* Entry: 105dca224; end: 105dca23f;  */

void FUN_105dca224(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105dca23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),1,0,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105dca240; end: 105dca307; -[SCPreviewFeatureTimelineImpl _shouldTrimVideoBeforeSaveForSegment:] */

bool FUN_105dca240(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x000107fb2960();
  if ((uVar2 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + 0x40);
    func_0x000108ec0eb0();
    if ((uVar2 & 1) == 0) {
      if (param_3 == 0) {
        uStack_38 = 0;
        uStack_40 = 0;
        uStack_28 = 0;
        uStack_30 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        func_0x00010bf4d840(&uStack_50,param_3);
        func_0x00010c27c900(&uStack_80,param_3);
      }
      uStack_98 = uStack_30;
      uStack_a0 = uStack_38;
      uStack_90 = uStack_28;
      uStack_b8 = uStack_60;
      uStack_c0 = uStack_68;
      uStack_b0 = uStack_58;
      puVar3 = &uStack_a0;
      _CMTimeCompare(puVar3,&uStack_c0);
      bVar1 = (int)puVar3 != 0;
      goto LAB_105dca2ec;
    }
  }
  bVar1 = false;
LAB_105dca2ec:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105dca308; end: 105dca42f; -[SCPreviewFeatureTimelineImpl _computeHardTrimTimeRangeForSegment:] */

void FUN_105dca308(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
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
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bf730;
  _objc_alloc(PTR_PTR_1126bf730);
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (param_3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010c09e0e0(&uStack_90,param_3);
  }
  uStack_a8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_b0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_a0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_c8 = uStack_70;
  uStack_d0 = uStack_78;
  uStack_c0 = uStack_68;
  _CMTimeRangeMake(&uStack_60,&uStack_b0,&uStack_d0);
  func_0x00010c297240(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x00010c09e0e0(&uStack_60,param_3);
  }
  func_0x00010c297240(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c055780(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105dca430; end: 105dca8ab; -[SCPreviewFeatureTimelineImpl _saveUcoRawMediaInEditor:completion:] */

void FUN_105dca430(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined1 auStack_90 [8];
  ulong uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010c09dea0();
  if (uVar2 != 0) {
    uVar15 = 0;
    do {
      puVar3 = PTR_PTR_1126affe8;
      func_0x00010c09e180();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(ulong *)(param_1 + 0x1f8);
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf529e0();
      _objc_release(uVar5);
      _objc_release(uVar4);
      if (uVar6 <= uVar15) {
        puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR_PTR_1126ae558;
        func_0x00010bfe9c80(PTR_PTR_1126ae558);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(puVar3);
        break;
      }
      func_0x00010bf6c5c0(param_3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar7 = *(long *)(param_1 + 0x1f8);
      func_0x00010bf8c840();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bfaee40();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c27e680();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010bf529e0();
      _objc_release(lVar9);
      _objc_release(lVar8);
      if (lVar10 != 0) {
        puVar13 = PTR_PTR_1126ae560;
        _objc_opt_new();
        puVar14 = puVar13;
        func_0x00010bfbc3e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar14);
        uVar5 = param_3;
        func_0x00010c0ff580(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_3;
        func_0x00010c0ff640();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_initWeak(auStack_80,param_1);
        uVar6 = uVar4;
        func_0x00010c0c3fe0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar6;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = param_3;
        func_0x00010c0c6f80(param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_90,auStack_80);
        _objc_retain(puVar13);
        _objc_retain(param_3);
        _objc_retain(puVar3);
        _objc_retain(uVar4);
        uStack_88 = uVar15;
        func_0x00010c297260(uVar12);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar6);
        _objc_release(uVar4);
        _objc_release(puVar3);
        _objc_release(param_3);
        _objc_release(puVar13);
        _objc_destroyWeak(auStack_90);
        _objc_destroyWeak(auStack_80);
        _objc_release(uVar4);
        _objc_release(uVar5);
        _objc_release(puVar13);
      }
      _objc_release(lVar7);
      _objc_release(puVar3);
      uVar15 = uVar15 + 1;
    } while (uVar2 != uVar15);
  }
  puVar3 = PTR_PTR_1126ae558;
  func_0x00010beffb40(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010c297260(puVar3);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105dca8ac; end: 105dca933;  */

bool FUN_105dca8ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 3;
}



/* Entry: 105dca934; end: 105dcaecf;  */

void FUN_105dca934(long param_1,undefined **param_2,undefined8 param_3,undefined **param_4)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = param_2;
  _objc_retain(param_2);
  lVar2 = param_1 + 0x48;
  _objc_loadWeakRetained();
  puVar14 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 == 0) {
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_105dcaed0;
    puStack_a8 = &UNK_1108e95f0;
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar11);
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    uStack_a0 = uVar11;
    _objc_retain(uVar12);
    ppuVar3 = &puStack_c0;
    uStack_98 = uVar12;
    _objc_retainBlock();
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar12;
    func_0x00010bfd6a20();
    _objc_release(uVar12);
    ppuVar5 = param_2;
    if ((int)uVar11 != 0) {
      ppuVar4 = *(undefined ***)(lVar2 + 0x1f8);
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar4;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar10;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar8;
      func_0x00010bf0b7e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(ppuVar8);
      _objc_release(ppuVar10);
      _objc_release(ppuVar4);
    }
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar12;
    func_0x00010c27dd80();
    _objc_release(uVar12);
    puVar13 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if ((int)uVar11 == 0) {
      ppuVar10 = ppuVar5;
      func_0x00010c0f5800(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14d020();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar10);
      ppuVar10 = *(undefined ***)(lVar2 + 0x130);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar10;
      func_0x00010bfc0d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar10);
      puStack_e8 = puVar14;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_105dcb140;
      puStack_d0 = &UNK_110849810;
      ppuVar4 = *(undefined ***)(param_1 + 0x20);
      _objc_retain(ppuVar4);
      param_4 = &puStack_e8;
      ppuVar10 = ppuVar8;
      ppuStack_c8 = ppuVar4;
      (*(code *)ppuVar3[2])(ppuVar3,ppuVar8,2);
      ppuVar4 = ppuStack_c8;
    }
    else {
      puVar6 = *(undefined **)(lVar2 + 0x1f8);
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar7;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar6);
      iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
      func_0x00010beb6de0();
      if (iVar1 == 0) {
        ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010c14d620();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = *(undefined ***)(lVar2 + 0x130);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar10;
        func_0x00010bfc0da0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar10);
        puStack_148 = puVar14;
        uStack_140 = 0xc2000000;
        uStack_138 = 0x105dcb29c;
        puStack_130 = &UNK_110849810;
        puVar14 = *(undefined **)(param_1 + 0x20);
        _objc_retain(puVar14);
        param_4 = &puStack_148;
        ppuVar10 = ppuVar4;
        puStack_128 = puVar14;
        (*(code *)ppuVar3[2])(ppuVar3,ppuVar4,3);
        puVar14 = puStack_128;
      }
      else {
        ppuVar8 = *(undefined ***)(param_1 + 0x40);
        func_0x00010bde4380();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = &PTR____CFConstantStringClassReference_110f314b8;
        puVar14 = PTR_PTR_1126b1350;
        _objc_alloc(PTR_PTR_1126b1350);
        func_0x00010bfeee60();
        func_0x000108553e88(&PTR____CFConstantStringClassReference_110f314b8,
                            &PTR____CFConstantStringClassReference_110dbab38,1,puVar14);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar14);
        puVar14 = PTR_PTR_1126c4ac8;
        _objc_alloc();
        ppuVar10 = ppuVar8;
        func_0x00010bf4d860();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
        ppuStack_88 = ppuVar10;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        ppuStack_90 = ppuVar4;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0525e0();
        _objc_release(puVar6);
        _objc_release(puVar7);
        _objc_release(ppuVar10);
        puVar7 = PTR_PTR_1126c4ad0;
        _objc_alloc();
        puVar6 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
        func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c060b80();
        _objc_release(puVar6);
        ppuVar9 = (undefined **)0x0;
        ppuVar10 = (undefined **)0x0;
        func_0x0001000819a8();
        _objc_retainAutoreleasedReturnValue();
        puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_118 = 0xc2000000;
        pcStack_110 = FUN_105dcb158;
        puStack_108 = &UNK_1108e9620;
        lStack_100 = lVar2;
        _objc_retain(ppuVar3);
        uVar11 = *(undefined8 *)(param_1 + 0x20);
        ppuStack_f0 = ppuVar3;
        _objc_retain(uVar11);
        param_4 = ppuVar9;
        uStack_f8 = uVar11;
        func_0x00010bf16e60(puVar7);
        _objc_release(ppuVar9);
        _objc_release(uStack_f8);
        _objc_release(ppuStack_f0);
        _objc_release(puVar7);
      }
      _objc_release(puVar14);
    }
    _objc_release(ppuVar4);
    _objc_release(ppuVar8);
    _objc_release(puVar13);
    _objc_release(ppuVar3);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    param_2 = ppuVar5;
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar10);
  _objc_retain(param_4);
  ppuVar3 = ppuVar10;
  func_0x00010bf0b0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar3 == (undefined **)0x0) {
    puVar14 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)param_4[2])(param_4,puVar14);
  }
  else {
    puVar7 = PTR_PTR_1126b25c8;
    _objc_alloc_init();
    func_0x00010c16a960();
    puVar13 = PTR_PTR_1126b3080;
    puVar14 = param_2[4];
    ppuVar3 = ppuVar10;
    func_0x00010bf0b0c0(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64b00(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9c20(puVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    _objc_release(ppuVar3);
    _objc_retain(param_4);
    puVar6 = param_2[4];
    _objc_retain(puVar6);
    puVar13 = param_2[5];
    _objc_retain(puVar13);
    _objc_retain(puVar7);
    func_0x00010c297260(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(param_4);
    _objc_release(puVar7);
  }
  _objc_release(puVar14);
  _objc_release(param_4);
  _objc_release(ppuVar10);
  return;
}



/* Entry: 105dcaed0; end: 105dcb0b7;  */

void FUN_105dcaed0(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010bf0b0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,puVar5);
  }
  else {
    puVar2 = PTR_PTR_1126b25c8;
    _objc_alloc_init();
    func_0x00010c16a960();
    puVar3 = PTR_PTR_1126b3080;
    puVar5 = *(undefined **)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010bf0b0c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64b00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9c20(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_retain(param_4);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    _objc_retain(puVar2);
    func_0x00010c297260(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(puVar2);
    _objc_release(param_4);
    _objc_release(puVar2);
  }
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 105dcb0b8; end: 105dcb13f;  */

void FUN_105dcb0b8(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  
  if ((param_2 != 0) && (param_3 == 0)) {
    func_0x00010c1c4880(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
    puVar1 = PTR_PTR_1126b25d0;
    _objc_opt_new(PTR_PTR_1126b25d0);
    func_0x00010c1c4020();
    func_0x00010befa9a0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000105dcb13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),param_3);
  return;
}



/* Entry: 105dcb140; end: 105dcb157;  */

void FUN_105dcb140(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0,param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,0);
  return;
}



/* Entry: 105dcb158; end: 105dcb283;  */

void FUN_105dcb158(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  if (param_3 != 0) {
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d620(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x130);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfc0da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105dcb284;
    puStack_40 = &UNK_110849810;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    lVar1 = *(long *)(param_1 + 0x30);
    _objc_retain(uVar3);
    uStack_38 = uVar3;
    (**(code **)(lVar1 + 0x10))(lVar1,uVar4,3,&puStack_58);
    _objc_release(uStack_38);
    _objc_release(uVar4);
    _objc_release(puVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_completeWithError__1125ae8d0,param_4);
  return;
}



/* Entry: 105dcb284; end: 105dcb2c3;  */

void FUN_105dcb284(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0,param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,0);
  return;
}



/* Entry: 105dcb2c4; end: 105dcb43b; -[SCPreviewFeatureTimelineImpl _saveExportedMediaInEditor:completion:] */

void FUN_105dcb2c4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c1581e0();
  lVar3 = param_3;
  func_0x00010c09dea0();
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar2 == lVar3) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(puVar4);
    func_0x00010be99040(param_1);
    _objc_release(param_4);
    _objc_release(puVar4);
  }
  else {
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    (**(code **)(param_4 + 0x10))(param_4,puVar4);
  }
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105dcb43c; end: 105dcb4cb;  */

void FUN_105dcb43c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf00d20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,uVar3);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000105dcb4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x10))(lVar4,0);
  return;
}



/* Entry: 105dcb4cc; end: 105dcb843; -[SCPreviewFeatureTimelineImpl _saveExportedMediaInEditor:startFromIndex:errors:completion:] */

void FUN_105dcb4cc(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = param_3;
  func_0x00010c09dea0();
  if (param_4 == puVar1) {
    (**(code **)(param_6 + 0x10))(param_6);
  }
  else {
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x1f8);
    func_0x00010bf8c840();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfaee40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c27e680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar8 = PTR_PTR_1126affe8;
    func_0x00010c09e180();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_3;
    func_0x00010c0ff580();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar9;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_3;
    func_0x00010c0ff640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_105dcb888;
    puStack_90 = &UNK_1108e96a0;
    _objc_retain(param_5);
    uStack_88 = param_5;
    lStack_80 = param_1;
    puStack_68 = param_4;
    _objc_retain(param_3);
    puStack_78 = param_3;
    _objc_retain(param_6);
    ppuVar11 = &puStack_a8;
    lStack_70 = param_6;
    _objc_retainBlock();
    puVar1 = puVar10;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010c27dd80();
    _objc_release(puVar1);
    puVar1 = puVar10;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    if ((int)puVar12 == 0) {
      func_0x00010be99000(param_1);
    }
    else {
      puVar12 = puVar1;
      func_0x00010c27dd80();
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      if ((int)puVar12 == 1) {
        puVar1 = puVar10;
        func_0x00010c0c3fe0(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be99060(param_1);
      }
      else {
        _objc_opt_class(param_1);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99260(puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_1);
        (*(code *)ppuVar11[2])(ppuVar11,puVar1);
      }
    }
    _objc_release(puVar1);
    _objc_release(ppuVar11);
    _objc_release(lStack_70);
    _objc_release(puStack_78);
    _objc_release(uStack_88);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(lVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105dcb844; end: 105dcb887;  */

bool FUN_105dcb844(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 5;
}



/* Entry: 105dcb888; end: 105dcb91b;  */

void FUN_105dcb888(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010c0df840(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2);
    _objc_release(param_2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be99050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s__saveExportedMediaInEditor_start_112583db0,
             *(undefined8 *)(param_1 + 0x30),*(long *)(param_1 + 0x40) + 1,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 105dcb91c; end: 105dcbb17; -[SCPreviewFeatureTimelineImpl _saveExportedImageInEditor:atIndex:mediaSegment:mediaMetadata:ucoFilterIDs:completion:] */

void FUN_105dcb91c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_7;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(param_8 + 0x10))(param_8,0);
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    uVar2 = param_6;
    func_0x00010c0c5180(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0c6f80(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_8);
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_7);
    uStack_70 = param_4;
    _objc_retain(param_3);
    func_0x00010c297260(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(param_6);
    _objc_release(param_8);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105dcbb18; end: 105dcbcb3;  */

void FUN_105dcbb18(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    lVar4 = *(long *)(param_1 + 0x48);
    pcVar5 = *(code **)(lVar4 + 0x10);
    lVar3 = 0;
  }
  else {
    if ((param_2 != 0) && (param_3 == 0)) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010bfd6a20();
      lVar3 = param_2;
      if (iVar1 != 0) {
        lVar3 = *(long *)(param_1 + 0x28);
        func_0x00010bf0b7e0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_2);
      }
      _objc_copyWeak(auStack_60,param_1 + 0x50);
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      _objc_retain(uVar6);
      uStack_58 = *(undefined8 *)(param_1 + 0x58);
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar7);
      uVar8 = *(undefined8 *)(param_1 + 0x40);
      _objc_retain(*(undefined8 *)(param_1 + 0x40));
      func_0x00010bece660(lVar2);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_destroyWeak(auStack_60);
      param_2 = lVar3;
      goto LAB_105dcbc6c;
    }
    lVar4 = *(long *)(param_1 + 0x48);
    pcVar5 = *(code **)(lVar4 + 0x10);
    lVar3 = param_3;
  }
  (*pcVar5)(lVar4,lVar3);
LAB_105dcbc6c:
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105dcbcb4; end: 105dcbefb;  */

void FUN_105dcbcb4(long param_1,long param_2,undefined **param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126bfa70;
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x38);
    pcVar7 = *(code **)(lVar2 + 0x10);
    ppuVar4 = (undefined **)0x0;
  }
  else {
    if (param_2 != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        func_0x00010c27c900(&uStack_90);
      }
      uStack_a8 = uStack_70;
      uStack_b0 = uStack_78;
      uStack_a0 = uStack_68;
      func_0x00010bef9220();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      if (puVar3 == (undefined *)0x0) {
        ppuVar4 = *(undefined ***)(param_1 + 0x28);
        _objc_opt_class(ppuVar4);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar4;
        func_0x00010bf99260(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar4);
        (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),puVar5);
      }
      else {
        uVar9 = *(undefined8 *)(param_1 + 0x30);
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_60 = puVar3;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf08820(uVar9);
        _objc_retainAutoreleasedReturnValue();
        puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d0 = 0xc2000000;
        pcStack_c8 = FUN_105dcbefc;
        puStack_c0 = &UNK_1108e96d0;
        puVar8 = *(undefined **)(param_1 + 0x38);
        _objc_retain(puVar8);
        ppuVar6 = &puStack_d8;
        puStack_b8 = puVar8;
        func_0x00010c297260(uVar9);
        _objc_release(uVar9);
        _objc_release(puVar5);
        puVar5 = puStack_b8;
      }
      _objc_release(puVar5);
      _objc_release(puVar3);
      goto LAB_105dcbeac;
    }
    lVar2 = *(long *)(param_1 + 0x38);
    pcVar7 = *(code **)(lVar2 + 0x10);
    ppuVar4 = param_3;
  }
  (*pcVar7)(lVar2,ppuVar4);
LAB_105dcbeac:
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000105dcbf08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x20) + 0x10))(*(long *)(param_2 + 0x20),ppuVar6);
  return;
}



/* Entry: 105dcbefc; end: 105dcbf0b;  */

void FUN_105dcbefc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000105dcbf08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
  return;
}



/* Entry: 105dcbf0c; end: 105dcc3ff; -[SCPreviewFeatureTimelineImpl _saveExportedVideoInEditor:atIndex:mediaSegment:mediaMetadata:ucoFilterIDs:completion:] */

void FUN_105dcbf0c(long param_1,undefined1 *param_2,long param_3,undefined **param_4,
                  undefined **param_5,long param_6,long param_7,long param_8)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined **ppuVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_1b0 [8];
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined **ppuStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined **ppuStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined1 auStack_f8 [8];
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  undefined **ppuStack_90;
  undefined1 auStack_88 [8];
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar9 = param_1;
  ppuVar10 = param_5;
  func_0x00010beb6de0();
  if ((int)lVar9 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1;
    ppuVar10 = param_5;
    func_0x00010bde4380();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar5 = param_7;
  func_0x00010bf529e0();
  if ((lVar5 == 0) && (lVar9 == 0)) {
    param_2 = (undefined1 *)0x0;
    (**(code **)(param_8 + 0x10))(param_8);
  }
  else {
    lVar5 = param_7;
    func_0x00010bf529e0();
    if (lVar5 == 0) {
      if (lVar9 != 0) {
        ppuVar10 = &PTR____CFConstantStringClassReference_110f314b8;
        puVar2 = PTR_PTR_1126b1350;
        ppuStack_150 = param_4;
        _objc_alloc(PTR_PTR_1126b1350);
        func_0x00010bfeee60();
        func_0x000108553e88(&PTR____CFConstantStringClassReference_110f314b8,
                            &PTR____CFConstantStringClassReference_110dbab38,1,puVar2);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_140 = ppuVar10;
        _objc_release(puVar2);
        ppuVar10 = (undefined **)PTR_PTR_1126c4ac8;
        _objc_alloc();
        lVar5 = lVar9;
        ppuStack_148 = ppuVar10;
        func_0x00010bf4d860();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
        lStack_78 = lVar5;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_80 = ppuStack_140;
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0525e0();
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(lVar5);
        _objc_initWeak(auStack_88,param_1);
        puVar3 = PTR_PTR_1126c4ad0;
        _objc_alloc(PTR_PTR_1126c4ad0);
        puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
        ppuVar10 = param_5;
        func_0x00010bf0b7e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b9e0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c060b80(puVar3);
        _objc_release(puVar2);
        _objc_release(ppuVar10);
        uVar8 = 0;
        func_0x0001000819a8(0,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_130 = 0xc2000000;
        pcStack_128 = FUN_105dcc6c0;
        puStack_120 = &UNK_1108e9760;
        param_4 = &puStack_138;
        param_2 = auStack_88;
        _objc_copyWeak(auStack_f8);
        _objc_retain(param_8);
        lStack_100 = param_8;
        _objc_retain(param_3);
        ppuStack_f0 = ppuStack_150;
        lStack_118 = param_3;
        _objc_retain(lVar9);
        ppuVar10 = ppuStack_148;
        lStack_110 = lVar9;
        lStack_108 = param_1;
        func_0x00010bf16e60(puVar3);
        _objc_release(uVar8);
        _objc_release(lStack_110);
        _objc_release(lStack_118);
        _objc_release(lStack_100);
        _objc_destroyWeak(auStack_f8);
        _objc_release(puVar3);
        _objc_destroyWeak(auStack_88);
        _objc_release(ppuStack_148);
        _objc_release(ppuStack_140);
      }
    }
    else {
      _objc_initWeak(auStack_88,param_1);
      param_1 = param_6;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010c0c6f80(param_3);
      _objc_retainAutoreleasedReturnValue();
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_105dcc400;
      puStack_d0 = &UNK_1108e9700;
      param_2 = auStack_88;
      _objc_copyWeak(auStack_98);
      _objc_retain(param_8);
      lStack_a0 = param_8;
      _objc_retain(param_6);
      lStack_c8 = param_6;
      _objc_retain(param_5);
      ppuStack_c0 = param_5;
      _objc_retain(param_7);
      lStack_b8 = param_7;
      _objc_retain(lVar9);
      lStack_b0 = lVar9;
      _objc_retain(param_3);
      ppuVar10 = &puStack_e8;
      lStack_a8 = param_3;
      ppuStack_90 = param_4;
      func_0x00010c297260(lVar5);
      _objc_release(lVar5);
      _objc_release(param_1);
      _objc_release(lStack_a8);
      _objc_release(lStack_b0);
      _objc_release(lStack_b8);
      _objc_release(ppuStack_c0);
      _objc_release(lStack_c8);
      _objc_release(lStack_a0);
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(auStack_88);
      param_4 = &puStack_e8;
    }
  }
  _objc_release(lVar9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_4 + 8);
  _objc_destroyWeak(auStack_88);
  lVar5 = param_3;
  __Unwind_Resume();
  pcStack_158 = FUN_105dcc400;
  lStack_1a0 = param_1;
  ppuStack_198 = param_4;
  lStack_190 = lVar9;
  lStack_188 = param_8;
  lStack_180 = param_7;
  lStack_178 = param_6;
  ppuStack_170 = param_5;
  lStack_168 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  _objc_retain(ppuVar10);
  lVar9 = lVar5 + 0x50;
  _objc_loadWeakRetained();
  if (lVar9 == 0) {
    lVar5 = *(long *)(lVar5 + 0x48);
    pcVar7 = *(code **)(lVar5 + 0x10);
    ppuVar6 = (undefined **)0x0;
  }
  else {
    if ((param_2 != (undefined1 *)0x0) && (ppuVar10 == (undefined **)0x0)) {
      iVar1 = (int)*(undefined8 *)(lVar5 + 0x20);
      func_0x00010bfd6a20();
      puVar4 = param_2;
      if (iVar1 != 0) {
        puVar4 = *(undefined1 **)(lVar5 + 0x28);
        func_0x00010bf0b7e0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_2);
      }
      _objc_copyWeak(auStack_1b0,lVar5 + 0x50);
      uVar11 = *(undefined8 *)(lVar5 + 0x48);
      _objc_retain(uVar11);
      uVar12 = *(undefined8 *)(lVar5 + 0x40);
      _objc_retain(uVar12);
      uStack_1a8 = *(undefined8 *)(lVar5 + 0x58);
      uVar8 = *(undefined8 *)(lVar5 + 0x38);
      _objc_retain(uVar8);
      func_0x00010bece9c0(lVar9);
      _objc_release(uVar8);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_destroyWeak(auStack_1b0);
      param_2 = puVar4;
      goto LAB_105dcc550;
    }
    lVar5 = *(long *)(lVar5 + 0x48);
    pcVar7 = *(code **)(lVar5 + 0x10);
    ppuVar6 = ppuVar10;
  }
  (*pcVar7)(lVar5,ppuVar6);
LAB_105dcc550:
  _objc_release(lVar9);
  _objc_release(ppuVar10);
  _objc_release(param_2);
  return;
}



/* Entry: 105dcc400; end: 105dcc597;  */

void FUN_105dcc400(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    lVar4 = *(long *)(param_1 + 0x48);
    pcVar5 = *(code **)(lVar4 + 0x10);
    lVar3 = 0;
  }
  else {
    if ((param_2 != 0) && (param_3 == 0)) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010bfd6a20();
      lVar3 = param_2;
      if (iVar1 != 0) {
        lVar3 = *(long *)(param_1 + 0x28);
        func_0x00010bf0b7e0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_2);
      }
      _objc_copyWeak(auStack_60,param_1 + 0x50);
      uVar7 = *(undefined8 *)(param_1 + 0x48);
      _objc_retain(uVar7);
      uVar8 = *(undefined8 *)(param_1 + 0x40);
      _objc_retain(uVar8);
      uStack_58 = *(undefined8 *)(param_1 + 0x58);
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar6);
      func_0x00010bece9c0(lVar2);
      _objc_release(uVar6);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_destroyWeak(auStack_60);
      param_2 = lVar3;
      goto LAB_105dcc550;
    }
    lVar4 = *(long *)(param_1 + 0x48);
    pcVar5 = *(code **)(lVar4 + 0x10);
    lVar3 = param_3;
  }
  (*pcVar5)(lVar4,lVar3);
LAB_105dcc550:
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105dcc598; end: 105dcc6af;  */

void FUN_105dcc598(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    pcVar3 = *(code **)(lVar2 + 0x10);
    uVar4 = 0;
  }
  else {
    if (param_2 != 0) {
      lVar2 = lVar1;
      func_0x00010bee0100(lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar4);
      func_0x00010c297260(lVar2);
      _objc_release(lVar2);
      _objc_release(uVar4);
      goto LAB_105dcc680;
    }
    lVar2 = *(long *)(param_1 + 0x30);
    pcVar3 = *(code **)(lVar2 + 0x10);
    uVar4 = param_3;
  }
  (*pcVar3)(lVar2,uVar4);
LAB_105dcc680:
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105dcc6b0; end: 105dcc6bf;  */

void FUN_105dcc6b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000105dcc6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
  return;
}



/* Entry: 105dcc6c0; end: 105dcc85f;  */

void FUN_105dcc6c0(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126b3080;
  if (lVar1 == 0) {
    lVar4 = *(long *)(param_1 + 0x38);
    pcVar5 = *(code **)(lVar4 + 0x10);
    uVar6 = 0;
  }
  else {
    if (param_3 != 0) {
      uVar6 = param_2;
      func_0x00010bfb1920(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfad3e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      uVar6 = param_2;
      func_0x00010bfb1920(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar6;
      func_0x0001080694e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar6);
      func_0x00010bee0020(lVar1);
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_release(puVar2);
      goto LAB_105dcc828;
    }
    lVar4 = *(long *)(param_1 + 0x38);
    pcVar5 = *(code **)(lVar4 + 0x10);
    uVar6 = param_4;
  }
  (*pcVar5)(lVar4,uVar6);
LAB_105dcc828:
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 105dcc860; end: 105dcc86b;  */

void FUN_105dcc860(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105dcc868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105dcc86c; end: 105dccb57; -[SCPreviewFeatureTimelineImpl _transcodeImageWithURL:ucoFilterIDs:completion:] */

void FUN_105dcc86c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_5 == 0) || (lVar3 = param_6, func_0x00010bf529e0(), lVar3 == 0)) {
    (**(code **)(param_7 + 0x10))(param_7,0,0);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_6;
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      lVar3 = param_6;
      func_0x00010c0b8600(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar1);
      _objc_release(lVar3);
    }
    puVar2 = puVar1;
    func_0x00010bf529e0();
    if (puVar2 == (undefined *)0x0) {
      lVar3 = 0;
    }
    else {
      puVar2 = PTR_PTR_1126b26e0;
      func_0x00010c29b780(PTR_PTR_1126b26e0);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(param_3 + 0x48);
      func_0x00010bf41e60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    lVar4 = lVar3;
    func_0x00010bf529e0();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if (lVar4 == 0) {
      (**(code **)(param_7 + 0x10))(param_7,0,0);
    }
    else {
      lVar4 = param_5;
      func_0x00010c0f5800(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14d020(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      puVar5 = PTR_PTR_1126bf508;
      _objc_alloc(PTR_PTR_1126bf508);
      puVar6 = PTR_PTR_1126bf4d0;
      func_0x00010c22bec0(PTR_PTR_1126bf4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0(puVar2);
      func_0x00010bfe8380(puVar2);
      uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_a0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      func_0x00010c03c6a0(param_1,param_2,puVar5);
      _objc_release(puVar6);
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_105dccb68;
      puStack_b8 = &UNK_1108cc7a8;
      _objc_retain(param_7);
      ppuVar7 = &puStack_d0;
      lStack_b0 = param_3;
      lStack_a8 = param_7;
      _objc_retainBlock(ppuVar7);
      uStack_98 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_a0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_90 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      func_0x00010c2505e0(puVar5);
      _objc_release(ppuVar7);
      _objc_release(lStack_a8);
      _objc_release(puVar5);
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
    _objc_release(lVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 105dccb58; end: 105dccb67;  */

void FUN_105dccb58(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b26d8,PTR_s_entryWithLensId__1125c3800,param_2)
  ;
  return;
}



/* Entry: 105dccb68; end: 105dccbd3;  */

void FUN_105dccb68(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if ((param_2 != 0) && (param_3 == 0)) {
    func_0x000108eb5cc8(param_2,0x5a);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000105dccbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,0);
  return;
}



/* Entry: 105dccbd4; end: 105dcce9b; -[SCPreviewFeatureTimelineImpl _transcodeVideoWithURL:ucoFilterIDs:trimTimeRange:completion:] */

void FUN_105dccbd4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_3 == 0) || (lVar1 = param_4, func_0x00010bf529e0(), lVar1 == 0)) {
    param_2 = 0;
    (**(code **)(param_6 + 0x10))(param_6,0,0);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf58fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x198);
    func_0x00010c29af00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c221d20(uVar3);
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x130);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0918c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bb2c0(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x1c8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf07e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb040(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
    lVar1 = param_4;
    func_0x00010c0b8600(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21b160(uVar3);
    _objc_release(lVar1);
    func_0x00010c1a8660(uVar3);
    func_0x00010c16bc20(uVar3);
    if (param_5 != 0) {
      lVar1 = param_5;
      func_0x00010bf4d860();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c214ee0(uVar3);
      _objc_release(puVar5);
      _objc_release(lVar1);
    }
    _objc_retain(param_6);
    func_0x00010bfae7c0(*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),uVar3);
    _objc_release(param_6);
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126c4798;
  _objc_retain(param_2);
  _objc_alloc(puVar5);
  func_0x00010c0131a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105dcce9c; end: 105dccf57;  */

void FUN_105dcce9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c4798;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c0131a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105dccf58; end: 105dcd187; -[SCPreviewFeatureTimelineImpl _updateSnapDocWithEditor:atIndex:videoUrl:trimTimeRange:] */

void FUN_105dccf58(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  double dStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126bfa70;
  func_0x00010befc9a0(PTR_PTR_1126bfa70,param_2,param_5,param_4,1,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar4 = PTR_PTR_1126ae558;
  if (puVar1 == (undefined *)0x0) {
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260(puVar3,param_2,param_1,&PTR____CFConstantStringClassReference_110e2a478,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    param_1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010befa120();
    if (param_6 != 0) {
      lVar2 = param_6;
      func_0x00010c27c940();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        dStack_78 = 0.0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        dStack_90 = 0.0;
      }
      else {
        func_0x00010bdc1120(&dStack_90,lVar2);
      }
      _objc_release(lVar2);
      puVar4 = PTR_PTR_1126bfa70;
      puVar3 = PTR_PTR_1126bfa70;
      func_0x00010bf3d7c0(PTR_PTR_1126bfa70,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      uStack_a8 = uStack_88;
      dStack_b0 = dStack_90;
      uStack_a0 = uStack_80;
      dVar5 = dStack_90;
      _CMTimeGetSeconds(&dStack_b0);
      uStack_a8 = uStack_70;
      dStack_b0 = dStack_78;
      uStack_a0 = uStack_68;
      dVar6 = dStack_78;
      _CMTimeGetSeconds(&dStack_b0);
      func_0x00010befc660(puVar4,param_2,puVar3,(long)(dVar5 * 1000.0),(long)(dVar6 * 1000.0));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      func_0x00010befa120(param_1,param_2,puVar4);
      _objc_release(puVar4);
    }
    puVar4 = param_3;
    func_0x00010bf08820(param_3,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105dcd188; end: 105dcd2cb; -[SCPreviewFeatureTimelineImpl _updateSnapDocBaseMediaInEditor:atIndex:mediaType:mediaInput:mediaMetadata:trimTimeRange:completion:] */

void FUN_105dcd188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = param_3;
  func_0x00010bef9c20(param_3,param_2,param_6,param_5);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105dcd2cc;
  puStack_88 = &UNK_1108e9840;
  uStack_60 = param_9;
  uStack_80 = param_1;
  uStack_78 = param_3;
  uStack_70 = param_7;
  uStack_68 = param_8;
  uStack_58 = param_4;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_retain(param_9);
  func_0x00010c297260(uVar1,param_2,&puStack_a0,0);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_60);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(param_9);
  _objc_release(uVar1);
  return;
}



/* Entry: 105dcd2cc; end: 105dcd543;  */

void FUN_105dcd2cc(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) || (param_3 != 0)) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),param_3);
  }
  else {
    puVar1 = PTR_PTR_1126affe8;
    func_0x00010c09e180(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0ff580(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4880(*(undefined8 *)(param_1 + 0x30));
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_105dcd588;
    uStack_70 = 0x105dcd598;
    uStack_68 = 0;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = uVar2;
    puStack_88 = &uStack_90;
    func_0x00010c0dfd40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_105dcd5a0;
    puStack_a8 = &UNK_1108e97f0;
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    puStack_98 = &uStack_90;
    _objc_retain(uVar6);
    uStack_a0 = uVar6;
    func_0x00010c288840(uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (puStack_88[5] != 0) {
      func_0x00010bf6c3a0(*(undefined8 *)(param_1 + 0x28));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    lVar4 = *(long *)(param_1 + 0x38);
    if (lVar4 != 0) {
      func_0x00010c27c940();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_f0,lVar4);
      }
      _objc_release(lVar4);
      func_0x00010c28b3e0(*(undefined8 *)(param_1 + 0x28));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0);
    _objc_release(uStack_a0);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105dcd544; end: 105dcd587;  */

bool FUN_105dcd544(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 5;
}



/* Entry: 105dcd588; end: 105dcd59f;  */

void FUN_105dcd588(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105dcd5a0; end: 105dcd67b;  */

void FUN_105dcd5a0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010c1c4020(param_2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c27dd80();
  if (iVar1 != 0) {
    func_0x00010c0c4bc0(*(undefined8 *)(param_1 + 0x20));
  }
  uVar2 = param_2;
  func_0x00010c118b40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0699e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105dcd67c; end: 105dcd77f;  */

void FUN_105dcd67c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = PTR_PTR_1126afff0;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c21a4e0(param_2);
  _objc_release(puVar1);
  uStack_58 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = *(undefined8 *)(param_1 + 0x30);
  _CMTimeGetSeconds(&uStack_60);
  uVar2 = param_2;
  func_0x00010c27c540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209a20();
  _objc_release(uVar2);
  uStack_58 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = *(undefined8 *)(param_1 + 0x48);
  _CMTimeGetSeconds(&uStack_60);
  uVar2 = param_2;
  func_0x00010c27c540(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c192d40(uVar2);
  _objc_release(uVar2);
  return;
}



/* Entry: 105dcd780; end: 105dcd787; -[SCPreviewFeatureTimelineImpl timelineSnapStateHandler] */

undefined8 FUN_105dcd780(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1f8);
}



/* Entry: 105dcd788; end: 105dcd79f; -[SCPreviewFeatureTimelineImpl delegate] */

void FUN_105dcd788(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105dcd7a0; end: 105dcd7ab; -[SCPreviewFeatureTimelineImpl setDelegate:] */

void FUN_105dcd7a0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x200,param_3);
  return;
}



/* Entry: 105dcd7ac; end: 105dcd7b3; -[SCPreviewFeatureTimelineImpl thumbnailsViewController] */

undefined8 FUN_105dcd7ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x208);
}



/* Entry: 105dcd7b4; end: 105dcdaa7; -[SCPreviewFeatureTimelineImpl .cxx_destruct] */

void FUN_105dcd7b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_destroyWeak(param_1 + 0x200);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105dcdaa8; end: 105dcdbbf; -[SCPreviewFeatureTimelineServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dcdaa8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c4ae0;
  _objc_alloc(PTR_PTR_1126c4ae0);
  func_0x00010c0526c0();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112736830);
  }
  _objc_retain(uVar3);
  func_0x00010bf9d660(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105dcdbc0; end: 105dce6f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dcdbc0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  long lVar83;
  long lVar84;
  long lVar85;
  long lVar86;
  long lVar87;
  long lVar88;
  long lVar89;
  long lVar90;
  long lVar91;
  long lVar92;
  long lVar93;
  long lVar94;
  long lVar95;
  long lVar96;
  long lVar97;
  long lVar98;
  long lVar99;
  undefined *puVar100;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar100 = (undefined *)0x0;
  }
  else {
    uVar1 = param_1 + _DAT_112736760;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c08ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar100 = PTR_PTR_1126afee0;
    _objc_opt_class(PTR_PTR_1126afee0);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar100);
    uVar1 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain();
    _objc_release(uVar2);
    puVar100 = PTR_PTR_1126c4ad8;
    _objc_alloc();
    lVar4 = param_1 + _DAT_112736764;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + _DAT_112736780;
    _objc_loadWeakRetained();
    lVar7 = param_1 + _DAT_112736784;
    _objc_loadWeakRetained();
    lVar8 = param_1 + _DAT_11273676c;
    _objc_loadWeakRetained();
    lVar9 = param_1 + _DAT_1127367a0;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010bf89ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + _DAT_112736790;
    _objc_loadWeakRetained();
    lVar12 = lVar11;
    func_0x00010bf11400();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1 + _DAT_1127367e8;
    _objc_loadWeakRetained();
    lVar14 = lVar13;
    func_0x00010bf69900();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_1 + _DAT_1127367b4;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010c27e760();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_1 + _DAT_1127367e0;
    _objc_loadWeakRetained();
    lVar19 = lVar18;
    func_0x00010c1307e0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_1 + _DAT_11273679c;
    _objc_loadWeakRetained();
    lVar21 = lVar20;
    func_0x00010bf71d60();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = param_1 + _DAT_1127367f0;
    _objc_loadWeakRetained();
    lVar23 = lVar22;
    func_0x00010c29b6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = param_1 + _DAT_112736768;
    _objc_loadWeakRetained();
    lVar25 = lVar24;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = param_1 + _DAT_112736778;
    _objc_loadWeakRetained();
    lVar27 = lVar26;
    func_0x00010c29ba80();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = param_1 + _DAT_1127367c4;
    _objc_loadWeakRetained();
    lVar29 = lVar28;
    func_0x00010c2a0940();
    _objc_retainAutoreleasedReturnValue();
    lVar30 = param_1 + _DAT_1127367c8;
    _objc_loadWeakRetained();
    lVar31 = lVar30;
    func_0x00010c2a2e80();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = param_1 + _DAT_1127367b8;
    _objc_loadWeakRetained();
    lVar33 = lVar32;
    func_0x00010c293d00();
    _objc_retainAutoreleasedReturnValue();
    lVar34 = param_1 + _DAT_1127367f4;
    _objc_loadWeakRetained();
    lVar35 = lVar34;
    func_0x00010c26a1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar36 = param_1 + _DAT_1127367d8;
    _objc_loadWeakRetained();
    lVar37 = param_1 + _DAT_1127367cc;
    _objc_loadWeakRetained();
    lVar38 = param_1 + _DAT_1127367e4;
    _objc_loadWeakRetained();
    lVar39 = lVar38;
    func_0x00010c2542a0();
    _objc_retainAutoreleasedReturnValue();
    lVar40 = param_1 + _DAT_112736810;
    _objc_loadWeakRetained();
    lVar41 = lVar40;
    func_0x00010c084e20();
    _objc_retainAutoreleasedReturnValue();
    lVar42 = param_1 + _DAT_1127367d4;
    _objc_loadWeakRetained();
    lVar43 = param_1 + _DAT_1127367a8;
    _objc_loadWeakRetained();
    lVar44 = lVar43;
    func_0x00010c23fc40();
    _objc_retainAutoreleasedReturnValue();
    lVar45 = param_1 + _DAT_1127367ac;
    _objc_loadWeakRetained();
    lVar46 = lVar45;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    lVar47 = param_1 + _DAT_1127367bc;
    _objc_loadWeakRetained();
    lVar48 = lVar47;
    func_0x00010c29f540();
    _objc_retainAutoreleasedReturnValue();
    lVar49 = param_1 + _DAT_1127367c0;
    _objc_loadWeakRetained();
    lVar50 = lVar49;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar51 = param_1 + _DAT_112736798;
    _objc_loadWeakRetained();
    lVar52 = lVar51;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    lVar53 = param_1 + _DAT_1127367b0;
    _objc_loadWeakRetained();
    lVar54 = lVar53;
    func_0x00010c273f60();
    _objc_retainAutoreleasedReturnValue();
    lVar55 = param_1 + _DAT_112736770;
    _objc_loadWeakRetained();
    lVar56 = param_1 + _DAT_1127367ec;
    _objc_loadWeakRetained();
    lVar57 = param_1 + _DAT_112736788;
    _objc_loadWeakRetained();
    lVar58 = param_1 + _DAT_11273677c;
    _objc_loadWeakRetained();
    lVar59 = param_1 + _DAT_1127367a4;
    _objc_loadWeakRetained();
    lVar60 = lVar59;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    lVar61 = param_1 + _DAT_1127367d0;
    _objc_loadWeakRetained();
    lVar62 = param_1 + _DAT_112736818;
    _objc_loadWeakRetained();
    lVar63 = lVar62;
    func_0x00010bfbdac0();
    _objc_retainAutoreleasedReturnValue();
    lVar64 = param_1 + _DAT_1127367dc;
    _objc_loadWeakRetained();
    lVar65 = lVar64;
    func_0x00010c243b20();
    _objc_retainAutoreleasedReturnValue();
    lVar66 = param_1 + _DAT_1127367dc;
    _objc_loadWeakRetained();
    lVar67 = lVar66;
    func_0x00010c243b00();
    _objc_retainAutoreleasedReturnValue();
    lVar68 = param_1 + _DAT_112736774;
    _objc_loadWeakRetained();
    lVar69 = lVar68;
    func_0x00010bf2a2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar70 = param_1 + _DAT_112736794;
    _objc_loadWeakRetained();
    lVar71 = lVar70;
    func_0x00010bf207a0();
    _objc_retainAutoreleasedReturnValue();
    lVar72 = param_1 + _DAT_1127367b4;
    _objc_loadWeakRetained();
    lVar73 = lVar72;
    func_0x00010c27e760();
    _objc_retainAutoreleasedReturnValue();
    lVar74 = param_1 + _DAT_11273678c;
    _objc_loadWeakRetained();
    lVar75 = lVar74;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    lVar76 = lVar75;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar77 = lVar76;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    lVar78 = param_1 + _DAT_1127367f8;
    _objc_loadWeakRetained();
    lVar79 = lVar78;
    func_0x00010c2402c0();
    _objc_retainAutoreleasedReturnValue();
    lVar80 = param_1 + _DAT_1127367fc;
    _objc_loadWeakRetained();
    lVar81 = param_1 + _DAT_112736800;
    _objc_loadWeakRetained();
    lVar82 = lVar81;
    func_0x00010bf9f4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar83 = param_1 + _DAT_112736804;
    _objc_loadWeakRetained();
    lVar84 = lVar83;
    func_0x00010c112160();
    _objc_retainAutoreleasedReturnValue();
    lVar85 = param_1 + _DAT_112736808;
    _objc_loadWeakRetained();
    lVar86 = lVar85;
    func_0x00010c27e8a0();
    _objc_retainAutoreleasedReturnValue();
    lVar87 = lVar86;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar88 = param_1 + _DAT_11273680c;
    _objc_loadWeakRetained();
    lVar89 = lVar88;
    func_0x00010c244d60();
    _objc_retainAutoreleasedReturnValue();
    lVar90 = param_1 + _DAT_112736814;
    _objc_loadWeakRetained();
    lVar91 = param_1 + _DAT_11273681c;
    _objc_loadWeakRetained();
    lVar92 = lVar91;
    func_0x00010bf07a40();
    _objc_retainAutoreleasedReturnValue();
    lVar93 = param_1 + _DAT_112736824;
    _objc_loadWeakRetained();
    lVar94 = lVar93;
    func_0x00010c114720();
    _objc_retainAutoreleasedReturnValue();
    lVar95 = param_1 + _DAT_112736820;
    _objc_loadWeakRetained();
    lVar96 = lVar95;
    func_0x00010bfc1300();
    _objc_retainAutoreleasedReturnValue();
    lVar97 = param_1 + _DAT_11273682c;
    _objc_loadWeakRetained();
    lVar98 = param_1 + _DAT_112736828;
    _objc_loadWeakRetained();
    lVar99 = lVar98;
    func_0x00010c252540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05e1c0(puVar100);
    _objc_release(uVar1);
    _objc_release(lVar99);
    _objc_release(lVar98);
    _objc_release(lVar97);
    _objc_release(lVar96);
    _objc_release(lVar95);
    _objc_release(lVar94);
    _objc_release(lVar93);
    _objc_release(lVar92);
    _objc_release(lVar91);
    _objc_release(lVar90);
    _objc_release(lVar89);
    _objc_release(lVar88);
    _objc_release(lVar87);
    _objc_release(lVar86);
    _objc_release(lVar85);
    _objc_release(lVar84);
    _objc_release(lVar83);
    _objc_release(lVar82);
    _objc_release(lVar81);
    _objc_release(lVar80);
    _objc_release(lVar79);
    _objc_release(lVar78);
    _objc_release(lVar77);
    _objc_release(lVar76);
    _objc_release(lVar75);
    _objc_release(lVar74);
    _objc_release(lVar73);
    _objc_release(lVar72);
    _objc_release(lVar71);
    _objc_release(lVar70);
    _objc_release(lVar69);
    _objc_release(lVar68);
    _objc_release(lVar67);
    _objc_release(lVar66);
    _objc_release(lVar65);
    _objc_release(lVar64);
    _objc_release(lVar63);
    _objc_release(lVar62);
    _objc_release(lVar61);
    _objc_release(lVar60);
    _objc_release(lVar59);
    _objc_release(lVar58);
    _objc_release(lVar57);
    _objc_release(lVar56);
    _objc_release(lVar55);
    _objc_release(lVar54);
    _objc_release(lVar53);
    _objc_release(lVar52);
    _objc_release(lVar51);
    _objc_release(lVar50);
    _objc_release(lVar49);
    _objc_release(lVar48);
    _objc_release(lVar47);
    _objc_release(lVar46);
    _objc_release(lVar45);
    _objc_release(lVar44);
    _objc_release(lVar43);
    _objc_release(lVar42);
    _objc_release(lVar41);
    _objc_release(lVar40);
    _objc_release(lVar39);
    _objc_release(lVar38);
    _objc_release(lVar37);
    _objc_release(lVar36);
    _objc_release(lVar35);
    _objc_release(lVar34);
    _objc_release(lVar33);
    _objc_release(lVar32);
    _objc_release(lVar31);
    _objc_release(lVar30);
    _objc_release(lVar29);
    _objc_release(lVar28);
    _objc_release(lVar27);
    _objc_release(lVar26);
    _objc_release(lVar25);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar100);
  return;
}



/* Entry: 105dce6f4; end: 105dce993; -[SCPreviewFeatureTimelineServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dce6f4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112736830,0);
  _objc_destroyWeak(param_1 + _DAT_11273682c);
  _objc_destroyWeak(param_1 + _DAT_112736828);
  _objc_destroyWeak(param_1 + _DAT_112736824);
  _objc_destroyWeak(param_1 + _DAT_112736820);
  _objc_destroyWeak(param_1 + _DAT_11273681c);
  _objc_destroyWeak(param_1 + _DAT_112736818);
  _objc_destroyWeak(param_1 + _DAT_112736814);
  _objc_destroyWeak(param_1 + _DAT_112736810);
  _objc_destroyWeak(param_1 + _DAT_11273680c);
  _objc_destroyWeak(param_1 + _DAT_112736808);
  _objc_destroyWeak(param_1 + _DAT_112736804);
  _objc_destroyWeak(param_1 + _DAT_112736800);
  _objc_destroyWeak(param_1 + _DAT_1127367fc);
  _objc_destroyWeak(param_1 + _DAT_1127367f8);
  _objc_destroyWeak(param_1 + _DAT_1127367f4);
  _objc_destroyWeak(param_1 + _DAT_1127367f0);
  _objc_destroyWeak(param_1 + _DAT_1127367ec);
  _objc_destroyWeak(param_1 + _DAT_1127367e8);
  _objc_destroyWeak(param_1 + _DAT_1127367e4);
  _objc_destroyWeak(param_1 + _DAT_1127367e0);
  _objc_destroyWeak(param_1 + _DAT_1127367dc);
  _objc_destroyWeak(param_1 + _DAT_1127367d8);
  _objc_destroyWeak(param_1 + _DAT_1127367d4);
  _objc_destroyWeak(param_1 + _DAT_1127367d0);
  _objc_destroyWeak(param_1 + _DAT_1127367cc);
  _objc_destroyWeak(param_1 + _DAT_1127367c8);
  _objc_destroyWeak(param_1 + _DAT_1127367c4);
  _objc_destroyWeak(param_1 + _DAT_1127367c0);
  _objc_destroyWeak(param_1 + _DAT_1127367bc);
  _objc_destroyWeak(param_1 + _DAT_1127367b8);
  _objc_destroyWeak(param_1 + _DAT_1127367b4);
  _objc_destroyWeak(param_1 + _DAT_1127367b0);
  _objc_destroyWeak(param_1 + _DAT_1127367ac);
  _objc_destroyWeak(param_1 + _DAT_1127367a8);
  _objc_destroyWeak(param_1 + _DAT_1127367a4);
  _objc_destroyWeak(param_1 + _DAT_1127367a0);
  _objc_destroyWeak(param_1 + _DAT_11273679c);
  _objc_destroyWeak(param_1 + _DAT_112736798);
  _objc_destroyWeak(param_1 + _DAT_112736794);
  _objc_destroyWeak(param_1 + _DAT_112736790);
  _objc_destroyWeak(param_1 + _DAT_11273678c);
  _objc_destroyWeak(param_1 + _DAT_112736788);
  _objc_destroyWeak(param_1 + _DAT_112736784);
  _objc_destroyWeak(param_1 + _DAT_112736780);
  _objc_destroyWeak(param_1 + _DAT_11273677c);
  _objc_destroyWeak(param_1 + _DAT_112736778);
  _objc_destroyWeak(param_1 + _DAT_112736774);
  _objc_destroyWeak(param_1 + _DAT_112736770);
  _objc_destroyWeak(param_1 + _DAT_11273676c);
  _objc_destroyWeak(param_1 + _DAT_112736768);
  _objc_destroyWeak(param_1 + _DAT_112736764);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112736760);
  return;
}



/* Entry: 105dce994; end: 105dcea3f; -[SCPreviewFeatureTimelineServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dce994(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112736834;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11273683c;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c26fe40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105dcea40; end: 105dcea83; -[SCPreviewFeatureTimelineServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dcea40(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273683c);
  _objc_destroyWeak(param_1 + _DAT_112736838);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112736834);
  return;
}



/* Entry: 105dcea84; end: 105dcea9b;  */

void FUN_105dcea84(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2a498;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2a498,
                      &PTR____CFConstantStringClassReference_110e2a4b8,0);
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



/* Entry: 105dcea9c; end: 105dcee67; -[SCPreviewFeatureTimerImpl initWithMessagingExperimentService:previewConfiguration:previewScopeServices:userPreferenceTimeProvider:bounceFeature:userInteractionStateLogger:latencyLogger:previewABServices:plusFeatureGating:plusSubscribeScopeExposer:plusSubscribeScopeServices:creativeToolsABServices:] */

undefined8 *
FUN_105dcea9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_70 = PTR_PTR_1126ed190;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar2 + 1,param_4);
    _objc_retain(param_3);
    uVar3 = puVar2[0xb];
    puVar2[0xb] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[2];
    puVar2[2] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[7];
    puVar2[7] = param_6;
    _objc_release(uVar3);
    _objc_storeWeak(puVar2 + 5,param_7);
    _objc_retain(param_9);
    uVar3 = puVar2[9];
    puVar2[9] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar2[8];
    puVar2[8] = param_8;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126c4ae8;
    _objc_opt_new();
    uVar3 = puVar2[0xc];
    puVar2[0xc] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = puVar2[0xd];
    puVar2[0xd] = puVar4;
    _objc_release(uVar3);
    uVar3 = param_10;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c112020();
    puVar2[0xf] = uVar5;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar2[0x10];
    puVar2[0x10] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar2[0x11];
    puVar2[0x11] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar2[0x12];
    puVar2[0x12] = param_13;
    _objc_release(uVar3);
    uVar3 = param_10;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c102500();
    *(char *)(puVar2 + 0x13) = (char)uVar5;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = puVar2[0xe];
    puVar2[0xe] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126afee0;
    _objc_retain(param_4);
    _objc_opt_class(puVar4);
    uVar6 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar4);
    uVar1 = param_4;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    _objc_initWeak(auStack_80,puVar2);
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010befa300(uVar1);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(uVar1);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 105dcee68; end: 105dcee93;  */

void FUN_105dcee68(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf47560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dcee94; end: 105dcee9b; -[SCPreviewFeatureTimerImpl responderChainPriority] */

undefined8 FUN_105dcee94(void)

{
  return 5;
}



/* Entry: 105dcee9c; end: 105dceedb; -[SCPreviewFeatureTimerImpl configureWithView:] */

void FUN_105dcee9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000108cc6364(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x18,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105dceedc; end: 105dcef37; -[SCPreviewFeatureTimerImpl snapEditor:didChangeToolBarButtonItemType:selected:] */

void FUN_105dceedc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  if (param_4 == 6) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c06d080();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c285e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_updateForImageTimerItem_showInfi_11267f1b8,param_5,(uint)lVar2 ^ 1);
    return;
  }
  return;
}



/* Entry: 105dcef38; end: 105dcf07b; -[SCPreviewFeatureTimerImpl editCount] */

uint FUN_105dcef38(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  
  lVar8 = *(long *)(param_1 + 0xa8);
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c0cfd40();
  uVar9 = (uint)(lVar8 != lVar1);
  uVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar6 = uVar2;
  func_0x00010c07e920();
  _objc_release(uVar2);
  if ((uVar6 & 1) == 0) {
    lVar4 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar3 = lVar4;
    func_0x00010c06d080();
    _objc_release(lVar4);
    if ((int)lVar3 == 0) {
      lVar4 = param_1 + 8;
      _objc_loadWeakRetained();
      lVar3 = lVar4;
      func_0x00010c075080();
      _objc_release(lVar4);
      if ((int)lVar3 == 0) {
        uVar7 = *(undefined8 *)(param_1 + 0xa0);
        uVar5 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c29b300(uVar5);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar6 = *(ulong *)(param_1 + 0x50);
        func_0x00010c26f400();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar6;
        func_0x00010c076a40();
        _objc_release(uVar6);
        if ((uVar2 & 1) != 0) {
          return uVar9;
        }
        uVar7 = *(undefined8 *)(param_1 + 0xa0);
        uVar5 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010bfe8c00(uVar5);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      lVar4 = *(long *)(param_1 + 0x50);
      func_0x00010c2708a0();
      if (lVar4 != 0) {
        return uVar9;
      }
      uVar7 = *(undefined8 *)(param_1 + 0xa0);
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bf16a00(uVar5);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c071ae0(uVar7,param_2,uVar5);
    uVar9 = (uint)uVar7 ^ 1;
    if (lVar8 != lVar1) {
      uVar9 = 1;
    }
    _objc_release(uVar5);
  }
  return uVar9;
}



/* Entry: 105dcf07c; end: 105dcf08b; -[SCPreviewFeatureTimerImpl isTimePickerVisible] */

bool FUN_105dcf07c(long param_1)

{
  return *(long *)(param_1 + 0x30) != 0;
}



/* Entry: 105dcf08c; end: 105dcf15f; -[SCPreviewFeatureTimerImpl createTimerToolBarButtonItemWithTarget:selector:] */

void FUN_105dcf08c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0xb0,param_3);
  *(undefined8 *)(param_1 + 0xb8) = param_4;
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c075080();
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126c42b8;
  _objc_alloc();
  func_0x00010c052820();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar2;
  _objc_release(uVar3);
  func_0x00010bf47560(param_1);
  lVar1 = param_1;
  func_0x00010beb41a0();
  if ((int)lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar3);
  }
  else {
    uVar3 = 0;
    *(undefined1 *)(param_1 + 0xc1) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105dcf160; end: 105dcf5cf; -[SCPreviewFeatureTimerImpl configureToolbarTimeItem] */

void FUN_105dcf160(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  
  lVar10 = param_1 + 8;
  _objc_loadWeakRetained(lVar10);
  func_0x00010c075080();
  _objc_release(lVar10);
  func_0x00010c215da0(*(undefined8 *)(param_1 + 0x50));
  uVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar11 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar5 = uVar2;
  if ((uVar11 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar2);
  uVar2 = uVar5;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = uVar2;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar11 = uVar5;
  func_0x00010010fab4(uVar5,PTR_DAT_1126a5228);
  uVar2 = uVar5;
  if ((int)uVar11 == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010bf926c0();
  _objc_release(uVar4);
  if ((int)uVar9 == 0) {
    lVar10 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar6 = lVar10;
    func_0x00010c07e920();
    _objc_release(lVar10);
    uVar11 = param_1 + 8;
    _objc_loadWeakRetained();
    if (((int)lVar6 == 0) || (uVar2 == 0)) {
      uVar5 = uVar11;
      func_0x00010c075080();
      ppuVar8 = *(undefined ***)(param_1 + 0x38);
      if ((uVar5 & 1) == 0) {
        func_0x00010c29b300(ppuVar8);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bfe8c00();
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_105dcf408;
    }
    uVar7 = uVar11;
    func_0x00010bfdb680();
    _objc_release(uVar11);
    if (((uVar7 & 1) == 0) &&
       (uVar11 = uVar5, func_0x00010bfed740(),
       ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570, (uVar11 & 1) == 0)) {
      func_0x00010bf8b160(uVar5);
      func_0x00010c0df740(ppuVar8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar8 = &PTR__OBJC_CLASS___NSConstantFloatNumber_111186320;
    }
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x10);
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar5;
    func_0x00010c0fef80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar11;
    func_0x00010bf85640();
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    iVar1 = (int)uVar5;
    if (iVar1 < 7) {
      if (iVar1 == 0) {
        uVar5 = param_1 + 8;
        _objc_loadWeakRetained();
        uVar7 = uVar5;
        func_0x00010c075080();
        ppuVar8 = *(undefined ***)(param_1 + 0x38);
        if ((uVar7 & 1) == 0) {
          func_0x00010c29b300(ppuVar8);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bfe8c00();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(uVar5);
      }
      else {
        ppuVar8 = &PTR__OBJC_CLASS___NSConstantFloatNumber_111186320;
        if (iVar1 != 6) {
          ppuVar8 = (undefined **)0x0;
        }
      }
    }
    else if (iVar1 == 7) {
      ppuVar8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3ac0;
    }
    else if (iVar1 == 8) {
      func_0x00010bf8b420(uVar11);
      func_0x00010c0df820(ppuVar8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar8 = (undefined **)0x0;
    }
LAB_105dcf408:
    _objc_release(uVar11);
  }
  lVar10 = param_1;
  func_0x00010bf80f20();
  if ((int)lVar10 != 0) {
    _objc_release(ppuVar8);
    ppuVar8 = &PTR__OBJC_CLASS___NSConstantFloatNumber_111186320;
  }
  puVar3 = PTR_PTR_1126c42c0;
  func_0x00010c084f00(PTR_PTR_1126c42c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c214da0(*(undefined8 *)(param_1 + 0x50));
  _objc_release(puVar3);
  lVar10 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar6 = lVar10;
  func_0x00010bf20960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar10);
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  if (lVar6 == 0) {
    func_0x00010c26f400(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c075760();
    func_0x00010c1c8c60(*(undefined8 *)(param_1 + 0x50));
    _objc_release(uVar9);
  }
  else {
    func_0x00010c1c8c60();
  }
  uVar5 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar11 = uVar5;
  func_0x00010c07e920();
  _objc_release(uVar5);
  if ((uVar11 & 1) == 0) {
    lVar10 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar6 = lVar10;
    func_0x00010c06d080();
    _objc_release(lVar10);
    if ((int)lVar6 == 0) {
      lVar10 = param_1 + 8;
      _objc_loadWeakRetained();
      lVar6 = lVar10;
      func_0x00010c075080();
      _objc_release(lVar10);
      if ((int)lVar6 == 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c29b300();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar11 = *(ulong *)(param_1 + 0x50);
        func_0x00010c26f400();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar11;
        func_0x00010c076a40();
        _objc_release(uVar11);
        if ((uVar5 & 1) != 0) goto LAB_105dcf59c;
        uVar9 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010bfe8c00();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      lVar10 = *(long *)(param_1 + 0x50);
      func_0x00010c2708a0();
      if (lVar10 != 0) goto LAB_105dcf59c;
      uVar9 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bf16a00();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = uVar9;
    _objc_release(uVar4);
  }
LAB_105dcf59c:
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0cfd40();
  *(undefined8 *)(param_1 + 0xa8) = uVar9;
  func_0x00010c129080(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar8);
  return;
}



/* Entry: 105dcf5d0; end: 105dcf9d3; -[SCPreviewFeatureTimerImpl updateForImageTimerItem:showInfinity:] */

void FUN_105dcf5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,int param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 unaff_x26;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  
  if (param_7 == 0) {
    lVar9 = *(long *)(param_5 + 0x30);
    if (lVar9 != 0) {
      _objc_retain(lVar9);
      uVar2 = *(undefined8 *)(param_5 + 0x30);
      *(undefined8 *)(param_5 + 0x30) = 0;
      _objc_release(uVar2);
      lVar7 = param_5 + 0x18;
      _objc_loadWeakRetained(lVar7);
      func_0x00010c1e1a20();
      _objc_release(lVar7);
      lVar7 = lVar9;
      func_0x00010c15a200(lVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010becc240(param_5);
      _objc_release(lVar7);
      _objc_retain(lVar9);
      func_0x00010bf02f80(lVar9);
      func_0x00010c292040(*(undefined8 *)(param_5 + 0x40));
      _objc_release(lVar9);
      _objc_release(lVar9);
    }
    return;
  }
  func_0x00010c293a40(*(undefined8 *)(param_5 + 0x40),param_6,2,
                      &PTR____CFConstantStringClassReference_110f53b58);
  puVar1 = PTR_PTR_1126c4af0;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_5 + 0x50);
  func_0x00010c26f400(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_5 + 0x18;
  _objc_loadWeakRetained(lVar9);
  lVar7 = lVar9;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_5 + 0x80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c098fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c252440();
  if (lVar6 != 3) {
    uStack_c0 = *(undefined8 *)(param_5 + 0x80);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uStack_c0;
    func_0x00010c098fe0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = uStack_c8;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252440();
  }
  func_0x00010c043ca0();
  uVar8 = *(undefined8 *)(param_5 + 0x30);
  *(undefined **)(param_5 + 0x30) = puVar1;
  _objc_release(uVar8);
  if (lVar6 != 3) {
    _objc_release(unaff_x26);
    _objc_release(uStack_c8);
    _objc_release(uStack_c0);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar9);
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_5 + 0x30));
  lVar9 = param_5 + 200;
  _objc_loadWeakRetained(lVar9);
  lVar7 = lVar9;
  func_0x00010c0f3d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_5 + 0x20,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar9);
  lVar9 = param_5 + 0x20;
  _objc_loadWeakRetained(lVar9);
  func_0x00010bef7700();
  _objc_release(lVar9);
  lVar9 = param_5 + 0x18;
  _objc_loadWeakRetained(lVar9);
  lVar7 = lVar9;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_5 + 0x30);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar7);
  _objc_release(uVar2);
  _objc_release(lVar7);
  _objc_release(lVar9);
  lVar9 = param_5 + 0x18;
  _objc_loadWeakRetained(lVar9);
  lVar7 = lVar9;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar2 = *(undefined8 *)(param_5 + 0x30);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar2);
  _objc_release(lVar7);
  _objc_release(lVar9);
  uVar2 = *(undefined8 *)(param_5 + 0x30);
  lVar9 = param_5 + 0x20;
  _objc_loadWeakRetained(lVar9);
  func_0x00010bf77e80(uVar2);
  _objc_release(lVar9);
  param_5 = param_5 + 0x18;
  _objc_loadWeakRetained(param_5);
  func_0x00010c1e1a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105dcf9d4; end: 105dcfa0b;  */

void FUN_105dcf9d4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c12b760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105dcfa0c; end: 105dcfa4b; -[SCPreviewFeatureTimerImpl updateForVideoTimerItem] */

void FUN_105dcfa0c(long param_1,undefined8 param_2)

{
  func_0x00010c250e60(*(undefined8 *)(param_1 + 0x48),param_2,3,1);
  func_0x00010bed8600(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf956d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_endTTIMeasurementForToolType_act_1125c2f58,3,1);
  return;
}



/* Entry: 105dcfa4c; end: 105dcfd23; -[SCPreviewFeatureTimerImpl _updateForVideoTimerItem] */

void FUN_105dcfa4c(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  lVar3 = *(long *)(param_2 + 0x50);
  func_0x00010c0cfd40();
  uVar4 = param_2;
  func_0x00010be3e7c0();
  lVar6 = 1;
  if ((int)uVar4 != 0) {
    lVar6 = 2;
  }
  uVar5 = param_2;
  func_0x00010bf80f20();
  uVar4 = uVar5 & 0xffffffff;
  if ((long)(uVar5 & 0xffffffff) < lVar3 + 1) {
    uVar4 = lVar3 + 1;
  }
  if (lVar6 <= lVar3) {
    uVar4 = uVar5 & 0xffffffff;
  }
  func_0x00010c1c8c60(*(undefined8 *)(param_2 + 0x50),param_3,uVar4);
  lVar6 = *(long *)(param_2 + 0x50);
  func_0x00010c0cfd40();
  if (lVar6 == 2) {
    lVar6 = param_2 + 0x28;
    _objc_loadWeakRetained();
    lVar10 = lVar6;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar6);
    puVar8 = PTR_PTR_1126c4af8;
    if (lVar10 == 0) {
      lVar6 = param_2 + 8;
      _objc_loadWeakRetained(lVar6);
      lVar11 = lVar6;
      func_0x00010c29ae80();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar11;
      func_0x00010c0d9500();
      func_0x00010bf8eb40(puVar8,param_3,lVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_2 + 0x28;
      _objc_loadWeakRetained(lVar10);
      func_0x00010c209fc0();
      _objc_release(lVar10);
      _objc_release(puVar8);
      _objc_release(lVar7);
      _objc_release(lVar11);
      _objc_release(lVar6);
    }
    lVar6 = param_2 + 0x28;
    _objc_loadWeakRetained(lVar6);
    _objc_retain();
    lVar10 = lVar6;
    func_0x00010c252440(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf208a0();
    uVar9 = *(undefined8 *)(param_2 + 0x50);
    func_0x00010c2634c0(uVar9);
    func_0x00010c2363c0(param_1,lVar6,param_3,uVar9,0);
    _objc_release(lVar10);
    _objc_release(lVar6);
    _objc_release(lVar6);
    lVar6 = param_2 + 0x18;
    _objc_loadWeakRetained(lVar6);
    lVar10 = lVar6;
    func_0x00010c273c20();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_2 + 0x50);
    lVar11 = lVar10;
    func_0x000108ede768();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar3 == 2) {
      lVar6 = param_2 + 0x28;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c12b500();
      _objc_release(lVar6);
    }
    lVar6 = param_2 + 0x18;
    _objc_loadWeakRetained(lVar6);
    lVar10 = lVar6;
    func_0x00010c273c20();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_2 + 0x50);
    lVar11 = lVar10;
    if (uVar4 == 1) {
      func_0x000108edeb40();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108edeb58();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  func_0x00010c10e860(lVar10,param_3,uVar9,lVar11);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar6);
  uVar9 = 0;
  if (uVar4 != 0) {
    uVar9 = 2;
  }
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3ad8;
  if (uVar4 != 0) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantFloatNumber_111186320;
  }
  if (uVar4 == 1) {
    uVar9 = 1;
  }
  uVar2 = 0;
  if (lVar3 != 0) {
    uVar2 = 2;
  }
  if (lVar3 == 1) {
    uVar2 = 1;
  }
  func_0x00010c110de0(*(undefined8 *)(param_2 + 0x60),param_3,param_2,uVar9,uVar2);
  puVar8 = PTR_PTR_1126c42c0;
  func_0x00010c084f00(PTR_PTR_1126c42c0,param_3,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becc240(param_2,param_3,puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 105dcfd24; end: 105dcfe1f; -[SCPreviewFeatureTimerImpl isTimerInfinite] */

ulong FUN_105dcfd24(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar1 = uVar2;
  func_0x00010c078580();
  _objc_release(uVar2);
  if (((uVar1 & 1) == 0) && (uVar2 = param_1, func_0x00010bf80f20(), (uVar2 & 1) == 0)) {
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained();
    uVar2 = param_1;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c084f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(param_1);
    puVar3 = PTR_PTR_1126c42b8;
    _objc_opt_class(PTR_PTR_1126c42b8);
    uVar4 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar3);
    uVar2 = uVar1;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x00010c26f400(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c075760(uVar1);
    _objc_release(uVar1);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 105dcfe20; end: 105dcffe7; -[SCPreviewFeatureTimerImpl imageDuration] */

double FUN_105dcfe20(double param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  double dVar8;
  
  uVar1 = param_2 + 8;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
  uVar3 = uVar4;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126b5fa8;
  _objc_opt_class(PTR_PTR_1126b5fa8);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  lVar5 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c07e920();
  dVar8 = 3.0;
  if (((int)lVar6 != 0) && (uVar4 = uVar1, func_0x00010c079fe0(), (int)uVar4 != 0)) {
    uVar4 = uVar1;
    func_0x00010c23f220(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8b160();
    dVar8 = (double)SUB84(param_1,0);
    _objc_release(uVar4);
  }
  _objc_release(lVar5);
  uVar4 = param_2 + 0x18;
  _objc_loadWeakRetained();
  uVar3 = uVar4;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c084f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126c42b8;
  _objc_opt_class(PTR_PTR_1126c42b8);
  uVar3 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar2);
  uVar4 = uVar7;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar7);
  if (uVar4 != 0) {
    func_0x00010c26f400(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c26f1c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar3);
    _objc_release(uVar7);
    dVar8 = param_1;
  }
  _objc_release(uVar4);
  _objc_release(uVar1);
  return dVar8;
}



/* Entry: 105dcffe8; end: 105dd000f; -[SCPreviewFeatureTimerImpl timePickerItemObservable] */

void FUN_105dcffe8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105dd0010; end: 105dd003b; -[SCPreviewFeatureTimerImpl mode] */

undefined8 FUN_105dd0010(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x50);
  func_0x00010c0cfd40();
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = 2;
  }
  if (lVar2 == 1) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 105dd003c; end: 105dd0133; -[SCPreviewFeatureTimerImpl displayToolbarItemTapForMoreTooltip] */

void FUN_105dd003c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c084f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126c42b8;
  _objc_opt_class(PTR_PTR_1126c42b8);
  uVar2 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  lVar5 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c273c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  func_0x000109201b98();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10e860(lVar6);
  _objc_release(uVar1);
  _objc_release(lVar5);
  func_0x00010c292100(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 105dd0134; end: 105dd013b; -[SCPreviewFeatureTimerImpl addListener:] */

void FUN_105dd0134(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105dd013c; end: 105dd0143; -[SCPreviewFeatureTimerImpl removeListener:] */

void FUN_105dd013c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105dd0144; end: 105dd02cf; -[SCPreviewFeatureTimerImpl timePickerViewController:didSelectTimeItem:] */

void FUN_105dd0144(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c15a200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076a40();
  if ((uVar2 & 1) == 0) {
    _objc_release(uVar1);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x80);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c098fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c252440();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar1);
    if (lVar6 == 1) {
      puVar8 = PTR_PTR_1126b1da8;
      _objc_alloc(PTR_PTR_1126b1da8);
      func_0x00010c04abe0();
      puVar9 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      puVar7 = *(undefined **)(param_1 + 0x90);
      func_0x00010bf23e60(puVar7,param_2,puVar9,puVar8,param_1,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x88),param_2,puVar7);
      goto LAB_105dd02a8;
    }
  }
  puVar8 = (undefined *)(param_1 + 0x18);
  _objc_loadWeakRetained(puVar8);
  puVar9 = puVar8;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb220(puVar9,param_2,puVar7,1);
LAB_105dd02a8:
  _objc_release(puVar7);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 105dd02d0; end: 105dd02db; -[SCPreviewFeatureTimerImpl timePickerViewControllerDidAppear:] */

void FUN_105dd02d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c292110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_userFinishedEnteringInteractionS_112682268,2);
  return;
}



/* Entry: 105dd02dc; end: 105dd04d7; -[SCPreviewFeatureTimerImpl _timerDidChangeToTimeItem:] */

void FUN_105dd02dc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c076a40();
  if ((int)uVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x80);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010c098fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c252440();
    _objc_release(lVar3);
    _objc_release(lVar7);
    _objc_release(lVar2);
    if (lVar4 != 3) goto LAB_105dd0470;
  }
  func_0x00010c214da0(*(undefined8 *)(param_1 + 0x50),param_2,param_3);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar5 = uVar1;
  func_0x00010c07e920();
  if ((uVar5 & 1) == 0) {
    uVar5 = param_1 + 8;
    _objc_loadWeakRetained();
    uVar6 = uVar5;
    func_0x00010c07e9c0();
    _objc_release(uVar5);
    _objc_release(uVar1);
    if ((uVar6 & 1) == 0) {
      lVar7 = param_1 + 8;
      _objc_loadWeakRetained();
      lVar3 = lVar7;
      func_0x00010c06d080();
      _objc_release(lVar7);
      uVar1 = param_3;
      if ((int)lVar3 == 0) {
        lVar7 = param_1 + 8;
        _objc_loadWeakRetained();
        lVar3 = lVar7;
        func_0x00010c075080();
        _objc_release(lVar7);
        if ((int)lVar3 == 0) {
          uVar8 = *(undefined8 *)(param_1 + 0x38);
          func_0x00010c26f000(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c221fc0(uVar8,param_2,uVar1);
        }
        else {
          uVar5 = param_3;
          func_0x00010c076a40();
          if ((uVar5 & 1) != 0) goto LAB_105dd043c;
          uVar8 = *(undefined8 *)(param_1 + 0x38);
          func_0x00010c26f000(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1aa9e0(uVar8,param_2,uVar1);
        }
      }
      else {
        lVar7 = *(long *)(param_1 + 0x50);
        func_0x00010c2708a0();
        if (lVar7 != 0) goto LAB_105dd043c;
        uVar8 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c26f000(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16f660(uVar8,param_2,uVar1);
      }
      goto LAB_105dd0388;
    }
  }
  else {
LAB_105dd0388:
    _objc_release(uVar1);
  }
LAB_105dd043c:
  lVar7 = param_1 + 200;
  _objc_loadWeakRetained(lVar7);
  func_0x00010bfa2ec0();
  _objc_release(lVar7);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x68),param_2,param_3);
  func_0x00010c129080(param_1);
LAB_105dd0470:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


