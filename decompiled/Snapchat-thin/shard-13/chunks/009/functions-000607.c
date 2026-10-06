/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aecc8b0; end: 10aecc8b7; -[SCLensMetadataCustomizationInfo type] */

long FUN_10aecc8b0(long param_1)

{
  return (long)*(char *)(param_1 + 8);
}



/* Entry: 10aecc8b8; end: 10aecc8bf; -[SCLensMetadataCustomizationInfo predefinedCustomization] */

undefined8 FUN_10aecc8b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aecc8c0; end: 10aecc8cb; -[SCLensMetadataCustomizationInfo .cxx_destruct] */

void FUN_10aecc8c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10aecc8cc; end: 10aecc9a3; -[SCLensMetadataCustomizationBody initWithCustomizationId:customization:previewText:] */

undefined1 *
FUN_10aecc8cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112701920;
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



/* Entry: 10aecc9a4; end: 10aecc9c7; -[SCLensMetadataCustomizationBody copyWithZone:] */

undefined8 FUN_10aecc9a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aecc9c8; end: 10aecca47; -[SCLensMetadataCustomizationBody hash] */

undefined8 * FUN_10aecc9c8(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_10aeccae0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10aeccaec;
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
            goto LAB_10aeccaec;
          }
          goto LAB_10aeccae0;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10aeccaec:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10aecca48; end: 10aeccb07; -[SCLensMetadataCustomizationBody isEqual:] */

long FUN_10aecca48(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aeccae0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aeccaec;
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
            goto LAB_10aeccaec;
          }
          goto LAB_10aeccae0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10aeccaec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aeccb08; end: 10aeccb0f; -[SCLensMetadataCustomizationBody customizationId] */

undefined8 FUN_10aeccb08(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aeccb10; end: 10aeccb17; -[SCLensMetadataCustomizationBody customization] */

undefined8 FUN_10aeccb10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aeccb18; end: 10aeccb1f; -[SCLensMetadataCustomizationBody previewText] */

undefined8 FUN_10aeccb18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aeccb20; end: 10aeccb5b; -[SCLensMetadataCustomizationBody .cxx_destruct] */

void FUN_10aeccb20(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeccb5c; end: 10aeccb63; -[SCLensMetadataResourceContainer hash] */

void FUN_10aeccb5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10aeccb64; end: 10aeccbf3; -[SCLensMetadataResourceContainer isEqual:] */

long FUN_10aeccb64(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aeccbd8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10aeccbd8;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10aeccbd8;
    }
  }
  lVar3 = 1;
LAB_10aeccbd8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aeccbf4; end: 10aeccc73; -[SCLensMetadataLensPreview hash] */

undefined8 * FUN_10aeccbf4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10aeccd14:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aeccd20;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && ((puVar3[2] == param_3[2] && (puVar3[3] == param_3[3])))) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[4];
        if (puVar6 != (undefined8 *)param_3[4]) {
          func_0x00010c071ae0();
          goto LAB_10aeccd20;
        }
        goto LAB_10aeccd14;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10aeccd20:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10aeccc74; end: 10aeccd3b; -[SCLensMetadataLensPreview isEqual:] */

long FUN_10aeccc74(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aeccd14:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aeccd20;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10aeccd20;
        }
        goto LAB_10aeccd14;
      }
    }
    lVar3 = 0;
  }
LAB_10aeccd20:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aeccd3c; end: 10aeccd97; -[SCLensMetadataLensMiscData hash] */

undefined8 * FUN_10aeccd3c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c3191c(&uStack_30,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || (*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x10) == *(long *)(param_3 + 0x10));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar3;
}



/* Entry: 10aeccd98; end: 10aecce2f; -[SCLensMetadataLensMiscData isEqual:] */

bool FUN_10aeccd98(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 10aecce30; end: 10aeccebf; -[SCLensMetadataLensPlusTierConfig initWithUnlockTouchOnLensArea:customCta:freemiumInfo:] */

undefined1 *
FUN_10aecce30(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112701940;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10aeccec0; end: 10aeccee3; -[SCLensMetadataLensPlusTierConfig copyWithZone:] */

undefined8 FUN_10aeccec0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aeccee4; end: 10aeccf4b; -[SCLensMetadataLensPlusTierConfig hash] */

ulong * FUN_10aeccee4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 9);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_20 = uVar1;
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (ulong *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10aeccfe0;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(char *)((long)puVar2 + 8) != param_3[8] || (*(char *)((long)puVar2 + 9) != param_3[9]))))
    {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10aeccfe0;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar4 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10aeccfe0;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10aeccfe0:
  _objc_release(param_3);
  return (ulong *)puVar4;
}



/* Entry: 10aeccf4c; end: 10aeccffb; -[SCLensMetadataLensPlusTierConfig isEqual:] */

long FUN_10aeccf4c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aeccfe0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
        (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
      lVar3 = 0;
      goto LAB_10aeccfe0;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10aeccfe0;
    }
  }
  lVar3 = 1;
LAB_10aeccfe0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aeccffc; end: 10aecd003; -[SCLensMetadataLensPlusTierConfig unlockTouchOnLensArea] */

undefined1 FUN_10aeccffc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10aecd004; end: 10aecd00b; -[SCLensMetadataLensPlusTierConfig customCta] */

undefined1 FUN_10aecd004(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10aecd00c; end: 10aecd013; -[SCLensMetadataLensPlusTierConfig freemiumInfo] */

undefined8 FUN_10aecd00c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aecd014; end: 10aecd01f; -[SCLensMetadataLensPlusTierConfig .cxx_destruct] */

void FUN_10aecd014(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10aecd020; end: 10aecd0ab; -[SCLensMetadataLensPlusFreemiumInfo initWithGroupId:limit:secondsThreshold:] */

undefined1 *
FUN_10aecd020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112701948;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aecd0ac; end: 10aecd0cf; -[SCLensMetadataLensPlusFreemiumInfo copyWithZone:] */

undefined8 FUN_10aecd0ac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aecd0d0; end: 10aecd143; -[SCLensMetadataLensPlusFreemiumInfo hash] */

undefined8 * FUN_10aecd0d0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lStack_38 = (long)(int)*(undefined8 *)(param_1 + 8);
  lStack_30 = (long)(int)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10aecd1d8;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(int *)((long)puVar2 + 8) != *(int *)(param_3 + 8) ||
        (*(int *)((long)puVar2 + 0xc) != *(int *)(param_3 + 0xc))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10aecd1d8;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar4 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10aecd1d8;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10aecd1d8:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10aecd144; end: 10aecd1f3; -[SCLensMetadataLensPlusFreemiumInfo isEqual:] */

long FUN_10aecd144(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aecd1d8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(int *)(param_1 + 8) != *(int *)(param_3 + 8) ||
        (*(int *)(param_1 + 0xc) != *(int *)(param_3 + 0xc))))) {
      lVar3 = 0;
      goto LAB_10aecd1d8;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10aecd1d8;
    }
  }
  lVar3 = 1;
LAB_10aecd1d8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aecd1f4; end: 10aecd1fb; -[SCLensMetadataLensPlusFreemiumInfo groupId] */

undefined8 FUN_10aecd1f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aecd1fc; end: 10aecd203; -[SCLensMetadataLensPlusFreemiumInfo limit] */

undefined4 FUN_10aecd1fc(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10aecd204; end: 10aecd20b; -[SCLensMetadataLensPlusFreemiumInfo secondsThreshold] */

undefined4 FUN_10aecd204(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10aecd20c; end: 10aecd217; -[SCLensMetadataLensPlusFreemiumInfo .cxx_destruct] */

void FUN_10aecd20c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10aecd218; end: 10aecd23b; -[SCLensNoFillMetadataDataModel copyWithZone:] */

undefined8 FUN_10aecd218(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aecd23c; end: 10aecd2bb; -[SCLensNoFillMetadataDataModel hash] */

long * FUN_10aecd23c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar3 = &lStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&lStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == (long *)param_3) {
LAB_10aecd34c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10aecd358;
    puVar6 = (undefined1 *)plVar3;
    _objc_opt_class(plVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)plVar3 + 8) == *(long *)(param_3 + 8))) {
      lVar5 = *(long *)((long)plVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)plVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10aecd358;
        }
        goto LAB_10aecd34c;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10aecd358:
  _objc_release(param_3);
  return (long *)puVar6;
}



/* Entry: 10aecd2bc; end: 10aecd373; -[SCLensNoFillMetadataDataModel isEqual:] */

long FUN_10aecd2bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aecd34c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aecd358;
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
          goto LAB_10aecd358;
        }
        goto LAB_10aecd34c;
      }
    }
    lVar3 = 0;
  }
