/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b73685c; end: 10b736863; -[SCCameraStabilizationState frontCameraStabilizationMode] */

undefined8 FUN_10b73685c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b736864; end: 10b73686b; -[SCCameraStabilizationState rearCameraStabilizationMode] */

undefined8 FUN_10b736864(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b73686c; end: 10b736877; -[SCCameraDeviceSettingsResolverServices .cxx_destruct] */

void FUN_10b73686c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b736878; end: 10b7368eb; -[SCBitmojiEditAvatarBuilderScopedCameraDeviceSettingsResolverServices initWithCameraDeviceSettingsResolverServices:] */

undefined1 * FUN_10b736878(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a448;
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



/* Entry: 10b7368ec; end: 10b7368f3; -[SCBitmojiEditAvatarBuilderScopedCameraDeviceSettingsResolverServices cameraDeviceSettingsResolverServices] */

undefined8 FUN_10b7368ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7368f4; end: 10b7368ff; -[SCBitmojiEditAvatarBuilderScopedCameraDeviceSettingsResolverServices .cxx_destruct] */

void FUN_10b7368f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b736900; end: 10b73690b; -[SCMainCameraScopedCameraDeviceSettingsResolverServices .cxx_destruct] */

void FUN_10b736900(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b73690c; end: 10b736923; -[SCCameraWarmupLiveResolverHolder mainCameraResolver] */

void FUN_10b73690c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b736924; end: 10b73692f; -[SCCameraWarmupLiveResolverHolder setMainCameraResolver:] */

void FUN_10b736924(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 10b736930; end: 10b736937; -[SCCameraWarmupLiveResolverHolder .cxx_destruct] */

void FUN_10b736930(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10b736938; end: 10b73695b; -[SCCameraDeviceSettings copyWithZone:] */

undefined8 FUN_10b736938(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b73695c; end: 10b736a0b; -[SCCameraDeviceSettings hash] */

undefined8 * FUN_10b73695c(long param_1,undefined8 param_2,undefined1 *param_3)

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
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b736b04:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b736b10;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x28);
              if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x30);
                if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
                  if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
                    func_0x00010c071ae0();
                    goto LAB_10b736b10;
                  }
                  goto LAB_10b736b04;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b736b10:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b736a0c; end: 10b736b2b; -[SCCameraDeviceSettings isEqual:] */

long FUN_10b736a0c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b736b04:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b736b10;
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
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if (lVar3 != *(long *)(param_3 + 0x38)) {
                    func_0x00010c071ae0();
                    goto LAB_10b736b10;
                  }
                  goto LAB_10b736b04;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b736b10:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b736b2c; end: 10b736b97; -[SCCameraDeviceFrameRateConstraint hash] */

undefined8 * FUN_10b736b2c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_20;
  long lStack_18;
  
  puVar1 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x28);
  lStack_20 = -lVar3;
  if (-1 < lVar3) {
    lStack_20 = lVar3;
  }
  func_0x000107c3191c(&uStack_40,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if (((((ulong)puVar2 & 1) == 0) ||
          (((*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8) ||
            (*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10))) ||
           (*(long *)((long)puVar1 + 0x18) != *(long *)(param_3 + 0x18))))) ||
         (*(long *)((long)puVar1 + 0x20) != *(long *)(param_3 + 0x20))) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x28) == *(long *)(param_3 + 0x28));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10b736b98; end: 10b736c5f; -[SCCameraDeviceFrameRateConstraint isEqual:] */

bool FUN_10b736b98(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((((uVar3 & 1) == 0) ||
          (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
            (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
           (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) ||
         (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b736c60; end: 10b736c67; -[SCCameraDeviceFrameRateConstraint kind] */

undefined8 FUN_10b736c60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b736c68; end: 10b736ccf; -[SCCameraDeviceResolutionConstraint hash] */

undefined8 * FUN_10b736c68(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x18);
  lStack_20 = -lVar3;
  if (-1 < lVar3) {
    lStack_20 = lVar3;
  }
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8) ||
          (*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10))))) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x18) == *(long *)(param_3 + 0x18));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10b736cd0; end: 10b736d77; -[SCCameraDeviceResolutionConstraint isEqual:] */

