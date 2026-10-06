/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b650398; end: 10b65039f; -[SCSnapchatterStreakMetadata expirationServerTimestamp] */

undefined8 FUN_10b650398(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6503a0; end: 10b6503ab; -[SCSnapchatterStreakMetadata .cxx_destruct] */

void FUN_10b6503a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6503ac; end: 10b6503cf; -[SCSnapchattersBestFriendMetadata copyWithZone:] */

undefined8 FUN_10b6503ac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6503d0; end: 10b65046b; -[SCSnapchattersBestFriendMetadata hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_10b6503d0(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  ulong *puVar6;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = (ulong)*(uint *)(param_1 + _DAT_1127911a4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127911a8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127911ac);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127911b0);
  uStack_38 = uVar2;
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
LAB_10b650534:
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10b650540;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (*(int *)((long)puVar3 + (long)_DAT_1127911a4) ==
        *(int *)((long)param_3 + (long)_DAT_1127911a4))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_1127911a8);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_1127911a8)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_1127911ac);
        if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_1127911ac)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(ulong **)((long)puVar3 + (long)_DAT_1127911b0);
          if (puVar6 != *(ulong **)((long)param_3 + (long)_DAT_1127911b0)) {
            func_0x00010c071ae0();
            goto LAB_10b650540;
          }
          goto LAB_10b650534;
        }
      }
    }
    puVar6 = (ulong *)0x0;
  }
LAB_10b650540:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b65046c; end: 10b65055b; -[SCSnapchattersBestFriendMetadata isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b65046c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b650534:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b650540;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (*(int *)(param_1 + (long)_DAT_1127911a4) == *(int *)(param_3 + (long)_DAT_1127911a4))) {
      lVar3 = *(long *)(param_1 + (long)_DAT_1127911a8);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127911a8)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_1127911ac);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127911ac)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_1127911b0);
          if (lVar3 != *(long *)(param_3 + (long)_DAT_1127911b0)) {
            func_0x00010c071ae0();
            goto LAB_10b650540;
          }
          goto LAB_10b650534;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b650540:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b65055c; end: 10b65070b; -[SCSnapchattersContactNonSnapchatter initWithPhoneNumber:displayName:lastInteractionTimestamp:lastShareDestination:lastShareTimestamp:isDisabledForSMSInvite:score:photo:hashedPhoneNumber:subtext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b65055c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
             undefined1 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puVar1 = &uStack_90;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_88 = PTR_PTR_1127074e8;
  uStack_90 = param_4;
  _objc_msgSendSuper2(&uStack_90,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127911b4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127911b4) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127911b8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127911b8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127911bc) = param_1;
    *(undefined4 *)((long)puVar1 + (long)_DAT_1127911c0) = param_8;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127911c4) = param_2;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127911c8) = param_9;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127911cc) = param_3;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127911d0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127911d0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127911d4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127911d4) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127911d8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127911d8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10b65070c; end: 10b65072f; -[SCSnapchattersContactNonSnapchatter copyWithZone:] */

