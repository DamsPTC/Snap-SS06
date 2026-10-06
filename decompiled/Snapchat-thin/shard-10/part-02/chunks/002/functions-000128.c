/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107c7f738; end: 107c7f76f; -[SCDiscoverFeedEnhancedPostViewOverlayViewModelBuilder withSubscribeActionModel:] */

long FUN_107c7f738(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c7f770; end: 107c7f7a7; -[SCDiscoverFeedEnhancedPostViewOverlayViewModelBuilder withProfileActionModel:] */

long FUN_107c7f770(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c7f7a8; end: 107c7f7df; -[SCDiscoverFeedEnhancedPostViewOverlayViewModelBuilder withMaskOverlayColor:] */

long FUN_107c7f7a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c7f7e0; end: 107c7f86f; -[SCDiscoverFeedEnhancedPostViewOverlayViewModelBuilder .cxx_destruct] */

void FUN_107c7f7e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107c7f870; end: 107c7fb53; -[SCDiscoverFeedLabelOverlayViewModel initWithSecondaryTextPrefixIcon:secondaryText:title:subtitlePrefixIcon:subtitle:storyPosters:enableAdSlug:subtitleAlpha:subtitlePrefixIconAlpha:avatarViewModel:avatarPlacementType:tileBadge:labelPlacementType:accessibilityIdentifier:shouldHideTitles:ctaViewModel:numberOfLines:compactSubsUserStoriesBadgeStyle:compactSubsTitleGradientMultiplier:calloutLabel:] */

undefined8 *
FUN_107c7f870(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined1 param_19,undefined4 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_98;
  undefined *puStack_90;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_14);
  _objc_retain(param_16);
  _objc_retain(param_18);
  _objc_retain(param_21);
  _objc_retain(param_24);
  puStack_90 = PTR_PTR_1126fa480;
  puVar1 = &uStack_98;
  uStack_98 = param_4;
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
    *(undefined1 *)(puVar1 + 1) = param_12;
    puVar1[8] = param_1;
    puVar1[9] = param_2;
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    puVar1[0xb] = param_15;
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    puVar1[0xd] = param_17;
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_19;
    uVar2 = param_21;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    puVar1[0x10] = param_22;
    puVar1[0x11] = param_23;
    *(undefined4 *)((long)puVar1 + 0xc) = param_3;
    uVar2 = param_24;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x12];
    puVar1[0x12] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_24);
  _objc_release(param_21);
  _objc_release(param_18);
  _objc_release(param_16);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return puVar1;
}



/* Entry: 107c7fb54; end: 107c7fb77; -[SCDiscoverFeedLabelOverlayViewModel copyWithZone:] */

