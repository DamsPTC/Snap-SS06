/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b733dd8; end: 10b733e73; -[SCLensScheduleNamespaceData .cxx_destruct] */

void FUN_10b733dd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b733e74; end: 10b733f1f; -[SCLensScheduleProcessedNamespaceData initWithNamespaceData:checksumOnlyLensIds:] */

undefined1 *
FUN_10b733e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270a3c0;
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



/* Entry: 10b733f20; end: 10b733f43; -[SCLensScheduleProcessedNamespaceData copyWithZone:] */

undefined8 FUN_10b733f20(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b733f44; end: 10b733fb7; -[SCLensScheduleProcessedNamespaceData hash] */

undefined8 * FUN_10b733f44(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b734038:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b734044;
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
          goto LAB_10b734044;
        }
        goto LAB_10b734038;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b734044:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b733fb8; end: 10b73405f; -[SCLensScheduleProcessedNamespaceData isEqual:] */

long FUN_10b733fb8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b734038:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b734044;
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
          goto LAB_10b734044;
        }
        goto LAB_10b734038;
      }
    }
    lVar3 = 0;
  }
LAB_10b734044:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b734060; end: 10b734067; -[SCLensScheduleProcessedNamespaceData namespaceData] */

undefined8 FUN_10b734060(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b734068; end: 10b73406f; -[SCLensScheduleProcessedNamespaceData checksumOnlyLensIds] */

undefined8 FUN_10b734068(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b734070; end: 10b73409f; -[SCLensScheduleProcessedNamespaceData .cxx_destruct] */

void FUN_10b734070(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7340a0; end: 10b73412b; -[SCFetchLocationMetadata hash] */

undefined8 * FUN_10b7340a0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x18);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  lStack_38 = -lVar5;
  if (-1 < lVar5) {
    lStack_38 = lVar5;
  }
  uStack_40 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b7341d4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b7341e0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[3] == param_3[3])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_10b7341e0;
          }
          goto LAB_10b7341d4;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b7341e0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b73412c; end: 10b7341fb; -[SCFetchLocationMetadata isEqual:] */

long FUN_10b73412c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b7341d4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7341e0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b7341e0;
          }
          goto LAB_10b7341d4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b7341e0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b7341fc; end: 10b734203; -[SCFetchLocationMetadata searchCircle] */

undefined8 FUN_10b7341fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b734204; end: 10b73420b; -[SCFetchLocationMetadata nearbyFetchLocations] */

undefined8 FUN_10b734204(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b73420c; end: 10b734213; -[SCFetchLocationMetadata ttlMs] */

undefined8 FUN_10b73420c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b734214; end: 10b73421b; -[SCFetchLocationMetadata lastUpdateDate] */

undefined8 FUN_10b734214(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b73421c; end: 10b734257; -[SCFetchLocationMetadata .cxx_destruct] */

void FUN_10b73421c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b734258; end: 10b7342e3; -[SCGeoCircle hash] */

undefined8 * FUN_10b734258(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b734380:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b73438c;
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
          goto LAB_10b73438c;
        }
        goto LAB_10b734380;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b73438c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b7342e4; end: 10b7343a7; -[SCGeoCircle isEqual:] */

long FUN_10b7342e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b734380:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b73438c;
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
          goto LAB_10b73438c;
        }
        goto LAB_10b734380;
      }
    }
    lVar4 = 0;
  }
LAB_10b73438c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b7343a8; end: 10b7343af; -[SCGeoCircle center] */

undefined8 FUN_10b7343a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7343b0; end: 10b7343b7; -[SCGeoCircle radius] */

undefined8 FUN_10b7343b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7343b8; end: 10b7343c3; -[SCGeoCircle .cxx_destruct] */

void FUN_10b7343b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7343c4; end: 10b734457; -[SCGeoCoordinate hash] */

ulong * FUN_10b7343c4(long param_1,undefined8 param_2,ulong *param_3)

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
          goto LAB_10b73451c;
        }
      }
      puVar6 = (ulong *)0x0;
    }
  }
LAB_10b73451c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b734458; end: 10b734537; -[SCGeoCoordinate isEqual:] */

