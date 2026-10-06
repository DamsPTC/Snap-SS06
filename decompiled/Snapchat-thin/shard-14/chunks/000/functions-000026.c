/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af32268; end: 10af3233f; -[SCPlusCameraTheme initWithCaptureButton:recordingFrame:blinkingGhostColor:] */

undefined1 *
FUN_10af32268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1127024f8;
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



/* Entry: 10af32340; end: 10af32363; -[SCPlusCameraTheme copyWithZone:] */

undefined8 FUN_10af32340(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af32364; end: 10af323e3; -[SCPlusCameraTheme hash] */

undefined8 * FUN_10af32364(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10af3247c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af32488;
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
            func_0x00010c071c60();
            goto LAB_10af32488;
          }
          goto LAB_10af3247c;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10af32488:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10af323e4; end: 10af324a3; -[SCPlusCameraTheme isEqual:] */

long FUN_10af323e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af3247c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af32488;
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
            func_0x00010c071c60();
            goto LAB_10af32488;
          }
          goto LAB_10af3247c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af32488:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af324a4; end: 10af324ab; -[SCPlusCameraTheme captureButton] */

undefined8 FUN_10af324a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af324ac; end: 10af324b3; -[SCPlusCameraTheme recordingFrame] */

undefined8 FUN_10af324ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af324b4; end: 10af324bb; -[SCPlusCameraTheme blinkingGhostColor] */

undefined8 FUN_10af324b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af324bc; end: 10af324f7; -[SCPlusCameraTheme .cxx_destruct] */

void FUN_10af324bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af324f8; end: 10af325f7; -[SCPlusCustomAppThemeGradient initWithType:colors:locations:startPoint:endPoint:] */

undefined1 *
FUN_10af324f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_112702500;
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
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 10af325f8; end: 10af3261b; -[SCPlusCustomAppThemeGradient copyWithZone:] */

undefined8 FUN_10af325f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af3261c; end: 10af3271f; -[SCPlusCustomAppThemeGradient hash] */

