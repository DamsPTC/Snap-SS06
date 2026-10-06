/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afc8e6c; end: 10afc8edf; -[SCFriendsFeedScreenshotMessage hash] */

undefined8 * FUN_10afc8e6c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afc8f74;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(char *)((long)puVar2 + 8) != param_3[8] || (*(char *)((long)puVar2 + 9) != param_3[9]))))
    {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10afc8f74;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar4 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10afc8f74;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10afc8f74:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10afc8ee0; end: 10afc8f8f; -[SCFriendsFeedScreenshotMessage isEqual:] */

long FUN_10afc8ee0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afc8f74;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
        (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
      lVar3 = 0;
      goto LAB_10afc8f74;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10afc8f74;
    }
  }
  lVar3 = 1;
LAB_10afc8f74:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afc8f90; end: 10afc8f97; -[SCFriendsFeedScreenshotMessage actionPerformer] */

undefined8 FUN_10afc8f90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afc8f98; end: 10afc8f9f; -[SCFriendsFeedScreenshotMessage isReceivedUnread] */

undefined1 FUN_10afc8f98(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afc8fa0; end: 10afc8fa7; -[SCFriendsFeedScreenshotMessage isScreenRecording] */

undefined1 FUN_10afc8fa0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10afc8fa8; end: 10afc8fb3; -[SCFriendsFeedScreenshotMessage .cxx_destruct] */

void FUN_10afc8fa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afc8fb4; end: 10afc8fd7; -[SCFriendsFeedSnapMessage copyWithZone:] */

undefined8 FUN_10afc8fb4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afc8fd8; end: 10afc9077; -[SCFriendsFeedSnapMessage hash] */

undefined8 * FUN_10afc8fd8(long param_1,undefined8 param_2,undefined8 *param_3)

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
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x30);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  puVar3 = &uStack_58;
  uStack_40 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afc9148:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afc9154;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) && (puVar3[6] == param_3[6])))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[5];
            if (puVar6 != (undefined8 *)param_3[5]) {
              func_0x00010c071ae0();
              goto LAB_10afc9154;
            }
            goto LAB_10afc9148;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afc9154:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afc9078; end: 10afc916f; -[SCFriendsFeedSnapMessage isEqual:] */

long FUN_10afc9078(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afc9148:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afc9154;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10afc9154;
            }
            goto LAB_10afc9148;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afc9154:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afc9170; end: 10afc9177; -[SCFriendsFeedSnapMessage comboSnapItemInfo] */

