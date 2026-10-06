/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afae07c; end: 10afae183; -[SCDiscoverFeedEventsConfiguration hash] */

long * FUN_10afae07c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  long *plVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  long lStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  ulong uStack_20;
  long lStack_18;
  
  plVar2 = &lStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = (ulong)*(uint *)(param_1 + 8) * 0x200000 - 1;
  uVar5 = (uVar4 ^ uVar4 >> 0x18) * 0x109;
  uVar4 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0xe) * 0x15;
  lStack_40 = (uVar5 ^ uVar5 >> 0x1c) * 0x80000001;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_38 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar4 = (ulong)*(uint *)(param_1 + 0xc) * 0x200000 - 1;
  uVar4 = (uVar4 ^ uVar4 >> 0x18) * 0x109;
  uVar4 = (uVar4 ^ uVar4 >> 0xe) * 0x15;
  lStack_30 = (uVar4 ^ uVar4 >> 0x1c) * 0x80000001;
  uVar4 = (ulong)*(uint *)(param_1 + 0x10) * 0x200000 - 1;
  uVar4 = (uVar4 ^ uVar4 >> 0x18) * 0x109;
  uVar4 = (uVar4 ^ uVar4 >> 0xe) * 0x15;
  lStack_28 = (uVar4 ^ uVar4 >> 0x1c) * 0x80000001;
  uVar4 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_20 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  func_0x000107c3191c(&lStack_40,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar2 == (long *)param_3) {
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((plVar2 != (long *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar6 = (undefined1 *)plVar2;
      _objc_opt_class(plVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if (((ulong)puVar3 & 1) != 0) {
        fVar9 = ABS(*(float *)((long)plVar2 + 8) - *(float *)(param_3 + 8));
        fVar7 = ABS(*(float *)((long)plVar2 + 8) + *(float *)(param_3 + 8)) * 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar9) && (bVar1 = false, !NAN(fVar9) && !NAN(fVar7))) {
          bVar1 = fVar9 < fVar7;
        }
        if (bVar1) {
          dVar10 = ABS(*(double *)((long)plVar2 + 0x18) - *(double *)(param_3 + 0x18));
          dVar8 = ABS(*(double *)((long)plVar2 + 0x18) + *(double *)(param_3 + 0x18)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar8))) {
            bVar1 = dVar10 < dVar8;
          }
          if (bVar1) {
            fVar9 = ABS(*(float *)((long)plVar2 + 0xc) - *(float *)(param_3 + 0xc));
            fVar7 = ABS(*(float *)((long)plVar2 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
            bVar1 = true;
            if ((1.1754944e-38 <= fVar9) && (bVar1 = false, !NAN(fVar9) && !NAN(fVar7))) {
              bVar1 = fVar9 < fVar7;
            }
            if (bVar1) {
              fVar9 = ABS(*(float *)((long)plVar2 + 0x10) - *(float *)(param_3 + 0x10));
              fVar7 = ABS(*(float *)((long)plVar2 + 0x10) + *(float *)(param_3 + 0x10)) *
                      1.1920929e-07;
              bVar1 = true;
              if ((1.1754944e-38 <= fVar9) && (bVar1 = false, !NAN(fVar9) && !NAN(fVar7))) {
                bVar1 = fVar9 < fVar7;
              }
              if (bVar1) {
                dVar8 = ABS(*(double *)((long)plVar2 + 0x20) + *(double *)(param_3 + 0x20)) *
                        2.220446049250313e-16;
                if (dVar8 <= 2.2250738585072014e-308) {
                  dVar8 = 2.2250738585072014e-308;
                }
                puVar6 = (undefined1 *)
                         (ulong)(ABS(*(double *)((long)plVar2 + 0x20) - *(double *)(param_3 + 0x20))
                                < dVar8);
                goto LAB_10afae2d4;
              }
            }
          }
        }
      }
      puVar6 = (undefined1 *)0x0;
    }
  }
LAB_10afae2d4:
  _objc_release(param_3);
  return (long *)puVar6;
}



/* Entry: 10afae184; end: 10afae2ef; -[SCDiscoverFeedEventsConfiguration isEqual:] */

bool FUN_10afae184(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  
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
        fVar6 = ABS(*(float *)(param_1 + 8) - *(float *)(param_3 + 8));
        fVar4 = ABS(*(float *)(param_1 + 8) + *(float *)(param_3 + 8)) * 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar4))) {
          bVar1 = fVar6 < fVar4;
        }
        if (bVar1) {
          dVar7 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
          dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
            bVar1 = dVar7 < dVar5;
          }
          if (bVar1) {
            fVar6 = ABS(*(float *)(param_1 + 0xc) - *(float *)(param_3 + 0xc));
            fVar4 = ABS(*(float *)(param_1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
            bVar1 = true;
            if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar4))) {
              bVar1 = fVar6 < fVar4;
            }
            if (bVar1) {
              fVar6 = ABS(*(float *)(param_1 + 0x10) - *(float *)(param_3 + 0x10));
              fVar4 = ABS(*(float *)(param_1 + 0x10) + *(float *)(param_3 + 0x10)) * 1.1920929e-07;
              bVar1 = true;
              if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar4))) {
                bVar1 = fVar6 < fVar4;
              }
              if (bVar1) {
                dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                        2.220446049250313e-16;
                if (dVar5 <= 2.2250738585072014e-308) {
                  dVar5 = 2.2250738585072014e-308;
                }
                bVar1 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20)) < dVar5;
                goto LAB_10afae2d4;
              }
            }
          }
        }
      }
      bVar1 = false;
    }
  }
