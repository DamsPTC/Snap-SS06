/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b6f9504; end: 10b6f950f; -[SCMemoriesCroppingState .cxx_destruct] */

void FUN_10b6f9504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6f9510; end: 10b6f95bb; -[SCTimelineSegmentTimeRange initWithTrimmedTimeRangeValue:contentTimeRangeValue:] */

undefined1 *
FUN_10b6f9510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112709e10;
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



/* Entry: 10b6f95bc; end: 10b6f95df; -[SCTimelineSegmentTimeRange copyWithZone:] */

undefined8 FUN_10b6f95bc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6f95e0; end: 10b6f9653; -[SCTimelineSegmentTimeRange hash] */

undefined8 * FUN_10b6f95e0(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b6f96d4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b6f96e0;
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
          goto LAB_10b6f96e0;
        }
        goto LAB_10b6f96d4;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b6f96e0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b6f9654; end: 10b6f96fb; -[SCTimelineSegmentTimeRange isEqual:] */

long FUN_10b6f9654(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6f96d4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6f96e0;
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
          goto LAB_10b6f96e0;
        }
        goto LAB_10b6f96d4;
      }
    }
    lVar3 = 0;
  }
LAB_10b6f96e0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6f96fc; end: 10b6f9703; -[SCTimelineSegmentTimeRange trimmedTimeRangeValue] */

undefined8 FUN_10b6f96fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6f9704; end: 10b6f970b; -[SCTimelineSegmentTimeRange contentTimeRangeValue] */

undefined8 FUN_10b6f9704(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6f970c; end: 10b6f973b; -[SCTimelineSegmentTimeRange .cxx_destruct] */

void FUN_10b6f970c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6f973c; end: 10b6f97c3; -[SCMemoriesSnapAssetDataPackage initWithAssetData:assetType:] */

undefined1 *
FUN_10b6f973c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112709e18;
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



/* Entry: 10b6f97c4; end: 10b6f985f; -[SCMemoriesSnapAssetDataPackage initWithCoder:] */

undefined1 * FUN_10b6f97c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709e18;
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
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6f9860; end: 10b6f9883; -[SCMemoriesSnapAssetDataPackage copyWithZone:] */

undefined8 FUN_10b6f9860(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6f9884; end: 10b6f98e3; -[SCMemoriesSnapAssetDataPackage encodeWithCoder:] */

void FUN_10b6f9884(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f72678);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110ecf3b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6f98e4; end: 10b6f98eb; -[SCMemoriesSnapAssetDataPackage assetData] */

undefined8 FUN_10b6f98e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6f98ec; end: 10b6f98f3; -[SCMemoriesSnapAssetDataPackage assetType] */

undefined8 FUN_10b6f98ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6f98f4; end: 10b6f98ff; -[SCMemoriesSnapAssetDataPackage .cxx_destruct] */

void FUN_10b6f98f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6f9900; end: 10b6f99d7;  */

void FUN_10b6f9900(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f7e00 != -1) {
    func_0x000107c27d9c(0x1137f7e00,&PTR___NSConcreteGlobalBlock_110d598b0);
  }
  uVar1 = uRam00000001137f7df8;
  _objc_retain(uRam00000001137f7df8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b6f99d8; end: 10b6f99df;  */

void FUN_10b6f99d8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf145d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_backgroundTaskWrapper_1125a2b18);
  return;
}



/* Entry: 10b6f99e0; end: 10b6f9a5b;  */

void FUN_10b6f99e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126e05d0;
  _objc_opt_class(PTR_PTR_1126e05d0);
  uVar2 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar1,&PTR___NSConcreteGlobalBlock_110d59930);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b6f9a5c; end: 10b6f9a63;  */

void FUN_10b6f9a5c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf17610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_batteryLogger_1125a3728);
  return;
}



/* Entry: 10b6f9a64; end: 10b6f9a93; -[SCSystemLocationServices .cxx_destruct] */

