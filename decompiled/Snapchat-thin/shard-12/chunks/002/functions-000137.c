/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e742cc; end: 108e742d3; -[SCPreviewInfoStickerData timestamp] */

undefined8 FUN_108e742cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108e742d4; end: 108e742db; -[SCPreviewInfoStickerData batteryStatus] */

undefined8 FUN_108e742d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108e742dc; end: 108e742e3; -[SCPreviewInfoStickerData altitude] */

undefined8 FUN_108e742dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108e742e4; end: 108e7432b; -[SCPreviewInfoStickerData .cxx_destruct] */

void FUN_108e742e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e7432c; end: 108e743d7; -[SCInfoStickerEditorSelectorOptionViewModel initWithTitle:subTitle:] */

undefined1 *
FUN_108e7432c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fecc0;
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



/* Entry: 108e743d8; end: 108e743fb; -[SCInfoStickerEditorSelectorOptionViewModel copyWithZone:] */

undefined8 FUN_108e743d8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e743fc; end: 108e7446f; -[SCInfoStickerEditorSelectorOptionViewModel hash] */

undefined8 * FUN_108e743fc(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108e744f0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108e744fc;
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
          goto LAB_108e744fc;
        }
        goto LAB_108e744f0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108e744fc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108e74470; end: 108e74517; -[SCInfoStickerEditorSelectorOptionViewModel isEqual:] */

long FUN_108e74470(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108e744f0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e744fc;
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
          goto LAB_108e744fc;
        }
        goto LAB_108e744f0;
      }
    }
    lVar3 = 0;
  }
LAB_108e744fc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108e74518; end: 108e7451f; -[SCInfoStickerEditorSelectorOptionViewModel title] */

undefined8 FUN_108e74518(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e74520; end: 108e74527; -[SCInfoStickerEditorSelectorOptionViewModel subTitle] */

undefined8 FUN_108e74520(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e74528; end: 108e74557; -[SCInfoStickerEditorSelectorOptionViewModel .cxx_destruct] */

void FUN_108e74528(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e74558; end: 108e74653; -[SCWeatherStickerData initWithCelsius:fahrenheit:locationName:hourlyForecasts:dailyForecasts:weatherType:] */

undefined1 *
FUN_108e74558(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

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
  puStack_58 = PTR_PTR_1126fecc8;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_1;
    *(undefined4 *)((long)puVar1 + 0xc) = param_2;
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
    *(undefined4 *)((long)puVar1 + 0x10) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 108e74654; end: 108e74677; -[SCWeatherStickerData copyWithZone:] */

undefined8 FUN_108e74654(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e74678; end: 108e7474b; -[SCWeatherStickerData hash] */

long * FUN_108e74678(long param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = (ulong)*(uint *)(param_1 + 8) * 0x200000 - 1;
  uVar7 = (uVar7 ^ uVar7 >> 0x18) * 0x109;
  uVar8 = (ulong)*(uint *)(param_1 + 0xc) * 0x200000 - 1;
  uVar8 = (uVar8 ^ uVar8 >> 0x18) * 0x109;
  uVar7 = (uVar7 ^ uVar7 >> 0xe) * 0x15;
  lStack_58 = (uVar7 ^ uVar7 >> 0x1c) * 0x80000001;
  uVar7 = (uVar8 ^ uVar8 >> 0xe) * 0x15;
  lStack_50 = (uVar7 ^ uVar7 >> 0x1c) * 0x80000001;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  lStack_30 = (long)*(int *)(param_1 + 0x10);
  plVar4 = &lStack_58;
  uStack_38 = uVar2;
  func_0x000107c3191c(plVar4,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar4 == param_3) {
LAB_108e74850:
    plVar9 = (long *)0x1;
  }
  else {
    plVar9 = (long *)0x0;
    if ((plVar4 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_108e7485c;
    plVar9 = plVar4;
    _objc_opt_class(plVar4);
    plVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar9);
    if ((((ulong)plVar5 & 1) != 0) && ((int)plVar4[2] == (int)param_3[2])) {
      fVar11 = ABS(*(float *)(plVar4 + 1) - *(float *)(param_3 + 1));
      fVar10 = ABS(*(float *)(plVar4 + 1) + *(float *)(param_3 + 1)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar11) && (bVar1 = false, !NAN(fVar11) && !NAN(fVar10))) {
        bVar1 = fVar11 < fVar10;
      }
      if (bVar1) {
        fVar11 = ABS(*(float *)((long)plVar4 + 0xc) - *(float *)((long)param_3 + 0xc));
        fVar10 = ABS(*(float *)((long)plVar4 + 0xc) + *(float *)((long)param_3 + 0xc)) *
                 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar11) && (bVar1 = false, !NAN(fVar11) && !NAN(fVar10))) {
          bVar1 = fVar11 < fVar10;
        }
        if (((bVar1) &&
            ((lVar6 = plVar4[3], lVar6 == param_3[3] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
           && ((lVar6 = plVar4[4], lVar6 == param_3[4] || (func_0x00010c071ae0(), (int)lVar6 != 0)))
           ) {
          plVar9 = (long *)plVar4[5];
          if (plVar9 != (long *)param_3[5]) {
            func_0x00010c071ae0();
            goto LAB_108e7485c;
          }
          goto LAB_108e74850;
        }
      }
    }
    plVar9 = (long *)0x0;
  }
LAB_108e7485c:
  _objc_release(param_3);
  return plVar9;
}



/* Entry: 108e7474c; end: 108e74877; -[SCWeatherStickerData isEqual:] */

long FUN_108e7474c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108e74850:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e7485c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(int *)(param_1 + 0x10) == *(int *)(param_3 + 0x10))) {
      fVar6 = ABS(*(float *)(param_1 + 8) - *(float *)(param_3 + 8));
      fVar5 = ABS(*(float *)(param_1 + 8) + *(float *)(param_3 + 8)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5))) {
        bVar1 = fVar6 < fVar5;
      }
      if (bVar1) {
        fVar6 = ABS(*(float *)(param_1 + 0xc) - *(float *)(param_3 + 0xc));
        fVar5 = ABS(*(float *)(param_1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5))) {
          bVar1 = fVar6 < fVar5;
        }
        if (((bVar1) &&
            ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + 0x28);
          if (lVar4 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_108e7485c;
          }
          goto LAB_108e74850;
        }
      }
    }
    lVar4 = 0;
  }
