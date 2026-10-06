/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1079c5740; end: 1079c5747; -[SCDiscoverFeedProfileRowViewLayoutConfiguration profileNameFont] */

undefined8 FUN_1079c5740(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1079c5748; end: 1079c574f; -[SCDiscoverFeedProfileRowViewLayoutConfiguration profileNameLineHeight] */

undefined8 FUN_1079c5748(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1079c5750; end: 1079c5757; -[SCDiscoverFeedProfileRowViewLayoutConfiguration profileNameFontSize] */

undefined8 FUN_1079c5750(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1079c5758; end: 1079c575f; -[SCDiscoverFeedProfileRowViewLayoutConfiguration profileNameShadowRadius] */

undefined8 FUN_1079c5758(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1079c5760; end: 1079c5767; -[SCDiscoverFeedProfileRowViewLayoutConfiguration profileNameShadowOffset] */

undefined1  [16] FUN_1079c5760(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x68);
}



/* Entry: 1079c5768; end: 1079c576f; -[SCDiscoverFeedProfileRowViewLayoutConfiguration avatarWidth] */

undefined8 FUN_1079c5768(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1079c5770; end: 1079c5777; -[SCDiscoverFeedProfileRowViewLayoutConfiguration profileNameLabelTopMargin] */

undefined8 FUN_1079c5770(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1079c5778; end: 1079c577f; -[SCDiscoverFeedProfileRowViewLayoutConfiguration profileNameLabelLeftMargin] */

undefined8 FUN_1079c5778(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1079c5780; end: 1079c5787; -[SCDiscoverFeedProfileRowViewLayoutConfiguration profileNameLabelRightMargin] */

undefined8 FUN_1079c5780(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1079c5788; end: 1079c578f; -[SCDiscoverFeedProfileRowViewLayoutConfiguration rightCaretTopMargin] */

undefined8 FUN_1079c5788(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1079c5790; end: 1079c5797; -[SCDiscoverFeedProfileRowViewLayoutConfiguration shouldRoundCorners] */

undefined1 FUN_1079c5790(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1079c5798; end: 1079c579f; -[SCDiscoverFeedProfileRowViewLayoutConfiguration backgroundColor] */

undefined8 FUN_1079c5798(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1079c57a0; end: 1079c57db; -[SCDiscoverFeedProfileRowViewLayoutConfiguration .cxx_destruct] */

void FUN_1079c57a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1079c57dc; end: 1079c58bf; -[SCDiscoverFeedHeadlineViewLayoutConfiguration initWithTitleFontColor:titleFont:titleLineHeight:titleFontSize:titleShadowRadius:titleShadowOffset:] */

undefined1 *
FUN_1079c57dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f9120;
  uStack_70 = param_6;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  return (undefined1 *)puVar1;
}



/* Entry: 1079c58c0; end: 1079c58e3; -[SCDiscoverFeedHeadlineViewLayoutConfiguration copyWithZone:] */

undefined8 FUN_1079c58c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079c58e4; end: 1079c59fb; -[SCDiscoverFeedHeadlineViewLayoutConfiguration hash] */

undefined8 * FUN_1079c58e4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar5 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_50 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_48 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_40 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_38 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_30 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_58 = uVar4;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (undefined8 *)param_3) {
LAB_1079c5b3c:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1079c5b48;
    puVar9 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if (((ulong)puVar6 & 1) != 0) {
      dVar11 = ABS(*(double *)((long)puVar5 + 0x18) - *(double *)(param_3 + 0x18));
      dVar10 = ABS(*(double *)((long)puVar5 + 0x18) + *(double *)(param_3 + 0x18)) *
               2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar2 = dVar11 < dVar10;
      }
      if (bVar2) {
        dVar11 = ABS(*(double *)((long)puVar5 + 0x20) - *(double *)(param_3 + 0x20));
        dVar10 = ABS(*(double *)((long)puVar5 + 0x20) + *(double *)(param_3 + 0x20)) *
                 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
          bVar2 = dVar11 < dVar10;
        }
        if (bVar2) {
          dVar11 = ABS(*(double *)((long)puVar5 + 0x28) - *(double *)(param_3 + 0x28));
          dVar10 = ABS(*(double *)((long)puVar5 + 0x28) + *(double *)(param_3 + 0x28)) *
                   2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10)))
          {
            bVar2 = dVar11 < dVar10;
          }
          if (bVar2) {
            puVar9 = (undefined1 *)0x0;
            if ((*(double *)((long)puVar5 + 0x30) != *(double *)(param_3 + 0x30)) ||
               (*(double *)((long)puVar5 + 0x38) != *(double *)(param_3 + 0x38)))
            goto LAB_1079c5b48;
            lVar7 = *(long *)((long)puVar5 + 8);
            if ((lVar7 == *(long *)(param_3 + 8)) || (func_0x00010c071c60(), (int)lVar7 != 0)) {
              puVar9 = *(undefined1 **)((long)puVar5 + 0x10);
              if (puVar9 != *(undefined1 **)(param_3 + 0x10)) {
                func_0x00010c071ae0();
                goto LAB_1079c5b48;
              }
              goto LAB_1079c5b3c;
            }
          }
        }
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_1079c5b48:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 1079c59fc; end: 1079c5b63; -[SCDiscoverFeedHeadlineViewLayoutConfiguration isEqual:] */

long FUN_1079c59fc(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1079c5b3c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079c5b48;
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
            lVar4 = 0;
            if ((*(double *)(param_1 + 0x30) != *(double *)(param_3 + 0x30)) ||
               (*(double *)(param_1 + 0x38) != *(double *)(param_3 + 0x38))) goto LAB_1079c5b48;
            lVar4 = *(long *)(param_1 + 8);
            if ((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071c60(), (int)lVar4 != 0)) {
              lVar4 = *(long *)(param_1 + 0x10);
              if (lVar4 != *(long *)(param_3 + 0x10)) {
                func_0x00010c071ae0();
                goto LAB_1079c5b48;
              }
              goto LAB_1079c5b3c;
            }
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_1079c5b48:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1079c5b64; end: 1079c5b6b; -[SCDiscoverFeedHeadlineViewLayoutConfiguration titleFontColor] */

undefined8 FUN_1079c5b64(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079c5b6c; end: 1079c5b73; -[SCDiscoverFeedHeadlineViewLayoutConfiguration titleFont] */

undefined8 FUN_1079c5b6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079c5b74; end: 1079c5b7b; -[SCDiscoverFeedHeadlineViewLayoutConfiguration titleLineHeight] */

undefined8 FUN_1079c5b74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1079c5b7c; end: 1079c5b83; -[SCDiscoverFeedHeadlineViewLayoutConfiguration titleFontSize] */

undefined8 FUN_1079c5b7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1079c5b84; end: 1079c5b8b; -[SCDiscoverFeedHeadlineViewLayoutConfiguration titleShadowRadius] */

undefined8 FUN_1079c5b84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1079c5b8c; end: 1079c5b93; -[SCDiscoverFeedHeadlineViewLayoutConfiguration titleShadowOffset] */

undefined1  [16] FUN_1079c5b8c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x30);
}



/* Entry: 1079c5b94; end: 1079c5bc3; -[SCDiscoverFeedHeadlineViewLayoutConfiguration .cxx_destruct] */

void FUN_1079c5b94(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079c5bc4; end: 1079c5d1b; -[SCDiscoverFeedHeadlineWithSubtitleViewLayoutConfiguration initWithTitleFontColor:titleFont:titleLineHeight:titleFontSize:titleShadowRadius:titleShadowOffset:subtitleFontColor:subtitleFont:subtitleLineHeight:subtitleFontSize:] */

undefined1 *
FUN_1079c5bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puVar1 = &uStack_90;
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_88 = PTR_PTR_1126f9128;
  uStack_90 = param_8;
  _objc_msgSendSuper2(&uStack_90,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    *(undefined8 *)((long)puVar1 + 0x50) = param_4;
    *(undefined8 *)((long)puVar1 + 0x58) = param_5;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    *(undefined8 *)((long)puVar1 + 0x48) = param_7;
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  return (undefined1 *)puVar1;
}



/* Entry: 1079c5d1c; end: 1079c5d3f; -[SCDiscoverFeedHeadlineWithSubtitleViewLayoutConfiguration copyWithZone:] */

undefined8 FUN_1079c5d1c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079c5d40; end: 1079c5eab; -[SCDiscoverFeedHeadlineWithSubtitleViewLayoutConfiguration hash] */

undefined8 * FUN_1079c5d40(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar5 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uStack_80 = uVar3;
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_70 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_68 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_60 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_58 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_50 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uStack_78 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_38 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_30 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_40 = uVar4;
  func_0x000100505190(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (undefined8 *)param_3) {
LAB_1079c6084:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1079c6090;
    puVar9 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if (((ulong)puVar6 & 1) != 0) {
      dVar11 = ABS(*(double *)((long)puVar5 + 0x18) - *(double *)(param_3 + 0x18));
      dVar10 = ABS(*(double *)((long)puVar5 + 0x18) + *(double *)(param_3 + 0x18)) *
               2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar2 = dVar11 < dVar10;
      }
      if (bVar2) {
        dVar11 = ABS(*(double *)((long)puVar5 + 0x20) - *(double *)(param_3 + 0x20));
        dVar10 = ABS(*(double *)((long)puVar5 + 0x20) + *(double *)(param_3 + 0x20)) *
                 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
          bVar2 = dVar11 < dVar10;
        }
        if (bVar2) {
          dVar11 = ABS(*(double *)((long)puVar5 + 0x28) - *(double *)(param_3 + 0x28));
          dVar10 = ABS(*(double *)((long)puVar5 + 0x28) + *(double *)(param_3 + 0x28)) *
                   2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10)))
          {
            bVar2 = dVar11 < dVar10;
          }
          if (bVar2) {
            puVar9 = (undefined1 *)0x0;
            if ((*(double *)((long)puVar5 + 0x50) != *(double *)(param_3 + 0x50)) ||
               (*(double *)((long)puVar5 + 0x58) != *(double *)(param_3 + 0x58)))
            goto LAB_1079c6090;
            dVar11 = ABS(*(double *)((long)puVar5 + 0x40) - *(double *)(param_3 + 0x40));
            dVar10 = ABS(*(double *)((long)puVar5 + 0x40) + *(double *)(param_3 + 0x40)) *
                     2.220446049250313e-16;
            bVar2 = true;
            if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))
               ) {
              bVar2 = dVar11 < dVar10;
            }
            if (bVar2) {
              dVar10 = ABS(*(double *)((long)puVar5 + 0x48) - *(double *)(param_3 + 0x48));
              if (((((dVar10 < 2.2250738585072014e-308) ||
                    (dVar10 < ABS(*(double *)((long)puVar5 + 0x48) + *(double *)(param_3 + 0x48)) *
                              2.220446049250313e-16)) &&
                   ((lVar7 = *(long *)((long)puVar5 + 8), lVar7 == *(long *)(param_3 + 8) ||
                    (func_0x00010c071c60(), (int)lVar7 != 0)))) &&
                  ((lVar7 = *(long *)((long)puVar5 + 0x10), lVar7 == *(long *)(param_3 + 0x10) ||
                   (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                 ((lVar7 = *(long *)((long)puVar5 + 0x30), lVar7 == *(long *)(param_3 + 0x30) ||
                  (func_0x00010c071c60(), (int)lVar7 != 0)))) {
                puVar9 = *(undefined1 **)((long)puVar5 + 0x38);
                if (puVar9 != *(undefined1 **)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_1079c6090;
                }
                goto LAB_1079c6084;
              }
            }
          }
        }
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_1079c6090:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 1079c5eac; end: 1079c60ab; -[SCDiscoverFeedHeadlineWithSubtitleViewLayoutConfiguration isEqual:] */

long FUN_1079c5eac(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1079c6084:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079c6090;
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
            lVar4 = 0;
            if ((*(double *)(param_1 + 0x50) != *(double *)(param_3 + 0x50)) ||
               (*(double *)(param_1 + 0x58) != *(double *)(param_3 + 0x58))) goto LAB_1079c6090;
            dVar6 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40));
            dVar5 = ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) *
                    2.220446049250313e-16;
            bVar1 = true;
            if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
              bVar1 = dVar6 < dVar5;
            }
            if (bVar1) {
              dVar5 = ABS(*(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x48));
              if (((((dVar5 < 2.2250738585072014e-308) ||
                    (dVar5 < ABS(*(double *)(param_1 + 0x48) + *(double *)(param_3 + 0x48)) *
                             2.220446049250313e-16)) &&
                   ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
                    (func_0x00010c071c60(), (int)lVar4 != 0)))) &&
                  ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
                   (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                 ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
                  (func_0x00010c071c60(), (int)lVar4 != 0)))) {
                lVar4 = *(long *)(param_1 + 0x38);
                if (lVar4 != *(long *)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_1079c6090;
                }
                goto LAB_1079c6084;
              }
            }
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_1079c6090:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1079c60ac; end: 1079c60b3; -[SCDiscoverFeedHeadlineWithSubtitleViewLayoutConfiguration titleFontColor] */

undefined8 FUN_1079c60ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079c60b4; end: 1079c60bb; -[SCDiscoverFeedHeadlineWithSubtitleViewLayoutConfiguration titleFont] */

undefined8 FUN_1079c60b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079c60bc; end: 1079c60c3; -[SCDiscoverFeedHeadlineWithSubtitleViewLayoutConfiguration titleLineHeight] */

undefined8 FUN_1079c60bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1079c60c4; end: 1079c60cb; -[SCDiscoverFeedHeadlineWithSubtitleViewLayoutConfiguration titleFontSize] */

undefined8 FUN_1079c60c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1079c60cc; end: 1079c60d3; -[SCDiscoverFeedHeadlineWithSubtitleViewLayoutConfiguration titleShadowRadius] */

undefined8 FUN_1079c60cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1079c60d4; end: 1079c60db; -[SCDiscoverFeedHeadlineWithSubtitleViewLayoutConfiguration titleShadowOffset] */

undefined1  [16] FUN_1079c60d4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x50);
}



