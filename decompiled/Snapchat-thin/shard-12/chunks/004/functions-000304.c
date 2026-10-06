/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10912d56c; end: 10912d59f; -[SCArSegmentationDownloadedInput detectionType] */

bool FUN_10912d56c(long param_1)

{
  func_0x00010c23e720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 10912d5a0; end: 10912d5a7; -[SCArSegmentationDownloadedInput shouldStillDisplayWithoutSegmentationMatch] */

undefined1 FUN_10912d5a0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10912d5a8; end: 10912d5af; -[SCArSegmentationDownloadedInput setShouldStillDisplayWithoutSegmentationMatch:] */

void FUN_10912d5a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10912d5b0; end: 10912d5b7; -[SCArSegmentationDownloadedInput sky] */

undefined8 FUN_10912d5b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10912d5b8; end: 10912d5e7; -[SCArSegmentationDownloadedInput setSky:] */

void FUN_10912d5b8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10912d5e8; end: 10912d5f3; -[SCArSegmentationDownloadedInput .cxx_destruct] */

void FUN_10912d5e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10912d5f4; end: 10912d677; -[SCArSegmentationDownloadedSky validationErrors] */

undefined ** FUN_10912d5f4(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  
  lVar1 = param_1;
  func_0x00010c131360();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010bf1cc20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      return &PTR____CFConstantStringClassReference_110f22b58;
    }
  }
  else {
    _objc_release();
  }
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  ppuVar2 = &PTR____CFConstantStringClassReference_110f22b78;
  if (param_1 != 0) {
    ppuVar2 = (undefined **)0x0;
  }
  return ppuVar2;
}



/* Entry: 10912d678; end: 10912d67f; -[SCArSegmentationDownloadedSky metadata] */