LAB_108e7485c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 108e74878; end: 108e7487f; -[SCWeatherStickerData celsius] */

undefined4 FUN_108e74878(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 108e74880; end: 108e74887; -[SCWeatherStickerData fahrenheit] */

undefined4 FUN_108e74880(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 108e74888; end: 108e7488f; -[SCWeatherStickerData locationName] */

undefined8 FUN_108e74888(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108e74890; end: 108e74897; -[SCWeatherStickerData hourlyForecasts] */

undefined8 FUN_108e74890(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108e74898; end: 108e7489f; -[SCWeatherStickerData dailyForecasts] */

undefined8 FUN_108e74898(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108e748a0; end: 108e748a7; -[SCWeatherStickerData weatherType] */

undefined4 FUN_108e748a0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 108e748a8; end: 108e748e3; -[SCWeatherStickerData .cxx_destruct] */

void FUN_108e748a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108e748e4; end: 108e74a33; -[SCSnapcodeStickerViewModel initWithUserId:displayName:username:bitmojiAvatarId:bitmojiSelfieId:displayUserTag:displayTarget:] */

undefined1 *
FUN_108e748e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126fecd0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e74a34; end: 108e74a57; -[SCSnapcodeStickerViewModel copyWithZone:] */

undefined8 FUN_108e74a34(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e74a58; end: 108e74b03; -[SCSnapcodeStickerViewModel hash] */

undefined8 * FUN_108e74a58(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x38);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108e74bec:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108e74bf8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)((long)puVar3 + 8) == param_3[8] &&
        (*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x30);
              if (puVar6 != *(undefined1 **)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_108e74bf8;
              }
              goto LAB_108e74bec;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108e74bf8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108e74b04; end: 108e74c13; -[SCSnapcodeStickerViewModel isEqual:] */

long FUN_108e74b04(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108e74bec:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e74bf8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_108e74bf8;
              }
              goto LAB_108e74bec;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108e74bf8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108e74c14; end: 108e74c1b; -[SCSnapcodeStickerViewModel userId] */

undefined8 FUN_108e74c14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e74c1c; end: 108e74c23; -[SCSnapcodeStickerViewModel displayName] */

undefined8 FUN_108e74c1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108e74c24; end: 108e74c2b; -[SCSnapcodeStickerViewModel username] */

undefined8 FUN_108e74c24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108e74c2c; end: 108e74c33; -[SCSnapcodeStickerViewModel bitmojiAvatarId] */

undefined8 FUN_108e74c2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108e74c34; end: 108e74c3b; -[SCSnapcodeStickerViewModel bitmojiSelfieId] */

undefined8 FUN_108e74c34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108e74c3c; end: 108e74c43; -[SCSnapcodeStickerViewModel displayUserTag] */

undefined1 FUN_108e74c3c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108e74c44; end: 108e74c4b; -[SCSnapcodeStickerViewModel displayTarget] */

undefined8 FUN_108e74c44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108e74c4c; end: 108e74c9f; -[SCSnapcodeStickerViewModel .cxx_destruct] */

void FUN_108e74c4c(long param_1)

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



/* Entry: 108e74ca0; end: 108e74d23; -[SCStickerActionMenuFriendPillCell initWithFrame:] */

undefined1 * FUN_108e74ca0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fecd8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb14e0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e74d24; end: 108e75553; -[SCStickerActionMenuFriendPillCell _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e74d24(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 *puStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
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
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar12 = (long)_DAT_11277c9f0;
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar11);
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c08c0e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(uVar11);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12));
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar14 = (long)_DAT_11277c9f4;
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar1;
  _objc_release(uVar11);
  puVar1 = PTR_PTR_1126d3f50;
  func_0x00010bfb4200(PTR_PTR_1126d3f50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar14));
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar12));
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar13 = (long)_DAT_11277c9f8;
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar1;
  _objc_release(uVar11);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar13));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar13));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar12));
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  lVar15 = (long)_DAT_11277c9fc;
  uVar11 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  _objc_release(uVar11);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar13));
  puStack_190 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar12);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_100 = lVar3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_f8 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  lStack_110 = lVar3;
  lStack_f0 = lVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_120 = uVar11;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  uStack_130 = uVar11;
  uStack_e8 = uVar11;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_138 = uVar4;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  uStack_140 = uVar4;
  uStack_e0 = uVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_150 = uVar11;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_148 = lVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_158 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  uStack_160 = uVar11;
  uStack_d8 = uVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  uStack_168 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_170 = uVar11;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar14);
  uStack_178 = uVar4;
  uStack_d0 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  uStack_180 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_188 = uVar11;
  func_0x00010bf493c0(0xc018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  uStack_198 = uVar5;
  uStack_c8 = uVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  uStack_1a0 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_1a8 = uVar11;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  uStack_1b0 = uVar4;
  uStack_c0 = uVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_1b8 = uVar11;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_1c0 = uVar11;
  uStack_b8 = uVar11;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  uStack_1c8 = uVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_1d0 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar13);
  uStack_1d8 = uVar4;
  uStack_b0 = uVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  uStack_1e0 = uVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_1e8 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_1f0 = uVar5;
  uStack_a8 = uVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  uStack_1f8 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_200 = uVar11;
  func_0x00010bf493c0(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar13);
  uStack_208 = uVar4;
  uStack_a0 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  uStack_210 = uVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_218 = uVar11;
  func_0x00010bf493c0(0xc014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  uStack_220 = uVar5;
  uStack_98 = uVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  uStack_228 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_230 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar15);
  uStack_238 = uVar4;
  uStack_90 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar13);
  uStack_240 = uVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar15);
  uStack_88 = uVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar15);
  uStack_80 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_190);
  _objc_release(puVar1);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uStack_240);
  _objc_release(uStack_238);
  _objc_release(uStack_230);
  _objc_release(uStack_228);
  _objc_release(uStack_220);
  _objc_release(uStack_218);
  _objc_release(uStack_210);
  _objc_release(uStack_208);
  _objc_release(uStack_200);
  _objc_release(uStack_1f8);
  _objc_release(uStack_1f0);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1e0);
  _objc_release(uStack_1d8);
  _objc_release(uStack_1d0);
  _objc_release(uStack_1c8);
  _objc_release(uStack_1c0);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1b0);
  _objc_release(uStack_1a8);
  _objc_release(uStack_1a0);
  _objc_release(uStack_198);
  _objc_release(uStack_188);
  _objc_release(uStack_180);
  _objc_release(uStack_178);
  _objc_release(uStack_170);
  _objc_release(uStack_168);
  _objc_release(uStack_160);
  _objc_release(lStack_158);
  _objc_release(lStack_148);
  _objc_release(uStack_150);
  _objc_release(uStack_140);
  _objc_release(uStack_138);
  _objc_release(uStack_130);
  _objc_release(lStack_128);
  _objc_release(lStack_118);
  _objc_release(uStack_120);
  _objc_release(lStack_110);
  _objc_release(lStack_108);
  _objc_release(lStack_f8);
  lVar2 = lStack_100;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_248 = FUN_108e75554;
  puStack_268 = PTR_PTR_1126fecd8;
  lStack_270 = lVar2;
  uStack_260 = uVar9;
  uStack_258 = uVar4;
  puStack_250 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_270,PTR_s_prepareForReuse_112620008);
  func_0x00010c1a9f00(*(undefined8 *)(lVar2 + _DAT_11277c9f8));
  func_0x00010c256160(lVar2);
  return;
}



