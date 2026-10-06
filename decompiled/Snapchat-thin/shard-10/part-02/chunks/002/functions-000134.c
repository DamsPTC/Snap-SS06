/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107c90e70; end: 107c90e77; -[SCDiscoverFeedMyStoriesCircleCellViewModel playStoryActionModel] */

undefined8 FUN_107c90e70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107c90e78; end: 107c90e7f; -[SCDiscoverFeedMyStoriesCircleCellViewModel postStoryActionModel] */

undefined8 FUN_107c90e78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107c90e80; end: 107c90e87; -[SCDiscoverFeedMyStoriesCircleCellViewModel preferredSize] */

undefined1  [16] FUN_107c90e80(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x68);
}



/* Entry: 107c90e88; end: 107c90e8f; -[SCDiscoverFeedMyStoriesCircleCellViewModel layoutConfig] */

undefined8 FUN_107c90e88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107c90e90; end: 107c90e97; -[SCDiscoverFeedMyStoriesCircleCellViewModel storyLoggingInfo] */

undefined8 FUN_107c90e90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107c90e98; end: 107c90f1b; -[SCDiscoverFeedMyStoriesCircleCellViewModel .cxx_destruct] */

void FUN_107c90e98(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107c90f1c; end: 107c90fa7; -[SCDiscoverFeedMyStoriesCircleSeperatorCellViewModel initWithPreferredSize:layoutConfig:] */

undefined1 *
FUN_107c90f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fa5c0;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 107c90fa8; end: 107c90fcb; -[SCDiscoverFeedMyStoriesCircleSeperatorCellViewModel copyWithZone:] */

undefined8 FUN_107c90fa8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c90fcc; end: 107c9106f; -[SCDiscoverFeedMyStoriesCircleSeperatorCellViewModel hash] */

ulong * FUN_107c90fcc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar4 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar6 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_30 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar6 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_28 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  func_0x00010bfde980();
  uStack_20 = uVar3;
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (ulong *)param_3) {
LAB_107c910f4:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107c910f8;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if (((ulong)puVar5 & 1) != 0) {
      bVar2 = false;
      if ((*(double *)((long)puVar4 + 0x10) == *(double *)(param_3 + 0x10)) &&
         (bVar2 = false, !NAN(*(double *)((long)puVar4 + 0x18)) && !NAN(*(double *)(param_3 + 0x18))
         )) {
        bVar2 = *(double *)((long)puVar4 + 0x18) == *(double *)(param_3 + 0x18);
      }
      if (bVar2) {
        puVar7 = *(undefined1 **)((long)puVar4 + 8);
        if (puVar7 != *(undefined1 **)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_107c910f8;
        }
        goto LAB_107c910f4;
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_107c910f8:
  _objc_release(param_3);
  return (ulong *)puVar7;
}



/* Entry: 107c91070; end: 107c91113; -[SCDiscoverFeedMyStoriesCircleSeperatorCellViewModel isEqual:] */

long FUN_107c91070(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107c910f4:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c910f8;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      bVar1 = false;
      if ((*(double *)(param_1 + 0x10) == *(double *)(param_3 + 0x10)) &&
         (bVar1 = false, !NAN(*(double *)(param_1 + 0x18)) && !NAN(*(double *)(param_3 + 0x18)))) {
        bVar1 = *(double *)(param_1 + 0x18) == *(double *)(param_3 + 0x18);
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 != *(long *)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_107c910f8;
        }
        goto LAB_107c910f4;
      }
    }
    lVar4 = 0;
  }
LAB_107c910f8:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107c91114; end: 107c9111b; -[SCDiscoverFeedMyStoriesCircleSeperatorCellViewModel preferredSize] */

undefined1  [16] FUN_107c91114(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}



/* Entry: 107c9111c; end: 107c91123; -[SCDiscoverFeedMyStoriesCircleSeperatorCellViewModel layoutConfig] */

undefined8 FUN_107c9111c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107c91124; end: 107c9112f; -[SCDiscoverFeedMyStoriesCircleSeperatorCellViewModel .cxx_destruct] */

