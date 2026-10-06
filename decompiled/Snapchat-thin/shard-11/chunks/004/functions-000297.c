/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1085abe58; end: 1085abf0b; -[SCPlaybackAnalyticsEvent initWithSessionId:eventTime:eventType:] */

undefined1 *
FUN_1085abe58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126fcec8;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1085abf0c; end: 1085abf2f; -[SCPlaybackAnalyticsEvent copyWithZone:] */

undefined8 FUN_1085abf0c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1085abf30; end: 1085abfaf; -[SCPlaybackAnalyticsEvent hash] */

undefined8 * FUN_1085abf30(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1085ac040:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1085ac04c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x10);
        if (puVar6 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_1085ac04c;
        }
        goto LAB_1085ac040;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1085ac04c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1085abfb0; end: 1085ac067; -[SCPlaybackAnalyticsEvent isEqual:] */

long FUN_1085abfb0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1085ac040:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1085ac04c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_1085ac04c;
        }
        goto LAB_1085ac040;
      }
    }
    lVar3 = 0;
  }
LAB_1085ac04c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1085ac068; end: 1085ac06f; -[SCPlaybackAnalyticsEvent sessionId] */

undefined8 FUN_1085ac068(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1085ac070; end: 1085ac077; -[SCPlaybackAnalyticsEvent eventTime] */

undefined8 FUN_1085ac070(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1085ac078; end: 1085ac07f; -[SCPlaybackAnalyticsEvent eventType] */

undefined8 FUN_1085ac078(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1085ac080; end: 1085ac0af; -[SCPlaybackAnalyticsEvent .cxx_destruct] */

void FUN_1085ac080(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085ac0b0; end: 1085ac13b; -[SCPlaybackAnalyticsMediaVariant initWithMediaVariantName:elapsedTimeMs:mediaTimeMs:] */

undefined1 *
FUN_1085ac0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fced0;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1085ac13c; end: 1085ac15f; -[SCPlaybackAnalyticsMediaVariant copyWithZone:] */

undefined8 FUN_1085ac13c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1085ac160; end: 1085ac20b; -[SCPlaybackAnalyticsMediaVariant hash] */

undefined8 * FUN_1085ac160(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_40 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1085ac2dc:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1085ac2e8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      dVar8 = ABS(*(double *)((long)puVar3 + 0x10) - *(double *)(param_3 + 0x10));
      dVar7 = ABS(*(double *)((long)puVar3 + 0x10) + *(double *)(param_3 + 0x10)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        dVar8 = ABS(*(double *)((long)puVar3 + 0x18) - *(double *)(param_3 + 0x18));
        dVar7 = ABS(*(double *)((long)puVar3 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
          bVar1 = dVar8 < dVar7;
        }
        if (bVar1) {
          puVar6 = *(undefined1 **)((long)puVar3 + 8);
          if (puVar6 != *(undefined1 **)(param_3 + 8)) {
            func_0x00010c071ae0();
            goto LAB_1085ac2e8;
          }
          goto LAB_1085ac2dc;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1085ac2e8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1085ac20c; end: 1085ac303; -[SCPlaybackAnalyticsMediaVariant isEqual:] */

long FUN_1085ac20c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1085ac2dc:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1085ac2e8;
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
        dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
        dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          lVar4 = *(long *)(param_1 + 8);
          if (lVar4 != *(long *)(param_3 + 8)) {
            func_0x00010c071ae0();
            goto LAB_1085ac2e8;
          }
          goto LAB_1085ac2dc;
        }
      }
    }
    lVar4 = 0;
  }
LAB_1085ac2e8:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1085ac304; end: 1085ac30b; -[SCPlaybackAnalyticsMediaVariant mediaVariantName] */

undefined8 FUN_1085ac304(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1085ac30c; end: 1085ac313; -[SCPlaybackAnalyticsMediaVariant elapsedTimeMs] */

undefined8 FUN_1085ac30c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1085ac314; end: 1085ac31b; -[SCPlaybackAnalyticsMediaVariant mediaTimeMs] */

undefined8 FUN_1085ac314(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1085ac31c; end: 1085ac327; -[SCPlaybackAnalyticsMediaVariant .cxx_destruct] */

void FUN_1085ac31c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085ac328; end: 1085ac3bf; -[SCTCKCall createCallHandle] */

void FUN_1085ac328(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___CXHandle_1126da2c0;
  _objc_alloc(PTR__OBJC_CLASS___CXHandle_1126da2c0);
  func_0x00010c2688a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf5e540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf517c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0563a0(puVar1,param_2,1,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085ac3c0; end: 1085ac453; -[SCTCKCall createStartCallActionWithVideo:] */

void FUN_1085ac3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___CXStartCallAction_1126da2c8;
  _objc_alloc(PTR__OBJC_CLASS___CXStartCallAction_1126da2c8);
  uVar2 = param_1;
  func_0x00010c294d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf54ea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffad40(puVar1,param_2,uVar2,param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
  func_0x00010c221100(puVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085ac454; end: 1085ac4af; -[SCTCKCall createEndCallAction] */

void FUN_1085ac454(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___CXEndCallAction_1126da2d0;
  _objc_alloc(PTR__OBJC_CLASS___CXEndCallAction_1126da2d0);
  func_0x00010c294d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffad20(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085ac4b0; end: 1085ac50b; -[SCTCKCall createAnswerCallAction] */

void FUN_1085ac4b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___CXAnswerCallAction_1126da2d8;
  _objc_alloc(PTR__OBJC_CLASS___CXAnswerCallAction_1126da2d8);
  func_0x00010c294d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffad20(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085ac50c; end: 1085ac577; -[SCTCKCall createSetMutedCallAction:] */

void FUN_1085ac50c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___CXSetMutedCallAction_1126da2e0;
  _objc_alloc(PTR__OBJC_CLASS___CXSetMutedCallAction_1126da2e0);
  func_0x00010c294d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffad60(puVar1,param_2,param_1,param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085ac578; end: 1085ac5ff; -[SCTCKCall initGhostCall] */

undefined1 * FUN_1085ac578(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fced8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1085ac600; end: 1085ac6f3; -[SCTCKCall initWithTalkContext:] */

undefined1 * FUN_1085ac600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fced8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar4);
    uVar4 = param_3;
    func_0x00010bf5e540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf517c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1085ac6f4; end: 1085ac73f; -[SCTCKCall setCallTitle:] */

void FUN_1085ac6f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) == 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_3;
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085ac740; end: 1085ac76f; -[SCTCKCall setPendingStartCallCompletion:] */

void FUN_1085ac740(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085ac770; end: 1085ac7b3; -[SCTCKCall runPendingStartCallCompletion:] */

void FUN_1085ac770(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1085ac7b4; end: 1085ac7bb; -[SCTCKCall uuid] */

undefined8 FUN_1085ac7b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1085ac7bc; end: 1085ac7c3; -[SCTCKCall talkContext] */

undefined8 FUN_1085ac7bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1085ac7c4; end: 1085ac7cb; -[SCTCKCall initialCallTitle] */

undefined8 FUN_1085ac7c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1085ac7cc; end: 1085ac7d3; -[SCTCKCall initialConvoId] */

undefined8 FUN_1085ac7cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1085ac7d4; end: 1085ac7db; -[SCTCKCall disposableObserverLifecycle] */

undefined8 FUN_1085ac7d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1085ac7dc; end: 1085ac7e3; -[SCTCKCall media] */

undefined8 FUN_1085ac7dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1085ac7e4; end: 1085ac7eb; -[SCTCKCall setMedia:] */

void FUN_1085ac7e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 1085ac7ec; end: 1085ac7f3; -[SCTCKCall muted] */

undefined1 FUN_1085ac7ec(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 1085ac7f4; end: 1085ac7fb; -[SCTCKCall setMuted:] */

void FUN_1085ac7f4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 1085ac7fc; end: 1085ac803; -[SCTCKCall isIncomingCall] */

undefined1 FUN_1085ac7fc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 1085ac804; end: 1085ac80b; -[SCTCKCall setIsIncomingCall:] */

void FUN_1085ac804(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 1085ac80c; end: 1085ac813; -[SCTCKCall isHangout] */

undefined1 FUN_1085ac80c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 1085ac814; end: 1085ac81b; -[SCTCKCall setIsHangout:] */

void FUN_1085ac814(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x12) = param_3;
  return;
}



/* Entry: 1085ac81c; end: 1085ac823; -[SCTCKCall isConnected] */

undefined1 FUN_1085ac81c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 1085ac824; end: 1085ac82b; -[SCTCKCall setIsConnected:] */

void FUN_1085ac824(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x13) = param_3;
  return;
}



/* Entry: 1085ac82c; end: 1085ac833; -[SCTCKCall answeredInApp] */

undefined1 FUN_1085ac82c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* Entry: 1085ac834; end: 1085ac83b; -[SCTCKCall setAnsweredInApp:] */

void FUN_1085ac834(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x14) = param_3;
  return;
}



/* Entry: 1085ac83c; end: 1085ac843; -[SCTCKCall callTitle] */

undefined8 FUN_1085ac83c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1085ac844; end: 1085ac8af; -[SCTCKCall .cxx_destruct] */

void FUN_1085ac844(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085ac8b0; end: 1085ac907; -[SCTCKCallManager prepareAudioConfigurationIfNeeded] */

void FUN_1085ac8b0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085ac908; end: 1085ac90b; -[SCTCKCallManager _appDidBecomeActive:] */

void FUN_1085ac908(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be95f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resumeTasksAfterAppStartOrActiv_112583160);
  return;
}



/* Entry: 1085ac90c; end: 1085ac913; -[SCTCKEndCallInfo callUUID] */

undefined8 FUN_1085ac90c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1085ac914; end: 1085ac943; -[SCTCKEndCallInfo setCallUUID:] */

void FUN_1085ac914(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085ac944; end: 1085ac94b; -[SCTCKEndCallInfo date] */

undefined8 FUN_1085ac944(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1085ac94c; end: 1085ac97b; -[SCTCKEndCallInfo setDate:] */

void FUN_1085ac94c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085ac97c; end: 1085ac983; -[SCTCKEndCallInfo reason] */

undefined8 FUN_1085ac97c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1085ac984; end: 1085ac98b; -[SCTCKEndCallInfo setReason:] */

void FUN_1085ac984(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 1085ac98c; end: 1085ac9bb; -[SCTCKEndCallInfo .cxx_destruct] */

void FUN_1085ac98c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085ac9bc; end: 1085ac9fb; -[SCTCKCallManager _callKitAudioServices] */

void FUN_1085ac9bc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf27fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1085ac9fc; end: 1085ace37; -[SCTCKCallManager initWithLocalUserId:listener:callKitAudioServicesProvider:identityServices:talkContextFactory:locationServices:snapchattersSynchronousDataFetcher:groupsDataFetcher:displayNameProvider:grapheneLogger:watchCallNotificationScheduler:notificationProcessingReporter:defaultCommunicationAppConfig:] */

undefined8 *
FUN_1085ac9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_70 = PTR_PTR_1126fcee0;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    uVar8 = param_3;
    func_0x00010bf51e00();
    uVar7 = puVar2[1];
    puVar2[1] = uVar8;
    _objc_release(uVar7);
    *(undefined1 *)(puVar2 + 0xb) = 1;
    _objc_storeWeak(puVar2 + 4,param_4);
    _objc_storeWeak(puVar2 + 5,param_5);
    _objc_storeWeak(puVar2 + 6,param_6);
    _objc_storeWeak(puVar2 + 7,param_7);
    _objc_storeWeak(puVar2 + 8,param_8);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar2[10];
    puVar2[10] = puVar3;
    _objc_release(uVar8);
    _objc_retain(param_9);
    uVar8 = puVar2[0x14];
    puVar2[0x14] = param_9;
    _objc_release(uVar8);
    _objc_retain(param_10);
    uVar8 = puVar2[0x15];
    puVar2[0x15] = param_10;
    _objc_release(uVar8);
    _objc_retain(param_11);
    uVar8 = puVar2[0x16];
    puVar2[0x16] = param_11;
    _objc_release(uVar8);
    _objc_retain(param_12);
    uVar8 = puVar2[0x13];
    puVar2[0x13] = param_12;
    _objc_release(uVar8);
    _objc_retain(param_13);
    uVar8 = puVar2[0x17];
    puVar2[0x17] = param_13;
    _objc_release(uVar8);
    _objc_retain(param_14);
    uVar8 = puVar2[0x18];
    puVar2[0x18] = param_14;
    _objc_release(uVar8);
    _objc_retain(param_15);
    uVar8 = puVar2[0x19];
    puVar2[0x19] = param_15;
    _objc_release(uVar8);
    _objc_initWeak(auStack_80,puVar2);
    puVar4 = PTR_PTR_1126b6ae8;
    func_0x00010c22ba80(PTR_PTR_1126b6ae8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae960;
    puVar5 = PTR_PTR_1126bdea0;
    func_0x00010bf27fe0(PTR_PTR_1126bdea0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c268800(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126ae970;
    func_0x00010c292920(PTR_PTR_1126ae970);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010c2a1620(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010c108fc0(puVar2);
    puVar2[0x1a] = 0;
    iVar1 = (int)puVar2[0x19];
    func_0x00010c0704e0();
    if (iVar1 != 0) {
      func_0x00010be89ce0(puVar2);
    }
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 1085ace38; end: 1085ace63;  */

void FUN_1085ace38(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdccdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085ace64; end: 1085ace93; -[SCTCKCallManager invalidate] */

void FUN_1085ace64(long param_1,undefined8 param_2)

{
  func_0x00010be026e0(param_1,param_2,0,0);
  *(undefined1 *)(param_1 + 0x68) = 1;
  return;
}



/* Entry: 1085ace94; end: 1085ad043; -[SCTCKCallManager reportGhostCallAndTearDownForNotification:withCompletionHandler:] */

void FUN_1085ace94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c082700();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010be78060(param_1);
    lVar1 = param_1;
    func_0x00010bed59c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126da2e8;
    _objc_alloc();
    func_0x00010bfeecc0();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1085ad044;
    puStack_70 = &UNK_110859a38;
    _objc_retain(param_4);
    uStack_68 = param_4;
    func_0x00010be8fb20(param_1);
    puStack_b8 = puVar3;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1085ad058;
    puStack_a0 = &UNK_110841f80;
    lStack_98 = param_1;
    puStack_90 = puVar5;
    _objc_retain(puVar5);
    func_0x000107c312d0("APPSTORE",&puStack_b8);
    _objc_release(puStack_90);
    _objc_release(uStack_68);
    _objc_release(puVar5);
    _objc_release(lVar1);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085ad044; end: 1085ad057;  */

void FUN_1085ad044(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001085ad050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1085ad058; end: 1085ad0c7;  */

void FUN_1085ad058(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c294d60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be097e0(*(undefined8 *)(param_1 + 0x20),param_2,uVar2,3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1085ad0c8; end: 1085ad3d7; -[SCTCKCallManager reportIncomingCallNotification:talkContext:isVideo:customRingtoneId:withCompletionHandler:] */

void FUN_1085ad0c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c082700();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    uVar3 = param_4;
    func_0x00010bf5e540(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf517c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be78060(param_1);
    _objc_release(uVar6);
    uVar6 = uVar3;
    func_0x00010bf517c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bed59c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    lVar2 = param_1;
    func_0x00010bdd8c20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puVar5 = PTR_PTR_1126da2e8;
      _objc_alloc();
      func_0x00010c0505a0();
      func_0x00010c1b1d60();
      func_0x00010c1c4020(puVar5);
      _objc_initWeak(auStack_68,param_1);
      uVar6 = param_3;
      func_0x00010bfeb320();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(param_7);
      _objc_retain(param_3);
      _objc_retain(puVar5);
      _objc_retain(uVar6);
      func_0x00010be8fb20(param_1);
      _objc_release(uVar6);
      _objc_release(puVar5);
      _objc_release(param_3);
      _objc_release(param_7);
      _objc_destroyWeak(auStack_70);
      _objc_release(uVar6);
      _objc_destroyWeak(auStack_68);
      _objc_release(puVar5);
    }
    else {
      func_0x00010c1c4020(lVar2);
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      lVar4 = lVar2;
      func_0x00010c294d60(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c132860(uVar6);
      _objc_release(lVar4);
      func_0x00010bf8e220(*(undefined8 *)(param_1 + 0xc0));
      if (param_7 != 0) {
        (**(code **)(param_7 + 0x10))(param_7,0);
      }
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085ad3d8; end: 1085ad4ef;  */

void FUN_1085ad3d8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_2);
  }
  if (lVar1 != 0) {
    if (param_2 == 0) {
      func_0x00010bf8e220(*(undefined8 *)(lVar1 + 0xc0));
      func_0x00010bec7580(lVar1);
      uVar3 = *(undefined8 *)(lVar1 + 0xb8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c294d60(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c2688a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf5e540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14fdc0(uVar3);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    else {
      func_0x00010bf8e0e0();
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085ad4f0; end: 1085ad67b; -[SCTCKCallManager _reportIncomingCall:callUpdate:shouldIncludeInRecent:completion:] */

void FUN_1085ad4f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x00010c294d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x50));
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x50));
  func_0x00010bea4a20(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = param_2;
  _objc_retain(param_3);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(uVar1);
  _objc_retain(param_6);
  func_0x00010c1333a0(uVar2);
  _objc_release(param_6);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085ad67c; end: 1085ad6e3;  */

void FUN_1085ad67c(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c12d3e0();
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085ad6e4; end: 1085adea3; -[SCTCKCallManager _reportOutgoingCall:isFromButton:] */

void FUN_1085ad6e4(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined **ppuStack_178;
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined **ppuStack_130;
  undefined8 *puStack_128;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar1);
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c082700();
  _objc_release(lVar2);
  if ((int)lVar3 != 0) {
    lVar2 = param_3;
    func_0x00010bf517c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be78060(param_1);
    _objc_release(lVar2);
    if ((param_4 == 0) || (*(byte *)(param_1 + 0x58) == 0)) {
      if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
        puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bf07b60();
        _objc_release(puVar4);
        if (puVar5 != (undefined *)0x1) {
          lVar2 = param_3;
          func_0x00010c2688a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar2 == 0) {
            uVar6 = param_1 + 0x30;
            _objc_loadWeakRetained();
            uVar7 = uVar6;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            lVar2 = param_3;
            func_0x00010bf517c0(param_3);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x00010bfd5ce0();
            _objc_release(lVar2);
            _objc_release(uVar7);
            _objc_release(uVar6);
            if ((uVar8 & 1) == 0) {
              func_0x00010be2d880(param_1);
              goto LAB_1085adbc0;
            }
            lVar2 = param_1 + 0x30;
            _objc_loadWeakRetained(lVar2);
            lVar3 = lVar2;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = param_3;
            func_0x00010bf517c0(param_3);
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar3;
            func_0x00010bf50680(lVar3);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar9);
            _objc_release(lVar3);
            _objc_release(lVar2);
            lVar2 = param_1 + 0x38;
            _objc_loadWeakRetained(lVar2);
            lVar3 = lVar2;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = param_3;
            func_0x00010bf517c0(param_3);
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar3;
            func_0x00010bfcb040(lVar3);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar9);
            _objc_release(lVar3);
            _objc_release(lVar2);
            func_0x00010c211a20(param_3);
            _objc_release(lVar11);
            _objc_release(lVar10);
          }
          lVar2 = param_3;
          func_0x00010bfbae40();
          if ((int)lVar2 != 0) {
            uVar6 = param_1 + 0x20;
            _objc_loadWeakRetained();
            lVar2 = param_3;
            func_0x00010c2688a0(param_3);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            func_0x00010c07da40();
            _objc_release(lVar2);
            _objc_release(uVar6);
            if ((uVar7 & 1) == 0) {
              _objc_initWeak(&uStack_e0,param_1);
              lVar2 = param_3;
              func_0x00010c2688a0(param_3);
              _objc_retainAutoreleasedReturnValue();
              puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_a8 = 0xc2000000;
              pcStack_a0 = FUN_1085adea4;
              puStack_98 = &UNK_11085dbf8;
              _objc_copyWeak(auStack_80,&uStack_e0);
              uStack_90 = 0;
              _objc_retain(param_3);
              lStack_88 = param_3;
              func_0x00010bee7b40(param_1);
              _objc_release(lVar2);
              _objc_release(lStack_88);
              _objc_release(uStack_90);
              _objc_destroyWeak(auStack_80);
              _objc_destroyWeak(&uStack_e0);
              goto LAB_1085adbc0;
            }
          }
          if ((*(byte *)(param_1 + 0x59) & 1) != 0) {
            puVar5 = PTR_PTR_1126da2e8;
            _objc_alloc();
            lVar2 = param_3;
            func_0x00010c2688a0(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0505a0();
            _objc_release(lVar2);
            func_0x00010c29afe0();
            func_0x00010c1c4020(puVar5);
            func_0x00010c074b00(param_3);
            func_0x00010c1b1a20(puVar5);
            lVar2 = param_3;
            func_0x00010bf43fe0(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1da4c0(puVar5);
            _objc_release(lVar2);
            uStack_e0 = 0;
            uStack_d0 = 0x3032000000;
            pcStack_c8 = FUN_1085adf54;
            pcStack_c0 = FUN_1085adf7c;
            uStack_b8 = 0;
            puStack_d8 = &uStack_e0;
            _objc_initWeak(auStack_e8,param_1);
            puVar4 = PTR___NSConcreteStackBlock_11034bd00;
            puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_110 = 0xc2000000;
            pcStack_108 = FUN_1085adf84;
            puStack_100 = &UNK_110a58fe0;
            _objc_copyWeak(auStack_f0,auStack_e8);
            _objc_retain(puVar5);
            ppuVar12 = &puStack_118;
            puStack_f8 = puVar5;
            _objc_retainBlock();
            puStack_168 = puVar4;
            uStack_160 = 0xc2000000;
            uStack_158 = 0x1085ae014;
            puStack_150 = &UNK_110a18b30;
            _objc_copyWeak(auStack_120,auStack_e8);
            uStack_148 = 0;
            puStack_128 = &uStack_e0;
            _objc_retain(puVar5);
            puStack_140 = puVar5;
            _objc_retain(param_3);
            lStack_138 = param_3;
            _objc_retain(ppuVar12);
            ppuVar13 = &puStack_168;
            ppuStack_130 = ppuVar12;
            _objc_retainBlock();
            lVar2 = param_3;
            func_0x00010c2688a0(param_3);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = param_1;
            func_0x00010bdd8c20();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar2);
            if (lVar3 == 0) {
              uVar1 = *(undefined8 *)(param_1 + 0x10);
              puVar14 = puVar5;
              func_0x00010c294d60(puVar5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c133640(uVar1);
              _objc_release(puVar14);
              func_0x00010c1b1d60(puVar5);
              lVar2 = param_3;
              func_0x00010c247d20();
              *(long *)(param_1 + 0x60) = lVar2;
              uVar1 = *(undefined8 *)(param_1 + 0x50);
              puVar14 = puVar5;
              func_0x00010c294d60(puVar5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(uVar1);
              _objc_release(puVar14);
              func_0x00010bea4a20(param_1);
              puStack_1a8 = puVar4;
              uStack_1a0 = 0xc2000000;
              pcStack_198 = FUN_1085ae16c;
              puStack_190 = &UNK_110857fd0;
              _objc_copyWeak(auStack_170,auStack_e8);
              _objc_retain(puVar5);
              puStack_188 = puVar5;
              _objc_retain(param_3);
              lStack_180 = param_3;
              _objc_retain(ppuVar13);
              ppuVar15 = &puStack_1a8;
              ppuStack_178 = ppuVar13;
              _objc_retainBlock();
              uVar1 = puStack_d8[5];
              puStack_d8[5] = ppuVar15;
              _objc_release(uVar1);
              (**(code **)(puStack_d8[5] + 0x10))();
              _objc_release(ppuStack_178);
              _objc_release(lStack_180);
              _objc_release(puStack_188);
              _objc_destroyWeak(auStack_170);
            }
            else {
              lVar2 = param_3;
              func_0x00010bf43fe0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (lVar2 != 0) {
                lVar2 = param_3;
                func_0x00010bf43fe0();
                _objc_retainAutoreleasedReturnValue();
                (**(code **)(lVar2 + 0x10))();
                _objc_release(lVar2);
              }
            }
            _objc_release(lVar3);
            _objc_release(ppuVar13);
            _objc_release(ppuStack_130);
            _objc_release(lStack_138);
            _objc_release(puStack_140);
            _objc_release(uStack_148);
            _objc_destroyWeak(auStack_120);
            _objc_release(ppuVar12);
            _objc_release(puStack_f8);
            _objc_destroyWeak(auStack_f0);
            _objc_destroyWeak(auStack_e8);
            __Block_object_dispose(&uStack_e0,8);
            _objc_release(uStack_b8);
            _objc_release(puVar5);
            goto LAB_1085adbc0;
          }
        }
      }
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x98);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126cf818;
      func_0x00010c0ee520(PTR_PTR_1126cf818);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b35a0(uVar1);
      _objc_release(puVar4);
      _objc_release(uVar1);
    }
    func_0x00010be997a0(param_1);
  }
LAB_1085adbc0:
  _objc_release(param_3);
  return;
}



/* Entry: 1085adea4; end: 1085adf53;  */

void FUN_1085adea4(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 & 1) == 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      func_0x00010bf43fe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        lVar2 = *(long *)(param_1 + 0x28);
        func_0x00010bf43fe0();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar2 + 0x10))();
        _objc_release(lVar2);
      }
    }
    else {
      lVar2 = lVar1 + 0x48;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar2 == 0) {
        func_0x00010be997a0(lVar1);
      }
      else {
        func_0x00010be47600();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085adf54; end: 1085adf7b;  */

void FUN_1085adf54(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  _objc_retainBlock();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 1085adf7c; end: 1085adf83;  */

void FUN_1085adf7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1085adf84; end: 1085ae16b;  */

void FUN_1085adf84(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c294d60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c132860(uVar3);
    _objc_release(uVar2);
    func_0x00010bec7580(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085ae16c; end: 1085ae1d7;  */

void FUN_1085ae16c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c29afe0(uVar2);
  func_0x00010bf59160(uVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be713e0(lVar1,param_2,uVar3,*(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085ae1d8; end: 1085ae36f; -[SCTCKCallManager _validateOutgoingCallWithTalkContext:completion:] */

void FUN_1085ae1d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_4);
  func_0x00010bf5e540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf51800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c074920();
  _objc_release(uVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar2 == 0) {
    uVar1 = param_3;
    func_0x00010bf51800(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c12a5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1085ae370;
    puStack_60 = &UNK_110a59010;
    _objc_retain(param_4);
    lStack_58 = param_4;
    func_0x00010bfaa420(lVar3,param_2,uVar2,uVar4,&puStack_78);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(lVar3);
    _objc_release(param_1);
    param_1 = lStack_58;
  }
  else {
    uVar1 = param_3;
    func_0x00010bf517c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0826c0(lVar3,param_2,uVar1,param_4);
    _objc_release(uVar1);
    _objc_release(lVar3);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 1085ae370; end: 1085ae3a3;  */

void FUN_1085ae370(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_2 != 0) {
    func_0x000100bf119c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001085ae3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  return;
}



/* Entry: 1085ae3a4; end: 1085ae40b; -[SCTCKCallManager _savePendingOutgoingCall:] */

void FUN_1085ae3a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x70);
  func_0x00010bf43fe0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085ae40c; end: 1085ae553; -[SCTCKCallManager _handleOutgoingCallWithoutMetadata:] */

void FUN_1085ae40c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1085ae554;
  puStack_70 = &UNK_110a59040;
  _objc_copyWeak(auStack_58,auStack_48);
  lStack_68 = param_1;
  uStack_50 = param_2;
  _objc_retain(param_3);
  ppuVar1 = &puStack_88;
  uStack_60 = param_3;
  _objc_retainBlock(ppuVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf517c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa5fa0(lVar2);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(ppuVar1);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1085ae554; end: 1085ae6d7;  */

void FUN_1085ae554(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126cf818;
      func_0x00010c0ee540(PTR_PTR_1126cf818);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b35a0(uVar4);
      _objc_release(puVar5);
      _objc_release(uVar4);
      lVar6 = *(long *)(param_1 + 0x28);
      func_0x00010bf43fe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 == 0) goto LAB_1085ae6b4;
      lVar6 = *(long *)(param_1 + 0x28);
      func_0x00010bf43fe0();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar6 + 0x10))();
      _objc_release(lVar6);
      lVar6 = *(long *)(lVar1 + 0x70);
      *(undefined8 *)(lVar1 + 0x70) = 0;
    }
    else {
      lVar2 = lVar1 + 0x38;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf517c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010bfcb040(lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      func_0x00010c211a20(*(undefined8 *)(param_1 + 0x28));
      func_0x00010be8ff00(lVar1);
    }
    _objc_release(lVar6);
  }
LAB_1085ae6b4:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085ae6d8; end: 1085ae71b; -[SCTCKCallManager reportCallFailedForTalkContext:] */

void FUN_1085ae6d8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bdd8c20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010be097e0(param_1,param_2,lVar1,3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085ae71c; end: 1085ae74f; -[SCTCKCallManager setModularCallLauncher:] */

void FUN_1085ae71c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeWeak(param_1 + 0x48,param_3);
  func_0x00010be8ff20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be7beb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentIncomingCallIfNeeded_11257c948);
  return;
}



/* Entry: 1085ae750; end: 1085ae76f; -[SCTCKCallManager hasCallObject] */

bool FUN_1085ae750(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010bf529e0(lVar1);
  return lVar1 != 0;
}



/* Entry: 1085ae770; end: 1085ae81b; -[SCTCKCallManager reportOutgoingCallToTalkContext:isVideo:sourceType:isHangout:completion:] */

void FUN_1085ae770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  
  puVar1 = PTR_PTR_1126da2f0;
  _objc_retain(in_x6);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0505e0();
  _objc_release(in_x6);
  _objc_release(param_3);
  func_0x00010be8ff00(param_1,param_2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085ae81c; end: 1085ae82b; -[SCTCKCallManager setAudioRecordingInProgress:] */

void FUN_1085ae81c(long param_1,undefined8 param_2,byte param_3)

{
  *(byte *)(param_1 + 0x88) = param_3;
  if ((param_3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8f710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reportEndCallIfPending_112581760);
  return;
}



/* Entry: 1085ae82c; end: 1085ae917; -[SCTCKCallManager callDidEndForHeadlessSession:reason:] */

void FUN_1085ae82c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1085ae918;
  puStack_78 = &UNK_110849dd0;
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_retain(param_3);
  uStack_70 = param_3;
  uStack_68 = param_1;
  uStack_58 = param_2;
  uStack_50 = param_4;
  func_0x000107c312cc("APPSTORE",&puStack_90);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1085ae918; end: 1085ae9bf;  */

void FUN_1085ae918(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2688a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bdd8c20(lVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x00010c0756a0();
      if (((int)lVar4 == 0) || (lVar4 = lVar3, func_0x00010c06f000(), (int)lVar4 != 0)) {
        func_0x00010be8a420(lVar1);
      }
      func_0x00010be097e0(*(undefined8 *)(param_1 + 0x28),param_2,lVar3,
                          *(undefined8 *)(param_1 + 0x40));
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085ae9c0; end: 1085aea9f; -[SCTCKCallManager callDidConnectForHeadlessSession:] */

void FUN_1085ae9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1085aeaa0;
  puStack_58 = &UNK_110842a68;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  uStack_40 = param_2;
  func_0x000107c312cc("APPSTORE",&puStack_70);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1085aeaa0; end: 1085aeb3f;  */

void FUN_1085aeaa0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2688a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bdd8c20(lVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x00010c0756a0();
      if ((int)lVar4 == 0) {
        func_0x00010be6e800(lVar1,param_2,lVar3);
      }
      else {
        func_0x00010be38080(lVar1,param_2,lVar3);
      }
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085aeb40; end: 1085aec27; -[SCTCKCallManager headlessSession:didChangePublishedMedia:isMuted:] */

void FUN_1085aeb40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1085aec28;
  puStack_60 = &UNK_11087b9c8;
  _objc_copyWeak(auStack_50,auStack_38);
  _objc_retain(param_3);
  uStack_58 = param_3;
  uStack_48 = param_4;
  uStack_40 = param_5;
  func_0x000107c312cc("APPSTORE",&puStack_78);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1085aec28; end: 1085aec8b;  */

void FUN_1085aec28(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2688a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6af40(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x30),
                      *(undefined1 *)(param_1 + 0x38));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085aec8c; end: 1085aed2f; -[SCTCKCallManager _outgoingCallConnected:] */

void FUN_1085aec8c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0756a0();
  if (((uVar1 & 1) == 0) && (uVar1 = param_3, func_0x00010c06f000(), (uVar1 & 1) == 0)) {
    uVar1 = param_3;
    func_0x00010c294d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = param_3;
      func_0x00010c294d60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c133620(uVar2,param_2,uVar1,0);
      _objc_release(uVar1);
      func_0x00010c1b0200(param_3,param_2,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085aed30; end: 1085aedbb; -[SCTCKCallManager _incomingCallAnswered:] */

void FUN_1085aed30(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0756a0();
  if (((int)uVar1 != 0) && (uVar1 = param_3, func_0x00010c06f000(), (uVar1 & 1) == 0)) {
    func_0x00010c1b0200(param_3,param_2,1);
    func_0x00010c168540(param_3,param_2,1);
    uVar1 = param_3;
    func_0x00010bf548c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be713c0(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085aedbc; end: 1085aee2b; -[SCTCKCallManager providerDidBegin:] */

void FUN_1085aedbc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if ((*(byte *)(param_1 + 0x59) & 1) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126cf818;
    func_0x00010bf63120(PTR_PTR_1126cf818);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b35a0(uVar1);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  *(undefined1 *)(param_1 + 0x59) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be8ff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reportOutgoingCallIfPending_112581968);
  return;
}



/* Entry: 1085aee2c; end: 1085aeeaf; -[SCTCKCallManager _providerDidBeginTimeout] */

void FUN_1085aee2c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if ((*(byte *)(param_1 + 0x59) & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cf818;
  func_0x00010bf63140(PTR_PTR_1126cf818);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b35a0(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x59) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be8ff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reportOutgoingCallIfPending_112581968);
  return;
}



/* Entry: 1085aeeb0; end: 1085aeebb; -[SCTCKCallManager providerDidReset:] */

void FUN_1085aeeb0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be026f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__dismissCallsWithReason_shouldNo_11255e358,0,1);
  return;
}



/* Entry: 1085aeebc; end: 1085af0d3; -[SCTCKCallManager provider:performStartCallAction:] */

void FUN_1085aeebc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = *(long *)(param_1 + 0x50);
  uVar3 = param_4;
  func_0x00010bf28540(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar4 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126cf818;
    func_0x00010c0ee560(PTR_PTR_1126cf818);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b35a0(uVar3);
    _objc_release(puVar2);
    _objc_release(uVar3);
    func_0x00010be026e0(param_1);
    func_0x00010bf9fac0(param_4);
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1085af0d4;
    puStack_88 = &UNK_110842a68;
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(lVar4);
    ppuVar1 = &puStack_a0;
    lStack_80 = lVar4;
    uStack_70 = param_2;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    *(undefined ***)(param_1 + 0x78) = ppuVar1;
    _objc_release(uVar3);
    _objc_copyWeak(auStack_a8,auStack_68);
    _objc_retain(param_4);
    func_0x00010be909e0(param_1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_a8);
    _objc_release(lStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(lVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085af0d4; end: 1085af1eb;  */

void FUN_1085af0d4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1085af1ec;
    puStack_70 = &UNK_1108e27e8;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    ppuVar2 = &puStack_88;
    uStack_68 = uVar6;
    lStack_60 = lVar1;
    _objc_retainBlock(ppuVar2);
    lVar3 = lVar1 + 0x20;
    _objc_loadWeakRetained(lVar3);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2688a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0c3fe0(uVar4);
    uVar7 = *(undefined8 *)(lVar1 + 0x60);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c074b00(uVar5);
    func_0x00010bf7baa0(lVar3,param_2,uVar6,uVar4,uVar7,uVar5,ppuVar2);
    _objc_release(uVar6);
    _objc_release(lVar3);
    _objc_release(ppuVar2);
    _objc_release(uStack_68);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1085af1ec; end: 1085af24b;  */

void FUN_1085af1ec(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c142940(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  if ((param_2 & 1) != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf56000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be713c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1085af24c; end: 1085af2af;  */

void FUN_1085af24c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      func_0x00010bfbb680(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      func_0x00010be026e0(lVar1);
      func_0x00010bf9fac0(*(undefined8 *)(param_1 + 0x20));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085af2b0; end: 1085af363; -[SCTCKCallManager provider:performEndCallAction:] */

void FUN_1085af2b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x50);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf28540(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    func_0x00010be8a420(param_1);
    func_0x00010bfbb680(param_4);
    _objc_release(param_4);
  }
  else {
    func_0x00010be92500(param_1,param_2,lVar2);
    func_0x00010bfbb680(param_4);
    _objc_release(param_4);
    func_0x00010bdd8be0(param_1,param_2,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1085af364; end: 1085af67f; -[SCTCKCallManager provider:performAnswerCallAction:] */

void FUN_1085af364(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf28540(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c740(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar7 = *(long *)(param_1 + 0x50);
  uVar2 = param_4;
  func_0x00010bf28540(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar7 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cf818;
    func_0x00010bf04840(PTR_PTR_1126cf818);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (*(char *)(param_1 + 0x68) != '\x01') {
      lVar4 = lVar7;
      func_0x00010c2688a0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        func_0x00010bf9fac0(param_4);
      }
      else {
        lVar5 = param_1 + 0x20;
        _objc_loadWeakRetained(lVar5);
        func_0x00010c0c3fe0(lVar7);
        func_0x00010c2a5800(lVar5);
        _objc_release(lVar5);
        _objc_initWeak(auStack_68,param_1);
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0xc2000000;
        pcStack_90 = FUN_1085af680;
        puStack_88 = &UNK_110848218;
        _objc_copyWeak(auStack_70,auStack_68);
        _objc_retain(lVar4);
        lStack_80 = lVar4;
        _objc_retain(lVar7);
        ppuVar6 = &puStack_a0;
        lStack_78 = lVar7;
        _objc_retainBlock();
        uVar2 = *(undefined8 *)(param_1 + 0x78);
        *(undefined ***)(param_1 + 0x78) = ppuVar6;
        _objc_release(uVar2);
        lVar5 = param_1;
        func_0x00010bdd8c60(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf28020();
        _objc_release(lVar5);
        _objc_retain(param_4);
        _objc_retain(lVar7);
        func_0x00010be909e0(param_1);
        func_0x00010c1b0200(lVar7);
        _objc_release(lVar7);
        _objc_release(param_4);
        _objc_release(lStack_78);
        _objc_release(lStack_80);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
      }
      _objc_release(lVar4);
      goto LAB_1085af62c;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cf818;
    func_0x00010bf04860(PTR_PTR_1126cf818);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0b35a0(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  func_0x00010be026e0(param_1);
  func_0x00010bf9fac0(param_4);
LAB_1085af62c:
  _objc_release(lVar7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085af680; end: 1085af6e3;  */

void FUN_1085af680(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar3 = lVar2 + 0x20;
    _objc_loadWeakRetained(lVar3);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0c3fe0(uVar4);
    func_0x00010bf723c0(lVar3,param_2,uVar1,uVar4);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1085af6e4; end: 1085af733;  */

void FUN_1085af6e4(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf9fad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_fail_1125c5858);
    return;
  }
  func_0x00010bfbb680(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010bf048e0();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7be90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s__presentIncomingCall__11257c940,
             *(undefined8 *)(param_1 + 0x28));
  return;
}