LAB_10aecd358:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aecd374; end: 10aecd417; -[SCLensFetchLocationMetadataDataModel hash] */

undefined8 * FUN_10aecd374(long param_1,undefined8 param_2,undefined8 *param_3)

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
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x18);
  lStack_38 = -lVar6;
  if (-1 < lVar6) {
    lStack_38 = lVar6;
  }
  uVar7 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar4 = &uStack_48;
  uStack_40 = uVar3;
  func_0x000107c3191c(puVar4,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10aecd4dc:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aecd4e8;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && (puVar4[3] == param_3[3])) {
      dVar10 = ABS((double)puVar4[4] - (double)param_3[4]);
      dVar9 = ABS((double)puVar4[4] + (double)param_3[4]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((bVar1) &&
         ((lVar6 = puVar4[1], lVar6 == param_3[1] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = (undefined8 *)puVar4[2];
        if (puVar8 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10aecd4e8;
        }
        goto LAB_10aecd4dc;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10aecd4e8:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10aecd418; end: 10aecd503; -[SCLensFetchLocationMetadataDataModel isEqual:] */

long FUN_10aecd418(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aecd4dc:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aecd4e8;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
      dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10aecd4e8;
        }
        goto LAB_10aecd4dc;
      }
    }
    lVar4 = 0;
  }
LAB_10aecd4e8:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10aecd504; end: 10aecd58f; -[SCLensFetchLocationMetadataGeoCircle hash] */

undefined8 * FUN_10aecd504(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar3 = &uStack_38;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10aecd62c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aecd638;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      dVar8 = ABS((double)puVar3[2] - (double)param_3[2]);
      dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = (undefined8 *)puVar3[1];
        if (puVar6 != (undefined8 *)param_3[1]) {
          func_0x00010c071ae0();
          goto LAB_10aecd638;
        }
        goto LAB_10aecd62c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10aecd638:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10aecd590; end: 10aecd653; -[SCLensFetchLocationMetadataGeoCircle isEqual:] */

long FUN_10aecd590(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aecd62c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aecd638;
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
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 != *(long *)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_10aecd638;
        }
        goto LAB_10aecd62c;
      }
    }
    lVar4 = 0;
  }
LAB_10aecd638:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10aecd654; end: 10aecd6e7; -[SCLensFetchLocationMetadataGeoCoordinate hash] */

ulong * FUN_10aecd654(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_20 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  puVar3 = &uStack_28;
  func_0x000107c3191c(puVar3,2);
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
          goto LAB_10aecd7ac;
        }
      }
      puVar6 = (ulong *)0x0;
    }
  }
LAB_10aecd7ac:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10aecd6e8; end: 10aecd7c7; -[SCLensFetchLocationMetadataGeoCoordinate isEqual:] */

bool FUN_10aecd6e8(ulong param_1,undefined8 param_2,ulong param_3)

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
          dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                  2.220446049250313e-16;
          if (dVar4 <= 2.2250738585072014e-308) {
            dVar4 = 2.2250738585072014e-308;
          }
          bVar1 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar4;
          goto LAB_10aecd7ac;
        }
      }
      bVar1 = false;
    }
  }
LAB_10aecd7ac:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10aecd7c8; end: 10aecd84f; -[SCLensFetchLocationMetadataGeofence initWithGeofenceId:geoPolygon:] */

undefined1 *
FUN_10aecd7c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701970;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10aecd850; end: 10aecd873; -[SCLensFetchLocationMetadataGeofence copyWithZone:] */

undefined8 FUN_10aecd850(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aecd874; end: 10aecd8db; -[SCLensFetchLocationMetadataGeofence hash] */

long * FUN_10aecd874(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  func_0x00010bfde980();
  plVar3 = &lStack_28;
  uStack_20 = uVar2;
  func_0x000107c3191c(plVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 != param_3) {
    plVar5 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10aecd960;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar4 & 1) == 0) || (plVar3[1] != param_3[1])) {
      plVar5 = (long *)0x0;
      goto LAB_10aecd960;
    }
    plVar5 = (long *)plVar3[2];
    if (plVar5 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10aecd960;
    }
  }
  plVar5 = (long *)0x1;
LAB_10aecd960:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 10aecd8dc; end: 10aecd97b; -[SCLensFetchLocationMetadataGeofence isEqual:] */

long FUN_10aecd8dc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aecd960;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10aecd960;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10aecd960;
    }
  }
  lVar3 = 1;
LAB_10aecd960:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aecd97c; end: 10aecd983; -[SCLensFetchLocationMetadataGeofence geofenceId] */

undefined8 FUN_10aecd97c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aecd984; end: 10aecd98b; -[SCLensFetchLocationMetadataGeofence geoPolygon] */

undefined8 FUN_10aecd984(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aecd98c; end: 10aecd997; -[SCLensFetchLocationMetadataGeofence .cxx_destruct] */

void FUN_10aecd98c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10aecd998; end: 10aecd9bb; -[SCLensMetadataMetadataItem copyWithZone:] */

undefined8 FUN_10aecd998(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aecd9bc; end: 10aecd9c3; -[SCLensMetadataMetadataItem hash] */

void FUN_10aecd9bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10aecd9c4; end: 10aecda53; -[SCLensMetadataMetadataItem isEqual:] */

long FUN_10aecd9c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aecda38;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10aecda38;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10aecda38;
    }
  }
  lVar3 = 1;
LAB_10aecda38:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aecda54; end: 10aecdabf; +[SCLensMetadataCTLItem cTItemWithCTItem:] */

void FUN_10aecda54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126de7f8;
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



/* Entry: 10aecdac0; end: 10aecdb37; -[SCLensMetadataCTLItem hash] */

undefined8 * FUN_10aecdac0(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10aecdbc8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10aecdbd4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10aecdbd4;
        }
        goto LAB_10aecdbc8;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10aecdbd4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10aecdb38; end: 10aecdbef; -[SCLensMetadataCTLItem isEqual:] */

long FUN_10aecdb38(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aecdbc8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aecdbd4;
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
          goto LAB_10aecdbd4;
        }
        goto LAB_10aecdbc8;
      }
    }
    lVar3 = 0;
  }
LAB_10aecdbd4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aecdbf0; end: 10aecdc0f; -[SCLensMetadataCTLItem isSameSubtype:] */

bool FUN_10aecdbf0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
  }
  return false;
}



/* Entry: 10aecdc10; end: 10aecdc17; -[SCLensMetadataCTLItem subtype] */