bool FUN_10b734458(ulong param_1,undefined8 param_2,ulong param_3)

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
          goto LAB_10b73451c;
        }
      }
      bVar1 = false;
    }
  }
LAB_10b73451c:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b734538; end: 10b73453f; -[SCGeoCoordinate latitude] */

undefined8 FUN_10b734538(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b734540; end: 10b734547; -[SCGeoCoordinate longitude] */

undefined8 FUN_10b734540(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b734548; end: 10b7345cf; -[SCGeofence initWithGeofenceId:geoPolygon:] */

undefined1 *
FUN_10b734548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270a3e0;
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



/* Entry: 10b7345d0; end: 10b7345f3; -[SCGeofence copyWithZone:] */

undefined8 FUN_10b7345d0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7345f4; end: 10b73465b; -[SCGeofence hash] */

long * FUN_10b7345f4(long param_1,undefined8 param_2,long *param_3)

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
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10b7346e0;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar4 & 1) == 0) || (plVar3[1] != param_3[1])) {
      plVar5 = (long *)0x0;
      goto LAB_10b7346e0;
    }
    plVar5 = (long *)plVar3[2];
    if (plVar5 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b7346e0;
    }
  }
  plVar5 = (long *)0x1;
LAB_10b7346e0:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 10b73465c; end: 10b7346fb; -[SCGeofence isEqual:] */

long FUN_10b73465c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7346e0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b7346e0;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b7346e0;
    }
  }
  lVar3 = 1;
LAB_10b7346e0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b7346fc; end: 10b734703; -[SCGeofence geofenceId] */

undefined8 FUN_10b7346fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b734704; end: 10b73470b; -[SCGeofence geoPolygon] */

undefined8 FUN_10b734704(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b73470c; end: 10b734717; -[SCGeofence .cxx_destruct] */

void FUN_10b73470c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b734718; end: 10b73479b; -[SCMixerRequestMetadata hash] */

undefined8 * FUN_10b734718(long param_1,undefined8 param_2,undefined8 *param_3)

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
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b734844:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b734850;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[3] == param_3[3])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_10b734850;
          }
          goto LAB_10b734844;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b734850:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b73479c; end: 10b73486b; -[SCMixerRequestMetadata isEqual:] */

long FUN_10b73479c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b734844:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b734850;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b734850;
          }
          goto LAB_10b734844;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b734850:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b73486c; end: 10b734873; -[SCMixerRequestMetadata clientRequestId] */

undefined8 FUN_10b73486c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b734874; end: 10b73487b; -[SCMixerRequestMetadata nextPageTriggerDistance] */

undefined8 FUN_10b734874(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b73487c; end: 10b7348b7; -[SCMixerRequestMetadata .cxx_destruct] */

void FUN_10b73487c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7348b8; end: 10b73493f; -[SCLensLocationRequestData initWithLocationFreshnessType:location:] */

undefined1 *
FUN_10b7348b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270a3f0;
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



/* Entry: 10b734940; end: 10b734963; -[SCLensLocationRequestData copyWithZone:] */

undefined8 FUN_10b734940(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b734964; end: 10b7349cb; -[SCLensLocationRequestData hash] */

long * FUN_10b734964(long param_1,undefined8 param_2,long *param_3)

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
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10b734a50;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar4 & 1) == 0) || (plVar3[1] != param_3[1])) {
      plVar5 = (long *)0x0;
      goto LAB_10b734a50;
    }
    plVar5 = (long *)plVar3[2];
    if (plVar5 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b734a50;
    }
  }
  plVar5 = (long *)0x1;
LAB_10b734a50:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 10b7349cc; end: 10b734a6b; -[SCLensLocationRequestData isEqual:] */

long FUN_10b7349cc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b734a50;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b734a50;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b734a50;
    }
  }
  lVar3 = 1;
LAB_10b734a50:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b734a6c; end: 10b734a73; -[SCLensLocationRequestData locationFreshnessType] */

undefined8 FUN_10b734a6c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b734a74; end: 10b734a7b; -[SCLensLocationRequestData location] */

undefined8 FUN_10b734a74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b734a7c; end: 10b734a87; -[SCLensLocationRequestData .cxx_destruct] */