undefined8 FUN_10b65070c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b650730; end: 10b65085f; -[SCSnapchattersContactNonSnapchatter hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b650730(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127911b4);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127911b8);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + _DAT_1127911bc) + *(ulong *)(param_1 + _DAT_1127911bc) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_68 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uStack_60 = (ulong)*(uint *)(param_1 + _DAT_1127911c0);
  uVar7 = ~*(ulong *)(param_1 + _DAT_1127911c4) + *(ulong *)(param_1 + _DAT_1127911c4) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_58 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + _DAT_1127911cc) + *(ulong *)(param_1 + _DAT_1127911cc) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_50 = (ulong)*(byte *)(param_1 + _DAT_1127911c8);
  uStack_48 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127911d0);
  uStack_70 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127911d4);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127911d8);
  uStack_38 = uVar3;
  func_0x00010bfde980();
  puVar4 = &uStack_78;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar4,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b650a34:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b650a40;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((*(int *)((long)puVar4 + (long)_DAT_1127911c0) ==
         *(int *)((long)param_3 + (long)_DAT_1127911c0) &&
        (*(char *)((long)puVar4 + (long)_DAT_1127911c8) ==
         *(char *)((long)param_3 + (long)_DAT_1127911c8))))) {
      dVar9 = *(double *)((long)puVar4 + (long)_DAT_1127911bc);
      dVar10 = *(double *)((long)param_3 + (long)_DAT_1127911bc);
      dVar11 = ABS(dVar9 - dVar10);
      dVar9 = ABS(dVar9 + dVar10) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar9))) {
        bVar1 = dVar11 < dVar9;
      }
      if (bVar1) {
        dVar9 = *(double *)((long)puVar4 + (long)_DAT_1127911c4);
        dVar10 = *(double *)((long)param_3 + (long)_DAT_1127911c4);
        dVar11 = ABS(dVar9 - dVar10);
        dVar9 = ABS(dVar9 + dVar10) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar9))) {
          bVar1 = dVar11 < dVar9;
        }
        if (bVar1) {
          dVar9 = *(double *)((long)puVar4 + (long)_DAT_1127911cc);
          dVar10 = *(double *)((long)param_3 + (long)_DAT_1127911cc);
          dVar11 = ABS(dVar9 - dVar10);
          dVar9 = ABS(dVar9 + dVar10) * 2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar9))) {
            bVar1 = dVar11 < dVar9;
          }
          if ((((bVar1) &&
               ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_1127911b4),
                lVar6 == *(long *)((long)param_3 + (long)_DAT_1127911b4) ||
                (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
              ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_1127911b8),
               lVar6 == *(long *)((long)param_3 + (long)_DAT_1127911b8) ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
             (((lVar6 = *(long *)((long)puVar4 + (long)_DAT_1127911d0),
               lVar6 == *(long *)((long)param_3 + (long)_DAT_1127911d0) ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
              ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_1127911d4),
               lVar6 == *(long *)((long)param_3 + (long)_DAT_1127911d4) ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)))))) {
            puVar8 = *(undefined8 **)((long)puVar4 + (long)_DAT_1127911d8);
            if (puVar8 != *(undefined8 **)((long)param_3 + (long)_DAT_1127911d8)) {
              func_0x00010c071ae0();
              goto LAB_10b650a40;
            }
            goto LAB_10b650a34;
          }
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10b650a40:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10b650860; end: 10b650a5b; -[SCSnapchattersContactNonSnapchatter isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b650860(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b650a34:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b650a40;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(int *)(param_1 + (long)_DAT_1127911c0) == *(int *)(param_3 + (long)_DAT_1127911c0) &&
        (*(char *)(param_1 + (long)_DAT_1127911c8) == *(char *)(param_3 + (long)_DAT_1127911c8)))))
    {
      dVar5 = *(double *)(param_1 + (long)_DAT_1127911bc);
      dVar6 = *(double *)(param_3 + (long)_DAT_1127911bc);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if (bVar1) {
        dVar5 = *(double *)(param_1 + (long)_DAT_1127911c4);
        dVar6 = *(double *)(param_3 + (long)_DAT_1127911c4);
        dVar7 = ABS(dVar5 - dVar6);
        dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
          bVar1 = dVar7 < dVar5;
        }
        if (bVar1) {
          dVar5 = *(double *)(param_1 + (long)_DAT_1127911cc);
          dVar6 = *(double *)(param_3 + (long)_DAT_1127911cc);
          dVar7 = ABS(dVar5 - dVar6);
          dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
            bVar1 = dVar7 < dVar5;
          }
          if ((((bVar1) &&
               ((lVar4 = *(long *)(param_1 + (long)_DAT_1127911b4),
                lVar4 == *(long *)(param_3 + (long)_DAT_1127911b4) ||
                (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
              ((lVar4 = *(long *)(param_1 + (long)_DAT_1127911b8),
               lVar4 == *(long *)(param_3 + (long)_DAT_1127911b8) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
             (((lVar4 = *(long *)(param_1 + (long)_DAT_1127911d0),
               lVar4 == *(long *)(param_3 + (long)_DAT_1127911d0) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
              ((lVar4 = *(long *)(param_1 + (long)_DAT_1127911d4),
               lVar4 == *(long *)(param_3 + (long)_DAT_1127911d4) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
            lVar4 = *(long *)(param_1 + (long)_DAT_1127911d8);
            if (lVar4 != *(long *)(param_3 + (long)_DAT_1127911d8)) {
              func_0x00010c071ae0();
              goto LAB_10b650a40;
            }
            goto LAB_10b650a34;
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b650a40:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b650a5c; end: 10b650a6b; -[SCSnapchattersContactNonSnapchatter phoneNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b650a5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127911b4);
}



/* Entry: 10b650a6c; end: 10b650a7b; -[SCSnapchattersContactNonSnapchatter displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b650a6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127911b8);
}



/* Entry: 10b650a7c; end: 10b650a8b; -[SCSnapchattersContactNonSnapchatter lastInteractionTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b650a7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127911bc);
}



/* Entry: 10b650a8c; end: 10b650a9b; -[SCSnapchattersContactNonSnapchatter lastShareDestination] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10b650a8c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_1127911c0);
}



/* Entry: 10b650a9c; end: 10b650aab; -[SCSnapchattersContactNonSnapchatter lastShareTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b650a9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127911c4);
}



/* Entry: 10b650aac; end: 10b650abb; -[SCSnapchattersContactNonSnapchatter isDisabledForSMSInvite] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b650aac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127911c8);
}



/* Entry: 10b650abc; end: 10b650acb; -[SCSnapchattersContactNonSnapchatter score] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b650abc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127911cc);
}



/* Entry: 10b650acc; end: 10b650adb; -[SCSnapchattersContactNonSnapchatter photo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b650acc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127911d0);
}



/* Entry: 10b650adc; end: 10b650aeb; -[SCSnapchattersContactNonSnapchatter hashedPhoneNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b650adc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127911d4);
}



/* Entry: 10b650aec; end: 10b650afb; -[SCSnapchattersContactNonSnapchatter subtext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b650aec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127911d8);
}



/* Entry: 10b650afc; end: 10b650b6b; -[SCSnapchattersContactNonSnapchatter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b650afc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127911d8,0);
  _objc_storeStrong(param_1 + _DAT_1127911d4,0);
  _objc_storeStrong(param_1 + _DAT_1127911d0,0);
  _objc_storeStrong(param_1 + _DAT_1127911b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127911b4,0);
  return;
}



/* Entry: 10b650b6c; end: 10b650b8f; -[SCSnapchattersCountSummary copyWithZone:] */

undefined8 FUN_10b650b6c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b650b90; end: 10b650bf7; -[SCSnapchattersCountSummary hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_10b650b90(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(uint *)(param_1 + _DAT_1127911dc);
  lStack_20 = (long)*(int *)(param_1 + _DAT_1127911e0);
  puVar1 = &uStack_28;
  func_0x000107c3191c(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar3 = (ulong *)0x1;
  }
  else {
    puVar3 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar3 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) ||
         (*(int *)((long)puVar1 + (long)_DAT_1127911dc) !=
          *(int *)((long)param_3 + (long)_DAT_1127911dc))) {
        puVar3 = (ulong *)0x0;
      }
      else {
        puVar3 = (ulong *)(ulong)(*(int *)((long)puVar1 + (long)_DAT_1127911e0) ==
                                 *(int *)((long)param_3 + (long)_DAT_1127911e0));
      }
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10b650bf8; end: 10b650c9f; -[SCSnapchattersCountSummary isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10b650bf8(ulong param_1,undefined8 param_2,ulong param_3)

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
         (*(int *)(param_1 + (long)_DAT_1127911dc) != *(int *)(param_3 + (long)_DAT_1127911dc))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(int *)(param_1 + (long)_DAT_1127911e0) == *(int *)(param_3 + (long)_DAT_1127911e0)
        ;
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b650ca0; end: 10b650cc3; -[SCSnapchattersDeltaSyncMetadata copyWithZone:] */

undefined8 FUN_10b650ca0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b650cc4; end: 10b650d77; -[SCSnapchattersDeltaSyncMetadata hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_10b650cc4(long param_1,undefined8 param_2,ulong *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulong uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = (ulong)*(uint *)(param_1 + _DAT_1127911e4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127911e8);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + _DAT_1127911ec);
  lStack_38 = -lVar5;
  if (-1 < lVar5) {
    lStack_38 = lVar5;
  }
  uVar6 = ~*(ulong *)(param_1 + _DAT_1127911f0) + *(ulong *)(param_1 + _DAT_1127911f0) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_30 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar3 = &uStack_48;
  uStack_40 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b650e54:
    puVar7 = (ulong *)0x1;
  }
  else {
    puVar7 = (ulong *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10b650e60;
    puVar7 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(int *)((long)puVar3 + (long)_DAT_1127911e4) ==
         *(int *)((long)param_3 + (long)_DAT_1127911e4) &&
        (*(long *)((long)puVar3 + (long)_DAT_1127911ec) ==
         *(long *)((long)param_3 + (long)_DAT_1127911ec))))) {
      dVar8 = *(double *)((long)puVar3 + (long)_DAT_1127911f0);
      dVar9 = *(double *)((long)param_3 + (long)_DAT_1127911f0);
      dVar10 = ABS(dVar8 - dVar9);
      dVar8 = ABS(dVar8 + dVar9) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar8))) {
        bVar1 = dVar10 < dVar8;
      }
      if (bVar1) {
        puVar7 = *(ulong **)((long)puVar3 + (long)_DAT_1127911e8);
        if (puVar7 != *(ulong **)((long)param_3 + (long)_DAT_1127911e8)) {
          func_0x00010c071ae0();
          goto LAB_10b650e60;
        }
        goto LAB_10b650e54;
      }
    }
    puVar7 = (ulong *)0x0;
  }
LAB_10b650e60:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 10b650d78; end: 10b650e7b; -[SCSnapchattersDeltaSyncMetadata isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b650d78(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b650e54:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b650e60;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(int *)(param_1 + (long)_DAT_1127911e4) == *(int *)(param_3 + (long)_DAT_1127911e4) &&
        (*(long *)(param_1 + (long)_DAT_1127911ec) == *(long *)(param_3 + (long)_DAT_1127911ec)))))
    {
      dVar5 = *(double *)(param_1 + (long)_DAT_1127911f0);
      dVar6 = *(double *)(param_3 + (long)_DAT_1127911f0);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + (long)_DAT_1127911e8);
        if (lVar4 != *(long *)(param_3 + (long)_DAT_1127911e8)) {
          func_0x00010c071ae0();
          goto LAB_10b650e60;
        }
        goto LAB_10b650e54;
      }
    }
    lVar4 = 0;
  }
LAB_10b650e60:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b650e7c; end: 10b650f13; -[SCSnapchattersDisplaySuggestion initWithPage:userIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b650e7c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112707500;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + (long)_DAT_1127911f4) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127911f8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127911f8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b650f14; end: 10b650f37; -[SCSnapchattersDisplaySuggestion copyWithZone:] */

undefined8 FUN_10b650f14(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b650f38; end: 10b650fa7; -[SCSnapchattersDisplaySuggestion hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_10b650f38(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(uint *)(param_1 + _DAT_1127911f4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127911f8);
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
    puVar4 = (ulong *)0x0;
    if ((puVar2 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10b65103c;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       (*(int *)((long)puVar2 + (long)_DAT_1127911f4) !=
        *(int *)((long)param_3 + (long)_DAT_1127911f4))) {
      puVar4 = (ulong *)0x0;
      goto LAB_10b65103c;
    }
    puVar4 = *(ulong **)((long)puVar2 + (long)_DAT_1127911f8);
    if (puVar4 != *(ulong **)((long)param_3 + (long)_DAT_1127911f8)) {
      func_0x00010c071ae0();
      goto LAB_10b65103c;
    }
  }
  puVar4 = (ulong *)0x1;
LAB_10b65103c:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b650fa8; end: 10b651057; -[SCSnapchattersDisplaySuggestion isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b650fa8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b65103c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (*(int *)(param_1 + (long)_DAT_1127911f4) != *(int *)(param_3 + (long)_DAT_1127911f4))) {
      lVar3 = 0;
      goto LAB_10b65103c;
    }
    lVar3 = *(long *)(param_1 + (long)_DAT_1127911f8);
    if (lVar3 != *(long *)(param_3 + (long)_DAT_1127911f8)) {
      func_0x00010c071ae0();
      goto LAB_10b65103c;
    }
  }
  lVar3 = 1;
LAB_10b65103c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b651058; end: 10b651067; -[SCSnapchattersDisplaySuggestion page] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10b651058(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_1127911f4);
}



/* Entry: 10b651068; end: 10b651077; -[SCSnapchattersDisplaySuggestion userIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b651068(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127911f8);
}



/* Entry: 10b651078; end: 10b65108b; -[SCSnapchattersDisplaySuggestion .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b651078(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127911f8,0);
  return;
}



/* Entry: 10b65108c; end: 10b651137; -[SCSnapchattersTopDisplaySuggestion initWithPage:userIds:topSuggestionsExpirationTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b65108c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112707508;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + (long)_DAT_1127911fc) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112791200);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112791200) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112791204) = param_1;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b651138; end: 10b65115b; -[SCSnapchattersTopDisplaySuggestion copyWithZone:] */

undefined8 FUN_10b651138(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b65115c; end: 10b6511ff; -[SCSnapchattersTopDisplaySuggestion hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_10b65115c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = (ulong)*(uint *)(param_1 + _DAT_1127911fc);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112791200);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + _DAT_112791204) + *(ulong *)(param_1 + _DAT_112791204) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
LAB_10b6512c4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b6512d0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (*(int *)((long)puVar3 + (long)_DAT_1127911fc) == *(int *)(param_3 + _DAT_1127911fc))) {
      dVar8 = ABS(*(double *)((long)puVar3 + (long)_DAT_112791204) -
                  *(double *)(param_3 + _DAT_112791204));
      dVar7 = ABS(*(double *)((long)puVar3 + (long)_DAT_112791204) +
                  *(double *)(param_3 + _DAT_112791204)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = *(undefined1 **)((long)puVar3 + (long)_DAT_112791200);
        if (puVar6 != *(undefined1 **)(param_3 + _DAT_112791200)) {
          func_0x00010c071ae0();
          goto LAB_10b6512d0;
        }
        goto LAB_10b6512c4;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b6512d0:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 10b651200; end: 10b6512eb; -[SCSnapchattersTopDisplaySuggestion isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b651200(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6512c4:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6512d0;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (*(int *)(param_1 + (long)_DAT_1127911fc) == *(int *)(param_3 + (long)_DAT_1127911fc))) {
      dVar5 = *(double *)(param_1 + (long)_DAT_112791204);
      dVar6 = *(double *)(param_3 + (long)_DAT_112791204);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + (long)_DAT_112791200);
        if (lVar4 != *(long *)(param_3 + (long)_DAT_112791200)) {
          func_0x00010c071ae0();
          goto LAB_10b6512d0;
        }
        goto LAB_10b6512c4;
      }
    }
    lVar4 = 0;
  }
LAB_10b6512d0:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b6512ec; end: 10b6512fb; -[SCSnapchattersTopDisplaySuggestion page] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10b6512ec(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_1127911fc);
}



/* Entry: 10b6512fc; end: 10b65130b; -[SCSnapchattersTopDisplaySuggestion userIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b6512fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791200);
}



/* Entry: 10b65130c; end: 10b65131b; -[SCSnapchattersTopDisplaySuggestion topSuggestionsExpirationTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b65130c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791204);
}



/* Entry: 10b65131c; end: 10b65132f; -[SCSnapchattersTopDisplaySuggestion .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b65131c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112791200,0);
  return;
}



/* Entry: 10b651330; end: 10b6513db; -[SCSnapchattersFriendScore initWithUserId:score:lastFetchedTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b651330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_112707510;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112791208);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112791208) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11279120c) = param_5;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112791210) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6513dc; end: 10b6513ff; -[SCSnapchattersFriendScore copyWithZone:] */

undefined8 FUN_10b6513dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b651400; end: 10b6514ab; -[SCSnapchattersFriendScore hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b651400(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112791208);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + _DAT_11279120c);
  lStack_38 = -lVar5;
  if (-1 < lVar5) {
    lStack_38 = lVar5;
  }
  uVar6 = ~*(ulong *)(param_1 + _DAT_112791210) + *(ulong *)(param_1 + _DAT_112791210) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_30 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_40 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b651570:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b65157c;
    puVar7 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar4 & 1) != 0) &&
       (*(long *)((long)puVar3 + (long)_DAT_11279120c) == *(long *)(param_3 + _DAT_11279120c))) {
      dVar9 = ABS(*(double *)((long)puVar3 + (long)_DAT_112791210) -
                  *(double *)(param_3 + _DAT_112791210));
      dVar8 = ABS(*(double *)((long)puVar3 + (long)_DAT_112791210) +
                  *(double *)(param_3 + _DAT_112791210)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar8))) {
        bVar1 = dVar9 < dVar8;
      }
      if (bVar1) {
        puVar7 = *(undefined1 **)((long)puVar3 + (long)_DAT_112791208);
        if (puVar7 != *(undefined1 **)(param_3 + _DAT_112791208)) {
          func_0x00010c071ae0();
          goto LAB_10b65157c;
        }
        goto LAB_10b651570;
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_10b65157c:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 10b6514ac; end: 10b651597; -[SCSnapchattersFriendScore isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b6514ac(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b651570:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b65157c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (*(long *)(param_1 + (long)_DAT_11279120c) == *(long *)(param_3 + (long)_DAT_11279120c))) {
      dVar5 = *(double *)(param_1 + (long)_DAT_112791210);
      dVar6 = *(double *)(param_3 + (long)_DAT_112791210);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + (long)_DAT_112791208);
        if (lVar4 != *(long *)(param_3 + (long)_DAT_112791208)) {
          func_0x00010c071ae0();
          goto LAB_10b65157c;
        }
        goto LAB_10b651570;
      }
    }
    lVar4 = 0;
  }