undefined8 FUN_10aecdc10(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aecdc18; end: 10aecdce3; -[SCLensMetadataCTLItem asDataModel] */

void FUN_10aecdc18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10aecdce4;
  uStack_30 = 0x10aecdcf4;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10aecdcfc;
  puStack_60 = &UNK_110c8fe48;
  puStack_48 = puStack_58;
  func_0x00010c0bd320(param_1,param_2,&puStack_78,&PTR___NSConcreteGlobalBlock_110c8fe98);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aecdce4; end: 10aecdcfb;  */

void FUN_10aecdce4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10aecdcfc; end: 10aecdd33;  */

void FUN_10aecdcfc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aecdd34; end: 10aecdd37;  */

void FUN_10aecdd34(void)

{
  return;
}



/* Entry: 10aecdd38; end: 10aecde03; -[SCLensMetadataCTLItem asCTItem] */

void FUN_10aecdd38(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10aecdce4;
  uStack_30 = 0x10aecdcf4;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10aecde08;
  puStack_60 = &UNK_110c8f088;
  puStack_48 = puStack_58;
  func_0x00010c0bd320(param_1,param_2,&PTR___NSConcreteGlobalBlock_110c8fed8,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aecde04; end: 10aecde07;  */

void FUN_10aecde04(void)

{
  return;
}



/* Entry: 10aecde08; end: 10aecde3f;  */

void FUN_10aecde08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aecde40; end: 10aecdf17; -[SCLensMetadataCTItem initWithId:checksum:data:] */

undefined1 *
FUN_10aecde40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112701988;
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



/* Entry: 10aecdf18; end: 10aecdf3b; -[SCLensMetadataCTItem copyWithZone:] */

undefined8 FUN_10aecdf18(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aecdf3c; end: 10aecdfbb; -[SCLensMetadataCTItem hash] */

undefined8 * FUN_10aecdf3c(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_10aece054:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10aece060;
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
            goto LAB_10aece060;
          }
          goto LAB_10aece054;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10aece060:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10aecdfbc; end: 10aece07b; -[SCLensMetadataCTItem isEqual:] */

long FUN_10aecdfbc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aece054:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aece060;
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
            goto LAB_10aece060;
          }
          goto LAB_10aece054;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10aece060:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aece07c; end: 10aece083; -[SCLensMetadataCTItem id] */

undefined8 FUN_10aece07c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aece084; end: 10aece08b; -[SCLensMetadataCTItem checksum] */

undefined8 FUN_10aece084(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aece08c; end: 10aece093; -[SCLensMetadataCTItem data] */

undefined8 FUN_10aece08c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aece094; end: 10aece0cf; -[SCLensMetadataCTItem .cxx_destruct] */

void FUN_10aece094(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aece0d0; end: 10aece15f; -[SCMixerRequestMetadataDataModel hash] */

undefined8 * FUN_10aece0d0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10aece220:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10aece22c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
            if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10aece22c;
            }
            goto LAB_10aece220;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10aece22c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10aece160; end: 10aece247; -[SCMixerRequestMetadataDataModel isEqual:] */

long FUN_10aece160(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aece220:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aece22c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10aece22c;
            }
            goto LAB_10aece220;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10aece22c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aece248; end: 10aece2e7; -[SCMixerRequestMetadataContextualInfo initWithCameraType:snapType:snapSource:preCaptureLensId:] */

undefined1 *
FUN_10aece248(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112701998;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10aece2e8; end: 10aece30b; -[SCMixerRequestMetadataContextualInfo copyWithZone:] */

undefined8 FUN_10aece2e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aece30c; end: 10aece37b; -[SCMixerRequestMetadataContextualInfo hash] */

long * FUN_10aece30c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_38 = (long)*(char *)(param_1 + 8);
  lStack_30 = (long)*(char *)(param_1 + 9);
  lStack_28 = (long)*(char *)(param_1 + 10);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  plVar2 = &lStack_38;
  uStack_20 = uVar1;
  func_0x000107c3191c(plVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar2 != param_3) {
    plVar4 = (long *)0x0;
    if ((plVar2 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10aece420;
    plVar4 = plVar2;
    _objc_opt_class(plVar2);
    plVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar4);
    if ((((ulong)plVar3 & 1) == 0) ||
       ((((char)plVar2[1] != (char)param_3[1] ||
         (*(char *)((long)plVar2 + 9) != *(char *)((long)param_3 + 9))) ||
        (*(char *)((long)plVar2 + 10) != *(char *)((long)param_3 + 10))))) {
      plVar4 = (long *)0x0;
      goto LAB_10aece420;
    }
    plVar4 = (long *)plVar2[2];
    if (plVar4 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10aece420;
    }
  }
  plVar4 = (long *)0x1;
LAB_10aece420:
  _objc_release(param_3);
  return plVar4;
}



/* Entry: 10aece37c; end: 10aece43b; -[SCMixerRequestMetadataContextualInfo isEqual:] */

long FUN_10aece37c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aece420;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
         (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
        (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))) {
      lVar3 = 0;
      goto LAB_10aece420;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10aece420;
    }
  }
  lVar3 = 1;
LAB_10aece420:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aece43c; end: 10aece443; -[SCMixerRequestMetadataContextualInfo cameraType] */

long FUN_10aece43c(long param_1)

{
  return (long)*(char *)(param_1 + 8);
}



/* Entry: 10aece444; end: 10aece44b; -[SCMixerRequestMetadataContextualInfo snapType] */

long FUN_10aece444(long param_1)

{
  return (long)*(char *)(param_1 + 9);
}



/* Entry: 10aece44c; end: 10aece453; -[SCMixerRequestMetadataContextualInfo snapSource] */

long FUN_10aece44c(long param_1)

{
  return (long)*(char *)(param_1 + 10);
}



/* Entry: 10aece454; end: 10aece45b; -[SCMixerRequestMetadataContextualInfo preCaptureLensId] */

undefined8 FUN_10aece454(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aece45c; end: 10aece467; -[SCMixerRequestMetadataContextualInfo .cxx_destruct] */

void FUN_10aece45c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10aece468; end: 10aece4f3;  */

void FUN_10aece468(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c0d53e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10aece4f4; end: 10aece517; +[SCLensScheduleNamespaceDataModel objectClassFunctionPointer] */

undefined1  [16] FUN_10aece4f4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10aece510;
  auVar1._0_8_ = 0x10aece508;
  return auVar1;
}



/* Entry: 10aece518; end: 10aece7ff;  */

long * FUN_10aece518(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    long param_7,long param_8,long param_9,long param_10,long param_11,long param_12
                    ,long param_13,long param_14,long param_15,long param_16)

{
  long lVar1;
  long *plVar2;
  long lStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  if (param_3 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    puStack_78 = PTR_PTR_1127019a0;
    plVar2 = &lStack_80;
    lStack_80 = param_3;
    _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
    if (plVar2 != (long *)0x0) {
      plVar2[1] = param_4;
      _objc_retain(param_5);
      lVar1 = plVar2[3];
      plVar2[3] = param_5;
      _objc_release(lVar1);
      _objc_retain(param_6);
      lVar1 = plVar2[4];
      plVar2[4] = param_6;
      _objc_release(lVar1);
      _objc_retain(param_7);
      lVar1 = plVar2[5];
      plVar2[5] = param_7;
      _objc_release(lVar1);
      plVar2[6] = param_8;
      plVar2[7] = param_1;
      plVar2[8] = param_2;
      _objc_retain(param_9);
      lVar1 = plVar2[9];
      plVar2[9] = param_9;
      _objc_release(lVar1);
      _objc_retain(param_10);
      lVar1 = plVar2[10];
      plVar2[10] = param_10;
      _objc_release(lVar1);
      _objc_retain(param_11);
      lVar1 = plVar2[0xb];
      plVar2[0xb] = param_11;
      _objc_release(lVar1);
      _objc_retain(param_12);
      lVar1 = plVar2[0xc];
      plVar2[0xc] = param_12;
      _objc_release(lVar1);
      _objc_retain(param_13);
      lVar1 = plVar2[0xd];
      plVar2[0xd] = param_13;
      _objc_release(lVar1);
      _objc_retain(param_14);
      lVar1 = plVar2[0xe];
      plVar2[0xe] = param_14;
      _objc_release(lVar1);
      _objc_retain(param_15);
      lVar1 = plVar2[0xf];
      plVar2[0xf] = param_15;
      _objc_release(lVar1);
      _objc_retain(param_16);
      lVar1 = plVar2[0x10];
      plVar2[0x10] = param_16;
      _objc_release(lVar1);
    }
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return plVar2;
}



/* Entry: 10aece800; end: 10aeceec3;  */

void FUN_10aece800(undefined8 param_1,undefined *param_2)

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
  undefined8 uVar12;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  _objc_retain();
  if (param_2 != (undefined *)0x0) {
    puVar11 = param_2;
    func_0x00010c1422e0();
    if ((long)puVar11 < 0) {
      puVar11 = param_2;
      func_0x00010c0d53e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar11 != (undefined *)0x0) {
        puVar11 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar11;
        func_0x00010bf636c0();
        _objc_release(puVar11);
        func_0x000107c310d8(puVar1,&UNK_10f6d58cc);
        puVar11 = (undefined *)0x0;
        if (puVar1 == (undefined *)0x0) goto LAB_10aeced04;
        puVar11 = param_2;
        func_0x00010c0d53e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        puVar2 = puVar11;
        _objc_retainAutorelease(puVar11);
        func_0x00010bdc3520();
        _sqlite3_bind_text(puVar1,1,puVar2,0xffffffff,0xffffffffffffffff);
        _objc_release(puVar11);
        _objc_release(puVar11);
        puVar11 = puVar1;
        _sqlite3_step();
        if ((int)puVar11 == 100) {
          puVar2 = puVar1;
          _sqlite3_column_int64(puVar1,0);
          puVar11 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126de810);
          _sqlite3_column_blob(puVar1,1);
          _sqlite3_column_bytes(puVar1,1);
          puVar3 = puVar11;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_2);
          _objc_release(puVar11);
          _sqlite3_reset(puVar1);
          if (puVar3 == (undefined *)0x0) goto LAB_10aececfc;
          puVar11 = PTR_PTR_1126de8e0;
          _objc_alloc(PTR_PTR_1126de8e0);
          puStack_78 = puVar3;
          func_0x00010c0d53e0();
          _objc_retainAutoreleasedReturnValue();
          puStack_80 = puVar3;
          func_0x00010bef0bc0();
          _objc_retainAutoreleasedReturnValue();
          puStack_88 = puVar3;
          func_0x00010c105c60();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar3;
          func_0x00010c27d100(puVar3);
          func_0x00010c08a700(puVar3);
          uVar12 = param_1;
          func_0x00010c298be0(puVar3);
          puVar4 = puVar3;
          func_0x00010c0da7c0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          func_0x00010c0cf060(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puStack_90 = puVar3;
          func_0x00010bf3d3e0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          func_0x00010bfa81c0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar3;
          func_0x00010bef09a0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar3;
          func_0x00010c105c40();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar3;
          func_0x00010c0cf080();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar3;
          func_0x00010c0ed720();
          _objc_retainAutoreleasedReturnValue();
          FUN_10aece518(param_1,uVar12,puVar11,puVar2,puStack_78,puStack_80,puStack_88,puVar1,puVar4
                        ,puVar5,puStack_90,puVar6,puVar7,puVar8,puVar9,puVar10);
          goto LAB_10aece9f8;
        }
      }
    }
    else {
      puVar1 = param_2;
      func_0x00010c1422e0(param_2);
      puVar11 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126de810);
      puVar3 = puVar11;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(puVar11);
      if (puVar3 != (undefined *)0x0) {
        puVar11 = PTR_PTR_1126de8e0;
        _objc_alloc(PTR_PTR_1126de8e0);
        puStack_78 = puVar3;
        func_0x00010c0d53e0();
        _objc_retainAutoreleasedReturnValue();
        puStack_80 = puVar3;
        func_0x00010bef0bc0();
        _objc_retainAutoreleasedReturnValue();
        puStack_88 = puVar3;
        func_0x00010c105c60();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c27d100(puVar3);
        func_0x00010c08a700(puVar3);
        uVar12 = param_1;
        func_0x00010c298be0(puVar3);
        puVar4 = puVar3;
        func_0x00010c0da7c0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c0cf060(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puStack_90 = puVar3;
        func_0x00010bf3d3e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bfa81c0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010bef09a0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar3;
        func_0x00010c105c40();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar3;
        func_0x00010c0cf080();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar3;
        func_0x00010c0ed720();
        _objc_retainAutoreleasedReturnValue();
        FUN_10aece518(param_1,uVar12,puVar11,puVar1,puStack_78,puStack_80,puStack_88,puVar2,puVar4,
                      puVar5,puStack_90,puVar6,puVar7,puVar8,puVar9,puVar10);
LAB_10aece9f8:
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puStack_90);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puStack_88);
        _objc_release(puStack_80);
        _objc_release(puStack_78);
        param_2 = puVar3;
        goto LAB_10aeced04;
      }
LAB_10aececfc:
      param_2 = (undefined *)0x0;
    }
  }
  puVar11 = (undefined *)0x0;
LAB_10aeced04:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10aeceec4; end: 10aecef37;  */

void FUN_10aeceec4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_10aece800();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10aecef38; end: 10aecf53f;  */

void FUN_10aecef38(undefined8 param_1,undefined *param_2,undefined1 *param_3)

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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126de8e0;
  _objc_retain(param_2);
  _objc_opt_self(puVar1);
  puVar1 = param_2;
  FUN_10aece800();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    puVar14 = PTR_PTR_1126de8e0;
    _objc_retain(param_2);
    _objc_opt_self(puVar14);
    puVar14 = PTR_PTR_1126de8e0;
    if (param_2 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_2;
      func_0x00010c0d53e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_2;
      func_0x00010bef0bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_2;
      func_0x00010c105c60();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_2;
      func_0x00010c27d100();
      func_0x00010c08a700(param_2);
      uVar15 = param_1;
      func_0x00010c298be0(param_2);
      puVar6 = param_2;
      func_0x00010c0da7c0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_2;
      func_0x00010c0cf060();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_2;
      func_0x00010bf3d3e0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_2;
      func_0x00010bfa81c0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = param_2;
      func_0x00010bef09a0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = param_2;
      func_0x00010c105c40();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = param_2;
      func_0x00010c0cf080();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = param_2;
      func_0x00010c0ed720();
      _objc_retainAutoreleasedReturnValue();
      FUN_10aece518(param_1,uVar15,puVar14,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5,puVar6,
                    puVar7,puVar8,puVar9,puVar10,puVar11,puVar12,puVar13);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar14 + 0x10) = 1;
    _objc_release(param_2);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    puVar14 = param_2;
    func_0x00010c0d53e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar14);
    puVar14 = param_2;
    func_0x00010bef0bc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar14);
    puVar14 = param_2;
    func_0x00010c105c60(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar14);
    puVar14 = param_2;
    func_0x00010c27d100();
    *(undefined **)(puVar1 + 0x30) = puVar14;
    func_0x00010c08a700(param_2);
    *(undefined8 *)(puVar1 + 0x38) = param_1;
    func_0x00010c298be0(param_2);
    *(undefined8 *)(puVar1 + 0x40) = param_1;
    puVar14 = param_2;
    func_0x00010c0da7c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar14);
    puVar14 = param_2;
    func_0x00010c0cf060(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar14);
    puVar14 = param_2;
    func_0x00010bf3d3e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar14);
    puVar14 = param_2;
    func_0x00010bfa81c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar14);
    puVar14 = param_2;
    func_0x00010bef09a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar14);
    puVar14 = param_2;
    func_0x00010c105c40(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar14);
    puVar14 = param_2;
    func_0x00010c0cf080(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar14);
    puVar14 = param_2;
    func_0x00010c0ed720(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar14);
    _objc_retain(puVar1);
    puVar14 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 10aecf540; end: 10aecf5c7;  */