void FUN_10b6f9a64(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6f9a94; end: 10b6f9a9b; -[SCUserLocationServices userLocationHelpers] */

undefined8 FUN_10b6f9a94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6f9a9c; end: 10b6f9ad7; -[SCUserLocationServices .cxx_destruct] */

void FUN_10b6f9a9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6f9ad8; end: 10b6f9b7b; -[SCLocationUpdatesRequest initWithAttributedFeature:wantsActiveLocationMonitoring:desiredLocationAccuracy:desiredDistanceFilter:wantsActiveHeadingMonitoring:] */

undefined1 *
FUN_10b6f9ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112709e30;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6f9b7c; end: 10b6f9b9f; -[SCLocationUpdatesRequest copyWithZone:] */

undefined8 FUN_10b6f9b7c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6f9ba0; end: 10b6f9c57; -[SCLocationUpdatesRequest hash] */

undefined8 * FUN_10b6f9ba0(long param_1,undefined8 param_2,undefined1 *param_3)

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
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uVar6 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_40 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar6 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_38 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_50 = uVar3;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10b6f9d48:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b6f9d54;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((*(char *)((long)puVar4 + 8) == param_3[8] && (*(char *)((long)puVar4 + 9) == param_3[9]))))
    {
      dVar9 = ABS(*(double *)((long)puVar4 + 0x18) - *(double *)(param_3 + 0x18));
      dVar8 = ABS(*(double *)((long)puVar4 + 0x18) + *(double *)(param_3 + 0x18)) *
              2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
        bVar2 = dVar9 < dVar8;
      }
      if (bVar2) {
        dVar9 = ABS(*(double *)((long)puVar4 + 0x20) - *(double *)(param_3 + 0x20));
        dVar8 = ABS(*(double *)((long)puVar4 + 0x20) + *(double *)(param_3 + 0x20)) *
                2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
          bVar2 = dVar9 < dVar8;
        }
        if (bVar2) {
          puVar7 = *(undefined1 **)((long)puVar4 + 0x10);
          if (puVar7 != *(undefined1 **)(param_3 + 0x10)) {
            func_0x00010c071ae0();
            goto LAB_10b6f9d54;
          }
          goto LAB_10b6f9d48;
        }
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_10b6f9d54:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 10b6f9c58; end: 10b6f9d6f; -[SCLocationUpdatesRequest isEqual:] */

