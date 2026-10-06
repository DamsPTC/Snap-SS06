/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109113f00; end: 109113f07; -[SCPlaybackPlayerSnapshot playbackPosition] */

undefined8 FUN_109113f00(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109113f08; end: 109113f0f; -[SCPlaybackPlayerSnapshot totalDuration] */

undefined8 FUN_109113f08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109113f10; end: 109113f17; -[SCPlaybackPlayerSnapshot state] */

undefined8 FUN_109113f10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109113f18; end: 109113f33; +[SCPlaybackPlayerSnapshotBuilder playbackPlayerSnapshot] */

void FUN_109113f18(void)

{
  _objc_alloc_init(PTR_PTR_1126dd628);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109113f34; end: 109114003; +[SCPlaybackPlayerSnapshotBuilder playbackPlayerSnapshotFromExistingPlaybackPlayerSnapshot:] */

void FUN_109113f34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126dd628;
  _objc_retain(param_3);
  func_0x00010c0ffd40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ffd60(param_3);
  puVar2 = puVar1;
  func_0x00010c2b5700(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c276460(param_3);
  puVar3 = puVar2;
  func_0x00010c2bb7e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c252440(param_3);
  _objc_release(param_3);
  puVar5 = puVar3;
  func_0x00010c2b9fa0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 109114004; end: 109114037; -[SCPlaybackPlayerSnapshotBuilder build] */

void FUN_109114004(long param_1)

{
  _objc_alloc(PTR_PTR_1126dd638);
  func_0x00010c036d80(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109114038; end: 10911403f; -[SCPlaybackPlayerSnapshotBuilder withPlaybackPosition:] */

void FUN_109114038(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 109114040; end: 109114047; -[SCPlaybackPlayerSnapshotBuilder withTotalDuration:] */

void FUN_109114040(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 109114048; end: 10911404f; -[SCPlaybackPlayerSnapshotBuilder withState:] */

void FUN_109114048(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 109114050; end: 10911409b; -[SCPlaybackEventTime initWithEventTime:playbackPosition:] */

void FUN_109114050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127006e8;
  uStack_30 = param_3;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
  }
  return;
}



/* Entry: 10911409c; end: 1091140bf; -[SCPlaybackEventTime copyWithZone:] */

undefined8 FUN_10911409c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1091140c0; end: 109114153; -[SCPlaybackEventTime hash] */

ulong * FUN_1091140c0(long param_1,undefined8 param_2,ulong *param_3)

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
          goto LAB_109114218;
        }
      }
      puVar6 = (ulong *)0x0;
    }
  }
LAB_109114218:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 109114154; end: 109114233; -[SCPlaybackEventTime isEqual:] */

bool FUN_109114154(ulong param_1,undefined8 param_2,ulong param_3)

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
          goto LAB_109114218;
        }
      }
      bVar1 = false;
    }
  }
LAB_109114218:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 109114234; end: 10911423b; -[SCPlaybackEventTime eventTime] */

undefined8 FUN_109114234(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10911423c; end: 109114243; -[SCPlaybackEventTime playbackPosition] */

undefined8 FUN_10911423c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109114244; end: 10911434f; -[SCNeoPlayerSuperResolutionAnalyticsData initWithModelId:videoFrameRate:framesProcessed:framesSkipped:scaleFactor:minProcessingTimeMs:maxProcessingTimeMs:meanProcessingTimeMs:firstFrameProcessingTimeMs:modelLoadingTimeMs:disableReason:] */

undefined1 *
FUN_109114244(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puVar1 = &uStack_90;
  _objc_retain(param_10);
  _objc_retain(param_13);
  puStack_88 = PTR_PTR_1127006f0;
  uStack_90 = param_8;
  _objc_msgSendSuper2(&uStack_90,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_11;
    *(undefined8 *)((long)puVar1 + 0x20) = param_12;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    *(undefined8 *)((long)puVar1 + 0x40) = param_5;
    *(undefined8 *)((long)puVar1 + 0x48) = param_6;
    *(undefined8 *)((long)puVar1 + 0x50) = param_7;
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_13);
  _objc_release(param_10);
  return (undefined1 *)puVar1;
}



/* Entry: 109114350; end: 109114373; -[SCNeoPlayerSuperResolutionAnalyticsData copyWithZone:] */

undefined8 FUN_109114350(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109114374; end: 1091144d7; -[SCNeoPlayerSuperResolutionAnalyticsData hash] */

undefined8 * FUN_109114374(long param_1,undefined8 param_2,undefined1 *param_3)

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
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar5 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_78 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_60 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_58 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_50 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_48 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uStack_70 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_68 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_40 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_38 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  uStack_80 = uVar3;
  func_0x00010bfde980();
  uStack_30 = uVar4;
  func_0x000107c3191c(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (undefined8 *)param_3) {
LAB_1091146ec:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1091146f8;
    puVar9 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar6 & 1) != 0) &&
       ((*(long *)((long)puVar5 + 0x18) == *(long *)(param_3 + 0x18) &&
        (*(long *)((long)puVar5 + 0x20) == *(long *)(param_3 + 0x20))))) {
      dVar11 = ABS(*(double *)((long)puVar5 + 0x10) - *(double *)(param_3 + 0x10));
      dVar10 = ABS(*(double *)((long)puVar5 + 0x10) + *(double *)(param_3 + 0x10)) *
               2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar2 = dVar11 < dVar10;
      }
      if (bVar2) {
        dVar11 = ABS(*(double *)((long)puVar5 + 0x28) - *(double *)(param_3 + 0x28));
        dVar10 = ABS(*(double *)((long)puVar5 + 0x28) + *(double *)(param_3 + 0x28)) *
                 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
          bVar2 = dVar11 < dVar10;
        }
        if (bVar2) {
          dVar11 = ABS(*(double *)((long)puVar5 + 0x30) - *(double *)(param_3 + 0x30));
          dVar10 = ABS(*(double *)((long)puVar5 + 0x30) + *(double *)(param_3 + 0x30)) *
                   2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10)))
          {
            bVar2 = dVar11 < dVar10;
          }
          if (bVar2) {
            dVar11 = ABS(*(double *)((long)puVar5 + 0x38) - *(double *)(param_3 + 0x38));
            dVar10 = ABS(*(double *)((long)puVar5 + 0x38) + *(double *)(param_3 + 0x38)) *
                     2.220446049250313e-16;
            bVar2 = true;
            if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))
               ) {
              bVar2 = dVar11 < dVar10;
            }
            if (bVar2) {
              dVar10 = ABS(*(double *)((long)puVar5 + 0x40) - *(double *)(param_3 + 0x40));
              if ((dVar10 < 2.2250738585072014e-308) ||
                 (dVar10 < ABS(*(double *)((long)puVar5 + 0x40) + *(double *)(param_3 + 0x40)) *
                           2.220446049250313e-16)) {
                dVar10 = ABS(*(double *)((long)puVar5 + 0x48) - *(double *)(param_3 + 0x48));
                if ((dVar10 < 2.2250738585072014e-308) ||
                   (dVar10 < ABS(*(double *)((long)puVar5 + 0x48) + *(double *)(param_3 + 0x48)) *
                             2.220446049250313e-16)) {
                  dVar10 = ABS(*(double *)((long)puVar5 + 0x50) - *(double *)(param_3 + 0x50));
                  if (((dVar10 < 2.2250738585072014e-308) ||
                      (dVar10 < ABS(*(double *)((long)puVar5 + 0x50) + *(double *)(param_3 + 0x50))
                                * 2.220446049250313e-16)) &&
                     ((lVar7 = *(long *)((long)puVar5 + 8), lVar7 == *(long *)(param_3 + 8) ||
                      (func_0x00010c071ae0(), (int)lVar7 != 0)))) {
                    puVar9 = *(undefined1 **)((long)puVar5 + 0x58);
                    if (puVar9 != *(undefined1 **)(param_3 + 0x58)) {
                      func_0x00010c071ae0();
                      goto LAB_1091146f8;
                    }
                    goto LAB_1091146ec;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_1091146f8:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 1091144d8; end: 109114713; -[SCNeoPlayerSuperResolutionAnalyticsData isEqual:] */

long FUN_1091144d8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1091146ec:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1091146f8;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
        dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          dVar6 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
          dVar5 = ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
            bVar1 = dVar6 < dVar5;
          }
          if (bVar1) {
            dVar6 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
            dVar5 = ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                    2.220446049250313e-16;
            bVar1 = true;
            if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
              bVar1 = dVar6 < dVar5;
            }
            if (bVar1) {
              dVar5 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40));
              if ((dVar5 < 2.2250738585072014e-308) ||
                 (dVar5 < ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) *
                          2.220446049250313e-16)) {
                dVar5 = ABS(*(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x48));
                if ((dVar5 < 2.2250738585072014e-308) ||
                   (dVar5 < ABS(*(double *)(param_1 + 0x48) + *(double *)(param_3 + 0x48)) *
                            2.220446049250313e-16)) {
                  dVar5 = ABS(*(double *)(param_1 + 0x50) - *(double *)(param_3 + 0x50));
                  if (((dVar5 < 2.2250738585072014e-308) ||
                      (dVar5 < ABS(*(double *)(param_1 + 0x50) + *(double *)(param_3 + 0x50)) *
                               2.220446049250313e-16)) &&
                     ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
                      (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
                    lVar4 = *(long *)(param_1 + 0x58);
                    if (lVar4 != *(long *)(param_3 + 0x58)) {
                      func_0x00010c071ae0();
                      goto LAB_1091146f8;
                    }
                    goto LAB_1091146ec;
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_1091146f8:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 109114714; end: 10911471b; -[SCNeoPlayerSuperResolutionAnalyticsData modelId] */

undefined8 FUN_109114714(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10911471c; end: 109114723; -[SCNeoPlayerSuperResolutionAnalyticsData videoFrameRate] */

undefined8 FUN_10911471c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109114724; end: 10911472b; -[SCNeoPlayerSuperResolutionAnalyticsData framesProcessed] */

undefined8 FUN_109114724(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10911472c; end: 109114733; -[SCNeoPlayerSuperResolutionAnalyticsData framesSkipped] */

undefined8 FUN_10911472c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 109114734; end: 10911473b; -[SCNeoPlayerSuperResolutionAnalyticsData scaleFactor] */

undefined8 FUN_109114734(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10911473c; end: 109114743; -[SCNeoPlayerSuperResolutionAnalyticsData minProcessingTimeMs] */

undefined8 FUN_10911473c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 109114744; end: 10911474b; -[SCNeoPlayerSuperResolutionAnalyticsData maxProcessingTimeMs] */

undefined8 FUN_109114744(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10911474c; end: 109114753; -[SCNeoPlayerSuperResolutionAnalyticsData meanProcessingTimeMs] */

undefined8 FUN_10911474c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 109114754; end: 10911475b; -[SCNeoPlayerSuperResolutionAnalyticsData firstFrameProcessingTimeMs] */

undefined8 FUN_109114754(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10911475c; end: 109114763; -[SCNeoPlayerSuperResolutionAnalyticsData modelLoadingTimeMs] */

undefined8 FUN_10911475c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 109114764; end: 10911476b; -[SCNeoPlayerSuperResolutionAnalyticsData disableReason] */

undefined8 FUN_109114764(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10911476c; end: 10911479b; -[SCNeoPlayerSuperResolutionAnalyticsData .cxx_destruct] */

void FUN_10911476c(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10911479c; end: 10911498f; -[SCNGSMEVideoAssetMutator initWithNGSMESnap:videoRenderSize:ignoreSegmentTransform:recordDetailedErrors:] */

long FUN_10911479c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined1 param_6,int param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  func_0x00010bfee200();
  if (param_3 == 0) goto LAB_109114938;
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_3 + 0x78);
  *(long *)(param_3 + 0x78) = param_5;
  _objc_release(uVar1);
  *(undefined8 *)(param_3 + 8) = param_1;
  *(undefined8 *)(param_3 + 0x10) = param_2;
  *(undefined1 *)(param_3 + 0x18) = 0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_3 + 0x50);
  *(undefined **)(param_3 + 0x50) = puVar2;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_3 + 0x58);
  *(undefined8 *)(param_3 + 0x58) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_3 + 0x70) = param_6;
  puVar2 = PTR__CGAffineTransformIdentity_110347008;
  uVar1 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  *(undefined8 *)(param_3 + 0x20) = uVar1;
  *(undefined8 *)(param_3 + 0x38) = uVar7;
  *(undefined8 *)(param_3 + 0x30) = uVar6;
  uVar1 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(param_3 + 0x48) = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(param_3 + 0x40) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x60);
  *(undefined8 *)(param_3 + 0x60) = 0;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126dd640;
  _objc_alloc_init();
  uVar1 = *(undefined8 *)(param_3 + 0x68);
  *(undefined **)(param_3 + 0x68) = puVar2;
  _objc_release(uVar1);
  if (param_7 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar1 = *(undefined8 *)(param_3 + 0x60);
    *(undefined **)(param_3 + 0x60) = puVar2;
    _objc_release(uVar1);
  }
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  if (param_5 == 0) goto LAB_10911497c;
  lVar4 = *(long *)(param_5 + 8);
  _objc_retain(lVar4);
  if (lVar4 == 0) goto LAB_109114988;
  lVar3 = *(long *)(lVar4 + 8);
  while( true ) {
    _objc_retain(lVar3);
    _objc_release(lVar4);
    lVar4 = lVar3;
    func_0x00010bf52a60(lVar3,param_4,&uStack_120,auStack_d8,0x10);
    if (lVar4 != 0) {
      lVar5 = *plStack_110;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        lVar4 = lVar4 + -1;
      } while ((lVar4 != 0) ||
              (lVar4 = lVar3, func_0x00010bf52a60(lVar3,param_4,&uStack_120,auStack_d8,0x10),
              lVar4 != 0));
    }
    _objc_release(lVar3);
LAB_109114938:
    _objc_release(param_5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) break;
    ___stack_chk_fail();
LAB_10911497c:
    _objc_retain(0);
    lVar4 = 0;
LAB_109114988:
    lVar3 = 0;
  }
  return param_3;
}



/* Entry: 109114990; end: 109114a9b; -[SCNGSMEVideoAssetMutator generateMutatedVideoAssetWithErrorType:isForPlayback:] */

void FUN_109114990(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  *param_3 = 0;
  puVar1 = PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
  func_0x00010bf45600(PTR__OBJC_CLASS___AVMutableComposition_1126beaa8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bea9c80(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x78) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x18);
  }
  _objc_retain(uVar4);
  func_0x00010bea8e40(param_1);
  _objc_release(uVar4);
  _objc_opt_class(param_1);
  func_0x00010bf0f380();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126da158;
  _objc_alloc(PTR_PTR_1126da158);
  FUN_10911aa24();
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 109114a9c; end: 109114ac3; -[SCNGSMEVideoAssetMutator NGSMEInputIdToTrackId] */

void FUN_109114a9c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109114ac4; end: 109114e1b; -[SCNGSMEVideoAssetMutator _setUpAudiotracksInComposition:audioRenderDAGs:withErrorType:isForPlayback:] */

void FUN_109114ac4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,ulong param_6)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puStack_3a0;
  long lStack_368;
  long *plStack_360;
  long lStack_220;
  undefined8 *puStack_1f8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x78) == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 8);
  }
  _objc_retain(puVar7);
  puVar2 = puVar7;
  FUN_10911c960(puVar7,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (((param_6 & 1) == 0) && (lVar14 = param_4, func_0x00010bf529e0(), lVar14 == 1)) {
    lVar14 = param_4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lStack_220 = param_1;
    puVar7 = puVar2;
    func_0x00010bebc220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    if (lStack_220 == 0) goto LAB_109114bbc;
    lVar14 = lStack_220;
    func_0x00010c2827c0();
    if (lVar14 == 0) goto LAB_109114db8;
    bVar1 = false;
  }
  else {
LAB_109114bbc:
    lStack_220 = 0;
    bVar1 = true;
  }
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  _objc_retain(puVar2);
  puVar7 = &uStack_1b0;
  puStack_1f8 = puVar2;
  func_0x00010bf52a60();
  if (puStack_1f8 != (undefined8 *)0x0) {
    lVar14 = *plStack_1a0;
    do {
      puVar7 = (undefined8 *)0x0;
      do {
        if (*plStack_1a0 != lVar14) {
          _objc_enumerationMutation(puVar2);
        }
        lVar12 = *(long *)(lStack_1a8 + (long)puVar7 * 8);
        if (lVar12 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = *(long *)(lVar12 + 0x20);
        }
        _objc_retain(lVar8);
        lVar5 = lVar8;
        func_0x00010bf529e0();
        _objc_release(lVar8);
        if (lVar5 != 0) {
          if (!bVar1) {
            lVar8 = lStack_220;
            func_0x00010c2827c0();
            if (lVar12 == 0) {
              lVar5 = 0;
            }
            else {
              lVar5 = *(long *)(lVar12 + 0x10);
            }
            if (lVar8 != lVar5) goto LAB_109114d5c;
          }
          uVar11 = param_3;
          func_0x00010bef9f20(param_3);
          _objc_retainAutoreleasedReturnValue();
          if (lVar12 == 0) {
            lVar12 = 0;
          }
          else {
            lVar12 = *(long *)(lVar12 + 0x20);
          }
          _objc_retain(lVar12);
          lVar8 = lVar12;
          func_0x00010bf52a60();
          lVar5 = lRam0000000000000000;
          while (lVar8 != 0) {
            lVar13 = 0;
            do {
              if (lRam0000000000000000 != lVar5) {
                _objc_enumerationMutation(lVar12);
              }
              func_0x00010be3c660(param_1);
              lVar13 = lVar13 + 1;
            } while (lVar8 != lVar13);
            lVar8 = lVar12;
            func_0x00010bf52a60();
          }
          _objc_release(lVar12);
          _objc_release(uVar11);
        }
LAB_109114d5c:
        puVar7 = (undefined8 *)((long)puVar7 + 1);
      } while (puVar7 != puStack_1f8);
      puVar7 = &uStack_1b0;
      puStack_1f8 = puVar2;
      func_0x00010bf52a60();
    } while (puStack_1f8 != (undefined8 *)0x0);
  }
  _objc_release(puVar2);
LAB_109114db8:
  _objc_release(lStack_220);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar7);
  if (puVar7 == (undefined8 *)0x0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = (undefined *)puVar7[3];
  }
  _objc_retain(puVar9);
  puVar3 = puVar9;
  func_0x00010bf529e0();
  _objc_release(puVar9);
  puVar4 = (undefined *)0x0;
  if (puVar3 == (undefined *)0x0) goto LAB_109115008;
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_368 = 0;
  plStack_360 = (long *)0x0;
  puStack_3a0 = puVar7;
  if (puVar7 == (undefined8 *)0x0) goto LAB_10911505c;
  lVar12 = puVar7[3];
  while( true ) {
    _objc_retain(lVar12);
    lVar8 = lVar12;
    func_0x00010bf52a60();
    if (lVar8 != 0) {
      lVar5 = *plStack_360;
      do {
        lVar13 = 0;
        do {
          if (*plStack_360 != lVar5) {
            _objc_enumerationMutation(lVar12);
          }
          lVar6 = *(long *)(lStack_368 + lVar13 * 8);
          if (lVar6 == 0) {
            lVar10 = 0;
          }
          else {
            lVar10 = *(long *)(lVar6 + 0x18);
          }
          _objc_retain(lVar10);
          _objc_release(lVar10);
          if (lVar10 == 0) {
            if (lVar6 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = *(undefined8 *)(lVar6 + 0x10);
            }
            _objc_retain(uVar11);
            _objc_retain(puVar9);
            func_0x00010bf97ce0(uVar11);
            _objc_release(uVar11);
            _objc_release(puVar9);
          }
          lVar13 = lVar13 + 1;
        } while (lVar8 != lVar13);
        lVar8 = lVar12;
        func_0x00010bf52a60();
      } while (lVar8 != 0);
    }
    _objc_release(lVar12);
    puVar3 = PTR__OBJC_CLASS___AVMutableAudioMix_1126bf588;
    func_0x00010bf0f320(PTR__OBJC_CLASS___AVMutableAudioMix_1126bf588);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ad580();
    puVar4 = puVar3;
    func_0x00010bf51e00(puVar3);
    _objc_release(puVar3);
    _objc_release(puVar9);
    puVar7 = puStack_3a0;
LAB_109115008:
    _objc_release(puVar7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) break;
    ___stack_chk_fail();
LAB_10911505c:
    lVar12 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 109114e1c; end: 109115063; +[SCNGSMEVideoAssetMutator audioMixForSnap:] */

void FUN_109114e1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = *(undefined **)(param_3 + 0x18);
  }
  _objc_retain(puVar5);
  puVar1 = puVar5;
  func_0x00010bf529e0();
  _objc_release(puVar5);
  puVar3 = (undefined *)0x0;
  if (puVar1 == (undefined *)0x0) goto LAB_109115008;
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_170 = param_3;
  if (param_3 == 0) goto LAB_10911505c;
  lVar6 = *(long *)(param_3 + 0x18);
  while( true ) {
    _objc_retain(lVar6);
    lVar2 = lVar6;
    func_0x00010bf52a60(lVar6,param_2,&uStack_140,auStack_100,0x10);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar2 != 0) {
      lVar9 = *plStack_130;
      do {
        lVar10 = 0;
        do {
          if (*plStack_130 != lVar9) {
            _objc_enumerationMutation(lVar6);
          }
          lVar4 = *(long *)(lStack_138 + lVar10 * 8);
          if (lVar4 == 0) {
            lVar7 = 0;
          }
          else {
            lVar7 = *(long *)(lVar4 + 0x18);
          }
          _objc_retain(lVar7);
          _objc_release(lVar7);
          if (lVar7 == 0) {
            if (lVar4 == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = *(undefined8 *)(lVar4 + 0x10);
            }
            _objc_retain(uVar8);
            puStack_168 = puVar3;
            uStack_160 = 0xc2000000;
            pcStack_158 = FUN_109115064;
            puStack_150 = &UNK_110946e68;
            _objc_retain(puVar5);
            puStack_148 = puVar5;
            func_0x00010bf97ce0(uVar8,param_2,&puStack_168);
            _objc_release(uVar8);
            _objc_release(puStack_148);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar6;
        func_0x00010bf52a60(lVar6,param_2,&uStack_140,auStack_100,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(lVar6);
    puVar1 = PTR__OBJC_CLASS___AVMutableAudioMix_1126bf588;
    func_0x00010bf0f320(PTR__OBJC_CLASS___AVMutableAudioMix_1126bf588);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ad580();
    puVar3 = puVar1;
    func_0x00010bf51e00(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar5);
    param_3 = lStack_170;
LAB_109115008:
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) break;
    ___stack_chk_fail();
LAB_10911505c:
    lVar6 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 109115064; end: 10911513b;  */

void FUN_109115064(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___AVMutableAudioMixInputParameters_1126bf590;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf0f3a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80(param_4);
  _objc_release(param_4);
  func_0x00010c2241c0(param_1,puVar1);
  func_0x00010c067ec0(param_3);
  _objc_release(param_3);
  func_0x00010c218f60(puVar1);
  func_0x00010befa120(*(undefined8 *)(param_2 + 0x20));
  _objc_release(puVar1);
  return;
}



/* Entry: 10911513c; end: 1091153f7; -[SCNGSMEVideoAssetMutator _singleAudioTrackToTranscode:audioRenderDAG:] */

void FUN_10911513c(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  float fVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar7 = param_3;
  func_0x00010bf529e0();
  if (uVar7 < 2) goto LAB_109115338;
  if (param_4 == 0) goto LAB_1091153e8;
  lVar6 = *(long *)(param_4 + 8);
  do {
    _objc_retain(lVar6);
    _objc_release(lVar6);
    if (lVar6 == 0) {
      if (param_4 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(ulong *)(param_4 + 0x10);
      }
      _objc_retain(uVar7);
      uVar8 = uVar7;
      func_0x00010bf529e0();
      uVar2 = param_3;
      func_0x00010bf529e0();
      _objc_release(uVar7);
      if (uVar8 != uVar2) goto LAB_109115338;
      uVar13 = 0;
      uVar14 = 0;
      uVar15 = 0;
      uVar16 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      _objc_retain(param_3);
      uVar7 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_140,auStack_100,0x10);
      if (uVar7 == 0) {
        uVar7 = 0;
        ppuStack_148 = (undefined **)0x0;
      }
      else {
        ppuStack_148 = (undefined **)0x0;
        iVar12 = 0;
        lVar6 = *plStack_130;
        do {
          uVar8 = 0;
          do {
            if (*plStack_130 != lVar6) {
              _objc_enumerationMutation(param_3);
            }
            lVar5 = *(long *)(lStack_138 + uVar8 * 8);
            if (lVar5 == 0) {
              uVar10 = 0;
              if (param_4 == 0) goto LAB_109115308;
LAB_109115260:
              uVar11 = *(undefined8 *)(param_4 + 0x10);
            }
            else {
              uVar10 = *(undefined8 *)(lVar5 + 0x10);
              if (param_4 != 0) goto LAB_109115260;
LAB_109115308:
              uVar11 = 0;
            }
            _objc_retain(uVar11);
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar10);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar11;
            func_0x00010c0e00e0(uVar11,param_2,puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb2c80();
            fVar1 = (float)CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13)));
            _objc_release(uVar4);
            _objc_release(puVar3);
            _objc_release(uVar11);
            if (fVar1 == 0.0) {
              iVar12 = iVar12 + 1;
            }
            else {
              ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar10);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuStack_148);
              ppuStack_148 = ppuVar9;
            }
            uVar8 = uVar8 + 1;
          } while (uVar7 != uVar8);
          uVar7 = param_3;
          func_0x00010bf52a60(param_3,param_2,&uStack_140,auStack_100,0x10);
        } while (uVar7 != 0);
        uVar7 = (ulong)iVar12;
      }
      _objc_release(param_3);
      uVar8 = param_3;
      func_0x00010bf529e0();
      if (uVar8 - 1 == uVar7) {
        _objc_retain(ppuStack_148);
        ppuVar9 = ppuStack_148;
      }
      else {
        uVar8 = param_3;
        func_0x00010bf529e0();
        ppuVar9 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2040;
        if (uVar8 != uVar7) {
          ppuVar9 = (undefined **)0x0;
        }
      }
      _objc_release(ppuStack_148);
    }
    else {
LAB_109115338:
      ppuVar9 = (undefined **)0x0;
    }
    _objc_release(param_4);
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
      return;
    }
    ___stack_chk_fail();
