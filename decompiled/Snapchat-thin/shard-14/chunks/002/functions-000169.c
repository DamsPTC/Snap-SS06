/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b06a7e4; end: 10b06a8c3; -[SCPlatformAnalyticsBloopsInfo isEqual:] */

long FUN_10b06a7e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b06a89c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b06a8a8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_10b06a8a8;
          }
          goto LAB_10b06a89c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b06a8a8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b06a8c4; end: 10b06a8cb; -[SCPlatformAnalyticsBloopsInfo bloopsGeneratedResult] */

undefined8 FUN_10b06a8c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b06a8cc; end: 10b06a8d3; -[SCPlatformAnalyticsBloopsInfo bloopsWasSentFromFullScreen] */

undefined1 FUN_10b06a8cc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b06a8d4; end: 10b06a8db; -[SCPlatformAnalyticsBloopsInfo viewTimeInMilliseconds] */

undefined8 FUN_10b06a8d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b06a8dc; end: 10b06a8e3; -[SCPlatformAnalyticsBloopsInfo sentBloopFeatures] */

undefined8 FUN_10b06a8dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b06a8e4; end: 10b06a8eb; -[SCPlatformAnalyticsBloopsInfo notSentBloopFeatures] */

undefined8 FUN_10b06a8e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b06a8ec; end: 10b06a927; -[SCPlatformAnalyticsBloopsInfo .cxx_destruct] */

void FUN_10b06a8ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b06a928; end: 10b06aa43; -[SCPlatformAnalyticsMediaViewInfo initWithViewedTimeSecs:source:inviteAction:contextSnapViewMetrics:mediaId:rollMaxDegree:rollMinDegree:pinchToZoomMillis:isSavedSnapView:is24HourSnapView:snapSendSource:hasBeenViewedByCurrentUser:] */

undefined1 *
FUN_10b06a928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined1 param_12,
             undefined8 param_13,undefined1 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puVar1 = &uStack_90;
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_88 = PTR_PTR_1127050f0;
  uStack_90 = param_5;
  _objc_msgSendSuper2(&uStack_90,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x38) = param_2;
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    *(undefined8 *)((long)puVar1 + 0x48) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_11;
    *(undefined1 *)((long)puVar1 + 9) = param_12;
    *(undefined8 *)((long)puVar1 + 0x50) = param_13;
    *(undefined1 *)((long)puVar1 + 10) = param_14;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  return (undefined1 *)puVar1;
}



/* Entry: 10b06aa44; end: 10b06aa67; -[SCPlatformAnalyticsMediaViewInfo copyWithZone:] */