long FUN_10b6f9c58(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6f9d48:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6f9d54;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
        dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          lVar4 = *(long *)(param_1 + 0x10);
          if (lVar4 != *(long *)(param_3 + 0x10)) {
            func_0x00010c071ae0();
            goto LAB_10b6f9d54;
          }
          goto LAB_10b6f9d48;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b6f9d54:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b6f9d70; end: 10b6f9d77; -[SCLocationUpdatesRequest attributedFeature] */

undefined8 FUN_10b6f9d70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6f9d78; end: 10b6f9d7f; -[SCLocationUpdatesRequest wantsActiveLocationMonitoring] */

undefined1 FUN_10b6f9d78(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b6f9d80; end: 10b6f9d87; -[SCLocationUpdatesRequest desiredLocationAccuracy] */

undefined8 FUN_10b6f9d80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6f9d88; end: 10b6f9d8f; -[SCLocationUpdatesRequest desiredDistanceFilter] */

undefined8 FUN_10b6f9d88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6f9d90; end: 10b6f9d97; -[SCLocationUpdatesRequest wantsActiveHeadingMonitoring] */

undefined1 FUN_10b6f9d90(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b6f9d98; end: 10b6f9da3; -[SCLocationUpdatesRequest .cxx_destruct] */

void FUN_10b6f9d98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6f9da4; end: 10b6f9def; +[SCLocationUpdate didFail] */

void FUN_10b6f9da4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bc3a0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6f9df0; end: 10b6f9e3b; +[SCLocationUpdate didUpdateHeading] */

void FUN_10b6f9df0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bc3a0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6f9e3c; end: 10b6f9e83; +[SCLocationUpdate didUpdateLocations] */

void FUN_10b6f9e3c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bc3a0;
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



/* Entry: 10b6f9e84; end: 10b6f9ea7; -[SCLocationUpdate copyWithZone:] */

undefined8 FUN_10b6f9e84(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6f9ea8; end: 10b6f9eaf; -[SCLocationUpdate hash] */

undefined8 FUN_10b6f9ea8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6f9eb0; end: 10b6f9ef3; -[SCLocationUpdate internalInit] */

void FUN_10b6f9eb0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112709e38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6f9ef4; end: 10b6f9f7b; -[SCLocationUpdate isEqual:] */

bool FUN_10b6f9ef4(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 10b6f9f7c; end: 10b6fa017; -[SCLocationUpdate matchDidUpdateLocations:didUpdateHeading:didFail:] */

void FUN_10b6f9f7c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = param_5;
  if ((((lVar2 == 2) || (lVar1 = param_4, lVar2 == 1)) || (lVar1 = param_3, lVar2 == 0)) &&
     (lVar1 != 0)) {
    (**(code **)(lVar1 + 0x10))();
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6fa018; end: 10b6fa123; -[SCLocationVisitEvent initWithCoordinate:horizontalAccuracy:arrivalDate:departureDate:details:significantChangeMonitoringAvailable:] */

undefined1 *
FUN_10b6fa018(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_68 = PTR_PTR_112709e40;
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



/* Entry: 10b6fa124; end: 10b6fa147; -[SCLocationVisitEvent copyWithZone:] */

undefined8 FUN_10b6fa124(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6fa148; end: 10b6fa22f; -[SCLocationVisitEvent hash] */

ulong * FUN_10b6fa148(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (ulong *)param_3) {
LAB_10b6fa33c:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b6fa348;
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
          goto LAB_10b6fa348;
        }
        goto LAB_10b6fa33c;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10b6fa348:
  _objc_release(param_3);
  return (ulong *)puVar8;
}



/* Entry: 10b6fa230; end: 10b6fa363; -[SCLocationVisitEvent isEqual:] */

long FUN_10b6fa230(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6fa33c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6fa348;
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
          goto LAB_10b6fa348;
        }
        goto LAB_10b6fa33c;
      }
    }
    lVar4 = 0;
  }
LAB_10b6fa348:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b6fa364; end: 10b6fa36b; -[SCLocationVisitEvent coordinate] */

undefined1  [16] FUN_10b6fa364(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x30);
}



/* Entry: 10b6fa36c; end: 10b6fa373; -[SCLocationVisitEvent horizontalAccuracy] */

undefined8 FUN_10b6fa36c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6fa374; end: 10b6fa37b; -[SCLocationVisitEvent arrivalDate] */

undefined8 FUN_10b6fa374(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6fa37c; end: 10b6fa383; -[SCLocationVisitEvent departureDate] */

undefined8 FUN_10b6fa37c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6fa384; end: 10b6fa38b; -[SCLocationVisitEvent details] */

undefined8 FUN_10b6fa384(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b6fa38c; end: 10b6fa393; -[SCLocationVisitEvent significantChangeMonitoringAvailable] */

undefined1 FUN_10b6fa38c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b6fa394; end: 10b6fa3cf; -[SCLocationVisitEvent .cxx_destruct] */

void FUN_10b6fa394(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b6fa3d0; end: 10b6fa41b; +[SCDeviceLocationPermissionsUpdate didFail] */

void FUN_10b6fa3d0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bc348;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6fa41c; end: 10b6fa43f; -[SCDeviceLocationPermissionsUpdate copyWithZone:] */

undefined8 FUN_10b6fa41c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6fa440; end: 10b6fa4a7; -[SCDeviceLocationPermissionsUpdate hash] */

undefined8 * FUN_10b6fa440(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 0x10);
  lStack_28 = (long)*(int *)(param_1 + 0x14);
  uStack_20 = *(undefined8 *)(param_1 + 0x18);
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
         (((puVar1[1] != param_3[1] || (*(char *)(puVar1 + 2) != *(char *)(param_3 + 2))) ||
          (*(int *)((long)puVar1 + 0x14) != *(int *)((long)param_3 + 0x14))))) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        puVar3 = (undefined8 *)(ulong)(puVar1[3] == param_3[3]);
      }
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10b6fa4a8; end: 10b6fa55f; -[SCDeviceLocationPermissionsUpdate isEqual:] */

bool FUN_10b6fa4a8(ulong param_1,undefined8 param_2,ulong param_3)

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
         (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
           (*(char *)(param_1 + 0x10) != *(char *)(param_3 + 0x10))) ||
          (*(int *)(param_1 + 0x14) != *(int *)(param_3 + 0x14))))) {
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



/* Entry: 10b6fa560; end: 10b6fa5cb; +[SCUserLocationPermissionsUpdate didFailWithError:] */

void FUN_10b6fa560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bc370;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6fa5cc; end: 10b6fa61f; +[SCUserLocationPermissionsUpdate didUpdateAuthorizationWithPermissionStatus:] */

void FUN_10b6fa5cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bc370;
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



/* Entry: 10b6fa620; end: 10b6fa643; -[SCUserLocationPermissionsUpdate copyWithZone:] */

undefined8 FUN_10b6fa620(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6fa644; end: 10b6fa6ab; -[SCUserLocationPermissionsUpdate hash] */

undefined8 * FUN_10b6fa644(long param_1,undefined8 param_2,undefined1 *param_3)

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
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b6fa750;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       (((*(long *)((long)puVar2 + 8) != *(long *)(param_3 + 8) ||
         (*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10))) ||
        (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10b6fa750;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x20);
    if (puVar4 != *(undefined1 **)(param_3 + 0x20)) {
      func_0x00010c071ae0();
      goto LAB_10b6fa750;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10b6fa750:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10b6fa6ac; end: 10b6fa76b; -[SCUserLocationPermissionsUpdate isEqual:] */

long FUN_10b6fa6ac(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6fa750;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
         (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_10b6fa750;
    }
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != *(long *)(param_3 + 0x20)) {
      func_0x00010c071ae0();
      goto LAB_10b6fa750;
    }
  }
  lVar3 = 1;
LAB_10b6fa750:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6fa76c; end: 10b6fa7c7; +[SCLocationOperationsUpdate didChangeAuthorizationWithUserDidGrantAuthorization:] */

void FUN_10b6fa76c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bc340;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  puVar2[0x29] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6fa7c8; end: 10b6fa837; +[SCLocationOperationsUpdate observerStartedUpdatingWithAttributedFeature:userDidGrantAuthorization:] */

void FUN_10b6fa7c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bc340;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
  puVar2[0x18] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6fa838; end: 10b6fa8ab; +[SCLocationOperationsUpdate observerStoppedUpdatingWithAttributedFeature:userDidGrantAuthorization:] */

void FUN_10b6fa838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bc340;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
  puVar2[0x28] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6fa8ac; end: 10b6fa8f3; +[SCLocationOperationsUpdate startedCLManager] */

void FUN_10b6fa8ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bc340;
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



/* Entry: 10b6fa8f4; end: 10b6fa93f; +[SCLocationOperationsUpdate stoppedCLManager] */

void FUN_10b6fa8f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bc340;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6fa940; end: 10b6fa963; -[SCLocationOperationsUpdate copyWithZone:] */

undefined8 FUN_10b6fa940(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6fa964; end: 10b6fa9eb; -[SCLocationOperationsUpdate hash] */

void FUN_10b6fa964(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 0x28);
  uStack_30 = (ulong)*(byte *)(param_1 + 0x29);
  puVar3 = &uStack_58;
  uStack_40 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_112709e58;
  puStack_90 = puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6fa9ec; end: 10b6faa2f; -[SCLocationOperationsUpdate internalInit] */

void FUN_10b6fa9ec(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112709e58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6faa30; end: 10b6fab17; -[SCLocationOperationsUpdate isEqual:] */

long FUN_10b6faa30(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6faaf0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6faafc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
          (*(char *)(param_1 + 0x18) == *(char *)(param_3 + 0x18))) &&
         (*(char *)(param_1 + 0x28) == *(char *)(param_3 + 0x28))))) &&
       (*(char *)(param_1 + 0x29) == *(char *)(param_3 + 0x29))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b6faafc;
        }
        goto LAB_10b6faaf0;
      }
    }
    lVar3 = 0;
  }
