/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1092084e8; end: 10920852f; -[SCMapTrayObserver dealloc] */

void FUN_1092084e8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 8));
  puStack_28 = PTR_PTR_112701048;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 109208530; end: 109208537; -[SCMapTrayObserver displayLink] */

undefined8 FUN_109208530(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109208538; end: 10920854f; -[SCMapTrayObserver trayView] */

void FUN_109208538(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109208550; end: 109208557; -[SCMapTrayObserver heightChanged] */

undefined8 FUN_109208550(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109208558; end: 10920855f; -[SCMapTrayObserver setHeightChanged:] */

void FUN_109208558(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 109208560; end: 109208597; -[SCMapTrayObserver .cxx_destruct] */

void FUN_109208560(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109208598; end: 1092085ff; -[SCMapTrayTransparentView hitTest:withEvent:] */

void FUN_109208598(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 **ppuVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar2 = &puStack_30;
  puStack_28 = PTR_PTR_112701050;
  puStack_30 = param_1;
  _objc_msgSendSuper2(&puStack_30,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (undefined1 *)0x0;
  if (ppuVar2 != (undefined1 **)param_1) {
    puVar1 = (undefined1 *)ppuVar2;
  }
  _objc_retain(puVar1);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109208600; end: 109208673; +[SCMapTrayInteraction didChangeToPositionWithMapTrayInteractionController:position:] */

void FUN_109208600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126dde90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x30) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 109208674; end: 1092086eb; +[SCMapTrayInteraction willChangeToPositionWithMapTrayInteractionController:position:interactionMethod:] */

void FUN_109208674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126dde90;
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
  *(undefined8 *)(puVar2 + 0x20) = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1092086ec; end: 10920870f; -[SCMapTrayInteraction copyWithZone:] */

undefined8 FUN_1092086ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109208710; end: 109208793; -[SCMapTrayInteraction hash] */

void FUN_109208710(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  puVar3 = &uStack_58;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_112701058;
  puStack_90 = puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109208794; end: 1092087d7; -[SCMapTrayInteraction internalInit] */

void FUN_109208794(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112701058;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1092087d8; end: 1092088bf; -[SCMapTrayInteraction isEqual:] */

long FUN_1092087d8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_109208898:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1092088a4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
          (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) &&
       (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x28);
        if (lVar3 != *(long *)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_1092088a4;
        }
        goto LAB_109208898;
      }
    }
    lVar3 = 0;
  }
LAB_1092088a4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1092088c0; end: 10920894b; -[SCMapTrayInteraction matchWillChangeToPosition:didChangeToPosition:] */

void FUN_1092088c0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10920894c; end: 10920897b; -[SCMapTrayInteraction .cxx_destruct] */

void FUN_10920894c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10920897c; end: 109208b0b; -[SCMapTrayConfiguration initWithPossibleInteractivePositions:possibleScrollablePositions:startingPosition:backgroundStyle:backgroundColor:gripperColor:gripperBackgroundColor:updateGripperOnScroll:gripperOverlapsContent:gripperHasDropShadowOnScroll:decelerationRate:cornerRadius:bottomInset:shouldAvoidKeyboard:hideExistingTray:shadeBackground:isNonRemovable:showTrayBottomShadow:] */

undefined8 *
FUN_10920897c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined4 param_13,undefined4 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_88 = PTR_PTR_112701060;
  puVar1 = &uStack_90;
  uStack_90 = param_4;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = param_6;
    puVar1[3] = param_7;
    puVar1[4] = param_8;
    puVar1[5] = param_9;
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
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_13;
    *(undefined1 *)((long)puVar1 + 9) = param_13._1_1_;
    *(undefined1 *)((long)puVar1 + 10) = param_13._2_1_;
    puVar1[9] = param_1;
    puVar1[10] = param_2;
    puVar1[0xb] = param_3;
    *(undefined1 *)((long)puVar1 + 0xb) = param_13._3_1_;
    *(undefined1 *)((long)puVar1 + 0xc) = (undefined1)param_14;
    *(undefined1 *)((long)puVar1 + 0xd) = param_14._1_1_;
    *(undefined1 *)((long)puVar1 + 0xe) = param_14._2_1_;
    *(undefined1 *)((long)puVar1 + 0xf) = param_14._3_1_;
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  return puVar1;
}



/* Entry: 109208b0c; end: 109208b2f; -[SCMapTrayConfiguration copyWithZone:] */

undefined8 FUN_109208b0c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109208b30; end: 109208c63; -[SCMapTrayConfiguration hash] */

undefined8 * FUN_109208b30(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ushort uVar9;
  undefined4 uVar10;
  ulong uVar11;
  double dVar12;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  long lStack_28;
  
  puVar4 = &uStack_c0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_b8 = *(undefined8 *)(param_1 + 0x18);
  uStack_c0 = *(undefined8 *)(param_1 + 0x10);
  uStack_a8 = *(undefined8 *)(param_1 + 0x28);
  uStack_b0 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_98 = uVar3;
  func_0x00010bfde980();
  uStack_88 = (ulong)*(byte *)(param_1 + 8);
  uStack_80 = (ulong)*(byte *)(param_1 + 9);
  uStack_78 = (ulong)*(byte *)(param_1 + 10);
  uVar7 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar11 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_70 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar7 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
  uStack_68 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_60 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar10 = *(undefined4 *)(param_1 + 0xb);
  uVar7 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar10 >> 0x18),
                                          (uint6)(byte)((uint)uVar10 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar10) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar10 >> 8),(short)uVar7);
  uVar11 = CONCAT44((int)(uVar7 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar7 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar7 >> 0x20),(int)uVar11)) &
          0xff01ff01ffffffff;
  uVar9 = (ushort)(uVar7 >> 0x30);
  uStack_58 = (ulong)uVar1 & 0xff;
  uStack_50 = uVar7 >> 0x10 & 0xff;
  uStack_48 = (ulong)CONCAT24(uVar9,(uint)(ushort)(uVar7 >> 0x20)) & 0xffffffff;
  uStack_40 = (ulong)uVar9;
  uStack_38 = (ulong)*(byte *)(param_1 + 0xf);
  uStack_90 = uVar2;
  func_0x000107c3191c(&uStack_c0,0x12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_109208e64:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_109208e70;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((((ulong)puVar5 & 1) != 0) &&
         ((((*(long *)((long)puVar4 + 0x10) == *(long *)(param_3 + 0x10) &&
            (*(long *)((long)puVar4 + 0x18) == *(long *)(param_3 + 0x18))) &&
           (*(long *)((long)puVar4 + 0x20) == *(long *)(param_3 + 0x20))) &&
          ((*(long *)((long)puVar4 + 0x28) == *(long *)(param_3 + 0x28) &&
           (*(char *)((long)puVar4 + 8) == param_3[8])))))) &&
        (*(char *)((long)puVar4 + 9) == param_3[9])) &&
       (((*(char *)((long)puVar4 + 10) == param_3[10] &&
         (*(char *)((long)puVar4 + 0xb) == param_3[0xb])) &&
        ((*(char *)((long)puVar4 + 0xc) == param_3[0xc] &&
         (((*(char *)((long)puVar4 + 0xd) == param_3[0xd] &&
           (*(char *)((long)puVar4 + 0xe) == param_3[0xe])) &&
          (*(char *)((long)puVar4 + 0xf) == param_3[0xf])))))))) {
      dVar12 = ABS(*(double *)((long)puVar4 + 0x48) - *(double *)(param_3 + 0x48));
      if ((dVar12 < 2.2250738585072014e-308) ||
         (dVar12 < ABS(*(double *)((long)puVar4 + 0x48) + *(double *)(param_3 + 0x48)) *
                   2.220446049250313e-16)) {
        dVar12 = ABS(*(double *)((long)puVar4 + 0x50) - *(double *)(param_3 + 0x50));
        if ((dVar12 < 2.2250738585072014e-308) ||
           (dVar12 < ABS(*(double *)((long)puVar4 + 0x50) + *(double *)(param_3 + 0x50)) *
                     2.220446049250313e-16)) {
          dVar12 = ABS(*(double *)((long)puVar4 + 0x58) - *(double *)(param_3 + 0x58));
          if ((((dVar12 < 2.2250738585072014e-308) ||
               (dVar12 < ABS(*(double *)((long)puVar4 + 0x58) + *(double *)(param_3 + 0x58)) *
                         2.220446049250313e-16)) &&
              ((lVar6 = *(long *)((long)puVar4 + 0x30), lVar6 == *(long *)(param_3 + 0x30) ||
               (func_0x00010c071c60(), (int)lVar6 != 0)))) &&
             ((lVar6 = *(long *)((long)puVar4 + 0x38), lVar6 == *(long *)(param_3 + 0x38) ||
              (func_0x00010c071c60(), (int)lVar6 != 0)))) {
            puVar8 = *(undefined1 **)((long)puVar4 + 0x40);
            if (puVar8 != *(undefined1 **)(param_3 + 0x40)) {
              func_0x00010c071c60();
              goto LAB_109208e70;
            }
            goto LAB_109208e64;
          }
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_109208e70:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 109208c64; end: 109208e8b; -[SCMapTrayConfiguration isEqual:] */

long FUN_109208c64(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_109208e64:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_109208e70;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
            (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
           (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
          ((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
           (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
       (((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
         (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))) &&
        ((*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc) &&
         (((*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd) &&
           (*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe))) &&
          (*(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf))))))))) {
      dVar4 = ABS(*(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x48));
      if ((dVar4 < 2.2250738585072014e-308) ||
         (dVar4 < ABS(*(double *)(param_1 + 0x48) + *(double *)(param_3 + 0x48)) *
                  2.220446049250313e-16)) {
        dVar4 = ABS(*(double *)(param_1 + 0x50) - *(double *)(param_3 + 0x50));
        if ((dVar4 < 2.2250738585072014e-308) ||
           (dVar4 < ABS(*(double *)(param_1 + 0x50) + *(double *)(param_3 + 0x50)) *
                    2.220446049250313e-16)) {
          dVar4 = ABS(*(double *)(param_1 + 0x58) - *(double *)(param_3 + 0x58));
          if ((((dVar4 < 2.2250738585072014e-308) ||
               (dVar4 < ABS(*(double *)(param_1 + 0x58) + *(double *)(param_3 + 0x58)) *
                        2.220446049250313e-16)) &&
              ((lVar3 = *(long *)(param_1 + 0x30), lVar3 == *(long *)(param_3 + 0x30) ||
               (func_0x00010c071c60(), (int)lVar3 != 0)))) &&
             ((lVar3 = *(long *)(param_1 + 0x38), lVar3 == *(long *)(param_3 + 0x38) ||
              (func_0x00010c071c60(), (int)lVar3 != 0)))) {
            lVar3 = *(long *)(param_1 + 0x40);
            if (lVar3 != *(long *)(param_3 + 0x40)) {
              func_0x00010c071c60();
              goto LAB_109208e70;
            }
            goto LAB_109208e64;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_109208e70:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 109208e8c; end: 109208e93; -[SCMapTrayConfiguration possibleInteractivePositions] */

undefined8 FUN_109208e8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109208e94; end: 109208e9b; -[SCMapTrayConfiguration possibleScrollablePositions] */

undefined8 FUN_109208e94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109208e9c; end: 109208ea3; -[SCMapTrayConfiguration startingPosition] */

undefined8 FUN_109208e9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 109208ea4; end: 109208eab; -[SCMapTrayConfiguration backgroundStyle] */

undefined8 FUN_109208ea4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 109208eac; end: 109208eb3; -[SCMapTrayConfiguration backgroundColor] */

undefined8 FUN_109208eac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 109208eb4; end: 109208ebb; -[SCMapTrayConfiguration gripperColor] */

undefined8 FUN_109208eb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 109208ebc; end: 109208ec3; -[SCMapTrayConfiguration gripperBackgroundColor] */

undefined8 FUN_109208ebc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 109208ec4; end: 109208ecb; -[SCMapTrayConfiguration updateGripperOnScroll] */

undefined1 FUN_109208ec4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 109208ecc; end: 109208ed3; -[SCMapTrayConfiguration gripperOverlapsContent] */

undefined1 FUN_109208ecc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 109208ed4; end: 109208edb; -[SCMapTrayConfiguration gripperHasDropShadowOnScroll] */

undefined1 FUN_109208ed4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 109208edc; end: 109208ee3; -[SCMapTrayConfiguration decelerationRate] */

undefined8 FUN_109208edc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 109208ee4; end: 109208eeb; -[SCMapTrayConfiguration cornerRadius] */

undefined8 FUN_109208ee4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 109208eec; end: 109208ef3; -[SCMapTrayConfiguration bottomInset] */

undefined8 FUN_109208eec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 109208ef4; end: 109208efb; -[SCMapTrayConfiguration shouldAvoidKeyboard] */

undefined1 FUN_109208ef4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 109208efc; end: 109208f03; -[SCMapTrayConfiguration hideExistingTray] */

undefined1 FUN_109208efc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 109208f04; end: 109208f0b; -[SCMapTrayConfiguration shadeBackground] */

undefined1 FUN_109208f04(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 109208f0c; end: 109208f13; -[SCMapTrayConfiguration isNonRemovable] */

undefined1 FUN_109208f0c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 109208f14; end: 109208f1b; -[SCMapTrayConfiguration showTrayBottomShadow] */

undefined1 FUN_109208f14(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 109208f1c; end: 109208f57; -[SCMapTrayConfiguration .cxx_destruct] */

void FUN_109208f1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 109208f58; end: 109209053; -[SCSnapSegmentCell initWithFrame:] */

undefined1 * FUN_109208f58(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  puStack_38 = PTR_PTR_112701068;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined1 *)puVar2;
    func_0x00010bf4dce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4020000000000000);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar1 = PTR_PTR_1126b08d8;
    puVar3 = (undefined1 *)puVar2;
    func_0x00010bf4dce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c30a28(0x4020000000000000,0x3fc3333333333333,
                        *(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar1,puVar3,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 109209054; end: 109209d8f; -[SCSnapSegmentExpandedCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_109209054(undefined *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined *unaff_x20;
  undefined *unaff_x21;
  long lVar10;
  long lVar11;
  undefined8 unaff_x22;
  long lVar12;
  undefined8 unaff_x23;
  undefined *unaff_x24;
  long lVar13;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long lVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  double in_d3;
  double unaff_d8;
  undefined8 uVar18;
  double unaff_d9;
  undefined8 unaff_d10;
  double dVar19;
  double unaff_d11;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  double dStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1a8 [24];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  double dStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  double dStack_150;
  undefined8 uStack_148;
  double dStack_140;
  double dStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c0 = PTR_PTR_112701070;
  ppuVar9 = &puStack_c8;
  puStack_c8 = param_1;
  _objc_msgSendSuper2(ppuVar9,PTR_s_initWithFrame__1125e2948);
  puVar2 = (undefined *)0x0;
  if (ppuVar9 != (undefined **)0x0) {
    ppuVar6 = ppuVar9;
    func_0x00010c08c0e0(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(ppuVar6);
    *(undefined1 *)((long)ppuVar9 + (long)_DAT_112783a60) = 1;
    *(undefined1 *)((long)ppuVar9 + (long)_DAT_112783a64) = 0;
    lVar13 = (long)_DAT_112783a68;
    *(undefined8 *)((long)ppuVar9 + lVar13) = 0x4020000000000000;
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bf20c00(ppuVar9);
    func_0x00010c013de0();
    lVar10 = (long)_DAT_112783a6c;
    uVar8 = *(undefined8 *)((long)ppuVar9 + lVar10);
    *(undefined **)((long)ppuVar9 + lVar10) = puVar2;
    _objc_release(uVar8);
    uVar18 = *(undefined8 *)((long)ppuVar9 + lVar13);
    uVar8 = *(undefined8 *)((long)ppuVar9 + lVar10);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(uVar18);
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)((long)ppuVar9 + lVar10);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar8);
    ppuVar6 = ppuVar9;
    func_0x00010bf4dce0(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    lStack_d0 = lVar10;
    func_0x00010befbb60();
    _objc_release(ppuVar6);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bf20c00(ppuVar9);
    func_0x00010c013de0();
    lVar14 = (long)_DAT_112783a70;
    uVar8 = *(undefined8 *)((long)ppuVar9 + lVar14);
    *(undefined **)((long)ppuVar9 + lVar14) = puVar2;
    _objc_release(uVar8);
    uVar18 = *(undefined8 *)((long)ppuVar9 + lVar13);
    uVar8 = *(undefined8 *)((long)ppuVar9 + lVar14);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(uVar18);
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)((long)ppuVar9 + lVar14);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)((long)ppuVar9 + lVar14);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x4008000000000000);
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar8 = *(undefined8 *)((long)ppuVar9 + lVar14);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar8);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,0,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)ppuVar9 + lVar14));
    _objc_release(puVar2);
    ppuVar6 = ppuVar9;
    func_0x00010bf4dce0(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(ppuVar6);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bf20c00(ppuVar9);
    func_0x00010c013de0();
    lVar11 = (long)_DAT_112783a74;
    uVar8 = *(undefined8 *)((long)ppuVar9 + lVar11);
    *(undefined **)((long)ppuVar9 + lVar11) = puVar2;
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,0x3fd999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)ppuVar9 + lVar11));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bfb68e0(*(undefined8 *)((long)ppuVar9 + lVar14));
    func_0x00010c013de0();
    lVar12 = (long)_DAT_112783a78;
    uVar8 = *(undefined8 *)((long)ppuVar9 + lVar12);
    *(undefined **)((long)ppuVar9 + lVar12) = puVar2;
    _objc_release(uVar8);
    uVar18 = *(undefined8 *)((long)ppuVar9 + lVar13);
    uVar8 = *(undefined8 *)((long)ppuVar9 + lVar12);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(uVar18);
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)((long)ppuVar9 + lVar12);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)ppuVar9 + lVar12));
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)((long)ppuVar9 + lVar11));
    func_0x00010c1c2ca0(*(undefined8 *)((long)ppuVar9 + lVar10));
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bf20c00(ppuVar9);
    func_0x00010c013de0();
    lVar10 = (long)_DAT_112783a7c;
    uVar8 = *(undefined8 *)((long)ppuVar9 + lVar10);
    *(undefined **)((long)ppuVar9 + lVar10) = puVar2;
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)ppuVar9 + lVar10));
    _objc_release(puVar2);
    uVar18 = *(undefined8 *)((long)ppuVar9 + lVar13);
    uVar8 = *(undefined8 *)((long)ppuVar9 + lVar10);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(uVar18);
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)((long)ppuVar9 + lVar10);
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar8);
    ppuVar6 = ppuVar9;
    func_0x00010bf4dce0(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fa0();
    _objc_release(ppuVar6);
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar10 = (long)_DAT_112783a80;
    uVar8 = *(undefined8 *)((long)ppuVar9 + lVar10);
    *(undefined **)((long)ppuVar9 + lVar10) = puVar2;
    _objc_release(uVar8);
    func_0x00010c1c8340(0,*(undefined8 *)((long)ppuVar9 + lVar10));
    func_0x00010c18b5e0(*(undefined8 *)((long)ppuVar9 + lVar10));
    func_0x00010bef9040(ppuVar9);
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar10 = (long)_DAT_112783a84;
    uVar8 = *(undefined8 *)((long)ppuVar9 + lVar10);
    *(undefined **)((long)ppuVar9 + lVar10) = puVar2;
    _objc_release(uVar8);
    dVar15 = 0.0;
    func_0x00010c1c8340(0,*(undefined8 *)((long)ppuVar9 + lVar10));
    func_0x00010c18b5e0(*(undefined8 *)((long)ppuVar9 + lVar10));
    func_0x00010bef9040(ppuVar9);
    puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_alloc();
    func_0x00010c050900();
    lVar10 = (long)_DAT_112783a88;
    uVar8 = *(undefined8 *)((long)ppuVar9 + lVar10);
    *(undefined **)((long)ppuVar9 + lVar10) = puVar2;
    _objc_release(uVar8);
    func_0x00010c18b5e0(*(undefined8 *)((long)ppuVar9 + lVar10));
    func_0x00010c195460(*(undefined8 *)((long)ppuVar9 + lVar10));
    func_0x00010bef9040(ppuVar9);
    puVar2 = PTR__OBJC_CLASS___CALayer_1126b1750;
    _objc_alloc_init();
    lVar10 = (long)_DAT_112783a8c;
    uVar8 = *(undefined8 *)((long)ppuVar9 + lVar10);
    *(undefined **)((long)ppuVar9 + lVar10) = puVar2;
    _objc_release(uVar8);
    func_0x00010c1a7f60(*(undefined8 *)((long)ppuVar9 + lVar10));
    ppuVar6 = ppuVar9;
    func_0x00010bf4dce0(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    func_0x00010c19f0e0(0,(dVar15 + -74.0) * 0.5,0x4014000000000000,0x4052800000000000,
                        *(undefined8 *)((long)ppuVar9 + lVar10));
    _objc_release(ppuVar6);
    func_0x00010c1842e0(0x4004000000000000,*(undefined8 *)((long)ppuVar9 + lVar10));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c16e440(*(undefined8 *)((long)ppuVar9 + lVar10));
    _objc_release(puVar2);
    func_0x00010c207c40(0x40000000,*(undefined8 *)((long)ppuVar9 + lVar10));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c1fe740(*(undefined8 *)((long)ppuVar9 + lVar10));
    _objc_release(puVar2);
    func_0x00010c1fe840(0x4008000000000000,*(undefined8 *)((long)ppuVar9 + lVar10));
    func_0x00010c1fe800(0x3e800000,*(undefined8 *)((long)ppuVar9 + lVar10));
    func_0x00010c1fe7a0(0,0,*(undefined8 *)((long)ppuVar9 + lVar10));
    ppuVar3 = ppuVar9;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(ppuVar6);
    _objc_release(ppuVar3);
    unaff_x20 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc();
    unaff_d8 = *(double *)PTR__CGPointZero_110347540;
    unaff_d9 = *(double *)(PTR__CGPointZero_110347540 + 8);
    unaff_d10 = 0x4044000000000000;
    dVar15 = unaff_d8;
    dVar19 = unaff_d9;
    func_0x00010c013de0(unaff_d8,unaff_d9,0x4044000000000000,0x4044000000000000);
    lVar10 = (long)_DAT_112783a90;
    uVar8 = *(undefined8 *)((long)ppuVar9 + lVar10);
    *(undefined **)((long)ppuVar9 + lVar10) = puVar2;
    _objc_release(uVar8);
    func_0x00010c1a9fc0(*(undefined8 *)((long)ppuVar9 + lVar10));
    uVar8 = *(undefined8 *)((long)ppuVar9 + lVar10);
    func_0x00010c23d0a0(unaff_x20);
    dVar15 = 40.0 - dVar15;
    unaff_d11 = dVar15 * 0.5;
    func_0x00010c23d0a0(unaff_x20);
    func_0x00010c23d0a0(unaff_x20);
    dVar16 = 40.0 - dVar19;
    func_0x00010c23d0a0(unaff_x20);
    func_0x00010c1aa240(unaff_d11,(40.0 - dVar15) * 0.5,dVar16 * 0.5,(40.0 - dVar19) * 0.5,uVar8);
    func_0x00010befbd60(*(undefined8 *)((long)ppuVar9 + lVar10));
    ppuVar6 = ppuVar9;
    func_0x00010bf4dce0(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(ppuVar6);
    func_0x00010c1af000(*(undefined8 *)((long)ppuVar9 + lVar10));
    ppuVar6 = &PTR____CFConstantStringClassReference_110db18b8;
    ppuVar3 = ppuVar6;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db18b8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)((long)ppuVar9 + lVar10));
    _objc_release(ppuVar3);
    func_0x00010c160fc0(*(undefined8 *)((long)ppuVar9 + lVar10));
    func_0x00010c161080(*(undefined8 *)((long)ppuVar9 + lVar10));
    *(undefined1 *)((long)ppuVar9 + (long)_DAT_112783a94) = 1;
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIButton_1126aec48;
    puStack_d8 = puVar2;
    _objc_alloc();
    func_0x00010c013de0(unaff_d8,unaff_d9,0x4044000000000000,0x4044000000000000);
    lVar10 = (long)_DAT_112783a98;
    uVar8 = *(undefined8 *)((long)ppuVar9 + lVar10);
    *(undefined **)((long)ppuVar9 + lVar10) = puVar4;
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)((long)ppuVar9 + lVar10);
    func_0x00010bfe90c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182220();
    _objc_release(uVar8);
    func_0x00010c1a9fc0(*(undefined8 *)((long)ppuVar9 + lVar10));
    in_d3 = 2.0;
    func_0x00010c1aa240(0x4000000000000000,0x4000000000000000,0x4000000000000000,0x4000000000000000,
                        *(undefined8 *)((long)ppuVar9 + lVar10));
    func_0x00010befbd60(*(undefined8 *)((long)ppuVar9 + lVar10));
    func_0x00010c1af000(*(undefined8 *)((long)ppuVar9 + lVar10));
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db18b8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)((long)ppuVar9 + lVar10));
    _objc_release(ppuVar6);
    func_0x00010c160fc0(*(undefined8 *)((long)ppuVar9 + lVar10));
    func_0x00010c161080(*(undefined8 *)((long)ppuVar9 + lVar10));
    ppuVar6 = ppuVar9;
    func_0x00010bf4dce0(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(ppuVar6);
    *(undefined1 *)((long)ppuVar9 + (long)_DAT_112783a9c) = 1;
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar10 = (long)_DAT_112783aa0;
    uVar8 = *(undefined8 *)((long)ppuVar9 + lVar10);
    *(undefined **)((long)ppuVar9 + lVar10) = puVar2;
    _objc_release(uVar8);
    _objc_release(puVar4);
    func_0x00010c1af000(*(undefined8 *)((long)ppuVar9 + lVar10));
    func_0x00010c160fc0(*(undefined8 *)((long)ppuVar9 + lVar10));
    ppuVar6 = ppuVar9;
    func_0x00010bf4dce0(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(ppuVar6);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar10 = (long)_DAT_112783aa4;
    uVar8 = *(undefined8 *)((long)ppuVar9 + lVar10);
    *(undefined **)((long)ppuVar9 + lVar10) = puVar2;
    _objc_release(uVar8);
    _objc_release(puVar4);
    func_0x00010c1af000(*(undefined8 *)((long)ppuVar9 + lVar10));
    func_0x00010c160fc0(*(undefined8 *)((long)ppuVar9 + lVar10));
    ppuVar6 = ppuVar9;
    func_0x00010bf4dce0(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(ppuVar6);
    func_0x00010c1af000(*(undefined8 *)((long)ppuVar9 + lStack_d0));
    puVar1 = (undefined8 *)((long)ppuVar9 + (long)_DAT_112783aa8);
    uVar17 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
    uVar18 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
    puVar1[1] = uVar17;
    *puVar1 = uVar18;
    uVar8 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
    puVar1[2] = uVar8;
    puVar1 = (undefined8 *)((long)ppuVar9 + (long)_DAT_112783aac);
    puVar1[1] = 0x100000001;
    *puVar1 = 2;
    puVar1[2] = 0;
    puVar1 = (undefined8 *)((long)ppuVar9 + (long)_DAT_112783ab0);
    puVar1[1] = uVar17;
    *puVar1 = uVar18;
    puVar1[2] = uVar8;
    puVar1 = (undefined8 *)((long)ppuVar9 + (long)_DAT_112783ab4);
    uVar8 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x20);
    puVar1[5] = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x28);
    puVar1[4] = uVar8;
    uVar17 = *(undefined8 *)PTR__kCMTimeRangeInvalid_110348660;
    uVar18 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
    uVar8 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
    puVar1[1] = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
    *puVar1 = uVar17;
    puVar1[3] = uVar18;
    puVar1[2] = uVar8;
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar10 = (long)_DAT_112783ab8;
    uVar8 = *(undefined8 *)((long)ppuVar9 + lVar10);
    *(undefined **)((long)ppuVar9 + lVar10) = puVar2;
    _objc_release(uVar8);
    _objc_release(puVar4);
    func_0x00010c219b60(*(undefined8 *)((long)ppuVar9 + lVar10));
    func_0x00010c1a7f60(*(undefined8 *)((long)ppuVar9 + lVar10));
    func_0x00010c1677c0(0,*(undefined8 *)((long)ppuVar9 + lVar10));
    func_0x00010befbb60(*(undefined8 *)((long)ppuVar9 + lVar14));
    unaff_x24 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    unaff_x22 = *(undefined8 *)((long)ppuVar9 + lVar10);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = *(undefined8 *)((long)ppuVar9 + lVar14);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = unaff_x22;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = unaff_x25;
    unaff_x26 = *(undefined8 *)((long)ppuVar9 + lVar10);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)((long)ppuVar9 + lVar14);
    func_0x00010bf348e0(uVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = unaff_x26;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_b0 = uVar8;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(unaff_x24);
    _objc_release(puVar2);
    _objc_release(uVar8);
    _objc_release(uVar18);
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    unaff_x21 = &DAT_112783a60;
    *(undefined1 *)((long)ppuVar9 + (long)_DAT_112783abc) = 0;
    puVar2 = PTR_PTR_1126d4260;
    func_0x00010c22dde0();
    *(char *)((long)ppuVar9 + (long)_DAT_112783ac0) = (char)puVar2;
    _objc_release(puStack_d8);
    puVar2 = unaff_x20;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return ppuVar9;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_109209d90;
  puStack_158 = PTR_PTR_112701070;
  ppuVar6 = &puStack_160;
  puStack_160 = puVar2;
  dStack_150 = unaff_d11;
  uStack_148 = unaff_d10;
  dStack_140 = unaff_d9;
  dStack_138 = unaff_d8;
  uStack_130 = unaff_x26;
  uStack_128 = unaff_x25;
  puStack_120 = unaff_x24;
  uStack_118 = unaff_x23;
  uStack_110 = unaff_x22;
  puStack_108 = unaff_x21;
  puStack_100 = unaff_x20;
  ppuStack_f8 = ppuVar9;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(ppuVar6,PTR_s_layoutSubviews_112600e60);
  if (*(int *)(puVar2 + _DAT_112783ac4) == 0) {
    puVar4 = puVar2;
    func_0x00010bf4dce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    lVar11 = (long)_DAT_112783a6c;
    func_0x00010c19f0e0(*(undefined8 *)(puVar2 + lVar11));
    _objc_release(puVar4);
    puVar4 = puVar2;
    func_0x00010bf4dce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c19f0e0(*(undefined8 *)(puVar2 + _DAT_112783a74));
    _objc_release(puVar4);
    puVar4 = puVar2;
    func_0x00010bf4dce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c19f0e0(*(undefined8 *)(puVar2 + _DAT_112783a7c));
    _objc_release(puVar4);
    puVar4 = puVar2;
    func_0x00010bf4dce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c19f0e0(*(undefined8 *)(puVar2 + _DAT_112783ac8));
    _objc_release(puVar4);
    lVar10 = 0x54;
    if (puVar2[_DAT_112783acc] == '\0') {
      lVar10 = 0x70;
    }
    puVar1 = (undefined8 *)(puVar2 + *(int *)(&DAT_112783a60 + lVar10));
    uStack_188 = puVar1[1];
    uStack_190 = *puVar1;
    uStack_178 = puVar1[3];
    uStack_180 = puVar1[2];
    uStack_168 = puVar1[5];
    dStack_170 = (double)puVar1[4];
    puVar4 = puVar2;
    func_0x00010c073120();
    if ((int)puVar4 != 0) {
      func_0x00010c12c960(*(undefined8 *)(puVar2 + _DAT_112783aa0));
      func_0x00010c12c960(*(undefined8 *)(puVar2 + _DAT_112783aa4));
      func_0x00010c195460(*(undefined8 *)(puVar2 + _DAT_112783a84));
    }
    puVar4 = puVar2;
    if (puVar2[_DAT_112783abc] == '\x01') {
      puVar5 = puVar2;
      func_0x00010bf4dce0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      lVar10 = (long)_DAT_112783aa0;
      dVar15 = 0.0;
      func_0x00010c17a6a0(0,in_d3 * 0.5,*(undefined8 *)(puVar2 + lVar10));
      _objc_release(puVar5);
      func_0x00010bf4dce0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetMaxX();
      puVar5 = puVar2;
      func_0x00010bf4dce0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      lVar12 = (long)_DAT_112783aa4;
      func_0x00010c17a6a0(dVar15,in_d3 * 0.5,*(undefined8 *)(puVar2 + lVar12));
      _objc_release(puVar5);
    }
    else {
      uStack_1d8 = uStack_188;
      uStack_1e0 = uStack_190;
      uStack_1d0 = uStack_180;
      uVar8 = uStack_190;
      func_0x00010bde9ea0(puVar2);
      puVar5 = puVar2;
      func_0x00010bf4dce0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      lVar10 = (long)_DAT_112783aa0;
      func_0x00010c17a6a0(uVar8,in_d3 * 0.5,*(undefined8 *)(puVar2 + lVar10));
      _objc_release(puVar5);
      uStack_1d8 = uStack_188;
      uStack_1e0 = uStack_190;
      uStack_1c8 = uStack_178;
      uStack_1d0 = uStack_180;
      uStack_1b8 = uStack_168;
      dStack_1c0 = dStack_170;
      dVar15 = dStack_170;
      _CMTimeRangeGetEnd(auStack_1a8,&uStack_1e0);
      func_0x00010bde9ea0(puVar2);
      func_0x00010bf4dce0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      lVar12 = (long)_DAT_112783aa4;
      func_0x00010c17a6a0(dVar15,in_d3 * 0.5,*(undefined8 *)(puVar2 + lVar12));
    }
    _objc_release(puVar4);
    func_0x00010bf345e0(*(undefined8 *)(puVar2 + lVar12));
    lVar13 = (long)_DAT_112783a90;
    func_0x00010c17a6a0(*(undefined8 *)(puVar2 + lVar13));
    puVar4 = puVar2 + _DAT_112783ad4;
    _objc_loadWeakRetained(puVar4);
    func_0x00010c242f40();
    func_0x00010c1a7f60(*(undefined8 *)(puVar2 + lVar13));
    _objc_release(puVar4);
    lVar13 = (long)_DAT_112783a98;
    func_0x00010c1a7f60(*(undefined8 *)(puVar2 + lVar13));
    func_0x00010bf345e0(*(undefined8 *)(puVar2 + lVar12));
    dVar15 = dVar15 + -8.0;
    uVar8 = 0x4024000000000000;
    func_0x00010c17a6a0(dVar15,0x4024000000000000,*(undefined8 *)(puVar2 + lVar13));
    func_0x00010bf345e0(*(undefined8 *)(puVar2 + lVar10));
    puVar4 = puVar2;
    dVar19 = dVar15;
    func_0x00010bf4dce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010bf345e0(*(undefined8 *)(puVar2 + lVar12));
    dVar16 = dVar19;
    func_0x00010bf345e0(*(undefined8 *)(puVar2 + lVar10));
    dVar19 = dVar19 - dVar16;
    puVar5 = puVar2;
    func_0x00010bf4dce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    lVar10 = (long)_DAT_112783a70;
    func_0x00010c19f0e0(dVar15,uVar8,dVar19,*(undefined8 *)(puVar2 + lVar10));
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010bfb68e0(*(undefined8 *)(puVar2 + lVar10));
    func_0x00010c19f0e0(*(undefined8 *)(puVar2 + _DAT_112783a78));
    lVar10 = (long)_DAT_112783a8c;
    func_0x00010bfb68e0(*(undefined8 *)(puVar2 + lVar10));
    puVar4 = puVar2;
    dVar16 = dVar15;
    func_0x00010bf4dce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    _objc_release(puVar4);
    func_0x00010c19f0e0(dVar15,(dVar16 - in_d3) * 0.5,dVar19,in_d3,*(undefined8 *)(puVar2 + lVar10))
    ;
    lVar10 = (long)_DAT_112783ad8;
    func_0x00010bfb68e0(*(undefined8 *)(puVar2 + lVar10));
    _CGRectGetMinX();
    dVar19 = dVar15;
    func_0x00010bf20c00(puVar2);
    _CGRectGetHeight();
    dVar16 = 1.0;
    func_0x00010c19f0e0(dVar15,0,0x3ff0000000000000,dVar19,*(undefined8 *)(puVar2 + lVar10));
    func_0x00010bed73c0(puVar2);
    lVar12 = (long)_DAT_112783adc;
    lVar10 = *(long *)(puVar2 + lVar12);
    func_0x00010bf529e0();
    ppuVar6 = (undefined **)0x0;
    if (lVar10 != 0) {
      ppuVar6 = *(undefined ***)(puVar2 + lVar11);
      func_0x00010c261580();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010bf90440();
      if ((int)puVar4 == 0) {
        func_0x00010bf20c00(puVar2);
        uVar7 = *(ulong *)(puVar2 + lVar12);
        func_0x00010bf529e0(uVar7);
        dVar16 = dVar16 / (double)uVar7;
        func_0x00010bf20c00(puVar2);
      }
      else {
        dVar16 = *(double *)(puVar2 + _DAT_112783ae0);
        dVar19 = *(double *)((long)(puVar2 + _DAT_112783ae0) + 8);
      }
      ppuVar9 = ppuVar6;
      func_0x00010bf529e0();
      if (ppuVar9 != (undefined **)0x0) {
        ppuVar9 = (undefined **)0x0;
        do {
          ppuVar3 = ppuVar6;
          func_0x00010c0dfd40(ppuVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c19f0e0(dVar16 * (double)ppuVar9,0,dVar16,dVar19);
          _objc_release(ppuVar3);
          ppuVar9 = (undefined **)((long)ppuVar9 + 1);
          ppuVar3 = ppuVar6;
          func_0x00010bf529e0();
        } while (ppuVar9 < ppuVar3);
      }
      _objc_release(ppuVar6);
    }
  }
  return ppuVar6;
}



/* Entry: 109209d90; end: 10920a317; -[SCSnapSegmentExpandedCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109209d90(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double in_d3;
  double dVar13;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  double dStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_112701070;
  lStack_80 = param_1;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  if (*(int *)(param_1 + _DAT_112783ac4) == 0) {
    lVar5 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    lVar7 = (long)_DAT_112783a6c;
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar7));
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112783a74));
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112783a7c));
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112783ac8));
    _objc_release(lVar5);
    lVar5 = 0x54;
    if (*(char *)(param_1 + _DAT_112783acc) == '\0') {
      lVar5 = 0x70;
    }
    puVar1 = (undefined8 *)(param_1 + *(int *)(&DAT_112783a60 + lVar5));
    uStack_a8 = puVar1[1];
    uStack_b0 = *puVar1;
    uStack_98 = puVar1[3];
    uStack_a0 = puVar1[2];
    uStack_88 = puVar1[5];
    dStack_90 = (double)puVar1[4];
    lVar5 = param_1;
    func_0x00010c073120();
    if ((int)lVar5 != 0) {
      func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_112783aa0));
      func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_112783aa4));
      func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_112783a84));
    }
    lVar5 = param_1;
    if (*(char *)(param_1 + _DAT_112783abc) == '\x01') {
      lVar9 = param_1;
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      lVar8 = (long)_DAT_112783aa0;
      dVar10 = 0.0;
      func_0x00010c17a6a0(0,in_d3 * 0.5,*(undefined8 *)(param_1 + lVar8));
      _objc_release(lVar9);
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetMaxX();
      lVar6 = param_1;
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      lVar9 = (long)_DAT_112783aa4;
      func_0x00010c17a6a0(dVar10,in_d3 * 0.5,*(undefined8 *)(param_1 + lVar9));
      _objc_release(lVar6);
    }
    else {
      uStack_f8 = uStack_a8;
      uStack_100 = uStack_b0;
      uStack_f0 = uStack_a0;
      uVar11 = uStack_b0;
      func_0x00010bde9ea0(param_1);
      lVar9 = param_1;
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      lVar8 = (long)_DAT_112783aa0;
      func_0x00010c17a6a0(uVar11,in_d3 * 0.5,*(undefined8 *)(param_1 + lVar8));
      _objc_release(lVar9);
      uStack_f8 = uStack_a8;
      uStack_100 = uStack_b0;
      uStack_e8 = uStack_98;
      uStack_f0 = uStack_a0;
      uStack_d8 = uStack_88;
      dStack_e0 = dStack_90;
      dVar10 = dStack_90;
      _CMTimeRangeGetEnd(auStack_c8,&uStack_100);
      func_0x00010bde9ea0(param_1);
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      lVar9 = (long)_DAT_112783aa4;
      func_0x00010c17a6a0(dVar10,in_d3 * 0.5,*(undefined8 *)(param_1 + lVar9));
    }
    _objc_release(lVar5);
    func_0x00010bf345e0(*(undefined8 *)(param_1 + lVar9));
    lVar6 = (long)_DAT_112783a90;
    func_0x00010c17a6a0(*(undefined8 *)(param_1 + lVar6));
    lVar5 = param_1 + _DAT_112783ad4;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c242f40();
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6));
    _objc_release(lVar5);
    lVar5 = (long)_DAT_112783a98;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5));
    func_0x00010bf345e0(*(undefined8 *)(param_1 + lVar9));
    dVar10 = dVar10 + -8.0;
    uVar11 = 0x4024000000000000;
    func_0x00010c17a6a0(dVar10,0x4024000000000000,*(undefined8 *)(param_1 + lVar5));
    func_0x00010bf345e0(*(undefined8 *)(param_1 + lVar8));
    lVar5 = param_1;
    dVar13 = dVar10;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010bf345e0(*(undefined8 *)(param_1 + lVar9));
    dVar12 = dVar13;
    func_0x00010bf345e0(*(undefined8 *)(param_1 + lVar8));
    dVar13 = dVar13 - dVar12;
    lVar9 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    lVar8 = (long)_DAT_112783a70;
    func_0x00010c19f0e0(dVar10,uVar11,dVar13,*(undefined8 *)(param_1 + lVar8));
    _objc_release(lVar9);
    _objc_release(lVar5);
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar8));
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112783a78));
    lVar9 = (long)_DAT_112783a8c;
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar9));
    lVar5 = param_1;
    dVar12 = dVar10;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    _objc_release(lVar5);
    func_0x00010c19f0e0(dVar10,(dVar12 - in_d3) * 0.5,dVar13,in_d3,*(undefined8 *)(param_1 + lVar9))
    ;
    lVar5 = (long)_DAT_112783ad8;
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar5));
    _CGRectGetMinX();
    dVar13 = dVar10;
    func_0x00010bf20c00(param_1);
    _CGRectGetHeight();
    dVar12 = 1.0;
    func_0x00010c19f0e0(dVar10,0,0x3ff0000000000000,dVar13,*(undefined8 *)(param_1 + lVar5));
    func_0x00010bed73c0(param_1);
    lVar9 = (long)_DAT_112783adc;
    lVar5 = *(long *)(param_1 + lVar9);
    func_0x00010bf529e0();
    if (lVar5 != 0) {
      uVar2 = *(ulong *)(param_1 + lVar7);
      func_0x00010c261580();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010bf90440();
      if ((int)lVar5 == 0) {
        func_0x00010bf20c00(param_1);
        uVar4 = *(ulong *)(param_1 + lVar9);
        func_0x00010bf529e0(uVar4);
        dVar12 = dVar12 / (double)uVar4;
        func_0x00010bf20c00(param_1);
      }
      else {
        dVar12 = *(double *)(param_1 + _DAT_112783ae0);
        dVar13 = ((double *)(param_1 + _DAT_112783ae0))[1];
      }
      uVar4 = uVar2;
      func_0x00010bf529e0();
      if (uVar4 != 0) {
        uVar4 = 0;
        do {
          uVar3 = uVar2;
          func_0x00010c0dfd40(uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c19f0e0(dVar12 * (double)uVar4,0,dVar12,dVar13);
          _objc_release(uVar3);
          uVar4 = uVar4 + 1;
          uVar3 = uVar2;
          func_0x00010bf529e0();
        } while (uVar4 < uVar3);
      }
      _objc_release(uVar2);
    }
  }
  return;
}



/* Entry: 10920a318; end: 10920a3e3; -[SCSnapSegmentExpandedCell clampedTrimmingTimeRange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920a318(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010bed0160();
  puVar1 = (undefined8 *)(param_2 + _DAT_112783aa8);
  uStack_58 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  uStack_78 = puVar1[1];
  uStack_80 = *puVar1;
  uStack_70 = puVar1[2];
  _CMTimeMinimum(&uStack_48,&uStack_60,&uStack_80);
  *(undefined8 *)(param_1 + 0x20) = uStack_40;
  *(undefined8 *)(param_1 + 0x18) = uStack_48;
  *(undefined8 *)(param_1 + 0x28) = uStack_38;
  puVar1 = (undefined8 *)(param_2 + _DAT_112783aac);
  uStack_58 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  uStack_78 = puVar1[1];
  uStack_80 = *puVar1;
  uStack_70 = puVar1[2];
  _CMTimeMaximum(&uStack_48,&uStack_60,&uStack_80);
  *(undefined8 *)(param_1 + 0x20) = uStack_40;
  *(undefined8 *)(param_1 + 0x18) = uStack_48;
  *(undefined8 *)(param_1 + 0x28) = uStack_38;
  return;
}



/* Entry: 10920a3e4; end: 10920a3ff; -[SCSnapSegmentExpandedCell isTrimming] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10920a3e4(long param_1)

{
  return *(int *)(param_1 + _DAT_112783ac4) - 1U < 2;
}



/* Entry: 10920a400; end: 10920a417; -[SCSnapSegmentExpandedCell isFixedDurationTrimming] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10920a400(long param_1)

{
  return *(uint *)(param_1 + _DAT_112783ab0 + 0xc) & 1;
}



/* Entry: 10920a418; end: 10920a433; -[SCSnapSegmentExpandedCell setClipsReorderingDeleteButtonHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920a418(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112783a94) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112783a98),PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 10920a434; end: 10920a4a7; -[SCSnapSegmentExpandedCell setContentTimeRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920a434(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((*(byte *)(param_1 + _DAT_112783aa8 + 0xc) & 1) == 0) {
    uStack_38 = param_3[4];
    uStack_40 = param_3[3];
    uStack_30 = param_3[5];
    func_0x00010c1c3ca0(param_1,param_2,&uStack_40);
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112783ae4);
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar3 = param_3[5];
  uVar2 = param_3[4];
  uVar6 = *param_3;
  puVar1[1] = param_3[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  return;
}



/* Entry: 10920a4a8; end: 10920a547; -[SCSnapSegmentExpandedCell setTrimmedTimeRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920a4a8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112783aa8);
  if ((*(byte *)((long)puVar1 + 0xc) & 1) != 0) {
    uStack_48 = param_3[4];
    uStack_50 = param_3[3];
    uStack_40 = param_3[5];
    uStack_68 = puVar1[1];
    uStack_70 = *puVar1;
    uStack_60 = puVar1[2];
    _CMTimeMinimum(&uStack_38,&uStack_50,&uStack_70);
    param_3[4] = uStack_30;
    param_3[3] = uStack_38;
    param_3[5] = uStack_28;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112783ad0);
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar3 = param_3[5];
  uVar2 = param_3[4];
  uVar6 = *param_3;
  puVar1[1] = param_3[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  func_0x00010bed73c0(param_1);
  return;
}



/* Entry: 10920a548; end: 10920a58b; -[SCSnapSegmentExpandedCell setFixedSegmentDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920a548(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((*(byte *)((long)param_3 + 0xc) & 1) != 0) {
    puVar1 = (undefined8 *)(param_1 + _DAT_112783ab0);
    uVar2 = param_3[2];
    uVar3 = *param_3;
    puVar1[1] = param_3[1];
    *puVar1 = uVar3;
    puVar1[2] = uVar2;
    param_1 = param_1 + _DAT_112783ad0;
    uVar2 = param_3[2];
    uVar3 = *param_3;
    *(undefined8 *)(param_1 + 0x20) = param_3[1];
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    *(undefined8 *)(param_1 + 0x28) = uVar2;
  }
  return;
}



/* Entry: 10920a58c; end: 10920a643; -[SCSnapSegmentExpandedCell setMaximumSegmentDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920a58c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + _DAT_112783ad0;
  if (((((*(byte *)(lVar1 + 0xc) & 1) != 0) && ((*(byte *)(lVar1 + 0x24) & 1) != 0)) &&
      (*(long *)(lVar1 + 0x28) == 0)) && (-1 < *(long *)(lVar1 + 0x18))) {
    uStack_58 = *(undefined8 *)(lVar1 + 0x20);
    uStack_60 = *(undefined8 *)(lVar1 + 0x18);
    uStack_50 = *(undefined8 *)(lVar1 + 0x28);
    uStack_78 = param_3[1];
    uStack_80 = *param_3;
    uStack_70 = param_3[2];
    _CMTimeMinimum(&uStack_48,&uStack_60,&uStack_80);
    *(undefined8 *)(lVar1 + 0x20) = uStack_40;
    *(undefined8 *)(lVar1 + 0x18) = uStack_48;
    *(undefined8 *)(lVar1 + 0x28) = uStack_38;
  }
  puVar2 = (undefined8 *)(param_1 + _DAT_112783aa8);
  uVar3 = param_3[2];
  uVar4 = *param_3;
  puVar2[1] = param_3[1];
  *puVar2 = uVar4;
  puVar2[2] = uVar3;
  return;
}



/* Entry: 10920a644; end: 10920a6b3; -[SCSnapSegmentExpandedCell setThumbnailFutures:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920a644(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112783adc;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010be04b60(param_1);
    func_0x00010c1cbe20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10920a6b4; end: 10920a75b; -[SCSnapSegmentExpandedCell setBorderVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920a6b4(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(byte *)(param_1 + _DAT_112783a60) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112783a60) = (char)param_3;
  uVar2 = 0x3ff0000000000000;
  if (param_3 == 0) {
    uVar2 = 0;
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0x3ff0000000000000,uVar2,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112783a70);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10920a75c; end: 10920a7fb; -[SCSnapSegmentExpandedCell setDurationInfoVisible:] */

/* WARNING: Possible PIC construction at 0x00010920a7b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010920a7b4) */
/* WARNING: Removing unreachable block (ram,0x00010920a7b8) */
/* WARNING: Removing unreachable block (ram,0x00010920a7dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920a75c(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (*(byte *)(param_1 + _DAT_112783a64) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112783a64) = (char)param_3;
  uVar1 = 0x3ff0000000000000;
  if (param_3 == 0) {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(param_1 + _DAT_112783ae8),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10920a7fc; end: 10920a803; -[SCSnapSegmentExpandedCell hidePlayhead] */

void FUN_10920a7fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea6650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setPlayheadHidden__112587338,1);
  return;
}



