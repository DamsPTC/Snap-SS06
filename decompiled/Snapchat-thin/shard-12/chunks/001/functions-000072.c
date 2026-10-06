/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108cf383c; end: 108cf3843; -[SCMultiSnapConfigurationImpl setHasDeletion:] */

void FUN_108cf383c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 108cf3844; end: 108cf384b; -[SCMultiSnapConfigurationImpl isVideoCapturedBySnapchat] */

undefined1 FUN_108cf3844(long param_1)

{
  return *(undefined1 *)(param_1 + 0x31);
}



/* Entry: 108cf384c; end: 108cf3853; -[SCMultiSnapConfigurationImpl setIsVideoCapturedBySnapchat:] */

void FUN_108cf384c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x31) = param_3;
  return;
}



/* Entry: 108cf3854; end: 108cf385b; -[SCMultiSnapConfigurationImpl segmentIdToIndexMap] */

undefined8 FUN_108cf3854(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cf385c; end: 108cf3863; -[SCMultiSnapConfigurationImpl supportsSplitting] */

undefined1 FUN_108cf385c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x32);
}



/* Entry: 108cf3864; end: 108cf386b; -[SCMultiSnapConfigurationImpl setSupportsSplitting:] */

void FUN_108cf3864(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x32) = param_3;
  return;
}



/* Entry: 108cf386c; end: 108cf38bf; -[SCMultiSnapConfigurationImpl .cxx_destruct] */

void FUN_108cf386c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cf38c0; end: 108cf396b; -[SCMultiSnapConsolidatedExportSession initWithInputVideoURLs:outputURL:orientation:] */

undefined1 *
FUN_108cf38c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe490;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cf396c; end: 108cf3ffb; -[SCMultiSnapConsolidatedExportSession exportConsolidatedMultiSnapCompletionHandler:] */