LAB_10b65157c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b651598; end: 10b6515a7; -[SCSnapchattersFriendScore userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b651598(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791208);
}



/* Entry: 10b6515a8; end: 10b6515b7; -[SCSnapchattersFriendScore score] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b6515a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279120c);
}



/* Entry: 10b6515b8; end: 10b6515c7; -[SCSnapchattersFriendScore lastFetchedTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b6515b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791210);
}



/* Entry: 10b6515c8; end: 10b6515db; -[SCSnapchattersFriendScore .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b6515c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112791208,0);
  return;
}



/* Entry: 10b6515dc; end: 10b6516cf; -[SCSnapchattersFriendShortcut initWithShortcutId:shortcutName:shortcutIconUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b6515dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

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
  puStack_48 = PTR_PTR_112707518;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112791214);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112791214) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112791218);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112791218) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11279121c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11279121c) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6516d0; end: 10b6516f3; -[SCSnapchattersFriendShortcut copyWithZone:] */

undefined8 FUN_10b6516d0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6516f4; end: 10b651787; -[SCSnapchattersFriendShortcut hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b6516f4(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uVar1 = *(undefined8 *)(param_1 + _DAT_112791214);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112791218);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11279121c);
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
LAB_10b651838:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b651844;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_112791214);
      if ((lVar5 == *(long *)(param_3 + _DAT_112791214)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
         ) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_112791218);
        if ((lVar5 == *(long *)(param_3 + _DAT_112791218)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + (long)_DAT_11279121c);
          if (puVar6 != *(undefined1 **)(param_3 + _DAT_11279121c)) {
            func_0x00010c071ae0();
            goto LAB_10b651844;
          }
          goto LAB_10b651838;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b651844:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b651788; end: 10b65185f; -[SCSnapchattersFriendShortcut isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b651788(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b651838:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b651844;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + (long)_DAT_112791214);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_112791214)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_112791218);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_112791218)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_11279121c);
          if (lVar3 != *(long *)(param_3 + (long)_DAT_11279121c)) {
            func_0x00010c071ae0();
            goto LAB_10b651844;
          }
          goto LAB_10b651838;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b651844:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b651860; end: 10b65186f; -[SCSnapchattersFriendShortcut shortcutId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b651860(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791214);
}