void FUN_107c91124(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107c91130; end: 107c9135f; -[SCStoriesEverywhereCollectionViewCellModel initWithStoryViewModel:displayLabelText:tapActionModel:longPressActionModel:scrollOutOfScreenActionModel:preferredSize:displayLabelInset:alpha:layoutConfig:storyLoggingInfo:storySuggestionViewModel:preferredVirtualSection:contributeToChatTabBadge:isFanPass:displayLabelNumberOfLines:displayLabelTypeStyle:] */

undefined8 *
FUN_107c91130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined4 param_16,
             undefined4 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_88 = PTR_PTR_1126fa5c8;
  puVar1 = &uStack_90;
  uStack_90 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    puVar1[0xf] = param_1;
    puVar1[0x10] = param_2;
    puVar1[7] = param_3;
    puVar1[8] = param_4;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_16;
    *(undefined1 *)((long)puVar1 + 9) = param_16._1_1_;
    puVar1[0xc] = param_15;
    puVar1[0xd] = param_18;
    puVar1[0xe] = param_19;
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 107c91360; end: 107c91383; -[SCStoriesEverywhereCollectionViewCellModel copyWithZone:] */

undefined8 FUN_107c91360(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c91384; end: 107c914e7; -[SCStoriesEverywhereCollectionViewCellModel hash] */

undefined8 * FUN_107c91384(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  double dVar9;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
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
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_98 = uVar3;
  func_0x00010bfde980();
  uVar6 = ~*(ulong *)(param_1 + 0x78) + *(ulong *)(param_1 + 0x78) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_88 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_88 = uStack_88 ^ uStack_88 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x80) + *(ulong *)(param_1 + 0x80) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_80 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_80 = uStack_80 ^ uStack_80 >> 0x16;
  uVar6 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_78 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_70 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x60);
  lStack_50 = -lVar7;
  if (-1 < lVar7) {
    lStack_50 = lVar7;
  }
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = (ulong)*(byte *)(param_1 + 9);
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x68));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x70));
  uStack_58 = uVar3;
  func_0x000100505190(&uStack_b0,0x11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_107c916dc:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107c916e8;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((((*(long *)((long)puVar4 + 0x60) == *(long *)(param_3 + 0x60) &&
          (*(char *)((long)puVar4 + 8) == param_3[8])) &&
         (*(char *)((long)puVar4 + 9) == param_3[9])) &&
        ((*(long *)((long)puVar4 + 0x68) == *(long *)(param_3 + 0x68) &&
         (*(long *)((long)puVar4 + 0x70) == *(long *)(param_3 + 0x70))))))) {
      puVar8 = (undefined1 *)0x0;
      if ((*(double *)((long)puVar4 + 0x78) != *(double *)(param_3 + 0x78)) ||
         (*(double *)((long)puVar4 + 0x80) != *(double *)(param_3 + 0x80))) goto LAB_107c916e8;
      dVar9 = ABS(*(double *)((long)puVar4 + 0x38) - *(double *)(param_3 + 0x38));
      if ((dVar9 < 2.2250738585072014e-308) ||
         (dVar9 < ABS(*(double *)((long)puVar4 + 0x38) + *(double *)(param_3 + 0x38)) *
                  2.220446049250313e-16)) {
        dVar9 = ABS(*(double *)((long)puVar4 + 0x40) - *(double *)(param_3 + 0x40));
        if (((((dVar9 < 2.2250738585072014e-308) ||
              (dVar9 < ABS(*(double *)((long)puVar4 + 0x40) + *(double *)(param_3 + 0x40)) *
                       2.220446049250313e-16)) &&
             ((lVar7 = *(long *)((long)puVar4 + 0x10), lVar7 == *(long *)(param_3 + 0x10) ||
              (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
            ((lVar7 = *(long *)((long)puVar4 + 0x18), lVar7 == *(long *)(param_3 + 0x18) ||
             (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
           (((((lVar7 = *(long *)((long)puVar4 + 0x20), lVar7 == *(long *)(param_3 + 0x20) ||
               (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
              ((lVar7 = *(long *)((long)puVar4 + 0x28), lVar7 == *(long *)(param_3 + 0x28) ||
               (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
             (((lVar7 = *(long *)((long)puVar4 + 0x30), lVar7 == *(long *)(param_3 + 0x30) ||
               (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
              ((lVar7 = *(long *)((long)puVar4 + 0x48), lVar7 == *(long *)(param_3 + 0x48) ||
               (func_0x00010c071ae0(), (int)lVar7 != 0)))))) &&
            ((lVar7 = *(long *)((long)puVar4 + 0x50), lVar7 == *(long *)(param_3 + 0x50) ||
             (func_0x00010c071ae0(), (int)lVar7 != 0)))))) {
          puVar8 = *(undefined1 **)((long)puVar4 + 0x58);
          if (puVar8 != *(undefined1 **)(param_3 + 0x58)) {
            func_0x00010c071ae0();
            goto LAB_107c916e8;
          }
          goto LAB_107c916dc;
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_107c916e8:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 107c914e8; end: 107c91703; -[SCStoriesEverywhereCollectionViewCellModel isEqual:] */

long FUN_107c914e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107c916dc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c916e8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60) &&
          (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        ((*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68) &&
         (*(long *)(param_1 + 0x70) == *(long *)(param_3 + 0x70))))))) {
      lVar3 = 0;
      if ((*(double *)(param_1 + 0x78) != *(double *)(param_3 + 0x78)) ||
         (*(double *)(param_1 + 0x80) != *(double *)(param_3 + 0x80))) goto LAB_107c916e8;
      dVar4 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
      if ((dVar4 < 2.2250738585072014e-308) ||
         (dVar4 < ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                  2.220446049250313e-16)) {
        dVar4 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40));
        if (((((dVar4 < 2.2250738585072014e-308) ||
              (dVar4 < ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) *
                       2.220446049250313e-16)) &&
             ((lVar3 = *(long *)(param_1 + 0x10), lVar3 == *(long *)(param_3 + 0x10) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
            ((lVar3 = *(long *)(param_1 + 0x18), lVar3 == *(long *)(param_3 + 0x18) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
           (((((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
              ((lVar3 = *(long *)(param_1 + 0x28), lVar3 == *(long *)(param_3 + 0x28) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
             (((lVar3 = *(long *)(param_1 + 0x30), lVar3 == *(long *)(param_3 + 0x30) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
              ((lVar3 = *(long *)(param_1 + 0x48), lVar3 == *(long *)(param_3 + 0x48) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
            ((lVar3 = *(long *)(param_1 + 0x50), lVar3 == *(long *)(param_3 + 0x50) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)))))) {
          lVar3 = *(long *)(param_1 + 0x58);
          if (lVar3 != *(long *)(param_3 + 0x58)) {
            func_0x00010c071ae0();
            goto LAB_107c916e8;
          }
          goto LAB_107c916dc;
        }
      }
    }
    lVar3 = 0;
  }
LAB_107c916e8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107c91704; end: 107c9170b; -[SCStoriesEverywhereCollectionViewCellModel storyViewModel] */

undefined8 FUN_107c91704(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c9170c; end: 107c91713; -[SCStoriesEverywhereCollectionViewCellModel displayLabelText] */

undefined8 FUN_107c9170c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107c91714; end: 107c9171b; -[SCStoriesEverywhereCollectionViewCellModel tapActionModel] */

undefined8 FUN_107c91714(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107c9171c; end: 107c91723; -[SCStoriesEverywhereCollectionViewCellModel longPressActionModel] */

undefined8 FUN_107c9171c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107c91724; end: 107c9172b; -[SCStoriesEverywhereCollectionViewCellModel scrollOutOfScreenActionModel] */

undefined8 FUN_107c91724(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107c9172c; end: 107c91733; -[SCStoriesEverywhereCollectionViewCellModel preferredSize] */

undefined1  [16] FUN_107c9172c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x78);
}



/* Entry: 107c91734; end: 107c9173b; -[SCStoriesEverywhereCollectionViewCellModel displayLabelInset] */

undefined8 FUN_107c91734(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107c9173c; end: 107c91743; -[SCStoriesEverywhereCollectionViewCellModel alpha] */

undefined8 FUN_107c9173c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107c91744; end: 107c9174b; -[SCStoriesEverywhereCollectionViewCellModel layoutConfig] */

undefined8 FUN_107c91744(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107c9174c; end: 107c91753; -[SCStoriesEverywhereCollectionViewCellModel storyLoggingInfo] */

undefined8 FUN_107c9174c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107c91754; end: 107c9175b; -[SCStoriesEverywhereCollectionViewCellModel storySuggestionViewModel] */

undefined8 FUN_107c91754(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107c9175c; end: 107c91763; -[SCStoriesEverywhereCollectionViewCellModel preferredVirtualSection] */

undefined8 FUN_107c9175c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107c91764; end: 107c9176b; -[SCStoriesEverywhereCollectionViewCellModel contributeToChatTabBadge] */

undefined1 FUN_107c91764(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107c9176c; end: 107c91773; -[SCStoriesEverywhereCollectionViewCellModel isFanPass] */

undefined1 FUN_107c9176c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107c91774; end: 107c9177b; -[SCStoriesEverywhereCollectionViewCellModel displayLabelNumberOfLines] */

undefined8 FUN_107c91774(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107c9177c; end: 107c91783; -[SCStoriesEverywhereCollectionViewCellModel displayLabelTypeStyle] */

undefined8 FUN_107c9177c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107c91784; end: 107c917fb; -[SCStoriesEverywhereCollectionViewCellModel .cxx_destruct] */

void FUN_107c91784(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107c917fc; end: 107c91883; -[SCStoriesEverywhereStoryViewModel initWithThumbnailViewModel:isRectangularShape:] */

undefined1 *
FUN_107c917fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fa5d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107c91884; end: 107c918a7; -[SCStoriesEverywhereStoryViewModel copyWithZone:] */

undefined8 FUN_107c91884(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c918a8; end: 107c91913; -[SCStoriesEverywhereStoryViewModel hash] */

undefined8 * FUN_107c918a8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107c91998;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_107c91998;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_107c91998;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_107c91998:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 107c91914; end: 107c919b3; -[SCStoriesEverywhereStoryViewModel isEqual:] */

long FUN_107c91914(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c91998;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_107c91998;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107c91998;
    }
  }
  lVar3 = 1;
LAB_107c91998:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107c919b4; end: 107c919bb; -[SCStoriesEverywhereStoryViewModel thumbnailViewModel] */

undefined8 FUN_107c919b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c919bc; end: 107c919c3; -[SCStoriesEverywhereStoryViewModel isRectangularShape] */

undefined1 FUN_107c919bc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107c919c4; end: 107c919cf; -[SCStoriesEverywhereStoryViewModel .cxx_destruct] */

void FUN_107c919c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107c919d0; end: 107c91a4f; -[SCDiscoverFeedStoryTileAnimation initWithAnimationOptions:animationDelay:coverZoomDuration:coverZoomScale:ctaSlideInDuration:ctaSlideInDelay:] */

void FUN_107c919d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126fa5d8;
  uStack_60 = param_6;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_8;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
  }
  return;
}



/* Entry: 107c91a50; end: 107c91a73; -[SCDiscoverFeedStoryTileAnimation copyWithZone:] */

undefined8 FUN_107c91a50(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c91a74; end: 107c91b73; -[SCDiscoverFeedStoryTileAnimation hash] */

long * FUN_107c91a74(long param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  double dVar8;
  double dVar9;
  long lStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 8);
  uVar6 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  lStack_48 = -lVar2;
  if (-1 < lVar2) {
    lStack_48 = lVar2;
  }
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
  plVar4 = &lStack_48;
  func_0x000100505190(plVar4,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar4 == param_3) {
    plVar7 = (long *)0x1;
  }
  else {
    plVar7 = (long *)0x0;
    if ((plVar4 != (long *)0x0) && (param_3 != (long *)0x0)) {
      plVar7 = plVar4;
      _objc_opt_class(plVar4);
      plVar5 = param_3;
      _objc_opt_isKindOfClass(param_3,plVar7);
      if ((((ulong)plVar5 & 1) != 0) && (plVar4[1] == param_3[1])) {
        dVar9 = ABS((double)plVar4[2] - (double)param_3[2]);
        dVar8 = ABS((double)plVar4[2] + (double)param_3[2]) * 2.220446049250313e-16;
        bVar3 = true;
        if ((2.2250738585072014e-308 <= dVar9) && (bVar3 = false, !NAN(dVar9) && !NAN(dVar8))) {
          bVar3 = dVar9 < dVar8;
        }
        if (bVar3) {
          dVar9 = ABS((double)plVar4[3] - (double)param_3[3]);
          dVar8 = ABS((double)plVar4[3] + (double)param_3[3]) * 2.220446049250313e-16;
          bVar3 = true;
          if ((2.2250738585072014e-308 <= dVar9) && (bVar3 = false, !NAN(dVar9) && !NAN(dVar8))) {
            bVar3 = dVar9 < dVar8;
          }
          if (bVar3) {
            dVar9 = ABS((double)plVar4[4] - (double)param_3[4]);
            dVar8 = ABS((double)plVar4[4] + (double)param_3[4]) * 2.220446049250313e-16;
            bVar3 = true;
            if ((2.2250738585072014e-308 <= dVar9) && (bVar3 = false, !NAN(dVar9) && !NAN(dVar8))) {
              bVar3 = dVar9 < dVar8;
            }
            if (bVar3) {
              dVar9 = ABS((double)plVar4[5] - (double)param_3[5]);
              dVar8 = ABS((double)plVar4[5] + (double)param_3[5]) * 2.220446049250313e-16;
              bVar3 = true;
              if ((2.2250738585072014e-308 <= dVar9) && (bVar3 = false, !NAN(dVar9) && !NAN(dVar8)))
              {
                bVar3 = dVar9 < dVar8;
              }
              if (bVar3) {
                dVar8 = ABS((double)plVar4[6] + (double)param_3[6]) * 2.220446049250313e-16;
                if (dVar8 <= 2.2250738585072014e-308) {
                  dVar8 = 2.2250738585072014e-308;
                }
                plVar7 = (long *)(ulong)(ABS((double)plVar4[6] - (double)param_3[6]) < dVar8);
                goto LAB_107c91ce4;
              }
            }
          }
        }
      }
      plVar7 = (long *)0x0;
    }
  }
LAB_107c91ce4:
  _objc_release(param_3);
  return plVar7;
}



/* Entry: 107c91b74; end: 107c91cff; -[SCDiscoverFeedStoryTileAnimation isEqual:] */

bool FUN_107c91b74(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
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
            if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
              bVar1 = dVar5 < dVar4;
            }
            if (bVar1) {
              dVar5 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
              dVar4 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                      2.220446049250313e-16;
              bVar1 = true;
              if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4)))
              {
                bVar1 = dVar5 < dVar4;
              }
              if (bVar1) {
                dVar4 = ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                        2.220446049250313e-16;
                if (dVar4 <= 2.2250738585072014e-308) {
                  dVar4 = 2.2250738585072014e-308;
                }
                bVar1 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30)) < dVar4;
                goto LAB_107c91ce4;
              }
            }
          }
        }
      }
      bVar1 = false;
    }
  }
LAB_107c91ce4:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107c91d00; end: 107c91d07; -[SCDiscoverFeedStoryTileAnimation animationOptions] */

undefined8 FUN_107c91d00(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107c91d08; end: 107c91d0f; -[SCDiscoverFeedStoryTileAnimation animationDelay] */

undefined8 FUN_107c91d08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c91d10; end: 107c91d17; -[SCDiscoverFeedStoryTileAnimation coverZoomDuration] */

undefined8 FUN_107c91d10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107c91d18; end: 107c91d1f; -[SCDiscoverFeedStoryTileAnimation coverZoomScale] */

undefined8 FUN_107c91d18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107c91d20; end: 107c91d27; -[SCDiscoverFeedStoryTileAnimation ctaSlideInDuration] */

undefined8 FUN_107c91d20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107c91d28; end: 107c91d2f; -[SCDiscoverFeedStoryTileAnimation ctaSlideInDelay] */

undefined8 FUN_107c91d28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107c91d30; end: 107c91d4b; +[SCDiscoverFeedStoryTileAnimationBuilder discoverFeedStoryTileAnimation] */

void FUN_107c91d30(void)

{
  _objc_alloc_init(PTR_PTR_1126d7440);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c91d4c; end: 107c91e9b; +[SCDiscoverFeedStoryTileAnimationBuilder discoverFeedStoryTileAnimationFromExistingDiscoverFeedStoryTileAnimation:] */

void FUN_107c91d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126d7440;
  _objc_retain(param_4);
  func_0x00010bf82220(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf03e00(param_4);
  puVar3 = puVar1;
  func_0x00010c2a8440(puVar1,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf03ae0(param_4);
  puVar4 = puVar3;
  func_0x00010c2a8400(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf53920(param_4);
  puVar5 = puVar4;
  func_0x00010c2ab2a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf53940(param_4);
  puVar6 = puVar5;
  func_0x00010c2ab2c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5d4a0(param_4);
  puVar7 = puVar6;
  func_0x00010c2ab760(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5d480(param_4);
  _objc_release(param_4);
  puVar8 = puVar7;
  func_0x00010c2ab740(param_1,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107c91e9c; end: 107c91ed7; -[SCDiscoverFeedStoryTileAnimationBuilder build] */

void FUN_107c91e9c(long param_1)

{
  _objc_alloc(PTR_PTR_1126d7448);
  func_0x00010bff2fe0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c91ed8; end: 107c91edf; -[SCDiscoverFeedStoryTileAnimationBuilder withAnimationOptions:] */

void FUN_107c91ed8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 107c91ee0; end: 107c91ee7; -[SCDiscoverFeedStoryTileAnimationBuilder withAnimationDelay:] */

void FUN_107c91ee0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 107c91ee8; end: 107c91eef; -[SCDiscoverFeedStoryTileAnimationBuilder withCoverZoomDuration:] */

void FUN_107c91ee8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 107c91ef0; end: 107c91ef7; -[SCDiscoverFeedStoryTileAnimationBuilder withCoverZoomScale:] */

void FUN_107c91ef0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 107c91ef8; end: 107c91eff; -[SCDiscoverFeedStoryTileAnimationBuilder withCtaSlideInDuration:] */

void FUN_107c91ef8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 107c91f00; end: 107c91f07; -[SCDiscoverFeedStoryTileAnimationBuilder withCtaSlideInDelay:] */

void FUN_107c91f00(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x30) = param_1;
  return;
}



/* Entry: 107c91f08; end: 107c922b7; -[SCContextPostStoryButton initWithFrame:] */

/* WARNING: Possible PIC construction at 0x000107c92098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107c9219c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107c921d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107c921a0) */
/* WARNING: Removing unreachable block (ram,0x000107c9209c) */
/* WARNING: Removing unreachable block (ram,0x000107c921d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c91f08(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = PTR_PTR_1126fa5e0;
  puVar1 = &uStack_a8;
  uStack_a8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 == (undefined8 *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return 0;
    }
    ___stack_chk_fail();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276cc48);
  }
  else {
    puVar2 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11276cc48;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar5));
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    puVar3 = puVar1;
    func_0x00010be36840(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(uVar4);
    _objc_release(puVar3);
    func_0x00010c1aab40(*(undefined8 *)((long)puVar1 + lVar5));
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(uVar4);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x4000000000000000);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_intrinsicContentSize_1125f8080);
  return uVar4;
}



/* Entry: 107c922b8; end: 107c922c7; -[SCContextPostStoryButton intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c922b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276cc48),PTR_s_intrinsicContentSize_1125f8080);
  return;
}



/* Entry: 107c922c8; end: 107c923e7; -[SCContextPostStoryButton pointInside:withEvent:] */

void FUN_107c922c8(undefined8 param_1,double param_2,undefined8 param_3,double param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = param_5;
  uVar3 = param_1;
  dVar4 = param_2;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar2 = param_5;
  func_0x00010c262ca0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51200(uVar3,dVar4,param_5,param_6,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf20c00(param_5);
  dVar5 = dVar4 + -5.0;
  uVar1 = param_5;
  func_0x00010c262ca0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar2 = param_5;
  func_0x00010c262ca0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010bfb68e0(param_5);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)
            (uVar3,dVar5,param_3,(param_4 - dVar4) + 5.0,param_1,param_2);
  return;
}



/* Entry: 107c923e8; end: 107c92463; -[SCContextPostStoryButton _iconChatBubbleFillImage] */

void FUN_107c923e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4030000000000000,0x4030000000000000,0x3ff0000000000000,0x3ff0000000000000,
                      0x3ff0000000000000,0x3ff0000000000000,puVar2,param_2,0x77,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107c92464; end: 107c92477; -[SCContextPostStoryButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c92464(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276cc48,0);
  return;
}



/* Entry: 107c92478; end: 107c925f3;  */

void FUN_107c92478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new();
  func_0x00010c1c82e0(param_2);
  func_0x00010c1c3ba0(param_2,puVar1);
  func_0x00010c1bdb00(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf51e00();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  if (puVar1 != (undefined *)0x0) {
    _objc_retain(uVar5);
    _objc_retain(puVar1);
    _objc_alloc(puVar2);
    func_0x00010c04e840();
    _objc_release(uVar5);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 107c925f4; end: 107c92663;  */

undefined * FUN_107c925f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  puVar2 = (undefined *)0x0;
  if (param_1 != 0) {
    _objc_retain(param_2);
    _objc_retain(param_1);
    _objc_alloc(puVar1);
    func_0x00010c04e840();
    _objc_release(param_2);
    _objc_release(param_1);
    puVar2 = puVar1;
  }
  return puVar2;
}



/* Entry: 107c92664; end: 107c926ef;  */

undefined8
FUN_107c92664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain();
  FUN_107c92478(param_1,param_2,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  FUN_107c925f4(param_3,param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  return uVar1;
}



/* Entry: 107c926f0; end: 107c92753; +[SCMetricFormatter shortenNumber:] */

void FUN_107c926f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c292ae0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c22d8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,PTR_s_shortenNumber_layoutDirection__112669060,puVar2);
  return;
}



/* Entry: 107c92754; end: 107c927e3; +[SCMetricFormatter shortenNumber:layoutDirection:] */

void FUN_107c92754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be97840(param_2,param_3,3);
  uVar1 = param_2;
  func_0x00010bdd8880(param_2);
  uVar2 = param_2;
  func_0x00010be238c0(param_2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb2420(param_1,param_2,param_3,uVar1,uVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 107c927e4; end: 107c92837; +[SCMetricFormatter _powerUnits] */

void FUN_107c927e4(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113727850 != -1) {
    func_0x00010002a2fc(0x113727850,&PTR___NSConcreteGlobalBlock_110a018a0);
  }
  uVar1 = uRam0000000113727848;
  _objc_retain(uRam0000000113727848);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107c92838; end: 107c9295b;  */

double FUN_107c92838(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  undefined ***pppuVar8;
  double dVar9;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110daafd8;
  FUN_107c92c1c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  uStack_70 = param_2;
  func_0x000107c92c34();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  uStack_68 = uVar2;
  func_0x000107c92c4c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  uStack_60 = uVar3;
  func_0x000107c92c64();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  uStack_58 = uVar4;
  func_0x000107c92c7c();
  _objc_retainAutoreleasedReturnValue();
  pppuVar8 = &ppuStack_78;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,pppuVar8,6);
  iVar7 = (int)pppuVar8;
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113727848;
  puRam0000000113727848 = puVar6;
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  dVar9 = 0.0;
  if (param_1 != 0.0) {
    dVar9 = -param_1;
    if (0.0 <= param_1) {
      dVar9 = param_1;
    }
    _log10(dVar9);
    dVar9 = (double)(iVar7 - (int)dVar9);
    ___exp10(dVar9);
    dVar9 = (double)(long)(double)(long)(param_1 * dVar9) / dVar9;
  }
  return dVar9;
}



/* Entry: 107c9295c; end: 107c929bf; +[SCMetricFormatter _round:toSignificantFigures:] */

double FUN_107c9295c(double param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (param_1 != 0.0) {
    dVar1 = -param_1;
    if (0.0 <= param_1) {
      dVar1 = param_1;
    }
    _log10(dVar1);
    dVar1 = (double)(param_4 - (int)dVar1);
    ___exp10(dVar1);
    dVar1 = (double)(long)(double)(long)(param_1 * dVar1) / dVar1;
  }
  return dVar1;
}



/* Entry: 107c929c0; end: 107c92ad7; +[SCMetricFormatter _shortenNumber:power:unit:layoutDirection:] */

void FUN_107c929c0(double param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  
  _objc_retain(param_5);
  if (0 < (int)param_4) {
    dVar3 = 1000.0;
    _pow(0x408f400000000000,(double)param_4);
    param_1 = param_1 / dVar3;
  }
  func_0x00010be1f380(param_1,param_2,param_3,(int)param_4 < 1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c25d4c0(param_2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                      &PTR____CFConstantStringClassReference_110dae518);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107c92ad8; end: 107c92b83; +[SCMetricFormatter _getFormatterForNumber:lessThanOneThousand:] */

void FUN_107c92ad8(double param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  _objc_alloc_init(PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70);
  puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf3e0(puVar2,param_3,puVar3);
  _objc_release(puVar3);
  func_0x00010c1d02e0(puVar2,param_3,1);
  func_0x00010c1c8260(puVar2,param_3,0);
  uVar1 = 2;
  if (param_1 >= 10.0) {
    uVar1 = 0;
  }
  if (param_4 == 0) {
    uVar1 = param_1 < 10.0;
  }
  func_0x00010c1c3b00(puVar2,param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107c92b84; end: 107c92bb3; +[SCMetricFormatter _calculatePowerForNumber:] */

int FUN_107c92b84(double param_1)

{
  if (0.0 < param_1) {
    _log10();
    return (int)(param_1 / 3.0);
  }
  return 0;
}



/* Entry: 107c92bb4; end: 107c92c1b; +[SCMetricFormatter _getUnitForPower:] */

void FUN_107c92bb4(ulong param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  
  param_3 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
  func_0x00010be76ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  if (uVar1 <= param_3) {
    uVar1 = param_1;
    func_0x00010bf529e0(param_1);
    param_3 = (int)uVar1 - 1;
  }
  uVar1 = param_1;
  func_0x00010c0dfd40(param_1,param_2,(long)(int)param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107c92c1c; end: 107c92c93;  */

void FUN_107c92c1c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb4938;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110eb4938,
                      &PTR____CFConstantStringClassReference_110eb4958,0);
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



/* Entry: 107c92c94; end: 107c92d07; -[SCGrapheneSpotlightOnFriendsFeedMetric2 init] */

undefined1 * FUN_107c92c94(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fa5e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107c92d08; end: 107c92e7b;  */

long ** FUN_107c92d08(long param_1,long **param_2,undefined1 *param_3)

{
  char *pcVar1;
  long **pplVar2;
  long **pplVar3;
  long **pplVar4;
  long **pplVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined1 *puVar9;
  long *plVar10;
  undefined8 *unaff_x22;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 *puStack_1d8;
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_158;
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  long alStack_f0 [3];
  long *plStack_d8;
  long **applStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_b0;
  long *plStack_a8;
  long **pplStack_a0;
  long **pplStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar2 = param_2;
  puVar6 = param_3;
  _objc_retain(param_2);
  plVar10 = (long *)0x0;
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long **)0x0) {
      pplVar2 = (long **)&UNK_10f44f65a;
    }
    else {
      pplVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pplVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pplVar2 = (long **)&UNK_110a018c0;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a018c0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar6 = (undefined1 *)puVar7;
    unaff_x22 = &uStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = (undefined1 *)puVar7;
      unaff_x22 = &uStack_80;
    }
  }
  pplVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pplVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pplVar4 = pplVar3;
  __Unwind_Resume();
  plVar8 = alStack_f0;
  pcStack_88 = FUN_107c92e7c;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = (long **)0x0;
  puStack_b0 = (undefined1 *)unaff_x22;
  plStack_a8 = plVar10;
  pplStack_a0 = pplVar3;
  pplStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  if (pplVar4 != (long **)0x0) {
    plVar10 = pplVar4[1];
    pcVar1 = "true";
    if ((int)pplVar2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(applStack_d0,pcVar1);
    alStack_f0[0] = 0;
    alStack_f0[1] = 0;
    alStack_f0[2] = 0;
    func_0x00010007e1e8(alStack_f0,applStack_d0,&lStack_b8,1);
    pplVar2 = (long **)&UNK_110a01910;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a01910,alStack_f0,puVar6);
    pplVar5 = &plStack_d8;
    plStack_d8 = alStack_f0;
    func_0x00010007e5dc();
    puVar6 = (undefined1 *)plVar8;
    plVar10 = alStack_f0;
    if (cStack_b9 < '\0') {
      pplVar5 = applStack_d0[0];
      __ZdlPv();
      puVar6 = (undefined1 *)plVar8;
      plVar10 = alStack_f0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return pplVar5;
  }
  ___stack_chk_fail();
  plStack_d8 = plVar10;
  func_0x00010007e5dc(&plStack_d8);
  if (cStack_b9 < '\0') {
    __ZdlPv(applStack_d0[0]);
  }
  __Unwind_Resume();
  puVar7 = &uStack_170;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar3 = pplVar2;
  puVar9 = puVar6;
  _objc_retain(pplVar2);
  if (pplVar5 != (long **)0x0) {
    plVar10 = pplVar5[1];
    _objc_retain(pplVar2);
    if (pplVar2 == (long **)0x0) {
      pplVar3 = (long **)&UNK_10f44f65a;
    }
    else {
      pplVar3 = pplVar2;
      _objc_retainAutorelease(pplVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar2);
    func_0x00010002b838(auStack_150,pplVar3);
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    func_0x00010007e1e8(&uStack_170,auStack_150,&lStack_138,1);
    pplVar3 = (long **)&UNK_110a01960;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a01960,&uStack_170,puVar6);
    puStack_158 = (undefined1 *)&uStack_170;
    func_0x00010007e5dc(&puStack_158);
    puVar9 = (undefined1 *)puVar7;
    if (cStack_139 < '\0') {
      __ZdlPv(auStack_150[0]);
      puVar9 = (undefined1 *)puVar7;
    }
  }
  pplVar5 = pplVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return pplVar5;
  }
  ___stack_chk_fail();
  _objc_release(pplVar2);
  _objc_release(pplVar2);
  __Unwind_Resume();
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pplVar3);
  if (pplVar5 != (long **)0x0) {
    plVar10 = pplVar5[1];
    _objc_retain(pplVar3);
    if (pplVar3 == (long **)0x0) {
      pplVar2 = (long **)&UNK_10f44f65a;
    }
    else {
      pplVar2 = pplVar3;
      _objc_retainAutorelease(pplVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar3);
    func_0x00010002b838(auStack_1d0,pplVar2);
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    func_0x00010007e1e8(&uStack_1f0,auStack_1d0,&lStack_1b8,1);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a019b0,&uStack_1f0,puVar9);
    puStack_1d8 = (undefined1 *)&uStack_1f0;
    func_0x00010007e5dc(&puStack_1d8);
    if (cStack_1b9 < '\0') {
      __ZdlPv(auStack_1d0[0]);
    }
  }
  pplVar2 = pplVar3;
  _objc_release(pplVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return pplVar2;
  }
  ___stack_chk_fail();
  _objc_release(pplVar3);
  _objc_release(pplVar3);
  __Unwind_Resume(pplVar2);
  return (long **)&PTR____CFConstantStringClassReference_110eb49f8;
}



/* Entry: 107c92e7c; end: 107c92f93;  */

undefined1 ** FUN_107c92e7c(long param_1,undefined1 **param_2,undefined1 *param_3)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined8 *unaff_x21;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_158;
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  puVar4 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_2 = (undefined1 **)&UNK_110a01910;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110a01910,&uStack_70,param_3);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    param_3 = (undefined1 *)puVar4;
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      param_3 = (undefined1 *)puVar4;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  puVar4 = &uStack_f0;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (ppuVar2 != (undefined1 **)0x0) {
    plVar6 = (long *)ppuVar2[1];
    _objc_retain(param_2);
    if (param_2 == (undefined1 **)0x0) {
      ppuVar2 = (undefined1 **)&UNK_10f44f65a;
    }
    else {
      ppuVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_d0,ppuVar2);
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    func_0x00010007e1e8(&uStack_f0,auStack_d0,&lStack_b8,1);
    ppuVar3 = (undefined1 **)&UNK_110a01960;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110a01960,&uStack_f0,param_3);
    puStack_d8 = (undefined1 *)&uStack_f0;
    func_0x00010007e5dc(&puStack_d8);
    puVar5 = (undefined1 *)puVar4;
    if (cStack_b9 < '\0') {
      __ZdlPv(auStack_d0[0]);
      puVar5 = (undefined1 *)puVar4;
    }
  }
  ppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar3);
  if (ppuVar2 != (undefined1 **)0x0) {
    plVar6 = (long *)ppuVar2[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined1 **)0x0) {
      ppuVar2 = (undefined1 **)&UNK_10f44f65a;
    }
    else {
      ppuVar2 = ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    func_0x00010002b838(auStack_150,ppuVar2);
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    func_0x00010007e1e8(&uStack_170,auStack_150,&lStack_138,1);
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110a019b0,&uStack_170,puVar5);
    puStack_158 = (undefined1 *)&uStack_170;
    func_0x00010007e5dc(&puStack_158);
    if (cStack_139 < '\0') {
      __ZdlPv(auStack_150[0]);
    }
  }
  ppuVar2 = ppuVar3;
  _objc_release(ppuVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  __Unwind_Resume(ppuVar2);
  return &PTR____CFConstantStringClassReference_110eb49f8;
}



/* Entry: 107c92f94; end: 107c93107;  */

undefined ** FUN_107c92f94(long param_1,undefined **param_2,undefined1 *param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar4 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f44f65a;
    }
    else {
      ppuVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,ppuVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    ppuVar1 = (undefined **)&UNK_110a01960;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110a01960,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = (undefined1 *)puVar4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined1 *)puVar4;
    }
  }
  ppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar1);
  if (ppuVar2 != (undefined **)0x0) {
    plVar5 = (long *)ppuVar2[1];
    _objc_retain(ppuVar1);
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar2 = (undefined **)&UNK_10f44f65a;
    }
    else {
      ppuVar2 = ppuVar1;
      _objc_retainAutorelease(ppuVar1);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar1);
    func_0x00010002b838(auStack_e0,ppuVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110a019b0,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  ppuVar2 = ppuVar1;
  _objc_release(ppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar1);
  _objc_release(ppuVar1);
  __Unwind_Resume(ppuVar2);
  return &PTR____CFConstantStringClassReference_110eb49f8;
}



/* Entry: 107c93108; end: 107c9327b;  */

undefined ** FUN_107c93108(long param_1,undefined **param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f44f65a;
    }
    else {
      ppuVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,ppuVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110a019b0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  ppuVar1 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume(ppuVar1);
  return &PTR____CFConstantStringClassReference_110eb49f8;
}



/* Entry: 107c9327c; end: 107c93287; +[SCStoriesBlizzardLogger announcerIdentifier] */

undefined ** FUN_107c9327c(void)

{
  return &PTR____CFConstantStringClassReference_110eb49f8;
}



/* Entry: 107c93288; end: 107c9328f; -[SCStoriesBlizzardLogger addListener:] */

void FUN_107c93288(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107c93290; end: 107c93297; -[SCStoriesBlizzardLogger removeListener:] */

void FUN_107c93290(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107c93298; end: 107c9394f; -[SCStoriesBlizzardLogger logStorySnapPost:loggingParams:sendMessageAttemptId:postClientId:snapId:relatedSnapId:snapIndex:storyId:destinationMetadata:customStory:actionTs:hasQuote:goLiveTimestamp:quotedUserId:quotedStickerType:repostLogParams:attemptType:] */

void FUN_107c93298(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,ulong param_12,
                  undefined8 param_13,undefined8 param_14)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(in_stack_00000038);
  _objc_retain(in_stack_00000048);
  uVar6 = param_6;
  func_0x000108ea5f00(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_12;
  func_0x00010bf6ece0(param_12);
  uVar2 = param_11;
  func_0x000108ea5f8c(param_11,uVar6,(uVar1 & 0xfffffff9) != 0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c096b60(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfc81a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126d7508;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(in_stack_00000038);
  _objc_retain(in_stack_00000048);
  _objc_retain(uVar4);
  _objc_opt_new();
  FUN_107c9a52c();
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_8);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(in_stack_00000038);
  _objc_release(in_stack_00000048);
  _objc_release(uVar4);
  if (in_stack_00000050 != -1) {
    func_0x00010c20d620(puVar5);
  }
  func_0x00010bea8000(param_1);
  uVar6 = param_4;
  func_0x00010c158420(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea7fe0(param_1);
  _objc_release(uVar6);
  uVar1 = param_12;
  func_0x00010bf6ece0();
  if ((int)uVar1 == 4) {
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_107c93950;
    puStack_d0 = &UNK_110a01a70;
    lStack_c8 = param_1;
    _objc_retain(uVar2);
    uStack_c0 = uVar2;
    _objc_retain(param_11);
    uStack_b8 = param_11;
    _objc_retain(puVar5);
    puStack_b0 = puVar5;
    _objc_retain(param_3);
    uStack_a8 = param_3;
    _objc_retain(param_4);
    uStack_a0 = param_4;
    _objc_retain(param_6);
    uStack_98 = param_6;
    _objc_retain(param_7);
    uStack_90 = param_7;
    _objc_retain(param_12);
    uStack_88 = param_12;
    _objc_retain(param_13);
    uStack_80 = param_13;
    _objc_retain(param_14);
    uStack_78 = param_14;
    _objc_retain(param_5);
    uStack_70 = param_5;
    func_0x00010c0f7fc0(uVar6);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_release(puStack_b0);
    _objc_release(uStack_b8);
    _objc_release(uStack_c0);
  }
  else {
    _objc_initWeak(auStack_f0,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_f8,auStack_f0);
    _objc_retain(puVar5);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_11);
    _objc_retain(param_12);
    _objc_retain(param_13);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_8);
    _objc_retain(param_14);
    func_0x00010bf385c0(uVar6);
    _objc_release(uVar6);
    _objc_release(param_14);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_13);
    _objc_release(param_12);
    _objc_release(param_11);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_f8);
    _objc_destroyWeak(auStack_f0);
  }
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(in_stack_00000048);
  _objc_release(in_stack_00000038);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107c93950; end: 107c93be3;  */

void FUN_107c93950(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_58,*(long *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uStack_50 = *(undefined8 *)(param_1 + 0x30);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c1176c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_58;
  _objc_copyWeak(auStack_60,puVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar10);
  uVar11 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar11);
  uVar12 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar12);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar13);
  uVar14 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar14);
  uVar15 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar15);
  uVar16 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar16);
  uVar17 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar17);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_60);
  puVar5 = auStack_58;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume();
  _objc_retain(puVar6);
  puVar5 = puVar5 + 0x78;
  _objc_loadWeakRetained(puVar5);
  func_0x00010be30720();
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 107c93be4; end: 107c93c5b;  */

void FUN_107c93be4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x78;
  _objc_loadWeakRetained(param_1);
  func_0x00010be30720();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107c93c5c; end: 107c93ce3;  */

void FUN_107c93c5c(long param_1,uint param_2)

{
  long lVar1;
  
  if ((param_2 & 1) != 0) {
    return;
  }
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be593a0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x78;
  _objc_loadWeakRetained(param_1);
  func_0x00010be59320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107c93ce4; end: 107c93d33; -[SCStoriesBlizzardLogger logQuickPostTrayPageView:] */

void FUN_107c93ce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c93d34; end: 107c93d83; -[SCStoriesBlizzardLogger logQuickPostRouteDecision:] */

void FUN_107c93d34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c93d84; end: 107c93fa7; -[SCStoriesBlizzardLogger _logStorySegmentPostIfNeededForSnap:loggingParams:postClientId:snapId:relatedSnapId:storyId:destinationMetadata:customStory:actionTs:] */

void FUN_107c93d84(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  ulong param_9,long param_10,undefined8 param_11)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined1 *puVar20;
  ulong uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = param_3;
  puVar20 = param_4;
  uVar16 = param_5;
  uVar17 = param_6;
  lVar12 = param_7;
  uVar10 = param_8;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain();
  _objc_retain(param_11);
  puVar2 = param_4;
  func_0x00010c158420();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  if (puVar3 != (undefined1 *)0x0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    puVar2 = param_4;
    func_0x00010c158420();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = &uStack_130;
    puVar20 = auStack_f0;
    uVar16 = 0x10;
    puVar3 = puVar2;
    func_0x00010bf52a60();
    if (puVar3 != (undefined1 *)0x0) {
      lVar19 = *plStack_120;
      do {
        puVar20 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar19) {
            _objc_enumerationMutation(puVar2);
          }
          lStack_168 = param_10;
          uStack_160 = param_11;
          uStack_170 = param_9;
          uVar17 = param_6;
          lVar12 = param_7;
          uVar10 = param_8;
          func_0x00010be59300(param_1);
          puVar20 = puVar20 + 1;
        } while (puVar3 != puVar20);
        puVar11 = &uStack_130;
        puVar20 = auStack_f0;
        uVar16 = 0x10;
        puVar3 = puVar2;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined1 *)0x0);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar11);
  _objc_retain(puVar20);
  _objc_retain(uVar16);
  _objc_retain(uVar17);
  _objc_retain(lVar12);
  _objc_retain(uStack_160);
  _objc_retain(lStack_168);
  _objc_retain(uStack_170);
  _objc_retain(uVar10);
  uVar4 = uVar16;
  func_0x000108ea5f00(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uStack_170;
  func_0x00010bf6ece0(uStack_170);
  uVar6 = uVar10;
  func_0x000108ea5f8c(uVar10,uVar4,(uVar5 & 0xfffffff9) != 0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010c158380(puVar20);
  puVar2 = puVar20;
  func_0x00010bf429e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126d7510;
  _objc_retain(uVar16);
  _objc_retain(uVar17);
  _objc_retain(lVar12);
  _objc_retain(puVar11);
  _objc_opt_new();
  FUN_107c9a52c();
  _objc_release(uVar16);
  _objc_release(uVar17);
  _objc_release(lVar12);
  _objc_release(puVar11);
  puVar3 = puVar2;
  func_0x00010bef0520(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176a60(puVar7);
  _objc_release(puVar3);
  lVar19 = lVar12;
  uVar4 = uVar10;
  func_0x00010bea8000(param_3);
  _objc_release(uStack_160);
  _objc_release(lStack_168);
  _objc_release(uStack_170);
  _objc_release(uVar10);
  func_0x00010c158380(puVar20);
  func_0x00010c1faa60(puVar7);
  func_0x00010c27c8a0(puVar20);
  func_0x00010c21a5a0(puVar7);
  func_0x00010c27c980(puVar20);
  func_0x00010c21a600(puVar7);
  puVar3 = puVar20;
  func_0x00010bf429e0(puVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf89ea0();
  func_0x00010c191960(puVar7);
  _objc_release(puVar3);
  puVar3 = puVar20;
  func_0x00010bf429e0(puVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5c920();
  func_0x00010c226060(puVar7);
  _objc_release(puVar3);
  puVar3 = puVar20;
  func_0x00010bf429e0(puVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf30860();
  func_0x00010c178bc0(puVar7);
  _objc_release(puVar3);
  puVar3 = puVar20;
  func_0x00010bf429e0(puVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c253c00();
  func_0x00010c20abc0(puVar7);
  _objc_release(puVar3);
  puVar3 = puVar20;
  func_0x00010bf429e0(puVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c124200();
  func_0x00010c1e9060(puVar7);
  _objc_release(puVar3);
  puVar3 = puVar20;
  func_0x00010bf429e0(puVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4ca00();
  func_0x00010c182160(puVar7);
  _objc_release(puVar3);
  puVar3 = puVar20;
  func_0x00010c0c67c0();
  if (puVar3 != (undefined1 *)0xffffffffffffffff) {
    puVar3 = puVar20;
    func_0x00010c0c67c0();
    func_0x00010bb1394c();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c52e0(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar3);
  }
  puVar9 = param_3;
  func_0x00010be9d5c0();
  if (puVar9 != (undefined8 *)0xffffffffffffffff) {
    func_0x00010c1faae0(puVar7);
  }
  uVar10 = param_3[1];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0b2e60();
  _objc_release(uVar10);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(uVar6);
  _objc_release(lVar12);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(puVar20);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  _objc_retain(uVar4);
  _objc_retain(uStack_170);
  _objc_retain(lStack_168);
  func_0x00010c161fc0(puVar8);
  func_0x000108533750(uStack_170,lStack_168,lVar19 != 0);
  uVar5 = uStack_170;
  func_0x00010bf6ece0();
  iVar1 = (int)uVar5;
  uVar5 = uStack_170;
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      func_0x00010c1df6e0(puVar8);
      func_0x00010c20ddc0(puVar8);
      func_0x00010c20de00(puVar8);
      func_0x00010c0d4ba0(uStack_170);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (iVar1 != 2) goto LAB_107c949dc;
      func_0x00010c1df6e0(puVar8);
      func_0x00010c20ddc0(puVar8);
      func_0x00010c20de00(puVar8);
      uVar16 = uVar4;
      func_0x0001085335b0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a4b00(puVar8);
      _objc_release(uVar16);
      if (lStack_168 != 0) {
        uVar16 = puVar11[4];
        _objc_retain(uVar16);
        lVar12 = lStack_168;
        func_0x00010bf5a820(lStack_168);
        _objc_retainAutoreleasedReturnValue();
        lVar19 = lVar12;
        func_0x00010bf5bbc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0();
        _objc_release(uVar16);
        _objc_release(lVar19);
        _objc_release(lVar12);
      }
      func_0x00010c19fdc0(puVar8);
      lVar12 = lStack_168;
      func_0x00010c1057e0(lStack_168);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c1a4b60(puVar8);
      _objc_release(lVar12);
      lVar12 = lStack_168;
      func_0x00010c29ef80(lStack_168);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c1a4b80(puVar8);
      _objc_release(lVar12);
      func_0x00010bf62120(uStack_170);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar13 = uVar5;
    func_0x00010bf62e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27d100();
    FUN_107c94a24();
    func_0x00010c188c80(puVar8);
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 4) {
        func_0x00010c20ddc0(puVar8);
        func_0x00010c20de00(puVar8);
        func_0x00010c242960(uStack_170);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar5;
        func_0x00010bf62e40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27d100();
        FUN_107c94a24();
        func_0x00010c188c80(puVar8);
        _objc_release(uVar13);
        _objc_release(uVar5);
        uVar5 = uStack_170;
        func_0x00010c242960();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar5;
        func_0x00010c25b820();
        _objc_release(uVar5);
        if ((int)uVar13 == 1) {
          func_0x00010c20de40(puVar8);
        }
      }
      goto LAB_107c949dc;
    }
    func_0x00010c0ee2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar5;
    func_0x00010bf24ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar5;
    func_0x00010bfd4d80();
    if ((uVar14 & 1) == 0) {
      func_0x00010c1df700(puVar8);
    }
    else {
      uVar14 = uVar13;
      func_0x00010bfe2ee0(uVar13);
      uVar15 = uVar13;
      func_0x00010c0b5940(uVar13);
      func_0x000100c4a928(uVar14,uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1df700(puVar8);
      _objc_release(uVar15);
      _objc_release(uVar14);
    }
    func_0x00010c20ddc0(puVar8);
    func_0x00010c20d1a0(puVar8);
    func_0x00010c20de00(puVar8);
    func_0x0001085336a4();
    func_0x00010c17f8e0(puVar8);
    func_0x00010bf567a0(uVar5);
    func_0x00010c1fc580(puVar8);
    uVar14 = uVar5;
    func_0x00010bfd9d20();
    if ((int)uVar14 != 0) {
      uVar14 = uVar5;
      func_0x00010c0ed760(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      func_0x000108f52130();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d6720(puVar8);
      _objc_release(uVar15);
      _objc_release(uVar14);
    }
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar5;
    func_0x00010c235f20(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar7);
    func_0x00010bf980c0(uVar14);
    _objc_release(uVar14);
    func_0x00010c2016c0(puVar8);
    uVar14 = uVar5;
    func_0x00010bfda480();
    if ((int)uVar14 != 0) {
      uVar14 = uVar5;
      func_0x00010c0fd640(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fd5e0();
      func_0x00010c1dc8c0(puVar8);
      _objc_release(uVar14);
      uVar14 = uVar5;
      func_0x00010c0fd640(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fd120();
      func_0x00010c1dc420(puVar8);
      _objc_release(uVar14);
      uVar14 = uVar5;
      func_0x00010c0fd640(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fd140();
      func_0x00010c1dc440(puVar8);
      _objc_release(uVar14);
      uVar14 = uVar5;
      func_0x00010c0fd640();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      func_0x00010c0fd5e0();
      _objc_release(uVar14);
      if ((int)uVar15 != 0) {
        uVar14 = uVar5;
        func_0x00010c0fd640(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar14;
        func_0x00010c0fd5a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2208c0(puVar8);
        _objc_release(uVar15);
        _objc_release(uVar14);
      }
    }
    _objc_release(puVar7);
    _objc_release(puVar7);
  }
  _objc_release(uVar13);
  _objc_release(uVar5);
LAB_107c949dc:
  func_0x00010c1a5b00(puVar8);
  _objc_release(lStack_168);
  _objc_release(uStack_170);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 107c93fa8; end: 107c9442b; -[SCStoriesBlizzardLogger _logStorySegmentPostForSnap:segmentLoggingParams:postClientId:snapId:relatedSnapId:storyId:destinationMetadata:customStory:actionTs:] */

void FUN_107c93fa8(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,ulong param_9,long param_10,
                  undefined8 param_11)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  uVar2 = param_5;
  func_0x000108ea5f00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_9;
  func_0x00010bf6ece0(param_9);
  uVar14 = param_8;
  func_0x000108ea5f8c(param_8,uVar2,(uVar3 & 0xfffffff9) != 0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c158380(param_4);
  lVar4 = param_4;
  func_0x00010bf429e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d7510;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_opt_new();
  FUN_107c9a52c();
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_3);
  lVar6 = lVar4;
  func_0x00010bef0520(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176a60(puVar5);
  _objc_release(lVar6);
  lVar12 = param_7;
  uVar2 = param_8;
  func_0x00010bea8000(param_1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  func_0x00010c158380(param_4);
  func_0x00010c1faa60(puVar5);
  func_0x00010c27c8a0(param_4);
  func_0x00010c21a5a0(puVar5);
  func_0x00010c27c980(param_4);
  func_0x00010c21a600(puVar5);
  lVar6 = param_4;
  func_0x00010bf429e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf89ea0();
  func_0x00010c191960(puVar5);
  _objc_release(lVar6);
  lVar6 = param_4;
  func_0x00010bf429e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5c920();
  func_0x00010c226060(puVar5);
  _objc_release(lVar6);
  lVar6 = param_4;
  func_0x00010bf429e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf30860();
  func_0x00010c178bc0(puVar5);
  _objc_release(lVar6);
  lVar6 = param_4;
  func_0x00010bf429e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c253c00();
  func_0x00010c20abc0(puVar5);
  _objc_release(lVar6);
  lVar6 = param_4;
  func_0x00010bf429e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c124200();
  func_0x00010c1e9060(puVar5);
  _objc_release(lVar6);
  lVar6 = param_4;
  func_0x00010bf429e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4ca00();
  func_0x00010c182160(puVar5);
  _objc_release(lVar6);
  lVar6 = param_4;
  func_0x00010c0c67c0();
  if (lVar6 != -1) {
    lVar6 = param_4;
    func_0x00010c0c67c0();
    func_0x00010bb1394c();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c52e0(puVar5);
    _objc_release(puVar7);
    _objc_release(lVar6);
  }
  lVar6 = param_1;
  func_0x00010be9d5c0();
  if (lVar6 != -1) {
    func_0x00010c1faae0(puVar5);
  }
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c0b2e60();
  _objc_release(uVar8);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(uVar14);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  _objc_retain(uVar2);
  _objc_retain(param_9);
  _objc_retain(param_10);
  func_0x00010c161fc0(puVar7);
  func_0x000108533750(param_9,param_10,lVar12 != 0);
  uVar3 = param_9;
  func_0x00010bf6ece0();
  iVar1 = (int)uVar3;
  uVar3 = param_9;
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      func_0x00010c1df6e0(puVar7);
      func_0x00010c20ddc0(puVar7);
      func_0x00010c20de00(puVar7);
      func_0x00010c0d4ba0(param_9);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (iVar1 != 2) goto LAB_107c949dc;
      func_0x00010c1df6e0(puVar7);
      func_0x00010c20ddc0(puVar7);
      func_0x00010c20de00(puVar7);
      uVar14 = uVar2;
      func_0x0001085335b0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a4b00(puVar7);
      _objc_release(uVar14);
      if (param_10 != 0) {
        uVar14 = *(undefined8 *)(param_3 + 0x20);
        _objc_retain(uVar14);
        lVar4 = param_10;
        func_0x00010bf5a820(param_10);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar4;
        func_0x00010bf5bbc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0();
        _objc_release(uVar14);
        _objc_release(lVar6);
        _objc_release(lVar4);
      }
      func_0x00010c19fdc0(puVar7);
      lVar4 = param_10;
      func_0x00010c1057e0(param_10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c1a4b60(puVar7);
      _objc_release(lVar4);
      lVar4 = param_10;
      func_0x00010c29ef80(param_10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c1a4b80(puVar7);
      _objc_release(lVar4);
      func_0x00010bf62120(param_9);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar9 = uVar3;
    func_0x00010bf62e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27d100();
    FUN_107c94a24();
    func_0x00010c188c80(puVar7);
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 4) {
        func_0x00010c20ddc0(puVar7);
        func_0x00010c20de00(puVar7);
        func_0x00010c242960(param_9);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar3;
        func_0x00010bf62e40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27d100();
        FUN_107c94a24();
        func_0x00010c188c80(puVar7);
        _objc_release(uVar9);
        _objc_release(uVar3);
        uVar3 = param_9;
        func_0x00010c242960();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar3;
        func_0x00010c25b820();
        _objc_release(uVar3);
        if ((int)uVar9 == 1) {
          func_0x00010c20de40(puVar7);
        }
      }
      goto LAB_107c949dc;
    }
    func_0x00010c0ee2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar3;
    func_0x00010bf24ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010bfd4d80();
    if ((uVar10 & 1) == 0) {
      func_0x00010c1df700(puVar7);
    }
    else {
      uVar10 = uVar9;
      func_0x00010bfe2ee0(uVar9);
      uVar11 = uVar9;
      func_0x00010c0b5940(uVar9);
      func_0x000100c4a928(uVar10,uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1df700(puVar7);
      _objc_release(uVar11);
      _objc_release(uVar10);
    }
    func_0x00010c20ddc0(puVar7);
    func_0x00010c20d1a0(puVar7);
    func_0x00010c20de00(puVar7);
    func_0x0001085336a4();
    func_0x00010c17f8e0(puVar7);
    func_0x00010bf567a0(uVar3);
    func_0x00010c1fc580(puVar7);
    uVar10 = uVar3;
    func_0x00010bfd9d20();
    if ((int)uVar10 != 0) {
      uVar10 = uVar3;
      func_0x00010c0ed760(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x000108f52130();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d6720(puVar7);
      _objc_release(uVar11);
      _objc_release(uVar10);
    }
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010c235f20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar5);
    func_0x00010bf980c0(uVar10);
    _objc_release(uVar10);
    func_0x00010c2016c0(puVar7);
    uVar10 = uVar3;
    func_0x00010bfda480();
    if ((int)uVar10 != 0) {
      uVar10 = uVar3;
      func_0x00010c0fd640(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fd5e0();
      func_0x00010c1dc8c0(puVar7);
      _objc_release(uVar10);
      uVar10 = uVar3;
      func_0x00010c0fd640(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fd120();
      func_0x00010c1dc420(puVar7);
      _objc_release(uVar10);
      uVar10 = uVar3;
      func_0x00010c0fd640(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fd140();
      func_0x00010c1dc440(puVar7);
      _objc_release(uVar10);
      uVar10 = uVar3;
      func_0x00010c0fd640();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c0fd5e0();
      _objc_release(uVar10);
      if ((int)uVar11 != 0) {
        uVar10 = uVar3;
        func_0x00010c0fd640(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010c0fd5a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2208c0(puVar7);
        _objc_release(uVar11);
        _objc_release(uVar10);
      }
    }
    _objc_release(puVar5);
    _objc_release(puVar5);
  }
  _objc_release(uVar9);
  _objc_release(uVar3);
LAB_107c949dc:
  func_0x00010c1a5b00(puVar7);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 107c9442c; end: 107c94a23; -[SCStoriesBlizzardLogger _setStoryPostEventFields:withSnapDoc:loggingParams:uniqueId:relatedSnapId:storyId:destinationMetadata:customStory:actionTs:goLiveTimestamp:] */

void FUN_107c9442c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long in_x6;
  undefined8 in_x7;
  undefined8 uVar9;
  ulong in_stack_00000000;
  long in_stack_00000008;
  
  _objc_retain(param_3);
  _objc_retain(in_x7);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_stack_00000008);
  func_0x00010c161fc0(param_3);
  func_0x000108533750(in_stack_00000000,in_stack_00000008,in_x6 != 0);
  uVar2 = in_stack_00000000;
  func_0x00010bf6ece0();
  iVar1 = (int)uVar2;
  uVar2 = in_stack_00000000;
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      func_0x00010c1df6e0(param_3);
      func_0x00010c20ddc0(param_3);
      func_0x00010c20de00(param_3);
      func_0x00010c0d4ba0(in_stack_00000000);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (iVar1 != 2) goto LAB_107c949dc;
      func_0x00010c1df6e0(param_3);
      func_0x00010c20ddc0(param_3);
      func_0x00010c20de00(param_3);
      uVar9 = in_x7;
      func_0x0001085335b0(in_x7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a4b00(param_3);
      _objc_release(uVar9);
      if (in_stack_00000008 != 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar9);
        lVar3 = in_stack_00000008;
        func_0x00010bf5a820(in_stack_00000008);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf5bbc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0();
        _objc_release(uVar9);
        _objc_release(lVar4);
        _objc_release(lVar3);
      }
      func_0x00010c19fdc0(param_3);
      lVar3 = in_stack_00000008;
      func_0x00010c1057e0(in_stack_00000008);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c1a4b60(param_3);
      _objc_release(lVar3);
      lVar3 = in_stack_00000008;
      func_0x00010c29ef80(in_stack_00000008);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c1a4b80(param_3);
      _objc_release(lVar3);
      func_0x00010bf62120(in_stack_00000000);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar5 = uVar2;
    func_0x00010bf62e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27d100();
    FUN_107c94a24();
    func_0x00010c188c80(param_3);
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 4) {
        func_0x00010c20ddc0(param_3);
        func_0x00010c20de00(param_3);
        func_0x00010c242960(in_stack_00000000);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010bf62e40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27d100();
        FUN_107c94a24();
        func_0x00010c188c80(param_3);
        _objc_release(uVar5);
        _objc_release(uVar2);
        uVar2 = in_stack_00000000;
        func_0x00010c242960();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010c25b820();
        _objc_release(uVar2);
        if ((int)uVar5 == 1) {
          func_0x00010c20de40(param_3);
        }
      }
      goto LAB_107c949dc;
    }
    func_0x00010c0ee2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf24ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bfd4d80();
    if ((uVar6 & 1) == 0) {
      func_0x00010c1df700(param_3);
    }
    else {
      uVar6 = uVar5;
      func_0x00010bfe2ee0(uVar5);
      uVar7 = uVar5;
      func_0x00010c0b5940(uVar5);
      func_0x000100c4a928(uVar6,uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1df700(param_3);
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
    func_0x00010c20ddc0(param_3);
    func_0x00010c20d1a0(param_3);
    func_0x00010c20de00(param_3);
    func_0x0001085336a4();
    func_0x00010c17f8e0(param_3);
    func_0x00010bf567a0(uVar2);
    func_0x00010c1fc580(param_3);
    uVar6 = uVar2;
    func_0x00010bfd9d20();
    if ((int)uVar6 != 0) {
      uVar6 = uVar2;
      func_0x00010c0ed760(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x000108f52130();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d6720(param_3);
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c235f20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar8);
    func_0x00010bf980c0(uVar6);
    _objc_release(uVar6);
    func_0x00010c2016c0(param_3);
    uVar6 = uVar2;
    func_0x00010bfda480();
    if ((int)uVar6 != 0) {
      uVar6 = uVar2;
      func_0x00010c0fd640(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fd5e0();
      func_0x00010c1dc8c0(param_3);
      _objc_release(uVar6);
      uVar6 = uVar2;
      func_0x00010c0fd640(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fd120();
      func_0x00010c1dc420(param_3);
      _objc_release(uVar6);
      uVar6 = uVar2;
      func_0x00010c0fd640(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fd140();
      func_0x00010c1dc440(param_3);
      _objc_release(uVar6);
      uVar6 = uVar2;
      func_0x00010c0fd640();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0fd5e0();
      _objc_release(uVar6);
      if ((int)uVar7 != 0) {
        uVar6 = uVar2;
        func_0x00010c0fd640(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c0fd5a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2208c0(param_3);
        _objc_release(uVar7);
        _objc_release(uVar6);
      }
    }
    _objc_release(puVar8);
    _objc_release(puVar8);
  }
  _objc_release(uVar5);
  _objc_release(uVar2);
LAB_107c949dc:
  func_0x00010c1a5b00(param_3);
  _objc_release(in_stack_00000008);
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c94a24; end: 107c94a8f;  */

undefined8 FUN_107c94a24(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 7;
  if (param_1 != 0xc9) {
    uVar1 = 0xffffffffffffffff;
  }
  uVar3 = 6;
  if (param_1 != 0x67) {
    uVar3 = uVar1;
  }
  uVar1 = 5;
  if (param_1 != 0x66) {
    uVar1 = 0xffffffffffffffff;
  }
  uVar2 = 4;
  if (param_1 != 0x65) {
    uVar2 = uVar1;
  }
  if (param_1 < 0x67) {
    uVar3 = uVar2;
  }
  uVar1 = 3;
  if (param_1 != 0xc) {
    uVar1 = 0xffffffffffffffff;
  }
  uVar2 = 2;
  if (param_1 != 6) {
    uVar2 = uVar1;
  }
  uVar1 = 1;
  if (param_1 != 1) {
    uVar1 = uVar2;
  }
  if (param_1 < 0x65) {
    uVar3 = uVar1;
  }
  return uVar3;
}



/* Entry: 107c94a90; end: 107c94aef;  */

void FUN_107c94a90(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 2) {
    uVar1 = 1;
  }
  else {
    if (param_2 != 1) {
      return;
    }
    uVar1 = 2;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bb15458(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c94af0; end: 107c94b6f; -[SCStoriesBlizzardLogger _setStoryPostEventFields:withAllSegmentLoggingParams:] */

void FUN_107c94af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x000100817178(param_4,&PTR___NSConcreteGlobalBlock_110a01ad0);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010bf00560(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c52e0(param_3);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c94b70; end: 107c94bcf;  */

void FUN_107c94b70(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0c67c0();
  if (lVar1 == -1) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x00010c0c67c0(param_2);
    func_0x00010bb1394c();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107c94bd0; end: 107c94e67; -[SCStoriesBlizzardLogger _handleSnapProfilesResult:uniqueId:storySnapPostWithEvent:snap:loggingParams:postClientId:snapId:storyId:destinationMetadata:customStory:actionTs:sendMessageAttemptId:] */

void FUN_107c94bd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
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
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_107c94e68;
  puStack_d8 = &UNK_110a01b20;
  uStack_b8 = param_10;
  uStack_98 = param_14;
  uStack_90 = param_11;
  uStack_88 = param_12;
  uStack_78 = param_9;
  uStack_70 = param_13;
  lStack_d0 = param_1;
  uStack_c8 = param_4;
  uStack_c0 = param_3;
  uStack_b0 = param_5;
  uStack_a8 = param_6;
  uStack_a0 = param_7;
  uStack_80 = param_8;
  _objc_retain();
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_14);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_10);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_f0);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(param_13);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_14);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_10);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}


