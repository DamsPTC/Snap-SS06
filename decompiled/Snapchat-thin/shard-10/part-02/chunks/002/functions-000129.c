/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107c819ac; end: 107c819b3; -[SCDiscoverFeedCtaViewModel maximumFontSize] */

undefined8 FUN_107c819ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107c819b4; end: 107c819bb; -[SCDiscoverFeedCtaViewModel sigButtonType] */

undefined8 FUN_107c819b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107c819bc; end: 107c819c3; -[SCDiscoverFeedCtaViewModel sigButtonStyle] */

undefined8 FUN_107c819bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107c819c4; end: 107c819f3; -[SCDiscoverFeedCtaViewModel .cxx_destruct] */

void FUN_107c819c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107c819f4; end: 107c81adb; -[SCDiscoverFeedLogoOverlayViewModel initWithLogo:logoModel:logoPlacementType:logoGradientColor:] */

undefined1 *
FUN_107c819f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fa4a8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107c81adc; end: 107c81aff; -[SCDiscoverFeedLogoOverlayViewModel copyWithZone:] */

undefined8 FUN_107c81adc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c81b00; end: 107c81b8b; -[SCDiscoverFeedLogoOverlayViewModel hash] */

undefined8 * FUN_107c81b00(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x18);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  lStack_38 = -lVar5;
  if (-1 < lVar5) {
    lStack_38 = lVar5;
  }
  uStack_40 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107c81c34:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107c81c40;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[3] == param_3[3])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071c60();
            goto LAB_107c81c40;
          }
          goto LAB_107c81c34;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107c81c40:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107c81b8c; end: 107c81c5b; -[SCDiscoverFeedLogoOverlayViewModel isEqual:] */

long FUN_107c81b8c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107c81c34:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c81c40;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071c60();
            goto LAB_107c81c40;
          }
          goto LAB_107c81c34;
        }
      }
    }
    lVar3 = 0;
  }
LAB_107c81c40:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107c81c5c; end: 107c81c63; -[SCDiscoverFeedLogoOverlayViewModel logo] */

undefined8 FUN_107c81c5c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107c81c64; end: 107c81c6b; -[SCDiscoverFeedLogoOverlayViewModel logoModel] */

undefined8 FUN_107c81c64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c81c6c; end: 107c81c73; -[SCDiscoverFeedLogoOverlayViewModel logoPlacementType] */

undefined8 FUN_107c81c6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107c81c74; end: 107c81c7b; -[SCDiscoverFeedLogoOverlayViewModel logoGradientColor] */

undefined8 FUN_107c81c74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107c81c7c; end: 107c81cb7; -[SCDiscoverFeedLogoOverlayViewModel .cxx_destruct] */

void FUN_107c81c7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107c81cb8; end: 107c81e17; -[SCDiscoverFeedPublisherStoryLabelOverlayViewModel initWithTitle:subtitle:progressBarViewModel:tileBadge:tileBadgePosition:subtitleViewModel:shouldHideTexts:compactSubsTitleGradientMultiplier:] */