/* Entry: 1079c60dc; end: 1079c60e3; -[SCDiscoverFeedHeadlineWithSubtitleViewLayoutConfiguration subtitleFontColor] */

undefined8 FUN_1079c60dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1079c60e4; end: 1079c60eb; -[SCDiscoverFeedHeadlineWithSubtitleViewLayoutConfiguration subtitleFont] */

undefined8 FUN_1079c60e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1079c60ec; end: 1079c60f3; -[SCDiscoverFeedHeadlineWithSubtitleViewLayoutConfiguration subtitleLineHeight] */

undefined8 FUN_1079c60ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1079c60f4; end: 1079c60fb; -[SCDiscoverFeedHeadlineWithSubtitleViewLayoutConfiguration subtitleFontSize] */

undefined8 FUN_1079c60f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1079c60fc; end: 1079c6143; -[SCDiscoverFeedHeadlineWithSubtitleViewLayoutConfiguration .cxx_destruct] */

void FUN_1079c60fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079c6144; end: 1079c6227; -[SCDiscoverFeedImageWithTextCellLayoutConfiguration initWithTitleFontColor:titleFont:titleLineHeight:titleFontSize:titleShadowRadius:titleShadowOffset:] */

undefined1 *
FUN_1079c6144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f9130;
  uStack_70 = param_6;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  return (undefined1 *)puVar1;
}