/* Entry: 108e75554; end: 108e755af; -[SCStickerActionMenuFriendPillCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e75554(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fecd8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11277c9f8));
  func_0x00010c256160(param_1);
  return;
}



/* Entry: 108e755b0; end: 108e755e7; -[SCStickerActionMenuFriendPillCell _didTapCell] */

void FUN_108e755b0(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7cb40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e755e8; end: 108e755f7; -[SCStickerActionMenuFriendPillCell startLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e755e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277c9fc),PTR_s_startAnimating_112671118);
  return;
}



/* Entry: 108e755f8; end: 108e75607; -[SCStickerActionMenuFriendPillCell stopLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e755f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277c9fc),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 108e75608; end: 108e75617; -[SCStickerActionMenuFriendPillCell setPillText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e75608(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277c9f4),PTR_s_setText__1126625f0);
  return;
}



/* Entry: 108e75618; end: 108e75647; -[SCStickerActionMenuFriendPillCell setImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e75618(long param_1)

{
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11277c9f8));
                    /* WARNING: Could not recover jumptable at 0x00010c256170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopLoading_112673280);
  return;
}



/* Entry: 108e75648; end: 108e756ef; -[SCStickerActionMenuFriendPillCell setPillHighlighted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e75648(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar2 = 0xc4;
  if (param_3 == 0) {
    uVar2 = 0xbb;
  }
  uVar1 = 0x6a;
  if (param_3 == 0) {
    uVar1 = 0x6b;
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_11277c9f4),param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11277c9f0),param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108e756f0; end: 108e7570f; -[SCStickerActionMenuFriendPillCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e756f0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277ca00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e75710; end: 108e75723; -[SCStickerActionMenuFriendPillCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e75710(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277ca00,param_3);
  return;
}



/* Entry: 108e75724; end: 108e7578f; -[SCStickerActionMenuFriendPillCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e75724(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277ca00);
  _objc_storeStrong(param_1 + _DAT_11277c9fc,0);
  _objc_storeStrong(param_1 + _DAT_11277c9f8,0);
  _objc_storeStrong(param_1 + _DAT_11277c9f4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c9f0,0);
  return;
}



/* Entry: 108e75790; end: 108e7584f; -[SCStickerActionMenuFriendPillsView initWithDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e75790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fece0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11277ca04),param_3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010beab960(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e75850; end: 108e75be7; -[SCStickerActionMenuFriendPillsView _setupCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e75850(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_alloc_init();
  func_0x00010c1f7ac0();
  func_0x00010c197460(*(undefined8 *)PTR__UICollectionViewFlowLayoutAutomaticSize_110345b08,
                      *(undefined8 *)(PTR__UICollectionViewFlowLayoutAutomaticSize_110345b08 + 8),
                      puVar1);
  func_0x00010c1c82c0(0x4020000000000000,puVar1);
  func_0x00010c1c8300(0x4020000000000000,puVar1);
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar17 = (long)_DAT_11277ca08;
  uVar16 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar2;
  _objc_release(uVar16);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar17));
  _objc_release(puVar2);
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar17));
  uVar16 = *(undefined8 *)(param_1 + lVar17);
  _objc_opt_class(PTR_PTR_1126dc3e8);
  func_0x00010c126000(uVar16);
  func_0x00010c181f80(0,0x4028000000000000,0,0x4028000000000000,*(undefined8 *)(param_1 + lVar17));
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c219b60(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17));
  func_0x00010befbb60(param_1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010bf49420(0x4049000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar14);
  _objc_release(lVar13);
  _objc_release(param_1);
  _objc_release(uVar12);
  _objc_release(lVar17);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar16);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar1 + _DAT_11277ca08),PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 108e75be8; end: 108e75bf7; -[SCStickerActionMenuFriendPillsView reloadPills] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e75be8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277ca08),PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 108e75bf8; end: 108e75c87; -[SCStickerActionMenuFriendPillsView _isPillHighlightedAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108e75bf8(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  param_1 = param_1 + _DAT_11277ca04;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010bfe34e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_3;
    func_0x00010bf433a0(param_3,param_2,lVar2);
    bVar1 = lVar3 == 0;
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108e75c88; end: 108e75cc7; -[SCStickerActionMenuFriendPillsView collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108e75c88(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11277ca04;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0df120();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 108e75cc8; end: 108e75e7f; -[SCStickerActionMenuFriendPillsView collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e75cc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bf6e0c0(param_3,param_2,&PTR____CFConstantStringClassReference_110efccd8,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  lVar5 = (long)_DAT_11277ca04;
  lVar2 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0fbe60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1db960(uVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be42a20(param_1,param_2,param_4);
  func_0x00010c1db8c0(uVar1,param_2,lVar2);
  param_1 = param_1 + lVar5;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010bfe7880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar2 != 0) {
    func_0x00010c24f1c0(uVar1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_108e75e80;
    puStack_70 = &UNK_11086f4e8;
    _objc_retain(param_3);
    uStack_68 = param_3;
    _objc_retain(uVar1);
    uVar4 = param_4;
    uStack_60 = uVar1;
    _objc_retain(param_4);
    uStack_58 = param_4;
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(lVar2,param_2,&puStack_88,uVar4);
    _objc_release(uVar4);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e75e80; end: 108e75eeb;  */