undefined8 FUN_10912d678(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10912d680; end: 10912d6af; -[SCArSegmentationDownloadedSky setMetadata:] */

void FUN_10912d680(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10912d6b0; end: 10912d6b7; -[SCArSegmentationDownloadedSky replacementSkyImage] */

undefined8 FUN_10912d6b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10912d6b8; end: 10912d6e7; -[SCArSegmentationDownloadedSky setReplacementSkyImage:] */

void FUN_10912d6b8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10912d6e8; end: 10912d6ef; -[SCArSegmentationDownloadedSky blimpImage] */

undefined8 FUN_10912d6e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10912d6f0; end: 10912d71f; -[SCArSegmentationDownloadedSky setBlimpImage:] */

void FUN_10912d6f0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10912d720; end: 10912d75b; -[SCArSegmentationDownloadedSky .cxx_destruct] */

void FUN_10912d720(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10912d75c; end: 10912d907; -[SCDynamicGeoFilter initWithLocationId:geoFenceLocationPoints:filterId:displayName:isFromPostCaptureLensExplorer:expirationDate:scaleSetting:positionSetting:isSponsored:sponsoredSlug:targetingType:autoRefreshDelayInMilliseconds:autoRefreshLabelPosition:dynamicFilterRefreshHint:dynamicFilterUpdatingMessage:belowDrawingLayer:isAnimated:encryptedGeoData:unlockableContentType:isFrameFilter:unlockableTrackInfo:imageURL:imageURLParams:dynamicResources:dynamicContextProperties:autoStacking:arSegmentation:carouselGroup:carouselGlobalScoreList:audio:isSnapchatPlusExclusive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10912d75c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 in_stack_00000078;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(in_stack_00000078);
  puStack_80 = PTR_PTR_1127007a8;
  puVar1 = &uStack_88;
  uStack_88 = param_3;
  _objc_msgSendSuper2(param_1,param_2,puVar1,PTR_s_initWithLocationId_geoFenceLocat_1125e7538,
                      param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,param_13);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112781cc8;
    _objc_retain(in_stack_00000078);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = in_stack_00000078;
    _objc_release(uVar2);
    func_0x00010bfef180(puVar1);
  }
  _objc_release(in_stack_00000078);
  return puVar1;
}



/* Entry: 10912d908; end: 10912db83; -[SCDynamicGeoFilter initWithCTPFilterEntity:requestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_10912d908(undefined *param_1,undefined8 param_2,undefined *param_3,undefined1 *param_4,
             undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined ***pppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined ***unaff_x24;
  undefined *unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  long unaff_x28;
  long lVar11;
  undefined **ppuStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  long lStack_1d0;
  long lStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined ***pppuStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined **ppuStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined *puStack_158;
  undefined **ppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_f8 = PTR_PTR_1127007a8;
  ppuVar1 = &puStack_100;
  puVar2 = param_3;
  puStack_100 = param_1;
  _objc_msgSendSuper2(ppuVar1,PTR_s_initWithCTPFilterEntity_requestI_1125dc300,param_3,param_4);
  if (ppuVar1 != (undefined **)0x0) {
    param_1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = param_3;
    func_0x00010bfad780();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010bf8b860();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = puVar2;
    func_0x00010bf4bda0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(param_3);
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    _objc_retain(unaff_x22);
    param_4 = auStack_f0;
    param_5 = 0x10;
    puVar2 = unaff_x22;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      unaff_x28 = *plStack_130;
      unaff_x27 = &PTR_PTR_1126dd000;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_130 != unaff_x28) {
            _objc_enumerationMutation(unaff_x22);
          }
          unaff_x25 = PTR_PTR_1126dd728;
          unaff_x26 = ppuVar1;
          func_0x00010bfadea0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = unaff_x25;
          func_0x00010c13b500();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x26);
          if (puVar3 != (undefined *)0x0) {
            func_0x00010befa120(param_1);
          }
          _objc_release(puVar3);
          puVar9 = puVar9 + 1;
        } while (puVar2 != puVar9);
        param_4 = auStack_f0;
        param_5 = 0x10;
        puVar2 = unaff_x22;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(unaff_x22);
    puVar2 = param_1;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)((long)ppuVar1 + (long)_DAT_112781cc8);
    *(undefined **)((long)ppuVar1 + (long)_DAT_112781cc8) = puVar2;
    _objc_release(uVar8);
    unaff_x23 = unaff_x22;
    func_0x00010bf529e0();
    puStack_148 = PTR_PTR_1127007a8;
    unaff_x24 = &ppuStack_150;
    ppuStack_150 = ppuVar1;
    _objc_msgSendSuper2(unaff_x24,PTR_s_loadingMetaData_112604e68);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = unaff_x23;
    func_0x00010c1cec20();
    _objc_release(unaff_x24);
    func_0x00010bfef180(ppuVar1);
    _objc_release(unaff_x22);
    _objc_release(param_1);
    param_3 = puStack_158;
  }
  puVar9 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_10912db84;
  lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1c0 = unaff_x28;
  ppuStack_1b8 = unaff_x27;
  ppuStack_1b0 = unaff_x26;
  puStack_1a8 = unaff_x25;
  pppuStack_1a0 = unaff_x24;
  puStack_198 = unaff_x23;
  puStack_190 = unaff_x22;
  puStack_188 = param_1;
  ppuStack_180 = ppuVar1;
  puStack_178 = param_3;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  puStack_258 = PTR_PTR_1127007a8;
  ppuVar1 = &puStack_260;
  puStack_260 = puVar9;
  _objc_msgSendSuper2(ppuVar1,PTR_s_initWithDictionary_isPreCached_i_1125e0b48,puVar2,param_4,
                      param_5);
  if ((puVar2 != (undefined *)0x0) && (ppuVar1 != (undefined **)0x0)) {
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    plStack_290 = (long *)0x0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    puVar4 = puVar3;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      lVar11 = *plStack_290;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_290 != lVar11) {
            _objc_enumerationMutation(puVar3);
          }
          puVar6 = PTR_PTR_1126dd728;
          ppuVar5 = ppuVar1;
          func_0x00010bfadea0(ppuVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c13b520();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar5);
          if (puVar6 != (undefined *)0x0) {
            func_0x00010befa120(puVar9);
          }
          _objc_release(puVar6);
          puVar10 = puVar10 + 1;
        } while (puVar4 != puVar10);
        puVar4 = puVar3;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
    }
    puVar4 = puVar9;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)((long)ppuVar1 + (long)_DAT_112781cc8);
    *(undefined **)((long)ppuVar1 + (long)_DAT_112781cc8) = puVar4;
    _objc_release(uVar8);
    func_0x00010bf529e0(puVar3);
    puStack_2a8 = PTR_PTR_1127007a8;
    pppuVar7 = &ppuStack_2b0;
    ppuStack_2b0 = ppuVar1;
    _objc_msgSendSuper2(pppuVar7,PTR_s_loadingMetaData_112604e68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cec20();
    _objc_release(pppuVar7);
    func_0x00010bfef180(ppuVar1);
    _objc_release(puVar3);
    _objc_release(puVar9);
  }
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d0) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  if (lRam0000000113730ac8 != -1) {
    func_0x000107c27d9c(0x113730ac8,&PTR___NSConcreteGlobalBlock_110add760);
  }
  ppuVar1 = ppuRam0000000113730ac0;
  _objc_retain(ppuRam0000000113730ac0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return ppuVar1;
}



/* Entry: 10912db84; end: 10912ddcf; -[SCDynamicGeoFilter initWithDictionary:isPreCached:isUnifiedCameraObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10912db84(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_f8 = PTR_PTR_1127007a8;
  puVar1 = &uStack_100;
  uStack_100 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithDictionary_isPreCached_i_1125e0b48,param_3,param_4,
                      param_5);
  if ((param_3 != 0) && (puVar1 != (undefined8 *)0x0)) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lVar4 = lVar3;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar10 = *plStack_130;
      do {
        lVar9 = 0;
        do {
          if (*plStack_130 != lVar10) {
            _objc_enumerationMutation(lVar3);
          }
          puVar6 = PTR_PTR_1126dd728;
          puVar5 = puVar1;
          func_0x00010bfadea0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c13b520();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          if (puVar6 != (undefined *)0x0) {
            func_0x00010befa120(puVar2);
          }
          _objc_release(puVar6);
          lVar9 = lVar9 + 1;
        } while (lVar4 != lVar9);
        lVar4 = lVar3;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    puVar6 = puVar2;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781cc8);
    *(undefined **)((long)puVar1 + (long)_DAT_112781cc8) = puVar6;
    _objc_release(uVar8);
    func_0x00010bf529e0(lVar3);
    puStack_148 = PTR_PTR_1127007a8;
    ppuVar7 = &puStack_150;
    puStack_150 = puVar1;
    _objc_msgSendSuper2(ppuVar7,PTR_s_loadingMetaData_112604e68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cec20();
    _objc_release(ppuVar7);
    func_0x00010bfef180(puVar1);
    _objc_release(lVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  if (lRam0000000113730ac8 != -1) {
    func_0x000107c27d9c(0x113730ac8,&PTR___NSConcreteGlobalBlock_110add760);
  }
  puVar1 = puRam0000000113730ac0;
  _objc_retain(puRam0000000113730ac0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 10912ddd0; end: 10912de9b; +[SCDynamicGeoFilter _sharedPerformer] */

void FUN_10912ddd0(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113730ac8 != -1) {
    func_0x000107c27d9c(0x113730ac8,&PTR___NSConcreteGlobalBlock_110add760);
  }
  uVar1 = uRam0000000113730ac0;
  _objc_retain(uRam0000000113730ac0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10912de9c; end: 10912df37; -[SCDynamicGeoFilter initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10912de9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127007a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithCoder__1125dd730,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781cc8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781cc8) = uVar2;
    _objc_release(uVar3);
    func_0x00010bfef180(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10912df38; end: 10912dfcb; -[SCDynamicGeoFilter encodeWithCoder:] */

void FUN_10912df38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_encodeWithCoder__1125c2658;
  puStack_38 = PTR_PTR_1127007a8;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  func_0x00010bf8ba40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 10912dfcc; end: 10912e05b; -[SCDynamicGeoFilter initPerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10912dfcc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f55326a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfef240(puVar1,param_2,puVar2,0x11,0,0x1b,
                      &PTR____CFConstantStringClassReference_110f22bb8);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112781ccc);
  *(undefined **)(param_1 + _DAT_112781ccc) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10912e05c; end: 10912e157; -[SCDynamicGeoFilter imageLoadingKey:userName:displayName:] */

void FUN_10912e05c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010bf8b6c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bf26820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  if (puVar2 == (undefined1 *)0x0) {
    puStack_48 = PTR_PTR_1127007a8;
    puStack_50 = param_1;
    _objc_msgSendSuper2(&puStack_50,PTR_s_imageLoadingKey__11253f748,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar2);
    ppuVar3 = (undefined1 **)puVar2;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10912e158; end: 10912e327; -[SCDynamicGeoFilter prepareGeoFilterImageWithCompletion:contextData:unifiedCameraObjectDataFetcher:userSession:bitmojiImageFetcher:bitmojiAvatarProvider:displayName:skipLensContent:] */

void FUN_10912e158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010beb20a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10912e328;
  puStack_b0 = &UNK_110add7e0;
  uStack_90 = param_9;
  uStack_68 = param_10;
  uStack_a8 = param_1;
  uStack_a0 = param_4;
  uStack_98 = param_6;
  uStack_88 = param_7;
  uStack_80 = param_8;
  uStack_78 = param_5;
  uStack_70 = param_3;
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_retain(param_9);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x000107c27d8c(uVar2,&puStack_c8);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_70);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_5);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 10912e328; end: 10912e927;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10912e328(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined **ppuStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x2020000000;
  _CACurrentMediaTime();
  lVar4 = *(long *)(param_2 + 0x20);
  lVar2 = lVar4;
  uStack_90 = param_1;
  func_0x00010bf8b6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  func_0x000109175b48(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf26820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release();
  if (lVar4 == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_10912e928;
    puStack_b8 = &UNK_110add780;
    uVar12 = *(undefined8 *)(param_2 + 0x58);
    _objc_retain(uVar12);
    uStack_b0 = uVar12;
    func_0x00010be10ca0(uVar3);
    _objc_release(uStack_b0);
  }
  else {
    uStack_f0 = 0;
    uStack_e0 = 0x2020000000;
    uStack_d8 = 0;
    uStack_120 = 0;
    uStack_110 = 0x3032000000;
    uStack_108 = 0x10912e934;
    uStack_100 = 0x10912e944;
    uStack_f8 = 0;
    puStack_118 = &uStack_120;
    puStack_e8 = &uStack_f0;
    _dispatch_group_create();
    _dispatch_group_enter();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_178 = 0xc2000000;
    pcStack_170 = FUN_10912e94c;
    puStack_168 = &UNK_110add7b0;
    uVar3 = *(undefined8 *)(param_2 + 0x58);
    _objc_retain(uVar3);
    uVar13 = *(undefined8 *)(param_2 + 0x28);
    uVar12 = *(undefined8 *)(param_2 + 0x20);
    uStack_138 = uVar3;
    _objc_retain(*(undefined8 *)(param_2 + 0x28));
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    uStack_160 = uVar12;
    uStack_158 = uVar13;
    _objc_retain(uVar3);
    uVar12 = *(undefined8 *)(param_2 + 0x38);
    uStack_150 = uVar3;
    _objc_retain(uVar12);
    uStack_148 = uVar12;
    puStack_130 = &uStack_120;
    puStack_128 = &uStack_f0;
    _objc_retain(lVar2);
    ppuVar5 = &puStack_180;
    lStack_140 = lVar2;
    _objc_retainBlock();
    puVar6 = PTR_PTR_1126b08b8;
    _objc_alloc(PTR_PTR_1126b08b8);
    func_0x00010c0295e0();
    puVar7 = PTR_PTR_1126b1060;
    _objc_alloc();
    puVar8 = PTR_PTR_1126b19f8;
    func_0x00010bf28e60();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032f60();
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126d4ee0;
    func_0x00010bf4c240(PTR_PTR_1126d4ee0);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_1a8 = puVar1;
    uStack_1a0 = 0xc2000000;
    pcStack_198 = FUN_10912ea0c;
    puStack_190 = &UNK_110880278;
    _objc_retain(ppuVar5);
    ppuStack_188 = ppuVar5;
    func_0x00010c13e480(puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    func_0x00010c09b220(*(undefined8 *)(param_2 + 0x20));
    func_0x00010c09aec0(*(undefined8 *)(param_2 + 0x20));
    if (*(char *)(param_2 + 0x60) == '\x01') {
      func_0x00010c09c500();
    }
    else {
      func_0x00010c09c4e0(*(undefined8 *)(param_2 + 0x20));
    }
    uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_112781ccc);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_230 = puVar1;
    uStack_228 = 0xc2000000;
    pcStack_220 = FUN_10912ea18;
    puStack_218 = &UNK_1108bcf40;
    uVar12 = *(undefined8 *)(param_2 + 0x58);
    puStack_210 = puVar8;
    _objc_retain(uVar12);
    puStack_1c0 = &uStack_f0;
    uVar14 = *(undefined8 *)(param_2 + 0x28);
    uVar13 = *(undefined8 *)(param_2 + 0x20);
    uStack_1c8 = uVar12;
    _objc_retain(*(undefined8 *)(param_2 + 0x28));
    puStack_1b8 = &uStack_a8;
    uVar12 = *(undefined8 *)(param_2 + 0x30);
    uStack_208 = uVar13;
    uStack_200 = uVar14;
    puStack_1f8 = puVar9;
    _objc_retain(uVar12);
    uVar13 = *(undefined8 *)(param_2 + 0x38);
    uStack_1f0 = uVar12;
    _objc_retain(uVar13);
    uVar14 = *(undefined8 *)(param_2 + 0x40);
    uStack_1e8 = uVar13;
    _objc_retain(uVar14);
    uVar12 = *(undefined8 *)(param_2 + 0x48);
    uStack_1e0 = uVar14;
    _objc_retain(uVar12);
    puStack_1b0 = &uStack_120;
    uStack_1d8 = uVar12;
    puStack_1d0 = puVar10;
    _objc_retain(puVar10);
    _objc_retain(puVar9);
    _objc_retain(puVar8);
    func_0x000107c27d98(lVar2,uVar3,&puStack_230);
    _objc_release(uVar3);
    _objc_release(puStack_1d0);
    _objc_release(uStack_1d8);
    _objc_release(uStack_1e0);
    _objc_release(uStack_1e8);
    _objc_release(uStack_1f0);
    _objc_release(puStack_1f8);
    _objc_release(uStack_200);
    _objc_release(uStack_1c8);
    _objc_release(puStack_210);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(ppuStack_188);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(ppuVar5);
    _objc_release(lStack_140);
    _objc_release(uStack_148);
    _objc_release(uStack_150);
    _objc_release(uStack_158);
    _objc_release(uStack_138);
    _objc_release(lVar2);
    __Block_object_dispose(&uStack_120,8);
    _objc_release(uStack_f8);
    __Block_object_dispose(&uStack_f0,8);
  }
  _objc_release(lVar4);
  puVar11 = &uStack_a8;
  __Block_object_dispose(puVar11,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_120,8);
  __Block_object_dispose(&uStack_f0,8);
  __Block_object_dispose(&uStack_a8,8);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010912e930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar11[4] + 0x10))();
  return;
}



/* Entry: 10912e928; end: 10912e94b;  */

void FUN_10912e928(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010912e930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10912e94c; end: 10912ea0b;  */

void FUN_10912e94c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if ((param_2 == 0) || (*(long *)(param_1 + 0x48) == 0)) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x18) = 1;
  }
  else {
    func_0x00010bfadea0(*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar2 = *(long *)(*(long *)(param_1 + 0x50) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09d160(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1afb40();
  _objc_release(uVar1);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10912ea0c; end: 10912ea17;  */

void FUN_10912ea0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010912ea14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10912ea18; end: 10912ec63;  */

void FUN_10912ea18(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    if (*(char *)(*(long *)(*(long *)(param_1 + 0x70) + 8) + 0x18) == '\x01') {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x78) + 8) + 0x18);
      puVar3 = *(undefined **)(param_1 + 0x38);
      func_0x00010bfb1920(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c081f00(*(undefined8 *)(param_1 + 0x28));
      func_0x00010be681e0(uVar9,uVar4);
      goto LAB_10912ec3c;
    }
    puVar7 = PTR_PTR_1126dd730;
    _objc_alloc(PTR_PTR_1126dd730);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfadea0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf85d80(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c09d160(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e3c0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c104360(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c0c4fc0();
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c135700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01c640(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar9);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bfb1920(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182f80(puVar7);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010bfb1920(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16bce0(puVar7);
    _objc_release(uVar4);
    func_0x00010c081f00(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c1b5480(puVar7);
    lVar1 = *(long *)(param_1 + 0x68);
    pcVar8 = *(code **)(lVar1 + 0x10);
    puVar2 = (undefined *)0x0;
    puVar3 = puVar7;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x68);
    puVar2 = *(undefined **)(param_1 + 0x20);
    func_0x00010c0dfd40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    pcVar8 = *(code **)(lVar1 + 0x10);
    puVar7 = (undefined *)0x0;
    puVar3 = puVar2;
  }
  (*pcVar8)(lVar1,puVar7,puVar2);
LAB_10912ec3c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10912ec64; end: 10912ed57; -[SCDynamicGeoFilter _onCacheMissWithContextData:CFTimeInterval:completion:contextFilterInput:isUnifiedCameraObject:userSession:displayName:bitmojiImageFetcher:bitmojiAvatarProvider:] */

void FUN_10912ec64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10912ed58;
  puStack_80 = &UNK_110add810;
  uStack_78 = param_5;
  uStack_70 = param_4;
  uStack_68 = param_6;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be10ca0(param_1,param_2,&puStack_98,param_3,param_7,param_8,param_9,param_10);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release(param_5);
  return;
}



/* Entry: 10912ed58; end: 10912edcf;  */

void FUN_10912ed58(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c182f80(param_2);
  func_0x00010c1b5480(param_2);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10912edd0; end: 10912f21b; -[SCDynamicGeoFilter _fetchDataAndRenderImageWithCompletion:contextData:userSession:displayName:bitmojiImageFetcher:bitmojiAvatarProvider:] */

void FUN_10912edd0(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = param_1;
  func_0x00010bfe8f60();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  uStack_80 = 0x10912e934;
  uStack_78 = 0x10912e944;
  uStack_70 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x3032000000;
  uStack_b0 = 0x10912e934;
  uStack_a8 = 0x10912e944;
  uStack_a0 = 0;
  puVar2 = puVar1;
  _dispatch_group_create();
  _dispatch_group_enter();
  puVar3 = param_1;
  func_0x00010c06d3a0();
  if ((int)puVar3 == 0) {
    puVar3 = PTR_PTR_1126b1058;
    _objc_alloc(PTR_PTR_1126b1058);
    puVar4 = param_1;
    func_0x00010bfadea0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0b720(param_1);
    func_0x00010c01b360(puVar3);
    _objc_release(puVar4);
    func_0x000107c3121c();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bcff0);
    puVar5 = puVar4;
    func_0x00010beecc40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar5;
    func_0x00010bfe63a0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = param_1;
    func_0x00010bfe8f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_10912f2ac;
    puStack_120 = &UNK_110add880;
    puStack_110 = &uStack_c8;
    puStack_108 = &uStack_98;
    _objc_retain(puVar2);
    puStack_118 = puVar2;
    func_0x00010bf0b720(param_1);
    func_0x00010bfa6960(puVar6);
    _objc_release(puVar4);
    _objc_release(puStack_118);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  else {
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_10912f21c;
    puStack_e8 = &UNK_110a06af0;
    puStack_d8 = &uStack_c8;
    puStack_d0 = &uStack_98;
    _objc_retain(puVar2);
    puStack_e0 = puVar2;
    func_0x00010bfa54c0(param_1);
    puVar3 = puStack_e0;
  }
  _objc_release(puVar3);
  puVar3 = param_1;
  _objc_opt_class(param_1);
  func_0x00010beb20a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_10912f334;
  puStack_178 = &UNK_110add930;
  puStack_148 = &uStack_98;
  puStack_140 = &uStack_c8;
  puStack_170 = param_1;
  uStack_168 = param_4;
  uStack_160 = param_6;
  uStack_158 = param_5;
  uStack_150 = param_3;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000107c27d98(puVar2,puVar4,&puStack_190);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uStack_158);
  _objc_release(uStack_160);
  _objc_release(uStack_168);
  _objc_release(uStack_150);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_c8,8);
  _objc_release(uStack_a0);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 10912f21c; end: 10912f2a3;  */

void FUN_10912f21c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar3 = 0x30;
  lVar1 = param_2;
  if (param_3 != 0) {
    lVar3 = 0x28;
    lVar1 = param_3;
  }
  lVar3 = *(long *)(*(long *)(param_1 + lVar3) + 8);
  _objc_retain(lVar1);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10912f2a4; end: 10912f2ab;  */

void FUN_10912f2a4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc1370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_geoFilterURLDataFetching_1125cde80);
  return;
}



/* Entry: 10912f2ac; end: 10912f333;  */

void FUN_10912f2ac(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar3 = 0x30;
  lVar1 = param_2;
  if (param_4 != 0) {
    lVar3 = 0x28;
    lVar1 = param_4;
  }
  lVar3 = *(long *)(*(long *)(param_1 + lVar3) + 8);
  _objc_retain(lVar1);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10912f334; end: 10912f99f;  */

void FUN_10912f334(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,code *UNRECOVERED_JUMPTABLE)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_198 [256];
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar14 = *(undefined ***)(*(long *)(*(long *)(param_3 + 0x48) + 8) + 0x28);
  if ((ppuVar14 == (undefined **)0x0) ||
     (*(long *)(*(long *)(*(long *)(param_3 + 0x50) + 8) + 0x28) != 0)) {
    puVar1 = *(undefined **)(param_3 + 0x40);
    if (puVar1 != (undefined *)0x0) {
      ppuVar14 = *(undefined ***)(*(long *)(*(long *)(param_3 + 0x50) + 8) + 0x28);
      UNRECOVERED_JUMPTABLE = *(code **)(puVar1 + 0x10);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
                    /* WARNING: Could not recover jumptable at 0x00010912f3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(puVar1,0);
        return;
      }
      goto LAB_10912f99c;
    }
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    plStack_1d0 = (long *)0x0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    lVar6 = *(long *)(param_3 + 0x20);
    func_0x00010bf8ba40();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar6;
    func_0x00010bf52a60();
    if (lVar18 != 0) {
      lVar19 = *plStack_1d0;
      do {
        lVar15 = 0;
        do {
          if (*plStack_1d0 != lVar19) {
            _objc_enumerationMutation(lVar6);
          }
          uVar20 = *(ulong *)(lStack_1d8 + lVar15 * 8);
          puVar7 = PTR_PTR_1126d9130;
          _objc_opt_class(PTR_PTR_1126d9130);
          uVar8 = uVar20;
          _objc_opt_isKindOfClass(uVar20,puVar7);
          if ((uVar8 & 1) == 0) {
            func_0x00010befa120(puVar1);
          }
          else {
            _objc_retain(uVar20);
            uVar8 = uVar20;
            func_0x00010bfabc80();
            if ((uVar8 & 1) == 0) {
              func_0x00010befa120(puVar1);
            }
            else {
              puVar7 = PTR_PTR_1126dd738;
              func_0x00010bf24ac0();
              _objc_retainAutoreleasedReturnValue();
              if (puVar7 == (undefined *)0x0) {
                func_0x00010befa120(puVar1);
              }
              else {
                puVar9 = PTR_PTR_1126dd738;
                _objc_alloc(PTR_PTR_1126dd738);
                func_0x00010c0519e0();
                puVar16 = puVar5;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (puVar16 == (undefined *)0x0) {
                  func_0x00010c1d0640(puVar5);
                }
                else {
                  puVar16 = puVar9;
                  func_0x00010bf24aa0(puVar9);
                  _objc_retainAutoreleasedReturnValue();
                  puVar10 = puVar5;
                  func_0x00010c0e00e0(puVar5);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0cad40();
                  _objc_release(puVar10);
                  _objc_release(puVar16);
                }
                _objc_release(puVar9);
              }
              _objc_release(puVar7);
            }
            _objc_release(uVar20);
          }
          lVar15 = lVar15 + 1;
        } while (lVar18 != lVar15);
        lVar18 = lVar6;
        func_0x00010bf52a60();
      } while (lVar18 != 0);
    }
    _objc_release(lVar6);
    puVar7 = puVar5;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1);
    _objc_release();
    _dispatch_group_create();
    lStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    plStack_210 = (long *)0x0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    _objc_retain(puVar1);
    UNRECOVERED_JUMPTABLE = (code *)auStack_198;
    puVar9 = puVar1;
    func_0x00010bf52a60();
    if (puVar9 != (undefined *)0x0) {
      lVar18 = *plStack_210;
      do {
        puVar16 = (undefined *)0x0;
        do {
          if (*plStack_210 != lVar18) {
            _objc_enumerationMutation(puVar1);
          }
          uVar21 = *(undefined8 *)(lStack_218 + (long)puVar16 * 8);
          _dispatch_group_enter(puVar7);
          uVar22 = func_0x00010c23d0a0(puVar2);
          puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_260 = 0xc2000000;
          pcStack_258 = FUN_10912f9a0;
          puStack_250 = &UNK_110add8b0;
          uStack_248 = *(undefined8 *)(param_3 + 0x20);
          _objc_retain(puVar3);
          puStack_240 = puVar3;
          _objc_retain(puVar4);
          uStack_228 = *(undefined8 *)(param_3 + 0x50);
          puStack_238 = puVar4;
          _objc_retain(puVar7);
          uVar11 = *(undefined8 *)(param_3 + 0x20);
          puStack_230 = puVar7;
          _objc_opt_class(uVar11);
          func_0x00010beb20a0();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar11;
          func_0x00010c11de00();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = *(undefined8 *)(param_3 + 0x20);
          func_0x00010bf8b6c0(uVar17);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfcb820(uVar22,param_2,uVar21);
          _objc_release(uVar17);
          _objc_release(uVar13);
          _objc_release(uVar11);
          _objc_release(puStack_230);
          _objc_release(puStack_238);
          _objc_release(puStack_240);
          puVar16 = puVar16 + 1;
        } while (puVar9 != puVar16);
        UNRECOVERED_JUMPTABLE = (code *)auStack_198;
        puVar9 = puVar1;
        func_0x00010bf52a60();
      } while (puVar9 != (undefined *)0x0);
    }
    _objc_release(puVar1);
    lVar6 = *(long *)(param_3 + 0x20);
    _objc_opt_class();
    func_0x00010beb20a0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar6;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_2d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2d0 = 0xc2000000;
    pcStack_2c8 = FUN_10912fa98;
    puStack_2c0 = &UNK_110add900;
    uVar13 = *(undefined8 *)(param_3 + 0x40);
    _objc_retain(uVar13);
    uStack_2b8 = *(undefined8 *)(param_3 + 0x20);
    uVar17 = *(undefined8 *)(param_3 + 0x28);
    auVar23 = NEON_ext(*(undefined1 (*) [16])(param_3 + 0x48),*(undefined1 (*) [16])(param_3 + 0x48)
                       ,8,1);
    uStack_270 = auVar23._8_8_;
    uStack_278 = auVar23._0_8_;
    puStack_2b0 = puVar2;
    puStack_2a8 = puVar3;
    puStack_2a0 = puVar4;
    uStack_280 = uVar13;
    _objc_retain(uVar17);
    uVar13 = *(undefined8 *)(param_3 + 0x38);
    uStack_298 = uVar17;
    _objc_retain(uVar13);
    uVar17 = *(undefined8 *)(param_3 + 0x30);
    uStack_290 = uVar13;
    _objc_retain(uVar17);
    uStack_288 = uVar17;
    _objc_retain(puVar4);
    _objc_retain(puVar3);
    _objc_retain(puVar2);
    ppuVar14 = &puStack_2d8;
    param_4 = lVar18;
    func_0x000107c27d98(puVar7);
    _objc_release(lVar18);
    _objc_release(lVar6);
    _objc_release(uStack_288);
    _objc_release(uStack_290);
    _objc_release(uStack_298);
    _objc_release(puStack_2a0);
    _objc_release(puStack_2a8);
    _objc_release(puStack_2b0);
    _objc_release(uStack_280);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
LAB_10912f99c:
  ___stack_chk_fail();
  _objc_retain(param_4);
  _objc_retain(ppuVar14);
  _objc_retain(UNRECOVERED_JUMPTABLE);
  uVar17 = *(undefined8 *)(puVar1 + 0x20);
  _objc_retain(uVar17);
  _objc_sync_enter(uVar17);
  if ((param_4 == 0) || (lVar18 = param_4, func_0x00010bf529e0(), lVar18 == 0)) {
    lVar18 = *(long *)(*(long *)(puVar1 + 0x40) + 8);
    _objc_retain(UNRECOVERED_JUMPTABLE);
    uVar13 = *(undefined8 *)(lVar18 + 0x28);
    *(code **)(lVar18 + 0x28) = UNRECOVERED_JUMPTABLE;
    _objc_release(uVar13);
  }
  else {
    func_0x00010bef7f60(*(undefined8 *)(puVar1 + 0x28));
    ppuVar12 = ppuVar14;
    func_0x00010bf529e0();
    if (ppuVar12 != (undefined **)0x0) {
      func_0x00010bef7f60(*(undefined8 *)(puVar1 + 0x30));
    }
  }
  _objc_sync_exit(uVar17);
  _objc_release(uVar17);
  _dispatch_group_leave(*(undefined8 *)(puVar1 + 0x38));
  _objc_release(UNRECOVERED_JUMPTABLE);
  _objc_release(ppuVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10912f9a0; end: 10912fa97;  */

void FUN_10912f9a0(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  _objc_sync_enter(uVar2);
  if ((param_2 == 0) || (lVar3 = param_2, func_0x00010bf529e0(), lVar3 == 0)) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = param_4;
    _objc_release(uVar1);
  }
  else {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x28));
    lVar3 = param_3;
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x30));
    }
  }
  _objc_sync_exit(uVar2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10912fa98; end: 10912fd6b;  */

void FUN_10912fa98(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  code *pcVar10;
  undefined *puVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x28) != 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010912fb18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar1 + 0x10))(lVar1,0);
        return;
      }
      goto LAB_10912fd68;
    }
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010bf45440(lVar1,param_2,*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x28),
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      _objc_opt_class(uVar2);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00e2e0(puVar8);
      _objc_release(puVar11);
      _objc_release(uVar2);
      lVar6 = *(long *)(param_1 + 0x58);
      pcVar10 = *(code **)(lVar6 + 0x10);
      lVar7 = 0;
      puVar11 = puVar8;
    }
    else {
      puVar11 = *(undefined **)(param_1 + 0x20);
      puVar8 = puVar11;
      func_0x00010bf8b6c0(puVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      func_0x000109175b48(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf26820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(puVar8);
      if (puVar11 != (undefined *)0x0) {
        puVar3 = PTR_PTR_1126b08b8;
        _objc_alloc(PTR_PTR_1126b08b8);
        func_0x00010c0295e0();
        puVar4 = PTR_PTR_1126d4ee0;
        func_0x00010bf4c240(PTR_PTR_1126d4ee0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar1;
        func_0x00010bfe7300(lVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf0b720(*(undefined8 *)(param_1 + 0x20));
        func_0x00010bf65600(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14a860(puVar5);
        _objc_release(puVar8);
        _objc_release(lVar7);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
      }
      lVar6 = *(long *)(param_1 + 0x58);
      pcVar10 = *(code **)(lVar6 + 0x10);
      puVar8 = (undefined *)0x0;
      lVar7 = lVar1;
    }
    (*pcVar10)(lVar6,lVar7,puVar8);
    _objc_release(puVar11);
    _objc_release(lVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
LAB_10912fd68:
  ___stack_chk_fail();
  return;
}



/* Entry: 10912fd6c; end: 10912fd6f;  */

void FUN_10912fd6c(void)

{
  return;
}



/* Entry: 10912fd70; end: 1091304eb; -[SCDynamicGeoFilter compositeGeoFilterImageWithBackgroundImage:backgroundImageData:andResourceImages:andResourceRevisedLayouts:] */

void FUN_10912fd70(double param_1,double param_2,double param_3,double param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,undefined *param_8,undefined8 param_9,
                  undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  long lVar15;
  double dVar16;
  long lVar17;
  double dVar18;
  undefined *puStack_138;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  double dStack_a8;
  double dStack_a0;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _CACurrentMediaTime();
  dVar12 = param_1;
  func_0x00010c23d0a0(param_7);
  dVar14 = dVar12;
  func_0x00010c23d0a0(param_7);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar16 = param_2;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar18 = param_4;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  dVar13 = dVar14;
  func_0x00010c14e120(param_7);
  dVar14 = dVar14 / dVar13;
  param_3 = param_3 * dVar14;
  param_4 = param_4 * dVar14;
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c23d0a0(param_7);
  if ((dVar14 <= param_3) && (func_0x00010c23d0a0(param_7), dVar16 <= param_4)) {
    lVar15 = 0;
    lVar17 = 0;
    goto LAB_10912fed0;
  }
  func_0x00010c23d0a0(param_7);
  dVar12 = 0.0;
  if (dVar14 != 0.0) {
    if (dVar16 == 0.0) {
LAB_10912fe90:
      param_4 = 0.0;
      dVar12 = param_3;
    }
    else {
      dVar14 = dVar14 / dVar16;
      if (dVar14 != 0.0) {
        if (dVar14 == INFINITY) goto LAB_10912fe90;
        dVar12 = param_4 * dVar14;
        if (param_3 <= param_4 * dVar14) {
          param_4 = param_3 / dVar14;
          dVar12 = param_3;
        }
      }
    }
  }
  lVar15 = (long)dVar12;
  lVar17 = (long)param_4;
  func_0x000107c308a4();
  param_2 = dVar18;
LAB_10912fed0:
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar3 = param_5;
  func_0x00010bf8ba40(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf529e0();
  func_0x00010bf0a0e0(puVar1,param_6,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
  _objc_alloc_init();
  func_0x00010c14e120(param_7);
  func_0x00010c1f5fe0(puVar2);
  puVar5 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc();
  func_0x00010bff9540(lVar15,lVar17,dVar12,param_2);
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  dVar14 = 1.60807493534087e-314;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x10913022c;
  puStack_e8 = &UNK_110add960;
  uStack_e0 = param_5;
  _objc_retain(param_7);
  uStack_d8 = param_7;
  lStack_b8 = lVar15;
  lStack_b0 = lVar17;
  dStack_a8 = dVar12;
  dStack_a0 = param_2;
  _objc_retain(puVar1);
  puStack_d0 = puVar1;
  _objc_retain(param_9);
  uStack_c8 = param_9;
  _objc_retain(param_10);
  puStack_138 = puVar5;
  uStack_c0 = param_10;
  func_0x00010bdc1e00(puVar5,param_6,&puStack_100);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_138 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = puVar1;
    func_0x00010bf446e0(puVar1,param_6,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x00010c09d160(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1930c0();
    _objc_release(uVar3);
    _objc_release(puVar10);
    uVar3 = param_5;
    func_0x00010c2306a0();
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_8);
      puVar11 = puStack_138;
      puStack_138 = param_8;
    }
    else {
      puVar11 = (undefined *)0x0;
    }
    _CACurrentMediaTime();
    uVar3 = param_5;
    func_0x00010c09d160(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1805e0(dVar14 - param_1);
    _objc_release(uVar3);
    puVar10 = PTR_PTR_1126dd730;
    _objc_alloc();
    uVar3 = param_5;
    func_0x00010bfadea0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010bf85d80(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_5;
    func_0x00010c09d160(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_5;
    func_0x00010c14e3c0(param_5);
    uVar8 = param_5;
    func_0x00010c104360(param_5);
    uVar9 = param_5;
    func_0x00010c0c4fc0();
    func_0x00010c135700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01c640(puVar10,param_6,puStack_138,uVar3,uVar4,uVar6,uVar7,uVar8,uVar9,param_5);
    _objc_release(param_5);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010c193180(puVar10,param_6,puVar11);
    _objc_release(puVar11);
    _objc_release(puStack_138);
  }
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(puStack_d0);
  _objc_release(uStack_d8);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1091304ec; end: 109130503; -[SCDynamicGeoFilter shouldFlattenImageLayers] */

uint FUN_1091304ec(uint param_1)

{
  func_0x00010c06c000();
  return param_1 ^ 1;
}



/* Entry: 109130504; end: 10913050b; -[SCDynamicGeoFilter geofilterMissLoggingType] */

undefined8 FUN_109130504(void)

{
  return 1;
}



/* Entry: 10913050c; end: 10913081f; -[SCDynamicGeoFilter unhashedCacheKeyForCompositedImageWithContextData:dynamicContextProperties:userName:displayName:] */

void FUN_10913050c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar1 = param_1;
  func_0x00010bfadea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a100(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfe8f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  _objc_release();
  if (lVar1 != 0) {
    func_0x000107c3121c();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bcff0);
    lVar1 = lVar3;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar1;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010bfe8f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010bfe8f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf26980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar3);
    if (lVar5 != 0) {
      func_0x00010befa120(puVar2);
    }
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
  }
  lVar4 = param_1;
  func_0x00010bf8ba40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  do {
    if (lVar1 == 0) {
      _objc_release(lVar4);
      puVar8 = puVar2;
      func_0x00010bf446e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
LAB_1091307c0:
      _objc_release(puVar2);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfc1370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_geoFilterURLDataFetching_1125cde80);
      return;
    }
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar4);
      }
      lVar9 = *(long *)(lVar7 * 8);
      lVar5 = param_1;
      func_0x00010bf8b6c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12f7a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      if (lVar9 == 0) {
        _objc_release(lVar4);
        puVar8 = (undefined *)0x0;
        goto LAB_1091307c0;
      }
      func_0x00010befa120(puVar2);
      _objc_release(lVar9);
      lVar7 = lVar7 + 1;
    } while (lVar1 != lVar7);
    lVar1 = lVar4;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 109130820; end: 109130827;  */

void FUN_109130820(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc1370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_geoFilterURLDataFetching_1125cde80);
  return;
}



/* Entry: 109130828; end: 1091308f7; -[SCDynamicGeoFilter cacheKeyForCompositedImageWithContextData:dynamicContextProperties:userName:displayName:] */

void FUN_109130828(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010c06c000();
  if ((uVar1 & 1) == 0) {
    func_0x00010c27fba0(param_1,param_2,param_3,param_4,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bdc1b20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    uVar1 = 0;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091308f8; end: 109130907; -[SCDynamicGeoFilter dynamicResources] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1091308f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781cc8);
}



/* Entry: 109130908; end: 109130913; -[SCDynamicGeoFilter setDynamicResources:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109130908(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 109130914; end: 109130953; -[SCDynamicGeoFilter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109130914(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112781cc8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112781ccc,0);
  return;
}



/* Entry: 109130954; end: 109130bcb; -[SCDynamicGeoFilterBundle initWithTextResouce:] */

undefined8 * FUN_109130954(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *unaff_x21;
  undefined8 *puVar11;
  undefined8 *unaff_x22;
  undefined8 *puVar12;
  undefined **unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  ulong uVar13;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  bool bVar14;
  long unaff_x28;
  undefined *puStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_1c0;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined **ppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = param_3;
  _objc_retain(param_3);
  puStack_f8 = PTR_PTR_1127007b0;
  puVar12 = &uStack_100;
  puVar5 = (undefined8 *)PTR_s_init_1125d9248;
  uStack_100 = param_1;
  _objc_msgSendSuper2(puVar12,PTR_s_init_1125d9248);
  puVar9 = puVar12;
  if (puVar12 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar12[1];
    puVar12[1] = puVar1;
    _objc_release(uVar7);
    puVar1 = PTR_PTR_1126dd738;
    ppuVar2 = param_3;
    func_0x00010bf24ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar12[2];
    puVar12[2] = puVar1;
    _objc_release(uVar7);
    puVar11 = (undefined8 *)PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (puVar12[2] == 0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      unaff_x23 = param_3;
      func_0x00010c247520();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf44780();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(unaff_x23);
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      puStack_140 = (undefined *)0x0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      unaff_x22 = puVar11;
      puStack_148 = puVar11;
      func_0x00010c11d4e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = &puStack_140;
      puVar8 = unaff_x22;
      func_0x00010bf52a60();
      if (puVar8 != (undefined8 *)0x0) {
        unaff_x28 = *plStack_130;
        unaff_x23 = &PTR____CFConstantStringClassReference_110f14958;
        do {
          puVar11 = (undefined8 *)0x0;
          do {
            if (*plStack_130 != unaff_x28) {
              _objc_enumerationMutation(unaff_x22);
            }
            unaff_x25 = *(undefined8 *)(lStack_138 + (long)puVar11 * 8);
            unaff_x26 = unaff_x25;
            func_0x00010c0d4f60();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = unaff_x26;
            func_0x00010c0720c0();
            _objc_release(unaff_x26);
            if ((int)unaff_x27 != 0) {
              unaff_x26 = puVar12[1];
              func_0x00010c296d80();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(unaff_x26);
              _objc_release(unaff_x25);
            }
            puVar11 = (undefined8 *)((long)puVar11 + 1);
          } while (puVar8 != puVar11);
          ppuVar2 = &puStack_140;
          puVar8 = unaff_x22;
          func_0x00010bf52a60();
          unaff_x24 = 0;
        } while (puVar8 != (undefined8 *)0x0);
      }
      _objc_release(unaff_x22);
      puVar12 = puStack_148;
      unaff_x21 = puVar11;
    }
    _objc_release(puVar12);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar9;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  pcStack_158 = FUN_109130bcc;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1b0 = unaff_x28;
  uStack_1a8 = unaff_x27;
  uStack_1a0 = unaff_x26;
  uStack_198 = unaff_x25;
  uStack_190 = unaff_x24;
  ppuStack_188 = unaff_x23;
  puStack_180 = unaff_x22;
  puStack_178 = unaff_x21;
  puStack_170 = puVar9;
  ppuStack_168 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar2;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  if (puVar1 == (undefined *)0x0) {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    puVar9 = (undefined8 *)PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x00010bf44780();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_278 = 0;
    puStack_280 = (undefined *)0x0;
    uStack_268 = 0;
    plStack_270 = (long *)0x0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    puVar12 = puVar9;
    func_0x00010c11d4e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &puStack_280;
    puVar11 = puVar12;
    func_0x00010bf52a60();
    if (puVar11 == (undefined8 *)0x0) {
      _objc_release(puVar12);
      puVar12 = (undefined8 *)0x0;
    }
    else {
      bVar14 = false;
      lVar10 = *plStack_270;
      do {
        puVar8 = (undefined8 *)0x0;
        do {
          if (*plStack_270 != lVar10) {
            _objc_enumerationMutation(puVar12);
          }
          uVar13 = *(ulong *)(lStack_278 + (long)puVar8 * 8);
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar13;
          func_0x00010c0720c0();
          _objc_release(uVar13);
          if ((uVar3 & 1) == 0) {
            func_0x00010befa120(ppuVar2);
          }
          else {
            bVar14 = true;
          }
          puVar8 = (undefined8 *)((long)puVar8 + 1);
        } while (puVar11 != puVar8);
        ppuVar6 = &puStack_280;
        puVar11 = puVar12;
        func_0x00010bf52a60();
      } while (puVar11 != (undefined8 *)0x0);
      _objc_release(puVar12);
      if (bVar14) {
        ppuVar4 = ppuVar2;
        func_0x00010c246ca0(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar4;
        func_0x00010c1e6460(puVar9);
        _objc_release(ppuVar4);
        puVar12 = puVar9;
        func_0x00010c25cd40();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar12 = (undefined8 *)0x0;
      }
    }
    _objc_release(ppuVar2);
    _objc_release(puVar9);
  }
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return puVar12;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar6);
  func_0x00010c0d4f60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar6;
  func_0x00010c0d4f60(ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  puVar12 = puVar5;
  func_0x00010bf433a0(puVar5);
  _objc_release(ppuVar2);
  _objc_release(puVar5);
  return puVar12;
}



/* Entry: 109130bcc; end: 109130e23; +[SCDynamicGeoFilterBundle bundleKeyWithTextResource:] */

undefined * FUN_109130bcc(undefined8 param_1,undefined *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  bool bVar12;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_3;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (puVar1 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x00010bf44780();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
    puVar10 = puVar2;
    func_0x00010c11d4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = &uStack_130;
    puVar4 = puVar10;
    func_0x00010bf52a60();
    if (puVar4 == (undefined *)0x0) {
      _objc_release(puVar10);
      puVar10 = (undefined *)0x0;
    }
    else {
      bVar12 = false;
      lVar9 = *plStack_120;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(puVar10);
          }
          uVar11 = *(ulong *)(lStack_128 + (long)puVar8 * 8);
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar11;
          func_0x00010c0720c0();
          _objc_release(uVar11);
          if ((uVar5 & 1) == 0) {
            func_0x00010befa120(puVar3);
          }
          else {
            bVar12 = true;
          }
          puVar8 = puVar8 + 1;
        } while (puVar4 != puVar8);
        puVar7 = &uStack_130;
        puVar4 = puVar10;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
      _objc_release(puVar10);
      if (bVar12) {
        puVar6 = puVar3;
        func_0x00010c246ca0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c1e6460(puVar2);
        _objc_release(puVar6);
        puVar10 = puVar2;
        func_0x00010c25cd40();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar10 = (undefined *)0x0;
      }
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return puVar10;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  func_0x00010c0d4f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar7;
  func_0x00010c0d4f60(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar1 = param_2;
  func_0x00010bf433a0(param_2);
  _objc_release(puVar3);
  _objc_release(param_2);
  return puVar1;
}



/* Entry: 109130e24; end: 109130ea7;  */

undefined8 FUN_109130e24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c0d4f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0d4f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_2;
  func_0x00010bf433a0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 109130ea8; end: 109130f2b; -[SCDynamicGeoFilterBundle mergeWithBundle:] */

undefined8 FUN_109130ea8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bf24aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0720c0();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      func_0x00010bef7f60(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_3 + 8));
      uVar3 = 1;
      goto LAB_109130f10;
    }
  }
  uVar3 = 0;
LAB_109130f10:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 109130f2c; end: 10913135f; -[SCDynamicGeoFilterBundle getUIImagesWithCanvasSize:completion:performerQueue:contextData:dynamicContextProperties:displayName:] */

void FUN_109130f2c(undefined8 param_1,undefined8 param_2,long param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined **unaff_x28;
  long lVar8;
  double dVar9;
  double dVar10;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [8];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = *(long *)(param_3 + 8);
  func_0x00010bf529e0();
  if (lVar1 == 1) {
    uVar2 = *(undefined8 *)(param_3 + 8);
    func_0x00010bf00d20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010bfcb820(param_1,param_2,uVar7);
    _objc_release(uVar7);
  }
  else {
    dVar9 = 0.0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    lVar3 = *(long *)(param_3 + 8);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf52a60();
    if (lVar1 == 0) {
      dVar10 = 259200.0;
    }
    else {
      lVar8 = *plStack_140;
      dVar10 = 259200.0;
      do {
        lVar6 = 0;
        do {
          if (*plStack_140 != lVar8) {
            _objc_enumerationMutation(lVar3);
          }
          uVar7 = *(undefined8 *)(lStack_148 + lVar6 * 8);
          if ((dVar10 == 0.0) || (func_0x00010c0cd920(uVar7), dVar9 < dVar10)) {
            func_0x00010c0cd920(uVar7);
            dVar10 = dVar9;
          }
          lVar6 = lVar6 + 1;
        } while (lVar1 != lVar6);
        lVar1 = lVar3;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(lVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bdd7040();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x000107c3121c();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bcff0);
    lVar8 = lVar3;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar8;
    func_0x00010bfe63a0(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_initWeak(auStack_158,param_3);
    puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1c8 = 0xc2000000;
    pcStack_1c0 = FUN_109131368;
    puStack_1b8 = &UNK_110adda20;
    unaff_x28 = &puStack_1d0;
    param_4 = auStack_158;
    _objc_copyWeak(auStack_170,param_4);
    lStack_1b0 = param_3;
    uStack_168 = param_1;
    uStack_160 = param_2;
    _objc_retain(puVar4);
    puStack_1a8 = puVar4;
    _objc_retain(puVar5);
    puStack_1a0 = puVar5;
    _objc_retain(param_6);
    uStack_198 = param_6;
    _objc_retain(param_7);
    uStack_190 = param_7;
    _objc_retain(param_8);
    uStack_188 = param_8;
    _objc_retain(param_9);
    uStack_180 = param_9;
    _objc_retain(param_5);
    uStack_178 = param_5;
    func_0x00010bfa6940(dVar10,lVar6);
    _objc_release(uStack_178);
    _objc_release(uStack_180);
    _objc_release(uStack_188);
    _objc_release(uStack_190);
    _objc_release(uStack_198);
    _objc_release(puStack_1a0);
    _objc_release(puStack_1a8);
    _objc_destroyWeak(auStack_170);
    _objc_destroyWeak(auStack_158);
    _objc_release(lVar6);
    _objc_release(lVar8);
    _objc_release(lVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x28 + 0xc);
  _objc_destroyWeak(auStack_158);
  __Unwind_Resume(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bfc1370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_4,PTR_s_geoFilterURLDataFetching_1125cde80);
  return;
}



/* Entry: 109131360; end: 109131367;  */

void FUN_109131360(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc1370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_geoFilterURLDataFetching_1125cde80);
  return;
}



/* Entry: 109131368; end: 109131783;  */

void FUN_109131368(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar7 = param_1 + 0x60;
  _objc_loadWeakRetained();
  if (lVar7 != 0) {
    if (param_4 == 0) {
      lStack_108 = 0;
      puStack_218 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bdc1900();
      _objc_retainAutoreleasedReturnValue();
      param_4 = lStack_108;
      lVar1 = lStack_108;
      _objc_retain();
    }
    else {
      puStack_218 = (undefined *)0x0;
      lVar1 = lVar7;
    }
    puStack_130 = &uStack_138;
    uStack_138 = 0;
    uStack_128 = 0x3032000000;
    pcStack_120 = FUN_109131784;
    uStack_118 = 0x109131794;
    uStack_110 = 0;
    _dispatch_group_create();
    puVar2 = PTR_PTR_1126bad10;
    _objc_opt_new();
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    plStack_170 = (long *)0x0;
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar11 = *plStack_170;
      do {
        lVar10 = 0;
        do {
          if (*plStack_170 != lVar11) {
            _objc_enumerationMutation(lVar3);
          }
          uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
          func_0x00010c0e00e0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          _dispatch_group_enter(lVar1);
          puVar6 = puStack_218;
          func_0x00010c0e00e0(puStack_218);
          _objc_retainAutoreleasedReturnValue();
          puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1c8 = 0xc2000000;
          pcStack_1c0 = FUN_10913179c;
          puStack_1b8 = &UNK_110add9f0;
          _objc_copyWeak(auStack_188,param_1 + 0x60);
          _objc_retain(puVar2);
          puStack_190 = &uStack_138;
          uVar8 = *(undefined8 *)(param_1 + 0x28);
          puStack_1b0 = puVar2;
          _objc_retain(uVar8);
          uVar9 = *(undefined8 *)(param_1 + 0x30);
          uStack_1a8 = uVar8;
          _objc_retain(uVar9);
          uStack_1a0 = uVar9;
          _objc_retain(lVar1);
          lStack_198 = lVar1;
          func_0x00010bfcb840(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),uVar5)
          ;
          _objc_release(puVar6);
          _objc_release(lStack_198);
          _objc_release(uStack_1a0);
          _objc_release(uStack_1a8);
          _objc_release(puStack_1b0);
          _objc_destroyWeak(auStack_188);
          _objc_release(uVar5);
          lVar10 = lVar10 + 1;
        } while (lVar4 != lVar10);
        lVar4 = lVar3;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar3);
    uVar5 = 0x15;
    func_0x000107c312b8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_208 = 0xc2000000;
    pcStack_200 = FUN_1091318b0;
    puStack_1f8 = &UNK_110883410;
    puStack_1d8 = &uStack_138;
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    uStack_1e0 = uVar8;
    _objc_retain(uVar9);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    uStack_1f0 = uVar9;
    _objc_retain(uVar8);
    uStack_1e8 = uVar8;
    func_0x000107c27d98(lVar1,uVar5,&puStack_210);
    _objc_release(uVar5);
    _objc_release(uStack_1e8);
    _objc_release(uStack_1f0);
    _objc_release(uStack_1e0);
    _objc_release(puVar2);
    _objc_release(lVar1);
    __Block_object_dispose(&uStack_138,8);
    _objc_release(uStack_110);
    _objc_release(puStack_218);
  }
  _objc_release(lVar7);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = 8;
  __Block_object_dispose(&uStack_138);
  __Unwind_Resume();
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = 0;
  return;
}



/* Entry: 109131784; end: 10913179b;  */

void FUN_109131784(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10913179c; end: 1091318af;  */

void FUN_10913179c(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retainAutorelease(uVar2);
    func_0x00010bed1e80();
    _os_unfair_lock_lock();
    if (param_4 == 0) {
      if ((param_2 != 0) && (lVar4 = param_2, func_0x00010bf529e0(), lVar4 != 0)) {
        func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x28));
        lVar4 = param_3;
        func_0x00010bf529e0();
        if (lVar4 != 0) {
          func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x30));
        }
      }
    }
    else {
      lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      _objc_retain(param_4);
      uVar3 = *(undefined8 *)(lVar4 + 0x28);
      *(long *)(lVar4 + 0x28) = param_4;
      _objc_release(uVar3);
    }
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x38));
    _os_unfair_lock_unlock(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091318b0; end: 1091318df;  */

void FUN_1091318b0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001091318d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001091318dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28))
  ;
  return;
}



/* Entry: 1091318e0; end: 109131a9b; -[SCDynamicGeoFilterBundle _bundleUrl] */

void FUN_1091318e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf002e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
  func_0x00010c11d4c0(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0,param_2,
                      &PTR____CFConstantStringClassReference_110f14958,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
  func_0x00010c11d4c0(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0,param_2,
                      &PTR____CFConstantStringClassReference_110f22bf8,
                      &PTR____CFConstantStringClassReference_110e69858);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf44780(puVar6,param_2,puVar5,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar5 = puVar6;
  func_0x00010c11d4e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0(puVar7,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010befa120(puVar7,param_2,puVar3);
  func_0x00010befa120(puVar7,param_2,puVar4);
  func_0x00010c1e6460(puVar6,param_2,puVar7);
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar8 = puVar6;
  func_0x00010c25cd40(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar5,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 109131a9c; end: 109131aa3; -[SCDynamicGeoFilterBundle bundleKey] */

undefined8 FUN_109131a9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109131aa4; end: 109131ad3; -[SCDynamicGeoFilterBundle .cxx_destruct] */

void FUN_109131aa4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109131ad4; end: 109131cc7; -[SCDynamicGeoFilterImageResource getUIImagesWithCanvasSize:completion:contextData:dynamicContextProperties:] */

void FUN_109131ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_5;
  _objc_retain(param_5);
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bcff0);
  uVar2 = uVar1;
  func_0x00010beecc40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_68,param_1);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar1 = param_1;
  func_0x00010c247520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  func_0x00010c0cd920(param_1);
  func_0x00010bfa6940(uVar3);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 109131cc8; end: 109131ccf;  */

void FUN_109131cc8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc1370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_geoFilterURLDataFetching_1125cde80);
  return;
}



/* Entry: 109131cd0; end: 109131e23;  */

undefined1 * FUN_109131cd0(long param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == (undefined1 *)0x0) {
      param_3 = 0;
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,param_4);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14d040();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = *(long *)(param_1 + 0x20);
      lVar3 = lVar1;
      func_0x00010c13b320();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      lStack_68 = lVar3;
      puStack_60 = puVar2;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      param_3 = 0;
      (**(code **)(lVar8 + 0x10))(lVar8,puVar4,0,0);
      _objc_release(puVar4);
      _objc_release(lVar3);
      _objc_release(puVar2);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  puVar5 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar5;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_a0;
  pcStack_78 = FUN_109131e24;
  uStack_90 = param_4;
  puStack_88 = param_2;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  puStack_98 = PTR_PTR_1127007b8;
  puStack_a0 = puVar5;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
  if (ppuVar6 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar6 + 0x28),param_3);
    uVar7 = *(undefined8 *)((long)ppuVar6 + 8);
    *(undefined ***)((long)ppuVar6 + 8) = &PTR__OBJC_CLASS___NSConstantArray_111183818;
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)((long)ppuVar6 + 0x20);
    *(undefined ***)((long)ppuVar6 + 0x20) = &PTR____CFConstantStringClassReference_110db04f8;
    _objc_release(uVar7);
    func_0x00010be4e280(ppuVar6);
  }
  _objc_release(param_3);
  return (undefined1 *)ppuVar6;
}