undefined8 FUN_107c7fb54(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c7fb78; end: 107c7fcef; -[SCDiscoverFeedLabelOverlayViewModel hash] */

undefined8 * FUN_107c7fb78(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  float fVar9;
  double dVar10;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_c8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_c0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_b8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_b0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_a8 = uVar2;
  func_0x00010bfde980();
  uStack_98 = (ulong)*(byte *)(param_1 + 8);
  uVar7 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_90 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_90 = uStack_90 ^ uStack_90 >> 0x16;
  uVar7 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_88 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_88 = uStack_88 ^ uStack_88 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_a0 = uVar3;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x58);
  uStack_70 = *(undefined8 *)(param_1 + 0x60);
  lStack_78 = -lVar6;
  if (-1 < lVar6) {
    lStack_78 = lVar6;
  }
  uStack_80 = uVar2;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x68);
  uStack_60 = *(undefined8 *)(param_1 + 0x70);
  lStack_68 = -lVar6;
  if (-1 < lVar6) {
    lStack_68 = lVar6;
  }
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bfde980();
  uStack_40 = *(undefined8 *)(param_1 + 0x88);
  uStack_48 = *(undefined8 *)(param_1 + 0x80);
  uVar7 = (ulong)*(uint *)(param_1 + 0xc) * 0x200000 - 1;
  uVar7 = (uVar7 ^ uVar7 >> 0x18) * 0x109;
  uVar7 = (uVar7 ^ uVar7 >> 0xe) * 0x15;
  lStack_38 = (uVar7 ^ uVar7 >> 0x1c) * 0x80000001;
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  puVar4 = &uStack_c8;
  uStack_30 = uVar3;
  func_0x000100505190(puVar4,0x14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_107c7ff4c:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107c7ff58;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((((ulong)puVar5 & 1) != 0) &&
        ((((*(char *)(puVar4 + 1) == *(char *)(param_3 + 1) && (puVar4[0xb] == param_3[0xb])) &&
          (puVar4[0xd] == param_3[0xd])) &&
         ((*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9) &&
          (puVar4[0x10] == param_3[0x10])))))) && (puVar4[0x11] == param_3[0x11])) {
      dVar10 = ABS((double)puVar4[8] - (double)param_3[8]);
      if ((dVar10 < 2.2250738585072014e-308) ||
         (dVar10 < ABS((double)puVar4[8] + (double)param_3[8]) * 2.220446049250313e-16)) {
        dVar10 = ABS((double)puVar4[9] - (double)param_3[9]);
        if ((dVar10 < 2.2250738585072014e-308) ||
           (dVar10 < ABS((double)puVar4[9] + (double)param_3[9]) * 2.220446049250313e-16)) {
          fVar9 = ABS(*(float *)((long)puVar4 + 0xc) - *(float *)((long)param_3 + 0xc));
          if ((((fVar9 < 1.1754944e-38) ||
               (fVar9 < ABS(*(float *)((long)puVar4 + 0xc) + *(float *)((long)param_3 + 0xc)) *
                        1.1920929e-07)) &&
              ((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0)))
              ) && ((((((lVar6 = puVar4[3], lVar6 == param_3[3] ||
                        (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                       ((lVar6 = puVar4[4], lVar6 == param_3[4] ||
                        (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                      ((lVar6 = puVar4[5], lVar6 == param_3[5] ||
                       (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                     ((lVar6 = puVar4[6], lVar6 == param_3[6] ||
                      (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                    (((((lVar6 = puVar4[7], lVar6 == param_3[7] ||
                        (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                       ((lVar6 = puVar4[10], lVar6 == param_3[10] ||
                        (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                      ((lVar6 = puVar4[0xc], lVar6 == param_3[0xc] ||
                       (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                     (((lVar6 = puVar4[0xe], lVar6 == param_3[0xe] ||
                       (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                      ((lVar6 = puVar4[0xf], lVar6 == param_3[0xf] ||
                       (func_0x00010c071ae0(), (int)lVar6 != 0)))))))))) {
            puVar8 = (undefined8 *)puVar4[0x12];
            if (puVar8 != (undefined8 *)param_3[0x12]) {
              func_0x00010c071ae0();
              goto LAB_107c7ff58;
            }
            goto LAB_107c7ff4c;
          }
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_107c7ff58:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 107c7fcf0; end: 107c7ff73; -[SCDiscoverFeedLabelOverlayViewModel isEqual:] */

long FUN_107c7fcf0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  double dVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107c7ff4c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c7ff58;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
           (*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58))) &&
          (*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68))) &&
         ((*(char *)(param_1 + 9) == *(char *)(param_3 + 9) &&
          (*(long *)(param_1 + 0x80) == *(long *)(param_3 + 0x80))))))) &&
       (*(long *)(param_1 + 0x88) == *(long *)(param_3 + 0x88))) {
      dVar5 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40));
      if ((dVar5 < 2.2250738585072014e-308) ||
         (dVar5 < ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) *
                  2.220446049250313e-16)) {
        dVar5 = ABS(*(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x48));
        if ((dVar5 < 2.2250738585072014e-308) ||
           (dVar5 < ABS(*(double *)(param_1 + 0x48) + *(double *)(param_3 + 0x48)) *
                    2.220446049250313e-16)) {
          fVar4 = ABS(*(float *)(param_1 + 0xc) - *(float *)(param_3 + 0xc));
          if ((((fVar4 < 1.1754944e-38) ||
               (fVar4 < ABS(*(float *)(param_1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07))
              && ((lVar3 = *(long *)(param_1 + 0x10), lVar3 == *(long *)(param_3 + 0x10) ||
                  (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
             ((((((lVar3 = *(long *)(param_1 + 0x18), lVar3 == *(long *)(param_3 + 0x18) ||
                  (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                 ((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20) ||
                  (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                ((lVar3 = *(long *)(param_1 + 0x28), lVar3 == *(long *)(param_3 + 0x28) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
               ((lVar3 = *(long *)(param_1 + 0x30), lVar3 == *(long *)(param_3 + 0x30) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
              (((((lVar3 = *(long *)(param_1 + 0x38), lVar3 == *(long *)(param_3 + 0x38) ||
                  (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                 ((lVar3 = *(long *)(param_1 + 0x50), lVar3 == *(long *)(param_3 + 0x50) ||
                  (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                ((lVar3 = *(long *)(param_1 + 0x60), lVar3 == *(long *)(param_3 + 0x60) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
               (((lVar3 = *(long *)(param_1 + 0x70), lVar3 == *(long *)(param_3 + 0x70) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                ((lVar3 = *(long *)(param_1 + 0x78), lVar3 == *(long *)(param_3 + 0x78) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)))))))))) {
            lVar3 = *(long *)(param_1 + 0x90);
            if (lVar3 != *(long *)(param_3 + 0x90)) {
              func_0x00010c071ae0();
              goto LAB_107c7ff58;
            }
            goto LAB_107c7ff4c;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107c7ff58:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107c7ff74; end: 107c7ff7b; -[SCDiscoverFeedLabelOverlayViewModel secondaryTextPrefixIcon] */

undefined8 FUN_107c7ff74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c7ff7c; end: 107c7ff83; -[SCDiscoverFeedLabelOverlayViewModel secondaryText] */

undefined8 FUN_107c7ff7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107c7ff84; end: 107c7ff8b; -[SCDiscoverFeedLabelOverlayViewModel title] */

undefined8 FUN_107c7ff84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107c7ff8c; end: 107c7ff93; -[SCDiscoverFeedLabelOverlayViewModel subtitlePrefixIcon] */

undefined8 FUN_107c7ff8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107c7ff94; end: 107c7ff9b; -[SCDiscoverFeedLabelOverlayViewModel subtitle] */

undefined8 FUN_107c7ff94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107c7ff9c; end: 107c7ffa3; -[SCDiscoverFeedLabelOverlayViewModel storyPosters] */

undefined8 FUN_107c7ff9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107c7ffa4; end: 107c7ffab; -[SCDiscoverFeedLabelOverlayViewModel enableAdSlug] */

undefined1 FUN_107c7ffa4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107c7ffac; end: 107c7ffb3; -[SCDiscoverFeedLabelOverlayViewModel subtitleAlpha] */

undefined8 FUN_107c7ffac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107c7ffb4; end: 107c7ffbb; -[SCDiscoverFeedLabelOverlayViewModel subtitlePrefixIconAlpha] */

undefined8 FUN_107c7ffb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107c7ffbc; end: 107c7ffc3; -[SCDiscoverFeedLabelOverlayViewModel avatarViewModel] */

undefined8 FUN_107c7ffbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107c7ffc4; end: 107c7ffcb; -[SCDiscoverFeedLabelOverlayViewModel avatarPlacementType] */

undefined8 FUN_107c7ffc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107c7ffcc; end: 107c7ffd3; -[SCDiscoverFeedLabelOverlayViewModel tileBadge] */

undefined8 FUN_107c7ffcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107c7ffd4; end: 107c7ffdb; -[SCDiscoverFeedLabelOverlayViewModel labelPlacementType] */

undefined8 FUN_107c7ffd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107c7ffdc; end: 107c7ffe3; -[SCDiscoverFeedLabelOverlayViewModel accessibilityIdentifier] */

undefined8 FUN_107c7ffdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107c7ffe4; end: 107c7ffeb; -[SCDiscoverFeedLabelOverlayViewModel shouldHideTitles] */

undefined1 FUN_107c7ffe4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107c7ffec; end: 107c7fff3; -[SCDiscoverFeedLabelOverlayViewModel ctaViewModel] */

undefined8 FUN_107c7ffec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107c7fff4; end: 107c7fffb; -[SCDiscoverFeedLabelOverlayViewModel numberOfLines] */

undefined8 FUN_107c7fff4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 107c7fffc; end: 107c80003; -[SCDiscoverFeedLabelOverlayViewModel compactSubsUserStoriesBadgeStyle] */

undefined8 FUN_107c7fffc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107c80004; end: 107c8000b; -[SCDiscoverFeedLabelOverlayViewModel compactSubsTitleGradientMultiplier] */

undefined4 FUN_107c80004(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 107c8000c; end: 107c80013; -[SCDiscoverFeedLabelOverlayViewModel calloutLabel] */

undefined8 FUN_107c8000c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 107c80014; end: 107c800af; -[SCDiscoverFeedLabelOverlayViewModel .cxx_destruct] */

void FUN_107c80014(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 107c800b0; end: 107c800cb; +[SCDiscoverFeedLabelOverlayViewModelBuilder discoverFeedLabelOverlayViewModel] */

void FUN_107c800b0(void)

{
  _objc_alloc_init(PTR_PTR_1126c2408);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c800cc; end: 107c80567; +[SCDiscoverFeedLabelOverlayViewModelBuilder discoverFeedLabelOverlayViewModelFromExistingDiscoverFeedLabelOverlayViewModel:] */

void FUN_107c800cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  
  puVar1 = PTR_PTR_1126c2408;
  _objc_retain(param_3);
  func_0x00010bf81920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c1551e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b7de0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c155120();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b7dc0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2bb3c0(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c261040();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2ba9c0(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c260dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c2ba960(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c25a9a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010c2ba5a0(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010bf8f120(param_3);
  puVar15 = puVar13;
  func_0x00010c2ace00(puVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c260de0(param_3);
  puVar16 = puVar15;
  func_0x00010c2ba980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c261060(param_3);
  puVar17 = puVar16;
  func_0x00010c2ba9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010bf13300();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010c2a8fe0(puVar17,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_3;
  func_0x00010bf130c0(param_3);
  puVar20 = puVar18;
  func_0x00010c2a8ec0(puVar18,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_3;
  func_0x00010c26e9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  func_0x00010c2bb0e0(puVar20,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010c087780(param_3);
  puVar23 = puVar21;
  func_0x00010c2b2020(puVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010beecec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar23;
  func_0x00010c2a74a0(puVar23,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = param_3;
  func_0x00010c230e40(param_3);
  puVar26 = puVar24;
  func_0x00010c2b89c0(puVar24,param_2,uVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = param_3;
  func_0x00010bf5d660(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar26;
  func_0x00010c2ab7c0(puVar26,param_2,uVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = param_3;
  func_0x00010c0def20(param_3);
  puVar29 = puVar27;
  func_0x00010c2b4ac0(puVar27,param_2,uVar28);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = param_3;
  func_0x00010bf43320(param_3);
  puVar30 = puVar29;
  func_0x00010c2aab60(puVar29,param_2,uVar28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43300(param_3);
  puVar31 = puVar30;
  func_0x00010c2aab40(puVar30);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = param_3;
  func_0x00010bf28980(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar32 = puVar31;
  func_0x00010c2a9c80(puVar31,param_2,uVar28);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar28);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar27);
  _objc_release(uVar25);
  _objc_release(puVar26);
  _objc_release(puVar24);
  _objc_release(uVar22);
  _objc_release(puVar23);
  _objc_release(puVar21);
  _objc_release(uVar19);
  _objc_release(puVar20);
  _objc_release(puVar18);
  _objc_release(uVar14);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
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
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar32);
  return;
}



/* Entry: 107c80568; end: 107c805e7; -[SCDiscoverFeedLabelOverlayViewModelBuilder build] */

void FUN_107c80568(long param_1)

{
  _objc_alloc(PTR_PTR_1126ca450);
  func_0x00010c042c80(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined4 *)(param_1 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c805e8; end: 107c8061f; -[SCDiscoverFeedLabelOverlayViewModelBuilder withSecondaryTextPrefixIcon:] */

long FUN_107c805e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c80620; end: 107c80657; -[SCDiscoverFeedLabelOverlayViewModelBuilder withSecondaryText:] */

long FUN_107c80620(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c80658; end: 107c8068f; -[SCDiscoverFeedLabelOverlayViewModelBuilder withTitle:] */

long FUN_107c80658(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c80690; end: 107c806c7; -[SCDiscoverFeedLabelOverlayViewModelBuilder withSubtitlePrefixIcon:] */

long FUN_107c80690(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c806c8; end: 107c806ff; -[SCDiscoverFeedLabelOverlayViewModelBuilder withSubtitle:] */

long FUN_107c806c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c80700; end: 107c80737; -[SCDiscoverFeedLabelOverlayViewModelBuilder withStoryPosters:] */

long FUN_107c80700(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c80738; end: 107c8073f; -[SCDiscoverFeedLabelOverlayViewModelBuilder withEnableAdSlug:] */

void FUN_107c80738(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 107c80740; end: 107c80747; -[SCDiscoverFeedLabelOverlayViewModelBuilder withSubtitleAlpha:] */

void FUN_107c80740(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x40) = param_1;
  return;
}



/* Entry: 107c80748; end: 107c8074f; -[SCDiscoverFeedLabelOverlayViewModelBuilder withSubtitlePrefixIconAlpha:] */

void FUN_107c80748(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x48) = param_1;
  return;
}



/* Entry: 107c80750; end: 107c80787; -[SCDiscoverFeedLabelOverlayViewModelBuilder withAvatarViewModel:] */

long FUN_107c80750(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c80788; end: 107c8078f; -[SCDiscoverFeedLabelOverlayViewModelBuilder withAvatarPlacementType:] */

void FUN_107c80788(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 107c80790; end: 107c807c7; -[SCDiscoverFeedLabelOverlayViewModelBuilder withTileBadge:] */

long FUN_107c80790(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c807c8; end: 107c807cf; -[SCDiscoverFeedLabelOverlayViewModelBuilder withLabelPlacementType:] */

void FUN_107c807c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 107c807d0; end: 107c80807; -[SCDiscoverFeedLabelOverlayViewModelBuilder withAccessibilityIdentifier:] */

long FUN_107c807d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c80808; end: 107c8080f; -[SCDiscoverFeedLabelOverlayViewModelBuilder withShouldHideTitles:] */

void FUN_107c80808(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 107c80810; end: 107c80847; -[SCDiscoverFeedLabelOverlayViewModelBuilder withCtaViewModel:] */

long FUN_107c80810(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c80848; end: 107c8084f; -[SCDiscoverFeedLabelOverlayViewModelBuilder withNumberOfLines:] */

void FUN_107c80848(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 107c80850; end: 107c80857; -[SCDiscoverFeedLabelOverlayViewModelBuilder withCompactSubsUserStoriesBadgeStyle:] */

void FUN_107c80850(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 107c80858; end: 107c8085f; -[SCDiscoverFeedLabelOverlayViewModelBuilder withCompactSubsTitleGradientMultiplier:] */

void FUN_107c80858(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x98) = param_1;
  return;
}



/* Entry: 107c80860; end: 107c80897; -[SCDiscoverFeedLabelOverlayViewModelBuilder withCalloutLabel:] */

long FUN_107c80860(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c80898; end: 107c80933; -[SCDiscoverFeedLabelOverlayViewModelBuilder .cxx_destruct] */

void FUN_107c80898(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 107c80934; end: 107c80b93; -[SCDiscoverFeedLabelFooterViewModel initWithContentTitle:contentTitleForSizing:contentSubtitle:contentSubtitleForSizing:creatorDisplayName:creatorDisplayNameForSizing:creatorDisplayNameIcon:avatarViewModel:engagementBadgeViewModel:profileActionModel:calloutLabel:] */

undefined8 *
FUN_107c80934(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

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
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126fa488;
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
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
  }
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
  return puVar1;
}



/* Entry: 107c80b94; end: 107c80bb7; -[SCDiscoverFeedLabelFooterViewModel copyWithZone:] */

undefined8 FUN_107c80b94(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c80bb8; end: 107c80c97; -[SCDiscoverFeedLabelFooterViewModel hash] */

undefined8 * FUN_107c80bb8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
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
  long lStack_28;
  
  puVar3 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107c80df0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107c80dfc;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x28);
              if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x30);
                if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x38);
                  if ((lVar5 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x40);
                    if ((lVar5 == *(long *)(param_3 + 0x40)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = *(long *)((long)puVar3 + 0x48);
                      if ((lVar5 == *(long *)(param_3 + 0x48)) ||
                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = *(long *)((long)puVar3 + 0x50);
                        if ((lVar5 == *(long *)(param_3 + 0x50)) ||
                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          puVar6 = *(undefined1 **)((long)puVar3 + 0x58);
                          if (puVar6 != *(undefined1 **)(param_3 + 0x58)) {
                            func_0x00010c071ae0();
                            goto LAB_107c80dfc;
                          }
                          goto LAB_107c80df0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107c80dfc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107c80c98; end: 107c80e17; -[SCDiscoverFeedLabelFooterViewModel isEqual:] */

long FUN_107c80c98(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107c80df0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c80dfc;
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
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if ((lVar3 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x40);
                    if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x48);
                      if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x50);
                        if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x58);
                          if (lVar3 != *(long *)(param_3 + 0x58)) {
                            func_0x00010c071ae0();
                            goto LAB_107c80dfc;
                          }
                          goto LAB_107c80df0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107c80dfc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107c80e18; end: 107c80e1f; -[SCDiscoverFeedLabelFooterViewModel contentTitle] */

undefined8 FUN_107c80e18(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107c80e20; end: 107c80e27; -[SCDiscoverFeedLabelFooterViewModel contentTitleForSizing] */

undefined8 FUN_107c80e20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c80e28; end: 107c80e2f; -[SCDiscoverFeedLabelFooterViewModel contentSubtitle] */

undefined8 FUN_107c80e28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107c80e30; end: 107c80e37; -[SCDiscoverFeedLabelFooterViewModel contentSubtitleForSizing] */

undefined8 FUN_107c80e30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107c80e38; end: 107c80e3f; -[SCDiscoverFeedLabelFooterViewModel creatorDisplayName] */

undefined8 FUN_107c80e38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107c80e40; end: 107c80e47; -[SCDiscoverFeedLabelFooterViewModel creatorDisplayNameForSizing] */

undefined8 FUN_107c80e40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107c80e48; end: 107c80e4f; -[SCDiscoverFeedLabelFooterViewModel creatorDisplayNameIcon] */

undefined8 FUN_107c80e48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107c80e50; end: 107c80e57; -[SCDiscoverFeedLabelFooterViewModel avatarViewModel] */

undefined8 FUN_107c80e50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107c80e58; end: 107c80e5f; -[SCDiscoverFeedLabelFooterViewModel engagementBadgeViewModel] */

undefined8 FUN_107c80e58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107c80e60; end: 107c80e67; -[SCDiscoverFeedLabelFooterViewModel profileActionModel] */

undefined8 FUN_107c80e60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107c80e68; end: 107c80e6f; -[SCDiscoverFeedLabelFooterViewModel calloutLabel] */

undefined8 FUN_107c80e68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107c80e70; end: 107c80f0b; -[SCDiscoverFeedLabelFooterViewModel .cxx_destruct] */

void FUN_107c80e70(long param_1)

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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107c80f0c; end: 107c80f57; -[SCEngagementBadgeViewModel initWithCount:iconType:] */

void FUN_107c80f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fa490;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 107c80f58; end: 107c80f7b; -[SCEngagementBadgeViewModel copyWithZone:] */

undefined8 FUN_107c80f58(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c80f7c; end: 107c80fdb; -[SCEngagementBadgeViewModel hash] */

long * FUN_107c80f7c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uStack_20 = *(undefined8 *)(param_1 + 0x10);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  plVar2 = &lStack_28;
  func_0x000100505190(plVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar2 == param_3) {
    plVar4 = (long *)0x1;
  }
  else {
    plVar4 = (long *)0x0;
    if ((plVar2 != (long *)0x0) && (param_3 != (long *)0x0)) {
      plVar4 = plVar2;
      _objc_opt_class(plVar2);
      plVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,plVar4);
      if ((((ulong)plVar3 & 1) == 0) || (plVar2[1] != param_3[1])) {
        plVar4 = (long *)0x0;
      }
      else {
        plVar4 = (long *)(ulong)(plVar2[2] == param_3[2]);
      }
    }
  }
  _objc_release(param_3);
  return plVar4;
}



/* Entry: 107c80fdc; end: 107c81073; -[SCEngagementBadgeViewModel isEqual:] */

bool FUN_107c80fdc(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107c81074; end: 107c8107b; -[SCEngagementBadgeViewModel count] */

undefined8 FUN_107c81074(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107c8107c; end: 107c81083; -[SCEngagementBadgeViewModel iconType] */

undefined8 FUN_107c8107c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c81084; end: 107c8115b; -[SCDiscoverFeedJoinTheChatOverlayViewModel initWithTopicString:memberCountString:joinButtonTitle:] */

undefined1 *
FUN_107c81084(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126fa498;
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



/* Entry: 107c8115c; end: 107c8117f; -[SCDiscoverFeedJoinTheChatOverlayViewModel copyWithZone:] */

undefined8 FUN_107c8115c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c81180; end: 107c811ff; -[SCDiscoverFeedJoinTheChatOverlayViewModel hash] */

undefined8 * FUN_107c81180(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_107c81298:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107c812a4;
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
            goto LAB_107c812a4;
          }
          goto LAB_107c81298;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107c812a4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107c81200; end: 107c812bf; -[SCDiscoverFeedJoinTheChatOverlayViewModel isEqual:] */

long FUN_107c81200(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107c81298:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c812a4;
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
            goto LAB_107c812a4;
          }
          goto LAB_107c81298;
        }
      }
    }
    lVar3 = 0;
  }
LAB_107c812a4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107c812c0; end: 107c812c7; -[SCDiscoverFeedJoinTheChatOverlayViewModel topicString] */

undefined8 FUN_107c812c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107c812c8; end: 107c812cf; -[SCDiscoverFeedJoinTheChatOverlayViewModel memberCountString] */

undefined8 FUN_107c812c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c812d0; end: 107c812d7; -[SCDiscoverFeedJoinTheChatOverlayViewModel joinButtonTitle] */

undefined8 FUN_107c812d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107c812d8; end: 107c81313; -[SCDiscoverFeedJoinTheChatOverlayViewModel .cxx_destruct] */

void FUN_107c812d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107c81314; end: 107c8132f; +[SCDiscoverFeedJoinTheChatOverlayViewModelBuilder discoverFeedJoinTheChatOverlayViewModel] */

void FUN_107c81314(void)

{
  _objc_alloc_init(PTR_PTR_1126d73e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c81330; end: 107c81447; +[SCDiscoverFeedJoinTheChatOverlayViewModelBuilder discoverFeedJoinTheChatOverlayViewModelFromExistingDiscoverFeedJoinTheChatOverlayViewModel:] */

void FUN_107c81330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126d73e8;
  _objc_retain(param_3);
  func_0x00010bf818e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2757a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2bb680(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0c77a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b3c40(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c085960(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar7 = puVar5;
  func_0x00010c2b1ec0(puVar5,param_2,uVar6);
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



/* Entry: 107c81448; end: 107c8147b; -[SCDiscoverFeedJoinTheChatOverlayViewModelBuilder build] */

void FUN_107c81448(void)

{
  _objc_alloc(PTR_PTR_1126d7360);
  func_0x00010c054620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c8147c; end: 107c814b3; -[SCDiscoverFeedJoinTheChatOverlayViewModelBuilder withTopicString:] */

long FUN_107c8147c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c814b4; end: 107c814eb; -[SCDiscoverFeedJoinTheChatOverlayViewModelBuilder withMemberCountString:] */

long FUN_107c814b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c814ec; end: 107c81523; -[SCDiscoverFeedJoinTheChatOverlayViewModelBuilder withJoinButtonTitle:] */

long FUN_107c814ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c81524; end: 107c8155f; -[SCDiscoverFeedJoinTheChatOverlayViewModelBuilder .cxx_destruct] */

void FUN_107c81524(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107c81560; end: 107c81683; -[SCDiscoverFeedCtaViewModel initWithText:tapAreaInsets:icon:iconPosition:iconSize:showTapAreaVisualOverlay:maximumFontSize:sigButtonType:sigButtonStyle:] */

undefined1 *
FUN_107c81560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  puVar1 = &uStack_a0;
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_98 = PTR_PTR_1126fa4a0;
  uStack_a0 = param_8;
  _objc_msgSendSuper2(&uStack_a0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x50) = param_1;
    *(undefined8 *)((long)puVar1 + 0x58) = param_2;
    *(undefined8 *)((long)puVar1 + 0x60) = param_3;
    *(undefined8 *)((long)puVar1 + 0x68) = param_4;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_12;
    *(undefined8 *)((long)puVar1 + 0x40) = param_5;
    *(undefined8 *)((long)puVar1 + 0x48) = param_6;
    *(undefined1 *)((long)puVar1 + 8) = param_13;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_14;
    *(undefined8 *)((long)puVar1 + 0x38) = param_15;
  }
  _objc_release(param_11);
  _objc_release(param_10);
  return (undefined1 *)puVar1;
}



/* Entry: 107c81684; end: 107c816a7; -[SCDiscoverFeedCtaViewModel copyWithZone:] */

undefined8 FUN_107c81684(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c816a8; end: 107c8180f; -[SCDiscoverFeedCtaViewModel hash] */

undefined8 * FUN_107c816a8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ushort uVar10;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar5 = &uStack_90;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_88 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_88 = uStack_88 ^ uStack_88 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x60) + *(ulong *)(param_1 + 0x60) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_80 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_80 = uStack_80 ^ uStack_80 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_78 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_70 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uStack_90 = uVar3;
  func_0x00010bfde980();
  uStack_60 = *(undefined8 *)(param_1 + 0x20);
  uVar8 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_58 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_50 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_40 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uStack_30 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar4;
  func_0x000100505190(&uStack_90,0xd);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (undefined8 *)param_3) {
LAB_107c81958:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107c8195c;
    puVar9 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar6 & 1) != 0) &&
       ((((*(long *)((long)puVar5 + 0x20) == *(long *)(param_3 + 0x20) &&
          (*(char *)((long)puVar5 + 8) == param_3[8])) &&
         (*(long *)((long)puVar5 + 0x30) == *(long *)(param_3 + 0x30))) &&
        ((*(long *)((long)puVar5 + 0x38) == *(long *)(param_3 + 0x38) &&
         (uVar10 = NEON_uminv(CONCAT26(-(ushort)(*(double *)((long)puVar5 + 0x68) ==
                                                *(double *)(param_3 + 0x68)),
                                       CONCAT24(-(ushort)(*(double *)((long)puVar5 + 0x60) ==
                                                         *(double *)(param_3 + 0x60)),
                                                CONCAT22(-(ushort)(*(double *)((long)puVar5 + 0x58)
                                                                  == *(double *)(param_3 + 0x58)),
                                                         -(ushort)(*(double *)((long)puVar5 + 0x50)
                                                                  == *(double *)(param_3 + 0x50)))))
                              ,2), (uVar10 & 1) != 0)))))) {
      puVar9 = (undefined1 *)0x0;
      if ((*(double *)((long)puVar5 + 0x40) != *(double *)(param_3 + 0x40)) ||
         (*(double *)((long)puVar5 + 0x48) != *(double *)(param_3 + 0x48))) goto LAB_107c8195c;
      dVar2 = ABS(*(double *)((long)puVar5 + 0x28) - *(double *)(param_3 + 0x28));
      if (((dVar2 < 2.2250738585072014e-308) ||
          (dVar2 < ABS(*(double *)((long)puVar5 + 0x28) + *(double *)(param_3 + 0x28)) *
                   2.220446049250313e-16)) &&
         ((lVar7 = *(long *)((long)puVar5 + 0x10), lVar7 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar7 != 0)))) {
        puVar9 = *(undefined1 **)((long)puVar5 + 0x18);
        if (puVar9 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107c8195c;
        }
        goto LAB_107c81958;
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_107c8195c:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 107c81810; end: 107c81977; -[SCDiscoverFeedCtaViewModel isEqual:] */

long FUN_107c81810(ulong param_1,undefined8 param_2,ulong param_3)

{
  double dVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ushort uVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107c81958:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c8195c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
          (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
         (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
        ((*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38) &&
         (uVar5 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x68) ==
                                               *(double *)(param_3 + 0x68)),
                                      CONCAT24(-(ushort)(*(double *)(param_1 + 0x60) ==
                                                        *(double *)(param_3 + 0x60)),
                                               CONCAT22(-(ushort)(*(double *)(param_1 + 0x58) ==
                                                                 *(double *)(param_3 + 0x58)),
                                                        -(ushort)(*(double *)(param_1 + 0x50) ==
                                                                 *(double *)(param_3 + 0x50))))),2),
         (uVar5 & 1) != 0)))))) {
      lVar4 = 0;
      if ((*(double *)(param_1 + 0x40) != *(double *)(param_3 + 0x40)) ||
         (*(double *)(param_1 + 0x48) != *(double *)(param_3 + 0x48))) goto LAB_107c8195c;
      dVar1 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
      if (((dVar1 < 2.2250738585072014e-308) ||
          (dVar1 < ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                   2.220446049250313e-16)) &&
         ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107c8195c;
        }
        goto LAB_107c81958;
      }
    }
    lVar4 = 0;
  }
LAB_107c8195c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107c81978; end: 107c8197f; -[SCDiscoverFeedCtaViewModel text] */

undefined8 FUN_107c81978(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c81980; end: 107c8198b; -[SCDiscoverFeedCtaViewModel tapAreaInsets] */

undefined8 FUN_107c81980(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107c8198c; end: 107c81993; -[SCDiscoverFeedCtaViewModel icon] */

undefined8 FUN_107c8198c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107c81994; end: 107c8199b; -[SCDiscoverFeedCtaViewModel iconPosition] */

undefined8 FUN_107c81994(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107c8199c; end: 107c819a3; -[SCDiscoverFeedCtaViewModel iconSize] */

undefined1  [16] FUN_107c8199c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x40);
}



/* Entry: 107c819a4; end: 107c819ab; -[SCDiscoverFeedCtaViewModel showTapAreaVisualOverlay] */

undefined1 FUN_107c819a4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}


