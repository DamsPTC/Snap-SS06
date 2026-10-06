/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b6fcf4c; end: 10b6fcf53; -[SCSpectaclesCalibration minorVersion] */

undefined8 FUN_10b6fcf4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6fcf54; end: 10b6fcf5b; -[SCSpectaclesCalibration serialNumber] */

undefined8 FUN_10b6fcf54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6fcf5c; end: 10b6fcf8b; -[SCSpectaclesCalibration .cxx_destruct] */

void FUN_10b6fcf5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6fcf8c; end: 10b6fd063; -[SCSpectaclesGenericAssetMetadata initWithCoder:] */

undefined1 * FUN_10b6fcf8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709ee0;
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
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6fd064; end: 10b6fd127; -[SCSpectaclesGenericAssetMetadata initWithFileIdentifier:fileSize:assetIdentifier:assetType:] */

undefined1 *
FUN_10b6fd064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112709ee0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6fd128; end: 10b6fd1af; -[SCSpectaclesGenericAssetMetadata encodeWithCoder:] */

void FUN_10b6fd128(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f72c98);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f72cb8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f72cd8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ecf3b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6fd1b0; end: 10b6fd1b7; -[SCSpectaclesGenericAssetMetadata fileIdentifier] */

undefined8 FUN_10b6fd1b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6fd1b8; end: 10b6fd1bf; -[SCSpectaclesGenericAssetMetadata fileSize] */

undefined8 FUN_10b6fd1b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6fd1c0; end: 10b6fd1c7; -[SCSpectaclesGenericAssetMetadata assetIdentifier] */

undefined8 FUN_10b6fd1c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6fd1c8; end: 10b6fd1cf; -[SCSpectaclesGenericAssetMetadata assetType] */

undefined8 FUN_10b6fd1c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6fd1d0; end: 10b6fd1ff; -[SCSpectaclesGenericAssetMetadata .cxx_destruct] */

void FUN_10b6fd1d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6fd200; end: 10b6fd203; -[SCSpectaclesDeviceFeatureLauncher exposeScope:] */

void FUN_10b6fd200(void)

{
  return;
}



/* Entry: 10b6fd204; end: 10b6fd207; -[SCSpectaclesDeviceFeatureLauncher removeScopeWithCompletion:] */

void FUN_10b6fd204(void)

{
  return;
}



/* Entry: 10b6fd208; end: 10b6fd20f; -[SCSpectaclesDeviceFeatureLauncher scope] */

undefined8 FUN_10b6fd208(void)

{
  return 0;
}



/* Entry: 10b6fd210; end: 10b6fd283; -[SCSpectaclesAudioSettingsServices initWithAudioSettingsManager:] */

undefined1 * FUN_10b6fd210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709ee8;
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



/* Entry: 10b6fd284; end: 10b6fd28b; -[SCSpectaclesAudioSettingsServices audioSettingsManager] */

undefined8 FUN_10b6fd284(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6fd28c; end: 10b6fd297; -[SCSpectaclesAudioSettingsServices .cxx_destruct] */

void FUN_10b6fd28c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6fd298; end: 10b6fd30b; -[SCSpectaclesBrieServices initWithBrieRPCManager:] */

undefined1 * FUN_10b6fd298(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709ef0;
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



/* Entry: 10b6fd30c; end: 10b6fd313; -[SCSpectaclesBrieServices brieRPCManager] */

undefined8 FUN_10b6fd30c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6fd314; end: 10b6fd31f; -[SCSpectaclesBrieServices .cxx_destruct] */

void FUN_10b6fd314(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6fd320; end: 10b6fd3d3; -[SCSpectaclesBrieMedia initWithContentURI:params:isDegraded:] */

undefined1 *
FUN_10b6fd320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112709ef8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6fd3d4; end: 10b6fd3f7; -[SCSpectaclesBrieMedia copyWithZone:] */

undefined8 FUN_10b6fd3d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6fd3f8; end: 10b6fd46f; -[SCSpectaclesBrieMedia hash] */

undefined8 * FUN_10b6fd3f8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b6fd500:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b6fd50c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b6fd50c;
        }
        goto LAB_10b6fd500;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b6fd50c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b6fd470; end: 10b6fd527; -[SCSpectaclesBrieMedia isEqual:] */

long FUN_10b6fd470(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6fd500:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6fd50c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b6fd50c;
        }
        goto LAB_10b6fd500;
      }
    }
    lVar3 = 0;
  }