/* Entry: 10b651870; end: 10b65187f; -[SCSnapchattersFriendShortcut shortcutName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b651870(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791218);
}



/* Entry: 10b651880; end: 10b65188f; -[SCSnapchattersFriendShortcut shortcutIconUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b651880(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279121c);
}



/* Entry: 10b651890; end: 10b6518df; -[SCSnapchattersFriendShortcut .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b651890(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11279121c,0);
  _objc_storeStrong(param_1 + _DAT_112791218,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112791214,0);
  return;
}



/* Entry: 10b6518e0; end: 10b65199b; -[SCSnapchattersFriendWithShortcut initWithUserId:shortcutId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b6518e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112707520;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112791220);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112791220) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112791224);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112791224) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b65199c; end: 10b6519bf; -[SCSnapchattersFriendWithShortcut copyWithZone:] */

undefined8 FUN_10b65199c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6519c0; end: 10b651a43; -[SCSnapchattersFriendWithShortcut hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b6519c0(long param_1,undefined8 param_2,undefined8 *param_3)

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
  uVar1 = *(undefined8 *)(param_1 + _DAT_112791220);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112791224);
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
LAB_10b651ad4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b651ae0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_112791220);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_112791220)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_112791224);
        if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_112791224)) {
          func_0x00010c071ae0();
          goto LAB_10b651ae0;
        }
        goto LAB_10b651ad4;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b651ae0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b651a44; end: 10b651afb; -[SCSnapchattersFriendWithShortcut isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b651a44(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b651ad4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b651ae0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + (long)_DAT_112791220);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_112791220)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_112791224);
        if (lVar3 != *(long *)(param_3 + (long)_DAT_112791224)) {
          func_0x00010c071ae0();
          goto LAB_10b651ae0;
        }
        goto LAB_10b651ad4;
      }
    }
    lVar3 = 0;
  }