bool FUN_10b736cd0(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) ||
         ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
          (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b736d78; end: 10b736d7f; -[SCCameraDeviceMediaSubtypeConstraint hash] */

undefined8 FUN_10b736d78(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b736d80; end: 10b736e07; -[SCCameraDeviceMediaSubtypeConstraint isEqual:] */

bool FUN_10b736d80(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 10b736e08; end: 10b736e6b; -[SCCameraDevicePhotoQualityConstraint hash] */

undefined8 * FUN_10b736e08(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 9);
  func_0x000107c3191c(&uStack_40,4);
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
      if ((((ulong)puVar2 & 1) == 0) ||
         (((*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10) ||
           (*(long *)((long)puVar1 + 0x18) != *(long *)(param_3 + 0x18))) ||
          (*(char *)((long)puVar1 + 8) != param_3[8])))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(char *)((long)puVar1 + 9) == param_3[9]);
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar3;
}



/* Entry: 10b736e6c; end: 10b736f23; -[SCCameraDevicePhotoQualityConstraint isEqual:] */

bool FUN_10b736e6c(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) ||
         (((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
           (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
          (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 9) == *(char *)(param_3 + 9);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b736f24; end: 10b736faf; -[SCCameraDeviceVideoCaptureSupportConstraint hash] */

ulong * FUN_10b736f24(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ushort uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  ulong uVar8;
  
  puVar2 = &uStack_50;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined4 *)(param_1 + 8);
  uVar7 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar6 >> 0x18),
                                          (uint6)(byte)((uint)uVar6 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar6) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar6 >> 8),(short)uVar7);
  uVar8 = CONCAT44((int)(uVar7 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar7 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar7 >> 0x20),(int)uVar8)) &
          0xff01ff01ffffffff;
  uVar5 = (ushort)(uVar7 >> 0x30);
  uStack_50 = (ulong)uVar1 & 0xff;
  uStack_48 = uVar7 >> 0x10 & 0xff;
  uStack_40 = (ulong)CONCAT24(uVar5,(uint)(ushort)(uVar7 >> 0x20)) & 0xffffffff;
  uStack_38 = (ulong)uVar5;
  uStack_30 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_28 = (ulong)*(byte *)(param_1 + 0xd);
  uStack_20 = (ulong)*(byte *)(param_1 + 0xe);
  func_0x000107c3191c(&uStack_50,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (ulong *)param_3) {
    puVar4 = (undefined1 *)0x1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if (((((ulong)puVar3 & 1) == 0) ||
          (((*(char *)((long)puVar2 + 8) != param_3[8] ||
            (*(char *)((long)puVar2 + 9) != param_3[9])) ||
           (*(char *)((long)puVar2 + 10) != param_3[10])))) ||
         (((*(char *)((long)puVar2 + 0xb) != param_3[0xb] ||
           (*(char *)((long)puVar2 + 0xc) != param_3[0xc])) ||
          (*(char *)((long)puVar2 + 0xd) != param_3[0xd])))) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = (undefined1 *)(ulong)(*(char *)((long)puVar2 + 0xe) == param_3[0xe]);
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar4;
}



/* Entry: 10b736fb0; end: 10b737097; -[SCCameraDeviceVideoCaptureSupportConstraint isEqual:] */

bool FUN_10b736fb0(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((((uVar3 & 1) == 0) ||
          (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
            (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
           (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))) ||
         (((*(char *)(param_1 + 0xb) != *(char *)(param_3 + 0xb) ||
           (*(char *)(param_1 + 0xc) != *(char *)(param_3 + 0xc))) ||
          (*(char *)(param_1 + 0xd) != *(char *)(param_3 + 0xd))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b737098; end: 10b7370b3; +[SCCameraDeviceVideoCaptureSupportConstraintBuilder cameraDeviceVideoCaptureSupportConstraint] */

void FUN_10b737098(void)

{
  _objc_alloc_init(PTR_PTR_1126cf7b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7370b4; end: 10b73723b; +[SCCameraDeviceVideoCaptureSupportConstraintBuilder cameraDeviceVideoCaptureSupportConstraintFromExistingCameraDeviceVideoCaptureSupportConstraint:] */

void FUN_10b7370b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar1 = PTR_PTR_1126cf7b8;
  _objc_retain(param_3);
  func_0x00010bf29500(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c232880(param_3);
  puVar3 = puVar1;
  func_0x00010c2b8b00(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c232840(param_3);
  puVar4 = puVar3;
  func_0x00010c2b8ac0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c232860(param_3);
  puVar5 = puVar4;
  func_0x00010c2b8ae0(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c232900(param_3);
  puVar6 = puVar5;
  func_0x00010c2b8b80(puVar5,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2328c0(param_3);
  puVar7 = puVar6;
  func_0x00010c2b8b40(puVar6,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2328e0(param_3);
  puVar8 = puVar7;
  func_0x00010c2b8b60(puVar7,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2328a0(param_3);
  _objc_release(param_3);
  puVar9 = puVar8;
  func_0x00010c2b8b20(puVar8,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10b73723c; end: 10b73728f; -[SCCameraDeviceVideoCaptureSupportConstraintBuilder build] */

void FUN_10b73723c(void)

{
  _objc_alloc(PTR_PTR_1126b7110);
  func_0x00010c046160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b737290; end: 10b737297; -[SCCameraDeviceVideoCaptureSupportConstraintBuilder withShouldRequireVideoHDR:] */

void FUN_10b737290(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b737298; end: 10b73729f; -[SCCameraDeviceVideoCaptureSupportConstraintBuilder withShouldRequireMultiCam:] */

void FUN_10b737298(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10b7372a0; end: 10b7372a7; -[SCCameraDeviceVideoCaptureSupportConstraintBuilder withShouldRequireVideoBinned:] */

void FUN_10b7372a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 10b7372a8; end: 10b7372af; -[SCCameraDeviceVideoCaptureSupportConstraintBuilder withShouldRequireVideoStabilizationModeStandard:] */

void FUN_10b7372a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 10b7372b0; end: 10b7372b7; -[SCCameraDeviceVideoCaptureSupportConstraintBuilder withShouldRequireVideoStabilizationModeCinematic:] */

void FUN_10b7372b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 10b7372b8; end: 10b7372bf; -[SCCameraDeviceVideoCaptureSupportConstraintBuilder withShouldRequireVideoStabilizationModeCinematicExtended:] */

void FUN_10b7372b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xd) = param_3;
  return;
}



/* Entry: 10b7372c0; end: 10b7372c7; -[SCCameraDeviceVideoCaptureSupportConstraintBuilder withShouldRequireVideoStabilizationModeAuto:] */

void FUN_10b7372c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xe) = param_3;
  return;
}



/* Entry: 10b7372c8; end: 10b737367; -[SCCameraDeviceExposureConstraint hash] */

long * FUN_10b7372c8(long param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = (ulong)*(uint *)(param_1 + 8) * 0x200000 - 1;
  uVar4 = (uVar4 ^ uVar4 >> 0x18) * 0x109;
  uVar4 = (uVar4 ^ uVar4 >> 0xe) * 0x15;
  lStack_28 = (uVar4 ^ uVar4 >> 0x1c) * 0x80000001;
  uVar4 = (ulong)*(uint *)(param_1 + 0xc) * 0x200000 - 1;
  uVar4 = (uVar4 ^ uVar4 >> 0x18) * 0x109;
  uVar4 = (uVar4 ^ uVar4 >> 0xe) * 0x15;
  lStack_20 = (uVar4 ^ uVar4 >> 0x1c) * 0x80000001;
  plVar2 = &lStack_28;
  func_0x000107c3191c(plVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar2 == param_3) {
    plVar5 = (long *)0x1;
  }
  else {
    plVar5 = (long *)0x0;
    if ((plVar2 != (long *)0x0) && (param_3 != (long *)0x0)) {
      plVar5 = plVar2;
      _objc_opt_class(plVar2);
      plVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,plVar5);
      if (((ulong)plVar3 & 1) != 0) {
        fVar7 = ABS(*(float *)(plVar2 + 1) - *(float *)(param_3 + 1));
        fVar6 = ABS(*(float *)(plVar2 + 1) + *(float *)(param_3 + 1)) * 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar7) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar6))) {
          bVar1 = fVar7 < fVar6;
        }
        if (bVar1) {
          fVar6 = ABS(*(float *)((long)plVar2 + 0xc) + *(float *)((long)param_3 + 0xc)) *
                  1.1920929e-07;
          if (fVar6 <= 1.1754944e-38) {
            fVar6 = 1.1754944e-38;
          }
          plVar5 = (long *)(ulong)(ABS(*(float *)((long)plVar2 + 0xc) -
                                       *(float *)((long)param_3 + 0xc)) < fVar6);
          goto LAB_10b737420;
        }
      }
      plVar5 = (long *)0x0;
    }
  }
LAB_10b737420:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 10b737368; end: 10b73743b; -[SCCameraDeviceExposureConstraint isEqual:] */

bool FUN_10b737368(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
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
        fVar5 = ABS(*(float *)(param_1 + 8) - *(float *)(param_3 + 8));
        fVar4 = ABS(*(float *)(param_1 + 8) + *(float *)(param_3 + 8)) * 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar5) && (bVar1 = false, !NAN(fVar5) && !NAN(fVar4))) {
          bVar1 = fVar5 < fVar4;
        }
        if (bVar1) {
          fVar4 = ABS(*(float *)(param_1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
          if (fVar4 <= 1.1754944e-38) {
            fVar4 = 1.1754944e-38;
          }
          bVar1 = ABS(*(float *)(param_1 + 0xc) - *(float *)(param_3 + 0xc)) < fVar4;
          goto LAB_10b737420;
        }
      }
      bVar1 = false;
    }
  }
LAB_10b737420:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b73743c; end: 10b7374b7;  */

undefined * FUN_10b73743c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8f88 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f78858,
                        &UNK_10e5d7b28,&UNK_10e5d7bac,6,FUN_10b7374b8,0);
    do {
      if (puRam00000001137f8f88 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8f88;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8f88,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8f88 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8f88;
}



/* Entry: 10b7374b8; end: 10b7374c3;  */

bool FUN_10b7374b8(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10b7374c4; end: 10b73753f;  */

undefined * FUN_10b7374c4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8f90 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f78878,
                        &UNK_10e5d7bc4,&UNK_10e5d7bf8,3,FUN_10b737540,0);
    do {
      if (puRam00000001137f8f90 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8f90;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8f90,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8f90 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8f90;
}



/* Entry: 10b737540; end: 10b73754b;  */

bool FUN_10b737540(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b73754c; end: 10b7375b3; +[SCCTXTimeline descriptor] */

void FUN_10b73754c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8f98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb4610,
                        &PTR____CFConstantStringClassReference_110f673d8,&PTR_DAT_1133c9398,0,0,4,
                        0x1c);
    puRam00000001137f8f98 = puVar1;
  }
  return;
}



/* Entry: 10b7375b4; end: 10b73761b; +[SCCTXDirectorMode descriptor] */

void FUN_10b7375b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8fa0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb4660,
                        &PTR____CFConstantStringClassReference_110f78898,&PTR_DAT_1133c9398,0,0,4,
                        0x1c);
    puRam00000001137f8fa0 = puVar1;
  }
  return;
}



/* Entry: 10b73761c; end: 10b737683; +[SCCTXDualCamera descriptor] */

void FUN_10b73761c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8fa8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb46b0,
                        &PTR____CFConstantStringClassReference_110f788b8,&PTR_DAT_1133c9398,
                        &PTR_DAT_1133c93b0,1,8,0x1c);
    puRam00000001137f8fa8 = puVar1;
  }
  return;
}



/* Entry: 10b737684; end: 10b7376eb; +[SCCTXGreenScreen descriptor] */

void FUN_10b737684(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8fb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb4700,
                        &PTR____CFConstantStringClassReference_110f788d8,&PTR_DAT_1133c9398,0,0,4,
                        0x1c);
    puRam00000001137f8fb0 = puVar1;
  }
  return;
}



