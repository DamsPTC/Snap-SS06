/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e6f618; end: 106e6f61f; -[SCMapValisGetFriendClustersResponse friendClustersArray] */

undefined8 FUN_106e6f618(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e6f620; end: 106e6f627; -[SCMapValisGetFriendClustersResponse success] */

undefined1 FUN_106e6f620(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e6f628; end: 106e6f62f; -[SCMapValisGetFriendClustersResponse requestAgainAfterMs] */

undefined8 FUN_106e6f628(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e6f630; end: 106e6f63b; -[SCMapValisGetFriendClustersResponse .cxx_destruct] */

void FUN_106e6f630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e6f63c; end: 106e6f6c3; -[SCMapValisStreamingUpdate initWithClusters:isInitialUpdate:] */

undefined1 *
FUN_106e6f63c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f76f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e6f6c4; end: 106e6f6e7; -[SCMapValisStreamingUpdate copyWithZone:] */

undefined8 FUN_106e6f6c4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e6f6e8; end: 106e6f753; -[SCMapValisStreamingUpdate hash] */

undefined8 * FUN_106e6f6e8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106e6f7d8;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_106e6f7d8;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_106e6f7d8;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_106e6f7d8:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 106e6f754; end: 106e6f7f3; -[SCMapValisStreamingUpdate isEqual:] */

long FUN_106e6f754(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e6f7d8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_106e6f7d8;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106e6f7d8;
    }
  }
  lVar3 = 1;
LAB_106e6f7d8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e6f7f4; end: 106e6f7fb; -[SCMapValisStreamingUpdate clusters] */

undefined8 FUN_106e6f7f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e6f7fc; end: 106e6f803; -[SCMapValisStreamingUpdate isInitialUpdate] */

undefined1 FUN_106e6f7fc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e6f804; end: 106e6f80f; -[SCMapValisStreamingUpdate .cxx_destruct] */

void FUN_106e6f804(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e6f810; end: 106e6f8af; -[SCMapValisFocusViewData initWithFriendIDs:isDismissing:traySessionID:isSharingBackgroundLocation:] */

undefined1 *
FUN_106e6f810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126f7700;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e6f8b0; end: 106e6f8d3; -[SCMapValisFocusViewData copyWithZone:] */

undefined8 FUN_106e6f8b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e6f8d4; end: 106e6f8db; -[SCMapValisFocusViewData friendIDs] */

undefined8 FUN_106e6f8d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e6f8dc; end: 106e6f8e3; -[SCMapValisFocusViewData isDismissing] */

undefined1 FUN_106e6f8dc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e6f8e4; end: 106e6f8eb; -[SCMapValisFocusViewData traySessionID] */

undefined8 FUN_106e6f8e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e6f8ec; end: 106e6f8f3; -[SCMapValisFocusViewData isSharingBackgroundLocation] */

undefined1 FUN_106e6f8ec(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106e6f8f4; end: 106e6f8ff; -[SCMapValisFocusViewData .cxx_destruct] */

void FUN_106e6f8f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e6f900; end: 106e6f9af; -[SCMapValisViewportData initWithFriendIDs:zoomLevel:swCoordinate:neCoordinate:] */

undefined1 *
FUN_106e6f900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f7708;
  uStack_60 = param_6;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
  }
  _objc_release(param_8);
  return (undefined1 *)puVar1;
}



/* Entry: 106e6f9b0; end: 106e6f9d3; -[SCMapValisViewportData copyWithZone:] */

undefined8 FUN_106e6f9b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e6f9d4; end: 106e6f9db; -[SCMapValisViewportData friendIDs] */

undefined8 FUN_106e6f9d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e6f9dc; end: 106e6f9e3; -[SCMapValisViewportData zoomLevel] */

undefined8 FUN_106e6f9dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e6f9e4; end: 106e6f9eb; -[SCMapValisViewportData swCoordinate] */

undefined1  [16] FUN_106e6f9e4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 106e6f9ec; end: 106e6f9f3; -[SCMapValisViewportData neCoordinate] */

undefined1  [16] FUN_106e6f9ec(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x28);
}



/* Entry: 106e6f9f4; end: 106e6f9ff; -[SCMapValisViewportData .cxx_destruct] */

void FUN_106e6f9f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e6fa00; end: 106e6fa47; -[SCMapValisPreferenceData initWithGhostMode:] */

void FUN_106e6fa00(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f7710;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 106e6fa48; end: 106e6fa6b; -[SCMapValisPreferenceData copyWithZone:] */

undefined8 FUN_106e6fa48(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e6fa6c; end: 106e6fa73; -[SCMapValisPreferenceData hash] */

undefined1 FUN_106e6fa6c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e6fa74; end: 106e6fafb; -[SCMapValisPreferenceData isEqual:] */

bool FUN_106e6fa74(ulong param_1,undefined8 param_2,ulong param_3)

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
        bVar1 = *(char *)(param_1 + 8) == *(char *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106e6fafc; end: 106e6fb03; -[SCMapValisPreferenceData ghostMode] */

undefined1 FUN_106e6fafc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e6fb04; end: 106e6fbaf; -[SCMapValisRegionData initWithUpdateType:coordinate:radiusMeters:timestamp:] */

undefined1 *
FUN_106e6fb04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f7718;
  uStack_60 = param_4;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 106e6fbb0; end: 106e6fbd3; -[SCMapValisRegionData copyWithZone:] */

undefined8 FUN_106e6fbb0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e6fbd4; end: 106e6fc9b; -[SCMapValisRegionData hash] */

undefined8 * FUN_106e6fbd4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar4 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_38 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar6 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_30 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar6 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_28 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  func_0x00010bfde980();
  uStack_20 = uVar3;
  func_0x000100505190(&uStack_40,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_106e6fd78:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106e6fd84;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) &&
       (((*(long *)((long)puVar4 + 8) == *(long *)(param_3 + 8) &&
         (ABS(*(double *)((long)puVar4 + 0x20) - *(double *)(param_3 + 0x20)) <=
          2.220446049250313e-16)) &&
        (ABS(*(double *)((long)puVar4 + 0x28) - *(double *)(param_3 + 0x28)) <=
         2.220446049250313e-16)))) {
      dVar9 = ABS(*(double *)((long)puVar4 + 0x10) - *(double *)(param_3 + 0x10));
      dVar8 = ABS(*(double *)((long)puVar4 + 0x10) + *(double *)(param_3 + 0x10)) *
              2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
        bVar2 = dVar9 < dVar8;
      }
      if (bVar2) {
        puVar7 = *(undefined1 **)((long)puVar4 + 0x18);
        if (puVar7 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106e6fd84;
        }
        goto LAB_106e6fd78;
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_106e6fd84:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 106e6fc9c; end: 106e6fd9f; -[SCMapValisRegionData isEqual:] */

long FUN_106e6fc9c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e6fd78:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e6fd84;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
         (ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20)) <= 2.220446049250313e-16))
        && (ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28)) <= 2.220446049250313e-16)
        ))) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106e6fd84;
        }
        goto LAB_106e6fd78;
      }
    }
    lVar4 = 0;
  }
