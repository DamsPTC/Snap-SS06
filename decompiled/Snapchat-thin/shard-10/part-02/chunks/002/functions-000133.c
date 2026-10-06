/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107c8ee8c; end: 107c8ee93; -[SCDiscoverFeedStoryCircleCollectionViewModel longPressActionModel] */

undefined8 FUN_107c8ee8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107c8ee94; end: 107c8ee9b; -[SCDiscoverFeedStoryCircleCollectionViewModel preferredSize] */

undefined1  [16] FUN_107c8ee94(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x70);
}



/* Entry: 107c8ee9c; end: 107c8eea3; -[SCDiscoverFeedStoryCircleCollectionViewModel displayLabelInset] */

undefined8 FUN_107c8ee9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107c8eea4; end: 107c8eeab; -[SCDiscoverFeedStoryCircleCollectionViewModel alpha] */

undefined8 FUN_107c8eea4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107c8eeac; end: 107c8eeb3; -[SCDiscoverFeedStoryCircleCollectionViewModel layoutConfig] */

undefined8 FUN_107c8eeac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107c8eeb4; end: 107c8eebb; -[SCDiscoverFeedStoryCircleCollectionViewModel storyLoggingInfo] */

undefined8 FUN_107c8eeb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107c8eebc; end: 107c8eec3; -[SCDiscoverFeedStoryCircleCollectionViewModel storySuggestionViewModel] */

undefined8 FUN_107c8eebc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107c8eec4; end: 107c8eecb; -[SCDiscoverFeedStoryCircleCollectionViewModel isFanPass] */

undefined1 FUN_107c8eec4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107c8eecc; end: 107c8eed3; -[SCDiscoverFeedStoryCircleCollectionViewModel useSigTitleLabel] */

undefined1 FUN_107c8eecc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107c8eed4; end: 107c8eedb; -[SCDiscoverFeedStoryCircleCollectionViewModel sigTextStyle] */

undefined8 FUN_107c8eed4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107c8eedc; end: 107c8eee3; -[SCDiscoverFeedStoryCircleCollectionViewModel mainTitleOneLine] */

undefined1 FUN_107c8eedc(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107c8eee4; end: 107c8ef67; -[SCDiscoverFeedStoryCircleCollectionViewModel .cxx_destruct] */

void FUN_107c8eee4(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107c8ef68; end: 107c8f07b; -[SCDiscoverFeedStoryCircleMutedStoriesCollectionViewModel initWithTitle:fontType:preferredSize:alpha:tapActionModel:layoutConfig:displayLabelInset:] */

undefined1 *
FUN_107c8ef68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126fa580;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_8;
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
    *(undefined8 *)((long)puVar1 + 0x40) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 107c8f07c; end: 107c8f09f; -[SCDiscoverFeedStoryCircleMutedStoriesCollectionViewModel copyWithZone:] */

undefined8 FUN_107c8f07c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c8f0a0; end: 107c8f1a7; -[SCDiscoverFeedStoryCircleMutedStoriesCollectionViewModel hash] */

undefined8 * FUN_107c8f0a0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_60 = *(undefined8 *)(param_1 + 0x10);
  uVar8 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_58 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_50 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_48 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar4;
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_30 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar5 = &uStack_68;
  uStack_38 = uVar3;
  func_0x000100505190(puVar5,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_107c8f2dc:
    puVar9 = (undefined8 *)0x1;
  }
  else {
    puVar9 = (undefined8 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107c8f2e8;
    puVar9 = puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar6 & 1) != 0) && (puVar5[2] == param_3[2])) {
      puVar9 = (undefined8 *)0x0;
      if (((double)puVar5[7] != (double)param_3[7]) || ((double)puVar5[8] != (double)param_3[8]))
      goto LAB_107c8f2e8;
      dVar11 = ABS((double)puVar5[3] - (double)param_3[3]);
      dVar10 = ABS((double)puVar5[3] + (double)param_3[3]) * 2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar2 = dVar11 < dVar10;
      }
      if (bVar2) {
        dVar11 = ABS((double)puVar5[6] - (double)param_3[6]);
        dVar10 = ABS((double)puVar5[6] + (double)param_3[6]) * 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
          bVar2 = dVar11 < dVar10;
        }
        if (((bVar2) &&
            ((lVar7 = puVar5[1], lVar7 == param_3[1] || (func_0x00010c071ae0(), (int)lVar7 != 0))))
           && ((lVar7 = puVar5[4], lVar7 == param_3[4] || (func_0x00010c071ae0(), (int)lVar7 != 0)))
           ) {
          puVar9 = (undefined8 *)puVar5[5];
          if (puVar9 != (undefined8 *)param_3[5]) {
            func_0x00010c071ae0();
            goto LAB_107c8f2e8;
          }
          goto LAB_107c8f2dc;
        }
      }
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_107c8f2e8:
  _objc_release(param_3);
  return puVar9;
}



/* Entry: 107c8f1a8; end: 107c8f303; -[SCDiscoverFeedStoryCircleMutedStoriesCollectionViewModel isEqual:] */