LAB_10b651ae0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b651afc; end: 10b651b0b; -[SCSnapchattersFriendWithShortcut userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b651afc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791220);
}



/* Entry: 10b651b0c; end: 10b651b1b; -[SCSnapchattersFriendWithShortcut shortcutId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b651b0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791224);
}



/* Entry: 10b651b1c; end: 10b651b5b; -[SCSnapchattersFriendWithShortcut .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b651b1c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112791224,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112791220,0);
  return;
}



/* Entry: 10b651b5c; end: 10b651bf3; -[SCSnapchattersFriendingDebuggingInfo initWithType:html:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b651b5c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112707528;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + (long)_DAT_112791228) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11279122c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11279122c) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b651bf4; end: 10b651c17; -[SCSnapchattersFriendingDebuggingInfo copyWithZone:] */

undefined8 FUN_10b651bf4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b651c18; end: 10b651c87; -[SCSnapchattersFriendingDebuggingInfo hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_10b651c18(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(uint *)(param_1 + _DAT_112791228);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11279122c);
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
    puVar4 = (ulong *)0x0;
    if ((puVar2 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10b651d1c;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       (*(int *)((long)puVar2 + (long)_DAT_112791228) !=
        *(int *)((long)param_3 + (long)_DAT_112791228))) {
      puVar4 = (ulong *)0x0;
      goto LAB_10b651d1c;
    }
    puVar4 = *(ulong **)((long)puVar2 + (long)_DAT_11279122c);
    if (puVar4 != *(ulong **)((long)param_3 + (long)_DAT_11279122c)) {
      func_0x00010c071ae0();
      goto LAB_10b651d1c;
    }
  }
  puVar4 = (ulong *)0x1;
LAB_10b651d1c:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b651c88; end: 10b651d37; -[SCSnapchattersFriendingDebuggingInfo isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b651c88(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b651d1c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (*(int *)(param_1 + (long)_DAT_112791228) != *(int *)(param_3 + (long)_DAT_112791228))) {
      lVar3 = 0;
      goto LAB_10b651d1c;
    }
    lVar3 = *(long *)(param_1 + (long)_DAT_11279122c);
    if (lVar3 != *(long *)(param_3 + (long)_DAT_11279122c)) {
      func_0x00010c071ae0();
      goto LAB_10b651d1c;
    }
  }
  lVar3 = 1;
LAB_10b651d1c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b651d38; end: 10b651d47; -[SCSnapchattersFriendingDebuggingInfo type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10b651d38(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112791228);
}



/* Entry: 10b651d48; end: 10b651d57; -[SCSnapchattersFriendingDebuggingInfo html] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b651d48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279122c);
}



/* Entry: 10b651d58; end: 10b651d6b; -[SCSnapchattersFriendingDebuggingInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b651d58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11279122c,0);
  return;
}



/* Entry: 10b651d6c; end: 10b651e27; -[SCSnapchattersFriendFeedSummary initWithFeedId:summary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b651d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112707530;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112791230);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112791230) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112791234);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112791234) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b651e28; end: 10b651e4b; -[SCSnapchattersFriendFeedSummary copyWithZone:] */

undefined8 FUN_10b651e28(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b651e4c; end: 10b651ecf; -[SCSnapchattersFriendFeedSummary hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b651e4c(long param_1,undefined8 param_2,undefined8 *param_3)

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
  uVar1 = *(undefined8 *)(param_1 + _DAT_112791230);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112791234);
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
LAB_10b651f60:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b651f6c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_112791230);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_112791230)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_112791234);
        if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_112791234)) {
          func_0x00010c071ae0();
          goto LAB_10b651f6c;
        }
        goto LAB_10b651f60;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b651f6c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b651ed0; end: 10b651f87; -[SCSnapchattersFriendFeedSummary isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b651ed0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b651f60:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b651f6c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + (long)_DAT_112791230);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_112791230)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_112791234);
        if (lVar3 != *(long *)(param_3 + (long)_DAT_112791234)) {
          func_0x00010c071ae0();
          goto LAB_10b651f6c;
        }
        goto LAB_10b651f60;
      }
    }
    lVar3 = 0;
  }