void FUN_10aecf540(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126de810;
    _objc_alloc(PTR_PTR_1126de810);
    func_0x00010c02dd80(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aecf5c8; end: 10aecf663; -[SCLensScheduleNamespaceDataModelChangeRequest .cxx_destruct] */

void FUN_10aecf5c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10aecf664; end: 10aecf66f; -[SCLensScheduleNamespaceDataModelChangeRequest table] */

undefined * FUN_10aecf664(void)

{
  return &UNK_10f6d58a9;
}



/* Entry: 10aecf670; end: 10aecf6b7; -[SCLensScheduleNamespaceDataModelChangeRequest createTableWithSQLite:] */

void FUN_10aecf670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10e532a1b,0x9a,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 10aecf6b8; end: 10aecfa3f; -[SCLensScheduleNamespaceDataModelChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10aecf6b8(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_10aecf540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10aecfa40(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f6d595f);
    if (lVar6 == 0) goto LAB_10aecf9dc;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_10aecf9dc;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126de810);
    func_0x00010c21c9a0(puVar7);
LAB_10aecf9c4:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f6d5921);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126de810);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10aecf9e8;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_10aecf9e8;
    }
    FUN_10aecf540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10aecfa40(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f6d59af);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126de810);
        func_0x00010c21c9a0(puVar7);
        goto LAB_10aecf9c4;
      }
    }
LAB_10aecf9dc:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_10aecf9e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10aecfa40; end: 10aed0f37;  */