long FUN_107c8f1a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107c8f2dc:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c8f2e8;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar4 = 0;
      if ((*(double *)(param_1 + 0x38) != *(double *)(param_3 + 0x38)) ||
         (*(double *)(param_1 + 0x40) != *(double *)(param_3 + 0x40))) goto LAB_107c8f2e8;
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
        dVar5 = ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (((bVar1) &&
            ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + 0x28);
          if (lVar4 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_107c8f2e8;
          }
          goto LAB_107c8f2dc;
        }
      }
    }
    lVar4 = 0;
  }
LAB_107c8f2e8:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107c8f304; end: 107c8f30b; -[SCDiscoverFeedStoryCircleMutedStoriesCollectionViewModel title] */

undefined8 FUN_107c8f304(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107c8f30c; end: 107c8f313; -[SCDiscoverFeedStoryCircleMutedStoriesCollectionViewModel fontType] */

undefined8 FUN_107c8f30c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c8f314; end: 107c8f31b; -[SCDiscoverFeedStoryCircleMutedStoriesCollectionViewModel preferredSize] */

undefined1  [16] FUN_107c8f314(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x38);
}



/* Entry: 107c8f31c; end: 107c8f323; -[SCDiscoverFeedStoryCircleMutedStoriesCollectionViewModel alpha] */

undefined8 FUN_107c8f31c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107c8f324; end: 107c8f32b; -[SCDiscoverFeedStoryCircleMutedStoriesCollectionViewModel tapActionModel] */

undefined8 FUN_107c8f324(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107c8f32c; end: 107c8f333; -[SCDiscoverFeedStoryCircleMutedStoriesCollectionViewModel layoutConfig] */

undefined8 FUN_107c8f32c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107c8f334; end: 107c8f33b; -[SCDiscoverFeedStoryCircleMutedStoriesCollectionViewModel displayLabelInset] */

undefined8 FUN_107c8f334(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107c8f33c; end: 107c8f377; -[SCDiscoverFeedStoryCircleMutedStoriesCollectionViewModel .cxx_destruct] */

void FUN_107c8f33c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107c8f378; end: 107c8f3db; +[SCDiscoverFeedStoryCircleViewModel storyWithStoryThumbnailViewModel:] */

void FUN_107c8f378(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d5bb8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107c8f3dc; end: 107c8f3ff; -[SCDiscoverFeedStoryCircleViewModel copyWithZone:] */

undefined8 FUN_107c8f3dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c8f400; end: 107c8f45f; -[SCDiscoverFeedStoryCircleViewModel hash] */

void FUN_107c8f400(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126fa588;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c8f460; end: 107c8f4a3; -[SCDiscoverFeedStoryCircleViewModel internalInit] */

void FUN_107c8f460(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fa588;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c8f4a4; end: 107c8f543; -[SCDiscoverFeedStoryCircleViewModel isEqual:] */

long FUN_107c8f4a4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c8f528;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_107c8f528;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107c8f528;
    }
  }
  lVar3 = 1;
LAB_107c8f528:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107c8f544; end: 107c8f563; -[SCDiscoverFeedStoryCircleViewModel matchStory:] */

void FUN_107c8f544(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_1 + 8) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000107c8f55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}



/* Entry: 107c8f564; end: 107c8f56f; -[SCDiscoverFeedStoryCircleViewModel .cxx_destruct] */

void FUN_107c8f564(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107c8f570; end: 107c8f5df; -[SCDiscoverFeedCircleViewLayoutConfiguration initWithIconWidthToBoundsWidthRatio:displayLabelWidthToBoundsWidthRatio:iconTopMarginToBoundsHeightRatio:displayLabelTopMarginToBoundsHeightRatio:displayLabelBottomMarginToBoundsHeightRatio:] */

void FUN_107c8f570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126fa590;
  uStack_50 = param_6;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
  }
  return;
}



/* Entry: 107c8f5e0; end: 107c8f603; -[SCDiscoverFeedCircleViewLayoutConfiguration copyWithZone:] */

undefined8 FUN_107c8f5e0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c8f604; end: 107c8f6fb; -[SCDiscoverFeedCircleViewLayoutConfiguration hash] */

ulong * FUN_107c8f604(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar3 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_40 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_20 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  func_0x000100505190(&uStack_40,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar6 = (undefined1 *)puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if (((ulong)puVar4 & 1) != 0) {
        dVar8 = ABS(*(double *)((long)puVar3 + 8) - *(double *)(param_3 + 8));
        dVar7 = ABS(*(double *)((long)puVar3 + 8) + *(double *)(param_3 + 8)) *
                2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
          bVar2 = dVar8 < dVar7;
        }
        if (bVar2) {
          dVar8 = ABS(*(double *)((long)puVar3 + 0x10) - *(double *)(param_3 + 0x10));
          dVar7 = ABS(*(double *)((long)puVar3 + 0x10) + *(double *)(param_3 + 0x10)) *
                  2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
            bVar2 = dVar8 < dVar7;
          }
          if (bVar2) {
            dVar8 = ABS(*(double *)((long)puVar3 + 0x18) - *(double *)(param_3 + 0x18));
            dVar7 = ABS(*(double *)((long)puVar3 + 0x18) + *(double *)(param_3 + 0x18)) *
                    2.220446049250313e-16;
            bVar2 = true;
            if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
              bVar2 = dVar8 < dVar7;
            }
            if (bVar2) {
              dVar8 = ABS(*(double *)((long)puVar3 + 0x20) - *(double *)(param_3 + 0x20));
              dVar7 = ABS(*(double *)((long)puVar3 + 0x20) + *(double *)(param_3 + 0x20)) *
                      2.220446049250313e-16;
              bVar2 = true;
              if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7)))
              {
                bVar2 = dVar8 < dVar7;
              }
              if (bVar2) {
                dVar7 = ABS(*(double *)((long)puVar3 + 0x28) + *(double *)(param_3 + 0x28)) *
                        2.220446049250313e-16;
                if (dVar7 <= 2.2250738585072014e-308) {
                  dVar7 = 2.2250738585072014e-308;
                }
                puVar6 = (undefined1 *)
                         (ulong)(ABS(*(double *)((long)puVar3 + 0x28) - *(double *)(param_3 + 0x28))
                                < dVar7);
                goto LAB_107c8f85c;
              }
            }
          }
        }
      }
      puVar6 = (undefined1 *)0x0;
    }
  }