LAB_106e6fd84:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 106e6fda0; end: 106e6fda7; -[SCMapValisRegionData updateType] */

undefined8 FUN_106e6fda0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e6fda8; end: 106e6fdaf; -[SCMapValisRegionData coordinate] */

undefined1  [16] FUN_106e6fda8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x20);
}



/* Entry: 106e6fdb0; end: 106e6fdb7; -[SCMapValisRegionData radiusMeters] */

undefined8 FUN_106e6fdb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e6fdb8; end: 106e6fdbf; -[SCMapValisRegionData timestamp] */

undefined8 FUN_106e6fdb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e6fdc0; end: 106e6fdcb; -[SCMapValisRegionData .cxx_destruct] */

void FUN_106e6fdc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106e6fdcc; end: 106e6fed7; -[SCMapValisVisitData initWithCoordinate:horizontalAccuracy:arrivalDate:departureDate:details:significantChangeMonitoringAvailable:] */

undefined1 *
FUN_106e6fdcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f7720;
  uStack_70 = param_4;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    *(undefined8 *)((long)puVar1 + 0x38) = param_2;
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
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
    *(undefined1 *)((long)puVar1 + 8) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 106e6fed8; end: 106e6fefb; -[SCMapValisVisitData copyWithZone:] */

undefined8 FUN_106e6fed8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e6fefc; end: 106e6ffe3; -[SCMapValisVisitData hash] */