/* Entry: 1079c6228; end: 1079c624b; -[SCDiscoverFeedImageWithTextCellLayoutConfiguration copyWithZone:] */

undefined8 FUN_1079c6228(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079c624c; end: 1079c6363; -[SCDiscoverFeedImageWithTextCellLayoutConfiguration hash] */

undefined8 * FUN_1079c624c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar5 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_50 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_48 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_40 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_38 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_30 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_58 = uVar4;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (undefined8 *)param_3) {
LAB_1079c64a4:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1079c64b0;
    puVar9 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if (((ulong)puVar6 & 1) != 0) {
      dVar11 = ABS(*(double *)((long)puVar5 + 0x18) - *(double *)(param_3 + 0x18));
      dVar10 = ABS(*(double *)((long)puVar5 + 0x18) + *(double *)(param_3 + 0x18)) *
               2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar2 = dVar11 < dVar10;
      }
      if (bVar2) {
        dVar11 = ABS(*(double *)((long)puVar5 + 0x20) - *(double *)(param_3 + 0x20));
        dVar10 = ABS(*(double *)((long)puVar5 + 0x20) + *(double *)(param_3 + 0x20)) *
                 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
          bVar2 = dVar11 < dVar10;
        }
        if (bVar2) {
          dVar11 = ABS(*(double *)((long)puVar5 + 0x28) - *(double *)(param_3 + 0x28));
          dVar10 = ABS(*(double *)((long)puVar5 + 0x28) + *(double *)(param_3 + 0x28)) *
                   2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10)))
          {
            bVar2 = dVar11 < dVar10;
          }
          if (bVar2) {
            puVar9 = (undefined1 *)0x0;
            if ((*(double *)((long)puVar5 + 0x30) != *(double *)(param_3 + 0x30)) ||
               (*(double *)((long)puVar5 + 0x38) != *(double *)(param_3 + 0x38)))
            goto LAB_1079c64b0;
            lVar7 = *(long *)((long)puVar5 + 8);
            if ((lVar7 == *(long *)(param_3 + 8)) || (func_0x00010c071c60(), (int)lVar7 != 0)) {
              puVar9 = *(undefined1 **)((long)puVar5 + 0x10);
              if (puVar9 != *(undefined1 **)(param_3 + 0x10)) {
                func_0x00010c071ae0();
                goto LAB_1079c64b0;
              }
              goto LAB_1079c64a4;
            }
          }
        }
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_1079c64b0:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 1079c6364; end: 1079c64cb; -[SCDiscoverFeedImageWithTextCellLayoutConfiguration isEqual:] */

