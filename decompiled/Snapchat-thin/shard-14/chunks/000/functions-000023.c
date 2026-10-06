/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af2be88; end: 10af2be8f; -[SCStickerTypeInjectorConfig stickerTypes] */

undefined8 FUN_10af2be88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af2be90; end: 10af2be97; -[SCStickerTypeInjectorConfig sojuGalleryStickerTypes] */

undefined8 FUN_10af2be90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af2be98; end: 10af2bec7; -[SCStickerTypeInjectorConfig .cxx_destruct] */

void FUN_10af2be98(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10af2bec8; end: 10af2bfc7; -[SCStickerTransformState initWithStickerId:isTracking:trackingTrajectoryState:relativeSize:rotation:center:scale:isTimed:] */

undefined1 *
FUN_10af2bec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_9);
  _objc_retain(param_11);
  puStack_78 = PTR_PTR_1127023c0;
  uStack_80 = param_7;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_10;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    *(undefined8 *)((long)puVar1 + 0x38) = param_2;
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    *(undefined8 *)((long)puVar1 + 0x48) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_12;
  }
  _objc_release(param_11);
  _objc_release(param_9);
  return (undefined1 *)puVar1;
}



/* Entry: 10af2bfc8; end: 10af2bfeb; -[SCStickerTransformState copyWithZone:] */

undefined8 FUN_10af2bfc8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af2bfec; end: 10af2c12b; -[SCStickerTransformState hash] */

undefined8 * FUN_10af2bfec(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_70 = (ulong)*(byte *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar3;
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_60 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_58 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_50 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_48 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_40 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_38 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  puVar5 = &uStack_78;
  uStack_68 = uVar4;
  func_0x000107c3191c(puVar5,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_10af2c27c:
    puVar9 = (undefined8 *)0x1;
  }
  else {
    puVar9 = (undefined8 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af2c288;
    puVar9 = puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar6 & 1) != 0) &&
       ((*(char *)(puVar5 + 1) == *(char *)(param_3 + 1) &&
        (*(char *)((long)puVar5 + 9) == *(char *)((long)param_3 + 9))))) {
      puVar9 = (undefined8 *)0x0;
      if (((double)puVar5[6] != (double)param_3[6]) || ((double)puVar5[7] != (double)param_3[7]))
      goto LAB_10af2c288;
      dVar11 = ABS((double)puVar5[4] - (double)param_3[4]);
      dVar10 = ABS((double)puVar5[4] + (double)param_3[4]) * 2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar2 = dVar11 < dVar10;
      }
      if (bVar2) {
        puVar9 = (undefined8 *)0x0;
        if (((double)puVar5[8] != (double)param_3[8]) || ((double)puVar5[9] != (double)param_3[9]))
        goto LAB_10af2c288;
        dVar10 = ABS((double)puVar5[5] - (double)param_3[5]);
        if (((dVar10 < 2.2250738585072014e-308) ||
            (dVar10 < ABS((double)puVar5[5] + (double)param_3[5]) * 2.220446049250313e-16)) &&
           ((lVar7 = puVar5[2], lVar7 == param_3[2] || (func_0x00010c071ae0(), (int)lVar7 != 0)))) {
          puVar9 = (undefined8 *)puVar5[3];
          if (puVar9 != (undefined8 *)param_3[3]) {
            func_0x00010c071ae0();
            goto LAB_10af2c288;
          }
          goto LAB_10af2c27c;
        }
      }
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_10af2c288:
  _objc_release(param_3);
  return puVar9;
}



/* Entry: 10af2c12c; end: 10af2c2a3; -[SCStickerTransformState isEqual:] */

long FUN_10af2c12c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af2c27c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af2c288;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar4 = 0;
      if ((*(double *)(param_1 + 0x30) != *(double *)(param_3 + 0x30)) ||
         (*(double *)(param_1 + 0x38) != *(double *)(param_3 + 0x38))) goto LAB_10af2c288;
      dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
      dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = 0;
        if ((*(double *)(param_1 + 0x40) != *(double *)(param_3 + 0x40)) ||
           (*(double *)(param_1 + 0x48) != *(double *)(param_3 + 0x48))) goto LAB_10af2c288;
        dVar5 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
        if (((dVar5 < 2.2250738585072014e-308) ||
            (dVar5 < ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                     2.220446049250313e-16)) &&
           ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + 0x18);
          if (lVar4 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10af2c288;
          }
          goto LAB_10af2c27c;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10af2c288:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10af2c2a4; end: 10af2c2ab; -[SCStickerTransformState stickerId] */