LAB_1091153e8:
    lVar6 = 0;
  } while( true );
}



/* Entry: 1091153f8; end: 109115d7f; -[SCNGSMEVideoAssetMutator _setUpVideoTracksInComposition:isForPlayback:withErrorType:] */

void FUN_1091153f8(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong *puVar4;
  undefined *puVar5;
  ulong *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined4 uVar16;
  long lVar17;
  ulong uVar18;
  undefined *puStack_390;
  ulong uStack_2f8;
  undefined4 uStack_2f0;
  undefined8 uStack_2ec;
  undefined4 uStack_2e4;
  ulong uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  ulong uStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_88;
  undefined4 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_1[0xf] == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = *(undefined **)(param_1[0xf] + 8);
  }
  _objc_retain(puVar7);
  puVar1 = puVar7;
  FUN_10911c884(puVar7,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puVar1;
  func_0x00010bf529e0();
  puVar6 = param_5;
  if (puVar7 == (undefined *)0x0) goto LAB_109115b18;
  puVar7 = puVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == (undefined *)0x0) goto LAB_109115d54;
  lVar9 = *(long *)(puVar7 + 0x20);
  param_5 = param_1;
  do {
    _objc_retain(lVar9);
    lVar10 = lVar9;
    func_0x00010bf529e0();
    _objc_release(lVar9);
    _objc_release(puVar7);
    param_1 = param_5;
    if (lVar10 == 0) {
LAB_109115b18:
      param_5 = puVar6;
      *param_5 = *param_5 | 0x40;
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (param_1[0xc] != 0) {
        if (param_1[0xf] == 0) {
          _objc_retain(0);
          lVar9 = 0;
LAB_109115d70:
          param_5 = (ulong *)0x0;
        }
        else {
          lVar9 = *(long *)(param_1[0xf] + 8);
          _objc_retain(lVar9);
          if (lVar9 == 0) goto LAB_109115d70;
          param_5 = *(ulong **)(lVar9 + 8);
        }
        _objc_retain(param_5);
        func_0x00010bf529e0(param_5);
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_1[0xc]);
        _objc_release(puVar7);
        _objc_release(puVar5);
        _objc_release(param_5);
        _objc_release(lVar9);
      }
      puVar7 = (undefined *)0x0;
    }
    else {
      if (param_5[0xf] == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(param_5[0xf] + 8);
      }
      _objc_retain(uVar8);
      uVar2 = uVar8;
      FUN_10911e848();
      _objc_release(uVar8);
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      uVar18 = *(ulong *)PTR__kCMTimeZero_110348670;
      uVar16 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_88 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0xc);
      uStack_80 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0x14);
      lStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      plStack_240 = (long *)0x0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      _objc_retain(puVar1);
      puStack_390 = puVar1;
      func_0x00010bf52a60();
      if (puStack_390 != (undefined *)0x0) {
        lVar9 = *plStack_240;
        do {
          puVar7 = (undefined *)0x0;
          do {
            if (*plStack_240 != lVar9) {
              _objc_enumerationMutation(puVar1);
            }
            lVar10 = *(long *)(lStack_248 + (long)puVar7 * 8);
            uVar8 = param_3;
            func_0x00010bef9f20(param_3);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c277e40();
            func_0x00010c0df760(puVar3);
            _objc_retainAutoreleasedReturnValue();
            uVar14 = param_5[10];
            if (lVar10 == 0) {
              uVar12 = 0;
            }
            else {
              uVar12 = *(undefined8 *)(lVar10 + 0x18);
            }
            _objc_retain(uVar12);
            func_0x00010c1d0640(uVar14);
            _objc_release(uVar12);
            _objc_release(puVar3);
            puVar3 = PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18;
            func_0x00010c2998a0(
                               PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18
                               );
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar5);
            if (((int)uVar2 == 0) || ((param_5[0xe] & 1) != 0)) {
              puVar15 = (undefined *)0x0;
            }
            else {
              puVar15 = PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18;
              func_0x00010c2998a0(
                                 PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18
                                 );
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar5);
            }
            uStack_268 = 0;
            uStack_270 = 0;
            uStack_258 = 0;
            uStack_260 = 0;
            uStack_288 = 0;
            uStack_290 = 0;
            uStack_278 = 0;
            plStack_280 = (long *)0x0;
            if (lVar10 == 0) {
              param_1 = (ulong *)0x0;
            }
            else {
              param_1 = *(ulong **)(lVar10 + 0x20);
            }
            _objc_retain(param_1);
            puVar4 = param_1;
            func_0x00010bf52a60();
            if (puVar4 != (ulong *)0x0) {
              lVar11 = *plStack_280;
              do {
                puVar13 = (ulong *)0x0;
                do {
                  if (*plStack_280 != lVar11) {
                    _objc_enumerationMutation(param_1);
                  }
                  func_0x00010be3c660(param_5);
                  if (*puVar6 != 0) {
                    _objc_release(param_1);
                    _objc_release(puVar15);
                    _objc_release(puVar3);
                    _objc_release(uVar8);
                    puVar7 = (undefined *)0x0;
                    puVar3 = puVar1;
                    param_5 = puVar6;
                    goto LAB_109115cf0;
                  }
                  puVar13 = (ulong *)((long)puVar13 + 1);
                } while (puVar4 != puVar13);
                puVar4 = param_1;
                func_0x00010bf52a60();
              } while (puVar4 != (ulong *)0x0);
            }
            _objc_release(param_1);
            if (lVar10 == 0) {
              lVar10 = 0;
            }
            else {
              lVar10 = *(long *)(lVar10 + 0x20);
            }
            _objc_retain(lVar10);
            lVar11 = lVar10;
            func_0x00010c089820();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar10);
            if (lVar11 == 0) {
              _objc_retain(0);
              uStack_2b8 = 0;
              uStack_2b4 = 0;
              uStack_2b0 = 0;
              uStack_2ac = 0;
              uStack_2c0 = 0;
              _objc_retain(0);
              lVar10 = 0;
LAB_109115800:
              lVar17 = 0;
              uStack_2e0 = 0;
              uStack_2d8 = 0;
              uStack_2d0 = 0;
            }
            else {
              lVar10 = *(long *)(lVar11 + 0x28);
              _objc_retain(lVar10);
              if (lVar10 == 0) {
                uStack_2c0 = 0;
                uStack_2b8 = 0;
                uStack_2b4 = 0;
                uStack_2b0 = 0;
                uStack_2ac = 0;
              }
              else {
                func_0x00010bdc1140(&uStack_2c0,lVar10);
              }
              lVar17 = *(long *)(lVar11 + 0x20);
              _objc_retain(lVar17);
              if (lVar17 == 0) goto LAB_109115800;
              func_0x00010bdc1140(&uStack_2e0,lVar17);
            }
            _CMTimeAdd(&uStack_2a8,&uStack_2c0,&uStack_2e0);
            _objc_release(lVar17);
            _objc_release(lVar10);
            uStack_2d8 = CONCAT44(uStack_29c,uStack_2a0);
            uStack_2e0 = uStack_2a8;
            uStack_2d0 = CONCAT44(uStack_294,uStack_298);
            uStack_2ec = uStack_88;
            uStack_2e4 = uStack_80;
            uStack_2f8 = uVar18;
            uStack_2f0 = uVar16;
            _CMTimeMaximum(&uStack_2c0,&uStack_2e0,&uStack_2f8);
            uVar16 = uStack_2b8;
            uVar18 = uStack_2c0;
            uStack_88 = CONCAT44(uStack_2b0,uStack_2b4);
            uStack_80 = uStack_2ac;
            _objc_release(lVar11);
            _objc_release(puVar15);
            _objc_release(puVar3);
            _objc_release(uVar8);
            puVar7 = puVar7 + 1;
          } while (puVar7 != puStack_390);
          puStack_390 = puVar1;
          func_0x00010bf52a60();
        } while (puStack_390 != (undefined *)0x0);
      }
      _objc_release(puVar1);
      if (param_5[0xf] == 0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar7 = *(undefined **)(param_5[0xf] + 8);
      }
      _objc_retain(puVar7);
      puVar3 = puVar7;
      FUN_10911c884(puVar7,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_retain(puVar3);
      puVar7 = puVar3;
      func_0x00010bf52a60();
      lVar9 = lRam0000000000000000;
      param_1 = param_5;
      if (puVar7 != (undefined *)0x0) {
        param_1 = &uStack_2f8;
        do {
          puVar15 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar9) {
              _objc_enumerationMutation(puVar3);
            }
            if (*(long *)((long)puVar15 * 8) == 0) {
              lVar10 = 0;
            }
            else {
              lVar10 = *(long *)(*(long *)((long)puVar15 * 8) + 0x20);
            }
            _objc_retain(lVar10);
            lVar11 = lVar10;
            func_0x00010c089820();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar10);
            if (lVar11 == 0) {
              _objc_retain(0);
              uStack_2b8 = 0;
              uStack_2b4 = 0;
              uStack_2b0 = 0;
              uStack_2ac = 0;
              uStack_2c0 = 0;
              _objc_retain(0);
              lVar10 = 0;
LAB_109115a24:
              lVar17 = 0;
              uStack_2e0 = 0;
              uStack_2d8 = 0;
              uStack_2d0 = 0;
            }
            else {
              lVar10 = *(long *)(lVar11 + 0x28);
              _objc_retain(lVar10);
              if (lVar10 == 0) {
                uStack_2c0 = 0;
                uStack_2b8 = 0;
                uStack_2b4 = 0;
                uStack_2b0 = 0;
                uStack_2ac = 0;
              }
              else {
                func_0x00010bdc1140(&uStack_2c0,lVar10);
              }
              lVar17 = *(long *)(lVar11 + 0x20);
              _objc_retain(lVar17);
              if (lVar17 == 0) goto LAB_109115a24;
              func_0x00010bdc1140(&uStack_2e0,lVar17);
            }
            _CMTimeAdd(&uStack_2a8,&uStack_2c0,&uStack_2e0);
            _objc_release(lVar17);
            _objc_release(lVar10);
            uStack_2d8 = CONCAT44(uStack_29c,uStack_2a0);
            uStack_2e0 = uStack_2a8;
            uStack_2d0 = CONCAT44(uStack_294,uStack_298);
            uStack_2ec = uStack_88;
            uStack_2e4 = uStack_80;
            uStack_2f8 = uVar18;
            uStack_2f0 = uVar16;
            _CMTimeMaximum(&uStack_2c0,&uStack_2e0,&uStack_2f8);
            uVar16 = uStack_2b8;
            uVar18 = uStack_2c0;
            uStack_88 = CONCAT44(uStack_2b0,uStack_2b4);
            uStack_80 = uStack_2ac;
            _objc_release(lVar11);
            puVar15 = puVar15 + 1;
          } while (puVar7 != puVar15);
          puVar7 = puVar3;
          func_0x00010bf52a60();
        } while (puVar7 != (undefined *)0x0);
      }
      _objc_release(puVar3);
      if (((double)param_5[1] == *(double *)PTR__CGSizeZero_110347620) &&
         ((double)param_5[2] == *(double *)(PTR__CGSizeZero_110347620 + 8))) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar6 = param_5;
        func_0x00010c299840(param_5);
        puVar4 = param_5;
        func_0x00010beff980();
        puVar7 = puVar5;
        if ((int)puVar4 == 0) {
          uStack_29c = (undefined4)uStack_88;
          uStack_298 = (undefined4)((ulong)uStack_88 >> 0x20);
          uStack_294 = uStack_80;
          uStack_2a8 = uVar18;
          uStack_2a0 = uVar16;
          FUN_109127018(param_5[1],param_5[2],puVar5,&uStack_2a8,puVar6);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          uVar8 = param_3;
          func_0x00010c279200(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar8;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar2;
          func_0x00010c0d5d40();
          _objc_release(uVar2);
          _objc_release(uVar8);
          uStack_29c = (undefined4)uStack_88;
          uStack_298 = (undefined4)((ulong)uStack_88 >> 0x20);
          uStack_294 = uStack_80;
          uStack_2a8 = uVar18;
          uStack_2a0 = uVar16;
          FUN_109127288(param_5[1],param_5[2],puVar5,&uStack_2a8,uVar12,puVar6);
          _objc_retainAutoreleasedReturnValue();
        }
      }
LAB_109115cf0:
      _objc_release(puVar3);
      _objc_release(puVar5);
    }
    _objc_release(puVar1);
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
      return;
    }
    ___stack_chk_fail();
LAB_109115d54:
    lVar9 = 0;
    puVar6 = param_5;
    param_5 = param_1;
  } while( true );
}



/* Entry: 109115d80; end: 109116c03; -[SCNGSMEVideoAssetMutator _insertNGSMESegment:toTrack:ofMediaType:withOrientationLayerInstruction:withTransformLayerInstruction:isForPlayback:withErrorType:] */