undefined8 FUN_10b06aa44(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b06aa68; end: 10b06ab83; -[SCPlatformAnalyticsMediaViewInfo hash] */

ulong * FUN_10b06aa68(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  double dVar8;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_88 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_88 = uStack_88 ^ uStack_88 >> 0x16;
  uStack_80 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_78 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_60 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uStack_38 = *(undefined8 *)(param_1 + 0x50);
  uVar6 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_58 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uStack_50 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = (ulong)*(byte *)(param_1 + 9);
  uStack_30 = (ulong)*(byte *)(param_1 + 10);
  puVar3 = &uStack_88;
  uStack_68 = uVar2;
  func_0x000107c3191c(puVar3,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b06ad44:
    puVar7 = (ulong *)0x1;
  }
  else {
    puVar7 = (ulong *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10b06ad50;
    puVar7 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if (((((ulong)puVar4 & 1) != 0) &&
        ((((puVar3[3] == param_3[3] && (puVar3[4] == param_3[4])) &&
          ((char)puVar3[1] == (char)param_3[1])) &&
         ((*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9) &&
          (puVar3[10] == param_3[10])))))) &&
       (*(char *)((long)puVar3 + 10) == *(char *)((long)param_3 + 10))) {
      dVar8 = ABS((double)puVar3[2] - (double)param_3[2]);
      if ((dVar8 < 2.2250738585072014e-308) ||
         (dVar8 < ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16)) {
        dVar8 = ABS((double)puVar3[7] - (double)param_3[7]);
        if ((dVar8 < 2.2250738585072014e-308) ||
           (dVar8 < ABS((double)puVar3[7] + (double)param_3[7]) * 2.220446049250313e-16)) {
          dVar8 = ABS((double)puVar3[8] - (double)param_3[8]);
          if ((dVar8 < 2.2250738585072014e-308) ||
             (dVar8 < ABS((double)puVar3[8] + (double)param_3[8]) * 2.220446049250313e-16)) {
            dVar8 = ABS((double)puVar3[9] - (double)param_3[9]);
            if (((dVar8 < 2.2250738585072014e-308) ||
                (dVar8 < ABS((double)puVar3[9] + (double)param_3[9]) * 2.220446049250313e-16)) &&
               ((uVar5 = puVar3[5], uVar5 == param_3[5] || (func_0x00010c071ae0(), (int)uVar5 != 0))
               )) {
              puVar7 = (ulong *)puVar3[6];
              if (puVar7 != (ulong *)param_3[6]) {
                func_0x00010c071ae0();
                goto LAB_10b06ad50;
              }
              goto LAB_10b06ad44;
            }
          }
        }
      }
    }
    puVar7 = (ulong *)0x0;
  }
LAB_10b06ad50:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 10b06ab84; end: 10b06ad6b; -[SCPlatformAnalyticsMediaViewInfo isEqual:] */

long FUN_10b06ab84(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b06ad44:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b06ad50;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
           (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
          (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
         ((*(char *)(param_1 + 9) == *(char *)(param_3 + 9) &&
          (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))))))) &&
       (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) {
      dVar4 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      if ((dVar4 < 2.2250738585072014e-308) ||
         (dVar4 < ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                  2.220446049250313e-16)) {
        dVar4 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
        if ((dVar4 < 2.2250738585072014e-308) ||
           (dVar4 < ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                    2.220446049250313e-16)) {
          dVar4 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40));
          if ((dVar4 < 2.2250738585072014e-308) ||
             (dVar4 < ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) *
                      2.220446049250313e-16)) {
            dVar4 = ABS(*(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x48));
            if (((dVar4 < 2.2250738585072014e-308) ||
                (dVar4 < ABS(*(double *)(param_1 + 0x48) + *(double *)(param_3 + 0x48)) *
                         2.220446049250313e-16)) &&
               ((lVar3 = *(long *)(param_1 + 0x28), lVar3 == *(long *)(param_3 + 0x28) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)))) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_10b06ad50;
              }
              goto LAB_10b06ad44;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b06ad50:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b06ad6c; end: 10b06ad73; -[SCPlatformAnalyticsMediaViewInfo viewedTimeSecs] */

undefined8 FUN_10b06ad6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b06ad74; end: 10b06ad7b; -[SCPlatformAnalyticsMediaViewInfo source] */

undefined8 FUN_10b06ad74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b06ad7c; end: 10b06ad83; -[SCPlatformAnalyticsMediaViewInfo inviteAction] */

undefined8 FUN_10b06ad7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b06ad84; end: 10b06ad8b; -[SCPlatformAnalyticsMediaViewInfo contextSnapViewMetrics] */

undefined8 FUN_10b06ad84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b06ad8c; end: 10b06ad93; -[SCPlatformAnalyticsMediaViewInfo mediaId] */

undefined8 FUN_10b06ad8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b06ad94; end: 10b06ad9b; -[SCPlatformAnalyticsMediaViewInfo rollMaxDegree] */

undefined8 FUN_10b06ad94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b06ad9c; end: 10b06ada3; -[SCPlatformAnalyticsMediaViewInfo rollMinDegree] */

undefined8 FUN_10b06ad9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b06ada4; end: 10b06adab; -[SCPlatformAnalyticsMediaViewInfo pinchToZoomMillis] */

undefined8 FUN_10b06ada4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b06adac; end: 10b06adb3; -[SCPlatformAnalyticsMediaViewInfo isSavedSnapView] */

undefined1 FUN_10b06adac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b06adb4; end: 10b06adbb; -[SCPlatformAnalyticsMediaViewInfo is24HourSnapView] */

undefined1 FUN_10b06adb4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b06adbc; end: 10b06adc3; -[SCPlatformAnalyticsMediaViewInfo snapSendSource] */

undefined8 FUN_10b06adbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b06adc4; end: 10b06adcb; -[SCPlatformAnalyticsMediaViewInfo hasBeenViewedByCurrentUser] */

undefined1 FUN_10b06adc4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b06adcc; end: 10b06adfb; -[SCPlatformAnalyticsMediaViewInfo .cxx_destruct] */

void FUN_10b06adcc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 10b06adfc; end: 10b06ae8b; +[SCPlatformAnalyticsMediaTaskContainer chatWithPlatformAnalytics:additionalTextPlatformAnalytics:] */