LAB_10afae2d4:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10afae2f0; end: 10afae2f7; -[SCDiscoverFeedEventsConfiguration rankingMinimumVisibleFraction] */

undefined4 FUN_10afae2f0(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10afae2f8; end: 10afae2ff; -[SCDiscoverFeedEventsConfiguration rankingImpressionTimeInterval] */

undefined8 FUN_10afae2f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afae300; end: 10afae307; -[SCDiscoverFeedEventsConfiguration adsMinimumVisibleFraction] */

undefined4 FUN_10afae300(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10afae308; end: 10afae30f; -[SCDiscoverFeedEventsConfiguration adsFullyVisibleFraction] */

undefined4 FUN_10afae308(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10afae310; end: 10afae317; -[SCDiscoverFeedEventsConfiguration adsImpressionTimeInterval] */

undefined8 FUN_10afae310(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afae318; end: 10afae5e3; -[SCDiscoverFeedImpressionViewItem initWithIdentifier:frame:date:storyLoggingInfo:triggeringItemId:triggeringItemPlaylistOffset:itemPos:isProminent:source:sectionIdentifier:hasReplayOverlay:hasCTA:pageTypeSpecific:pageType:pageSessionId:pageSessionStartTs:trigger:carouselRowNum:additionalInfo:tileAutoPlayEligible:autoPlayDataSource:] */

undefined8 *
FUN_10afae318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14,undefined4 param_15,undefined8 param_16,
             undefined8 param_17,undefined4 param_18,undefined4 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined1 param_26,undefined4 param_27,undefined8 param_28)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_17);
  _objc_retain(param_20);
  _objc_retain(param_22);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_28);
  puStack_a0 = PTR_PTR_1127037f8;
  puVar1 = &uStack_a8;
  uStack_a8 = param_6;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    puVar1[0x12] = param_1;
    puVar1[0x13] = param_2;
    puVar1[0x14] = param_3;
    puVar1[0x15] = param_4;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    puVar1[6] = param_12;
    puVar1[7] = param_13;
    *(undefined1 *)(puVar1 + 1) = param_14;
    puVar1[8] = param_16;
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = (undefined1)param_18;
    *(undefined1 *)((long)puVar1 + 10) = param_18._1_1_;
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    puVar1[0xb] = param_21;
    uVar2 = param_22;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    puVar1[0xd] = param_5;
    puVar1[0xe] = param_23;
    uVar2 = param_24;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_25;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xb) = param_26;
    _objc_retain(param_28);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_28;
    _objc_release(uVar2);
  }
  _objc_release(param_28);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_22);
  _objc_release(param_20);
  _objc_release(param_17);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  return puVar1;
}



/* Entry: 10afae5e4; end: 10afae607; -[SCDiscoverFeedImpressionViewItem copyWithZone:] */

undefined8 FUN_10afae5e4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afae608; end: 10afae7c3; -[SCDiscoverFeedImpressionViewItem hash] */