undefined * FUN_10aecfa40(undefined *param_1,int *param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int *piVar8;
  int *piVar9;
  undefined ***pppuVar10;
  int *piVar11;
  int *piVar12;
  long lVar13;
  int *piVar14;
  int *piVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  ushort uVar21;
  ulong uVar22;
  undefined *puVar23;
  int *piVar24;
  ulong uVar25;
  undefined4 *puVar26;
  undefined8 uVar27;
  undefined *puVar28;
  int *piVar29;
  undefined *puVar30;
  undefined **ppuVar31;
  undefined *puVar32;
  undefined4 *puVar33;
  undefined *puVar34;
  undefined8 uVar35;
  undefined4 *puVar36;
  long lVar37;
  undefined8 uVar38;
  ulong uStack_280;
  ulong uStack_268;
  undefined4 *puStack_260;
  undefined4 *puStack_258;
  undefined4 *puStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_228;
  long lStack_220;
  long lStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  code *pcStack_1b8;
  undefined ***pppuStack_1a8;
  undefined **ppuStack_1a0;
  code *pcStack_198;
  undefined ***pppuStack_188;
  undefined **ppuStack_180;
  code *pcStack_178;
  undefined ***pppuStack_168;
  undefined **ppuStack_160;
  code *pcStack_158;
  undefined ***pppuStack_148;
  undefined **ppuStack_140;
  code *pcStack_138;
  undefined ***pppuStack_128;
  undefined **ppuStack_120;
  code *pcStack_118;
  undefined ***pppuStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  ppuStack_140 = &PTR_FUN_110c903d8;
  pcStack_138 = FUN_10aed20a4;
  pppuStack_128 = &ppuStack_140;
  piVar8 = param_2;
  func_0x00010bef0bc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed1dd8(&lStack_228,param_1,&ppuStack_140,piVar8);
  _objc_release(piVar8);
  if (pppuStack_128 == &ppuStack_140) {
    lVar20 = 0x20;
LAB_10aecfaf8:
    (**(code **)((long)*pppuStack_128 + lVar20))();
  }
  else if (pppuStack_128 != (undefined ***)0x0) {
    lVar20 = 0x28;
    goto LAB_10aecfaf8;
  }
  ppuStack_160 = &PTR_FUN_110c903d8;
  pcStack_158 = FUN_10aed20a4;
  pppuStack_148 = &ppuStack_160;
  piVar8 = param_2;
  func_0x00010c105c60(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed1dd8(&lStack_240,param_1,&ppuStack_160,piVar8);
  _objc_release(piVar8);
  if (pppuStack_148 == &ppuStack_160) {
    lVar20 = 0x20;
LAB_10aecfb60:
    (**(code **)((long)*pppuStack_148 + lVar20))();
  }
  else if (pppuStack_148 != (undefined ***)0x0) {
    lVar20 = 0x28;
    goto LAB_10aecfb60;
  }
  ppuStack_180 = &PTR_FUN_110c90488;
  pcStack_178 = FUN_10aed3fd8;
  pppuStack_168 = &ppuStack_180;
  piVar8 = param_2;
  func_0x00010c0da7c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar38 = 0;
  lStack_208 = 0;
  lStack_210 = 0;
  uStack_1f8 = 0;
  plStack_200 = (long *)0x0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  _objc_retain(piVar8);
  piVar9 = piVar8;
  func_0x00010bf52a60();
  if (piVar9 == (int *)0x0) {
    puStack_258 = (undefined4 *)0x0;
    puStack_248 = (undefined4 *)0x0;
  }
  else {
    puStack_258 = (undefined4 *)0x0;
    puStack_248 = (undefined4 *)0x0;
    puVar36 = (undefined4 *)0x0;
    lVar20 = *plStack_200;
    do {
      piVar24 = (int *)0x0;
      do {
        if (*plStack_200 != lVar20) {
          _objc_enumerationMutation(piVar8);
        }
        ppuVar31 = *(undefined ***)(lStack_208 + (long)piVar24 * 8);
        _objc_retain(ppuVar31);
        _objc_retain(ppuVar31);
        ppuStack_120 = ppuVar31;
        if (pppuStack_168 == (undefined ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_10aed0afc;
        }
        pppuVar10 = pppuStack_168;
        (*(code *)(*pppuStack_168)[6])(pppuStack_168,param_1,&ppuStack_120);
        _objc_release(ppuStack_120);
        if (puStack_248 < puVar36) {
          *puStack_248 = (int)pppuVar10;
          puVar26 = puStack_258;
        }
        else {
          lVar37 = (long)puStack_248 - (long)puStack_258;
          uVar25 = (lVar37 >> 2) + 1;
          if (uVar25 >> 0x3e != 0) {
            FUN_10aedadcc();
            goto LAB_10aed0afc;
          }
          uVar22 = (long)puVar36 - (long)puStack_258 >> 1;
          if (uVar22 <= uVar25) {
            uVar22 = uVar25;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar36 - (long)puStack_258)) {
            uVar22 = 0x3fffffffffffffff;
          }
          if (uVar22 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_10aed0afc;
          }
          lVar13 = uVar22 << 2;
          __Znwm();
          puStack_248 = (undefined4 *)(lVar13 + lVar37);
          puVar36 = (undefined4 *)(lVar13 + uVar22 * 4);
          puVar26 = puStack_248 + -(lVar37 >> 2);
          *puStack_248 = (int)pppuVar10;
          _memcpy(puVar26,puStack_258,lVar37);
          if (puStack_258 != (undefined4 *)0x0) {
            __ZdlPv(puStack_258);
          }
        }
        puStack_258 = puVar26;
        puStack_248 = puStack_248 + 1;
        _objc_release(ppuVar31);
        piVar24 = (int *)((long)piVar24 + 1);
      } while (piVar9 != piVar24);
      piVar9 = piVar8;
      func_0x00010bf52a60();
    } while (piVar9 != (int *)0x0);
  }
  _objc_release(piVar8);
  _objc_release(piVar8);
  _objc_release(piVar8);
  if (pppuStack_168 == &ppuStack_180) {
    lVar20 = 0x20;
LAB_10aecfd50:
    (**(code **)((long)*pppuStack_168 + lVar20))();
  }
  else if (pppuStack_168 != (undefined ***)0x0) {
    lVar20 = 0x28;
    goto LAB_10aecfd50;
  }
  piVar8 = param_2;
  func_0x00010bfa81c0();
  _objc_retainAutoreleasedReturnValue();
  if (piVar8 == (int *)0x0) {
    puStack_260 = (undefined4 *)0x0;
  }
  else {
    piVar9 = param_2;
    func_0x00010bfa81c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    piVar24 = piVar9;
    func_0x00010c153620();
    _objc_retainAutoreleasedReturnValue();
    if (piVar24 == (int *)0x0) {
      uStack_280 = 0;
    }
    else {
      piVar11 = piVar9;
      func_0x00010c153620();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      piVar29 = piVar11;
      func_0x00010bf345e0();
      _objc_retainAutoreleasedReturnValue();
      if (piVar29 == (int *)0x0) {
        uVar25 = 0;
      }
      else {
        piVar12 = piVar11;
        func_0x00010bf345e0(piVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        func_0x00010c08b3c0(piVar12);
        func_0x00010c0b55a0(piVar12);
        param_1[0x46] = 1;
        iVar4 = *(int *)(param_1 + 0x20);
        iVar5 = *(int *)(param_1 + 0x30);
        iVar6 = *(int *)(param_1 + 0x28);
        func_0x000107c27db8(param_1,6);
        func_0x000107c27db8(uVar38,0,param_1,4);
        puVar28 = param_1;
        func_0x000107c27dc0(param_1,(iVar4 - iVar5) + iVar6);
        _objc_release(piVar12);
        _objc_release(piVar12);
        uVar25 = (ulong)puVar28 & 0xffffffff;
      }
      _objc_release(piVar29);
      func_0x00010c11ef60(piVar11);
      param_1[0x46] = 1;
      iVar4 = *(int *)(param_1 + 0x20);
      iVar5 = *(int *)(param_1 + 0x30);
      iVar6 = *(int *)(param_1 + 0x28);
      func_0x000107c27db8(param_1,6);
      if (uVar25 != 0) {
        func_0x000107c27db4(param_1,4);
        func_0x000107c27de0(param_1,4,
                            (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                             *(int *)(param_1 + 0x28)) - (int)uVar25) + 4,0);
      }
      puVar28 = param_1;
      func_0x000107c27dc0(param_1,(iVar4 - iVar5) + iVar6);
      _objc_release(piVar11);
      _objc_release(piVar11);
      uStack_280 = (ulong)puVar28 & 0xffffffff;
    }
    _objc_release(piVar24);
    ppuStack_120 = &PTR_DAT_110c905e8;
    pcStack_118 = FUN_10aedaea4;
    pppuStack_108 = &ppuStack_120;
    piVar24 = piVar9;
    func_0x00010c0d6ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar38 = 0;
    lStack_208 = 0;
    lStack_210 = 0;
    uStack_1f8 = 0;
    plStack_200 = (long *)0x0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    _objc_retain(piVar24);
    piVar11 = piVar24;
    func_0x00010bf52a60();
    if (piVar11 == (int *)0x0) {
      puStack_260 = (undefined4 *)0x0;
      puVar36 = (undefined4 *)0x0;
    }
    else {
      puStack_260 = (undefined4 *)0x0;
      puVar36 = (undefined4 *)0x0;
      puVar26 = (undefined4 *)0x0;
      lVar20 = *plStack_200;
      do {
        piVar29 = (int *)0x0;
        do {
          if (*plStack_200 != lVar20) {
            _objc_enumerationMutation(piVar24);
          }
          uVar35 = *(undefined8 *)(lStack_208 + (long)piVar29 * 8);
          _objc_retain(uVar35);
          _objc_retain(uVar35);
          uStack_1c8 = uVar35;
          if (pppuStack_108 == (undefined ***)0x0) {
            func_0x000104bfeb48();
            goto LAB_10aed0afc;
          }
          pppuVar10 = pppuStack_108;
          (*(code *)(*pppuStack_108)[6])(pppuStack_108,param_1,&uStack_1c8);
          _objc_release(uStack_1c8);
          if (puVar36 < puVar26) {
            *puVar36 = (int)pppuVar10;
            puVar33 = puStack_260;
          }
          else {
            lVar37 = (long)puVar36 - (long)puStack_260;
            uVar25 = (lVar37 >> 2) + 1;
            if (uVar25 >> 0x3e != 0) {
              FUN_10aedb414();
LAB_10aed0afc:
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10aed0b00);
              (*pcVar7)();
            }
            uVar22 = (long)puVar26 - (long)puStack_260 >> 1;
            if (uVar22 <= uVar25) {
              uVar22 = uVar25;
            }
            if (0x7ffffffffffffffb < (ulong)((long)puVar26 - (long)puStack_260)) {
              uVar22 = 0x3fffffffffffffff;
            }
            if (uVar22 >> 0x3e != 0) {
              func_0x000104bd35f4();
              goto LAB_10aed0afc;
            }
            lVar13 = uVar22 << 2;
            __Znwm();
            puVar36 = (undefined4 *)(lVar13 + lVar37);
            puVar26 = (undefined4 *)(lVar13 + uVar22 * 4);
            puVar33 = puVar36 + -(lVar37 >> 2);
            *puVar36 = (int)pppuVar10;
            _memcpy(puVar33,puStack_260,lVar37);
            if (puStack_260 != (undefined4 *)0x0) {
              __ZdlPv(puStack_260);
            }
          }
          puStack_260 = puVar33;
          puVar36 = puVar36 + 1;
          _objc_release(uVar35);
          piVar29 = (int *)((long)piVar29 + 1);
        } while (piVar11 != piVar29);
        piVar11 = piVar24;
        func_0x00010bf52a60();
      } while (piVar11 != (int *)0x0);
    }
    _objc_release(piVar24);
    _objc_release(piVar24);
    _objc_release(piVar24);
    if (pppuStack_108 == &ppuStack_120) {
      lVar20 = 0x20;
LAB_10aed0108:
      (**(code **)((long)*pppuStack_108 + lVar20))();
    }
    else if (pppuStack_108 != (undefined ***)0x0) {
      lVar20 = 0x28;
      goto LAB_10aed0108;
    }
    uVar25 = (long)puVar36 - (long)puStack_260;
    puVar26 = (undefined4 *)&UNK_10e534459;
    if (uVar25 != 0) {
      puVar26 = puStack_260;
    }
    param_1[0x46] = 1;
    func_0x000107c27dc8(param_1,uVar25,4);
    func_0x000107c27dc8(param_1,uVar25,4);
    if (puStack_260 != puVar36) {
      lVar20 = (long)uVar25 >> 2;
      do {
        iVar4 = puVar26[lVar20 + -1];
        func_0x000107c27db4(param_1,4);
        func_0x000107c27dcc(param_1,(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                                     *(int *)(param_1 + 0x28)) - iVar4) + 4);
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
    param_1[0x46] = 0;
    puVar28 = param_1;
    func_0x000107c27dcc(param_1,uVar25 >> 2);
    piVar24 = piVar9;
    func_0x00010c27d1c0(piVar9);
    func_0x00010c08a760(piVar9);
    param_1[0x46] = 1;
    iVar4 = *(int *)(param_1 + 0x20);
    iVar5 = *(int *)(param_1 + 0x30);
    iVar6 = *(int *)(param_1 + 0x28);
    func_0x000107c27db8(param_1,10);
    func_0x000107c27db0(param_1,8,piVar24,0);
    if ((int)puVar28 != 0) {
      func_0x000107c27db4(param_1,4);
      func_0x000107c27de0(param_1,6,
                          (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                           *(int *)(param_1 + 0x28)) - (int)puVar28) + 4,0);
    }
    if (uStack_280 != 0) {
      func_0x000107c27db4(param_1,4);
      func_0x000107c27de0(param_1,4,
                          (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                           *(int *)(param_1 + 0x28)) - (int)uStack_280) + 4,0);
    }
    puVar28 = param_1;
    func_0x000107c27dc0(param_1,(iVar4 - iVar5) + iVar6);
    if (puStack_260 != (undefined4 *)0x0) {
      __ZdlPv();
    }
    _objc_release(piVar9);
    _objc_release(piVar9);
    puStack_260 = (undefined4 *)((ulong)puVar28 & 0xffffffff);
  }
  _objc_release(piVar8);
  ppuStack_1a0 = &PTR_FUN_110c906f8;
  pcStack_198 = FUN_10aed43ec;
  pppuStack_188 = &ppuStack_1a0;
  piVar8 = param_2;
  func_0x00010bef09a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4120(&lStack_100,param_1,&ppuStack_1a0,piVar8);
  _objc_release(piVar8);
  if (pppuStack_188 == &ppuStack_1a0) {
    lVar20 = 0x20;
LAB_10aed032c:
    (**(code **)((long)*pppuStack_188 + lVar20))();
  }
  else if (pppuStack_188 != (undefined ***)0x0) {
    lVar20 = 0x28;
    goto LAB_10aed032c;
  }
  ppuStack_1c0 = &PTR_FUN_110c906f8;
  pcStack_1b8 = FUN_10aed43ec;
  pppuStack_1a8 = &ppuStack_1c0;
  piVar8 = param_2;
  func_0x00010c105c40(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10aed4120(&lStack_210,param_1,&ppuStack_1c0,piVar8);
  _objc_release(piVar8);
  if (pppuStack_1a8 == &ppuStack_1c0) {
    lVar20 = 0x20;
LAB_10aed0394:
    (**(code **)((long)*pppuStack_1a8 + lVar20))();
  }
  else if (pppuStack_1a8 != (undefined ***)0x0) {
    lVar20 = 0x28;
    goto LAB_10aed0394;
  }
  piVar8 = param_2;
  func_0x00010c0cf080();
  _objc_retainAutoreleasedReturnValue();
  if (piVar8 == (int *)0x0) {
    uStack_268 = 0;
  }
  else {
    piVar9 = param_2;
    func_0x00010c0cf080();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    piVar24 = piVar9;
    func_0x00010bf4f820();
    _objc_retainAutoreleasedReturnValue();
    if (piVar24 == (int *)0x0) {
      uVar25 = 0;
    }
    else {
      piVar11 = piVar9;
      func_0x00010bf4f820();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      piVar29 = piVar11;
      func_0x00010bf2b540();
      piVar12 = piVar11;
      func_0x00010c2439e0(piVar11);
      piVar14 = piVar11;
      func_0x00010c243400(piVar11);
      piVar15 = piVar11;
      func_0x00010c105ca0(piVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar28 = param_1;
      FUN_10aed4588(param_1,piVar15);
      param_1[0x46] = 1;
      iVar4 = *(int *)(param_1 + 0x20);
      iVar5 = *(int *)(param_1 + 0x30);
      iVar6 = *(int *)(param_1 + 0x28);
      func_0x000107c27ddc(param_1,10,(ulong)puVar28 & 0xffffffff);
      func_0x000107c27e1c(param_1,8,piVar14,0);
      func_0x000107c27e1c(param_1,6,piVar12,0);
      func_0x000107c27e1c(param_1,4,(ulong)piVar29 & 0xffffffff,0);
      puVar28 = param_1;
      func_0x000107c27dc0(param_1,(iVar4 - iVar5) + iVar6);
      _objc_release(piVar15);
      _objc_release(piVar11);
      _objc_release(piVar11);
      uVar25 = (ulong)puVar28 & 0xffffffff;
    }
    _objc_release(piVar24);
    piVar24 = piVar9;
    func_0x00010c0cf060();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = param_1;
    FUN_10aed4588(param_1,piVar24);
    piVar11 = piVar9;
    func_0x00010bf3d3e0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = param_1;
    FUN_10aed4588(param_1,piVar11);
    piVar29 = piVar9;
    func_0x00010c0f2920();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    if (piVar29 == (int *)0x0) {
      puVar30 = (undefined *)0x0;
    }
    else {
      _objc_retainAutorelease(piVar29);
      piVar12 = piVar29;
      func_0x00010bf25f00(piVar29);
      piVar14 = piVar29;
      func_0x00010c08fa60(piVar29);
      puVar30 = param_1;
      func_0x000107c27df8(param_1,piVar12,piVar14);
    }
    _objc_release(piVar29);
    piVar12 = piVar9;
    func_0x00010c0d9cc0(piVar9);
    param_1[0x46] = 1;
    iVar4 = *(int *)(param_1 + 0x20);
    iVar5 = *(int *)(param_1 + 0x30);
    iVar6 = *(int *)(param_1 + 0x28);
    func_0x000107c27dbc(param_1,0xc,piVar12,0);
    func_0x000107c27de4(param_1,10,(ulong)puVar30 & 0xffffffff);
    if (uVar25 != 0) {
      func_0x000107c27db4(param_1,4);
      func_0x000107c27de0(param_1,8,
                          (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                           *(int *)(param_1 + 0x28)) - (int)uVar25) + 4,0);
    }
    func_0x000107c27ddc(param_1,6,(ulong)puVar23 & 0xffffffff);
    func_0x000107c27ddc(param_1,4,(ulong)puVar28 & 0xffffffff);
    puVar28 = param_1;
    func_0x000107c27dc0(param_1,(iVar4 - iVar5) + iVar6);
    _objc_release(piVar29);
    _objc_release(piVar11);
    _objc_release(piVar24);
    _objc_release(piVar9);
    _objc_release(piVar9);
    uStack_268 = (ulong)puVar28 & 0xffffffff;
  }
  _objc_release(piVar8);
  piVar8 = param_2;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = param_1;
  FUN_10aed4588();
  lVar20 = 0x1137edc38;
  if (lStack_220 - lStack_228 != 0) {
    lVar20 = lStack_228;
  }
  puVar23 = param_1;
  FUN_10aedba5c(param_1,lVar20,lStack_220 - lStack_228 >> 2);
  lVar37 = lStack_240;
  lVar20 = 0x1137edc38;
  if (lStack_238 - lStack_240 != 0) {
    lVar20 = lStack_240;
  }
  puVar30 = param_1;
  FUN_10aedba5c(param_1,lVar20,lStack_238 - lStack_240 >> 2);
  piVar9 = param_2;
  func_0x00010c27d100();
  func_0x00010c08a700(param_2);
  uVar35 = uVar38;
  func_0x00010c298be0(param_2);
  uVar25 = (long)puStack_248 - (long)puStack_258;
  puVar36 = (undefined4 *)&UNK_10e534459;
  if (uVar25 != 0) {
    puVar36 = puStack_258;
  }
  param_1[0x46] = 1;
  func_0x000107c27dc8(param_1,uVar25,4);
  func_0x000107c27dc8(param_1,uVar25,4);
  if (puStack_258 != puStack_248) {
    lVar20 = (long)uVar25 >> 2;
    do {
      iVar4 = puVar36[lVar20 + -1];
      func_0x000107c27db4(param_1,4);
      func_0x000107c27dcc(param_1,(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                                   *(int *)(param_1 + 0x28)) - iVar4) + 4);
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  param_1[0x46] = 0;
  puVar32 = param_1;
  func_0x000107c27dcc(param_1,uVar25 >> 2);
  piVar24 = param_2;
  func_0x00010c0cf060();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = param_1;
  FUN_10aed4588();
  piVar11 = param_2;
  func_0x00010bf3d3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = param_1;
  FUN_10aed4588(param_1);
  lVar20 = 0x1137edc39;
  if (lStack_f8 - lStack_100 != 0) {
    lVar20 = lStack_100;
  }
  puVar17 = param_1;
  func_0x00010aedbb10(param_1,lVar20,lStack_f8 - lStack_100 >> 2);
  lVar13 = lStack_210;
  lVar20 = 0x1137edc39;
  if (lStack_208 - lStack_210 != 0) {
    lVar20 = lStack_210;
  }
  puVar18 = param_1;
  func_0x00010aedbb10(param_1,lVar20,lStack_208 - lStack_210 >> 2);
  piVar29 = param_2;
  func_0x00010c0ed720();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = param_1;
  FUN_10aed4588(param_1,piVar29);
  param_1[0x46] = 1;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar27 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c27db8(uVar35,0,param_1,0xe);
  func_0x000107c27db8(uVar38,0,param_1,0xc);
  func_0x000107c27dbc(param_1,10,piVar9,0);
  func_0x000107c27ddc(param_1,0x1e,(ulong)puVar19 & 0xffffffff);
  if (uStack_268 != 0) {
    func_0x000107c27db4(param_1,4);
    func_0x000107c27de0(param_1,0x1c,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uStack_268) + 4,0);
  }
  FUN_10aedb994(param_1,0x1a,(ulong)puVar18 & 0xffffffff);
  FUN_10aedb994(param_1,0x18,(ulong)puVar17 & 0xffffffff);
  if (puStack_260 != (undefined4 *)0x0) {
    func_0x000107c27db4(param_1,4);
    func_0x000107c27de0(param_1,0x16,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)puStack_260) + 4,0);
  }
  func_0x000107c27ddc(param_1,0x14,(ulong)puVar16 & 0xffffffff);
  func_0x000107c27ddc(param_1,0x12,(ulong)puVar34 & 0xffffffff);
  if ((int)puVar32 != 0) {
    func_0x000107c27db4(param_1,4);
    func_0x000107c27de0(param_1,0x10,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)puVar32) + 4,0);
  }
  func_0x00010aedb9f8(param_1,8,(int)puVar30);
  func_0x00010aedb9f8(param_1,6,(int)puVar23);
  func_0x000107c27ddc(param_1,4,(int)puVar28);
  func_0x000107c27dc0(param_1,((int)uVar27 - (int)uVar3) + (int)uVar2);
  _objc_release(piVar29);
  _objc_release(piVar11);
  _objc_release(piVar24);
  _objc_release(piVar8);
  if (lVar13 != 0) {
    __ZdlPv(lVar13);
  }
  if (lStack_100 != 0) {
    __ZdlPv(lStack_100);
  }
  if (puStack_258 != (undefined4 *)0x0) {
    __ZdlPv();
    lVar37 = lStack_240;
  }
  if (lVar37 != 0) {
    __ZdlPv(lVar37);
  }
  if (lStack_228 != 0) {
    __ZdlPv();
  }
  piVar9 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_release(param_1);
  _objc_release(lVar13);
  _objc_release(lVar13);
  _objc_release(lStack_100);
  _objc_release(uStack_268);
  _objc_release(uStack_268);
  _objc_release(piVar8);
  if (puStack_258 != (undefined4 *)0x0) {
    __ZdlPv(puStack_258);
  }
  if (lStack_240 != 0) {
    __ZdlPv();
  }
  if (lStack_228 != 0) {
    __ZdlPv();
  }
  _objc_release(param_2);
  __Unwind_Resume();
  if (piVar9 == (int *)0x0) {
    puVar28 = (undefined *)0x0;
    goto LAB_10aed108c;
  }
  puVar28 = PTR_PTR_1126de720;
  _objc_alloc(PTR_PTR_1126de720);
  lVar20 = (long)*piVar9;
  uVar21 = *(ushort *)((long)piVar9 - lVar20);
  if (uVar21 < 5) {
    puVar23 = (undefined *)0x0;
LAB_10aed1024:
    puVar30 = (undefined *)0x0;
LAB_10aed1028:
    puVar32 = (undefined *)0x0;
LAB_10aed102c:
    puVar34 = (undefined *)0x0;
LAB_10aed1030:
    lVar20 = 0;
  }
  else {
    if (((ushort *)((long)piVar9 - lVar20))[2] == 0) {
      puVar23 = (undefined *)0x0;
    }
    else {
      puVar23 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      lVar20 = (long)*piVar9;
      uVar21 = *(ushort *)((long)piVar9 - lVar20);
    }
    lVar20 = -lVar20;
    if (uVar21 < 7) goto LAB_10aed1024;
    if (*(short *)((long)piVar9 + lVar20 + 6) == 0) {
      puVar30 = (undefined *)0x0;
    }
    else {
      puVar30 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      lVar20 = -(long)*piVar9;
      uVar21 = *(ushort *)((long)piVar9 - (long)*piVar9);
    }
    if (uVar21 < 9) goto LAB_10aed1028;
    if (*(short *)((long)piVar9 + lVar20 + 8) == 0) {
      puVar32 = (undefined *)0x0;
    }
    else {
      puVar32 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      lVar20 = -(long)*piVar9;
      uVar21 = *(ushort *)((long)piVar9 - (long)*piVar9);
    }
    if (uVar21 < 0xb) goto LAB_10aed102c;
    if (*(short *)((long)piVar9 + lVar20 + 10) == 0) {
      puVar34 = (undefined *)0x0;
    }
    else {
      puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      lVar20 = -(long)*piVar9;
      uVar21 = *(ushort *)((long)piVar9 - (long)*piVar9);
    }
    if ((uVar21 < 0xd) || (uVar25 = (ulong)*(ushort *)((long)piVar9 + lVar20 + 0xc), uVar25 == 0))
    goto LAB_10aed1030;
    puVar1 = (uint *)((long)piVar9 + uVar25);
    lVar20 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_10aed16c8(lVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c013ac0(puVar28);
  _objc_release(lVar20);
  _objc_release(puVar34);
  _objc_release(puVar32);
  _objc_release(puVar30);
  _objc_release(puVar23);
LAB_10aed108c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar28);
  return puVar28;
}