void FUN_108cf396c(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long extraout_x8;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  double dVar15;
  long lVar16;
  long lVar17;
  double dVar18;
  long lStack_230;
  long *plStack_228;
  undefined *puStack_220;
  undefined1 *puStack_218;
  long lStack_210;
  uint uStack_204;
  undefined *puStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  long lStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_160;
  double dStack_158;
  long lStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  double dStack_f0;
  long lStack_e8;
  long lStack_e0;
  double dStack_d8;
  long lStack_d0;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  double dStack_a0;
  long lStack_98;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
  func_0x00010bf45600();
  _objc_retainAutoreleasedReturnValue();
  plVar12 = *(long **)PTR__AVMediaTypeVideo_110348090;
  puVar4 = puVar3;
  func_0x00010bef9f20();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = *(long *)PTR__AVMediaTypeAudio_110348070;
  puVar5 = puVar3;
  puStack_1e0 = puVar4;
  func_0x00010bef9f20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(param_1 + 8);
  puStack_200 = puVar5;
  puStack_1c0 = param_1;
  func_0x00010bf529e0();
  puStack_218 = (undefined1 *)&lStack_230;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar6 * 3);
  plVar13 = &lStack_230 + extraout_x8 * -2;
  dStack_d8 = *(double *)(PTR__kCMTimeZero_110348670 + 8);
  lStack_e0 = *(long *)PTR__kCMTimeZero_110348670;
  lStack_d0 = *(long *)(PTR__kCMTimeZero_110348670 + 0x10);
  lStack_1e8 = lVar6;
  if (lVar6 == 0) {
LAB_108cf3e78:
    func_0x00010c12ec60(puVar3);
  }
  else {
    uStack_204 = 0;
    lVar6 = 0;
    dVar18 = *(double *)PTR__CGSizeZero_110347620;
    puVar4 = puStack_1e0;
    plStack_228 = plVar13;
    puStack_220 = puVar3;
    lStack_210 = param_3;
    lStack_1f8 = lVar11;
    plStack_1f0 = plVar12;
    do {
      puVar7 = *(undefined **)(puStack_1c0 + 8);
      func_0x00010c0dfd40(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___AVAsset_1126aff38;
      func_0x00010bf0b9e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar5;
      func_0x00010c279200();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      func_0x00010bf529e0();
      _objc_release(puVar3);
      if (puVar8 == (undefined *)0x0) {
        puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260();
        _objc_retainAutoreleasedReturnValue();
        param_3 = lStack_210;
        (**(code **)(lStack_210 + 0x10))(lStack_210,0,puVar4);
        _objc_release(puVar4);
        puVar3 = puStack_220;
        goto LAB_108cf3f84;
      }
      puVar3 = puVar5;
      func_0x00010c279200();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      if (puVar8 == (undefined *)0x0) {
        lStack_a8 = 0;
        lStack_b0 = 0;
        lStack_98 = 0;
        dStack_a0 = 0.0;
        lStack_b8 = 0;
        lStack_c0 = 0;
      }
      else {
        func_0x00010c26f620(&lStack_c0,puVar8);
      }
      lStack_1c8 = *(long *)(PTR__kCMTimeInvalid_110348648 + 8);
      lStack_1d0 = *(long *)PTR__kCMTimeInvalid_110348648;
      lStack_1d8 = *(long *)(PTR__kCMTimeInvalid_110348648 + 0x10);
      lStack_110 = lStack_1d0;
      lStack_108 = lStack_1c8;
      lStack_100 = lStack_1d8;
      func_0x00010c067160(puVar4);
      uVar14 = *(undefined8 *)(puStack_1c0 + 0x18);
      func_0x00010c0d5d20(puVar8);
      func_0x00010b69119c(&lStack_110,uVar14);
      lStack_b8 = lStack_108;
      lStack_c0 = lStack_110;
      lStack_a8 = lStack_f8;
      lStack_b0 = lStack_100;
      lStack_98 = lStack_e8;
      dStack_a0 = dStack_f0;
      dVar15 = dStack_f0;
      lVar11 = lStack_100;
      func_0x00010c1e0300(puVar4);
      if (dVar18 == 0.0) {
        func_0x00010c0d5d20(puVar8);
        lStack_b8 = lStack_108;
        lStack_c0 = lStack_110;
        lStack_a8 = lStack_f8;
        lStack_b0 = lStack_100;
        lStack_98 = lStack_e8;
        dStack_a0 = dStack_f0;
        _CGRectApplyAffineTransform(0,0,dVar15,lVar11,&lStack_c0);
        dVar18 = dVar15;
        if (dVar15 == 0.0) {
          puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(lStack_210 + 0x10))(lStack_210,0,puVar3);
          _objc_release(puVar3);
        }
      }
      puVar3 = puVar5;
      func_0x00010c279200();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf529e0();
      _objc_release(puVar3);
      if (puVar4 == (undefined *)0x0) {
        if (puVar8 == (undefined *)0x0) {
          uStack_128 = 0;
          lStack_130 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          lStack_138 = 0;
          lStack_140 = 0;
        }
        else {
          func_0x00010c26f620(&lStack_140,puVar8);
        }
        puVar4 = puStack_1e0;
        plVar12 = plStack_1f0;
        dStack_158 = dStack_d8;
        lStack_160 = lStack_e0;
        lStack_150 = lStack_d0;
        uStack_178 = uStack_120;
        uStack_180 = uStack_128;
        uStack_170 = uStack_118;
        _CMTimeRangeMake(&lStack_c0,&lStack_160,&uStack_180);
        lVar17 = lStack_a8;
        lVar16 = lStack_b0;
        lVar11 = lStack_c0;
        plVar13[1] = lStack_b8;
        *plVar13 = lVar11;
        plVar13[3] = lVar17;
        plVar13[2] = lVar16;
        dVar15 = dStack_a0;
        plVar13[5] = lStack_98;
        plVar13[4] = (long)dVar15;
        if (puVar4 == (undefined *)0x0) goto LAB_108cf3dac;
LAB_108cf3d3c:
        func_0x00010c26f620(&lStack_c0,puVar4);
      }
      else {
        puVar3 = puVar5;
        func_0x00010c279200(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar3;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        if (puVar8 == (undefined *)0x0) {
          lStack_a8 = 0;
          lStack_b0 = 0;
          lStack_98 = 0;
          dStack_a0 = 0.0;
          lStack_b8 = 0;
          lStack_c0 = 0;
        }
        else {
          func_0x00010c26f620(&lStack_c0,puVar8);
        }
        puVar4 = puStack_1e0;
        lStack_138 = lStack_1c8;
        lStack_140 = lStack_1d0;
        lStack_130 = lStack_1d8;
        func_0x00010c067160(puStack_200);
        lVar11 = *(long *)PTR__kCMTimeRangeInvalid_110348660;
        lVar17 = *(long *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
        lVar16 = *(long *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
        plVar13[1] = *(long *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
        *plVar13 = lVar11;
        plVar13[3] = lVar17;
        plVar13[2] = lVar16;
        lVar11 = *(long *)(PTR__kCMTimeRangeInvalid_110348660 + 0x20);
        plVar13[5] = *(long *)(PTR__kCMTimeRangeInvalid_110348660 + 0x28);
        plVar13[4] = lVar11;
        _objc_release(puVar9);
        uStack_204 = 1;
        plVar12 = plStack_1f0;
        if (puVar4 != (undefined *)0x0) goto LAB_108cf3d3c;
LAB_108cf3dac:
        lStack_a8 = 0;
        lStack_b0 = 0;
        lStack_98 = 0;
        dStack_a0 = 0.0;
        lStack_b8 = 0;
        lStack_c0 = 0;
      }
      dStack_d8 = dStack_a0;
      lStack_e0 = lStack_a8;
      lStack_d0 = lStack_98;
      _objc_release(puVar8);
      _objc_release(puVar5);
      _objc_release(puVar7);
      uVar2 = uStack_204;
      param_3 = lStack_210;
      puVar3 = puStack_220;
      lVar6 = lVar6 + 1;
      plVar13 = plVar13 + 6;
    } while (lStack_1e8 != lVar6);
    lVar6 = lStack_1e8 + -1;
    plVar12 = plStack_228 + 5;
    if ((uStack_204 & 1) == 0) goto LAB_108cf3e60;
    while( true ) {
      if (((((*(byte *)((long)plVar12 + -0x1c) & 1) != 0) &&
           ((*(byte *)((long)plVar12 + -4) & 1) != 0)) && (*plVar12 == 0)) && (-1 < plVar12[-2])) {
        lStack_b8 = plVar12[-4];
        lStack_c0 = plVar12[-5];
        lStack_a8 = plVar12[-2];
        lStack_b0 = plVar12[-3];
        lStack_98 = *plVar12;
        dStack_a0 = (double)plVar12[-1];
        func_0x00010c066740(puStack_200);
      }
      lVar11 = 0;
      if (lVar6 == 0) break;
      while( true ) {
        lVar6 = lVar6 + -1;
        plVar12 = plVar12 + 6;
        if ((uVar2 & 1) != 0) break;
LAB_108cf3e60:
        lVar11 = 0;
        if (lVar6 == 0) goto LAB_108cf3e78;
      }
    }
  }
  puVar7 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
  _objc_alloc();
  func_0x00010bff4280();
  puVar4 = puStack_1c0;
  func_0x00010c1d7200();
  func_0x00010c1d6fc0(puVar7);
  func_0x00010c200aa0(puVar7);
  puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_108cf3ffc;
  puStack_1a0 = &UNK_11084a9e8;
  puStack_198 = puVar7;
  _objc_retain(param_3);
  puStack_190 = puVar4;
  lStack_188 = param_3;
  _objc_retain(puVar7);
  func_0x00010bf9cee0(puVar7);
  _objc_release(lStack_188);
  lVar6 = lVar11;
  puVar5 = puStack_198;
LAB_108cf3f84:
  _objc_release(puVar5);
  _objc_release(puVar7);
  puVar1 = puStack_218;
  _objc_release(puStack_200);
  _objc_release(puStack_1e0);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  *(long **)(puVar1 + -0x30) = plVar12;
  *(long *)(puVar1 + -0x28) = lVar6;
  *(undefined **)(puVar1 + -0x20) = puVar4;
  *(long **)(puVar1 + -0x18) = &lStack_230;
  *(undefined1 **)(puVar1 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(puVar1 + -8) = FUN_108cf3ffc;
  lVar6 = *(long *)(param_3 + 0x20);
  func_0x00010c252d60();
  lVar11 = *(long *)(param_3 + 0x30);
  uVar14 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x10);
  if (lVar6 == 3) {
                    /* WARNING: Could not recover jumptable at 0x000108cf4044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar11 + 0x10))(lVar11,uVar14,0);
    return;
  }
  uVar10 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bf987e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar11 + 0x10))(lVar11,uVar14,uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar10);
  return;
}



/* Entry: 108cf3ffc; end: 108cf4083;  */

void FUN_108cf3ffc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c252d60();
  lVar1 = *(long *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
  if (lVar2 == 3) {
                    /* WARNING: Could not recover jumptable at 0x000108cf4044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,uVar4,0);
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf987e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar4,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108cf4084; end: 108cf40b3; -[SCMultiSnapConsolidatedExportSession .cxx_destruct] */

void FUN_108cf4084(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cf40b4; end: 108cf411f; -[SCMultiSnapDrawingCacheEntry init] */

undefined1 * FUN_108cf40b4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe498;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108cf4120; end: 108cf4127; -[SCMultiSnapDrawingCacheEntry strokeStartId] */

undefined8 FUN_108cf4120(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cf4128; end: 108cf412f; -[SCMultiSnapDrawingCacheEntry setStrokeStartId:] */

void FUN_108cf4128(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108cf4130; end: 108cf4137; -[SCMultiSnapDrawingCacheEntry strokeEndId] */

undefined8 FUN_108cf4130(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cf4138; end: 108cf413f; -[SCMultiSnapDrawingCacheEntry setStrokeEndId:] */

void FUN_108cf4138(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 108cf4140; end: 108cf4147; -[SCMultiSnapDrawingCacheEntry strokeCount] */

undefined8 FUN_108cf4140(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108cf4148; end: 108cf414f; -[SCMultiSnapDrawingCacheEntry setStrokeCount:] */

void FUN_108cf4148(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 108cf4150; end: 108cf4157; -[SCMultiSnapDrawingCacheEntry segmentIdsContainingEntry] */

undefined8 FUN_108cf4150(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108cf4158; end: 108cf415f; -[SCMultiSnapDrawingCacheEntry imageData] */

undefined8 FUN_108cf4158(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108cf4160; end: 108cf418f; -[SCMultiSnapDrawingCacheEntry setImageData:] */

void FUN_108cf4160(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108cf4190; end: 108cf41bf; -[SCMultiSnapDrawingCacheEntry .cxx_destruct] */

void FUN_108cf4190(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 108cf41c0; end: 108cf428f; -[SCMultiSnapDrawingCacheImpl init] */

undefined1 * FUN_108cf41c0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe4a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108cf4290; end: 108cf46f3; -[SCMultiSnapDrawingCacheImpl receivedMemoryWarning] */

ulong FUN_108cf4290(long param_1,ulong param_2,undefined **param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined **ppuVar16;
  long lVar17;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (3 < uVar4) {
    lVar11 = *(long *)(param_1 + 0x10);
    _objc_retain(lVar11);
    lVar17 = lVar11;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar17 != 0) {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar11);
        }
        uVar5 = *(undefined8 *)(lVar15 * 8);
        func_0x00010bfe7300();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fa60();
        _objc_release(uVar5);
        lVar15 = lVar15 + 1;
      } while (lVar17 != lVar15);
      lVar17 = lVar11;
      func_0x00010bf52a60();
    }
    _objc_release(lVar11);
    param_3 = &PTR___NSConcreteGlobalBlock_110ac1f40;
    func_0x00010c246ba0(*(undefined8 *)(param_1 + 0x10));
    uVar4 = *(ulong *)(param_1 + 0x10);
    func_0x00010bf529e0();
    if (uVar4 < 0xc) {
      ppuVar13 = (undefined **)(uVar4 - 1);
      if ((undefined **)(uVar4 >> 1) <= ppuVar13) {
        ppuVar12 = (undefined **)(uVar4 >> 1);
        do {
          uVar6 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar6;
          func_0x00010bfe7300();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08fa60();
          _objc_release(uVar5);
          _objc_release(uVar6);
          uVar4 = *(ulong *)(param_1 + 0x10);
          param_3 = ppuVar13;
          func_0x00010c12d3c0(uVar4);
          ppuVar13 = (undefined **)((long)ppuVar13 + -1);
        } while (ppuVar12 <= ppuVar13);
      }
    }
    else {
      ppuVar16 = (undefined **)(uVar4 - 1);
      ppuVar13 = (undefined **)((ulong)((long)ppuVar16 * 3) >> 2);
      ppuVar12 = (undefined **)((ulong)ppuVar16 >> 1);
      ppuVar14 = ppuVar16;
      if ((undefined **)((ulong)((long)ppuVar16 * 3) >> 2) < ppuVar16) {
        do {
          uVar6 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar6;
          func_0x00010bfe7300();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08fa60();
          _objc_release(uVar5);
          _objc_release(uVar6);
          uVar4 = *(ulong *)(param_1 + 0x10);
          param_3 = ppuVar14;
          func_0x00010c12d3c0(uVar4);
          ppuVar14 = (undefined **)((long)ppuVar14 + -1);
        } while (ppuVar13 < ppuVar14);
      }
      for (; ppuVar12 < ppuVar13; ppuVar13 = (undefined **)((long)ppuVar13 + -1)) {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = ppuVar13;
        if ((undefined **)
            ((SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) +
             (ulong)ppuVar13 / 3 + 2) != ppuVar13) {
          uVar6 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar6;
          func_0x00010bfe7300();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08fa60();
          _objc_release(uVar5);
          _objc_release(uVar6);
          uVar4 = *(ulong *)(param_1 + 0x10);
          param_3 = ppuVar13;
          func_0x00010c12d3c0(uVar4);
        }
      }
      for (; (undefined **)((ulong)ppuVar16 >> 2) < ppuVar12;
          ppuVar12 = (undefined **)((long)ppuVar12 + -1)) {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = ppuVar12;
        if ((undefined **)
            ((SUB168(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) +
             (ulong)ppuVar12 / 3 + 1) == ppuVar12) {
          uVar6 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar6;
          func_0x00010bfe7300();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08fa60();
          _objc_release(uVar5);
          _objc_release(uVar6);
          uVar4 = *(ulong *)(param_1 + 0x10);
          param_3 = ppuVar12;
          func_0x00010c12d3c0(uVar4);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    _objc_retain(param_3);
    puVar7 = PTR_PTR_1126dbba0;
    _objc_opt_class(PTR_PTR_1126dbba0);
    uVar8 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar7);
    uVar4 = param_2;
    if ((uVar8 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    puVar7 = PTR_PTR_1126dbba0;
    _objc_retain(param_3);
    _objc_opt_class(puVar7);
    ppuVar12 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    ppuVar13 = param_3;
    if (((ulong)ppuVar12 & 1) == 0) {
      ppuVar13 = (undefined **)0x0;
    }
    _objc_retain(ppuVar13);
    _objc_release(param_3);
    uVar8 = uVar4;
    func_0x00010c25dbe0();
    uVar9 = uVar4;
    func_0x00010c158360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar9;
    func_0x00010bf529e0();
    lVar17 = uVar8 + uVar4 * 10;
    _objc_release(uVar9);
    ppuVar12 = ppuVar13;
    func_0x00010c25dbe0();
    ppuVar14 = ppuVar13;
    func_0x00010c158360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar13);
    ppuVar13 = ppuVar14;
    func_0x00010bf529e0();
    lVar10 = (long)ppuVar12 + (long)ppuVar13 * 10;
    _objc_release(ppuVar14);
    uVar4 = (ulong)(lVar17 < lVar10);
    if (lVar10 < lVar17) {
      uVar4 = 0xffffffffffffffff;
    }
    _objc_release(param_3);
    _objc_release(param_2);
    return uVar4;
  }
  return uVar4;
}



/* Entry: 108cf46f4; end: 108cf484b; -[SCMultiSnapDrawingCacheImpl addCacheEntryForImage:startingStrokeId:endingStrokeId:strokeCount:] */

void FUN_108cf46f4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126dbba0;
  if ((param_3 != 0) && (param_6 == (param_6 / 10) * 10)) {
    _objc_retain(param_3);
    _objc_opt_new();
    func_0x00010c20e9c0();
    func_0x00010c20e940(puVar1,param_2,param_5);
    func_0x00010c20e900(puVar1,param_2,param_6);
    lVar2 = param_3;
    _UIImagePNGRepresentation(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c1aa1c0(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    puVar3 = puVar1;
    func_0x00010bfe7300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar3 != (undefined *)0x0) {
      puVar3 = puVar1;
      func_0x00010c158360(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                          *(undefined8 *)(param_1 + 0x18));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 108cf484c; end: 108cf4cc3; -[SCMultiSnapDrawingCacheImpl cachedImageForDrawingHistory:historyCount:endStrokeIndexPtr:clearUnusedEntries:] */

void FUN_108cf484c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined1 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar5;
  func_0x00010c280560();
  _objc_release(lVar5);
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  lVar6 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar6);
  lVar5 = lVar6;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar7 = *plStack_1a0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1a0 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        lVar12 = *(long *)(lStack_1a8 + lVar11 * 8);
        lVar13 = lVar12;
        func_0x00010c158360();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar13;
        func_0x00010bf4b900();
        _objc_release(puVar9);
        _objc_release(lVar13);
        if ((int)lVar2 != 0) {
          lVar13 = lVar12;
          func_0x00010c158360(lVar12);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d360(lVar13);
          _objc_release(puVar9);
          _objc_release(lVar13);
          func_0x00010c25dd40();
          if (lVar12 == lVar10) {
            func_0x00010befa120(puVar1);
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar5 != lVar11);
      lVar5 = lVar6;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar6);
  puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1e0 = 0xc2000000;
  pcStack_1d8 = FUN_108cf4cc4;
  puStack_1d0 = &UNK_110ac1f60;
  ppuVar3 = &puStack_1e8;
  lStack_1c8 = param_1;
  uStack_1c0 = param_5;
  uStack_1b8 = param_6;
  _objc_retainBlock();
  puVar9 = puVar1;
  func_0x00010bf529e0();
  if ((puVar9 != (undefined *)0x0) && (9 < param_4)) {
    lVar10 = 0;
    lVar5 = 9;
    do {
      lVar6 = param_3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c280560();
      _objc_release(lVar6);
      _objc_retain(puVar1);
      puVar9 = puVar1;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (puVar9 != (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(puVar1);
          }
          lVar13 = *(long *)((long)puVar8 * 8);
          lVar11 = lVar13;
          func_0x00010c25dc80();
          if (lVar11 == lVar7) {
            lVar11 = lVar13;
            func_0x00010c158360(lVar13);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(lVar11);
            _objc_release(puVar4);
            _objc_release(lVar11);
            lVar11 = lVar13;
            func_0x00010c25dbe0();
            lVar2 = lVar10;
            func_0x00010c25dbe0();
            if (lVar2 < lVar11) {
              _objc_retain(lVar13);
              _objc_release(lVar10);
              lVar10 = lVar13;
            }
          }
          puVar8 = puVar8 + 1;
        } while (puVar9 != puVar8);
        puVar9 = puVar1;
        func_0x00010bf52a60();
      }
      _objc_release(puVar1);
      lVar5 = lVar5 + 10;
    } while (lVar5 < param_4);
    if (lVar10 != 0) {
      lVar5 = lVar10;
      func_0x00010c25dbe0();
      lVar5 = lVar5 + -1;
      (*(code *)ppuVar3[2])(ppuVar3);
      puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
      lVar6 = lVar10;
      func_0x00010bfe7300(lVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14d040(puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar10);
      goto LAB_108cf4c6c;
    }
  }
  lVar5 = 0;
  (*(code *)ppuVar3[2])(ppuVar3);
  puVar9 = (undefined *)0x0;
LAB_108cf4c6c:
  _objc_release(ppuVar3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  if (*(long **)(param_3 + 0x28) != (long *)0x0) {
    **(long **)(param_3 + 0x28) = lVar5;
  }
  if (*(char *)(param_3 + 0x30) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be8dd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_3 + 0x20),PTR_s__removeUnusedCacheEntries_1125810e0);
    return;
  }
  return;
}



/* Entry: 108cf4cc4; end: 108cf4ce7;  */

void FUN_108cf4cc4(long param_1,undefined8 param_2)

{
  if (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x28) = param_2;
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be8dd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__removeUnusedCacheEntries_1125810e0);
    return;
  }
  return;
}



/* Entry: 108cf4ce8; end: 108cf521f; -[SCMultiSnapDrawingCacheImpl updateWithMultiSnapConfiguration:] */

void FUN_108cf4ce8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [128];
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar10;
    func_0x00010c280560();
    *(long *)(param_1 + 0x18) = lVar9;
    _objc_release(lVar10);
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x18)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2,param_2,puVar7);
    goto LAB_108cf51d8;
  }
  puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  plStack_2a0 = (long *)0x0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  lVar1 = param_3;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    lVar9 = *plStack_2a0;
    do {
      lVar13 = 0;
      do {
        if (*plStack_2a0 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar2 = *(undefined8 *)(lStack_2a8 + lVar13 * 8);
        func_0x00010c280560(uVar2);
        func_0x00010c0df780(puVar3,param_2,uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7,param_2,puVar3);
        _objc_release(puVar3);
        lVar13 = lVar13 + 1;
      } while (lVar10 != lVar13);
      lVar10 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_2b0,auStack_f0,0x10);
    } while (lVar10 != 0);
  }
  _objc_release(lVar1);
  uVar4 = *(ulong *)(param_1 + 8);
  func_0x00010c072060(uVar4,param_2,puVar7);
  if ((uVar4 & 1) != 0) goto LAB_108cf51d8;
  puVar5 = *(undefined **)(param_1 + 8);
  func_0x00010bf529e0();
  puVar3 = puVar7;
  func_0x00010bf529e0();
  puVar6 = *(undefined **)(param_1 + 8);
  if (puVar5 == puVar3 + 1) {
    func_0x00010c0d3c80();
    func_0x00010c0ce860();
    puVar3 = puVar6;
    func_0x00010bf04a20();
    _objc_retainAutoreleasedReturnValue();
    lStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    plStack_2e0 = (long *)0x0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    puStack_378 = *(undefined **)(param_1 + 0x10);
    _objc_retain(puStack_378);
    puVar5 = puStack_378;
    func_0x00010bf52a60(puStack_378,param_2,&uStack_2f0,auStack_170,0x10);
    if (puVar5 != (undefined *)0x0) {
      lVar1 = *plStack_2e0;
      do {
        puVar11 = (undefined *)0x0;
        do {
          if (*plStack_2e0 != lVar1) {
            _objc_enumerationMutation(puStack_378);
          }
          uVar2 = *(undefined8 *)(lStack_2e8 + (long)puVar11 * 8);
          func_0x00010c158360(uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d360();
          _objc_release(uVar2);
          puVar11 = puVar11 + 1;
        } while (puVar5 != puVar11);
        puVar5 = puStack_378;
        func_0x00010bf52a60(puStack_378,param_2,&uStack_2f0,auStack_170,0x10);
      } while (puVar5 != (undefined *)0x0);
    }
LAB_108cf51a0:
    _objc_release(puStack_378);
    _objc_release(puVar3);
    _objc_release(puVar6);
  }
  else {
    func_0x00010bf529e0();
    puVar3 = puVar7;
    func_0x00010bf529e0();
    if (puVar6 == puVar3 + -1) {
      puVar6 = *(undefined **)(param_1 + 8);
      func_0x00010c0d3c80();
      puVar3 = puVar7;
      func_0x00010c0d3c80();
      func_0x00010c0ce860(puVar6,param_2,puVar7);
      func_0x00010c0ce860(puVar3,param_2,*(undefined8 *)(param_1 + 8));
      puStack_378 = puVar6;
      func_0x00010bf04a20();
      _objc_retainAutoreleasedReturnValue();
      lStack_328 = 0;
      uStack_330 = 0;
      uStack_318 = 0;
      plStack_320 = (long *)0x0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      lVar10 = *(long *)(param_1 + 0x10);
      _objc_retain(lVar10);
      lVar1 = lVar10;
      func_0x00010bf52a60(lVar10,param_2,&uStack_330,auStack_1f0,0x10);
      if (lVar1 != 0) {
        lVar9 = *plStack_320;
        do {
          lVar13 = 0;
          do {
            if (*plStack_320 != lVar9) {
              _objc_enumerationMutation(lVar10);
            }
            uVar14 = *(undefined8 *)(lStack_328 + lVar13 * 8);
            uVar2 = uVar14;
            func_0x00010c158360();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar2;
            func_0x00010bf4b900();
            _objc_release(uVar2);
            if ((int)uVar8 != 0) {
              uVar2 = uVar14;
              func_0x00010c158360(uVar14);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c12d360();
              _objc_release(uVar2);
              uStack_348 = 0;
              uStack_350 = 0;
              uStack_338 = 0;
              uStack_340 = 0;
              uStack_368 = 0;
              uStack_370 = 0;
              uStack_358 = 0;
              plStack_360 = (long *)0x0;
              _objc_retain(puVar3);
              puVar5 = puVar3;
              func_0x00010bf52a60(puVar3,param_2,&uStack_370,auStack_270,0x10);
              if (puVar5 != (undefined *)0x0) {
                lVar12 = *plStack_360;
                do {
                  puVar11 = (undefined *)0x0;
                  do {
                    if (*plStack_360 != lVar12) {
                      _objc_enumerationMutation(puVar3);
                    }
                    uVar2 = uVar14;
                    func_0x00010c158360(uVar14);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120();
                    _objc_release(uVar2);
                    puVar11 = puVar11 + 1;
                  } while (puVar5 != puVar11);
                  puVar5 = puVar3;
                  func_0x00010bf52a60(puVar3,param_2,&uStack_370,auStack_270,0x10);
                } while (puVar5 != (undefined *)0x0);
              }
              _objc_release(puVar3);
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 != lVar1);
          lVar1 = lVar10;
          func_0x00010bf52a60(lVar10,param_2,&uStack_330,auStack_1f0,0x10);
        } while (lVar1 != 0);
      }
      _objc_release(lVar10);
      goto LAB_108cf51a0;
    }
  }
  func_0x00010be8dd00(param_1);
  _objc_retain(puVar7);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar7;
  _objc_release(uVar2);
LAB_108cf51d8:
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar1 = *(long *)(param_3 + 0x10);
    func_0x00010bf529e0();
    if (-1 < lVar1 + -1) {
      do {
        lVar1 = lVar1 + -1;
        lVar13 = *(long *)(param_3 + 0x10);
        func_0x00010c0dfd40(lVar13,param_2,lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar13;
        func_0x00010c158360();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar10;
        func_0x00010bf529e0();
        _objc_release(lVar10);
        _objc_release(lVar13);
        if (lVar9 == 0) {
          func_0x00010c12d3c0(*(undefined8 *)(param_3 + 0x10),param_2,lVar1);
        }
      } while (0 < lVar1);
    }
    return;
  }
  return;
}



/* Entry: 108cf5220; end: 108cf52bb; -[SCMultiSnapDrawingCacheImpl _removeUnusedCacheEntries] */

void FUN_108cf5220(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (-1 < lVar1 + -1) {
    do {
      lVar1 = lVar1 + -1;
      lVar2 = *(long *)(param_1 + 0x10);
      func_0x00010c0dfd40(lVar2,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c158360();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf529e0();
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (lVar4 == 0) {
        func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0x10),param_2,lVar1);
      }
    } while (0 < lVar1);
  }
  return;
}



/* Entry: 108cf52bc; end: 108cf52c3; -[SCMultiSnapDrawingCacheImpl editingSegmentUniqueId] */

undefined8 FUN_108cf52bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108cf52c4; end: 108cf52cb; -[SCMultiSnapDrawingCacheImpl setEditingSegmentUniqueId:] */

void FUN_108cf52c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 108cf52cc; end: 108cf52fb; -[SCMultiSnapDrawingCacheImpl .cxx_destruct] */

void FUN_108cf52cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cf52fc; end: 108cf560b; +[SCMultiSnapOverlayGenerator overlayAndVideoTrackedImagesForOverlayState:overlaySize:outputSize:durationMs:useOutputSizeForStaticOverlay:spectaclesTranscodingConfig:userSession:previewCameraSourceOverlayService:multiSnapDrawingCache:videoPlaybackSpeed:targetTrajectoryFactory:stickerInjector:ctpItemViewService:captionCache:stickerCache:overlayGenerationType:disposableBag:completion:] */

void FUN_108cf52fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined4 param_16,
                  undefined4 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_18);
  _objc_retain(param_19);
  if (lRam000000011372e470 != -1) {
    func_0x000107c27d9c(0x11372e470,&PTR___NSConcreteGlobalBlock_110ac20f0);
  }
  uVar1 = uRam000000011372e478;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_18);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_14);
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_19);
  _objc_release(param_4);
  _objc_release(param_18);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_15);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_14);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_19);
  _objc_release(param_4);
  _objc_release(param_18);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_15);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_14);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_6);
  return;
}



/* Entry: 108cf560c; end: 108cf68cb;  */

void FUN_108cf560c(double param_1,double param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  int iVar24;
  ulong uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  undefined8 uVar31;
  double dVar32;
  undefined *puStack_6f0;
  undefined8 uStack_6e8;
  code *pcStack_6e0;
  undefined *puStack_6d8;
  double dStack_6d0;
  undefined8 uStack_6c8;
  double dStack_6c0;
  double dStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  long *plStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  long *plStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  long lStack_628;
  long *plStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  long lStack_5e8;
  long *plStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  long lStack_5a8;
  long *plStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  long lStack_568;
  long *plStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined *puStack_530;
  undefined8 uStack_528;
  code *pcStack_520;
  undefined *puStack_518;
  undefined8 uStack_510;
  long lStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 *puStack_4d8;
  double dStack_4d0;
  double dStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 *puStack_498;
  undefined8 uStack_490;
  code *pcStack_488;
  undefined8 uStack_480;
  undefined *puStack_478;
  undefined8 uStack_470;
  long lStack_468;
  long *plStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  if (*(long *)(param_3 + 0x20) != 0) {
    puVar1 = puVar5;
  }
  _objc_retain();
  uVar6 = *(ulong *)(param_3 + 0x20);
  func_0x00010c06e8e0();
  if ((uVar6 & 1) == 0) {
    param_1 = *(double *)(param_3 + 0x88);
    param_2 = *(double *)(param_3 + 0x90);
  }
  else {
    uVar7 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c119b40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0efd80();
    puVar8 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    dVar30 = param_1;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    param_1 = param_1 * dVar30;
    param_2 = param_2 * dVar30;
    _objc_release(puVar8);
    _objc_release(uVar11);
    _objc_release(uVar7);
  }
  puVar8 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(param_3 + 0x30);
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar9;
  func_0x00010bf529e0();
  _objc_release(lVar9);
  if (lVar14 != 0) {
    uStack_448 = 0;
    uStack_450 = 0;
    uStack_438 = 0;
    uStack_440 = 0;
    lStack_468 = 0;
    uStack_470 = 0;
    uStack_458 = 0;
    plStack_460 = (long *)0x0;
    lVar9 = *(long *)(param_3 + 0x30);
    func_0x00010bf308c0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar9;
    func_0x00010c140200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    lVar9 = lVar14;
    func_0x00010bf52a60();
    if (lVar9 != 0) {
      lVar23 = *plStack_460;
      do {
        lVar21 = 0;
        do {
          if (*plStack_460 != lVar23) {
            _objc_enumerationMutation(lVar14);
          }
          uVar6 = *(ulong *)(lStack_468 + lVar21 * 8);
          func_0x00010c0816c0();
          if ((uVar6 & 1) == 0) {
            lVar10 = *(long *)(param_3 + 0x38);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar10 == 0) {
              bVar3 = *(char *)(param_3 + 0xb0) == '\0';
              lVar10 = 0x98;
              if (bVar3) {
                lVar10 = 0x88;
              }
              lVar17 = 0xa0;
              if (bVar3) {
                lVar17 = 0x90;
              }
              uVar7 = *(undefined8 *)(param_3 + lVar17);
              uVar29 = *(undefined8 *)(param_3 + lVar10);
              uVar11 = *(undefined8 *)(param_3 + 0xa8);
              func_0x00010c06e8e0(*(undefined8 *)(param_3 + 0x20));
              func_0x00010bee8fe0(uVar29,uVar7,uVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c14c720(puVar1);
              func_0x00010befa120(puVar8);
              func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x38));
              _objc_release(uVar11);
            }
            else {
              uVar11 = *(undefined8 *)(param_3 + 0x38);
              func_0x00010c0e00e0(uVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c14c720(puVar1);
              _objc_release(uVar11);
              func_0x00010befa120(puVar8);
            }
          }
          lVar21 = lVar21 + 1;
        } while (lVar9 != lVar21);
        lVar9 = lVar14;
        func_0x00010bf52a60();
      } while (lVar9 != 0);
    }
    _objc_release(lVar14);
  }
  lVar9 = *(long *)(param_3 + 0x30);
  func_0x00010bf8a020();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar9;
  func_0x00010bf529e0();
  _objc_release(lVar9);
  puVar12 = PTR_PTR_1126bb2b8;
  if (lVar14 != 0) {
    bVar3 = *(char *)(param_3 + 0xb0) == '\0';
    lVar14 = 0x98;
    if (bVar3) {
      lVar14 = 0x88;
    }
    lVar9 = 0xa0;
    if (bVar3) {
      lVar9 = 0x90;
    }
    uVar29 = *(undefined8 *)(param_3 + lVar9);
    uVar31 = *(undefined8 *)(param_3 + lVar14);
    uVar11 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010bf8a020(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010bf89fe0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c151ac0(uVar31,uVar29,puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar11);
    puVar13 = PTR_PTR_1126c4200;
    _objc_alloc(PTR_PTR_1126c4200);
    func_0x00010c0169c0();
    func_0x00010c14c720(puVar1);
    _objc_release(puVar13);
    _objc_release(puVar12);
  }
  lVar14 = *(long *)(param_3 + 0x30);
  func_0x00010c297c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar14 != 0) {
    dVar30 = param_1;
    dVar32 = param_2;
    if (*(char *)(param_3 + 0xb0) == '\x01') {
      dVar30 = *(double *)(param_3 + 0x98);
      dVar32 = *(double *)(param_3 + 0xa0);
    }
    uVar7 = *(undefined8 *)(param_3 + 0xa8);
    uVar11 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010c297c00(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee9040(dVar30,dVar32,uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar4);
    _objc_release(uVar7);
    _objc_release(uVar11);
  }
  lVar14 = *(long *)(param_3 + 0x30);
  func_0x00010c25bf80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar14 != 0) {
    dVar30 = param_1;
    dVar32 = param_2;
    if (*(char *)(param_3 + 0xb0) == '\x01') {
      dVar30 = *(double *)(param_3 + 0x98);
      dVar32 = *(double *)(param_3 + 0xa0);
    }
    uVar7 = *(undefined8 *)(param_3 + 0xa8);
    uVar11 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010c25bf80(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee9020(dVar30,dVar32,uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar4);
    _objc_release(uVar7);
    _objc_release(uVar11);
  }
  lVar9 = *(long *)(param_3 + 0x30);
  func_0x00010bfc1440();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar9;
  func_0x00010bf529e0();
  _objc_release(lVar9);
  if (lVar14 + -1 < 0) {
    uVar22 = 0;
  }
  else {
    uVar22 = 0;
    do {
      uVar29 = *(undefined8 *)(param_3 + 0x30);
      func_0x00010bfc1440();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar14 + -1;
      uVar11 = uVar29;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar11;
      func_0x00010c06c0a0();
      _objc_release(uVar11);
      _objc_release(uVar29);
      dVar30 = param_1;
      dVar32 = param_2;
      if (*(char *)(param_3 + 0xb0) == '\x01') {
        dVar30 = *(double *)(param_3 + 0x98);
        dVar32 = *(double *)(param_3 + 0xa0);
      }
      uVar31 = *(undefined8 *)(param_3 + 0xa8);
      uVar29 = *(undefined8 *)(param_3 + 0x30);
      func_0x00010bfc1440(uVar29);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar29;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee90a0(dVar30,dVar32,uVar31);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      _objc_release(uVar29);
      uVar22 = uVar22 | (uint)uVar7;
      puVar12 = puVar5;
      if ((uVar22 & 1) == 0) {
        puVar12 = puVar4;
      }
      func_0x00010befa160(puVar12);
      _objc_release(uVar31);
    } while (0 < lVar14);
  }
  uStack_4a0 = 0;
  uStack_490 = 0x3032000000;
  pcStack_488 = FUN_108cf68cc;
  uStack_480 = 0x108cf68dc;
  puVar12 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  puStack_498 = &uStack_4a0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_530 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_528 = 0xc2000000;
  pcStack_520 = FUN_108cf68e4;
  puStack_518 = &UNK_110ac1f90;
  uVar11 = *(undefined8 *)(param_3 + 0x50);
  puStack_4d8 = &uStack_4a0;
  puStack_478 = puVar12;
  _objc_retain(uVar11);
  lVar14 = *(long *)(param_3 + 0x30);
  uStack_4a8 = *(undefined1 *)(param_3 + 0xb0);
  uStack_4b8 = *(undefined8 *)(param_3 + 0xa0);
  uStack_4c0 = *(undefined8 *)(param_3 + 0x98);
  uStack_4b0 = *(undefined8 *)(param_3 + 0xa8);
  uStack_510 = uVar11;
  dStack_4d0 = param_1;
  dStack_4c8 = param_2;
  _objc_retain(lVar14);
  uVar11 = *(undefined8 *)(param_3 + 0x40);
  lStack_508 = lVar14;
  _objc_retain(uVar11);
  uVar7 = *(undefined8 *)(param_3 + 0x58);
  uStack_500 = uVar11;
  _objc_retain(uVar7);
  uVar11 = *(undefined8 *)(param_3 + 0x60);
  uStack_4f8 = uVar7;
  _objc_retain(uVar11);
  uVar7 = *(undefined8 *)(param_3 + 0x68);
  uStack_4f0 = uVar11;
  _objc_retain(uVar7);
  uVar11 = *(undefined8 *)(param_3 + 0x70);
  uStack_4e8 = uVar7;
  _objc_retain(uVar11);
  ppuVar15 = &puStack_530;
  uStack_4e0 = uVar11;
  _objc_retainBlock();
  lVar9 = *(long *)(param_3 + 0x30);
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar9;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  if (((uVar22 & 1) == 0) && (lVar9 = lVar14, func_0x00010bf529e0(), lVar9 == 0)) {
    bVar3 = *(long *)(param_3 + 0x20) == 0;
  }
  else {
    bVar3 = false;
  }
  func_0x00010bf529e0(lVar14);
  uStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  uStack_540 = 0;
  lStack_568 = 0;
  uStack_570 = 0;
  uStack_558 = 0;
  plStack_560 = (long *)0x0;
  lVar23 = *(long *)(param_3 + 0x30);
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar23;
  func_0x00010c140200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar23);
  lVar23 = lVar9;
  func_0x00010bf52a60();
  if (lVar23 != 0) {
    lVar21 = *plStack_560;
    do {
      lVar10 = 0;
      do {
        if (*plStack_560 != lVar21) {
          _objc_enumerationMutation(lVar9);
        }
        uVar25 = *(ulong *)(lStack_568 + lVar10 * 8);
        uVar6 = uVar25;
        func_0x00010c0816c0();
        if ((uVar6 & 1) == 0) {
          ppuVar16 = ppuVar15;
          if (bVar3) {
            (*(code *)ppuVar15[2])(ppuVar15,uVar25);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14c720(puVar4);
          }
          else {
            (*(code *)ppuVar15[2])(ppuVar15,uVar25);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14c720(puVar5);
          }
          _objc_release(ppuVar16);
        }
        lVar10 = lVar10 + 1;
      } while (lVar23 != lVar10);
      lVar23 = lVar9;
      func_0x00010bf52a60();
    } while (lVar23 != 0);
  }
  _objc_release(lVar9);
  uStack_588 = 0;
  uStack_590 = 0;
  uStack_578 = 0;
  uStack_580 = 0;
  lStack_5a8 = 0;
  uStack_5b0 = 0;
  uStack_598 = 0;
  plStack_5a0 = (long *)0x0;
  lVar23 = *(long *)(param_3 + 0x30);
  func_0x00010bfc1440();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar23;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    lVar21 = *plStack_5a0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_5a0 != lVar21) {
          _objc_enumerationMutation(lVar23);
        }
        iVar24 = (int)*(undefined8 *)(lStack_5a8 + lVar10 * 8);
        func_0x00010bf19440();
        if (iVar24 != 0) {
          dVar30 = param_1;
          dVar32 = param_2;
          if ((*(byte *)(param_3 + 0xb0) & 1) != 0) {
            dVar30 = *(double *)(param_3 + 0x98);
            dVar32 = *(double *)(param_3 + 0xa0);
          }
          uVar11 = *(undefined8 *)(param_3 + 0xa8);
          func_0x00010bee90a0(dVar30,dVar32,uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar4);
          _objc_release(uVar11);
        }
        lVar10 = lVar10 + 1;
      } while (lVar9 != lVar10);
      lVar9 = lVar23;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  _objc_release(lVar23);
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  lStack_5e8 = 0;
  uStack_5f0 = 0;
  uStack_5d8 = 0;
  plStack_5e0 = (long *)0x0;
  lVar23 = *(long *)(param_3 + 0x30);
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar23;
  func_0x00010c140200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar23);
  lVar23 = lVar9;
  func_0x00010bf52a60();
  if (lVar23 != 0) {
    lVar21 = *plStack_5e0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_5e0 != lVar21) {
          _objc_enumerationMutation(lVar9);
        }
        iVar24 = (int)*(undefined8 *)(lStack_5e8 + lVar10 * 8);
        func_0x00010c0816c0();
        if (iVar24 != 0) {
          lVar17 = *(long *)(param_3 + 0x38);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar17 == 0) {
            bVar3 = *(char *)(param_3 + 0xb0) == '\0';
            lVar17 = 0xa0;
            if (bVar3) {
              lVar17 = 0x90;
            }
            lVar2 = 0x98;
            if (bVar3) {
              lVar2 = 0x88;
            }
            uVar7 = *(undefined8 *)(param_3 + lVar2);
            uVar29 = *(undefined8 *)(param_3 + lVar17);
            uVar11 = *(undefined8 *)(param_3 + 0xa8);
            func_0x00010c06e8e0(*(undefined8 *)(param_3 + 0x20));
            func_0x00010bee8fe0(uVar7,uVar29,uVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14c720(puVar5);
            func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x38));
            func_0x00010befa120(puVar8);
            _objc_release(uVar11);
          }
          else {
            uVar11 = *(undefined8 *)(param_3 + 0x38);
            func_0x00010c0e00e0(uVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar5);
            _objc_release(uVar11);
            func_0x00010befa120(puVar8);
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar23 != lVar10);
      lVar23 = lVar9;
      func_0x00010bf52a60();
    } while (lVar23 != 0);
  }
  _objc_release(lVar9);
  uStack_608 = 0;
  uStack_610 = 0;
  uStack_5f8 = 0;
  uStack_600 = 0;
  lStack_628 = 0;
  uStack_630 = 0;
  uStack_618 = 0;
  plStack_620 = (long *)0x0;
  lVar23 = *(long *)(param_3 + 0x30);
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar23;
  func_0x00010c140200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar23);
  lVar23 = lVar9;
  func_0x00010bf52a60();
  if (lVar23 != 0) {
    lVar21 = *plStack_620;
    do {
      lVar10 = 0;
      do {
        if (*plStack_620 != lVar21) {
          _objc_enumerationMutation(lVar9);
        }
        uVar7 = *(undefined8 *)(lStack_628 + lVar10 * 8);
        uVar11 = uVar7;
        func_0x00010c0816c0();
        if ((int)uVar11 != 0) {
          ppuVar16 = ppuVar15;
          (*(code *)ppuVar15[2])(ppuVar15,uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14c720(puVar5);
          _objc_release(ppuVar16);
        }
        lVar10 = lVar10 + 1;
      } while (lVar23 != lVar10);
      lVar23 = lVar9;
      func_0x00010bf52a60();
    } while (lVar23 != 0);
  }
  _objc_release(lVar9);
  lVar9 = *(long *)(param_3 + 0x30);
  func_0x00010bf11400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar9 != 0) {
    bVar3 = *(char *)(param_3 + 0xb0) == '\0';
    lVar9 = 0xa0;
    if (bVar3) {
      lVar9 = 0x90;
    }
    lVar23 = 0x98;
    if (bVar3) {
      lVar23 = 0x88;
    }
    uVar29 = *(undefined8 *)(param_3 + lVar23);
    uVar31 = *(undefined8 *)(param_3 + lVar9);
    uVar7 = *(undefined8 *)(param_3 + 0xa8);
    uVar11 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010bf11400(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee9080(uVar29,uVar31,uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar5);
    _objc_release(uVar7);
    _objc_release(uVar11);
  }
  lVar9 = *(long *)(param_3 + 0x38);
  if (lVar9 != 0) {
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_648 = 0;
    uStack_650 = 0;
    uStack_638 = 0;
    uStack_640 = 0;
    uStack_668 = 0;
    uStack_670 = 0;
    uStack_658 = 0;
    plStack_660 = (long *)0x0;
    _objc_retain();
    lVar23 = lVar9;
    func_0x00010bf52a60();
    if (lVar23 != 0) {
      lVar21 = *plStack_660;
      do {
        lVar10 = 0;
        do {
          if (*plStack_660 != lVar21) {
            _objc_enumerationMutation(lVar9);
          }
          puVar12 = puVar8;
          func_0x00010bf4b900();
          if (((ulong)puVar12 & 1) == 0) {
            func_0x00010c12d3e0(*(undefined8 *)(param_3 + 0x38));
          }
          lVar10 = lVar10 + 1;
        } while (lVar23 != lVar10);
        lVar23 = lVar9;
        func_0x00010bf52a60();
      } while (lVar23 != 0);
    }
    _objc_release(lVar9);
    _objc_release(lVar9);
  }
  lVar9 = *(long *)(param_3 + 0x50);
  if (lVar9 != 0) {
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_688 = 0;
    uStack_690 = 0;
    uStack_678 = 0;
    uStack_680 = 0;
    uStack_698 = 0;
    plStack_6a0 = (long *)0x0;
    uStack_6a8 = 0;
    uStack_6b0 = 0;
    _objc_retain();
    lVar23 = lVar9;
    func_0x00010bf52a60();
    if (lVar23 != 0) {
      lVar21 = *plStack_6a0;
      do {
        lVar10 = 0;
        do {
          if (*plStack_6a0 != lVar21) {
            _objc_enumerationMutation(lVar9);
          }
          uVar6 = puStack_498[5];
          func_0x00010bf4b900();
          if ((uVar6 & 1) == 0) {
            func_0x00010c12d3e0(*(undefined8 *)(param_3 + 0x50));
          }
          lVar10 = lVar10 + 1;
        } while (lVar23 != lVar10);
        lVar23 = lVar9;
        func_0x00010bf52a60();
      } while (lVar23 != 0);
    }
    _objc_release(lVar9);
    _objc_release(lVar9);
  }
  puVar12 = puVar4;
  func_0x00010c140200();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar5;
  func_0x00010c140200(puVar5);
  _objc_retainAutoreleasedReturnValue();
  dVar26 = *(double *)(param_3 + 0x88);
  dVar30 = *(double *)(param_3 + 0x90);
  dVar32 = 0.0;
  if (*(double *)(param_3 + 0x98) == 0.0) goto LAB_108cf64ec;
  if (*(double *)(param_3 + 0xa0) != 0.0) {
    dVar28 = *(double *)(param_3 + 0x98) / *(double *)(param_3 + 0xa0);
    if (dVar28 == 0.0) goto LAB_108cf64ec;
    if (dVar28 != INFINITY) {
      dVar32 = dVar30 * dVar28;
      if (dVar26 <= dVar30 * dVar28) {
        dVar30 = dVar26 / dVar28;
        dVar32 = dVar26;
      }
      goto LAB_108cf64ec;
    }
  }
  dVar30 = 0.0;
  dVar32 = dVar26;
LAB_108cf64ec:
  uVar6 = *(ulong *)(param_3 + 0x20);
  uVar22 = 0;
  if (uVar6 != 0) {
    func_0x00010c06e8e0();
    if ((uVar6 & 1) == 0) {
      uVar22 = (uint)*(undefined8 *)(param_3 + 0x20);
      func_0x00010c07f940();
    }
    else {
      uVar22 = 1;
    }
  }
  dVar26 = 0.0;
  dVar28 = 0.0;
  if (*(double *)(param_3 + 0x88) != 0.0) {
    if (*(double *)(param_3 + 0x90) == 0.0) {
      dVar28 = INFINITY;
    }
    else {
      dVar28 = *(double *)(param_3 + 0x88) / *(double *)(param_3 + 0x90);
    }
  }
  if (*(double *)(param_3 + 0x98) != 0.0) {
    if (*(double *)(param_3 + 0xa0) == 0.0) {
      dVar26 = INFINITY;
    }
    else {
      dVar26 = *(double *)(param_3 + 0x98) / *(double *)(param_3 + 0xa0);
    }
  }
  dVar27 = ABS(dVar28 + dVar26) * 2.220446049250313e-16;
  if (dVar27 <= 2.2250738585072014e-308) {
    dVar27 = 2.2250738585072014e-308;
  }
  if (ABS(dVar28 - dVar26) < dVar27) {
    uVar22 = 1;
  }
  puVar19 = puVar13;
  puVar18 = puVar12;
  if ((uVar22 & 1) == 0) {
    puStack_6f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_6e8 = 0xc0000000;
    pcStack_6e0 = FUN_108cf6a98;
    puStack_6d8 = &UNK_110ac1fe0;
    uStack_6c8 = *(undefined8 *)(param_3 + 0x90);
    dStack_6d0 = *(double *)(param_3 + 0x88);
    ppuVar16 = &puStack_6f0;
    dStack_6c0 = dVar32;
    dStack_6b8 = dVar30;
    _objc_retainBlock(ppuVar16);
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    func_0x00010c0b8600(puVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    _objc_release(ppuVar16);
  }
  puVar12 = puVar18;
  func_0x00010bf529e0();
  if (puVar12 == (undefined *)0x0) {
    (**(code **)(*(long *)(param_3 + 0x78) + 0x10))(*(long *)(param_3 + 0x78),0,puVar19);
  }
  else {
    if (*(char *)(param_3 + 0xb1) == '\x01') {
      dVar32 = *(double *)(param_3 + 0x98);
      dVar30 = *(double *)(param_3 + 0xa0);
    }
    if (*(long *)(param_3 + 0x20) != 0) {
      dVar32 = param_1;
      dVar30 = param_2;
    }
    puVar12 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
    _objc_opt_new(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
    func_0x00010c1f5fe0(0x3ff0000000000000);
    func_0x00010c1d4c20(puVar12);
    puVar13 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x00010c046ac0(dVar32,dVar30);
    _objc_retain(puVar18);
    puVar20 = puVar13;
    func_0x00010bfe91c0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_3 + 0x78) + 0x10))(*(long *)(param_3 + 0x78),puVar20,puVar19);
    _objc_release(puVar20);
    _objc_release(puVar18);
    _objc_release(puVar13);
    _objc_release(puVar12);
  }
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(lVar14);
  _objc_release(ppuVar15);
  _objc_release(uStack_4e0);
  _objc_release(uStack_4e8);
  _objc_release(uStack_4f0);
  _objc_release(uStack_4f8);
  _objc_release(uStack_500);
  _objc_release(lStack_508);
  _objc_release(uStack_510);
  __Block_object_dispose(&uStack_4a0,8);
  _objc_release(puStack_478);
  _objc_release(puVar8);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
    ___stack_chk_fail();
    lVar14 = 8;
    __Block_object_dispose(&uStack_4a0);
    __Unwind_Resume();
    *(undefined8 *)(puVar4 + 0x28) = *(undefined8 *)(lVar14 + 0x28);
    *(undefined8 *)(lVar14 + 0x28) = 0;
    return;
  }
  return;
}



