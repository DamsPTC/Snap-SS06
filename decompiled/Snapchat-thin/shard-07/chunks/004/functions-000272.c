/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1054eb380; end: 1054eb3b3; -[SCSendToFeedLogger _resetLoggingFlow] */

void FUN_1054eb380(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x18) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054eb3b4; end: 1054eb3fb; -[SCSendToFeedLogger .cxx_destruct] */

void FUN_1054eb3b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054eb3fc; end: 1054eb4e3; -[SCFriendsFeedCellInfo initWithCellPosition:hasMapIcon:hasSaturnStatusVisible:staleType:] */

undefined1 *
FUN_1054eb3fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e8b98;
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



/* Entry: 1054eb4e4; end: 1054eb507; -[SCFriendsFeedCellInfo copyWithZone:] */

undefined8 FUN_1054eb4e4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1054eb508; end: 1054eb593; -[SCFriendsFeedCellInfo hash] */

long * FUN_1054eb508(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  plVar3 = &lStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(plVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == param_3) {
LAB_1054eb63c:
    plVar6 = (long *)0x1;
  }
  else {
    plVar6 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_1054eb648;
    plVar6 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar6);
    if ((((ulong)plVar4 & 1) != 0) && (plVar3[1] == param_3[1])) {
      lVar5 = plVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = plVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          plVar6 = (long *)plVar3[4];
          if (plVar6 != (long *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_1054eb648;
          }
          goto LAB_1054eb63c;
        }
      }
    }
    plVar6 = (long *)0x0;
  }
LAB_1054eb648:
  _objc_release(param_3);
  return plVar6;
}



/* Entry: 1054eb594; end: 1054eb663; -[SCFriendsFeedCellInfo isEqual:] */

long FUN_1054eb594(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1054eb63c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1054eb648;
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
            goto LAB_1054eb648;
          }
          goto LAB_1054eb63c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1054eb648:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1054eb664; end: 1054eb66b; -[SCFriendsFeedCellInfo cellPosition] */

undefined8 FUN_1054eb664(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1054eb66c; end: 1054eb673; -[SCFriendsFeedCellInfo hasMapIcon] */

undefined8 FUN_1054eb66c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1054eb674; end: 1054eb67b; -[SCFriendsFeedCellInfo hasSaturnStatusVisible] */

undefined8 FUN_1054eb674(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1054eb67c; end: 1054eb683; -[SCFriendsFeedCellInfo staleType] */

undefined8 FUN_1054eb67c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1054eb684; end: 1054eb6bf; -[SCFriendsFeedCellInfo .cxx_destruct] */

void FUN_1054eb684(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1054eb6c0; end: 1054eb747; -[SCFriendsFeedReadyRenderParameters initWithRenderTime:renderContent:] */

undefined1 *
FUN_1054eb6c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8ba0;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1054eb748; end: 1054eb76b; -[SCFriendsFeedReadyRenderParameters copyWithZone:] */

undefined8 FUN_1054eb748(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1054eb76c; end: 1054eb7eb; -[SCFriendsFeedReadyRenderParameters hash] */

ulong * FUN_1054eb76c(long param_1,undefined8 param_2,ulong *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  func_0x00010bfde980();
  puVar3 = &uStack_28;
  uStack_20 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1054eb888:
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_1054eb894;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      dVar8 = ABS((double)puVar3[1] - (double)param_3[1]);
      dVar7 = ABS((double)puVar3[1] + (double)param_3[1]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = (ulong *)puVar3[2];
        if (puVar6 != (ulong *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_1054eb894;
        }
        goto LAB_1054eb888;
      }
    }
    puVar6 = (ulong *)0x0;
  }
LAB_1054eb894:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1054eb7ec; end: 1054eb8af; -[SCFriendsFeedReadyRenderParameters isEqual:] */

long FUN_1054eb7ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1054eb888:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1054eb894;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
      dVar5 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_1054eb894;
        }
        goto LAB_1054eb888;
      }
    }
    lVar4 = 0;
  }
LAB_1054eb894:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1054eb8b0; end: 1054eb8b7; -[SCFriendsFeedReadyRenderParameters renderTime] */

