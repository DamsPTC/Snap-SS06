/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e48bec; end: 108e48c0f; -[SCCaptionUserInputEvent copyWithZone:] */

undefined8 FUN_108e48bec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e48c10; end: 108e48c73; -[SCCaptionUserInputEvent hash] */

undefined8 * FUN_108e48c10(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x18);
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_20 = uVar1;
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108e48d04;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    puVar4 = (undefined1 *)0x0;
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) goto LAB_108e48d04;
    puVar4 = *(undefined1 **)((long)puVar2 + 8);
    if (puVar4 != *(undefined1 **)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_108e48d04;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_108e48d04:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 108e48c74; end: 108e48d1f; -[SCCaptionUserInputEvent isEqual:] */

long FUN_108e48c74(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e48d04;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    lVar3 = 0;
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) goto LAB_108e48d04;
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_108e48d04;
    }
  }
  lVar3 = 1;
LAB_108e48d04:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108e48d20; end: 108e48d2b; -[SCCaptionUserInputEvent textRange] */

undefined1  [16] FUN_108e48d20(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}



/* Entry: 108e48d2c; end: 108e48d33; -[SCCaptionUserInputEvent changedText] */

undefined8 FUN_108e48d2c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e48d34; end: 108e48d3f; -[SCCaptionUserInputEvent .cxx_destruct] */

void FUN_108e48d34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e48d40; end: 108e48dab; +[SCCaptionTaggingResult mentionResultWithSnapchatter:taggingIndex:] */

void FUN_108e48d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126dc270;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e48dac; end: 108e48dcf; -[SCCaptionTaggingResult copyWithZone:] */

undefined8 FUN_108e48dac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e48dd0; end: 108e48e47; -[SCCaptionTaggingResult hash] */

void FUN_108e48dd0(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar3 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar3;
  if (-1 < lVar3) {
    lStack_30 = lVar3;
  }
  uStack_38 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126feb40;
  puStack_70 = (undefined1 *)puVar2;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e48e48; end: 108e48e8b; -[SCCaptionTaggingResult internalInit] */

void FUN_108e48e48(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126feb40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e48e8c; end: 108e48f3b; -[SCCaptionTaggingResult isEqual:] */

long FUN_108e48e8c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e48f20;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_108e48f20;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_108e48f20;
    }
  }
  lVar3 = 1;
LAB_108e48f20:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108e48f3c; end: 108e48f5f; -[SCCaptionTaggingResult matchMentionResult:] */

void FUN_108e48f3c(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_1 + 8) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108e48f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    return;
  }
  return;
}



/* Entry: 108e48f60; end: 108e48f6b; -[SCCaptionTaggingResult .cxx_destruct] */

void FUN_108e48f60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108e48f6c; end: 108e48fdf; -[SCPreviewFeatureStickerContainerServices initWithStickerContainer:] */

undefined1 * FUN_108e48f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126feb48;
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



/* Entry: 108e48fe0; end: 108e48fe7; -[SCPreviewFeatureStickerContainerServices stickerContainer] */

undefined8 FUN_108e48fe0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e48fe8; end: 108e48ff3; -[SCPreviewFeatureStickerContainerServices .cxx_destruct] */

void FUN_108e48fe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e48ff4; end: 108e490df; -[SCPreviewStickerViewParams initWithCenter:isAnimated:isFromRecents:isFromSearch:isCreatedCustomSticker:isFromCutout:isRemovable:isMovable:isExcludedFromEditCount:isFromCaption:thumbnail:] */

undefined1 *
FUN_108e48ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9,undefined1 param_10,undefined4 param_11,undefined4 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126feb50;
  uStack_70 = param_3;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined1 *)((long)puVar1 + 10) = param_7;
    *(undefined1 *)((long)puVar1 + 0xb) = param_8;
    *(undefined1 *)((long)puVar1 + 0xc) = param_9;
    *(undefined1 *)((long)puVar1 + 0xd) = param_10;
    *(undefined1 *)((long)puVar1 + 0xe) = (undefined1)param_11;
    *(undefined1 *)((long)puVar1 + 0xf) = param_11._1_1_;
    *(undefined1 *)((long)puVar1 + 0x10) = param_11._2_1_;
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_13);
  return (undefined1 *)puVar1;
}



/* Entry: 108e490e0; end: 108e49103; -[SCPreviewStickerViewParams copyWithZone:] */

undefined8 FUN_108e490e0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e49104; end: 108e49203; -[SCPreviewStickerViewParams hash] */