void FUN_109115d80(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long param_7,int param_8,ulong *param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  double dVar13;
  ulong uVar14;
  double dVar15;
  ulong uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  ulong uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined **ppuStack_378;
  ulong uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined **ppuStack_358;
  ulong uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  ulong uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  ulong uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  ulong uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  ulong uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  ulong uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  ulong uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  ulong uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  ulong *puStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined8 uStack_138;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_208 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_109116c04;
  uStack_88 = 0x109116c14;
  uStack_80 = 0;
  puStack_210 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_109116c04;
  uStack_b8 = 0x109116c14;
  uStack_b0 = 0;
  puStack_200 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x2020000000;
  uStack_e0 = 0;
  puStack_180 = &uStack_128;
  uStack_128 = 0;
  uStack_118 = 0x3032000000;
  pcStack_110 = FUN_109116c04;
  uStack_108 = 0x109116c14;
  uStack_100 = 0;
  puStack_218 = &uStack_158;
  uStack_158 = 0;
  uStack_148 = 0x3032000000;
  pcStack_140 = FUN_109116c04;
  uStack_138 = 0x109116c14;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110db8b78;
  if (param_3 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_3 + 8);
  }
  puStack_150 = puStack_218;
  puStack_120 = puStack_180;
  puStack_f0 = puStack_200;
  puStack_d0 = puStack_210;
  puStack_a0 = puStack_208;
  _objc_retain(uVar8);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_109116c1c;
  puStack_198 = &UNK_110adced0;
  lStack_190 = param_1;
  puStack_178 = puStack_218;
  puStack_170 = puStack_210;
  puStack_168 = puStack_208;
  _objc_retain(param_5);
  puStack_1f0 = puVar2;
  uStack_1e8 = 0xc2000000;
  uStack_1e0 = 0x109116dac;
  puStack_1d8 = &UNK_110adcf00;
  puStack_1c8 = puStack_218;
  puStack_1c0 = puStack_210;
  puStack_1b8 = puStack_208;
  lStack_188 = param_5;
  puStack_160 = puStack_200;
  _objc_retain(param_5);
  puStack_250 = puVar2;
  uStack_248 = 0xc2000000;
  uStack_240 = 0x109116e68;
  puStack_238 = &UNK_110adcf30;
  lStack_1d0 = param_5;
  _objc_retain(param_5);
  puStack_1f8 = param_9;
  lStack_230 = param_5;
  lStack_228 = param_1;
  _objc_retain(param_3);
  lStack_220 = param_3;
  func_0x00010c0bc940(uVar8);
  _objc_release(uVar8);
  if (puStack_a0[5] == 0) {
    uVar14 = 0x100;
    if (param_5 != *(long *)PTR__AVMediaTypeAudio_110348070) {
      uVar14 = 0x80;
    }
    *param_9 = uVar14 | *param_9;
    lVar9 = *(long *)PTR__AVMediaTypeVideo_110348090;
    ppuVar7 = &PTR____CFConstantStringClassReference_110de7678;
    if (param_5 != lVar9) {
      ppuVar7 = &PTR____CFConstantStringClassReference_110e0ad18;
    }
    _objc_retain(ppuVar7);
    FUN_10911ad14(*(undefined8 *)(param_1 + 0x68),ppuVar7,puStack_150[5],1);
    lVar1 = puStack_120[5];
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    uStack_330 = uStack_330 & 0xffffffffffffff00;
    if (lVar1 != 0) {
      FUN_109116ff4(lVar1,&uStack_330);
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      ppuVar11 = &PTR____CFConstantStringClassReference_110daafd8;
      if (((lVar1 != 0) && ((char)uStack_330 != '\0')) &&
         (ppuVar11 = &PTR____CFConstantStringClassReference_110daafd8, param_5 == lVar9)) {
        uVar8 = puStack_120[5];
        _objc_retain(uVar8);
        uStack_2a0 = 0;
        puVar2 = PTR__OBJC_CLASS___NSFileHandle_1126bc690;
        func_0x00010bfacce0();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uStack_2a0;
        _objc_retain(uStack_2a0);
        if (puVar2 == (undefined *)0x0) {
          ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar3 = puVar2;
          func_0x00010c121360();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf3dba0(puVar2);
          puVar12 = puVar3;
          func_0x00010c08fa60();
          if (puVar12 < (undefined *)0x8) {
            ppuVar11 = &PTR____CFConstantStringClassReference_110daafd8;
          }
          else {
            _objc_retainAutorelease();
            func_0x00010bf25f00();
            puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
            func_0x00010c25d900();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = (undefined *)0x0;
            while( true ) {
              puVar5 = puVar3;
              func_0x00010c08fa60();
              if ((undefined *)0xf < puVar5) {
                puVar5 = (undefined *)0x10;
              }
              if (puVar5 <= puVar12) break;
              func_0x00010bf06ba0(puVar4);
              puVar12 = puVar12 + 1;
            }
            ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c14de00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar4);
          }
          _objc_release(puVar3);
        }
        _objc_release(puVar2);
        _objc_release(uVar14);
        _objc_release(uVar8);
      }
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar8 = puStack_120[5];
      func_0x00010c0f58c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 0x60);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar10);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(uVar8);
      _objc_release(ppuVar11);
    }
    _objc_release(lVar1);
    goto LAB_109116a18;
  }
  if (param_3 == 0) {
    _objc_retain(0);
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_268 = 0;
    _objc_release(0);
    if ((*(byte *)(puStack_f0 + 3) & 1) != 0) goto LAB_1091160b0;
    _objc_retain(0);
LAB_109116654:
    lVar9 = 0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
  }
  else {
    lVar9 = *(long *)(param_3 + 0x28);
    _objc_retain(lVar9);
    if (lVar9 == 0) {
      uStack_268 = 0;
      uStack_260 = 0;
      uStack_258 = 0;
      _objc_release(0);
      if ((*(byte *)(puStack_f0 + 3) & 1) != 0) goto LAB_1091160b0;
    }
    else {
      func_0x00010bdc1140(&uStack_268,lVar9);
      _objc_release(lVar9);
      if (*(char *)(puStack_f0 + 3) == '\x01') {
LAB_1091160b0:
        if (puStack_a0[5] == 0) {
          uStack_288 = 0;
          uStack_290 = 0;
          uStack_278 = 0;
          uStack_280 = 0;
          uStack_298 = 0;
          uStack_2a0 = 0;
        }
        else {
          func_0x00010c26f620(&uStack_2a0);
        }
        uStack_3a8 = uStack_280;
        uStack_3b0 = uStack_288;
        uStack_3a0 = uStack_278;
        uVar10 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
        uVar14 = *(ulong *)PTR__kCMTimeZero_110348670;
        uVar8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
        uStack_2b8 = uStack_280;
        uStack_2c0 = uStack_288;
        uStack_2b0 = uStack_278;
        uStack_330 = uVar14;
        uStack_328 = uVar10;
        uStack_320 = uVar8;
        _CMTimeRangeMake(&uStack_2a0,&uStack_330,&uStack_2c0);
        ppuVar11 = (undefined **)0x0;
        uStack_2c0 = uVar14;
        uStack_2b8 = uVar10;
        uStack_2b0 = uVar8;
        if (param_3 == 0) goto LAB_109116298;
LAB_109116278:
        lVar9 = *(long *)(param_3 + 0x20);
        _objc_retain(lVar9);
        if (lVar9 == 0) goto LAB_1091162a0;
        func_0x00010bdc1140(&uStack_330,lVar9);
        ppuVar7 = ppuVar11;
        do {
          uStack_2d8 = uStack_2b8;
          uStack_2e0 = uStack_2c0;
          uStack_2d0 = uStack_2b0;
          puVar6 = &uStack_2e0;
          _CMTimeCompare(puVar6,&uStack_330);
          _objc_release(lVar9);
          if (-1 < (int)puVar6) goto LAB_1091167b4;
          if (param_3 == 0) {
            _objc_retain(0);
LAB_109116304:
            lVar9 = 0;
            uStack_330 = 0;
            uStack_328 = 0;
            uStack_320 = 0;
          }
          else {
            lVar9 = *(long *)(param_3 + 0x20);
            _objc_retain(lVar9);
            if (lVar9 == 0) goto LAB_109116304;
            func_0x00010bdc1140(&uStack_330,lVar9);
          }
          uStack_2f8 = uStack_2b8;
          uStack_300 = uStack_2c0;
          uStack_2f0 = uStack_2b0;
          _CMTimeSubtract(&uStack_2e0,&uStack_330,&uStack_300);
          _objc_release(lVar9);
          uStack_328 = uStack_2d8;
          uStack_330 = uStack_2e0;
          uStack_320 = uStack_2d0;
          uStack_2f8 = uStack_3a8;
          uStack_300 = uStack_3b0;
          uStack_2f0 = uStack_3a0;
          puVar6 = &uStack_330;
          _CMTimeCompare(puVar6,&uStack_300);
          if ((int)puVar6 < 0) {
            uStack_348 = uStack_2d8;
            uStack_350 = uStack_2e0;
            uStack_340 = uStack_2d0;
            uStack_300 = uVar14;
            uStack_2f8 = uVar10;
            uStack_2f0 = uVar8;
            _CMTimeRangeMake(&uStack_330,&uStack_300,&uStack_350);
            uStack_298 = uStack_328;
            uStack_2a0 = uStack_330;
            uStack_288 = uStack_318;
            uStack_290 = uStack_320;
            uStack_278 = uStack_308;
            uStack_280 = uStack_310;
          }
          uStack_328 = uStack_298;
          uStack_330 = uStack_2a0;
          uStack_318 = uStack_288;
          uStack_320 = uStack_290;
          uStack_308 = uStack_278;
          uStack_310 = uStack_280;
          uStack_2f8 = uStack_260;
          uStack_300 = uStack_268;
          uStack_2f0 = uStack_258;
          ppuStack_358 = ppuVar7;
          func_0x00010c067160(param_4);
          ppuVar11 = ppuStack_358;
          _objc_retain(ppuStack_358);
          _objc_release(ppuVar7);
          if (puStack_a0[5] == 0) {
            uStack_318 = 0;
            uStack_320 = 0;
            uStack_308 = 0;
            uStack_310 = 0;
            uStack_328 = 0;
            uStack_330 = 0;
          }
          else {
            func_0x00010c26f620(&uStack_330);
          }
          uStack_348 = uStack_2b8;
          uStack_350 = uStack_2c0;
          uStack_340 = uStack_2b0;
          uStack_368 = uStack_310;
          uStack_370 = uStack_318;
          uStack_360 = uStack_308;
          _CMTimeAdd(&uStack_300,&uStack_350,&uStack_370);
          uStack_2b8 = uStack_2f8;
          uStack_2c0 = uStack_300;
          uStack_2b0 = uStack_2f0;
          if (param_3 != 0) goto LAB_109116278;
LAB_109116298:
          _objc_retain(0);
LAB_1091162a0:
          lVar9 = 0;
          uStack_330 = 0;
          uStack_328 = 0;
          uStack_320 = 0;
          ppuVar7 = ppuVar11;
        } while( true );
      }
    }
    lVar9 = *(long *)(param_3 + 0x20);
    _objc_retain(lVar9);
    if (lVar9 == 0) goto LAB_109116654;
    func_0x00010bdc1140(&uStack_2c0,lVar9);
  }
  _objc_release(lVar9);
  FUN_10911f7b8(&uStack_2e0,param_3);
  if (param_3 == 0) {
    _objc_retain(0);
LAB_1091166a0:
    lVar9 = 0;
    uStack_330 = 0;
    uStack_328 = 0;
    uStack_320 = 0;
  }
  else {
    lVar9 = *(long *)(param_3 + 0x18);
    _objc_retain(lVar9);
    if (lVar9 == 0) goto LAB_1091166a0;
    func_0x00010bdc1140(&uStack_330,lVar9);
  }
  uStack_3a8 = uStack_2d8;
  uStack_3b0 = uStack_2e0;
  uStack_3a0 = uStack_2d0;
  _CMTimeRangeMake(&uStack_2a0,&uStack_330,&uStack_3b0);
  _objc_release(lVar9);
  ppuStack_378 = (undefined **)0x0;
  uStack_328 = uStack_298;
  uStack_330 = uStack_2a0;
  uStack_318 = uStack_288;
  uStack_320 = uStack_290;
  uStack_308 = uStack_278;
  uStack_310 = uStack_280;
  uStack_3a8 = uStack_260;
  uStack_3b0 = uStack_268;
  uStack_3a0 = uStack_258;
  func_0x00010c067160(param_4);
  ppuVar7 = ppuStack_378;
  _objc_retain(ppuStack_378);
  if (param_3 == 0) {
    _objc_retain(0);
LAB_109116750:
    lVar9 = 0;
    uStack_3b0 = 0;
    uStack_3a8 = 0;
    uStack_3a0 = 0;
  }
  else {
    lVar9 = *(long *)(param_3 + 0x28);
    _objc_retain(lVar9);
    if (lVar9 == 0) goto LAB_109116750;
    func_0x00010bdc1140(&uStack_3b0,lVar9);
  }
  uStack_2f8 = uStack_2d8;
  uStack_300 = uStack_2e0;
  uStack_2f0 = uStack_2d0;
  _CMTimeRangeMake(&uStack_330,&uStack_3b0,&uStack_300);
  _objc_release(lVar9);
  uStack_3a8 = uStack_328;
  uStack_3b0 = uStack_330;
  uStack_398 = uStack_318;
  uStack_3a0 = uStack_320;
  uStack_388 = uStack_308;
  uStack_390 = uStack_310;
  uStack_2f8 = uStack_2b8;
  uStack_300 = uStack_2c0;
  uStack_2f0 = uStack_2b0;
  func_0x00010c14e420(param_4);
LAB_1091167b4:
  if (ppuVar7 != (undefined **)0x0) {
    uVar14 = 0x100;
    if (param_5 != *(long *)PTR__AVMediaTypeAudio_110348070) {
      uVar14 = 0x80;
    }
    *param_9 = uVar14 | *param_9;
    lVar9 = puStack_120[5];
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    uStack_2a0 = uStack_2a0 & 0xffffffffffffff00;
    if (lVar9 != 0) {
      FUN_109116ff4(lVar9,&uStack_2a0);
    }
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (*(long *)(param_1 + 0x60) != 0) {
      uVar8 = puStack_120[5];
      func_0x00010c0f58c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar7;
      func_0x00010c09e4e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 0x60);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar10);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(ppuVar11);
      _objc_release(uVar8);
    }
    _objc_release(lVar9);
  }
  if (param_5 == *(long *)PTR__AVMediaTypeVideo_110348090) {
    dVar13 = *(double *)(param_1 + 8);
    dVar15 = *(double *)(param_1 + 0x10);
    if (((*(byte *)(param_1 + 0x18) & 1) == 0) &&
       (param_8 != 0 ||
        dVar15 == *(double *)(PTR__CGSizeZero_110347620 + 8) &&
        dVar13 == *(double *)PTR__CGSizeZero_110347620)) {
      if (puStack_a0[5] == 0) {
        uStack_288 = 0;
        uStack_290 = 0;
        uStack_278 = 0;
        uStack_280 = 0;
        uStack_298 = 0;
        uStack_2a0 = 0;
      }
      else {
        func_0x00010c106f40(&uStack_2a0);
      }
      *(undefined8 *)(param_1 + 0x28) = uStack_298;
      *(ulong *)(param_1 + 0x20) = uStack_2a0;
      *(ulong *)(param_1 + 0x38) = uStack_288;
      *(undefined8 *)(param_1 + 0x30) = uStack_290;
      *(undefined8 *)(param_1 + 0x48) = uStack_278;
      *(undefined8 *)(param_1 + 0x40) = uStack_280;
      uStack_298 = *(undefined8 *)(param_1 + 0x28);
      uStack_2a0 = *(ulong *)(param_1 + 0x20);
      uStack_288 = *(ulong *)(param_1 + 0x38);
      uStack_290 = *(undefined8 *)(param_1 + 0x30);
      uStack_278 = *(undefined8 *)(param_1 + 0x48);
      uStack_280 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c1e0300(param_4);
      *(undefined1 *)(param_1 + 0x18) = 1;
      dVar13 = *(double *)(param_1 + 8);
      dVar15 = *(double *)(param_1 + 0x10);
    }
    uStack_3a8 = uStack_260;
    uStack_3b0 = uStack_268;
    uStack_3a0 = uStack_258;
    func_0x000109126dac(&uStack_2a0,dVar13,dVar15,puStack_a0[5]);
    uStack_328 = uStack_298;
    uStack_330 = uStack_2a0;
    uStack_318 = uStack_288;
    uStack_320 = uStack_290;
    uStack_308 = uStack_278;
    uStack_310 = uStack_280;
    uStack_2b8 = uStack_3a8;
    uStack_2c0 = uStack_3b0;
    uStack_2b0 = uStack_3a0;
    func_0x00010c219980(param_6);
    if (param_7 != 0) {
      FUN_10912152c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_7,param_3,0);
    }
  }
LAB_109116a18:
  _objc_release(ppuVar7);
  _objc_release(lStack_220);
  _objc_release(lStack_230);
  _objc_release(lStack_1d0);
  _objc_release(lStack_188);
  __Block_object_dispose(&uStack_158,8);
  _objc_release(ppuStack_130);
  __Block_object_dispose(&uStack_128,8);
  _objc_release(uStack_100);
  __Block_object_dispose(&uStack_f8,8);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 109116c04; end: 109116c1b;  */

void FUN_109116c04(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 109116c1c; end: 109116ff3;  */

void FUN_109116c1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = param_2;
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c074fe0();
  lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar5 + 0x28);
  if ((int)uVar1 == 0) {
    *(undefined ***)(lVar5 + 0x28) = &PTR____CFConstantStringClassReference_110f21f38;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x00010bf0b9e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar1 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined **)(lVar5 + 0x28) = puVar3;
    _objc_release(uVar1);
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = uVar1;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  else {
    *(undefined ***)(lVar5 + 0x28) = &PTR____CFConstantStringClassReference_110f21f18;
    _objc_release(uVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be4e3a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar2 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = uVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = uVar1;
    _objc_release(uVar4);
    _objc_release(uVar2);
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x18) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 109116ff4; end: 1091170bf;  */

undefined * FUN_109116ff4(undefined8 param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010bfacbe0();
  _objc_release(puVar2);
  if ((int)puVar1 == 0) {
    puVar2 = (undefined *)0x0;
    *param_2 = 0;
  }
  else {
    *param_2 = 1;
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bf0e880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010bfad040(puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 1091170c0; end: 109117113; -[SCNGSMEVideoAssetMutator _loadPlaceHolderAssetIfNecessary] */

void FUN_1091170c0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x58);
  if (lVar3 == 0) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x71);
    FUN_10911c6b4();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    *(ulong *)(param_1 + 0x58) = uVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x58);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 109117114; end: 1091171bf; -[SCNGSMEVideoAssetMutator aggregatedErrorDetails] */

void FUN_109117114(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 0x60);
  if ((lVar1 == 0) ||
     (func_0x00010bf529e0(), puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0, lVar1 == 0)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e15a38);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1091171c0; end: 1091171c7; -[SCNGSMEVideoAssetMutator ngsmeSnap] */

undefined8 FUN_1091171c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1091171c8; end: 1091171cf; -[SCNGSMEVideoAssetMutator videoRenderSize] */

undefined1  [16] FUN_1091171c8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 8);
}



/* Entry: 1091171d0; end: 1091171e3; -[SCNGSMEVideoAssetMutator singleAssetPreferredTransform] */

void FUN_1091171d0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[1] = *(undefined8 *)(param_2 + 0x28);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  param_1[5] = *(undefined8 *)(param_2 + 0x48);
  param_1[4] = uVar1;
  return;
}



/* Entry: 1091171e4; end: 1091171eb; -[SCNGSMEVideoAssetMutator ignoreSegmentTransform] */

undefined1 FUN_1091171e4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x70);
}



/* Entry: 1091171ec; end: 1091171f3; -[SCNGSMEVideoAssetMutator useMinimalPlaceholderVideo] */

undefined1 FUN_1091171ec(long param_1)

{
  return *(undefined1 *)(param_1 + 0x71);
}



/* Entry: 1091171f4; end: 1091171fb; -[SCNGSMEVideoAssetMutator setUseMinimalPlaceholderVideo:] */

void FUN_1091171f4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x71) = param_3;
  return;
}



/* Entry: 1091171fc; end: 109117203; -[SCNGSMEVideoAssetMutator alignVideoCompositionFrameDurationToSourceTimescale] */

undefined1 FUN_1091171fc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x72);
}



/* Entry: 109117204; end: 10911720b; -[SCNGSMEVideoAssetMutator setAlignVideoCompositionFrameDurationToSourceTimescale:] */

void FUN_109117204(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x72) = param_3;
  return;
}



/* Entry: 10911720c; end: 109117213; -[SCNGSMEVideoAssetMutator videoCompositionFrameRateOverride] */

undefined8 FUN_10911720c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 109117214; end: 10911721b; -[SCNGSMEVideoAssetMutator setVideoCompositionFrameRateOverride:] */

void FUN_109117214(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 10911721c; end: 10911726f; -[SCNGSMEVideoAssetMutator .cxx_destruct] */

void FUN_10911721c(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x50,0);
  return;
}



/* Entry: 109117270; end: 10911734b; -[SCVideoAssetMutator initWithInputVideoAsset:audioOverrideAsset:outputPlaybackRate:outputTimeRanges:] */