LAB_107c8f85c:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 107c8f6fc; end: 107c8f877; -[SCDiscoverFeedCircleViewLayoutConfiguration isEqual:] */

bool FUN_107c8f6fc(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) != 0) {
        dVar5 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
        dVar4 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
          bVar1 = dVar5 < dVar4;
        }
        if (bVar1) {
          dVar5 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
          dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
            bVar1 = dVar5 < dVar4;
          }
          if (bVar1) {
            dVar5 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
            dVar4 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                    2.220446049250313e-16;
            bVar1 = true;
            if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
              bVar1 = dVar5 < dVar4;
            }
            if (bVar1) {
              dVar5 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
              dVar4 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                      2.220446049250313e-16;
              bVar1 = true;
              if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4)))
              {
                bVar1 = dVar5 < dVar4;
              }
              if (bVar1) {
                dVar4 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                        2.220446049250313e-16;
                if (dVar4 <= 2.2250738585072014e-308) {
                  dVar4 = 2.2250738585072014e-308;
                }
                bVar1 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28)) < dVar4;
                goto LAB_107c8f85c;
              }
            }
          }
        }
      }
      bVar1 = false;
    }
  }
LAB_107c8f85c:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107c8f878; end: 107c8f87f; -[SCDiscoverFeedCircleViewLayoutConfiguration iconWidthToBoundsWidthRatio] */

undefined8 FUN_107c8f878(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107c8f880; end: 107c8f887; -[SCDiscoverFeedCircleViewLayoutConfiguration displayLabelWidthToBoundsWidthRatio] */

undefined8 FUN_107c8f880(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c8f888; end: 107c8f88f; -[SCDiscoverFeedCircleViewLayoutConfiguration iconTopMarginToBoundsHeightRatio] */

undefined8 FUN_107c8f888(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107c8f890; end: 107c8f897; -[SCDiscoverFeedCircleViewLayoutConfiguration displayLabelTopMarginToBoundsHeightRatio] */

undefined8 FUN_107c8f890(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107c8f898; end: 107c8f89f; -[SCDiscoverFeedCircleViewLayoutConfiguration displayLabelBottomMarginToBoundsHeightRatio] */

undefined8 FUN_107c8f898(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107c8f8a0; end: 107c8f94b; -[SCDiscoverFeedFriendStoriesSectionEmptyStateViewModel initWithDescriptionString:addFriendsEmptyStateViewModel:] */

undefined1 *
FUN_107c8f8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa598;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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



/* Entry: 107c8f94c; end: 107c8f96f; -[SCDiscoverFeedFriendStoriesSectionEmptyStateViewModel copyWithZone:] */

undefined8 FUN_107c8f94c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c8f970; end: 107c8f9e3; -[SCDiscoverFeedFriendStoriesSectionEmptyStateViewModel hash] */

undefined8 * FUN_107c8f970(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107c8fa64:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107c8fa70;
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
          goto LAB_107c8fa70;
        }
        goto LAB_107c8fa64;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107c8fa70:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107c8f9e4; end: 107c8fa8b; -[SCDiscoverFeedFriendStoriesSectionEmptyStateViewModel isEqual:] */

long FUN_107c8f9e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107c8fa64:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c8fa70;
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
          goto LAB_107c8fa70;
        }
        goto LAB_107c8fa64;
      }
    }
    lVar3 = 0;
  }
LAB_107c8fa70:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107c8fa8c; end: 107c8fa93; -[SCDiscoverFeedFriendStoriesSectionEmptyStateViewModel descriptionString] */

undefined8 FUN_107c8fa8c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107c8fa94; end: 107c8fa9b; -[SCDiscoverFeedFriendStoriesSectionEmptyStateViewModel addFriendsEmptyStateViewModel] */

undefined8 FUN_107c8fa94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c8fa9c; end: 107c8facb; -[SCDiscoverFeedFriendStoriesSectionEmptyStateViewModel .cxx_destruct] */

void FUN_107c8fa9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107c8facc; end: 107c8fbf3; -[SCAddFriendsEmptyStateViewModel initWithDescriptionString:descriptionTrailingPadding:graphicViewModel:graphicViewTrailingPadding:addFriendsButtonViewModel:contentInsets:preferredContentHeight:] */

undefined1 *
FUN_107c8facc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_78 = PTR_PTR_1126fa5a0;
  uStack_80 = param_8;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    *(undefined8 *)((long)puVar1 + 0x48) = param_5;
    *(undefined8 *)((long)puVar1 + 0x50) = param_6;
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    *(undefined8 *)((long)puVar1 + 0x38) = param_3;
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  return (undefined1 *)puVar1;
}



