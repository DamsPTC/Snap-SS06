/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b73b4c4; end: 10b73b4cb; -[SCStickerSizeInfo isTracking] */

undefined1 FUN_10b73b4c4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b73b4cc; end: 10b73b4d3; -[SCStickerSizeInfo trackingTrajectory] */

undefined8 FUN_10b73b4cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b73b4d4; end: 10b73b4db; -[SCStickerSizeInfo uniqueId] */

undefined8 FUN_10b73b4d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b73b4dc; end: 10b73b4e3; -[SCStickerSizeInfo isFlipped] */

undefined1 FUN_10b73b4dc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b73b4e4; end: 10b73b4ef; -[SCStickerSizeInfo .cxx_destruct] */

void FUN_10b73b4e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10b73b4f0; end: 10b73b55f; -[SCStickerTappableElementBounds initWithCornerRadiusScaleFactor:size:center:] */

void FUN_10b73b4f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_11270a568;
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



/* Entry: 10b73b560; end: 10b73b583; -[SCStickerTappableElementBounds copyWithZone:] */

undefined8 FUN_10b73b560(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b73b584; end: 10b73b67b; -[SCStickerTappableElementBounds hash] */

ulong * FUN_10b73b584(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  double dVar8;
  double dVar9;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar3 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_40 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_38 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_30 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar6 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_28 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_20 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  func_0x000107c3191c(&uStack_40,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar3 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar7 = (undefined1 *)puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar7);
      if (((ulong)puVar4 & 1) != 0) {
        dVar9 = ABS(*(double *)((long)puVar3 + 8) - *(double *)(param_3 + 8));
        dVar8 = ABS(*(double *)((long)puVar3 + 8) + *(double *)(param_3 + 8)) *
                2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
          bVar2 = dVar9 < dVar8;
        }
        if (bVar2) {
          puVar7 = (undefined1 *)0x0;
          if ((*(double *)((long)puVar3 + 0x10) == *(double *)(param_3 + 0x10)) &&
             (*(double *)((long)puVar3 + 0x18) == *(double *)(param_3 + 0x18))) {
            uVar5 = 0;
            if (*(double *)((long)puVar3 + 0x28) == *(double *)(param_3 + 0x28)) {
              uVar5 = (uint)(*(double *)((long)puVar3 + 0x20) == *(double *)(param_3 + 0x20));
            }
            puVar7 = (undefined1 *)(ulong)uVar5;
          }
          goto LAB_10b73b748;
        }
      }
      puVar7 = (undefined1 *)0x0;
    }
  }
LAB_10b73b748:
  _objc_release(param_3);
  return (ulong *)puVar7;
}



/* Entry: 10b73b67c; end: 10b73b763; -[SCStickerTappableElementBounds isEqual:] */

bool FUN_10b73b67c(ulong param_1,undefined8 param_2,ulong param_3)

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
          bVar1 = false;
          if ((*(double *)(param_1 + 0x10) == *(double *)(param_3 + 0x10)) &&
             (*(double *)(param_1 + 0x18) == *(double *)(param_3 + 0x18))) {
            bVar1 = false;
            if (*(double *)(param_1 + 0x28) == *(double *)(param_3 + 0x28)) {
              bVar1 = *(double *)(param_1 + 0x20) == *(double *)(param_3 + 0x20);
            }
          }
          goto LAB_10b73b748;
        }
      }
      bVar1 = false;
    }
  }
LAB_10b73b748:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b73b764; end: 10b73b76b; -[SCStickerTappableElementBounds cornerRadiusScaleFactor] */

undefined8 FUN_10b73b764(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b73b76c; end: 10b73b773; -[SCStickerTappableElementBounds size] */

undefined1  [16] FUN_10b73b76c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}



/* Entry: 10b73b774; end: 10b73b77b; -[SCStickerTappableElementBounds center] */

undefined1  [16] FUN_10b73b774(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x20);
}



/* Entry: 10b73b77c; end: 10b73ba1b; -[SCStickerState initWithType:infoStickerType:emoji:chatSticker:ctpItem:itemInstance:relativeSize:center:rotation:scale:tappableElementBounds:isTracking:isTimed:trackingTrajectory:infoStickerStyle:isAnimated:uniqueId:isFlipped:appStickerStyle:supportedFlows:editCapabilities:] */