undefined1 *
FUN_109117270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1127006f8;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x50) = param_1;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10911734c; end: 1091174db; -[SCVideoAssetMutator initWithInputVideoAssets:videoTimeRanges:videoRenderSize:audioOverrideAssets:audioOverrideLoopingEnabled:outputPlaybackRate:] */

undefined8 *
FUN_10911734c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1127006f8;
  puVar1 = &uStack_70;
  uStack_70 = param_4;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 7) = param_9;
    puVar1[9] = param_2;
    puVar1[10] = param_3;
    puVar1[8] = param_1;
    lVar3 = param_7;
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = puVar1[4];
      _objc_retain();
      func_0x00010bf97e80(uVar2);
      uVar2 = puVar1[5];
      puVar1[5] = puVar4;
      _objc_retain(puVar4);
      _objc_release(uVar2);
      _objc_release(puVar4);
    }
    else {
      _objc_retain(param_7);
      puVar4 = (undefined *)puVar1[5];
      puVar1[5] = param_7;
    }
    _objc_release(puVar4);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return puVar1;
}



/* Entry: 1091174dc; end: 1091175d7;  */

void FUN_1091174dc(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [48];
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (param_2 == 0) {
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_88,param_2);
  }
  uStack_98 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_a0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_90 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  _CMTimeRangeMake(auStack_70,&uStack_a0,&uStack_88);
  func_0x00010c297240();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar1 + 0x20) == 0) {
    func_0x00010be1b700();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126da158;
    _objc_alloc(PTR_PTR_1126da158);
    FUN_10911aa24();
    _objc_release(puVar1);
  }
  else {
    func_0x00010be1b6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091175d8; end: 109117647; -[SCVideoAssetMutator generateMutatedVideoAssetWithErrorType:] */

void FUN_1091175d8(undefined *param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    func_0x00010be1b700();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126da158;
    _objc_alloc(PTR_PTR_1126da158);
    FUN_10911aa24();
    _objc_release(param_1);
  }
  else {
    func_0x00010be1b6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109117648; end: 109117dbb; -[SCVideoAssetMutator _generateMutatedVideoAssetForSingleInputWithErrorType:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_109117648(long param_1,undefined8 param_2,ulong *param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *******pppppppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 *******pppppppuVar15;
  undefined8 uVar16;
  ulong *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  double dVar26;
  undefined8 *******pppppppuVar27;
  undefined8 *******pppppppuVar28;
  double dVar29;
  double dVar30;
  undefined8 ******ppppppuStack_5e8;
  undefined *puStack_5d8;
  undefined8 *******pppppppuStack_5b0;
  undefined8 *******pppppppuStack_5a8;
  undefined8 *******pppppppuStack_5a0;
  undefined8 *******pppppppuStack_590;
  undefined8 *******pppppppuStack_588;
  undefined8 *******pppppppuStack_580;
  undefined8 *******pppppppuStack_570;
  undefined8 *******pppppppuStack_568;
  undefined8 *******pppppppuStack_560;
  undefined8 *******pppppppuStack_558;
  undefined8 *******pppppppuStack_550;
  undefined8 *******pppppppuStack_548;
  undefined *puStack_538;
  undefined *puStack_530;
  undefined8 uStack_528;
  code *pcStack_520;
  undefined *puStack_518;
  undefined *puStack_510;
  undefined8 *******pppppppuStack_508;
  undefined8 *******pppppppuStack_500;
  undefined8 *******pppppppuStack_4f8;
  undefined8 *******pppppppuStack_4f0;
  undefined8 *******pppppppuStack_4e8;
  undefined8 *******pppppppuStack_4e0;
  undefined8 *******pppppppuStack_4d8;
  undefined8 *******pppppppuStack_4d0;
  undefined8 *******pppppppuStack_4c0;
  undefined8 *******pppppppuStack_4b8;
  undefined8 *******pppppppuStack_4b0;
  undefined8 *******pppppppuStack_4a0;
  undefined8 *******pppppppuStack_498;
  undefined8 *******pppppppuStack_490;
  undefined8 *******pppppppuStack_488;
  undefined8 *******pppppppuStack_480;
  undefined8 *******pppppppuStack_478;
  undefined8 *******pppppppuStack_470;
  undefined8 ******ppppppuStack_468;
  undefined8 *******pppppppuStack_460;
  undefined8 *******pppppppuStack_458;
  undefined8 *******pppppppuStack_450;
  undefined8 *******pppppppuStack_448;
  undefined8 *******pppppppuStack_440;
  undefined8 *******pppppppuStack_438;
  undefined8 *******pppppppuStack_430;
  undefined8 *******pppppppuStack_428;
  undefined8 *******pppppppuStack_420;
  undefined *puStack_418;
  undefined8 uStack_410;
  code *pcStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 uStack_3c0;
  undefined1 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 uStack_3a0;
  undefined1 uStack_398;
  undefined *puStack_2e8;
  double dStack_2d0;
  ulong uStack_2c8;
  undefined8 uStack_2c0;
  ulong uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  double dStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_228;
  double dStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  double dStack_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  double dStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_3 = 0;
  dVar29 = ABS(*(double *)(param_1 + 0x50) + -1.0);
  dVar26 = ABS(*(double *)(param_1 + 0x50) + 1.0) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar29) && (bVar1 = false, !NAN(dVar29) && !NAN(dVar26))) {
    bVar1 = dVar29 < dVar26;
  }
  if (((bVar1) && (*(long *)(param_1 + 0x10) == 0)) && (*(long *)(param_1 + 0x18) == 0)) {
    puVar23 = *(undefined **)(param_1 + 8);
    puVar21 = puVar23;
    _objc_retain();
  }
  else {
    puVar23 = PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
    func_0x00010bf45600();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_1 + 8);
    }
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar6 == 0) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_1091177c4;
      puStack_2e8 = (undefined *)0x0;
      lVar3 = 0;
      uVar14 = *param_3 | 8;