void FUN_108e75e80(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfecfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf433a0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e75eec; end: 108e75f4f; -[SCStickerActionMenuFriendPillsView didTapFriendPillCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e75eec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11277ca08);
  func_0x00010bfecfa0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    param_1 = param_1 + _DAT_11277ca04;
    _objc_loadWeakRetained(param_1);
    func_0x00010c159d40();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e75f50; end: 108e75f8b; -[SCStickerActionMenuFriendPillsView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e75f50(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277ca08,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277ca04);
  return;
}



/* Entry: 108e75f8c; end: 108e761b7; +[SCStickerActionMenu initWithItem:presentationModelProvider:itemViewService:friendmojiPickerBitmojiUsers:currentFriendmojiBitmojiUser:currentUserId:delegate:indexPath:superCategoryType:customStickerManager:customojiServices:creativeToolsABProvider:feedsTreeContext:remixStickerActionHandler:] */

void FUN_108e75f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined4 param_16,
                  undefined4 param_17,undefined8 param_18)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_18);
  uVar1 = param_3;
  func_0x00010c2721e0(param_3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d4cf8;
  func_0x00010bdc4580(PTR_PTR_1126d4cf8,param_2,uVar1);
  if ((int)puVar3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c108f40();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126d4cf8;
    _objc_alloc_init(PTR_PTR_1126d4cf8);
    func_0x00010beaa660();
    puVar2 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8760();
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_18);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108e761b8; end: 108e7620f; +[SCStickerActionMenu _actionMenuSupportedForSticker:] */

uint FUN_108e761b8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c27dd80();
    uVar2 = 1;
    if (uVar1 < 0xe) {
      uVar2 = 0x10ae >> (ulong)((uint)uVar1 & 0x1f);
    }
  }
  _objc_release(param_3);
  return uVar2 & 1;
}



/* Entry: 108e76210; end: 108e7645b; -[SCStickerActionMenu _setupActionSheetWithItem:presentationModelProvider:itemViewService:friendmojiPickerBitmojiUsers:currentFriendmojiBitmojiUser:currentUserId:delegate:indexPath:superCategoryType:customStickerManager:customojiServices:creativeToolsABProvider:feedsTreeContext:remixStickerActionHandler:] */

void FUN_108e76210(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined4 param_16,
                  undefined4 param_17,undefined8 param_18)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x18,param_9);
  puVar1 = PTR_PTR_1126dc3f0;
  _objc_alloc();
  func_0x00010c01fcc0();
  _objc_release(param_18);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b10a8;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfdef60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfb4220(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f40();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010c28c410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_updateWithActionSheet__112680b28,
             *(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 108e7645c; end: 108e7646f; -[SCStickerActionMenu presentFromViewController:] */

void FUN_108e7645c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10af90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_presentActionSheet_completion__112620600,*(undefined8 *)(param_1 + 0x10),
             0);
  return;
}



/* Entry: 108e76470; end: 108e76477; -[SCStickerActionMenu dismiss] */

void FUN_108e76470(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf82ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_dismissActionSheet_1125be5a0);
  return;
}



/* Entry: 108e76478; end: 108e764a3; -[SCStickerActionMenu actionSheetDidDismiss:] */

void FUN_108e76478(long param_1)