void FUN_10b06adfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126df518;
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



/* Entry: 10b06ae8c; end: 10b06af23; +[SCPlatformAnalyticsMediaTaskContainer snapWithDestinationInfo:uuid:] */

void FUN_10b06ae8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126df518;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b06af24; end: 10b06b107; -[SCPlatformAnalyticsMediaTaskContainer initWithCoder:] */

undefined8 * FUN_10b06af24(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  ulong uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_70 = PTR_PTR_1127050f8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x21;
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) == 0) goto LAB_10b06b094;
      uVar5 = 1;
      lVar6 = 0x28;
      lVar7 = 0x20;
    }
    else {
      uVar5 = 0;
      lVar6 = 0x18;
      lVar7 = 0x10;
    }
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar7);
    *(ulong *)((long)puVar1 + lVar7) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(ulong *)((long)puVar1 + lVar6) = uVar2;
    _objc_release(uVar4);
    puVar1[1] = uVar5;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_10b06b094:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110db7158;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_60 = unaff_x21;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar3);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10b06b108; end: 10b06b12b; -[SCPlatformAnalyticsMediaTaskContainer copyWithZone:] */

undefined8 FUN_10b06b108(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b06b12c; end: 10b06b1eb; -[SCPlatformAnalyticsMediaTaskContainer encodeWithCoder:] */

void FUN_10b06b12c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110f55218;
    ppuVar4 = &PTR____CFConstantStringClassReference_110f55258;
    lVar5 = 0x18;
    lVar2 = 0x10;
    ppuVar1 = &PTR____CFConstantStringClassReference_110f55238;
  }
  else {
    if (*(long *)(param_1 + 8) != 1) goto LAB_10b06b1d4;
    ppuVar3 = &PTR____CFConstantStringClassReference_110f55278;
    ppuVar4 = &PTR____CFConstantStringClassReference_110f552b8;
    lVar5 = 0x28;
    lVar2 = 0x20;
    ppuVar1 = &PTR____CFConstantStringClassReference_110f55298;
  }
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + lVar2),ppuVar1);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + lVar5),ppuVar4);
  func_0x00010c14cb00(param_3,param_2,ppuVar3,&PTR____CFConstantStringClassReference_110db7018);
LAB_10b06b1d4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b06b1ec; end: 10b06b27b; -[SCPlatformAnalyticsMediaTaskContainer hash] */

void FUN_10b06b1ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1127050f8;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b06b27c; end: 10b06b2bf; -[SCPlatformAnalyticsMediaTaskContainer internalInit] */

void FUN_10b06b27c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1127050f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b06b2c0; end: 10b06b3a7; -[SCPlatformAnalyticsMediaTaskContainer isEqual:] */

long FUN_10b06b2c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b06b380:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b06b38c;
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
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10b06b38c;
            }
            goto LAB_10b06b380;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b06b38c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b06b3a8; end: 10b06b437; -[SCPlatformAnalyticsMediaTaskContainer matchChat:snap:] */

void FUN_10b06b3a8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_10b06b41c;
    lVar2 = 0x28;
    lVar3 = 0x20;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10b06b41c;
    lVar2 = 0x18;
    lVar3 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))
            (lVar1,*(undefined8 *)(param_1 + lVar3),*(undefined8 *)(param_1 + lVar2));
LAB_10b06b41c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b06b438; end: 10b06b47f; -[SCPlatformAnalyticsMediaTaskContainer .cxx_destruct] */

void FUN_10b06b438(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b06b480; end: 10b06b507; -[SCPlatformAnalyticsMemoriesMetricInfo initWithCoder:] */

undefined1 * FUN_10b06b480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705100;
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



/* Entry: 10b06b508; end: 10b06b57f; -[SCPlatformAnalyticsMemoriesMetricInfo initWithSnapMetricInfos:] */

undefined1 * FUN_10b06b508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705100;
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



/* Entry: 10b06b580; end: 10b06b5a3; -[SCPlatformAnalyticsMemoriesMetricInfo copyWithZone:] */

undefined8 FUN_10b06b580(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b06b5a4; end: 10b06b5bb; -[SCPlatformAnalyticsMemoriesMetricInfo encodeWithCoder:] */

void FUN_10b06b5a4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_sc_encodeObject_forKey__112630ce0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110f552d8);
  return;
}



/* Entry: 10b06b5bc; end: 10b06b5c3; -[SCPlatformAnalyticsMemoriesMetricInfo hash] */