long FUN_1079c6364(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1079c64a4:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079c64b0;
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
            lVar4 = 0;
            if ((*(double *)(param_1 + 0x30) != *(double *)(param_3 + 0x30)) ||
               (*(double *)(param_1 + 0x38) != *(double *)(param_3 + 0x38))) goto LAB_1079c64b0;
            lVar4 = *(long *)(param_1 + 8);
            if ((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071c60(), (int)lVar4 != 0)) {
              lVar4 = *(long *)(param_1 + 0x10);
              if (lVar4 != *(long *)(param_3 + 0x10)) {
                func_0x00010c071ae0();
                goto LAB_1079c64b0;
              }
              goto LAB_1079c64a4;
            }
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_1079c64b0:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1079c64cc; end: 1079c64d3; -[SCDiscoverFeedImageWithTextCellLayoutConfiguration titleFontColor] */

undefined8 FUN_1079c64cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079c64d4; end: 1079c64db; -[SCDiscoverFeedImageWithTextCellLayoutConfiguration titleFont] */

undefined8 FUN_1079c64d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079c64dc; end: 1079c64e3; -[SCDiscoverFeedImageWithTextCellLayoutConfiguration titleLineHeight] */

undefined8 FUN_1079c64dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1079c64e4; end: 1079c64eb; -[SCDiscoverFeedImageWithTextCellLayoutConfiguration titleFontSize] */

undefined8 FUN_1079c64e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1079c64ec; end: 1079c64f3; -[SCDiscoverFeedImageWithTextCellLayoutConfiguration titleShadowRadius] */

undefined8 FUN_1079c64ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1079c64f4; end: 1079c64fb; -[SCDiscoverFeedImageWithTextCellLayoutConfiguration titleShadowOffset] */

undefined1  [16] FUN_1079c64f4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x30);
}