LAB_10b6fd50c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6fd528; end: 10b6fd52f; -[SCSpectaclesBrieMedia contentURI] */

undefined8 FUN_10b6fd528(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6fd530; end: 10b6fd537; -[SCSpectaclesBrieMedia params] */

undefined8 FUN_10b6fd530(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6fd538; end: 10b6fd53f; -[SCSpectaclesBrieMedia isDegraded] */

undefined1 FUN_10b6fd538(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b6fd540; end: 10b6fd56f; -[SCSpectaclesBrieMedia .cxx_destruct] */

void FUN_10b6fd540(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6fd570; end: 10b6fd5e3; -[SCSpectaclesBrightnessSettingsServices initWithBrightnessSettingsManager:] */

undefined1 * FUN_10b6fd570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709f00;
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



/* Entry: 10b6fd5e4; end: 10b6fd5eb; -[SCSpectaclesBrightnessSettingsServices brightnessSettingsManager] */

undefined8 FUN_10b6fd5e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6fd5ec; end: 10b6fd5f7; -[SCSpectaclesBrightnessSettingsServices .cxx_destruct] */

void FUN_10b6fd5ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6fd5f8; end: 10b6fd6a3; -[SCSpectaclesBrightnessLevelSettings initWithBrightnessLevel:error:] */

undefined1 *
FUN_10b6fd5f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112709f08;
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



/* Entry: 10b6fd6a4; end: 10b6fd6c7; -[SCSpectaclesBrightnessLevelSettings copyWithZone:] */

undefined8 FUN_10b6fd6a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6fd6c8; end: 10b6fd73b; -[SCSpectaclesBrightnessLevelSettings hash] */

undefined8 * FUN_10b6fd6c8(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b6fd7bc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b6fd7c8;
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
          goto LAB_10b6fd7c8;
        }
        goto LAB_10b6fd7bc;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b6fd7c8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b6fd73c; end: 10b6fd7e3; -[SCSpectaclesBrightnessLevelSettings isEqual:] */

long FUN_10b6fd73c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6fd7bc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6fd7c8;
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
          goto LAB_10b6fd7c8;
        }
        goto LAB_10b6fd7bc;
      }
    }
    lVar3 = 0;
  }
LAB_10b6fd7c8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6fd7e4; end: 10b6fd7eb; -[SCSpectaclesBrightnessLevelSettings brightnessLevel] */

undefined8 FUN_10b6fd7e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6fd7ec; end: 10b6fd7f3; -[SCSpectaclesBrightnessLevelSettings error] */

undefined8 FUN_10b6fd7ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6fd7f4; end: 10b6fd823; -[SCSpectaclesBrightnessLevelSettings .cxx_destruct] */

void FUN_10b6fd7f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6fd824; end: 10b6fd8ab; -[SCSpectaclesAutoBrightnessEnabledSettings initWithEnabled:error:] */