undefined8 *
FUN_10b73b77c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined4 param_16,
             undefined4 param_17,undefined8 param_18,undefined8 param_19,undefined1 param_20,
             undefined4 param_21,undefined8 param_22,undefined1 param_23,undefined4 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_25);
  _objc_retain(param_27);
  puStack_a0 = PTR_PTR_11270a570;
  puVar1 = &uStack_a8;
  uStack_a8 = param_7;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = param_9;
    puVar1[3] = param_10;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    puVar1[0x11] = param_1;
    puVar1[0x12] = param_2;
    puVar1[0x13] = param_3;
    puVar1[0x14] = param_4;
    puVar1[8] = param_5;
    puVar1[9] = param_6;
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_16;
    *(undefined1 *)((long)puVar1 + 9) = param_16._1_1_;
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = param_20;
    puVar1[0xd] = param_22;
    *(undefined1 *)((long)puVar1 + 0xb) = param_23;
    uVar2 = param_25;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    puVar1[0xf] = param_26;
    uVar2 = param_27;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_27);
  _objc_release(param_25);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  return puVar1;
}



/* Entry: 10b73ba1c; end: 10b73ba3f; -[SCStickerState copyWithZone:] */

undefined8 FUN_10b73ba1c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b73ba40; end: 10b73bbf7; -[SCStickerState hash] */

