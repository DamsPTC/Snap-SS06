/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1054e62d4; end: 1054e634f;  */

void FUN_1054e62d4(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x80) = 1;
  *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x88) = 0;
  lVar2 = *(long *)(param_2 + 0x20);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(lVar2 + 0xb0);
  *(undefined8 *)(lVar2 + 0xb0) = param_3;
  _objc_release(uVar1);
  func_0x00010bf97820(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x28));
  if (0.0 < param_1) {
    func_0x00010be540a0(*(undefined8 *)(param_2 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054e6350; end: 1054e65a3; -[SCFriendsFeedReadyLogger _logMetricsIfNecessaryAndRestartLoggerWithCompletion:] */

void FUN_1054e6350(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1054e63e8;
  puStack_50 = &UNK_11085b7b0;
  lStack_48 = param_2;
  uStack_40 = param_4;
  uStack_38 = param_1;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 1054e65a4; end: 1054e6b83; -[SCFriendsFeedReadyLogger _logGrapheneAndBlizzardMetrics] */

void FUN_1054e65a4(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  if (*(long *)(param_1 + 0x20) != 1) {
    return;
  }
  puVar2 = PTR_PTR_1126ba070;
  _objc_opt_new(PTR_PTR_1126ba070);
  dVar10 = *(double *)(param_1 + 0x70);
  func_0x00010c169180();
  func_0x00010c1cfae0(puVar2);
  func_0x00010be59780(param_1);
  func_0x00010bf97820(*(undefined8 *)(param_1 + 0x28));
  uVar7 = *(ulong *)(param_1 + 0x80);
  dVar15 = 0.0;
  if (uVar7 < 2) {
    func_0x00010c18de00(puVar2);
    func_0x00010c19a060(puVar2);
    goto LAB_1054e69d8;
  }
  if (uVar7 == 3) {
    dVar15 = dVar10;
    func_0x00010c130320(*(undefined8 *)(param_1 + 0xd0));
    dVar15 = (dVar15 - dVar10) * 1000.0;
    dVar13 = *(double *)(param_1 + 0x88);
    dVar14 = *(double *)(param_1 + 0x70);
    func_0x00010c18de00(puVar2);
    func_0x00010c1cf9e0(puVar2);
    func_0x00010be53b60(param_1);
    if (0.0 < dVar15) {
      func_0x00010c19cfa0(puVar2);
    }
    if (0.0 < (dVar13 - dVar14) * 1000.0) {
      func_0x00010c210d60(puVar2);
      func_0x00010bdc8a80(param_1);
    }
    goto LAB_1054e69d8;
  }
  if (uVar7 != 2) goto LAB_1054e69d8;
  dVar15 = dVar10;
  func_0x00010c130320(*(undefined8 *)(param_1 + 0xd8));
  dVar14 = *(double *)(param_1 + 0x88);
  dVar13 = dVar14;
  if (dVar14 <= dVar15) {
    dVar13 = dVar15;
  }
  dVar15 = (dVar13 - dVar10) * 1000.0;
  dVar11 = *(double *)(param_1 + 0x70);
  dVar14 = dVar14 - dVar11;
  func_0x00010bf97820(*(undefined8 *)(param_1 + 0xa0));
  dVar12 = *(double *)(param_1 + 0x70);
  dVar16 = dVar11 - dVar12;
  func_0x00010c130320(*(undefined8 *)(param_1 + 0xd8));
  dVar13 = *(double *)(param_1 + 0x88);
  if (*(double *)(param_1 + 0x88) <= dVar11) {
    dVar13 = dVar11;
  }
  func_0x00010c18de00(puVar2);
  func_0x00010c1cf9e0(puVar2);
  func_0x00010be53b20(param_1);
  ppuVar3 = *(undefined ***)(param_1 + 0xa0);
  FUN_1054e5e7c(ppuVar3,*(undefined8 *)(param_1 + 0xa8));
  func_0x00010c210e60(puVar2);
  func_0x00010be52a20(param_1);
  ppuVar8 = *(undefined ***)(param_1 + 0xd0);
  ppuVar1 = *(undefined ***)(param_1 + 0xd8);
  _objc_retain(ppuVar8);
  _objc_retain(ppuVar1);
  if (ppuVar8 == ppuVar1) {
    _objc_release(ppuVar1);
    _objc_release(ppuVar8);
LAB_1054e6800:
    if (ppuVar3 == (undefined **)0xffffffffffffffff) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110dd2518;
    }
    else {
      func_0x00010ba746a0(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x0001064e9c90(*(undefined8 *)(param_1 + 0x100),ppuVar3,1);
    ppuVar8 = ppuVar3;
LAB_1054e6838:
    _objc_release(ppuVar8);
  }
  else {
    if (ppuVar1 == (undefined **)0x0) goto LAB_1054e6838;
    ppuVar4 = ppuVar8;
    func_0x00010c071ae0();
    _objc_release(ppuVar1);
    _objc_release(ppuVar8);
    if ((int)ppuVar4 != 0) goto LAB_1054e6800;
  }
  if (0.0 < dVar15) {
    func_0x00010c19cfa0(puVar2);
  }
  if (0.0 < dVar14 * 1000.0) {
    func_0x00010c210d60(puVar2);
    func_0x00010bdc8a80(param_1);
  }
  lVar9 = (long)((dVar12 - dVar13) * 1000.0);
  if (0 < (long)(dVar16 * 1000.0)) {
    func_0x00010c210ba0(puVar2);
  }
  if (0 < lVar9) {
    func_0x00010c210cc0(puVar2);
  }
  lVar5 = *(long *)(param_1 + 0xd8);
  func_0x00010c12f8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0xd8);
    func_0x00010c12f8c0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0df5e0();
    func_0x00010c1d0280(puVar2);
    func_0x00010c0df5c0(uVar6);
    func_0x00010c1d0260(puVar2);
    func_0x00010c0deac0(uVar6);
    func_0x00010c1cf920(puVar2);
    func_0x00010be53b80(param_1);
    _objc_release(uVar6);
  }
  if (lVar9 < 0) {
    func_0x00010be599a0(param_1);
  }
  else if (0 < lVar9) {
    func_0x00010be53ba0(param_1);
  }
  if ((*(long *)(param_1 + 0xc0) != 0) && (dVar11 < *(double *)(param_1 + 200))) {
    func_0x00010c210d00(puVar2);
  }
  if (0.0 < *(double *)(param_1 + 0xe8)) {
    func_0x00010c193ca0(puVar2);
  }
  func_0x00010c210b80(puVar2);
  func_0x00010c210c80(puVar2);
LAB_1054e69d8:
  if (0.0 < *(double *)(param_1 + 0x98)) {
    func_0x00010c210bc0(puVar2);
  }
  dVar13 = dVar10 - *(double *)(param_1 + 0x70);
  dVar14 = dVar13 * 1000.0;
  func_0x00010c130320(*(undefined8 *)(param_1 + 0xd0));
  dVar10 = (dVar13 - dVar10) * 1000.0;
  FUN_1054e5e7c(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  func_0x00010c19cf60(puVar2);
  func_0x00010be52a20(param_1);
  if (0.0 < dVar14) {
    func_0x00010c19cf80(puVar2);
  }
  if (0 < (long)dVar10) {
    func_0x00010c19cfc0(puVar2);
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    func_0x00010c19cfe0(puVar2);
  }
  lVar9 = *(long *)(param_1 + 0xd0);
  func_0x00010c12f8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar9 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c12f8c0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0df5e0();
    func_0x00010c1d0240(puVar2);
    func_0x00010c0df5c0(uVar6);
    func_0x00010c1d0220(puVar2);
    func_0x00010c0deac0(uVar6);
    func_0x00010c1cf900(puVar2);
    func_0x00010be53b40(param_1);
    _objc_release(uVar6);
  }
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar6);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xe0));
  func_0x00010be538e0((double)(long)dVar10,dVar15,param_1);
  *(undefined8 *)(param_1 + 0x20) = 2;
  func_0x00010be92ba0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054e6b84; end: 1054e6c37; -[SCFriendsFeedReadyLogger _setShortcutSessionId:shortcutLoadTimestamp:didPullDown:] */

void FUN_1054e6b84(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined8 uVar1;
  double dVar2;
  
  _objc_retain(param_4);
  if ((*(long *)(param_2 + 0x20) == 1) && (dVar2 = *(double *)(param_2 + 200), dVar2 == 0.0)) {
    func_0x00010bf97820(*(undefined8 *)(param_2 + 0x28));
    if ((0.0 < dVar2) && (*(long *)(param_2 + 0xd0) == 0)) {
      _objc_retain(param_4);
      uVar1 = *(undefined8 *)(param_2 + 0xb8);
      *(undefined8 *)(param_2 + 0xb8) = param_4;
      _objc_release(uVar1);
    }
    *(undefined8 *)(param_2 + 200) = param_1;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_2 + 0xc0);
    *(undefined8 *)(param_2 + 0xc0) = param_4;
    _objc_release(uVar1);
    if ((param_5 != 0) && (*(long *)(param_2 + 0x80) == 0)) {
      func_0x00010be52440(param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054e6c38; end: 1054e6c93; -[SCFriendsFeedReadyLogger _logDidPullDownBeforeSyncComplete] */

void FUN_1054e6c38(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2cb0;
  func_0x00010bf78d80(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054e6c94; end: 1054e6ccb; -[SCFriendsFeedReadyLogger _resetShortcutSession] */

void FUN_1054e6c94(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x20) == 1) {
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + 200) = 0;
  }
  return;
}



/* Entry: 1054e6ccc; end: 1054e6d57; -[SCFriendsFeedReadyLogger _logSwipeCountWithCount:] */

void FUN_1054e6ccc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1;
  func_0x00010beb7240();
  if ((int)lVar1 != 0) {
    if (*(long *)(param_1 + 0x100) != 0) {
      plVar4 = *(long **)(*(long *)(param_1 + 0x100) + 8);
      uStack_40 = 0;
      uStack_38 = 0;
      (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110927f30,&uStack_40,param_3);
      func_0x00010007e5dc(&stack0xffffffffffffffd8);
    }
    return;
  }
  puVar2 = PTR_PTR_1126b2cb0;
  func_0x00010bfabf20(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054e6d58; end: 1054e6e67; -[SCFriendsFeedReadyLogger _logSyncedNegativeRenderForSource:] */

void FUN_1054e6d58(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010beb7240();
  if ((int)lVar1 == 0) {
    puVar2 = PTR_PTR_1126b2cb0;
    func_0x00010bfabf40(PTR_PTR_1126b2cb0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010ba746a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c2ac460(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar4);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010ba746a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001064e7ea0(uVar4,param_3,&PTR____CFConstantStringClassReference_110de6798,1);
    puVar2 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054e6e68; end: 1054e6ef3; -[SCFriendsFeedReadyLogger _logFriendsFeedReadyConversationsSyncedCount:] */

void FUN_1054e6e68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1;
  func_0x00010beb7240();
  if ((int)lVar1 != 0) {
    if (*(long *)(param_1 + 0x100) != 0) {
      plVar4 = *(long **)(*(long *)(param_1 + 0x100) + 8);
      uStack_40 = 0;
      uStack_38 = 0;
      (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1109280c0,&uStack_40,param_3);
      func_0x00010007e5dc(&stack0xffffffffffffffd8);
    }
    return;
  }
  puVar2 = PTR_PTR_1126b2cb0;
  func_0x00010bfabfa0(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054e6ef4; end: 1054e7127; -[SCFriendsFeedReadyLogger _logFriendsFeedReadySyncedRenderContent:] */

/* WARNING: Removing unreachable block (ram,0x0001064e8594) */

void FUN_1054e6ef4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long unaff_x26;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  
  _objc_retain(param_3);
  lVar9 = param_1;
  func_0x00010beb7240();
  if ((int)lVar9 == 0) {
    puVar1 = PTR_PTR_1126b2cb0;
    func_0x00010bfac000(PTR_PTR_1126b2cb0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0df5e0(param_3);
    func_0x00010bef9180(uVar3);
    _objc_release(uVar3);
    puVar1 = PTR_PTR_1126b2cb0;
    func_0x00010bfabfe0(PTR_PTR_1126b2cb0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0df5c0(param_3);
    func_0x00010bef9180(uVar3);
    _objc_release(uVar3);
    puVar1 = PTR_PTR_1126b2cb0;
    func_0x00010bfabf80(PTR_PTR_1126b2cb0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0deac0(param_3);
    _objc_release(param_3);
    func_0x00010bef9180(uVar3);
    _objc_release(uVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x100);
  uVar3 = param_3;
  func_0x00010c0df5e0(param_3);
  ppuVar7 = &PTR____CFConstantStringClassReference_110de6798;
  func_0x0001064e8908(uVar11,&PTR____CFConstantStringClassReference_110de6798,uVar3);
  uVar11 = *(undefined8 *)(param_1 + 0x100);
  uVar3 = param_3;
  func_0x00010c0df5c0(param_3);
  func_0x0001064e8794(uVar11,&PTR____CFConstantStringClassReference_110de6798,uVar3);
  lVar10 = *(long *)(param_1 + 0x100);
  uVar3 = param_3;
  func_0x00010c0deac0(param_3);
  _objc_release(param_3);
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar7;
  _objc_retain(&PTR____CFConstantStringClassReference_110de6798);
  if (lVar10 != 0) {
    plVar12 = *(long **)(lVar10 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110de6798);
    ppuVar6 = ppuVar7;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110de6798);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110de6798);
    func_0x00010002b838(auStack_60,ppuVar6);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&stack0xffffffffffffffb8,1);
    ppuVar6 = (undefined **)&UNK_110928070;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110928070,&uStack_80,uVar3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (unaff_x26 < 0) {
      __ZdlPv(auStack_60[0]);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    _objc_release(&PTR____CFConstantStringClassReference_110de6798);
    _objc_release(&PTR____CFConstantStringClassReference_110de6798);
    ppuVar8 = ppuVar7;
    __Unwind_Resume();
    puStack_a8 = (undefined1 *)&uStack_c0;
    ppuStack_98 = &PTR____CFConstantStringClassReference_110de6798;
    puStack_88 = &LAB_1064e86a4;
    if (ppuVar8 != (undefined **)0x0) {
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      ppuStack_a0 = ppuVar7;
      puStack_90 = &stack0xfffffffffffffff0;
      (**(code **)(*(long *)ppuVar8[1] + 0x18))(ppuVar8[1],&UNK_1109280c0,&uStack_c0,ppuVar6);
      func_0x00010007e5dc(&puStack_a8);
    }
    return;
  }
  return;
}



/* Entry: 1054e7128; end: 1054e72a3; -[SCFriendsFeedReadyLogger _logFriendsFeedReadySyncedRenderWithDurationMs:entrySource:] */

void FUN_1054e7128(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010beb7240();
  if ((int)lVar1 == 0) {
    puVar2 = PTR_PTR_1126b2cb0;
    func_0x00010bfabf60(PTR_PTR_1126b2cb0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010ba746a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c2ac460(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(param_4);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar4);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x100);
    puVar2 = param_4;
    func_0x00010ba746a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001064e80d0(uVar4,puVar2,&PTR____CFConstantStringClassReference_110de6798,param_3);
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010ba746a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001064e8300(uVar4,param_4,&PTR____CFConstantStringClassReference_110de6798,1);
    puVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054e72a4; end: 1054e74d7; -[SCFriendsFeedReadyLogger _logFriendsFeedReadyFirstRenderContent:] */

/* WARNING: Removing unreachable block (ram,0x0001064e8594) */

void FUN_1054e72a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long unaff_x26;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  
  _objc_retain(param_3);
  lVar9 = param_1;
  func_0x00010beb7240();
  if ((int)lVar9 == 0) {
    puVar1 = PTR_PTR_1126b2cb0;
    func_0x00010bfac000(PTR_PTR_1126b2cb0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0df5e0(param_3);
    func_0x00010bef9180(uVar3);
    _objc_release(uVar3);
    puVar1 = PTR_PTR_1126b2cb0;
    func_0x00010bfabfe0(PTR_PTR_1126b2cb0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0df5c0(param_3);
    func_0x00010bef9180(uVar3);
    _objc_release(uVar3);
    puVar1 = PTR_PTR_1126b2cb0;
    func_0x00010bfabf80(PTR_PTR_1126b2cb0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0deac0(param_3);
    _objc_release(param_3);
    func_0x00010bef9180(uVar3);
    _objc_release(uVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x100);
  uVar3 = param_3;
  func_0x00010c0df5e0(param_3);
  ppuVar7 = &PTR____CFConstantStringClassReference_110de6778;
  func_0x0001064e8908(uVar11,&PTR____CFConstantStringClassReference_110de6778,uVar3);
  uVar11 = *(undefined8 *)(param_1 + 0x100);
  uVar3 = param_3;
  func_0x00010c0df5c0(param_3);
  func_0x0001064e8794(uVar11,&PTR____CFConstantStringClassReference_110de6778,uVar3);
  lVar10 = *(long *)(param_1 + 0x100);
  uVar3 = param_3;
  func_0x00010c0deac0(param_3);
  _objc_release(param_3);
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar7;
  _objc_retain(&PTR____CFConstantStringClassReference_110de6778);
  if (lVar10 != 0) {
    plVar12 = *(long **)(lVar10 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110de6778);
    ppuVar6 = ppuVar7;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110de6778);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110de6778);
    func_0x00010002b838(auStack_60,ppuVar6);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&stack0xffffffffffffffb8,1);
    ppuVar6 = (undefined **)&UNK_110928070;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110928070,&uStack_80,uVar3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (unaff_x26 < 0) {
      __ZdlPv(auStack_60[0]);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    _objc_release(&PTR____CFConstantStringClassReference_110de6778);
    _objc_release(&PTR____CFConstantStringClassReference_110de6778);
    ppuVar8 = ppuVar7;
    __Unwind_Resume();
    puStack_a8 = (undefined1 *)&uStack_c0;
    ppuStack_98 = &PTR____CFConstantStringClassReference_110de6778;
    puStack_88 = &LAB_1064e86a4;
    if (ppuVar8 != (undefined **)0x0) {
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      ppuStack_a0 = ppuVar7;
      puStack_90 = &stack0xfffffffffffffff0;
      (**(code **)(*(long *)ppuVar8[1] + 0x18))(ppuVar8[1],&UNK_1109280c0,&uStack_c0,ppuVar6);
      func_0x00010007e5dc(&puStack_a8);
    }
    return;
  }
  return;
}



/* Entry: 1054e74d8; end: 1054e78cf; -[SCFriendsFeedReadyLogger _logFirstRenderWithDurationMs:overallLatency:ffReadySyncType:firstFeedEntrySource:isStale:] */

void FUN_1054e74d8(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010beb7240();
  if ((int)lVar1 == 0) {
    if (param_1 < 0.0) {
      puVar2 = PTR_PTR_1126b2cb0;
      func_0x00010bfabf40(PTR_PTR_1126b2cb0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2ac460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      uVar6 = param_6;
      func_0x00010ba746a0(param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010c2ac460(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_3 + 0x10);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0();
      _objc_release(uVar6);
      _objc_release(puVar2);
    }
    if (0.0 < param_1) {
      puVar2 = PTR_PTR_1126b2cb0;
      func_0x00010bfabf60(PTR_PTR_1126b2cb0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2ac460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      func_0x00010ba746a0(param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010c2ac460(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(param_6);
      uVar6 = *(undefined8 *)(param_3 + 0x10);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbfe0();
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_3 + 0x10);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0();
      _objc_release(uVar6);
      _objc_release(puVar2);
    }
    if (0.0 < param_2) {
      puVar2 = PTR_PTR_1126b2cb0;
      func_0x00010bfabee0(PTR_PTR_1126b2cb0);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_3 + 0x10);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbfe0();
      _objc_release(uVar6);
      _objc_release(puVar2);
    }
    puVar2 = PTR_PTR_1126b2cb0;
    func_0x00010bfabee0(PTR_PTR_1126b2cb0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2ac460(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    param_5 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
  }
  else {
    if (param_1 < 0.0) {
      uVar5 = *(undefined8 *)(param_3 + 0x100);
      uVar6 = param_6;
      func_0x00010ba746a0(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001064e7ea0(uVar5,uVar6,&PTR____CFConstantStringClassReference_110de6778,1);
      _objc_release(uVar6);
    }
    if (0.0 < param_1) {
      uVar5 = *(undefined8 *)(param_3 + 0x100);
      uVar6 = param_6;
      func_0x00010ba746a0(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001064e80d0(uVar5,uVar6,&PTR____CFConstantStringClassReference_110de6778,(long)param_1
                         );
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_3 + 0x100);
      func_0x00010ba746a0(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001064e8300(uVar6,param_6,&PTR____CFConstantStringClassReference_110de6778,1);
      _objc_release(param_6);
    }
    if (0.0 < param_2) {
      func_0x0001064e7b3c(*(undefined8 *)(param_3 + 0x100),(long)param_2);
    }
    uVar6 = *(undefined8 *)(param_3 + 0x100);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001064e7bd4(uVar6,puVar4,param_5,1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1054e78d0; end: 1054e794b; -[SCFriendsFeedReadyLogger _logFriendsFeedReadySyncSuccessfulNoRender] */

void FUN_1054e78d0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  lVar1 = param_1;
  func_0x00010beb7240();
  if ((int)lVar1 != 0) {
    if (*(long *)(param_1 + 0x100) != 0) {
      plVar4 = *(long **)(*(long *)(param_1 + 0x100) + 8);
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1109280c0,&uStack_40,0);
      puStack_28 = (undefined1 *)&uStack_40;
      func_0x00010007e5dc(&puStack_28);
    }
    return;
  }
  puVar2 = PTR_PTR_1126b2cb0;
  func_0x00010bfabfa0(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054e794c; end: 1054e79d7; -[SCFriendsFeedReadyLogger _addTimerFriendsFeedReadySyncTimeMs:] */

void FUN_1054e794c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1;
  func_0x00010beb7240();
  if ((int)lVar1 != 0) {
    if (*(long *)(param_1 + 0x100) != 0) {
      plVar4 = *(long **)(*(long *)(param_1 + 0x100) + 8);
      uStack_40 = 0;
      uStack_38 = 0;
      (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110928110,&uStack_40,param_3);
      func_0x00010007e5dc(&stack0xffffffffffffffd8);
    }
    return;
  }
  puVar2 = PTR_PTR_1126b2cb0;
  func_0x00010bfabfc0(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054e79d8; end: 1054e7ac3; -[SCFriendsFeedReadyLogger _logBailedEventAtTime:] */

void FUN_1054e79d8(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  ulong uVar5;
  double dVar6;
  
  puVar1 = PTR_PTR_1126b2cb0;
  func_0x00010bfabf00(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(long *)(param_2 + 0x110) - 1;
  if (uVar5 < 5) {
    ppuVar4 = (undefined **)(&PTR_PTR_110891eb0)[uVar5];
  }
  else {
    ppuVar4 = &PTR____CFConstantStringClassReference_110dd34d8;
  }
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110de67f8,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  dVar6 = *(double *)(param_2 + 0x70);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1 - dVar6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054e7ac4; end: 1054e7d6b; -[SCFriendsFeedReadyLogger _logEntryParameters:entrySource:previousAttributedPage:isFirst:] */

void FUN_1054e7ac4(long param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  long param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if ((long)param_4 < 8) {
    if (param_4 == (undefined **)0xffffffffffffffff) {
      lVar4 = param_5;
      func_0x00010c067fc0();
      ppuVar1 = (undefined **)PTR_PTR_1126afdd8;
      if (lVar4 == 0) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110dd34d8;
      }
      else {
        func_0x00010c067fc0(param_5);
        func_0x00010bfc8740(ppuVar1);
        _objc_retainAutoreleasedReturnValue();
      }
LAB_1054e7d54:
      param_4 = &PTR____CFConstantStringClassReference_110dd2518;
      goto LAB_1054e7bd4;
    }
    if (param_4 == (undefined **)0x1) goto LAB_1054e7bac;
    if (param_4 != (undefined **)0x2) goto LAB_1054e7c58;
    ppuVar2 = param_3;
    func_0x00010c1127c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c067fc0();
    ppuVar1 = (undefined **)PTR_PTR_1126afdd8;
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dd34d8;
    }
    else {
      ppuVar3 = param_3;
      func_0x00010c1127c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x0001008781f8();
      func_0x00010bfc8740(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
    }
    _objc_release(ppuVar2);
  }
  else if ((long)param_4 - 9U < 5) {
LAB_1054e7bac:
    ppuVar1 = param_3;
    func_0x00010c11c460(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_4 == (undefined **)0x8) {
    ppuVar1 = (undefined **)0x8;
    func_0x00010ba746a0(8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
LAB_1054e7c58:
    ppuVar1 = param_3;
    func_0x00010c1127c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c067ec0();
    _objc_release(ppuVar1);
    if ((int)ppuVar2 == 0) {
      lVar4 = param_5;
      func_0x00010c067fc0();
      ppuVar1 = (undefined **)PTR_PTR_1126afdd8;
      if (lVar4 == 0) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110dd34d8;
      }
      else {
        func_0x00010c067fc0(param_5);
        func_0x00010bfc8740(ppuVar1);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      ppuVar2 = param_3;
      func_0x00010c1127c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar2;
      func_0x00010c067fc0();
      ppuVar1 = (undefined **)PTR_PTR_1126afdd8;
      if (ppuVar3 == (undefined **)0x0) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110dd34d8;
      }
      else {
        ppuVar3 = param_3;
        func_0x00010c1127c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067ec0();
        func_0x0001008781f8();
        func_0x00010bfc8740(ppuVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar3);
      }
      _objc_release(ppuVar2);
    }
    if (param_4 == (undefined **)0xffffffffffffffff) goto LAB_1054e7d54;
  }
  func_0x00010ba746a0(param_4);
  _objc_retainAutoreleasedReturnValue();
LAB_1054e7bd4:
  func_0x0001064e960c(*(undefined8 *)(param_1 + 0x100),param_6,param_4,ppuVar1,1);
  _objc_release(param_4);
  _objc_release(ppuVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054e7d6c; end: 1054e7d83; -[SCFriendsFeedReadyLogger _shouldUseGrapheneV2] */

void FUN_1054e7d6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x108),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de6878,0,0);
  return;
}



/* Entry: 1054e7d84; end: 1054e7e3b; -[SCFriendsFeedReadyLogger storiesCarouselDidRenderAtTime:] */

void FUN_1054e7d84(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1054e7e3c; end: 1054e7e6f;  */

void FUN_1054e7e3c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bec4360(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054e7e70; end: 1054e7f93; -[SCFriendsFeedReadyLogger _storiesCarouselDidRenderAtTime:] */

void FUN_1054e7e70(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  
  if ((*(long *)(param_2 + 0x40) == 1) &&
     (dVar4 = param_1, func_0x00010bf97820(*(undefined8 *)(param_2 + 0x48)), 0.0 < dVar4)) {
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    FUN_1054e5e7c(uVar1,*(undefined8 *)(param_2 + 0x50));
    func_0x00010ba746a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97820(*(undefined8 *)(param_2 + 0x48));
    func_0x0001064e9880(*(undefined8 *)(param_2 + 0x100),uVar1,1,(long)((param_1 - dVar4) * 1000.0))
    ;
    puVar2 = PTR_PTR_1126ba078;
    _objc_opt_new(PTR_PTR_1126ba078);
    func_0x00010c1b1000();
    func_0x00010c1f9500(puVar2);
    func_0x00010c1d8800(puVar2);
    func_0x00010c1f9160(puVar2);
    uVar3 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar3);
    *(undefined8 *)(param_2 + 0x40) = 2;
    func_0x00010be93e60(param_2);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1054e7f94; end: 1054e7feb; -[SCFriendsFeedReadyLogger storiesCarouselViewDidDisappear] */

void FUN_1054e7f94(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1054e7fec;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_38);
  return;
}



/* Entry: 1054e7fec; end: 1054e801b;  */

void FUN_1054e7fec(long param_1)

{
  func_0x00010be93e60(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40) = 2;
  return;
}



/* Entry: 1054e801c; end: 1054e80d3; -[SCFriendsFeedReadyLogger mapButtonDidRenderAtTime:] */

void FUN_1054e801c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1054e80d4; end: 1054e8107;  */

void FUN_1054e80d4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be5c9e0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054e8108; end: 1054e81b3; -[SCFriendsFeedReadyLogger _mapButtonDidRenderAtTime:] */

void FUN_1054e8108(double param_1,long param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  if ((*(long *)(param_2 + 0x58) == 1) &&
     (dVar2 = param_1, func_0x00010bf97820(*(undefined8 *)(param_2 + 0x60)), 0.0 < dVar2)) {
    uVar1 = *(undefined8 *)(param_2 + 0x60);
    FUN_1054e5e7c(uVar1,*(undefined8 *)(param_2 + 0x68));
    func_0x00010ba746a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97820(*(undefined8 *)(param_2 + 0x60));
    func_0x0001064e9a88(*(undefined8 *)(param_2 + 0x100),uVar1,1,(long)((param_1 - dVar2) * 1000.0))
    ;
    *(undefined8 *)(param_2 + 0x58) = 2;
    func_0x00010be93360(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1054e81b4; end: 1054e820b; -[SCFriendsFeedReadyLogger mapButtonDidTransitionFromFriendsFeedPage] */

void FUN_1054e81b4(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1054e820c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_38);
  return;
}



/* Entry: 1054e820c; end: 1054e823b;  */

void FUN_1054e820c(long param_1)

{
  func_0x00010be93360(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58) = 2;
  return;
}



/* Entry: 1054e823c; end: 1054e8343; -[SCFriendsFeedReadyLogger .cxx_destruct] */

void FUN_1054e823c(long param_1)

{
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054e8344; end: 1054e834f; -[SCGhostToFeedGrapheneLogger configureForWarmStart] */

void FUN_1054e8344(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 1054e8350; end: 1054e8493; -[SCGhostToFeedGrapheneLogger logGhostToFeedWithDurationMs:success:] */

void FUN_1054e8350(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ba080;
  func_0x00010bfcc760(PTR_PTR_1126ba080);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100440e90(uVar4,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1054e8494; end: 1054e86ef; -[SCGhostToFeedGrapheneLogger logStep:duration:success:updateCount:] */

void FUN_1054e8494(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = (undefined *)0x0;
  if (param_3 < 4) {
    if (param_3 < 2) {
      if (param_3 == 0) {
        puVar4 = PTR_PTR_1126ba080;
        func_0x00010bfbc760(PTR_PTR_1126ba080);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (param_3 == 1) {
        puVar4 = PTR_PTR_1126ba080;
        func_0x00010bfbc740(PTR_PTR_1126ba080);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      if (param_3 == 2) {
        puVar4 = PTR_PTR_1126ba080;
        func_0x00010bfbc7c0(PTR_PTR_1126ba080);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1054e86d4;
      }
      if (param_3 == 3) {
        puVar4 = PTR_PTR_1126ba080;
        func_0x00010bfbc7a0(PTR_PTR_1126ba080);
        _objc_retainAutoreleasedReturnValue();
      }
    }
  }
  else if (param_3 < 6) {
    if (param_3 == 4) {
      puVar4 = PTR_PTR_1126ba080;
      func_0x00010bfbc7e0(PTR_PTR_1126ba080);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_3 == 5) {
      puVar4 = PTR_PTR_1126ba080;
      func_0x00010bfbc820(PTR_PTR_1126ba080);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_3 == 6) {
    puVar4 = PTR_PTR_1126ba080;
    func_0x00010bfbc800(PTR_PTR_1126ba080);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 7) {
    puVar4 = PTR_PTR_1126ba080;
    func_0x00010bfbc780(PTR_PTR_1126ba080);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100440e90(uVar3,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010c2ac460(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar3);
LAB_1054e86d4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1054e86f0; end: 1054e883f; -[SCGhostToFeedGrapheneLogger logEntryPointBeginDuration:success:] */

void FUN_1054e86f0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if ((*(long *)(param_1 + 0x20) == 0) && (*(long *)(param_1 + 0x18) == 0)) {
    puVar1 = PTR_PTR_1126ba080;
    func_0x00010bfbc5a0(PTR_PTR_1126ba080);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x000100440e90(uVar4,*(undefined8 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2ac460(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(uVar4);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2ac460(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 1054e8840; end: 1054e898f; -[SCGhostToFeedGrapheneLogger logBeginObservationTime:success:] */

void FUN_1054e8840(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if ((*(long *)(param_1 + 0x20) == 0) && (*(long *)(param_1 + 0x18) == 0)) {
    puVar1 = PTR_PTR_1126ba080;
    func_0x00010bfbc540(PTR_PTR_1126ba080);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x000100440e90(uVar4,*(undefined8 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2ac460(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(uVar4);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2ac460(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 1054e8990; end: 1054e8a57; -[SCGhostToFeedGrapheneLogger logPropagateChangesToUIDispatchLatency:] */

void FUN_1054e8990(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ba080;
  func_0x00010bfbc720(PTR_PTR_1126ba080);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100440e90(uVar3,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054e8a58; end: 1054e8bf3; -[SCGhostToFeedGrapheneLogger logTailEndLatency:lastLoggedStep:success:] */

void FUN_1054e8a58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ba080;
  _objc_retain(param_3);
  func_0x00010bfbc8a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100440e90(uVar4,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar4);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1054e8bf4; end: 1054e8c97; -[SCGhostToFeedGrapheneLogger logDuplicateStartForSource:] */

void FUN_1054e8bf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ba080;
  _objc_retain(param_3);
  func_0x00010bfbc560(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054e8c98; end: 1054e8d3b; -[SCGhostToFeedGrapheneLogger logDuplicateStep:] */

void FUN_1054e8c98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ba080;
  _objc_retain(param_3);
  func_0x00010bfbc580(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054e8d3c; end: 1054e8ebf; -[SCGhostToFeedGrapheneLogger logFailureReason:lastLoggedStep:duration:] */

void FUN_1054e8d3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ba080;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfbc5c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100440e90(uVar3,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar3);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054e8ec0; end: 1054e8fcf; -[SCGhostToFeedGrapheneLogger logFeedViewAppeared:] */

void FUN_1054e8ec0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ba080;
  func_0x00010bfbc8c0(PTR_PTR_1126ba080);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100440e90(uVar4,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1054e8fd0; end: 1054e8fff; -[SCGhostToFeedGrapheneLogger .cxx_destruct] */

void FUN_1054e8fd0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054e9000; end: 1054e90b7;  */

undefined1 FUN_1054e9000(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c0800(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1054e90b8; end: 1054e90cb;  */

void FUN_1054e90b8(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1054e90cc; end: 1054e9183;  */

undefined1 FUN_1054e90cc(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c0800(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1054e9184; end: 1054e9193;  */

void FUN_1054e9184(long param_1,undefined1 param_2)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 1054e9194; end: 1054e926f;  */

void FUN_1054e9194(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1054e9270;
  uStack_30 = 0x1054e9280;
  uStack_28 = 0;
  func_0x00010c0c0800(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054e9270; end: 1054e9287;  */

void FUN_1054e9270(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1054e9288; end: 1054e92bf;  */

void FUN_1054e9288(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054e92c0; end: 1054e9317; -[SCGhostToFeedLogger configureForWarmStart] */

void FUN_1054e92c0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1054e9318;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 1054e9318; end: 1054e932f;  */

void FUN_1054e9318(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bf47010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),PTR_s_configureForWarmStart_1125af5a8
            );
  return;
}



/* Entry: 1054e9330; end: 1054e9357; -[SCGhostToFeedLogger ghostToFeedResult] */

void FUN_1054e9330(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054e9358; end: 1054e937f; -[SCGhostToFeedLogger ghostToFeedLifecycleEvent] */

void FUN_1054e9358(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054e9380; end: 1054e9383; -[SCGhostToFeedLogger _endTracingLegacyG2FFStepsIfNeeded] */

void FUN_1054e9380(void)

{
  return;
}



/* Entry: 1054e9384; end: 1054e946b; -[SCGhostToFeedLogger logPropagateChangesToUIDispatchLatency:fetchContexts:] */

void FUN_1054e9384(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 1054e946c; end: 1054e9583;  */

void FUN_1054e946c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 unaff_x21;
  undefined8 uVar6;
  undefined8 unaff_x22;
  long lVar7;
  long lVar8;
  undefined1 auStack_168 [8];
  undefined1 uStack_160;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  uVar3 = SUB81(&uStack_120,0);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar5);
  puVar4 = auStack_d8;
  lVar1 = lVar5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar5);
        }
        unaff_x22 = *(undefined8 *)(lStack_118 + lVar8 * 8);
        lVar2 = param_1 + 0x28;
        _objc_loadWeakRetained(lVar2);
        func_0x00010be57600(*(undefined8 *)(param_1 + 0x30));
        _objc_release(lVar2);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      puVar4 = auStack_d8;
      lVar1 = lVar5;
      uVar3 = (char)&uStack_120;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  lVar1 = lVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_1054e9584;
  uStack_150 = unaff_x22;
  uStack_148 = unaff_x21;
  lStack_140 = lVar5;
  lStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  _objc_initWeak(auStack_158,lVar1);
  uVar6 = *(undefined8 *)(lVar1 + 0x10);
  _objc_retain(puVar4);
  _objc_copyWeak(auStack_168,auStack_158);
  uStack_160 = uVar3;
  func_0x00010c0f7fc0(uVar6);
  _objc_destroyWeak(auStack_168);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_158);
  _objc_release(puVar4);
  return;
}



/* Entry: 1054e9584; end: 1054e9663; -[SCGhostToFeedLogger logFeedViewAppeared:fetchContexts:] */

void FUN_1054e9584(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1054e9664; end: 1054e977b;  */

void FUN_1054e9664(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 unaff_x21;
  undefined8 uVar6;
  undefined8 unaff_x22;
  long lVar7;
  long lVar8;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar5);
  puVar4 = auStack_d8;
  lVar1 = lVar5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar5);
        }
        unaff_x22 = *(undefined8 *)(lStack_118 + lVar8 * 8);
        lVar2 = param_1 + 0x28;
        _objc_loadWeakRetained(lVar2);
        func_0x00010be533c0();
        _objc_release(lVar2);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      puVar4 = auStack_d8;
      lVar1 = lVar5;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  lVar1 = lVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_1054e977c;
  uStack_150 = unaff_x22;
  uStack_148 = unaff_x21;
  lStack_140 = lVar5;
  lStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  _objc_initWeak(auStack_158,lVar1);
  uVar6 = *(undefined8 *)(lVar1 + 0x10);
  _objc_retain(puVar4);
  _objc_copyWeak(auStack_160,auStack_158);
  _objc_retain(puVar3);
  func_0x00010c0f7fc0(uVar6);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_160);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_158);
  _objc_release(puVar4);
  _objc_release(puVar3);
  return;
}



/* Entry: 1054e977c; end: 1054e987b; -[SCGhostToFeedLogger logEndWithEndResult:fetchContexts:] */

void FUN_1054e977c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054e987c; end: 1054e9993;  */

void FUN_1054e987c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar5);
        }
        lVar2 = param_1 + 0x30;
        _objc_loadWeakRetained(lVar2);
        func_0x00010be529c0();
        _objc_release(lVar2);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar5;
      puVar4 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  if (*(long *)(lVar5 + 0x68) != 1) goto LAB_1054e9a38;
  puVar6 = *(undefined1 **)(lVar5 + 0x40);
  _objc_retain(puVar6);
  _objc_retain(puVar4);
  if ((undefined8 *)puVar6 == puVar4) {
    _objc_release(puVar4);
    _objc_release(puVar6);
  }
  else {
    if (puVar4 == (undefined8 *)0x0) {
      _objc_release(puVar6);
      goto LAB_1054e9a38;
    }
    puVar3 = puVar6;
    func_0x00010c071ae0(puVar6,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar6);
    if ((int)puVar3 == 0) goto LAB_1054e9a38;
  }
  func_0x00010c0ad280(uVar9,*(undefined8 *)(lVar5 + 0x30));
LAB_1054e9a38:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1054e9994; end: 1054e9a4f; -[SCGhostToFeedLogger _logPropagateChangesToUIDispatchLatency:fetchContext:] */

void FUN_1054e9994(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  if (*(long *)(param_2 + 0x68) != 1) goto LAB_1054e9a38;
  lVar2 = *(long *)(param_2 + 0x40);
  _objc_retain(lVar2);
  _objc_retain(param_4);
  if (lVar2 == param_4) {
    _objc_release(param_4);
    _objc_release(lVar2);
  }
  else {
    if (param_4 == 0) {
      _objc_release(lVar2);
      goto LAB_1054e9a38;
    }
    lVar1 = lVar2;
    func_0x00010c071ae0(lVar2,param_3,param_4);
    _objc_release(param_4);
    _objc_release(lVar2);
    if ((int)lVar1 == 0) goto LAB_1054e9a38;
  }
  func_0x00010c0ad280(param_1,*(undefined8 *)(param_2 + 0x30));
LAB_1054e9a38:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054e9a50; end: 1054ea297; -[SCGhostToFeedLogger _logEndWithEndResult:fetchContext:] */

void FUN_1054e9a50(double param_1,long param_2,undefined8 param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_2 + 0x68) != 1) goto LAB_1054ea1c8;
  lVar14 = *(long *)(param_2 + 0x40);
  _objc_retain(lVar14);
  _objc_retain(param_5);
  if (lVar14 == param_5) {
    _objc_release(param_5);
    _objc_release(lVar14);
  }
  else {
    if (param_5 == 0) {
      _objc_release(lVar14);
      goto LAB_1054ea1c8;
    }
    lVar2 = lVar14;
    func_0x00010c071ae0();
    _objc_release(param_5);
    _objc_release(lVar14);
    if ((int)lVar2 == 0) goto LAB_1054ea1c8;
  }
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x2020000000;
  uStack_118 = 0;
  puStack_148 = &uStack_150;
  uStack_150 = 0;
  uStack_140 = 0x2020000000;
  uStack_138 = 0;
  func_0x00010c0c0800(param_4);
  FUN_1054e9000();
  uVar3 = *(ulong *)(param_2 + 0x80);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain();
  _objc_release(uVar3);
  uVar6 = *(ulong *)(param_2 + 0x80);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar4);
  uVar5 = uVar6;
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain();
  _objc_release(uVar6);
  puVar4 = PTR_PTR_1126ba098;
  _objc_opt_new();
  func_0x00010c206c40();
  func_0x00010c2270c0(puVar4);
  func_0x00010c2151e0(puVar4);
  func_0x00010c08fa60(uVar5);
  func_0x00010c227080(puVar4);
  func_0x00010c1ce740(puVar4);
  func_0x00010c226be0(puVar4);
  uVar3 = param_4;
  FUN_1054e9000();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_4;
    FUN_1054e9194(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19a060(puVar4);
    _objc_release(uVar3);
  }
  func_0x00010c214f80(puVar4);
  dVar17 = (double)puStack_128[3];
  dVar19 = *(double *)(param_2 + 0x48);
  func_0x00010c1b92c0(puVar4);
  FUN_1054e90cc(param_4);
  func_0x00010c1a5f40(puVar4);
  dVar18 = *(double *)(param_2 + 0x50);
  dVar20 = dVar18 - *(double *)(param_2 + 0x48);
  if (0.0 < dVar20) {
    uVar11 = *(undefined8 *)(param_2 + 0x30);
    FUN_1054e9000(param_4);
    func_0x00010c0a5900(dVar20,uVar11);
    dVar18 = *(double *)(param_2 + 0x50);
  }
  dVar18 = *(double *)(param_2 + 0x58) - dVar18;
  if (0.0 < dVar18) {
    uVar11 = *(undefined8 *)(param_2 + 0x30);
    FUN_1054e9000(param_4);
    func_0x00010c0a1980(dVar18,uVar11);
  }
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  dVar18 = *(double *)(param_2 + 0x48);
  dVar20 = 0.0;
  lVar12 = *(long *)(param_2 + 0x70);
  _objc_retain(lVar12);
  lVar14 = lVar12;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar14 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar12);
      }
      uVar16 = *(undefined8 *)(lVar15 * 8);
      uVar11 = uVar16;
      func_0x00010c2536e0(uVar16);
      func_0x000100629d00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2537e0(uVar16);
      dVar20 = dVar20 - dVar18;
      dVar18 = dVar20 * 1000.0;
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar18,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar7);
      func_0x00010c2537e0(uVar16);
      uVar13 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010c2536e0(uVar16);
      FUN_1054e9000(param_4);
      func_0x00010c284ac0(uVar16);
      func_0x00010c0b0980(uVar13);
      _objc_release(puVar8);
      _objc_release(uVar11);
      lVar15 = lVar15 + 1;
    } while (lVar14 != lVar15);
    lVar14 = lVar12;
    func_0x00010bf52a60();
  }
  _objc_release(lVar12);
  dVar18 = (double)puStack_148[3];
  dVar20 = (double)puStack_128[3];
  uVar13 = *(undefined8 *)(param_2 + 0x70);
  func_0x00010c089820(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar13;
  func_0x00010c2536e0();
  func_0x000100629d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  dVar18 = dVar18 - dVar20;
  func_0x00010c0b1740(*(undefined8 *)(param_2 + 0x30));
  puVar8 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  puVar9 = puVar7;
  func_0x00010bf51e00(puVar7);
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  _objc_release(puVar9);
  puVar9 = puVar8;
  func_0x00010c08fa60();
  if (puVar9 != (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    func_0x00010c008340();
    puVar10 = puVar9;
    func_0x00010c08fa60();
    if (puVar10 != (undefined *)0x0) {
      func_0x00010c207ee0(puVar4);
    }
    _objc_release(puVar9);
  }
  uVar3 = param_4;
  FUN_1054e9000();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_4;
    FUN_1054e9194(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_2 + 0x70);
    func_0x00010c089820(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar16;
    func_0x00010c2536e0();
    func_0x000100629d00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar16);
    uVar16 = *(undefined8 *)(param_2 + 0x70);
    func_0x00010c089820(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2537e0();
    dVar20 = *(double *)(param_2 + 0x48);
    _objc_release(uVar16);
    func_0x00010c0a5f20(dVar18 - dVar20,*(undefined8 *)(param_2 + 0x30));
    _objc_release(uVar13);
    _objc_release(uVar3);
  }
  uVar13 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar13);
  param_1 = (double)(long)((dVar17 - dVar19) * 1000.0);
  func_0x00010c0a78c0(*(undefined8 *)(param_2 + 0x30));
  func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x98));
  uVar13 = *(undefined8 *)(param_2 + 0xa0);
  puVar9 = PTR_PTR_1126ba0a0;
  func_0x00010bf75660(PTR_PTR_1126ba0a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar13);
  _objc_release(puVar9);
  *(undefined8 *)(param_2 + 0x68) = 2;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  func_0x00010be09f20();
  _objc_release(puVar8);
  _objc_release(0);
  _objc_release(uVar11);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_150,8);
  __Block_object_dispose(&uStack_130,8);
LAB_1054ea1c8:
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_150,8);
    __Block_object_dispose(&uStack_130,8);
    __Unwind_Resume();
    uVar11 = *(undefined8 *)(*(long *)(param_4 + 0x20) + 0x70);
    dVar17 = param_1;
    func_0x00010c089820(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2537e0();
    *(double *)(*(long *)(*(long *)(param_4 + 0x28) + 8) + 0x18) = dVar17;
    _objc_release(uVar11);
    *(double *)(*(long *)(*(long *)(param_4 + 0x30) + 8) + 0x18) = param_1;
    return;
  }
  return;
}



/* Entry: 1054ea298; end: 1054ea2fb;  */

void FUN_1054ea298(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x70);
  uVar2 = param_1;
  func_0x00010c089820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2537e0();
  *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
  *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x18) = param_1;
  return;
}



/* Entry: 1054ea2fc; end: 1054ea317;  */

void FUN_1054ea2fc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) = param_1;
  *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18) = param_1;
  return;
}



/* Entry: 1054ea318; end: 1054ea3d3; -[SCGhostToFeedLogger _logFeedViewAppeared:fetchContext:] */

void FUN_1054ea318(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x68) != 1) goto LAB_1054ea3bc;
  lVar2 = *(long *)(param_1 + 0x40);
  _objc_retain(lVar2);
  _objc_retain(param_4);
  if (lVar2 == param_4) {
    _objc_release(param_4);
    _objc_release(lVar2);
  }
  else {
    if (param_4 == 0) {
      _objc_release(lVar2);
      goto LAB_1054ea3bc;
    }
    lVar1 = lVar2;
    func_0x00010c071ae0(lVar2,param_2,param_4);
    _objc_release(param_4);
    _objc_release(lVar2);
    if ((int)lVar1 == 0) goto LAB_1054ea3bc;
  }
  func_0x00010c0a64c0(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
LAB_1054ea3bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054ea3d4; end: 1054ea46b; -[SCGhostToFeedLogger markUserEnteredFeedFromSource:] */

void FUN_1054ea3d4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1054ea46c;
  puStack_50 = &UNK_110844b80;
  uStack_48 = param_4;
  lStack_40 = param_2;
  uStack_38 = param_1;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 1054ea46c; end: 1054ea47b;  */

void FUN_1054ea46c(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x60) = *(undefined8 *)(param_1 + 0x30);
  return;
}



/* Entry: 1054ea47c; end: 1054ea50b; -[SCGhostToFeedLogger markUserExitedFeedFromSource:] */

void FUN_1054ea47c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1054ea50c;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 1054ea50c; end: 1054ea517;  */

void FUN_1054ea50c(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x60) = 0;
  return;
}



/* Entry: 1054ea518; end: 1054ea5af; -[SCGhostToFeedLogger didAppSessionEndWithCompletion:] */

void FUN_1054ea518(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1054ea5b0;
  puStack_50 = &UNK_11085b7b0;
  lStack_48 = param_2;
  uStack_40 = param_4;
  uStack_38 = param_1;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 1054ea5b0; end: 1054ea637;  */

void FUN_1054ea5b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar2 + 0x68) == 1) {
    puVar1 = PTR_PTR_1126ba0a8;
    func_0x00010bfa01a0(*(undefined8 *)(param_1 + 0x30),PTR_PTR_1126ba0a8,param_2,
                        &PTR____CFConstantStringClassReference_110de67d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be529c0();
    _objc_release(puVar1);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  *(undefined8 *)(lVar2 + 0x68) = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001054ea628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1054ea638; end: 1054ea6f3;  */

void FUN_1054ea638(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c0b80(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1054ea6f4; end: 1054ea6ff;  */

void FUN_1054ea6f4(void)

{
  return;
}



/* Entry: 1054ea700; end: 1054ea76f;  */

void FUN_1054ea700(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c11c460(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bedc400(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054ea770; end: 1054ea7ff; -[SCGhostToFeedLogger _updateNotificationType:] */

void FUN_1054ea770(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1054ea800;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 1054ea800; end: 1054ea817;  */

void FUN_1054ea800(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x80),
             PTR_s_setObject_forKeyedSubscript__112651bb8,*(undefined8 *)(param_1 + 0x20),
             &PTR____CFConstantStringClassReference_110de6ad8);
  return;
}



/* Entry: 1054ea818; end: 1054ea8cb; -[SCGhostToFeedLogger .cxx_destruct] */

void FUN_1054ea818(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054ea8cc; end: 1054ea8e7;  */

void FUN_1054ea8cc(void)

{
  _objc_opt_new(PTR_PTR_1126ba0b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054ea8e8; end: 1054ea927;  */

void FUN_1054ea8e8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bea0aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1054ea928; end: 1054ea9a7; -[SCFriendsFeedLoggingServicesEntryPoint _friendsFeedGraphene] */

void FUN_1054ea928(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010043c7a8();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb9f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1054ea9a8; end: 1054ea9e7;  */

void FUN_1054ea9a8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be19880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1054ea9e8; end: 1054eaa77; -[SCFriendsFeedLoggingServicesEntryPoint _sendToFeedLogger] */

void FUN_1054ea9e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
  puVar2 = PTR_PTR_1126ba0d8;
  _objc_alloc(PTR_PTR_1126ba0d8);
  puVar3 = PTR_PTR_1126ba0e0;
  _objc_opt_new(PTR_PTR_1126ba0e0);
  func_0x00010c034cc0(puVar2,param_2,puVar1,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054eaa78; end: 1054eac83; -[SCFriendsFeedLoggingServicesEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054eaa78(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  lVar6 = (long)_DAT_112724c68;
  uVar2 = *(ulong *)(param_1 + lVar6);
  func_0x00010c06f880();
  if ((uVar2 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + _DAT_112724c6c);
    func_0x00010c06f880();
    if ((uVar2 & 1) == 0) {
      puStack_58 = PTR_PTR_1126e8b88;
      lStack_60 = param_1;
      _objc_msgSendSuper2(&lStack_60,PTR_s_end_1125c29d0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1054eac68;
    }
  }
  puVar3 = PTR_PTR_1126afc98;
  func_0x00010bf0c040();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_112724c7c;
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar3;
  _objc_release();
  _dispatch_group_create();
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c06f880();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  if (iVar1 != 0) {
    _dispatch_group_enter(uVar5);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = puVar3;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1054eac84;
    puStack_70 = &UNK_110842e18;
    _objc_retain(uVar5);
    uStack_68 = uVar5;
    func_0x00010bf72400(uVar4);
    _objc_release(uVar4);
    _objc_release(uStack_68);
  }
  lVar6 = (long)_DAT_112724c6c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    _dispatch_group_enter(uVar5);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = puVar3;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x1054eac8c;
    puStack_98 = &UNK_110842e18;
    _objc_retain(uVar5);
    uStack_90 = uVar5;
    func_0x00010bf72400(uVar4);
    _objc_release(uVar4);
    _objc_release(uStack_90);
  }
  uVar4 = 0x11;
  func_0x0001000819a8(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = puVar3;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x1054eac94;
  puStack_c0 = &UNK_110842e18;
  lStack_b8 = param_1;
  func_0x000100bc0718(uVar5,uVar4,&puStack_d8);
  _objc_release(uVar4);
  _objc_release(uVar5);
  func_0x00010c117720(*(undefined8 *)(param_1 + lVar7));
  _objc_retainAutoreleasedReturnValue();
LAB_1054eac68:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054eac84; end: 1054eaca7;  */

void FUN_1054eac84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1054eaca8; end: 1054ead6b; -[SCFriendsFeedLoggingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054eaca8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112724c70,0);
  _objc_destroyWeak(param_1 + _DAT_112724c94);
  _objc_destroyWeak(param_1 + _DAT_112724c90);
  _objc_destroyWeak(param_1 + _DAT_112724c74);
  _objc_destroyWeak(param_1 + _DAT_112724c8c);
  _objc_destroyWeak(param_1 + _DAT_112724c88);
  _objc_destroyWeak(param_1 + _DAT_112724c84);
  _objc_destroyWeak(param_1 + _DAT_112724c80);
  _objc_storeStrong(param_1 + _DAT_112724c7c,0);
  _objc_storeStrong(param_1 + _DAT_112724c6c,0);
  _objc_storeStrong(param_1 + _DAT_112724c78,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112724c68,0);
  return;
}



/* Entry: 1054ead6c; end: 1054eae0f; -[SCSendToFeedLogger initWithPerformer:graphene:] */

undefined1 *
FUN_1054ead6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8b90;
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



/* Entry: 1054eae10; end: 1054eae67; -[SCSendToFeedLogger configureSendFlowStart] */

void FUN_1054eae10(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1054eae68;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 1054eae68; end: 1054eae6f;  */

void FUN_1054eae68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec04f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__startLoggingFlow_11258dae0);
  return;
}



/* Entry: 1054eae70; end: 1054eaed7; -[SCSendToFeedLogger logSendToDidPressStart] */

void FUN_1054eae70(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _CACurrentMediaTime();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1054eaed8;
  puStack_38 = &UNK_110848c48;
  lStack_30 = param_2;
  uStack_28 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 8),param_3,&puStack_50);
  return;
}



/* Entry: 1054eaed8; end: 1054eaee7;  */

void FUN_1054eaed8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be58690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             PTR_s__logSendToDidPressStart__112573b40);
  return;
}



/* Entry: 1054eaee8; end: 1054eaf4f; -[SCSendToFeedLogger logNavigatedToFriendsFeed] */

void FUN_1054eaee8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _CACurrentMediaTime();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1054eaf50;
  puStack_38 = &UNK_110848c48;
  lStack_30 = param_2;
  uStack_28 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 8),param_3,&puStack_50);
  return;
}



/* Entry: 1054eaf50; end: 1054eaf5f;  */

void FUN_1054eaf50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be563f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             PTR_s__logNavigatedToFriendsFeed__112573298);
  return;
}



/* Entry: 1054eaf60; end: 1054eafb7; -[SCSendToFeedLogger cancelLoggingFlow] */

void FUN_1054eaf60(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1054eafb8;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 1054eafb8; end: 1054eafbf;  */

void FUN_1054eafb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddaa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__cancelLoggingFlow_112554428);
  return;
}



/* Entry: 1054eafc0; end: 1054eb023; -[SCSendToFeedLogger _startLoggingFlow] */

void FUN_1054eafc0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  lVar1 = param_1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar1;
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1054eb024; end: 1054eb14b; -[SCSendToFeedLogger _logSendToDidPressStart:] */

void FUN_1054eb024(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar1);
    FUN_1054ebf90(*(undefined8 *)(param_1 + 0x10),1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00();
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(uVar2);
    func_0x00010c0f7fe0(0x4024000000000000,uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 1054eb14c; end: 1054eb17f;  */

void FUN_1054eb14c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010becc160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054eb180; end: 1054eb223; -[SCSendToFeedLogger _logNavigatedToFriendsFeed:] */

void FUN_1054eb180(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  if (*(char *)(param_2 + 0x18) == '\x01') {
    lVar1 = *(long *)(param_2 + 0x28);
    func_0x00010c296f60(lVar1,param_3,&PTR____CFConstantStringClassReference_110de6958);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x28));
      _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bde2e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__completeLoggingFlow_112556530);
      return;
    }
  }
  return;
}



/* Entry: 1054eb224; end: 1054eb25f; -[SCSendToFeedLogger _cancelLoggingFlow] */

void FUN_1054eb224(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_1054ec008(*(undefined8 *)(param_1 + 0x10),1);
                    /* WARNING: Could not recover jumptable at 0x00010be93310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetLoggingFlow_112582660);
    return;
  }
  return;
}



/* Entry: 1054eb260; end: 1054eb32f; -[SCSendToFeedLogger _completeLoggingFlow] */

void FUN_1054eb260(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c0e00e0(uVar1,param_3,&PTR____CFConstantStringClassReference_110de6958);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  dVar2 = param_1;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar1);
  if ((param_1 != 0.0) && (dVar2 != 0.0)) {
    dVar2 = dVar2 - param_1;
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    FUN_1054ec170(*(undefined8 *)(param_2 + 0x10),(long)(dVar2 * 1000.0));
    FUN_1054ec0f8(*(undefined8 *)(param_2 + 0x10),1);
                    /* WARNING: Could not recover jumptable at 0x00010be93310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__resetLoggingFlow_112582660);
    return;
  }
  return;
}



/* Entry: 1054eb330; end: 1054eb37f; -[SCSendToFeedLogger _timeoutFlowWithIdentifier:] */

void FUN_1054eb330(long param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c0720c0();
    if (iVar1 != 0) {
      FUN_1054ec080(*(undefined8 *)(param_1 + 0x10),1);
                    /* WARNING: Could not recover jumptable at 0x00010be93310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetLoggingFlow_112582660);
      return;
    }
  }
  return;
}