undefined1 *
FUN_10b6fd824(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112709f10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6fd8ac; end: 10b6fd8cf; -[SCSpectaclesAutoBrightnessEnabledSettings copyWithZone:] */

undefined8 FUN_10b6fd8ac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6fd8d0; end: 10b6fd933; -[SCSpectaclesAutoBrightnessEnabledSettings hash] */

ulong * FUN_10b6fd8d0(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
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
    puVar4 = (ulong *)0x0;
    if ((puVar2 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10b6fd9b8;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || ((char)puVar2[1] != (char)param_3[1])) {
      puVar4 = (ulong *)0x0;
      goto LAB_10b6fd9b8;
    }
    puVar4 = (ulong *)puVar2[2];
    if (puVar4 != (ulong *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b6fd9b8;
    }
  }
  puVar4 = (ulong *)0x1;
LAB_10b6fd9b8:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b6fd934; end: 10b6fd9d3; -[SCSpectaclesAutoBrightnessEnabledSettings isEqual:] */

long FUN_10b6fd934(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6fd9b8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b6fd9b8;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b6fd9b8;
    }
  }
  lVar3 = 1;
LAB_10b6fd9b8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6fd9d4; end: 10b6fd9db; -[SCSpectaclesAutoBrightnessEnabledSettings enabled] */

undefined1 FUN_10b6fd9d4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b6fd9dc; end: 10b6fd9e3; -[SCSpectaclesAutoBrightnessEnabledSettings error] */

undefined8 FUN_10b6fd9dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6fd9e4; end: 10b6fd9ef; -[SCSpectaclesAutoBrightnessEnabledSettings .cxx_destruct] */

void FUN_10b6fd9e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6fd9f0; end: 10b6fda8b; -[SCSpectaclesContextNotificationScope initWithUiContainer:delegate:] */

undefined1 *
FUN_10b6fd9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112709f18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6fda8c; end: 10b6fda93; -[SCSpectaclesContextNotificationScope uiContainer] */

undefined8 FUN_10b6fda8c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6fda94; end: 10b6fdaab; -[SCSpectaclesContextNotificationScope delegate] */

void FUN_10b6fda94(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6fdaac; end: 10b6fdad7; -[SCSpectaclesContextNotificationScope .cxx_destruct] */

void FUN_10b6fdaac(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6fdad8; end: 10b6fdb4b; -[SCSpectaclesDeveloperModeServices initWithDeveloperModeManager:] */

undefined1 * FUN_10b6fdad8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709f20;
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



/* Entry: 10b6fdb4c; end: 10b6fdb53; -[SCSpectaclesDeveloperModeServices developerModeManager] */

undefined8 FUN_10b6fdb4c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6fdb54; end: 10b6fdb5f; -[SCSpectaclesDeveloperModeServices .cxx_destruct] */

void FUN_10b6fdb54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6fdb60; end: 10b6fdbd3; -[SCSpectaclesDeviceInternalSettingsServices initWithDeviceInternalSettingsManager:] */

undefined1 * FUN_10b6fdb60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709f28;
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



/* Entry: 10b6fdbd4; end: 10b6fdbdb; -[SCSpectaclesDeviceInternalSettingsServices deviceInternalSettingsManager] */

undefined8 FUN_10b6fdbd4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6fdbdc; end: 10b6fdbe7; -[SCSpectaclesDeviceInternalSettingsServices .cxx_destruct] */

void FUN_10b6fdbdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6fdbe8; end: 10b6fdc5b; -[SCSpectaclesDeviceSecurityServices initWithDeviceSecurityManager:] */

undefined1 * FUN_10b6fdbe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709f30;
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



/* Entry: 10b6fdc5c; end: 10b6fdc63; -[SCSpectaclesDeviceSecurityServices deviceSecurityManager] */

undefined8 FUN_10b6fdc5c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6fdc64; end: 10b6fdc6f; -[SCSpectaclesDeviceSecurityServices .cxx_destruct] */

void FUN_10b6fdc64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6fdc70; end: 10b6fdce3; +[SCSpectaclesUserDeviceSecurityDataResult errorWithError:errorType:] */

void FUN_10b6fdc70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c1980;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6fdce4; end: 10b6fdd47; +[SCSpectaclesUserDeviceSecurityDataResult resultWithUserDeviceSecurityData:] */

void FUN_10b6fdce4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c1980;
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



/* Entry: 10b6fdd48; end: 10b6fdd6b; -[SCSpectaclesUserDeviceSecurityDataResult copyWithZone:] */

undefined8 FUN_10b6fdd48(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6fdd6c; end: 10b6fdde7; -[SCSpectaclesUserDeviceSecurityDataResult hash] */

void FUN_10b6fdd6c(long param_1)

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
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = &uStack_48;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_112709f38;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6fdde8; end: 10b6fde2b; -[SCSpectaclesUserDeviceSecurityDataResult internalInit] */

void FUN_10b6fdde8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112709f38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6fde2c; end: 10b6fdef3; -[SCSpectaclesUserDeviceSecurityDataResult isEqual:] */

long FUN_10b6fde2c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6fdecc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6fded8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b6fded8;
        }
        goto LAB_10b6fdecc;
      }
    }
    lVar3 = 0;
  }
LAB_10b6fded8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6fdef4; end: 10b6fdf7b; -[SCSpectaclesUserDeviceSecurityDataResult matchResult:error:] */

void FUN_10b6fdef4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6fdf7c; end: 10b6fdfab; -[SCSpectaclesUserDeviceSecurityDataResult .cxx_destruct] */

void FUN_10b6fdf7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6fdfac; end: 10b6fe017; +[SCSpectaclesDeviceSecuritySetUserDevicePasswordDataResult errorWithError:] */

void FUN_10b6fdfac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c1988;
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



/* Entry: 10b6fe018; end: 10b6fe07b; +[SCSpectaclesDeviceSecuritySetUserDevicePasswordDataResult resultWithSetUserDevicePasswordData:] */

void FUN_10b6fe018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c1988;
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



/* Entry: 10b6fe07c; end: 10b6fe09f; -[SCSpectaclesDeviceSecuritySetUserDevicePasswordDataResult copyWithZone:] */

undefined8 FUN_10b6fe07c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6fe0a0; end: 10b6fe117; -[SCSpectaclesDeviceSecuritySetUserDevicePasswordDataResult hash] */

void FUN_10b6fe0a0(long param_1)

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
  puStack_68 = PTR_PTR_112709f40;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6fe118; end: 10b6fe15b; -[SCSpectaclesDeviceSecuritySetUserDevicePasswordDataResult internalInit] */

void FUN_10b6fe118(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112709f40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6fe15c; end: 10b6fe213; -[SCSpectaclesDeviceSecuritySetUserDevicePasswordDataResult isEqual:] */

long FUN_10b6fe15c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6fe1ec:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6fe1f8;
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
          goto LAB_10b6fe1f8;
        }
        goto LAB_10b6fe1ec;
      }
    }
    lVar3 = 0;
  }