LAB_10b651f6c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b651f88; end: 10b651f97; -[SCSnapchattersFriendFeedSummary feedId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b651f88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791230);
}



/* Entry: 10b651f98; end: 10b651fa7; -[SCSnapchattersFriendFeedSummary summary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b651f98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791234);
}



/* Entry: 10b651fa8; end: 10b651fe7; -[SCSnapchattersFriendFeedSummary .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b651fa8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112791234,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112791230,0);
  return;
}



/* Entry: 10b651fe8; end: 10b652157; -[SCSnapchattersHiddenSuggestion initWithUserId:username:displayName:bitmojiInfo:hiddenTimestamp:creatorSnapchatterInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b651fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_112707538;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112791238);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112791238) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11279123c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11279123c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112791240);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112791240) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112791244);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112791244) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112791248) = param_1;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11279124c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11279124c) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b652158; end: 10b65217b; -[SCSnapchattersHiddenSuggestion copyWithZone:] */

undefined8 FUN_10b652158(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b65217c; end: 10b652253; -[SCSnapchattersHiddenSuggestion hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b65217c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112791238);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11279123c);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112791240);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112791244);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + _DAT_112791248) + *(ulong *)(param_1 + _DAT_112791248) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11279124c);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  puVar4 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar4,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b652380:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b65238c;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      dVar9 = *(double *)((long)puVar4 + (long)_DAT_112791248);
      dVar10 = *(double *)((long)param_3 + (long)_DAT_112791248);
      dVar11 = ABS(dVar9 - dVar10);
      dVar9 = ABS(dVar9 + dVar10) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar9))) {
        bVar1 = dVar11 < dVar9;
      }
      if ((((bVar1) &&
           ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_112791238),
            lVar6 == *(long *)((long)param_3 + (long)_DAT_112791238) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
          ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11279123c),
           lVar6 == *(long *)((long)param_3 + (long)_DAT_11279123c) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         (((lVar6 = *(long *)((long)puVar4 + (long)_DAT_112791240),
           lVar6 == *(long *)((long)param_3 + (long)_DAT_112791240) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
          ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_112791244),
           lVar6 == *(long *)((long)param_3 + (long)_DAT_112791244) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))))) {
        puVar8 = *(undefined8 **)((long)puVar4 + (long)_DAT_11279124c);
        if (puVar8 != *(undefined8 **)((long)param_3 + (long)_DAT_11279124c)) {
          func_0x00010c071ae0();
          goto LAB_10b65238c;
        }
        goto LAB_10b652380;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10b65238c:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10b652254; end: 10b6523a7; -[SCSnapchattersHiddenSuggestion isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b652254(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b652380:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b65238c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar5 = *(double *)(param_1 + (long)_DAT_112791248);
      dVar6 = *(double *)(param_3 + (long)_DAT_112791248);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + (long)_DAT_112791238),
            lVar4 == *(long *)(param_3 + (long)_DAT_112791238) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + (long)_DAT_11279123c),
           lVar4 == *(long *)(param_3 + (long)_DAT_11279123c) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         (((lVar4 = *(long *)(param_1 + (long)_DAT_112791240),
           lVar4 == *(long *)(param_3 + (long)_DAT_112791240) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
          ((lVar4 = *(long *)(param_1 + (long)_DAT_112791244),
           lVar4 == *(long *)(param_3 + (long)_DAT_112791244) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
        lVar4 = *(long *)(param_1 + (long)_DAT_11279124c);
        if (lVar4 != *(long *)(param_3 + (long)_DAT_11279124c)) {
          func_0x00010c071ae0();
          goto LAB_10b65238c;
        }
        goto LAB_10b652380;
      }
    }
    lVar4 = 0;
  }
LAB_10b65238c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b6523a8; end: 10b6523b7; -[SCSnapchattersHiddenSuggestion userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b6523a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791238);
}



/* Entry: 10b6523b8; end: 10b6523c7; -[SCSnapchattersHiddenSuggestion username] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b6523b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279123c);
}



/* Entry: 10b6523c8; end: 10b6523d7; -[SCSnapchattersHiddenSuggestion displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b6523c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791240);
}



/* Entry: 10b6523d8; end: 10b6523e7; -[SCSnapchattersHiddenSuggestion bitmojiInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b6523d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791244);
}



/* Entry: 10b6523e8; end: 10b6523f7; -[SCSnapchattersHiddenSuggestion hiddenTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b6523e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791248);
}



/* Entry: 10b6523f8; end: 10b652407; -[SCSnapchattersHiddenSuggestion creatorSnapchatterInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b6523f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279124c);
}



/* Entry: 10b652408; end: 10b652477; -[SCSnapchattersHiddenSuggestion .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b652408(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11279124c,0);
  _objc_storeStrong(param_1 + _DAT_112791244,0);
  _objc_storeStrong(param_1 + _DAT_112791240,0);
  _objc_storeStrong(param_1 + _DAT_11279123c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112791238,0);
  return;
}



/* Entry: 10b652478; end: 10b65249b; -[SCSnapchattersIncomingFriendsSyncToken copyWithZone:] */

undefined8 FUN_10b652478(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b65249c; end: 10b65253f; -[SCSnapchattersIncomingFriendsSyncToken hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10b65249c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + _DAT_112791250);
  lStack_48 = -lVar4;
  if (-1 < lVar4) {
    lStack_48 = lVar4;
  }
  lVar4 = *(long *)(param_1 + _DAT_112791254);
  lStack_40 = -lVar4;
  if (-1 < lVar4) {
    lStack_40 = lVar4;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112791258);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + _DAT_11279125c);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  plVar2 = &lStack_48;
  uStack_38 = uVar1;
  func_0x000107c3191c(plVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar2 != param_3) {
    plVar5 = (long *)0x0;
    if ((plVar2 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10b652604;
    plVar5 = plVar2;
    _objc_opt_class(plVar2);
    plVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar3 & 1) == 0) ||
       (((*(long *)((long)plVar2 + (long)_DAT_112791250) !=
          *(long *)((long)param_3 + (long)_DAT_112791250) ||
         (*(long *)((long)plVar2 + (long)_DAT_112791254) !=
          *(long *)((long)param_3 + (long)_DAT_112791254))) ||
        (*(long *)((long)plVar2 + (long)_DAT_11279125c) !=
         *(long *)((long)param_3 + (long)_DAT_11279125c))))) {
      plVar5 = (long *)0x0;
      goto LAB_10b652604;
    }
    plVar5 = *(long **)((long)plVar2 + (long)_DAT_112791258);
    if (plVar5 != *(long **)((long)param_3 + (long)_DAT_112791258)) {
      func_0x00010c071ae0();
      goto LAB_10b652604;
    }
  }
  plVar5 = (long *)0x1;
LAB_10b652604:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 10b652540; end: 10b65261f; -[SCSnapchattersIncomingFriendsSyncToken isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b652540(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b652604;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(long *)(param_1 + (long)_DAT_112791250) != *(long *)(param_3 + (long)_DAT_112791250) ||
         (*(long *)(param_1 + (long)_DAT_112791254) != *(long *)(param_3 + (long)_DAT_112791254)))
        || (*(long *)(param_1 + (long)_DAT_11279125c) != *(long *)(param_3 + (long)_DAT_11279125c)))
       )) {
      lVar3 = 0;
      goto LAB_10b652604;
    }
    lVar3 = *(long *)(param_1 + (long)_DAT_112791258);
    if (lVar3 != *(long *)(param_3 + (long)_DAT_112791258)) {
      func_0x00010c071ae0();
      goto LAB_10b652604;
    }
  }
  lVar3 = 1;