undefined1 *
FUN_107c81cb8(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126fa4b0;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_10;
    *(undefined4 *)((long)puVar1 + 0xc) = param_1;
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107c81e18; end: 107c81e3b; -[SCDiscoverFeedPublisherStoryLabelOverlayViewModel copyWithZone:] */

undefined8 FUN_107c81e18(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c81e3c; end: 107c81f13; -[SCDiscoverFeedPublisherStoryLabelOverlayViewModel hash] */

undefined8 * FUN_107c81e3c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x30);
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  lStack_48 = -lVar6;
  if (-1 < lVar6) {
    lStack_48 = lVar6;
  }
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uVar7 = (ulong)*(uint *)(param_1 + 0xc) * 0x200000 - 1;
  uVar7 = (uVar7 ^ uVar7 >> 0x18) * 0x109;
  uVar7 = (uVar7 ^ uVar7 >> 0xe) * 0x15;
  lStack_30 = (uVar7 ^ uVar7 >> 0x1c) * 0x80000001;
  puVar4 = &uStack_68;
  func_0x000100505190(puVar4,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_107c8202c:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107c82038;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((puVar4[6] == param_3[6] && (*(char *)(puVar4 + 1) == *(char *)(param_3 + 1))))) {
      fVar10 = ABS(*(float *)((long)puVar4 + 0xc) - *(float *)((long)param_3 + 0xc));
      fVar9 = ABS(*(float *)((long)puVar4 + 0xc) + *(float *)((long)param_3 + 0xc)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar10) && (bVar1 = false, !NAN(fVar10) && !NAN(fVar9))) {
        bVar1 = fVar10 < fVar9;
      }
      if ((((bVar1) &&
           ((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
          && ((lVar6 = puVar4[3], lVar6 == param_3[3] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
         && (((lVar6 = puVar4[4], lVar6 == param_3[4] || (func_0x00010c071ae0(), (int)lVar6 != 0))
             && ((lVar6 = puVar4[5], lVar6 == param_3[5] || (func_0x00010c071ae0(), (int)lVar6 != 0)
                 ))))) {
        puVar8 = (undefined8 *)puVar4[7];
        if (puVar8 != (undefined8 *)param_3[7]) {
          func_0x00010c071ae0();
          goto LAB_107c82038;
        }
        goto LAB_107c8202c;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_107c82038:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 107c81f14; end: 107c82053; -[SCDiscoverFeedPublisherStoryLabelOverlayViewModel isEqual:] */

long FUN_107c81f14(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107c8202c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c82038;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      fVar6 = ABS(*(float *)(param_1 + 0xc) - *(float *)(param_3 + 0xc));
      fVar5 = ABS(*(float *)(param_1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5))) {
        bVar1 = fVar6 < fVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         (((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
          ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
        lVar4 = *(long *)(param_1 + 0x38);
        if (lVar4 != *(long *)(param_3 + 0x38)) {
          func_0x00010c071ae0();
          goto LAB_107c82038;
        }
        goto LAB_107c8202c;
      }
    }
    lVar4 = 0;
  }
LAB_107c82038:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107c82054; end: 107c8205b; -[SCDiscoverFeedPublisherStoryLabelOverlayViewModel title] */

undefined8 FUN_107c82054(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c8205c; end: 107c82063; -[SCDiscoverFeedPublisherStoryLabelOverlayViewModel subtitle] */

undefined8 FUN_107c8205c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107c82064; end: 107c8206b; -[SCDiscoverFeedPublisherStoryLabelOverlayViewModel progressBarViewModel] */

undefined8 FUN_107c82064(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107c8206c; end: 107c82073; -[SCDiscoverFeedPublisherStoryLabelOverlayViewModel tileBadge] */

undefined8 FUN_107c8206c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107c82074; end: 107c8207b; -[SCDiscoverFeedPublisherStoryLabelOverlayViewModel tileBadgePosition] */

undefined8 FUN_107c82074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107c8207c; end: 107c82083; -[SCDiscoverFeedPublisherStoryLabelOverlayViewModel subtitleViewModel] */

undefined8 FUN_107c8207c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107c82084; end: 107c8208b; -[SCDiscoverFeedPublisherStoryLabelOverlayViewModel shouldHideTexts] */

undefined1 FUN_107c82084(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107c8208c; end: 107c82093; -[SCDiscoverFeedPublisherStoryLabelOverlayViewModel compactSubsTitleGradientMultiplier] */

undefined4 FUN_107c8208c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 107c82094; end: 107c820e7; -[SCDiscoverFeedPublisherStoryLabelOverlayViewModel .cxx_destruct] */

void FUN_107c82094(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107c820e8; end: 107c82103; +[SCDiscoverFeedPublisherStoryLabelOverlayViewModelBuilder discoverFeedPublisherStoryLabelOverlayViewModel] */

void FUN_107c820e8(void)

{
  _objc_alloc_init(PTR_PTR_1126c2418);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c82104; end: 107c8232f; +[SCDiscoverFeedPublisherStoryLabelOverlayViewModelBuilder discoverFeedPublisherStoryLabelOverlayViewModelFromExistingDiscoverFeedPublisherStoryLabelOverlayViewModel:] */

void FUN_107c82104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  
  puVar1 = PTR_PTR_1126c2418;
  _objc_retain(param_4);
  func_0x00010bf81c40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2bb3c0(puVar1,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c260dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ba960(puVar3,param_3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c117840(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2b6300(puVar5,param_3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010c26e9e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2bb0e0(puVar7,param_3,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_4;
  func_0x00010c26ea00(param_4);
  puVar11 = puVar9;
  func_0x00010c2bb100(puVar9,param_3,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_4;
  func_0x00010c261160(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c2baa00(puVar11,param_3,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_4;
  func_0x00010c230e00(param_4);
  puVar14 = puVar12;
  func_0x00010c2b89a0(puVar12,param_3,uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43300(param_4);
  _objc_release(param_4);
  puVar15 = puVar14;
  func_0x00010c2aab40(param_1,puVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar12);
  _objc_release(uVar10);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 107c82330; end: 107c8237b; -[SCDiscoverFeedPublisherStoryLabelOverlayViewModelBuilder build] */

void FUN_107c82330(long param_1)

{
  _objc_alloc(PTR_PTR_1126d73f0);
  func_0x00010c053780(*(undefined4 *)(param_1 + 0x3c));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c8237c; end: 107c823b3; -[SCDiscoverFeedPublisherStoryLabelOverlayViewModelBuilder withTitle:] */

long FUN_107c8237c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c823b4; end: 107c823eb; -[SCDiscoverFeedPublisherStoryLabelOverlayViewModelBuilder withSubtitle:] */

long FUN_107c823b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c823ec; end: 107c82423; -[SCDiscoverFeedPublisherStoryLabelOverlayViewModelBuilder withProgressBarViewModel:] */

long FUN_107c823ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c82424; end: 107c8245b; -[SCDiscoverFeedPublisherStoryLabelOverlayViewModelBuilder withTileBadge:] */

long FUN_107c82424(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c8245c; end: 107c82463; -[SCDiscoverFeedPublisherStoryLabelOverlayViewModelBuilder withTileBadgePosition:] */

void FUN_107c8245c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 107c82464; end: 107c8249b; -[SCDiscoverFeedPublisherStoryLabelOverlayViewModelBuilder withSubtitleViewModel:] */

long FUN_107c82464(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c8249c; end: 107c824a3; -[SCDiscoverFeedPublisherStoryLabelOverlayViewModelBuilder withShouldHideTexts:] */

void FUN_107c8249c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 107c824a4; end: 107c824ab; -[SCDiscoverFeedPublisherStoryLabelOverlayViewModelBuilder withCompactSubsTitleGradientMultiplier:] */

void FUN_107c824a4(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x3c) = param_1;
  return;
}



/* Entry: 107c824ac; end: 107c824ff; -[SCDiscoverFeedPublisherStoryLabelOverlayViewModelBuilder .cxx_destruct] */

void FUN_107c824ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107c82500; end: 107c825d3; -[SCDiscoverFeedPublisherStoryProgressBarViewModel initWithBackgroundColor:foregroundColor:progressBarPercentage:widthToTileWidthRatio:height:cornerRadius:] */

undefined1 *
FUN_107c82500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fa4b8;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 107c825d4; end: 107c825f7; -[SCDiscoverFeedPublisherStoryProgressBarViewModel copyWithZone:] */

undefined8 FUN_107c825d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c825f8; end: 107c826ef; -[SCDiscoverFeedPublisherStoryProgressBarViewModel hash] */

undefined8 * FUN_107c825f8(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_48 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_40 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_38 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_30 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar5 = &uStack_58;
  uStack_50 = uVar4;
  func_0x000100505190(puVar5,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_107c82840:
    puVar9 = (undefined8 *)0x1;
  }
  else {
    puVar9 = (undefined8 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107c8284c;
    puVar9 = puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if (((ulong)puVar6 & 1) != 0) {
      dVar11 = ABS((double)puVar5[3] - (double)param_3[3]);
      dVar10 = ABS((double)puVar5[3] + (double)param_3[3]) * 2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar2 = dVar11 < dVar10;
      }
      if (bVar2) {
        dVar11 = ABS((double)puVar5[4] - (double)param_3[4]);
        dVar10 = ABS((double)puVar5[4] + (double)param_3[4]) * 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
          bVar2 = dVar11 < dVar10;
        }
        if (bVar2) {
          dVar11 = ABS((double)puVar5[5] - (double)param_3[5]);
          dVar10 = ABS((double)puVar5[5] + (double)param_3[5]) * 2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10)))
          {
            bVar2 = dVar11 < dVar10;
          }
          if (bVar2) {
            dVar11 = ABS((double)puVar5[6] - (double)param_3[6]);
            dVar10 = ABS((double)puVar5[6] + (double)param_3[6]) * 2.220446049250313e-16;
            bVar2 = true;
            if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))
               ) {
              bVar2 = dVar11 < dVar10;
            }
            if ((bVar2) &&
               ((lVar7 = puVar5[1], lVar7 == param_3[1] || (func_0x00010c071c60(), (int)lVar7 != 0))
               )) {
              puVar9 = (undefined8 *)puVar5[2];
              if (puVar9 != (undefined8 *)param_3[2]) {
                func_0x00010c071c60();
                goto LAB_107c8284c;
              }
              goto LAB_107c82840;
            }
          }
        }
      }
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_107c8284c:
  _objc_release(param_3);
  return puVar9;
}



/* Entry: 107c826f0; end: 107c82867; -[SCDiscoverFeedPublisherStoryProgressBarViewModel isEqual:] */

long FUN_107c826f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107c82840:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c8284c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
        dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
          dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                  2.220446049250313e-16;
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
            if ((bVar1) &&
               ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
                (func_0x00010c071c60(), (int)lVar4 != 0)))) {
              lVar4 = *(long *)(param_1 + 0x10);
              if (lVar4 != *(long *)(param_3 + 0x10)) {
                func_0x00010c071c60();
                goto LAB_107c8284c;
              }
              goto LAB_107c82840;
            }
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_107c8284c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107c82868; end: 107c8286f; -[SCDiscoverFeedPublisherStoryProgressBarViewModel backgroundColor] */

undefined8 FUN_107c82868(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107c82870; end: 107c82877; -[SCDiscoverFeedPublisherStoryProgressBarViewModel foregroundColor] */

undefined8 FUN_107c82870(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c82878; end: 107c8287f; -[SCDiscoverFeedPublisherStoryProgressBarViewModel progressBarPercentage] */

undefined8 FUN_107c82878(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107c82880; end: 107c82887; -[SCDiscoverFeedPublisherStoryProgressBarViewModel widthToTileWidthRatio] */

undefined8 FUN_107c82880(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107c82888; end: 107c8288f; -[SCDiscoverFeedPublisherStoryProgressBarViewModel height] */

undefined8 FUN_107c82888(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107c82890; end: 107c82897; -[SCDiscoverFeedPublisherStoryProgressBarViewModel cornerRadius] */

undefined8 FUN_107c82890(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107c82898; end: 107c828c7; -[SCDiscoverFeedPublisherStoryProgressBarViewModel .cxx_destruct] */

void FUN_107c82898(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107c828c8; end: 107c82923; -[SCDiscoverFeedPublisherStorySubtitleViewModel initWithViewCount:episodeNumber:indicatorType:] */

void FUN_107c828c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fa4c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  return;
}



/* Entry: 107c82924; end: 107c82947; -[SCDiscoverFeedPublisherStorySubtitleViewModel copyWithZone:] */

undefined8 FUN_107c82924(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c82948; end: 107c829b7; -[SCDiscoverFeedPublisherStorySubtitleViewModel hash] */

long * FUN_107c82948(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  plVar3 = &lStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar1;
  if (-1 < lVar1) {
    lStack_30 = lVar1;
  }
  lStack_28 = (long)*(int *)(param_1 + 8);
  lStack_20 = -lVar2;
  if (-1 < lVar2) {
    lStack_20 = lVar2;
  }
  func_0x000100505190(&lStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == (long *)param_3) {
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((plVar3 != (long *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar5 = (undefined1 *)plVar3;
      _objc_opt_class(plVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar5);
      if ((((ulong)puVar4 & 1) == 0) ||
         ((*(long *)((long)plVar3 + 0x10) != *(long *)(param_3 + 0x10) ||
          (*(int *)((long)plVar3 + 8) != *(int *)(param_3 + 8))))) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        puVar5 = (undefined1 *)(ulong)(*(long *)((long)plVar3 + 0x18) == *(long *)(param_3 + 0x18));
      }
    }
  }
  _objc_release(param_3);
  return (long *)puVar5;
}



/* Entry: 107c829b8; end: 107c82a5f; -[SCDiscoverFeedPublisherStorySubtitleViewModel isEqual:] */

bool FUN_107c829b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
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
      if (((uVar3 & 1) == 0) ||
         ((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
          (*(int *)(param_1 + 8) != *(int *)(param_3 + 8))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107c82a60; end: 107c82a67; -[SCDiscoverFeedPublisherStorySubtitleViewModel viewCount] */

undefined8 FUN_107c82a60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c82a68; end: 107c82a6f; -[SCDiscoverFeedPublisherStorySubtitleViewModel episodeNumber] */

undefined4 FUN_107c82a68(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 107c82a70; end: 107c82a77; -[SCDiscoverFeedPublisherStorySubtitleViewModel indicatorType] */

undefined8 FUN_107c82a70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107c82a78; end: 107c82b23; -[SCDiscoverFeedCollapsedCollectionViewCellViewModel initWithAttributeTitle:primarySingleTapActionModel:] */

undefined1 *
FUN_107c82a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa4c8;
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



/* Entry: 107c82b24; end: 107c82b47; -[SCDiscoverFeedCollapsedCollectionViewCellViewModel copyWithZone:] */

undefined8 FUN_107c82b24(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c82b48; end: 107c82bbb; -[SCDiscoverFeedCollapsedCollectionViewCellViewModel hash] */

undefined8 * FUN_107c82b48(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_107c82c3c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107c82c48;
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
          goto LAB_107c82c48;
        }
        goto LAB_107c82c3c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107c82c48:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107c82bbc; end: 107c82c63; -[SCDiscoverFeedCollapsedCollectionViewCellViewModel isEqual:] */

long FUN_107c82bbc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107c82c3c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c82c48;
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
          goto LAB_107c82c48;
        }
        goto LAB_107c82c3c;
      }
    }
    lVar3 = 0;
  }
LAB_107c82c48:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107c82c64; end: 107c82c6b; -[SCDiscoverFeedCollapsedCollectionViewCellViewModel attributeTitle] */

undefined8 FUN_107c82c64(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107c82c6c; end: 107c82c73; -[SCDiscoverFeedCollapsedCollectionViewCellViewModel primarySingleTapActionModel] */

undefined8 FUN_107c82c6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c82c74; end: 107c82ca3; -[SCDiscoverFeedCollapsedCollectionViewCellViewModel .cxx_destruct] */

void FUN_107c82c74(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107c82ca4; end: 107c82cff; -[SCDiscoverFeedLoadingViewCellViewModel initWithPreferredCardSize:shouldSetCenter:] */

void FUN_107c82ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fa4d0;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  return;
}



/* Entry: 107c82d00; end: 107c82d23; -[SCDiscoverFeedLoadingViewCellViewModel copyWithZone:] */

undefined8 FUN_107c82d00(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c82d24; end: 107c82dbf; -[SCDiscoverFeedLoadingViewCellViewModel hash] */

ulong * FUN_107c82d24(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uStack_20 = (ulong)*(byte *)(param_1 + 8);
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (ulong *)param_3) {
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar6 = (undefined1 *)puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if ((((ulong)puVar3 & 1) == 0) || (*(char *)((long)puVar2 + 8) != param_3[8])) {
        puVar6 = (undefined1 *)0x0;
      }
      else {
        uVar4 = 0;
        if (*(double *)((long)puVar2 + 0x18) == *(double *)(param_3 + 0x18)) {
          uVar4 = (uint)(*(double *)((long)puVar2 + 0x10) == *(double *)(param_3 + 0x10));
        }
        puVar6 = (undefined1 *)(ulong)uVar4;
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 107c82dc0; end: 107c82e5f; -[SCDiscoverFeedLoadingViewCellViewModel isEqual:] */

bool FUN_107c82dc0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
        bVar3 = false;
      }
      else {
        bVar3 = false;
        if (*(double *)(param_1 + 0x18) == *(double *)(param_3 + 0x18)) {
          bVar3 = *(double *)(param_1 + 0x10) == *(double *)(param_3 + 0x10);
        }
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 107c82e60; end: 107c82e67; -[SCDiscoverFeedLoadingViewCellViewModel preferredCardSize] */

undefined1  [16] FUN_107c82e60(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}



/* Entry: 107c82e68; end: 107c82e6f; -[SCDiscoverFeedLoadingViewCellViewModel shouldSetCenter] */

undefined1 FUN_107c82e68(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107c82e70; end: 107c82f33; -[SCDiscoverFeedTileBadgeViewLayoutConfiguration initWithPadding:cornerRadius:titleTopPadding:titleBottomPadding:iconTitleSpacing:iconSize:backgroundColor:isShadowVisible:] */

undefined1 *
FUN_107c82e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126fa4d8;
  uStack_70 = param_7;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_10;
  }
  _objc_release(param_9);
  return (undefined1 *)puVar1;
}



/* Entry: 107c82f34; end: 107c82f57; -[SCDiscoverFeedTileBadgeViewLayoutConfiguration copyWithZone:] */

undefined8 FUN_107c82f34(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c82f58; end: 107c83087; -[SCDiscoverFeedTileBadgeViewLayoutConfiguration hash] */

ulong * FUN_107c82f58(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  double dVar8;
  double dVar9;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_68 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_60 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_58 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_50 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_48 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar6 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_40 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar4 = &uStack_68;
  uStack_38 = uVar3;
  func_0x000100505190(puVar4,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_107c83244:
    puVar7 = (ulong *)0x1;
  }
  else {
    puVar7 = (ulong *)0x0;
    if ((puVar4 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_107c83248;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) && ((char)puVar4[1] == (char)param_3[1])) {
      dVar9 = ABS((double)puVar4[2] - (double)param_3[2]);
      dVar8 = ABS((double)puVar4[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
        bVar2 = dVar9 < dVar8;
      }
      if (bVar2) {
        dVar9 = ABS((double)puVar4[3] - (double)param_3[3]);
        dVar8 = ABS((double)puVar4[3] + (double)param_3[3]) * 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
          bVar2 = dVar9 < dVar8;
        }
        if (bVar2) {
          dVar9 = ABS((double)puVar4[4] - (double)param_3[4]);
          dVar8 = ABS((double)puVar4[4] + (double)param_3[4]) * 2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
            bVar2 = dVar9 < dVar8;
          }
          if (bVar2) {
            dVar9 = ABS((double)puVar4[5] - (double)param_3[5]);
            dVar8 = ABS((double)puVar4[5] + (double)param_3[5]) * 2.220446049250313e-16;
            bVar2 = true;
            if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
              bVar2 = dVar9 < dVar8;
            }
            if (bVar2) {
              dVar8 = ABS((double)puVar4[6] - (double)param_3[6]);
              if ((dVar8 < 2.2250738585072014e-308) ||
                 (dVar8 < ABS((double)puVar4[6] + (double)param_3[6]) * 2.220446049250313e-16)) {
                dVar8 = ABS((double)puVar4[7] - (double)param_3[7]);
                if ((dVar8 < 2.2250738585072014e-308) ||
                   (dVar8 < ABS((double)puVar4[7] + (double)param_3[7]) * 2.220446049250313e-16)) {
                  puVar7 = (ulong *)puVar4[8];
                  if (puVar7 != (ulong *)param_3[8]) {
                    func_0x00010c071c60();
                    goto LAB_107c83248;
                  }
                  goto LAB_107c83244;
                }
              }
            }
          }
        }
      }
    }
    puVar7 = (ulong *)0x0;
  }
LAB_107c83248:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 107c83088; end: 107c83263; -[SCDiscoverFeedTileBadgeViewLayoutConfiguration isEqual:] */

long FUN_107c83088(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107c83244:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c83248;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
        dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
          dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
            bVar1 = dVar6 < dVar5;
          }
          if (bVar1) {
            dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
            dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                    2.220446049250313e-16;
            bVar1 = true;
            if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
              bVar1 = dVar6 < dVar5;
            }
            if (bVar1) {
              dVar5 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
              if ((dVar5 < 2.2250738585072014e-308) ||
                 (dVar5 < ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                          2.220446049250313e-16)) {
                dVar5 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
                if ((dVar5 < 2.2250738585072014e-308) ||
                   (dVar5 < ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                            2.220446049250313e-16)) {
                  lVar4 = *(long *)(param_1 + 0x40);
                  if (lVar4 != *(long *)(param_3 + 0x40)) {
                    func_0x00010c071c60();
                    goto LAB_107c83248;
                  }
                  goto LAB_107c83244;
                }
              }
            }
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_107c83248:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107c83264; end: 107c8326b; -[SCDiscoverFeedTileBadgeViewLayoutConfiguration padding] */

undefined8 FUN_107c83264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c8326c; end: 107c83273; -[SCDiscoverFeedTileBadgeViewLayoutConfiguration cornerRadius] */

undefined8 FUN_107c8326c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107c83274; end: 107c8327b; -[SCDiscoverFeedTileBadgeViewLayoutConfiguration titleTopPadding] */

undefined8 FUN_107c83274(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107c8327c; end: 107c83283; -[SCDiscoverFeedTileBadgeViewLayoutConfiguration titleBottomPadding] */

undefined8 FUN_107c8327c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107c83284; end: 107c8328b; -[SCDiscoverFeedTileBadgeViewLayoutConfiguration iconTitleSpacing] */

undefined8 FUN_107c83284(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107c8328c; end: 107c83293; -[SCDiscoverFeedTileBadgeViewLayoutConfiguration iconSize] */

undefined8 FUN_107c8328c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107c83294; end: 107c8329b; -[SCDiscoverFeedTileBadgeViewLayoutConfiguration backgroundColor] */

undefined8 FUN_107c83294(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107c8329c; end: 107c832a3; -[SCDiscoverFeedTileBadgeViewLayoutConfiguration isShadowVisible] */

undefined1 FUN_107c8329c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107c832a4; end: 107c832af; -[SCDiscoverFeedTileBadgeViewLayoutConfiguration .cxx_destruct] */

void FUN_107c832a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x40,0);
  return;
}



/* Entry: 107c832b0; end: 107c83387; -[SCDiscoverFeedTileBadgeViewModel initWithTitle:icon:layoutConfig:] */

undefined1 *
FUN_107c832b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fa4e0;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107c83388; end: 107c833ab; -[SCDiscoverFeedTileBadgeViewModel copyWithZone:] */

undefined8 FUN_107c83388(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c833ac; end: 107c8342b; -[SCDiscoverFeedTileBadgeViewModel hash] */

undefined8 * FUN_107c833ac(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107c834c4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107c834d0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_107c834d0;
          }
          goto LAB_107c834c4;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107c834d0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107c8342c; end: 107c834eb; -[SCDiscoverFeedTileBadgeViewModel isEqual:] */

long FUN_107c8342c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107c834c4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c834d0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_107c834d0;
          }
          goto LAB_107c834c4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_107c834d0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107c834ec; end: 107c834f3; -[SCDiscoverFeedTileBadgeViewModel title] */

undefined8 FUN_107c834ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107c834f4; end: 107c834fb; -[SCDiscoverFeedTileBadgeViewModel icon] */

undefined8 FUN_107c834f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c834fc; end: 107c83503; -[SCDiscoverFeedTileBadgeViewModel layoutConfig] */

undefined8 FUN_107c834fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107c83504; end: 107c8353f; -[SCDiscoverFeedTileBadgeViewModel .cxx_destruct] */

void FUN_107c83504(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107c83540; end: 107c8355b; +[SCDiscoverFeedTileBadgeViewModelBuilder discoverFeedTileBadgeViewModel] */

void FUN_107c83540(void)

{
  _objc_alloc_init(PTR_PTR_1126c2410);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c8355c; end: 107c83673; +[SCDiscoverFeedTileBadgeViewModelBuilder discoverFeedTileBadgeViewModelFromExistingDiscoverFeedTileBadgeViewModel:] */

void FUN_107c8355c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126c2410;
  _objc_retain(param_3);
  func_0x00010bf82380(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2bb3c0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfe5400(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2af8e0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c08cb00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar7 = puVar5;
  func_0x00010c2b2580(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107c83674; end: 107c836a7; -[SCDiscoverFeedTileBadgeViewModelBuilder build] */

void FUN_107c83674(void)

{
  _objc_alloc(PTR_PTR_1126d73f8);
  func_0x00010c053040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c836a8; end: 107c836df; -[SCDiscoverFeedTileBadgeViewModelBuilder withTitle:] */

long FUN_107c836a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c836e0; end: 107c83717; -[SCDiscoverFeedTileBadgeViewModelBuilder withIcon:] */

long FUN_107c836e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c83718; end: 107c8374f; -[SCDiscoverFeedTileBadgeViewModelBuilder withLayoutConfig:] */

long FUN_107c83718(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c83750; end: 107c8378b; -[SCDiscoverFeedTileBadgeViewModelBuilder .cxx_destruct] */

void FUN_107c83750(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107c8378c; end: 107c83843; -[SCDiscoverFeedTileOverlayViewModel initWithSubscribed:bannerText:isLive:enableReplayOverlay:subscribedIconStyle:isStoryIconVisible:] */

undefined1 *
FUN_107c8378c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126fa4e8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    *(undefined1 *)((long)puVar1 + 10) = param_6;
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    *(undefined1 *)((long)puVar1 + 0xb) = param_8;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107c83844; end: 107c83867; -[SCDiscoverFeedTileOverlayViewModel copyWithZone:] */

undefined8 FUN_107c83844(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c83868; end: 107c838f7; -[SCDiscoverFeedTileOverlayViewModel hash] */

ulong * FUN_107c83868(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  ulong *puVar5;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 9);
  uStack_40 = (ulong)*(byte *)(param_1 + 10);
  lVar4 = *(long *)(param_1 + 0x18);
  lStack_38 = -lVar4;
  if (-1 < lVar4) {
    lStack_38 = lVar4;
  }
  uStack_30 = (ulong)*(byte *)(param_1 + 0xb);
  puVar2 = &uStack_58;
  uStack_50 = uVar1;
  func_0x000100505190(puVar2,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar5 = (ulong *)0x0;
    if ((puVar2 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_107c839bc;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if (((((ulong)puVar3 & 1) == 0) ||
        ((((char)puVar2[1] != (char)param_3[1] ||
          (*(char *)((long)puVar2 + 9) != *(char *)((long)param_3 + 9))) ||
         (*(char *)((long)puVar2 + 10) != *(char *)((long)param_3 + 10))))) ||
       ((puVar2[3] != param_3[3] ||
        (*(char *)((long)puVar2 + 0xb) != *(char *)((long)param_3 + 0xb))))) {
      puVar5 = (ulong *)0x0;
      goto LAB_107c839bc;
    }
    puVar5 = (ulong *)puVar2[2];
    if (puVar5 != (ulong *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_107c839bc;
    }
  }
  puVar5 = (ulong *)0x1;
LAB_107c839bc:
  _objc_release(param_3);
  return puVar5;
}