/* Entry: 10920a804; end: 10920a8f3; -[SCSnapSegmentExpandedCell setPlayheadHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920a804(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  lVar2 = (long)_DAT_112783a8c;
  dVar3 = param_1;
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar2));
  lVar1 = param_4;
  dVar4 = dVar3;
  func_0x00010bf4dce0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  dVar6 = (dVar4 - param_1) * 0.5;
  _objc_release(lVar1);
  func_0x00010c19f0e0(dVar3,dVar6,param_3,param_1,*(undefined8 *)(param_4 + lVar2));
  lVar1 = (long)_DAT_112783af0;
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar1));
  dVar4 = dVar3;
  dVar5 = dVar6;
  func_0x00010bf345e0(*(undefined8 *)(param_4 + lVar1));
  func_0x00010c19f0e0(dVar3,dVar6,param_3,param_1,*(undefined8 *)(param_4 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c17a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar4,dVar5,*(undefined8 *)(param_4 + lVar1),PTR_s_setCenter__11263c3c8);
  return;
}



/* Entry: 10920a8f4; end: 10920ad93; -[SCSnapSegmentExpandedCell updatePlayheadWithTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920a8f4(ulong param_1,undefined8 param_2,double *param_3)

{
  double *pdVar1;
  ulong uVar2;
  double *pdVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  double dStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  double dStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  
  if (((*(int *)(param_1 + (long)_DAT_112783ac4) != 3) &&
      (uVar2 = param_1, func_0x00010c081100(), (uVar2 & 1) == 0)) &&
     ((*(byte *)((long)param_3 + 0xc) & 1) != 0)) {
    pdVar1 = (double *)(param_1 + (long)_DAT_112783ad0);
    dStack_1b8 = pdVar1[1];
    dStack_1c0 = *pdVar1;
    dStack_1a8 = pdVar1[3];
    dStack_1b0 = pdVar1[2];
    dStack_198 = pdVar1[5];
    dStack_1a0 = pdVar1[4];
    dStack_b8 = param_3[1];
    dStack_c0 = *param_3;
    dStack_b0 = param_3[2];
    pdVar3 = &dStack_1c0;
    _CMTimeRangeContainsTime(pdVar3,&dStack_c0);
    if ((int)pdVar3 == 0) {
      func_0x00010bea6640(param_1);
      uVar9 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x48);
      uVar5 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x40);
      uVar17 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x58);
      uVar13 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x50);
      uVar10 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x68);
      uVar6 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x60);
      uVar18 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x78);
      uVar14 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x70);
      uVar11 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 8);
      dVar21 = *(double *)PTR__CATransform3DIdentity_110346c58;
      uVar19 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x18);
      uVar15 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x10);
      uVar12 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x28);
      uVar7 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x20);
      uVar20 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x38);
      uVar16 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x30);
      dStack_1c0 = dVar21;
      dStack_1b8 = (double)uVar11;
      dStack_1b0 = (double)uVar15;
      dStack_1a8 = (double)uVar19;
      dStack_1a0 = (double)uVar7;
      dStack_198 = (double)uVar12;
      uStack_190 = uVar16;
      uStack_188 = uVar20;
      uStack_180 = uVar5;
      uStack_178 = uVar9;
      uStack_170 = uVar13;
      uStack_168 = uVar17;
      uStack_160 = uVar6;
      uStack_158 = uVar10;
      uStack_150 = uVar14;
      uStack_148 = uVar18;
      _CATransform3DTranslate(&dStack_140,0,0,0,&dStack_1c0);
      uStack_178 = uStack_f8;
      uStack_180 = uStack_100;
      uStack_168 = uStack_e8;
      uStack_170 = uStack_f0;
      uStack_158 = uStack_d8;
      uStack_160 = uStack_e0;
      uStack_148 = uStack_c8;
      uStack_150 = uStack_d0;
      dStack_1b8 = (double)uStack_138;
      dStack_1c0 = dStack_140;
      dStack_1a8 = (double)uStack_128;
      dStack_1b0 = (double)uStack_130;
      dStack_198 = (double)uStack_118;
      dStack_1a0 = (double)uStack_120;
      uStack_188 = uStack_108;
      uStack_190 = uStack_110;
      func_0x00010c219960(*(undefined8 *)(param_1 + (long)_DAT_112783a8c));
      dStack_1c0 = dVar21;
      dStack_1b8 = (double)uVar11;
      dStack_1b0 = (double)uVar15;
      dStack_1a8 = (double)uVar19;
      dStack_1a0 = (double)uVar7;
      dStack_198 = (double)uVar12;
      uStack_190 = uVar16;
      uStack_188 = uVar20;
      uStack_180 = uVar5;
      uStack_178 = uVar9;
      uStack_170 = uVar13;
      uStack_168 = uVar17;
      uStack_160 = uVar6;
      uStack_158 = uVar10;
      uStack_150 = uVar14;
      uStack_148 = uVar18;
      _CATransform3DTranslate(&dStack_240,0,0,0,&dStack_1c0);
      uStack_178 = uStack_1f8;
      uStack_180 = uStack_200;
      uStack_168 = uStack_1e8;
      uStack_170 = uStack_1f0;
      uStack_158 = uStack_1d8;
      uStack_160 = uStack_1e0;
      uStack_148 = uStack_1c8;
      uStack_150 = uStack_1d0;
      dStack_1b8 = (double)uStack_238;
      dStack_1c0 = dStack_240;
      dStack_1a8 = (double)uStack_228;
      dStack_1b0 = (double)uStack_230;
      dStack_198 = (double)uStack_218;
      dStack_1a0 = (double)uStack_220;
      uStack_188 = uStack_208;
      uStack_190 = uStack_210;
      func_0x00010c219960(*(undefined8 *)(param_1 + (long)_DAT_112783ad8));
      if ((*(char *)(param_1 + (long)_DAT_112783afc) == '\x01') &&
         (*(char *)(param_1 + (long)_DAT_112783abc) == '\x01')) {
        dStack_1b8 = pdVar1[1];
        dStack_1c0 = *pdVar1;
        dStack_1a8 = pdVar1[3];
        dStack_1b0 = pdVar1[2];
        dStack_198 = pdVar1[5];
        dStack_1a0 = pdVar1[4];
        _CMTimeRangeGetEnd(&dStack_c0,&dStack_1c0);
        dStack_1b8 = param_3[1];
        dStack_1c0 = *param_3;
        dStack_1b0 = param_3[2];
        pdVar3 = &dStack_1c0;
        _CMTimeCompare(pdVar3,&dStack_c0);
        if ((int)pdVar3 < 0) {
          dStack_1b8 = param_3[1];
          dStack_1c0 = *param_3;
          dStack_1b0 = param_3[2];
          dStack_b8 = pdVar1[1];
          dStack_c0 = *pdVar1;
          dStack_b0 = pdVar1[2];
          pdVar3 = &dStack_1c0;
          _CMTimeCompare(pdVar3,&dStack_c0);
          if ((int)pdVar3 < 1) {
            lVar4 = (long)_DAT_112783b00;
            func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4));
            func_0x00010c19f0e0(*(undefined8 *)PTR__CGRectZero_110347608,
                                *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                                *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                                *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),
                                *(undefined8 *)(param_1 + lVar4));
          }
        }
        else {
          uVar2 = param_1;
          func_0x00010c0fff20(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a7f60();
          _objc_release(uVar2);
          uVar2 = param_1;
          func_0x00010bf4dce0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf20c00();
          func_0x00010c19f0e0(*(undefined8 *)(param_1 + (long)_DAT_112783b00));
          _objc_release(uVar2);
        }
      }
    }
    else {
      pdVar3 = pdVar1;
      if ((*(byte *)(param_1 + (long)_DAT_112783abc) & 1) == 0) {
        pdVar3 = (double *)(param_1 + (long)_DAT_112783ae4);
      }
      dStack_1b8 = pdVar3[1];
      dStack_1c0 = *pdVar3;
      dStack_1a8 = pdVar3[3];
      dStack_1b0 = pdVar3[2];
      dStack_b8 = pdVar3[1];
      dStack_c0 = *pdVar3;
      dStack_198 = pdVar3[5];
      dVar21 = pdVar3[4];
      dStack_b0 = pdVar3[2];
      dStack_1a0 = dVar21;
      _CMTimeGetSeconds(&dStack_c0);
      dStack_b8 = param_3[1];
      dVar8 = *param_3;
      dStack_b0 = param_3[2];
      dStack_c0 = dVar8;
      _CMTimeGetSeconds(&dStack_c0);
      lVar4 = (long)_DAT_112783af4;
      if (*(char *)(param_1 + lVar4) == '\x01') {
        dStack_b8 = pdVar1[1];
        dVar22 = *pdVar1;
        dStack_b0 = pdVar1[2];
        dStack_c0 = dVar22;
        _CMTimeGetSeconds(&dStack_c0);
        dVar23 = dVar8 - dVar22;
        func_0x00010be607a0(param_1);
        if (dVar22 < dVar23) {
          return;
        }
      }
      dStack_b8 = dStack_1b8;
      dStack_c0 = dStack_1c0;
      dStack_a8 = dStack_1a8;
      dStack_b0 = dStack_1b0;
      dStack_98 = dStack_198;
      dStack_a0 = dStack_1a0;
      dVar22 = dStack_1a0;
      _CMTimeRangeGetEnd(&dStack_90,&dStack_c0);
      _CMTimeGetSeconds(&dStack_90);
      if (dVar22 - dVar21 == 0.0) {
        dVar21 = 0.0;
      }
      else {
        dVar21 = (dVar8 - dVar21) / (dVar22 - dVar21);
      }
      pdVar3 = (double *)(param_1 + (long)_DAT_112783af8);
      dStack_b8 = param_3[1];
      dStack_c0 = *param_3;
      dStack_b0 = param_3[2];
      dStack_88 = pdVar3[1];
      dVar8 = *pdVar3;
      dStack_80 = pdVar3[2];
      pdVar3 = &dStack_c0;
      dStack_90 = dVar8;
      _CMTimeCompare(pdVar3,&dStack_90);
      if (-1 < (int)pdVar3) {
        func_0x00010be42b20(param_1);
      }
      uVar2 = param_1;
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
      dVar8 = dVar8 + -2.5;
      dVar21 = dVar21 * dVar8;
      _objc_release(uVar2);
      func_0x00010bf345e0(*(undefined8 *)(param_1 + (long)_DAT_112783aa4));
      dVar22 = dVar8 + -2.5;
      func_0x00010bf345e0(*(undefined8 *)(param_1 + (long)_DAT_112783aa0));
      if (dVar21 <= dVar8) {
        dVar21 = dVar8;
      }
      if (dVar21 <= dVar22) {
        dVar22 = dVar21;
      }
      func_0x00010be61360(dVar22,param_1);
      func_0x00010c081920(param_1);
      func_0x00010bea6640(param_1);
      *(undefined1 *)(param_1 + lVar4) = 0;
    }
    pdVar3 = (double *)(param_1 + (long)_DAT_112783af8);
    dVar21 = param_3[2];
    dVar8 = *param_3;
    pdVar3[1] = param_3[1];
    *pdVar3 = dVar8;
    pdVar3[2] = dVar21;
  }
  return;
}



/* Entry: 10920ad94; end: 10920adab; -[SCSnapSegmentExpandedCell editsInProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10920ad94(long param_1)

{
  return *(int *)(param_1 + _DAT_112783ac4) != 0;
}



/* Entry: 10920adac; end: 10920afab; -[SCSnapSegmentExpandedCell animateAddingNewThumbnail:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920adac(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_80 [8];
  double dStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_7);
  lVar9 = (long)_DAT_112783adc;
  uVar1 = *(ulong *)(param_5 + lVar9);
  func_0x00010bf529e0();
  uVar2 = *(ulong *)(param_5 + _DAT_112783a6c);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  uVar8 = uVar1;
  if (uVar1 < uVar3) {
    do {
      uVar3 = uVar2;
      func_0x00010c0dfd40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c960();
      _objc_release(uVar3);
      uVar8 = uVar8 + 1;
      uVar3 = uVar2;
      func_0x00010bf529e0();
    } while (uVar8 < uVar3);
  }
  func_0x00010bf20c00(param_5);
  param_3 = param_3 / (double)(long)uVar1;
  func_0x00010bf20c00(param_5);
  uVar4 = *(undefined8 *)(param_5 + lVar9);
  func_0x00010bf09f60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_5 + lVar9);
  *(undefined8 *)(param_5 + lVar9) = uVar4;
  _objc_release(uVar7);
  puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(param_3 * (double)(long)(uVar1 - 1),0,param_3,param_4);
  _objc_initWeak(auStack_68,param_5);
  _objc_copyWeak(auStack_80,auStack_68);
  puVar6 = puVar5;
  _objc_retain(puVar5);
  dStack_78 = param_3;
  uStack_70 = param_4;
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(param_7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(param_7);
  return;
}



/* Entry: 10920afac; end: 10920b113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920afac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    func_0x00010bea8660(lVar2);
    func_0x00010befbb60(*(undefined8 *)(lVar2 + _DAT_112783a6c));
    func_0x00010bfb68e0(lVar2);
    func_0x00010bfb68e0(lVar2);
    func_0x00010bfb68e0(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227960(0xbff0000000000000);
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    func_0x00010bf03420(0x3fd3333333333333,puVar1);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 10920b114; end: 10920b17b;  */