LAB_10b6faafc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6fab18; end: 10b6fac3f; -[SCLocationOperationsUpdate matchStartedCLManager:stoppedCLManager:observerStartedUpdating:observerStoppedUpdating:didChangeAuthorization:] */

void FUN_10b6fab18(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

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
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 < 2) {
    if (lVar3 == 0) {
      if (param_3 == 0) goto LAB_10b6fac08;
      pcVar4 = *(code **)(param_3 + 0x10);
      lVar3 = param_3;
    }
    else {
      if ((lVar3 != 1) || (param_4 == 0)) goto LAB_10b6fac08;
      pcVar4 = *(code **)(param_4 + 0x10);
      lVar3 = param_4;
    }
    (*pcVar4)(lVar3);
    goto LAB_10b6fac08;
  }
  if (lVar3 == 2) {
    if (param_5 == 0) goto LAB_10b6fac08;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined1 *)(param_1 + 0x18);
    pcVar4 = *(code **)(param_5 + 0x10);
    lVar3 = param_5;
  }
  else {
    if (lVar3 != 3) {
      if ((lVar3 == 4) && (param_7 != 0)) {
        (**(code **)(param_7 + 0x10))(param_7,*(undefined1 *)(param_1 + 0x29));
      }
      goto LAB_10b6fac08;
    }
    if (param_6 == 0) goto LAB_10b6fac08;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined1 *)(param_1 + 0x28);
    pcVar4 = *(code **)(param_6 + 0x10);
    lVar3 = param_6;
  }
  (*pcVar4)(lVar3,uVar2,uVar1);
