/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b700884; end: 10b7008cb; -[SCSpectaclesPowerState initWithQcomState:] */

void FUN_10b700884(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112709fe8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b7008cc; end: 10b7008ef; -[SCSpectaclesPowerState copyWithZone:] */

undefined8 FUN_10b7008cc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7008f0; end: 10b7008f7; -[SCSpectaclesPowerState hash] */

undefined8 FUN_10b7008f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7008f8; end: 10b70097f; -[SCSpectaclesPowerState isEqual:] */

bool FUN_10b7008f8(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 10b700980; end: 10b700987; -[SCSpectaclesPowerState qcomState] */

undefined8 FUN_10b700980(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b700988; end: 10b7009cf; -[SCSpectaclesBootComplete initWithEvent:] */

void FUN_10b700988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112709ff0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b7009d0; end: 10b7009f3; -[SCSpectaclesBootComplete copyWithZone:] */

undefined8 FUN_10b7009d0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7009f4; end: 10b7009fb; -[SCSpectaclesBootComplete hash] */

undefined8 FUN_10b7009f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7009fc; end: 10b700a83; -[SCSpectaclesBootComplete isEqual:] */

bool FUN_10b7009fc(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 10b700a84; end: 10b700a8b; -[SCSpectaclesBootComplete event] */

undefined8 FUN_10b700a84(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b700a8c; end: 10b700aff; -[SCSpectaclesDeviceReportIssueServices initWithDeviceReportIssueManager:] */

undefined1 * FUN_10b700a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709ff8;
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



/* Entry: 10b700b00; end: 10b700b07; -[SCSpectaclesDeviceReportIssueServices deviceReportIssueManager] */

undefined8 FUN_10b700b00(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b700b08; end: 10b700b13; -[SCSpectaclesDeviceReportIssueServices .cxx_destruct] */

void FUN_10b700b08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b700b14; end: 10b700b87; -[SCSpectaclesTomaServices initWithTomaRPCManager:] */

undefined1 * FUN_10b700b14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a000;
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



/* Entry: 10b700b88; end: 10b700b8f; -[SCSpectaclesTomaServices tomaRPCManager] */

undefined8 FUN_10b700b88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b700b90; end: 10b700b9b; -[SCSpectaclesTomaServices .cxx_destruct] */

void FUN_10b700b90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b700b9c; end: 10b700bf7; -[SCSpectaclesTomaPointer initWithPointerId:x:y:] */

void FUN_10b700b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270a008;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  return;
}



/* Entry: 10b700bf8; end: 10b700c1b; -[SCSpectaclesTomaPointer copyWithZone:] */

undefined8 FUN_10b700bf8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b700c1c; end: 10b700c87; -[SCSpectaclesTomaPointer hash] */

undefined8 * FUN_10b700c1c(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
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



/* Entry: 10b700c88; end: 10b700d2f; -[SCSpectaclesTomaPointer isEqual:] */

bool FUN_10b700c88(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 10b700d30; end: 10b700d37; -[SCSpectaclesTomaPointer pointerId] */

undefined8 FUN_10b700d30(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b700d38; end: 10b700d3f; -[SCSpectaclesTomaPointer x] */

undefined8 FUN_10b700d38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b700d40; end: 10b700d47; -[SCSpectaclesTomaPointer y] */

undefined8 FUN_10b700d40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b700d48; end: 10b700dcf; -[SCSpectaclesTomaEvent initWithPointers:actionType:] */

undefined1 *
FUN_10b700d48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270a010;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b700dd0; end: 10b700df3; -[SCSpectaclesTomaEvent copyWithZone:] */

undefined8 FUN_10b700dd0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b700df4; end: 10b700e5f; -[SCSpectaclesTomaEvent hash] */

undefined8 * FUN_10b700df4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b700ee4;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10b700ee4;
    }
    puVar4 = (undefined8 *)puVar2[1];
    if (puVar4 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_10b700ee4;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10b700ee4:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b700e60; end: 10b700eff; -[SCSpectaclesTomaEvent isEqual:] */

long FUN_10b700e60(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b700ee4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_10b700ee4;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b700ee4;
    }
  }
  lVar3 = 1;
LAB_10b700ee4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b700f00; end: 10b700f07; -[SCSpectaclesTomaEvent pointers] */

undefined8 FUN_10b700f00(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b700f08; end: 10b700f0f; -[SCSpectaclesTomaEvent actionType] */

undefined8 FUN_10b700f08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b700f10; end: 10b700f1b; -[SCSpectaclesTomaEvent .cxx_destruct] */

void FUN_10b700f10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b700f1c; end: 10b700f8f; -[SCSpectaclesWiFiSettingsServices initWithWiFiSettingsManager:] */

undefined1 * FUN_10b700f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a018;
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



/* Entry: 10b700f90; end: 10b700f97; -[SCSpectaclesWiFiSettingsServices wifiSettingsManager] */

undefined8 FUN_10b700f90(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b700f98; end: 10b700fa3; -[SCSpectaclesWiFiSettingsServices .cxx_destruct] */

void FUN_10b700f98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b700fa4; end: 10b70101b; -[SCSpectaclesConnectingWiFiSSID initWithCurrentlyConnectingSSID:] */

undefined1 * FUN_10b700fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a020;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b70101c; end: 10b70103f; -[SCSpectaclesConnectingWiFiSSID copyWithZone:] */

undefined8 FUN_10b70101c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b701040; end: 10b701047; -[SCSpectaclesConnectingWiFiSSID hash] */

void FUN_10b701040(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b701048; end: 10b7010d7; -[SCSpectaclesConnectingWiFiSSID isEqual:] */

long FUN_10b701048(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7010bc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b7010bc;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b7010bc;
    }
  }
  lVar3 = 1;
LAB_10b7010bc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b7010d8; end: 10b7010df; -[SCSpectaclesConnectingWiFiSSID currentlyConnectingSSID] */

undefined8 FUN_10b7010d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7010e0; end: 10b7010eb; -[SCSpectaclesConnectingWiFiSSID .cxx_destruct] */

void FUN_10b7010e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7010ec; end: 10b70118b; +[SCSpectaclesOTAUpdateInfo availabilityWithCurrentVersion:availableVersion:isRequiredUpdate:] */

void FUN_10b7010ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c1a90;
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
  puVar2[0x20] = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b70118c; end: 10b7011e7; +[SCSpectaclesOTAUpdateInfo cancelledScheduledUpdateStatusWithScheduledUpdateWasCancelledSuccessfully:] */

void FUN_10b70118c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c1a90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  puVar2[0x41] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b7011e8; end: 10b701253; +[SCSpectaclesOTAUpdateInfo checksumWithChecksum:] */

void FUN_10b7011e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c1a90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b701254; end: 10b7012af; +[SCSpectaclesOTAUpdateInfo errorWithErrorType:] */

void FUN_10b701254(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c1a90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b7012b0; end: 10b70130b; +[SCSpectaclesOTAUpdateInfo progressWithProgress:] */

void FUN_10b7012b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c1a90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b70130c; end: 10b701367; +[SCSpectaclesOTAUpdateInfo scheduledUpdateStatusWithFirmwareUpdateWasScheduledSuccessfully:] */

void FUN_10b70130c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c1a90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  puVar2[0x40] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b701368; end: 10b70138b; -[SCSpectaclesOTAUpdateInfo copyWithZone:] */

undefined8 FUN_10b701368(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b70138c; end: 10b70142f; -[SCSpectaclesOTAUpdateInfo hash] */

void FUN_10b70138c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  lStack_50 = -lVar1;
  if (-1 < lVar1) {
    lStack_50 = lVar1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 0x40);
  uStack_30 = (ulong)*(byte *)(param_1 + 0x41);
  uStack_40 = uVar3;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_98 = PTR_PTR_11270a028;
  puStack_a0 = (undefined1 *)puVar4;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b701430; end: 10b701473; -[SCSpectaclesOTAUpdateInfo internalInit] */

void FUN_10b701430(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270a028;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b701474; end: 10b701593; -[SCSpectaclesOTAUpdateInfo isEqual:] */

long FUN_10b701474(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b70156c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b701578;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
           (*(char *)(param_1 + 0x20) == *(char *)(param_3 + 0x20))) &&
          (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
         ((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
          (*(char *)(param_1 + 0x40) == *(char *)(param_3 + 0x40))))))) &&
       (*(char *)(param_1 + 0x41) == *(char *)(param_3 + 0x41))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x38);
          if (lVar3 != *(long *)(param_3 + 0x38)) {
            func_0x00010c071ae0();
            goto LAB_10b701578;
          }
          goto LAB_10b70156c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b701578:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b701594; end: 10b7016f7; -[SCSpectaclesOTAUpdateInfo matchAvailability:progress:error:checksum:scheduledUpdateStatus:cancelledScheduledUpdateStatus:] */

void FUN_10b701594(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 < 3) {
    if (lVar3 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))
                  (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                   *(undefined1 *)(param_1 + 0x20));
      }
      goto LAB_10b7016b4;
    }
    if (lVar3 == 1) {
      if (param_4 == 0) goto LAB_10b7016b4;
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      pcVar4 = *(code **)(param_4 + 0x10);
      lVar3 = param_4;
    }
    else {
      if ((lVar3 != 2) || (param_5 == 0)) goto LAB_10b7016b4;
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      pcVar4 = *(code **)(param_5 + 0x10);
      lVar3 = param_5;
    }
  }
  else {
    if (lVar3 != 3) {
      if (lVar3 == 4) {
        if (param_7 == 0) goto LAB_10b7016b4;
        uVar1 = *(undefined1 *)(param_1 + 0x40);
        pcVar4 = *(code **)(param_7 + 0x10);
        lVar3 = param_7;
      }
      else {
        if ((lVar3 != 5) || (param_8 == 0)) goto LAB_10b7016b4;
        uVar1 = *(undefined1 *)(param_1 + 0x41);
        pcVar4 = *(code **)(param_8 + 0x10);
        lVar3 = param_8;
      }
      (*pcVar4)(lVar3,uVar1);
      goto LAB_10b7016b4;
    }
    if (param_6 == 0) goto LAB_10b7016b4;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    pcVar4 = *(code **)(param_6 + 0x10);
    lVar3 = param_6;
  }
  (*pcVar4)(lVar3,uVar2);
LAB_10b7016b4:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7016f8; end: 10b701733; -[SCSpectaclesOTAUpdateInfo .cxx_destruct] */

void FUN_10b7016f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b701734; end: 10b7017bb; -[SCSpectaclesOTAUpdateEvent initWithStatus:info:] */

undefined1 *
FUN_10b701734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270a030;
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



/* Entry: 10b7017bc; end: 10b7017df; -[SCSpectaclesOTAUpdateEvent copyWithZone:] */

undefined8 FUN_10b7017bc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7017e0; end: 10b7017e7; -[SCSpectaclesOTAUpdateEvent status] */

undefined8 FUN_10b7017e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7017e8; end: 10b7017ef; -[SCSpectaclesOTAUpdateEvent info] */

undefined8 FUN_10b7017e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7017f0; end: 10b7017fb; -[SCSpectaclesOTAUpdateEvent .cxx_destruct] */

void FUN_10b7017f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7017fc; end: 10b701903; -[SCSpectaclesWiFiNetwork initWithSsid:currentlyConnected:wifiLevel:protectedNetwork:ipAddress:dnsAddress:passwordSaved:] */

undefined1 *
FUN_10b7017fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_11270a038;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b701904; end: 10b701927; -[SCSpectaclesWiFiNetwork copyWithZone:] */

undefined8 FUN_10b701904(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b701928; end: 10b70192f; -[SCSpectaclesWiFiNetwork ssid] */

undefined8 FUN_10b701928(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b701930; end: 10b701937; -[SCSpectaclesWiFiNetwork currentlyConnected] */

undefined1 FUN_10b701930(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b701938; end: 10b70193f; -[SCSpectaclesWiFiNetwork wifiLevel] */

undefined8 FUN_10b701938(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b701940; end: 10b701947; -[SCSpectaclesWiFiNetwork protectedNetwork] */

undefined1 FUN_10b701940(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b701948; end: 10b70194f; -[SCSpectaclesWiFiNetwork ipAddress] */

undefined8 FUN_10b701948(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b701950; end: 10b701957; -[SCSpectaclesWiFiNetwork dnsAddress] */

undefined8 FUN_10b701950(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b701958; end: 10b70195f; -[SCSpectaclesWiFiNetwork passwordSaved] */

undefined1 FUN_10b701958(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b701960; end: 10b70199b; -[SCSpectaclesWiFiNetwork .cxx_destruct] */

void FUN_10b701960(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b70199c; end: 10b701a13; -[SCSpectaclesWiFiNetworkList initWithNetworks:] */

undefined1 * FUN_10b70199c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a040;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b701a14; end: 10b701a1b; -[SCSpectaclesWiFiNetworkList networks] */

undefined8 FUN_10b701a14(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b701a1c; end: 10b701a27; -[SCSpectaclesWiFiNetworkList .cxx_destruct] */

void FUN_10b701a1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b701a28; end: 10b701aaf; -[SCSpectaclesWiFiStatus initWithWifiEnabled:connectedNetwork:] */

undefined1 *
FUN_10b701a28(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270a048;
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



/* Entry: 10b701ab0; end: 10b701ad3; -[SCSpectaclesWiFiStatus copyWithZone:] */

undefined8 FUN_10b701ab0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b701ad4; end: 10b701adb; -[SCSpectaclesWiFiStatus wifiEnabled] */

undefined1 FUN_10b701ad4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b701adc; end: 10b701ae3; -[SCSpectaclesWiFiStatus connectedNetwork] */

undefined8 FUN_10b701adc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b701ae4; end: 10b701aef; -[SCSpectaclesWiFiStatus .cxx_destruct] */

void FUN_10b701ae4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b701af0; end: 10b701b4b; -[SCSpectaclesLocationRequest initWithPermissionMode:desiredLocationPrecisionM:maxAcquisitionTimeMs:] */

void FUN_10b701af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270a050;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  return;
}



/* Entry: 10b701b4c; end: 10b701b6f; -[SCSpectaclesLocationRequest copyWithZone:] */

undefined8 FUN_10b701b4c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b701b70; end: 10b701b77; -[SCSpectaclesLocationRequest permissionMode] */

undefined8 FUN_10b701b70(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b701b78; end: 10b701b7f; -[SCSpectaclesLocationRequest desiredLocationPrecisionM] */

undefined8 FUN_10b701b78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b701b80; end: 10b701b87; -[SCSpectaclesLocationRequest maxAcquisitionTimeMs] */

undefined8 FUN_10b701b80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b701b88; end: 10b701c33; -[SCSpectaclesAvailableLensesGetResponse initWithAvailableLensesArray:nextPageToken:] */

undefined1 *
FUN_10b701b88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270a058;
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



/* Entry: 10b701c34; end: 10b701c57; -[SCSpectaclesAvailableLensesGetResponse copyWithZone:] */

undefined8 FUN_10b701c34(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b701c58; end: 10b701ccb; -[SCSpectaclesAvailableLensesGetResponse hash] */

undefined8 * FUN_10b701c58(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b701d4c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b701d58;
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
          goto LAB_10b701d58;
        }
        goto LAB_10b701d4c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b701d58:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b701ccc; end: 10b701d73; -[SCSpectaclesAvailableLensesGetResponse isEqual:] */

long FUN_10b701ccc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b701d4c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b701d58;
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
          goto LAB_10b701d58;
        }
        goto LAB_10b701d4c;
      }
    }
    lVar3 = 0;
  }
LAB_10b701d58:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b701d74; end: 10b701d7b; -[SCSpectaclesAvailableLensesGetResponse availableLensesArray] */

undefined8 FUN_10b701d74(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b701d7c; end: 10b701d83; -[SCSpectaclesAvailableLensesGetResponse nextPageToken] */

undefined8 FUN_10b701d7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b701d84; end: 10b701db3; -[SCSpectaclesAvailableLensesGetResponse .cxx_destruct] */

void FUN_10b701d84(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b701db4; end: 10b701ebf; -[SCSpectaclesAvailableLens initWithLensId:lensName:iconUri:authorName:] */

undefined1 *
FUN_10b701db4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_11270a060;
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



/* Entry: 10b701ec0; end: 10b701ee3; -[SCSpectaclesAvailableLens copyWithZone:] */

undefined8 FUN_10b701ec0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b701ee4; end: 10b701f6f; -[SCSpectaclesAvailableLens hash] */

undefined8 * FUN_10b701ee4(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b702020:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b70202c;
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
              goto LAB_10b70202c;
            }
            goto LAB_10b702020;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b70202c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b701f70; end: 10b702047; -[SCSpectaclesAvailableLens isEqual:] */

long FUN_10b701f70(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b702020:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b70202c;
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
              goto LAB_10b70202c;
            }
            goto LAB_10b702020;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b70202c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b702048; end: 10b70204f; -[SCSpectaclesAvailableLens lensId] */

undefined8 FUN_10b702048(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b702050; end: 10b702057; -[SCSpectaclesAvailableLens lensName] */

undefined8 FUN_10b702050(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b702058; end: 10b70205f; -[SCSpectaclesAvailableLens iconUri] */

undefined8 FUN_10b702058(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b702060; end: 10b702067; -[SCSpectaclesAvailableLens authorName] */

undefined8 FUN_10b702060(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b702068; end: 10b7020af; -[SCSpectaclesAvailableLens .cxx_destruct] */

void FUN_10b702068(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7020b0; end: 10b7021cf; -[SCSpectaclesUserDeviceSecurityData initWithRequirePasscode:lockOutEvent:lockOutTime:phoneProximity:userIsBlocked:attemptsLeftBeforeBlocked:timeUntilUnblocked:isDirectBoot:isDeviceUnlocked:] */

undefined1 *
FUN_10b7020b0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_11270a068;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined1 *)((long)puVar1 + 10) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xb) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + 0xc) = param_10._1_1_;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7021d0; end: 10b7021f3; -[SCSpectaclesUserDeviceSecurityData copyWithZone:] */

undefined8 FUN_10b7021d0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7021f4; end: 10b702293; -[SCSpectaclesUserDeviceSecurityData hash] */

ulong * FUN_10b7021f4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = (ulong)*(byte *)(param_1 + 8);
  uStack_68 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + 9);
  uStack_50 = (ulong)*(byte *)(param_1 + 10);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 0xb);
  uStack_30 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_40 = uVar2;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
LAB_10b70238c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b702398;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        ((((*(char *)((long)puVar3 + 8) == param_3[8] &&
           (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10))) &&
          (*(char *)((long)puVar3 + 9) == param_3[9])) &&
         ((*(char *)((long)puVar3 + 10) == param_3[10] &&
          (*(char *)((long)puVar3 + 0xb) == param_3[0xb])))))) &&
       (*(char *)((long)puVar3 + 0xc) == param_3[0xc])) {
      lVar5 = *(long *)((long)puVar3 + 0x18);
      if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x20);
        if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
          if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_10b702398;
          }
          goto LAB_10b70238c;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b702398:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 10b702294; end: 10b7023b3; -[SCSpectaclesUserDeviceSecurityData isEqual:] */

long FUN_10b702294(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b70238c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b702398;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
           (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
          (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))))) &&
       (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_10b702398;
          }
          goto LAB_10b70238c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b702398:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b7023b4; end: 10b7023bb; -[SCSpectaclesUserDeviceSecurityData requirePasscode] */

undefined1 FUN_10b7023b4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}