LAB_10b652604:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b652620; end: 10b6527f3; -[SCSnapchattersPublicInfo initWithUserId:username:displayName:isPopular:bitmojiInfo:snapProId:lastFetchedTimestamp:tier:profileLogoUrl:isAiChatbot:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b652620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
             undefined1 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  puStack_78 = PTR_PTR_112707548;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112791260);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112791260) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112791264);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112791264) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112791268);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112791268) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11279126c) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112791270);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112791270) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112791274);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112791274) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112791278) = param_1;
    *(undefined4 *)((long)puVar1 + (long)_DAT_11279127c) = param_10;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112791280);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112791280) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112791284) = param_13;
  }
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10b6527f4; end: 10b652817; -[SCSnapchattersPublicInfo copyWithZone:] */

undefined8 FUN_10b6527f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b652818; end: 10b652917; -[SCSnapchattersPublicInfo hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b652818(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112791260);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112791264);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112791268);
  uStack_70 = uVar3;
  func_0x00010bfde980();
  uStack_60 = (ulong)*(byte *)(param_1 + _DAT_11279126c);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112791270);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112791274);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + _DAT_112791278) + *(ulong *)(param_1 + _DAT_112791278) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_48 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  lStack_40 = (long)*(int *)(param_1 + _DAT_11279127c);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112791280);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + _DAT_112791284);
  puVar4 = &uStack_78;
  uStack_38 = uVar3;
  func_0x000107c3191c(puVar4,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b652aac:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b652ab8;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       (((*(char *)((long)puVar4 + (long)_DAT_11279126c) ==
          *(char *)((long)param_3 + (long)_DAT_11279126c) &&
         (*(int *)((long)puVar4 + (long)_DAT_11279127c) ==
          *(int *)((long)param_3 + (long)_DAT_11279127c))) &&
        (*(char *)((long)puVar4 + (long)_DAT_112791284) ==
         *(char *)((long)param_3 + (long)_DAT_112791284))))) {
      dVar9 = *(double *)((long)puVar4 + (long)_DAT_112791278);
      dVar10 = *(double *)((long)param_3 + (long)_DAT_112791278);
      dVar11 = ABS(dVar9 - dVar10);
      dVar9 = ABS(dVar9 + dVar10) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar9))) {
        bVar1 = dVar11 < dVar9;
      }
      if ((((bVar1) &&
           ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_112791260),
            lVar6 == *(long *)((long)param_3 + (long)_DAT_112791260) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
          ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_112791264),
           lVar6 == *(long *)((long)param_3 + (long)_DAT_112791264) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         ((((lVar6 = *(long *)((long)puVar4 + (long)_DAT_112791268),
            lVar6 == *(long *)((long)param_3 + (long)_DAT_112791268) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
           ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_112791270),
            lVar6 == *(long *)((long)param_3 + (long)_DAT_112791270) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
          ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_112791274),
           lVar6 == *(long *)((long)param_3 + (long)_DAT_112791274) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))))) {
        puVar8 = *(undefined8 **)((long)puVar4 + (long)_DAT_112791280);
        if (puVar8 != *(undefined8 **)((long)param_3 + (long)_DAT_112791280)) {
          func_0x00010c071ae0();
          goto LAB_10b652ab8;
        }
        goto LAB_10b652aac;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10b652ab8:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10b652918; end: 10b652ad3; -[SCSnapchattersPublicInfo isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b652918(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b652aac:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b652ab8;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (((*(char *)(param_1 + (long)_DAT_11279126c) == *(char *)(param_3 + (long)_DAT_11279126c) &&
         (*(int *)(param_1 + (long)_DAT_11279127c) == *(int *)(param_3 + (long)_DAT_11279127c))) &&
        (*(char *)(param_1 + (long)_DAT_112791284) == *(char *)(param_3 + (long)_DAT_112791284)))))
    {
      dVar5 = *(double *)(param_1 + (long)_DAT_112791278);
      dVar6 = *(double *)(param_3 + (long)_DAT_112791278);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + (long)_DAT_112791260),
            lVar4 == *(long *)(param_3 + (long)_DAT_112791260) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + (long)_DAT_112791264),
           lVar4 == *(long *)(param_3 + (long)_DAT_112791264) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((((lVar4 = *(long *)(param_1 + (long)_DAT_112791268),
            lVar4 == *(long *)(param_3 + (long)_DAT_112791268) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
           ((lVar4 = *(long *)(param_1 + (long)_DAT_112791270),
            lVar4 == *(long *)(param_3 + (long)_DAT_112791270) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + (long)_DAT_112791274),
           lVar4 == *(long *)(param_3 + (long)_DAT_112791274) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
        lVar4 = *(long *)(param_1 + (long)_DAT_112791280);
        if (lVar4 != *(long *)(param_3 + (long)_DAT_112791280)) {
          func_0x00010c071ae0();
          goto LAB_10b652ab8;
        }
        goto LAB_10b652aac;
      }
    }
    lVar4 = 0;
  }
LAB_10b652ab8:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b652ad4; end: 10b652ae3; -[SCSnapchattersPublicInfo userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b652ad4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791260);
}



/* Entry: 10b652ae4; end: 10b652af3; -[SCSnapchattersPublicInfo username] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b652ae4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791264);
}



/* Entry: 10b652af4; end: 10b652b03; -[SCSnapchattersPublicInfo displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b652af4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791268);
}



/* Entry: 10b652b04; end: 10b652b13; -[SCSnapchattersPublicInfo isPopular] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b652b04(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11279126c);
}