undefined8 * FUN_10b73ba40(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  long lStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_e0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_d8 = *(undefined8 *)(param_1 + 0x18);
  uStack_e0 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_d0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_c8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_c0 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x88) + *(ulong *)(param_1 + 0x88) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_b0 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_b0 = uStack_b0 ^ uStack_b0 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x90) + *(ulong *)(param_1 + 0x90) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_a8 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_a8 = uStack_a8 ^ uStack_a8 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x98) + *(ulong *)(param_1 + 0x98) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_a0 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_a0 = uStack_a0 ^ uStack_a0 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0xa0) + *(ulong *)(param_1 + 0xa0) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_98 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_98 = uStack_98 ^ uStack_98 >> 0x16;
  uVar7 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_90 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_90 = uStack_90 ^ uStack_90 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_88 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_88 = uStack_88 ^ uStack_88 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_b8 = uVar3;
  func_0x00010bfde980();
  uStack_78 = (ulong)*(byte *)(param_1 + 8);
  uStack_70 = (ulong)*(byte *)(param_1 + 9);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + 10);
  lVar6 = *(long *)(param_1 + 0x68);
  uStack_40 = *(undefined8 *)(param_1 + 0x70);
  lStack_50 = -lVar6;
  if (-1 < lVar6) {
    lStack_50 = lVar6;
  }
  uStack_48 = (ulong)*(byte *)(param_1 + 0xb);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x78);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_e0,0x17);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10b73be58:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b73be64;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((((ulong)puVar5 & 1) != 0) &&
         ((((*(long *)((long)puVar4 + 0x10) == *(long *)(param_3 + 0x10) &&
            (*(long *)((long)puVar4 + 0x18) == *(long *)(param_3 + 0x18))) &&
           (*(char *)((long)puVar4 + 8) == param_3[8])) &&
          ((*(char *)((long)puVar4 + 9) == param_3[9] &&
           (*(char *)((long)puVar4 + 10) == param_3[10])))))) &&
        (*(long *)((long)puVar4 + 0x68) == *(long *)(param_3 + 0x68))) &&
       ((*(char *)((long)puVar4 + 0xb) == param_3[0xb] &&
        (*(long *)((long)puVar4 + 0x78) == *(long *)(param_3 + 0x78))))) {
      puVar8 = (undefined1 *)0x0;
      if ((*(double *)((long)puVar4 + 0x88) != *(double *)(param_3 + 0x88)) ||
         (((*(double *)((long)puVar4 + 0x90) != *(double *)(param_3 + 0x90) ||
           (puVar8 = (undefined1 *)0x0,
           *(double *)((long)puVar4 + 0x98) != *(double *)(param_3 + 0x98))) ||
          (*(double *)((long)puVar4 + 0xa0) != *(double *)(param_3 + 0xa0))))) goto LAB_10b73be64;
      dVar9 = ABS(*(double *)((long)puVar4 + 0x40) - *(double *)(param_3 + 0x40));
      if ((dVar9 < 2.2250738585072014e-308) ||
         (dVar9 < ABS(*(double *)((long)puVar4 + 0x40) + *(double *)(param_3 + 0x40)) *
                  2.220446049250313e-16)) {
        dVar9 = ABS(*(double *)((long)puVar4 + 0x48) - *(double *)(param_3 + 0x48));
        if ((((((dVar9 < 2.2250738585072014e-308) ||
               (dVar9 < ABS(*(double *)((long)puVar4 + 0x48) + *(double *)(param_3 + 0x48)) *
                        2.220446049250313e-16)) &&
              ((((lVar6 = *(long *)((long)puVar4 + 0x20), lVar6 == *(long *)(param_3 + 0x20) ||
                 (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                ((lVar6 = *(long *)((long)puVar4 + 0x28), lVar6 == *(long *)(param_3 + 0x28) ||
                 (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
               ((lVar6 = *(long *)((long)puVar4 + 0x30), lVar6 == *(long *)(param_3 + 0x30) ||
                (func_0x00010c071ae0(), (int)lVar6 != 0)))))) &&
             ((lVar6 = *(long *)((long)puVar4 + 0x38), lVar6 == *(long *)(param_3 + 0x38) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
            ((((lVar6 = *(long *)((long)puVar4 + 0x50), lVar6 == *(long *)(param_3 + 0x50) ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
              ((lVar6 = *(long *)((long)puVar4 + 0x58), lVar6 == *(long *)(param_3 + 0x58) ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
             ((lVar6 = *(long *)((long)puVar4 + 0x60), lVar6 == *(long *)(param_3 + 0x60) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))))) &&
           ((lVar6 = *(long *)((long)puVar4 + 0x70), lVar6 == *(long *)(param_3 + 0x70) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
          puVar8 = *(undefined1 **)((long)puVar4 + 0x80);
          if (puVar8 != *(undefined1 **)(param_3 + 0x80)) {
            func_0x00010c071ae0();
            goto LAB_10b73be64;
          }
          goto LAB_10b73be58;
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10b73be64:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 10b73bbf8; end: 10b73be7f; -[SCStickerState isEqual:] */

long FUN_10b73bbf8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b73be58:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b73be64;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
            (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
           (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
          ((*(char *)(param_1 + 9) == *(char *)(param_3 + 9) &&
           (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))))) &&
        (*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68))) &&
       ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
        (*(long *)(param_1 + 0x78) == *(long *)(param_3 + 0x78))))) {
      lVar3 = 0;
      if ((*(double *)(param_1 + 0x88) != *(double *)(param_3 + 0x88)) ||
         (((*(double *)(param_1 + 0x90) != *(double *)(param_3 + 0x90) ||
           (lVar3 = 0, *(double *)(param_1 + 0x98) != *(double *)(param_3 + 0x98))) ||
          (*(double *)(param_1 + 0xa0) != *(double *)(param_3 + 0xa0))))) goto LAB_10b73be64;
      dVar4 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40));
      if ((dVar4 < 2.2250738585072014e-308) ||
         (dVar4 < ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) *
                  2.220446049250313e-16)) {
        dVar4 = ABS(*(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x48));
        if ((((((dVar4 < 2.2250738585072014e-308) ||
               (dVar4 < ABS(*(double *)(param_1 + 0x48) + *(double *)(param_3 + 0x48)) *
                        2.220446049250313e-16)) &&
              ((((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                ((lVar3 = *(long *)(param_1 + 0x28), lVar3 == *(long *)(param_3 + 0x28) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
               ((lVar3 = *(long *)(param_1 + 0x30), lVar3 == *(long *)(param_3 + 0x30) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
             ((lVar3 = *(long *)(param_1 + 0x38), lVar3 == *(long *)(param_3 + 0x38) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
            ((((lVar3 = *(long *)(param_1 + 0x50), lVar3 == *(long *)(param_3 + 0x50) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
              ((lVar3 = *(long *)(param_1 + 0x58), lVar3 == *(long *)(param_3 + 0x58) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
             ((lVar3 = *(long *)(param_1 + 0x60), lVar3 == *(long *)(param_3 + 0x60) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
           ((lVar3 = *(long *)(param_1 + 0x70), lVar3 == *(long *)(param_3 + 0x70) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)))) {
          lVar3 = *(long *)(param_1 + 0x80);
          if (lVar3 != *(long *)(param_3 + 0x80)) {
            func_0x00010c071ae0();
            goto LAB_10b73be64;
          }
          goto LAB_10b73be58;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b73be64:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b73be80; end: 10b73be87; -[SCStickerState type] */

undefined8 FUN_10b73be80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b73be88; end: 10b73be8f; -[SCStickerState infoStickerType] */

undefined8 FUN_10b73be88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b73be90; end: 10b73be97; -[SCStickerState emoji] */

undefined8 FUN_10b73be90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b73be98; end: 10b73be9f; -[SCStickerState chatSticker] */

undefined8 FUN_10b73be98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b73bea0; end: 10b73bea7; -[SCStickerState ctpItem] */

undefined8 FUN_10b73bea0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b73bea8; end: 10b73beaf; -[SCStickerState itemInstance] */

undefined8 FUN_10b73bea8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b73beb0; end: 10b73beb7; -[SCStickerState relativeSize] */

undefined1  [16] FUN_10b73beb0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x88);
}



/* Entry: 10b73beb8; end: 10b73bebf; -[SCStickerState center] */

undefined1  [16] FUN_10b73beb8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x98);
}



/* Entry: 10b73bec0; end: 10b73bec7; -[SCStickerState rotation] */

undefined8 FUN_10b73bec0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b73bec8; end: 10b73becf; -[SCStickerState scale] */

undefined8 FUN_10b73bec8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b73bed0; end: 10b73bed7; -[SCStickerState tappableElementBounds] */

undefined8 FUN_10b73bed0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b73bed8; end: 10b73bedf; -[SCStickerState isTracking] */

undefined1 FUN_10b73bed8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b73bee0; end: 10b73bee7; -[SCStickerState isTimed] */

undefined1 FUN_10b73bee0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b73bee8; end: 10b73beef; -[SCStickerState trackingTrajectory] */

undefined8 FUN_10b73bee8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b73bef0; end: 10b73bef7; -[SCStickerState infoStickerStyle] */

undefined8 FUN_10b73bef0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b73bef8; end: 10b73beff; -[SCStickerState isAnimated] */

undefined1 FUN_10b73bef8(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b73bf00; end: 10b73bf07; -[SCStickerState uniqueId] */

undefined8 FUN_10b73bf00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b73bf08; end: 10b73bf0f; -[SCStickerState isFlipped] */

undefined1 FUN_10b73bf08(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b73bf10; end: 10b73bf17; -[SCStickerState appStickerStyle] */

undefined8 FUN_10b73bf10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b73bf18; end: 10b73bf1f; -[SCStickerState supportedFlows] */

undefined8 FUN_10b73bf18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b73bf20; end: 10b73bf27; -[SCStickerState editCapabilities] */

undefined8 FUN_10b73bf20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b73bf28; end: 10b73bfab; -[SCStickerState .cxx_destruct] */

void FUN_10b73bf28(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10b73bfac; end: 10b73bfc7; +[SCStickerStateBuilder stickerState] */

void FUN_10b73bfac(void)

{
  _objc_alloc_init(PTR_PTR_1126d4dd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b73bfc8; end: 10b73c463; +[SCStickerStateBuilder stickerStateFromExistingStickerState:] */

void FUN_10b73bfc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined *puVar30;
  undefined *puVar31;
  
  puVar1 = PTR_PTR_1126d4dd0;
  _objc_retain(param_3);
  func_0x00010c254fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c27dd80(param_3);
  puVar3 = puVar1;
  func_0x00010c2bbd20(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfee000(param_3);
  puVar4 = puVar3;
  func_0x00010c2afcc0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf8e2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2acd60(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf377a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2aa680(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf5d7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2ab7e0(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c0846e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c2b1a80(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1281e0(param_3);
  puVar12 = puVar11;
  func_0x00010c2b6b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0(param_3);
  puVar13 = puVar12;
  func_0x00010c2aa4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c141a80(param_3);
  puVar14 = puVar13;
  func_0x00010c2b7620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120(param_3);
  puVar15 = puVar14;
  func_0x00010c2b78c0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c269880();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010c2bad40(puVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c081660(param_3);
  puVar19 = puVar17;
  func_0x00010c2b18c0(puVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c081160(param_3);
  puVar20 = puVar19;
  func_0x00010c2b1840(puVar19,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c2790e0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  func_0x00010c2bbb60(puVar20,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010bfedfc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar21;
  func_0x00010c2afc80(puVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_3;
  func_0x00010c06c000(param_3);
  puVar25 = puVar23;
  func_0x00010c2b01a0(puVar23,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_3;
  func_0x00010c280560(param_3);
  puVar26 = puVar25;
  func_0x00010c2bbdc0(puVar25,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_3;
  func_0x00010c073260(param_3);
  puVar27 = puVar26;
  func_0x00010c2b07c0(puVar26,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_3;
  func_0x00010bf06320(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar27;
  func_0x00010c2a85c0(puVar27,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = param_3;
  func_0x00010c263180(param_3);
  puVar30 = puVar28;
  func_0x00010c2bab00(puVar28,param_2,uVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = param_3;
  func_0x00010bf8c1c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar31 = puVar30;
  func_0x00010c2acc40(puVar30,param_2,uVar29);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar29);
  _objc_release(puVar30);
  _objc_release(puVar28);
  _objc_release(uVar24);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar23);
  _objc_release(uVar22);
  _objc_release(puVar21);
  _objc_release(uVar18);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar31);
  return;
}



/* Entry: 10b73c464; end: 10b73c4ef; -[SCStickerStateBuilder build] */

void FUN_10b73c464(long param_1)

{
  _objc_alloc(PTR_PTR_1126ba898);
  func_0x00010c055c20(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b73c4f0; end: 10b73c4f7; -[SCStickerStateBuilder withType:] */

void FUN_10b73c4f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b73c4f8; end: 10b73c4ff; -[SCStickerStateBuilder withInfoStickerType:] */

void FUN_10b73c4f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b73c500; end: 10b73c537; -[SCStickerStateBuilder withEmoji:] */

long FUN_10b73c500(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b73c538; end: 10b73c56f; -[SCStickerStateBuilder withChatSticker:] */

long FUN_10b73c538(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b73c570; end: 10b73c5a7; -[SCStickerStateBuilder withCtpItem:] */

long FUN_10b73c570(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b73c5a8; end: 10b73c5df; -[SCStickerStateBuilder withItemInstance:] */

long FUN_10b73c5a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b73c5e0; end: 10b73c5e7; -[SCStickerStateBuilder withRelativeSize:] */

void FUN_10b73c5e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x38) = param_1;
  *(undefined8 *)(param_3 + 0x40) = param_2;
  return;
}



/* Entry: 10b73c5e8; end: 10b73c5ef; -[SCStickerStateBuilder withCenter:] */

void FUN_10b73c5e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x48) = param_1;
  *(undefined8 *)(param_3 + 0x50) = param_2;
  return;
}



/* Entry: 10b73c5f0; end: 10b73c5f7; -[SCStickerStateBuilder withRotation:] */

void FUN_10b73c5f0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x58) = param_1;
  return;
}



/* Entry: 10b73c5f8; end: 10b73c5ff; -[SCStickerStateBuilder withScale:] */

void FUN_10b73c5f8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x60) = param_1;
  return;
}



/* Entry: 10b73c600; end: 10b73c637; -[SCStickerStateBuilder withTappableElementBounds:] */

long FUN_10b73c600(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b73c638; end: 10b73c63f; -[SCStickerStateBuilder withIsTracking:] */

void FUN_10b73c638(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 10b73c640; end: 10b73c647; -[SCStickerStateBuilder withIsTimed:] */

void FUN_10b73c640(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x71) = param_3;
  return;
}



/* Entry: 10b73c648; end: 10b73c67f; -[SCStickerStateBuilder withTrackingTrajectory:] */

long FUN_10b73c648(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b73c680; end: 10b73c6b7; -[SCStickerStateBuilder withInfoStickerStyle:] */

long FUN_10b73c680(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b73c6b8; end: 10b73c6bf; -[SCStickerStateBuilder withIsAnimated:] */

void FUN_10b73c6b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 10b73c6c0; end: 10b73c6c7; -[SCStickerStateBuilder withUniqueId:] */

void FUN_10b73c6c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 10b73c6c8; end: 10b73c6cf; -[SCStickerStateBuilder withIsFlipped:] */

void FUN_10b73c6c8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 10b73c6d0; end: 10b73c707; -[SCStickerStateBuilder withAppStickerStyle:] */

long FUN_10b73c6d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b73c708; end: 10b73c70f; -[SCStickerStateBuilder withSupportedFlows:] */

void FUN_10b73c708(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  return;
}



/* Entry: 10b73c710; end: 10b73c747; -[SCStickerStateBuilder withEditCapabilities:] */

long FUN_10b73c710(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b73c748; end: 10b73c7cb; -[SCStickerStateBuilder .cxx_destruct] */

void FUN_10b73c748(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b73c7cc; end: 10b73c7d3; -[SCVideoTrackingServices videoTrackerFactory] */

undefined8 FUN_10b73c7cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b73c7d4; end: 10b73c7db; -[SCVideoTrackingServices targetTrajectoryManagerFactory] */

undefined8 FUN_10b73c7d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b73c7dc; end: 10b73c7e3; -[SCVideoTrackingServices imageProcessingFactory] */

undefined8 FUN_10b73c7dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b73c7e4; end: 10b73c82b; -[SCVideoTrackingServices .cxx_destruct] */

void FUN_10b73c7e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b73c82c; end: 10b73c86f;  */

void FUN_10b73c82c(undefined8 param_1)

{
  _objc_alloc(PTR_PTR_1126e06e0);
  func_0x00010c060d20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b73c870; end: 10b73c8df;  */

void FUN_10b73c870(undefined8 param_1)

{
  _objc_alloc(PTR_PTR_1126e06e0);
  func_0x00010c060d20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b73c8e0; end: 10b73c99b; -[SCVideoTrackingTransform initWithCoder:] */

undefined1 *
FUN_10b73c8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_11270a580;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf67000(param_5);
    _objc_retainAutoreleasedReturnValue();
    _CGPointFromString();
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    _objc_release(uVar2);
    func_0x00010bf66da0(param_5);
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    func_0x00010bf66da0(param_5);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b73c99c; end: 10b73c9fb; -[SCVideoTrackingTransform initWithTranslation:scale:rotation:] */

void FUN_10b73c99c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270a580;
  uStack_40 = param_5;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10b73c9fc; end: 10b73ca1f; -[SCVideoTrackingTransform copyWithZone:] */

undefined8 FUN_10b73c9fc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b73ca20; end: 10b73cabb; -[SCVideoTrackingTransform encodeWithCoder:] */

void FUN_10b73ca20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_3;
  _objc_retain(param_3);
  _NSStringFromCGPoint(uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f78ab8);
  _objc_release(uVar1);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 8),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f78ad8);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x10),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110ed8eb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b73cabc; end: 10b73cb8f; -[SCVideoTrackingTransform hash] */

ulong * FUN_10b73cabc(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_20 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  puVar3 = &uStack_38;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar6 = puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if (((ulong)puVar4 & 1) != 0) {
        bVar2 = false;
        if (((double)puVar3[3] == (double)param_3[3]) &&
           (bVar2 = false, !NAN((double)puVar3[4]) && !NAN((double)param_3[4]))) {
          bVar2 = (double)puVar3[4] == (double)param_3[4];
        }
        if (bVar2) {
          dVar8 = ABS((double)puVar3[1] - (double)param_3[1]);
          dVar7 = ABS((double)puVar3[1] + (double)param_3[1]) * 2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
            bVar2 = dVar8 < dVar7;
          }
          if (bVar2) {
            dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
            if (dVar7 <= 2.2250738585072014e-308) {
              dVar7 = 2.2250738585072014e-308;
            }
            puVar6 = (ulong *)(ulong)(ABS((double)puVar3[2] - (double)param_3[2]) < dVar7);
            goto LAB_10b73cc68;
          }
        }
      }
      puVar6 = (ulong *)0x0;
    }
  }
LAB_10b73cc68:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b73cb90; end: 10b73cc83; -[SCVideoTrackingTransform isEqual:] */

bool FUN_10b73cb90(ulong param_1,undefined8 param_2,ulong param_3)

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
        bVar1 = false;
        if ((*(double *)(param_1 + 0x18) == *(double *)(param_3 + 0x18)) &&
           (bVar1 = false, !NAN(*(double *)(param_1 + 0x20)) && !NAN(*(double *)(param_3 + 0x20))))
        {
          bVar1 = *(double *)(param_1 + 0x20) == *(double *)(param_3 + 0x20);
        }
        if (bVar1) {
          dVar5 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
          dVar4 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
            bVar1 = dVar5 < dVar4;
          }
          if (bVar1) {
            dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                    2.220446049250313e-16;
            if (dVar4 <= 2.2250738585072014e-308) {
              dVar4 = 2.2250738585072014e-308;
            }
            bVar1 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar4;
            goto LAB_10b73cc68;
          }
        }
      }
      bVar1 = false;
    }
  }
LAB_10b73cc68:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b73cc84; end: 10b73cc8b; -[SCVideoTrackingTransform translation] */

undefined1  [16] FUN_10b73cc84(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 10b73cc8c; end: 10b73cc93; -[SCVideoTrackingTransform scale] */

undefined8 FUN_10b73cc8c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b73cc94; end: 10b73cc9b; -[SCVideoTrackingTransform rotation] */

undefined8 FUN_10b73cc94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b73cc9c; end: 10b73cd57; -[SCVideoTrackingTimeTransform initWithCoder:] */

undefined8 * FUN_10b73cc9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a588;
  puVar2 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    if (param_3 == 0) {
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
    }
    else {
      func_0x00010bf66d60(&uStack_48,param_3);
    }
    uVar1 = uStack_38;
    uVar4 = uStack_48;
    puVar2[3] = uStack_40;
    puVar2[2] = uVar4;
    puVar2[4] = uVar1;
    lVar3 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar2[1];
    puVar2[1] = lVar3;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 10b73cd58; end: 10b73cdeb; -[SCVideoTrackingTimeTransform initWithTime:transform:] */

undefined1 *
FUN_10b73cd58(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270a588;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3[1];
    uVar3 = *param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3[2];
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    uVar3 = param_4;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b73cdec; end: 10b73ce0f; -[SCVideoTrackingTimeTransform copyWithZone:] */

undefined8 FUN_10b73cdec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b73ce10; end: 10b73ce7f; -[SCVideoTrackingTimeTransform encodeWithCoder:] */

void FUN_10b73ce10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bf92e40(param_3,param_2,&uStack_40,&PTR____CFConstantStringClassReference_110e867b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f78af8);
  _objc_release(param_3);
  return;
}



/* Entry: 10b73ce80; end: 10b73cef3; -[SCVideoTrackingTimeTransform hash] */

undefined8 * FUN_10b73ce80(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_40;
  long lStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = (ulong)*(uint *)(param_1 + 0x1c);
  lStack_38 = (long)*(int *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uStack_40 = *(undefined8 *)(param_1 + 0x10);
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uStack_20 = uVar1;
  func_0x000107c3191c(&uStack_40,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (undefined8 *)param_3) {
LAB_10b73cf98:
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b73cf9c;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if (((ulong)puVar3 & 1) != 0) {
      uStack_88 = *(undefined8 *)((long)puVar2 + 0x18);
      uStack_90 = *(undefined8 *)((long)puVar2 + 0x10);
      uStack_80 = *(undefined8 *)((long)puVar2 + 0x20);
      uStack_a8 = *(undefined8 *)(param_3 + 0x18);
      uStack_b0 = *(undefined8 *)(param_3 + 0x10);
      uStack_a0 = *(undefined8 *)(param_3 + 0x20);
      puVar4 = &uStack_90;
      _CMTimeCompare(puVar4,&uStack_b0);
      if ((int)puVar4 == 0) {
        puVar5 = *(undefined1 **)((long)puVar2 + 8);
        if (puVar5 != *(undefined1 **)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_10b73cf9c;
        }
        goto LAB_10b73cf98;
      }
    }
    puVar5 = (undefined1 *)0x0;
  }
LAB_10b73cf9c:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 10b73cef4; end: 10b73cfbb; -[SCVideoTrackingTimeTransform isEqual:] */

long FUN_10b73cef4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b73cf98:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b73cf9c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      uStack_48 = *(undefined8 *)(param_1 + 0x18);
      uStack_50 = *(undefined8 *)(param_1 + 0x10);
      uStack_40 = *(undefined8 *)(param_1 + 0x20);
      uStack_68 = *(undefined8 *)(param_3 + 0x18);
      uStack_70 = *(undefined8 *)(param_3 + 0x10);
      uStack_60 = *(undefined8 *)(param_3 + 0x20);
      puVar3 = &uStack_50;
      _CMTimeCompare(puVar3,&uStack_70);
      if ((int)puVar3 == 0) {
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 != *(long *)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_10b73cf9c;
        }
        goto LAB_10b73cf98;
      }
    }
    lVar4 = 0;
  }
LAB_10b73cf9c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b73cfbc; end: 10b73cfcf; -[SCVideoTrackingTimeTransform time] */

void FUN_10b73cfbc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = *(undefined8 *)(param_2 + 0x18);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x20);
  return;
}



/* Entry: 10b73cfd0; end: 10b73cfd7; -[SCVideoTrackingTimeTransform transform] */

undefined8 FUN_10b73cfd0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b73cfd8; end: 10b73cfe3; -[SCVideoTrackingTimeTransform .cxx_destruct] */

void FUN_10b73cfd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b73cfe4; end: 10b73d07f; -[SCVideoTrackingTargetTrajectoryConfiguration initWithCoder:] */

undefined1 *
FUN_10b73cfe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_11270a590;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b73d080; end: 10b73d0df; -[SCVideoTrackingTargetTrajectoryConfiguration initWithVideoDuration:bounceEnabled:isAnimated:] */

void FUN_10b73d080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270a590;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
  }
  return;
}



/* Entry: 10b73d0e0; end: 10b73d103; -[SCVideoTrackingTargetTrajectoryConfiguration copyWithZone:] */

undefined8 FUN_10b73d0e0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b73d104; end: 10b73d177; -[SCVideoTrackingTargetTrajectoryConfiguration encodeWithCoder:] */

void FUN_10b73d104(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf92e80(uVar1,param_3,param_2,&PTR____CFConstantStringClassReference_110f78b18);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f78b38);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f54b58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b73d178; end: 10b73d1fb; -[SCVideoTrackingTargetTrajectoryConfiguration hash] */

ulong * FUN_10b73d178(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  double dVar5;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_30 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  uStack_20 = (ulong)*(byte *)(param_1 + 9);
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (ulong *)param_3) {
    puVar4 = (undefined1 *)0x1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((*(char *)((long)puVar1 + 8) != param_3[8] || (*(char *)((long)puVar1 + 9) != param_3[9]))
         )) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        dVar5 = ABS(*(double *)((long)puVar1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        if (dVar5 <= 2.2250738585072014e-308) {
          dVar5 = 2.2250738585072014e-308;
        }
        puVar4 = (undefined1 *)
                 (ulong)(ABS(*(double *)((long)puVar1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar5
                        );
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar4;
}



/* Entry: 10b73d1fc; end: 10b73d2c7; -[SCVideoTrackingTargetTrajectoryConfiguration isEqual:] */

bool FUN_10b73d1fc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
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
      if (((uVar2 & 1) == 0) ||
         ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
          (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 10b73d2c8; end: 10b73d2cf; -[SCVideoTrackingTargetTrajectoryConfiguration videoDuration] */

undefined8 FUN_10b73d2c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b73d2d0; end: 10b73d2d7; -[SCVideoTrackingTargetTrajectoryConfiguration bounceEnabled] */

undefined1 FUN_10b73d2d0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b73d2d8; end: 10b73d2df; -[SCVideoTrackingTargetTrajectoryConfiguration isAnimated] */

undefined1 FUN_10b73d2d8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b73d2e0; end: 10b73d3c3; -[SCVideoTrackedImage initWithCoder:] */

undefined1 *
FUN_10b73d2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_11270a598;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf67000(param_5);
    _objc_retainAutoreleasedReturnValue();
    _CGSizeFromString();
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b73d3c4; end: 10b73d483; -[SCVideoTrackedImage initWithNormalizedSize:image:transform:] */

undefined1 *
FUN_10b73d3c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_11270a598;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b73d484; end: 10b73d4a7; -[SCVideoTrackedImage copyWithZone:] */

undefined8 FUN_10b73d484(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b73d4a8; end: 10b73d543; -[SCVideoTrackedImage encodeWithCoder:] */

void FUN_10b73d4a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_3;
  _objc_retain(param_3);
  _NSStringFromCGSize(uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f78b58);
  _objc_release(uVar1);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110db93d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f78af8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