undefined8 * FUN_10afae608(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  double dVar10;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0x90) + *(ulong *)(param_1 + 0x90) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_e0 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_e0 = uStack_e0 ^ uStack_e0 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x98) + *(ulong *)(param_1 + 0x98) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0xa0) + *(ulong *)(param_1 + 0xa0) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_d8 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_d8 = uStack_d8 ^ uStack_d8 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_d0 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_d0 = uStack_d0 ^ uStack_d0 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0xa8) + *(ulong *)(param_1 + 0xa8) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_c8 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_c8 = uStack_c8 ^ uStack_c8 >> 0x16;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uStack_e8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_c0 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_b8 = uVar3;
  func_0x00010bfde980();
  uStack_a8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_a0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uStack_98 = (ulong)*(byte *)(param_1 + 8);
  lVar7 = *(long *)(param_1 + 0x40);
  uStack_88 = *(undefined8 *)(param_1 + 0x48);
  lStack_90 = -lVar7;
  if (-1 < lVar7) {
    lStack_90 = lVar7;
  }
  uStack_b0 = uVar4;
  func_0x00010bfde980();
  uStack_80 = (ulong)*(byte *)(param_1 + 9);
  uStack_78 = (ulong)*(byte *)(param_1 + 10);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x58);
  uStack_60 = *(undefined8 *)(param_1 + 0x60);
  lStack_68 = -lVar7;
  if (-1 < lVar7) {
    lStack_68 = lVar7;
  }
  uStack_70 = uVar3;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x70);
  uVar8 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_58 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  lStack_50 = -lVar7;
  if (-1 < lVar7) {
    lStack_50 = lVar7;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 0xb);
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  uStack_40 = uVar4;
  func_0x00010bfde980();
  puVar5 = &uStack_e8;
  uStack_30 = uVar3;
  func_0x000107c3191c(puVar5,0x18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_10afae9e4:
    puVar9 = (undefined8 *)0x1;
  }
  else {
    puVar9 = (undefined8 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afae9f0;
    puVar9 = puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    iVar2 = (int)puVar6;
    if ((((((ulong)puVar6 & 1) != 0) &&
         ((((puVar5[6] == param_3[6] && (puVar5[7] == param_3[7])) &&
           (*(char *)(puVar5 + 1) == *(char *)(param_3 + 1))) &&
          ((puVar5[8] == param_3[8] && (*(char *)((long)puVar5 + 9) == *(char *)((long)param_3 + 9))
           ))))) && (*(char *)((long)puVar5 + 10) == *(char *)((long)param_3 + 10))) &&
       (((puVar5[0xb] == param_3[0xb] && (puVar5[0xe] == param_3[0xe])) &&
        ((*(char *)((long)puVar5 + 0xb) == *(char *)((long)param_3 + 0xb) &&
         (_CGRectEqualToRect(puVar5[0x12],puVar5[0x13],puVar5[0x14],puVar5[0x15],param_3[0x12],
                             param_3[0x13],param_3[0x14],param_3[0x15]), iVar2 != 0)))))) {
      dVar10 = ABS((double)puVar5[0xd] - (double)param_3[0xd]);
      if (((((((dVar10 < 2.2250738585072014e-308) ||
              (dVar10 < ABS((double)puVar5[0xd] + (double)param_3[0xd]) * 2.220446049250313e-16)) &&
             ((lVar7 = puVar5[2], lVar7 == param_3[2] || (func_0x00010c071ae0(), (int)lVar7 != 0))))
            && ((((lVar7 = puVar5[3], lVar7 == param_3[3] ||
                  (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                 ((lVar7 = puVar5[4], lVar7 == param_3[4] ||
                  (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                ((lVar7 = puVar5[5], lVar7 == param_3[5] || (func_0x00010c071ae0(), (int)lVar7 != 0)
                 ))))) &&
           ((lVar7 = puVar5[9], lVar7 == param_3[9] || (func_0x00010c071ae0(), (int)lVar7 != 0))))
          && ((((lVar7 = puVar5[10], lVar7 == param_3[10] ||
                (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
               ((lVar7 = puVar5[0xc], lVar7 == param_3[0xc] ||
                (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
              ((lVar7 = puVar5[0xf], lVar7 == param_3[0xf] ||
               (func_0x00010c071ae0(), (int)lVar7 != 0)))))) &&
         ((lVar7 = puVar5[0x10], lVar7 == param_3[0x10] || (func_0x00010c071ae0(), (int)lVar7 != 0))
         )) {
        puVar9 = (undefined8 *)puVar5[0x11];
        if (puVar9 != (undefined8 *)param_3[0x11]) {
          func_0x00010c071ae0();
          goto LAB_10afae9f0;
        }
        goto LAB_10afae9e4;
      }
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_10afae9f0:
  _objc_release(param_3);
  return puVar9;
}



/* Entry: 10afae7c4; end: 10afaea0b; -[SCDiscoverFeedImpressionViewItem isEqual:] */

long FUN_10afae7c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afae9e4:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afae9f0;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    iVar1 = (int)uVar3;
    if (((((uVar3 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
            (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
           (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
          ((*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
       (((*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58) &&
         (*(long *)(param_1 + 0x70) == *(long *)(param_3 + 0x70))) &&
        ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
         (_CGRectEqualToRect(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),
                             *(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8),
                             *(undefined8 *)(param_3 + 0x90),*(undefined8 *)(param_3 + 0x98),
                             *(undefined8 *)(param_3 + 0xa0),*(undefined8 *)(param_3 + 0xa8)),
         iVar1 != 0)))))) {
      dVar5 = ABS(*(double *)(param_1 + 0x68) - *(double *)(param_3 + 0x68));
      if (((((((dVar5 < 2.2250738585072014e-308) ||
              (dVar5 < ABS(*(double *)(param_1 + 0x68) + *(double *)(param_3 + 0x68)) *
                       2.220446049250313e-16)) &&
             ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
              ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
             ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))))) &&
           ((lVar4 = *(long *)(param_1 + 0x48), lVar4 == *(long *)(param_3 + 0x48) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((((lVar4 = *(long *)(param_1 + 0x50), lVar4 == *(long *)(param_3 + 0x50) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
            ((lVar4 = *(long *)(param_1 + 0x60), lVar4 == *(long *)(param_3 + 0x60) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x78), lVar4 == *(long *)(param_3 + 0x78) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))))) &&
         ((lVar4 = *(long *)(param_1 + 0x80), lVar4 == *(long *)(param_3 + 0x80) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x88);
        if (lVar4 != *(long *)(param_3 + 0x88)) {
          func_0x00010c071ae0();
          goto LAB_10afae9f0;
        }
        goto LAB_10afae9e4;
      }
    }
    lVar4 = 0;
  }
LAB_10afae9f0:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10afaea0c; end: 10afaea13; -[SCDiscoverFeedImpressionViewItem identifier] */

undefined8 FUN_10afaea0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afaea14; end: 10afaea1f; -[SCDiscoverFeedImpressionViewItem frame] */

undefined8 FUN_10afaea14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10afaea20; end: 10afaea27; -[SCDiscoverFeedImpressionViewItem date] */

undefined8 FUN_10afaea20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afaea28; end: 10afaea2f; -[SCDiscoverFeedImpressionViewItem storyLoggingInfo] */

undefined8 FUN_10afaea28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afaea30; end: 10afaea37; -[SCDiscoverFeedImpressionViewItem triggeringItemId] */

undefined8 FUN_10afaea30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afaea38; end: 10afaea3f; -[SCDiscoverFeedImpressionViewItem triggeringItemPlaylistOffset] */

undefined8 FUN_10afaea38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afaea40; end: 10afaea47; -[SCDiscoverFeedImpressionViewItem itemPos] */

undefined8 FUN_10afaea40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afaea48; end: 10afaea4f; -[SCDiscoverFeedImpressionViewItem isProminent] */

undefined1 FUN_10afaea48(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afaea50; end: 10afaea57; -[SCDiscoverFeedImpressionViewItem source] */

undefined8 FUN_10afaea50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10afaea58; end: 10afaea5f; -[SCDiscoverFeedImpressionViewItem sectionIdentifier] */

undefined8 FUN_10afaea58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10afaea60; end: 10afaea67; -[SCDiscoverFeedImpressionViewItem hasReplayOverlay] */

undefined1 FUN_10afaea60(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10afaea68; end: 10afaea6f; -[SCDiscoverFeedImpressionViewItem hasCTA] */

undefined1 FUN_10afaea68(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10afaea70; end: 10afaea77; -[SCDiscoverFeedImpressionViewItem pageTypeSpecific] */

undefined8 FUN_10afaea70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10afaea78; end: 10afaea7f; -[SCDiscoverFeedImpressionViewItem pageType] */

undefined8 FUN_10afaea78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10afaea80; end: 10afaea87; -[SCDiscoverFeedImpressionViewItem pageSessionId] */

undefined8 FUN_10afaea80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10afaea88; end: 10afaea8f; -[SCDiscoverFeedImpressionViewItem pageSessionStartTs] */

undefined8 FUN_10afaea88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10afaea90; end: 10afaea97; -[SCDiscoverFeedImpressionViewItem trigger] */

undefined8 FUN_10afaea90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10afaea98; end: 10afaea9f; -[SCDiscoverFeedImpressionViewItem carouselRowNum] */

undefined8 FUN_10afaea98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10afaeaa0; end: 10afaeaa7; -[SCDiscoverFeedImpressionViewItem additionalInfo] */

undefined8 FUN_10afaeaa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10afaeaa8; end: 10afaeaaf; -[SCDiscoverFeedImpressionViewItem tileAutoPlayEligible] */

undefined1 FUN_10afaeaa8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10afaeab0; end: 10afaeab7; -[SCDiscoverFeedImpressionViewItem autoPlayDataSource] */

undefined8 FUN_10afaeab0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10afaeab8; end: 10afaeb47; -[SCDiscoverFeedImpressionViewItem .cxx_destruct] */

void FUN_10afaeab8(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afaeb48; end: 10afaedbf; -[SCDiscoverFeedLongImpressionItem initWithIdentifier:thumbnailId:storyLoggingInfo:triggeringItemId:itemPos:isProminent:source:sectionIdentifier:hasReplayOverlay:hasCTA:pageTypeSpecific:pageType:pageSessionId:carouselRowNum:additionalInfo:impressionLoggingId:tileAutoPlayEligible:] */

undefined8 *
FUN_10afaeb48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined1 param_19)

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
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_68 = PTR_PTR_112703800;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_8;
    puVar1[6] = param_7;
    puVar1[7] = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = (undefined1)param_11;
    *(undefined1 *)((long)puVar1 + 10) = param_11._1_1_;
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    puVar1[10] = param_14;
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xb) = param_19;
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10afaedc0; end: 10afaede3; -[SCDiscoverFeedLongImpressionItem copyWithZone:] */

undefined8 FUN_10afaedc0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afaede4; end: 10afaeeef; -[SCDiscoverFeedLongImpressionItem hash] */

undefined8 * FUN_10afaede4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_b0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_b0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_a8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x30);
  lVar1 = *(long *)(param_1 + 0x38);
  lStack_90 = -lVar6;
  if (-1 < lVar6) {
    lStack_90 = lVar6;
  }
  uStack_88 = (ulong)*(byte *)(param_1 + 8);
  lStack_80 = -lVar1;
  if (-1 < lVar1) {
    lStack_80 = lVar1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_98 = uVar3;
  func_0x00010bfde980();
  uStack_70 = (ulong)*(byte *)(param_1 + 9);
  uStack_68 = (ulong)*(byte *)(param_1 + 10);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x50);
  uStack_50 = *(undefined8 *)(param_1 + 0x58);
  lStack_58 = -lVar6;
  if (-1 < lVar6) {
    lStack_58 = lVar6;
  }
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 0xb);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_b0,0x11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10afaf0a0:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afaf0ac;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((((ulong)puVar5 & 1) != 0) &&
         ((((*(long *)((long)puVar4 + 0x30) == *(long *)(param_3 + 0x30) &&
            (*(char *)((long)puVar4 + 8) == param_3[8])) &&
           (*(long *)((long)puVar4 + 0x38) == *(long *)(param_3 + 0x38))) &&
          ((*(char *)((long)puVar4 + 9) == param_3[9] &&
           (*(char *)((long)puVar4 + 10) == param_3[10])))))) &&
        (*(long *)((long)puVar4 + 0x50) == *(long *)(param_3 + 0x50))) &&
       (*(char *)((long)puVar4 + 0xb) == param_3[0xb])) {
      lVar6 = *(long *)((long)puVar4 + 0x10);
      if ((lVar6 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = *(long *)((long)puVar4 + 0x18);
        if ((lVar6 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = *(long *)((long)puVar4 + 0x20);
          if ((lVar6 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = *(long *)((long)puVar4 + 0x28);
            if ((lVar6 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              lVar6 = *(long *)((long)puVar4 + 0x40);
              if ((lVar6 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar6 != 0))
              {
                lVar6 = *(long *)((long)puVar4 + 0x48);
                if ((lVar6 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar6 != 0)
                   ) {
                  lVar6 = *(long *)((long)puVar4 + 0x58);
                  if ((lVar6 == *(long *)(param_3 + 0x58)) ||
                     (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                    lVar6 = *(long *)((long)puVar4 + 0x60);
                    if ((lVar6 == *(long *)(param_3 + 0x60)) ||
                       (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                      lVar6 = *(long *)((long)puVar4 + 0x68);
                      if ((lVar6 == *(long *)(param_3 + 0x68)) ||
                         (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                        puVar7 = *(undefined1 **)((long)puVar4 + 0x70);
                        if (puVar7 != *(undefined1 **)(param_3 + 0x70)) {
                          func_0x00010c071ae0();
                          goto LAB_10afaf0ac;
                        }
                        goto LAB_10afaf0a0;
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
    puVar7 = (undefined1 *)0x0;
  }
LAB_10afaf0ac:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 10afaeef0; end: 10afaf0c7; -[SCDiscoverFeedLongImpressionItem isEqual:] */

long FUN_10afaeef0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afaf0a0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afaf0ac;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
            (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
           (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
          ((*(char *)(param_1 + 9) == *(char *)(param_3 + 9) &&
           (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))))) &&
        (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))) &&
       (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x40);
              if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x48);
                if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x58);
                  if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x60);
                    if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x68);
                      if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x70);
                        if (lVar3 != *(long *)(param_3 + 0x70)) {
                          func_0x00010c071ae0();
                          goto LAB_10afaf0ac;
                        }
                        goto LAB_10afaf0a0;
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
LAB_10afaf0ac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afaf0c8; end: 10afaf0cf; -[SCDiscoverFeedLongImpressionItem identifier] */

undefined8 FUN_10afaf0c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afaf0d0; end: 10afaf0d7; -[SCDiscoverFeedLongImpressionItem thumbnailId] */

undefined8 FUN_10afaf0d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afaf0d8; end: 10afaf0df; -[SCDiscoverFeedLongImpressionItem storyLoggingInfo] */

undefined8 FUN_10afaf0d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afaf0e0; end: 10afaf0e7; -[SCDiscoverFeedLongImpressionItem triggeringItemId] */

undefined8 FUN_10afaf0e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afaf0e8; end: 10afaf0ef; -[SCDiscoverFeedLongImpressionItem itemPos] */

undefined8 FUN_10afaf0e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afaf0f0; end: 10afaf0f7; -[SCDiscoverFeedLongImpressionItem isProminent] */

undefined1 FUN_10afaf0f0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afaf0f8; end: 10afaf0ff; -[SCDiscoverFeedLongImpressionItem source] */

undefined8 FUN_10afaf0f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afaf100; end: 10afaf107; -[SCDiscoverFeedLongImpressionItem sectionIdentifier] */

undefined8 FUN_10afaf100(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10afaf108; end: 10afaf10f; -[SCDiscoverFeedLongImpressionItem hasReplayOverlay] */

undefined1 FUN_10afaf108(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10afaf110; end: 10afaf117; -[SCDiscoverFeedLongImpressionItem hasCTA] */

undefined1 FUN_10afaf110(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10afaf118; end: 10afaf11f; -[SCDiscoverFeedLongImpressionItem pageTypeSpecific] */

undefined8 FUN_10afaf118(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10afaf120; end: 10afaf127; -[SCDiscoverFeedLongImpressionItem pageType] */

undefined8 FUN_10afaf120(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10afaf128; end: 10afaf12f; -[SCDiscoverFeedLongImpressionItem pageSessionId] */

undefined8 FUN_10afaf128(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10afaf130; end: 10afaf137; -[SCDiscoverFeedLongImpressionItem carouselRowNum] */

undefined8 FUN_10afaf130(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10afaf138; end: 10afaf13f; -[SCDiscoverFeedLongImpressionItem additionalInfo] */

undefined8 FUN_10afaf138(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10afaf140; end: 10afaf147; -[SCDiscoverFeedLongImpressionItem impressionLoggingId] */

undefined8 FUN_10afaf140(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10afaf148; end: 10afaf14f; -[SCDiscoverFeedLongImpressionItem tileAutoPlayEligible] */

undefined1 FUN_10afaf148(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10afaf150; end: 10afaf1df; -[SCDiscoverFeedLongImpressionItem .cxx_destruct] */

void FUN_10afaf150(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afaf1e0; end: 10afaf2ff; -[SCDiscoverFeedLongImpressionTrackingData initWithLongImpressionItem:startDate:triggeringItemPlaylistOffset:trigger:percentAreaVisible:frame:autoPlayDataSource:] */

undefined1 *
FUN_10afaf1e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  puStack_78 = PTR_PTR_112703808;
  uStack_80 = param_6;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_10;
    *(undefined8 *)((long)puVar1 + 0x20) = param_11;
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    *(undefined8 *)((long)puVar1 + 0x38) = param_2;
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    *(undefined8 *)((long)puVar1 + 0x48) = param_4;
    *(undefined8 *)((long)puVar1 + 0x50) = param_5;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_12;
    _objc_release(uVar2);
  }
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  return (undefined1 *)puVar1;
}



/* Entry: 10afaf300; end: 10afaf323; -[SCDiscoverFeedLongImpressionTrackingData copyWithZone:] */

undefined8 FUN_10afaf300(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afaf324; end: 10afaf457; -[SCDiscoverFeedLongImpressionTrackingData hash] */

undefined8 * FUN_10afaf324(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  double dVar11;
  double dVar12;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uStack_78 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar9 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_58 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar9 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_50 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uStack_68 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_60 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
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
  uStack_70 = uVar5;
  func_0x00010bfde980();
  puVar6 = &uStack_78;
  uStack_30 = uVar4;
  func_0x000107c3191c(puVar6,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar6 == param_3) {
LAB_10afaf55c:
    puVar10 = (undefined8 *)0x1;
  }
  else {
    puVar10 = (undefined8 *)0x0;
    if ((puVar6 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afaf568;
    puVar10 = puVar6;
    _objc_opt_class(puVar6);
    puVar7 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar10);
    iVar3 = (int)puVar7;
    if ((((ulong)puVar7 & 1) != 0) && ((puVar6[3] == param_3[3] && (puVar6[4] == param_3[4])))) {
      dVar12 = ABS((double)puVar6[5] - (double)param_3[5]);
      dVar11 = ABS((double)puVar6[5] + (double)param_3[5]) * 2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar12) && (bVar2 = false, !NAN(dVar12) && !NAN(dVar11))) {
        bVar2 = dVar12 < dVar11;
      }
      if ((((bVar2) &&
           (_CGRectEqualToRect(puVar6[7],puVar6[8],puVar6[9],puVar6[10],param_3[7],param_3[8],
                               param_3[9],param_3[10]), iVar3 != 0)) &&
          ((lVar8 = puVar6[1], lVar8 == param_3[1] || (func_0x00010c071ae0(), (int)lVar8 != 0)))) &&
         ((lVar8 = puVar6[2], lVar8 == param_3[2] || (func_0x00010c071ae0(), (int)lVar8 != 0)))) {
        puVar10 = (undefined8 *)puVar6[6];
        if (puVar10 != (undefined8 *)param_3[6]) {
          func_0x00010c071ae0();
          goto LAB_10afaf568;
        }
        goto LAB_10afaf55c;
      }
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_10afaf568:
  _objc_release(param_3);
  return puVar10;
}



/* Entry: 10afaf458; end: 10afaf583; -[SCDiscoverFeedLongImpressionTrackingData isEqual:] */

long FUN_10afaf458(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afaf55c:
    lVar5 = 1;
  }
  else {
    lVar5 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afaf568;
    uVar3 = param_1;
    _objc_opt_class(param_1);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar3);
    iVar2 = (int)uVar4;
    if (((uVar4 & 1) != 0) &&
       ((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      dVar7 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
      dVar6 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar6))) {
        bVar1 = dVar7 < dVar6;
      }
      if ((((bVar1) &&
           (_CGRectEqualToRect(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                               *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                               *(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x40),
                               *(undefined8 *)(param_3 + 0x48),*(undefined8 *)(param_3 + 0x50)),
           iVar2 != 0)) &&
          ((lVar5 = *(long *)(param_1 + 8), lVar5 == *(long *)(param_3 + 8) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
         ((lVar5 = *(long *)(param_1 + 0x10), lVar5 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar5 != 0)))) {
        lVar5 = *(long *)(param_1 + 0x30);
        if (lVar5 != *(long *)(param_3 + 0x30)) {
          func_0x00010c071ae0();
          goto LAB_10afaf568;
        }
        goto LAB_10afaf55c;
      }
    }
    lVar5 = 0;
  }
LAB_10afaf568:
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 10afaf584; end: 10afaf58b; -[SCDiscoverFeedLongImpressionTrackingData longImpressionItem] */

undefined8 FUN_10afaf584(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afaf58c; end: 10afaf593; -[SCDiscoverFeedLongImpressionTrackingData startDate] */

undefined8 FUN_10afaf58c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afaf594; end: 10afaf59b; -[SCDiscoverFeedLongImpressionTrackingData triggeringItemPlaylistOffset] */

undefined8 FUN_10afaf594(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afaf59c; end: 10afaf5a3; -[SCDiscoverFeedLongImpressionTrackingData trigger] */

undefined8 FUN_10afaf59c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afaf5a4; end: 10afaf5ab; -[SCDiscoverFeedLongImpressionTrackingData percentAreaVisible] */

undefined8 FUN_10afaf5a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afaf5ac; end: 10afaf5b7; -[SCDiscoverFeedLongImpressionTrackingData frame] */

undefined8 FUN_10afaf5ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afaf5b8; end: 10afaf5bf; -[SCDiscoverFeedLongImpressionTrackingData autoPlayDataSource] */

undefined8 FUN_10afaf5b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afaf5c0; end: 10afaf5fb; -[SCDiscoverFeedLongImpressionTrackingData .cxx_destruct] */

void FUN_10afaf5c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afaf5fc; end: 10afaf6fb; -[SCDiscoverFeedSingleScrollTracker initWithIdentifier:scrollAxis:startingContentOffset:startScrollingTimestamp:pageType:pageTypeSpecific:] */

undefined1 *
FUN_10afaf5fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112703810;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10afaf6fc; end: 10afaf71f; -[SCDiscoverFeedSingleScrollTracker copyWithZone:] */

undefined8 FUN_10afaf6fc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afaf720; end: 10afaf7db; -[SCDiscoverFeedSingleScrollTracker hash] */

undefined8 * FUN_10afaf720(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_58;
  long lStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x10);
  lStack_50 = -lVar6;
  if (-1 < lVar6) {
    lStack_50 = lVar6;
  }
  uVar7 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_48 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  lStack_38 = -lVar6;
  if (-1 < lVar6) {
    lStack_38 = lVar6;
  }
  uStack_40 = uVar3;
  func_0x00010bfde980();
  puVar4 = &uStack_58;
  func_0x000107c3191c(puVar4,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10afaf8c8:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afaf8d4;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && ((puVar4[2] == param_3[2] && (puVar4[5] == param_3[5])))) {
      dVar10 = ABS((double)puVar4[3] - (double)param_3[3]);
      dVar9 = ABS((double)puVar4[3] + (double)param_3[3]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (((bVar1) &&
          ((lVar6 = puVar4[1], lVar6 == param_3[1] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         ((lVar6 = puVar4[4], lVar6 == param_3[4] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = (undefined8 *)puVar4[6];
        if (puVar8 != (undefined8 *)param_3[6]) {
          func_0x00010c071ae0();
          goto LAB_10afaf8d4;
        }
        goto LAB_10afaf8c8;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10afaf8d4:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10afaf7dc; end: 10afaf8ef; -[SCDiscoverFeedSingleScrollTracker isEqual:] */

long FUN_10afaf7dc(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afaf8c8:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afaf8d4;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (((bVar1) &&
          ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x30);
        if (lVar4 != *(long *)(param_3 + 0x30)) {
          func_0x00010c071ae0();
          goto LAB_10afaf8d4;
        }
        goto LAB_10afaf8c8;
      }
    }
    lVar4 = 0;
  }
LAB_10afaf8d4:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10afaf8f0; end: 10afaf8f7; -[SCDiscoverFeedSingleScrollTracker identifier] */

undefined8 FUN_10afaf8f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afaf8f8; end: 10afaf8ff; -[SCDiscoverFeedSingleScrollTracker scrollAxis] */

undefined8 FUN_10afaf8f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afaf900; end: 10afaf907; -[SCDiscoverFeedSingleScrollTracker startingContentOffset] */

undefined8 FUN_10afaf900(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afaf908; end: 10afaf90f; -[SCDiscoverFeedSingleScrollTracker startScrollingTimestamp] */

undefined8 FUN_10afaf908(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afaf910; end: 10afaf917; -[SCDiscoverFeedSingleScrollTracker pageType] */

undefined8 FUN_10afaf910(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afaf918; end: 10afaf91f; -[SCDiscoverFeedSingleScrollTracker pageTypeSpecific] */

undefined8 FUN_10afaf918(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afaf920; end: 10afaf95b; -[SCDiscoverFeedSingleScrollTracker .cxx_destruct] */

void FUN_10afaf920(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afaf95c; end: 10afaf9eb; -[SCDiscoverFeedStoryUpdateMetadata initWithIdentifier:isFullyViewed:numSnapsAvailable:] */

undefined1 *
FUN_10afaf95c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112703818;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afaf9ec; end: 10afafa0f; -[SCDiscoverFeedStoryUpdateMetadata copyWithZone:] */

undefined8 FUN_10afaf9ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afafa10; end: 10afafa83; -[SCDiscoverFeedStoryUpdateMetadata hash] */

undefined8 * FUN_10afafa10(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afafb18;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(char *)((long)puVar2 + 8) != param_3[8] ||
        (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10afafb18;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar4 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10afafb18;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10afafb18:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10afafa84; end: 10afafb33; -[SCDiscoverFeedStoryUpdateMetadata isEqual:] */

long FUN_10afafa84(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afafb18;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_10afafb18;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10afafb18;
    }
  }
  lVar3 = 1;
LAB_10afafb18:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afafb34; end: 10afafb3b; -[SCDiscoverFeedStoryUpdateMetadata identifier] */

undefined8 FUN_10afafb34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afafb3c; end: 10afafb43; -[SCDiscoverFeedStoryUpdateMetadata isFullyViewed] */

undefined1 FUN_10afafb3c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afafb44; end: 10afafb4b; -[SCDiscoverFeedStoryUpdateMetadata numSnapsAvailable] */

undefined8 FUN_10afafb44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afafb4c; end: 10afafb57; -[SCDiscoverFeedStoryUpdateMetadata .cxx_destruct] */

void FUN_10afafb4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afafb58; end: 10afafc7f; -[SCDiscoverOperaSessionLoggingContext initWithCoder:] */

undefined1 * FUN_10afafb58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112703820;
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
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afafc80; end: 10afafd83; -[SCDiscoverOperaSessionLoggingContext initWithTrackingId:viewLocation:collectionId:collectionType:collectionPosition:startingEntryEvent:storySessionId:] */

undefined1 *
FUN_10afafc80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_112703820;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afafd84; end: 10afafda7; -[SCDiscoverOperaSessionLoggingContext copyWithZone:] */

undefined8 FUN_10afafd84(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afafda8; end: 10afafe6b; -[SCDiscoverOperaSessionLoggingContext encodeWithCoder:] */

void FUN_10afafda8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e858d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110ed3518);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f3a4d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f41358);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f41378);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f41398);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f413b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afafe6c; end: 10afaff0f; -[SCDiscoverOperaSessionLoggingContext hash] */

undefined8 * FUN_10afafe6c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 0x18);
  lStack_58 = -lVar4;
  if (-1 < lVar4) {
    lStack_58 = lVar4;
  }
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  lVar4 = *(long *)(param_1 + 0x30);
  uStack_30 = *(undefined8 *)(param_1 + 0x38);
  lStack_38 = -lVar4;
  if (-1 < lVar4) {
    lStack_38 = lVar4;
  }
  func_0x00010bfde980();
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (undefined8 *)param_3) {
LAB_10afaffe8:
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afafff4;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if (((((ulong)puVar3 & 1) != 0) &&
        (((*(long *)((long)puVar2 + 0x10) == *(long *)(param_3 + 0x10) &&
          (*(long *)((long)puVar2 + 0x20) == *(long *)(param_3 + 0x20))) &&
         (*(long *)((long)puVar2 + 0x28) == *(long *)(param_3 + 0x28))))) &&
       (*(long *)((long)puVar2 + 0x30) == *(long *)(param_3 + 0x30))) {
      lVar4 = *(long *)((long)puVar2 + 8);
      if ((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        lVar4 = *(long *)((long)puVar2 + 0x18);
        if ((lVar4 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
          puVar5 = *(undefined1 **)((long)puVar2 + 0x38);
          if (puVar5 != *(undefined1 **)(param_3 + 0x38)) {
            func_0x00010c071ae0();
            goto LAB_10afafff4;
          }
          goto LAB_10afaffe8;
        }
      }
    }
    puVar5 = (undefined1 *)0x0;
  }
LAB_10afafff4:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 10afaff10; end: 10afb000f; -[SCDiscoverOperaSessionLoggingContext isEqual:] */

long FUN_10afaff10(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afaffe8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afafff4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
          (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) &&
       (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x38);
          if (lVar3 != *(long *)(param_3 + 0x38)) {
            func_0x00010c071ae0();
            goto LAB_10afafff4;
          }
          goto LAB_10afaffe8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afafff4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afb0010; end: 10afb0017; -[SCDiscoverOperaSessionLoggingContext trackingId] */

undefined8 FUN_10afb0010(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afb0018; end: 10afb001f; -[SCDiscoverOperaSessionLoggingContext viewLocation] */

undefined8 FUN_10afb0018(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afb0020; end: 10afb0027; -[SCDiscoverOperaSessionLoggingContext collectionId] */

undefined8 FUN_10afb0020(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afb0028; end: 10afb002f; -[SCDiscoverOperaSessionLoggingContext collectionType] */

undefined8 FUN_10afb0028(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afb0030; end: 10afb0037; -[SCDiscoverOperaSessionLoggingContext collectionPosition] */

undefined8 FUN_10afb0030(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afb0038; end: 10afb003f; -[SCDiscoverOperaSessionLoggingContext startingEntryEvent] */

undefined8 FUN_10afb0038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afb0040; end: 10afb0047; -[SCDiscoverOperaSessionLoggingContext storySessionId] */

undefined8 FUN_10afb0040(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afb0048; end: 10afb0083; -[SCDiscoverOperaSessionLoggingContext .cxx_destruct] */

void FUN_10afb0048(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