/* Entry: 10aed0f38; end: 10aed11c7;  */

void FUN_10aed0f38(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  long lVar2;
  ushort uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  if (param_1 == (int *)0x0) {
    puVar6 = (undefined *)0x0;
    goto LAB_10aed108c;
  }
  puVar6 = PTR_PTR_1126de720;
  _objc_alloc(PTR_PTR_1126de720);
  lVar2 = (long)*param_1;
  uVar3 = *(ushort *)((long)param_1 - lVar2);
  if (uVar3 < 5) {
    puVar5 = (undefined *)0x0;
LAB_10aed1024:
    puVar7 = (undefined *)0x0;
LAB_10aed1028:
    puVar8 = (undefined *)0x0;
LAB_10aed102c:
    puVar9 = (undefined *)0x0;
LAB_10aed1030:
    lVar2 = 0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_1 - lVar2))[2];
    if (uVar4 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = (long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - lVar2);
    }
    lVar2 = -lVar2;
    if (uVar3 < 7) goto LAB_10aed1024;
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar2 + 6);
    if (uVar4 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar3 < 9) goto LAB_10aed1028;
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar2 + 8);
    if (uVar4 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar3 < 0xb) goto LAB_10aed102c;
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar2 + 10);
    if (uVar4 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar3 < 0xd) || (uVar4 = (ulong)*(ushort *)((long)param_1 + lVar2 + 0xc), uVar4 == 0))
    goto LAB_10aed1030;
    puVar1 = (uint *)((long)param_1 + uVar4);
    lVar2 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_10aed16c8(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c013ac0(puVar6,param_2,puVar5,puVar7,puVar8,puVar9,lVar2);
  _objc_release(lVar2);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
LAB_10aed108c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10aed11c8; end: 10aed16c7;  */

void FUN_10aed11c8(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ushort uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_68;
  
  puVar2 = (undefined *)0x0;
  if (param_1 == (int *)0x0) goto LAB_10aed139c;
  puVar2 = PTR_PTR_1126de730;
  _objc_alloc(PTR_PTR_1126de730);
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 5) ||
     (uVar5 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2], uVar5 == 0)) {
    lVar3 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + uVar5);
    lVar3 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_10aed1800(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)*param_1;
  uVar8 = *(ushort *)((long)param_1 - lVar6);
  if (uVar8 < 7) {
    puStack_68 = (undefined *)0x0;
LAB_10aed12f8:
    puVar4 = (undefined *)0x0;
LAB_10aed12fc:
    puVar11 = (undefined *)0x0;
LAB_10aed1300:
    puVar12 = (undefined *)0x0;
LAB_10aed1304:
    puVar13 = (undefined *)0x0;
LAB_10aed1308:
    puVar14 = (undefined *)0x0;
LAB_10aed130c:
    puVar15 = (undefined *)0x0;
    uVar9 = 0;
LAB_10aed1314:
    puVar10 = (undefined *)0x0;
LAB_10aed1318:
    uVar7 = 0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_1 - lVar6))[3];
    if (uVar5 == 0) {
      puStack_68 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puStack_68 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)*param_1;
      uVar8 = *(ushort *)((long)param_1 - lVar6);
    }
    lVar6 = -lVar6;
    if (uVar8 < 9) goto LAB_10aed12f8;
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar6 + 8);
    if (uVar5 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = -(long)*param_1;
      uVar8 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar8 < 0xb) goto LAB_10aed12fc;
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar6 + 10);
    if (uVar5 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = -(long)*param_1;
      uVar8 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar8 < 0xd) goto LAB_10aed1300;
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar6 + 0xc);
    if (uVar5 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = -(long)*param_1;
      uVar8 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar8 < 0xf) goto LAB_10aed1304;
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar6 + 0xe);
    if (uVar5 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = -(long)*param_1;
      uVar8 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar8 < 0x11) goto LAB_10aed1308;
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar6 + 0x10);
    if (uVar5 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = -(long)*param_1;
      uVar8 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar8 < 0x13) goto LAB_10aed130c;
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar6 + 0x12);
    if (uVar5 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = -(long)*param_1;
      uVar8 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar8 < 0x15) {
      uVar9 = 0;
      goto LAB_10aed1314;
    }
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar6 + 0x14);
    if (uVar5 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)((long)param_1 + uVar5);
    }
    if (uVar8 < 0x17) goto LAB_10aed1314;
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar6 + 0x16);
    if (uVar5 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = -(long)*param_1;
      uVar8 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar8 < 0x19) goto LAB_10aed1318;
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar6 + 0x18);
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = *(undefined8 *)((long)param_1 + uVar5);
    }
  }
  func_0x00010c062080(puVar2,param_2,lVar3,puStack_68,puVar4,puVar11,puVar12,puVar13,puVar14,puVar15
                      ,uVar9,puVar10,uVar7);
  _objc_release(puVar10);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar4);
  _objc_release(puStack_68);
  _objc_release(lVar3);