ulong * FUN_108e49104(long param_1,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ushort uVar8;
  undefined4 uVar9;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar6 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_78 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uStack_70 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar9 = *(undefined4 *)(param_1 + 8);
  uVar6 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar9 >> 0x18),
                                          (uint6)(byte)((uint)uVar9 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar9) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar9 >> 8),(short)uVar6);
  uVar5 = CONCAT44((int)(uVar6 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar5 = CONCAT26((short)(uVar5 >> 0x30),CONCAT24((short)(uVar6 >> 0x20),(int)uVar5)) &
          0xff01ff01ffffffff;
  uVar8 = (ushort)(uVar5 >> 0x30);
  uStack_68 = (ulong)uVar1 & 0xff;
  uStack_60 = uVar5 >> 0x10 & 0xff;
  uStack_58 = (ulong)CONCAT24(uVar8,(uint)(ushort)(uVar5 >> 0x20)) & 0xffffffff;
  uStack_50 = (ulong)uVar8;
  uVar9 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar9 >> 0x18),
                                          (uint6)(byte)((uint)uVar9 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar9) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar9 >> 8),(short)uVar5);
  uVar6 = CONCAT44((int)(uVar5 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar5 = CONCAT26((short)(uVar6 >> 0x30),CONCAT24((short)(uVar5 >> 0x20),(int)uVar6)) &
          0xff01ff01ffffffff;
  uVar8 = (ushort)(uVar5 >> 0x30);
  uStack_48 = (ulong)uVar1 & 0xff;
  uStack_40 = uVar5 >> 0x10 & 0xff;
  uStack_38 = (ulong)CONCAT24(uVar8,(uint)(ushort)(uVar5 >> 0x20)) & 0xffffffff;
  uStack_30 = (ulong)uVar8;
  uStack_28 = (ulong)*(byte *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar3 = &uStack_78;
  uStack_20 = uVar2;
  func_0x000107c3191c(puVar3,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 != param_3) {
    puVar7 = (ulong *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_108e4932c;
    puVar7 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if (((((ulong)puVar4 & 1) == 0) ||
        (((((char)puVar3[1] != (char)param_3[1] ||
           (*(char *)((long)puVar3 + 9) != *(char *)((long)param_3 + 9))) ||
          (*(char *)((long)puVar3 + 10) != *(char *)((long)param_3 + 10))) ||
         ((*(char *)((long)puVar3 + 0xb) != *(char *)((long)param_3 + 0xb) ||
          (*(char *)((long)puVar3 + 0xc) != *(char *)((long)param_3 + 0xc))))))) ||
       ((*(char *)((long)puVar3 + 0xd) != *(char *)((long)param_3 + 0xd) ||
        (((*(char *)((long)puVar3 + 0xe) != *(char *)((long)param_3 + 0xe) ||
          (*(char *)((long)puVar3 + 0xf) != *(char *)((long)param_3 + 0xf))) ||
         ((char)puVar3[2] != (char)param_3[2])))))) {
      puVar7 = (ulong *)0x0;
      goto LAB_108e4932c;
    }
    puVar7 = (ulong *)0x0;
    if (((double)puVar3[4] != (double)param_3[4]) || ((double)puVar3[5] != (double)param_3[5]))
    goto LAB_108e4932c;
    puVar7 = (ulong *)puVar3[3];
    if (puVar7 != (ulong *)param_3[3]) {
      func_0x00010c071ae0();
      goto LAB_108e4932c;
    }
  }
  puVar7 = (ulong *)0x1;
LAB_108e4932c:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 108e49204; end: 108e49347; -[SCPreviewStickerViewParams isEqual:] */

long FUN_108e49204(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e4932c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) == 0) ||
        ((((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
           (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
          (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))) ||
         ((*(char *)(param_1 + 0xb) != *(char *)(param_3 + 0xb) ||
          (*(char *)(param_1 + 0xc) != *(char *)(param_3 + 0xc))))))) ||
       ((*(char *)(param_1 + 0xd) != *(char *)(param_3 + 0xd) ||
        (((*(char *)(param_1 + 0xe) != *(char *)(param_3 + 0xe) ||
          (*(char *)(param_1 + 0xf) != *(char *)(param_3 + 0xf))) ||
         (*(char *)(param_1 + 0x10) != *(char *)(param_3 + 0x10))))))) {
      lVar3 = 0;
      goto LAB_108e4932c;
    }
    lVar3 = 0;
    if ((*(double *)(param_1 + 0x20) != *(double *)(param_3 + 0x20)) ||
       (*(double *)(param_1 + 0x28) != *(double *)(param_3 + 0x28))) goto LAB_108e4932c;
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_108e4932c;
    }
  }
  lVar3 = 1;