undefined8 FUN_10afc9170(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afc9178; end: 10afc917f; -[SCFriendsFeedSnapMessage snapMediaTypeInfo] */

undefined8 FUN_10afc9178(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afc9180; end: 10afc9187; -[SCFriendsFeedSnapMessage actionPerformer] */

undefined8 FUN_10afc9180(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afc9188; end: 10afc918f; -[SCFriendsFeedSnapMessage isInfiniteSnap] */

undefined1 FUN_10afc9188(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afc9190; end: 10afc9197; -[SCFriendsFeedSnapMessage unreadSnapCount] */

undefined8 FUN_10afc9190(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afc9198; end: 10afc91df; -[SCFriendsFeedSnapMessage .cxx_destruct] */

void FUN_10afc9198(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afc91e0; end: 10afc9203; -[SCFriendsFeedStoriesSummaryInfo copyWithZone:] */

undefined8 FUN_10afc91e0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afc9204; end: 10afc9307; -[SCFriendsFeedStoriesSummaryInfo hash] */

undefined8 * FUN_10afc9204(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar4 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x18);
  uStack_60 = *(undefined8 *)(param_1 + 0x20);
  lStack_68 = -lVar6;
  if (-1 < lVar6) {
    lStack_68 = lVar6;
  }
  uStack_70 = uVar3;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x28);
  lStack_58 = -lVar6;
  if (-1 < lVar6) {
    lStack_58 = lVar6;
  }
  uStack_50 = (ulong)*(byte *)(param_1 + 8);
  uVar7 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_48 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar7 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  lVar6 = *(long *)(param_1 + 0x48);
  lStack_30 = -lVar6;
  if (-1 < lVar6) {
    lStack_30 = lVar6;
  }
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10afc9464:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afc9470;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((((*(long *)((long)puVar4 + 0x18) == *(long *)(param_3 + 0x18) &&
          (*(long *)((long)puVar4 + 0x28) == *(long *)(param_3 + 0x28))) &&
         (*(char *)((long)puVar4 + 8) == param_3[8])) &&
        (*(long *)((long)puVar4 + 0x48) == *(long *)(param_3 + 0x48))))) {
      dVar10 = ABS(*(double *)((long)puVar4 + 0x30) - *(double *)(param_3 + 0x30));
      dVar9 = ABS(*(double *)((long)puVar4 + 0x30) + *(double *)(param_3 + 0x30)) *
              2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar2 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar2 = dVar10 < dVar9;
      }
      if (bVar2) {
        dVar10 = ABS(*(double *)((long)puVar4 + 0x38) - *(double *)(param_3 + 0x38));
        dVar9 = ABS(*(double *)((long)puVar4 + 0x38) + *(double *)(param_3 + 0x38)) *
                2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar10) && (bVar2 = false, !NAN(dVar10) && !NAN(dVar9))) {
          bVar2 = dVar10 < dVar9;
        }
        if (bVar2) {
          dVar9 = ABS(*(double *)((long)puVar4 + 0x40) - *(double *)(param_3 + 0x40));
          if (((dVar9 < 2.2250738585072014e-308) ||
              (dVar9 < ABS(*(double *)((long)puVar4 + 0x40) + *(double *)(param_3 + 0x40)) *
                       2.220446049250313e-16)) &&
             ((lVar6 = *(long *)((long)puVar4 + 0x10), lVar6 == *(long *)(param_3 + 0x10) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
            puVar8 = *(undefined1 **)((long)puVar4 + 0x20);
            if (puVar8 != *(undefined1 **)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10afc9470;
            }
            goto LAB_10afc9464;
          }
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10afc9470:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 10afc9308; end: 10afc948b; -[SCFriendsFeedStoriesSummaryInfo isEqual:] */

long FUN_10afc9308(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afc9464:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afc9470;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
          (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
      dVar5 = ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) * 2.220446049250313e-16
      ;
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
          if (((dVar5 < 2.2250738585072014e-308) ||
              (dVar5 < ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) *
                       2.220446049250313e-16)) &&
             ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
            lVar4 = *(long *)(param_1 + 0x20);
            if (lVar4 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10afc9470;
            }
            goto LAB_10afc9464;
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_10afc9470:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10afc948c; end: 10afc9493; -[SCFriendsFeedStoriesSummaryInfo storyId] */

undefined8 FUN_10afc948c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afc9494; end: 10afc949b; -[SCFriendsFeedStoriesSummaryInfo type] */

undefined8 FUN_10afc9494(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afc949c; end: 10afc94a3; -[SCFriendsFeedStoriesSummaryInfo thumbnail] */

undefined8 FUN_10afc949c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afc94a4; end: 10afc94ab; -[SCFriendsFeedStoriesSummaryInfo numActiveStories] */

undefined8 FUN_10afc94a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afc94ac; end: 10afc94b3; -[SCFriendsFeedStoriesSummaryInfo hasUnviewedStories] */

undefined1 FUN_10afc94ac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afc94b4; end: 10afc94bb; -[SCFriendsFeedStoriesSummaryInfo mostRecentStoryTimestamp] */

undefined8 FUN_10afc94b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afc94bc; end: 10afc94c3; -[SCFriendsFeedStoriesSummaryInfo mostRecentUnviewedTimestamp] */

undefined8 FUN_10afc94bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afc94c4; end: 10afc94cb; -[SCFriendsFeedStoriesSummaryInfo mostRecentViewedTimestamp] */

undefined8 FUN_10afc94c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10afc94cc; end: 10afc94d3; -[SCFriendsFeedStoriesSummaryInfo storyContentType] */

undefined8 FUN_10afc94cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10afc94d4; end: 10afc9503; -[SCFriendsFeedStoriesSummaryInfo .cxx_destruct] */

void FUN_10afc94d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afc9504; end: 10afc958b; -[SCFriendsFeedTypingContent initWithParticipants:typingAnimationState:] */

undefined1 *
FUN_10afc9504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127039f0;
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



/* Entry: 10afc958c; end: 10afc95af; -[SCFriendsFeedTypingContent copyWithZone:] */

undefined8 FUN_10afc958c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afc95b0; end: 10afc961b; -[SCFriendsFeedTypingContent hash] */

undefined8 * FUN_10afc95b0(long param_1,undefined8 param_2,undefined8 *param_3)

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
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afc96a0;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10afc96a0;
    }
    puVar4 = (undefined8 *)puVar2[1];
    if (puVar4 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_10afc96a0;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10afc96a0:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10afc961c; end: 10afc96bb; -[SCFriendsFeedTypingContent isEqual:] */

long FUN_10afc961c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afc96a0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_10afc96a0;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10afc96a0;
    }
  }
  lVar3 = 1;
LAB_10afc96a0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afc96bc; end: 10afc96c3; -[SCFriendsFeedTypingContent participants] */

undefined8 FUN_10afc96bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afc96c4; end: 10afc96cb; -[SCFriendsFeedTypingContent typingAnimationState] */

undefined8 FUN_10afc96c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afc96cc; end: 10afc96d7; -[SCFriendsFeedTypingContent .cxx_destruct] */

void FUN_10afc96cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afc96d8; end: 10afc9783; -[SCFriendsFeedActiveGameSession initWithSessionId:lens:] */

undefined1 *
FUN_10afc96d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127039f8;
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



/* Entry: 10afc9784; end: 10afc97a7; -[SCFriendsFeedActiveGameSession copyWithZone:] */

undefined8 FUN_10afc9784(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afc97a8; end: 10afc981b; -[SCFriendsFeedActiveGameSession hash] */

undefined8 * FUN_10afc97a8(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10afc989c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afc98a8;
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
          goto LAB_10afc98a8;
        }
        goto LAB_10afc989c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afc98a8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afc981c; end: 10afc98c3; -[SCFriendsFeedActiveGameSession isEqual:] */

long FUN_10afc981c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afc989c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afc98a8;
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
          goto LAB_10afc98a8;
        }
        goto LAB_10afc989c;
      }
    }
    lVar3 = 0;
  }
LAB_10afc98a8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afc98c4; end: 10afc98cb; -[SCFriendsFeedActiveGameSession sessionId] */

undefined8 FUN_10afc98c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afc98cc; end: 10afc98d3; -[SCFriendsFeedActiveGameSession lens] */

undefined8 FUN_10afc98cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afc98d4; end: 10afc9903; -[SCFriendsFeedActiveGameSession .cxx_destruct] */

void FUN_10afc98d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afc9904; end: 10afc99af; -[SCFriendsFeedGamingContent initWithParticipants:activeGameSession:] */

undefined1 *
FUN_10afc9904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112703a00;
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



/* Entry: 10afc99b0; end: 10afc99d3; -[SCFriendsFeedGamingContent copyWithZone:] */

undefined8 FUN_10afc99b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afc99d4; end: 10afc9a47; -[SCFriendsFeedGamingContent hash] */

undefined8 * FUN_10afc99d4(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10afc9ac8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afc9ad4;
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
          goto LAB_10afc9ad4;
        }
        goto LAB_10afc9ac8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afc9ad4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afc9a48; end: 10afc9aef; -[SCFriendsFeedGamingContent isEqual:] */

long FUN_10afc9a48(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afc9ac8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afc9ad4;
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
          goto LAB_10afc9ad4;
        }
        goto LAB_10afc9ac8;
      }
    }
    lVar3 = 0;
  }