ulong * FUN_106e6fefc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_60 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_58 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_50 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar3;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (ulong *)param_3) {
LAB_106e700f0:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106e700fc;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       (((*(char *)((long)puVar4 + 8) == param_3[8] &&
         (ABS(*(double *)((long)puVar4 + 0x30) - *(double *)(param_3 + 0x30)) <=
          2.220446049250313e-16)) &&
        (ABS(*(double *)((long)puVar4 + 0x38) - *(double *)(param_3 + 0x38)) <=
         2.220446049250313e-16)))) {
      dVar10 = ABS(*(double *)((long)puVar4 + 0x10) - *(double *)(param_3 + 0x10));
      dVar9 = ABS(*(double *)((long)puVar4 + 0x10) + *(double *)(param_3 + 0x10)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (((bVar1) &&
          ((lVar6 = *(long *)((long)puVar4 + 0x18), lVar6 == *(long *)(param_3 + 0x18) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         ((lVar6 = *(long *)((long)puVar4 + 0x20), lVar6 == *(long *)(param_3 + 0x20) ||
          (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x28);
        if (puVar8 != *(undefined1 **)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_106e700fc;
        }
        goto LAB_106e700f0;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_106e700fc:
  _objc_release(param_3);
  return (ulong *)puVar8;
}



/* Entry: 106e6ffe4; end: 106e70117; -[SCMapValisVisitData isEqual:] */

long FUN_106e6ffe4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e700f0:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e700fc;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30)) <= 2.220446049250313e-16))
        && (ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38)) <= 2.220446049250313e-16)
        ))) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (((bVar1) &&
          ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x28);
        if (lVar4 != *(long *)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_106e700fc;
        }
        goto LAB_106e700f0;
      }
    }
    lVar4 = 0;
  }
LAB_106e700fc:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 106e70118; end: 106e7011f; -[SCMapValisVisitData coordinate] */

undefined1  [16] FUN_106e70118(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x30);
}



/* Entry: 106e70120; end: 106e70127; -[SCMapValisVisitData horizontalAccuracy] */