/* Entry: 1079c64fc; end: 1079c652b; -[SCDiscoverFeedImageWithTextCellLayoutConfiguration .cxx_destruct] */

void FUN_1079c64fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079c652c; end: 1079c659f; -[SCDiscoverFeedTileSizeLayoutConfiguration initWithThumbnailPreferredSize:headlineMaximumSize:profileRowPreferredSize:] */

void FUN_1079c652c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f9138;
  uStack_50 = param_7;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
  }
  return;
}



/* Entry: 1079c65a0; end: 1079c65c3; -[SCDiscoverFeedTileSizeLayoutConfiguration copyWithZone:] */

undefined8 FUN_1079c65a0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079c65c4; end: 1079c66d7; -[SCDiscoverFeedTileSizeLayoutConfiguration hash] */

ulong * FUN_1079c65c4(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_48 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_40 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_38 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar6 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_30 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_28 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_20 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  puVar3 = &uStack_48;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
    puVar7 = (ulong *)0x1;
  }
  else {
    puVar7 = (ulong *)0x0;
    if ((puVar3 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar7 = puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar7);
      if (((ulong)puVar4 & 1) != 0) {
        bVar2 = false;
        if (((double)puVar3[1] == (double)param_3[1]) &&
           (bVar2 = false, !NAN((double)puVar3[2]) && !NAN((double)param_3[2]))) {
          bVar2 = (double)puVar3[2] == (double)param_3[2];
        }
        if (bVar2) {
          puVar7 = (ulong *)0x0;
          if (((double)puVar3[3] == (double)param_3[3]) && ((double)puVar3[4] == (double)param_3[4])
             ) {
            uVar5 = 0;
            if ((double)puVar3[6] == (double)param_3[6]) {
              uVar5 = (uint)((double)puVar3[5] == (double)param_3[5]);
            }
            puVar7 = (ulong *)(ulong)uVar5;
          }
          goto LAB_1079c6744;
        }
      }
      puVar7 = (ulong *)0x0;
    }
  }
LAB_1079c6744:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 1079c66d8; end: 1079c679f; -[SCDiscoverFeedTileSizeLayoutConfiguration isEqual:] */

bool FUN_1079c66d8(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((uVar3 & 1) != 0) {
        bVar1 = false;
        if ((*(double *)(param_1 + 8) == *(double *)(param_3 + 8)) &&
           (bVar1 = false, !NAN(*(double *)(param_1 + 0x10)) && !NAN(*(double *)(param_3 + 0x10))))
        {
          bVar1 = *(double *)(param_1 + 0x10) == *(double *)(param_3 + 0x10);
        }
        if (bVar1) {
          bVar1 = false;
          if ((*(double *)(param_1 + 0x18) == *(double *)(param_3 + 0x18)) &&
             (*(double *)(param_1 + 0x20) == *(double *)(param_3 + 0x20))) {
            bVar1 = false;
            if (*(double *)(param_1 + 0x30) == *(double *)(param_3 + 0x30)) {
              bVar1 = *(double *)(param_1 + 0x28) == *(double *)(param_3 + 0x28);
            }
          }
          goto LAB_1079c6744;
        }
      }
      bVar1 = false;
    }
  }
LAB_1079c6744:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1079c67a0; end: 1079c67a7; -[SCDiscoverFeedTileSizeLayoutConfiguration thumbnailPreferredSize] */

undefined1  [16] FUN_1079c67a0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 8);
}



/* Entry: 1079c67a8; end: 1079c67af; -[SCDiscoverFeedTileSizeLayoutConfiguration headlineMaximumSize] */

undefined1  [16] FUN_1079c67a8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 1079c67b0; end: 1079c67b7; -[SCDiscoverFeedTileSizeLayoutConfiguration profileRowPreferredSize] */

undefined1  [16] FUN_1079c67b0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x28);
}



/* Entry: 1079c67b8; end: 1079c6873; -[SCDiscoverFeedWhiteSpacePostViewLayoutConfiguration initWithTitleFontColor:titleFont:titleLineHeight:] */

undefined1 *
FUN_1079c67b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f9140;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1079c6874; end: 1079c6897; -[SCDiscoverFeedWhiteSpacePostViewLayoutConfiguration copyWithZone:] */