/* Entry: 107c8fbf4; end: 107c8fc17; -[SCAddFriendsEmptyStateViewModel copyWithZone:] */

undefined8 FUN_107c8fbf4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c8fc18; end: 107c8fd7b; -[SCAddFriendsEmptyStateViewModel hash] */

undefined8 * FUN_107c8fc18(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  double dVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ushort uVar11;
  double dVar12;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar9 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_70 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uStack_78 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar9 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_60 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uStack_68 = uVar5;
  func_0x00010bfde980();
  uVar9 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_50 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_48 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar9 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_40 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_38 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_30 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar6 = &uStack_78;
  uStack_58 = uVar4;
  func_0x000100505190(puVar6,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar6 == param_3) {
LAB_107c8fedc:
    puVar10 = (undefined8 *)0x1;
  }
  else {
    puVar10 = (undefined8 *)0x0;
    if ((puVar6 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107c8fee8;
    puVar10 = puVar6;
    _objc_opt_class(puVar6);
    puVar7 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar10);
    if (((ulong)puVar7 & 1) != 0) {
      dVar12 = ABS((double)puVar6[2] - (double)param_3[2]);
      dVar2 = ABS((double)puVar6[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar3 = true;
      if ((2.2250738585072014e-308 <= dVar12) && (bVar3 = false, !NAN(dVar12) && !NAN(dVar2))) {
        bVar3 = dVar12 < dVar2;
      }
      if (bVar3) {
        dVar12 = ABS((double)puVar6[4] - (double)param_3[4]);
        dVar2 = ABS((double)puVar6[4] + (double)param_3[4]) * 2.220446049250313e-16;
        bVar3 = true;
        if ((2.2250738585072014e-308 <= dVar12) && (bVar3 = false, !NAN(dVar12) && !NAN(dVar2))) {
          bVar3 = dVar12 < dVar2;
        }
        if ((bVar3) &&
           (uVar11 = NEON_uminv(CONCAT26(-(ushort)((double)puVar6[10] == (double)param_3[10]),
                                         CONCAT24(-(ushort)((double)puVar6[9] == (double)param_3[9])
                                                  ,CONCAT22(-(ushort)((double)puVar6[8] ==
                                                                     (double)param_3[8]),
                                                            -(ushort)((double)puVar6[7] ==
                                                                     (double)param_3[7])))),2),
           (uVar11 & 1) != 0)) {
          dVar12 = ABS((double)puVar6[6] - (double)param_3[6]);
          dVar2 = ABS((double)puVar6[6] + (double)param_3[6]) * 2.220446049250313e-16;
          bVar3 = true;
          if ((2.2250738585072014e-308 <= dVar12) && (bVar3 = false, !NAN(dVar12) && !NAN(dVar2))) {
            bVar3 = dVar12 < dVar2;
          }
          if (((bVar3) &&
              ((lVar8 = puVar6[1], lVar8 == param_3[1] || (func_0x00010c071ae0(), (int)lVar8 != 0)))
              ) && ((lVar8 = puVar6[3], lVar8 == param_3[3] ||
                    (func_0x00010c071ae0(), (int)lVar8 != 0)))) {
            puVar10 = (undefined8 *)puVar6[5];
            if (puVar10 != (undefined8 *)param_3[5]) {
              func_0x00010c071ae0();
              goto LAB_107c8fee8;
            }
            goto LAB_107c8fedc;
          }
        }
      }
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_107c8fee8:
  _objc_release(param_3);
  return puVar10;
}



/* Entry: 107c8fd7c; end: 107c8ff03; -[SCAddFriendsEmptyStateViewModel isEqual:] */

long FUN_107c8fd7c(ulong param_1,undefined8 param_2,ulong param_3)

{
  double dVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ushort uVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107c8fedc:
    lVar5 = 1;
  }
  else {
    lVar5 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c8fee8;
    uVar3 = param_1;
    _objc_opt_class(param_1);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar3);
    if ((uVar4 & 1) != 0) {
      dVar7 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar1 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar2 = false, !NAN(dVar7) && !NAN(dVar1))) {
        bVar2 = dVar7 < dVar1;
      }
      if (bVar2) {
        dVar7 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
        dVar1 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar7) && (bVar2 = false, !NAN(dVar7) && !NAN(dVar1))) {
          bVar2 = dVar7 < dVar1;
        }
        if ((bVar2) &&
           (uVar6 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x50) ==
                                                 *(double *)(param_3 + 0x50)),
                                        CONCAT24(-(ushort)(*(double *)(param_1 + 0x48) ==
                                                          *(double *)(param_3 + 0x48)),
                                                 CONCAT22(-(ushort)(*(double *)(param_1 + 0x40) ==
                                                                   *(double *)(param_3 + 0x40)),
                                                          -(ushort)(*(double *)(param_1 + 0x38) ==
                                                                   *(double *)(param_3 + 0x38))))),2
                              ), (uVar6 & 1) != 0)) {
          dVar7 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
          dVar1 = ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                  2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar7) && (bVar2 = false, !NAN(dVar7) && !NAN(dVar1))) {
            bVar2 = dVar7 < dVar1;
          }
          if (((bVar2) &&
              ((lVar5 = *(long *)(param_1 + 8), lVar5 == *(long *)(param_3 + 8) ||
               (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
             ((lVar5 = *(long *)(param_1 + 0x18), lVar5 == *(long *)(param_3 + 0x18) ||
              (func_0x00010c071ae0(), (int)lVar5 != 0)))) {
            lVar5 = *(long *)(param_1 + 0x28);
            if (lVar5 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_107c8fee8;
            }
            goto LAB_107c8fedc;
          }
        }
      }
    }
    lVar5 = 0;
  }