LAB_10afc9ad4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afc9af0; end: 10afc9af7; -[SCFriendsFeedGamingContent participants] */

undefined8 FUN_10afc9af0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afc9af8; end: 10afc9aff; -[SCFriendsFeedGamingContent activeGameSession] */

undefined8 FUN_10afc9af8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afc9b00; end: 10afc9b2f; -[SCFriendsFeedGamingContent .cxx_destruct] */

void FUN_10afc9b00(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afc9b30; end: 10afc9be3; -[SCFriendsFeedGamingParticipantInfo initWithUserId:lensId:sessionId:] */

undefined1 *
FUN_10afc9b30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112703a08;
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



/* Entry: 10afc9be4; end: 10afc9c07; -[SCFriendsFeedGamingParticipantInfo copyWithZone:] */

undefined8 FUN_10afc9be4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afc9c08; end: 10afc9c87; -[SCFriendsFeedGamingParticipantInfo hash] */

undefined8 * FUN_10afc9c08(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_10afc9d18:
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afc9d24;
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
          goto LAB_10afc9d24;
        }
        goto LAB_10afc9d18;
      }
    }
    puVar5 = (undefined1 *)0x0;
  }
LAB_10afc9d24:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 10afc9c88; end: 10afc9d3f; -[SCFriendsFeedGamingParticipantInfo isEqual:] */