void FUN_10b734a7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b734a88; end: 10b734ad3; -[SCLensLocationRetrieveData initWithLatency:distanceFromPrev:] */

void FUN_10b734a88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270a3f8;
  uStack_30 = param_3;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
  }
  return;
}



/* Entry: 10b734ad4; end: 10b734af7; -[SCLensLocationRetrieveData copyWithZone:] */

undefined8 FUN_10b734ad4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b734af8; end: 10b734b8b; -[SCLensLocationRetrieveData hash] */

ulong * FUN_10b734af8(long param_1,undefined8 param_2,ulong *param_3)

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
          goto LAB_10b734c50;
        }
      }
      puVar6 = (ulong *)0x0;
    }
  }
LAB_10b734c50:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b734b8c; end: 10b734c6b; -[SCLensLocationRetrieveData isEqual:] */

bool FUN_10b734b8c(ulong param_1,undefined8 param_2,ulong param_3)

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
          goto LAB_10b734c50;
        }
      }
      bVar1 = false;
    }
  }
LAB_10b734c50:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b734c6c; end: 10b734c73; -[SCLensLocationRetrieveData latency] */

undefined8 FUN_10b734c6c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b734c74; end: 10b734c7b; -[SCLensLocationRetrieveData distanceFromPrev] */

undefined8 FUN_10b734c74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b734c7c; end: 10b734c9f; -[SCMixerUpdateStrategyMetadata copyWithZone:] */

undefined8 FUN_10b734c7c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b734ca0; end: 10b734d47; -[SCMixerUpdateStrategyMetadata hash] */

undefined8 * FUN_10b734ca0(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uStack_58 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b734e38:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b734e44;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x30);
              if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
                if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_10b734e44;
                }
                goto LAB_10b734e38;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b734e44:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b734d48; end: 10b734e5f; -[SCMixerUpdateStrategyMetadata isEqual:] */

long FUN_10b734d48(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b734e38:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b734e44;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if (lVar3 != *(long *)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_10b734e44;
                }
                goto LAB_10b734e38;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b734e44:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b734e60; end: 10b734e67; -[SCMixerUpdateStrategyMetadata scheduleNamespace] */

undefined8 FUN_10b734e60(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b734e68; end: 10b734e6f; -[SCMixerUpdateStrategyMetadata fetchLocationMetadata] */

undefined8 FUN_10b734e68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b734e70; end: 10b734e77; -[SCMixerUpdateStrategyMetadata paginationToken] */

undefined8 FUN_10b734e70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b734e78; end: 10b734ed7; -[SCMixerUpdateParameters hash] */

undefined8 * FUN_10b734e78(long param_1,undefined8 param_2,undefined8 *param_3)

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
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b734f5c;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[1] != param_3[1])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10b734f5c;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b734f5c;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10b734f5c:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b734ed8; end: 10b734f77; -[SCMixerUpdateParameters isEqual:] */

long FUN_10b734ed8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b734f5c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b734f5c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b734f5c;
    }
  }
  lVar3 = 1;
LAB_10b734f5c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b734f78; end: 10b735013; -[SCRequestContextualInfo initWithSnapType:cameraType:snapSource:preCaptureLensId:] */

undefined1 *
FUN_10b734f78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_11270a410;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10b735014; end: 10b735037; -[SCRequestContextualInfo copyWithZone:] */