/* Entry: 10b7376ec; end: 10b737753; +[SCCTXSpeedMode descriptor] */

void FUN_10b7376ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8fb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb4750,
                        &PTR____CFConstantStringClassReference_110f788f8,&PTR_DAT_1133c9398,
                        &PTR_DAT_1133c93d0,1,8,0x1c);
    puRam00000001137f8fb8 = puVar1;
  }
  return;
}



/* Entry: 10b737754; end: 10b7377bb; +[SCCTXBatchCapture descriptor] */

void FUN_10b737754(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8fc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb47a0,
                        &PTR____CFConstantStringClassReference_110f78918,&PTR_DAT_1133c9398,0,0,4,
                        0x1c);
    puRam00000001137f8fc0 = puVar1;
  }
  return;
}



/* Entry: 10b7377bc; end: 10b737823; +[SCULLensResponse descriptor] */

void FUN_10b7377bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8fc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb4840,
                        &PTR____CFConstantStringClassReference_110f78938,&PTR_DAT_1133c93f0,
                        &PTR_DAT_1133c9408,1,0x10,0x1c);
    puRam00000001137f8fc8 = puVar1;
  }
  return;
}



/* Entry: 10b737824; end: 10b7378af; +[SCULLensResponse_Lens descriptor] */

undefined * FUN_10b737824(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8fd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb4890,
                        &PTR____CFConstantStringClassReference_110dcb5d8,&PTR_DAT_1133c93f0,
                        &PTR_s_lensId_1133c9468,5,0x30,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cb4840);
    puRam00000001137f8fd0 = puVar1;
  }
  return puRam00000001137f8fd0;
}