LAB_10b6fac08:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6fac40; end: 10b6fac6f; -[SCLocationOperationsUpdate .cxx_destruct] */

void FUN_10b6fac40(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6fac70; end: 10b6fac7b; +[SCCMapLocationShareUpsellTrayActionHandler valdiMarshallableObjectDescriptor] */

void FUN_10b6fac70(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d59960;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b6fac7c; end: 10b6fac87; +[SCCMapLocationShareUpsellTrayUkU18ActionHandler valdiMarshallableObjectDescriptor] */

void FUN_10b6fac7c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d599c0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b6fac88; end: 10b6fac93; +[SCCMapLocationShareUpsellTrayMapLocationShareUpsellTrayComponent componentPath] */

undefined ** FUN_10b6fac88(void)

{
  return &PTR____CFConstantStringClassReference_110f726b8;
}



/* Entry: 10b6fac94; end: 10b6facb7; -[SCCMapLocationShareUpsellTrayMapLocationShareUpsellTrayComponent initWithViewModel:componentContext:runtime:] */

void FUN_10b6fac94(void)

{
  func_0x00010b6fadec(PTR_PTR_112709e60);
  return;
}



/* Entry: 10b6facb8; end: 10b6facef; -[SCCMapLocationShareUpsellTrayMapLocationShareUpsellTrayComponent setViewModel:] */

void FUN_10b6facb8(void)

{
  func_0x00010b6fae08();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b6fae18();
  func_0x00010b6fae00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b6facf0; end: 10b6fad2f; -[SCCMapLocationShareUpsellTrayMapLocationShareUpsellTrayComponent viewModel] */

void FUN_10b6facf0(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b6fae00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6fad30; end: 10b6fad3b; +[SCCMapLocationShareUpsellTrayMapPermissionUpsellUkU18Component componentPath] */

undefined ** FUN_10b6fad30(void)

{
  return &PTR____CFConstantStringClassReference_110f726d8;
}



/* Entry: 10b6fad3c; end: 10b6fad5f; -[SCCMapLocationShareUpsellTrayMapPermissionUpsellUkU18Component initWithViewModel:componentContext:runtime:] */

void FUN_10b6fad3c(void)

{
  func_0x00010b6fadec(PTR_PTR_112709e68);
  return;
}



/* Entry: 10b6fad60; end: 10b6fad97; -[SCCMapLocationShareUpsellTrayMapPermissionUpsellUkU18Component setViewModel:] */

void FUN_10b6fad60(void)

{
  func_0x00010b6fae08();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b6fae18();
  func_0x00010b6fae00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b6fad98; end: 10b6fadd7; -[SCCMapLocationShareUpsellTrayMapPermissionUpsellUkU18Component viewModel] */

void FUN_10b6fad98(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b6fae00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b6fadd8; end: 10b6fae23;  */

void FUN_10b6fadd8(undefined8 *param_1)

{
  undefined8 in_x9;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = in_x9;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b6fae24; end: 10b6fae2b; -[SCCBackgroundLocationUpsellType__Enum init] */

void FUN_10b6fae24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 10b6fae2c; end: 10b6fae33; -[SCCMapLocationShareUpsellTrayMapLocationShareUpsellImageType__Enum init] */

void FUN_10b6fae2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b6fae34; end: 10b6fae73; -[SCCMapLocationShareUpsellTrayMapLocationShareUpsellTrayContext initWithActionHandler:] */

void FUN_10b6fae34(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709e70;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b6fae74; end: 10b6fae87; +[SCCMapLocationShareUpsellTrayMapLocationShareUpsellTrayContext valdiMarshallableObjectDescriptor] */

void FUN_10b6fae74(undefined8 *param_1)

{
  *param_1 = &PTR_s_actionHandler_110d59a08;
  param_1[1] = &PTR_DAT_110d59a80;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6fae88; end: 10b6faeab; -[SCCMapLocationShareUpsellTrayMapLocationShareUpsellTrayViewModel initWithType:] */

void FUN_10b6fae88(void)

{
  func_0x00010b6faf08(PTR_PTR_112709e78);
  return;
}



/* Entry: 10b6faeac; end: 10b6faebf; +[SCCMapLocationShareUpsellTrayMapLocationShareUpsellTrayViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b6faeac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d59a98;
  param_1[1] = &PTR_DAT_110d59ac8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6faec0; end: 10b6faee3; -[SCCMapLocationShareUpsellTrayMapPermissionUpsellUkU18Context initWithActionHandler:] */

void FUN_10b6faec0(void)

{
  func_0x00010b6faf08(PTR_PTR_112709e80);
  return;
}



/* Entry: 10b6faee4; end: 10b6faf23; +[SCCMapLocationShareUpsellTrayMapPermissionUpsellUkU18Context valdiMarshallableObjectDescriptor] */

void FUN_10b6faee4(undefined8 *param_1)

{
  *param_1 = &PTR_s_actionHandler_110d59ad8;
  param_1[1] = &PTR_DAT_110d59b08;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6faf24; end: 10b6faf53; -[SCUserExtensionStorageServices .cxx_destruct] */

void FUN_10b6faf24(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6faf54; end: 10b6faf5b; -[SCMemoriesMediaRetrievalServices mediaRetriever] */

undefined8 FUN_10b6faf54(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6faf5c; end: 10b6faf67; -[SCMemoriesMediaRetrievalServices .cxx_destruct] */

void FUN_10b6faf5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6faf68; end: 10b6fb01b; -[SCMemoriesMediaRetrievalDataResult initWithProgress:result:data:] */

undefined1 *
FUN_10b6faf68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112709ea0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6fb01c; end: 10b6fb023; -[SCMemoriesMediaRetrievalDataResult progress] */

undefined8 FUN_10b6fb01c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6fb024; end: 10b6fb02b; -[SCMemoriesMediaRetrievalDataResult result] */

undefined8 FUN_10b6fb024(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6fb02c; end: 10b6fb033; -[SCMemoriesMediaRetrievalDataResult data] */

undefined8 FUN_10b6fb02c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6fb034; end: 10b6fb063; -[SCMemoriesMediaRetrievalDataResult .cxx_destruct] */

void FUN_10b6fb034(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6fb064; end: 10b6fb14b; -[SCMemoriesMediaRetrievalUrlResult initWithResult:url:key:iv:] */

undefined1 *
FUN_10b6fb064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112709ea8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
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
  return (undefined1 *)puVar1;
}



/* Entry: 10b6fb14c; end: 10b6fb153; -[SCMemoriesMediaRetrievalUrlResult result] */

undefined8 FUN_10b6fb14c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