LAB_10911798c:
      *param_3 = uVar14;
    }
    else {
      func_0x00010c26f620(&uStack_1a0,lVar6);
      uStack_1b8 = uStack_180;
      dStack_1c0 = dStack_188;
      uStack_1b0 = uStack_178;
      dVar26 = dStack_188;
      _CMTimeGetSeconds(&dStack_1c0);
      if (dVar26 <= 0.0) {
LAB_1091177c4:
        puStack_2e8 = (undefined *)0x0;
        lVar3 = 0;
      }
      else {
        puStack_2e8 = puVar23;
        func_0x00010bef9f20();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = *(long *)(param_1 + 0x18);
        func_0x00010bf529e0();
        if ((lVar3 == 0) || (*(long *)(param_1 + 0x10) != 0)) {
          if (*(long *)(param_1 + 8) == 0) {
            dStack_1c0 = 0.0;
            uStack_1b8 = 0;
            uStack_1b0 = 0;
          }
          else {
            func_0x00010bf8b160(&dStack_1c0);
          }
          uVar14 = *(ulong *)(PTR__kCMTimeZero_110348670 + 8);
          dVar26 = *(double *)PTR__kCMTimeZero_110348670;
          uVar16 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
          dStack_220 = dVar26;
          uStack_218 = uVar14;
          uStack_210 = uVar16;
          _CMTimeRangeMake(&uStack_1a0,&dStack_220,&dStack_1c0);
          lStack_228 = 0;
          dStack_1c0 = dVar26;
          uStack_1b8 = uVar14;
          uStack_1b0 = uVar16;
          func_0x00010c067160(puStack_2e8);
          lVar3 = lStack_228;
          _objc_retain(lStack_228);
        }
        else {
          uStack_1d8 = 0;
          uStack_1e0 = 0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          lStack_1f8 = 0;
          uStack_200 = 0;
          uStack_1e8 = 0;
          plStack_1f0 = (long *)0x0;
          lVar5 = *(long *)(param_1 + 0x18);
          func_0x00010c140180();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar5;
          func_0x00010bf52a60();
          if (lVar4 == 0) {
            lVar3 = 0;
          }
          else {
            lVar3 = 0;
            lVar20 = *plStack_1f0;
            uVar14 = *(ulong *)(PTR__kCMTimeZero_110348670 + 8);
            dVar26 = *(double *)PTR__kCMTimeZero_110348670;
            uVar16 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
            do {
              lVar18 = 0;
              lVar19 = lVar3;
              do {
                if (*plStack_1f0 != lVar20) {
                  _objc_enumerationMutation(lVar5);
                }
                if (*(long *)(lStack_1f8 + lVar18 * 8) == 0) {
                  dStack_188 = 0.0;
                  uStack_190 = 0;
                  uStack_178 = 0;
                  uStack_180 = 0;
                  uStack_198 = 0;
                  uStack_1a0 = 0;
                }
                else {
                  func_0x00010bdc1120(&uStack_1a0);
                }
                lStack_208 = lVar19;
                dStack_1c0 = dVar26;
                uStack_1b8 = uVar14;
                uStack_1b0 = uVar16;
                func_0x00010c067160(puStack_2e8);
                lVar3 = lStack_208;
                _objc_retain(lStack_208);
                _objc_release(lVar19);
                lVar18 = lVar18 + 1;
                lVar19 = lVar3;
              } while (lVar4 != lVar18);
              lVar4 = lVar5;
              func_0x00010bf52a60();
            } while (lVar4 != 0);
          }
          _objc_release(lVar5);
        }
        if (lVar3 != 0) {
          uVar14 = 4;
          if (*(long *)(param_1 + 0x10) != 0) {
            uVar14 = 8;
          }
          uVar14 = uVar14 | *param_3;
          goto LAB_10911798c;
        }
      }
    }
    lVar5 = *(long *)(param_1 + 8);
    puVar17 = *(ulong **)PTR__AVMediaTypeVideo_110348090;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    if (lVar4 == 0) {
      puVar7 = (undefined *)0x0;
      puVar21 = (undefined *)0x0;
    }
    else {
      puVar7 = puVar23;
      func_0x00010bef9f20();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(param_1 + 0x18);
      if (lVar5 == 0) {
        if (*(long *)(param_1 + 8) == 0) {
          dStack_1c0 = 0.0;
          uStack_1b8 = 0;
          uStack_1b0 = 0;
        }
        else {
          func_0x00010bf8b160(&dStack_1c0);
        }
        uVar14 = *(ulong *)(PTR__kCMTimeZero_110348670 + 8);
        dVar26 = *(double *)PTR__kCMTimeZero_110348670;
        uVar16 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
        dStack_220 = dVar26;
        uStack_218 = uVar14;
        uStack_210 = uVar16;
        _CMTimeRangeMake(&uStack_1a0,&dStack_220,&dStack_1c0);
        puStack_280 = (undefined *)0x0;
        dStack_1c0 = dVar26;
        uStack_1b8 = uVar14;
        uStack_1b0 = uVar16;
        func_0x00010c067160(puVar7);
        puVar21 = puStack_280;
        _objc_retain(puStack_280);
      }
      else {
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
        lStack_268 = 0;
        uStack_270 = 0;
        uStack_258 = 0;
        plStack_260 = (long *)0x0;
        func_0x00010c140180();
        _objc_retainAutoreleasedReturnValue();
        lVar20 = lVar5;
        func_0x00010bf52a60();
        if (lVar20 == 0) {
          puVar21 = (undefined *)0x0;
        }
        else {
          puVar21 = (undefined *)0x0;
          lVar18 = *plStack_260;
          uVar14 = *(ulong *)(PTR__kCMTimeZero_110348670 + 8);
          dVar26 = *(double *)PTR__kCMTimeZero_110348670;
          uVar16 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
          do {
            lVar19 = 0;
            puVar8 = puVar21;
            do {
              if (*plStack_260 != lVar18) {
                _objc_enumerationMutation(lVar5);
              }
              if (*(long *)(lStack_268 + lVar19 * 8) == 0) {
                dStack_188 = 0.0;
                uStack_190 = 0;
                uStack_178 = 0;
                uStack_180 = 0;
                uStack_198 = 0;
                uStack_1a0 = 0;
              }
              else {
                func_0x00010bdc1120(&uStack_1a0);
              }
              puStack_278 = puVar8;
              dStack_1c0 = dVar26;
              uStack_1b8 = uVar14;
              uStack_1b0 = uVar16;
              func_0x00010c067160(puVar7);
              puVar21 = puStack_278;
              _objc_retain(puStack_278);
              _objc_release(puVar8);
              lVar19 = lVar19 + 1;
              puVar8 = puVar21;
            } while (lVar20 != lVar19);
            lVar20 = lVar5;
            func_0x00010bf52a60();
          } while (lVar20 != 0);
        }
        _objc_release(lVar5);
      }
      func_0x00010c106f40(&uStack_2b0,lVar4);
      uStack_198 = uStack_2a8;
      uStack_1a0 = uStack_2b0;
      dStack_188 = dStack_298;
      uStack_190 = uStack_2a0;
      uStack_178 = uStack_288;
      uStack_180 = uStack_290;
      puVar17 = &uStack_1a0;
      func_0x00010c1e0300(puVar7);
      if (puVar21 != (undefined *)0x0) {
        *param_3 = *param_3 | 2;
      }
    }
    param_3 = puVar17;
    dVar26 = *(double *)(param_1 + 0x50);
    dVar29 = ABS(dVar26 + -1.0);
    dVar30 = ABS(dVar26 + 1.0) * 2.220446049250313e-16;
    bVar1 = true;
    if ((2.2250738585072014e-308 <= dVar29) && (bVar1 = false, !NAN(dVar29) && !NAN(dVar30))) {
      bVar1 = dVar29 < dVar30;
    }
    dVar29 = ABS(dVar26);
    dVar26 = ABS(dVar26 + 0.0) * 2.220446049250313e-16;
    bVar2 = true;
    if ((!bVar1) && (bVar2 = false, !NAN(dVar29))) {
      bVar2 = dVar29 < 2.2250738585072014e-308;
    }
    bVar1 = true;
    if ((!bVar2) && (bVar1 = false, !NAN(dVar29) && !NAN(dVar26))) {
      bVar1 = dVar29 < dVar26;
    }
    if (!bVar1) {
      if (*(long *)(param_1 + 8) == 0) {
        dStack_1c0 = 0.0;
        uStack_1b8 = 0;
        uStack_1b0 = 0;
      }
      else {
        func_0x00010bf8b160(&dStack_1c0);
      }
      uVar14 = *(ulong *)(PTR__kCMTimeZero_110348670 + 8);
      dVar29 = *(double *)PTR__kCMTimeZero_110348670;
      uVar16 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      uStack_2c8 = uStack_1b8;
      dStack_2d0 = dStack_1c0;
      uStack_2c0 = uStack_1b0;
      dStack_220 = dVar29;
      uStack_218 = uVar14;
      uStack_210 = uVar16;
      _CMTimeRangeMake(&uStack_1a0,&dStack_220,&dStack_2d0);
      dVar30 = *(double *)(param_1 + 0x50);
      dVar26 = -dVar30;
      if (0.0 <= dVar30) {
        dVar26 = dVar30;
      }
      _CMTimeMake(&dStack_220,(long)((double)(long)dStack_1c0 / dVar26),uStack_1b8 & 0xffffffff);
      param_3 = &uStack_1a0;
      func_0x00010c14e420(puVar7);
      if ((lVar6 != 0) && (lVar3 == 0)) {
        uStack_2c8 = uStack_1b8;
        dStack_2d0 = dStack_1c0;
        uStack_2c0 = uStack_1b0;
        dStack_220 = dVar29;
        uStack_218 = uVar14;
        uStack_210 = uVar16;
        _CMTimeRangeMake(&uStack_1a0,&dStack_220,&dStack_2d0);
        dVar29 = *(double *)(param_1 + 0x50);
        dVar26 = -dVar29;
        if (0.0 <= dVar29) {
          dVar26 = dVar29;
        }
        _CMTimeMake(&dStack_220,(long)((double)(long)dStack_1c0 / dVar26),uStack_1b8 & 0xffffffff);
        param_3 = &uStack_1a0;
        func_0x00010c14e420(puStack_2e8);
      }
    }
    _objc_release(puVar7);
    _objc_release(lVar4);
    _objc_release(puStack_2e8);
    _objc_release(lVar6);
    _objc_release(lVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  *param_3 = 0;
  lVar3 = *(long *)(puVar21 + 0x20);
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    lVar3 = *(long *)(puVar21 + 0x20);
    func_0x00010bf529e0();
    lVar6 = *(long *)(puVar21 + 0x28);
    func_0x00010bf529e0();
    if (lVar3 == lVar6) {
      lVar3 = *(long *)(puVar21 + 0x20);
      func_0x00010bf529e0();
      puVar23 = PTR__kCMTimeZero_110348670;
      if (lVar3 == 1) {
        dVar26 = *(double *)(puVar21 + 0x50);
        dVar29 = ABS(dVar26 + -1.0);
        dVar30 = ABS(dVar26 + 1.0) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar29) && (bVar1 = false, !NAN(dVar29) && !NAN(dVar30))) {
          bVar1 = dVar29 < dVar30;
        }
        dVar29 = ABS(dVar26);
        dVar26 = ABS(dVar26 + 0.0) * 2.220446049250313e-16;
        bVar2 = true;
        if ((!bVar1) && (bVar2 = false, !NAN(dVar29))) {
          bVar2 = dVar29 < 2.2250738585072014e-308;
        }
        bVar1 = true;
        if ((!bVar2) && (bVar1 = false, !NAN(dVar29) && !NAN(dVar26))) {
          bVar1 = dVar29 < dVar26;
        }
        if (!bVar1) goto LAB_1091180a8;
        lVar3 = *(long *)(puVar21 + 0x30);
        func_0x00010bf529e0();
        if (lVar3 != 0) goto LAB_1091180a8;
        bVar1 = false;
        if ((*(double *)(puVar21 + 0x40) == *(double *)PTR__CGSizeZero_110347620) &&
           (bVar1 = false,
           !NAN(*(double *)(puVar21 + 0x48)) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
          bVar1 = *(double *)(puVar21 + 0x48) == *(double *)(PTR__CGSizeZero_110347620 + 8);
        }
        if (!bVar1) goto LAB_1091180a8;
        lVar3 = *(long *)(puVar21 + 0x28);
        func_0x00010bf529e0();
        if (lVar3 != 1) goto LAB_1091180a8;
        lVar6 = *(long *)(puVar21 + 0x28);
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar6;
        func_0x00010bf529e0();
        _objc_release(lVar6);
        if (lVar3 != 1) goto LAB_1091180a8;
        lVar6 = *(long *)(puVar21 + 0x28);
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar6;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 == 0) {
          pppppppuStack_488 = (undefined8 *******)0x0;
          pppppppuStack_490 = (undefined8 *******)0x0;
          pppppppuStack_478 = (undefined8 *******)0x0;
          pppppppuStack_480 = (undefined8 *******)0x0;
          pppppppuStack_498 = (undefined8 *******)0x0;
          pppppppuStack_4a0 = (undefined8 *******)0x0;
        }
        else {
          func_0x00010bdc1120(&pppppppuStack_4a0,lVar3);
        }
        _objc_release(lVar3);
        _objc_release(lVar6);
        pppppppuStack_458 = pppppppuStack_498;
        pppppppuStack_460 = pppppppuStack_4a0;
        pppppppuStack_450 = pppppppuStack_490;
        puStack_3a8 = *(undefined8 **)(puVar23 + 8);
        uStack_3b0 = *(undefined8 *)puVar23;
        uStack_3a0 = *(undefined8 *)(puVar23 + 0x10);
        pppppppuVar15 = &pppppppuStack_460;
        _CMTimeCompare(pppppppuVar15,&uStack_3b0);
        if ((int)pppppppuVar15 != 0) goto LAB_1091180a8;
        pppppppuStack_458 = pppppppuStack_480;
        pppppppuStack_460 = pppppppuStack_488;
        pppppppuStack_450 = pppppppuStack_478;
        pppppppuVar15 = pppppppuStack_488;
        _CMTimeGetSeconds(&pppppppuStack_460);
        lVar3 = *(long *)(puVar21 + 0x20);
        pppppppuVar27 = pppppppuVar15;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 == 0) {
          pppppppuStack_460 = (undefined8 *******)0x0;
          pppppppuStack_458 = (undefined8 *******)0x0;
          pppppppuStack_450 = (undefined8 *******)0x0;
        }
        else {
          func_0x00010bf8b160(&pppppppuStack_460,lVar3);
        }
        _CMTimeGetSeconds(&pppppppuStack_460);
        _objc_release(lVar3);
        lVar3 = *(long *)(puVar21 + 0x20);
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 == 0) {
          uStack_3b0 = 0;
          puStack_3a8 = (undefined8 *)0x0;
          dVar26 = 0.0;
          uStack_3a0 = 0;
        }
        else {
          func_0x00010bf8b160(&uStack_3b0,lVar3);
          dVar26 = (double)(int)puStack_3a8;
        }
        _objc_release(lVar3);
        if (1.0 / dVar26 <= ABS((double)pppppppuVar15 - (double)pppppppuVar27)) goto LAB_1091180a8;
        puVar23 = PTR_PTR_1126da158;
        _objc_alloc(PTR_PTR_1126da158);
        puVar7 = *(undefined **)(puVar21 + 0x20);
        func_0x00010bfb1920(puVar7);
        _objc_retainAutoreleasedReturnValue();
        FUN_10911aa24(puVar23,puVar7,0,0);
      }
      else {
LAB_1091180a8:
        puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        uStack_3b0 = 0;
        uStack_3a0 = 0x2020000000;
        uStack_398 = 0;
        uStack_3d0 = 0;
        uStack_3c0 = 0x2020000000;
        uStack_3b8 = 0;
        uVar16 = *(undefined8 *)(puVar21 + 0x20);
        puStack_418 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_410 = 0xc2000000;
        pcStack_408 = FUN_109118c74;
        puStack_400 = &UNK_110adcf90;
        puStack_3f8 = puVar21;
        puStack_3c8 = &uStack_3d0;
        puStack_3a8 = &uStack_3b0;
        _objc_retain(puVar7);
        puStack_3f0 = puVar7;
        puStack_3e0 = &uStack_3d0;
        puStack_3d8 = &uStack_3b0;
        _objc_retain(puVar8);
        puStack_3e8 = puVar8;
        func_0x00010bf97e80(uVar16);
        puVar9 = PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
        func_0x00010bf45600();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = *(undefined **)(puVar21 + 0x28);
        func_0x00010bfb27a0();
        _objc_retainAutoreleasedReturnValue();
        pppppppuVar28 = *(undefined8 ********)(puVar23 + 8);
        pppppppuVar27 = *(undefined8 ********)puVar23;
        pppppppuVar15 = *(undefined8 ********)(puVar23 + 0x10);
        puVar23 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        pppppppuStack_4a0 = pppppppuVar27;
        pppppppuStack_498 = pppppppuVar28;
        pppppppuStack_490 = pppppppuVar15;
        func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
        puVar24 = puVar10;
        func_0x00010c124d20();
        _objc_retainAutoreleasedReturnValue();
        if (puVar24 == (undefined *)0x0) {
          pppppppuStack_430 = (undefined8 *******)0x0;
          pppppppuStack_428 = (undefined8 *******)0x0;
          pppppppuStack_420 = (undefined8 *******)0x0;
        }
        else {
          func_0x00010bdc1140(&pppppppuStack_430,puVar24);
        }
        _objc_release(puVar24);
        _objc_release(puVar23);
        puVar23 = puVar7;
        func_0x00010bf529e0();
        puVar24 = puVar9;
        if ((puVar23 == (undefined *)0x0) || (*(char *)(puStack_3c8 + 3) != '\x01')) {
          lVar3 = *(long *)(puVar21 + 0x30);
          func_0x00010bf529e0();
          if (lVar3 == 0) {
LAB_1091185a4:
            ppppppuStack_5e8 = (undefined8 ******)0x0;
            puVar24 = (undefined *)0x0;
          }
          else {
            func_0x00010bef9f20();
            _objc_retainAutoreleasedReturnValue();
            pppppppuStack_460 = (undefined8 *******)0x0;
            pppppppuStack_458 = &pppppppuStack_460;
            pppppppuStack_450 = (undefined8 *******)0x3032000000;
            pppppppuStack_448 = (undefined8 *******)FUN_109118ee4;
            pppppppuStack_440 = (undefined8 *******)0x109118ef4;
            pppppppuStack_438 = (undefined8 *******)0x0;
            pppppppuStack_4a0 = (undefined8 *******)0x0;
            pppppppuStack_490 = (undefined8 *******)0x3810000000;
            pppppppuStack_488 = (undefined8 *******)0x10c8e7ea8;
            pppppppuStack_478 = pppppppuVar28;
            pppppppuStack_480 = pppppppuVar27;
            pppppppuStack_470 = pppppppuVar15;
            pppppppuStack_498 = &pppppppuStack_4a0;
            while( true ) {
              pppppppuStack_4b8 = (undefined8 *******)pppppppuStack_498[5];
              pppppppuStack_4c0 = (undefined8 *******)pppppppuStack_498[4];
              pppppppuStack_4b0 = (undefined8 *******)pppppppuStack_498[6];
              pppppppuStack_4d8 = pppppppuStack_428;
              pppppppuStack_4e0 = pppppppuStack_430;
              pppppppuStack_4d0 = pppppppuStack_420;
              pppppppuVar11 = &pppppppuStack_4c0;
              _CMTimeCompare(pppppppuVar11,&pppppppuStack_4e0);
              if (-1 < (int)pppppppuVar11) break;
              uVar16 = *(undefined8 *)(puVar21 + 0x30);
              puStack_530 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_528 = 0xc2000000;
              pcStack_520 = FUN_109118efc;
              puStack_518 = &UNK_110adcfe0;
              pppppppuStack_4f0 = pppppppuStack_428;
              pppppppuStack_4f8 = pppppppuStack_430;
              pppppppuStack_4e8 = pppppppuStack_420;
              pppppppuStack_508 = &pppppppuStack_4a0;
              _objc_retain(puVar24);
              puStack_510 = puVar24;
              pppppppuStack_500 = &pppppppuStack_460;
              func_0x00010bf97e80(uVar16);
              if (puVar21[0x38] != '\x01') {
LAB_109118504:
                _objc_release(puStack_510);
                break;
              }
              pppppppuStack_4b8 = (undefined8 *******)pppppppuStack_498[5];
              pppppppuStack_4c0 = (undefined8 *******)pppppppuStack_498[4];
              pppppppuStack_4b0 = (undefined8 *******)pppppppuStack_498[6];
              pppppppuVar11 = &pppppppuStack_4c0;
              pppppppuStack_4e0 = pppppppuVar27;
              pppppppuStack_4d8 = pppppppuVar28;
              pppppppuStack_4d0 = pppppppuVar15;
              _CMTimeCompare(pppppppuVar11,&pppppppuStack_4e0);
              if ((int)pppppppuVar11 == 0) goto LAB_109118504;
              _objc_release(puStack_510);
            }
            ppppppuStack_5e8 = pppppppuStack_458[5];
            if (ppppppuStack_5e8 != (undefined8 ******)0x0) {
              _objc_retain(ppppppuStack_5e8);
              *param_3 = *param_3 | 8;
            }
            __Block_object_dispose(&pppppppuStack_4a0,8);
            __Block_object_dispose(&pppppppuStack_460,8);
            _objc_release(pppppppuStack_438);
          }
        }
        else {
          puVar23 = puVar7;
          func_0x00010bf529e0();
          puVar25 = puVar10;
          func_0x00010bf529e0();
          if (puVar23 == puVar25) {
            _objc_retain(puVar10);
            puVar23 = puVar10;
            if (*(char *)(puStack_3a8 + 3) == '\x01') {
              puVar25 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
              _objc_retainAutoreleasedReturnValue();
              for (puVar23 = (undefined *)0x0; puVar22 = puVar10, func_0x00010bf529e0(),
                  puVar23 < puVar22; puVar23 = puVar23 + 1) {
                puVar22 = puVar7;
                func_0x00010c0dfd40();
                _objc_retainAutoreleasedReturnValue();
                puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
                func_0x00010c0ddbe0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                _objc_release(puVar22);
                if (puVar22 == puVar12) {
                  puVar22 = puVar10;
                  func_0x00010c0dfd40();
                  _objc_retainAutoreleasedReturnValue();
                  if (puVar22 == (undefined *)0x0) {
                    pppppppuStack_488 = (undefined8 *******)0x0;
                    pppppppuStack_490 = (undefined8 *******)0x0;
                    pppppppuStack_478 = (undefined8 *******)0x0;
                    pppppppuStack_480 = (undefined8 *******)0x0;
                    pppppppuStack_498 = (undefined8 *******)0x0;
                    pppppppuStack_4a0 = (undefined8 *******)0x0;
                  }
                  else {
                    func_0x00010bdc1120(&pppppppuStack_4a0,puVar22);
                  }
                  _objc_release(puVar22);
                  pppppppuStack_490 = *(undefined8 ********)(PTR__kCMTimeInvalid_110348648 + 0x10);
                  pppppppuStack_498 = *(undefined8 ********)(PTR__kCMTimeInvalid_110348648 + 8);
                  pppppppuStack_4a0 = *(undefined8 ********)PTR__kCMTimeInvalid_110348648;
                  pppppppuStack_448 = pppppppuStack_488;
                  pppppppuStack_438 = pppppppuStack_478;
                  pppppppuStack_440 = pppppppuStack_480;
                  puVar22 = PTR__OBJC_CLASS___NSValue_1126afdf8;
                  pppppppuStack_460 = pppppppuStack_4a0;
                  pppppppuStack_458 = pppppppuStack_498;
                  pppppppuStack_450 = pppppppuStack_490;
                  func_0x00010c297240(PTR__OBJC_CLASS___NSValue_1126afdf8);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar25);
                }
                else {
                  puVar22 = puVar10;
                  func_0x00010c0dfd40(puVar10);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar25);
                }
                _objc_release(puVar22);
              }
              puVar23 = puVar25;
              func_0x00010bf51e00(puVar25);
              _objc_release(puVar10);
              _objc_release(puVar25);
            }
            func_0x00010bef9f20(puVar9);
            _objc_retainAutoreleasedReturnValue();
            ppppppuStack_468 = (undefined8 ******)0x0;
            pppppppuStack_4a0 = pppppppuVar27;
            pppppppuStack_498 = pppppppuVar28;
            pppppppuStack_490 = pppppppuVar15;
            func_0x00010c067180();
            ppppppuStack_5e8 = ppppppuStack_468;
            _objc_retain(ppppppuStack_468);
            _objc_release(puVar23);
          }
          else {
            if (*(char *)(puStack_3c8 + 3) != '\x01') goto LAB_1091185a4;
            ppppppuStack_5e8 = (undefined8 ******)PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            puVar24 = (undefined *)0x0;
            *param_3 = *param_3 | 0x10;
          }
          if (ppppppuStack_5e8 == (undefined8 ******)0x0) {
            ppppppuStack_5e8 = (undefined8 ******)0x0;
          }
          else {
            *param_3 = *param_3 | 4;
          }
        }
        puVar23 = puVar8;
        func_0x00010bf529e0();
        if (puVar23 == (undefined *)0x0) {
          puStack_5d8 = (undefined *)0x0;
          puVar22 = (undefined *)0x0;
          puVar25 = (undefined *)0x0;
        }
        else {
          puVar25 = puVar8;
          func_0x00010bf529e0();
          puVar22 = puVar10;
          func_0x00010bf529e0();
          puVar23 = PTR__CGSizeZero_110347620;
          if (puVar25 == puVar22) {
            puStack_5d8 = puVar9;
            func_0x00010bef9f20();
            _objc_retainAutoreleasedReturnValue();
            puStack_538 = (undefined *)0x0;
            pppppppuStack_4a0 = pppppppuVar27;
            pppppppuStack_498 = pppppppuVar28;
            pppppppuStack_490 = pppppppuVar15;
            func_0x00010c067180(puStack_5d8);
            puVar25 = puStack_538;
            _objc_retain(puStack_538);
            puVar12 = PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18;
            if ((*(double *)(puVar21 + 0x40) == *(double *)puVar23) &&
               (*(double *)(puVar21 + 0x48) == *(double *)(puVar23 + 8))) {
              puVar22 = puVar8;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              if (puVar22 == (undefined *)0x0) {
                pppppppuStack_558 = (undefined8 *******)0x0;
                pppppppuStack_560 = (undefined8 *******)0x0;
                pppppppuStack_548 = (undefined8 *******)0x0;
                pppppppuStack_550 = (undefined8 *******)0x0;
                pppppppuStack_568 = (undefined8 *******)0x0;
                pppppppuStack_570 = (undefined8 *******)0x0;
              }
              else {
                func_0x00010c106f40(&pppppppuStack_570,puVar22);
              }
              pppppppuStack_498 = pppppppuStack_568;
              pppppppuStack_4a0 = pppppppuStack_570;
              pppppppuStack_488 = pppppppuStack_558;
              pppppppuStack_490 = pppppppuStack_560;
              pppppppuStack_478 = pppppppuStack_548;
              pppppppuStack_480 = pppppppuStack_550;
              func_0x00010c1e0300(puStack_5d8);
              _objc_release(puVar22);
              puVar12 = PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18;
            }
          }
          else {
            puVar25 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            puStack_5d8 = (undefined *)0x0;
            *param_3 = *param_3 | 0x20;
            puVar12 = PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18;
          }
          if (puVar25 != (undefined *)0x0) {
            *param_3 = *param_3 | 2;
          }
          PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18 = puVar12;
          if ((*(double *)(puVar21 + 0x40) == *(double *)puVar23) &&
             (*(double *)(puVar21 + 0x48) == *(double *)(puVar23 + 8))) {
            puVar22 = (undefined *)0x0;
          }
          else {
            func_0x00010c2998a0(puVar12);
            _objc_retainAutoreleasedReturnValue();
            pppppppuStack_4c0 = pppppppuVar27;
            pppppppuStack_4b8 = pppppppuVar28;
            pppppppuStack_4b0 = pppppppuVar15;
            for (puVar23 = (undefined *)0x0; puVar22 = puVar8, func_0x00010bf529e0(),
                puVar23 < puVar22; puVar23 = puVar23 + 1) {
              puVar22 = puVar8;
              func_0x00010c0dfd40(puVar8);
              _objc_retainAutoreleasedReturnValue();
              puVar13 = puVar10;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              if (puVar13 == (undefined *)0x0) {
                pppppppuStack_488 = (undefined8 *******)0x0;
                pppppppuStack_490 = (undefined8 *******)0x0;
                pppppppuStack_478 = (undefined8 *******)0x0;
                pppppppuStack_480 = (undefined8 *******)0x0;
                pppppppuStack_498 = (undefined8 *******)0x0;
                pppppppuStack_4a0 = (undefined8 *******)0x0;
              }
              else {
                func_0x00010bdc1120(&pppppppuStack_4a0,puVar13);
              }
              _objc_release(puVar13);
              pppppppuStack_588 = pppppppuStack_4b8;
              pppppppuStack_590 = pppppppuStack_4c0;
              pppppppuStack_580 = pppppppuStack_4b0;
              dVar26 = *(double *)(puVar21 + 0x50);
              if ((dVar26 != 0.0) && (dVar26 != 1.0)) {
                pppppppuStack_4d8 = pppppppuStack_4b8;
                pppppppuStack_4e0 = pppppppuStack_4c0;
                pppppppuStack_4d0 = pppppppuStack_4b0;
                _CMTimeMultiplyByFloat64(&pppppppuStack_460,1.0 / dVar26,&pppppppuStack_4e0);
                pppppppuStack_588 = pppppppuStack_458;
                pppppppuStack_590 = pppppppuStack_460;
                pppppppuStack_580 = pppppppuStack_450;
              }
              FUN_109126e68(&pppppppuStack_460,*(undefined8 *)(puVar21 + 0x40),
                            *(undefined8 *)(puVar21 + 0x48),puVar12,puVar22,&pppppppuStack_590);
              pppppppuStack_4d8 = pppppppuStack_4b8;
              pppppppuStack_4e0 = pppppppuStack_4c0;
              pppppppuStack_4d0 = pppppppuStack_4b0;
              pppppppuStack_5a8 = pppppppuStack_480;
              pppppppuStack_5b0 = pppppppuStack_488;
              pppppppuStack_5a0 = pppppppuStack_478;
              _CMTimeAdd(&pppppppuStack_460,&pppppppuStack_4e0,&pppppppuStack_5b0);
              pppppppuStack_4b8 = pppppppuStack_458;
              pppppppuStack_4c0 = pppppppuStack_460;
              pppppppuStack_4b0 = pppppppuStack_450;
              _objc_release(puVar22);
            }
            pppppppuStack_498 = pppppppuStack_428;
            pppppppuStack_4a0 = pppppppuStack_430;
            pppppppuStack_490 = pppppppuStack_420;
            dVar26 = *(double *)(puVar21 + 0x50);
            bVar1 = false;
            if ((0.0 < dVar26) && (bVar1 = false, !NAN(dVar26))) {
              bVar1 = dVar26 < 1.0;
            }
            if (bVar1) {
              pppppppuStack_4d8 = pppppppuStack_428;
              pppppppuStack_4e0 = pppppppuStack_430;
              pppppppuStack_4d0 = pppppppuStack_420;
              _CMTimeMultiplyByFloat64(&pppppppuStack_460,1.0 / dVar26,&pppppppuStack_4e0);
              pppppppuStack_498 = pppppppuStack_458;
              pppppppuStack_4a0 = pppppppuStack_460;
              pppppppuStack_490 = pppppppuStack_450;
            }
            pppppppuStack_458 = pppppppuStack_498;
            pppppppuStack_460 = pppppppuStack_4a0;
            pppppppuStack_450 = pppppppuStack_490;
            puVar22 = puVar12;
            func_0x000109126f00(*(undefined8 *)(puVar21 + 0x40),*(undefined8 *)(puVar21 + 0x48),
                                puVar12,&pppppppuStack_460);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar12);
          }
        }
        dVar26 = *(double *)(puVar21 + 0x50);
        dVar29 = ABS(dVar26 + -1.0);
        dVar30 = ABS(dVar26 + 1.0) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar29) && (bVar1 = false, !NAN(dVar29) && !NAN(dVar30))) {
          bVar1 = dVar29 < dVar30;
        }
        dVar29 = ABS(dVar26);
        dVar26 = ABS(dVar26 + 0.0) * 2.220446049250313e-16;
        bVar2 = true;
        if ((!bVar1) && (bVar2 = false, !NAN(dVar29))) {
          bVar2 = dVar29 < 2.2250738585072014e-308;
        }
        bVar1 = true;
        if ((!bVar2) && (bVar1 = false, !NAN(dVar29) && !NAN(dVar26))) {
          bVar1 = dVar29 < dVar26;
        }
        if (!bVar1) {
          pppppppuStack_4b8 = pppppppuStack_428;
          pppppppuStack_4c0 = pppppppuStack_430;
          pppppppuStack_4b0 = pppppppuStack_420;
          pppppppuStack_460 = pppppppuVar27;
          pppppppuStack_458 = pppppppuVar28;
          pppppppuStack_450 = pppppppuVar15;
          _CMTimeRangeMake(&pppppppuStack_4a0,&pppppppuStack_460,&pppppppuStack_4c0);
          dVar29 = *(double *)(puVar21 + 0x50);
          dVar26 = -dVar29;
          if (0.0 <= dVar29) {
            dVar26 = dVar29;
          }
          _CMTimeMake(&pppppppuStack_460,(long)((double)(long)pppppppuStack_430 / dVar26),
                      (ulong)pppppppuStack_428 & 0xffffffff);
          func_0x00010c14e420(puStack_5d8);
          puVar23 = puVar7;
          func_0x00010bf529e0();
          if (puVar23 == (undefined *)0x0) {
            lVar3 = *(long *)(puVar21 + 0x30);
            func_0x00010bf529e0();
            if ((ppppppuStack_5e8 == (undefined8 ******)0x0) && (lVar3 != 0)) goto LAB_109118b44;
          }
          else if (ppppppuStack_5e8 == (undefined8 ******)0x0) {
LAB_109118b44:
            pppppppuStack_4b8 = pppppppuStack_428;
            pppppppuStack_4c0 = pppppppuStack_430;
            pppppppuStack_4b0 = pppppppuStack_420;
            pppppppuStack_460 = pppppppuVar27;
            pppppppuStack_458 = pppppppuVar28;
            pppppppuStack_450 = pppppppuVar15;
            _CMTimeRangeMake(&pppppppuStack_4a0,&pppppppuStack_460,&pppppppuStack_4c0);
            dVar29 = *(double *)(puVar21 + 0x50);
            dVar26 = -dVar29;
            if (0.0 <= dVar29) {
              dVar26 = dVar29;
            }
            _CMTimeMake(&pppppppuStack_460,(long)((double)(long)pppppppuStack_430 / dVar26),
                        (ulong)pppppppuStack_428 & 0xffffffff);
            func_0x00010c14e420(puVar24);
          }
        }
        puVar23 = PTR_PTR_1126da158;
        _objc_alloc(PTR_PTR_1126da158);
        FUN_10911aa24();
        _objc_release(puVar10);
        _objc_release(ppppppuStack_5e8);
        _objc_release(puVar25);
        _objc_release(puVar22);
        _objc_release(puStack_5d8);
        _objc_release(puVar24);
        _objc_release(puVar9);
        _objc_release(puStack_3e8);
        _objc_release(puStack_3f0);
        __Block_object_dispose(&uStack_3d0,8);
        __Block_object_dispose(&uStack_3b0,8);
        _objc_release(puVar8);
      }
      _objc_release(puVar7);
      goto _objc_autoreleaseReturnValue;
    }
  }
  *param_3 = 0x40;
  puVar23 = PTR_PTR_1126da158;
  _objc_alloc(PTR_PTR_1126da158);
  FUN_10911aa24();
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
  return;
}