undefined8 FUN_1054eb8b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1054eb8b8; end: 1054eb8bf; -[SCFriendsFeedReadyRenderParameters renderContent] */

undefined8 FUN_1054eb8b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1054eb8c0; end: 1054eb8cb; -[SCFriendsFeedReadyRenderParameters .cxx_destruct] */

void FUN_1054eb8c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1054eb8cc; end: 1054eb8ef; -[SCGhostToFeedStepMetric copyWithZone:] */

undefined8 FUN_1054eb8cc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1054eb8f0; end: 1054eb97f; -[SCGhostToFeedStepMetric hash] */

long * FUN_1054eb8f0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  double dVar6;
  long lStack_30;
  ulong uStack_28;
  long lStack_20;
  long lStack_18;
  
  plVar1 = &lStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_1 + 8);
  uVar4 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  lStack_30 = -lVar3;
  if (-1 < lVar3) {
    lStack_30 = lVar3;
  }
  uStack_28 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  lVar3 = *(long *)(param_1 + 0x18);
  lStack_20 = -lVar3;
  if (-1 < lVar3) {
    lStack_20 = lVar3;
  }
  func_0x000100505190(&lStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar1 == (long *)param_3) {
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((plVar1 != (long *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar5 = (undefined1 *)plVar1;
      _objc_opt_class(plVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar5);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((*(long *)((long)plVar1 + 8) != *(long *)(param_3 + 8) ||
          (*(long *)((long)plVar1 + 0x18) != *(long *)(param_3 + 0x18))))) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        dVar6 = ABS(*(double *)((long)plVar1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        if (dVar6 <= 2.2250738585072014e-308) {
          dVar6 = 2.2250738585072014e-308;
        }
        puVar5 = (undefined1 *)
                 (ulong)(ABS(*(double *)((long)plVar1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar6
                        );
      }
    }
  }
  _objc_release(param_3);
  return (long *)puVar5;
}



/* Entry: 1054eb980; end: 1054eba4b; -[SCGhostToFeedStepMetric isEqual:] */

bool FUN_1054eb980(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar2 & 1) == 0) ||
         ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
          (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
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



/* Entry: 1054eba4c; end: 1054eba53; -[SCGhostToFeedStepMetric step] */

undefined8 FUN_1054eba4c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1054eba54; end: 1054eba5b; -[SCGhostToFeedStepMetric updateCount] */

undefined8 FUN_1054eba54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1054eba5c; end: 1054eba87; +[SCGrapheneGhostToFeedMetric ghostToFeed] */

void FUN_1054eba5c(void)

{
  _objc_alloc(PTR_PTR_1126ba080);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054eba88; end: 1054ebab3; +[SCGrapheneGhostToFeedMetric g2fDuplicateStep] */

void FUN_1054eba88(void)

{
  _objc_alloc(PTR_PTR_1126ba080);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054ebab4; end: 1054ebadf; +[SCGrapheneGhostToFeedMetric g2fDuplicateStart] */

void FUN_1054ebab4(void)

{
  _objc_alloc(PTR_PTR_1126ba080);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054ebae0; end: 1054ebb0b; +[SCGrapheneGhostToFeedMetric g2fFailureReason] */

void FUN_1054ebae0(void)

{
  _objc_alloc(PTR_PTR_1126ba080);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054ebb0c; end: 1054ebb37; +[SCGrapheneGhostToFeedMetric g2fStepWaitSyncFeed] */

void FUN_1054ebb0c(void)

{
  _objc_alloc(PTR_PTR_1126ba080);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054ebb38; end: 1054ebb63; +[SCGrapheneGhostToFeedMetric g2fStepSyncFeed] */

void FUN_1054ebb38(void)

{
  _objc_alloc(PTR_PTR_1126ba080);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054ebb64; end: 1054ebb8f; +[SCGrapheneGhostToFeedMetric g2fStepProcessSyncResponse] */

void FUN_1054ebb64(void)

{
  _objc_alloc(PTR_PTR_1126ba080);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054ebb90; end: 1054ebbbb; +[SCGrapheneGhostToFeedMetric g2fStepProcessSources] */

void FUN_1054ebb90(void)

{
  _objc_alloc(PTR_PTR_1126ba080);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054ebbbc; end: 1054ebbe7; +[SCGrapheneGhostToFeedMetric g2fStepProcessFeedItems] */

void FUN_1054ebbbc(void)

{
  _objc_alloc(PTR_PTR_1126ba080);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054ebbe8; end: 1054ebc13; +[SCGrapheneGhostToFeedMetric g2fStepRankFeedItems] */

void FUN_1054ebbe8(void)

{
  _objc_alloc(PTR_PTR_1126ba080);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054ebc14; end: 1054ebc3f; +[SCGrapheneGhostToFeedMetric g2fStepPropagateToUi] */

void FUN_1054ebc14(void)

{
  _objc_alloc(PTR_PTR_1126ba080);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054ebc40; end: 1054ebc6b; +[SCGrapheneGhostToFeedMetric g2fStepReloadTable] */

void FUN_1054ebc40(void)

{
  _objc_alloc(PTR_PTR_1126ba080);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054ebc6c; end: 1054ebc97; +[SCGrapheneGhostToFeedMetric g2fFetchLegacyAmd] */

void FUN_1054ebc6c(void)

{
  _objc_alloc(PTR_PTR_1126ba080);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054ebc98; end: 1054ebcc3; +[SCGrapheneGhostToFeedMetric g2fFetchArroyoAmd] */

void FUN_1054ebc98(void)

{
  _objc_alloc(PTR_PTR_1126ba080);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054ebcc4; end: 1054ebcef; +[SCGrapheneGhostToFeedMetric g2fFetchStories] */

void FUN_1054ebcc4(void)

{
  _objc_alloc(PTR_PTR_1126ba080);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054ebcf0; end: 1054ebd1b; +[SCGrapheneGhostToFeedMetric g2fFetchMultiRecipient] */

void FUN_1054ebcf0(void)

{
  _objc_alloc(PTR_PTR_1126ba080);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054ebd1c; end: 1054ebd47; +[SCGrapheneGhostToFeedMetric g2fFetchPresence] */

void FUN_1054ebd1c(void)

{
  _objc_alloc(PTR_PTR_1126ba080);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054ebd48; end: 1054ebd73; +[SCGrapheneGhostToFeedMetric g2fFetchPinned] */

void FUN_1054ebd48(void)

{
  _objc_alloc(PTR_PTR_1126ba080);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054ebd74; end: 1054ebd9f; +[SCGrapheneGhostToFeedMetric g2fFetchAddedMe] */

void FUN_1054ebd74(void)

{
  _objc_alloc(PTR_PTR_1126ba080);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054ebda0; end: 1054ebdcb; +[SCGrapheneGhostToFeedMetric g2fViewAppeared] */

void FUN_1054ebda0(void)

{
  _objc_alloc(PTR_PTR_1126ba080);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054ebdcc; end: 1054ebdf7; +[SCGrapheneGhostToFeedMetric g2fPropagateDispatch] */

void FUN_1054ebdcc(void)

{
  _objc_alloc(PTR_PTR_1126ba080);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054ebdf8; end: 1054ebe23; +[SCGrapheneGhostToFeedMetric g2fTailEnd] */

void FUN_1054ebdf8(void)

{
  _objc_alloc(PTR_PTR_1126ba080);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054ebe24; end: 1054ebe4f; +[SCGrapheneGhostToFeedMetric g2fEntryPointBegin] */

void FUN_1054ebe24(void)

{
  _objc_alloc(PTR_PTR_1126ba080);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054ebe50; end: 1054ebe7b; +[SCGrapheneGhostToFeedMetric g2fBeginObservationTime] */

void FUN_1054ebe50(void)

{
  _objc_alloc(PTR_PTR_1126ba080);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054ebe7c; end: 1054ebf1b; -[SCGrapheneGhostToFeedMetric description] */

void FUN_1054ebe7c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110de6af8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110de6af8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e8bb0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1054ebf1c; end: 1054ebf8f; -[SCGrapheneSendToFeedMetric2 init] */

undefined1 * FUN_1054ebf1c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8bb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1054ebf90; end: 1054ec007;  */

void FUN_1054ebf90(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110892280,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1054ec008; end: 1054ec07f;  */

void FUN_1054ec008(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108922d0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1054ec080; end: 1054ec0f7;  */

void FUN_1054ec080(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110892320,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1054ec0f8; end: 1054ec16f;  */

void FUN_1054ec0f8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110892370,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1054ec170; end: 1054ec1e7;  */

void FUN_1054ec170(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108923c0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1054ec1e8; end: 1054ec1f3; -[SCFeatureSettingsService getShouldShowPinConversationNewBadge] */

void FUN_1054ec1e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110de6ef8);
  return;
}



/* Entry: 1054ec1f4; end: 1054ec1ff; -[SCFeatureSettingsService shouldShowPinConversationNewBadgeServerParam] */

undefined ** FUN_1054ec1f4(void)

{
  return &PTR____CFConstantStringClassReference_110de6ef8;
}



/* Entry: 1054ec200; end: 1054ec20f; -[SCFeatureSettingsService setShouldShowPinConversationNewBadge:] */

void FUN_1054ec200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110de6ef8,param_3);
  return;
}



/* Entry: 1054ec210; end: 1054ec217; -[SCFeatureSettingsService should_show_pin_conversation_new_badge_client_value:] */

undefined * FUN_1054ec210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1054ec218; end: 1054ec21f; -[SCFeatureSettingsService should_show_pin_conversation_new_badge_server_value:] */

void FUN_1054ec218(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1054ec220; end: 1054ec22f; -[SCFeatureSettingsService shouldShowPinConversationNewBadge] */

void FUN_1054ec220(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110de6ef8,1);
  return;
}



/* Entry: 1054ec230; end: 1054ec357; -[SCPinnedConversationDataProvider subscribeToFeedUpdates] */

void FUN_1054ec230(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfba320();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1054ec358; end: 1054ec3e7;  */

void FUN_1054ec358(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c28d320(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf6cee0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bee47e0(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054ec3e8; end: 1054ec413; -[SCPinnedConversationDataProvider stopObservingFeedUpdates] */

void FUN_1054ec3e8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x58));
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054ec414; end: 1054ec493; -[SCPinnedConversationDataProvider hasPinnedConversationWithId:] */

bool FUN_1054ec414(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _os_unfair_lock_unlock(param_1 + 8);
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 1054ec494; end: 1054ec6ef; -[SCPinnedConversationDataProvider addPinnedConversationWithId:completion:] */

void FUN_1054ec494(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
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
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_d0 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_1054ec6f0;
  uStack_80 = 0x1054ec700;
  uStack_78 = 0;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1054ec708;
  puStack_b0 = &UNK_110842b58;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x1054ec750;
  puStack_d8 = &UNK_110842b58;
  puStack_a8 = puStack_d0;
  puStack_98 = puStack_d0;
  func_0x00010c0c11e0(param_3);
  _objc_initWeak(auStack_f8,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_70 = puStack_98[5];
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_100,auStack_f8);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf504e0(uVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_f8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_f8);
  lVar4 = 8;
  __Block_object_dispose(&uStack_a0);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  return;
}



/* Entry: 1054ec6f0; end: 1054ec707;  */

void FUN_1054ec6f0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1054ec708; end: 1054ec797;  */

void FUN_1054ec708(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b01c0;
  func_0x00010c294260(PTR_PTR_1126b01c0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054ec798; end: 1054ec8ab;  */

void FUN_1054ec798(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  func_0x00010bedc080(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 1054ec8ac; end: 1054ec91f;  */

void FUN_1054ec8ac(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be51820();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001054ec90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 1054ec920; end: 1054ecb7b; -[SCPinnedConversationDataProvider removePinnedConversationWithId:completion:] */

void FUN_1054ec920(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
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
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_d0 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_1054ec6f0;
  uStack_80 = 0x1054ec700;
  uStack_78 = 0;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1054ecb7c;
  puStack_b0 = &UNK_110842b58;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x1054ecbc4;
  puStack_d8 = &UNK_110842b58;
  puStack_a8 = puStack_d0;
  puStack_98 = puStack_d0;
  func_0x00010c0c11e0(param_3);
  _objc_initWeak(auStack_f8,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_70 = puStack_98[5];
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_100,auStack_f8);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf504e0(uVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_f8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_f8);
  __Block_object_dispose(&uStack_a0,8);
  __Unwind_Resume();
  puVar2 = PTR_PTR_1126b01c0;
  func_0x00010c294260();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054ecb7c; end: 1054ecc0b;  */

void FUN_1054ecb7c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b01c0;
  func_0x00010c294260(PTR_PTR_1126b01c0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054ecc0c; end: 1054ecd1f;  */

void FUN_1054ecc0c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  func_0x00010bedc080(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 1054ecd20; end: 1054ecd8b;  */

void FUN_1054ecd20(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((int)param_2 != 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be51820();
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001054ecd78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 1054ecd8c; end: 1054ece5b; -[SCPinnedConversationDataProvider _updateNativePinnedStatusWithPinned:conversationId:completion:] */

void FUN_1054ecd8c(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1054ece5c;
  puStack_60 = &UNK_110892410;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_3;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c297280(uVar2,param_2,&puStack_78,uVar1,1);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1054ece5c; end: 1054ece9b;  */

void FUN_1054ece5c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bfc56e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054ece9c; end: 1054ed3e3; -[SCPinnedConversationDataProvider _updateWithFeedEntries:deletedFeedEntries:] */

void FUN_1054ece9c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 *puVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  double unaff_d8;
  undefined8 unaff_d9;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  double dStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined8 *puStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  long lStack_220;
  long lStack_218;
  uint uStack_20c;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [128];
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_220 = param_3;
  _objc_retain(param_3);
  lStack_218 = param_4;
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 8);
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  uStack_20c = (uint)(puVar1 == (undefined8 *)0x0);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
  }
  else {
    func_0x00010c0d3c80();
    puVar2 = *(undefined **)(param_1 + 0x48);
    func_0x00010c0d3c80();
  }
  _os_unfair_lock_unlock(param_1 + 8);
  lVar3 = lStack_218;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  _objc_retain(lStack_218);
  func_0x00010bf52a60(lVar3,param_2,&uStack_1c0,auStack_100,0x10);
  if (lVar3 != 0) {
    unaff_x20 = *plStack_1b0;
    do {
      lVar13 = 0;
      do {
        if (*plStack_1b0 != unaff_x20) {
          _objc_enumerationMutation(lStack_218);
        }
        uVar4 = *(undefined8 *)(lStack_1b8 + lVar13 * 8);
        func_0x00010bfa3ba0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar4;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar11;
        func_0x00010c272380();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        _objc_release(uVar4);
        puVar6 = puVar2;
        func_0x00010c0e00e0(puVar2,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 != (undefined *)0x0) {
          func_0x00010c12d3e0(puVar2,param_2,uVar5);
          func_0x00010c12d3e0(puVar1,param_2,puVar6);
          uStack_20c = 1;
        }
        _objc_release(puVar6);
        _objc_release(uVar5);
        lVar13 = lVar13 + 1;
      } while (lVar3 != lVar13);
      lVar3 = lStack_218;
      func_0x00010bf52a60(lStack_218,param_2,&uStack_1c0,auStack_100,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lStack_218);
  lVar3 = lStack_220;
  dVar15 = 0.0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  _objc_retain(lStack_220);
  puVar12 = &uStack_200;
  puVar10 = auStack_180;
  func_0x00010bf52a60(lVar3,param_2,puVar12,puVar10,0x10);
  if (lVar3 != 0) {
    lStack_208 = *plStack_1f0;
    unaff_d9 = 0x408f400000000000;
    do {
      unaff_x20 = 0;
      do {
        if (*plStack_1f0 != lStack_208) {
          _objc_enumerationMutation(lStack_220);
        }
        puVar12 = *(undefined8 **)(lStack_1f8 + unaff_x20 * 8);
        lVar13 = *(long *)(param_1 + 0x30);
        func_0x00010bfb9fc0(lVar13,param_2,puVar12,*(undefined8 *)(param_1 + 0x38));
        _objc_retainAutoreleasedReturnValue();
        if (lVar13 != 0) {
          puVar7 = puVar1;
          func_0x00010c0e00e0(puVar1,param_2,lVar13);
          _objc_retainAutoreleasedReturnValue();
          dVar14 = dVar15;
          if (puVar7 == (undefined8 *)0x0) {
LAB_1054ed130:
            puVar7 = puVar12;
            func_0x00010c0fc5a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            dVar15 = dVar14;
            if (puVar7 == (undefined8 *)0x0) goto LAB_1054ed2c0;
            puVar7 = puVar12;
            func_0x00010c0fc5a0(puVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf885a0();
            _objc_release(puVar7);
            dVar15 = dVar14 / 1000.0;
            puVar7 = (undefined8 *)PTR__OBJC_CLASS___NSDate_1126ae770;
            func_0x00010bf655e0();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar1;
            func_0x00010c0e00e0(puVar1,param_2,lVar13);
            _objc_retainAutoreleasedReturnValue();
            _objc_retain();
            _objc_retain(puVar7);
            if (puVar8 == puVar7) {
              _objc_release(puVar7);
              puVar9 = puVar8;
            }
            else {
              if (puVar7 == (undefined8 *)0x0) {
                _objc_release(puVar8);
                _objc_release(puVar8);
              }
              else {
                puVar9 = puVar8;
                func_0x00010c071ae0(puVar8,param_2,puVar7);
                _objc_release(puVar7);
                _objc_release(puVar8);
                _objc_release(puVar8);
                if (((ulong)puVar9 & 1) != 0) goto LAB_1054ed2b8;
              }
              func_0x00010c1d0640(puVar1,param_2,puVar7,lVar13);
              func_0x00010bf50280(puVar12);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar12;
              func_0x00010c272380();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar2,param_2,lVar13,puVar9);
              uStack_20c = 1;
              puVar8 = puVar12;
            }
            _objc_release(puVar9);
            _objc_release(puVar8);
          }
          else {
            puVar8 = puVar12;
            func_0x00010c0fc5a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(puVar7);
            dVar14 = dVar15;
            if (puVar8 != (undefined8 *)0x0) goto LAB_1054ed130;
            func_0x00010bf50280(puVar12);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar12;
            func_0x00010c272380();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar12);
            func_0x00010c12d3e0(puVar2,param_2,puVar7);
            func_0x00010c12d3e0(puVar1,param_2,lVar13);
            uStack_20c = 1;
            dVar14 = unaff_d8;
          }
LAB_1054ed2b8:
          _objc_release(puVar7);
          unaff_d8 = dVar14;
        }
LAB_1054ed2c0:
        _objc_release(lVar13);
        unaff_x20 = unaff_x20 + 1;
      } while (lVar3 != unaff_x20);
      puVar12 = &uStack_200;
      puVar10 = auStack_180;
      lVar3 = lStack_220;
      func_0x00010bf52a60(lStack_220,param_2,puVar12,puVar10,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lStack_220);
  if ((uStack_20c & 1) != 0) {
    _os_unfair_lock_lock(param_1 + 8);
    puVar12 = puVar1;
    func_0x00010bf51e00();
    uVar11 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 **)(param_1 + 0x40) = puVar12;
    _objc_release(uVar11);
    puVar6 = puVar2;
    func_0x00010bf51e00();
    uVar11 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar6;
    _objc_release(uVar11);
    _os_unfair_lock_unlock(param_1 + 8);
    param_1 = *(long *)(param_1 + 0x60);
    puVar7 = puVar1;
    func_0x00010bf51e00(puVar1);
    puVar12 = puVar7;
    func_0x00010c0d9840(param_1,param_2,puVar7);
    _objc_release(puVar7);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(lStack_218);
  lVar3 = lStack_220;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _os_unfair_lock_unlock(param_1 + 8);
    lVar13 = lVar3;
    __Unwind_Resume();
    puVar6 = PTR_PTR_1126ba0e8;
    pcStack_228 = FUN_1054ed3e4;
    uStack_270 = unaff_d9;
    dStack_268 = unaff_d8;
    uStack_260 = 0;
    puStack_258 = puVar2;
    puStack_250 = puVar1;
    lStack_248 = param_1;
    lStack_240 = unaff_x20;
    lStack_238 = lVar3;
    puStack_230 = &stack0xfffffffffffffff0;
    _objc_retain(puVar12);
    _objc_alloc_init();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_298 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_290 = 0xc2000000;
    pcStack_288 = FUN_1054ed4f4;
    puStack_280 = &UNK_1108450c8;
    _objc_retain();
    puStack_2c0 = puVar2;
    uStack_2b8 = 0xc2000000;
    uStack_2b0 = 0x1054ed500;
    puStack_2a8 = &UNK_1108450c8;
    puStack_2a0 = puVar6;
    puStack_278 = puVar6;
    _objc_retain(puVar6);
    func_0x00010c0c11e0(puVar12,param_2,&puStack_298,&puStack_2c0);
    _objc_release(puVar12);
    func_0x00010c1dbb00(puVar6,param_2,puVar10);
    uVar11 = *(undefined8 *)(lVar13 + 0x10);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar11);
    _objc_release(puStack_2a0);
    _objc_release(puStack_278);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar6);
    return;
  }
  return;
}



/* Entry: 1054ed3e4; end: 1054ed4f3; -[SCPinnedConversationDataProvider _logChatConversationPinWithIdentifier:pinRank:] */

void FUN_1054ed3e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar2 = PTR_PTR_1126ba0e8;
  _objc_retain(param_3);
  _objc_alloc_init();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1054ed4f4;
  puStack_60 = &UNK_1108450c8;
  _objc_retain();
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1054ed500;
  puStack_88 = &UNK_1108450c8;
  puStack_80 = puVar2;
  puStack_58 = puVar2;
  _objc_retain(puVar2);
  func_0x00010c0c11e0(param_3,param_2,&puStack_78,&puStack_a0);
  _objc_release(param_3);
  func_0x00010c1dbb00(puVar2,param_2,param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(puStack_80);
  _objc_release(puStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054ed4f4; end: 1054ed50b;  */

void FUN_1054ed4f4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c184470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setCorrespondentGuid__11263eb38,param_2);
  return;
}



/* Entry: 1054ed50c; end: 1054ed5a7; -[SCPinnedConversationDataProvider .cxx_destruct] */

void FUN_1054ed50c(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1054ed5a8; end: 1054ed61b; -[SCPinnedFriendmojiDecorator initWithPinnedConversationsDataCoordinator:] */

undefined1 * FUN_1054ed5a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8bc8;
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



/* Entry: 1054ed61c; end: 1054ed623; -[SCPinnedFriendmojiDecorator friendmojiPosition] */

undefined8 FUN_1054ed61c(void)

{
  return 3;
}



/* Entry: 1054ed624; end: 1054ed6cf; -[SCPinnedFriendmojiDecorator friendmojiCategoryNameForIdentifier:friendmojiFilterType:] */

undefined ** FUN_1054ed624(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  if (((param_4 < 8) && ((0x93U >> (ulong)((uint)param_4 & 0x1f) & 1) != 0)) ||
     (uVar1 = param_3,
     func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e12b58),
     (uVar1 & 1) != 0)) {
    ppuVar4 = (undefined **)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfda360();
    _objc_release(uVar2);
    ppuVar4 = &PTR____CFConstantStringClassReference_110de6f38;
    if ((int)uVar3 == 0) {
      ppuVar4 = (undefined **)0x0;
    }
  }
  _objc_release(param_3);
  return ppuVar4;
}



/* Entry: 1054ed6d0; end: 1054ed887; -[SCPinnedFriendmojiDecorator observeFriendmojiCategoryNameForIdentifier:friendmojiFilterType:] */

void FUN_1054ed6d0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = *(undefined **)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar1 == (undefined *)0x0) ||
     (((param_4 < 8 && ((1L << (param_4 & 0x3f) & 0x93U) != 0)) ||
      (uVar2 = param_3,
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e12b58),
      (int)uVar2 != 0)))) {
    puVar7 = PTR_PTR_1126ae6b8;
    puVar3 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar7,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = puVar1;
    func_0x00010c0fc5c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1054ed888;
    puStack_60 = &UNK_110892440;
    _objc_retain(param_3);
    puVar4 = puVar3;
    uStack_58 = param_3;
    func_0x00010c0b8600(puVar3,param_2,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c2519e0(puVar4,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uStack_58);
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1054ed888; end: 1054ed8f7;  */

void FUN_1054ed888(long param_1,long param_2)

{
  undefined *puVar1;
  
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae750;
  if (param_2 == 0) {
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2468a0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054ed8f8; end: 1054ed903; -[SCPinnedFriendmojiDecorator .cxx_destruct] */

void FUN_1054ed8f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054ed904; end: 1054ed943;  */

void FUN_1054ed904(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be73fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1054ed944; end: 1054ed9bb; -[SCPinnedConversationsFriendmojiDecoratorEntryPoint _pinnedFriendmojiDecorator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054ed944(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112724d0c;
    _objc_loadWeakRetained(param_1);
  }
  lVar1 = param_1;
  func_0x00010c0fc460(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126ba0f0;
  _objc_alloc(PTR_PTR_1126ba0f0);
  func_0x00010c036020();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054ed9bc; end: 1054ed9f3; -[SCPinnedConversationsFriendmojiDecoratorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054ed9bc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112724d0c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112724d08);
  return;
}



/* Entry: 1054ed9f4; end: 1054eda03;  */

void FUN_1054ed9f4(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2601b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_subscribeToFeedUpdates_112675a90);
  return;
}



/* Entry: 1054eda04; end: 1054eda97; -[SCPinnedConversationsServiceProvider end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054eda04(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = (long)_DAT_112724d30;
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112724d10);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c256440();
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126e8bd0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054eda98; end: 1054edb2f; -[SCPinnedConversationsServiceProvider _resetPinnedFeaturesSetting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054eda98(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + _DAT_112724d34;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c201240();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126ba108;
  func_0x00010c22bcc0(PTR_PTR_1126ba108);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27d780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1054edb30; end: 1054edbd3; -[SCPinnedConversationsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054edb30(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112724d2c);
  _objc_destroyWeak(param_1 + _DAT_112724d24);
  _objc_destroyWeak(param_1 + _DAT_112724d28);
  _objc_destroyWeak(param_1 + _DAT_112724d20);
  _objc_destroyWeak(param_1 + _DAT_112724d34);
  _objc_destroyWeak(param_1 + _DAT_112724d18);
  _objc_destroyWeak(param_1 + _DAT_112724d1c);
  _objc_storeStrong(param_1 + _DAT_112724d30,0);
  _objc_storeStrong(param_1 + _DAT_112724d14,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112724d10,0);
  return;
}



/* Entry: 1054edbd4; end: 1054edc1b; -[SCAppUserLifecycleEventHandlerFactoryImpl .cxx_destruct] */

void FUN_1054edbd4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054edc1c; end: 1054edd67; -[SCAppUserLifecycleEventHandlerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054edc1c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112724d50);
  _objc_destroyWeak(param_1 + _DAT_112724d4c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112724d48);
  return;
}



/* Entry: 1054edd68; end: 1054edd6f; -[SCAppUserLifecycleEventHandlerV2 _handleUserLoggedIn] */

void FUN_1054edd68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e76b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_onUserLoggedIn_1126177c0);
  return;
}



/* Entry: 1054edd70; end: 1054edd77; -[SCAppUserLifecycleEventHandlerV2 _handleUserRegistered] */

void FUN_1054edd70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e76d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_onUserRegistered_1126177c8);
  return;
}



/* Entry: 1054edd78; end: 1054edd7f; -[SCAppUserLifecycleEventHandlerV2 _handleAppWillEnterForeground] */

void FUN_1054edd78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e28d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_onAppWillEnterForeground_112616448);
  return;
}



/* Entry: 1054edd80; end: 1054edd87; -[SCAppUserLifecycleEventHandlerV2 _handleAppWillResignActive] */

void FUN_1054edd80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e28f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_onAppWillResignActive_112616450);
  return;
}



/* Entry: 1054edd88; end: 1054edd8f; -[SCAppUserLifecycleEventHandlerV2 _handleAppDidEnterBackground] */

void FUN_1054edd88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e27b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_onAppDidEnterBackground_112616400);
  return;
}



/* Entry: 1054edd90; end: 1054edd97; -[SCAppUserLifecycleEventHandlerV2 _handleAppWillTerminate] */

void FUN_1054edd90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e2910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_onAppWillTerminate_112616458);
  return;
}