void FUN_10b06b5bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b06b5c4; end: 10b06b653; -[SCPlatformAnalyticsMemoriesMetricInfo isEqual:] */

long FUN_10b06b5c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b06b638;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b06b638;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b06b638;
    }
  }
  lVar3 = 1;
LAB_10b06b638:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b06b654; end: 10b06b65b; -[SCPlatformAnalyticsMemoriesMetricInfo snapMetricInfos] */

undefined8 FUN_10b06b654(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b06b65c; end: 10b06b667; -[SCPlatformAnalyticsMemoriesMetricInfo .cxx_destruct] */

void FUN_10b06b65c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b06b668; end: 10b06b7b7; -[SCPlatformAnalyticsMemoriesSnapMetricInfo initWithCoder:] */

undefined1 * FUN_10b06b668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705108;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b06b7b8; end: 10b06b907; -[SCPlatformAnalyticsMemoriesSnapMetricInfo initWithSource:galleryMediaId:galleryMediaSync:snapCommonLoggingParams:phAssetIdentifier:creationDate:gallerySource:] */

undefined1 *
FUN_10b06b7b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112705108;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b06b908; end: 10b06b92b; -[SCPlatformAnalyticsMemoriesSnapMetricInfo copyWithZone:] */

undefined8 FUN_10b06b908(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b06b92c; end: 10b06b9ef; -[SCPlatformAnalyticsMemoriesSnapMetricInfo encodeWithCoder:] */

void FUN_10b06b92c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110dd8398);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110efadf8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f552f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f54fd8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f55318);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f55338);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f55358);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b06b9f0; end: 10b06ba8f; -[SCPlatformAnalyticsMemoriesSnapMetricInfo hash] */

undefined8 * FUN_10b06b9f0(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
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
  uStack_30 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b06bb78:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b06bb84;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x30);
              if (puVar6 != *(undefined1 **)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_10b06bb84;
              }
              goto LAB_10b06bb78;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b06bb84:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b06ba90; end: 10b06bb9f; -[SCPlatformAnalyticsMemoriesSnapMetricInfo isEqual:] */

long FUN_10b06ba90(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b06bb78:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b06bb84;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_10b06bb84;
              }
              goto LAB_10b06bb78;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b06bb84:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b06bba0; end: 10b06bba7; -[SCPlatformAnalyticsMemoriesSnapMetricInfo source] */

undefined8 FUN_10b06bba0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b06bba8; end: 10b06bbaf; -[SCPlatformAnalyticsMemoriesSnapMetricInfo galleryMediaId] */

undefined8 FUN_10b06bba8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b06bbb0; end: 10b06bbb7; -[SCPlatformAnalyticsMemoriesSnapMetricInfo galleryMediaSync] */

undefined8 FUN_10b06bbb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b06bbb8; end: 10b06bbbf; -[SCPlatformAnalyticsMemoriesSnapMetricInfo snapCommonLoggingParams] */

undefined8 FUN_10b06bbb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b06bbc0; end: 10b06bbc7; -[SCPlatformAnalyticsMemoriesSnapMetricInfo phAssetIdentifier] */

undefined8 FUN_10b06bbc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b06bbc8; end: 10b06bbcf; -[SCPlatformAnalyticsMemoriesSnapMetricInfo creationDate] */

undefined8 FUN_10b06bbc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b06bbd0; end: 10b06bbd7; -[SCPlatformAnalyticsMemoriesSnapMetricInfo gallerySource] */

undefined8 FUN_10b06bbd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b06bbd8; end: 10b06bc2b; -[SCPlatformAnalyticsMemoriesSnapMetricInfo .cxx_destruct] */

void FUN_10b06bbd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b06bc2c; end: 10b06bd7b; -[SCPlatformAnalyticsRecipientRelationshipCounts initWithCoder:] */

undefined1 * FUN_10b06bc2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705110;
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
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b06bd7c; end: 10b06bee7; -[SCPlatformAnalyticsRecipientRelationshipCounts initWithUserRecipientFollowingCount:userRecipientFollowerCount:userRecipientFriendCount:userRecipientNonFriendCount:userRecipientSnapStarCount:userRecipientPublicAccountCount:] */

undefined1 *
FUN_10b06bd7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112705110;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b06bee8; end: 10b06bf0b; -[SCPlatformAnalyticsRecipientRelationshipCounts copyWithZone:] */

undefined8 FUN_10b06bee8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b06bf0c; end: 10b06bfbb; -[SCPlatformAnalyticsRecipientRelationshipCounts encodeWithCoder:] */