{
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010beeeac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e764a4; end: 108e764db; -[SCStickerActionMenu .cxx_destruct] */

void FUN_108e764a4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e764dc; end: 108e7656f; -[FriendmojiBitmojiData initWithBitmojiUser:displayName:] */

undefined1 *
FUN_108e764dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fece8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1717c0(puVar1);
    func_0x00010c18fca0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e76570; end: 108e76577; -[FriendmojiBitmojiData bitmojiUser] */

undefined8 FUN_108e76570(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e76578; end: 108e765a7; -[FriendmojiBitmojiData setBitmojiUser:] */

void FUN_108e76578(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e765a8; end: 108e765af; -[FriendmojiBitmojiData displayName] */

undefined8 FUN_108e765a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e765b0; end: 108e765df; -[FriendmojiBitmojiData setDisplayName:] */

void FUN_108e765b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e765e0; end: 108e7660f; -[FriendmojiBitmojiData .cxx_destruct] */

void FUN_108e765e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e76610; end: 108e76767; -[SCStickerActionMenuBitmojiFriendsView initWithFriendmojiPickerBitmojiUsers:currentFriendmojiBitmojiUser:currentUserId:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108e76610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126fecf0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)((long)puVar1 + (long)_DAT_11277ca20);
    _objc_storeWeak(puVar2,param_6);
    func_0x000107c3121c();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b8410);
    puVar3 = puVar2;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar3;
    func_0x00010bfc1d60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277ca24);
    *(undefined1 **)((long)puVar1 + (long)_DAT_11277ca24) = puVar2;
    _objc_release(uVar4);
    func_0x00010beacb60(puVar1);
    func_0x00010beacb40(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e76768; end: 108e7676f;  */

void FUN_108e76768(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15adb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_selfieFetcher_112634588);
  return;
}



/* Entry: 108e76770; end: 108e769d7; -[SCStickerActionMenuBitmojiFriendsView _setupFriendmojiPillsView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_108e76770(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 in_x4;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puStack_310;
  undefined8 uStack_308;
  code *pcStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  code *pcStack_2d8;
  undefined *puStack_2d0;
  ulong uStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  ulong uStack_1b8;
  long lStack_130;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126dc3f8;
  _objc_alloc();
  func_0x00010c008d60();
  lVar19 = (long)_DAT_11277ca28;
  uVar18 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar1;
  _objc_release(uVar18);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19));
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = *(undefined **)(param_1 + lVar19);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = 4;
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar10;
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(param_1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar18);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(puVar15);
  _objc_release(lVar21);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return puVar2;
  }
  ___stack_chk_fail();
  lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar14);
  _objc_retain(uVar16);
  _objc_retain(in_x4);
  if (uVar16 != 0) {
    puVar1 = puVar14;
    func_0x00010c0d3c80();
    if (puVar1 == (undefined *)0x0) {
      puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
    }
    else {
      _objc_retain(puVar1);
      puVar15 = puVar1;
    }
    _objc_release(puVar1);
    puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1d0 = 0xc2000000;
    pcStack_1c8 = FUN_108e76ea8;
    puStack_1c0 = &UNK_110864588;
    _objc_retain(uVar16);
    puVar1 = puVar15;
    uStack_1b8 = uVar16;
    func_0x00010bfece40();
    if (puVar1 != (undefined *)0x7fffffffffffffff) {
      func_0x00010c12d3c0(puVar15);
    }
    func_0x00010c066b00(puVar15);
    puVar1 = puVar15;
    func_0x00010bf51e00();
    _objc_release(puVar14);
    _objc_release(uStack_1b8);
    _objc_release(puVar15);
    puVar14 = puVar1;
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  _objc_retain(puVar14);
  puVar10 = puVar14;
  func_0x00010bf52a60();
  if (puVar10 != (undefined *)0x0) {
    lVar21 = *plStack_210;
    do {
      puVar20 = (undefined *)0x0;
      do {
        if (*plStack_210 != lVar21) {
          _objc_enumerationMutation(puVar14);
        }
        puVar11 = puVar2;
        func_0x00010be73d80(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar15);
        _objc_release(puVar11);
        puVar20 = puVar20 + 1;
      } while (puVar10 != puVar20);
      puVar10 = puVar14;
      func_0x00010bf52a60();
    } while (puVar10 != (undefined *)0x0);
  }
  _objc_release(puVar14);
  puVar10 = puVar2;
  func_0x00010be73d00();
  _objc_retainAutoreleasedReturnValue();
  puStack_258 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_250 = 0xc2000000;
  uStack_248 = 0x108e76f18;
  puStack_240 = &UNK_110ac77e8;
  _objc_retain();
  puStack_238 = puVar10;
  puStack_230 = puVar2;
  _objc_retain(puVar1);
  puStack_228 = puVar1;
  func_0x00010bf97e80(puVar14);
  if (uVar16 != 0) {
    uVar12 = uVar16;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c0720c0();
    _objc_release(uVar12);
    if ((uVar13 & 1) == 0) {
      uStack_288 = 0;
      uStack_278 = 0x3032000000;
      pcStack_270 = FUN_108e76fc8;
      uStack_268 = 0x108e76fd8;
      uStack_260 = 0;
      puStack_2b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2b0 = 0xc2000000;
      pcStack_2a8 = FUN_108e76fe0;
      puStack_2a0 = &UNK_110ac7818;
      puStack_280 = &uStack_288;
      _objc_retain(in_x4);
      uStack_298 = in_x4;
      puStack_290 = &uStack_288;
      func_0x00010bf97e80(puVar1);
      if (puStack_280[5] != 0) {
        func_0x00010c067fc0();
        puVar20 = puVar1;
        func_0x00010c0dfd40(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0(puStack_280[5]);
        func_0x00010c12d3c0(puVar1);
        func_0x00010befa120(puVar1);
        _objc_release(puVar20);
      }
      _objc_release(uStack_298);
      __Block_object_dispose(&uStack_288,8);
      _objc_release(uStack_260);
    }
  }
  puVar20 = puVar1;
  func_0x00010bf51e00();
  lVar21 = (long)_DAT_11277ca2c;
  uVar18 = *(undefined8 *)(puVar2 + lVar21);
  *(undefined **)(puVar2 + lVar21) = puVar20;
  _objc_release(uVar18);
  if (uVar16 != 0) {
    uVar18 = *(undefined8 *)(puVar2 + lVar21);
    puStack_2e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2e0 = 0xc2000000;
    pcStack_2d8 = FUN_108e77090;
    puStack_2d0 = &UNK_110ac7848;
    _objc_retain(uVar16);
    uStack_2c8 = uVar16;
    puStack_2c0 = puVar2;
    func_0x00010bf97e80(uVar18);
    _objc_release(uStack_2c8);
  }
  puStack_310 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_308 = 0xc2000000;
  pcStack_300 = FUN_108e7716c;
  puStack_2f8 = &UNK_110842e18;
  puStack_2f0 = puVar2;
  func_0x000107c312d0("APPSTORE",&puStack_310);
  _objc_release(puStack_228);
  _objc_release(puStack_238);
  _objc_release(puVar10);
  _objc_release(puVar15);
  _objc_release(puVar1);
  _objc_release(in_x4);
  _objc_release(uVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_130) {
    ___stack_chk_fail();
    puVar15 = (undefined *)0x8;
    __Block_object_dispose(&uStack_288,8);
    __Unwind_Resume();
    func_0x00010c2923e0(puVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(puVar14 + 0x20);
    func_0x00010c2923e0(uVar18);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar15;
    func_0x00010c0720c0(puVar15);
    _objc_release(uVar18);
    _objc_release(puVar15);
    return puVar1;
  }
  return puVar14;
}



/* Entry: 108e769d8; end: 108e76ea7; -[SCStickerActionMenuBitmojiFriendsView _setupFriendmojiDataSourceWithUsers:currentFriendmojiBitmojiUser:currentUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_108e769d8(long param_1,undefined8 param_2,undefined *param_3,ulong param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  long lStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  ulong uStack_218;
  long lStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  long lStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  ulong uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 != 0) {
    puVar1 = param_3;
    func_0x00010c0d3c80();
    if (puVar1 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
    }
    else {
      _objc_retain(puVar1);
      puVar5 = puVar1;
    }
    _objc_release(puVar1);
    puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_120 = 0xc2000000;
    pcStack_118 = FUN_108e76ea8;
    puStack_110 = &UNK_110864588;
    _objc_retain(param_4);
    puVar1 = puVar5;
    uStack_108 = param_4;
    func_0x00010bfece40();
    if (puVar1 != (undefined *)0x7fffffffffffffff) {
      func_0x00010c12d3c0(puVar5);
    }
    func_0x00010c066b00(puVar5);
    puVar1 = puVar5;
    func_0x00010bf51e00();
    _objc_release(param_3);
    _objc_release(uStack_108);
    _objc_release(puVar5);
    param_3 = puVar1;
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar9 = *plStack_160;
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (*plStack_160 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        lVar8 = param_1;
        func_0x00010be73d80(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(lVar8);
        puVar7 = puVar7 + 1;
      } while (puVar2 != puVar7);
      puVar2 = param_3;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(param_3);
  lVar9 = param_1;
  func_0x00010be73d00();
  _objc_retainAutoreleasedReturnValue();
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  uStack_198 = 0x108e76f18;
  puStack_190 = &UNK_110ac77e8;
  _objc_retain();
  lStack_188 = lVar9;
  lStack_180 = param_1;
  _objc_retain(puVar1);
  puStack_178 = puVar1;
  func_0x00010bf97e80(param_3);
  if (param_4 != 0) {
    uVar3 = param_4;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      uStack_1d8 = 0;
      uStack_1c8 = 0x3032000000;
      pcStack_1c0 = FUN_108e76fc8;
      uStack_1b8 = 0x108e76fd8;
      uStack_1b0 = 0;
      puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_200 = 0xc2000000;
      pcStack_1f8 = FUN_108e76fe0;
      puStack_1f0 = &UNK_110ac7818;
      puStack_1d0 = &uStack_1d8;
      _objc_retain(param_5);
      uStack_1e8 = param_5;
      puStack_1e0 = &uStack_1d8;
      func_0x00010bf97e80(puVar1);
      if (puStack_1d0[5] != 0) {
        func_0x00010c067fc0();
        puVar2 = puVar1;
        func_0x00010c0dfd40(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0(puStack_1d0[5]);
        func_0x00010c12d3c0(puVar1);
        func_0x00010befa120(puVar1);
        _objc_release(puVar2);
      }
      _objc_release(uStack_1e8);
      __Block_object_dispose(&uStack_1d8,8);
      _objc_release(uStack_1b0);
    }
  }
  puVar2 = puVar1;
  func_0x00010bf51e00();
  lVar8 = (long)_DAT_11277ca2c;
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar2;
  _objc_release(uVar6);
  if (param_4 != 0) {
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_230 = 0xc2000000;
    pcStack_228 = FUN_108e77090;
    puStack_220 = &UNK_110ac7848;
    _objc_retain(param_4);
    uStack_218 = param_4;
    lStack_210 = param_1;
    func_0x00010bf97e80(uVar6);
    _objc_release(uStack_218);
  }
  puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_258 = 0xc2000000;
  pcStack_250 = FUN_108e7716c;
  puStack_248 = &UNK_110842e18;
  lStack_240 = param_1;
  func_0x000107c312d0("APPSTORE",&puStack_260);
  _objc_release(puStack_178);
  _objc_release(lStack_188);
  _objc_release(lVar9);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    puVar5 = (undefined *)0x8;
    __Block_object_dispose(&uStack_1d8,8);
    __Unwind_Resume();
    func_0x00010c2923e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c2923e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar5;
    func_0x00010c0720c0(puVar5);
    _objc_release(uVar6);
    _objc_release(puVar5);
    return puVar1;
  }
  return param_3;
}



/* Entry: 108e76ea8; end: 108e76fc7;  */

undefined8 FUN_108e76ea8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 108e76fc8; end: 108e76fdf;  */

void FUN_108e76fc8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108e76fe0; end: 108e7708f;  */

void FUN_108e76fe0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010bf1c5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  _objc_release(param_2);
  if ((int)uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined **)(lVar4 + 0x28) = puVar2;
    _objc_release(uVar3);
    *param_4 = 1;
  }
  return;
}