LAB_10b6fe1f8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6fe214; end: 10b6fe297; -[SCSpectaclesDeviceSecuritySetUserDevicePasswordDataResult matchResult:error:] */

void FUN_10b6fe214(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_10b6fe27c;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10b6fe27c;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10b6fe27c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6fe298; end: 10b6fe2c7; -[SCSpectaclesDeviceSecuritySetUserDevicePasswordDataResult .cxx_destruct] */

void FUN_10b6fe298(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6fe2c8; end: 10b6fe333; +[SCSpectaclesDeviceSecurityVerifyPasscodeResult errorWithError:] */

void FUN_10b6fe2c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c1990;
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



/* Entry: 10b6fe334; end: 10b6fe38b; +[SCSpectaclesDeviceSecurityVerifyPasscodeResult resultWithVerified:] */

void FUN_10b6fe334(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c1990;
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



/* Entry: 10b6fe38c; end: 10b6fe3af; -[SCSpectaclesDeviceSecurityVerifyPasscodeResult copyWithZone:] */

undefined8 FUN_10b6fe38c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6fe3b0; end: 10b6fe417; -[SCSpectaclesDeviceSecurityVerifyPasscodeResult hash] */

void FUN_10b6fe3b0(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_20 = uVar1;
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_112709f48;
  puStack_60 = (undefined1 *)puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6fe418; end: 10b6fe45b; -[SCSpectaclesDeviceSecurityVerifyPasscodeResult internalInit] */

void FUN_10b6fe418(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112709f48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6fe45c; end: 10b6fe50b; -[SCSpectaclesDeviceSecurityVerifyPasscodeResult isEqual:] */

long FUN_10b6fe45c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6fe4f0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(char *)(param_1 + 0x10) != *(char *)(param_3 + 0x10))))) {
      lVar3 = 0;
      goto LAB_10b6fe4f0;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_10b6fe4f0;
    }
  }
  lVar3 = 1;
LAB_10b6fe4f0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6fe50c; end: 10b6fe593; -[SCSpectaclesDeviceSecurityVerifyPasscodeResult matchResult:error:] */

void FUN_10b6fe50c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x18));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined1 *)(param_1 + 0x10));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6fe594; end: 10b6fe59f; -[SCSpectaclesDeviceSecurityVerifyPasscodeResult .cxx_destruct] */