void FUN_10b06bf0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f55378);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f55398);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f553b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f553d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f553f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f55418);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b06bfbc; end: 10b06c05f; -[SCPlatformAnalyticsRecipientRelationshipCounts hash] */

undefined8 * FUN_10b06bfbc(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b06c140:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b06c14c;
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
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[6];
                if (puVar6 != (undefined8 *)param_3[6]) {
                  func_0x00010c071ae0();
                  goto LAB_10b06c14c;
                }
                goto LAB_10b06c140;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b06c14c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b06c060; end: 10b06c167; -[SCPlatformAnalyticsRecipientRelationshipCounts isEqual:] */

long FUN_10b06c060(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b06c140:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b06c14c;
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
                if (lVar3 != *(long *)(param_3 + 0x30)) {
                  func_0x00010c071ae0();
                  goto LAB_10b06c14c;
                }
                goto LAB_10b06c140;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b06c14c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b06c168; end: 10b06c16f; -[SCPlatformAnalyticsRecipientRelationshipCounts userRecipientFollowingCount] */

undefined8 FUN_10b06c168(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b06c170; end: 10b06c177; -[SCPlatformAnalyticsRecipientRelationshipCounts userRecipientFollowerCount] */

undefined8 FUN_10b06c170(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b06c178; end: 10b06c17f; -[SCPlatformAnalyticsRecipientRelationshipCounts userRecipientFriendCount] */

undefined8 FUN_10b06c178(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b06c180; end: 10b06c187; -[SCPlatformAnalyticsRecipientRelationshipCounts userRecipientNonFriendCount] */

undefined8 FUN_10b06c180(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b06c188; end: 10b06c18f; -[SCPlatformAnalyticsRecipientRelationshipCounts userRecipientSnapStarCount] */

undefined8 FUN_10b06c188(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b06c190; end: 10b06c197; -[SCPlatformAnalyticsRecipientRelationshipCounts userRecipientPublicAccountCount] */

undefined8 FUN_10b06c190(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b06c198; end: 10b06c1f7; -[SCPlatformAnalyticsRecipientRelationshipCounts .cxx_destruct] */

void FUN_10b06c198(long param_1)

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



/* Entry: 10b06c1f8; end: 10b06c26b; -[SCPlatformAnalyticsStoryPostInfo initWithCoder:] */

undefined1 * FUN_10b06c1f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705118;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b06c26c; end: 10b06c2b3; -[SCPlatformAnalyticsStoryPostInfo initWithIsAsyncRetry:] */

void FUN_10b06c26c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112705118;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b06c2b4; end: 10b06c2d7; -[SCPlatformAnalyticsStoryPostInfo copyWithZone:] */

undefined8 FUN_10b06c2b4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b06c2d8; end: 10b06c2ef; -[SCPlatformAnalyticsStoryPostInfo encodeWithCoder:] */

void FUN_10b06c2d8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf92db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_encodeBool_forKey__1125c2510,*(undefined1 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110f55438);
  return;
}



/* Entry: 10b06c2f0; end: 10b06c2f7; -[SCPlatformAnalyticsStoryPostInfo hash] */

undefined1 FUN_10b06c2f0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b06c2f8; end: 10b06c37f; -[SCPlatformAnalyticsStoryPostInfo isEqual:] */

bool FUN_10b06c2f8(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 10b06c380; end: 10b06c387; -[SCPlatformAnalyticsStoryPostInfo isAsyncRetry] */

undefined1 FUN_10b06c380(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b06c388; end: 10b06c40f; -[SCPlatformAnalyticsContextInfo initWithCoder:] */

undefined1 * FUN_10b06c388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705120;
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



/* Entry: 10b06c410; end: 10b06c487; -[SCPlatformAnalyticsContextInfo initWithContextSessionId:] */

undefined1 * FUN_10b06c410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705120;
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



/* Entry: 10b06c488; end: 10b06c4ab; -[SCPlatformAnalyticsContextInfo copyWithZone:] */

undefined8 FUN_10b06c488(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b06c4ac; end: 10b06c4c3; -[SCPlatformAnalyticsContextInfo encodeWithCoder:] */

void FUN_10b06c4ac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_sc_encodeObject_forKey__112630ce0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110f55458);
  return;
}



/* Entry: 10b06c4c4; end: 10b06c4cb; -[SCPlatformAnalyticsContextInfo hash] */

void FUN_10b06c4c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b06c4cc; end: 10b06c55b; -[SCPlatformAnalyticsContextInfo isEqual:] */

long FUN_10b06c4cc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b06c540;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b06c540;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b06c540;
    }
  }
  lVar3 = 1;
LAB_10b06c540:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b06c55c; end: 10b06c563; -[SCPlatformAnalyticsContextInfo contextSessionId] */

undefined8 FUN_10b06c55c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b06c564; end: 10b06c56f; -[SCPlatformAnalyticsContextInfo .cxx_destruct] */

void FUN_10b06c564(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b06c570; end: 10b06c633; -[SCPlatformAnalyticsChatReplyMetricInfo initWithCoder:] */

undefined1 * FUN_10b06c570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705128;
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
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b06c634; end: 10b06c6e7; -[SCPlatformAnalyticsChatReplyMetricInfo initWithQuotedMessageId:initiationType:quotedAnalyticsMessageId:] */

undefined1 *
FUN_10b06c634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112705128;
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



/* Entry: 10b06c6e8; end: 10b06c70b; -[SCPlatformAnalyticsChatReplyMetricInfo copyWithZone:] */

undefined8 FUN_10b06c6e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b06c70c; end: 10b06c77f; -[SCPlatformAnalyticsChatReplyMetricInfo encodeWithCoder:] */

void FUN_10b06c70c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f55478);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f55498);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f554b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b06c780; end: 10b06c7ff; -[SCPlatformAnalyticsChatReplyMetricInfo hash] */

undefined8 * FUN_10b06c780(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  lStack_38 = -lVar4;
  if (-1 < lVar4) {
    lStack_38 = lVar4;
  }
  uStack_40 = uVar1;
  func_0x00010bfde980();
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (undefined8 *)param_3) {
LAB_10b06c890:
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b06c89c;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) != 0) && (*(long *)((long)puVar2 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      lVar4 = *(long *)((long)puVar2 + 8);
      if ((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        puVar5 = *(undefined1 **)((long)puVar2 + 0x18);
        if (puVar5 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b06c89c;
        }
        goto LAB_10b06c890;
      }
    }
    puVar5 = (undefined1 *)0x0;
  }
LAB_10b06c89c:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 10b06c800; end: 10b06c8b7; -[SCPlatformAnalyticsChatReplyMetricInfo isEqual:] */

long FUN_10b06c800(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b06c890:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b06c89c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b06c89c;
        }
        goto LAB_10b06c890;
      }
    }
    lVar3 = 0;
  }
LAB_10b06c89c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b06c8b8; end: 10b06c8bf; -[SCPlatformAnalyticsChatReplyMetricInfo quotedMessageId] */

undefined8 FUN_10b06c8b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b06c8c0; end: 10b06c8c7; -[SCPlatformAnalyticsChatReplyMetricInfo initiationType] */

undefined8 FUN_10b06c8c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b06c8c8; end: 10b06c8cf; -[SCPlatformAnalyticsChatReplyMetricInfo quotedAnalyticsMessageId] */

undefined8 FUN_10b06c8c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b06c8d0; end: 10b06c8ff; -[SCPlatformAnalyticsChatReplyMetricInfo .cxx_destruct] */

void FUN_10b06c8d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b06c900; end: 10b06c973; -[SCPlatformAnalyticsDWebUpsellMetricInfo initWithCoder:] */

undefined1 * FUN_10b06c900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705130;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b06c974; end: 10b06c9bb; -[SCPlatformAnalyticsDWebUpsellMetricInfo initWithMediaType:] */

void FUN_10b06c974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112705130;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b06c9bc; end: 10b06c9df; -[SCPlatformAnalyticsDWebUpsellMetricInfo copyWithZone:] */

undefined8 FUN_10b06c9bc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b06c9e0; end: 10b06c9f7; -[SCPlatformAnalyticsDWebUpsellMetricInfo encodeWithCoder:] */

void FUN_10b06c9e0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf92fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_encodeInteger_forKey__1125c2598,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110df2798);
  return;
}



/* Entry: 10b06c9f8; end: 10b06ca07; -[SCPlatformAnalyticsDWebUpsellMetricInfo hash] */

long FUN_10b06c9f8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Entry: 10b06ca08; end: 10b06ca8f; -[SCPlatformAnalyticsDWebUpsellMetricInfo isEqual:] */

bool FUN_10b06ca08(ulong param_1,undefined8 param_2,ulong param_3)

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