undefined8 FUN_10b735014(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b735038; end: 10b73509f; -[SCRequestContextualInfo hash] */

undefined8 * FUN_10b735038(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar2 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uStack_28 = uVar1;
  func_0x000107c3191c(&uStack_40,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b735144;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       (((*(long *)((long)puVar2 + 8) != *(long *)(param_3 + 8) ||
         (*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10))) ||
        (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10b735144;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x20);
    if (puVar4 != *(undefined1 **)(param_3 + 0x20)) {
      func_0x00010c071ae0();
      goto LAB_10b735144;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10b735144:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10b7350a0; end: 10b73515f; -[SCRequestContextualInfo isEqual:] */

long FUN_10b7350a0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b735144;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
         (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_10b735144;
    }
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != *(long *)(param_3 + 0x20)) {
      func_0x00010c071ae0();
      goto LAB_10b735144;
    }
  }
  lVar3 = 1;
LAB_10b735144:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b735160; end: 10b735167; -[SCRequestContextualInfo snapType] */

undefined8 FUN_10b735160(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b735168; end: 10b73516f; -[SCRequestContextualInfo cameraType] */

undefined8 FUN_10b735168(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b735170; end: 10b735177; -[SCRequestContextualInfo snapSource] */

undefined8 FUN_10b735170(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b735178; end: 10b73517f; -[SCRequestContextualInfo preCaptureLensId] */

undefined8 FUN_10b735178(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b735180; end: 10b73518b; -[SCRequestContextualInfo .cxx_destruct] */

void FUN_10b735180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10b73518c; end: 10b735197; -[SCLensUserProviderServices .cxx_destruct] */

void FUN_10b73518c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b735198; end: 10b73572f;  */

void FUN_10b735198(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined8 uStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f78758);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_40,&uStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_98 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110f78778);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_90 = puVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_90,&uStack_98,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uStack_f8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110f78798);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_f0 = puVar1;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_f0,&uStack_f8,1)
      ;
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
        ___stack_chk_fail();
        puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
        lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uStack_168 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110f787b8);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_160 = puVar1;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_160,
                            &uStack_168,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(puVar1);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
          ___stack_chk_fail();
          puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
          lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          uStack_1c8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110f787d8);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_1c0 = puVar1;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_1c0,
                              &uStack_1c8,1);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = 4;
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          _objc_release(puVar1);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
            ___stack_chk_fail();
            _objc_retain(lVar4);
            puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                &PTR____CFConstantStringClassReference_110f787f8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf72040(puVar1,param_2,puVar3,
                                *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
            if (lVar4 != 0) {
              func_0x00010c1d0640(puVar1,param_2,lVar4,
                                  *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660);
            }
            puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                                &PTR____CFConstantStringClassReference_110f5dd58,6,puVar1);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar1);
            _objc_release(lVar4);
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b735730; end: 10b7357ff; +[SCLensSecurityHelper sha256HashForData:length:] */

/* WARNING: Removing unreachable block (ram,0x00010b735878) */

