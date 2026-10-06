/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10566def8; end: 10566deff; -[SCMusicRecommendationCacheItem requestId] */

undefined8 FUN_10566def8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10566df00; end: 10566df2f; -[SCMusicRecommendationCacheItem .cxx_destruct] */

void FUN_10566df00(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10566df30; end: 10566e0c7;  */

undefined8 FUN_10566df30(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  _objc_retain();
  ppuVar1 = param_1;
  func_0x00010c2791c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  ppuVar1 = param_1;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010bfd8520();
  _objc_release(ppuVar1);
  ppuVar1 = param_1;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  if ((int)ppuVar3 == 0) {
    ppuVar3 = ppuVar1;
    func_0x00010bfd71a0();
    _objc_release(ppuVar1);
    ppuVar1 = param_1;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    if ((int)ppuVar3 != 0) {
      ppuVar4 = ppuVar1;
      func_0x00010bfadba0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar4;
      func_0x00010bfadea0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10566e018;
    }
    ppuVar3 = ppuVar1;
    func_0x00010bfdc2a0();
    _objc_release(ppuVar1);
    if (((ulong)ppuVar3 & 1) != 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110df42d8;
      goto LAB_10566e02c;
    }
  }
  else {
    ppuVar4 = ppuVar1;
    func_0x00010c091e80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar4;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
LAB_10566e018:
    _objc_release(ppuVar4);
    _objc_release(ppuVar1);
LAB_10566e02c:
    _objc_release(ppuVar3);
  }
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00010c08fa60();
    if (ppuVar3 == (undefined **)0x0) {
      _objc_release(ppuVar1);
    }
    else {
      ppuVar3 = ppuVar2;
      func_0x00010bfd69c0();
      _objc_release(ppuVar1);
      if (((ulong)ppuVar3 & 1) != 0) {
        uVar5 = 1;
        goto LAB_10566e0a0;
      }
    }
  }
  uVar5 = 0;
LAB_10566e0a0:
  _objc_release(ppuVar2);
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 10566e0c8; end: 10566e16f; +[SCMusicRecommendationSharedUtility ctContextsDictionaryWithCTContexts:] */

void FUN_10566e0c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10566e170;
  puStack_30 = &UNK_1108a5910;
  _objc_retain();
  puStack_28 = puVar2;
  func_0x00010bf97e80(param_3,param_2,&puStack_48);
  _objc_release(param_3);
  _objc_release(puStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10566e170; end: 10566e1df;  */

void FUN_10566e170(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0df840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10566e1e0; end: 10566e24b; +[SCMusicRecommendationSharedUtility defaultMetadataWithStartDate:isFromCache:] */

void FUN_10566e1e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc930;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03d6c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10566e24c; end: 10566e36f; -[SCMusicRecommendationMetadata initWithRecommendationsDict:requestId:modelFootprint:isFromCache:fetchStartTime:numRecommendationsMatch:] */

undefined1 *
FUN_10566e24c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e9870;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10566e370; end: 10566e393; -[SCMusicRecommendationMetadata copyWithZone:] */

undefined8 FUN_10566e370(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10566e394; end: 10566e427; -[SCMusicRecommendationMetadata hash] */

undefined8 * FUN_10566e394(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  puVar3 = &uStack_58;
  uStack_38 = uVar2;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10566e4f8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10566e504;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) && (puVar3[6] == param_3[6])))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[5];
            if (puVar6 != (undefined8 *)param_3[5]) {
              func_0x00010c071ae0();
              goto LAB_10566e504;
            }
            goto LAB_10566e4f8;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10566e504:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10566e428; end: 10566e51f; -[SCMusicRecommendationMetadata isEqual:] */

long FUN_10566e428(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10566e4f8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10566e504;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10566e504;
            }
            goto LAB_10566e4f8;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10566e504:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10566e520; end: 10566e527; -[SCMusicRecommendationMetadata recommendationsDict] */

undefined8 FUN_10566e520(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10566e528; end: 10566e52f; -[SCMusicRecommendationMetadata requestId] */

undefined8 FUN_10566e528(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10566e530; end: 10566e537; -[SCMusicRecommendationMetadata modelFootprint] */

undefined8 FUN_10566e530(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10566e538; end: 10566e53f; -[SCMusicRecommendationMetadata isFromCache] */

undefined1 FUN_10566e538(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10566e540; end: 10566e547; -[SCMusicRecommendationMetadata fetchStartTime] */

undefined8 FUN_10566e540(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10566e548; end: 10566e54f; -[SCMusicRecommendationMetadata numRecommendationsMatch] */

undefined8 FUN_10566e548(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10566e550; end: 10566e597; -[SCMusicRecommendationMetadata .cxx_destruct] */

void FUN_10566e550(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10566e598; end: 10566e63b; -[SCMusicStickerInjectorImpl initWithValdiRuntimeProvider:musicTrackAssetLoader:] */

undefined1 *
FUN_10566e598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9878;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10566e63c; end: 10566e69b; -[SCMusicStickerInjectorImpl stickerForCTItemInstance:presentationModelProviderType:] */

void FUN_10566e63c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_10566e69c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010566e7f0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10566e69c; end: 10566e933;  */

void FUN_10566e69c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain();
  if (param_1 == 0) {
LAB_10566e770:
    lVar5 = 0;
  }
  else {
    lVar5 = param_1;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96ee0();
    _objc_release(lVar1);
    _objc_release(lVar5);
    if ((int)lVar2 == 9) {
      lVar5 = param_1;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar5;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bfede40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c27dd80();
      _objc_release(lVar3);
      _objc_release(lVar1);
      _objc_release(lVar5);
      if ((int)lVar4 != 0x13) goto LAB_10566e768;
    }
    else {
LAB_10566e768:
      if ((int)lVar2 != 7) goto LAB_10566e770;
    }
    lVar1 = param_1;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfedf20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c0d38c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar5 != 0) {
      _objc_retain(lVar5);
    }
    _objc_release(lVar5);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10566e934; end: 10566eb2f; -[SCMusicStickerInjectorImpl addLoggingParamsWithLoggingParamsBuilder:stickerViews:] */

undefined1 * FUN_10566e934(undefined8 param_1,undefined8 param_2,undefined1 *param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar8 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((param_3 != (undefined1 *)0x0) && (param_4 != 0)) &&
     (lVar2 = param_4, func_0x00010bf529e0(), lVar2 != 0)) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_4);
    lVar2 = param_4;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar11 = *plStack_120;
      do {
        lVar12 = 0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(param_4);
          }
          puVar3 = PTR_PTR_1126ba960;
          uVar10 = *(ulong *)(lStack_128 + lVar12 * 8);
          _objc_retain(uVar10);
          _objc_opt_class(puVar3);
          uVar4 = uVar10;
          _objc_opt_isKindOfClass(uVar10,puVar3);
          uVar1 = uVar10;
          if ((uVar4 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar10);
          if (uVar1 != 0) {
            func_0x00010bf4dce0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR_PTR_1126bc948;
            _objc_opt_class(PTR_PTR_1126bc948);
            uVar5 = uVar10;
            _objc_opt_isKindOfClass(uVar10,puVar3);
            uVar4 = uVar10;
            if ((uVar5 & 1) == 0) {
              uVar4 = 0;
            }
            _objc_retain(uVar4);
            _objc_release(uVar10);
            if (uVar4 != 0) {
              func_0x00010c0b5c40(uVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2b3420(param_3);
              _objc_unsafeClaimAutoreleasedReturnValue();
              _objc_release(uVar10);
            }
            _objc_release(uVar4);
          }
          _objc_release(uVar1);
          lVar12 = lVar12 + 1;
        } while (lVar2 != lVar12);
        lVar2 = param_4;
        puVar8 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(param_4);
    puVar7 = (undefined1 *)puVar8;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain();
  if ((puVar7 == (undefined1 *)0x0) ||
     (puVar9 = puVar7, func_0x00010bfee000(), puVar9 != (undefined1 *)0xb)) {
    puVar9 = (undefined1 *)0x0;
  }
  else {
    puVar9 = puVar7;
    func_0x00010c0846e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar9;
    FUN_10566e69c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = (undefined1 *)(ulong)(puVar6 != (undefined1 *)0x0);
    _objc_release(puVar6);
  }
  _objc_release(puVar7);
  return puVar9;
}



/* Entry: 10566eb30; end: 10566eb37; -[SCMusicStickerInjectorImpl isConversionSupportedForStickerState:] */

bool FUN_10566eb30(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_3 == 0) || (lVar2 = param_3, func_0x00010bfee000(), lVar2 != 0xb)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0846e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_10566e69c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10566eb38; end: 10566ebc3;  */

bool FUN_10566eb38(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010bfee000(), lVar2 != 0xb)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010c0846e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_10566e69c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10566ebc4; end: 10566ebfb; -[SCMusicStickerInjectorImpl isConversionSupportedForSOJUGallerySticker:] */

bool FUN_10566ebc4(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10566ebfc(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 10566ebfc; end: 10566ec93;  */

void FUN_10566ebfc(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar2 = param_1, func_0x00010bfee020(), lVar2 != 0x464f605)) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfedfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      _objc_retain(lVar2);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10566ec94; end: 10566eccb; -[SCMusicStickerInjectorImpl isConversionSupportedForCTItemInstance:] */

bool FUN_10566ec94(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10566e69c(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 10566eccc; end: 10566ed6f; -[SCMusicStickerInjectorImpl isConversionSupportedForCTPItem:] */

bool FUN_10566eccc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba8d8;
    _objc_opt_class(PTR_PTR_1126ba8d8);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    if ((uVar1 == 0) || (uVar3 = param_3, func_0x00010bfee000(), uVar3 != 0x13)) {
      param_3 = 0;
    }
    else {
      _objc_retain(param_3);
    }
    _objc_release(uVar1);
    _objc_release(param_3);
  }
  return param_3 != 0;
}



/* Entry: 10566ed70; end: 10566ee9f; -[SCMusicStickerInjectorImpl sojuGalleryStickerForStickerState:] */

void FUN_10566ed70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  uVar1 = param_5;
  FUN_10566eb38();
  puVar2 = PTR_PTR_1126ba8a8;
  if ((int)uVar1 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = param_5;
    func_0x00010c2790e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1281e0(param_5);
    uVar3 = param_1;
    uVar6 = param_2;
    func_0x00010bf345e0(param_5);
    uVar4 = uVar3;
    func_0x00010c14e120(param_5);
    uVar5 = uVar4;
    func_0x00010c141a80(param_5);
    func_0x00010c2551c0(param_1,param_2,uVar3,uVar6,uVar4,uVar5,puVar2,param_4,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c0846e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246580(param_3,param_4,uVar1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10566eea0; end: 10566efaf; -[SCMusicStickerInjectorImpl stickerStateForSOJUGallerySticker:sojuGalleryInfoFilters:uniqueId:timelineSegmentTimeRanges:editCapabilities:] */

void FUN_10566eea0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  FUN_10566ebfc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010bf5cd00(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ba7d8;
    func_0x00010bfedfa0(PTR_PTR_1126ba7d8,param_2,param_3,0xb,param_1,param_6,param_5,0,param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10566efb0; end: 10566f007; -[SCMusicStickerInjectorImpl ctItemInstanceForSojuGallerySticker:sojuGalleryInfoFilters:] */

void FUN_10566efb0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  FUN_10566ebfc();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_3;
    FUN_10566f008(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10566f008; end: 10566f213;  */

void FUN_10566f008(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar1 = PTR_PTR_1126bc980;
  _objc_retain();
  _objc_opt_new(puVar1);
  uVar2 = param_1;
  func_0x00010c277e80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2827c0();
  func_0x00010c218f80(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c2711a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf0a460(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16a540(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0b5900(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0fa0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0e1d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c282800();
  func_0x00010c219040(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  FUN_10566ff24(param_1);
  _objc_release(param_1);
  func_0x00010c20baa0(puVar1,param_2,uVar2);
  puVar4 = PTR_PTR_1126bc988;
  _objc_opt_new(PTR_PTR_1126bc988);
  func_0x00010c1ca2c0();
  puVar5 = PTR_PTR_1126ba8f8;
  _objc_opt_new(PTR_PTR_1126ba8f8);
  func_0x00010c21acc0();
  puVar6 = PTR_PTR_1126b0cb8;
  _objc_opt_new(PTR_PTR_1126b0cb8);
  puVar7 = PTR_PTR_1126b0cc0;
  _objc_opt_new(PTR_PTR_1126b0cc0);
  puVar8 = PTR_PTR_1126b37c0;
  _objc_opt_new(PTR_PTR_1126b37c0);
  func_0x00010c1ac500();
  func_0x00010c196600(puVar6,param_2,puVar8);
  func_0x00010c1b5d40(puVar7,param_2,puVar6);
  puVar9 = puVar7;
  func_0x00010c0cc0c0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ac580();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10566f214; end: 10566f567; -[SCMusicStickerInjectorImpl sojuGalleryStickerForCTItemInstance:stickerTransformState:] */

void FUN_10566f214(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = param_3;
  FUN_10566e69c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    lVar10 = 0;
  }
  else {
    puVar5 = PTR_PTR_1126bc950;
    _objc_opt_new(PTR_PTR_1126bc950);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c277e80(lVar4);
    func_0x00010c0df880(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c218f80(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    lVar10 = lVar4;
    func_0x00010c2711a0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar10);
    lVar10 = lVar4;
    func_0x00010bf0a460(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16a540(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar10);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c2783a0(lVar4);
    func_0x00010c0df880(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0c20(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    lVar10 = lVar4;
    func_0x00010c0b58e0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0fc0(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar10);
    lVar10 = lVar4;
    func_0x00010c2551e0();
    iVar3 = (int)lVar10;
    uVar7 = 0x52a96b3d;
    if (iVar3 == 3) {
      uVar7 = 0x50be1be3;
    }
    uVar1 = 0x762ef49f;
    if (iVar3 != 4) {
      uVar1 = uVar7;
    }
    uVar7 = 0x1159bc9b;
    if (iVar3 != 2) {
      uVar7 = uVar1;
    }
    uVar1 = 0x4d28309;
    if (iVar3 != 0) {
      uVar1 = 0x52a96b3d;
    }
    uVar2 = 0;
    if (iVar3 != -0x4524111) {
      uVar2 = uVar1;
    }
    if (iVar3 < 2) {
      uVar7 = uVar2;
    }
    func_0x00010b778bd8(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ca300(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar7);
    puVar8 = PTR_PTR_1126ba8b8;
    _objc_opt_new(PTR_PTR_1126ba8b8);
    puVar6 = puVar5;
    func_0x00010bf21f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c9bc0(puVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    lVar9 = param_3;
    func_0x000105d0b830(param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac5e0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = puVar8;
    func_0x00010bf21f60(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac5a0(lVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c06c020(param_1);
    func_0x00010c0df6e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1af280(lVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    lVar10 = lVar9;
    func_0x00010bf21f60(lVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(puVar8);
    _objc_release(puVar5);
  }
  _objc_release(lVar4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar10);
  return;
}



/* Entry: 10566f568; end: 10566f56f; -[SCMusicStickerInjectorImpl sojuGalleryInfoFilterForCTItemInstance:] */

undefined8 FUN_10566f568(void)

{
  return 0;
}



/* Entry: 10566f570; end: 10566f613; -[SCMusicStickerInjectorImpl ctItemInstanceForStickerState:infoFiltersState:] */

void FUN_10566f570(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c2465a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    uVar2 = param_4;
    func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_1108e5888);
    func_0x00010bf5cd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10566f614; end: 10566f61b; -[SCMusicStickerInjectorImpl stickerForCTPItem:presentationModelProviderType:] */

undefined8 FUN_10566f614(void)

{
  return 0;
}



/* Entry: 10566f61c; end: 10566f697; -[SCMusicStickerInjectorImpl isAnimatedItemInstance:] */

bool FUN_10566f61c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c0cc0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d38c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2551e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return (int)uVar3 != 4;
}



/* Entry: 10566f698; end: 10566f7fb; -[SCMusicStickerInjectorImpl presentationModelProviderTypeForCTItemInstance:imageSize:durationMs:] */

void FUN_10566f698(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_6);
  FUN_10566e69c();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x18);
    if (lVar1 == 0) {
      if (param_6 == 0) {
        param_1 = 10.0;
      }
      else {
        func_0x00010bf885a0(param_6);
        param_1 = param_1 / 1000.0;
      }
    }
    else {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0ff1e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        param_1 = 10.0;
      }
      else {
        uVar3 = *(undefined8 *)(param_2 + 0x18);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0ff1e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        _objc_release(uVar4);
        _objc_release(uVar3);
      }
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    puVar5 = PTR_PTR_1126bc958;
    _objc_alloc(PTR_PTR_1126bc958);
    func_0x00010c027d20(param_1);
    puVar6 = PTR_PTR_1126bc960;
    func_0x00010c2904a0(PTR_PTR_1126bc960,param_3,puVar5,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  _objc_release(param_4);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10566f7fc; end: 10566f84f; -[SCMusicStickerInjectorImpl setDependencies:] */

void FUN_10566f7fc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    func_0x00010c29aa00();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 != 0) {
      _objc_retain(param_3);
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      *(long *)(param_1 + 0x18) = param_3;
      _objc_release(uVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 10566f850; end: 10566f91b; -[SCMusicStickerInjectorImpl tappableElementActionForItemInstance:] */

void FUN_10566f850(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  FUN_10566e69c();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010c277e80(), lVar1 == 0)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126ba918;
    func_0x00010c0cb140(PTR_PTR_1126ba918);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179660();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar1 = param_3;
    func_0x00010c277e80(param_3);
    func_0x00010c0df880(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6b40(puVar4,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10566f91c; end: 10566f983; -[SCMusicStickerInjectorImpl tappableElementTypeForItemInstance:] */

undefined4 FUN_10566f91c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  FUN_10566e69c();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c2551e0();
    uVar2 = 7;
    if ((int)lVar1 != 2) {
      lVar1 = param_3;
      func_0x00010c2551e0();
      uVar2 = 7;
      if ((int)lVar1 != 3) {
        uVar2 = 1;
      }
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10566f984; end: 10566fa6f; -[SCMusicStickerInjectorImpl _getPreviewStickerViewWithSOJUStickerStyle:completion:] */

void FUN_10566f984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10566f008();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010566e7f0();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10566fa70;
  puStack_58 = &UNK_1108a5940;
  uStack_50 = uVar2;
  uStack_48 = param_4;
  _objc_retain();
  _objc_retain(param_4);
  func_0x00010be1fb80(param_1,param_2,param_3,&puStack_70);
  _objc_release(param_3);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(uVar1);
  return;
}



/* Entry: 10566fa70; end: 10566fafb;  */

void FUN_10566fa70(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x28);
  if ((param_2 == 0) || (param_3 != 0)) {
    (**(code **)(lVar2 + 0x10))(lVar2,0);
  }
  else {
    puVar1 = PTR_PTR_1126ba960;
    _objc_alloc(PTR_PTR_1126ba960);
    func_0x00010c04c640();
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10566fafc; end: 10566ff23; -[SCMusicStickerInjectorImpl _getInjectedStickerViewWithSOJUStickerStyle:completion:] */

void FUN_10566fafc(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c0b5900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126bc968;
    _objc_alloc(PTR_PTR_1126bc968);
    puVar2 = param_3;
    func_0x00010c277e80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827c0();
    puVar6 = param_3;
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_3;
    func_0x00010bf0a460(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c054c80(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar2);
    (**(code **)(param_4 + 0x10))(param_4,puVar1,0);
    goto LAB_10566fef8;
  }
  puVar1 = param_3;
  func_0x00010c277e80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c282800();
  puVar2 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_3;
  func_0x00010bf0a460(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = param_3;
  FUN_10566ff24(param_3);
  puVar3 = param_3;
  func_0x00010c0e1d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c282800();
  puVar4 = param_3;
  func_0x00010c0b5900(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010808d6d4(puVar6,puVar2,puVar7,puVar10,puVar5,puVar4,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar5 = *(undefined **)(param_1 + 0x10);
  func_0x00010c269d40(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar7 = param_3;
  func_0x00010c0b5900(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_3;
  func_0x00010c0d3920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010b778b20();
  _objc_release(puVar1);
  if ((long)puVar3 < 0x50be1be3) {
    if ((puVar3 == (undefined *)0x0) || (puVar3 == (undefined *)0x4d28309)) {
LAB_10566fde4:
      ppuVar8 = &PTR_PTR_1133bb408;
      goto LAB_10566fdfc;
    }
    if (puVar3 == (undefined *)0x1159bc9b) {
      ppuVar8 = &PTR_PTR_1133bb410;
      goto LAB_10566fdfc;
    }
  }
  else {
    if (puVar3 == (undefined *)0x50be1be3) {
      ppuVar8 = &PTR_PTR_1133bb418;
    }
    else {
      if (puVar3 == (undefined *)0x52a96b3d) goto LAB_10566fde4;
      if (puVar3 != (undefined *)0x762ef49f) goto LAB_10566fe08;
      ppuVar8 = &PTR_PTR_1133bb400;
    }
LAB_10566fdfc:
    puVar10 = *ppuVar8;
    _objc_retain(puVar10);
  }
LAB_10566fe08:
  puVar1 = puVar5;
  func_0x00010c09b8c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar2);
  _objc_release(puVar7);
  _objc_release(puVar5);
  uVar9 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar9);
  _objc_retain(param_4);
  _objc_retain(uVar9);
  puVar2 = puVar6;
  _objc_retain(puVar6);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar9);
  _objc_release(puVar6);
  _objc_release(param_4);
  _objc_release(uVar9);
  _objc_release(puVar6);
LAB_10566fef8:
  _objc_release(puVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 10566ff24; end: 10566ffc7;  */

undefined4 FUN_10566ff24(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  
  func_0x00010c0d3920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010b778b20();
  _objc_release(param_1);
  if (lVar3 < 0x1159bc9b) {
    if ((lVar3 == 0) || (uVar2 = 1, lVar3 == 0x4d28309)) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
    if (lVar3 == 0x50be1be3) {
      uVar2 = 3;
    }
    uVar1 = 4;
    if (lVar3 != 0x762ef49f) {
      uVar1 = uVar2;
    }
    uVar2 = 2;
    if (lVar3 != 0x1159bc9b) {
      uVar2 = uVar1;
    }
  }
  return uVar2;
}



/* Entry: 10566ffc8; end: 105670093;  */

void FUN_10566ffc8(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if ((param_2 == 0) || (param_3 != 0)) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,param_3);
  }
  else {
    puVar1 = PTR_PTR_1126bc948;
    _objc_alloc(PTR_PTR_1126bc948);
    lVar2 = param_2;
    func_0x00010c0b58a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c020220(puVar1);
    _objc_release(lVar2);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar1,0);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105670094; end: 1056700a7; -[SCMusicStickerInjectorImpl _isMusicStickerTypeAnimated:] */

bool FUN_105670094(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0x762ef49f;
}



/* Entry: 1056700a8; end: 105670113; -[SCMusicStickerInjectorImpl .cxx_destruct] */

void FUN_1056700a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105670114; end: 105670157; -[SCMusicStickerInjectorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105670114(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127273f0);
  _objc_destroyWeak(param_1 + _DAT_1127273ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127273f4);
  return;
}



/* Entry: 105670158; end: 1056701ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105670158(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126bc9a0;
    _objc_alloc(PTR_PTR_1126bc9a0);
    lVar1 = param_1 + _DAT_112727400;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05f0c0(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1056701f0; end: 105670237; -[SCMusicLoggingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056701f0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127273f8,0);
  _objc_destroyWeak(param_1 + _DAT_112727400);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127273fc);
  return;
}



/* Entry: 105670238; end: 1056702ab; -[SCMusicBlizzardLoggerImpl initWithUserTrackedLogger:] */

undefined1 * FUN_105670238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9880;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056702ac; end: 10567034f; -[SCMusicBlizzardLoggerImpl logMusicTrackPlaybackWithTrackId:offsetSec:sourcePageType:] */

void FUN_1056702ac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bc9b0;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  func_0x00010c1ca440();
  _objc_release(param_4);
  func_0x00010c206fa0(puVar1,param_3,param_5);
  func_0x00010c1ca4c0(param_1,puVar1);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105670350; end: 105670413; -[SCMusicBlizzardLoggerImpl logMusicLinkfireActionWithAction:destination:trackId:sourcePageType:] */

void FUN_105670350(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bc9b8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  func_0x00010c1ca440();
  _objc_release(param_5);
  func_0x00010c206fa0(puVar1,param_2,param_6);
  func_0x00010c1bdf60(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c161620(puVar1,param_2,param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105670414; end: 1056704b7; -[SCMusicBlizzardLoggerImpl logMusicTrackFavoriteWithTrackId:isFavorited:sourcePageType:] */

void FUN_105670414(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bc9c0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1ca440();
  _objc_release(param_3);
  func_0x00010c1b0e80(puVar1,param_2,param_4);
  func_0x00010c206fa0(puVar1,param_2,param_5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056704b8; end: 105670533; -[SCMusicBlizzardLoggerImpl logMusicScanResultWithISRC:] */

void FUN_1056704b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bc9c8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1b5cc0();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105670534; end: 1056705ef; -[SCMusicBlizzardLoggerImpl logMusicPickerPageLoadStageLatency:loadStage:latencyMs:isCached:] */

void FUN_105670534(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bc9d0;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c1b3f00();
  func_0x00010c1be840(puVar1,param_3,param_5);
  func_0x00010c1d8380(param_1,puVar1);
  func_0x00010c1d84e0(puVar1,param_3,param_4);
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056705f0; end: 10567066b; -[SCMusicBlizzardLoggerImpl logMusicBannerViewWithType:] */

void FUN_1056705f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bc9d8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c21acc0();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10567066c; end: 1056706e7; -[SCMusicBlizzardLoggerImpl logMusicBannerTapWithType:] */

void FUN_10567066c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bc9e0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c21acc0();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056706e8; end: 10567079f; -[SCMusicBlizzardLoggerImpl logMusicLatencyWithSource:latencyMs:requestId:] */

void FUN_1056706e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126bc9e8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c206c40();
  _objc_release(param_3);
  if (param_5 != 0) {
    func_0x00010c1ebd20(puVar1,param_2,param_5);
  }
  func_0x00010c1b92e0(puVar1,param_2,param_4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1056707a0; end: 1056708c3; -[SCMusicBlizzardLoggerImpl logMusicRecommendationResponseWithRequestId:cameraType:isFromCache:latencyMs:modelId:numLenses:numRecommendations:numRecommendationsMatch:] */

void FUN_1056707a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126bc9f0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1ebd20();
  _objc_release(param_3);
  func_0x00010c177420(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1b1380(puVar1,param_2,param_5);
  func_0x00010c1b92e0(puVar1,param_2,param_6);
  func_0x00010c1cede0(puVar1,param_2,param_8);
  func_0x00010c1cf300(puVar1,param_2,param_9);
  func_0x00010c1cf320(puVar1,param_2,param_10);
  if (param_7 != 0) {
    func_0x00010c1c8d40(puVar1,param_2,param_7);
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1056708c4; end: 1056709a7; -[SCMusicBlizzardLoggerImpl logMusicTrackBlockedWithTrackId:contentViewSource:snapId:country:] */

void FUN_1056708c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bc9f8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  func_0x00010841fab4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c218f80(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1d8800(puVar1,param_2,param_4);
  func_0x00010c204680(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c184920(puVar1,param_2,param_6);
  _objc_release(param_6);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056709a8; end: 105670a27; -[SCMusicBlizzardLoggerImpl logFavoritedSoundsCameraTooltipEducationEventWithEventType:] */

void FUN_1056709a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aebe8;
  _objc_opt_new(PTR_PTR_1126aebe8);
  func_0x00010c197620();
  func_0x00010c21acc0(puVar1,param_2,0x14);
  func_0x00010c196b80(puVar1,param_2,1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105670a28; end: 105670a33; -[SCMusicBlizzardLoggerImpl .cxx_destruct] */

void FUN_105670a28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105670a34; end: 105670a73;  */

void FUN_105670a34(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be60fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105670a74; end: 105670c5b; -[SCPercMLModelServiceProvider _modelProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105670a74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar1 = PTR_PTR_1126bca08;
  _objc_alloc(PTR_PTR_1126bca08);
  lVar2 = param_1 + _DAT_112727408;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11272740c;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8760(puVar1,param_2,lVar3,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126bca10;
  _objc_alloc(PTR_PTR_1126bca10);
  lVar2 = param_1 + _DAT_112727410;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe1e0(puVar6,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126bca18;
  _objc_alloc(PTR_PTR_1126bca18);
  lVar2 = param_1 + _DAT_112727414;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002e80(puVar7,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar2);
  puVar8 = PTR_PTR_1126bca20;
  _objc_alloc(PTR_PTR_1126bca20);
  func_0x00010c0271a0();
  puVar9 = PTR_PTR_1126bca28;
  _objc_alloc(PTR_PTR_1126bca28);
  param_1 = param_1 + _DAT_112727418;
  _objc_loadWeakRetained(param_1);
  func_0x00010c00b500(puVar9,param_2,puVar6,puVar7,puVar8,0,param_1,puVar1);
  _objc_release(param_1);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105670c5c; end: 105670cc3; -[SCPercMLModelServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105670c5c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112727408);
  _objc_destroyWeak(param_1 + _DAT_112727418);
  _objc_destroyWeak(param_1 + _DAT_11272740c);
  _objc_destroyWeak(param_1 + _DAT_112727414);
  _objc_destroyWeak(param_1 + _DAT_112727410);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272741c);
  return;
}



/* Entry: 105670cc4; end: 105670d47; -[SCPercMLCOFDeliverableModelHandleProvider initWithCircumstanceEngine:] */

undefined1 * FUN_105670cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9888;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126bca30;
    _objc_alloc();
    func_0x00010bffe1e0();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105670d48; end: 105670d77; -[SCPercMLCOFDeliverableModelHandleProvider deliverableModelHandleForKey:withCOFConfigKey:] */

void FUN_105670d48(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if ((param_3 != 0) && (param_4 != 0)) {
    func_0x00010bf6d160(*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105670d78; end: 105670d83; -[SCPercMLCOFDeliverableModelHandleProvider .cxx_destruct] */

void FUN_105670d78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105670d84; end: 105670f17; -[SCPercMLModelDeliveryCOF initWithCircumstanceEngine:] */

undefined ** FUN_105670d84(undefined *param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = param_3;
  _objc_retain(param_3);
  puStack_90 = PTR_PTR_1126e9890;
  ppuVar8 = &puStack_98;
  puStack_98 = param_1;
  _objc_msgSendSuper2(ppuVar8,PTR_s_init_1125d9248);
  if (ppuVar8 != (undefined **)0x0) {
    _objc_retain(param_3);
    puVar1 = ppuVar8[2];
    ppuVar8[2] = (undefined *)param_3;
    _objc_release(puVar1);
    ppuStack_88 = &PTR____CFConstantStringClassReference_110dbe678;
    puVar1 = PTR_PTR_1126bca30;
    func_0x00010bdf96c0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_80 = &PTR____CFConstantStringClassReference_110df0b78;
    puVar2 = PTR_PTR_1126bca30;
    puStack_68 = puVar1;
    func_0x00010bdf9380();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_78 = &PTR____CFConstantStringClassReference_110dbe898;
    puVar3 = PTR_PTR_1126bca30;
    puStack_60 = puVar2;
    func_0x00010bdf96e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_70 = &PTR____CFConstantStringClassReference_110df42f8;
    puVar4 = PTR_PTR_1126bca30;
    puStack_58 = puVar3;
    func_0x00010bdf9400();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &puStack_68;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar4;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = ppuVar8[1];
    ppuVar8[1] = puVar5;
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar8;
  }
  ___stack_chk_fail();
  if (ppuVar6 == (undefined **)0x0) {
    ppuVar8 = (undefined **)0x0;
  }
  else {
    func_0x00010bde4740();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = param_3;
    func_0x00010c0cff00();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_alloc_init(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    }
    else {
      _objc_retain(ppuVar6);
      ppuVar8 = ppuVar6;
    }
    _objc_release(ppuVar6);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
  return ppuVar8;
}



/* Entry: 105670f18; end: 105670f9b; -[SCPercMLModelDeliveryCOF deliverableModelHandlesWithCOFConfigKey:] */

void FUN_105670f18(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010bde4740();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010c0cff00();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_alloc_init(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    }
    else {
      _objc_retain(puVar1);
      puVar2 = puVar1;
    }
    _objc_release(puVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105670f9c; end: 10567101b; -[SCPercMLModelDeliveryCOF deliverableModelHandleForKey:withCOFConfigKey:] */

void FUN_105670f9c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_retain(param_3);
    func_0x00010bf6d180(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10567101c; end: 105671127; -[SCPercMLModelDeliveryCOF _configWithCOFConfigKey:] */

void FUN_10567101c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lStack_48;
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0e00e0(uVar5,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c1195e0(lVar2,param_2,param_3,uVar5,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126bca38;
  if (lVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar3 = lVar2;
    func_0x00010c296d80(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lStack_48 = 0;
    func_0x00010c0f40e0(puVar4,param_2,lVar3,&lStack_48);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lStack_48;
    _objc_release(lVar3);
    puVar6 = (undefined *)0x0;
    if ((lVar1 == 0) && (puVar4 != (undefined *)0x0)) {
      _objc_retain(puVar4);
      puVar6 = puVar4;
    }
    _objc_release(puVar4);
  }
  _objc_release(lVar2);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105671128; end: 10567142f; +[SCPercMLModelDeliveryCOF _defaultDeepScanModelDeliveryConfig] */

void FUN_105671128(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
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
  long lVar17;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126bca38;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126bca40;
  _objc_opt_new();
  func_0x00010c1c8d40();
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822a0(puVar2);
  _objc_release(puVar3);
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174770;
  func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174770);
  func_0x00010c21e180(puVar2);
  _objc_release(ppuVar4);
  puVar3 = PTR_PTR_1126bca40;
  _objc_opt_new();
  func_0x00010c1c8d40();
  puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822a0(puVar3);
  _objc_release(puVar5);
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174798;
  func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174798);
  func_0x00010c21e180(puVar3);
  _objc_release(ppuVar4);
  puVar5 = PTR_PTR_1126bca40;
  _objc_opt_new();
  func_0x00010c1c8d40();
  puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822a0(puVar5);
  _objc_release(puVar6);
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_1111747c0;
  func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_1111747c0);
  func_0x00010c21e180(puVar5);
  _objc_release(ppuVar4);
  puVar6 = PTR_PTR_1126bca40;
  _objc_opt_new();
  func_0x00010c1c8d40();
  puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822a0(puVar6);
  _objc_release(puVar7);
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_1111747e8;
  func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_1111747e8);
  func_0x00010c21e180(puVar6);
  _objc_release(ppuVar4);
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0d3c80();
  func_0x00010c1c8d20(puVar1);
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126af7d0;
  _objc_alloc_init();
  puVar9 = puVar1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
    ___stack_chk_fail();
    lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = PTR_PTR_1126bca38;
    _objc_opt_new();
    puVar2 = PTR_PTR_1126bca40;
    _objc_opt_new();
    func_0x00010c1c8d40();
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1822a0(puVar2);
    _objc_release(puVar3);
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174810;
    func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174810);
    func_0x00010c21e180(puVar2);
    _objc_release(ppuVar4);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c0d3c80();
    func_0x00010c1c8d20(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar3);
    puVar8 = PTR_PTR_1126af7d0;
    _objc_alloc_init();
    puVar3 = puVar1;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220160(puVar8);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
      ___stack_chk_fail();
      lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar1 = PTR_PTR_1126bca38;
      _objc_opt_new();
      puVar2 = PTR_PTR_1126bca40;
      _objc_opt_new();
      func_0x00010c1c8d40();
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1822a0(puVar2);
      _objc_release(puVar3);
      ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174838;
      func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174838);
      func_0x00010c21e180(puVar2);
      _objc_release(ppuVar4);
      puVar3 = PTR_PTR_1126bca40;
      _objc_opt_new();
      func_0x00010c1c8d40();
      puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1822a0(puVar3);
      _objc_release(puVar5);
      ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174860;
      func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174860);
      func_0x00010c21e180(puVar3);
      _objc_release(ppuVar4);
      puVar5 = PTR_PTR_1126bca40;
      _objc_opt_new();
      func_0x00010c1c8d40();
      puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1822a0(puVar5);
      _objc_release(puVar6);
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c0d3c80();
      func_0x00010c1c8d20(puVar1);
      _objc_release(puVar7);
      puVar8 = PTR_PTR_1126af7d0;
      _objc_alloc_init();
      puVar7 = puVar1;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220160(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
        ___stack_chk_fail();
        lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar1 = PTR_PTR_1126bca38;
        _objc_opt_new();
        puVar2 = PTR_PTR_1126bca40;
        _objc_opt_new();
        func_0x00010c1c8d40();
        puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1822a0(puVar2);
        _objc_release(puVar3);
        ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174888;
        func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174888);
        func_0x00010c21e180(puVar2);
        _objc_release(ppuVar4);
        puVar3 = PTR_PTR_1126bca40;
        _objc_opt_new();
        func_0x00010c1c8d40();
        puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1822a0(puVar3);
        _objc_release(puVar5);
        puVar5 = PTR_PTR_1126bca40;
        _objc_opt_new();
        func_0x00010c1c8d40();
        puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1822a0(puVar5);
        _objc_release(puVar6);
        puVar6 = PTR_PTR_1126bca40;
        _objc_opt_new();
        func_0x00010c1c8d40();
        puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1822a0(puVar6);
        _objc_release(puVar7);
        puVar7 = PTR_PTR_1126bca40;
        _objc_opt_new();
        func_0x00010c1c8d40();
        puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1822a0(puVar7);
        _objc_release(puVar8);
        puVar9 = PTR_PTR_1126bca40;
        _objc_opt_new();
        func_0x00010c1c8d40();
        puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1822a0(puVar9);
        _objc_release(puVar8);
        puVar10 = PTR_PTR_1126bca40;
        _objc_opt_new();
        func_0x00010c1c8d40();
        puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1822a0(puVar10);
        _objc_release(puVar8);
        ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_1111748b0;
        func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_1111748b0);
        func_0x00010c21e180(puVar10);
        _objc_release(ppuVar4);
        puVar11 = PTR_PTR_1126bca40;
        _objc_opt_new();
        func_0x00010c1c8d40();
        puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1822a0(puVar11);
        _objc_release(puVar8);
        ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_1111748d8;
        func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_1111748d8);
        func_0x00010c21e180(puVar11);
        _objc_release(ppuVar4);
        puVar12 = PTR_PTR_1126bca40;
        _objc_opt_new();
        func_0x00010c1c8d40();
        puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1822a0(puVar12);
        _objc_release(puVar8);
        ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174900;
        func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174900);
        func_0x00010c21e180(puVar12);
        _objc_release(ppuVar4);
        puVar13 = PTR_PTR_1126bca40;
        _objc_opt_new();
        func_0x00010c1c8d40();
        puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1822a0(puVar13);
        _objc_release(puVar8);
        ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174928;
        func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174928);
        func_0x00010c21e180(puVar13);
        _objc_release(ppuVar4);
        puVar14 = PTR_PTR_1126bca40;
        _objc_opt_new();
        func_0x00010c1c8d40(puVar13);
        puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1822a0(puVar13);
        _objc_release(puVar8);
        ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174950;
        func_0x00010c0d3c80();
        func_0x00010c21e180(puVar13);
        _objc_release(ppuVar4);
        puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar15;
        func_0x00010c0d3c80();
        func_0x00010c1c8d20(puVar1);
        _objc_release(puVar8);
        puVar8 = PTR_PTR_1126af7d0;
        _objc_alloc_init();
        puVar16 = puVar1;
        func_0x00010bf63640();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220160(puVar8);
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(puVar1);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
          ___stack_chk_fail();
          _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105671430; end: 1056715a7; +[SCPercMLModelDeliveryCOF _defaultFaceEmbeddingModelDeliveryConfig] */

void FUN_105671430(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
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
  long lVar17;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126bca38;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126bca40;
  _objc_opt_new();
  func_0x00010c1c8d40();
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822a0(puVar2);
  _objc_release(puVar3);
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174810;
  func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174810);
  func_0x00010c21e180(puVar2);
  _objc_release(ppuVar4);
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c0d3c80();
  func_0x00010c1c8d20(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126af7d0;
  _objc_alloc_init();
  puVar5 = puVar1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
    ___stack_chk_fail();
    lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = PTR_PTR_1126bca38;
    _objc_opt_new();
    puVar2 = PTR_PTR_1126bca40;
    _objc_opt_new();
    func_0x00010c1c8d40();
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1822a0(puVar2);
    _objc_release(puVar3);
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174838;
    func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174838);
    func_0x00010c21e180(puVar2);
    _objc_release(ppuVar4);
    puVar5 = PTR_PTR_1126bca40;
    _objc_opt_new();
    func_0x00010c1c8d40();
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1822a0(puVar5);
    _objc_release(puVar3);
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174860;
    func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174860);
    func_0x00010c21e180(puVar5);
    _objc_release(ppuVar4);
    puVar6 = PTR_PTR_1126bca40;
    _objc_opt_new();
    func_0x00010c1c8d40();
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1822a0(puVar6);
    _objc_release(puVar3);
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010c0d3c80();
    func_0x00010c1c8d20(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126af7d0;
    _objc_alloc_init();
    puVar8 = puVar1;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220160(puVar3);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
      ___stack_chk_fail();
      lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar1 = PTR_PTR_1126bca38;
      _objc_opt_new();
      puVar2 = PTR_PTR_1126bca40;
      _objc_opt_new();
      func_0x00010c1c8d40();
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1822a0(puVar2);
      _objc_release(puVar3);
      ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174888;
      func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174888);
      func_0x00010c21e180(puVar2);
      _objc_release(ppuVar4);
      puVar5 = PTR_PTR_1126bca40;
      _objc_opt_new();
      func_0x00010c1c8d40();
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1822a0(puVar5);
      _objc_release(puVar3);
      puVar6 = PTR_PTR_1126bca40;
      _objc_opt_new();
      func_0x00010c1c8d40();
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1822a0(puVar6);
      _objc_release(puVar3);
      puVar7 = PTR_PTR_1126bca40;
      _objc_opt_new();
      func_0x00010c1c8d40();
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1822a0(puVar7);
      _objc_release(puVar3);
      puVar8 = PTR_PTR_1126bca40;
      _objc_opt_new();
      func_0x00010c1c8d40();
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1822a0(puVar8);
      _objc_release(puVar3);
      puVar9 = PTR_PTR_1126bca40;
      _objc_opt_new();
      func_0x00010c1c8d40();
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1822a0(puVar9);
      _objc_release(puVar3);
      puVar10 = PTR_PTR_1126bca40;
      _objc_opt_new();
      func_0x00010c1c8d40();
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1822a0(puVar10);
      _objc_release(puVar3);
      ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_1111748b0;
      func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_1111748b0);
      func_0x00010c21e180(puVar10);
      _objc_release(ppuVar4);
      puVar11 = PTR_PTR_1126bca40;
      _objc_opt_new();
      func_0x00010c1c8d40();
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1822a0(puVar11);
      _objc_release(puVar3);
      ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_1111748d8;
      func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_1111748d8);
      func_0x00010c21e180(puVar11);
      _objc_release(ppuVar4);
      puVar12 = PTR_PTR_1126bca40;
      _objc_opt_new();
      func_0x00010c1c8d40();
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1822a0(puVar12);
      _objc_release(puVar3);
      ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174900;
      func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174900);
      func_0x00010c21e180(puVar12);
      _objc_release(ppuVar4);
      puVar13 = PTR_PTR_1126bca40;
      _objc_opt_new();
      func_0x00010c1c8d40();
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1822a0(puVar13);
      _objc_release(puVar3);
      ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174928;
      func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174928);
      func_0x00010c21e180(puVar13);
      _objc_release(ppuVar4);
      puVar14 = PTR_PTR_1126bca40;
      _objc_opt_new();
      func_0x00010c1c8d40(puVar13);
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1822a0(puVar13);
      _objc_release(puVar3);
      ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174950;
      func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174950);
      func_0x00010c21e180(puVar13);
      _objc_release(ppuVar4);
      puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar15;
      func_0x00010c0d3c80();
      func_0x00010c1c8d20(puVar1);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126af7d0;
      _objc_alloc_init(PTR_PTR_1126af7d0);
      puVar16 = puVar1;
      func_0x00010bf63640(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220160(puVar3);
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar2);
      _objc_release(puVar1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
        ___stack_chk_fail();
        _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1056715a8; end: 10567180f; +[SCPercMLModelDeliveryCOF _defaultScanModelDeliveryGatingConfig] */

void FUN_1056715a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
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
  long lVar17;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126bca38;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126bca40;
  _objc_opt_new();
  func_0x00010c1c8d40();
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822a0(puVar2);
  _objc_release(puVar3);
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174838;
  func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174838);
  func_0x00010c21e180(puVar2);
  _objc_release(ppuVar4);
  puVar3 = PTR_PTR_1126bca40;
  _objc_opt_new();
  func_0x00010c1c8d40();
  puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822a0(puVar3);
  _objc_release(puVar5);
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174860;
  func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174860);
  func_0x00010c21e180(puVar3);
  _objc_release(ppuVar4);
  puVar5 = PTR_PTR_1126bca40;
  _objc_opt_new();
  func_0x00010c1c8d40();
  puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822a0(puVar5);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0d3c80();
  func_0x00010c1c8d20(puVar1);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126af7d0;
  _objc_alloc_init();
  puVar8 = puVar1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
    ___stack_chk_fail();
    lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = PTR_PTR_1126bca38;
    _objc_opt_new();
    puVar2 = PTR_PTR_1126bca40;
    _objc_opt_new();
    func_0x00010c1c8d40();
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1822a0(puVar2);
    _objc_release(puVar3);
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174888;
    func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174888);
    func_0x00010c21e180(puVar2);
    _objc_release(ppuVar4);
    puVar3 = PTR_PTR_1126bca40;
    _objc_opt_new();
    func_0x00010c1c8d40();
    puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1822a0(puVar3);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126bca40;
    _objc_opt_new();
    func_0x00010c1c8d40();
    puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1822a0(puVar5);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126bca40;
    _objc_opt_new();
    func_0x00010c1c8d40();
    puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1822a0(puVar6);
    _objc_release(puVar7);
    puVar8 = PTR_PTR_1126bca40;
    _objc_opt_new();
    func_0x00010c1c8d40();
    puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1822a0(puVar8);
    _objc_release(puVar7);
    puVar9 = PTR_PTR_1126bca40;
    _objc_opt_new();
    func_0x00010c1c8d40();
    puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1822a0(puVar9);
    _objc_release(puVar7);
    puVar10 = PTR_PTR_1126bca40;
    _objc_opt_new();
    func_0x00010c1c8d40();
    puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1822a0(puVar10);
    _objc_release(puVar7);
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_1111748b0;
    func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_1111748b0);
    func_0x00010c21e180(puVar10);
    _objc_release(ppuVar4);
    puVar11 = PTR_PTR_1126bca40;
    _objc_opt_new();
    func_0x00010c1c8d40();
    puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1822a0(puVar11);
    _objc_release(puVar7);
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_1111748d8;
    func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_1111748d8);
    func_0x00010c21e180(puVar11);
    _objc_release(ppuVar4);
    puVar12 = PTR_PTR_1126bca40;
    _objc_opt_new();
    func_0x00010c1c8d40();
    puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1822a0(puVar12);
    _objc_release(puVar7);
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174900;
    func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174900);
    func_0x00010c21e180(puVar12);
    _objc_release(ppuVar4);
    puVar13 = PTR_PTR_1126bca40;
    _objc_opt_new();
    func_0x00010c1c8d40();
    puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1822a0(puVar13);
    _objc_release(puVar7);
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174928;
    func_0x00010c0d3c80();
    func_0x00010c21e180(puVar13);
    _objc_release(ppuVar4);
    puVar14 = PTR_PTR_1126bca40;
    _objc_opt_new();
    func_0x00010c1c8d40(puVar13);
    puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1822a0(puVar13);
    _objc_release(puVar7);
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174950;
    func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174950);
    func_0x00010c21e180(puVar13);
    _objc_release(ppuVar4);
    puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar15;
    func_0x00010c0d3c80();
    func_0x00010c1c8d20(puVar1);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126af7d0;
    _objc_alloc_init();
    puVar16 = puVar1;
    func_0x00010bf63640(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220160(puVar7);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
      ___stack_chk_fail();
      _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105671810; end: 105671e27; +[SCPercMLModelDeliveryCOF _defaultScanQRCodeConfig] */

void FUN_105671810(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
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
  long lVar17;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126bca38;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126bca40;
  _objc_opt_new();
  func_0x00010c1c8d40();
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822a0(puVar2);
  _objc_release(puVar3);
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174888;
  func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174888);
  func_0x00010c21e180(puVar2);
  _objc_release(ppuVar4);
  puVar3 = PTR_PTR_1126bca40;
  _objc_opt_new();
  func_0x00010c1c8d40();
  puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822a0(puVar3);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126bca40;
  _objc_opt_new();
  func_0x00010c1c8d40();
  puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822a0(puVar5);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126bca40;
  _objc_opt_new();
  func_0x00010c1c8d40();
  puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822a0(puVar6);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126bca40;
  _objc_opt_new();
  func_0x00010c1c8d40();
  puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822a0(puVar7);
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126bca40;
  _objc_opt_new();
  func_0x00010c1c8d40();
  puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822a0(puVar8);
  _objc_release(puVar9);
  puVar9 = PTR_PTR_1126bca40;
  _objc_opt_new();
  func_0x00010c1c8d40();
  puVar10 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822a0(puVar9);
  _objc_release(puVar10);
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_1111748b0;
  func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_1111748b0);
  func_0x00010c21e180(puVar9);
  _objc_release(ppuVar4);
  puVar10 = PTR_PTR_1126bca40;
  _objc_opt_new();
  func_0x00010c1c8d40();
  puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822a0(puVar10);
  _objc_release(puVar11);
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_1111748d8;
  func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_1111748d8);
  func_0x00010c21e180(puVar10);
  _objc_release(ppuVar4);
  puVar11 = PTR_PTR_1126bca40;
  _objc_opt_new();
  func_0x00010c1c8d40();
  puVar12 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822a0(puVar11);
  _objc_release(puVar12);
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174900;
  func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174900);
  func_0x00010c21e180(puVar11);
  _objc_release(ppuVar4);
  puVar12 = PTR_PTR_1126bca40;
  _objc_opt_new();
  func_0x00010c1c8d40();
  puVar13 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822a0(puVar12);
  _objc_release(puVar13);
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174928;
  func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174928);
  func_0x00010c21e180(puVar12);
  _objc_release(ppuVar4);
  puVar14 = PTR_PTR_1126bca40;
  _objc_opt_new();
  func_0x00010c1c8d40(puVar12);
  puVar13 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1822a0(puVar12);
  _objc_release(puVar13);
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantDictionary_111174950;
  func_0x00010c0d3c80();
  func_0x00010c21e180(puVar12);
  _objc_release(ppuVar4);
  puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar15;
  func_0x00010c0d3c80();
  func_0x00010c1c8d20(puVar1);
  _objc_release(puVar13);
  puVar16 = PTR_PTR_1126af7d0;
  _objc_alloc_init();
  puVar13 = puVar1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(puVar16);
  _objc_release(puVar13);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 105671e28; end: 105671e57; -[SCPercMLModelDeliveryCOF .cxx_destruct] */

void FUN_105671e28(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105671e58; end: 105671f13; -[SCPercMLDefaultModelFactory initWithLogger:] */

undefined1 * FUN_105671e58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9898;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSCache_1126b3388;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 0x10));
    puVar3 = &UNK_10f2e5382;
    _dispatch_queue_create(&UNK_10f2e5382,0);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105671f14; end: 105671f5f; -[SCPercMLDefaultModelFactory dealloc] */

void FUN_105671f14(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x10),param_2,0);
  puStack_28 = PTR_PTR_1126e9898;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105671f60; end: 105672067; -[SCPercMLDefaultModelFactory cache:willEvictObject:] */

void FUN_105671f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105672068; end: 1056720ff;  */

void FUN_105672068(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105672100;
    puStack_40 = &UNK_110842e18;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    func_0x00010007380c(uVar3,&puStack_58);
    _objc_release(uStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105672100; end: 105672103;  */

void FUN_105672100(void)

{
  return;
}



/* Entry: 105672104; end: 1056722d3; -[SCPercMLDefaultModelFactory modelWithModelKey:handle:deliverableModel:perceptionConfigurationServices:error:] */

void FUN_105672104(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,long *param_7)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar3 = 0;
  if (((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) {
    lVar2 = param_5;
    func_0x00010c0cfe00();
    iVar1 = (int)lVar2;
    if (iVar1 < 2) {
      if ((iVar1 == -0x4524111) || (iVar1 == 0)) {
        if (param_7 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          FUN_10567302c();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *param_7 = lVar2;
          uVar3 = 0;
        }
      }
      else if (iVar1 == 1) {
        func_0x00010be36ea0(param_1,param_2,param_3,param_4,param_5,param_7);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_1;
      }
    }
    else if (iVar1 < 4) {
      if (iVar1 == 2) {
        func_0x00010bdd29a0(param_1,param_2,param_3,param_4,param_5,param_7);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_1;
      }
      else if (iVar1 == 3) {
        func_0x00010bebd940(param_1,param_2,param_3,param_4,param_5,param_7);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_1;
      }
    }
    else if (iVar1 == 4) {
      func_0x00010be36f80(param_1,param_2,param_3,param_4,param_5,param_7);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
    }
    else if (iVar1 == 5) {
      func_0x00010be67280(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1056722d4; end: 1056724a3; -[SCPercMLDefaultModelFactory _odinModelWithModelKey:handle:deliverableModel:perceptionConfigurationServices:error:] */

void FUN_1056722d4(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c0cff20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfda7c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    func_0x00010bdf09a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_3);
    param_3 = param_1;
    if (param_1 == (undefined *)0x0) {
      param_1 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126bca48;
      _objc_alloc(PTR_PTR_1126bca48);
      func_0x00010c01c5e0();
      param_1 = PTR_PTR_1126bca50;
      _objc_alloc(PTR_PTR_1126bca50);
      puVar4 = PTR_PTR_1126bca58;
      func_0x00010bfe70e0(PTR_PTR_1126bca58,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_4;
      func_0x00010c291840(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf51e00();
      func_0x00010bff3240(param_1,param_2,puVar4,uVar2);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
  }
  else {
    func_0x00010be0dd80(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(param_5);
  }
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1056724a4; end: 1056725a7; -[SCPercMLDefaultModelFactory _faceEmbeddingModelWithModelKey:handle:deliverableModel:perceptionConfigurationServices:error:] */

void FUN_1056724a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  func_0x00010bdf09a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126bca50;
    _objc_alloc(PTR_PTR_1126bca50);
    puVar1 = PTR_PTR_1126bca58;
    func_0x00010bf9f100(PTR_PTR_1126bca58,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c291840(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    func_0x00010bff3240(puVar4,param_2,puVar1,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1056725a8; end: 1056727a7; -[SCPercMLDefaultModelFactory _createODINClassificationModelWithModelKey:handle:deliverableModel:perceptionConfigurationServices:error:] */

void FUN_1056725a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *unaff_x25;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = param_5;
  func_0x00010c0d0000();
  uVar1 = (uint)uVar2;
  if (uVar1 < 8) {
    if ((1 << (ulong)(uVar1 & 0x1f) & 0x53U) == 0) {
      if (uVar1 == 7) {
        uVar2 = param_4;
        func_0x00010c0cff20(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c25cde0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        unaff_x25 = *(undefined **)(param_1 + 0x10);
        func_0x00010c0dff20(unaff_x25,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x25 == (undefined *)0x0) {
          unaff_x25 = PTR_PTR_1126bca60;
          _objc_alloc();
          uVar2 = param_4;
          func_0x00010c0cff20();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = param_5;
          func_0x00010c0f7ee0(param_5);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_6;
          func_0x00010c0e1500(param_6);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x0001000f73a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c02c6e0(unaff_x25,param_2,param_3,uVar2,uVar4,uVar5,uVar6);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(uVar2);
          if (unaff_x25 != (undefined *)0x0) {
            func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x10),param_2,unaff_x25,uVar3);
          }
        }
        _objc_release(uVar3);
      }
    }
    else if (param_7 == (undefined8 *)0x0) {
      unaff_x25 = (undefined *)0x0;
    }
    else {
      func_0x000105673048();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      unaff_x25 = (undefined *)0x0;
      *param_7 = uVar2;
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x25);
  return;
}



/* Entry: 1056727a8; end: 1056729bb; -[SCPercMLDefaultModelFactory _imageClassificationModelWithModelKey:handle:deliverableModel:error:] */

void FUN_1056727a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long *param_6)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_5;
  func_0x00010c0d0000();
  puVar7 = (undefined *)0x0;
  uVar1 = (uint)lVar2;
  if (uVar1 < 8) {
    if ((1 << (ulong)(uVar1 & 0x1f) & 0xd1U) != 0) {
      if (param_6 != (long *)0x0) {
        func_0x000105673048();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        puVar7 = (undefined *)0x0;
        lVar9 = 0;
        puVar8 = (undefined *)0x0;
        *param_6 = lVar2;
        goto LAB_105672970;
      }
      puVar7 = (undefined *)0x0;
      lVar9 = 0;
LAB_10567284c:
      puVar8 = (undefined *)0x0;
      goto LAB_105672970;
    }
    if (uVar1 == 1) {
      puVar7 = PTR_PTR_1126bca68;
      _objc_alloc(PTR_PTR_1126bca68);
      uVar3 = param_4;
      func_0x00010c0cff20(param_4);
      _objc_retainAutoreleasedReturnValue();
      lStack_68 = 0;
      func_0x00010c02c6c0(puVar7,param_2,param_3,uVar3,param_5,*(undefined8 *)(param_1 + 8),
                          &lStack_68);
      lVar9 = lStack_68;
      _objc_retain(lStack_68);
      _objc_release(uVar3);
      if (lVar9 != 0) {
        if (param_6 != (long *)0x0) {
          _objc_retainAutorelease(lVar9);
          puVar8 = (undefined *)0x0;
          *param_6 = lVar9;
          goto LAB_105672970;
        }
        goto LAB_10567284c;
      }
    }
  }
  puVar4 = PTR_PTR_1126bca48;
  _objc_alloc(PTR_PTR_1126bca48);
  func_0x00010c01c5e0();
  puVar8 = PTR_PTR_1126bca50;
  _objc_alloc(PTR_PTR_1126bca50);
  puVar5 = PTR_PTR_1126bca58;
  func_0x00010bfe70e0(PTR_PTR_1126bca58,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c291840(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf51e00();
  func_0x00010bff3240(puVar8,param_2,puVar5,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  lVar9 = 0;
LAB_105672970:
  _objc_release(lVar9);
  _objc_release(puVar7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1056729bc; end: 105672bcf; -[SCPercMLDefaultModelFactory _imageEmbeddingModelWithModelKey:handle:deliverableModel:error:] */

void FUN_1056729bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long *param_6)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_5;
  func_0x00010c0d0000();
  puVar7 = (undefined *)0x0;
  uVar1 = (uint)lVar2;
  if (uVar1 < 8) {
    if ((1 << (ulong)(uVar1 & 0x1f) & 0xd1U) != 0) {
      if (param_6 != (long *)0x0) {
        func_0x000105673048();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        puVar7 = (undefined *)0x0;
        lVar9 = 0;
        puVar8 = (undefined *)0x0;
        *param_6 = lVar2;
        goto LAB_105672b84;
      }
      puVar7 = (undefined *)0x0;
      lVar9 = 0;
LAB_105672a60:
      puVar8 = (undefined *)0x0;
      goto LAB_105672b84;
    }
    if (uVar1 == 1) {
      puVar7 = PTR_PTR_1126bca70;
      _objc_alloc(PTR_PTR_1126bca70);
      uVar3 = param_4;
      func_0x00010c0cff20(param_4);
      _objc_retainAutoreleasedReturnValue();
      lStack_68 = 0;
      func_0x00010c02c6c0(puVar7,param_2,param_3,uVar3,param_5,*(undefined8 *)(param_1 + 8),
                          &lStack_68);
      lVar9 = lStack_68;
      _objc_retain(lStack_68);
      _objc_release(uVar3);
      if (lVar9 != 0) {
        if (param_6 != (long *)0x0) {
          _objc_retainAutorelease(lVar9);
          puVar8 = (undefined *)0x0;
          *param_6 = lVar9;
          goto LAB_105672b84;
        }
        goto LAB_105672a60;
      }
    }
  }
  puVar4 = PTR_PTR_1126bca78;
  _objc_alloc(PTR_PTR_1126bca78);
  func_0x00010c01c8a0();
  puVar8 = PTR_PTR_1126bca50;
  _objc_alloc(PTR_PTR_1126bca50);
  puVar5 = PTR_PTR_1126bca58;
  func_0x00010bfe7640(PTR_PTR_1126bca58,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c291840(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf51e00();
  func_0x00010bff3240(puVar8,param_2,puVar5,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  lVar9 = 0;
LAB_105672b84:
  _objc_release(lVar9);
  _objc_release(puVar7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105672bd0; end: 105672ddf; -[SCPercMLDefaultModelFactory _barcodeDetectionModelWithModelKey:handle:deliverableModel:error:] */

void FUN_105672bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long *param_6)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_5;
  func_0x00010c0d0000();
  puVar7 = (undefined *)0x0;
  uVar1 = (uint)lVar2;
  if (uVar1 < 8) {
    if ((1 << (ulong)(uVar1 & 0x1f) & 0xc3U) != 0) {
      if (param_6 != (long *)0x0) {
        func_0x000105673048();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        puVar7 = (undefined *)0x0;
        lVar9 = 0;
        puVar8 = (undefined *)0x0;
        *param_6 = lVar2;
        goto LAB_105672d94;
      }
      puVar7 = (undefined *)0x0;
      lVar9 = 0;
LAB_105672c74:
      puVar8 = (undefined *)0x0;
      goto LAB_105672d94;
    }
    if (uVar1 == 4) {
      puVar7 = PTR_PTR_1126bca80;
      _objc_alloc(PTR_PTR_1126bca80);
      uVar3 = param_4;
      func_0x00010c0cff20(param_4);
      _objc_retainAutoreleasedReturnValue();
      lStack_68 = 0;
      func_0x00010c02c6a0(puVar7,param_2,param_3,uVar3,param_5,&lStack_68);
      lVar9 = lStack_68;
      _objc_retain(lStack_68);
      _objc_release(uVar3);
      if (lVar9 != 0) {
        if (param_6 != (long *)0x0) {
          _objc_retainAutorelease(lVar9);
          puVar8 = (undefined *)0x0;
          *param_6 = lVar9;
          goto LAB_105672d94;
        }
        goto LAB_105672c74;
      }
    }
  }
  puVar4 = PTR_PTR_1126bca88;
  _objc_alloc(PTR_PTR_1126bca88);
  func_0x00010bff6ac0();
  puVar8 = PTR_PTR_1126bca50;
  _objc_alloc(PTR_PTR_1126bca50);
  puVar5 = PTR_PTR_1126bca58;
  func_0x00010bf15b80(PTR_PTR_1126bca58,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c291840(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf51e00();
  func_0x00010bff3240(puVar8,param_2,puVar5,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  lVar9 = 0;
LAB_105672d94:
  _objc_release(lVar9);
  _objc_release(puVar7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105672de0; end: 105672fef; -[SCPercMLDefaultModelFactory _snapcodeDetectionModelWithModelKey:handle:deliverableModel:error:] */

void FUN_105672de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long *param_6)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_5;
  func_0x00010c0d0000();
  puVar7 = (undefined *)0x0;
  uVar1 = (uint)lVar2;
  if (uVar1 < 8) {
    if ((1 << (ulong)(uVar1 & 0x1f) & 0x93U) != 0) {
      if (param_6 != (long *)0x0) {
        func_0x000105673048();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        puVar7 = (undefined *)0x0;
        lVar9 = 0;
        puVar8 = (undefined *)0x0;
        *param_6 = lVar2;
        goto LAB_105672fa4;
      }
      puVar7 = (undefined *)0x0;
      lVar9 = 0;
LAB_105672e84:
      puVar8 = (undefined *)0x0;
      goto LAB_105672fa4;
    }
    if (uVar1 == 6) {
      puVar7 = PTR_PTR_1126bca90;
      _objc_alloc(PTR_PTR_1126bca90);
      uVar3 = param_4;
      func_0x00010c0cff20(param_4);
      _objc_retainAutoreleasedReturnValue();
      lStack_68 = 0;
      func_0x00010c02c6a0(puVar7,param_2,param_3,uVar3,param_5,&lStack_68);
      lVar9 = lStack_68;
      _objc_retain(lStack_68);
      _objc_release(uVar3);
      if (lVar9 != 0) {
        if (param_6 != (long *)0x0) {
          _objc_retainAutorelease(lVar9);
          puVar8 = (undefined *)0x0;
          *param_6 = lVar9;
          goto LAB_105672fa4;
        }
        goto LAB_105672e84;
      }
    }
  }
  puVar4 = PTR_PTR_1126bca98;
  _objc_alloc(PTR_PTR_1126bca98);
  func_0x00010c04a060();
  puVar8 = PTR_PTR_1126bca50;
  _objc_alloc(PTR_PTR_1126bca50);
  puVar5 = PTR_PTR_1126bca58;
  func_0x00010c245000(PTR_PTR_1126bca58,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c291840(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf51e00();
  func_0x00010bff3240(puVar8,param_2,puVar5,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  lVar9 = 0;
LAB_105672fa4:
  _objc_release(lVar9);
  _objc_release(puVar7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105672ff0; end: 10567302b; -[SCPercMLDefaultModelFactory .cxx_destruct] */

void FUN_105672ff0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10567302c; end: 1056730ef;  */

void FUN_10567302c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_code_userInfo__1125c3e38,
             &PTR____CFConstantStringClassReference_110df4958,2,0);
  return;
}



/* Entry: 1056730f0; end: 1056734f3;  */

void FUN_1056730f0(undefined *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *unaff_x19;
  undefined *unaff_x20;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar8 = (undefined *)0x0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = (undefined *)(ulong)*(uint *)(param_1 + 8);
  puVar10 = (undefined *)(ulong)*(uint *)(param_1 + 0xc);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 < 2) {
    if (iVar3 == 0) {
      unaff_x19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      unaff_x20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_78 = unaff_x19;
      func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_70 = unaff_x20;
      func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_68 = puVar4;
      func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_60 = puVar5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (iVar3 != 1) goto LAB_1056733c0;
      unaff_x19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      unaff_x20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_98 = unaff_x19;
      func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_90 = unaff_x20;
      func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_88 = puVar4;
      func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_80 = puVar5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_98,4);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (iVar3 == 2) {
    unaff_x19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar10);
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_b8 = unaff_x19;
    func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_b0 = unaff_x20;
    func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_a8 = puVar4;
    func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_b8,4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (iVar3 != 3) goto LAB_1056733c0;
    unaff_x19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_d8 = unaff_x19;
    func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_d0 = unaff_x20;
    func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_c8 = puVar4;
    func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_c0 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d8,4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(unaff_x20);
  param_1 = unaff_x19;
  _objc_release();
  puVar10 = puVar4;
  puVar9 = puVar5;
LAB_1056733c0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(puVar9);
    _objc_release(puVar10);
    _objc_release(unaff_x20);
    _objc_release(unaff_x19);
    __Unwind_Resume();
    FUN_1056730f0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    if (param_1 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar9 = param_1;
      func_0x00010bf529e0(param_1);
      func_0x00010bf0a0e0(puVar8,param_2,puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = (undefined *)0x0;
      puVar10 = (undefined *)0x1;
      while (puVar4 = param_1, func_0x00010bf529e0(), puVar9 < puVar4) {
        puVar9 = puVar9 + 1;
        lVar7 = 1;
        for (puVar4 = puVar10; puVar5 = param_1, func_0x00010bf529e0(), puVar4 < puVar5;
            puVar4 = puVar4 + 1) {
          puVar5 = param_1;
          func_0x00010c0dfd40(param_1,param_2,puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c2827c0();
          lVar7 = (long)puVar6 * lVar7;
          _objc_release(puVar5);
        }
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar8,param_2,puVar4);
        _objc_release(puVar4);
        puVar10 = puVar10 + 1;
      }
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1056734f4; end: 105673653;  */

void FUN_1056734f4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  FUN_1056730f0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar7 = param_1;
    func_0x00010bf529e0(param_1);
    func_0x00010bf0a0e0(puVar5,param_2,uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0;
    uVar8 = 1;
    while (uVar1 = param_1, func_0x00010bf529e0(), uVar7 < uVar1) {
      uVar7 = uVar7 + 1;
      lVar6 = 1;
      for (uVar1 = uVar8; uVar2 = param_1, func_0x00010bf529e0(), uVar1 < uVar2; uVar1 = uVar1 + 1)
      {
        uVar2 = param_1;
        func_0x00010c0dfd40(param_1,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c2827c0();
        lVar6 = uVar3 * lVar6;
        _objc_release(uVar2);
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar5,param_2,puVar4);
      _objc_release(puVar4);
      uVar8 = uVar8 + 1;
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105673654; end: 105673677;  */

undefined8 FUN_105673654(long param_1)

{
  if (*(uint *)(param_1 + 0x18) < 0x10) {
    return *(undefined8 *)(&UNK_10ddb83d8 + (ulong)*(uint *)(param_1 + 0x18) * 8);
  }
  return 5;
}



/* Entry: 105673678; end: 10567376b;  */

void FUN_105673678(int param_1,long param_2,long param_3)

{
  if (param_1 < 5) {
    if (param_1 == 1) {
      func_0x00010c0df740(*(undefined4 *)(param_2 + param_3 * 4),
                          PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_1 == 2) {
      func_0x00010c0df720(*(undefined8 *)(param_2 + param_3 * 8),
                          PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_1 == 3) {
      func_0x00010c0df800(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                          *(undefined1 *)(param_2 + param_3));
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_1 == 5) {
    func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                        *(undefined4 *)(param_2 + param_3 * 4));
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_1 == 6) {
    func_0x00010c0df700(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                        (long)*(char *)(param_2 + param_3));
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_1 == 8) {
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                        *(undefined4 *)(param_2 + param_3 * 4));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10567376c; end: 10567383b; +[SCPercMLFastDNNModelFactory fastDNNModelFromDeliverableModel:error:output:] */

void FUN_10567376c(undefined8 param_1,undefined8 param_2,long param_3,long *param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (param_5 != 0)) {
    lVar2 = param_3;
    func_0x00010c0d0000();
    puVar1 = PTR_PTR_1126bcaa0;
    if ((int)lVar2 == 1) {
      lVar2 = param_3;
      func_0x00010bfa0d60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa0cc0(puVar1,param_2,lVar2,param_4,param_5);
      _objc_release(lVar2);
    }
    else if (param_4 != (long *)0x0) {
      func_0x000105673064();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_4 = lVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10567383c; end: 105673ce7; +[SCPercMLFastDNNModelFactory fastDNNModelFromFastDNNDeliverableModel:error:output:] */

void FUN_10567383c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  long lStack_238;
  undefined4 uStack_230;
  undefined2 uStack_22c;
  undefined1 uStack_22a;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined2 uStack_210;
  undefined4 uStack_20e;
  undefined1 uStack_20a;
  undefined2 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined2 uStack_1fc;
  undefined1 uStack_1fa;
  undefined4 uStack_1f8;
  undefined2 uStack_1f4;
  undefined4 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined **ppuStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined **appuStack_108 [6];
  undefined8 uStack_d8;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c0cfdc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0cfdc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  uVar6 = uVar2;
  func_0x00010c0cfdc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c08fa60();
  func_0x000100362a1c(&puStack_248,uVar5,uVar7);
  uStack_d8 = 0;
  uStack_180 = 0;
  ppuStack_178 = &PTR_FUN_1108a5a60;
  appuStack_108[0] = &PTR___ZTv0_n24_NSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108a5ba0;
  ppuStack_188 = &PTR___ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108a5b78;
  __ZNSt3__18ios_base4initEPv(appuStack_108,&ppuStack_170);
  uStack_80 = 0;
  uStack_78 = 0xffffffff;
  ppuStack_188 = &PTR_SUB_1108a5a38;
  ppuStack_178 = &PTR_FUN_1108a5a60;
  ppuStack_170 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  appuStack_108[0] = &PTR_FUN_1108a5a88;
  __ZNSt3__16localeC1Ev(auStack_168);
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = puStack_240;
  puStack_130 = puStack_248;
  ppuStack_170 = &PTR_DAT_11088d7b0;
  lStack_120 = lStack_238;
  uStack_118 = 0;
  puStack_248 = (undefined8 *)0x0;
  puStack_240 = (undefined8 *)0x0;
  lStack_238 = 0;
  uStack_110 = 0x18;
  func_0x000100552df0(&ppuStack_170);
  if (lStack_238 < 0) {
    __ZdlPv(puStack_248);
  }
  _objc_release(uVar6);
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126bcaa0;
  lStack_190 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uVar4 = uVar2;
  func_0x00010c066460(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be60f80(puVar1);
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126bcaa0;
  uVar4 = uVar2;
  func_0x00010c0ef240(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be60f80(puVar1);
  _objc_release(uVar4);
  puStack_248 = (undefined8 *)0x0;
  puStack_240 = (undefined8 *)0x0;
  lStack_238 = 0;
  uStack_230 = 0x3f800000;
  uStack_22c = 0;
  uStack_22a = 0;
  uStack_220 = 0;
  lStack_218 = 0;
  uStack_228 = 0;
  uStack_210 = 0x200;
  uStack_20e = 0;
  uStack_20a = 0;
  uStack_208 = 1;
  uStack_204 = 0;
  uStack_200 = 0x10000;
  uStack_1fc = 0x100;
  uStack_1fa = 1;
  uStack_1f8 = 0x1000000;
  uStack_1f4 = 1;
  uStack_1f0 = 0x100;
  uStack_1e8 = 100000;
  uStack_1e0 = 0;
  uStack_1dc = 1;
  uStack_1d8 = 0;
  func_0x00010be75ee0(PTR_PTR_1126bcaa0);
  puVar1 = PTR_PTR_1126bcaa0;
  func_0x00010bf13ae0(uVar2);
  func_0x00010be0e600(puVar1);
  func_0x00010be60fc0(puVar1);
  if (lStack_218 < 0) {
    __ZdlPv(uStack_228);
  }
  if (puStack_248 != (undefined8 *)0x0) {
    puStack_240 = puStack_248;
    __ZdlPv();
  }
  if (lStack_190 < 0) {
    __ZdlPv(uStack_1a0);
  }
  puStack_248 = &uStack_1b8;
  FUN_1056748e8(&puStack_248);
  puStack_248 = &uStack_1d0;
  FUN_1056748e8(&puStack_248);
  ppuStack_188 = &PTR_SUB_1108a5a38;
  ppuStack_178 = &PTR_FUN_1108a5a60;
  appuStack_108[0] = &PTR_FUN_1108a5a88;
  ppuStack_170 = &PTR_DAT_11088d7b0;
  if (lStack_120 < 0) {
    __ZdlPv(puStack_130);
  }
  ppuStack_170 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_168);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_188,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_108);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105673ce8; end: 105673e0f;  */

long * FUN_105673ce8(long *param_1)

{
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}