undefined8 FUN_10af2c2a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af2c2ac; end: 10af2c2b3; -[SCStickerTransformState isTracking] */

undefined1 FUN_10af2c2ac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10af2c2b4; end: 10af2c2bb; -[SCStickerTransformState trackingTrajectoryState] */

undefined8 FUN_10af2c2b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af2c2bc; end: 10af2c2c3; -[SCStickerTransformState relativeSize] */

undefined1  [16] FUN_10af2c2bc(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x30);
}



/* Entry: 10af2c2c4; end: 10af2c2cb; -[SCStickerTransformState rotation] */

undefined8 FUN_10af2c2c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af2c2cc; end: 10af2c2d3; -[SCStickerTransformState center] */

undefined1  [16] FUN_10af2c2cc(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x40);
}



/* Entry: 10af2c2d4; end: 10af2c2db; -[SCStickerTransformState scale] */

undefined8 FUN_10af2c2d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af2c2dc; end: 10af2c2e3; -[SCStickerTransformState isTimed] */

undefined1 FUN_10af2c2dc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10af2c2e4; end: 10af2c313; -[SCStickerTransformState .cxx_destruct] */

void FUN_10af2c2e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af2c314; end: 10af2c387; -[SCCreativeToolsHintManagerServices initWithHintManager:] */