void FUN_10b735730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_58 [32];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _CC_SHA256(param_3,param_4,auStack_58);
  puVar6 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25d900();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = 0;
  do {
    ppuVar4 = &PTR____CFConstantStringClassReference_110e18c58;
    func_0x00010bf06ba0(puVar6);
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x20);
  puVar5 = puVar6;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    _objc_retain(ppuVar4);
    ppuVar1 = ppuVar4;
    func_0x00010c08fa60();
    if (ppuVar1 == (undefined **)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfacc00();
      _objc_release(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64ae0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      if (puVar2 == (undefined *)0x0) {
        if (param_4 == (undefined8 *)0x0) {
          puVar6 = (undefined *)0x0;
        }
        else {
          puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010c14d500();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          puVar6 = (undefined *)0x0;
          *param_4 = puVar3;
        }
      }
      else {
        _objc_retainAutorelease(puVar2);
        func_0x00010bf25f00();
        func_0x00010c08fa60(puVar2);
        func_0x00010c229ea0(puVar6);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar2);
      _objc_release(0);
      _objc_release(puVar5);
      puVar5 = puVar6;
    }
    _objc_release(ppuVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b735800; end: 10b735997; +[SCLensSecurityHelper hashStringForContentAtPath:error:] */

void FUN_10b735800(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_50;
  byte bStack_41;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    param_1 = 0;
  }
  else {
    bStack_41 = 0;
    puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfacc00();
    bVar2 = bStack_41;
    _objc_release(puVar4);
    if (((int)puVar5 == 0) || ((bVar2 & 1) == 0)) {
      puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      uStack_50 = 0;
      puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64ae0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar4,0,&uStack_50);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uStack_50;
      _objc_retain(uStack_50);
      if (puVar5 == (undefined *)0x0) {
        if (param_4 == (undefined8 *)0x0) {
          param_1 = 0;
        }
        else {
          puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010c14d500(PTR__OBJC_CLASS___NSError_1126ae858,param_2,param_3,uVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          param_1 = 0;
          *param_4 = puVar7;
        }
      }
      else {
        puVar7 = puVar5;
        _objc_retainAutorelease(puVar5);
        func_0x00010bf25f00();
        puVar6 = puVar5;
        func_0x00010c08fa60(puVar5);
        func_0x00010c229ea0(param_1,param_2,puVar7,puVar6);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar5);
      _objc_release(uVar1);
      _objc_release(puVar4);
    }
    else {
      func_0x00010bf7f940(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b735998; end: 10b735d6b; +[SCLensSecurityHelper directoryHashStringForContentAtPath:] */

long FUN_10b735998(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_108;
  undefined1 auStack_100 [128];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == 0) {
    param_1 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)PTR__NSURLNameKey_11034ab20;
    uVar15 = *(undefined8 *)PTR__NSURLIsDirectoryKey_11034ab10;
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_80 = uVar14;
    uStack_78 = uVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf98160(puVar3,param_2,puVar2,puVar16,0,&PTR___NSConcreteGlobalBlock_110d5b1b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar16);
    _objc_release(puVar3);
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    _objc_retain(puVar4);
    puVar3 = puVar4;
    func_0x00010bf52a60(puVar4,param_2,&uStack_150,auStack_100,0x10);
    if (puVar3 != (undefined *)0x0) {
      lVar12 = *plStack_140;
      do {
        puVar16 = (undefined *)0x0;
        do {
          if (*plStack_140 != lVar12) {
            _objc_enumerationMutation(puVar4);
          }
          uVar13 = *(undefined8 *)(lStack_148 + (long)puVar16 * 8);
          puStack_158 = (undefined *)0x0;
          uVar5 = uVar13;
          func_0x00010bfc99e0(uVar13,param_2,&puStack_158,uVar15,0);
          puVar11 = puStack_158;
          _objc_retain(puStack_158);
          puVar7 = puVar4;
          if ((int)uVar5 == 0) {
            param_1 = 0;
            goto LAB_10b735cf8;
          }
          puVar6 = puVar11;
          func_0x00010bf1f3c0();
          if (((ulong)puVar6 & 1) == 0) {
            puStack_160 = (undefined *)0x0;
            uVar5 = uVar13;
            func_0x00010bfc99e0(uVar13,param_2,&puStack_160,uVar14,0);
            puVar6 = puStack_160;
            _objc_retain(puStack_160);
            if ((int)uVar5 == 0) {
              param_1 = 0;
              goto LAB_10b735cf0;
            }
            puVar7 = puVar6;
            func_0x00010bfda7c0(puVar6,param_2,&PTR____CFConstantStringClassReference_110dad1f8);
            if (((ulong)puVar7 & 1) == 0) {
              puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
              func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,uVar13);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar7;
              _objc_retainAutorelease();
              func_0x00010bf25f00();
              puVar9 = puVar7;
              func_0x00010c08fa60(puVar7);
              lVar10 = param_1;
              func_0x00010c229ea0(param_1,param_2,puVar8,puVar9);
              _objc_retainAutoreleasedReturnValue();
              if (lVar10 != 0) {
                func_0x00010befa120(puVar1,param_2,lVar10);
              }
              _objc_release(lVar10);
              _objc_release(puVar7);
            }
            _objc_release(puVar6);
          }
          _objc_release(puVar11);
          puVar16 = puVar16 + 1;
        } while (puVar3 != puVar16);
        puVar3 = puVar4;
        func_0x00010bf52a60(puVar4,param_2,&uStack_150,auStack_100,0x10);
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(puVar4);
    puVar7 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,0,1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_108 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_108,1);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar1;
    func_0x00010c246cc0(puVar1,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar6 = puVar11;
    func_0x00010bf446e0(puVar11,param_2,&PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    puVar16 = puVar6;
    func_0x00010c08fa60(puVar6);
    func_0x00010c229ea0(param_1,param_2,puVar3,puVar16);
    _objc_retainAutoreleasedReturnValue();
LAB_10b735cf0:
    _objc_release(puVar6);
LAB_10b735cf8:
    _objc_release(puVar11);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return param_1;
  }
  ___stack_chk_fail();
  return 1;
}



/* Entry: 10b735d6c; end: 10b735d73;  */

undefined8 FUN_10b735d6c(void)

{
  return 1;
}



/* Entry: 10b735d74; end: 10b735ed3; +[SCLensSecurityHelper verifyHash:forContentPath:error:] */

ulong FUN_10b735d74(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,
                   undefined8 *param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar6 = param_3;
  func_0x00010c08fa60();
  if ((uVar6 == 0) || (lVar2 = param_4, func_0x00010c08fa60(), lVar2 == 0)) {
    uVar6 = 0;
    goto LAB_10b735ea4;
  }
  puStack_58 = (undefined *)0x0;
  puVar3 = PTR_PTR_1126b7fb8;
  func_0x00010bfdea60(PTR_PTR_1126b7fb8,param_2,param_4,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_58;
  _objc_retain(puStack_58);
  if (puVar3 == (undefined *)0x0) {
    if (param_5 != (undefined8 *)0x0) {
      puVar5 = puVar1;
      _objc_retainAutorelease();
      goto LAB_10b735e84;
    }
    uVar6 = 0;
  }
  else {
    uVar4 = param_3;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c0b5ac0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0720c0(uVar4,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(uVar4);
    if ((param_5 != (undefined8 *)0x0) && ((uVar6 & 1) == 0)) {
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010c14d4e0(PTR__OBJC_CLASS___NSError_1126ae858,param_2,param_4,param_3,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
LAB_10b735e84:
      uVar6 = 0;
      *param_5 = puVar5;
    }
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
LAB_10b735ea4:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 10b735ed4; end: 10b73600f; +[SCLensSecurityHelper verifyHash:forData:error:] */

ulong FUN_10b735ed4(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,
                   undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar6 = param_3;
  func_0x00010c08fa60();
  if ((uVar6 == 0) || (lVar1 = param_4, func_0x00010c08fa60(), lVar1 == 0)) {
    uVar6 = 0;
  }
  else {
    lVar1 = param_4;
    _objc_retainAutorelease(param_4);
    func_0x00010bf25f00();
    lVar2 = param_4;
    func_0x00010c08fa60(param_4);
    func_0x00010c229ea0(param_1,param_2,lVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c0b5ac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c0720c0(uVar3,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((param_5 != (undefined8 *)0x0) && ((uVar6 & 1) == 0)) {
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010c14d4e0(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110f78818,param_3,param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_5 = puVar5;
    }
    _objc_release(param_1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 10b736010; end: 10b7360ef; +[SCLensSecurityHelper checkResourceTypeMatches:resource:failureHandler:] */

bool FUN_10b736010(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c27dd80();
  if ((param_5 != 0) && (param_3 != lVar1)) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10b7360f0;
    puStack_50 = &UNK_11085b7b0;
    _objc_retain(param_5);
    lStack_40 = param_5;
    _objc_retain(param_4);
    lStack_48 = param_4;
    lStack_38 = param_3;
    func_0x000107c312d0("APPSTORE",&puStack_68);
    _objc_release(lStack_48);
    _objc_release(lStack_40);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return param_3 != lVar1;
}



/* Entry: 10b7360f0; end: 10b736143;  */

void FUN_10b7360f0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010c14d580(PTR__OBJC_CLASS___NSError_1126ae858,param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,0,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b736144; end: 10b736167; -[SCRingFlashSelectionInfo copyWithZone:] */

undefined8 FUN_10b736144(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b736168; end: 10b7361eb; -[SCRingFlashSelectionInfo hash] */

undefined8 * FUN_10b736168(long param_1,undefined8 param_2,undefined8 *param_3)

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
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b736294:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b7362a0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[1] == param_3[1])) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_10b7362a0;
          }
          goto LAB_10b736294;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b7362a0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b7361ec; end: 10b7362bb; -[SCRingFlashSelectionInfo isEqual:] */

long FUN_10b7361ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b736294:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7362a0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b7362a0;
          }
          goto LAB_10b736294;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b7362a0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b7362bc; end: 10b7362c3; -[SCRingFlashSelectionInfo lastSelectedBorderWidthRatio] */

undefined8 FUN_10b7362bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7362c4; end: 10b7362cb; -[SCRingFlashSelectionInfo expectedExposureDurationFactor] */

undefined8 FUN_10b7362c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b7362cc; end: 10b736307; -[SCRingFlashSelectionInfo .cxx_destruct] */

void FUN_10b7362cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b736308; end: 10b73635f; -[SCSpeedModeSelectionInfo initWithRecordingSpeed:isHighFrameRateEnabled:] */

void FUN_10b736308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270a428;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  return;
}



/* Entry: 10b736360; end: 10b736383; -[SCSpeedModeSelectionInfo copyWithZone:] */

undefined8 FUN_10b736360(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b736384; end: 10b7363ff; -[SCSpeedModeSelectionInfo hash] */

ulong * FUN_10b736384(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  double dVar5;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_28 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_20 = (ulong)*(byte *)(param_1 + 8);
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  puVar1 = &uStack_28;
  func_0x000107c3191c(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar4 = (ulong *)0x1;
  }
  else {
    puVar4 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar4 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar2 & 1) == 0) || ((char)puVar1[1] != (char)param_3[1])) {
        puVar4 = (ulong *)0x0;
      }
      else {
        dVar5 = ABS((double)puVar1[2] + (double)param_3[2]) * 2.220446049250313e-16;
        if (dVar5 <= 2.2250738585072014e-308) {
          dVar5 = 2.2250738585072014e-308;
        }
        puVar4 = (ulong *)(ulong)(ABS((double)puVar1[2] - (double)param_3[2]) < dVar5);
      }
    }
  }
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b736400; end: 10b7364bb; -[SCSpeedModeSelectionInfo isEqual:] */

bool FUN_10b736400(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
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



/* Entry: 10b7364bc; end: 10b7364c3; -[SCSpeedModeSelectionInfo recordingSpeed] */

undefined8 FUN_10b7364bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7364c4; end: 10b7364cb; -[SCSpeedModeSelectionInfo isHighFrameRateEnabled] */

undefined1 FUN_10b7364c4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b7364cc; end: 10b73657f; -[SCCameraRingFlashLensEvent initWithColor:scaleFactor:faceDetectionEnabled:] */

undefined1 *
FUN_10b7364cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_11270a430;
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



/* Entry: 10b736580; end: 10b7365a3; -[SCCameraRingFlashLensEvent copyWithZone:] */

undefined8 FUN_10b736580(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7365a4; end: 10b73661b; -[SCCameraRingFlashLensEvent hash] */

undefined8 * FUN_10b7365a4(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_10b7366ac:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b7366b8;
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
          goto LAB_10b7366b8;
        }
        goto LAB_10b7366ac;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b7366b8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b73661c; end: 10b7366d3; -[SCCameraRingFlashLensEvent isEqual:] */

long FUN_10b73661c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b7366ac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7366b8;
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
          goto LAB_10b7366b8;
        }
        goto LAB_10b7366ac;
      }
    }
    lVar3 = 0;
  }
LAB_10b7366b8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b7366d4; end: 10b7366db; -[SCCameraRingFlashLensEvent color] */

undefined8 FUN_10b7366d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7366dc; end: 10b7366e3; -[SCCameraRingFlashLensEvent scaleFactor] */

undefined8 FUN_10b7366dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7366e4; end: 10b7366eb; -[SCCameraRingFlashLensEvent faceDetectionEnabled] */

undefined1 FUN_10b7366e4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b7366ec; end: 10b73671b; -[SCCameraRingFlashLensEvent .cxx_destruct] */

void FUN_10b7366ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b73671c; end: 10b73673f; -[SCCameraStabilizationState copyWithZone:] */

undefined8 FUN_10b73671c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b736740; end: 10b7367ab; -[SCCameraStabilizationState hash] */

undefined8 * FUN_10b736740(long param_1,undefined8 param_2,undefined1 *param_3)

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



/* Entry: 10b7367ac; end: 10b736853; -[SCCameraStabilizationState isEqual:] */

bool FUN_10b7367ac(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 10b736854; end: 10b73685b; -[SCCameraStabilizationState currentStabilizationMode] */

undefined8 FUN_10b736854(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