LAB_10aed139c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aed16c8; end: 10aed17ff;  */

void FUN_10aed16c8(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  if (param_1 == (int *)0x0) {
    puVar6 = (undefined *)0x0;
    goto LAB_10aed17c8;
  }
  puVar6 = PTR_PTR_1126de718;
  _objc_alloc(PTR_PTR_1126de718);
  lVar3 = (long)*param_1;
  uVar2 = *(ushort *)((long)param_1 - lVar3);
  if (uVar2 < 5) {
    puVar5 = (undefined *)0x0;
LAB_10aed17a0:
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_1 - lVar3))[2];
    if (uVar4 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = (long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - lVar3);
    }
    if ((uVar2 < 7) || (uVar4 = (ulong)*(ushort *)((long)param_1 + (6 - lVar3)), uVar4 == 0))
    goto LAB_10aed17a0;
    puVar1 = (uint *)((long)param_1 + uVar4);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        (long)puVar1 + (ulong)*puVar1 + 4);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c063600(puVar6,param_2,puVar5,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar5);
LAB_10aed17c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10aed1800; end: 10aed1993;  */

void FUN_10aed1800(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  if (param_1 == (int *)0x0) {
    puVar6 = (undefined *)0x0;
    goto LAB_10aed194c;
  }
  puVar6 = PTR_PTR_1126de728;
  _objc_alloc(PTR_PTR_1126de728);
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 5) ||
     (uVar4 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2], uVar4 == 0)) {
    lVar3 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + uVar4);
    lVar3 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_10aed16c8(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)*param_1;
  uVar2 = *(ushort *)((long)param_1 - lVar5);
  if (uVar2 < 7) {
    puVar7 = (undefined *)0x0;
LAB_10aed1918:
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_1 - lVar5))[3];
    if (uVar4 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - lVar5);
    }
    if ((uVar2 < 9) || (uVar4 = (ulong)*(ushort *)((long)param_1 + (8 - lVar5)), uVar4 == 0))
    goto LAB_10aed1918;
    puVar1 = (uint *)((long)param_1 + uVar4);
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        (long)puVar1 + (ulong)*puVar1 + 4);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c037940(puVar6,param_2,lVar3,puVar7,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar3);
LAB_10aed194c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10aed1994; end: 10aed1b13;  */