LAB_107c8fee8:
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 107c8ff04; end: 107c8ff0b; -[SCAddFriendsEmptyStateViewModel descriptionString] */

undefined8 FUN_107c8ff04(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107c8ff0c; end: 107c8ff13; -[SCAddFriendsEmptyStateViewModel descriptionTrailingPadding] */

undefined8 FUN_107c8ff0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c8ff14; end: 107c8ff1b; -[SCAddFriendsEmptyStateViewModel graphicViewModel] */

undefined8 FUN_107c8ff14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107c8ff1c; end: 107c8ff23; -[SCAddFriendsEmptyStateViewModel graphicViewTrailingPadding] */

undefined8 FUN_107c8ff1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107c8ff24; end: 107c8ff2b; -[SCAddFriendsEmptyStateViewModel addFriendsButtonViewModel] */

undefined8 FUN_107c8ff24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107c8ff2c; end: 107c8ff37; -[SCAddFriendsEmptyStateViewModel contentInsets] */

undefined8 FUN_107c8ff2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107c8ff38; end: 107c8ff3f; -[SCAddFriendsEmptyStateViewModel preferredContentHeight] */

undefined8 FUN_107c8ff38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107c8ff40; end: 107c8ff7b; -[SCAddFriendsEmptyStateViewModel .cxx_destruct] */

void FUN_107c8ff40(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107c8ff7c; end: 107c9003b; -[SCAddFriendsEmptyStateGraphicViewModel initWithNetworkImage:staticImageName:graphicSize:] */

undefined1 *
FUN_107c8ff7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fa5a8;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 107c9003c; end: 107c9005f; -[SCAddFriendsEmptyStateGraphicViewModel copyWithZone:] */

undefined8 FUN_107c9003c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c90060; end: 107c90117; -[SCAddFriendsEmptyStateGraphicViewModel hash] */

undefined8 * FUN_107c90060(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar4 = &uStack_48;
  uStack_40 = uVar3;
  func_0x000100505190(puVar4,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_107c901ac:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107c901b8;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      bVar1 = false;
      if (((double)puVar4[3] == (double)param_3[3]) &&
         (bVar1 = false, !NAN((double)puVar4[4]) && !NAN((double)param_3[4]))) {
        bVar1 = (double)puVar4[4] == (double)param_3[4];
      }
      if ((bVar1) &&
         ((lVar6 = puVar4[1], lVar6 == param_3[1] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = (undefined8 *)puVar4[2];
        if (puVar8 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_107c901b8;
        }
        goto LAB_107c901ac;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_107c901b8:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 107c90118; end: 107c901d3; -[SCAddFriendsEmptyStateGraphicViewModel isEqual:] */

long FUN_107c90118(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107c901ac:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c901b8;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      bVar1 = false;
      if ((*(double *)(param_1 + 0x18) == *(double *)(param_3 + 0x18)) &&
         (bVar1 = false, !NAN(*(double *)(param_1 + 0x20)) && !NAN(*(double *)(param_3 + 0x20)))) {
        bVar1 = *(double *)(param_1 + 0x20) == *(double *)(param_3 + 0x20);
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_107c901b8;
        }
        goto LAB_107c901ac;
      }
    }
    lVar4 = 0;
  }
LAB_107c901b8:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107c901d4; end: 107c901db; -[SCAddFriendsEmptyStateGraphicViewModel networkImage] */

undefined8 FUN_107c901d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107c901dc; end: 107c901e3; -[SCAddFriendsEmptyStateGraphicViewModel staticImageName] */

undefined8 FUN_107c901dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c901e4; end: 107c901eb; -[SCAddFriendsEmptyStateGraphicViewModel graphicSize] */

undefined1  [16] FUN_107c901e4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 107c901ec; end: 107c9021b; -[SCAddFriendsEmptyStateGraphicViewModel .cxx_destruct] */

void FUN_107c901ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107c9021c; end: 107c9047b; -[SCDiscoverFeedFriendSuggestionCollectionViewModel initWithSnapchatter:displayLabelText:subtitleLabelText:avatarContainerViewModel:tapActionModel:addFriendActionModel:longPressActionModel:layoutConfig:preferredSize:addButtonViewModel:ringViewModel:displayLabelInset:useSigTitleLabel:sigTextStyle:] */

undefined8 *
FUN_107c9021c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16,
             undefined4 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_88 = PTR_PTR_1126fa5b0;
  puVar1 = &uStack_90;
  uStack_90 = param_4;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    puVar1[0xe] = param_1;
    puVar1[0xf] = param_2;
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    puVar1[0xc] = param_3;
    *(undefined1 *)(puVar1 + 1) = param_16;
    puVar1[0xd] = param_18;
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return puVar1;
}



/* Entry: 107c9047c; end: 107c9049f; -[SCDiscoverFeedFriendSuggestionCollectionViewModel copyWithZone:] */

undefined8 FUN_107c9047c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c904a0; end: 107c905e7; -[SCDiscoverFeedFriendSuggestionCollectionViewModel hash] */

undefined8 * FUN_107c904a0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar4 = &uStack_a0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_98 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_88 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_78 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x70) + *(ulong *)(param_1 + 0x70) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_60 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x78) + *(ulong *)(param_1 + 0x78) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_58 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x68);
  uVar7 = ~*(ulong *)(param_1 + 0x60) + *(ulong *)(param_1 + 0x60) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  lStack_30 = -lVar6;
  if (-1 < lVar6) {
    lStack_30 = lVar6;
  }
  uStack_48 = uVar3;
  func_0x000100505190(&uStack_a0,0xf);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_107c907a0:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107c907ac;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((*(char *)((long)puVar4 + 8) == param_3[8] &&
        (*(long *)((long)puVar4 + 0x68) == *(long *)(param_3 + 0x68))))) {
      puVar8 = (undefined1 *)0x0;
      if ((*(double *)((long)puVar4 + 0x70) != *(double *)(param_3 + 0x70)) ||
         (*(double *)((long)puVar4 + 0x78) != *(double *)(param_3 + 0x78))) goto LAB_107c907ac;
      dVar10 = ABS(*(double *)((long)puVar4 + 0x60) - *(double *)(param_3 + 0x60));
      dVar9 = ABS(*(double *)((long)puVar4 + 0x60) + *(double *)(param_3 + 0x60)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (((((bVar1) &&
            ((lVar6 = *(long *)((long)puVar4 + 0x10), lVar6 == *(long *)(param_3 + 0x10) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
           ((lVar6 = *(long *)((long)puVar4 + 0x18), lVar6 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
          ((((lVar6 = *(long *)((long)puVar4 + 0x20), lVar6 == *(long *)(param_3 + 0x20) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
            ((lVar6 = *(long *)((long)puVar4 + 0x28), lVar6 == *(long *)(param_3 + 0x28) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
           ((lVar6 = *(long *)((long)puVar4 + 0x30), lVar6 == *(long *)(param_3 + 0x30) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))))) &&
         (((lVar6 = *(long *)((long)puVar4 + 0x38), lVar6 == *(long *)(param_3 + 0x38) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
          ((((lVar6 = *(long *)((long)puVar4 + 0x40), lVar6 == *(long *)(param_3 + 0x40) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
            ((lVar6 = *(long *)((long)puVar4 + 0x48), lVar6 == *(long *)(param_3 + 0x48) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
           ((lVar6 = *(long *)((long)puVar4 + 0x50), lVar6 == *(long *)(param_3 + 0x50) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))))))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x58);
        if (puVar8 != *(undefined1 **)(param_3 + 0x58)) {
          func_0x00010c071ae0();
          goto LAB_107c907ac;
        }
        goto LAB_107c907a0;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_107c907ac:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 107c905e8; end: 107c907c7; -[SCDiscoverFeedFriendSuggestionCollectionViewModel isEqual:] */

long FUN_107c905e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107c907a0:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c907ac;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68))))) {
      lVar4 = 0;
      if ((*(double *)(param_1 + 0x70) != *(double *)(param_3 + 0x70)) ||
         (*(double *)(param_1 + 0x78) != *(double *)(param_3 + 0x78))) goto LAB_107c907ac;
      dVar6 = ABS(*(double *)(param_1 + 0x60) - *(double *)(param_3 + 0x60));
      dVar5 = ABS(*(double *)(param_1 + 0x60) + *(double *)(param_3 + 0x60)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (((((bVar1) &&
            ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
            ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))))) &&
         (((lVar4 = *(long *)(param_1 + 0x38), lVar4 == *(long *)(param_3 + 0x38) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
          ((((lVar4 = *(long *)(param_1 + 0x40), lVar4 == *(long *)(param_3 + 0x40) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
            ((lVar4 = *(long *)(param_1 + 0x48), lVar4 == *(long *)(param_3 + 0x48) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x50), lVar4 == *(long *)(param_3 + 0x50) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))))))) {
        lVar4 = *(long *)(param_1 + 0x58);
        if (lVar4 != *(long *)(param_3 + 0x58)) {
          func_0x00010c071ae0();
          goto LAB_107c907ac;
        }
        goto LAB_107c907a0;
      }
    }
    lVar4 = 0;
  }
LAB_107c907ac:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107c907c8; end: 107c907cf; -[SCDiscoverFeedFriendSuggestionCollectionViewModel snapchatter] */

undefined8 FUN_107c907c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c907d0; end: 107c907d7; -[SCDiscoverFeedFriendSuggestionCollectionViewModel displayLabelText] */

undefined8 FUN_107c907d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107c907d8; end: 107c907df; -[SCDiscoverFeedFriendSuggestionCollectionViewModel subtitleLabelText] */

undefined8 FUN_107c907d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107c907e0; end: 107c907e7; -[SCDiscoverFeedFriendSuggestionCollectionViewModel avatarContainerViewModel] */

undefined8 FUN_107c907e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107c907e8; end: 107c907ef; -[SCDiscoverFeedFriendSuggestionCollectionViewModel tapActionModel] */

undefined8 FUN_107c907e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107c907f0; end: 107c907f7; -[SCDiscoverFeedFriendSuggestionCollectionViewModel addFriendActionModel] */

undefined8 FUN_107c907f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107c907f8; end: 107c907ff; -[SCDiscoverFeedFriendSuggestionCollectionViewModel longPressActionModel] */

undefined8 FUN_107c907f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107c90800; end: 107c90807; -[SCDiscoverFeedFriendSuggestionCollectionViewModel layoutConfig] */

undefined8 FUN_107c90800(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107c90808; end: 107c9080f; -[SCDiscoverFeedFriendSuggestionCollectionViewModel preferredSize] */

undefined1  [16] FUN_107c90808(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x70);
}



/* Entry: 107c90810; end: 107c90817; -[SCDiscoverFeedFriendSuggestionCollectionViewModel addButtonViewModel] */

undefined8 FUN_107c90810(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107c90818; end: 107c9081f; -[SCDiscoverFeedFriendSuggestionCollectionViewModel ringViewModel] */

undefined8 FUN_107c90818(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107c90820; end: 107c90827; -[SCDiscoverFeedFriendSuggestionCollectionViewModel displayLabelInset] */

undefined8 FUN_107c90820(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107c90828; end: 107c9082f; -[SCDiscoverFeedFriendSuggestionCollectionViewModel useSigTitleLabel] */

undefined1 FUN_107c90828(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107c90830; end: 107c90837; -[SCDiscoverFeedFriendSuggestionCollectionViewModel sigTextStyle] */

undefined8 FUN_107c90830(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107c90838; end: 107c908c7; -[SCDiscoverFeedFriendSuggestionCollectionViewModel .cxx_destruct] */

void FUN_107c90838(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107c908c8; end: 107c90b0f; -[SCDiscoverFeedMyStoriesCircleCellViewModel initWithStoryId:displayName:isMyStory:type:thumbnailMedia:snapchatterInfo:hasStories:hasUnviewedStories:totalViewCount:storyCircleViewModel:playStoryActionModel:postStoryActionModel:preferredSize:layoutConfig:storyLoggingInfo:] */

undefined8 *
FUN_107c908c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_78 = PTR_PTR_1126fa5b8;
  puVar1 = &uStack_80;
  uStack_80 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_7;
    puVar1[4] = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = (undefined1)param_11;
    *(undefined1 *)((long)puVar1 + 10) = param_11._1_1_;
    puVar1[7] = param_13;
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    puVar1[0xd] = param_1;
    puVar1[0xe] = param_2;
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 107c90b10; end: 107c90b33; -[SCDiscoverFeedMyStoriesCircleCellViewModel copyWithZone:] */

undefined8 FUN_107c90b10(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c90b34; end: 107c90c5b; -[SCDiscoverFeedMyStoriesCircleCellViewModel hash] */

undefined8 * FUN_107c90b34(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_a8 = uVar1;
  func_0x00010bfde980();
  uStack_98 = (ulong)*(byte *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x20);
  uStack_88 = *(undefined8 *)(param_1 + 0x28);
  lStack_90 = -lVar5;
  if (-1 < lVar5) {
    lStack_90 = lVar5;
  }
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfde980();
  uStack_78 = (ulong)*(byte *)(param_1 + 9);
  uStack_70 = (ulong)*(byte *)(param_1 + 10);
  uStack_68 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar6 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_48 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x70) + *(ulong *)(param_1 + 0x70) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_40 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_a8;
  uStack_30 = uVar1;
  func_0x000100505190(puVar3,0x10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107c90df8:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107c90e04;
    puVar7 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) && (puVar3[4] == param_3[4])) &&
         (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))) &&
        ((*(char *)((long)puVar3 + 10) == *(char *)((long)param_3 + 10) && (puVar3[7] == param_3[7])
         ))))) {
      puVar7 = (undefined8 *)0x0;
      if (((double)puVar3[0xd] != (double)param_3[0xd]) ||
         ((double)puVar3[0xe] != (double)param_3[0xe])) goto LAB_107c90e04;
      lVar5 = puVar3[2];
      if ((((((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
            ((lVar5 = puVar3[3], lVar5 == param_3[3] || (func_0x00010c071ae0(), (int)lVar5 != 0))))
           && ((lVar5 = puVar3[5], lVar5 == param_3[5] || (func_0x00010c071ae0(), (int)lVar5 != 0)))
           ) && ((lVar5 = puVar3[6], lVar5 == param_3[6] || (func_0x00010c071ae0(), (int)lVar5 != 0)
                 ))) &&
         ((((lVar5 = puVar3[8], lVar5 == param_3[8] || (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
           ((lVar5 = puVar3[9], lVar5 == param_3[9] || (func_0x00010c071ae0(), (int)lVar5 != 0))))
          && (((lVar5 = puVar3[10], lVar5 == param_3[10] || (func_0x00010c071ae0(), (int)lVar5 != 0)
               ) && ((lVar5 = puVar3[0xb], lVar5 == param_3[0xb] ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)))))))) {
        puVar7 = (undefined8 *)puVar3[0xc];
        if (puVar7 != (undefined8 *)param_3[0xc]) {
          func_0x00010c071ae0();
          goto LAB_107c90e04;
        }
        goto LAB_107c90df8;
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_107c90e04:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 107c90c5c; end: 107c90e1f; -[SCDiscoverFeedMyStoriesCircleCellViewModel isEqual:] */

long FUN_107c90c5c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107c90df8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c90e04;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
         (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))))) {
      lVar3 = 0;
      if ((*(double *)(param_1 + 0x68) != *(double *)(param_3 + 0x68)) ||
         (*(double *)(param_1 + 0x70) != *(double *)(param_3 + 0x70))) goto LAB_107c90e04;
      lVar3 = *(long *)(param_1 + 0x10);
      if ((((((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
            ((lVar3 = *(long *)(param_1 + 0x18), lVar3 == *(long *)(param_3 + 0x18) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
           ((lVar3 = *(long *)(param_1 + 0x28), lVar3 == *(long *)(param_3 + 0x28) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
          ((lVar3 = *(long *)(param_1 + 0x30), lVar3 == *(long *)(param_3 + 0x30) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
         ((((lVar3 = *(long *)(param_1 + 0x40), lVar3 == *(long *)(param_3 + 0x40) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
           ((lVar3 = *(long *)(param_1 + 0x48), lVar3 == *(long *)(param_3 + 0x48) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
          (((lVar3 = *(long *)(param_1 + 0x50), lVar3 == *(long *)(param_3 + 0x50) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
           ((lVar3 = *(long *)(param_1 + 0x58), lVar3 == *(long *)(param_3 + 0x58) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)))))))) {
        lVar3 = *(long *)(param_1 + 0x60);
        if (lVar3 != *(long *)(param_3 + 0x60)) {
          func_0x00010c071ae0();
          goto LAB_107c90e04;
        }
        goto LAB_107c90df8;
      }
    }
    lVar3 = 0;
  }
LAB_107c90e04:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107c90e20; end: 107c90e27; -[SCDiscoverFeedMyStoriesCircleCellViewModel storyId] */

undefined8 FUN_107c90e20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c90e28; end: 107c90e2f; -[SCDiscoverFeedMyStoriesCircleCellViewModel displayName] */

undefined8 FUN_107c90e28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107c90e30; end: 107c90e37; -[SCDiscoverFeedMyStoriesCircleCellViewModel isMyStory] */

undefined1 FUN_107c90e30(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107c90e38; end: 107c90e3f; -[SCDiscoverFeedMyStoriesCircleCellViewModel type] */

undefined8 FUN_107c90e38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107c90e40; end: 107c90e47; -[SCDiscoverFeedMyStoriesCircleCellViewModel thumbnailMedia] */

undefined8 FUN_107c90e40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107c90e48; end: 107c90e4f; -[SCDiscoverFeedMyStoriesCircleCellViewModel snapchatterInfo] */

undefined8 FUN_107c90e48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107c90e50; end: 107c90e57; -[SCDiscoverFeedMyStoriesCircleCellViewModel hasStories] */

undefined1 FUN_107c90e50(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107c90e58; end: 107c90e5f; -[SCDiscoverFeedMyStoriesCircleCellViewModel hasUnviewedStories] */

undefined1 FUN_107c90e58(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107c90e60; end: 107c90e67; -[SCDiscoverFeedMyStoriesCircleCellViewModel totalViewCount] */

undefined8 FUN_107c90e60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107c90e68; end: 107c90e6f; -[SCDiscoverFeedMyStoriesCircleCellViewModel storyCircleViewModel] */

undefined8 FUN_107c90e68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}