long FUN_10afc9c88(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afc9d18:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afc9d24;
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
          goto LAB_10afc9d24;
        }
        goto LAB_10afc9d18;
      }
    }
    lVar3 = 0;
  }
LAB_10afc9d24:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afc9d40; end: 10afc9d47; -[SCFriendsFeedGamingParticipantInfo userId] */

undefined8 FUN_10afc9d40(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afc9d48; end: 10afc9d4f; -[SCFriendsFeedGamingParticipantInfo lensId] */

undefined8 FUN_10afc9d48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afc9d50; end: 10afc9d57; -[SCFriendsFeedGamingParticipantInfo sessionId] */

undefined8 FUN_10afc9d50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afc9d58; end: 10afc9d87; -[SCFriendsFeedGamingParticipantInfo .cxx_destruct] */

void FUN_10afc9d58(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afc9d88; end: 10afc9eab; -[SCFriendsFeedLiveGamingParams initWithConversationId:lens:sessionId:isGroupConversation:userId:gameParticipantCount:] */

undefined1 *
FUN_10afc9d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

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
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_112703a10;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afc9eac; end: 10afc9ecf; -[SCFriendsFeedLiveGamingParams copyWithZone:] */

undefined8 FUN_10afc9eac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afc9ed0; end: 10afc9f6b; -[SCFriendsFeedLiveGamingParams hash] */

undefined8 * FUN_10afc9ed0(long param_1,undefined8 param_2,undefined8 *param_3)

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
  ulong uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x30);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  puVar3 = &uStack_58;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afca03c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afca048;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) && (puVar3[6] == param_3[6])))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[5];
            if (puVar6 != (undefined8 *)param_3[5]) {
              func_0x00010c071ae0();
              goto LAB_10afca048;
            }
            goto LAB_10afca03c;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afca048:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afc9f6c; end: 10afca063; -[SCFriendsFeedLiveGamingParams isEqual:] */

long FUN_10afc9f6c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afca03c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afca048;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10afca048;
            }
            goto LAB_10afca03c;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afca048:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afca064; end: 10afca06b; -[SCFriendsFeedLiveGamingParams conversationId] */

