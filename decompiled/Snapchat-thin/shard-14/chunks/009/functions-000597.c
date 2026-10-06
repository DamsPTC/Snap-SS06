/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b6fe990; end: 10b6fe997; -[SCSpectaclesFlightRemainInfo estimatedFlightTime] */

undefined4 FUN_10b6fe990(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10b6fe998; end: 10b6fea6f; -[SCSpectaclesFlightModeSettings initWithCoder:] */

undefined1 *
FUN_10b6fe998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_112709f70;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6fea70; end: 10b6feaef; -[SCSpectaclesFlightModeSettings initWithFlightMode:duration:distance:captureMode:tracking:flightPath:] */

void FUN_10b6fea70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_112709f70;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  return;
}



/* Entry: 10b6feaf0; end: 10b6feb13; -[SCSpectaclesFlightModeSettings copyWithZone:] */

undefined8 FUN_10b6feaf0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6feb14; end: 10b6febc3; -[SCSpectaclesFlightModeSettings encodeWithCoder:] */

void FUN_10b6feb14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f72cf8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f67eb8);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x18),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f72d18);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f72d38);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f72d58);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f72d78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6febc4; end: 10b6fec53; -[SCSpectaclesFlightModeSettings hash] */

undefined8 * FUN_10b6febc4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  double dVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_50;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar3 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_40 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uStack_28 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c3191c(&uStack_50,6);
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
           (*(long *)((long)puVar1 + 0x20) != *(long *)(param_3 + 0x20))))) ||
         ((*(long *)((long)puVar1 + 0x28) != *(long *)(param_3 + 0x28) ||
          (*(long *)((long)puVar1 + 0x30) != *(long *)(param_3 + 0x30))))) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        dVar5 = ABS(*(double *)((long)puVar1 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        if (dVar5 <= 2.2250738585072014e-308) {
          dVar5 = 2.2250738585072014e-308;
        }
        puVar4 = (undefined1 *)
                 (ulong)(ABS(*(double *)((long)puVar1 + 0x18) - *(double *)(param_3 + 0x18)) < dVar5
                        );
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10b6fec54; end: 10b6fed4f; -[SCSpectaclesFlightModeSettings isEqual:] */

bool FUN_10b6fec54(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((((uVar2 & 1) == 0) ||
          (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
            (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
           (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))))) ||
         ((*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28) ||
          (*(long *)(param_1 + 0x30) != *(long *)(param_3 + 0x30))))) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 10b6fed50; end: 10b6fed57; -[SCSpectaclesFlightModeSettings flightMode] */

undefined8 FUN_10b6fed50(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6fed58; end: 10b6fed5f; -[SCSpectaclesFlightModeSettings duration] */

undefined8 FUN_10b6fed58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6fed60; end: 10b6fed67; -[SCSpectaclesFlightModeSettings distance] */

undefined8 FUN_10b6fed60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6fed68; end: 10b6fed6f; -[SCSpectaclesFlightModeSettings captureMode] */

undefined8 FUN_10b6fed68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6fed70; end: 10b6fed77; -[SCSpectaclesFlightModeSettings tracking] */

undefined8 FUN_10b6fed70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b6fed78; end: 10b6fed7f; -[SCSpectaclesFlightModeSettings flightPath] */

undefined8 FUN_10b6fed78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b6fed80; end: 10b6fed9b; +[SCSpectaclesFlightModeSettingsBuilder spectaclesFlightModeSettings] */

void FUN_10b6fed80(void)

{
  _objc_alloc_init(PTR_PTR_1126c19d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6fed9c; end: 10b6feeef; +[SCSpectaclesFlightModeSettingsBuilder spectaclesFlightModeSettingsFromExistingSpectaclesFlightModeSettings:] */

void FUN_10b6fed9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126c19d0;
  _objc_retain(param_3);
  func_0x00010c248b20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfb2960(param_3);
  puVar3 = puVar1;
  func_0x00010c2ae3e0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf8b160(param_3);
  puVar4 = puVar3;
  func_0x00010c2acb40(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86e80(param_3);
  puVar5 = puVar4;
  func_0x00010c2ac800(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf30e80(param_3);
  puVar6 = puVar5;
  func_0x00010c2aa160(puVar5,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c278cc0(param_3);
  puVar7 = puVar6;
  func_0x00010c2bbb00(puVar6,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfb29c0(param_3);
  _objc_release(param_3);
  puVar8 = puVar7;
  func_0x00010c2ae400(puVar7,param_2,uVar2);
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



/* Entry: 10b6feef0; end: 10b6fef2b; -[SCSpectaclesFlightModeSettingsBuilder build] */

void FUN_10b6feef0(long param_1)

{
  _objc_alloc(PTR_PTR_1126c19c0);
  func_0x00010c013860(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6fef2c; end: 10b6fef33; -[SCSpectaclesFlightModeSettingsBuilder withFlightMode:] */

void FUN_10b6fef2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b6fef34; end: 10b6fef3b; -[SCSpectaclesFlightModeSettingsBuilder withDuration:] */

void FUN_10b6fef34(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b6fef3c; end: 10b6fef43; -[SCSpectaclesFlightModeSettingsBuilder withDistance:] */

void FUN_10b6fef3c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 10b6fef44; end: 10b6fef4b; -[SCSpectaclesFlightModeSettingsBuilder withCaptureMode:] */

void FUN_10b6fef44(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b6fef4c; end: 10b6fef53; -[SCSpectaclesFlightModeSettingsBuilder withTracking:] */

void FUN_10b6fef4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10b6fef54; end: 10b6fef5b; -[SCSpectaclesFlightModeSettingsBuilder withFlightPath:] */

void FUN_10b6fef54(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10b6fef5c; end: 10b6fefcf; -[SCSpectaclesFlightImuCalibrationServices initWithFlightImuCalibrationRPCManager:] */

undefined1 * FUN_10b6fef5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709f78;
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



/* Entry: 10b6fefd0; end: 10b6fefd7; -[SCSpectaclesFlightImuCalibrationServices flightImuCalibrationRPCManager] */

undefined8 FUN_10b6fefd0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6fefd8; end: 10b6fefe3; -[SCSpectaclesFlightImuCalibrationServices .cxx_destruct] */

void FUN_10b6fefd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6fefe4; end: 10b6ff057; -[SCSpectaclesKioskModeServices initWithKioskModeManager:] */

undefined1 * FUN_10b6fefe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709f80;
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



/* Entry: 10b6ff058; end: 10b6ff05f; -[SCSpectaclesKioskModeServices kioskModeManager] */

undefined8 FUN_10b6ff058(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6ff060; end: 10b6ff06b; -[SCSpectaclesKioskModeServices .cxx_destruct] */

void FUN_10b6ff060(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6ff06c; end: 10b6ff10f; -[SCSpectaclesKnobsServices initWithKnobsRPCManager:knobsLocationManager:] */

undefined1 *
FUN_10b6ff06c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112709f88;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6ff110; end: 10b6ff117; -[SCSpectaclesKnobsServices knobsRPCManager] */

undefined8 FUN_10b6ff110(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6ff118; end: 10b6ff11f; -[SCSpectaclesKnobsServices knobsLocationManager] */

undefined8 FUN_10b6ff118(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6ff120; end: 10b6ff14f; -[SCSpectaclesKnobsServices .cxx_destruct] */

void FUN_10b6ff120(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6ff150; end: 10b6ff25b; -[SCSpectaclesKnob initWithKnobId:knobTitle:knobDescription:input:] */

undefined1 *
FUN_10b6ff150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112709f90;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6ff25c; end: 10b6ff27f; -[SCSpectaclesKnob copyWithZone:] */

undefined8 FUN_10b6ff25c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6ff280; end: 10b6ff30b; -[SCSpectaclesKnob hash] */

undefined8 * FUN_10b6ff280(long param_1,undefined8 param_2,undefined8 *param_3)

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
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
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
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b6ff3bc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b6ff3c8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_10b6ff3c8;
            }
            goto LAB_10b6ff3bc;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b6ff3c8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b6ff30c; end: 10b6ff3e3; -[SCSpectaclesKnob isEqual:] */

long FUN_10b6ff30c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6ff3bc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6ff3c8;
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
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10b6ff3c8;
            }
            goto LAB_10b6ff3bc;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b6ff3c8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6ff3e4; end: 10b6ff3eb; -[SCSpectaclesKnob knobId] */

undefined8 FUN_10b6ff3e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6ff3ec; end: 10b6ff3f3; -[SCSpectaclesKnob knobTitle] */

undefined8 FUN_10b6ff3ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6ff3f4; end: 10b6ff3fb; -[SCSpectaclesKnob knobDescription] */

undefined8 FUN_10b6ff3f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6ff3fc; end: 10b6ff403; -[SCSpectaclesKnob input] */

undefined8 FUN_10b6ff3fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6ff404; end: 10b6ff44b; -[SCSpectaclesKnob .cxx_destruct] */

void FUN_10b6ff404(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6ff44c; end: 10b6ff4e3; +[SCSpectaclesKnobInput multiOptionsWithSelectedOption:options:] */

void FUN_10b6ff44c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c1de8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6ff4e4; end: 10b6ff53f; +[SCSpectaclesKnobInput numericFloatWithFloatValue:] */

void FUN_10b6ff4e4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c1de8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  *(undefined8 *)(puVar2 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6ff540; end: 10b6ff59b; +[SCSpectaclesKnobInput numericIntWithIntValue:] */

void FUN_10b6ff540(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c1de8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined4 *)(puVar2 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6ff59c; end: 10b6ff607; +[SCSpectaclesKnobInput textWithStringValue:] */

void FUN_10b6ff59c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c1de8;
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



/* Entry: 10b6ff608; end: 10b6ff65f; +[SCSpectaclesKnobInput toggleWithIsEnabled:] */

void FUN_10b6ff608(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c1de8;
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



/* Entry: 10b6ff660; end: 10b6ff683; -[SCSpectaclesKnobInput copyWithZone:] */

undefined8 FUN_10b6ff660(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6ff684; end: 10b6ff737; -[SCSpectaclesKnobInput hash] */

void FUN_10b6ff684(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uStack_58 = (ulong)*(byte *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  lStack_48 = (long)*(int *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_40 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_112709f98;
  puStack_90 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6ff738; end: 10b6ff77b; -[SCSpectaclesKnobInput internalInit] */

void FUN_10b6ff738(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112709f98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6ff77c; end: 10b6ff89f; -[SCSpectaclesKnobInput isEqual:] */

long FUN_10b6ff77c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6ff878:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6ff884;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
         (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))) &&
        (*(int *)(param_1 + 0x20) == *(int *)(param_3 + 0x20))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
      dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (((bVar1) &&
          ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x38);
        if (lVar4 != *(long *)(param_3 + 0x38)) {
          func_0x00010c071ae0();
          goto LAB_10b6ff884;
        }
        goto LAB_10b6ff878;
      }
    }
    lVar4 = 0;
  }
LAB_10b6ff884:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b6ff8a0; end: 10b6ff9cb; -[SCSpectaclesKnobInput matchToggle:text:numericInt:numericFloat:multiOptions:] */

void FUN_10b6ff8a0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 != 0) {
      if ((lVar2 == 1) && (param_4 != 0)) {
        (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x18));
      }
      goto LAB_10b6ff994;
    }
    if (param_3 == 0) goto LAB_10b6ff994;
    uVar1 = (uint)*(byte *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar2 = param_3;
  }
  else {
    if (lVar2 != 2) {
      if (lVar2 == 3) {
        if (param_6 != 0) {
          (**(code **)(param_6 + 0x10))(*(undefined8 *)(param_1 + 0x28),param_6);
        }
      }
      else if ((lVar2 == 4) && (param_7 != 0)) {
        (**(code **)(param_7 + 0x10))
                  (param_7,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
      }
      goto LAB_10b6ff994;
    }
    if (param_5 == 0) goto LAB_10b6ff994;
    uVar1 = *(uint *)(param_1 + 0x20);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_10b6ff994:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6ff9cc; end: 10b6ffa07; -[SCSpectaclesKnobInput .cxx_destruct] */

void FUN_10b6ff9cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b6ffa08; end: 10b6ffa6b; +[SCSpectaclesKnobIdentifier hermosaSettingServiceWithKnobId:] */

void FUN_10b6ffa08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c1de0;
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



/* Entry: 10b6ffa6c; end: 10b6ffac7; +[SCSpectaclesKnobIdentifier localWithLocalType:] */

void FUN_10b6ffa6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c1de0;
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



/* Entry: 10b6ffac8; end: 10b6ffaeb; -[SCSpectaclesKnobIdentifier copyWithZone:] */

undefined8 FUN_10b6ffac8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6ffaec; end: 10b6ffb63; -[SCSpectaclesKnobIdentifier hash] */

void FUN_10b6ffaec(long param_1)

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
  puStack_68 = PTR_PTR_112709fa0;
  puStack_70 = (undefined1 *)puVar2;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6ffb64; end: 10b6ffba7; -[SCSpectaclesKnobIdentifier internalInit] */

void FUN_10b6ffb64(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112709fa0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6ffba8; end: 10b6ffc57; -[SCSpectaclesKnobIdentifier isEqual:] */

long FUN_10b6ffba8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6ffc3c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_10b6ffc3c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b6ffc3c;
    }
  }
  lVar3 = 1;
LAB_10b6ffc3c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6ffc58; end: 10b6ffcdb; -[SCSpectaclesKnobIdentifier matchHermosaSettingService:local:] */

void FUN_10b6ffc58(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_10b6ffcc0;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    pcVar3 = *(code **)(param_4 + 0x10);
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10b6ffcc0;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar1 = param_3;
  }
  (*pcVar3)(lVar1,uVar2);
LAB_10b6ffcc0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6ffcdc; end: 10b6ffce7; -[SCSpectaclesKnobIdentifier .cxx_destruct] */

void FUN_10b6ffcdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6ffce8; end: 10b6ffd63; +[SCSpectaclesKnobOption numericFloatWithLabel:floatValue:] */

void FUN_10b6ffce8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c1e00;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x38) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6ffd64; end: 10b6ffdd7; +[SCSpectaclesKnobOption numericIntWithLabel:intValue:] */

void FUN_10b6ffd64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c1e00;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
  *(undefined4 *)(puVar2 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6ffdd8; end: 10b6ffe67; +[SCSpectaclesKnobOption textWithLabel:stringValue:] */

void FUN_10b6ffdd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c1e00;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6ffe68; end: 10b6ffe8b; -[SCSpectaclesKnobOption copyWithZone:] */

undefined8 FUN_10b6ffe68(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6ffe8c; end: 10b6fff43; -[SCSpectaclesKnobOption hash] */

void FUN_10b6ffe8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  lStack_40 = (long)*(int *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar4 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_30 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_38 = uVar1;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_112709fa8;
  puStack_90 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6fff44; end: 10b6fff87; -[SCSpectaclesKnobOption internalInit] */

void FUN_10b6fff44(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112709fa8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6fff88; end: 10b7000b3; -[SCSpectaclesKnobOption isEqual:] */

long FUN_10b6fff88(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b70008c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b700098;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(int *)(param_1 + 0x28) == *(int *)(param_3 + 0x28))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
      dVar5 = ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x30);
        if (lVar4 != *(long *)(param_3 + 0x30)) {
          func_0x00010c071ae0();
          goto LAB_10b700098;
        }
        goto LAB_10b70008c;
      }
    }
    lVar4 = 0;
  }
LAB_10b700098:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b7000b4; end: 10b700173; -[SCSpectaclesKnobOption matchText:numericInt:numericFloat:] */

void FUN_10b7000b4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))
                (*(undefined8 *)(param_1 + 0x38),param_5,*(undefined8 *)(param_1 + 0x30));
    }
  }
  else if (lVar1 == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
    }
  }
  else if ((lVar1 == 0) && (param_3 != 0)) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b700174; end: 10b7001bb; -[SCSpectaclesKnobOption .cxx_destruct] */

void FUN_10b700174(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7001bc; end: 10b70022f; -[SCSpectaclesLensLaunchServices initWithLensLaunchManager:] */

undefined1 * FUN_10b7001bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709fb0;
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



/* Entry: 10b700230; end: 10b700237; -[SCSpectaclesLensLaunchServices lensLaunchManager] */

undefined8 FUN_10b700230(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b700238; end: 10b700243; -[SCSpectaclesLensLaunchServices .cxx_destruct] */

void FUN_10b700238(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b700244; end: 10b7002b7; -[SCSpectaclesLostModeServices initWithLostModeManager:] */

undefined1 * FUN_10b700244(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709fb8;
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



/* Entry: 10b7002b8; end: 10b7002bf; -[SCSpectaclesLostModeServices lostModeManager] */

undefined8 FUN_10b7002b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7002c0; end: 10b7002cb; -[SCSpectaclesLostModeServices .cxx_destruct] */

void FUN_10b7002c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7002cc; end: 10b70033f; -[SCSpectaclesOTAUpdateServices initWithOtaUpdateManager:] */

undefined1 * FUN_10b7002cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709fc0;
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



/* Entry: 10b700340; end: 10b700347; -[SCSpectaclesOTAUpdateServices otaUpdateManager] */

undefined8 FUN_10b700340(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b700348; end: 10b700353; -[SCSpectaclesOTAUpdateServices .cxx_destruct] */

void FUN_10b700348(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b700354; end: 10b7003db; -[SCSpectaclesOTAUpdateAppState initWithStatus:info:] */

undefined1 *
FUN_10b700354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112709fc8;
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



/* Entry: 10b7003dc; end: 10b7003ff; -[SCSpectaclesOTAUpdateAppState copyWithZone:] */

undefined8 FUN_10b7003dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b700400; end: 10b70045f; -[SCSpectaclesOTAUpdateAppState hash] */

undefined8 * FUN_10b700400(long param_1,undefined8 param_2,undefined8 *param_3)

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
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b7004e4;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[1] != param_3[1])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10b7004e4;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b7004e4;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10b7004e4:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b700460; end: 10b7004ff; -[SCSpectaclesOTAUpdateAppState isEqual:] */

long FUN_10b700460(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7004e4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b7004e4;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b7004e4;
    }
  }
  lVar3 = 1;
LAB_10b7004e4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b700500; end: 10b700507; -[SCSpectaclesOTAUpdateAppState status] */

undefined8 FUN_10b700500(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b700508; end: 10b70050f; -[SCSpectaclesOTAUpdateAppState info] */

undefined8 FUN_10b700508(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b700510; end: 10b70051b; -[SCSpectaclesOTAUpdateAppState .cxx_destruct] */

void FUN_10b700510(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b70051c; end: 10b7005ab; -[SCSpectaclesOTAAutoUpdateEnabledSettings initWithEnabled:error:errorFromUpdateRequest:] */

undefined1 *
FUN_10b70051c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112709fd0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7005ac; end: 10b7005cf; -[SCSpectaclesOTAAutoUpdateEnabledSettings copyWithZone:] */

undefined8 FUN_10b7005ac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7005d0; end: 10b700643; -[SCSpectaclesOTAAutoUpdateEnabledSettings hash] */

ulong * FUN_10b7005d0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_38 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (ulong *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b7006d8;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(char *)((long)puVar2 + 8) != param_3[8] || (*(char *)((long)puVar2 + 9) != param_3[9]))))
    {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10b7006d8;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar4 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b7006d8;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10b7006d8:
  _objc_release(param_3);
  return (ulong *)puVar4;
}



/* Entry: 10b700644; end: 10b7006f3; -[SCSpectaclesOTAAutoUpdateEnabledSettings isEqual:] */

long FUN_10b700644(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7006d8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
        (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
      lVar3 = 0;
      goto LAB_10b7006d8;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b7006d8;
    }
  }
  lVar3 = 1;
LAB_10b7006d8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b7006f4; end: 10b7006fb; -[SCSpectaclesOTAAutoUpdateEnabledSettings enabled] */

undefined1 FUN_10b7006f4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b7006fc; end: 10b700703; -[SCSpectaclesOTAAutoUpdateEnabledSettings error] */

undefined8 FUN_10b7006fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b700704; end: 10b70070b; -[SCSpectaclesOTAAutoUpdateEnabledSettings errorFromUpdateRequest] */

undefined1 FUN_10b700704(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b70070c; end: 10b700717; -[SCSpectaclesOTAAutoUpdateEnabledSettings .cxx_destruct] */

void FUN_10b70070c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b700718; end: 10b70078b; -[SCSpectaclesPhoneMirroringServices initWithPhoneMirroringManager:] */

undefined1 * FUN_10b700718(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709fd8;
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



/* Entry: 10b70078c; end: 10b700793; -[SCSpectaclesPhoneMirroringServices phoneMirroringManager] */

undefined8 FUN_10b70078c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b700794; end: 10b70079f; -[SCSpectaclesPhoneMirroringServices .cxx_destruct] */

void FUN_10b700794(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7007a0; end: 10b700843; -[SCSpectaclesPowerStateServices initWithPowerStateManager:lowPowerModeManager:] */

undefined1 *
FUN_10b7007a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112709fe0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b700844; end: 10b70084b; -[SCSpectaclesPowerStateServices powerStateManager] */

undefined8 FUN_10b700844(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b70084c; end: 10b700853; -[SCSpectaclesPowerStateServices lowPowerModeManager] */

undefined8 FUN_10b70084c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b700854; end: 10b700883; -[SCSpectaclesPowerStateServices .cxx_destruct] */

void FUN_10b700854(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