/* Entry: 108cf68cc; end: 108cf68e3;  */

void FUN_108cf68cc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108cf68e4; end: 108cf6a47;  */

void FUN_108cf68e4(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x58) + 8) + 0x28));
  lVar2 = *(long *)(param_2 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    bVar1 = *(char *)(param_2 + 0x88) == '\0';
    lVar2 = 0x70;
    if (bVar1) {
      lVar2 = 0x60;
    }
    lVar4 = 0x78;
    if (bVar1) {
      lVar4 = 0x68;
    }
    dVar6 = *(double *)(param_2 + lVar4);
    dVar5 = *(double *)(param_2 + lVar2);
    func_0x00010c128380(param_3);
    dVar5 = dVar5 * param_1;
    func_0x00010c128100(param_3);
    lVar2 = *(long *)(param_2 + 0x80);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010bfedc80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee9060(dVar5,dVar6 * param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (lVar2 != 0) {
      lVar4 = lVar2;
      func_0x00010bfe6ac0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      _objc_release(lVar4);
      func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x20));
    }
  }
  else {
    lVar2 = *(long *)(param_2 + 0x20);
    func_0x00010c0e00e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108cf6a48; end: 108cf6a97;  */

ulong FUN_108cf6a48(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0816c0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010c06c0a0(param_2);
  }
  else {
    uVar1 = 0;
  }
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 108cf6a98; end: 108cf6c2f;  */

void FUN_108cf6a98(double param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  func_0x00010c0db660(param_4);
  dVar4 = *(double *)(param_3 + 0x20);
  dVar5 = *(double *)(param_3 + 0x30);
  func_0x00010c0db660(param_4);
  dVar7 = *(double *)(param_3 + 0x28);
  dVar6 = *(double *)(param_3 + 0x38);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_108cf68cc;
  uStack_70 = 0x108cf68dc;
  uVar1 = param_4;
  func_0x00010c27a460();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  uStack_68 = uVar1;
  func_0x00010c27a460(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0400();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c4200;
  _objc_alloc(PTR_PTR_1126c4200);
  uVar1 = param_4;
  func_0x00010bfe6ac0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02fc00((param_1 * dVar4) / dVar5,(param_2 * dVar7) / dVar6,puVar3);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108cf6c30; end: 108cf6c77;  */

void FUN_108cf6c30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c41f8;
  func_0x00010c252d00(PTR_PTR_1126c41f8,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108cf6c78; end: 108cf6ff7;  */

void FUN_108cf6c78(undefined8 param_1,double param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dStack_1d8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lVar4 = *(long *)(param_3 + 0x20);
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar6 = *plStack_160;
    dStack_1d8 = 1.60807493534087e-314;
    do {
      lVar7 = 0;
      do {
        if (*plStack_160 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        uVar5 = *(undefined8 *)(lStack_168 + lVar7 * 8);
        uStack_1a0 = 0;
        uStack_190 = 0x3032000000;
        pcStack_188 = FUN_108cf68cc;
        uStack_180 = 0x108cf68dc;
        uStack_178 = 0;
        uVar2 = uVar5;
        puStack_198 = &uStack_1a0;
        func_0x00010c27a460(uVar5);
        _objc_retainAutoreleasedReturnValue();
        dVar8 = dStack_1d8;
        func_0x00010c0c0400();
        _objc_release(uVar2);
        func_0x00010c27ada0(puStack_198[5]);
        dVar9 = *(double *)(param_3 + 0x28);
        func_0x00010c27ada0(puStack_198[5]);
        dVar10 = *(double *)(param_3 + 0x30);
        func_0x00010bdc1000(param_4);
        dVar8 = dVar8 * dVar9;
        param_2 = param_2 * dVar10;
        dVar9 = dVar8;
        _CGContextTranslateCTM(dVar8,param_2);
        lVar1 = param_4;
        func_0x00010bdc1000(param_4);
        func_0x00010c14e120(puStack_198[5]);
        dVar10 = dVar9;
        func_0x00010c14e120(puStack_198[5]);
        _CGContextScaleCTM(dVar9,dVar10,lVar1);
        lVar1 = param_4;
        func_0x00010bdc1000(param_4);
        func_0x00010c141a80(puStack_198[5]);
        _CGContextRotateCTM(lVar1);
        func_0x00010c0db660(uVar5);
        dVar11 = *(double *)(param_3 + 0x28);
        func_0x00010c0db660(uVar5);
        dVar12 = *(double *)(param_3 + 0x30);
        func_0x00010bfe6ac0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        dVar11 = dVar9 * dVar11 * -0.5;
        func_0x00010bf89920(dVar11,dVar10 * dVar12 * -0.5);
        _objc_release(uVar5);
        lVar1 = param_4;
        func_0x00010bdc1000(param_4);
        func_0x00010c141a80(puStack_198[5]);
        dVar11 = -dVar11;
        _CGContextRotateCTM(dVar11,lVar1);
        lVar1 = param_4;
        func_0x00010bdc1000(param_4);
        func_0x00010c14e120(puStack_198[5]);
        dVar9 = dVar11;
        func_0x00010c14e120(puStack_198[5]);
        _CGContextScaleCTM(1.0 / dVar11,1.0 / dVar9,lVar1);
        func_0x00010bdc1000(param_4);
        param_2 = -param_2;
        _CGContextTranslateCTM(-dVar8);
        __Block_object_dispose(&uStack_1a0,8);
        _objc_release(uStack_178);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = lVar4;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = 8;
  __Block_object_dispose(&uStack_1a0);
  __Unwind_Resume();
  _objc_retain(uVar5);
  lVar3 = *(long *)(*(long *)(param_4 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108cf6ff8; end: 108cf702f;  */

void FUN_108cf6ff8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cf7030; end: 108cf72bf; +[SCMultiSnapOverlayGenerator containsTrackedImagesForOverlayState:] */

undefined *
FUN_108cf7030(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined1 uVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  code *pcStack_3a8;
  undefined *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 *puStack_378;
  double dStack_370;
  double dStack_368;
  undefined1 uStack_360;
  undefined8 uStack_358;
  undefined8 *puStack_350;
  undefined8 uStack_348;
  code *pcStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [128];
  undefined1 auStack_158 [128];
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar5 = &uStack_2a0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  dVar20 = 0.0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lVar1 = param_5;
  func_0x00010bfc1440();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = &uStack_220;
  puVar14 = auStack_d8;
  uVar15 = 0x10;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar17 = *plStack_210;
    do {
      lVar19 = 0;
      do {
        if (*plStack_210 != lVar17) {
          _objc_enumerationMutation(lVar1);
        }
        uVar3 = *(ulong *)(lStack_218 + lVar19 * 8);
        func_0x00010c06c0a0();
        uVar13 = SUB81(puVar14,0);
        if ((uVar3 & 1) != 0) goto LAB_108cf7270;
        lVar19 = lVar19 + 1;
      } while (lVar2 != lVar19);
      puVar12 = &uStack_220;
      puVar14 = auStack_d8;
      uVar15 = 0x10;
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  dVar20 = 0.0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  lVar1 = param_5;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = &uStack_260;
  puVar14 = auStack_158;
  uVar15 = 0x10;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar17 = *plStack_250;
    do {
      lVar19 = 0;
      do {
        if (*plStack_250 != lVar17) {
          _objc_enumerationMutation(lVar1);
        }
        uVar3 = *(ulong *)(lStack_258 + lVar19 * 8);
        func_0x00010c0816c0();
        uVar13 = SUB81(puVar14,0);
        if ((uVar3 & 1) != 0) goto LAB_108cf7270;
        lVar19 = lVar19 + 1;
      } while (lVar2 != lVar19);
      puVar12 = &uStack_260;
      puVar14 = auStack_158;
      uVar15 = 0x10;
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  dVar20 = 0.0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  lStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  plStack_290 = (long *)0x0;
  lVar1 = param_5;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = auStack_1d8;
  uVar15 = 0x10;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  uVar13 = SUB81(puVar14,0);
  if (lVar2 != 0) {
    lVar17 = *plStack_290;
    do {
      lVar19 = 0;
      puVar12 = puVar5;
      do {
        if (*plStack_290 != lVar17) {
          _objc_enumerationMutation(lVar1);
        }
        uVar18 = *(ulong *)(lStack_298 + lVar19 * 8);
        uVar3 = uVar18;
        func_0x00010c0816c0();
        uVar13 = SUB81(puVar14,0);
        if ((uVar3 & 1) != 0) goto LAB_108cf7270;
        func_0x00010c06c0a0();
        uVar13 = SUB81(puVar14,0);
        if ((uVar18 & 1) != 0) goto LAB_108cf7270;
        lVar19 = lVar19 + 1;
      } while (lVar2 != lVar19);
      puVar14 = auStack_1d8;
      uVar15 = 0x10;
      lVar2 = lVar1;
      puVar5 = &uStack_2a0;
      func_0x00010bf52a60();
      uVar13 = SUB81(puVar14,0);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010bf11400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar16 = (undefined *)(ulong)(lVar1 != 0);
  puVar12 = puVar5;
LAB_108cf727c:
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar16;
  }
  ___stack_chk_fail();
  dVar25 = param_2;
  _objc_retain(puVar12);
  _objc_retain(uVar15);
  _objc_retain(param_8);
  uStack_358 = 0;
  uStack_348 = 0x3032000000;
  pcStack_340 = FUN_108cf68cc;
  uStack_338 = 0x108cf68dc;
  uStack_330 = 0;
  uVar4 = 0;
  puStack_350 = &uStack_358;
  _dispatch_semaphore_create();
  puStack_3b8 = PTR___NSConcreteStackBlock_11034bd00;
  dVar21 = 1.60807493534087e-314;
  uStack_3b0 = 0xc2000000;
  pcStack_3a8 = FUN_108cf7640;
  puStack_3a0 = &UNK_1108bcfd0;
  _objc_retain(puVar12);
  puStack_398 = puVar12;
  _objc_retain(param_8);
  uStack_390 = param_8;
  dStack_370 = dVar20;
  dStack_368 = param_2;
  uStack_360 = uVar13;
  _objc_retain(uVar15);
  uStack_388 = uVar15;
  puStack_378 = &uStack_358;
  _objc_retain(uVar4);
  uStack_380 = uVar4;
  func_0x000107c312d0("APPSTORE",&puStack_3b8);
  _dispatch_semaphore_wait(uVar4,0xffffffffffffffff);
  if (puStack_350[5] == 0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    func_0x00010c23d0a0();
    dVar22 = dVar21;
    func_0x00010c23d0a0(puStack_350[5]);
    puVar5 = puVar12;
    func_0x00010c0816c0();
    puVar6 = PTR_PTR_1126c41f8;
    if ((int)puVar5 == 0) {
      puVar6 = PTR_PTR_1126b2700;
      _objc_alloc(PTR_PTR_1126b2700);
      puVar5 = puVar12;
      func_0x00010c104260(puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010c2be880();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      puVar8 = puVar12;
      dVar23 = dVar22;
      func_0x00010c104260(puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c2beba0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      puVar10 = puVar12;
      dVar24 = dVar23;
      func_0x00010c141a80(puVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010c055500(dVar22,dVar23,0x3ff0000000000000,dVar24,puVar6);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar5);
      puVar11 = PTR_PTR_1126c41f8;
      func_0x00010c252d00(PTR_PTR_1126c41f8);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR_PTR_1126c4200;
      _objc_alloc(PTR_PTR_1126c4200);
      func_0x00010c02fc00(dVar21 / dVar20,dVar25 / param_2);
      _objc_release(puVar11);
    }
    else {
      puVar5 = puVar12;
      FUN_109174614(puVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c279740(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar16 = PTR_PTR_1126c4200;
      _objc_alloc(PTR_PTR_1126c4200);
      func_0x00010c02fc00(dVar21 / dVar20,dVar25 / param_2);
    }
    _objc_release(puVar6);
  }
  _objc_release(uStack_380);
  _objc_release(uStack_388);
  _objc_release(uStack_390);
  _objc_release(puStack_398);
  _objc_release(uVar4);
  __Block_object_dispose(&uStack_358,8);
  _objc_release(uStack_330);
  _objc_release(param_8);
  _objc_release(uVar15);
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return puVar16;
LAB_108cf7270:
  _objc_release(lVar1);
  puVar16 = (undefined *)0x1;
  goto LAB_108cf727c;
}



/* Entry: 108cf72c0; end: 108cf763f; +[SCMultiSnapOverlayGenerator _videoTrackedImageFor3dCaption:outputSize:isCircular:userSession:previewCameraSourceOverlayService:] */

void FUN_108cf72c0(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  double dStack_d0;
  double dStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  dVar14 = param_2;
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uStack_b8 = 0;
  uStack_a8 = 0x3032000000;
  pcStack_a0 = FUN_108cf68cc;
  uStack_98 = 0x108cf68dc;
  uStack_90 = 0;
  uVar1 = 0;
  puStack_b0 = &uStack_b8;
  _dispatch_semaphore_create();
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  dVar10 = 1.60807493534087e-314;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_108cf7640;
  puStack_100 = &UNK_1108bcfd0;
  _objc_retain(param_5);
  uStack_f8 = param_5;
  _objc_retain(param_8);
  uStack_f0 = param_8;
  dStack_d0 = param_1;
  dStack_c8 = param_2;
  uStack_c0 = param_6;
  _objc_retain(param_7);
  uStack_e8 = param_7;
  puStack_d8 = &uStack_b8;
  _objc_retain(uVar1);
  uStack_e0 = uVar1;
  func_0x000107c312d0("APPSTORE",&puStack_118);
  _dispatch_semaphore_wait(uVar1,0xffffffffffffffff);
  if (puStack_b0[5] == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    func_0x00010c23d0a0();
    dVar11 = dVar10;
    func_0x00010c23d0a0(puStack_b0[5]);
    uVar2 = param_5;
    func_0x00010c0816c0();
    puVar3 = PTR_PTR_1126c41f8;
    if ((int)uVar2 == 0) {
      puVar3 = PTR_PTR_1126b2700;
      _objc_alloc(PTR_PTR_1126b2700);
      uVar2 = param_5;
      func_0x00010c104260(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c2be880();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      uVar5 = param_5;
      dVar12 = dVar11;
      func_0x00010c104260(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c2beba0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      uVar7 = param_5;
      dVar13 = dVar12;
      func_0x00010c141a80(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010c055500(dVar11,dVar12,0x3ff0000000000000,dVar13,puVar3);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar2);
      puVar8 = PTR_PTR_1126c41f8;
      func_0x00010c252d00(PTR_PTR_1126c41f8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126c4200;
      _objc_alloc(PTR_PTR_1126c4200);
      func_0x00010c02fc00(dVar10 / param_1,dVar14 / param_2);
      _objc_release(puVar8);
    }
    else {
      uVar2 = param_5;
      FUN_109174614(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c279740(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar9 = PTR_PTR_1126c4200;
      _objc_alloc(PTR_PTR_1126c4200);
      func_0x00010c02fc00(dVar10 / param_1,dVar14 / param_2);
    }
    _objc_release(puVar3);
  }
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 108cf7640; end: 108cf77b7;  */

void FUN_108cf7640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(param_5 + 0x20);
  FUN_108e380fc(uVar2,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_5 + 0x28);
  func_0x00010c119b40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0efd80();
  func_0x000107c308a4();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar1 = *(undefined1 *)(param_5 + 0x58);
  uVar3 = *(undefined8 *)(param_5 + 0x30);
  func_0x00010bf8b5e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  FUN_108e23d30(*(undefined8 *)(param_5 + 0x48),*(undefined8 *)(param_5 + 0x50),param_1,param_2,
                param_3,param_4,uVar2,uVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(param_5 + 0x38);
  uVar3 = uVar5;
  _objc_retain(uVar5);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  return;
}



/* Entry: 108cf77b8; end: 108cf7813;  */

void FUN_108cf77b8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108cf7814; end: 108cf7acb; +[SCMultiSnapOverlayGenerator _videoTrackedImagesGeoFilter:outputSize:userSession:previewCameraSourceOverlayService:] */

void FUN_108cf7814(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  dVar6 = param_1;
  dVar7 = param_2;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar4 = param_9;
  func_0x00010c119b40(param_9);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0efd80();
  _objc_release(uVar1);
  _objc_release(uVar4);
  lVar2 = param_7;
  FUN_108d3ee18();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR____NSArray0__struct_11034ab48;
  if (lVar2 == 0) goto LAB_108cf7a34;
  func_0x000107c308a4(dVar6,dVar7);
  dStack_b0 = param_3;
  dStack_a8 = param_4;
  if (param_1 == 0.0) {
LAB_108cf78d4:
    dVar6 = 0.0;
  }
  else if (param_2 == 0.0) {
LAB_108cf78f4:
    param_4 = 0.0;
    dVar6 = param_3;
  }
  else {
    dStack_b0 = param_1 / param_2;
    if (dStack_b0 == 0.0) goto LAB_108cf78d4;
    dStack_a8 = INFINITY;
    if (dStack_b0 == INFINITY) goto LAB_108cf78f4;
    dStack_a8 = dStack_b0 * param_4;
    dVar6 = dStack_a8;
    if (param_3 <= dStack_a8) {
      param_4 = param_3 / dStack_b0;
      dVar6 = param_3;
    }
  }
  func_0x000107c308a4();
  puVar3 = PTR_PTR_1126b38a8;
  func_0x00010bf69cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  _dispatch_semaphore_create();
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_108cf68cc;
  uStack_80 = 0x108cf68dc;
  uStack_78 = 0;
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_108cf7acc;
  puStack_f0 = &UNK_110a0ca30;
  puStack_98 = &uStack_a0;
  _objc_retain(puVar3);
  puStack_e8 = puVar3;
  _objc_retain(lVar2);
  lStack_e0 = lVar2;
  _objc_retain(param_8);
  uStack_d8 = param_8;
  puStack_c8 = &uStack_a0;
  dStack_c0 = dVar6;
  dStack_b8 = param_4;
  _objc_retain(uVar4);
  uStack_d0 = uVar4;
  func_0x00010bcbe2c4("APPSTORE",&puStack_108);
  _dispatch_semaphore_wait(uVar4,0xffffffffffffffff);
  puVar5 = (undefined *)puStack_98[5];
  _objc_retain(puVar5);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(lStack_e0);
  _objc_release(puStack_e8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(uVar4);
  _objc_release(puVar3);
LAB_108cf7a34:
  _objc_release(lVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108cf7acc; end: 108cf7c1f;  */

void FUN_108cf7acc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2718;
  _objc_alloc();
  func_0x00010c0044c0();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar8);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar7);
  puVar5 = puVar2;
  func_0x00010bfa7640(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  _objc_retain(param_2);
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c3c88;
  _objc_alloc();
  func_0x00010c0140e0(*(undefined8 *)(lVar8 + 0x30),*(undefined8 *)(lVar8 + 0x38),
                      *(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x48));
  puVar3 = puVar2;
  func_0x00010c29b880();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c140200();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(lVar8 + 0x28) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar4;
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(param_2);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(puVar1 + 0x20));
  return;
}



/* Entry: 108cf7c20; end: 108cf7d7f;  */

void FUN_108cf7c20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c3c88;
  _objc_alloc();
  func_0x00010c0140e0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  puVar3 = puVar2;
  func_0x00010c29b880();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c140200();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined **)(lVar7 + 0x28) = puVar4;
  _objc_release(uVar6);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(puVar1 + 0x20));
  return;
}



/* Entry: 108cf7d80; end: 108cf7d87;  */

void FUN_108cf7d80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108cf7d88; end: 108cf802f; +[SCMultiSnapOverlayGenerator _videoTrackedImageVenueFilter:outputSize:userSession:previewCameraSourceOverlayService:] */

void FUN_108cf7d88(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar5 = param_9;
  func_0x00010c119b40(param_9);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0efd80();
  func_0x000107c308a4();
  dVar7 = param_3;
  dVar8 = param_4;
  _objc_release(uVar1);
  _objc_release(uVar5);
  if (param_1 == 0.0) {
LAB_108cf7e34:
    dVar6 = 0.0;
  }
  else {
    if (param_2 != 0.0) {
      param_1 = param_1 / param_2;
      if (param_1 == 0.0) goto LAB_108cf7e34;
      if (param_1 != INFINITY) {
        dVar6 = param_1 * param_4;
        if (param_3 <= dVar6) {
          param_4 = param_3 / param_1;
          dVar6 = param_3;
        }
        goto LAB_108cf7e48;
      }
    }
    param_4 = 0.0;
    dVar6 = param_3;
  }
LAB_108cf7e48:
  func_0x000107c308a4();
  lVar4 = param_7;
  FUN_108d10868();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110f27758;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110ef0fd8;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110f274f8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_80 = lVar4;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uStack_c8 = 0;
  uStack_b8 = 0x3032000000;
  pcStack_b0 = FUN_108cf68cc;
  uStack_a8 = 0x108cf68dc;
  uStack_a0 = 0;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_108cf8030;
  puStack_100 = &UNK_110ac2060;
  dStack_e8 = dVar6;
  dStack_e0 = param_4;
  dStack_d8 = dVar7;
  dStack_d0 = dVar8;
  puStack_c0 = &uStack_c8;
  _objc_retain();
  puStack_f8 = puVar2;
  puStack_f0 = &uStack_c8;
  func_0x00010bcbe2c4("APPSTORE",&puStack_118);
  uVar5 = puStack_c0[5];
  _objc_retain(uVar5);
  _objc_release(puStack_f8);
  __Block_object_dispose(&uStack_c8,8);
  _objc_release(uStack_a0);
  _objc_release(puVar2);
  _objc_release(lVar4);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_c8,8);
  __Unwind_Resume();
  puVar2 = PTR_PTR_1126c3c80;
  _objc_alloc();
  func_0x00010c014080(*(undefined8 *)(param_7 + 0x30),*(undefined8 *)(param_7 + 0x38),
                      *(undefined8 *)(param_7 + 0x40),*(undefined8 *)(param_7 + 0x48));
  func_0x00010c18b5e0();
  puVar3 = puVar2;
  func_0x00010c29b880();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_7 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar3;
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108cf8030; end: 108cf809f;  */

void FUN_108cf8030(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c3c80;
  _objc_alloc();
  func_0x00010c014080(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  func_0x00010c18b5e0();
  puVar2 = puVar1;
  func_0x00010c29b880();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108cf80a0; end: 108cf82cb; +[SCMultiSnapOverlayGenerator _videoTrackedImageStreakFilter:outputSize:userSession:previewCameraSourceOverlayService:] */

void FUN_108cf80a0(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  double dStack_148;
  double dStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  undefined8 uStack_80;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010c119b40(param_9);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0efd80();
  func_0x000107c308a4();
  dVar18 = param_3;
  dVar19 = param_4;
  _objc_release(uVar1);
  _objc_release(param_9);
  if (param_1 == 0.0) {
LAB_108cf813c:
    dVar17 = 0.0;
  }
  else {
    if (param_2 != 0.0) {
      param_1 = param_1 / param_2;
      if (param_1 == 0.0) goto LAB_108cf813c;
      if (param_1 != INFINITY) {
        dVar17 = param_1 * param_4;
        if (param_3 <= dVar17) {
          param_4 = param_3 / param_1;
          dVar17 = param_3;
        }
        goto LAB_108cf8150;
      }
    }
    param_4 = 0.0;
    dVar17 = param_3;
  }
LAB_108cf8150:
  func_0x000107c308a4();
  uVar1 = param_7;
  func_0x00010c25be40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  uVar4 = uVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 2;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126d89b0;
  _objc_alloc();
  puVar7 = puVar2;
  uVar1 = param_8;
  dVar11 = dVar17;
  dVar16 = param_4;
  func_0x00010c0140e0(dVar17,param_4,dVar18,dVar19);
  _objc_release(param_8);
  puVar10 = puVar3;
  func_0x00010c29b880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    dStack_100 = dVar19;
    dStack_f8 = dVar18;
    dStack_f0 = param_4;
    dStack_e8 = dVar17;
    _objc_retain(puVar7);
    _objc_retain(uVar1);
    _objc_retain(uVar8);
    _objc_retain(param_10);
    _objc_retain(param_11);
    _objc_retain(param_12);
    _objc_retain(uStack_80);
    uVar4 = 0;
    _dispatch_semaphore_create();
    uStack_138 = 0;
    uStack_128 = 0x3032000000;
    pcStack_120 = FUN_108cf68cc;
    uStack_118 = 0x108cf68dc;
    uStack_110 = 0;
    puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
    uVar12 = 0xc2000000;
    uStack_1a8 = 0xc2000000;
    pcStack_1a0 = FUN_108cf86f8;
    puStack_198 = &UNK_110ac20c0;
    puStack_130 = &uStack_138;
    _objc_retain(puVar7);
    puStack_190 = puVar7;
    puStack_150 = &uStack_138;
    _objc_retain(uVar4);
    uStack_188 = uVar4;
    _objc_retain(param_10);
    uStack_180 = param_10;
    _objc_retain(uVar1);
    uStack_178 = uVar1;
    _objc_retain(param_11);
    uStack_170 = param_11;
    _objc_retain(uStack_80);
    uStack_168 = uStack_80;
    _objc_retain(param_12);
    uStack_160 = param_12;
    dStack_148 = dVar11;
    dStack_140 = dVar16;
    _objc_retain(uVar8);
    uStack_158 = uVar8;
    func_0x000107c312d0("APPSTORE",&puStack_1b0);
    _dispatch_semaphore_wait(uVar4,0xffffffffffffffff);
    if (puStack_130[5] == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar3 = puVar7;
      func_0x00010c0816c0();
      puVar2 = PTR_PTR_1126c41f8;
      if ((int)puVar3 == 0) {
        puVar2 = PTR_PTR_1126b2700;
        _objc_alloc(PTR_PTR_1126b2700);
        puVar3 = puVar7;
        func_0x00010c104260();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar3;
        func_0x00010c2be880();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0(puVar10);
        puVar5 = puVar7;
        uVar13 = uVar12;
        func_0x00010c104260(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c2beba0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        uVar14 = uVar13;
        func_0x00010c14e4c0(puVar7);
        uVar15 = uVar14;
        func_0x00010c141d40(puVar7);
        func_0x00010c055500(uVar12,uVar13,uVar14,uVar15,puVar2);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar10);
        _objc_release(puVar3);
        puVar3 = PTR_PTR_1126c41f8;
        func_0x00010c252d00(PTR_PTR_1126c41f8);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR_PTR_1126c4200;
        _objc_alloc(PTR_PTR_1126c4200);
        func_0x00010c128380(puVar7);
        uVar13 = uVar12;
        func_0x00010c128100(puVar7);
        func_0x00010c02fc00(uVar12,uVar13,puVar10);
        _objc_release(puVar3);
      }
      else {
        puVar3 = puVar7;
        func_0x000109174740(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c279740(puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar10 = PTR_PTR_1126c4200;
        _objc_alloc(PTR_PTR_1126c4200);
        func_0x00010c128380(puVar7);
        uVar13 = uVar12;
        func_0x00010c128100(puVar7);
        func_0x00010c02fc00(uVar12,uVar13,puVar10);
      }
      _objc_release(puVar2);
    }
    _objc_release(uStack_158);
    _objc_release(uStack_160);
    _objc_release(uStack_168);
    _objc_release(uStack_170);
    _objc_release(uStack_178);
    _objc_release(uStack_180);
    _objc_release(uStack_188);
    _objc_release(puStack_190);
    __Block_object_dispose(&uStack_138,8);
    _objc_release(uStack_110);
    _objc_release(uVar4);
    _objc_release(uStack_80);
    _objc_release(param_12);
    _objc_release(param_11);
    _objc_release(param_10);
    _objc_release(uVar8);
    _objc_release(uVar1);
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 108cf82cc; end: 108cf86f7; +[SCMultiSnapOverlayGenerator _videoTrackedImagefromSticker:galleryInfoFilters:userSession:stickerSize:stickerInjector:ctpItemViewService:disposableBag:durationMs:] */

void FUN_108cf82cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  uVar1 = 0;
  _dispatch_semaphore_create();
  uStack_b8 = 0;
  uStack_a8 = 0x3032000000;
  pcStack_a0 = FUN_108cf68cc;
  uStack_98 = 0x108cf68dc;
  uStack_90 = 0;
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uVar9 = 0xc2000000;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_108cf86f8;
  puStack_118 = &UNK_110ac20c0;
  puStack_b0 = &uStack_b8;
  _objc_retain(param_5);
  uStack_110 = param_5;
  puStack_d0 = &uStack_b8;
  _objc_retain(uVar1);
  uStack_108 = uVar1;
  _objc_retain(param_8);
  uStack_100 = param_8;
  _objc_retain(param_6);
  uStack_f8 = param_6;
  _objc_retain(param_9);
  uStack_f0 = param_9;
  _objc_retain(param_11);
  uStack_e8 = param_11;
  _objc_retain(param_10);
  uStack_e0 = param_10;
  uStack_c8 = param_1;
  uStack_c0 = param_2;
  _objc_retain(param_7);
  uStack_d8 = param_7;
  func_0x000107c312d0("APPSTORE",&puStack_130);
  _dispatch_semaphore_wait(uVar1,0xffffffffffffffff);
  if (puStack_b0[5] == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar2 = param_5;
    func_0x00010c0816c0();
    puVar3 = PTR_PTR_1126c41f8;
    if ((int)uVar2 == 0) {
      puVar3 = PTR_PTR_1126b2700;
      _objc_alloc(PTR_PTR_1126b2700);
      uVar2 = param_5;
      func_0x00010c104260();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c2be880();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0(uVar4);
      uVar5 = param_5;
      uVar10 = uVar9;
      func_0x00010c104260(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c2beba0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      uVar11 = uVar10;
      func_0x00010c14e4c0(param_5);
      uVar12 = uVar11;
      func_0x00010c141d40(param_5);
      func_0x00010c055500(uVar9,uVar10,uVar11,uVar12,puVar3);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar2);
      puVar7 = PTR_PTR_1126c41f8;
      func_0x00010c252d00(PTR_PTR_1126c41f8);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126c4200;
      _objc_alloc(PTR_PTR_1126c4200);
      func_0x00010c128380(param_5);
      uVar2 = uVar9;
      func_0x00010c128100(param_5);
      func_0x00010c02fc00(uVar9,uVar2,puVar8);
      _objc_release(puVar7);
    }
    else {
      uVar2 = param_5;
      func_0x000109174740(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c279740(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar8 = PTR_PTR_1126c4200;
      _objc_alloc(PTR_PTR_1126c4200);
      func_0x00010c128380(param_5);
      uVar2 = uVar9;
      func_0x00010c128100(param_5);
      func_0x00010c02fc00(uVar9,uVar2,puVar8);
    }
    _objc_release(puVar3);
  }
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
  _objc_release(uVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 108cf86f8; end: 108cf8a07;  */

void FUN_108cf86f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_108cf8a08;
  puStack_80 = &UNK_110ac2090;
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar8);
  uStack_68 = *(undefined8 *)(param_1 + 0x60);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  uStack_78 = uVar8;
  _objc_retain(uVar9);
  ppuVar3 = &puStack_98;
  uStack_70 = uVar9;
  _objc_retainBlock();
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010c06f740();
  _objc_release(uVar9);
  if ((int)uVar8 != 0) {
    ppuVar4 = *(undefined ***)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bf5cd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    if (ppuVar5 != (undefined **)0x0) {
      uVar9 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar9;
      func_0x00010bf2d360();
      _objc_release(uVar9);
      if ((int)uVar8 != 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar9;
        func_0x00010c10f5a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        uVar6 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar6;
        func_0x00010c06c020();
        _objc_release(uVar6);
        uVar6 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(param_1 + 0x50);
        if ((int)uVar9 == 0) {
          puStack_e8 = puVar1;
          uStack_e0 = 0xc2000000;
          uStack_d8 = 0x108cf8a70;
          puStack_d0 = &UNK_11085b810;
          _objc_retain(ppuVar3);
          ppuStack_c8 = ppuVar3;
          func_0x00010bfe92c0(ppuVar5,param_2,uVar6,1,9,uVar8,uVar10,&puStack_e8);
          _objc_release(uVar6);
          ppuVar4 = ppuStack_c8;
        }
        else {
          puStack_c0 = puVar1;
          uStack_b8 = 0xc2000000;
          pcStack_b0 = FUN_108cf8a64;
          puStack_a8 = &UNK_11085b810;
          _objc_retain(ppuVar3);
          ppuStack_a0 = ppuVar3;
          func_0x00010bf03680(ppuVar5,param_2,uVar6,1,9,uVar8,uVar10,&puStack_c0);
          _objc_release(uVar6);
          ppuVar4 = ppuStack_a0;
        }
        _objc_release(ppuVar4);
        _objc_release(uVar8);
        goto LAB_108cf8964;
      }
    }
    _objc_release(ppuVar5);
  }
  lVar7 = *(long *)(param_1 + 0x20);
  func_0x00010c27dde0();
  if (lVar7 != 0x3cedc99) {
    func_0x00010c27dde0(*(undefined8 *)(param_1 + 0x20));
  }
  puVar2 = PTR_PTR_1126b2710;
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x108cf8a7c;
  puStack_f8 = &UNK_11085b810;
  _objc_retain(ppuVar3);
  ppuStack_f0 = ppuVar3;
  func_0x00010bfe7bc0(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),puVar2,param_2
                      ,uVar8,uVar9,uVar6,&puStack_110);
  ppuVar5 = ppuStack_f0;
LAB_108cf8964:
  _objc_release(ppuVar5);
  _objc_release(ppuVar3);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  return;
}



/* Entry: 108cf8a08; end: 108cf8a63;  */

void FUN_108cf8a08(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108cf8a64; end: 108cf8a87;  */

void FUN_108cf8a64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108cf8a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 108cf8a88; end: 108cf91cb; +[SCMultiSnapOverlayGenerator _videoTrackedImagesForAutoCaptions:outputSize:previewCameraSourceOverlayService:] */

void FUN_108cf8a88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uVar2 = param_4;
  func_0x00010c27a460(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010c27ada0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010c2be880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar4 = param_4;
  uVar10 = param_1;
  func_0x00010c27a460(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c27ada0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2beba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar11 = uVar10;
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(uVar2);
  puVar7 = PTR_PTR_1126b2700;
  _objc_alloc();
  uVar2 = param_4;
  func_0x00010c27a460(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010c141a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar5 = param_1;
  func_0x00010c055500(param_1,uVar10,0,uVar11);
  _objc_release(uVar9);
  _objc_release(uVar2);
  puVar8 = PTR_PTR_1126b2700;
  _objc_alloc();
  uVar2 = param_4;
  func_0x00010c27a460(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010c14e120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar3 = param_4;
  uVar6 = uVar5;
  func_0x00010c27a460(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c141a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c055500(param_1,uVar10,uVar5,uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(uVar2);
  uVar9 = 0;
  _dispatch_semaphore_create();
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x108cf8da8;
  puStack_b8 = &UNK_110868f80;
  uStack_b0 = param_4;
  puStack_a8 = puVar7;
  puStack_a0 = puVar8;
  uStack_98 = param_5;
  _objc_retain(puVar1);
  puStack_90 = puVar1;
  uStack_88 = uVar9;
  _objc_retain(uVar9);
  _objc_retain(param_5);
  _objc_retain(puVar8);
  _objc_retain(puVar7);
  _objc_retain(param_4);
  func_0x000107c312d0("APPSTORE",&puStack_d0);
  _dispatch_semaphore_wait(uVar9,0xffffffffffffffff);
  uVar2 = uStack_88;
  _objc_retain(puVar1);
  _objc_release(uVar2);
  _objc_release(puStack_90);
  _objc_release(uStack_98);
  _objc_release(puStack_a0);
  _objc_release(puStack_a8);
  _objc_release(uStack_b0);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(param_5);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108cf91cc; end: 108cf9243;  */

void FUN_108cf91cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126ae790;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f512fb4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar2,param_2,puVar3,0x19,0,0x13);
  uVar1 = puRam000000011372e478;
  puRam000000011372e478 = puVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108cf9244; end: 108cf945f; -[SCMultiSnapOverlayState initWithCaptions:autoCaptions:stickers:infoFilterMetadata:drawingStrokes:drawingStrokeIds:drawingV2Data:geoFilters:venueFilter:streakFilter:] */

undefined8 *
FUN_108cf9244(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126fe4a8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108cf9460; end: 108cf9483; -[SCMultiSnapOverlayState copyWithZone:] */

undefined8 FUN_108cf9460(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108cf9484; end: 108cf9673; -[SCMultiSnapOverlayState initWithCoder:] */

undefined1 * FUN_108cf9484(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe4a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cf9674; end: 108cf9773; -[SCMultiSnapOverlayState encodeWithCoder:] */

void FUN_108cf9674(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110eac0f8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110ef25f8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110dec898);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ef2618);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110ef2638);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110ef2658);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110ef2678);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110e8a118);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110ef2698);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110ef26b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cf9774; end: 108cf977b; -[SCMultiSnapOverlayState preferFasterCoding] */

undefined8 FUN_108cf9774(void)

{
  return 1;
}



/* Entry: 108cf977c; end: 108cf982b; -[SCMultiSnapOverlayState encodeWithFasterCoder:] */

void FUN_108cf977c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf93000(param_3,param_2,uVar1);
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 8));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x30));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x40));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x50));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cf982c; end: 108cf999f; -[SCMultiSnapOverlayState decodeWithFasterDecoder:] */

void FUN_108cf982c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108cf99a0; end: 108cf9b6f; -[SCMultiSnapOverlayState setObject:forUInt64Key:] */

void FUN_108cf99a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_4 < 0x7cabc3ba0957b3) {
    if (param_4 < 0x48989799e9a60d) {
      if (param_4 == 0x15762439a32815) {
        lVar2 = 0x50;
      }
      else {
        if (param_4 != 0x432f2d9eec9779) goto LAB_108cf9b5c;
        lVar2 = 0x40;
      }
    }
    else if (param_4 == 0x48989799e9a60d) {
      lVar2 = 0x28;
    }
    else if (param_4 == 0x4a0fce0b8df109) {
      lVar2 = 0x38;
    }
    else {
      if (param_4 != 0x78d1a762e1a7d3) goto LAB_108cf9b5c;
      lVar2 = 0x48;
    }
  }
  else if (param_4 < 0xb931bc6528d53d) {
    if (param_4 == 0x7cabc3ba0957b3) {
      lVar2 = 0x18;
    }
    else {
      if (param_4 != 0x8c721479fe9801) goto LAB_108cf9b5c;
      lVar2 = 0x10;
    }
  }
  else if (param_4 == 0xf1fa12b97f27f9) {
    lVar2 = 0x20;
  }
  else if (param_4 == 0xbec8c076e1b53d) {
    lVar2 = 0x30;
  }
  else {
    if (param_4 != 0xb931bc6528d53d) goto LAB_108cf9b5c;
    lVar2 = 8;
  }
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
LAB_108cf9b5c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cf9b70; end: 108cf9b83; +[SCMultiSnapOverlayState fasterCodingVersion] */

undefined8 FUN_108cf9b70(void)

{
  return 0xf68b57fe8116cdcf;
}



/* Entry: 108cf9b84; end: 108cf9b8f; +[SCMultiSnapOverlayState fasterCodingKeys] */

undefined8 FUN_108cf9b84(void)

{
  return 0x113296da0;
}



/* Entry: 108cf9b90; end: 108cf9bab; -[SCMultiSnapOverlayState isEqual:] */

undefined8 * FUN_108cf9b90(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  
  plVar4 = (long *)0x11372e488;
  if (param_1 == param_3) {
    return (undefined8 *)0x1;
  }
  lVar3 = 10;
  lVar5 = 10;
  _objc_opt_class();
  puVar2 = param_3;
  func_0x00010c077980();
  if ((int)puVar2 != 0) {
    if ((bRam000000011372e480 & 1) == 0) {
      puVar2 = param_1;
      _objc_opt_class();
      _class_copyIvarList();
      lVar7 = 0;
      puVar8 = puVar2;
      do {
        pcVar6 = (char *)*puVar8;
        pcVar1 = pcVar6;
        _ivar_getTypeEncoding();
        if (*pcVar1 == '@') {
          _ivar_getOffset();
          *(char **)(lVar7 * 8 + 0x11372e488) = pcVar6;
          lVar7 = lVar7 + 1;
        }
        lVar5 = lVar5 + -1;
        puVar8 = puVar8 + 1;
      } while (lVar5 != 0);
      _free(puVar2);
      DataMemoryBarrier(2,3);
      bRam000000011372e480 = 1;
    }
    do {
      puVar2 = *(undefined8 **)((long)param_1 + *plVar4);
      if ((puVar2 != *(undefined8 **)((long)param_3 + *plVar4)) &&
         (func_0x00010c071ae0(), (int)puVar2 == 0)) {
        return puVar2;
      }
      lVar3 = lVar3 + -1;
      plVar4 = plVar4 + 1;
    } while (lVar3 != 0);
    puVar2 = (undefined8 *)0x1;
  }
  return puVar2;
}



/* Entry: 108cf9bac; end: 108cf9bbf; -[SCMultiSnapOverlayState hash] */

ulong FUN_108cf9bac(undefined8 *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  plVar5 = (long *)0x11372e488;
  if ((bRam000000011372e480 & 1) == 0) {
    puVar1 = param_1;
    _objc_opt_class();
    _class_copyIvarList();
    lVar7 = 0;
    lVar9 = 10;
    puVar8 = puVar1;
    do {
      pcVar6 = (char *)*puVar8;
      pcVar2 = pcVar6;
      _ivar_getTypeEncoding();
      if (*pcVar2 == '@') {
        _ivar_getOffset();
        *(char **)(lVar7 * 8 + 0x11372e488) = pcVar6;
        lVar7 = lVar7 + 1;
      }
      lVar9 = lVar9 + -1;
      puVar8 = puVar8 + 1;
    } while (lVar9 != 0);
    _free(puVar1);
    DataMemoryBarrier(2,3);
    bRam000000011372e480 = 1;
  }
  uVar3 = *(ulong *)((long)param_1 + lRam000000011372e488);
  func_0x00010bfde980(uVar3);
  lVar7 = 9;
  do {
    plVar5 = plVar5 + 1;
    uVar4 = *(ulong *)((long)param_1 + *plVar5);
    func_0x00010bfde980(uVar4);
    uVar4 = uVar4 | uVar3 << 0x20;
    uVar3 = ~uVar4 + uVar4 * 0x40000;
    uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
    uVar3 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
    uVar3 = uVar3 ^ uVar3 >> 0x16;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return uVar3;
}



/* Entry: 108cf9bc0; end: 108cf9bc7; -[SCMultiSnapOverlayState captions] */

undefined8 FUN_108cf9bc0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cf9bc8; end: 108cf9bcf; -[SCMultiSnapOverlayState autoCaptions] */

undefined8 FUN_108cf9bc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cf9bd0; end: 108cf9bd7; -[SCMultiSnapOverlayState stickers] */

undefined8 FUN_108cf9bd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108cf9bd8; end: 108cf9bdf; -[SCMultiSnapOverlayState infoFilterMetadata] */

undefined8 FUN_108cf9bd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108cf9be0; end: 108cf9be7; -[SCMultiSnapOverlayState drawingStrokes] */

undefined8 FUN_108cf9be0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108cf9be8; end: 108cf9bef; -[SCMultiSnapOverlayState drawingStrokeIds] */

undefined8 FUN_108cf9be8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108cf9bf0; end: 108cf9bf7; -[SCMultiSnapOverlayState drawingV2Data] */

undefined8 FUN_108cf9bf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108cf9bf8; end: 108cf9bff; -[SCMultiSnapOverlayState geoFilters] */

undefined8 FUN_108cf9bf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108cf9c00; end: 108cf9c07; -[SCMultiSnapOverlayState venueFilter] */

undefined8 FUN_108cf9c00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108cf9c08; end: 108cf9c0f; -[SCMultiSnapOverlayState streakFilter] */

undefined8 FUN_108cf9c08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108cf9c10; end: 108cf9c9f; -[SCMultiSnapOverlayState .cxx_destruct] */

void FUN_108cf9c10(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cf9ca0; end: 108cf9ecf; +[SCMultiSnapOverlayStateBuilder withMultiSnapOverlayState:] */

void FUN_108cf9ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d90e8;
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar2 = param_3;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf11400();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bfedc80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x20);
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf8a020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x28);
  *(undefined8 *)(puVar1 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf89fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x30);
  *(undefined8 *)(puVar1 + 0x30) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf8a240();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x38);
  *(undefined8 *)(puVar1 + 0x38) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bfc1440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x40);
  *(undefined8 *)(puVar1 + 0x40) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c297c00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x48);
  *(undefined8 *)(puVar1 + 0x48) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c25bf80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x50);
  *(undefined8 *)(puVar1 + 0x50) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108cf9ed0; end: 108cf9f1f; -[SCMultiSnapOverlayStateBuilder build] */

void FUN_108cf9ed0(void)

{
  _objc_alloc(PTR_PTR_1126dbba8);
  func_0x00010bffc740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cf9f20; end: 108cf9f57; -[SCMultiSnapOverlayStateBuilder setCaptions:] */

long FUN_108cf9f20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108cf9f58; end: 108cf9f8f; -[SCMultiSnapOverlayStateBuilder setAutoCaptions:] */

long FUN_108cf9f58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108cf9f90; end: 108cf9fc7; -[SCMultiSnapOverlayStateBuilder setStickers:] */

long FUN_108cf9f90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108cf9fc8; end: 108cf9fff; -[SCMultiSnapOverlayStateBuilder setInfoFilterMetadata:] */

long FUN_108cf9fc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108cfa000; end: 108cfa037; -[SCMultiSnapOverlayStateBuilder setDrawingStrokes:] */

long FUN_108cfa000(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108cfa038; end: 108cfa06f; -[SCMultiSnapOverlayStateBuilder setDrawingStrokeIds:] */

long FUN_108cfa038(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108cfa070; end: 108cfa0a7; -[SCMultiSnapOverlayStateBuilder setDrawingV2Data:] */

long FUN_108cfa070(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108cfa0a8; end: 108cfa0df; -[SCMultiSnapOverlayStateBuilder setGeoFilters:] */

long FUN_108cfa0a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108cfa0e0; end: 108cfa117; -[SCMultiSnapOverlayStateBuilder setVenueFilter:] */

long FUN_108cfa0e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108cfa118; end: 108cfa14f; -[SCMultiSnapOverlayStateBuilder setStreakFilter:] */

long FUN_108cfa118(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108cfa150; end: 108cfa1df; -[SCMultiSnapOverlayStateBuilder .cxx_destruct] */

void FUN_108cfa150(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cfa1e0; end: 108cfa397;  */

undefined * FUN_108cfa1e0(double *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  double *pdVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [24];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_1);
  pdVar2 = param_1;
  func_0x00010bf52a60();
  if (pdVar2 != (double *)0x0) {
    lVar5 = *plStack_120;
    do {
      pdVar6 = (double *)0x0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(param_1);
        }
        lVar4 = *(long *)(lStack_128 + (long)pdVar6 * 8);
        puVar3 = PTR_PTR_1126bb2a8;
        _objc_alloc(PTR_PTR_1126bb2a8);
        if (lVar4 == 0) {
          uStack_160 = 0;
          uStack_158 = 0;
          uStack_150 = 0;
        }
        else {
          func_0x00010c26f000(&uStack_160,lVar4);
        }
        uStack_178 = param_2[1];
        uStack_180 = *param_2;
        uStack_170 = param_2[2];
        _CMTimeSubtract(auStack_148,&uStack_160,&uStack_180);
        func_0x00010c27a460(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c052280(puVar3);
        _objc_release(lVar4);
        func_0x00010befa120(puVar1);
        _objc_release(puVar3);
        pdVar6 = (double *)((long)pdVar6 + 1);
      } while (pdVar2 != pdVar6);
      pdVar2 = param_1;
      func_0x00010bf52a60();
    } while (pdVar2 != (double *)0x0);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  dStack_1c8 = param_1[1];
  dVar7 = *param_1;
  dStack_1c0 = param_1[2];
  dStack_1d0 = dVar7;
  _CMTimeGetSeconds(&dStack_1d0);
  dStack_1c8 = param_1[1];
  dVar8 = *param_1;
  dStack_1c0 = param_1[2];
  dStack_1d0 = dVar8;
  _CMTimeGetSeconds(&dStack_1d0);
  puVar1 = (undefined *)0x3;
  if (3.0 <= dVar8) {
    puVar1 = (undefined *)0x4;
  }
  puVar3 = (undefined *)0x5;
  if (dVar8 < 4.0) {
    puVar3 = puVar1;
  }
  puVar1 = (undefined *)0x6;
  if (dVar8 < 5.0) {
    puVar1 = puVar3;
  }
  lVar5 = (long)((dVar7 + -1.0) / 10.0);
  if (lVar5 + 1 < (long)puVar1) {
    puVar1 = (undefined *)(lVar5 + 1);
  }
  return puVar1;
}



/* Entry: 108cfa398; end: 108cfa4af;  */

long FUN_108cfa398(double *param_1)

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



/* Entry: 108cfa4b0; end: 108cfa523; -[SCMultiSnapV2CellTooltipHandler initWithContentView:] */

undefined1 * FUN_108cfa4b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe4b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cfa524; end: 108cfa8af; -[SCMultiSnapV2CellTooltipHandler updateSplitTooltipsWithPointAboveSplitter:splitterCenterX:] */

void FUN_108cfa524(double param_1,double param_2,long param_3,undefined8 param_4,undefined1 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined1 uStack_58;
  
  if (*(long *)(param_3 + 0x18) == 0) {
    puVar1 = PTR_PTR_1126b6950;
    _objc_alloc();
    param_2 = *(double *)(PTR__CGRectZero_110347608 + 8);
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,param_2,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    *(undefined **)(param_3 + 0x18) = puVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    func_0x00010c1677c0(0,uVar2);
    func_0x000109201a30();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_3 + 0x18),param_4,uVar2);
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2133e0(*(undefined8 *)(param_3 + 0x18),param_4,puVar1);
    _objc_release(puVar1);
    func_0x00010c21a1c0(*(undefined8 *)(param_3 + 0x18),param_4,1);
    func_0x00010c0699c0(*(undefined8 *)(param_3 + 0x18));
    func_0x00010c202c80(*(undefined8 *)(param_3 + 0x18));
    func_0x00010befbb60(*(undefined8 *)(param_3 + 0x20),param_4,*(undefined8 *)(param_3 + 0x18));
  }
  if (*(long *)(param_3 + 0x10) == 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    *(undefined **)(param_3 + 0x10) = puVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010c1677c0(0,uVar2);
    func_0x000109201a18();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_3 + 0x10),param_4,uVar2);
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_3 + 0x10),param_4,puVar1);
    _objc_release(puVar1);
    func_0x00010c213040(*(undefined8 *)(param_3 + 0x10),param_4,1);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_3 + 0x10),param_4,puVar1);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    param_2 = 1.0;
    func_0x00010c1fe7a0(0,0x3ff0000000000000);
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(uVar2);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4014000000000000);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3f000000);
    _objc_release(uVar2);
    func_0x00010c0699c0(*(undefined8 *)(param_3 + 0x10));
    func_0x00010c202c80(*(undefined8 *)(param_3 + 0x10));
    func_0x00010befbb60(*(undefined8 *)(param_3 + 0x20),param_4,*(undefined8 *)(param_3 + 0x10));
  }
  func_0x00010bfb68e0(*(undefined8 *)(param_3 + 0x20));
  dVar3 = param_2;
  func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x10));
  dVar4 = param_2 + dVar3 * -0.5 + -41.0;
  func_0x00010c17a6a0(param_1,dVar4,*(undefined8 *)(param_3 + 0x10));
  func_0x00010bf34840(*(undefined8 *)(param_3 + 0x10));
  dVar3 = param_1;
  func_0x00010bf348c0(*(undefined8 *)(param_3 + 0x10));
  func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x18));
  func_0x00010c17a6a0(param_1,dVar3 - dVar4,*(undefined8 *)(param_3 + 0x18));
  func_0x00010bf34840(*(undefined8 *)(param_3 + 0x10));
  dVar3 = param_1;
  func_0x00010bf348c0(*(undefined8 *)(param_3 + 0x10));
  dVar4 = dVar3;
  func_0x00010c273d80(param_3);
  func_0x00010c17a6a0(param_1,dVar3 + dVar4,*(undefined8 *)(param_3 + 0x10));
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108cfa8b0;
  puStack_68 = &UNK_110845ce0;
  lStack_60 = param_3;
  uStack_58 = param_5;
  func_0x00010bf03400(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_4,&puStack_80);
  return;
}



/* Entry: 108cfa8b0; end: 108cfa8f3;  */

/* WARNING: Possible PIC construction at 0x000108cfa8d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108cfa8d4) */

void FUN_108cfa8b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = NEON_ucvtf((ulong)*(byte *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108cfa8f4; end: 108cfaaff; -[SCMultiSnapV2CellTooltipHandler displayTapToTrimTooltip] */

void FUN_108cfa8f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126b6950;
  _objc_alloc();
  dVar4 = *(double *)(PTR__CGRectZero_110347608 + 8);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,dVar4,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar2);
  func_0x000109201a48();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + 8),param_2,uVar2);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2133e0(*(undefined8 *)(param_1 + 8),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + 8),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 8));
  dVar3 = 0.0;
  func_0x00010c21a1e0(*(undefined8 *)(param_1 + 8),param_2,4);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 8));
  func_0x00010c0699c0(*(undefined8 *)(param_1 + 8));
  func_0x00010c202c80(*(undefined8 *)(param_1 + 8));
  func_0x00010bf345e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0ed1a0(*(undefined8 *)(param_1 + 0x20));
  dVar5 = -8.0;
  func_0x00010c23d0a0(*(undefined8 *)(param_1 + 8));
  func_0x00010c17a6a0(dVar3,dVar4 + -5.0 + -8.0 + dVar5 * -0.5,*(undefined8 *)(param_1 + 8));
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0ed1a0(*(undefined8 *)(param_1 + 8));
  func_0x00010bf512a0(uVar2,param_2,0);
  if (dVar3 < 0.0) {
    func_0x00010c0ed1a0(*(undefined8 *)(param_1 + 8));
    func_0x00010c1d64a0(0,*(undefined8 *)(param_1 + 8));
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf345e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c21a1e0(uVar2,param_2,3);
  }
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108cfab00;
  puStack_40 = &UNK_110842e18;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108cfab10;
  puStack_68 = &UNK_110841f20;
  lStack_60 = param_1;
  lStack_38 = param_1;
  func_0x00010bf03420(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_58,
                      &puStack_80);
  return;
}