/* Entry: 108e77090; end: 108e7716b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e77090(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x00010bf1c5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(param_2);
  if ((int)uVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_11277ca30);
    *(undefined **)(*(long *)(param_1 + 0x28) + (long)_DAT_11277ca30) = puVar3;
    _objc_release(uVar4);
    *param_4 = 1;
  }
  return;
}



/* Entry: 108e7716c; end: 108e7717f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7716c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277ca28),
             PTR_s_reloadPills_112627dc8);
  return;
}



/* Entry: 108e77180; end: 108e77213; -[SCStickerActionMenuBitmojiFriendsView _pillTextFromSnapchatter:] */

void FUN_108e77180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar2,param_2,uVar1);
  uVar3 = param_3;
  if ((int)puVar2 == 0) {
    func_0x00010bf85d80(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c294420(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108e77214; end: 108e774e7; -[SCStickerActionMenuBitmojiFriendsView _pillLabelsFromFullNames:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e77214(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSCountedSet_1126ba498;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSCountedSet_1126ba498;
  _objc_opt_new();
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar12 = *plStack_1a0;
    do {
      lVar13 = 0;
      do {
        if (*plStack_1a0 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        puVar4 = PTR_PTR_1126b2c18;
        func_0x00010bfb1120();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126b2c18;
        func_0x00010c22d940(PTR_PTR_1126b2c18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        func_0x00010befa120(puVar2);
        _objc_release(puVar5);
        _objc_release(puVar4);
        lVar13 = lVar13 + 1;
      } while (lVar3 != lVar13);
      lVar3 = param_3;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  _objc_retain(param_3);
  puVar9 = &uStack_1f0;
  lVar3 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar12 = *plStack_1e0;
    do {
      lVar13 = 0;
      do {
        if (*plStack_1e0 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        puVar5 = PTR_PTR_1126b2c18;
        func_0x00010bfb1120(PTR_PTR_1126b2c18);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126b2c18;
        func_0x00010c22d940(PTR_PTR_1126b2c18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf52b00();
        func_0x00010bf52b00();
        func_0x00010befa120(puVar4);
        _objc_release(puVar6);
        _objc_release(puVar5);
        lVar13 = lVar13 + 1;
      } while (lVar3 != lVar13);
      puVar9 = &uStack_1f0;
      lVar3 = param_3;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  puVar5 = puVar4;
  func_0x00010bf51e00();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126afd38;
    _objc_retain(puVar9);
    _objc_alloc_init(puVar1);
    puVar7 = puVar9;
    func_0x00010c2923e0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bc360(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = puVar9;
    func_0x00010bf1bae0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a8ea0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = puVar9;
    func_0x00010bf1bae0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = puVar7;
    func_0x00010bf1c0a0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b8160(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar7);
    func_0x00010c2b78c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar10 = *(undefined8 *)(param_3 + _DAT_11277ca24);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = 0x19;
    _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    func_0x00010bfaa020(uVar10);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar11);
    _objc_release(puVar4);
    _objc_release(uVar10);
    puVar5 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108e774e8; end: 108e77717; -[SCStickerActionMenuBitmojiFriendsView _getBitmojiSelfieForBitmojiUser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e774e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126afd38;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar3 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc360(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf1bae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a8ea0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf1bae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = uVar3;
  func_0x00010bf1c0a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b8160(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  func_0x00010c2b78c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277ca24);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  func_0x00010bfaa020(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  puVar4 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108e77718; end: 108e77723;  */

void FUN_108e77718(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 108e77724; end: 108e77733; -[SCStickerActionMenuBitmojiFriendsView numberOfPills] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e77724(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277ca2c),PTR_s_count_1125b2420);
  return;
}



/* Entry: 108e77734; end: 108e777d7; -[SCStickerActionMenuBitmojiFriendsView pillTextForIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e77734(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11277ca2c;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010bf529e0();
  uVar2 = param_3;
  func_0x00010c0840e0();
  if (uVar2 < uVar1) {
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    uVar2 = param_3;
    func_0x00010c0840e0(param_3);
    func_0x00010c0dfd20(uVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108e777d8; end: 108e7789b; -[SCStickerActionMenuBitmojiFriendsView imageForIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e777d8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11277ca2c;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010bf529e0();
  uVar2 = param_3;
  func_0x00010c0840e0();
  if (uVar2 < uVar1) {
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    uVar2 = param_3;
    func_0x00010c0840e0(param_3);
    func_0x00010c0dfd20(uVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf1c5a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1d460(param_1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
  else {
    param_1 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108e7789c; end: 108e778e7; -[SCStickerActionMenuBitmojiFriendsView highlightedPillIndexPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7789c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  lVar2 = *(long *)(param_1 + _DAT_11277ca30);
  if (lVar2 != 0) {
    func_0x00010c067fc0();
    func_0x00010bfed020(puVar1,param_2,lVar2,0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e778e8; end: 108e779ab; -[SCStickerActionMenuBitmojiFriendsView selectedPillAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e778e8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11277ca2c;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010bf529e0();
  uVar2 = param_3;
  func_0x00010c0840e0();
  if (uVar2 < uVar1) {
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    uVar2 = param_3;
    func_0x00010c0840e0(param_3);
    func_0x00010c0dfd20(uVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf1c5a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    param_1 = param_1 + _DAT_11277ca20;
    _objc_loadWeakRetained(param_1);
    func_0x00010beee980();
    _objc_release(param_1);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e779ac; end: 108e77a17; -[SCStickerActionMenuBitmojiFriendsView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e779ac(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277ca20);
  _objc_storeStrong(param_1 + _DAT_11277ca30,0);
  _objc_storeStrong(param_1 + _DAT_11277ca2c,0);
  _objc_storeStrong(param_1 + _DAT_11277ca28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277ca24,0);
  return;
}



/* Entry: 108e77a18; end: 108e77c9b; -[SCStickerActionMenuProvider initWithItem:presentationModelProvider:itemViewService:friendmojiPickerBitmojiUsers:currentFriendmojiBitmojiUser:currentUserId:delegate:indexPath:superCategoryType:customStickerManager:customojiServices:creativeToolsABProvider:feedsTreeContext:remixStickerActionHandler:] */

undefined8 *
FUN_108e77a18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_1126fecf8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c2721e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c29cde0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0xf];
    puVar1[0xf] = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    puVar1[0xc] = param_16;
    func_0x00010beaada0(puVar1);
    func_0x00010bead460(puVar1);
    func_0x00010beaca40(puVar1);
  }
  _objc_release(param_17);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
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



/* Entry: 108e77c9c; end: 108e77f0b; -[SCStickerActionMenuProvider _setupBaseInitWithFriendmojiPickerBitmojiUsers:currentFriendmojiBitmojiUser:currentUserId:delegate:indexPath:superCategoryType:customStickerManager:customojiServices:creativeToolsABProvider:] */

void FUN_108e77c9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_11);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_10);
  _objc_retain(param_6);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar5);
  _objc_storeWeak(param_1 + 0x28,param_6);
  _objc_release(param_6);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar5);
  *(undefined8 *)(param_1 + 0x20) = param_8;
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_9;
  _objc_retain(param_9);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_11;
  _objc_retain(param_11);
  _objc_release(uVar5);
  uVar5 = param_10;
  func_0x00010bf62fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_10);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  _objc_release();
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126be9d0);
  uVar5 = uVar1;
  func_0x00010beecc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar5;
  func_0x00010bfc1d60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126ae790;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar2;
  _objc_release(uVar1);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 108e77f0c; end: 108e77f13;  */

void FUN_108e77f0c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2918d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userDataFeedService_112682058);
  return;
}



/* Entry: 108e77f14; end: 108e78077; -[SCStickerActionMenuProvider _setupItemHeader] */

void FUN_108e77f14(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined **)(param_1 + 0xa0) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0xa0));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x80));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x88));
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c0e0460();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 108e78078; end: 108e780bf;  */