undefined8 * FUN_10af3261c(long param_1,undefined8 param_2,undefined1 *param_3)

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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
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
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar4;
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_48 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_40 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_38 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_30 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_50 = uVar3;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (undefined8 *)param_3) {
LAB_10af327f8:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af327fc;
    puVar9 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if (((ulong)puVar6 & 1) != 0) {
      bVar2 = false;
      if ((*(double *)((long)puVar5 + 0x20) == *(double *)(param_3 + 0x20)) &&
         (bVar2 = false, !NAN(*(double *)((long)puVar5 + 0x28)) && !NAN(*(double *)(param_3 + 0x28))
         )) {
        bVar2 = *(double *)((long)puVar5 + 0x28) == *(double *)(param_3 + 0x28);
      }
      if (bVar2) {
        puVar9 = (undefined1 *)0x0;
        if ((*(double *)((long)puVar5 + 0x30) != *(double *)(param_3 + 0x30)) ||
           (*(double *)((long)puVar5 + 0x38) != *(double *)(param_3 + 0x38))) goto LAB_10af327fc;
        lVar7 = *(long *)((long)puVar5 + 8);
        if (((lVar7 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
           ((lVar7 = *(long *)((long)puVar5 + 0x10), lVar7 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar7 != 0)))) {
          puVar9 = *(undefined1 **)((long)puVar5 + 0x18);
          if (puVar9 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10af327fc;
          }
          goto LAB_10af327f8;
        }
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_10af327fc:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 10af32720; end: 10af32817; -[SCPlusCustomAppThemeGradient isEqual:] */

long FUN_10af32720(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af327f8:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af327fc;
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
      if (bVar1) {
        lVar4 = 0;
        if ((*(double *)(param_1 + 0x30) != *(double *)(param_3 + 0x30)) ||
           (*(double *)(param_1 + 0x38) != *(double *)(param_3 + 0x38))) goto LAB_10af327fc;
        lVar4 = *(long *)(param_1 + 8);
        if (((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
           ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + 0x18);
          if (lVar4 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10af327fc;
          }
          goto LAB_10af327f8;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10af327fc:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10af32818; end: 10af3281f; -[SCPlusCustomAppThemeGradient type] */

undefined8 FUN_10af32818(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af32820; end: 10af32827; -[SCPlusCustomAppThemeGradient colors] */

undefined8 FUN_10af32820(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af32828; end: 10af3282f; -[SCPlusCustomAppThemeGradient locations] */

undefined8 FUN_10af32828(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af32830; end: 10af32837; -[SCPlusCustomAppThemeGradient startPoint] */

undefined1  [16] FUN_10af32830(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x20);
}



/* Entry: 10af32838; end: 10af3283f; -[SCPlusCustomAppThemeGradient endPoint] */

undefined1  [16] FUN_10af32838(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x30);
}



/* Entry: 10af32840; end: 10af3287b; -[SCPlusCustomAppThemeGradient .cxx_destruct] */

void FUN_10af32840(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af3287c; end: 10af3289f; -[SCPlusNavigationBarTheme copyWithZone:] */

undefined8 FUN_10af3287c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af328a0; end: 10af32943; -[SCPlusNavigationBarTheme hash] */

undefined8 * FUN_10af328a0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af32a24:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af32a30;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071c60(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071c60(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071c60(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[6];
                if (puVar6 != (undefined8 *)param_3[6]) {
                  func_0x00010c071c60();
                  goto LAB_10af32a30;
                }
                goto LAB_10af32a24;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af32a30:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af32944; end: 10af32a4b; -[SCPlusNavigationBarTheme isEqual:] */

long FUN_10af32944(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af32a24:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af32a30;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071c60(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071c60(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071c60(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if (lVar3 != *(long *)(param_3 + 0x30)) {
                  func_0x00010c071c60();
                  goto LAB_10af32a30;
                }
                goto LAB_10af32a24;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af32a30:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af32a4c; end: 10af32ab3; +[SCPlusNavigationBarThemeBackground colorWithColor:] */

void FUN_10af32a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d1ac8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af32ab4; end: 10af32b1f; +[SCPlusNavigationBarThemeBackground gradientWithGradient:] */

void FUN_10af32ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d1ac8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af32b20; end: 10af32b8b; +[SCPlusNavigationBarThemeBackground imageWithImage:] */

void FUN_10af32b20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d1ac8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af32b8c; end: 10af32bd3; +[SCPlusNavigationBarThemeBackground none] */

void FUN_10af32b8c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d1ac8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af32bd4; end: 10af32bf7; -[SCPlusNavigationBarThemeBackground copyWithZone:] */

undefined8 FUN_10af32bd4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af32bf8; end: 10af32c7b; -[SCPlusNavigationBarThemeBackground hash] */

void FUN_10af32bf8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_112702510;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af32c7c; end: 10af32cbf; -[SCPlusNavigationBarThemeBackground internalInit] */

void FUN_10af32c7c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112702510;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af32cc0; end: 10af32d8f; -[SCPlusNavigationBarThemeBackground isEqual:] */

long FUN_10af32cc0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af32d68:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af32d74;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071c60(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10af32d74;
          }
          goto LAB_10af32d68;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af32d74:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af32d90; end: 10af32e7f; -[SCPlusNavigationBarThemeBackground matchNone:color:gradient:image:] */

void FUN_10af32d90(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))(param_3);
      }
      goto LAB_10af32e50;
    }
    if ((lVar2 != 1) || (param_4 == 0)) goto LAB_10af32e50;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_4 + 0x10);
    lVar2 = param_4;
  }
  else if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_10af32e50;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  else {
    if ((lVar2 != 3) || (param_6 == 0)) goto LAB_10af32e50;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    pcVar3 = *(code **)(param_6 + 0x10);
    lVar2 = param_6;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_10af32e50:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af32e80; end: 10af32ebb; -[SCPlusNavigationBarThemeBackground .cxx_destruct] */

void FUN_10af32e80(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af32ebc; end: 10af32f67; -[SCPlusCustomAppTheme initWithBackgroundImage:themeId:] */

undefined1 *
FUN_10af32ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112702518;
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



/* Entry: 10af32f68; end: 10af32f8b; -[SCPlusCustomAppTheme copyWithZone:] */

undefined8 FUN_10af32f68(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af32f8c; end: 10af32fff; -[SCPlusCustomAppTheme hash] */

undefined8 * FUN_10af32f8c(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10af33080:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af3308c;
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
          goto LAB_10af3308c;
        }
        goto LAB_10af33080;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af3308c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af33000; end: 10af330a7; -[SCPlusCustomAppTheme isEqual:] */

long FUN_10af33000(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af33080:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af3308c;
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
          goto LAB_10af3308c;
        }
        goto LAB_10af33080;
      }
    }
    lVar3 = 0;
  }
LAB_10af3308c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af330a8; end: 10af330af; -[SCPlusCustomAppTheme backgroundImage] */

undefined8 FUN_10af330a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af330b0; end: 10af330b7; -[SCPlusCustomAppTheme themeId] */

undefined8 FUN_10af330b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af330b8; end: 10af330e7; -[SCPlusCustomAppTheme .cxx_destruct] */

void FUN_10af330b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af330e8; end: 10af330ef; -[SCPlusPetServices imageFetcher] */

undefined8 FUN_10af330e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af330f0; end: 10af330f7; -[SCPlusPetServices preferencesFetcher] */

undefined8 FUN_10af330f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af330f8; end: 10af33127; -[SCPlusPetServices .cxx_destruct] */

void FUN_10af330f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af33128; end: 10af33133; +[SCCPlusHandleCampaignEvent modulePath] */

undefined ** FUN_10af33128(void)

{
  return &PTR____CFConstantStringClassReference_110f388b8;
}



/* Entry: 10af33134; end: 10af33137; +[SCCPlusHandleCampaignEvent asyncStrictMode] */

undefined8 FUN_10af33134(void)

{
  return 0;
}



/* Entry: 10af33138; end: 10af3317f; -[SCCPlusHandleCampaignEvent handleCampaignEventWithContext:] */

void FUN_10af33138(void)

{
  code *extraout_x8;
  
  func_0x00010af34b1c();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af34c7c();
  (*extraout_x8)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af34c34();
  func_0x00010af34ca4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af33180; end: 10af33257; +[SCCPlusHandleCampaignEvent invokeWithJSRuntimeProvider:context:completionHandler:] */

void FUN_10af33180(void)

{
  code *extraout_x8;
  
  func_0x00010af34b74();
  func_0x00010af34cac();
  func_0x00010af34d20();
  (*extraout_x8)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af34bf4();
  func_0x00010af34b40(0x10af331f4,0xc2000000);
  func_0x00010af34c9c();
  func_0x00010af34ce8();
  func_0x00010af34c10();
  func_0x00010af34cd8();
  func_0x00010af34cd0();
  func_0x00010af34c8c();
  func_0x00010af34ca4();
  func_0x00010af34c4c();
  func_0x00010af34c94();
  return;
}



/* Entry: 10af33258; end: 10af3326b; +[SCCPlusHandleCampaignEvent valdiMarshallableObjectDescriptor] */

void FUN_10af33258(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c93180;
  param_1[1] = &PTR_DAT_110c931b0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10af3326c; end: 10af33277; +[SCCPlusResolveFeedHeaderPromptCampaigns modulePath] */

undefined ** FUN_10af3326c(void)

{
  return &PTR____CFConstantStringClassReference_110f388d8;
}



/* Entry: 10af33278; end: 10af3327b; +[SCCPlusResolveFeedHeaderPromptCampaigns asyncStrictMode] */

undefined8 FUN_10af33278(void)

{
  return 0;
}



/* Entry: 10af3327c; end: 10af332c3; -[SCCPlusResolveFeedHeaderPromptCampaigns resolveFeedHeaderPromptCampaignsWithContext:] */

void FUN_10af3327c(void)

{
  code *extraout_x8;
  
  func_0x00010af34b1c();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af34c7c();
  (*extraout_x8)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af34c34();
  func_0x00010af34ca4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af332c4; end: 10af3339b; +[SCCPlusResolveFeedHeaderPromptCampaigns invokeWithJSRuntimeProvider:context:completionHandler:] */

void FUN_10af332c4(void)

{
  code *extraout_x8;
  
  func_0x00010af34b74();
  func_0x00010af34cac();
  func_0x00010af34d20();
  (*extraout_x8)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af34bf4();
  func_0x00010af34b40(0x10af33338,0xc2000000);
  func_0x00010af34c9c();
  func_0x00010af34ce8();
  func_0x00010af34c10();
  func_0x00010af34cd8();
  func_0x00010af34cd0();
  func_0x00010af34c8c();
  func_0x00010af34ca4();
  func_0x00010af34c4c();
  func_0x00010af34c94();
  return;
}



/* Entry: 10af3339c; end: 10af333af; +[SCCPlusResolveFeedHeaderPromptCampaigns valdiMarshallableObjectDescriptor] */

void FUN_10af3339c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c931c0;
  param_1[1] = &PTR_DAT_110c931f0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10af333b0; end: 10af333bb; +[SCCPlusResolveFriendProfileCampaign modulePath] */

undefined ** FUN_10af333b0(void)

{
  return &PTR____CFConstantStringClassReference_110f388f8;
}



/* Entry: 10af333bc; end: 10af333bf; +[SCCPlusResolveFriendProfileCampaign asyncStrictMode] */

undefined8 FUN_10af333bc(void)

{
  return 0;
}



/* Entry: 10af333c0; end: 10af33407; -[SCCPlusResolveFriendProfileCampaign resolveFriendProfileCampaignWithContext:] */

void FUN_10af333c0(void)

{
  code *extraout_x8;
  
  func_0x00010af34b1c();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af34c7c();
  (*extraout_x8)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af34c34();
  func_0x00010af34ca4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af33408; end: 10af334df; +[SCCPlusResolveFriendProfileCampaign invokeWithJSRuntimeProvider:context:completionHandler:] */

void FUN_10af33408(void)

{
  code *extraout_x8;
  
  func_0x00010af34b74();
  func_0x00010af34cac();
  func_0x00010af34d20();
  (*extraout_x8)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af34bf4();
  func_0x00010af34b40(0x10af3347c,0xc2000000);
  func_0x00010af34c9c();
  func_0x00010af34ce8();
  func_0x00010af34c10();
  func_0x00010af34cd8();
  func_0x00010af34cd0();
  func_0x00010af34c8c();
  func_0x00010af34ca4();
  func_0x00010af34c4c();
  func_0x00010af34c94();
  return;
}



/* Entry: 10af334e0; end: 10af334f3; +[SCCPlusResolveFriendProfileCampaign valdiMarshallableObjectDescriptor] */

void FUN_10af334e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c93208;
  param_1[1] = &PTR_DAT_110c93238;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10af334f4; end: 10af334ff; +[SCCPlusResolveFullScreenTakeoverCampaigns modulePath] */

undefined ** FUN_10af334f4(void)

{
  return &PTR____CFConstantStringClassReference_110f38918;
}



/* Entry: 10af33500; end: 10af33503; +[SCCPlusResolveFullScreenTakeoverCampaigns asyncStrictMode] */

undefined8 FUN_10af33500(void)

{
  return 0;
}



/* Entry: 10af33504; end: 10af3354b; -[SCCPlusResolveFullScreenTakeoverCampaigns resolveFullScreenTakeoverCampaignsWithContext:] */

void FUN_10af33504(void)

{
  code *extraout_x8;
  
  func_0x00010af34b1c();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af34c7c();
  (*extraout_x8)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af34c34();
  func_0x00010af34ca4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af3354c; end: 10af33623; +[SCCPlusResolveFullScreenTakeoverCampaigns invokeWithJSRuntimeProvider:context:completionHandler:] */

void FUN_10af3354c(void)

{
  code *extraout_x8;
  
  func_0x00010af34b74();
  func_0x00010af34cac();
  func_0x00010af34d20();
  (*extraout_x8)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af34bf4();
  func_0x00010af34b40(0x10af335c0,0xc2000000);
  func_0x00010af34c9c();
  func_0x00010af34ce8();
  func_0x00010af34c10();
  func_0x00010af34cd8();
  func_0x00010af34cd0();
  func_0x00010af34c8c();
  func_0x00010af34ca4();
  func_0x00010af34c4c();
  func_0x00010af34c94();
  return;
}



/* Entry: 10af33624; end: 10af33637; +[SCCPlusResolveFullScreenTakeoverCampaigns valdiMarshallableObjectDescriptor] */

void FUN_10af33624(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c93258;
  param_1[1] = &PTR_DAT_110c93288;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10af33638; end: 10af33643; +[SCCPlusResolveSubscribeEligibility modulePath] */

undefined ** FUN_10af33638(void)

{
  return &PTR____CFConstantStringClassReference_110f38938;
}



/* Entry: 10af33644; end: 10af33647; +[SCCPlusResolveSubscribeEligibility asyncStrictMode] */

undefined8 FUN_10af33644(void)

{
  return 0;
}



/* Entry: 10af33648; end: 10af3368f; -[SCCPlusResolveSubscribeEligibility resolveSubscribeEligibilityWithContext:] */

void FUN_10af33648(void)

{
  code *extraout_x8;
  
  func_0x00010af34b1c();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af34c7c();
  (*extraout_x8)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af34c34();
  func_0x00010af34ca4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af33690; end: 10af33767; +[SCCPlusResolveSubscribeEligibility invokeWithJSRuntimeProvider:context:completionHandler:] */

void FUN_10af33690(void)

{
  code *extraout_x8;
  
  func_0x00010af34b74();
  func_0x00010af34cac();
  func_0x00010af34d20();
  (*extraout_x8)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af34bf4();
  func_0x00010af34b40(0x10af33704,0xc2000000);
  func_0x00010af34c9c();
  func_0x00010af34ce8();
  func_0x00010af34c10();
  func_0x00010af34cd8();
  func_0x00010af34cd0();
  func_0x00010af34c8c();
  func_0x00010af34ca4();
  func_0x00010af34c4c();
  func_0x00010af34c94();
  return;
}



/* Entry: 10af33768; end: 10af3377b; +[SCCPlusResolveSubscribeEligibility valdiMarshallableObjectDescriptor] */

void FUN_10af33768(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c932a0;
  param_1[1] = &PTR_DAT_110c932d0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10af3377c; end: 10af33787; +[SCCPlusResolveSubscriptionTerms modulePath] */

undefined ** FUN_10af3377c(void)

{
  return &PTR____CFConstantStringClassReference_110f38958;
}



/* Entry: 10af33788; end: 10af3378b; +[SCCPlusResolveSubscriptionTerms asyncStrictMode] */

undefined8 FUN_10af33788(void)

{
  return 0;
}



/* Entry: 10af3378c; end: 10af337d3; -[SCCPlusResolveSubscriptionTerms resolveSubscriptionTermsWithRequest:] */

void FUN_10af3378c(void)

{
  code *extraout_x8;
  
  func_0x00010af34b1c();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af34c7c();
  (*extraout_x8)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af34c34();
  func_0x00010af34ca4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af337d4; end: 10af338ab; +[SCCPlusResolveSubscriptionTerms invokeWithJSRuntimeProvider:request:completionHandler:] */

void FUN_10af337d4(void)

{
  code *extraout_x8;
  
  func_0x00010af34b74();
  func_0x00010af34cac();
  func_0x00010af34d20();
  (*extraout_x8)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af34bf4();
  func_0x00010af34b40(0x10af33848,0xc2000000);
  func_0x00010af34c9c();
  func_0x00010af34ce8();
  func_0x00010af34c10();
  func_0x00010af34cd8();
  func_0x00010af34cd0();
  func_0x00010af34c8c();
  func_0x00010af34ca4();
  func_0x00010af34c4c();
  func_0x00010af34c94();
  return;
}



/* Entry: 10af338ac; end: 10af338bf; +[SCCPlusResolveSubscriptionTerms valdiMarshallableObjectDescriptor] */

void FUN_10af338ac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c932e8;
  param_1[1] = &PTR_DAT_110c93318;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10af338c0; end: 10af338d3; +[SCCPlusAppIconProvider valdiMarshallableObjectDescriptor] */

void FUN_10af338c0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c93328;
  param_1[1] = &PTR_s_SCBridgeObservable_110c93388;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af338d4; end: 10af338df; +[SCCPlusBitmojiFashionPresenter valdiMarshallableObjectDescriptor] */

void FUN_10af338d4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c933a0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af338e0; end: 10af338eb; +[SCCPlusChatPagePresenter valdiMarshallableObjectDescriptor] */

void FUN_10af338e0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c933d0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af338ec; end: 10af33927; +[SCCPlusChatWallpaperPresenter valdiMarshallableObjectDescriptor] */

void FUN_10af338ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c93430;
  param_1[1] = &PTR_DAT_110c934a8;
  param_1[2] = &PTR_DAT_110c93400;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af33928; end: 10af33977;  */

void FUN_10af33928(void)

{
  func_0x00010af34d00();
  func_0x00010af34bf4();
  func_0x00010af34be4(FUN_10af34a3c);
  func_0x00010af34ce0();
  func_0x00010af34c40();
  func_0x00010af34c4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af33978; end: 10af3398b; +[SCCPlusChatWallpaperProvider valdiMarshallableObjectDescriptor] */

void FUN_10af33978(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c934c0;
  param_1[1] = &PTR_s_SCBridgeObservable_110c93538;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af3398c; end: 10af3399f; +[SCCPlusCustomChatColorsService valdiMarshallableObjectDescriptor] */

void FUN_10af3398c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c93548;
  param_1[1] = &PTR_DAT_110c93590;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af339a0; end: 10af339ab; +[SCCPlusDeeplinkHandler valdiMarshallableObjectDescriptor] */

void FUN_10af339a0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_open_110c935a0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af339ac; end: 10af339b7; +[SCCPlusDreamsPresenter valdiMarshallableObjectDescriptor] */

void FUN_10af339ac(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c935d0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af339b8; end: 10af339c3; +[SCCPlusGenAiStickersPAndLService valdiMarshallableObjectDescriptor] */

void FUN_10af339b8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c93600;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af339c4; end: 10af339cf; +[SCCPlusGiftingPagePresenter valdiMarshallableObjectDescriptor] */

void FUN_10af339c4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c93630;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af339d0; end: 10af339f3; +[SCCPlusGiftingPurchaseService valdiMarshallableObjectDescriptor] */

void FUN_10af339d0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c93690;
  param_1[1] = &PTR_DAT_110c936f0;
  param_1[2] = &PTR_s_oi_v_110c93660;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af339f4; end: 10af33a17;  */

undefined8 FUN_10af339f4(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(undefined4 *)(param_2 + 1));
  return 0;
}



/* Entry: 10af33a18; end: 10af33a67;  */

void FUN_10af33a18(void)

{
  func_0x00010af34d00();
  func_0x00010af34bf4();
  func_0x00010af34be4(0x10af34a58);
  func_0x00010af34ce0();
  func_0x00010af34c40();
  func_0x00010af34c4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af33a68; end: 10af33a7b; +[SCCPlusGiftsCache valdiMarshallableObjectDescriptor] */

void FUN_10af33a68(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c93718;
  param_1[1] = &PTR_s_SCBridgeObservable_110c93760;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af33a7c; end: 10af33a9f; +[SCCPlusLocalInAppPurchaseService valdiMarshallableObjectDescriptor] */

void FUN_10af33a7c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c937a0;
  param_1[1] = &PTR_DAT_110c93818;
  param_1[2] = &PTR_s_oi_v_110c93770;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af33aa0; end: 10af33abb; +[SCCPlusManagementPagePresenter valdiMarshallableObjectDescriptor] */

void FUN_10af33aa0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c93878;
  param_1[1] = 0;
  param_1[2] = &PTR_s_oob_v_110c93848;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af33abc; end: 10af33ae7;  */

undefined8 FUN_10af33abc(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(uint *)(param_2 + 2) & 1);
  return 0;
}



/* Entry: 10af33ae8; end: 10af33b37;  */

void FUN_10af33ae8(void)

{
  func_0x00010af34d00();
  func_0x00010af34bf4();
  func_0x00010af34be4(0x10af34a70);
  func_0x00010af34ce0();
  func_0x00010af34c40();
  func_0x00010af34c4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af33b38; end: 10af33b43; +[SCCPlusMerlinPresenter valdiMarshallableObjectDescriptor] */

void FUN_10af33b38(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c938a8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af33b44; end: 10af33b4f; +[SCCPlusMyFriendsPresenter valdiMarshallableObjectDescriptor] */

void FUN_10af33b44(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c938d8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af33b50; end: 10af33b5b; +[SCCPlusMyProfilePresenter valdiMarshallableObjectDescriptor] */

void FUN_10af33b50(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c93908;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af33b5c; end: 10af33b67; +[SCCPlusNotificationPermissionProvider valdiMarshallableObjectDescriptor] */

void FUN_10af33b5c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c93938;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af33b68; end: 10af33b7b; +[SCCPlusPinBestFriendService valdiMarshallableObjectDescriptor] */

void FUN_10af33b68(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c93980;
  param_1[1] = &PTR_s_SCBridgeObservable_110c939c8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af33b7c; end: 10af33b8f; +[SCCPlusPostViewEmojiPageProvider valdiMarshallableObjectDescriptor] */

void FUN_10af33b7c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c939e0;
  param_1[1] = &PTR_s_SCBridgeObservable_110c93a70;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af33b90; end: 10af33ba3; +[SCCPlusProduct valdiMarshallableObjectDescriptor] */

void FUN_10af33b90(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c93a88;
  param_1[1] = &PTR_DAT_110c93bc0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af33ba4; end: 10af33baf; +[SCCPlusReferralService valdiMarshallableObjectDescriptor] */

void FUN_10af33ba4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c93c00;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af33bb0; end: 10af33bc3; +[SCCPlusSendToPresenter valdiMarshallableObjectDescriptor] */

void FUN_10af33bb0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c93c30;
  param_1[1] = &PTR_DAT_110c93c60;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af33bc4; end: 10af33be7; +[SCCPlusStatusBarUpdater valdiMarshallableObjectDescriptor] */

void FUN_10af33bc4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c93ca0;
  param_1[1] = &PTR_DAT_110c93cd0;
  param_1[2] = &PTR_DAT_110c93c70;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}