LAB_108e4932c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108e49348; end: 108e4934f; -[SCPreviewStickerViewParams center] */

undefined1  [16] FUN_108e49348(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x20);
}



/* Entry: 108e49350; end: 108e49357; -[SCPreviewStickerViewParams isAnimated] */

undefined1 FUN_108e49350(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108e49358; end: 108e4935f; -[SCPreviewStickerViewParams isFromRecents] */

undefined1 FUN_108e49358(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108e49360; end: 108e49367; -[SCPreviewStickerViewParams isFromSearch] */

undefined1 FUN_108e49360(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108e49368; end: 108e4936f; -[SCPreviewStickerViewParams isCreatedCustomSticker] */

undefined1 FUN_108e49368(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 108e49370; end: 108e49377; -[SCPreviewStickerViewParams isFromCutout] */

undefined1 FUN_108e49370(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 108e49378; end: 108e4937f; -[SCPreviewStickerViewParams isRemovable] */

undefined1 FUN_108e49378(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 108e49380; end: 108e49387; -[SCPreviewStickerViewParams isMovable] */

undefined1 FUN_108e49380(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 108e49388; end: 108e4938f; -[SCPreviewStickerViewParams isExcludedFromEditCount] */

undefined1 FUN_108e49388(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 108e49390; end: 108e49397; -[SCPreviewStickerViewParams isFromCaption] */

undefined1 FUN_108e49390(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 108e49398; end: 108e4939f; -[SCPreviewStickerViewParams thumbnail] */

undefined8 FUN_108e49398(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108e493a0; end: 108e493ab; -[SCPreviewStickerViewParams .cxx_destruct] */

void FUN_108e493a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108e493ac; end: 108e493c7; +[SCPreviewStickerViewParamsBuilder previewStickerViewParams] */

void FUN_108e493ac(void)

{
  _objc_alloc_init(PTR_PTR_1126c3d58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e493c8; end: 108e4960f; +[SCPreviewStickerViewParamsBuilder previewStickerViewParamsFromExistingPreviewStickerViewParams:] */

void FUN_108e493c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
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
  
  puVar1 = PTR_PTR_1126c3d58;
  _objc_retain(param_3);
  func_0x00010c111ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0(param_3);
  puVar2 = puVar1;
  func_0x00010c2aa4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c06c000(param_3);
  puVar4 = puVar2;
  func_0x00010c2b01a0(puVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c073d40(param_3);
  puVar5 = puVar4;
  func_0x00010c2b0940(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c073de0(param_3);
  puVar6 = puVar5;
  func_0x00010c2b0960(puVar5,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c06f8c0(param_3);
  puVar7 = puVar6;
  func_0x00010c2b04e0(puVar6,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c073ae0(param_3);
  puVar8 = puVar7;
  func_0x00010c2b08e0(puVar7,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c07c340(param_3);
  puVar9 = puVar8;
  func_0x00010c2b1340(puVar8,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c077fa0(param_3);
  puVar10 = puVar9;
  func_0x00010c2b0ec0(puVar9,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0722a0(param_3);
  puVar11 = puVar10;
  func_0x00010c2b06e0(puVar10,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c073a20(param_3);
  puVar12 = puVar11;
  func_0x00010c2b08c0(puVar11,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c26d760(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar13 = puVar12;
  func_0x00010c2baf40(puVar12,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 108e49610; end: 108e49677; -[SCPreviewStickerViewParamsBuilder build] */

void FUN_108e49610(long param_1)

{
  _objc_alloc(PTR_PTR_1126dc278);
  func_0x00010bffd440(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e49678; end: 108e4967f; -[SCPreviewStickerViewParamsBuilder withCenter:] */

void FUN_108e49678(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 8) = param_1;
  *(undefined8 *)(param_3 + 0x10) = param_2;
  return;
}



/* Entry: 108e49680; end: 108e49687; -[SCPreviewStickerViewParamsBuilder withIsAnimated:] */

void FUN_108e49680(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 108e49688; end: 108e4968f; -[SCPreviewStickerViewParamsBuilder withIsFromRecents:] */

void FUN_108e49688(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x19) = param_3;
  return;
}



/* Entry: 108e49690; end: 108e49697; -[SCPreviewStickerViewParamsBuilder withIsFromSearch:] */

void FUN_108e49690(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1a) = param_3;
  return;
}



/* Entry: 108e49698; end: 108e4969f; -[SCPreviewStickerViewParamsBuilder withIsCreatedCustomSticker:] */

void FUN_108e49698(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1b) = param_3;
  return;
}



/* Entry: 108e496a0; end: 108e496a7; -[SCPreviewStickerViewParamsBuilder withIsFromCutout:] */

void FUN_108e496a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1c) = param_3;
  return;
}



/* Entry: 108e496a8; end: 108e496af; -[SCPreviewStickerViewParamsBuilder withIsRemovable:] */

void FUN_108e496a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1d) = param_3;
  return;
}



/* Entry: 108e496b0; end: 108e496b7; -[SCPreviewStickerViewParamsBuilder withIsMovable:] */

void FUN_108e496b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1e) = param_3;
  return;
}



/* Entry: 108e496b8; end: 108e496bf; -[SCPreviewStickerViewParamsBuilder withIsExcludedFromEditCount:] */

void FUN_108e496b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1f) = param_3;
  return;
}



/* Entry: 108e496c0; end: 108e496c7; -[SCPreviewStickerViewParamsBuilder withIsFromCaption:] */

void FUN_108e496c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 108e496c8; end: 108e496ff; -[SCPreviewStickerViewParamsBuilder withThumbnail:] */

long FUN_108e496c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108e49700; end: 108e4970b; -[SCPreviewStickerViewParamsBuilder .cxx_destruct] */

void FUN_108e49700(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 108e4970c; end: 108e497e7;  */

void FUN_108e4970c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam000000011372ea20 != -1) {
    func_0x000107c27d9c(0x11372ea20,&PTR___NSConcreteGlobalBlock_110ac7250);
  }
  uVar1 = uRam000000011372ea18;
  func_0x00010bfe63a0(uRam000000011372ea18);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108e497e8; end: 108e497ef;  */

void FUN_108e497e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1067b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_preferences_11261f408);
  return;
}



/* Entry: 108e497f0; end: 108e4988b; -[SCUserSession userPreferences] */

void FUN_108e497f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d4e00;
  _objc_opt_class(PTR_PTR_1126d4e00);
  uVar2 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar1,&PTR___NSConcreteGlobalBlock_110ac72b0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108e4988c; end: 108e49893;  */

void FUN_108e4988c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1067b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_preferences_11261f408);
  return;
}



/* Entry: 108e49894; end: 108e49cab; +[SCDynamicCaptionStyleUtils dynamicClassicCaptionStyle] */

void FUN_108e49894(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126dc038;
  _objc_alloc();
  func_0x00010c013ba0(0x4031000000000000,0x4031000000000000,0,0,0);
  puVar2 = PTR_PTR_1126dc058;
  _objc_alloc(PTR_PTR_1126dc058);
  puVar3 = puVar2;
  func_0x00010b0af23c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04eda0(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar4 = PTR_PTR_1126dc008;
  _objc_alloc(PTR_PTR_1126dc008);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfffc80(0,puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar5 = PTR_PTR_1126dc008;
  _objc_alloc(PTR_PTR_1126dc008);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf41080();
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfffc80(0,puVar5);
  _objc_release(puVar9);
  _objc_release(puVar3);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar3 = PTR_PTR_1126dc038;
  _objc_alloc(PTR_PTR_1126dc038);
  func_0x00010c013ba0(0x4043000000000000,0x402a000000000000,0x3ff0000000000000,0x3ff0000000000000,
                      0x3ff199999999999a);
  puVar6 = PTR_PTR_1126dc058;
  _objc_alloc();
  puVar7 = puVar6;
  func_0x00010b0af23c();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04eda0();
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126dbfe0;
  _objc_alloc(PTR_PTR_1126dbfe0);
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03a080(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdd5970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108e49cac; end: 108e49caf; +[SCDynamicCaptionStyleUtils dynamicBigTextCaptionStyleWithAlignment:] */

void FUN_108e49cac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__bubbleWrapCaptionStyleWithAlign_112552ff8);
  return;
}



/* Entry: 108e49cb0; end: 108e4a127; +[SCDynamicCaptionStyleUtils dynamicBigTextCaptionStyleForOldSOJU] */

void FUN_108e49cb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126dc038;
  _objc_alloc();
  func_0x00010c013ba0(0x4050400000000000,0x402a000000000000,0,0x3ff0000000000000,0x3ff199999999999a)
  ;
  puVar2 = PTR_PTR_1126dc058;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x0001092018b0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04eda0(puVar2,param_2,&PTR____CFConstantStringClassReference_110efb178,puVar3,puVar1,
                      0,1,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar4 = PTR_PTR_1126dc008;
  _objc_alloc(PTR_PTR_1126dc008);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfffc80(0,puVar4,param_2,puVar5,0,1,0);
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar5 = PTR_PTR_1126dc028;
  _objc_alloc();
  func_0x00010c0542a0(0x4028000000000000,0x4028000000000000,0x4028000000000000,0x4028000000000000);
  puVar6 = PTR_PTR_1126dc038;
  _objc_alloc(PTR_PTR_1126dc038);
  func_0x00010c013ba0(0x4050400000000000,0x402a000000000000,0,0x3ff0000000000000,0x3ff0000000000000)
  ;
  puVar7 = PTR_PTR_1126dc008;
  _objc_alloc(PTR_PTR_1126dc008);
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0738;
  ppuStack_a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0738;
  ppuStack_98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0738;
  puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf41080();
  func_0x00010c0df760(puVar3,param_2,puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_a8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfffc80(0,puVar7,param_2,puVar9,0,3,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar3);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  puVar3 = PTR_PTR_1126dc048;
  _objc_alloc(PTR_PTR_1126dc048);
  func_0x00010bff63e0(0);
  puVar8 = PTR_PTR_1126dc058;
  _objc_alloc();
  puVar9 = puVar8;
  func_0x0001092018b0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04eda0(puVar8,param_2,&PTR____CFConstantStringClassReference_110efb818,puVar9,puVar6,
                      puVar3,1,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar9);
  puVar9 = PTR_PTR_1126dbfe0;
  _objc_alloc(PTR_PTR_1126dbfe0);
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_b0 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_b0,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03a080(puVar9,param_2,puVar2,puVar10,&PTR____CFConstantStringClassReference_110efb178
                     );
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar3);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    puVar3 = PTR_PTR_1126dc058;
    _objc_alloc(PTR_PTR_1126dc058);
    func_0x00010c04eda0();
    puVar9 = PTR_PTR_1126dbfe0;
    _objc_alloc(PTR_PTR_1126dbfe0);
    func_0x00010c03a080();
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 108e4a128; end: 108e4a1a7; +[SCDynamicCaptionStyleUtils carouselDummyCellCaptionStyle] */

void FUN_108e4a128(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dc058;
  _objc_alloc(PTR_PTR_1126dc058);
  func_0x00010c04eda0();
  puVar2 = PTR_PTR_1126dbfe0;
  _objc_alloc(PTR_PTR_1126dbfe0);
  func_0x00010c03a080();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e4a1a8; end: 108e4a1b7; +[SCDynamicCaptionStyleUtils isBackgroundVisibleForStyleType:] */

bool FUN_108e4a1a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0 && param_3 != 6;
}



/* Entry: 108e4a1b8; end: 108e4a72f; +[SCDynamicCaptionStyleUtils _bubbleWrapCaptionStyleWithAlignment:] */

undefined1 * FUN_108e4a1b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126dc008;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfffc80(0);
  puStack_d8 = puVar1;
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR_PTR_1126dc028;
  _objc_alloc();
  func_0x00010c0542a0(0x4024000000000000,0x4024000000000000,0x4024000000000000,0x4024000000000000);
  puVar2 = PTR_PTR_1126dc038;
  puStack_d0 = puVar1;
  _objc_alloc();
  uStack_100 = 4;
  uStack_f8 = 0;
  uStack_108 = 0;
  puStack_118 = (undefined *)0x0;
  uStack_120 = param_3;
  puStack_110 = puVar1;
  func_0x00010c013ba0(0x4043000000000000,0x402a000000000000,0,0x3ff0000000000000,0x3ff0000000000000)
  ;
  puVar3 = PTR_PTR_1126dc008;
  puStack_e8 = puVar2;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0738;
  ppuStack_a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0738;
  ppuStack_a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0738;
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf41080();
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfffc80(0);
  puStack_e0 = puVar3;
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar1 = PTR_PTR_1126dc048;
  _objc_alloc(PTR_PTR_1126dc048);
  func_0x00010bff63e0(0x4022000000000000);
  puVar2 = PTR_PTR_1126dc058;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x0001092018b0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uStack_120 = 7;
  func_0x00010c04eda0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126dc008;
  _objc_alloc(PTR_PTR_1126dc008);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf414e0(0x3fc999999999999a);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_b8 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfffc80(0,puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126dc018;
  _objc_alloc();
  func_0x00010bfffbc0(0,0x3ff0000000000000,0x4008000000000000);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c0 = puVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126dc038;
  _objc_alloc(PTR_PTR_1126dc038);
  puStack_110 = (undefined *)0x0;
  uStack_108 = 0;
  uStack_100 = 4;
  uStack_f8 = 0;
  uStack_120 = param_3;
  puStack_118 = puVar5;
  func_0x00010c013ba0(0x4043000000000000,0x402a000000000000,0,0x3ff0000000000000,0x3ff199999999999a)
  ;
  puVar7 = PTR_PTR_1126dc058;
  _objc_alloc();
  puVar6 = puVar7;
  func_0x0001092018b0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uStack_120 = 0;
  func_0x00010c04eda0();
  _objc_release(puVar8);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126dbfe0;
  _objc_alloc();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c8 = puVar7;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar6;
  puVar12 = puVar2;
  func_0x00010c03a080(puVar6);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puStack_e0);
  _objc_release(puStack_e8);
  _objc_release(puStack_d0);
  puVar1 = puStack_d8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return puVar9;
  }
  ___stack_chk_fail();
  ppuVar10 = &puStack_150;
  pcStack_128 = FUN_108e4a730;
  puStack_140 = puVar6;
  puStack_138 = puVar7;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar12);
  puStack_148 = PTR_PTR_1126feb58;
  puStack_150 = puVar1;
  _objc_msgSendSuper2(&puStack_150,PTR_s_init_1125d9248);
  if (ppuVar10 != (undefined **)0x0) {
    _objc_retain(puVar12);
    uVar11 = *(undefined8 *)((long)ppuVar10 + 8);
    *(undefined **)((long)ppuVar10 + 8) = puVar12;
    _objc_release(uVar11);
  }
  _objc_release(puVar12);
  return (undefined1 *)ppuVar10;
}



/* Entry: 108e4a730; end: 108e4a7a3; -[SCCaptionGrapheneLoggerImpl initWithGrapheneRegistry:] */

undefined1 * FUN_108e4a730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126feb58;
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



/* Entry: 108e4a7a4; end: 108e4a85b; -[SCCaptionGrapheneLoggerImpl logCaptionFontLoadSuccess:] */

void FUN_108e4a7a4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126dc288;
  func_0x00010bf2ff60(PTR_PTR_1126dc288);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf30000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108e4a85c; end: 108e4a913; -[SCCaptionGrapheneLoggerImpl logCaptionFontURLStringParseValid:] */

void FUN_108e4a85c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126dc288;
  func_0x00010bf2ffa0(PTR_PTR_1126dc288);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf30000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108e4a914; end: 108e4a9cb; -[SCCaptionGrapheneLoggerImpl logCaptionFontDownloadSuccess:] */

void FUN_108e4a914(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126dc288;
  func_0x00010bf2ff40(PTR_PTR_1126dc288);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf30000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108e4a9cc; end: 108e4aa4f; -[SCCaptionGrapheneLoggerImpl logCaptionStyleLoadCount:] */

void FUN_108e4a9cc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126dc288;
  func_0x00010bf304a0(PTR_PTR_1126dc288);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf30000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e4aa50; end: 108e4ab07; -[SCCaptionGrapheneLoggerImpl logCaptionCarouselRemoteStyleLoadSuccess:] */

void FUN_108e4aa50(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126dc288;
  func_0x00010bf2fcc0(PTR_PTR_1126dc288);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf30000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108e4ab08; end: 108e4abbf; -[SCCaptionGrapheneLoggerImpl logCaptionFontSource:] */

void FUN_108e4ab08(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c3cc8;
  func_0x00010bfb40a0(PTR_PTR_1126c3cc8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c242680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108e4abc0; end: 108e4ac4b; -[SCCaptionGrapheneLoggerImpl logCaptionFontLoadTime:] */

void FUN_108e4abc0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c3cc8;
  func_0x00010bf2ff80(PTR_PTR_1126c3cc8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c242680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e4ac4c; end: 108e4acff; -[SCCaptionGrapheneLoggerImpl logCaptionInvalidContentMedia:] */

void FUN_108e4ac4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126dc288;
  _objc_retain(param_3);
  func_0x00010bf2ff20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf30000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108e4ad00; end: 108e4ad0b; -[SCCaptionGrapheneLoggerImpl .cxx_destruct] */

void FUN_108e4ad00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e4ad0c; end: 108e4ad3b;  */

void FUN_108e4ad0c(void)

{
  _objc_alloc(PTR_PTR_1126dbfd0);
  func_0x00010c0184a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e4ad3c; end: 108e4ad73; -[SCCaptionMetricsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4ad3c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277c4fc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277c4f8);
  return;
}



/* Entry: 108e4ad74; end: 108e4ad9f; +[SCGrapheneCaptionMetric captionFontLoad] */

void FUN_108e4ad74(void)

{
  _objc_alloc(PTR_PTR_1126dc288);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e4ada0; end: 108e4adcb; +[SCGrapheneCaptionMetric captionFontUrlParse] */

void FUN_108e4ada0(void)

{
  _objc_alloc(PTR_PTR_1126dc288);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e4adcc; end: 108e4adf7; +[SCGrapheneCaptionMetric captionFontDownload] */

void FUN_108e4adcc(void)

{
  _objc_alloc(PTR_PTR_1126dc288);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e4adf8; end: 108e4ae23; +[SCGrapheneCaptionMetric captionStyleLoadCount] */

void FUN_108e4adf8(void)

{
  _objc_alloc(PTR_PTR_1126dc288);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e4ae24; end: 108e4ae4f; +[SCGrapheneCaptionMetric captionCarouselNonStaticLoad] */

void FUN_108e4ae24(void)

{
  _objc_alloc(PTR_PTR_1126dc288);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e4ae50; end: 108e4ae7b; +[SCGrapheneCaptionMetric captionFontDataMissing] */

void FUN_108e4ae50(void)

{
  _objc_alloc(PTR_PTR_1126dc288);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e4ae7c; end: 108e4af1b; -[SCGrapheneCaptionMetric description] */

void FUN_108e4ae7c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2a6f8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e2a6f8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126feb60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 108e4af1c; end: 108e4b08f; -[SCGrapheneRegistry captionGraphene] */

void FUN_108e4af1c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108e4afa4;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam000000011372ea30 != -1) {
    func_0x000107c27d9c(0x11372ea30,&puStack_48);
  }
  uVar1 = uRam000000011372ea28;
  _objc_retain(uRam000000011372ea28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e4b090; end: 108e4b097; -[SCCaptionMetricsServices captionLogger] */

undefined8 FUN_108e4b090(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e4b098; end: 108e4b0a3; -[SCCaptionMetricsServices .cxx_destruct] */

void FUN_108e4b098(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e4b0a4; end: 108e4b1bb;  */

void FUN_108e4b0a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain();
  func_0x00010bf09f00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c2a2c20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf01f00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf17720();
  lVar5 = param_1;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar2 != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110f27438);
  }
  if (lVar4 != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110f27498);
  }
  if (lVar5 != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110f27418);
  }
  if (lVar3 != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110f274b8);
  }
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e4b1bc; end: 108e4b3fb;  */

undefined1 * FUN_108e4b1bc(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_98;
  long lStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  long lStack_60;
  long lStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c2a2c20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf01f00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf17720();
  lVar5 = param_1;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar2 != 0) {
    ppuStack_68 = &PTR____CFConstantStringClassReference_110f27438;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_60 = lVar2;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar6;
    func_0x00010befa120(puVar1);
    _objc_release(puVar6);
  }
  if (lVar4 != 0) {
    ppuStack_78 = &PTR____CFConstantStringClassReference_110f27498;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar6;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar7;
    func_0x00010befa120(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  if (lVar5 != 0) {
    ppuStack_88 = &PTR____CFConstantStringClassReference_110f27418;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_80 = lVar5;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar6;
    func_0x00010befa120(puVar1);
    _objc_release(puVar6);
  }
  if (lVar3 != 0) {
    ppuStack_98 = &PTR____CFConstantStringClassReference_110f274b8;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_90 = lVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar6;
    func_0x00010befa120(puVar1);
    _objc_release(puVar6);
  }
  _objc_release(lVar5);
  _objc_release(lVar3);
  lVar3 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  plVar8 = &lStack_d0;
  pcStack_a8 = FUN_108e4b3fc;
  lStack_c0 = lVar2;
  puStack_b8 = puVar1;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  puStack_c8 = PTR_PTR_1126feb70;
  lStack_d0 = lVar3;
  _objc_msgSendSuper2(&lStack_d0,PTR_s_init_1125d9248);
  if (plVar8 != (long *)0x0) {
    _objc_retain(param_3);
    uVar9 = *(undefined8 *)((long)plVar8 + 8);
    *(undefined **)((long)plVar8 + 8) = param_3;
    _objc_release(uVar9);
  }
  _objc_release(param_3);
  return (undefined1 *)plVar8;
}



/* Entry: 108e4b3fc; end: 108e4b46f; -[SCSnapEditorFilterDataProviderServices initWithFilterDataProvider:] */

undefined1 * FUN_108e4b3fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126feb70;
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



/* Entry: 108e4b470; end: 108e4b477; -[SCSnapEditorFilterDataProviderServices filterDataProvider] */

undefined8 FUN_108e4b470(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e4b478; end: 108e4b483; -[SCSnapEditorFilterDataProviderServices .cxx_destruct] */

void FUN_108e4b478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e4b484; end: 108e4b547; -[SCPreviewFilterInfo initWithCoder:] */

undefined1 * FUN_108e4b484(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126feb78;
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
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e4b548; end: 108e4b5fb; -[SCPreviewFilterInfo initWithId:type:filterValue:] */

undefined1 *
FUN_108e4b548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126feb78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e4b5fc; end: 108e4b61f; -[SCPreviewFilterInfo copyWithZone:] */

undefined8 FUN_108e4b5fc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e4b620; end: 108e4b693; -[SCPreviewFilterInfo encodeWithCoder:] */

void FUN_108e4b620(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e77bb8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e2dc78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110efb8f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e4b694; end: 108e4b70b; -[SCPreviewFilterInfo hash] */

undefined8 * FUN_108e4b694(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108e4b79c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108e4b7a8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_108e4b7a8;
        }
        goto LAB_108e4b79c;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108e4b7a8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108e4b70c; end: 108e4b7c3; -[SCPreviewFilterInfo isEqual:] */

long FUN_108e4b70c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108e4b79c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e4b7a8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_108e4b7a8;
        }
        goto LAB_108e4b79c;
      }
    }
    lVar3 = 0;
  }
LAB_108e4b7a8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108e4b7c4; end: 108e4b7cb; -[SCPreviewFilterInfo id] */

undefined8 FUN_108e4b7c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e4b7cc; end: 108e4b7d3; -[SCPreviewFilterInfo type] */

undefined8 FUN_108e4b7cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e4b7d4; end: 108e4b7db; -[SCPreviewFilterInfo filterValue] */

undefined8 FUN_108e4b7d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108e4b7dc; end: 108e4b80b; -[SCPreviewFilterInfo .cxx_destruct] */

void FUN_108e4b7dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e4b80c; end: 108e4b8f3; -[SCVenueFilterInfo initWithName:venueId:locality:yOffset:] */

undefined1 *
FUN_108e4b80c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126feb80;
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108e4b8f4; end: 108e4b917; -[SCVenueFilterInfo copyWithZone:] */

undefined8 FUN_108e4b8f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e4b918; end: 108e4b9bb; -[SCVenueFilterInfo hash] */

undefined8 * FUN_108e4b918(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar4 = &uStack_48;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar4,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_108e4ba88:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108e4ba94;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      dVar10 = ABS((double)puVar4[4] - (double)param_3[4]);
      dVar9 = ABS((double)puVar4[4] + (double)param_3[4]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (((bVar1) &&
          ((lVar6 = puVar4[1], lVar6 == param_3[1] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         ((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = (undefined8 *)puVar4[3];
        if (puVar8 != (undefined8 *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_108e4ba94;
        }
        goto LAB_108e4ba88;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_108e4ba94:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 108e4b9bc; end: 108e4baaf; -[SCVenueFilterInfo isEqual:] */

long FUN_108e4b9bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108e4ba88:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e4ba94;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
      dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (((bVar1) &&
          ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_108e4ba94;
        }
        goto LAB_108e4ba88;
      }
    }
    lVar4 = 0;
  }
LAB_108e4ba94:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 108e4bab0; end: 108e4bab7; -[SCVenueFilterInfo name] */

undefined8 FUN_108e4bab0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e4bab8; end: 108e4babf; -[SCVenueFilterInfo venueId] */

undefined8 FUN_108e4bab8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