undefined8 FUN_10afca064(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afca06c; end: 10afca073; -[SCFriendsFeedLiveGamingParams lens] */

undefined8 FUN_10afca06c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afca074; end: 10afca07b; -[SCFriendsFeedLiveGamingParams sessionId] */

undefined8 FUN_10afca074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afca07c; end: 10afca083; -[SCFriendsFeedLiveGamingParams isGroupConversation] */

undefined1 FUN_10afca07c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afca084; end: 10afca08b; -[SCFriendsFeedLiveGamingParams userId] */

undefined8 FUN_10afca084(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afca08c; end: 10afca093; -[SCFriendsFeedLiveGamingParams gameParticipantCount] */

undefined8 FUN_10afca08c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afca094; end: 10afca0db; -[SCFriendsFeedLiveGamingParams .cxx_destruct] */

void FUN_10afca094(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afca0dc; end: 10afca153; -[SCFriendsFeedPresentContent initWithParticipants:] */

undefined1 * FUN_10afca0dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112703a18;
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



/* Entry: 10afca154; end: 10afca177; -[SCFriendsFeedPresentContent copyWithZone:] */

undefined8 FUN_10afca154(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afca178; end: 10afca17f; -[SCFriendsFeedPresentContent hash] */

void FUN_10afca178(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10afca180; end: 10afca20f; -[SCFriendsFeedPresentContent isEqual:] */

long FUN_10afca180(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afca1f4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10afca1f4;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10afca1f4;
    }
  }
  lVar3 = 1;
LAB_10afca1f4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afca210; end: 10afca217; -[SCFriendsFeedPresentContent participants] */

undefined8 FUN_10afca210(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afca218; end: 10afca223; -[SCFriendsFeedPresentContent .cxx_destruct] */

void FUN_10afca218(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afca224; end: 10afca29b; -[SCFriendsFeedPresentParticipantInfo initWithUserId:] */

undefined1 * FUN_10afca224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112703a20;
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



/* Entry: 10afca29c; end: 10afca2bf; -[SCFriendsFeedPresentParticipantInfo copyWithZone:] */

undefined8 FUN_10afca29c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afca2c0; end: 10afca2c7; -[SCFriendsFeedPresentParticipantInfo hash] */

void FUN_10afca2c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10afca2c8; end: 10afca357; -[SCFriendsFeedPresentParticipantInfo isEqual:] */

long FUN_10afca2c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afca33c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10afca33c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10afca33c;
    }
  }
  lVar3 = 1;
LAB_10afca33c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afca358; end: 10afca35f; -[SCFriendsFeedPresentParticipantInfo userId] */

undefined8 FUN_10afca358(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afca360; end: 10afca36b; -[SCFriendsFeedPresentParticipantInfo .cxx_destruct] */

void FUN_10afca360(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afca36c; end: 10afca3f7; -[SCFriendsFeedTypingParticipantInfo initWithUserId:typingState:typingActivityType:] */

undefined1 *
FUN_10afca36c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112703a28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afca3f8; end: 10afca41b; -[SCFriendsFeedTypingParticipantInfo copyWithZone:] */

undefined8 FUN_10afca3f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afca41c; end: 10afca48b; -[SCFriendsFeedTypingParticipantInfo hash] */

undefined8 * FUN_10afca41c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afca520;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10afca520;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 8);
    if (puVar4 != *(undefined1 **)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10afca520;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10afca520:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10afca48c; end: 10afca53b; -[SCFriendsFeedTypingParticipantInfo isEqual:] */

long FUN_10afca48c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afca520;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_10afca520;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10afca520;
    }
  }
  lVar3 = 1;
LAB_10afca520:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afca53c; end: 10afca543; -[SCFriendsFeedTypingParticipantInfo userId] */

undefined8 FUN_10afca53c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afca544; end: 10afca54b; -[SCFriendsFeedTypingParticipantInfo typingState] */

undefined8 FUN_10afca544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afca54c; end: 10afca553; -[SCFriendsFeedTypingParticipantInfo typingActivityType] */

undefined8 FUN_10afca54c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afca554; end: 10afca55f; -[SCFriendsFeedTypingParticipantInfo .cxx_destruct] */

void FUN_10afca554(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afca560; end: 10afca567; -[SCFriendsFeedSnapMediaTypeInfo hash] */

undefined1 FUN_10afca560(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afca568; end: 10afca5ef; -[SCFriendsFeedSnapMediaTypeInfo isEqual:] */

bool FUN_10afca568(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 10afca5f0; end: 10afca5f7; -[SCFriendsFeedSnapMediaTypeInfo hasSound] */

undefined1 FUN_10afca5f0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afca5f8; end: 10afca72b; -[SCFriendsFeedActiveMessageData hash] */

undefined8 * FUN_10afca5f8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ushort uVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  ulong uVar11;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_d8 = uVar2;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x28);
  uStack_a0 = *(undefined8 *)(param_1 + 0x30);
  lStack_c8 = -lVar6;
  if (-1 < lVar6) {
    lStack_c8 = lVar6;
  }
  uVar9 = *(undefined4 *)(param_1 + 8);
  uVar10 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar9 >> 0x18),
                                           (uint6)(byte)((uint)uVar9 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar9) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar9 >> 8),(short)uVar10);
  uVar11 = CONCAT44((int)(uVar10 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar10 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar10 >> 0x20),(int)uVar11)) &
           0xff01ff01ffffffff;
  uVar8 = (ushort)(uVar10 >> 0x30);
  uStack_c0 = (ulong)uVar1 & 0xff;
  uStack_b8 = uVar10 >> 0x10 & 0xff;
  uStack_b0 = (ulong)CONCAT24(uVar8,(uint)(ushort)(uVar10 >> 0x20)) & 0xffffffff;
  uStack_a8 = (ulong)uVar8;
  uStack_d0 = uVar3;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfde980();
  uStack_90 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_88 = (ulong)*(byte *)(param_1 + 0xd);
  lStack_80 = (long)*(int *)(param_1 + 0x14);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = uVar3;
  func_0x00010bfde980();
  uStack_68 = (ulong)*(byte *)(param_1 + 0xe);
  uStack_60 = (ulong)*(byte *)(param_1 + 0xf);
  uStack_58 = (ulong)*(byte *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x60);
  uStack_38 = *(undefined8 *)(param_1 + 0x68);
  lStack_40 = -lVar6;
  if (-1 < lVar6) {
    lStack_40 = lVar6;
  }
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bfde980();
  puVar4 = &uStack_d8;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar4,0x16);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10afca92c:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afca938;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((((ulong)puVar5 & 1) != 0) &&
         ((((puVar4[5] == param_3[5] && (*(char *)(puVar4 + 1) == *(char *)(param_3 + 1))) &&
           (*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9))) &&
          ((*(char *)((long)puVar4 + 10) == *(char *)((long)param_3 + 10) &&
           (*(char *)((long)puVar4 + 0xb) == *(char *)((long)param_3 + 0xb))))))) &&
        (*(char *)((long)puVar4 + 0xc) == *(char *)((long)param_3 + 0xc))) &&
       (((*(char *)((long)puVar4 + 0xd) == *(char *)((long)param_3 + 0xd) &&
         (*(int *)((long)puVar4 + 0x14) == *(int *)((long)param_3 + 0x14))) &&
        ((*(char *)((long)puVar4 + 0xe) == *(char *)((long)param_3 + 0xe) &&
         (((*(char *)((long)puVar4 + 0xf) == *(char *)((long)param_3 + 0xf) &&
           (*(char *)(puVar4 + 2) == *(char *)(param_3 + 2))) && (puVar4[0xc] == param_3[0xc])))))))
       ) {
      lVar6 = puVar4[3];
      if ((lVar6 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = puVar4[4];
        if ((lVar6 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = puVar4[6];
          if ((lVar6 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = puVar4[7];
            if ((lVar6 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              lVar6 = puVar4[8];
              if ((lVar6 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                lVar6 = puVar4[9];
                if ((lVar6 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                  lVar6 = puVar4[10];
                  if ((lVar6 == param_3[10]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                    lVar6 = puVar4[0xb];
                    if ((lVar6 == param_3[0xb]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                      lVar6 = puVar4[0xd];
                      if ((lVar6 == param_3[0xd]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                        puVar7 = (undefined8 *)puVar4[0xe];
                        if (puVar7 != (undefined8 *)param_3[0xe]) {
                          func_0x00010c071ae0();
                          goto LAB_10afca938;
                        }
                        goto LAB_10afca92c;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_10afca938:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 10afca72c; end: 10afca953; -[SCFriendsFeedActiveMessageData isEqual:] */

long FUN_10afca72c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afca92c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afca938;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
            (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
          ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
           (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))))) &&
        (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))) &&
       (((*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd) &&
         (*(int *)(param_1 + 0x14) == *(int *)(param_3 + 0x14))) &&
        ((*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe) &&
         (((*(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf) &&
           (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))) &&
          (*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60))))))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x38);
            if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x40);
              if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x48);
                if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x50);
                  if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x58);
                    if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x68);
                      if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x70);
                        if (lVar3 != *(long *)(param_3 + 0x70)) {
                          func_0x00010c071ae0();
                          goto LAB_10afca938;
                        }
                        goto LAB_10afca92c;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afca938:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afca954; end: 10afca95b; -[SCFriendsFeedActiveMessageData messageState] */

undefined8 FUN_10afca954(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afca95c; end: 10afca963; -[SCFriendsFeedActiveMessageData isConversationPending] */

undefined1 FUN_10afca95c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10afca964; end: 10afca96b; -[SCFriendsFeedActiveMessageData displayTimestamp] */

undefined8 FUN_10afca964(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afca96c; end: 10afca973; -[SCFriendsFeedActiveMessageData hasMessagesToReplay] */

undefined1 FUN_10afca96c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10afca974; end: 10afca97b; -[SCFriendsFeedActiveMessageData hasMessagesToReplayAgain] */

undefined1 FUN_10afca974(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 10afca97c; end: 10afca983; -[SCFriendsFeedActiveMessageData numMessagesToSave] */

undefined4 FUN_10afca97c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 10afca984; end: 10afca98b; -[SCFriendsFeedActiveMessageData messages] */

undefined8 FUN_10afca984(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}