/* Entry: 10b7378b0; end: 10b737917; +[SCULGtqUnlockablesByIdResponse descriptor] */

void FUN_10b7378b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8fd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb48e0,
                        &PTR____CFConstantStringClassReference_110f78958,&PTR_DAT_1133c93f0,
                        &PTR_DAT_1133c9428,2,0x18,0x1c);
    puRam00000001137f8fd8 = puVar1;
  }
  return;
}



/* Entry: 10b737918; end: 10b73796b; +[SCClientEncryptionService shared] */

void FUN_10b737918(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f8fe8 != -1) {
    func_0x000107c27d9c(0x1137f8fe8,&PTR___NSConcreteGlobalBlock_110d5b1e0);
  }
  uVar1 = uRam00000001137f8fe0;
  _objc_retain(uRam00000001137f8fe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b73796c; end: 10b737aa7;  */

/* WARNING: Removing unreachable block (ram,0x00010b737a50) */

void FUN_10b73796c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar2 = PTR_PTR_1126b85c8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bfb50;
  _objc_opt_class(PTR_PTR_1126bfb50);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bfb50;
  func_0x00010c0f5800(PTR_PTR_1126bfb50);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c09bd60(puVar2,param_2,puVar3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137f8fe0;
  puRam00000001137f8fe0 = puVar5;
  _objc_release(uVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (puRam00000001137f8fe0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126bfb50;
    _objc_alloc_init();
    puVar2 = puRam00000001137f8fe0;
    puRam00000001137f8fe0 = puVar3;
    _objc_release(puVar2);
    func_0x00010be99cc0(puRam00000001137f8fe0);
  }
  return;
}



/* Entry: 10b737aa8; end: 10b737b0b; -[SCClientEncryptionService init] */

undefined1 * FUN_10b737aa8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270a490;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d5158;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b737b0c; end: 10b737b93; -[SCClientEncryptionService initWithCoder:] */

undefined1 * FUN_10b737b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a490;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b737b94; end: 10b737bab; -[SCClientEncryptionService encodeWithCoder:] */

void FUN_10b737b94(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf93030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_encodeObject_forKey__1125c25b0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110f78998);
  return;
}



/* Entry: 10b737bac; end: 10b737c27; -[SCClientEncryptionService _saveState] */

undefined * FUN_10b737bac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b85c8;
  func_0x00010c22b6a0(PTR_PTR_1126b85c8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bfb50;
  func_0x00010c0f5800(PTR_PTR_1126bfb50);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c14aa80(puVar1,param_2,param_1,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 10b737c28; end: 10b737c7b; +[SCClientEncryptionService path] */

void FUN_10b737c28(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b85c8;
  func_0x00010c22b6a0(PTR_PTR_1126b85c8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0f5a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b737c7c; end: 10b737c7f; -[SCClientEncryptionService setEncryptor:forKey:kind:] */

void FUN_10b737c7c(void)

{
  return;
}



/* Entry: 10b737c80; end: 10b737ca7; -[SCClientEncryptionService encryptorForKey:kind:] */

void FUN_10b737c80(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b737ca8; end: 10b737caf; -[SCClientEncryptionService encryptor] */

undefined8 FUN_10b737ca8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b737cb0; end: 10b737cbb; -[SCClientEncryptionService .cxx_destruct] */

void FUN_10b737cb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b737cbc; end: 10b737f6f; +[SCECDSAUtil verifyBase64Signature:input:base64Certificate:error:] */

ulong FUN_10b737cbc(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                   undefined8 *param_6)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar12 = 0;
  if (((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) {
    _objc_retain(param_5);
    lVar2 = param_4;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc();
    func_0x00010bff6b20();
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc();
    func_0x00010bff6b20();
    _objc_release(param_5);
    lVar10 = lVar2;
    _objc_retainAutorelease(lVar2);
    func_0x00010bf25f00();
    lVar5 = lVar2;
    func_0x00010c08fa60(lVar2);
    puVar6 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    puVar7 = puVar3;
    func_0x00010c08fa60(puVar3);
    puVar8 = puVar4;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    puVar9 = puVar4;
    func_0x00010c08fa60(puVar4);
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    func_0x00010ae35414(lVar10,lVar5,&uStack_c0);
    lVar10 = 0;
    puStack_c8 = puVar8;
    func_0x00010ae2ac74(0,&puStack_c8,puVar9);
    puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (lVar10 == 0) {
      if (param_6 != (undefined8 *)0x0) {
        uStack_88 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        uStack_80 = *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_110345570;
        ppuStack_78 = &PTR____CFConstantStringClassReference_110f789d8;
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_70 = puVar7;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_6 = puVar8;
        _objc_release(puVar9);
        _objc_release(puVar7);
        _objc_release(puVar6);
      }
      uVar12 = 0;
    }
    else {
      iVar1 = 0;
      func_0x00010ae297f0(0,&uStack_c0,0x30,puVar6,puVar7,lVar10);
      uVar12 = (ulong)(iVar1 == 1);
      func_0x000107c2b478(lVar10);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar12;
  }
  ___stack_chk_fail();
  uVar12 = *(ulong *)(param_3 + 8);
  if (uVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar12,PTR_s_boolValue_1125a5698);
    return uVar12;
  }
  lVar2 = param_3;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if ((lVar10 == 0) || (lVar2 = lVar10, func_0x00010bf1f440(), (int)lVar2 == 0)) {
    uVar12 = 0;
  }
  else {
    iVar1 = 2;
    func_0x000107c31924(2,0x1a,0,0);
    if (iVar1 != 0) {
      func_0x00010bf1f440(lVar10);
      puVar8 = PTR_PTR_1126e06c8;
      func_0x00010c22b6a0(PTR_PTR_1126e06c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c189e80();
      _objc_release(puVar8);
    }
    uVar12 = 1;
  }
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_3 + 8);
  *(undefined **)(param_3 + 8) = puVar8;
  _objc_release(uVar11);
  _objc_release(lVar10);
  return uVar12;
}



/* Entry: 10b737f70; end: 10b738127; -[SCScreenRecordingDetector sceneRecordingDetectionEnabled] */

long FUN_10b737f70(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_boolValue_1125a5698);
    return lVar2;
  }
  lVar2 = param_1;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if ((lVar3 == 0) || (lVar2 = lVar3, func_0x00010bf1f440(), (int)lVar2 == 0)) {
    lVar2 = 0;
  }
  else {
    iVar1 = 2;
    func_0x000107c31924(2,0x1a,0,0);
    if (iVar1 != 0) {
      func_0x00010bf1f440(lVar3);
      puVar4 = PTR_PTR_1126e06c8;
      func_0x00010c22b6a0(PTR_PTR_1126e06c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c189e80();
      _objc_release(puVar4);
    }
    lVar2 = 1;
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar4;
  _objc_release(uVar5);
  _objc_release(lVar3);
  return lVar2;
}



/* Entry: 10b738128; end: 10b73815f;  */

void FUN_10b738128(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e06c8;
  func_0x00010c22b6a0(PTR_PTR_1126e06c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf37f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b738160; end: 10b7383bf;  */

/* WARNING: Possible PIC construction at 0x0001000d7714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d774c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d779c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000d7750) */
/* WARNING: Removing unreachable block (ram,0x0001000d7718) */
/* WARNING: Removing unreachable block (ram,0x0001000d77a0) */

void FUN_10b738160(void)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c151480();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (puVar5 == (undefined *)0x0) {
LAB_10b73837c:
    _objc_release(puVar4);
  }
  else {
    puVar11 = (undefined *)0x0;
    puVar10 = (undefined *)0x0;
    bVar2 = false;
    do {
      puVar12 = (undefined *)0x0;
      puVar6 = puVar11;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar4);
        }
        puVar11 = *(undefined **)((long)puVar12 * 8);
        _objc_retain(puVar11);
        _objc_release(puVar6);
        if (((ulong)puVar10 & 1) == 0) {
          puVar10 = puVar11;
          func_0x00010c06e280();
          if (!bVar2) goto LAB_10b738224;
LAB_10b738270:
          bVar2 = true;
        }
        else {
          puVar10 = (undefined *)0x1;
          if (bVar2) goto LAB_10b738270;
LAB_10b738224:
          puVar6 = puVar11;
          func_0x00010c0ce960();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
          func_0x00010c0b6c20();
          _objc_retainAutoreleasedReturnValue();
          bVar2 = puVar6 == puVar7;
          _objc_release();
          _objc_release(puVar6);
        }
        puVar12 = puVar12 + 1;
        puVar6 = puVar11;
      } while (puVar5 != puVar12);
      puVar5 = puVar4;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined *)0x0);
    _objc_release(puVar11);
    _objc_release(puVar4);
    if (!bVar2 && (((uint)puVar10 ^ 0xffffffff) & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf07b60();
      _objc_release(puVar4);
      if (puVar5 == (undefined *)0x2) {
        puVar4 = PTR__OBJC_CLASS___NSNotification_1126dc088;
        func_0x00010c0dcbc0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
        func_0x00010bf68fa0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
        func_0x00010bf68fa0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNotification_1126dc088;
        func_0x00010c0dcbc0();
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c104940();
      _objc_release(puVar5);
      goto LAB_10b73837c;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  iVar3 = 2;
  func_0x000107c31924(2,0x1a,0,0);
  if (iVar3 != 0) {
    puVar4 = PTR_PTR_1126e06c0;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c14fb00();
    _objc_release(puVar4);
    if (((ulong)puVar5 & 1) != 0) {
      return;
    }
  }
  iVar3 = 2;
  func_0x000107c31924(2,0x1a,0,0);
  if (iVar3 != 0) {
    puVar4 = PTR_PTR_1126e06c0;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c14fb00();
    _objc_release(puVar4);
    if (((ulong)puVar5 & 1) != 0) {
      ppuVar8 = &PTR___NSConcreteGlobalBlock_110d5b230;
      goto code_r0x0001000d76cc;
    }
  }
  func_0x00010c22b6a0(PTR_PTR_1126e06c0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  ppuVar8 = &PTR___NSConcreteGlobalBlock_110d5b250;
code_r0x0001000d76cc:
  puVar4 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61174(ppuVar8);
  func_0x000107c4a02c();
  if ((int)puVar4 == 0) {
    func_0x0001000d77b8();
    func_0x000107c61180();
  }
  else {
    func_0x0001005855a8();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar8);
  return;
}



/* Entry: 10b7383c0; end: 10b738427; -[SCScreenRecordingDetector handleScreenCapturedNotification:] */

/* WARNING: Possible PIC construction at 0x0001000d7714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d774c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d779c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000d7750) */
/* WARNING: Removing unreachable block (ram,0x0001000d7718) */
/* WARNING: Removing unreachable block (ram,0x0001000d77a0) */

void FUN_10b7383c0(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  iVar1 = 2;
  func_0x000107c31924(2,0x1a,0,0);
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126e06c0;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c14fb00();
    _objc_release(puVar2);
    if (((ulong)puVar3 & 1) != 0) {
      return;
    }
  }
  iVar1 = 2;
  func_0x000107c31924(2,0x1a,0,0);
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126e06c0;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c14fb00();
    _objc_release(puVar2);
    if (((ulong)puVar3 & 1) != 0) {
      ppuVar4 = &PTR___NSConcreteGlobalBlock_110d5b230;
      goto code_r0x0001000d76cc;
    }
  }
  func_0x00010c22b6a0(PTR_PTR_1126e06c0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  ppuVar4 = &PTR___NSConcreteGlobalBlock_110d5b250;
code_r0x0001000d76cc:
  puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61174(ppuVar4);
  func_0x000107c4a02c();
  if ((int)puVar2 == 0) {
    func_0x0001000d77b8();
    func_0x000107c61180();
  }
  else {
    func_0x0001005855a8();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 10b738428; end: 10b73842f; -[SCScreenRecordingDetector appStartExperimentReader] */

undefined8 FUN_10b738428(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b738430; end: 10b7384f3; -[SCScreenRecordingDetector .cxx_destruct] */

void FUN_10b738430(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7384f4; end: 10b7386a7;  */

undefined1 * FUN_10b7384f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined8 unaff_x21;
  undefined *unaff_x22;
  long lVar11;
  uint uVar12;
  undefined *puVar13;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c22b6a0(PTR_PTR_1126e06c0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c151480();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = auStack_e8;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 == (undefined *)0x0) {
    puVar10 = (undefined1 *)0x0;
  }
  else {
    unaff_x22 = (undefined *)0x0;
    puVar9 = (undefined *)0x0;
    uVar12 = 0;
    lVar11 = *plStack_120;
    do {
      puVar13 = (undefined *)0x0;
      puVar3 = unaff_x22;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(puVar1);
        }
        unaff_x22 = *(undefined **)(lStack_128 + (long)puVar13 * 8);
        _objc_retain(unaff_x22);
        _objc_release(puVar3);
        if (((ulong)puVar9 & 1) == 0) {
          puVar9 = unaff_x22;
          func_0x00010c06e280();
          if (uVar12 != 0) goto LAB_10b738618;
LAB_10b7385cc:
          puVar3 = unaff_x22;
          func_0x00010c0ce960();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
          func_0x00010c0b6c20();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = (uint)(puVar3 == puVar4);
          _objc_release();
          _objc_release(puVar3);
        }
        else {
          puVar9 = (undefined *)0x1;
          if (uVar12 == 0) goto LAB_10b7385cc;
LAB_10b738618:
          uVar12 = 1;
        }
        puVar13 = puVar13 + 1;
        puVar3 = unaff_x22;
      } while (puVar2 != puVar13);
      puVar7 = auStack_e8;
      puVar2 = puVar1;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
    puVar10 = (undefined1 *)(ulong)((uint)puVar9 & (uVar12 ^ 1));
    _objc_release(unaff_x22);
    unaff_x21 = 0;
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar10;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_170;
  pcStack_138 = FUN_10b7386a8;
  puStack_160 = unaff_x22;
  uStack_158 = unaff_x21;
  puStack_150 = puVar10;
  puStack_148 = puVar1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  puStack_168 = PTR_PTR_11270a498;
  puStack_170 = puVar2;
  _objc_msgSendSuper2(&puStack_170,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined **)0x0) {
    *(undefined8 **)((long)ppuVar5 + 8) = puVar6;
    puVar1 = PTR_PTR_1126b85c8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0f5a40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)ppuVar5 + 0x10);
    *(undefined **)((long)ppuVar5 + 0x10) = puVar2;
    _objc_release(uVar8);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar8 = *(undefined8 *)((long)ppuVar5 + 0x28);
    *(undefined **)((long)ppuVar5 + 0x28) = puVar1;
    _objc_release(uVar8);
  }
  _objc_release(puVar7);
  return (undefined1 *)ppuVar5;
}



/* Entry: 10b7386a8; end: 10b73878f; -[SCArchiveLoader initWithClass:fileName:performerContext:] */

undefined1 *
FUN_10b7386a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270a498;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    puVar2 = PTR_PTR_1126b85c8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0f5a40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b738790; end: 10b7388ab; -[SCArchiveLoader loadFromDiskAsync:completion:] */

void FUN_10b738790(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_4;
  _objc_release(uVar4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b7388ac;
  puStack_50 = &UNK_110848868;
  ppuVar2 = &puStack_68;
  lStack_48 = param_1;
  _objc_retainBlock();
  if (param_3 == 0) {
    ppuVar3 = ppuVar2;
    (*(code *)ppuVar2[2])();
    if ((int)ppuVar3 != 0) {
      puStack_c0 = puVar1;
      uStack_b8 = 0xc2000000;
      uStack_b0 = 0x10b738960;
      puStack_a8 = &UNK_110842e18;
      lStack_a0 = param_1;
      func_0x000107c312cc("APPSTORE",&puStack_c0);
    }
  }
  else {
    puStack_98 = puVar1;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10b7388cc;
    puStack_80 = &UNK_11084aaa8;
    _objc_retain(ppuVar2);
    lStack_78 = param_1;
    ppuStack_70 = ppuVar2;
    func_0x000107c312cc("APPSTORE",&puStack_98);
    _objc_release(ppuStack_70);
  }
  _objc_release(ppuVar2);
  return;
}



/* Entry: 10b7388ac; end: 10b7388cb;  */

bool FUN_10b7388ac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
  if (lVar1 == 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = 1;
  }
  return lVar1 == 0;
}



/* Entry: 10b7388cc; end: 10b738957;  */

void FUN_10b7388cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  (**(code **)(lVar1 + 0x10))();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11dfc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 10b738958; end: 10b738967;  */

void FUN_10b738958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed0df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__unarchive_112591d20)
  ;
  return;
}



/* Entry: 10b738968; end: 10b738aa3; -[SCArchiveLoader _unarchive] */

/* WARNING: Removing unreachable block (ram,0x00010b738a50) */

void FUN_10b738968(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126b85c8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  _NSStringFromClass(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c09bd60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b738aa4;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  _objc_retain(puVar3);
  puStack_38 = puVar3;
  func_0x000107c312cc("APPSTORE",&puStack_60);
  _objc_release(puStack_38);
  _objc_release(puVar3);
  return;
}



/* Entry: 10b738aa4; end: 10b738aaf;  */

void FUN_10b738aa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfe250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didFinishLoadingFromDiskWithObj_11255d230,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b738ab0; end: 10b738bcb; -[SCArchiveLoader waitUntilLoadFromDiskCallback:] */

void FUN_10b738ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x10b738b38;
  puStack_38 = &UNK_11084aaa8;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x000107c312cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10b738bcc; end: 10b738c53; -[SCArchiveLoader _didFinishLoadingFromDiskWithObject:] */

void FUN_10b738bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10b738c54;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x000107c312cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10b738c54; end: 10b738d8f;  */

undefined * FUN_10b738c54(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = 2;
  lVar5 = *(long *)(param_1 + 0x20);
  lVar1 = *(long *)(lVar5 + 0x18);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x28));
    lVar5 = *(long *)(param_1 + 0x20);
  }
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar5 = *(long *)(lVar5 + 0x20);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        (**(code **)(*(long *)(lStack_108 + lVar7 * 8) + 0x10))();
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar5;
      puVar4 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar5);
  func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
  puVar2 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126b85c8;
  _objc_retain(puVar4);
  func_0x00010c22b6a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c14aa80();
  _objc_release(puVar4);
  _objc_release(puVar2);
  return puVar3;
}



/* Entry: 10b738d90; end: 10b738dff; -[SCArchiveLoader saveObject:] */

undefined * FUN_10b738d90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b85c8;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14aa80();
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 10b738e00; end: 10b738e07; -[SCArchiveLoader queuePerformer] */

undefined8 FUN_10b738e00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b738e08; end: 10b738e0f; -[SCArchiveLoader loadState] */

undefined8 FUN_10b738e08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b738e10; end: 10b738e17; -[SCArchiveLoader setLoadState:] */

void FUN_10b738e10(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10b738e18; end: 10b738e5f; -[SCArchiveLoader .cxx_destruct] */

void FUN_10b738e18(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b738e60; end: 10b738e63; -[SCArchiveUtils startServicesWithGrapheneRegistry:] */

void FUN_10b738e60(void)

{
  return;
}



/* Entry: 10b738e64; end: 10b738eeb; -[SCArchiveUtils saveObject:toPath:] */

undefined8
FUN_10b738e64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_class(param_3);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14aaa0(param_1,param_2,param_3,param_4,uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b738eec; end: 10b7390a3; -[SCArchiveUtils saveObject:toPath:type:] */

undefined8
FUN_10b738eec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  FUN_10b73910c(param_3,param_4);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72040(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b7e0();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf0e880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad040();
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c0a1140(param_1);
  _objc_release(param_5);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if ((int)param_3 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ecdc0(puVar2);
    _objc_retain(0);
    _objc_release(puVar3);
    _objc_release(0);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_3;
}



/* Entry: 10b7390a4; end: 10b7390ff; -[SCArchiveUtils logArchiveWritesWithType:fileSize:] */

void FUN_10b7390a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bc7ddf4(uVar1,param_3,1);
  func_0x00010bc7df8c(*(undefined8 *)(param_1 + 8),param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b739100; end: 10b73910b; -[SCArchiveUtils .cxx_destruct] */

void FUN_10b739100(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b73910c; end: 10b7392a7;  */

/* WARNING: Removing unreachable block (ram,0x00010b739240) */

undefined * FUN_10b73910c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfacbe0();
  _objc_release(puVar1);
  if (lRam00000001137f9018 != -1) {
    func_0x000107c27d9c(0x1137f9018,&PTR___NSConcreteGlobalBlock_110d5b290);
  }
  if (cRam00000001137f9010 == '\x01') {
    puVar1 = PTR_PTR_1126bdbc0;
    func_0x00010bf64c20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc_init(PTR__OBJC_CLASS___NSData_1126ae778);
    }
    puVar3 = puVar1;
    func_0x00010c14e040(puVar1);
    _objc_retain(0);
    puVar2 = PTR_PTR_1126e06d8;
    func_0x00010c22b6a0(PTR_PTR_1126e06d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a6780();
    _objc_release(0);
    _objc_release(puVar2);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined *)0x1;
    func_0x00010c14e020(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar3;
}



/* Entry: 10b7392a8; end: 10b73934b;  */

void FUN_10b7392a8(undefined8 param_1)

{
  undefined *puVar1;
  
  _objc_retain();
  if (lRam00000001137f9018 != -1) {
    func_0x000107c27d9c(0x1137f9018,&PTR___NSConcreteGlobalBlock_110d5b290);
  }
  if (cRam00000001137f9010 == '\x01') {
    puVar1 = PTR_PTR_1126bdbc0;
    func_0x00010bf64c20(PTR_PTR_1126bdbc0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b73934c; end: 10b739357; -[SCLensCarouselLoggerPrivateServices .cxx_destruct] */

void FUN_10b73934c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b739358; end: 10b7393b3; +[SCLensCarouselSessionTrackingEvent didSpinWithIsDummyLens:] */

void FUN_10b739358(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c8bf8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  puVar2[0x11] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b7393b4; end: 10b73940b; +[SCLensCarouselSessionTrackingEvent didSwipeWithIsDummyLens:] */

void FUN_10b7393b4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c8bf8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[0x10] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b73940c; end: 10b73942f; -[SCLensCarouselSessionTrackingEvent copyWithZone:] */

undefined8 FUN_10b73940c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b739430; end: 10b739493; -[SCLensCarouselSessionTrackingEvent hash] */

void FUN_10b739430(long param_1)

{
  undefined8 *puVar1;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 0x10);
  uStack_20 = (ulong)*(byte *)(param_1 + 0x11);
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_11270a4b0;
  puStack_60 = (undefined1 *)puVar1;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b739494; end: 10b7394d7; -[SCLensCarouselSessionTrackingEvent internalInit] */

void FUN_10b739494(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270a4b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7394d8; end: 10b73957f; -[SCLensCarouselSessionTrackingEvent isEqual:] */

bool FUN_10b7394d8(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) ||
         ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
          (*(char *)(param_1 + 0x10) != *(char *)(param_3 + 0x10))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 0x11) == *(char *)(param_3 + 0x11);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b739580; end: 10b739603; -[SCLensCarouselSessionTrackingEvent matchDidSwipe:didSpin:] */

void FUN_10b739580(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_10b7395e8;
    lVar2 = 0x11;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10b7395e8;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined1 *)(param_1 + lVar2));
LAB_10b7395e8:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b739604; end: 10b73960b; -[SCLensCarouselLoggerServices lensSwipesProvider] */

undefined8 FUN_10b739604(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b73960c; end: 10b73963b; -[SCLensCarouselLoggerServices .cxx_destruct] */

void FUN_10b73960c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