/* Entry: 109131e24; end: 109131ebf; -[SCDynamicGeoFilterOffensiveWordStore initWithSimpleContentFetcher:] */

undefined1 * FUN_109131e24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127007b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined ***)((long)puVar1 + 8) = &PTR__OBJC_CLASS___NSConstantArray_111183818;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined ***)((long)puVar1 + 0x20) = &PTR____CFConstantStringClassReference_110db04f8;
    _objc_release(uVar2);
    func_0x00010be4e280(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109131ec0; end: 109131f9b; +[SCDynamicGeoFilterOffensiveWordStore sharedInstanceWithSimpleContentFetcher:] */

void FUN_109131ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_109131f9c;
  puStack_40 = &UNK_110842e18;
  _objc_retain(param_3);
  uStack_38 = param_3;
  if (lRam0000000113730ad8 != -1) {
    func_0x000107c27d9c(0x113730ad8,&puStack_58);
  }
  lVar1 = lRam0000000113730ad0;
  func_0x00010c23c760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c202a40(lRam0000000113730ad0);
  }
  lVar1 = lRam0000000113730ad0;
  _objc_retain(lRam0000000113730ad0);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 109131f9c; end: 109131fdb;  */

void FUN_109131f9c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d3fd0;
  _objc_alloc();
  func_0x00010c046820();
  uVar1 = puRam0000000113730ad0;
  puRam0000000113730ad0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109131fdc; end: 109131fe3; +[SCDynamicGeoFilterOffensiveWordStore sharedInstance] */