undefined1 * FUN_10af2c314(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127023c8;
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



/* Entry: 10af2c388; end: 10af2c38f; -[SCCreativeToolsHintManagerServices hintManager] */

undefined8 FUN_10af2c388(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af2c390; end: 10af2c39b; -[SCCreativeToolsHintManagerServices .cxx_destruct] */

void FUN_10af2c390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af2c39c; end: 10af2c40f; -[SCPreviewFeatureCreativeToolsMenuServices initWithCreativeToolsMenu:] */

undefined1 * FUN_10af2c39c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127023d0;
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



/* Entry: 10af2c410; end: 10af2c417; -[SCPreviewFeatureCreativeToolsMenuServices creativeToolsMenu] */

undefined8 FUN_10af2c410(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af2c418; end: 10af2c423; -[SCPreviewFeatureCreativeToolsMenuServices .cxx_destruct] */

void FUN_10af2c418(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af2c424; end: 10af2c50b; -[SCCreativeToolsMenuAction initWithTitle:image:shouldResumeVideoPlaybackAfterCompletion:completionHandler:] */

undefined1 *
FUN_10af2c424(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1127023d8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined1 *)((long)puVar1 + 8) = param_5;
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



/* Entry: 10af2c50c; end: 10af2c52f; -[SCCreativeToolsMenuAction copyWithZone:] */

undefined8 FUN_10af2c50c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af2c530; end: 10af2c5b3; -[SCCreativeToolsMenuAction hash] */

undefined8 * FUN_10af2c530(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  puVar5 = &uStack_48;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar5,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_10af2c674:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af2c680;
    puVar6 = puVar5;
    _objc_opt_class(puVar5);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar3 & 1) != 0) && (*(char *)(puVar5 + 1) == *(char *)(param_3 + 1))) {
      lVar4 = puVar5[2];
      if ((lVar4 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        lVar4 = puVar5[3];
        if ((lVar4 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
          puVar6 = (undefined8 *)puVar5[4];
          puVar5 = (undefined8 *)param_3[4];
          if (puVar6 != puVar5) {
            _objc_retainBlock();
            func_0x00010c071ae0(puVar6);
            _objc_release(puVar5);
            goto LAB_10af2c680;
          }
          goto LAB_10af2c674;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af2c680:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af2c5b4; end: 10af2c69b; -[SCCreativeToolsMenuAction isEqual:] */

long FUN_10af2c5b4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af2c674:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af2c680;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar4 = *(long *)(param_1 + 0x10);
      if ((lVar4 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        lVar4 = *(long *)(param_1 + 0x18);
        if ((lVar4 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
          lVar4 = *(long *)(param_1 + 0x20);
          lVar3 = *(long *)(param_3 + 0x20);
          if (lVar4 != lVar3) {
            _objc_retainBlock();
            func_0x00010c071ae0(lVar4);
            _objc_release(lVar3);
            goto LAB_10af2c680;
          }
          goto LAB_10af2c674;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10af2c680:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10af2c69c; end: 10af2c6a3; -[SCCreativeToolsMenuAction title] */

undefined8 FUN_10af2c69c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af2c6a4; end: 10af2c6ab; -[SCCreativeToolsMenuAction image] */

undefined8 FUN_10af2c6a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af2c6ac; end: 10af2c6b3; -[SCCreativeToolsMenuAction shouldResumeVideoPlaybackAfterCompletion] */

undefined1 FUN_10af2c6ac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10af2c6b4; end: 10af2c6bb; -[SCCreativeToolsMenuAction completionHandler] */

undefined8 FUN_10af2c6b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af2c6bc; end: 10af2c6f7; -[SCCreativeToolsMenuAction .cxx_destruct] */

void FUN_10af2c6bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af2c6f8; end: 10af2c75b; +[SCCreativeToolsMenuMetricsInfo captionWithCaptionStyle:] */

void FUN_10af2c6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c4440;
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



/* Entry: 10af2c75c; end: 10af2c7c7; +[SCCreativeToolsMenuMetricsInfo stickerWithStickerType:] */

void FUN_10af2c75c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c4440;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af2c7c8; end: 10af2c7eb; -[SCCreativeToolsMenuMetricsInfo copyWithZone:] */

undefined8 FUN_10af2c7c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af2c7ec; end: 10af2c863; -[SCCreativeToolsMenuMetricsInfo hash] */

void FUN_10af2c7ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1127023e0;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af2c864; end: 10af2c8a7; -[SCCreativeToolsMenuMetricsInfo internalInit] */

void FUN_10af2c864(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1127023e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af2c8a8; end: 10af2c95f; -[SCCreativeToolsMenuMetricsInfo isEqual:] */

long FUN_10af2c8a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af2c938:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af2c944;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10af2c944;
        }
        goto LAB_10af2c938;
      }
    }
    lVar3 = 0;
  }
LAB_10af2c944:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af2c960; end: 10af2c9e3; -[SCCreativeToolsMenuMetricsInfo matchCaption:sticker:] */

void FUN_10af2c960(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_10af2c9c8;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10af2c9c8;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10af2c9c8:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af2c9e4; end: 10af2ca13; -[SCCreativeToolsMenuMetricsInfo .cxx_destruct] */

void FUN_10af2c9e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af2ca14; end: 10af2ca77; -[SCCSnapEditorSnapEditorContext initWithConfig:] */

void FUN_10af2ca14(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127023e8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10af2ca78; end: 10af2ca8b; +[SCCSnapEditorSnapEditorContext valdiMarshallableObjectDescriptor] */

void FUN_10af2ca78(undefined8 *param_1)

{
  *param_1 = &PTR_s_config_110c92d78;
  param_1[1] = &PTR_DAT_110c92f58;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af2ca8c; end: 10af2cabf; -[SCCSnapEditorSnapEditorViewModel init] */

void FUN_10af2ca8c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127023f0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10af2cac0; end: 10af2cae3; +[SCCSnapEditorSnapEditorViewModel valdiMarshallableObjectDescriptor] */

void FUN_10af2cac0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c92fd8;
  param_1[1] = &PTR_DAT_110c930b0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af2cae4; end: 10af2cb13; -[CTPItemViewServices .cxx_destruct] */

void FUN_10af2cae4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af2cb14; end: 10af2cb6f; +[CTItemPresentationModelProviderType useDefaultModelProviderWithImageSize:] */

void FUN_10af2cb14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bc960;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af2cb70; end: 10af2cbc3; +[CTItemPresentationModelProviderType useMetadataWithImageSize:] */

void FUN_10af2cb70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bc960;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af2cbc4; end: 10af2cc37; +[CTItemPresentationModelProviderType useModelProviderWithPresentationModelProvider:imageSize:] */

void FUN_10af2cbc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bc960;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af2cc38; end: 10af2cc5b; -[CTItemPresentationModelProviderType copyWithZone:] */

undefined8 FUN_10af2cc38(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af2cc5c; end: 10af2ccd3; -[CTItemPresentationModelProviderType hash] */

void FUN_10af2cc5c(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uStack_40 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_112702400;
  puStack_80 = (undefined1 *)puVar2;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af2ccd4; end: 10af2cd17; -[CTItemPresentationModelProviderType internalInit] */

void FUN_10af2ccd4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112702400;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af2cd18; end: 10af2cde7; -[CTItemPresentationModelProviderType isEqual:] */

long FUN_10af2cd18(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af2cdcc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) == 0) ||
        (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
          (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
         (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) ||
       (*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28))) {
      lVar3 = 0;
      goto LAB_10af2cdcc;
    }
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != *(long *)(param_3 + 0x20)) {
      func_0x00010c071ae0();
      goto LAB_10af2cdcc;
    }
  }
  lVar3 = 1;
LAB_10af2cdcc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af2cde8; end: 10af2ce9b; -[CTItemPresentationModelProviderType matchUseMetadata:useDefaultModelProvider:useModelProvider:] */

void FUN_10af2cde8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))
                (param_5,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    }
  }
  else {
    if (lVar2 == 1) {
      if (param_4 == 0) goto LAB_10af2ce78;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
    else {
      if ((lVar2 != 0) || (param_3 == 0)) goto LAB_10af2ce78;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    (*pcVar3)(lVar2,uVar1);
  }
LAB_10af2ce78:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af2ce9c; end: 10af2cea7; -[CTItemPresentationModelProviderType .cxx_destruct] */

void FUN_10af2ce9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10af2cea8; end: 10af2cecb; -[CTPBitmojiStickerPresentationModel copyWithZone:] */

undefined8 FUN_10af2cea8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af2cecc; end: 10af2cf73; -[CTPBitmojiStickerPresentationModel hash] */

undefined8 * FUN_10af2cecc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uStack_58 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  lStack_50 = (long)*(int *)(param_1 + 0xc);
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x40));
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10af2d074:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af2d080;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((((*(long *)((long)puVar4 + 0x28) == *(long *)(param_3 + 0x28) &&
          (*(int *)((long)puVar4 + 0xc) == *(int *)(param_3 + 0xc))) &&
         (*(char *)((long)puVar4 + 8) == param_3[8])) &&
        ((*(long *)((long)puVar4 + 0x38) == *(long *)(param_3 + 0x38) &&
         (*(long *)((long)puVar4 + 0x40) == *(long *)(param_3 + 0x40))))))) {
      lVar6 = *(long *)((long)puVar4 + 0x10);
      if ((lVar6 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = *(long *)((long)puVar4 + 0x18);
        if ((lVar6 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = *(long *)((long)puVar4 + 0x20);
          if ((lVar6 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            puVar7 = *(undefined1 **)((long)puVar4 + 0x30);
            if (puVar7 != *(undefined1 **)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_10af2d080;
            }
            goto LAB_10af2d074;
          }
        }
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_10af2d080:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 10af2cf74; end: 10af2d09b; -[CTPBitmojiStickerPresentationModel isEqual:] */

long FUN_10af2cf74(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af2d074:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af2d080;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
          (*(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc))) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        ((*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38) &&
         (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if (lVar3 != *(long *)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_10af2d080;
            }
            goto LAB_10af2d074;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af2d080:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af2d09c; end: 10af2d0a3; -[CTPBitmojiStickerPresentationModel avatarId] */

undefined8 FUN_10af2d09c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af2d0a4; end: 10af2d0ab; -[CTPBitmojiStickerPresentationModel friendAvatarId] */

undefined8 FUN_10af2d0a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af2d0ac; end: 10af2d0b3; -[CTPBitmojiStickerPresentationModel customojiText] */

undefined8 FUN_10af2d0ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af2d0b4; end: 10af2d0bb; -[CTPBitmojiStickerPresentationModel imageSize] */

undefined8 FUN_10af2d0b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af2d0bc; end: 10af2d0c3; -[CTPBitmojiStickerPresentationModel feature] */

undefined4 FUN_10af2d0bc(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10af2d0c4; end: 10af2d0cb; -[CTPBitmojiStickerPresentationModel isReaction] */

undefined1 FUN_10af2d0c4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10af2d0cc; end: 10af2d0d3; -[CTPBitmojiStickerPresentationModel prerenderedContentUrl] */

undefined8 FUN_10af2d0cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10af2d0d4; end: 10af2d0db; -[CTPBitmojiStickerPresentationModel autosuggestContext] */

undefined8 FUN_10af2d0d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10af2d0dc; end: 10af2d123; -[CTPBitmojiStickerPresentationModel .cxx_destruct] */

void FUN_10af2d0dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af2d124; end: 10af2d147; -[CTPItemGfycatPresentationModel copyWithZone:] */

undefined8 FUN_10af2d124(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af2d148; end: 10af2d14f; -[CTPItemGfycatPresentationModel hash] */

undefined8 FUN_10af2d148(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af2d150; end: 10af2d1d7; -[CTPItemGfycatPresentationModel isEqual:] */

bool FUN_10af2d150(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10af2d1d8; end: 10af2d1df; -[CTPItemGfycatPresentationModel imageSize] */

undefined8 FUN_10af2d1d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af2d1e0; end: 10af2d263; -[CTPInfoStickerPresentationModel initWithRenderingContext:infoStickerDataProvider:] */

undefined1 *
FUN_10af2d1e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112702418;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10af2d264; end: 10af2d287; -[CTPInfoStickerPresentationModel copyWithZone:] */

undefined8 FUN_10af2d264(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af2d288; end: 10af2d2e7; -[CTPInfoStickerPresentationModel hash] */

undefined8 * FUN_10af2d288(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af2d36c;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[1] != param_3[1])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10af2d36c;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10af2d36c;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10af2d36c:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10af2d2e8; end: 10af2d387; -[CTPInfoStickerPresentationModel isEqual:] */

long FUN_10af2d2e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af2d36c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10af2d36c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10af2d36c;
    }
  }
  lVar3 = 1;
LAB_10af2d36c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af2d388; end: 10af2d38f; -[CTPInfoStickerPresentationModel renderingContext] */

undefined8 FUN_10af2d388(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af2d390; end: 10af2d397; -[CTPInfoStickerPresentationModel infoStickerDataProvider] */

undefined8 FUN_10af2d390(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af2d398; end: 10af2d3a3; -[CTPInfoStickerPresentationModel .cxx_destruct] */

void FUN_10af2d398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af2d3a4; end: 10af2d3c7; -[CTPStickerPresentationModel copyWithZone:] */

undefined8 FUN_10af2d3a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af2d3c8; end: 10af2d3cf; -[CTPStickerPresentationModel hash] */

undefined8 FUN_10af2d3c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af2d3d0; end: 10af2d457; -[CTPStickerPresentationModel isEqual:] */

bool FUN_10af2d3d0(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10af2d458; end: 10af2d45f; -[CTPStickerPresentationModel imageSize] */

undefined8 FUN_10af2d458(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af2d460; end: 10af2d513; -[CTPLottieStickerPresentationModel initWithLottieJSONString:snapSegmentDuration:currentTimeObservable:] */

undefined1 *
FUN_10af2d460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112702428;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10af2d514; end: 10af2d537; -[CTPLottieStickerPresentationModel copyWithZone:] */

undefined8 FUN_10af2d514(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af2d538; end: 10af2d5cf; -[CTPLottieStickerPresentationModel hash] */

undefined8 * FUN_10af2d538(long param_1,undefined8 param_2,undefined1 *param_3)

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
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar3;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10af2d684:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af2d690;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      dVar10 = ABS(*(double *)((long)puVar4 + 0x10) - *(double *)(param_3 + 0x10));
      dVar9 = ABS(*(double *)((long)puVar4 + 0x10) + *(double *)(param_3 + 0x10)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((bVar1) &&
         ((lVar6 = *(long *)((long)puVar4 + 8), lVar6 == *(long *)(param_3 + 8) ||
          (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x18);
        if (puVar8 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10af2d690;
        }
        goto LAB_10af2d684;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10af2d690:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 10af2d5d0; end: 10af2d6ab; -[CTPLottieStickerPresentationModel isEqual:] */

long FUN_10af2d5d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af2d684:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af2d690;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10af2d690;
        }
        goto LAB_10af2d684;
      }
    }
    lVar4 = 0;
  }
LAB_10af2d690:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10af2d6ac; end: 10af2d6b3; -[CTPLottieStickerPresentationModel lottieJSONString] */

undefined8 FUN_10af2d6ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af2d6b4; end: 10af2d6bb; -[CTPLottieStickerPresentationModel snapSegmentDuration] */

undefined8 FUN_10af2d6b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af2d6bc; end: 10af2d6c3; -[CTPLottieStickerPresentationModel currentTimeObservable] */

undefined8 FUN_10af2d6bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af2d6c4; end: 10af2d6f3; -[CTPLottieStickerPresentationModel .cxx_destruct] */

void FUN_10af2d6c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af2d6f4; end: 10af2d983; -[SCTimestampMetadata initWithDate:locale:timeZone:] */

undefined1 *
FUN_10af2d6f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_112702430;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_5;
    _objc_release(uVar2);
    if (puRam00000001137efe70 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
      _objc_alloc_init();
      puVar5 = puRam00000001137efe70;
      puRam00000001137efe70 = puVar3;
      _objc_release(puVar5);
      func_0x00010c189c20(puRam00000001137efe70);
      func_0x00010c215260(puRam00000001137efe70);
    }
    func_0x00010c1bf3e0(puRam00000001137efe70);
    func_0x00010c215860(puRam00000001137efe70);
    puVar4 = puRam00000001137efe70;
    func_0x00010c25d400();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puRam00000001137efe70;
    func_0x00010bdc0d00(puRam00000001137efe70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c11f420();
    _objc_release(puVar5);
    puVar5 = puRam00000001137efe70;
    func_0x00010bdc1de0(puRam00000001137efe70);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c11f420();
    _objc_release(puVar5);
    *(bool *)((long)puVar1 + 9) = puVar3 != (undefined *)0x7fffffffffffffff;
    *(bool *)((long)puVar1 + 8) =
         puVar6 != (undefined *)0x7fffffffffffffff || puVar3 != (undefined *)0x7fffffffffffffff;
    puVar6 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
    _objc_alloc();
    func_0x00010bffabc0();
    func_0x00010c215860();
    puVar7 = puVar6;
    func_0x00010bf44640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010bfe4740();
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    puVar5 = puVar3 + 0xb;
    if (*(char *)((long)puVar1 + 8) == '\x01') {
      puVar3 = puVar5 + (((ulong)((long)puVar5 / 6 + ((long)puVar5 >> 0x3f)) >> 1) -
                        ((long)puVar5 >> 0x3f)) * -0xc + 1;
    }
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    puVar5 = puVar7;
    func_0x00010c0ce880();
    *(undefined **)((long)puVar1 + 0x18) = puVar5;
    puVar5 = puVar7;
    func_0x00010bf65700();
    *(undefined **)((long)puVar1 + 0x28) = puVar5;
    puVar5 = puVar7;
    func_0x00010c0d0e40();
    *(undefined **)((long)puVar1 + 0x30) = puVar5;
    puVar5 = puVar7;
    func_0x00010c2bedc0();
    *(undefined **)((long)puVar1 + 0x38) = puVar5;
    *(undefined8 *)((long)puVar1 + 0x58) = 0x274acd;
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af2d984; end: 10af2da9b; -[SCTimestampMetadata isEqual:] */

undefined8 FUN_10af2d984(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    uVar5 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126d2760;
    _objc_opt_class(PTR_PTR_1126d2760);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      iVar6 = (int)*(undefined8 *)(param_1 + 0x40);
      uVar2 = param_3;
      func_0x00010bf64de0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071ce0();
      if (iVar6 == 0) {
        uVar5 = 0;
      }
      else {
        iVar6 = (int)*(undefined8 *)(param_1 + 0x48);
        uVar3 = param_3;
        func_0x00010c09e1e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c071ae0();
        if (iVar6 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined8 *)(param_1 + 0x50);
          uVar4 = param_3;
          func_0x00010c26fc80(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0720e0(uVar5);
          _objc_release(uVar4);
        }
        _objc_release(uVar3);
      }
      _objc_release(uVar2);
    }
  }
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 10af2da9c; end: 10af2db1b; -[SCTimestampMetadata hash] */

undefined8 * FUN_10af2da9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain();
  return (undefined8 *)(undefined1 *)puVar3;
}



/* Entry: 10af2db1c; end: 10af2db3f; -[SCTimestampMetadata copyWithZone:] */

undefined8 FUN_10af2db1c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af2db40; end: 10af2dccb; -[SCTimestampMetadata initWithCoder:] */

undefined1 * FUN_10af2db40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702430;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af2dccc; end: 10af2ddf3; -[SCTimestampMetadata encodeWithCoder:] */

void FUN_10af2dccc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92da0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f38778);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f38798);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f387b8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e04e38);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e04e78);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f387d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f387f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f38818);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110e6d578);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110db8558);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110f38838);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110dad058);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af2ddf4; end: 10af2ddfb; -[SCTimestampMetadata hasAmPmModifier] */

undefined1 FUN_10af2ddf4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10af2ddfc; end: 10af2de03; -[SCTimestampMetadata isAm] */

undefined1 FUN_10af2ddfc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10af2de04; end: 10af2de0b; -[SCTimestampMetadata hourToDisplay] */

undefined8 FUN_10af2de04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af2de0c; end: 10af2de13; -[SCTimestampMetadata hour] */

undefined8 FUN_10af2de0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af2de14; end: 10af2de1b; -[SCTimestampMetadata minute] */

undefined8 FUN_10af2de14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af2de1c; end: 10af2de23; -[SCTimestampMetadata day] */

undefined8 FUN_10af2de1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