/* Entry: 109117dbc; end: 109118c73; -[SCVideoAssetMutator _generateMutatedVideoAssetForMultipleInputsWithErrorType:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_109117dbc(long param_1,undefined8 param_2,ulong *param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *******pppppppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *******pppppppuVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  double dVar18;
  undefined8 *******pppppppuVar19;
  undefined8 *******pppppppuVar20;
  double dVar21;
  double dVar22;
  undefined8 ******ppppppuStack_2d8;
  undefined *puStack_2c8;
  undefined8 *******pppppppuStack_2a0;
  undefined8 *******pppppppuStack_298;
  undefined8 *******pppppppuStack_290;
  undefined8 *******pppppppuStack_280;
  undefined8 *******pppppppuStack_278;
  undefined8 *******pppppppuStack_270;
  undefined8 *******pppppppuStack_260;
  undefined8 *******pppppppuStack_258;
  undefined8 *******pppppppuStack_250;
  undefined8 *******pppppppuStack_248;
  undefined8 *******pppppppuStack_240;
  undefined8 *******pppppppuStack_238;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 *******pppppppuStack_1f8;
  undefined8 *******pppppppuStack_1f0;
  undefined8 *******pppppppuStack_1e8;
  undefined8 *******pppppppuStack_1e0;
  undefined8 *******pppppppuStack_1d8;
  undefined8 *******pppppppuStack_1d0;
  undefined8 *******pppppppuStack_1c8;
  undefined8 *******pppppppuStack_1c0;
  undefined8 *******pppppppuStack_1b0;
  undefined8 *******pppppppuStack_1a8;
  undefined8 *******pppppppuStack_1a0;
  undefined8 *******pppppppuStack_190;
  undefined8 *******pppppppuStack_188;
  undefined8 *******pppppppuStack_180;
  undefined8 *******pppppppuStack_178;
  undefined8 *******pppppppuStack_170;
  undefined8 *******pppppppuStack_168;
  undefined8 *******pppppppuStack_160;
  undefined8 ******ppppppuStack_158;
  undefined8 *******pppppppuStack_150;
  undefined8 *******pppppppuStack_148;
  undefined8 *******pppppppuStack_140;
  undefined8 *******pppppppuStack_138;
  undefined8 *******pppppppuStack_130;
  undefined8 *******pppppppuStack_128;
  undefined8 *******pppppppuStack_120;
  undefined8 *******pppppppuStack_118;
  undefined8 *******pppppppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  
  *param_3 = 0;
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    lVar4 = *(long *)(param_1 + 0x28);
    func_0x00010bf529e0();
    if (lVar3 == lVar4) {
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x00010bf529e0();
      puVar16 = PTR__kCMTimeZero_110348670;
      if (lVar3 == 1) {
        dVar18 = *(double *)(param_1 + 0x50);
        dVar21 = ABS(dVar18 + -1.0);
        dVar22 = ABS(dVar18 + 1.0) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar21) && (bVar1 = false, !NAN(dVar21) && !NAN(dVar22))) {
          bVar1 = dVar21 < dVar22;
        }
        dVar21 = ABS(dVar18);
        dVar18 = ABS(dVar18 + 0.0) * 2.220446049250313e-16;
        bVar2 = true;
        if ((!bVar1) && (bVar2 = false, !NAN(dVar21))) {
          bVar2 = dVar21 < 2.2250738585072014e-308;
        }
        bVar1 = true;
        if ((!bVar2) && (bVar1 = false, !NAN(dVar21) && !NAN(dVar18))) {
          bVar1 = dVar21 < dVar18;
        }
        if (!bVar1) goto LAB_1091180a8;
        lVar3 = *(long *)(param_1 + 0x30);
        func_0x00010bf529e0();
        if (lVar3 != 0) goto LAB_1091180a8;
        bVar1 = false;
        if ((*(double *)(param_1 + 0x40) == *(double *)PTR__CGSizeZero_110347620) &&
           (bVar1 = false,
           !NAN(*(double *)(param_1 + 0x48)) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
          bVar1 = *(double *)(param_1 + 0x48) == *(double *)(PTR__CGSizeZero_110347620 + 8);
        }
        if (!bVar1) goto LAB_1091180a8;
        lVar3 = *(long *)(param_1 + 0x28);
        func_0x00010bf529e0();
        if (lVar3 != 1) goto LAB_1091180a8;
        lVar4 = *(long *)(param_1 + 0x28);
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar4;
        func_0x00010bf529e0();
        _objc_release(lVar4);
        if (lVar3 != 1) goto LAB_1091180a8;
        lVar4 = *(long *)(param_1 + 0x28);
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 == 0) {
          pppppppuStack_178 = (undefined8 *******)0x0;
          pppppppuStack_180 = (undefined8 *******)0x0;
          pppppppuStack_168 = (undefined8 *******)0x0;
          pppppppuStack_170 = (undefined8 *******)0x0;
          pppppppuStack_188 = (undefined8 *******)0x0;
          pppppppuStack_190 = (undefined8 *******)0x0;
        }
        else {
          func_0x00010bdc1120(&pppppppuStack_190,lVar3);
        }
        _objc_release(lVar3);
        _objc_release(lVar4);
        pppppppuStack_148 = pppppppuStack_188;
        pppppppuStack_150 = pppppppuStack_190;
        pppppppuStack_140 = pppppppuStack_180;
        puStack_98 = *(undefined8 **)(puVar16 + 8);
        uStack_a0 = *(undefined8 *)puVar16;
        uStack_90 = *(undefined8 *)(puVar16 + 0x10);
        pppppppuVar13 = &pppppppuStack_150;
        _CMTimeCompare(pppppppuVar13,&uStack_a0);
        if ((int)pppppppuVar13 != 0) goto LAB_1091180a8;
        pppppppuStack_148 = pppppppuStack_170;
        pppppppuStack_150 = pppppppuStack_178;
        pppppppuStack_140 = pppppppuStack_168;
        pppppppuVar13 = pppppppuStack_178;
        _CMTimeGetSeconds(&pppppppuStack_150);
        lVar3 = *(long *)(param_1 + 0x20);
        pppppppuVar19 = pppppppuVar13;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 == 0) {
          pppppppuStack_150 = (undefined8 *******)0x0;
          pppppppuStack_148 = (undefined8 *******)0x0;
          pppppppuStack_140 = (undefined8 *******)0x0;
        }
        else {
          func_0x00010bf8b160(&pppppppuStack_150,lVar3);
        }
        _CMTimeGetSeconds(&pppppppuStack_150);
        _objc_release(lVar3);
        lVar3 = *(long *)(param_1 + 0x20);
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 == 0) {
          uStack_a0 = 0;
          puStack_98 = (undefined8 *)0x0;
          dVar18 = 0.0;
          uStack_90 = 0;
        }
        else {
          func_0x00010bf8b160(&uStack_a0,lVar3);
          dVar18 = (double)(int)puStack_98;
        }
        _objc_release(lVar3);
        if (1.0 / dVar18 <= ABS((double)pppppppuVar13 - (double)pppppppuVar19)) goto LAB_1091180a8;
        puVar5 = PTR_PTR_1126da158;
        _objc_alloc(PTR_PTR_1126da158);
        puVar6 = *(undefined **)(param_1 + 0x20);
        func_0x00010bfb1920(puVar6);
        _objc_retainAutoreleasedReturnValue();
        FUN_10911aa24(puVar5,puVar6,0,0);
      }
      else {
LAB_1091180a8:
        puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        uStack_a0 = 0;
        uStack_90 = 0x2020000000;
        uStack_88 = 0;
        uStack_c0 = 0;
        uStack_b0 = 0x2020000000;
        uStack_a8 = 0;
        uVar14 = *(undefined8 *)(param_1 + 0x20);
        puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_100 = 0xc2000000;
        pcStack_f8 = FUN_109118c74;
        puStack_f0 = &UNK_110adcf90;
        lStack_e8 = param_1;
        puStack_b8 = &uStack_c0;
        puStack_98 = &uStack_a0;
        _objc_retain(puVar6);
        puStack_e0 = puVar6;
        puStack_d0 = &uStack_c0;
        puStack_c8 = &uStack_a0;
        _objc_retain(puVar7);
        puStack_d8 = puVar7;
        func_0x00010bf97e80(uVar14);
        puVar8 = PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
        func_0x00010bf45600();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = *(undefined **)(param_1 + 0x28);
        func_0x00010bfb27a0();
        _objc_retainAutoreleasedReturnValue();
        pppppppuVar20 = *(undefined8 ********)(puVar16 + 8);
        pppppppuVar19 = *(undefined8 ********)puVar16;
        pppppppuVar13 = *(undefined8 ********)(puVar16 + 0x10);
        puVar16 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        pppppppuStack_190 = pppppppuVar19;
        pppppppuStack_188 = pppppppuVar20;
        pppppppuStack_180 = pppppppuVar13;
        func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar9;
        func_0x00010c124d20();
        _objc_retainAutoreleasedReturnValue();
        if (puVar17 == (undefined *)0x0) {
          pppppppuStack_120 = (undefined8 *******)0x0;
          pppppppuStack_118 = (undefined8 *******)0x0;
          pppppppuStack_110 = (undefined8 *******)0x0;
        }
        else {
          func_0x00010bdc1140(&pppppppuStack_120,puVar17);
        }
        _objc_release(puVar17);
        _objc_release(puVar16);
        puVar16 = puVar6;
        func_0x00010bf529e0();
        puVar17 = puVar8;
        if ((puVar16 == (undefined *)0x0) || (*(char *)(puStack_b8 + 3) != '\x01')) {
          lVar3 = *(long *)(param_1 + 0x30);
          func_0x00010bf529e0();
          if (lVar3 == 0) {
LAB_1091185a4:
            ppppppuStack_2d8 = (undefined8 ******)0x0;
            puVar17 = (undefined *)0x0;
          }
          else {
            func_0x00010bef9f20();
            _objc_retainAutoreleasedReturnValue();
            pppppppuStack_150 = (undefined8 *******)0x0;
            pppppppuStack_148 = &pppppppuStack_150;
            pppppppuStack_140 = (undefined8 *******)0x3032000000;
            pppppppuStack_138 = (undefined8 *******)FUN_109118ee4;
            pppppppuStack_130 = (undefined8 *******)0x109118ef4;
            pppppppuStack_128 = (undefined8 *******)0x0;
            pppppppuStack_190 = (undefined8 *******)0x0;
            pppppppuStack_180 = (undefined8 *******)0x3810000000;
            pppppppuStack_178 = (undefined8 *******)0x10c8e7ea8;
            pppppppuStack_168 = pppppppuVar20;
            pppppppuStack_170 = pppppppuVar19;
            pppppppuStack_160 = pppppppuVar13;
            pppppppuStack_188 = &pppppppuStack_190;
            while( true ) {
              pppppppuStack_1a8 = (undefined8 *******)pppppppuStack_188[5];
              pppppppuStack_1b0 = (undefined8 *******)pppppppuStack_188[4];
              pppppppuStack_1a0 = (undefined8 *******)pppppppuStack_188[6];
              pppppppuStack_1c8 = pppppppuStack_118;
              pppppppuStack_1d0 = pppppppuStack_120;
              pppppppuStack_1c0 = pppppppuStack_110;
              pppppppuVar10 = &pppppppuStack_1b0;
              _CMTimeCompare(pppppppuVar10,&pppppppuStack_1d0);
              if (-1 < (int)pppppppuVar10) break;
              uVar14 = *(undefined8 *)(param_1 + 0x30);
              puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_218 = 0xc2000000;
              pcStack_210 = FUN_109118efc;
              puStack_208 = &UNK_110adcfe0;
              pppppppuStack_1e0 = pppppppuStack_118;
              pppppppuStack_1e8 = pppppppuStack_120;
              pppppppuStack_1d8 = pppppppuStack_110;
              pppppppuStack_1f8 = &pppppppuStack_190;
              _objc_retain(puVar17);
              puStack_200 = puVar17;
              pppppppuStack_1f0 = &pppppppuStack_150;
              func_0x00010bf97e80(uVar14);
              if (*(char *)(param_1 + 0x38) != '\x01') {
LAB_109118504:
                _objc_release(puStack_200);
                break;
              }
              pppppppuStack_1a8 = (undefined8 *******)pppppppuStack_188[5];
              pppppppuStack_1b0 = (undefined8 *******)pppppppuStack_188[4];
              pppppppuStack_1a0 = (undefined8 *******)pppppppuStack_188[6];
              pppppppuVar10 = &pppppppuStack_1b0;
              pppppppuStack_1d0 = pppppppuVar19;
              pppppppuStack_1c8 = pppppppuVar20;
              pppppppuStack_1c0 = pppppppuVar13;
              _CMTimeCompare(pppppppuVar10,&pppppppuStack_1d0);
              if ((int)pppppppuVar10 == 0) goto LAB_109118504;
              _objc_release(puStack_200);
            }
            ppppppuStack_2d8 = pppppppuStack_148[5];
            if (ppppppuStack_2d8 != (undefined8 ******)0x0) {
              _objc_retain(ppppppuStack_2d8);
              *param_3 = *param_3 | 8;
            }
            __Block_object_dispose(&pppppppuStack_190,8);
            __Block_object_dispose(&pppppppuStack_150,8);
            _objc_release(pppppppuStack_128);
          }
        }
        else {
          puVar16 = puVar6;
          func_0x00010bf529e0();
          puVar15 = puVar9;
          func_0x00010bf529e0();
          if (puVar16 == puVar15) {
            _objc_retain(puVar9);
            puVar16 = puVar9;
            if (*(char *)(puStack_98 + 3) == '\x01') {
              puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
              _objc_retainAutoreleasedReturnValue();
              for (puVar16 = (undefined *)0x0; puVar5 = puVar9, func_0x00010bf529e0(),
                  puVar16 < puVar5; puVar16 = puVar16 + 1) {
                puVar5 = puVar6;
                func_0x00010c0dfd40();
                _objc_retainAutoreleasedReturnValue();
                puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
                func_0x00010c0ddbe0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                _objc_release(puVar5);
                if (puVar5 == puVar11) {
                  puVar5 = puVar9;
                  func_0x00010c0dfd40();
                  _objc_retainAutoreleasedReturnValue();
                  if (puVar5 == (undefined *)0x0) {
                    pppppppuStack_178 = (undefined8 *******)0x0;
                    pppppppuStack_180 = (undefined8 *******)0x0;
                    pppppppuStack_168 = (undefined8 *******)0x0;
                    pppppppuStack_170 = (undefined8 *******)0x0;
                    pppppppuStack_188 = (undefined8 *******)0x0;
                    pppppppuStack_190 = (undefined8 *******)0x0;
                  }
                  else {
                    func_0x00010bdc1120(&pppppppuStack_190,puVar5);
                  }
                  _objc_release(puVar5);
                  pppppppuStack_180 = *(undefined8 ********)(PTR__kCMTimeInvalid_110348648 + 0x10);
                  pppppppuStack_188 = *(undefined8 ********)(PTR__kCMTimeInvalid_110348648 + 8);
                  pppppppuStack_190 = *(undefined8 ********)PTR__kCMTimeInvalid_110348648;
                  pppppppuStack_138 = pppppppuStack_178;
                  pppppppuStack_128 = pppppppuStack_168;
                  pppppppuStack_130 = pppppppuStack_170;
                  puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
                  pppppppuStack_150 = pppppppuStack_190;
                  pppppppuStack_148 = pppppppuStack_188;
                  pppppppuStack_140 = pppppppuStack_180;
                  func_0x00010c297240(PTR__OBJC_CLASS___NSValue_1126afdf8);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar15);
                }
                else {
                  puVar5 = puVar9;
                  func_0x00010c0dfd40(puVar9);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar15);
                }
                _objc_release(puVar5);
              }
              puVar16 = puVar15;
              func_0x00010bf51e00(puVar15);
              _objc_release(puVar9);
              _objc_release(puVar15);
            }
            func_0x00010bef9f20(puVar8);
            _objc_retainAutoreleasedReturnValue();
            ppppppuStack_158 = (undefined8 ******)0x0;
            pppppppuStack_190 = pppppppuVar19;
            pppppppuStack_188 = pppppppuVar20;
            pppppppuStack_180 = pppppppuVar13;
            func_0x00010c067180();
            ppppppuStack_2d8 = ppppppuStack_158;
            _objc_retain(ppppppuStack_158);
            _objc_release(puVar16);
          }
          else {
            if (*(char *)(puStack_b8 + 3) != '\x01') goto LAB_1091185a4;
            ppppppuStack_2d8 = (undefined8 ******)PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            puVar17 = (undefined *)0x0;
            *param_3 = *param_3 | 0x10;
          }
          if (ppppppuStack_2d8 == (undefined8 ******)0x0) {
            ppppppuStack_2d8 = (undefined8 ******)0x0;
          }
          else {
            *param_3 = *param_3 | 4;
          }
        }
        puVar16 = puVar7;
        func_0x00010bf529e0();
        if (puVar16 == (undefined *)0x0) {
          puStack_2c8 = (undefined *)0x0;
          puVar15 = (undefined *)0x0;
          puVar16 = (undefined *)0x0;
        }
        else {
          puVar16 = puVar7;
          func_0x00010bf529e0();
          puVar5 = puVar9;
          func_0x00010bf529e0();
          puVar15 = PTR__CGSizeZero_110347620;
          if (puVar16 == puVar5) {
            puStack_2c8 = puVar8;
            func_0x00010bef9f20();
            _objc_retainAutoreleasedReturnValue();
            puStack_228 = (undefined *)0x0;
            pppppppuStack_190 = pppppppuVar19;
            pppppppuStack_188 = pppppppuVar20;
            pppppppuStack_180 = pppppppuVar13;
            func_0x00010c067180(puStack_2c8);
            puVar16 = puStack_228;
            _objc_retain(puStack_228);
            if ((*(double *)(param_1 + 0x40) == *(double *)puVar15) &&
               (*(double *)(param_1 + 0x48) == *(double *)(puVar15 + 8))) {
              puVar5 = puVar7;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              if (puVar5 == (undefined *)0x0) {
                pppppppuStack_248 = (undefined8 *******)0x0;
                pppppppuStack_250 = (undefined8 *******)0x0;
                pppppppuStack_238 = (undefined8 *******)0x0;
                pppppppuStack_240 = (undefined8 *******)0x0;
                pppppppuStack_258 = (undefined8 *******)0x0;
                pppppppuStack_260 = (undefined8 *******)0x0;
              }
              else {
                func_0x00010c106f40(&pppppppuStack_260,puVar5);
              }
              pppppppuStack_188 = pppppppuStack_258;
              pppppppuStack_190 = pppppppuStack_260;
              pppppppuStack_178 = pppppppuStack_248;
              pppppppuStack_180 = pppppppuStack_250;
              pppppppuStack_168 = pppppppuStack_238;
              pppppppuStack_170 = pppppppuStack_240;
              func_0x00010c1e0300(puStack_2c8);
              _objc_release(puVar5);
            }
          }
          else {
            puVar16 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            puStack_2c8 = (undefined *)0x0;
            *param_3 = *param_3 | 0x20;
          }
          if (puVar16 != (undefined *)0x0) {
            *param_3 = *param_3 | 2;
          }
          if ((*(double *)(param_1 + 0x40) == *(double *)puVar15) &&
             (*(double *)(param_1 + 0x48) == *(double *)(puVar15 + 8))) {
            puVar15 = (undefined *)0x0;
          }
          else {
            puVar5 = PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18;
            func_0x00010c2998a0(
                               PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18
                               );
            _objc_retainAutoreleasedReturnValue();
            pppppppuStack_1b0 = pppppppuVar19;
            pppppppuStack_1a8 = pppppppuVar20;
            pppppppuStack_1a0 = pppppppuVar13;
            for (puVar15 = (undefined *)0x0; puVar11 = puVar7, func_0x00010bf529e0(),
                puVar15 < puVar11; puVar15 = puVar15 + 1) {
              puVar11 = puVar7;
              func_0x00010c0dfd40(puVar7);
              _objc_retainAutoreleasedReturnValue();
              puVar12 = puVar9;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              if (puVar12 == (undefined *)0x0) {
                pppppppuStack_178 = (undefined8 *******)0x0;
                pppppppuStack_180 = (undefined8 *******)0x0;
                pppppppuStack_168 = (undefined8 *******)0x0;
                pppppppuStack_170 = (undefined8 *******)0x0;
                pppppppuStack_188 = (undefined8 *******)0x0;
                pppppppuStack_190 = (undefined8 *******)0x0;
              }
              else {
                func_0x00010bdc1120(&pppppppuStack_190,puVar12);
              }
              _objc_release(puVar12);
              pppppppuStack_278 = pppppppuStack_1a8;
              pppppppuStack_280 = pppppppuStack_1b0;
              pppppppuStack_270 = pppppppuStack_1a0;
              dVar18 = *(double *)(param_1 + 0x50);
              if ((dVar18 != 0.0) && (dVar18 != 1.0)) {
                pppppppuStack_1c8 = pppppppuStack_1a8;
                pppppppuStack_1d0 = pppppppuStack_1b0;
                pppppppuStack_1c0 = pppppppuStack_1a0;
                _CMTimeMultiplyByFloat64(&pppppppuStack_150,1.0 / dVar18,&pppppppuStack_1d0);
                pppppppuStack_278 = pppppppuStack_148;
                pppppppuStack_280 = pppppppuStack_150;
                pppppppuStack_270 = pppppppuStack_140;
              }
              FUN_109126e68(&pppppppuStack_150,*(undefined8 *)(param_1 + 0x40),
                            *(undefined8 *)(param_1 + 0x48),puVar5,puVar11,&pppppppuStack_280);
              pppppppuStack_1c8 = pppppppuStack_1a8;
              pppppppuStack_1d0 = pppppppuStack_1b0;
              pppppppuStack_1c0 = pppppppuStack_1a0;
              pppppppuStack_298 = pppppppuStack_170;
              pppppppuStack_2a0 = pppppppuStack_178;
              pppppppuStack_290 = pppppppuStack_168;
              _CMTimeAdd(&pppppppuStack_150,&pppppppuStack_1d0,&pppppppuStack_2a0);
              pppppppuStack_1a8 = pppppppuStack_148;
              pppppppuStack_1b0 = pppppppuStack_150;
              pppppppuStack_1a0 = pppppppuStack_140;
              _objc_release(puVar11);
            }
            pppppppuStack_188 = pppppppuStack_118;
            pppppppuStack_190 = pppppppuStack_120;
            pppppppuStack_180 = pppppppuStack_110;
            dVar18 = *(double *)(param_1 + 0x50);
            bVar1 = false;
            if ((0.0 < dVar18) && (bVar1 = false, !NAN(dVar18))) {
              bVar1 = dVar18 < 1.0;
            }
            if (bVar1) {
              pppppppuStack_1c8 = pppppppuStack_118;
              pppppppuStack_1d0 = pppppppuStack_120;
              pppppppuStack_1c0 = pppppppuStack_110;
              _CMTimeMultiplyByFloat64(&pppppppuStack_150,1.0 / dVar18,&pppppppuStack_1d0);
              pppppppuStack_188 = pppppppuStack_148;
              pppppppuStack_190 = pppppppuStack_150;
              pppppppuStack_180 = pppppppuStack_140;
            }
            pppppppuStack_148 = pppppppuStack_188;
            pppppppuStack_150 = pppppppuStack_190;
            pppppppuStack_140 = pppppppuStack_180;
            puVar15 = puVar5;
            func_0x000109126f00(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                                puVar5,&pppppppuStack_150);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
          }
        }
        dVar18 = *(double *)(param_1 + 0x50);
        dVar21 = ABS(dVar18 + -1.0);
        dVar22 = ABS(dVar18 + 1.0) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar21) && (bVar1 = false, !NAN(dVar21) && !NAN(dVar22))) {
          bVar1 = dVar21 < dVar22;
        }
        dVar21 = ABS(dVar18);
        dVar18 = ABS(dVar18 + 0.0) * 2.220446049250313e-16;
        bVar2 = true;
        if ((!bVar1) && (bVar2 = false, !NAN(dVar21))) {
          bVar2 = dVar21 < 2.2250738585072014e-308;
        }
        bVar1 = true;
        if ((!bVar2) && (bVar1 = false, !NAN(dVar21) && !NAN(dVar18))) {
          bVar1 = dVar21 < dVar18;
        }
        if (!bVar1) {
          pppppppuStack_1a8 = pppppppuStack_118;
          pppppppuStack_1b0 = pppppppuStack_120;
          pppppppuStack_1a0 = pppppppuStack_110;
          pppppppuStack_150 = pppppppuVar19;
          pppppppuStack_148 = pppppppuVar20;
          pppppppuStack_140 = pppppppuVar13;
          _CMTimeRangeMake(&pppppppuStack_190,&pppppppuStack_150,&pppppppuStack_1b0);
          dVar21 = *(double *)(param_1 + 0x50);
          dVar18 = -dVar21;
          if (0.0 <= dVar21) {
            dVar18 = dVar21;
          }
          _CMTimeMake(&pppppppuStack_150,(long)((double)(long)pppppppuStack_120 / dVar18),
                      (ulong)pppppppuStack_118 & 0xffffffff);
          func_0x00010c14e420(puStack_2c8);
          puVar5 = puVar6;
          func_0x00010bf529e0();
          if (puVar5 == (undefined *)0x0) {
            lVar3 = *(long *)(param_1 + 0x30);
            func_0x00010bf529e0();
            if ((ppppppuStack_2d8 == (undefined8 ******)0x0) && (lVar3 != 0)) goto LAB_109118b44;
          }
          else if (ppppppuStack_2d8 == (undefined8 ******)0x0) {
LAB_109118b44:
            pppppppuStack_1a8 = pppppppuStack_118;
            pppppppuStack_1b0 = pppppppuStack_120;
            pppppppuStack_1a0 = pppppppuStack_110;
            pppppppuStack_150 = pppppppuVar19;
            pppppppuStack_148 = pppppppuVar20;
            pppppppuStack_140 = pppppppuVar13;
            _CMTimeRangeMake(&pppppppuStack_190,&pppppppuStack_150,&pppppppuStack_1b0);
            dVar21 = *(double *)(param_1 + 0x50);
            dVar18 = -dVar21;
            if (0.0 <= dVar21) {
              dVar18 = dVar21;
            }
            _CMTimeMake(&pppppppuStack_150,(long)((double)(long)pppppppuStack_120 / dVar18),
                        (ulong)pppppppuStack_118 & 0xffffffff);
            func_0x00010c14e420(puVar17);
          }
        }
        puVar5 = PTR_PTR_1126da158;
        _objc_alloc(PTR_PTR_1126da158);
        FUN_10911aa24();
        _objc_release(puVar9);
        _objc_release(ppppppuStack_2d8);
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(puStack_2c8);
        _objc_release(puVar17);
        _objc_release(puVar8);
        _objc_release(puStack_d8);
        _objc_release(puStack_e0);
        __Block_object_dispose(&uStack_c0,8);
        __Block_object_dispose(&uStack_a0,8);
        _objc_release(puVar7);
      }
      _objc_release(puVar6);
      goto LAB_109118a84;
    }
  }
  *param_3 = 0x40;
  puVar5 = PTR_PTR_1126da158;
  _objc_alloc(PTR_PTR_1126da158);
  FUN_10911aa24();
LAB_109118a84:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 109118c74; end: 109118e13;  */