void FUN_109131fdc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22bb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_sharedInstanceWithSimpleContentF_1126688e8,0)
  ;
  return;
}



/* Entry: 109131fe4; end: 109132397; -[SCDynamicGeoFilterOffensiveWordStore offensiveWordInText:] */

undefined * FUN_109131fe4(undefined *param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  long lVar18;
  long lVar19;
  long lStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  long lStack_380;
  undefined1 *puStack_378;
  undefined1 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_360;
  long lStack_358;
  undefined8 *puStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 auStack_318 [128];
  long lStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined **ppuStack_270;
  undefined *puStack_268;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [128];
  long lStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined **ppuStack_168;
  undefined *puStack_160;
  undefined **ppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
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
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010c08fa60(param_3);
  ppuVar17 = param_3;
  func_0x00010c25cfe0(param_3,param_2,&PTR____CFConstantStringClassReference_110db2d98,
                      &PTR____CFConstantStringClassReference_110daafd8,2,0,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c087ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  uVar3 = *(ulong *)(param_1 + 8);
  func_0x00010bf4b900(uVar3,param_2,ppuVar2);
  ppuVar1 = ppuVar17;
  if ((uVar3 & 1) == 0) {
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    ppuVar4 = ppuVar17;
    func_0x00010bf64940(ppuVar17,param_2,1,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008340(ppuVar1,param_2,ppuVar4,1);
    _objc_release(ppuVar17);
    _objc_release(ppuVar4);
  }
  ppuVar17 = ppuVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar14 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar14);
  lVar5 = lVar14;
  func_0x00010bf52a60(lVar14,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar5 != 0) {
    lVar19 = *plStack_120;
    do {
      lVar18 = 0;
      ppuVar1 = ppuVar17;
      do {
        if (*plStack_120 != lVar19) {
          _objc_enumerationMutation(lVar14);
        }
        uVar16 = *(undefined8 *)(lStack_128 + lVar18 * 8);
        uVar6 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c0e00e0(uVar6,param_2,uVar16);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar1;
        func_0x00010c08fa60(ppuVar1);
        ppuVar17 = ppuVar1;
        func_0x00010c25cfe0(ppuVar1,param_2,uVar16,uVar6,2,0,ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar1);
        _objc_release(uVar6);
        lVar18 = lVar18 + 1;
        ppuVar1 = ppuVar17;
      } while (lVar5 != lVar18);
      lVar5 = lVar14;
      func_0x00010bf52a60(lVar14,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar5 != 0);
  }
  _objc_release(lVar14);
  puVar15 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c11bb40(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar17;
  func_0x00010bf44700(ppuVar17,param_2,puVar15);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar1;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar17);
  _objc_release(ppuVar1);
  _objc_release(puVar15);
  puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25cf20(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  puVar13 = param_1;
  puVar10 = puVar15;
  ppuVar4 = ppuVar2;
  func_0x00010be425e0();
  if (((ulong)puVar13 & 1) == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e7a838;
    puVar13 = param_1;
    puVar10 = puVar15;
    ppuVar4 = ppuVar1;
    func_0x00010be425e0();
    if (((ulong)puVar13 & 1) == 0) {
      ppuStack_138 = &PTR____CFConstantStringClassReference_110f22c18;
      ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      ppuStack_140 = ppuVar2;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110dae518);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = param_1;
      puVar10 = puVar15;
      ppuVar4 = ppuVar17;
      func_0x00010be425c0();
      if (((ulong)puVar13 & 1) == 0) {
        ppuStack_140 = &PTR____CFConstantStringClassReference_110e7a838;
        ppuStack_138 = &PTR____CFConstantStringClassReference_110f22c18;
        ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110dae518);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar15;
        ppuVar4 = ppuVar1;
        func_0x00010be425c0();
        _objc_release(ppuVar1);
      }
      else {
        param_1 = (undefined *)0x1;
      }
      _objc_release(ppuVar17);
      goto LAB_109132340;
    }
  }
  param_1 = (undefined *)0x1;
LAB_109132340:
  _objc_release(ppuVar2);
  _objc_release(puVar15);
  ppuVar7 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar11 = &uStack_250;
  pcStack_148 = FUN_109132398;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_180 = ppuVar1;
  ppuStack_178 = ppuVar17;
  puStack_170 = puVar15;
  ppuStack_168 = ppuVar2;
  puStack_160 = param_1;
  ppuStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  puStack_240 = (undefined8 *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  ppuVar7 = (undefined **)ppuVar7[3];
  func_0x00010c0e00e0(ppuVar7,param_2,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = auStack_208;
  ppuVar2 = ppuVar7;
  func_0x00010bf52a60();
  puVar13 = (undefined *)0x0;
  if (ppuVar2 != (undefined **)0x0) {
    puVar15 = (undefined *)*puStack_240;
    do {
      ppuVar17 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_240 != puVar15) {
          _objc_enumerationMutation(ppuVar7);
        }
        puVar11 = *(undefined8 **)(lStack_248 + (long)ppuVar17 * 8);
        puVar13 = puVar10;
        func_0x00010bf4bb00();
        if (((ulong)puVar13 & 1) != 0) {
          puVar13 = (undefined *)0x1;
          goto LAB_109132478;
        }
        ppuVar17 = (undefined **)((long)ppuVar17 + 1);
      } while (ppuVar2 != ppuVar17);
      puVar9 = auStack_208;
      ppuVar2 = ppuVar7;
      puVar11 = &uStack_250;
      func_0x00010bf52a60();
    } while (ppuVar2 != (undefined **)0x0);
    puVar13 = (undefined *)0x0;
  }
LAB_109132478:
  _objc_release(ppuVar7);
  puVar8 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return puVar13;
  }
  ___stack_chk_fail();
  puVar12 = &uStack_360;
  pcStack_258 = FUN_1091324c0;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_290 = ppuVar1;
  ppuStack_288 = ppuVar17;
  puStack_280 = puVar15;
  puStack_278 = puVar13;
  ppuStack_270 = ppuVar7;
  puStack_268 = puVar10;
  ppuStack_260 = &puStack_150;
  _objc_retain(puVar11);
  lStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  puStack_350 = (undefined8 *)0x0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  lVar14 = *(long *)(puVar8 + 0x18);
  func_0x00010c0e00e0(lVar14,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar14;
  func_0x00010bf52a60();
  puVar13 = (undefined *)0x0;
  if (lVar5 != 0) {
    puVar15 = (undefined *)*puStack_350;
    do {
      lVar19 = 0;
      do {
        if ((undefined *)*puStack_350 != puVar15) {
          _objc_enumerationMutation(lVar14);
        }
        puVar12 = *(undefined8 **)(lStack_358 + lVar19 * 8);
        puVar9 = (undefined1 *)puVar11;
        func_0x00010c0720c0(puVar11,param_2,puVar12);
        if (((ulong)puVar9 & 1) != 0) {
          puVar13 = (undefined *)0x1;
          goto LAB_1091325a0;
        }
        lVar19 = lVar19 + 1;
      } while (lVar5 != lVar19);
      lVar5 = lVar14;
      puVar12 = &uStack_360;
      func_0x00010bf52a60(lVar14,param_2,&uStack_360,auStack_318,0x10);
    } while (lVar5 != 0);
    puVar13 = (undefined *)0x0;
  }
LAB_1091325a0:
  _objc_release(lVar14);
  _objc_release(puVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return puVar13;
  }
  ___stack_chk_fail();
  pcStack_368 = FUN_1091325e8;
  puStack_390 = puVar15;
  puStack_388 = puVar13;
  lStack_380 = lVar14;
  puStack_378 = (undefined1 *)puVar11;
  pppuStack_370 = &ppuStack_260;
  _objc_retain(puVar12);
  lStack_398 = 0;
  puVar15 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar12,4,&lStack_398)
  ;
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lStack_398;
  _objc_retain(lStack_398);
  if (lVar5 == 0) {
    _objc_retain(puVar15);
    puVar13 = puVar15;
  }
  else {
    puVar13 = (undefined *)0x0;
  }
  _objc_release(puVar15);
  _objc_release(lVar5);
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return puVar13;
}