undefined8 FUN_106e70120(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e70128; end: 106e7012f; -[SCMapValisVisitData arrivalDate] */

undefined8 FUN_106e70128(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e70130; end: 106e70137; -[SCMapValisVisitData departureDate] */

undefined8 FUN_106e70130(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e70138; end: 106e7013f; -[SCMapValisVisitData details] */

undefined8 FUN_106e70138(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106e70140; end: 106e70147; -[SCMapValisVisitData significantChangeMonitoringAvailable] */

undefined1 FUN_106e70140(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e70148; end: 106e70183; -[SCMapValisVisitData .cxx_destruct] */

void FUN_106e70148(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106e70184; end: 106e7018b; -[SCSnapDocImportingEditsResolverServices editsResolver] */

undefined8 FUN_106e70184(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e7018c; end: 106e70197; -[SCSnapDocImportingEditsResolverServices .cxx_destruct] */

void FUN_106e7018c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e70198; end: 106e701a3; +[SCCMemoriesResurfaceFactory modulePath] */

undefined ** FUN_106e70198(void)

{
  return &PTR____CFConstantStringClassReference_110e89398;
}



/* Entry: 106e701a4; end: 106e701ab; +[SCCMemoriesResurfaceFactory asyncStrictMode] */

undefined8 FUN_106e701a4(void)

{
  return 0;
}



/* Entry: 106e701ac; end: 106e701f3; -[SCCMemoriesResurfaceFactory createResurfaceService] */

void FUN_106e701ac(long param_1)

{
  long lVar1;
  
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106e701f4; end: 106e702a7; +[SCCMemoriesResurfaceFactory invokeWithJSRuntimeProvider:completionHandler:] */

void FUN_106e701f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106e702a8;
  puStack_38 = &UNK_11084aaa8;
  lStack_30 = param_3;
  uStack_28 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(lStack_30);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e702a8; end: 106e7032f;  */

void FUN_106e702a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d2e68;
  func_0x00010bfbc0e0(PTR_PTR_1126d2e68,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (**(code **)(puVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e70330; end: 106e70353; +[SCCMemoriesResurfaceFactory valdiMarshallableObjectDescriptor] */

void FUN_106e70330(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110981178;
  param_1[1] = &PTR_DAT_1109811a8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 106e70354; end: 106e70377; +[SCCMemoriesMemoriesResurfaceService valdiMarshallableObjectDescriptor] */

void FUN_106e70354(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109811b8;
  param_1[1] = &PTR_DAT_1109811e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106e70378; end: 106e703af; -[SCCMemoriesCameraRollItem initWithItemId:timestampMs:] */

void FUN_106e70378(undefined8 param_1)

{
  func_0x000106e7041c(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 106e703b0; end: 106e703c7; +[SCCMemoriesCameraRollItem valdiMarshallableObjectDescriptor] */

void FUN_106e703b0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_itemId_110981200;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106e703c8; end: 106e703fb; -[SCCMemoriesClusterResult initWithClusterId:selection:] */

void FUN_106e703c8(undefined8 param_1)

{
  func_0x000106e7041c(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 106e703fc; end: 106e70427; +[SCCMemoriesClusterResult valdiMarshallableObjectDescriptor] */

void FUN_106e703fc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110981248;
  param_1[1] = &PTR_DAT_110981290;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106e70428; end: 106e7042f; -[SCMemoriesCRCollageFeaturedStoryManagerServices memoriesMashupStyleCRCollageFeaturedStoryManager] */

undefined8 FUN_106e70428(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e70430; end: 106e7043b; -[SCMemoriesCRCollageFeaturedStoryManagerServices .cxx_destruct] */

void FUN_106e70430(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e7043c; end: 106e70443; -[SCMemoriesCRMashupFeaturedStoryManagerServices memoriesMashupStyleCRMashupFeaturedStoryManager] */

undefined8 FUN_106e7043c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e70444; end: 106e7044f; -[SCMemoriesCRMashupFeaturedStoryManagerServices .cxx_destruct] */

void FUN_106e70444(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e70450; end: 106e70457; -[SCMemoriesGenAIFeaturedStoryManagerServices memoriesMashupStyleGenAIFeaturedStoryManager] */

undefined8 FUN_106e70450(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e70458; end: 106e70463; -[SCMemoriesGenAIFeaturedStoryManagerServices .cxx_destruct] */

void FUN_106e70458(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e70464; end: 106e7046b; -[SCMemoriesMashupFeaturedStoryManagerServices memoriesMashupStyleFeaturedStoryManager] */

undefined8 FUN_106e70464(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e7046c; end: 106e70477; -[SCMemoriesMashupFeaturedStoryManagerServices .cxx_destruct] */

void FUN_106e7046c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e70478; end: 106e70483; -[SCMemoriesSoundSyncFeaturedStoryManagerServices .cxx_destruct] */

void FUN_106e70478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e70484; end: 106e7048b; -[SCMemoriesLocationServices memoriesLocationDataProvider] */

undefined8 FUN_106e70484(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e7048c; end: 106e70497; -[SCMemoriesLocationServices .cxx_destruct] */

void FUN_106e7048c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e70498; end: 106e70567; -[SCMemoriesLocationData initWithMemoriesId:location:captureTimeUtc:placeId:] */

undefined1 *
FUN_106e70498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f7770;
  uStack_60 = param_4;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 106e70568; end: 106e7056f; -[SCMemoriesLocationData memoriesId] */

undefined8 FUN_106e70568(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e70570; end: 106e70577; -[SCMemoriesLocationData location] */

undefined1  [16] FUN_106e70570(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x20);
}



/* Entry: 106e70578; end: 106e7057f; -[SCMemoriesLocationData captureTimeUtc] */

undefined8 FUN_106e70578(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e70580; end: 106e70587; -[SCMemoriesLocationData placeId] */

undefined8 FUN_106e70580(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e70588; end: 106e705b7; -[SCMemoriesLocationData .cxx_destruct] */

void FUN_106e70588(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e705b8; end: 106e7063f; -[SCMemoriesLocationResult initWithLocationData:state:] */

undefined1 *
FUN_106e705b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f7778;
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



/* Entry: 106e70640; end: 106e70647; -[SCMemoriesLocationResult locationData] */

undefined8 FUN_106e70640(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e70648; end: 106e7064f; -[SCMemoriesLocationResult state] */

undefined8 FUN_106e70648(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e70650; end: 106e7065b; -[SCMemoriesLocationResult .cxx_destruct] */

void FUN_106e70650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e7065c; end: 106e70663; -[SCMemoriesDbServices playbackRepository] */

undefined8 FUN_106e7065c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e70664; end: 106e70693; -[SCMemoriesDbServices .cxx_destruct] */

void FUN_106e70664(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e70694; end: 106e7070b; -[SCMemoriesPlaybackItem initWithSnapId:] */

undefined1 * FUN_106e70694(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7788;
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



/* Entry: 106e7070c; end: 106e70713; -[SCMemoriesPlaybackItem hash] */

void FUN_106e7070c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 106e70714; end: 106e707a3; -[SCMemoriesPlaybackItem isEqual:] */

long FUN_106e70714(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e70788;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_106e70788;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_106e70788;
    }
  }
  lVar3 = 1;
LAB_106e70788:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e707a4; end: 106e707ab; -[SCMemoriesPlaybackItem snapId] */

undefined8 FUN_106e707a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e707ac; end: 106e707b7; -[SCMemoriesPlaybackItem .cxx_destruct] */

void FUN_106e707ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e707b8; end: 106e70887; -[SCMemoriesSnapLocation initWithSnapId:location:captureTimeUtc:placeId:] */

undefined1 *
FUN_106e707b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f7790;
  uStack_60 = param_4;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 106e70888; end: 106e7095b; -[SCMemoriesSnapLocation hash] */

undefined8 * FUN_106e70888(long param_1,undefined8 param_2,undefined1 *param_3)

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
  double dVar10;
  double dVar11;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar5 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_48 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_40 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_38 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uStack_30 = uVar4;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (undefined8 *)param_3) {
LAB_106e70a40:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106e70a4c;
    puVar9 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar6 & 1) != 0) &&
       ((ABS(*(double *)((long)puVar5 + 0x20) - *(double *)(param_3 + 0x20)) <=
         2.220446049250313e-16 &&
        (ABS(*(double *)((long)puVar5 + 0x28) - *(double *)(param_3 + 0x28)) <=
         2.220446049250313e-16)))) {
      dVar11 = ABS(*(double *)((long)puVar5 + 0x10) - *(double *)(param_3 + 0x10));
      dVar10 = ABS(*(double *)((long)puVar5 + 0x10) + *(double *)(param_3 + 0x10)) *
               2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar2 = dVar11 < dVar10;
      }
      if ((bVar2) &&
         ((lVar7 = *(long *)((long)puVar5 + 8), lVar7 == *(long *)(param_3 + 8) ||
          (func_0x00010c071ae0(), (int)lVar7 != 0)))) {
        puVar9 = *(undefined1 **)((long)puVar5 + 0x18);
        if (puVar9 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106e70a4c;
        }
        goto LAB_106e70a40;
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_106e70a4c:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 106e7095c; end: 106e70a67; -[SCMemoriesSnapLocation isEqual:] */

long FUN_106e7095c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e70a40:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e70a4c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20)) <= 2.220446049250313e-16 &&
        (ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28)) <= 2.220446049250313e-16))))
    {
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
          goto LAB_106e70a4c;
        }
        goto LAB_106e70a40;
      }
    }
    lVar4 = 0;
  }
LAB_106e70a4c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 106e70a68; end: 106e70a6f; -[SCMemoriesSnapLocation snapId] */

undefined8 FUN_106e70a68(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e70a70; end: 106e70a77; -[SCMemoriesSnapLocation location] */

undefined1  [16] FUN_106e70a70(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x20);
}



/* Entry: 106e70a78; end: 106e70a7f; -[SCMemoriesSnapLocation captureTimeUtc] */

undefined8 FUN_106e70a78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e70a80; end: 106e70a87; -[SCMemoriesSnapLocation placeId] */

undefined8 FUN_106e70a80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e70a88; end: 106e70ab7; -[SCMemoriesSnapLocation .cxx_destruct] */

void FUN_106e70a88(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e70ab8; end: 106e70b03; -[SCMemoriesEntrySyncStatusGeneratorBuilderServiceProvider provide] */

void FUN_106e70ab8(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x00010bec9d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d2e70;
  _objc_alloc(PTR_PTR_1126d2e70);
  func_0x00010c04fd00();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