void FUN_10aed1994(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  bool bVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  if (param_1 == (int *)0x0) {
    puVar7 = (undefined *)0x0;
    goto LAB_10aed1ab0;
  }
  puVar7 = PTR_PTR_1126de7a8;
  _objc_alloc(PTR_PTR_1126de7a8);
  lVar4 = (long)*param_1;
  uVar3 = *(ushort *)((long)param_1 - lVar4);
  if (uVar3 < 5) {
    puVar6 = (undefined *)0x0;
LAB_10aed1a84:
    puVar8 = (undefined *)0x0;
LAB_10aed1a88:
    bVar2 = false;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_1 - lVar4))[2];
    if (uVar5 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = (long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - lVar4);
    }
    lVar4 = -lVar4;
    if (uVar3 < 7) goto LAB_10aed1a84;
    if (*(short *)((long)param_1 + lVar4 + 6) == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x00010bffa160();
      lVar4 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar3 < 9) || (uVar5 = (ulong)*(ushort *)((long)param_1 + lVar4 + 8), uVar5 == 0))
    goto LAB_10aed1a88;
    bVar2 = *(char *)((long)param_1 + uVar5) != '\0';
  }
  func_0x00010c054bc0(puVar7,param_2,puVar6,puVar8,bVar2);
  _objc_release(puVar8);
  _objc_release(puVar6);
LAB_10aed1ab0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}