void FUN_108e78078(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2f460();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e780c0; end: 108e78123; -[SCStickerActionMenuProvider _headerFriendsView] */

void FUN_108e780c0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf96f00();
  if (((lVar1 == 2) && (lVar1 = param_1, func_0x00010be442a0(), (int)lVar1 != 0)) &&
     (*(long *)(param_1 + 0x38) != 0)) {
    _objc_alloc(PTR_PTR_1126dc408);
    func_0x00010c016040();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e78124; end: 108e78183; -[SCStickerActionMenuProvider _isStickerBitmojiFriendmoji] */

bool FUN_108e78124(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf96f00();
  if (lVar2 == 2) {
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010bf96da0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf1c500();
    bVar1 = lVar2 == 2;
    _objc_release(lVar3);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 108e78184; end: 108e78283; -[SCStickerActionMenuProvider _setupFooter] */

void FUN_108e78184(long param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126b10a0;
  FUN_108e86790();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf1d200(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined **)(param_1 + 0xa8) = puVar2;
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 108e78284; end: 108e782f7;  */

void FUN_108e78284(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf82fe0(param_2);
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x78));
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010beeeac0();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e782f8; end: 108e7838f; -[SCStickerActionMenuProvider updateWithActionSheet:] */

void FUN_108e782f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x70,param_3);
  lVar1 = param_1;
  func_0x00010bec9020();
  if ((int)lVar1 != 0) {
    func_0x00010bdc6b80(param_1);
  }
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf96f00();
  if (lVar1 == 3) {
    func_0x00010bdc6740(param_1);
  }
  if (*(long *)(param_1 + 0x20) == 1) {
    func_0x00010bdc7fa0(param_1);
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    func_0x00010bdc7f80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e78390; end: 108e783bf; -[SCStickerActionMenuProvider _supportsFavoriteActionCell] */

uint FUN_108e78390(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf96f00(uVar1);
  return (uint)(0x11 < uVar1) | 0x46eU >> (ulong)((uint)uVar1 & 0x1f) & 1;
}



/* Entry: 108e783c0; end: 108e783eb; -[SCStickerActionMenuProvider _externalItemId] */

void FUN_108e783c0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126be9e8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain();
  _objc_alloc(puVar2);
  uVar3 = uVar1;
  func_0x00010bf9e140(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf96f00(uVar1);
  _objc_release(uVar1);
  func_0x00010c01b3c0(puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e783ec; end: 108e7862f; -[SCStickerActionMenuProvider _addFavoriteActionCellToActionSheet:] */

void FUN_108e783ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b10a0;
  func_0x00010c09cc80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010beee860(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d3c80();
  _objc_release(uVar2);
  func_0x00010c066b00(uVar3);
  uVar2 = uVar3;
  func_0x00010bf51e00(uVar3);
  uVar6 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bfb4220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c131280(param_3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_initWeak(auStack_58,param_1);
  lVar4 = param_1;
  func_0x00010be0d6e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c0726a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    _objc_retain(puVar1);
    func_0x00010c297260(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(puVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
  }
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}