void FUN_109118c74(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = param_2;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      do {
        uVar6 = *(undefined8 *)(param_1 + 0x28);
        if (lVar3 == 0) {
          puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(uVar6);
          _objc_release(puVar4);
          plVar5 = (long *)(param_1 + 0x40);
        }
        else {
          func_0x00010befa120(uVar6);
          plVar5 = (long *)(param_1 + 0x38);
        }
        *(undefined1 *)(*(long *)(*plVar5 + 8) + 0x18) = 1;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
    }
    _objc_release(lVar3);
  }
  lVar1 = param_2;
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar3 != 0 && lVar2 != 0) {
    do {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 109118e14; end: 109118ee3;  */

void FUN_109118e14(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (param_2 == 0) {
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x00010bdc1140(&uStack_60,param_2);
  }
  if (param_3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_90,param_3);
  }
  uStack_a8 = uStack_70;
  uStack_b0 = uStack_78;
  uStack_a0 = uStack_68;
  _CMTimeAdd(auStack_48,&uStack_60,&uStack_b0);
  func_0x00010c297200(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109118ee4; end: 109118efb;  */

void FUN_109118ee4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 109118efc; end: 10911918f;  */

void FUN_109118efc(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (lVar1 != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    if (param_2 == 0) {
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_a0,param_2);
    }
    uStack_68 = *(undefined8 *)(lVar4 + 0x28);
    uStack_70 = *(undefined8 *)(lVar4 + 0x20);
    uStack_60 = *(undefined8 *)(lVar4 + 0x30);
    _CMTimeAdd(&uStack_58,&uStack_70,&uStack_a0);
    uStack_98 = uStack_50;
    uStack_a0 = uStack_58;
    uStack_90 = uStack_48;
    uStack_68 = *(undefined8 *)(param_1 + 0x40);
    uStack_70 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = *(undefined8 *)(param_1 + 0x48);
    puVar2 = &uStack_a0;
    _CMTimeCompare(puVar2,&uStack_70);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    if ((int)puVar2 < 1) {
      if (param_2 == 0) {
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
      }
      else {
        func_0x00010bf8b160(&uStack_70,param_2);
      }
      uStack_b8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_c0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_b0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      _CMTimeRangeMake(&uStack_a0,&uStack_c0,&uStack_70);
      lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar3 = *(undefined8 *)(lVar6 + 0x28);
      uStack_68 = *(undefined8 *)(lVar4 + 0x28);
      uStack_70 = *(undefined8 *)(lVar4 + 0x20);
      uStack_60 = *(undefined8 *)(lVar4 + 0x30);
      func_0x00010c067160(uVar5);
      _objc_retain(uVar3);
      uVar5 = *(undefined8 *)(lVar6 + 0x28);
      *(undefined8 *)(lVar6 + 0x28) = uVar3;
      _objc_release(uVar5);
      lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      *(undefined8 *)(lVar4 + 0x28) = uStack_50;
      *(undefined8 *)(lVar4 + 0x20) = uStack_58;
      *(undefined8 *)(lVar4 + 0x30) = uStack_48;
    }
    else {
      lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      uStack_98 = *(undefined8 *)(param_1 + 0x40);
      uStack_a0 = *(undefined8 *)(param_1 + 0x38);
      uStack_90 = *(undefined8 *)(param_1 + 0x48);
      uStack_b8 = *(undefined8 *)(lVar4 + 0x28);
      uStack_c0 = *(undefined8 *)(lVar4 + 0x20);
      uStack_b0 = *(undefined8 *)(lVar4 + 0x30);
      _CMTimeSubtract(&uStack_70,&uStack_a0,&uStack_c0);
      uStack_b8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_c0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_b0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      _CMTimeRangeMake(&uStack_a0,&uStack_c0,&uStack_70);
      lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar3 = *(undefined8 *)(lVar6 + 0x28);
      uStack_68 = *(undefined8 *)(lVar4 + 0x28);
      uStack_70 = *(undefined8 *)(lVar4 + 0x20);
      uStack_60 = *(undefined8 *)(lVar4 + 0x30);
      func_0x00010c067160(uVar5);
      _objc_retain(uVar3);
      uVar5 = *(undefined8 *)(lVar6 + 0x28);
      *(undefined8 *)(lVar6 + 0x28) = uVar3;
      _objc_release(uVar5);
      lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      *(undefined8 *)(lVar4 + 0x28) = uStack_50;
      *(undefined8 *)(lVar4 + 0x20) = uStack_58;
      *(undefined8 *)(lVar4 + 0x30) = uStack_48;
      *param_4 = 1;
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 109119190; end: 1091191ef; -[SCVideoAssetMutator .cxx_destruct] */

void FUN_109119190(long param_1)

{
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



/* Entry: 1091191f0; end: 10911927b; -[SCVideoAssetRandomAccessor initWithVideoAsset:keyFrameInterval:isReverseOrderAccess:] */

undefined1 *
FUN_1091191f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112700700;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10911927c; end: 1091195d7; -[SCVideoAssetRandomAccessor startAccessingWithError:] */

undefined1  [16]
FUN_10911927c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long *param_5,
             undefined8 param_6,undefined1 *param_7)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  code **ppcVar11;
  int iVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  code *pcStack_90;
  ulong uStack_88;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  ppcVar11 = &pcStack_90;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_5 != (long *)0x0) {
    *param_5 = 0;
  }
  lVar3 = *(long *)(param_3 + 0x18);
  iVar12 = (int)*(undefined8 *)PTR__AVMediaTypeVideo_110348090;
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    ppcVar11 = (code **)param_7;
    if (param_5 != (long *)0x0) {
      iVar12 = 0x10f22078;
      ppcVar11 = (code **)0x0;
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_5 = (long)puVar6;
    }
    uVar15 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar16 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    goto LAB_10911958c;
  }
  puVar6 = PTR__OBJC_CLASS___AVAssetReaderTrackOutput_1126bf5a0;
  func_0x00010bf0b5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___AVAssetReader_1126bf598;
  _objc_alloc();
  iVar12 = (int)*(undefined8 *)(param_3 + 0x18);
  func_0x00010bff4200();
  if (param_5 == (long *)0x0) {
    if (puVar5 != (undefined *)0x0) goto LAB_1091193b8;
LAB_10911950c:
    ppcVar11 = (code **)param_7;
    uVar15 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar16 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    if ((*param_5 != 0) || (puVar5 == (undefined *)0x0)) {
      iVar12 = 0x10f22078;
      param_7 = (undefined1 *)0x0;
      puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_5 = (long)puVar8;
      goto LAB_10911950c;
    }
LAB_1091193b8:
    func_0x00010befa4c0(puVar5);
    func_0x00010c250140(puVar5);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar8 = puVar6;
    func_0x00010bf52120();
    while (puVar8 != (undefined *)0x0) {
      _CMSampleBufferGetPresentationTimeStamp(&pcStack_90,puVar8);
      if (((uStack_88 & 0x100000000) != 0) &&
         (puVar9 = puVar8, _CMSampleBufferGetDataBuffer(), puVar9 != (undefined *)0x0)) {
        func_0x00010befa120(puVar7);
      }
      _CFRelease(puVar8);
      puVar8 = puVar6;
      func_0x00010bf52120();
    }
    lVar3 = lVar4;
    func_0x00010bfb5b00(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar3;
    func_0x00010bfb1920();
    _objc_release(lVar3);
    pcStack_90 = FUN_1091195d8;
    plVar14 = (long *)(param_3 + 0x20);
    *plVar14 = 0;
    uStack_78 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
    ppuStack_70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2088;
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_88 = param_3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    iVar2 = 0;
    iVar12 = 0;
    _VTDecompressionSessionCreate(0,lVar10,0,puVar8,&pcStack_90,plVar14);
    if (iVar2 == 0) {
      puVar8 = puVar7;
      func_0x00010bf51e00();
      uVar15 = *(undefined8 *)(param_3 + 0x28);
      *(undefined **)(param_3 + 0x28) = puVar8;
      _objc_release(uVar15);
      if (*(char *)(param_3 + 8) == '\x01') {
        lVar3 = *(long *)(param_3 + 0x28);
        func_0x00010bf529e0();
        uVar13 = *(ulong *)(param_3 + 0x10);
        uVar1 = 0;
        if (uVar13 != 0) {
          uVar1 = (lVar3 - 1U) / uVar13;
        }
        lVar3 = uVar1 * uVar13;
      }
      else {
        lVar3 = 0;
      }
      *(long *)(param_3 + 0x38) = lVar3;
      func_0x00010c0d5d20(lVar4);
      uVar15 = param_1;
      uVar16 = param_2;
    }
    else {
      if (*plVar14 != 0) {
        _VTDecompressionSessionInvalidate();
        _CFRelease(*plVar14);
        *plVar14 = 0;
      }
      iVar12 = 0x10f22078;
      ppcVar11 = (code **)0x0;
      puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_5 = (long)puVar8;
      uVar15 = *(undefined8 *)PTR__CGSizeZero_110347620;
      uVar16 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    }
    _objc_release(puVar7);
  }
  _objc_release(puVar5);
  _objc_release(puVar6);
LAB_10911958c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar17._8_8_ = uVar16;
    auVar17._0_8_ = uVar15;
    return auVar17;
  }
  ___stack_chk_fail();
  _objc_retain();
  if (lVar4 != 0) {
    if (iVar12 == 0) {
      _CVBufferRetain();
    }
    else {
      ppcVar11 = (code **)0x0;
    }
    *(code ***)(lVar4 + 0x30) = ppcVar11;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  auVar18._8_8_ = param_2;
  auVar18._0_8_ = param_1;
  return auVar18;
}



/* Entry: 1091195d8; end: 109119627;  */

void FUN_1091195d8(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  _objc_retain();
  if (param_1 != 0) {
    if (param_3 == 0) {
      _CVBufferRetain();
    }
    else {
      param_5 = 0;
    }
    *(undefined8 *)(param_1 + 0x30) = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109119628; end: 10911977f; -[SCVideoAssetRandomAccessor accessNextRandomAccessFrame] */

void FUN_109119628(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR__kCMTimeInvalid_110348648;
  uVar4 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
  param_1[1] = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
  *param_1 = uVar4;
  param_1[2] = *(undefined8 *)(puVar1 + 0x10);
  param_1[3] = 0;
  param_1[4] = 0xffffffffffffffff;
  lVar2 = *(long *)(param_2 + 0x28);
  func_0x00010bf529e0();
  if (((lVar2 != 0) && (*(long *)(param_2 + 0x20) != 0)) &&
     (uVar5 = *(ulong *)(param_2 + 0x38), -1 < (long)uVar5)) {
    uVar3 = *(ulong *)(param_2 + 0x28);
    func_0x00010bf529e0();
    if (uVar5 < uVar3) {
      param_1[4] = *(undefined8 *)(param_2 + 0x38);
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c0dfd40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar6 = *(undefined8 *)(param_2 + 0x28);
      if (*(char *)(param_2 + 8) == '\x01') {
        func_0x00010bf529e0(uVar6);
        func_0x00010c0dfd40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        _CMSampleBufferGetPresentationTimeStamp(&uStack_48);
        _objc_release(uVar6);
        lVar2 = *(long *)(param_2 + 0x38) - *(long *)(param_2 + 0x10);
      }
      else {
        func_0x00010c0dfd40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        _CMSampleBufferGetPresentationTimeStamp(&uStack_48);
        _objc_release(uVar6);
        lVar2 = *(long *)(param_2 + 0x38) + *(long *)(param_2 + 0x10);
      }
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(long *)(param_2 + 0x38) = lVar2;
      _VTDecompressionSessionDecodeFrame(*(undefined8 *)(param_2 + 0x20),uVar4,0,0,0);
      param_1[1] = uStack_40;
      *param_1 = uStack_48;
      uVar4 = *(undefined8 *)(param_2 + 0x30);
      param_1[2] = uStack_38;
      param_1[3] = uVar4;
    }
  }
  return;
}



/* Entry: 109119780; end: 1091197b3; -[SCVideoAssetRandomAccessor stopAccessing] */

void FUN_109119780(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    _VTDecompressionSessionInvalidate();
    _CFRelease(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 1091197b4; end: 1091197e3; -[SCVideoAssetRandomAccessor .cxx_destruct] */

void FUN_1091197b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1091197e4; end: 10911984f; -[SCNGSMESegmentPreprocessBounce initWithPreviewAssetVideoProviderFactory:] */

undefined1 * FUN_1091197e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700708;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109119850; end: 109119b0b; -[SCNGSMESegmentPreprocessBounce processSegments:onCompletion:] */

void FUN_109119850(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_130;
    do {
      lVar4 = 0;
      do {
        if (*plStack_130 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        lVar5 = *(long *)(lStack_138 + lVar4 * 8);
        uStack_170 = 0;
        uStack_160 = 0x3032000000;
        pcStack_158 = FUN_109119b0c;
        uStack_150 = 0x109119b1c;
        puStack_168 = &uStack_170;
        _objc_retain(lVar5);
        uStack_1a0 = 0;
        uStack_190 = 0x3032000000;
        pcStack_188 = FUN_109119b0c;
        uStack_180 = 0x109119b1c;
        uStack_178 = 0;
        if (lVar5 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(lVar5 + 0x40);
        }
        puStack_198 = &uStack_1a0;
        lStack_148 = lVar5;
        _objc_retain(uVar6);
        func_0x00010c0be800(uVar6);
        _objc_release(uVar6);
        lVar5 = puStack_168[5];
        lVar3 = puStack_198[5];
        if (lVar5 == 0 || lVar3 != 0) {
          (**(code **)(param_4 + 0x10))(param_4,0,lVar3);
        }
        else {
          func_0x00010befa120(puVar1);
        }
        __Block_object_dispose(&uStack_1a0,8);
        _objc_release(uStack_178);
        __Block_object_dispose(&uStack_170,8);
        _objc_release(lStack_148);
        if (lVar5 == 0 || lVar3 != 0) {
          _objc_release(param_3);
          goto LAB_109119a88;
        }
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  (**(code **)(param_4 + 0x10))(param_4,puVar1,0);
LAB_109119a88:
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_1a0,8);
  lVar2 = 8;
  __Block_object_dispose(&uStack_170);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  return;
}



/* Entry: 109119b0c; end: 109119b2b;  */

void FUN_109119b0c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 109119b2c; end: 109119bb3;  */

void FUN_109119b2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uStack_38 = *(undefined8 *)(lVar4 + 0x28);
  func_0x00010be1abe0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),param_2,&uStack_38);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uStack_38;
  _objc_retain(uStack_38);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar3;
  _objc_release(uVar2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  _objc_release(uVar3);
  return;
}



/* Entry: 109119bb4; end: 109119f4f; -[SCNGSMESegmentPreprocessBounce _generateBouncedSegmentFromSegment:repeatCount:error:] */

void FUN_109119bb4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || ((*(ulong *)(param_3 + 0x10) & 0xfffffffffffffffd) == 0)) {
    if (param_5 == (undefined8 *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      puVar5 = (undefined *)0x0;
      *param_5 = puVar1;
    }
  }
  else {
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_109119b0c;
    uStack_80 = 0x109119b1c;
    uStack_78 = 0;
    uVar6 = *(undefined8 *)(param_3 + 8);
    puStack_98 = &uStack_a0;
    _objc_retain(uVar6);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_109119f50;
    puStack_b0 = &UNK_11084e620;
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x109119f98;
    puStack_d8 = &UNK_11084e6b0;
    puStack_d0 = &uStack_a0;
    puStack_a8 = &uStack_a0;
    func_0x00010c0bc940(uVar6);
    _objc_release(uVar6);
    if (puStack_98[5] == 0) {
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      puVar5 = (undefined *)0x0;
      *param_5 = puVar1;
    }
    else {
      FUN_10911fda4(param_3);
      param_1 = param_1 + 8;
      _objc_loadWeakRetained();
      lVar7 = *(long *)(param_3 + 0x18);
      _objc_retain(lVar7);
      if (lVar7 == 0) {
        uStack_110 = 0;
        uStack_108 = 0;
        uStack_100 = 0;
      }
      else {
        func_0x00010bdc1140(&uStack_110,lVar7);
      }
      _CMTimeGetSeconds(&uStack_110);
      lVar2 = param_1;
      func_0x00010bf209c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(param_1);
      if (lVar2 == 0) {
        puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        puVar5 = (undefined *)0x0;
        *param_5 = puVar1;
      }
      else {
        puVar3 = PTR_PTR_1126bf698;
        func_0x00010bf0b9a0(PTR_PTR_1126bf698);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010bf8b160(&uStack_110,lVar2);
        func_0x00010c297200(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126bf6a0;
        _objc_alloc(PTR_PTR_1126bf6a0);
        uStack_108 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
        uStack_110 = *(undefined8 *)PTR__kCMTimeZero_110348670;
        uStack_100 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
        puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_3 + 0x28);
        _objc_retain(uVar6);
        uVar8 = *(undefined8 *)(param_3 + 0x38);
        _objc_retain(uVar8);
        func_0x00010b7425e0(0x3ff0000000000000,puVar5,puVar3,3,puVar4,puVar1,uVar6,uVar8,0,0);
        _objc_release(uVar8);
        _objc_release(uVar6);
        _objc_release(puVar4);
        _objc_release(puVar1);
        _objc_release(puVar3);
      }
      _objc_release(lVar2);
    }
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(uStack_78);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 109119f50; end: 109119fcf;  */

void FUN_109119f50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___AVAsset_1126aff38;
  func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVAsset_1126aff38,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 109119fd0; end: 109119fd3;  */

void FUN_109119fd0(void)

{
  return;
}



/* Entry: 109119fd4; end: 109119fdb; -[SCNGSMESegmentPreprocessBounce .cxx_destruct] */

void FUN_109119fd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 109119fdc; end: 10911a2cf; -[SCNGSMESegmentPreprocessJumpCut processSegments:onCompletion:] */

void FUN_109119fdc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_130;
    do {
      lVar3 = 0;
      do {
        if (*plStack_130 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        lVar4 = *(long *)(lStack_138 + lVar3 * 8);
        uStack_170 = 0;
        uStack_160 = 0x3032000000;
        pcStack_158 = FUN_10911a2d0;
        uStack_150 = 0x10911a2e0;
        uStack_148 = 0;
        if (lVar4 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined8 *)(lVar4 + 0x40);
        }
        puStack_168 = &uStack_170;
        _objc_retain(uVar5);
        func_0x00010c0be800(uVar5);
        _objc_release(uVar5);
        lVar4 = puStack_168[5];
        func_0x00010bf529e0();
        if (lVar4 == 0) {
          func_0x00010befa120(puVar1);
        }
        else {
          lVar4 = param_1;
          func_0x00010be1b420();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (lVar4 == 0) {
            (**(code **)(param_4 + 0x10))(param_4,0,0);
            _objc_release(0);
            _objc_release(0);
            __Block_object_dispose(&uStack_170,8);
            _objc_release(uStack_148);
            _objc_release(param_3);
            goto LAB_10911a250;
          }
          func_0x00010befa160(puVar1);
          _objc_release(lVar4);
        }
        __Block_object_dispose(&uStack_170,8);
        _objc_release(uStack_148);
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  (**(code **)(param_4 + 0x10))(param_4,puVar1,0);
LAB_10911a250:
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    lVar2 = 8;
    __Block_object_dispose(&uStack_170);
    __Unwind_Resume();
    *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = 0;
    return;
  }
  return;
}



/* Entry: 10911a2d0; end: 10911a2e7;  */

void FUN_10911a2d0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10911a2e8; end: 10911a31f;  */

void FUN_10911a2e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf51e00();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10911a320; end: 10911a327;  */

void FUN_10911a320(void)

{
  return;
}



/* Entry: 10911a328; end: 10911a7df; -[SCNGSMESegmentPreprocessJumpCut _generateJumpCutSegmentFromSegment:timeRanges:error:] */

undefined1 *
FUN_10911a328(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 uVar17;
  long lStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  ulong uStack_258;
  undefined1 *puStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  long lStack_230;
  undefined *puStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  undefined4 uStack_204;
  double dStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  double dStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  double dStack_1c0;
  uint uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  double dStack_1a0;
  int iStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  double dStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  double dStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_90;
  undefined4 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_230 = param_4;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_218 = param_3;
  if (param_3 == 0) {
    _objc_retain(0);
LAB_10911a3bc:
    lVar8 = 0;
    dStack_130 = 0.0;
    uStack_128 = 0;
    uStack_120 = 0;
  }
  else {
    lVar8 = *(long *)(param_3 + 0x28);
    _objc_retain(lVar8);
    if (lVar8 == 0) goto LAB_10911a3bc;
    func_0x00010bdc1140(&dStack_130,lVar8);
  }
  puStack_238 = param_5;
  _objc_release(lVar8);
  lVar8 = lStack_230;
  dVar13 = *(double *)PTR__kCMTimeZero_110348670;
  uVar7 = (ulong)*(uint *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_90 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0xc);
  uStack_88 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0x14);
  dVar16 = 0.0;
  lStack_168 = 0;
  puStack_170 = (undefined *)0x0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  _objc_retain(lStack_230);
  ppuVar6 = &puStack_170;
  func_0x00010bf52a60();
  lVar9 = lStack_218;
  if (lVar8 != 0) {
    lStack_220 = *plStack_160;
    puStack_228 = puVar1;
    lStack_210 = lVar8;
    do {
      lVar8 = 0;
      do {
        if (*plStack_160 != lStack_220) {
          _objc_enumerationMutation(lStack_230);
        }
        uStack_204 = (undefined4)uVar7;
        if (*(long *)(lStack_168 + lVar8 * 8) == 0) {
          dStack_188 = 0.0;
          uStack_190 = 0;
          uStack_18c = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          iStack_198 = 0;
          uStack_194 = 0;
          dStack_1a0 = 0.0;
        }
        else {
          func_0x00010bdc1120(&dStack_1a0);
        }
        puVar11 = PTR_PTR_1126bf6a0;
        _objc_alloc(PTR_PTR_1126bf6a0);
        if (lVar9 == 0) {
          _objc_retain(0);
          uVar14 = 0;
          uVar15 = 0;
        }
        else {
          uVar14 = *(undefined8 *)(lVar9 + 8);
          _objc_retain(uVar14);
          uVar15 = *(undefined8 *)(lVar9 + 0x10);
        }
        uStack_1b8 = iStack_198;
        uStack_1b4 = uStack_194;
        dStack_1c0 = dStack_1a0;
        uStack_1b0 = uStack_190;
        uStack_1ac = uStack_18c;
        puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
        uStack_1b8 = (uint)uStack_180;
        uStack_1b4 = (undefined4)((ulong)uStack_180 >> 0x20);
        dStack_1c0 = dStack_188;
        uStack_1b0 = (undefined4)uStack_178;
        uStack_1ac = (undefined4)((ulong)uStack_178 >> 0x20);
        puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
        uStack_1b8 = (uint)uStack_128;
        uStack_1b4 = (undefined4)((ulong)uStack_128 >> 0x20);
        dStack_1c0 = dStack_130;
        uStack_1b0 = (undefined4)uStack_120;
        uStack_1ac = (undefined4)((ulong)uStack_120 >> 0x20);
        puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
        if (lVar9 == 0) {
          uVar17 = 0;
          uVar10 = 0;
        }
        else {
          uVar17 = *(undefined8 *)(lVar9 + 0x30);
          uVar10 = *(undefined8 *)(lVar9 + 0x38);
        }
        _objc_retain(uVar10);
        uStack_240 = 0;
        func_0x00010b7425e0(uVar17,puVar11,uVar14,uVar15,puVar1,puVar2,puVar3,uVar10,0);
        _objc_release(uVar10);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(puVar1);
        _objc_release(uVar14);
        puVar1 = puStack_228;
        func_0x00010befa120(puStack_228);
        uStack_1d8 = (undefined4)uStack_128;
        uStack_1d4 = (undefined4)((ulong)uStack_128 >> 0x20);
        dStack_1e0 = dStack_130;
        uStack_1d0 = (undefined4)uStack_120;
        uStack_1cc = (undefined4)((ulong)uStack_120 >> 0x20);
        uStack_1f8 = uStack_180;
        dStack_200 = dStack_188;
        uStack_1f0 = uStack_178;
        _CMTimeAdd(&dStack_1c0,&dStack_1e0,&dStack_200);
        uStack_128 = CONCAT44(uStack_1b4,uStack_1b8);
        dStack_130 = dStack_1c0;
        uStack_120 = CONCAT44(uStack_1ac,uStack_1b0);
        uStack_1d8 = uStack_204;
        uStack_1d4 = (undefined4)uStack_90;
        uStack_1d0 = (undefined4)((ulong)uStack_90 >> 0x20);
        uStack_1cc = uStack_88;
        uStack_1f8 = uStack_180;
        dStack_200 = dStack_188;
        uStack_1f0 = uStack_178;
        dVar16 = dStack_188;
        dStack_1e0 = dVar13;
        _CMTimeAdd(&dStack_1c0,&dStack_1e0,&dStack_200);
        dVar13 = dStack_1c0;
        uVar7 = (ulong)uStack_1b8;
        uStack_90 = CONCAT44(uStack_1b0,uStack_1b4);
        uStack_88 = uStack_1ac;
        _objc_release(puVar11);
        lVar9 = lStack_218;
        lVar8 = lVar8 + 1;
      } while (lStack_210 != lVar8);
      ppuVar6 = &puStack_170;
      lVar8 = lStack_230;
      func_0x00010bf52a60();
      lStack_210 = lVar8;
    } while (lVar8 != 0);
  }
  lStack_210 = 0;
  _objc_release(lStack_230);
  uStack_194 = (undefined4)uStack_90;
  uStack_190 = (undefined4)((ulong)uStack_90 >> 0x20);
  uStack_18c = uStack_88;
  dStack_1a0 = dVar13;
  iStack_198 = (int)uVar7;
  _CMTimeGetSeconds(&dStack_1a0);
  dVar13 = dVar16;
  if (lVar9 == 0) {
    _objc_retain(0);
  }
  else {
    lVar8 = *(long *)(lVar9 + 0x20);
    _objc_retain(lVar8);
    puVar12 = puStack_238;
    if (lVar8 != 0) {
      func_0x00010bdc1140(&dStack_1a0,lVar8);
      goto LAB_10911a70c;
    }
  }
  lVar8 = 0;
  dStack_1a0 = 0.0;
  iStack_198 = 0;
  uStack_194 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  puVar12 = puStack_238;
LAB_10911a70c:
  _CMTimeGetSeconds(&dStack_1a0);
  _objc_release(lVar8);
  if (1.0 / (double)(int)uVar7 <= ABS(dVar16 - dVar13)) {
    if (puVar12 == (undefined8 *)0x0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      ppuVar6 = &PTR____CFConstantStringClassReference_110f220b8;
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      puVar11 = (undefined *)0x0;
      *puVar12 = puVar2;
    }
  }
  else {
    _objc_retain(puVar1);
    puVar11 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(lStack_230);
  lVar8 = lStack_218;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return puVar11;
  }
  ___stack_chk_fail();
  plVar4 = &lStack_270;
  pcStack_248 = FUN_10911a7e0;
  puStack_260 = puVar11;
  uStack_258 = uVar7;
  puStack_250 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar6);
  puStack_268 = PTR_PTR_112700710;
  lStack_270 = lVar8;
  _objc_msgSendSuper2(&lStack_270,PTR_s_init_1125d9248);
  if (plVar4 != (long *)0x0) {
    ppuVar5 = ppuVar6;
    func_0x00010bf51e00();
    uVar14 = *(undefined8 *)((long)plVar4 + 8);
    *(undefined ***)((long)plVar4 + 8) = ppuVar5;
    _objc_release(uVar14);
  }
  _objc_release(ppuVar6);
  return (undefined1 *)plVar4;
}



/* Entry: 10911a7e0; end: 10911a857; -[SCNGSMESegmentPreprocessPipeline initWithProcessors:] */

undefined1 * FUN_10911a7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700710;
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



/* Entry: 10911a858; end: 10911a8df; -[SCNGSMESegmentPreprocessPipeline processSegments:onCompletion:] */

void FUN_10911a858(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,param_3,0);
  }
  else {
    func_0x00010be98080(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10911a8e0; end: 10911a9fb; -[SCNGSMESegmentPreprocessPipeline _runPreprocessorWithIndex:segments:error:onCompletion:] */

void FUN_10911a8e0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_5 == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    func_0x00010bf529e0();
    if (param_3 < uVar1) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0dfd40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_6);
      func_0x00010c1153e0(uVar2);
      _objc_release(param_6);
      _objc_release(uVar2);
      goto LAB_10911a9d4;
    }
    pcVar3 = *(code **)(param_6 + 0x10);
    param_5 = 0;
    uVar2 = param_4;
  }
  else {
    pcVar3 = *(code **)(param_6 + 0x10);
    uVar2 = 0;
  }
  (*pcVar3)(param_6,uVar2,param_5);
LAB_10911a9d4:
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 10911a9fc; end: 10911aa17;  */

void FUN_10911a9fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be98090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__runPreprocessorWithIndex_segmen_1125839c0,
             *(long *)(param_1 + 0x30) + 1,param_2,param_3,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10911aa18; end: 10911aa23; -[SCNGSMESegmentPreprocessPipeline .cxx_destruct] */

void FUN_10911aa18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10911aa24; end: 10911aaff;  */

undefined1 * FUN_10911aa24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_112700718;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10911ab00; end: 10911ab23; -[SCVideoAssetMutatorOutput copyWithZone:] */

undefined8 FUN_10911ab00(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10911ab24; end: 10911aba3; -[SCVideoAssetMutatorOutput hash] */

undefined8 * FUN_10911ab24(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_10911ac3c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10911ac48;
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
            goto LAB_10911ac48;
          }
          goto LAB_10911ac3c;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10911ac48:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10911aba4; end: 10911ac63; -[SCVideoAssetMutatorOutput isEqual:] */

long FUN_10911aba4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10911ac3c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10911ac48;
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
            goto LAB_10911ac48;
          }
          goto LAB_10911ac3c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10911ac48:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10911ac64; end: 10911ac9f; -[SCVideoAssetMutatorOutput .cxx_destruct] */

void FUN_10911ac64(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10911aca0; end: 10911ad13; -[SCGrapheneNgsmeMutatorMetric2 init] */

undefined1 * FUN_10911aca0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700720;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10911ad14; end: 10911af43;  */

void FUN_10911ad14(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110add100,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x000107c278ac(&puStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
  }
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume(pcVar1);
  puVar2 = PTR_PTR_1126bfba0;
  func_0x00010bfcd920();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126dd648;
    _objc_alloc(PTR_PTR_1126dd648);
    uVar5 = *(undefined8 *)(puVar2 + 8);
    _objc_retain(uVar5);
    uVar7 = *(undefined8 *)(puVar2 + 0x10);
    _objc_retain(uVar7);
    func_0x00010c0541c0(puVar3);
    _objc_release(uVar7);
    _objc_release(uVar5);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10911af44; end: 10911afdf; -[SCImageColorExtractor extractColorsFromImage:shouldFlip:] */

void FUN_10911af44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126bfba0;
  func_0x00010bfcd920();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126dd648;
    _objc_alloc(PTR_PTR_1126dd648);
    uVar3 = *(undefined8 *)(puVar1 + 8);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(puVar1 + 0x10);
    _objc_retain(uVar4);
    func_0x00010c0541c0(puVar2,param_2,uVar3,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10911afe0; end: 10911b07b; -[SCImageColorExtractor extractColorsFromPixelBuffer:shouldFlip:] */

void FUN_10911afe0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126bfba0;
  func_0x00010bfcd940();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126dd648;
    _objc_alloc(PTR_PTR_1126dd648);
    uVar3 = *(undefined8 *)(puVar1 + 8);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(puVar1 + 0x10);
    _objc_retain(uVar4);
    func_0x00010c0541c0(puVar2,param_2,uVar3,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