undefined8 FUN_1079c6874(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079c6898; end: 1079c692f; -[SCDiscoverFeedWhiteSpacePostViewLayoutConfiguration hash] */

undefined8 * FUN_1079c6898(long param_1,undefined8 param_2,undefined1 *param_3)

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
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_38 = uVar3;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_1079c69e4:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1079c69f0;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      dVar10 = ABS(*(double *)((long)puVar4 + 0x18) - *(double *)(param_3 + 0x18));
      dVar9 = ABS(*(double *)((long)puVar4 + 0x18) + *(double *)(param_3 + 0x18)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((bVar1) &&
         ((lVar6 = *(long *)((long)puVar4 + 8), lVar6 == *(long *)(param_3 + 8) ||
          (func_0x00010c071c60(), (int)lVar6 != 0)))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x10);
        if (puVar8 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_1079c69f0;
        }
        goto LAB_1079c69e4;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_1079c69f0:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 1079c6930; end: 1079c6a0b; -[SCDiscoverFeedWhiteSpacePostViewLayoutConfiguration isEqual:] */

long FUN_1079c6930(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1079c69e4:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079c69f0;
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
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
          (func_0x00010c071c60(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_1079c69f0;
        }
        goto LAB_1079c69e4;
      }
    }
    lVar4 = 0;
  }
LAB_1079c69f0:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1079c6a0c; end: 1079c6a13; -[SCDiscoverFeedWhiteSpacePostViewLayoutConfiguration titleFontColor] */

undefined8 FUN_1079c6a0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079c6a14; end: 1079c6a1b; -[SCDiscoverFeedWhiteSpacePostViewLayoutConfiguration titleFont] */

undefined8 FUN_1079c6a14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079c6a1c; end: 1079c6a23; -[SCDiscoverFeedWhiteSpacePostViewLayoutConfiguration titleLineHeight] */

undefined8 FUN_1079c6a1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1079c6a24; end: 1079c6a53; -[SCDiscoverFeedWhiteSpacePostViewLayoutConfiguration .cxx_destruct] */

void FUN_1079c6a24(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079c6a54; end: 1079c6b9f; -[SCDiscoverFeedWhiteSpaceShowThumbnailViewModel initWithLogoOverlayViewModel:tileBadgeViewModel:progressBarViewModel:episodeSubtitle:imageThumbnail:preferredSize:] */

undefined1 *
FUN_1079c6a54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f9148;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    *(undefined8 *)((long)puVar1 + 0x38) = param_2;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1079c6ba0; end: 1079c6bc3; -[SCDiscoverFeedWhiteSpaceShowThumbnailViewModel copyWithZone:] */

undefined8 FUN_1079c6ba0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079c6bc4; end: 1079c6c9f; -[SCDiscoverFeedWhiteSpaceShowThumbnailViewModel hash] */

undefined8 * FUN_1079c6bc4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_40 = uVar2;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_1079c6d7c:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1079c6d88;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      bVar1 = false;
      if ((*(double *)((long)puVar4 + 0x30) == *(double *)(param_3 + 0x30)) &&
         (bVar1 = false, !NAN(*(double *)((long)puVar4 + 0x38)) && !NAN(*(double *)(param_3 + 0x38))
         )) {
        bVar1 = *(double *)((long)puVar4 + 0x38) == *(double *)(param_3 + 0x38);
      }
      if ((((bVar1) &&
           ((lVar6 = *(long *)((long)puVar4 + 8), lVar6 == *(long *)(param_3 + 8) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
          ((lVar6 = *(long *)((long)puVar4 + 0x10), lVar6 == *(long *)(param_3 + 0x10) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         (((lVar6 = *(long *)((long)puVar4 + 0x18), lVar6 == *(long *)(param_3 + 0x18) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
          ((lVar6 = *(long *)((long)puVar4 + 0x20), lVar6 == *(long *)(param_3 + 0x20) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x28);
        if (puVar8 != *(undefined1 **)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_1079c6d88;
        }
        goto LAB_1079c6d7c;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_1079c6d88:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 1079c6ca0; end: 1079c6da3; -[SCDiscoverFeedWhiteSpaceShowThumbnailViewModel isEqual:] */

long FUN_1079c6ca0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1079c6d7c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079c6d88;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      bVar1 = false;
      if ((*(double *)(param_1 + 0x30) == *(double *)(param_3 + 0x30)) &&
         (bVar1 = false, !NAN(*(double *)(param_1 + 0x38)) && !NAN(*(double *)(param_3 + 0x38)))) {
        bVar1 = *(double *)(param_1 + 0x38) == *(double *)(param_3 + 0x38);
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         (((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
          ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
        lVar4 = *(long *)(param_1 + 0x28);
        if (lVar4 != *(long *)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_1079c6d88;
        }
        goto LAB_1079c6d7c;
      }
    }
    lVar4 = 0;
  }
LAB_1079c6d88:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1079c6da4; end: 1079c6dab; -[SCDiscoverFeedWhiteSpaceShowThumbnailViewModel logoOverlayViewModel] */

undefined8 FUN_1079c6da4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079c6dac; end: 1079c6db3; -[SCDiscoverFeedWhiteSpaceShowThumbnailViewModel tileBadgeViewModel] */

undefined8 FUN_1079c6dac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079c6db4; end: 1079c6dbb; -[SCDiscoverFeedWhiteSpaceShowThumbnailViewModel progressBarViewModel] */

undefined8 FUN_1079c6db4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1079c6dbc; end: 1079c6dc3; -[SCDiscoverFeedWhiteSpaceShowThumbnailViewModel episodeSubtitle] */

undefined8 FUN_1079c6dbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1079c6dc4; end: 1079c6dcb; -[SCDiscoverFeedWhiteSpaceShowThumbnailViewModel imageThumbnail] */

undefined8 FUN_1079c6dc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1079c6dcc; end: 1079c6dd3; -[SCDiscoverFeedWhiteSpaceShowThumbnailViewModel preferredSize] */

undefined1  [16] FUN_1079c6dcc(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x30);
}



/* Entry: 1079c6dd4; end: 1079c6e27; -[SCDiscoverFeedWhiteSpaceShowThumbnailViewModel .cxx_destruct] */

void FUN_1079c6dd4(long param_1)

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



/* Entry: 1079c6e28; end: 1079c6e4b; -[SCDiscoverFeedWhiteSpaceSubscriptionIconViewModel copyWithZone:] */

undefined8 FUN_1079c6e28(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079c6e4c; end: 1079c6ebb; -[SCDiscoverFeedWhiteSpaceSubscriptionIconViewModel isEqual:] */

uint FUN_1079c6e4c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if ((param_1 != 0) && (param_3 != 0)) {
      _objc_opt_class(param_1);
      lVar1 = param_3;
      _objc_opt_isKindOfClass(param_3,param_1);
      uVar2 = (uint)lVar1;
    }
  }
  _objc_release(param_3);
  return uVar2 & 1;
}



/* Entry: 1079c6ebc; end: 1079c6fa7; -[SCDiscoverFeedWhiteSpacePublisherThumbnailViewModel initWithLogoOverlayViewModel:imageThumbnail:title:preferredSize:] */

undefined1 *
FUN_1079c6ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f9150;
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
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1079c6fa8; end: 1079c6fcb; -[SCDiscoverFeedWhiteSpacePublisherThumbnailViewModel copyWithZone:] */

undefined8 FUN_1079c6fa8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079c6fcc; end: 1079c708f; -[SCDiscoverFeedWhiteSpacePublisherThumbnailViewModel hash] */

undefined8 * FUN_1079c6fcc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_40 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_1079c713c:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1079c7148;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      bVar1 = false;
      if ((*(double *)((long)puVar4 + 0x20) == *(double *)(param_3 + 0x20)) &&
         (bVar1 = false, !NAN(*(double *)((long)puVar4 + 0x28)) && !NAN(*(double *)(param_3 + 0x28))
         )) {
        bVar1 = *(double *)((long)puVar4 + 0x28) == *(double *)(param_3 + 0x28);
      }
      if (((bVar1) &&
          ((lVar6 = *(long *)((long)puVar4 + 8), lVar6 == *(long *)(param_3 + 8) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         ((lVar6 = *(long *)((long)puVar4 + 0x10), lVar6 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x18);
        if (puVar8 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1079c7148;
        }
        goto LAB_1079c713c;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_1079c7148:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 1079c7090; end: 1079c7163; -[SCDiscoverFeedWhiteSpacePublisherThumbnailViewModel isEqual:] */

long FUN_1079c7090(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1079c713c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079c7148;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      bVar1 = false;
      if ((*(double *)(param_1 + 0x20) == *(double *)(param_3 + 0x20)) &&
         (bVar1 = false, !NAN(*(double *)(param_1 + 0x28)) && !NAN(*(double *)(param_3 + 0x28)))) {
        bVar1 = *(double *)(param_1 + 0x28) == *(double *)(param_3 + 0x28);
      }
      if (((bVar1) &&
          ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1079c7148;
        }
        goto LAB_1079c713c;
      }
    }
    lVar4 = 0;
  }
LAB_1079c7148:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1079c7164; end: 1079c716b; -[SCDiscoverFeedWhiteSpacePublisherThumbnailViewModel logoOverlayViewModel] */

undefined8 FUN_1079c7164(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079c716c; end: 1079c7173; -[SCDiscoverFeedWhiteSpacePublisherThumbnailViewModel imageThumbnail] */

undefined8 FUN_1079c716c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079c7174; end: 1079c717b; -[SCDiscoverFeedWhiteSpacePublisherThumbnailViewModel title] */

undefined8 FUN_1079c7174(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1079c717c; end: 1079c7183; -[SCDiscoverFeedWhiteSpacePublisherThumbnailViewModel preferredSize] */

undefined1  [16] FUN_1079c717c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x20);
}



/* Entry: 1079c7184; end: 1079c71bf; -[SCDiscoverFeedWhiteSpacePublisherThumbnailViewModel .cxx_destruct] */

void FUN_1079c7184(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079c71c0; end: 1079c731b; -[SCDiscoverFeedWhiteSpaceProfileRowViewModel initWithAvatar:profileName:avatarImageResourceName:enableRing:preferredSize:configuration:profileRowTapActionModel:] */

undefined1 *
FUN_1079c71c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f9158;
  uStack_70 = param_3;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
    *(undefined8 *)((long)puVar1 + 0x40) = param_2;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1079c731c; end: 1079c733f; -[SCDiscoverFeedWhiteSpaceProfileRowViewModel copyWithZone:] */

undefined8 FUN_1079c731c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079c7340; end: 1079c741f; -[SCDiscoverFeedWhiteSpaceProfileRowViewModel hash] */

undefined8 * FUN_1079c7340(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
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
  uStack_50 = (ulong)*(byte *)(param_1 + 8);
  uVar7 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_48 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar7 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar3;
  func_0x00010bfde980();
  puVar4 = &uStack_68;
  uStack_30 = uVar2;
  func_0x000100505190(puVar4,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_1079c751c:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1079c7528;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && (*(char *)(puVar4 + 1) == *(char *)(param_3 + 1))) {
      puVar8 = (undefined8 *)0x0;
      if (((double)puVar4[7] != (double)param_3[7]) || ((double)puVar4[8] != (double)param_3[8]))
      goto LAB_1079c7528;
      lVar6 = puVar4[2];
      if (((lVar6 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
         ((((lVar6 = puVar4[3], lVar6 == param_3[3] || (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
           ((lVar6 = puVar4[4], lVar6 == param_3[4] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
          && ((lVar6 = puVar4[5], lVar6 == param_3[5] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
         )) {
        puVar8 = (undefined8 *)puVar4[6];
        if (puVar8 != (undefined8 *)param_3[6]) {
          func_0x00010c071ae0();
          goto LAB_1079c7528;
        }
        goto LAB_1079c751c;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_1079c7528:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 1079c7420; end: 1079c7543; -[SCDiscoverFeedWhiteSpaceProfileRowViewModel isEqual:] */

long FUN_1079c7420(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1079c751c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079c7528;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = 0;
      if ((*(double *)(param_1 + 0x38) != *(double *)(param_3 + 0x38)) ||
         (*(double *)(param_1 + 0x40) != *(double *)(param_3 + 0x40))) goto LAB_1079c7528;
      lVar3 = *(long *)(param_1 + 0x10);
      if (((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
         ((((lVar3 = *(long *)(param_1 + 0x18), lVar3 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
           ((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
          ((lVar3 = *(long *)(param_1 + 0x28), lVar3 == *(long *)(param_3 + 0x28) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)))))) {
        lVar3 = *(long *)(param_1 + 0x30);
        if (lVar3 != *(long *)(param_3 + 0x30)) {
          func_0x00010c071ae0();
          goto LAB_1079c7528;
        }
        goto LAB_1079c751c;
      }
    }
    lVar3 = 0;
  }
LAB_1079c7528:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1079c7544; end: 1079c754b; -[SCDiscoverFeedWhiteSpaceProfileRowViewModel avatar] */

undefined8 FUN_1079c7544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079c754c; end: 1079c7553; -[SCDiscoverFeedWhiteSpaceProfileRowViewModel profileName] */

undefined8 FUN_1079c754c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1079c7554; end: 1079c755b; -[SCDiscoverFeedWhiteSpaceProfileRowViewModel avatarImageResourceName] */

undefined8 FUN_1079c7554(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1079c755c; end: 1079c7563; -[SCDiscoverFeedWhiteSpaceProfileRowViewModel enableRing] */

undefined1 FUN_1079c755c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1079c7564; end: 1079c756b; -[SCDiscoverFeedWhiteSpaceProfileRowViewModel preferredSize] */

undefined1  [16] FUN_1079c7564(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x38);
}



/* Entry: 1079c756c; end: 1079c7573; -[SCDiscoverFeedWhiteSpaceProfileRowViewModel configuration] */

undefined8 FUN_1079c756c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1079c7574; end: 1079c757b; -[SCDiscoverFeedWhiteSpaceProfileRowViewModel profileRowTapActionModel] */

undefined8 FUN_1079c7574(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1079c757c; end: 1079c75cf; -[SCDiscoverFeedWhiteSpaceProfileRowViewModel .cxx_destruct] */

void FUN_1079c757c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1079c75d0; end: 1079c768f; -[SCDiscoverFeedWhiteSpaceHeadlineViewModel initWithTitle:maximumSize:headlineViewLayoutConfiguration:] */

undefined1 *
FUN_1079c75d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f9160;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}