void FUN_10b6fe594(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b6fe5a0; end: 10b6fe66b; -[SCSpectaclesDeviceSettingsServices initWithDeviceActionManager:quickPreviewManager:locationSettingsManager:] */

undefined1 *
FUN_10b6fe5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112709f50;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6fe66c; end: 10b6fe673; -[SCSpectaclesDeviceSettingsServices deviceActionManager] */

undefined8 FUN_10b6fe66c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6fe674; end: 10b6fe67b; -[SCSpectaclesDeviceSettingsServices quickPreviewManager] */

undefined8 FUN_10b6fe674(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6fe67c; end: 10b6fe683; -[SCSpectaclesDeviceSettingsServices locationSettingsManager] */

undefined8 FUN_10b6fe67c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6fe684; end: 10b6fe6bf; -[SCSpectaclesDeviceSettingsServices .cxx_destruct] */

void FUN_10b6fe684(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6fe6c0; end: 10b6fe733; -[SCSpectaclesFlightErrorServices initWithFlightErrorReporter:] */

undefined1 * FUN_10b6fe6c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709f58;
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



/* Entry: 10b6fe734; end: 10b6fe73b; -[SCSpectaclesFlightErrorServices flightErrorReporter] */

undefined8 FUN_10b6fe734(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6fe73c; end: 10b6fe747; -[SCSpectaclesFlightErrorServices .cxx_destruct] */

void FUN_10b6fe73c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6fe748; end: 10b6fe7bb; -[SCSpectaclesFlightServices initWithFlightManager:] */

undefined1 * FUN_10b6fe748(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709f60;
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



/* Entry: 10b6fe7bc; end: 10b6fe7c3; -[SCSpectaclesFlightServices flightManager] */

undefined8 FUN_10b6fe7bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6fe7c4; end: 10b6fe7cf; -[SCSpectaclesFlightServices .cxx_destruct] */

void FUN_10b6fe7c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6fe7d0; end: 10b6fe833; -[SCSpectaclesFlightRemainInfo initWithFlightMode:isStandbyMode:remainingFlightsTime:estimatedFlightTime:] */

void FUN_10b6fe7d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112709f68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
    *(undefined4 *)((long)puVar1 + 0x10) = param_6;
  }
  return;
}



/* Entry: 10b6fe834; end: 10b6fe857; -[SCSpectaclesFlightRemainInfo copyWithZone:] */

undefined8 FUN_10b6fe834(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6fe858; end: 10b6fe8bf; -[SCSpectaclesFlightRemainInfo hash] */

undefined8 * FUN_10b6fe858(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_28 = *(ulong *)(param_1 + 0xc) & 0xffffffff;
  uStack_20 = *(ulong *)(param_1 + 0xc) >> 0x20;
  puVar1 = &uStack_38;
  func_0x000107c3191c(puVar1,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar3 = (undefined8 *)0x1;
  }
  else {
    puVar3 = (undefined8 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
      puVar3 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) ||
         (((puVar1[3] != param_3[3] || (*(char *)(puVar1 + 1) != *(char *)(param_3 + 1))) ||
          (*(int *)((long)puVar1 + 0xc) != *(int *)((long)param_3 + 0xc))))) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        puVar3 = (undefined8 *)(ulong)(*(int *)(puVar1 + 2) == *(int *)(param_3 + 2));
      }
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10b6fe8c0; end: 10b6fe977; -[SCSpectaclesFlightRemainInfo isEqual:] */

bool FUN_10b6fe8c0(ulong param_1,undefined8 param_2,ulong param_3)

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
         (((*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18) ||
           (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) ||
          (*(int *)(param_1 + 0xc) != *(int *)(param_3 + 0xc))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(int *)(param_1 + 0x10) == *(int *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b6fe978; end: 10b6fe97f; -[SCSpectaclesFlightRemainInfo flightMode] */

undefined8 FUN_10b6fe978(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6fe980; end: 10b6fe987; -[SCSpectaclesFlightRemainInfo isStandbyMode] */

undefined1 FUN_10b6fe980(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b6fe988; end: 10b6fe98f; -[SCSpectaclesFlightRemainInfo remainingFlightsTime] */

undefined4 FUN_10b6fe988(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