/* Entry: 109132398; end: 1091324bf; -[SCDynamicGeoFilterOffensiveWordStore _isOffensiveSubstringInNormalizedText:languageCode:] */

undefined * FUN_109132398(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long unaff_x22;
  long lVar9;
  long lStack_258;
  long lStack_250;
  undefined *puStack_248;
  long lStack_240;
  undefined1 *puStack_238;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [128];
  long lStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar6 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0e00e0(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = auStack_c8;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  puVar8 = (undefined *)0x0;
  if (lVar2 != 0) {
    unaff_x22 = *plStack_100;
    do {
      lVar9 = 0;
      do {
        if (*plStack_100 != unaff_x22) {
          _objc_enumerationMutation(lVar1);
        }
        puVar6 = *(undefined8 **)(lStack_108 + lVar9 * 8);
        uVar3 = param_3;
        func_0x00010bf4bb00();
        if ((uVar3 & 1) != 0) {
          puVar8 = (undefined *)0x1;
          goto LAB_109132478;
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      puVar4 = auStack_c8;
      lVar2 = lVar1;
      puVar6 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    puVar8 = (undefined *)0x0;
  }
LAB_109132478:
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar8;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_220;
  pcStack_118 = FUN_1091324c0;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lVar1 = *(long *)(param_3 + 0x18);
  func_0x00010c0e00e0(lVar1,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  puVar8 = (undefined *)0x0;
  if (lVar2 != 0) {
    unaff_x22 = *plStack_210;
    do {
      lVar9 = 0;
      do {
        if (*plStack_210 != unaff_x22) {
          _objc_enumerationMutation(lVar1);
        }
        puVar7 = *(undefined8 **)(lStack_218 + lVar9 * 8);
        puVar4 = (undefined1 *)puVar6;
        func_0x00010c0720c0(puVar6,param_2,puVar7);
        if (((ulong)puVar4 & 1) != 0) {
          puVar8 = (undefined *)0x1;
          goto LAB_1091325a0;
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar1;
      puVar7 = &uStack_220;
      func_0x00010bf52a60(lVar1,param_2,&uStack_220,auStack_1d8,0x10);
    } while (lVar2 != 0);
    puVar8 = (undefined *)0x0;
  }
LAB_1091325a0:
  _objc_release(lVar1);
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return puVar8;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_1091325e8;
  lStack_250 = unaff_x22;
  puStack_248 = puVar8;
  lStack_240 = lVar1;
  puStack_238 = (undefined1 *)puVar6;
  ppuStack_230 = &puStack_120;
  _objc_retain(puVar7);
  lStack_258 = 0;
  puVar8 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar7,4,&lStack_258);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lStack_258;
  _objc_retain(lStack_258);
  if (lVar2 == 0) {
    _objc_retain(puVar8);
    puVar5 = puVar8;
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  _objc_release(puVar8);
  _objc_release(lVar2);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 1091324c0; end: 1091325e7; -[SCDynamicGeoFilterOffensiveWordStore _isOffensiveExactWordInNormalizedText:languageCode:] */

undefined * FUN_1091324c0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long unaff_x22;
  long lVar7;
  long lStack_148;
  long lStack_140;
  undefined *puStack_138;
  long lStack_130;
  ulong uStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar5 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0e00e0(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  puVar6 = (undefined *)0x0;
  if (lVar2 != 0) {
    unaff_x22 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != unaff_x22) {
          _objc_enumerationMutation(lVar1);
        }
        puVar5 = *(undefined8 **)(lStack_108 + lVar7 * 8);
        uVar3 = param_3;
        func_0x00010c0720c0(param_3,param_2,puVar5);
        if ((uVar3 & 1) != 0) {
          puVar6 = (undefined *)0x1;
          goto LAB_1091325a0;
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar1;
      puVar5 = &uStack_110;
      func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
    puVar6 = (undefined *)0x0;
  }
LAB_1091325a0:
  _objc_release(lVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar6;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_1091325e8;
  lStack_140 = unaff_x22;
  puStack_138 = puVar6;
  lStack_130 = lVar1;
  uStack_128 = param_3;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  lStack_148 = 0;
  puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar5,4,&lStack_148);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lStack_148;
  _objc_retain(lStack_148);
  if (lVar2 == 0) {
    _objc_retain(puVar6);
    puVar4 = puVar6;
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  _objc_release(puVar6);
  _objc_release(lVar2);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 1091325e8; end: 1091326a3; -[SCDynamicGeoFilterOffensiveWordStore _getDictFromData:] */

void FUN_1091325e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lStack_38;
  
  _objc_retain(param_3);
  lStack_38 = 0;
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_3,4,&lStack_38);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_38;
  _objc_retain(lStack_38);
  if (lVar1 == 0) {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1091326a4; end: 1091328e3; -[SCDynamicGeoFilterOffensiveWordStore _loadOffensiveWordStore] */

void FUN_1091326a4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR_PTR_1126b08b0;
  func_0x00010bf33760(PTR_PTR_1126b08b0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  func_0x00010c003a80();
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1091328e4;
  puStack_88 = &UNK_1108e8a30;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010c13e600(lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126b08b0;
  func_0x00010bf33760(PTR_PTR_1126b08b0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  func_0x00010c003a80();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  func_0x00010c13e600(lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 1091328e4; end: 109132a13;  */

void FUN_1091328e4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (lVar1 = param_2, func_0x00010bfcaaa0(), lVar1 == 0)) {
    lVar1 = param_2;
    func_0x00010b7f5374(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010be1ea20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar2;
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 109132a14; end: 109132a2b; -[SCDynamicGeoFilterOffensiveWordStore simpleContentFetcher] */

void FUN_109132a14(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109132a2c; end: 109132a37; -[SCDynamicGeoFilterOffensiveWordStore setSimpleContentFetcher:] */

void FUN_109132a2c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 109132a38; end: 109132a87; -[SCDynamicGeoFilterOffensiveWordStore .cxx_destruct] */

void FUN_109132a38(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109132a88; end: 109132bcb; -[SCDynamicGeoFilterResource hashableValuesFromDisplayParameters] */

void FUN_109132a88(undefined **param_1,undefined8 param_2)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined ***pppuVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined ***pppuVar10;
  undefined8 uVar11;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = param_1;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_68 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuStack_68 = ppuVar2;
  }
  ppuVar3 = param_1;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_60 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuStack_60 = ppuVar3;
  }
  ppuVar4 = param_1;
  func_0x00010c08c7c0();
  _NSStringFromCGRect();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_58 = ppuVar4;
  func_0x00010c141a80(param_1);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  pppuVar10 = &ppuStack_68;
  uVar11 = 4;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,pppuVar10,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(pppuVar10);
  _objc_retain(uVar11);
  pppuVar7 = pppuVar10;
  func_0x00010c0e00e0(pppuVar10,param_2,&PTR____CFConstantStringClassReference_110dad058);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0;
  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110db93d8,param_2,pppuVar7);
  _objc_release(pppuVar7);
  if ((uVar8 & 1) == 0) {
    pppuVar7 = pppuVar10;
    func_0x00010c0e00e0(pppuVar10,param_2,&PTR____CFConstantStringClassReference_110dad058);
    _objc_retainAutoreleasedReturnValue();
    iVar1 = 0x10f22cb8;
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f22cb8,param_2,pppuVar7);
    _objc_release(pppuVar7);
    if (iVar1 != 0) {
      ppuVar2 = &PTR_PTR_1126d9130;
      goto LAB_109132c80;
    }
    puVar9 = (undefined *)0x0;
  }
  else {
    ppuVar2 = &PTR_PTR_1126dd740;
LAB_109132c80:
    puVar9 = *ppuVar2;
    _objc_alloc(puVar9);
    func_0x00010c00c5c0();
  }
  _objc_release(uVar11);
  _objc_release(pppuVar10);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 109132bcc; end: 109132cc3; +[SCDynamicGeoFilterResource resourceWithDictionary:filterId:] */

void FUN_109132bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad058);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110db93d8,param_2,uVar2);
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad058);
    _objc_retainAutoreleasedReturnValue();
    iVar1 = 0x10f22cb8;
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f22cb8,param_2,uVar2);
    _objc_release(uVar2);
    if (iVar1 == 0) {
      puVar4 = (undefined *)0x0;
      goto LAB_109132ca0;
    }
    ppuVar5 = &PTR_PTR_1126d9130;
  }
  else {
    ppuVar5 = &PTR_PTR_1126dd740;
  }
  puVar4 = *ppuVar5;
  _objc_alloc(puVar4);
  func_0x00010c00c5c0();
LAB_109132ca0:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 109132cc4; end: 109133457; +[SCDynamicGeoFilterResource resourceWithCTPDynamicFilterContent:filterId:] */

void FUN_109132cc4(float param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  long param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined *puStack_b0;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 == 0) {
LAB_109132e30:
    puVar25 = (undefined *)0x0;
    goto LAB_109133414;
  }
  puVar27 = param_4;
  func_0x00010c27dd80();
  puVar3 = param_4;
  if ((int)puVar27 == 1) {
    func_0x00010bf861e0();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar3;
    func_0x00010bfdd440();
    if ((int)puVar27 == 0) {
      puVar27 = (undefined *)0x0;
    }
    else {
      puVar27 = PTR__OBJC_CLASS___NSShadow_1126b6158;
      _objc_alloc_init();
      puVar25 = PTR__OBJC_CLASS___UIColor_1126aea70;
      puVar26 = puVar3;
      func_0x00010c26c7a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar26;
      func_0x00010bf40c40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf415c0(puVar25,param_3,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe740(puVar27,param_3,puVar25);
      _objc_release(puVar25);
      _objc_release(puVar4);
      _objc_release(puVar26);
      puVar25 = puVar3;
      func_0x00010c26c7a0();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = puVar25;
      func_0x00010c22a000();
      dVar33 = (double)(int)puVar26;
      puVar26 = puVar3;
      func_0x00010c26c7a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar26;
      func_0x00010c22a020();
      func_0x00010c1fe7a0(dVar33,(double)(int)puVar4,puVar27);
      fVar28 = SUB84(dVar33,0);
      _objc_release(puVar26);
      _objc_release(puVar25);
      puVar25 = puVar3;
      func_0x00010c26c7a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1e7c0();
      param_1 = SUB84((double)fVar28,0);
      func_0x00010c1fe720(puVar27);
      _objc_release(puVar25);
    }
    puVar25 = puVar3;
    func_0x00010bf8bb60();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar25;
    func_0x00010bf2fa60();
    uVar1 = (int)puVar26 - 1;
    if (uVar1 < 3) {
      puStack_b0 = *(undefined **)(&UNK_10dfb7ce0 + (ulong)uVar1 * 8);
    }
    else {
      puStack_b0 = (undefined *)0x0;
    }
    func_0x00010b7815c8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar25);
    puVar26 = puVar3;
    func_0x00010bf8b720();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar26;
    func_0x00010c269e40();
    puVar25 = (undefined *)0x7c4881c3;
    if ((int)puVar4 != 1) {
      puVar25 = (undefined *)0x0;
    }
    puVar5 = (undefined *)0x255c12;
    if ((int)puVar4 != 2) {
      puVar5 = puVar25;
    }
    func_0x00010b78176c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar26);
    puVar25 = puVar3;
    func_0x00010c26c4c0();
    puVar26 = (undefined *)0x0;
    if ((int)puVar25 == 9) {
LAB_109133080:
      puVar25 = puVar3;
      func_0x00010bf8bb60();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar25;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar25);
    }
    else {
      puVar4 = puVar26;
      puVar26 = (undefined *)0x0;
      if ((int)puVar25 == 8) {
        puVar26 = puVar3;
        func_0x00010c252cc0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_109133080;
      }
    }
    puVar25 = PTR_PTR_1126d9130;
    _objc_alloc();
    puVar6 = puVar3;
    func_0x00010bfb4000();
    puVar7 = puVar3;
    func_0x00010c0c2b00();
    puVar8 = puVar3;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c26b920(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26b7e0(puVar3);
    puVar9 = puVar3;
    fVar29 = param_1;
    func_0x00010c0c2b00();
    puVar10 = puVar3;
    func_0x00010bfa0560();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    func_0x00010c26b7a0();
    func_0x00010913fb34();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_4;
    func_0x00010c08cf80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bea40();
    puVar13 = param_4;
    fVar30 = fVar29;
    func_0x00010c08cf80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bec60();
    puVar14 = param_4;
    fVar31 = fVar30;
    func_0x00010c08cf80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5040();
    puVar15 = param_4;
    fVar32 = fVar31;
    func_0x00010c08cf80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe0640();
    puVar16 = param_4;
    fVar28 = fVar32;
    func_0x00010c247520();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = param_4;
    func_0x00010c08cf80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c141a80();
    puVar19 = param_4;
    func_0x00010c125320();
    puVar20 = param_4;
    func_0x00010c27dd80();
    uVar1 = (int)puVar20 - 1;
    if (uVar1 < 4) {
      uVar21 = *(undefined8 *)(&UNK_10dfb7cf8 + (ulong)uVar1 * 8);
    }
    else {
      uVar21 = 0;
    }
    func_0x00010b781b88();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar3;
    func_0x00010bf8b720();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar20;
    func_0x00010c269e20();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar3;
    func_0x00010bfa04c0();
    uVar1 = (int)puVar23 - 1;
    if (uVar1 < 3) {
      uVar24 = *(undefined8 *)(&UNK_10dfb7d18 + (ulong)uVar1 * 8);
    }
    else {
      uVar24 = 0;
    }
    func_0x00010c063860((double)(int)puVar6,(double)(int)puVar7,(double)param_1,(double)fVar29,
                        (double)fVar30,(double)fVar31,(double)fVar32,
                        ((double)fVar28 * 3.141592653589793) / 180.0,puVar25,param_3,puVar8,puVar26,
                        puVar2,0 < (int)puVar9,puVar27,puVar10,puStack_b0,puVar11,puVar16,puVar17,
                        (double)((ulong)puVar19 & 0xffffffff),uVar21,puVar4,puVar22,puVar5,uVar24,
                        param_5);
    _objc_release(puVar22);
    _objc_release(puVar20);
    _objc_release(uVar21);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
  }
  else {
    if ((int)puVar27 != 2) goto LAB_109132e30;
    puVar25 = PTR_PTR_1126dd740;
    _objc_alloc(PTR_PTR_1126dd740);
    func_0x00010c08cf80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bea40();
    dVar33 = (double)param_1;
    puVar27 = param_4;
    func_0x00010c08cf80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bec60();
    dVar34 = (double)param_1;
    puStack_b0 = param_4;
    func_0x00010c08cf80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5040();
    dVar35 = (double)param_1;
    puVar5 = param_4;
    func_0x00010c08cf80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe0640();
    dVar36 = (double)param_1;
    puVar26 = param_4;
    func_0x00010c247520(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar26;
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_4;
    func_0x00010c08cf80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c141a80();
    puVar6 = param_4;
    func_0x00010c125320(param_4);
    puVar7 = param_4;
    func_0x00010c27dd80();
    uVar1 = (int)puVar7 - 1;
    if (uVar1 < 4) {
      puVar2 = *(undefined **)(&UNK_10dfb7cf8 + (ulong)uVar1 * 8);
    }
    else {
      puVar2 = (undefined *)0x0;
    }
    func_0x00010b781b88(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0638e0(dVar33,dVar34,dVar35,dVar36,((double)param_1 * 3.141592653589793) / 180.0,
                        (double)((ulong)puVar6 & 0xffffffff),puVar25,param_3,puVar26,puVar4,puVar2,
                        param_5);
  }
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(puVar26);
  _objc_release(puVar5);
  _objc_release(puStack_b0);
  _objc_release(puVar27);
  _objc_release(puVar3);
LAB_109133414:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar25);
  return;
}



/* Entry: 109133458; end: 1091335c7; -[SCDynamicGeoFilterResource initWithlayout:source:resourceId:rotation:minRefreshInterval:type:filterId:] */

undefined1 *
FUN_109133458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_78 = PTR_PTR_1127007c0;
  uStack_80 = param_7;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x40) = param_1;
    *(undefined8 *)((long)puVar1 + 0x48) = param_2;
    *(undefined8 *)((long)puVar1 + 0x50) = param_3;
    *(undefined8 *)((long)puVar1 + 0x58) = param_4;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_10;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_12;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_11;
    _objc_release();
    if (*(long *)((long)puVar1 + 8) == 0) {
      func_0x000107c31920();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)((long)puVar1 + 8);
      *(undefined8 *)((long)puVar1 + 8) = uVar2;
      _objc_release(uVar3);
    }
    _objc_retain(puVar1);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(puVar1);
  return (undefined1 *)puVar1;
}



/* Entry: 1091335c8; end: 1091339ab; -[SCDynamicGeoFilterResource initWithDictionary:filterId:] */

undefined8 *****
FUN_1091335c8(undefined8 ****param_1,undefined8 ****param_2,undefined8 ****param_3,
             undefined8 ****param_4,undefined8 *****param_5,undefined8 param_6,
             undefined8 ****param_7,undefined8 ****param_8)

{
  undefined8 *****pppppuVar1;
  undefined *puVar2;
  undefined8 ****ppppuVar3;
  ulong uVar4;
  undefined8 ****ppppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 *****pppppuVar10;
  long lVar11;
  undefined8 ****ppppuVar12;
  float fVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 ****ppppuVar17;
  undefined8 ****ppppuStack_190;
  undefined *puStack_188;
  undefined8 ***pppuStack_180;
  undefined8 ***pppuStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 **ppuStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 ****ppppuStack_120;
  undefined *puStack_118;
  long lStack_90;
  
  ppuVar7 = (undefined **)&ppuStack_160;
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = (undefined **)param_7;
  _objc_retain(param_7);
  _objc_retain(param_8);
  pppppuVar1 = param_5;
  if (param_7 != (undefined8 ****)0x0) {
    puStack_118 = PTR_PTR_1127007c0;
    pppppuVar1 = &ppppuStack_120;
    ppppuStack_120 = param_5;
    _objc_msgSendSuper2(pppppuVar1,PTR_s_init_1125d9248);
    if (pppppuVar1 == (undefined8 *****)0x0) {
LAB_109133940:
      _objc_retain(pppppuVar1);
      pppppuVar10 = pppppuVar1;
      goto LAB_10913394c;
    }
    pppppuVar10 = pppppuVar1;
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar8 = pppppuVar1[1];
    pppppuVar1[1] = pppppuVar10;
    _objc_release(ppppuVar8);
    _objc_retain(param_8);
    ppppuVar8 = pppppuVar1[6];
    pppppuVar1[6] = param_8;
    _objc_release(ppppuVar8);
    ppppuVar8 = param_7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar9 = pppppuVar1[3];
    pppppuVar1[3] = ppppuVar8;
    _objc_release(ppppuVar9);
    ppppuVar8 = param_7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar9 = pppppuVar1[5];
    pppppuVar1[5] = ppppuVar8;
    _objc_release(ppppuVar9);
    ppppuVar9 = param_7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    ppppuVar3 = ppppuVar9;
    _objc_opt_isKindOfClass(ppppuVar9,puVar2);
    ppppuVar8 = ppppuVar9;
    if (((ulong)ppppuVar3 & 1) == 0) {
      ppppuVar8 = (undefined8 ****)0x0;
    }
    _objc_retain(ppppuVar8);
    _objc_release(ppppuVar9);
    param_1 = (undefined8 ****)0x0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_158 = 0;
    ppuStack_160 = (undefined8 ***)0x0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    ppppuVar9 = ppppuVar8;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar3 = ppppuVar9;
    func_0x00010bf52a60();
    if (ppppuVar3 != (undefined8 ****)0x0) {
      lVar11 = *plStack_150;
      do {
        puVar2 = PTR_s_floatValue_1125ca4c8;
        ppppuVar12 = (undefined8 ****)0x0;
        do {
          if (*plStack_150 != lVar11) {
            _objc_enumerationMutation(ppppuVar9);
          }
          uVar4 = *(ulong *)(lStack_158 + (long)ppppuVar12 * 8);
          _objc_opt_respondsToSelector(uVar4,puVar2);
          if ((uVar4 & 1) == 0) {
            _objc_release(ppppuVar9);
            goto LAB_109133914;
          }
          ppppuVar12 = (undefined8 ****)((long)ppppuVar12 + 1);
        } while (ppppuVar3 != ppppuVar12);
        ppppuVar3 = ppppuVar9;
        ppuVar7 = (undefined **)&ppuStack_160;
        func_0x00010bf52a60();
      } while (ppppuVar3 != (undefined8 ****)0x0);
    }
    fVar13 = SUB84(param_1,0);
    _objc_release(ppppuVar9);
    ppppuVar9 = ppppuVar8;
    func_0x00010c0e00e0(ppppuVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    ppppuVar15 = (undefined8 ****)(double)fVar13;
    ppppuVar3 = ppppuVar8;
    func_0x00010c0e00e0(ppppuVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    ppppuVar16 = (undefined8 ****)(double)fVar13;
    ppppuVar12 = ppppuVar8;
    func_0x00010c0e00e0(ppppuVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    ppppuVar17 = (undefined8 ****)(double)fVar13;
    ppppuVar5 = ppppuVar8;
    func_0x00010c0e00e0(ppppuVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    ppppuVar14 = (undefined8 ****)(double)fVar13;
    pppppuVar1[8] = ppppuVar15;
    pppppuVar1[9] = ppppuVar16;
    pppppuVar1[10] = ppppuVar17;
    pppppuVar1[0xb] = ppppuVar14;
    _objc_release(ppppuVar5);
    fVar13 = SUB84(ppppuVar14,0);
    _objc_release(ppppuVar12);
    _objc_release(ppppuVar3);
    _objc_release(ppppuVar9);
    ppuVar7 = &PTR____CFConstantStringClassReference_110de1f58;
    ppppuVar9 = ppppuVar8;
    func_0x00010c0e00e0(ppppuVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    pppppuVar1[2] = (undefined8 ****)(((double)fVar13 * 3.141592653589793) / 180.0);
    _objc_release(ppppuVar9);
    param_1 = pppppuVar1[8];
    param_2 = pppppuVar1[9];
    param_3 = pppppuVar1[10];
    param_4 = pppppuVar1[0xb];
    _CGRectGetWidth();
    if (0.0 < (double)param_1) {
      param_1 = pppppuVar1[8];
      param_2 = pppppuVar1[9];
      param_3 = pppppuVar1[10];
      param_4 = pppppuVar1[0xb];
      _CGRectGetHeight();
      if (0.0 < (double)param_1) {
        ppuVar6 = &PTR____CFConstantStringClassReference_110f22d78;
        ppppuVar9 = param_7;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (ppppuVar9 == (undefined8 ****)0x0) {
          param_1 = (undefined8 ****)0x40f5180000000000;
        }
        else {
          func_0x00010bf885a0(ppppuVar9);
        }
        pppppuVar1[7] = param_1;
        _objc_release(ppppuVar9);
        _objc_release(ppppuVar8);
        goto LAB_109133940;
      }
    }
LAB_109133914:
    _objc_release(ppppuVar8);
    ppuVar6 = ppuVar7;
  }
  pppppuVar10 = (undefined8 *****)0x0;
LAB_10913394c:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return pppppuVar10;
  }
  ___stack_chk_fail();
  pppppuVar10 = &ppppuStack_190;
  pcStack_168 = FUN_1091339ac;
  pppuStack_180 = param_8;
  pppuStack_178 = param_7;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar6);
  puStack_188 = PTR_PTR_1127007c0;
  ppppuStack_190 = pppppuVar1;
  _objc_msgSendSuper2(&ppppuStack_190,PTR_s_init_1125d9248);
  if (pppppuVar10 != (undefined8 *****)0x0) {
    ppppuVar8 = (undefined8 ****)ppuVar6;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar9 = pppppuVar10[5];
    pppppuVar10[5] = ppppuVar8;
    _objc_release(ppppuVar9);
    ppppuVar8 = (undefined8 ****)ppuVar6;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar9 = pppppuVar10[1];
    pppppuVar10[1] = ppppuVar8;
    _objc_release(ppppuVar9);
    ppppuVar8 = (undefined8 ****)ppuVar6;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar9 = pppppuVar10[3];
    pppppuVar10[3] = ppppuVar8;
    _objc_release(ppppuVar9);
    func_0x00010bf66d20(ppuVar6);
    pppppuVar10[8] = param_1;
    pppppuVar10[9] = param_2;
    pppppuVar10[10] = param_3;
    pppppuVar10[0xb] = param_4;
    func_0x00010bf66e40(ppuVar6);
    ppppuVar8 = (undefined8 ****)(double)SUB84(param_1,0);
    pppppuVar10[2] = ppppuVar8;
    func_0x00010bf66da0(ppuVar6);
    pppppuVar10[7] = ppppuVar8;
    ppppuVar8 = (undefined8 ****)ppuVar6;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar9 = pppppuVar10[6];
    pppppuVar10[6] = ppppuVar8;
    _objc_release(ppppuVar9);
  }
  _objc_release(ppuVar6);
  return pppppuVar10;
}



/* Entry: 1091339ac; end: 109133aef; -[SCDynamicGeoFilterResource initWithCoder:] */

undefined1 *
FUN_1091339ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_7);
  puStack_28 = PTR_PTR_1127007c0;
  uStack_30 = param_5;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    func_0x00010bf66d20(param_7);
    *(undefined8 *)((long)puVar1 + 0x40) = param_1;
    *(undefined8 *)((long)puVar1 + 0x48) = param_2;
    *(undefined8 *)((long)puVar1 + 0x50) = param_3;
    *(undefined8 *)((long)puVar1 + 0x58) = param_4;
    func_0x00010bf66e40(param_7);
    dVar4 = (double)(float)param_1;
    *(double *)((long)puVar1 + 0x10) = dVar4;
    func_0x00010bf66da0(param_7);
    *(double *)((long)puVar1 + 0x38) = dVar4;
    uVar2 = param_7;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 109133af0; end: 109133c13; -[SCDynamicGeoFilterResource encodeWithCoder:] */

void FUN_109133af0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  uVar2 = (undefined4)param_1;
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010c27dd80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_4,param_3,lVar1,&PTR____CFConstantStringClassReference_110dad058);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c13b320(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_4,param_3,lVar1,&PTR____CFConstantStringClassReference_110e8ddd8);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c247520(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_4,param_3,lVar1,&PTR____CFConstantStringClassReference_110dae8d8);
  _objc_release(lVar1);
  func_0x00010c08c7c0(param_2);
  func_0x00010bf92de0(param_4,param_3,&PTR____CFConstantStringClassReference_110dc9ad8);
  func_0x00010c141a80(param_2);
  func_0x00010bf92ee0((float)(double)CONCAT44(uVar3,uVar2),param_4,param_3,
                      &PTR____CFConstantStringClassReference_110de1f58);
  func_0x00010c0cd920(param_2);
  func_0x00010bf92e80(param_4,param_3,&PTR____CFConstantStringClassReference_110f22c78);
  func_0x00010bf93020(param_4,param_3,*(undefined8 *)(param_2 + 0x30),
                      &PTR____CFConstantStringClassReference_110f22c98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 109133c14; end: 109133cab; -[SCDynamicGeoFilterResource getUIImagesWithCanvasSize:completion:performerQueue:contextData:dynamicContextProperties:displayName:] */

undefined **
FUN_109133c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  if (puVar1 < (undefined *)0x4) {
    return (undefined **)(&PTR_PTR_110addaa0)[(long)puVar1];
  }
  return &PTR____CFConstantStringClassReference_110f22d98;
}



/* Entry: 109133cac; end: 109133ccf;  */

undefined ** FUN_109133cac(ulong param_1)

{
  if (param_1 < 4) {
    return (undefined **)(&PTR_PTR_110addaa0)[param_1];
  }
  return &PTR____CFConstantStringClassReference_110f22d98;
}



/* Entry: 109133cd0; end: 109133d1b; -[SCDynamicGeoFilterResource renderCacheComponentKeyWithContextData:dynamicContextProperties:userName:displayName:] */

void FUN_109133cd0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfdeba0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109133d1c; end: 109133d23; -[SCDynamicGeoFilterResource resourceId] */

undefined8 FUN_109133d1c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109133d24; end: 109133d2b; -[SCDynamicGeoFilterResource setResourceId:] */

void FUN_109133d24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 109133d2c; end: 109133d37; -[SCDynamicGeoFilterResource layout] */

undefined8 FUN_109133d2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 109133d38; end: 109133d43; -[SCDynamicGeoFilterResource setLayout:] */

void FUN_109133d38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x40) = param_1;
  *(undefined8 *)(param_5 + 0x48) = param_2;
  *(undefined8 *)(param_5 + 0x50) = param_3;
  *(undefined8 *)(param_5 + 0x58) = param_4;
  return;
}



/* Entry: 109133d44; end: 109133d4b; -[SCDynamicGeoFilterResource rotation] */

undefined8 FUN_109133d44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109133d4c; end: 109133d53; -[SCDynamicGeoFilterResource setRotation:] */

void FUN_109133d4c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 109133d54; end: 109133d5b; -[SCDynamicGeoFilterResource source] */

undefined8 FUN_109133d54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109133d5c; end: 109133d63; -[SCDynamicGeoFilterResource setSource:] */

void FUN_109133d5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 109133d64; end: 109133d6b; -[SCDynamicGeoFilterResource dynamicContextSource] */

undefined8 FUN_109133d64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 109133d6c; end: 109133d73; -[SCDynamicGeoFilterResource setDynamicContextSource:] */

void FUN_109133d6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 109133d74; end: 109133d7b; -[SCDynamicGeoFilterResource type] */

undefined8 FUN_109133d74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 109133d7c; end: 109133d83; -[SCDynamicGeoFilterResource filterId] */

undefined8 FUN_109133d7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 109133d84; end: 109133d8b; -[SCDynamicGeoFilterResource setFilterId:] */

void FUN_109133d84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 109133d8c; end: 109133d93; -[SCDynamicGeoFilterResource minRefreshInterval] */

undefined8 FUN_109133d8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