void FUN_10920b114(long param_1)

{
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 10920b17c; end: 10920b307; -[SCSnapSegmentExpandedCell setCornerRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920b17c(double param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  
  lVar3 = (long)_DAT_112783a68;
  fVar5 = ABS((float)*(double *)(param_2 + lVar3) - (float)param_1);
  fVar4 = ABS((float)param_1 + (float)*(double *)(param_2 + lVar3)) * 1.1920929e-07;
  bVar1 = true;
  if ((1.1754944e-38 <= fVar5) && (bVar1 = false, !NAN(fVar5) && !NAN(fVar4))) {
    bVar1 = fVar5 < fVar4;
  }
  if (bVar1) {
    return;
  }
  *(double *)(param_2 + lVar3) = param_1;
  uVar2 = *(undefined8 *)(param_2 + _DAT_112783a6c);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_2 + lVar3);
  uVar2 = *(undefined8 *)(param_2 + _DAT_112783a70);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(uVar6);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_2 + lVar3);
  uVar2 = *(undefined8 *)(param_2 + _DAT_112783a78);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(uVar6);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_2 + lVar3);
  uVar2 = *(undefined8 *)(param_2 + _DAT_112783a7c);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(uVar6);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_2 + lVar3);
  uVar2 = *(undefined8 *)(param_2 + _DAT_112783ac8);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(uVar6);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_2 + lVar3);
  uVar2 = *(undefined8 *)(param_2 + _DAT_112783ae8);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10920b308; end: 10920b41b; -[SCSnapSegmentExpandedCell updateUIWithDirectorModeStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920b308(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR_PTR_1126ddec8;
  lVar6 = (long)_DAT_112783aa0;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  if ((uVar1 == 0) || (func_0x00010c25dfa0(), uVar5 != param_3)) {
    *(undefined1 *)(param_1 + _DAT_112783afc) = 1;
    lVar7 = param_1;
    func_0x00010bdc37a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(long *)(param_1 + lVar6) = lVar7;
    _objc_release(uVar4);
    lVar7 = (long)_DAT_112783aa4;
    lVar6 = param_1;
    func_0x00010bdc37a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    *(long *)(param_1 + lVar7) = lVar6;
    _objc_release(uVar4);
    func_0x00010c1842e0(0x4010000000000000,param_1);
    *(undefined1 *)(param_1 + _DAT_112783b04) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10920b41c; end: 10920b52f; -[SCSnapSegmentExpandedCell gestureRecognizer:shouldReceiveTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10920b41c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010beb3f00();
  if ((int)lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_6,param_4,lVar1);
    _objc_release(lVar1);
    if (param_5 == *(long *)(param_3 + _DAT_112783a80)) {
      func_0x00010be44ba0(param_1,param_2,param_3);
      goto LAB_10920b508;
    }
    if (param_5 == *(long *)(param_3 + _DAT_112783a84)) {
      func_0x00010be44c00(param_1,param_2,param_3);
      goto LAB_10920b508;
    }
    if (param_5 == *(long *)(param_3 + _DAT_112783a88)) {
      func_0x00010be44be0(param_1,param_2,param_3);
      goto LAB_10920b508;
    }
  }
  param_3 = 0;
LAB_10920b508:
  _objc_release(param_6);
  _objc_release(param_5);
  return param_3;
}



/* Entry: 10920b530; end: 10920bb0b; -[SCSnapSegmentExpandedCell trimPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920b530(undefined8 param_1,undefined8 param_2,double param_3,ulong param_4,
                  undefined8 param_5,long param_6)

{
  double *pdVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  _objc_retain(param_6);
  uVar3 = param_4;
  func_0x00010c073120();
  puVar5 = PTR__kCMTimeInvalid_110348648;
  if ((uVar3 & 1) != 0) goto LAB_10920b568;
  pdVar1 = (double *)(param_4 + (long)_DAT_112783af8);
  dVar8 = *(double *)PTR__kCMTimeInvalid_110348648;
  pdVar1[1] = *(double *)(PTR__kCMTimeInvalid_110348648 + 8);
  *pdVar1 = dVar8;
  pdVar1[2] = *(double *)(puVar5 + 0x10);
  lVar6 = param_6;
  func_0x00010c252440();
  if (lVar6 - 3U < 2) {
    uVar3 = param_4;
    func_0x00010c081920();
    if ((int)uVar3 != 0) {
      func_0x00010bed0160(&dStack_80,param_4);
      dStack_c8 = dStack_60;
      dStack_d0 = dStack_68;
      dStack_c0 = dStack_58;
      dVar8 = dStack_68;
      _CMTimeGetSeconds(&dStack_d0);
      dVar10 = dVar8;
      func_0x00010be607a0(param_4);
      if (dVar8 < dVar10) {
        if (*(int *)(param_4 + (long)_DAT_112783ac4) == 1) {
          dStack_c8 = dStack_78;
          dStack_d0 = dStack_80;
          dStack_b8 = dStack_68;
          dStack_c0 = dStack_70;
          dStack_a8 = dStack_58;
          dStack_b0 = dStack_60;
          _CMTimeRangeGetEnd(&dStack_a0,&dStack_d0);
          puVar2 = (undefined8 *)(param_4 + (long)_DAT_112783aac);
          uStack_e8 = puVar2[1];
          uStack_f0 = *puVar2;
          uStack_e0 = puVar2[2];
          _CMTimeSubtract(&dStack_d0,&dStack_a0,&uStack_f0);
          dStack_98 = dStack_c8;
          dStack_a0 = dStack_d0;
          dStack_90 = dStack_c0;
          dVar8 = dStack_d0;
          func_0x00010bde9ea0(param_4);
          func_0x00010bf345e0(*(undefined8 *)(param_4 + (long)_DAT_112783aa0));
          func_0x00010bedaa00(dVar8,param_4);
        }
        else {
          puVar2 = (undefined8 *)(param_4 + (long)_DAT_112783aac);
          dStack_98 = dStack_78;
          dStack_a0 = dStack_80;
          dStack_90 = dStack_70;
          uStack_e8 = puVar2[1];
          uStack_f0 = *puVar2;
          uStack_e0 = puVar2[2];
          _CMTimeAdd(&dStack_d0,&dStack_a0,&uStack_f0);
          dStack_98 = dStack_c8;
          dStack_a0 = dStack_d0;
          dStack_90 = dStack_c0;
          dVar8 = dStack_d0;
          func_0x00010bde9ea0(param_4);
          func_0x00010bf345e0(*(undefined8 *)(param_4 + (long)_DAT_112783aa4));
          func_0x00010bedeb60(dVar8,param_4);
        }
        func_0x00010bed0160(&dStack_d0,param_4);
        dStack_78 = dStack_c8;
        dStack_80 = dStack_d0;
        dStack_68 = dStack_b8;
        dStack_70 = dStack_c0;
        dStack_58 = dStack_a8;
        dStack_60 = dStack_b0;
      }
      pdVar1 = (double *)(param_4 + (long)_DAT_112783ad0);
      pdVar1[1] = dStack_78;
      *pdVar1 = dStack_80;
      pdVar1[3] = dStack_68;
      pdVar1[2] = dStack_70;
      pdVar1[5] = dStack_58;
      pdVar1[4] = dStack_60;
      uVar3 = param_4;
      func_0x00010bf6b020(param_4);
      _objc_retainAutoreleasedReturnValue();
      dStack_c8 = dStack_78;
      dStack_d0 = dStack_80;
      dStack_b8 = dStack_68;
      dStack_c0 = dStack_70;
      dStack_a8 = dStack_58;
      dStack_b0 = dStack_60;
      func_0x00010c242ea0();
      _objc_release(uVar3);
      uVar3 = param_4;
      func_0x00010bf6b020(param_4);
      _objc_retainAutoreleasedReturnValue();
      dStack_c8 = dStack_78;
      dStack_d0 = dStack_80;
      dStack_c0 = dStack_70;
      func_0x00010c242e80();
      _objc_release(uVar3);
      *(undefined1 *)(param_4 + (long)_DAT_112783af4) = 1;
      uVar3 = param_4;
      func_0x00010bf6b020(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c242ee0();
      _objc_release(uVar3);
      *(undefined4 *)(param_4 + (long)_DAT_112783ac4) = 0;
      func_0x00010be35ea0(0x3ff0000000000000,param_4);
    }
    goto LAB_10920b568;
  }
  if (lVar6 == 2) {
    uVar3 = param_4;
    func_0x00010bf4dce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_6);
    _objc_release(uVar3);
    uVar3 = param_4;
    if (*(int *)(param_4 + (long)_DAT_112783ac4) == 2) {
      uVar4 = param_4;
      func_0x00010bedeb60(dVar8,param_2);
      if ((int)uVar4 == 0) goto LAB_10920b568;
      func_0x00010bde9e80(&dStack_d0,dVar8,param_4);
      func_0x00010bf6b020(param_4);
      _objc_retainAutoreleasedReturnValue();
      dStack_78 = dStack_c8;
      dStack_80 = dStack_d0;
      dStack_70 = dStack_c0;
      func_0x00010c242e00();
    }
    else {
      if ((*(int *)(param_4 + (long)_DAT_112783ac4) != 1) ||
         (uVar4 = param_4, func_0x00010bedaa00(dVar8,param_2), (int)uVar4 == 0)) goto LAB_10920b568;
      func_0x00010bde9e80(&dStack_d0,dVar8,param_4);
      func_0x00010bf6b020(param_4);
      _objc_retainAutoreleasedReturnValue();
      dStack_78 = dStack_c8;
      dStack_80 = dStack_d0;
      dStack_70 = dStack_c0;
      func_0x00010c242e60();
    }
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010bf6b020(param_4);
    _objc_retainAutoreleasedReturnValue();
    dStack_78 = dStack_c8;
    dStack_80 = dStack_d0;
    dStack_70 = dStack_c0;
    func_0x00010c242e80();
    _objc_release(uVar3);
    if (*(char *)(param_4 + (long)_DAT_112783b04) == '\x01') {
      func_0x00010bed0160(&dStack_80,param_4);
      dStack_98 = dStack_60;
      dStack_a0 = dStack_68;
      dStack_90 = dStack_58;
      func_0x00010bee22c0(param_4);
    }
    goto LAB_10920b568;
  }
  if (lVar6 != 1) goto LAB_10920b568;
  uVar3 = param_4;
  func_0x00010bf4dce0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_6);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010be44b80(dVar8,param_2);
  uVar4 = param_4;
  dVar10 = dVar8;
  func_0x00010be44bc0(dVar8,param_2);
  if (((int)uVar3 == 0) || ((int)uVar4 == 0)) {
    if ((int)uVar3 != 0) {
      lVar6 = (long)_DAT_112783ac4;
      goto LAB_10920b828;
    }
    if ((int)uVar4 != 0) {
      lVar6 = (long)_DAT_112783ac4;
      goto LAB_10920b914;
    }
  }
  else {
    func_0x00010bf345e0(*(undefined8 *)(param_4 + (long)_DAT_112783aa0));
    uVar3 = param_4;
    dVar9 = dVar10;
    func_0x00010bf4dce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010bf345e0(*(undefined8 *)(param_4 + (long)_DAT_112783aa4));
    _objc_release(uVar3);
    lVar6 = (long)_DAT_112783ac4;
    if (param_3 - dVar9 < dVar10) {
LAB_10920b828:
      uVar7 = 1;
    }
    else {
LAB_10920b914:
      uVar7 = 2;
    }
    *(undefined4 *)(param_4 + lVar6) = uVar7;
  }
  uVar3 = param_4;
  func_0x00010c081920();
  if ((int)uVar3 != 0) {
    func_0x00010bfe25e0(param_4);
    uVar3 = param_4;
    func_0x00010bf6b020(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde9e80(&dStack_80,dVar8,param_4);
    func_0x00010c242e80(uVar3);
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8760();
    _objc_release(puVar5);
  }
LAB_10920b568:
  _objc_release(param_6);
  return;
}



/* Entry: 10920bb0c; end: 10920be27; -[SCSnapSegmentExpandedCell _trimWithFixedDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920bb0c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112783ab0);
  uStack_88 = puVar1[1];
  uStack_90 = *puVar1;
  uStack_80 = puVar1[2];
  _CMTimeMultiplyByRatio(&uStack_78,&uStack_90,1,2);
  uStack_a8 = param_4[1];
  uStack_b0 = *param_4;
  uStack_a0 = param_4[2];
  uStack_c8 = uStack_70;
  uStack_d0 = uStack_78;
  uStack_c0 = uStack_68;
  _CMTimeSubtract(&uStack_90,&uStack_b0,&uStack_d0);
  uStack_c8 = param_4[1];
  uStack_d0 = *param_4;
  uStack_c0 = param_4[2];
  uStack_e8 = uStack_70;
  uStack_f0 = uStack_78;
  uStack_e0 = uStack_68;
  _CMTimeAdd(&uStack_b0,&uStack_d0,&uStack_f0);
  puVar2 = (undefined8 *)(param_2 + _DAT_112783ae4);
  uStack_c8 = puVar2[1];
  uStack_d0 = *puVar2;
  uStack_c0 = puVar2[2];
  uStack_108 = puVar2[1];
  uStack_110 = *puVar2;
  uStack_100 = puVar2[2];
  uStack_128 = puVar2[4];
  uStack_130 = puVar2[3];
  uStack_120 = puVar2[5];
  _CMTimeAdd(&uStack_f0,&uStack_110,&uStack_130);
  uStack_108 = uStack_88;
  uStack_110 = uStack_90;
  uStack_100 = uStack_80;
  uStack_128 = uStack_c8;
  uStack_130 = uStack_d0;
  uStack_120 = uStack_c0;
  puVar2 = &uStack_110;
  _CMTimeCompare(puVar2,&uStack_130);
  if ((int)puVar2 < 0) {
    uStack_88 = uStack_c8;
    uStack_90 = uStack_d0;
    uStack_80 = uStack_c0;
    uStack_128 = uStack_c8;
    uStack_130 = uStack_d0;
    uStack_120 = uStack_c0;
    uStack_148 = puVar1[1];
    uStack_150 = *puVar1;
    uStack_140 = puVar1[2];
    _CMTimeAdd(&uStack_110,&uStack_130,&uStack_150);
    uStack_a8 = uStack_108;
    uStack_b0 = uStack_110;
    uStack_a0 = uStack_100;
  }
  uStack_108 = uStack_a8;
  uStack_110 = uStack_b0;
  uStack_100 = uStack_a0;
  uStack_128 = uStack_e8;
  uStack_130 = uStack_f0;
  uStack_120 = uStack_e0;
  puVar2 = &uStack_110;
  _CMTimeCompare(puVar2,&uStack_130);
  if (0 < (int)puVar2) {
    uStack_a8 = uStack_e8;
    uStack_b0 = uStack_f0;
    uStack_a0 = uStack_e0;
    uStack_128 = uStack_e8;
    uStack_130 = uStack_f0;
    uStack_120 = uStack_e0;
    uStack_148 = puVar1[1];
    uStack_150 = *puVar1;
    uStack_140 = puVar1[2];
    _CMTimeSubtract(&uStack_110,&uStack_130,&uStack_150);
    uStack_88 = uStack_108;
    uStack_90 = uStack_110;
    uStack_80 = uStack_100;
  }
  lVar3 = param_2;
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = uStack_88;
  uStack_110 = uStack_90;
  uStack_100 = uStack_80;
  func_0x00010c242e60();
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = uStack_88;
  uStack_110 = uStack_90;
  uStack_100 = uStack_80;
  func_0x00010c242e80();
  _objc_release(lVar3);
  uStack_108 = uStack_88;
  uStack_110 = uStack_90;
  uStack_100 = uStack_80;
  uVar4 = uStack_90;
  func_0x00010bde9ea0(param_2);
  func_0x00010bf345e0(*(undefined8 *)(param_2 + _DAT_112783aa0));
  func_0x00010bedaa00(uVar4,param_2);
  uStack_108 = uStack_a8;
  uStack_110 = uStack_b0;
  uStack_100 = uStack_a0;
  uVar4 = uStack_b0;
  func_0x00010bde9ea0(param_2);
  func_0x00010bf345e0(*(undefined8 *)(param_2 + _DAT_112783aa4));
  func_0x00010bedeb60(uVar4,param_2);
  func_0x00010bed0160(param_1,param_2);
  return;
}



/* Entry: 10920be28; end: 10920c1d7; -[SCSnapSegmentExpandedCell playheadPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920be28(double param_1,double param_2,undefined *param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  undefined8 uStack_d0;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  puVar2 = param_3;
  func_0x00010c081920();
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_5);
    dVar5 = param_1;
    _objc_release(puVar2);
    func_0x00010bf345e0(*(undefined8 *)(param_3 + _DAT_112783aa0));
    dVar6 = dVar5;
    if (dVar5 <= param_1) {
      dVar6 = param_1;
    }
    func_0x00010bf345e0(*(undefined8 *)(param_3 + _DAT_112783aa4));
    if (dVar5 + -2.5 <= dVar6) {
      dVar6 = dVar5 + -2.5;
    }
    lVar4 = param_5;
    func_0x00010c252440();
    if (lVar4 - 3U < 2) {
      lVar4 = (long)_DAT_112783ac4;
      if (*(int *)(param_3 + lVar4) == 3) {
        puVar2 = param_3;
        func_0x00010bf6b020(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c242ee0();
        _objc_release(puVar2);
        *(undefined4 *)(param_3 + lVar4) = 0;
        func_0x00010be35ea0(0,param_3);
      }
    }
    else {
      if (lVar4 == 2) {
        if (*(int *)(param_3 + _DAT_112783ac4) != 3) goto LAB_10920be5c;
        func_0x00010bde9e80(&uStack_58,dVar6,param_3);
        func_0x00010be61360(dVar6,param_3);
        puVar2 = param_3;
        func_0x00010c073120();
        if ((int)puVar2 == 0) {
          if ((8.0 < ABS(dVar6 - *(double *)(param_3 + _DAT_112783b08))) ||
             ((uVar3 = *(ulong *)(param_3 + _DAT_112783b0c), uVar3 != 0 &&
              (func_0x00010c074c20(), (uVar3 & 1) == 0)))) {
            puVar1 = (undefined8 *)(param_3 + _DAT_112783ae4);
            uStack_c8 = uStack_50;
            uStack_d0 = uStack_58;
            uStack_c0 = uStack_48;
            uStack_68 = puVar1[1];
            uStack_70 = *puVar1;
            uStack_60 = puVar1[2];
            _CMTimeSubtract(&uStack_a0,&uStack_d0,&uStack_70);
            func_0x00010bee22c0(param_3);
          }
          func_0x00010bf6b020(param_3);
          _objc_retainAutoreleasedReturnValue();
          uStack_98 = uStack_50;
          uStack_a0 = uStack_58;
          uStack_90 = uStack_48;
          func_0x00010c242e80();
        }
        else {
          func_0x00010bde9e80(&uStack_70,dVar6,param_3);
          uStack_c8 = uStack_68;
          uStack_d0 = uStack_70;
          uStack_c0 = uStack_60;
          func_0x00010bed0140(&uStack_a0,param_3);
          puVar1 = (undefined8 *)(param_3 + _DAT_112783ad0);
          puVar1[1] = uStack_98;
          *puVar1 = uStack_a0;
          puVar1[3] = uStack_88;
          puVar1[2] = uStack_90;
          puVar1[5] = uStack_78;
          puVar1[4] = uStack_80;
          puVar2 = param_3;
          func_0x00010bf6b020(param_3);
          _objc_retainAutoreleasedReturnValue();
          uStack_c8 = puVar1[1];
          uStack_d0 = *puVar1;
          uStack_c0 = puVar1[2];
          func_0x00010c242e80();
          _objc_release(puVar2);
          uStack_c8 = puVar1[1];
          uStack_d0 = *puVar1;
          uStack_c0 = puVar1[2];
          func_0x00010bee22c0(param_3);
          func_0x00010bf6b020(param_3);
          _objc_retainAutoreleasedReturnValue();
          uStack_c8 = uStack_98;
          uStack_d0 = uStack_a0;
          uStack_b8 = uStack_88;
          uStack_c0 = uStack_90;
          uStack_a8 = uStack_78;
          uStack_b0 = uStack_80;
          func_0x00010c242ea0();
        }
      }
      else {
        if ((lVar4 != 1) || (puVar2 = param_3, func_0x00010be44ba0(dVar6,param_2), (int)puVar2 == 0)
           ) goto LAB_10920be5c;
        lVar4 = (long)_DAT_112783b08;
        *(double *)(param_3 + lVar4) = dVar6;
        *(double *)((long)(param_3 + lVar4) + 8) = param_2;
        *(undefined4 *)(param_3 + _DAT_112783ac4) = 3;
        func_0x00010bde9e80(&uStack_a0,dVar6,param_3);
        func_0x00010be61360(dVar6,param_3);
        func_0x00010bf6b020(param_3);
        _objc_retainAutoreleasedReturnValue();
        uStack_c8 = uStack_98;
        uStack_d0 = uStack_a0;
        uStack_c0 = uStack_90;
        func_0x00010c242e80();
        _objc_release(param_3);
        param_3 = PTR_PTR_1126affa8;
        func_0x00010c22bc20(PTR_PTR_1126affa8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f8760();
      }
      _objc_release(param_3);
    }
  }
LAB_10920be5c:
  _objc_release(param_5);
  return;
}



/* Entry: 10920c1d8; end: 10920c497; -[SCSnapSegmentExpandedCell selectedTimeSlicePress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920c1d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  lVar3 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5);
  uVar4 = param_1;
  _objc_release(lVar3);
  lVar3 = param_5;
  func_0x00010c252440();
  if (lVar3 - 3U < 2) {
    lVar3 = (long)_DAT_112783ac4;
    if (*(int *)(param_3 + lVar3) == 4) {
      lVar2 = param_3;
      func_0x00010bf4dce0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27adc0(param_5);
      _objc_release(lVar2);
      func_0x00010bf03460(0x3fd3333333333333,0,0x3fe6666666666666,0,
                          PTR__OBJC_CLASS___UIView_1126aec20);
      func_0x00010bfb68e0(*(undefined8 *)(param_3 + _DAT_112783a70));
      puVar1 = (undefined8 *)(param_3 + _DAT_112783ab4);
      func_0x00010bde9e80(&uStack_a0,param_3);
      puVar1[1] = uStack_98;
      *puVar1 = uStack_a0;
      puVar1[2] = uStack_90;
      lVar2 = param_3 + _DAT_112783ad4;
      _objc_loadWeakRetained(lVar2);
      uStack_98 = puVar1[1];
      uStack_a0 = *puVar1;
      uStack_88 = puVar1[3];
      uStack_90 = puVar1[2];
      uStack_78 = puVar1[5];
      uStack_80 = puVar1[4];
      func_0x00010c242e20();
      _objc_release(lVar2);
      *(undefined4 *)(param_3 + lVar3) = 0;
    }
  }
  else if (lVar3 == 2) {
    if (*(int *)(param_3 + _DAT_112783ac4) == 4) {
      lVar3 = param_3;
      func_0x00010bf4dce0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27adc0(param_5);
      _objc_release(lVar3);
      func_0x00010bedf780(uVar4,param_3);
      func_0x00010bfb68e0(*(undefined8 *)(param_3 + _DAT_112783a70));
      func_0x00010bde9e80(&uStack_68,param_3);
      lVar3 = param_3 + _DAT_112783ab4;
      uStack_e8 = uStack_60;
      uStack_f0 = uStack_68;
      uStack_e0 = uStack_58;
      uStack_b8 = *(undefined8 *)(lVar3 + 0x20);
      uStack_c0 = *(undefined8 *)(lVar3 + 0x18);
      uStack_b0 = *(undefined8 *)(lVar3 + 0x28);
      _CMTimeRangeMake(&uStack_a0,&uStack_f0,&uStack_c0);
      param_3 = param_3 + _DAT_112783ad4;
      _objc_loadWeakRetained(param_3);
      uStack_e8 = uStack_98;
      uStack_f0 = uStack_a0;
      uStack_d8 = uStack_88;
      uStack_e0 = uStack_90;
      uStack_c8 = uStack_78;
      uStack_d0 = uStack_80;
      func_0x00010c242e40();
      _objc_release(param_3);
    }
  }
  else if ((lVar3 == 1) && (lVar3 = param_3, func_0x00010be44be0(param_1,param_2), (int)lVar3 != 0))
  {
    *(undefined4 *)(param_3 + _DAT_112783ac4) = 4;
  }
  _objc_release(param_5);
  return;
}



/* Entry: 10920c498; end: 10920c4a7;  */

void FUN_10920c498(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedf770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             PTR_s__updateSelectedTimeSliceViewWith_112595780);
  return;
}



/* Entry: 10920c4a8; end: 10920c647; -[SCSnapSegmentExpandedCell pointInside:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10920c4a8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar5 = param_3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf512a0(param_1,param_2,param_3,param_4,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010be44ba0(param_1,param_2);
  uVar1 = param_3;
  func_0x00010be44c00(param_1,param_2);
  uVar2 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112783a90;
  uVar4 = param_1;
  uVar7 = param_2;
  func_0x00010bf512a0(param_1,param_2);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_3 + lVar6);
  func_0x00010c102b20(uVar4,uVar7,uVar3,param_4,0);
  uVar2 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112783a98;
  func_0x00010bf512a0(param_1,param_2);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_3 + lVar6);
  func_0x00010c102b20(param_1,param_2,uVar4,param_4,0);
  uVar2 = param_3;
  func_0x00010c073120();
  if (((uVar2 & 1) == 0) && ((((uint)uVar5 | (uint)uVar1 | (uint)uVar3 | (uint)uVar4) & 1) != 0)) {
    uVar5 = 1;
  }
  else {
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010bf20c00();
    _CGRectContainsPoint();
    _objc_release(param_3);
  }
  return uVar5;
}



/* Entry: 10920c648; end: 10920c813; -[SCSnapSegmentExpandedCell hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920c648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_70;
  _objc_retain(param_7);
  puVar2 = param_5;
  func_0x00010c074c20();
  if ((((ulong)puVar2 & 1) != 0) || (puVar2 = param_5, func_0x00010beb3f00(), (int)puVar2 == 0))
  goto LAB_10920c7b4;
  puVar2 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  uVar8 = param_2;
  func_0x00010bf512a0(param_1,param_2,param_5);
  _objc_release(puVar2);
  puVar2 = param_5;
  func_0x00010be44c00(uVar6,uVar8);
  if ((int)puVar2 == 0) {
    lVar5 = (long)_DAT_112783a90;
    uVar3 = *(ulong *)(param_5 + lVar5);
    func_0x00010c074c20();
    if ((uVar3 & 1) != 0) {
LAB_10920c744:
      lVar5 = (long)_DAT_112783a98;
      uVar3 = *(ulong *)(param_5 + lVar5);
      func_0x00010c074c20();
      if ((uVar3 & 1) == 0) {
        func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar5));
        puVar2 = param_5;
        uVar7 = param_1;
        uVar9 = param_2;
        func_0x00010bf512a0(param_1,param_2);
        iVar1 = (int)puVar2;
        _CGRectContainsPoint(uVar6,uVar8,param_3,param_4,uVar7,uVar9);
        if (iVar1 != 0) goto LAB_10920c7a4;
      }
LAB_10920c7b4:
      puStack_68 = PTR_PTR_112701070;
      puStack_70 = param_5;
      _objc_msgSendSuper2(param_1,param_2,&puStack_70,PTR_s_hitTest_withEvent__1125d6850,param_7);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10920c7e8;
    }
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar5));
    puVar2 = param_5;
    uVar7 = param_1;
    uVar9 = param_2;
    func_0x00010bf512a0(param_1,param_2);
    iVar1 = (int)puVar2;
    _CGRectContainsPoint(uVar6,uVar8,param_3,param_4,uVar7,uVar9);
    if (iVar1 == 0) goto LAB_10920c744;
LAB_10920c7a4:
    param_5 = *(undefined1 **)(param_5 + lVar5);
  }
  _objc_retain(param_5);
  ppuVar4 = (undefined1 **)param_5;
LAB_10920c7e8:
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 10920c814; end: 10920c873; -[SCSnapSegmentExpandedCell dragStateDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920c814(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 - 1U < 2) {
    *(long *)(param_1 + _DAT_112783a50) = param_3;
  }
  else if (param_3 == 0) {
    lVar1 = (long)_DAT_112783a50;
    if (*(long *)(param_1 + lVar1) == 1) {
      func_0x00010c17d4a0(param_1,param_2,0);
    }
    *(undefined8 *)(param_1 + lVar1) = 0;
  }
  return;
}



/* Entry: 10920c874; end: 10920c8af; -[SCSnapSegmentExpandedCell deletePressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920c874(long param_1)

{
  param_1 = param_1 + _DAT_112783ad4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c242ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10920c8b0; end: 10920c8eb; -[SCSnapSegmentExpandedCell clipsReorderingDeletePressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920c8b0(long param_1)

{
  param_1 = param_1 + _DAT_112783b10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c242f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10920c8ec; end: 10920cb0b; -[SCSnapSegmentExpandedCell setTimeSliceSelectionModeEnabled:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920c8ec(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined1 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar2 = (undefined8 *)(param_1 + _DAT_112783ab4);
  uVar4 = (uint)param_3;
  if ((((*(byte *)((long)puVar2 + 0xc) & 1) == 0) || ((*(byte *)((long)puVar2 + 0x24) & 1) == 0)) ||
     (puVar2[5] != 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (uint)((ulong)puVar2[3] >> 0x3f);
  }
  if (((uVar4 == 0) || (uVar3 == 0)) && (*(byte *)(param_1 + _DAT_112783acc) != uVar4)) {
    uVar1 = (undefined1)param_3;
    *(undefined1 *)(param_1 + _DAT_112783acc) = uVar1;
    if ((param_3 & 1) == 0) {
      puVar2 = (undefined8 *)(param_1 + _DAT_112783ad0);
    }
    uStack_98 = puVar2[1];
    uStack_a0 = *puVar2;
    uStack_88 = puVar2[3];
    uStack_90 = puVar2[2];
    uStack_68 = puVar2[1];
    uStack_70 = *puVar2;
    uStack_78 = puVar2[5];
    uVar5 = puVar2[4];
    uStack_60 = puVar2[2];
    uStack_80 = uVar5;
    func_0x00010bde9ea0(param_1,param_2,&uStack_70);
    uVar6 = uVar5;
    _CMTimeRangeGetEnd(&uStack_70,&uStack_a0);
    func_0x00010bde9ea0(param_1,param_2,&uStack_70);
    func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_112783a84),param_2,uVar4 ^ 1);
    func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_112783a80),param_2,uVar4 ^ 1);
    func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_112783a88),param_2,param_3);
    func_0x00010bea6640(param_1,param_2,param_3);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112783ab8),param_2,uVar4 ^ 1);
    if ((param_3 & 1) == 0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112783aa0),param_2,0);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112783aa4),param_2,0);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112783a90),param_2,0);
    }
    uVar7 = 0x3fd3333333333333;
    if (param_4 == 0) {
      uVar7 = 0;
    }
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_10920cb0c;
    puStack_c8 = &UNK_110875e90;
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_10920cc08;
    puStack_f8 = &UNK_110857498;
    lStack_f0 = param_1;
    uStack_e8 = uVar1;
    lStack_c0 = param_1;
    uStack_b8 = uVar5;
    uStack_b0 = uVar6;
    uStack_a8 = uVar1;
    func_0x00010bf03460(uVar7,0,0x3fe6666666666666,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0,
                        &puStack_e0,&puStack_110);
  }
  return;
}



/* Entry: 10920cb0c; end: 10920cc07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920cb0c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x38) == '\0') {
    uVar2 = 0x3ff0000000000000;
  }
  func_0x00010c1677c0(uVar2,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112783aa4));
  uVar2 = 0;
  if (*(char *)(param_1 + 0x38) == '\0') {
    uVar2 = 0x3ff0000000000000;
  }
  func_0x00010c1677c0(uVar2,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112783aa0));
  uVar2 = 0;
  if (*(char *)(param_1 + 0x38) == '\0') {
    uVar2 = 0x3ff0000000000000;
  }
  func_0x00010c1677c0(uVar2,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112783a90));
  uVar2 = 0x3ff0000000000000;
  if (*(char *)(param_1 + 0x38) == '\0') {
    uVar2 = 0;
  }
  func_0x00010c1677c0(uVar2,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112783ab8));
  uVar2 = 0x3fe0000000000000;
  if (*(char *)(param_1 + 0x38) == '\0') {
    uVar2 = 0;
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0x3ff0000000000000,uVar2,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112783a70));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bedf750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20),PTR_s__updateSelectedTimeSliceViewWith_112595778);
  return;
}



/* Entry: 10920cc08; end: 10920cc73;  */

/* WARNING: Possible PIC construction at 0x00010920cc3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010920cc40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920cc08(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112783aa0),
               PTR_s_setHidden__1126479f8,1);
    return;
  }
  return;
}



/* Entry: 10920cc74; end: 10920cd4f; -[SCSnapSegmentExpandedCell setCollapsed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920cc74(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  *(char *)(param_1 + _DAT_112783abc) = (char)param_3;
  func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_112783a80),param_2,param_3 ^ 1);
  lVar1 = (long)_DAT_112783a8c;
  if ((param_3 & 1) == 0) {
    func_0x00010c074c20(*(undefined8 *)(param_1 + lVar1));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112783ad8));
  }
  else {
    func_0x00010c1a7f60();
    lVar1 = param_1;
    func_0x00010c0daf40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c074c20();
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112783ad8));
    _objc_release(lVar1);
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112783b00));
  func_0x00010c1b5280(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10920cd50; end: 10920cdf7; -[SCSnapSegmentExpandedCell setIsTrimmable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920cd50(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (long)_DAT_112783a9c;
  if (*(byte *)(param_1 + lVar1) != param_3) {
    *(char *)(param_1 + lVar1) = (char)param_3;
    func_0x00010c1677c0((double)param_3,*(undefined8 *)(param_1 + _DAT_112783aa0));
    uVar2 = NEON_ucvtf((ulong)*(byte *)(param_1 + lVar1));
    func_0x00010c1677c0(uVar2,*(undefined8 *)(param_1 + _DAT_112783aa4));
    func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_112783a84),param_2,
                        *(undefined1 *)(param_1 + lVar1));
    if ((*(byte *)(param_1 + lVar1) & 1) == 0) {
      lVar1 = (long)_DAT_112783b0c;
      func_0x00010c12c960(*(undefined8 *)(param_1 + lVar1));
      uVar2 = *(undefined8 *)(param_1 + lVar1);
      *(undefined8 *)(param_1 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 10920cdf8; end: 10920cea3; -[SCSnapSegmentExpandedCell setSegmentSupplementView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920cdf8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112783b14;
  if (*(long *)(param_1 + lVar2) != param_3) {
    if (*(long *)(param_1 + lVar2) != 0) {
      func_0x00010c12c960();
    }
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    if (*(long *)(param_1 + lVar2) == 0) {
      lVar3 = (long)_DAT_112783ac8;
      func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
      lVar2 = *(long *)(param_1 + lVar3);
      *(undefined8 *)(param_1 + lVar3) = 0;
    }
    else {
      func_0x00010c262d40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      lVar2 = param_1;
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10920cea4; end: 10920cfd3; -[SCSnapSegmentExpandedCell nonSeekablePlayheadLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920cea4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_112783ad8;
  lVar7 = *(long *)(param_2 + lVar8);
  if (lVar7 == 0) {
    puVar4 = PTR__OBJC_CLASS___CALayer_1126b1750;
    _objc_alloc_init();
    uVar6 = *(undefined8 *)(param_2 + lVar8);
    *(undefined **)(param_2 + lVar8) = puVar4;
    _objc_release(uVar6);
    func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar8),param_3,1);
    cVar2 = *(char *)(param_2 + _DAT_112783afc);
    func_0x00010bf20c00(param_2);
    _CGRectGetHeight();
    bVar3 = cVar2 == '\0';
    uVar6 = 0x4000000000000000;
    if (bVar3) {
      uVar6 = 0x3ff0000000000000;
    }
    uVar1 = 0x34;
    if (bVar3) {
      uVar1 = 0xd5;
    }
    func_0x00010c19f0e0(0,0,uVar6,param_1,*(undefined8 *)(param_2 + lVar8));
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c16e440(*(undefined8 *)(param_2 + lVar8),param_3,puVar5);
    _objc_release(puVar4);
    func_0x00010c207c40(0x40000000,*(undefined8 *)(param_2 + lVar8));
    func_0x00010c227960(0x3ff0000000000000,*(undefined8 *)(param_2 + lVar8));
    uVar6 = *(undefined8 *)(param_2 + _DAT_112783a6c);
    func_0x00010c08c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(uVar6);
    lVar7 = *(long *)(param_2 + lVar8);
  }
  _objc_retain(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 10920cfd4; end: 10920d0d3; -[SCSnapSegmentExpandedCell supplementViewContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920cfd4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = (long)_DAT_112783ac8;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bf20c00(param_1);
    func_0x00010c013de0();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112783a68);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(uVar5);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar2);
    lVar3 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066f80();
    _objc_release(lVar3);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10920d0d4; end: 10920d1bb; -[SCSnapSegmentExpandedCell playbackProgressLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920d0d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112783b00;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___CALayer_1126b1750;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x25);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5),param_2,puVar2);
    _objc_release(puVar1);
    func_0x00010c207c40(0x40000000,*(undefined8 *)(param_1 + lVar5));
    func_0x00010c227960(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar5));
    uVar3 = *(undefined8 *)(param_1 + _DAT_112783a6c);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10920d1bc; end: 10920d6a7; -[SCSnapSegmentExpandedCell timingInfoView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920d1bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = (long)_DAT_112783b0c;
  lVar17 = *(long *)(param_1 + lVar21);
  if (lVar17 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    uVar15 = *(undefined8 *)(param_1 + lVar21);
    *(undefined **)(param_1 + lVar21) = puVar1;
    _objc_release(uVar15);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar21),param_2,0);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf415a0(0x3fe3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x252525);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar21),param_2,puVar1);
    _objc_release(puVar1);
    uVar15 = *(undefined8 *)(param_1 + lVar21);
    func_0x00010c08c0e0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4020000000000000);
    _objc_release(uVar15);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar21),param_2,0);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar21),param_2,1);
    puVar1 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    lVar19 = (long)_DAT_112783b18;
    uVar15 = *(undefined8 *)(param_1 + lVar19);
    *(undefined **)(param_1 + lVar19) = puVar1;
    _objc_release(uVar15);
    func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar19),param_2,5);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x34);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar19),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19),param_2,0);
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar21),param_2,*(undefined8 *)(param_1 + lVar19))
    ;
    lVar17 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar17);
    uVar2 = *(undefined8 *)(param_1 + lVar21);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112783a70);
    func_0x00010bf34860(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar2;
    func_0x00010bf493a0(uVar2,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar20 = (long)_DAT_112783b1c;
    uVar16 = *(undefined8 *)(param_1 + lVar20);
    *(undefined8 *)(param_1 + lVar20) = uVar15;
    _objc_release(uVar16);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar21);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_1;
    func_0x00010c101200(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar17;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar2;
    func_0x00010bf493a0(uVar2,param_2,lVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112783b20);
    *(undefined8 *)(param_1 + _DAT_112783b20) = uVar15;
    _objc_release(uVar3);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uStack_98 = *(undefined8 *)(param_1 + lVar20);
    uVar4 = *(undefined8 *)(param_1 + lVar21);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar17;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar4;
    func_0x00010bf493c0(0xc030000000000000,uVar4,param_2,lVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar21);
    uStack_90 = uVar15;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar19);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf493c0(0x4030000000000000,uVar5,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar21);
    uStack_88 = uVar2;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar19);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bf493c0(0x4020000000000000,uVar7,param_2,uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar19);
    uStack_80 = uVar3;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar21);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar9;
    func_0x00010bf493a0(uVar9,param_2,uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar19);
    uStack_78 = uVar16;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + lVar21);
    func_0x00010bf348e0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x00010bf493a0(uVar11,param_2,uVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_98,6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar14);
    _objc_release(puVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar16);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar3);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar15);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(uVar4);
    lVar17 = *(long *)(param_1 + lVar21);
  }
  lVar21 = lVar17;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar18 = (long)_DAT_112783af0;
    lVar17 = *(long *)(lVar21 + lVar18);
    if (lVar17 == 0) {
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      func_0x00010c013de0(0,0,0x3ff0000000000000,0x4052800000000000);
      uVar15 = *(undefined8 *)(lVar21 + lVar18);
      *(undefined **)(lVar21 + lVar18) = puVar1;
      _objc_release(uVar15);
      func_0x00010c21e900(*(undefined8 *)(lVar21 + lVar18),param_2,0);
      func_0x00010c1677c0(0,*(undefined8 *)(lVar21 + lVar18));
      lVar17 = lVar21;
      func_0x00010bf4dce0(lVar21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066fa0();
      _objc_release(lVar17);
      lVar17 = *(long *)(lVar21 + lVar18);
    }
    _objc_retain(lVar17);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar17);
  return;
}



/* Entry: 10920d6a8; end: 10920d75f; -[SCSnapSegmentExpandedCell playheadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920d6a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112783af0;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(0,0,0x3ff0000000000000,0x4052800000000000);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar4));
    lVar3 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fa0();
    _objc_release(lVar3);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10920d760; end: 10920d80f; -[SCSnapSegmentExpandedCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920d760(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112701070;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112783adc);
  *(undefined8 *)(param_1 + _DAT_112783adc) = 0;
  _objc_release(uVar3);
  puVar2 = PTR__kCMTimeRangeInvalid_110348660;
  puVar1 = (undefined8 *)(param_1 + _DAT_112783ae4);
  uVar4 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
  uVar3 = *(undefined8 *)PTR__kCMTimeRangeInvalid_110348660;
  uVar6 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
  uVar5 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  uVar8 = *(undefined8 *)(puVar2 + 0x28);
  uVar7 = *(undefined8 *)(puVar2 + 0x20);
  puVar1[5] = uVar8;
  puVar1[4] = uVar7;
  puVar1 = (undefined8 *)(param_1 + _DAT_112783ad0);
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  puVar1[5] = uVar8;
  puVar1[4] = uVar7;
  puVar2 = PTR__kCMTimeInvalid_110348648;
  puVar1 = (undefined8 *)(param_1 + _DAT_112783aa8);
  uVar3 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
  puVar1[1] = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
  *puVar1 = uVar3;
  puVar1[2] = *(undefined8 *)(puVar2 + 0x10);
  *(undefined1 *)(param_1 + _DAT_112783abc) = 0;
  return;
}



/* Entry: 10920d810; end: 10920da63; -[SCSnapSegmentExpandedCell _addLayoutContaintsForView:toMatchParentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10920d810(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                   undefined8 param_5,ulong param_6,undefined8 param_7)

{
  double *pdVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *puVar14;
  double *pdVar15;
  int iVar16;
  undefined *puVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010c219b60(param_6);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = param_6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar12 = param_7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  uVar13 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar14;
  func_0x00010beef8c0(puVar2);
  iVar16 = (int)puVar17;
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar21);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return uVar3;
  }
  ___stack_chk_fail();
  uVar4 = uVar3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(uVar4);
  if (param_1 <= param_3) {
    param_3 = param_1;
  }
  func_0x00010bf345e0(*(undefined8 *)(uVar3 + (long)_DAT_112783aa4));
  pdVar1 = (double *)(uVar3 + (long)_DAT_112783ad0);
  pdVar15 = (double *)(uVar3 + (long)_DAT_112783aa8);
  dStack_1c8 = pdVar1[1];
  dStack_1d0 = *pdVar1;
  dStack_1c0 = pdVar1[2];
  dStack_158 = pdVar15[1];
  dStack_160 = *pdVar15;
  dStack_150 = pdVar15[2];
  _CMTimeAdd(&dStack_148,&dStack_1d0,&dStack_160);
  dStack_1c8 = (double)uStack_140;
  dStack_1d0 = dStack_148;
  dStack_1c0 = (double)uStack_138;
  func_0x00010bde9ea0(uVar3);
  if (dStack_148 < param_3) {
    func_0x00010bde9e80(&dStack_1d0,param_3,uVar3);
    dStack_178 = dStack_1c8;
    dStack_180 = dStack_1d0;
    dStack_170 = dStack_1c0;
    dStack_198 = pdVar15[1];
    dStack_1a0 = *pdVar15;
    dStack_190 = pdVar15[2];
    _CMTimeSubtract(&dStack_160,&dStack_180,&dStack_1a0);
    dStack_178 = dStack_158;
    dStack_180 = dStack_160;
    dStack_170 = dStack_150;
    func_0x00010bde9ea0(uVar3);
    func_0x00010bf345e0(*(undefined8 *)(uVar3 + (long)_DAT_112783aa0));
    pdVar1[1] = dStack_158;
    *pdVar1 = dStack_160;
    pdVar1[2] = dStack_150;
    dVar19 = pdVar15[2];
    dVar20 = *pdVar15;
    pdVar1[4] = pdVar15[1];
    pdVar1[3] = dVar20;
    pdVar1[5] = dVar19;
  }
  pdVar15 = (double *)(uVar3 + (long)_DAT_112783aac);
  dStack_1c8 = pdVar1[1];
  dStack_1d0 = *pdVar1;
  dStack_1c0 = pdVar1[2];
  dStack_178 = pdVar15[1];
  dStack_180 = *pdVar15;
  dStack_170 = pdVar15[2];
  _CMTimeAdd(&dStack_160,&dStack_1d0,&dStack_180);
  dStack_1c8 = pdVar1[1];
  dStack_1d0 = *pdVar1;
  dStack_1b8 = pdVar1[3];
  dStack_1c0 = pdVar1[2];
  dStack_1a8 = pdVar1[5];
  dStack_1b0 = pdVar1[4];
  _CMTimeRangeGetEnd(&dStack_180,&dStack_1d0);
  dStack_1c8 = dStack_158;
  dStack_1d0 = dStack_160;
  dStack_1c0 = dStack_150;
  pdVar15 = &dStack_1d0;
  _CMTimeCompare(pdVar15,&dStack_180);
  if (0 < (int)pdVar15) {
    dStack_1c8 = pdVar1[1];
    dStack_1d0 = *pdVar1;
    dStack_1b8 = pdVar1[3];
    dStack_1c0 = pdVar1[2];
    dStack_1a8 = pdVar1[5];
    dStack_1b0 = pdVar1[4];
    _CMTimeRangeGetEnd(&dStack_180,&dStack_1d0);
    dStack_158 = dStack_178;
    dStack_160 = dStack_180;
    dStack_150 = dStack_170;
  }
  dStack_1c8 = dStack_158;
  dStack_1d0 = dStack_160;
  dStack_1c0 = dStack_150;
  dVar19 = dStack_160;
  func_0x00010bde9ea0(uVar3);
  dVar20 = param_3;
  if (param_3 < dVar19) {
    dVar20 = dVar19 - param_3;
    _pow(dVar20,0x3fe4cccccccccccd);
    dVar19 = dVar19 - dVar20;
    func_0x00010bf345e0(*(undefined8 *)(uVar3 + (long)_DAT_112783aa0));
    if (dVar20 <= dVar19) {
      dVar20 = dVar19;
    }
  }
  uVar21 = 0x3fc999999999999a;
  if (iVar16 == 0) {
    uVar21 = 0;
  }
  func_0x00010bf03420(uVar21,PTR__OBJC_CLASS___UIView_1126aec20);
  return (ulong)(dVar20 == param_3);
}



/* Entry: 10920da64; end: 10920dd6f; -[SCSnapSegmentExpandedCell _updateRightTrimHandlerPosition:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10920da64(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5,
                  int param_6)

{
  double *pdVar1;
  long lVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  lVar2 = param_4;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar2);
  if (param_1 <= param_3) {
    param_3 = param_1;
  }
  func_0x00010bf345e0(*(undefined8 *)(param_4 + _DAT_112783aa4));
  pdVar1 = (double *)(param_4 + _DAT_112783ad0);
  pdVar3 = (double *)(param_4 + _DAT_112783aa8);
  dStack_118 = pdVar1[1];
  dStack_120 = *pdVar1;
  dStack_110 = pdVar1[2];
  dStack_a8 = pdVar3[1];
  dStack_b0 = *pdVar3;
  dStack_a0 = pdVar3[2];
  _CMTimeAdd(&dStack_98,&dStack_120,&dStack_b0);
  dStack_118 = (double)uStack_90;
  dStack_120 = dStack_98;
  dStack_110 = (double)uStack_88;
  func_0x00010bde9ea0(param_4);
  if (dStack_98 < param_3) {
    func_0x00010bde9e80(&dStack_120,param_3,param_4);
    dStack_c8 = dStack_118;
    dStack_d0 = dStack_120;
    dStack_c0 = dStack_110;
    dStack_e8 = pdVar3[1];
    dStack_f0 = *pdVar3;
    dStack_e0 = pdVar3[2];
    _CMTimeSubtract(&dStack_b0,&dStack_d0,&dStack_f0);
    dStack_c8 = dStack_a8;
    dStack_d0 = dStack_b0;
    dStack_c0 = dStack_a0;
    func_0x00010bde9ea0(param_4);
    func_0x00010bf345e0(*(undefined8 *)(param_4 + _DAT_112783aa0));
    pdVar1[1] = dStack_a8;
    *pdVar1 = dStack_b0;
    pdVar1[2] = dStack_a0;
    dVar4 = pdVar3[2];
    dVar5 = *pdVar3;
    pdVar1[4] = pdVar3[1];
    pdVar1[3] = dVar5;
    pdVar1[5] = dVar4;
  }
  pdVar3 = (double *)(param_4 + _DAT_112783aac);
  dStack_118 = pdVar1[1];
  dStack_120 = *pdVar1;
  dStack_110 = pdVar1[2];
  dStack_c8 = pdVar3[1];
  dStack_d0 = *pdVar3;
  dStack_c0 = pdVar3[2];
  _CMTimeAdd(&dStack_b0,&dStack_120,&dStack_d0);
  dStack_118 = pdVar1[1];
  dStack_120 = *pdVar1;
  dStack_108 = pdVar1[3];
  dStack_110 = pdVar1[2];
  dStack_f8 = pdVar1[5];
  dStack_100 = pdVar1[4];
  _CMTimeRangeGetEnd(&dStack_d0,&dStack_120);
  dStack_118 = dStack_a8;
  dStack_120 = dStack_b0;
  dStack_110 = dStack_a0;
  pdVar3 = &dStack_120;
  _CMTimeCompare(pdVar3,&dStack_d0);
  if (0 < (int)pdVar3) {
    dStack_118 = pdVar1[1];
    dStack_120 = *pdVar1;
    dStack_108 = pdVar1[3];
    dStack_110 = pdVar1[2];
    dStack_f8 = pdVar1[5];
    dStack_100 = pdVar1[4];
    _CMTimeRangeGetEnd(&dStack_d0,&dStack_120);
    dStack_a8 = dStack_c8;
    dStack_b0 = dStack_d0;
    dStack_a0 = dStack_c0;
  }
  dStack_118 = dStack_a8;
  dStack_120 = dStack_b0;
  dStack_110 = dStack_a0;
  dVar4 = dStack_b0;
  func_0x00010bde9ea0(param_4);
  dVar5 = param_3;
  if (param_3 < dVar4) {
    dVar5 = dVar4 - param_3;
    _pow(dVar5,0x3fe4cccccccccccd);
    dVar4 = dVar4 - dVar5;
    func_0x00010bf345e0(*(undefined8 *)(param_4 + _DAT_112783aa0));
    if (dVar5 <= dVar4) {
      dVar5 = dVar4;
    }
  }
  uVar6 = 0x3fc999999999999a;
  if (param_6 == 0) {
    uVar6 = 0;
  }
  func_0x00010bf03420(uVar6,PTR__OBJC_CLASS___UIView_1126aec20);
  return dVar5 == param_3;
}



/* Entry: 10920dd70; end: 10920de7f;  */

/* WARNING: Possible PIC construction at 0x00010920de4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010920de50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920dd70(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  
  bVar1 = false;
  if ((*(double *)(param_1 + 0x28) == *(double *)PTR__CGPointZero_110347540) &&
     (bVar1 = false,
     !NAN(*(double *)(param_1 + 0x30)) && !NAN(*(double *)(PTR__CGPointZero_110347540 + 8)))) {
    bVar1 = *(double *)(param_1 + 0x30) == *(double *)(PTR__CGPointZero_110347540 + 8);
  }
  if (!bVar1) {
    func_0x00010c17a6a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112783aa0));
  }
  func_0x00010c17a6a0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112783aa4));
  dVar4 = *(double *)(param_1 + 0x38);
  uVar6 = 0;
  func_0x00010c17a6a0(dVar4,0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112783a90));
  lVar2 = (long)_DAT_112783aa0;
  func_0x00010bf345e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  lVar3 = (long)_DAT_112783a70;
  dVar5 = dVar4;
  func_0x00010bfb68e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
  dVar7 = *(double *)(param_1 + 0x38);
  func_0x00010bf345e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  func_0x00010bfb68e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar4,uVar6,dVar7 - dVar5,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3),
             PTR_s_setFrame__112645658);
  return;
}



/* Entry: 10920de80; end: 10920e15f; -[SCSnapSegmentExpandedCell _updateLeftTrimHandlerPosition:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10920de80(double param_1,long param_2,undefined8 param_3,int param_4)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  func_0x00010bf345e0(*(undefined8 *)(param_2 + _DAT_112783aa0));
  pdVar1 = (double *)(param_2 + _DAT_112783ad0);
  dStack_c8 = pdVar1[1];
  dStack_d0 = *pdVar1;
  dStack_b8 = pdVar1[3];
  dStack_c0 = pdVar1[2];
  dStack_a8 = pdVar1[5];
  dStack_b0 = pdVar1[4];
  _CMTimeRangeGetEnd(&dStack_98,&dStack_d0);
  pdVar2 = (double *)(param_2 + _DAT_112783aa8);
  dStack_c8 = (double)uStack_90;
  dStack_d0 = dStack_98;
  dStack_c0 = (double)uStack_88;
  dStack_f8 = pdVar2[1];
  dStack_100 = *pdVar2;
  dStack_f0 = pdVar2[2];
  _CMTimeSubtract(&dStack_e8,&dStack_d0,&dStack_100);
  dStack_c8 = dStack_e0;
  dStack_d0 = dStack_e8;
  dStack_c0 = dStack_d8;
  func_0x00010bde9ea0(param_2);
  if (param_1 < dStack_e8) {
    func_0x00010bde9e80(&dStack_d0,param_1,param_2);
    dStack_118 = dStack_c8;
    dStack_120 = dStack_d0;
    dStack_110 = dStack_c0;
    dStack_138 = pdVar2[1];
    dStack_140 = *pdVar2;
    dStack_130 = pdVar2[2];
    _CMTimeAdd(&dStack_100,&dStack_120,&dStack_140);
    dStack_118 = dStack_f8;
    dStack_120 = dStack_100;
    dStack_110 = dStack_f0;
    func_0x00010bde9ea0(param_2);
    func_0x00010bf345e0(*(undefined8 *)(param_2 + _DAT_112783aa4));
    pdVar1[1] = dStack_c8;
    *pdVar1 = dStack_d0;
    pdVar1[2] = dStack_c0;
    dVar3 = pdVar2[2];
    dVar6 = *pdVar2;
    pdVar1[4] = pdVar2[1];
    pdVar1[3] = dVar6;
    pdVar1[5] = dVar3;
  }
  dStack_c8 = pdVar1[1];
  dStack_d0 = *pdVar1;
  dStack_b8 = pdVar1[3];
  dStack_c0 = pdVar1[2];
  dStack_a8 = pdVar1[5];
  dStack_b0 = pdVar1[4];
  _CMTimeRangeGetEnd(&dStack_100,&dStack_d0);
  pdVar2 = (double *)(param_2 + _DAT_112783aac);
  dStack_118 = pdVar2[1];
  dStack_120 = *pdVar2;
  dStack_110 = pdVar2[2];
  _CMTimeSubtract(&dStack_d0,&dStack_100,&dStack_120);
  dStack_f8 = dStack_c8;
  dStack_100 = dStack_d0;
  dStack_f0 = dStack_c0;
  dStack_118 = pdVar1[1];
  dStack_120 = *pdVar1;
  dStack_110 = pdVar1[2];
  pdVar2 = &dStack_100;
  _CMTimeCompare(pdVar2,&dStack_120);
  if ((int)pdVar2 < 0) {
    dStack_c8 = pdVar1[1];
    dStack_d0 = *pdVar1;
    dStack_c0 = pdVar1[2];
  }
  dStack_f8 = dStack_c8;
  dStack_100 = dStack_d0;
  dStack_f0 = dStack_c0;
  dVar3 = dStack_d0;
  func_0x00010bde9ea0(param_2);
  dVar6 = param_1;
  if (dVar3 < param_1) {
    dVar4 = param_1 - dVar3;
    _pow(dVar4,0x3fe4cccccccccccd);
    dVar6 = dVar3 + dVar4;
    func_0x00010bf345e0(*(undefined8 *)(param_2 + _DAT_112783aa4));
    if (dVar4 <= dVar6) {
      dVar6 = dVar4;
    }
  }
  uVar5 = 0x3fc999999999999a;
  if (param_4 == 0) {
    uVar5 = 0;
  }
  func_0x00010bf03400(uVar5,PTR__OBJC_CLASS___UIView_1126aec20);
  return dVar6 == param_1;
}



/* Entry: 10920e160; end: 10920e267;  */

/* WARNING: Possible PIC construction at 0x00010920e234: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010920e238) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920e160(long param_1)

{
  bool bVar1;
  long lVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  
  bVar1 = false;
  if ((*(double *)(param_1 + 0x28) == *(double *)PTR__CGPointZero_110347540) &&
     (bVar1 = false,
     !NAN(*(double *)(param_1 + 0x30)) && !NAN(*(double *)(PTR__CGPointZero_110347540 + 8)))) {
    bVar1 = *(double *)(param_1 + 0x30) == *(double *)(PTR__CGPointZero_110347540 + 8);
  }
  if (!bVar1) {
    func_0x00010c17a6a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112783aa4));
    func_0x00010c17a6a0(*(undefined8 *)(param_1 + 0x28),0,
                        *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112783a90));
  }
  dVar3 = *(double *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c17a6a0(dVar3,uVar4,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112783aa0))
  ;
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  lVar2 = (long)_DAT_112783a70;
  func_0x00010bfb68e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  func_0x00010bf345e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112783aa4));
  dVar5 = *(double *)(param_1 + 0x38);
  func_0x00010bfb68e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar6,uVar4,dVar3 - dVar5,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2),
             PTR_s_setFrame__112645658);
  return;
}



/* Entry: 10920e268; end: 10920e327; -[SCSnapSegmentExpandedCell _trimmedSegmentTimeRangeUsingTrimmerLocations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920e268(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR__kCMTimeRangeInvalid_110348660;
  if ((*(long *)(param_2 + _DAT_112783aa0) != 0) &&
     (lVar2 = (long)_DAT_112783aa4, *(long *)(param_2 + lVar2) != 0)) {
    func_0x00010bf345e0();
    func_0x00010bde9e80(&uStack_48,param_2);
    func_0x00010bf345e0(*(undefined8 *)(param_2 + lVar2));
    func_0x00010bde9e80(&uStack_60,param_2);
    uStack_78 = uStack_40;
    uStack_80 = uStack_48;
    uStack_70 = uStack_38;
    uStack_98 = uStack_58;
    uStack_a0 = uStack_60;
    uStack_90 = uStack_50;
    _CMTimeRangeFromTimeToTime(param_1,&uStack_80,&uStack_a0);
    return;
  }
  uVar3 = *(undefined8 *)PTR__kCMTimeRangeInvalid_110348660;
  uVar5 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
  uVar4 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
  param_1[1] = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  uVar3 = *(undefined8 *)(puVar1 + 0x20);
  param_1[5] = *(undefined8 *)(puVar1 + 0x28);
  param_1[4] = uVar3;
  return;
}



/* Entry: 10920e328; end: 10920e3ff; -[SCSnapSegmentExpandedCell _correspondingXPositionForTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10920e328(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                    undefined8 param_5,double *param_6)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  
  pdVar1 = (double *)(param_4 + _DAT_112783ae4);
  dStack_68 = pdVar1[1];
  dVar2 = *pdVar1;
  dStack_60 = pdVar1[2];
  dStack_70 = dVar2;
  _CMTimeGetSeconds(&dStack_70);
  dStack_68 = pdVar1[4];
  dVar3 = pdVar1[3];
  dStack_60 = pdVar1[5];
  dStack_70 = dVar3;
  _CMTimeGetSeconds(&dStack_70);
  dVar4 = 0.0;
  if (0.0 < dVar3) {
    dStack_68 = param_6[1];
    dVar4 = *param_6;
    dStack_60 = param_6[2];
    dStack_70 = dVar4;
    _CMTimeGetSeconds(&dStack_70);
    func_0x00010bf4dce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar4 = ((dVar4 - dVar2) / dVar3) * param_3;
    _objc_release(param_4);
  }
  return dVar4;
}



/* Entry: 10920e400; end: 10920e517; -[SCSnapSegmentExpandedCell _correspondingTimeForXPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920e400(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar2 = param_5;
  dVar4 = param_2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar3 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  param_4 = (param_2 - dVar4) / param_4;
  _objc_release(lVar3);
  _objc_release(lVar2);
  dVar4 = 1.0;
  if (param_4 <= 1.0) {
    dVar4 = param_4;
  }
  puVar1 = (undefined8 *)(param_5 + _DAT_112783ae4);
  uStack_78 = puVar1[4];
  uStack_80 = puVar1[3];
  uStack_70 = puVar1[5];
  _CMTimeMultiplyByFloat64(&uStack_60,dVar4,&uStack_80);
  uStack_98 = uStack_58;
  uStack_a0 = uStack_60;
  uStack_90 = uStack_50;
  _CMTimeConvertScale(&uStack_80,&uStack_a0,*(undefined4 *)(puVar1 + 4),1);
  uStack_50 = uStack_70;
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  uStack_98 = uStack_78;
  uStack_a0 = uStack_80;
  uStack_90 = uStack_70;
  uStack_80 = *puVar1;
  uStack_78 = puVar1[1];
  uStack_70 = puVar1[2];
  _CMTimeAdd(param_1,&uStack_80,&uStack_a0);
  return;
}



/* Entry: 10920e518; end: 10920e85f; -[SCSnapSegmentExpandedCell _displayOriginalThumbnails] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920e518(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined1 *param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_158 [8];
  ulong uStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar10 = (long)_DAT_112783a6c;
  lVar1 = *(long *)(param_5 + lVar10);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_130;
    do {
      lVar11 = 0;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010c12c960(*(undefined8 *)(lStack_138 + lVar11 * 8));
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  lVar1 = (long)_DAT_112783adc;
  lVar2 = *(long *)(param_5 + lVar1);
  func_0x00010bf529e0();
  puVar3 = (undefined *)0x0;
  if (lVar2 != 0) {
    if (*(char *)(param_5 + _DAT_112783b24) == '\x01') {
      param_3 = *(double *)(param_5 + _DAT_112783ae0);
      param_4 = ((double *)(param_5 + _DAT_112783ae0))[1];
    }
    else {
      func_0x00010bf20c00(param_5);
      uVar12 = *(ulong *)(param_5 + lVar1);
      func_0x00010bf529e0(uVar12);
      func_0x00010bf20c00(param_5);
      param_3 = param_3 / (double)uVar12;
    }
    puVar3 = PTR____NSArray0__struct_11034ab48;
    func_0x00010c0d3c80();
    lVar2 = *(long *)(param_5 + lVar1);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      uVar12 = 0;
      do {
        puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
        _objc_alloc();
        func_0x00010c013de0(param_3 * (double)uVar12,0,param_3,param_4);
        puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440(puVar4);
        _objc_release(puVar5);
        func_0x00010befbb60(*(undefined8 *)(param_5 + lVar10));
        func_0x00010befa120(puVar3);
        _objc_release(puVar4);
        uVar6 = *(ulong *)(param_5 + lVar1);
        func_0x00010bf529e0();
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar6);
    }
    lVar2 = *(long *)(param_5 + lVar1);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      uVar12 = 0;
      do {
        _objc_initWeak(auStack_148,param_5);
        uVar7 = *(undefined8 *)(param_5 + lVar1);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar3);
        puVar8 = auStack_158;
        param_6 = auStack_148;
        uStack_150 = uVar12;
        _objc_copyWeak(puVar8,param_6);
        func_0x000107c30a80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26dc20(param_5);
        func_0x00010c297280(uVar7);
        _objc_release(puVar8);
        _objc_release(uVar7);
        _objc_destroyWeak(auStack_158);
        _objc_release(puVar3);
        _objc_destroyWeak(auStack_148);
        uVar6 = *(ulong *)(param_5 + lVar1);
        func_0x00010bf529e0();
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar6);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_148);
  __Unwind_Resume();
  uVar7 = *(undefined8 *)(puVar3 + 0x20);
  _objc_retain(param_6);
  func_0x00010c0dfd40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar3 + 0x28;
  _objc_loadWeakRetained(puVar3);
  func_0x00010bea8660();
  _objc_release(param_6);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 10920e860; end: 10920e8db;  */

void FUN_10920e860(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0dfd40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea8660();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10920e8dc; end: 10920ea2b; -[SCSnapSegmentExpandedCell _setThumbnailView:withImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920e8dc(undefined8 param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,ulong param_7,undefined8 param_8)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_class(PTR__OBJC_CLASS___UIImageView_1126aec28);
  uVar2 = param_7;
  _objc_opt_isKindOfClass(param_7,puVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010c1a9f00(param_7);
    uVar2 = *(ulong *)(param_5 + _DAT_112783adc);
    func_0x00010bf529e0();
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    func_0x00010bf20c00(param_5);
    dVar4 = (double)uVar2;
    param_3 = param_3 / dVar4;
    func_0x00010bf20c00(param_5);
    func_0x00010c23d0a0(param_8);
    func_0x00010c23d0a0(param_8);
    if (0.1 < ABS(dVar4 / param_2 - param_3 / param_4)) {
      lVar3 = param_5;
      func_0x00010c0f7f80();
      if (((int)lVar3 == 0) || (*(char *)(param_5 + _DAT_112783abc) != '\x01')) {
        func_0x00010c23d0a0(param_8);
        func_0x00010c23d0a0(param_8);
        func_0x00010c182220(param_7);
      }
      else {
        func_0x00010c182220(param_7);
        func_0x00010c17d4c0(param_7);
      }
    }
  }
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10920ea2c; end: 10920ebe7; -[SCSnapSegmentExpandedCell _movePlayheadToOffset:disableImplicitAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920ea2c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (((param_4 & 1) == 0) && (*(char *)(param_2 + _DAT_112783ac0) != '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718,param_3,1);
  }
  if (*(char *)(param_2 + _DAT_112783abc) == '\x01') {
    _CATransform3DMakeTranslation(&uStack_d0,param_1,0,0);
    uStack_108 = uStack_88;
    uStack_110 = uStack_90;
    uStack_f8 = uStack_78;
    uStack_100 = uStack_80;
    uStack_e8 = uStack_68;
    uStack_f0 = uStack_70;
    uStack_d8 = uStack_58;
    uStack_e0 = uStack_60;
    uStack_148 = uStack_c8;
    uStack_150 = uStack_d0;
    uStack_138 = uStack_b8;
    uStack_140 = uStack_c0;
    uStack_128 = uStack_a8;
    uStack_130 = uStack_b0;
    uStack_118 = uStack_98;
    uStack_120 = uStack_a0;
    func_0x00010c219960(*(undefined8 *)(param_2 + _DAT_112783ad8),param_3,&uStack_150);
    if (*(char *)(param_2 + _DAT_112783afc) == '\x01') {
      lVar2 = param_2;
      func_0x00010c0fff20(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar2);
      lVar2 = param_2;
      func_0x00010bf4dce0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
      func_0x00010c19f0e0(0,0,param_1,uStack_b0,*(undefined8 *)(param_2 + _DAT_112783b00));
      _objc_release(lVar2);
    }
  }
  else {
    _CATransform3DMakeTranslation(&uStack_1d0,param_1,0,0);
    uStack_108 = uStack_188;
    uStack_110 = uStack_190;
    uStack_f8 = uStack_178;
    uStack_100 = uStack_180;
    uStack_e8 = uStack_168;
    uStack_f0 = uStack_170;
    uStack_d8 = uStack_158;
    uStack_e0 = uStack_160;
    uStack_148 = uStack_1c8;
    uStack_150 = uStack_1d0;
    uStack_138 = uStack_1b8;
    uStack_140 = uStack_1c0;
    uStack_128 = uStack_1a8;
    uStack_130 = uStack_1b0;
    uStack_118 = uStack_198;
    uStack_120 = uStack_1a0;
    func_0x00010c219960(*(undefined8 *)(param_2 + _DAT_112783a8c),param_3,&uStack_150);
  }
  func_0x00010c17a840(param_1,*(undefined8 *)(param_2 + _DAT_112783af0));
  if (bVar1) {
    func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718,param_3,0);
  }
  return;
}



/* Entry: 10920ebe8; end: 10920ec47; -[SCSnapSegmentExpandedCell _shouldHandleTouchEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10920ebe8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  
  uVar1 = param_1 + _DAT_112783ad4;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c242f20();
  if ((uVar2 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + _DAT_112783a94) ^ 1;
  }
  else {
    bVar3 = 1;
  }
  _objc_release(uVar1);
  return bVar3 & 1;
}



/* Entry: 10920ec48; end: 10920ed03; -[SCSnapSegmentExpandedCell _isTouchPointInPlayheadView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10920ec48(double param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  double dVar3;
  undefined1 auStack_c0 [96];
  double dStack_60;
  
  if ((*(byte *)(param_3 + _DAT_112783b28) & 1) != 0) {
    return 1;
  }
  lVar2 = (long)_DAT_112783a8c;
  if (*(long *)(param_3 + lVar2) == 0) {
    dVar3 = -10.0;
    uVar1 = 0;
    dStack_60 = param_1;
  }
  else {
    func_0x00010c27a460(auStack_c0);
    uVar1 = *(ulong *)(param_3 + lVar2);
    dVar3 = dStack_60 + -10.0;
  }
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _CGRectContainsPoint(dVar3,0,0x4034000000000000,dStack_60,param_1,param_2);
  if ((uVar1 & 1) == 0) {
    func_0x00010c073120(param_3);
  }
  else {
    param_3 = 1;
  }
  return param_3;
}



/* Entry: 10920ed04; end: 10920ed47; -[SCSnapSegmentExpandedCell _isTouchPointInSelectedTimeSlice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920ed04(long param_1)

{
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + _DAT_112783a70));
  _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 10920ed48; end: 10920edbb; -[SCSnapSegmentExpandedCell _isTouchPointInTrimHandlers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920ed48(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = (int)*(undefined8 *)(param_3 + (long)_DAT_112783a84);
  func_0x00010c071800();
  if ((iVar1 != 0) && (uVar2 = param_3, func_0x00010be44b80(param_1,param_2), (uVar2 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be44bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,param_2,param_3,PTR_s__isTouchPointInRightTrimHandle__11256ec90);
    return;
  }
  return;
}


