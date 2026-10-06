/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1060191d0; end: 1060191db; -[SCPlusStreakRestorePurchaseTrayViewController defaultProjectNameV2] */

void FUN_1060191d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c101e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_plus_11261e1c0);
  return;
}



/* Entry: 1060191dc; end: 106019217; -[SCPlusStreakRestorePurchaseTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060191dc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273cf28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273cf24,0);
  return;
}



/* Entry: 106019218; end: 1060192ef; -[SCPlusRestorableStreak initWithConversationId:snapchatter:isGroup:streakCount:streakExpirationTimestamp:restoreExpirationTimestamp:] */

undefined1 *
FUN_106019218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126ef138;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    *(undefined8 *)((long)puVar1 + 0x30) = param_2;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1060192f0; end: 106019313; -[SCPlusRestorableStreak copyWithZone:] */

undefined8 FUN_1060192f0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106019314; end: 1060193df; -[SCPlusRestorableStreak hash] */

undefined8 * FUN_106019314(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  long lStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x20);
  lStack_40 = -lVar6;
  if (-1 < lVar6) {
    lStack_40 = lVar6;
  }
  uVar7 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar4 = &uStack_58;
  uStack_50 = uVar3;
  func_0x000100505190(puVar4,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_1060194e8:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1060194f4;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((*(char *)(puVar4 + 1) == *(char *)(param_3 + 1) && (puVar4[4] == param_3[4])))) {
      dVar10 = ABS((double)puVar4[5] - (double)param_3[5]);
      dVar9 = ABS((double)puVar4[5] + (double)param_3[5]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (bVar1) {
        dVar10 = ABS((double)puVar4[6] - (double)param_3[6]);
        dVar9 = ABS((double)puVar4[6] + (double)param_3[6]) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
          bVar1 = dVar10 < dVar9;
        }
        if ((bVar1) &&
           ((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
          puVar8 = (undefined8 *)puVar4[3];
          if (puVar8 != (undefined8 *)param_3[3]) {
            func_0x00010c071ae0();
            goto LAB_1060194f4;
          }
          goto LAB_1060194e8;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_1060194f4:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 1060193e0; end: 10601950f; -[SCPlusRestorableStreak isEqual:] */

long FUN_1060193e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1060194e8:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1060194f4;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
      dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) * 2.220446049250313e-16
      ;
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
        if ((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + 0x18);
          if (lVar4 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_1060194f4;
          }
          goto LAB_1060194e8;
        }
      }
    }
    lVar4 = 0;
  }
LAB_1060194f4:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 106019510; end: 106019517; -[SCPlusRestorableStreak conversationId] */

undefined8 FUN_106019510(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106019518; end: 10601951f; -[SCPlusRestorableStreak snapchatter] */

undefined8 FUN_106019518(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106019520; end: 106019527; -[SCPlusRestorableStreak isGroup] */

undefined1 FUN_106019520(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106019528; end: 10601952f; -[SCPlusRestorableStreak streakCount] */

undefined8 FUN_106019528(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106019530; end: 106019537; -[SCPlusRestorableStreak streakExpirationTimestamp] */

undefined8 FUN_106019530(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106019538; end: 10601953f; -[SCPlusRestorableStreak restoreExpirationTimestamp] */

undefined8 FUN_106019538(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106019540; end: 10601956f; -[SCPlusRestorableStreak .cxx_destruct] */

void FUN_106019540(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106019570; end: 1060195e3; +[SCPlusStreakRestoreProductInfo freeWithTotalNonPlus:totalPlus:lastPlusRestoreTimestampMs:nextPlusRestoreResetTimestampMs:] */

void FUN_106019570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c7160;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  *(undefined8 *)(puVar2 + 0x40) = param_5;
  *(undefined8 *)(puVar2 + 0x48) = param_6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060195e4; end: 106019687; +[SCPlusStreakRestoreProductInfo purchaseWithProductIdentifier:externalId:lastPlusRestoreTimestampMs:nextPlusRestoreResetTimestampMs:] */

void FUN_1060195e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c7160;
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
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106019688; end: 1060196ab; -[SCPlusStreakRestoreProductInfo copyWithZone:] */

undefined8 FUN_106019688(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1060196ac; end: 10601973b; -[SCPlusStreakRestoreProductInfo hash] */

void FUN_1060196ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uStack_30 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = uVar2;
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_98 = PTR_PTR_1126ef140;
  puStack_a0 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10601973c; end: 10601977f; -[SCPlusStreakRestoreProductInfo internalInit] */

void FUN_10601973c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ef140;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106019780; end: 106019897; -[SCPlusStreakRestoreProductInfo isEqual:] */

long FUN_106019780(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106019870:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10601987c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
            (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
           (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
          ((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
           (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))))) &&
        (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))) &&
       (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10601987c;
        }
        goto LAB_106019870;
      }
    }
    lVar3 = 0;
  }
LAB_10601987c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106019898; end: 106019923; -[SCPlusStreakRestoreProductInfo matchPurchase:free:] */

void FUN_106019898(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_106019908;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    pcVar6 = *(code **)(param_4 + 0x10);
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_106019908;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    pcVar6 = *(code **)(param_3 + 0x10);
    lVar1 = param_3;
  }
  (*pcVar6)(lVar1,uVar2,uVar3,uVar4,uVar5);
LAB_106019908:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106019924; end: 106019953; -[SCPlusStreakRestoreProductInfo .cxx_destruct] */

void FUN_106019924(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106019954; end: 106019967; +[SCCStreakRestoreConversationService valdiMarshallableObjectDescriptor] */

void FUN_106019954(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110908148;
  param_1[1] = &PTR_DAT_1109081c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106019968; end: 1060199a3; +[SCCStreakRestorePromotionalRestoreService valdiMarshallableObjectDescriptor] */

void FUN_106019968(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110908230;
  param_1[1] = &PTR_DAT_110908278;
  param_1[2] = &PTR_DAT_1109081e8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 1060199a4; end: 106019a03;  */

void FUN_1060199a4(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x000106019f64(FUN_106019e84);
  _objc_retainBlock(&puStack_48);
  func_0x000106019f80();
  func_0x000106019f44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106019a04; end: 106019a1b;  */

void FUN_106019a04(code *UNRECOVERED_JUMPTABLE,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000106019a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_2,param_2[1],param_2[2],*(undefined4 *)(param_2 + 3));
  return;
}



/* Entry: 106019a1c; end: 106019a7b;  */

void FUN_106019a1c(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x000106019f64(0x106019eb4);
  _objc_retainBlock(&puStack_48);
  func_0x000106019f80();
  func_0x000106019f44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106019a7c; end: 106019a8f; +[SCCStreakRestoreRestorePageActionHandler valdiMarshallableObjectDescriptor] */

void FUN_106019a7c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110908290;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106019a90; end: 106019aa3; +[SCCStreakRestoreResurrectedConversationRestorableStreak valdiMarshallableObjectDescriptor] */

void FUN_106019a90(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109082c0;
  param_1[1] = &PTR_DAT_110908320;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106019aa4; end: 106019ab7; +[SCCStreakRestoreResurrectedConversationStreakRestoreService valdiMarshallableObjectDescriptor] */

void FUN_106019aa4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110908338;
  param_1[1] = &PTR_DAT_110908368;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106019ab8; end: 106019acb; +[SCCStreakRestoreResurrectedStreakRestoreService valdiMarshallableObjectDescriptor] */

void FUN_106019ab8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110908378;
  param_1[1] = &PTR_DAT_1109083a8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106019acc; end: 106019adf; +[SCCStreakRestoreResurrectedUserRestorableStreak valdiMarshallableObjectDescriptor] */

void FUN_106019acc(undefined8 *param_1)

{
  *param_1 = &PTR_s_userId_1109083b8;
  param_1[1] = &PTR_DAT_110908418;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106019ae0; end: 106019af3; +[SCCStreakRestoreService valdiMarshallableObjectDescriptor] */

void FUN_106019ae0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110908428;
  param_1[1] = &PTR_DAT_1109084a0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106019af4; end: 106019aff; +[SCCStreakRestoreConversationRestorePage componentPath] */

undefined ** FUN_106019af4(void)

{
  return &PTR____CFConstantStringClassReference_110e38b38;
}



/* Entry: 106019b00; end: 106019b1f; -[SCCStreakRestoreConversationRestorePage initWithViewModel:componentContext:runtime:] */

void FUN_106019b00(void)

{
  FUN_106019ee8(PTR_PTR_1126ef148);
  return;
}



/* Entry: 106019b20; end: 106019b53; -[SCCStreakRestoreConversationRestorePage setViewModel:] */

void FUN_106019b20(void)

{
  func_0x000106019f10();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106019f2c();
  func_0x000106019f44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106019b54; end: 106019b8b; -[SCCStreakRestoreConversationRestorePage viewModel] */

void FUN_106019b54(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106019f38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106019b8c; end: 106019b97; +[SCCStreakRestoreConversationResurrectedRestorePage componentPath] */

undefined ** FUN_106019b8c(void)

{
  return &PTR____CFConstantStringClassReference_110e38b58;
}



/* Entry: 106019b98; end: 106019bb7; -[SCCStreakRestoreConversationResurrectedRestorePage initWithViewModel:componentContext:runtime:] */

void FUN_106019b98(void)

{
  FUN_106019ee8(PTR_PTR_1126ef150);
  return;
}



/* Entry: 106019bb8; end: 106019beb; -[SCCStreakRestoreConversationResurrectedRestorePage setViewModel:] */

void FUN_106019bb8(void)

{
  func_0x000106019f10();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106019f2c();
  func_0x000106019f44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106019bec; end: 106019c23; -[SCCStreakRestoreConversationResurrectedRestorePage viewModel] */

void FUN_106019bec(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106019f38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106019c24; end: 106019c2f; +[SCCStreakRestorePromotionalRestoreTray componentPath] */

undefined ** FUN_106019c24(void)

{
  return &PTR____CFConstantStringClassReference_110e38b78;
}



/* Entry: 106019c30; end: 106019c4f; -[SCCStreakRestorePromotionalRestoreTray initWithViewModel:componentContext:runtime:] */

void FUN_106019c30(void)

{
  FUN_106019ee8(PTR_PTR_1126ef158);
  return;
}



/* Entry: 106019c50; end: 106019c83; -[SCCStreakRestorePromotionalRestoreTray setViewModel:] */

void FUN_106019c50(void)

{
  func_0x000106019f10();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106019f2c();
  func_0x000106019f44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106019c84; end: 106019cbb; -[SCCStreakRestorePromotionalRestoreTray viewModel] */

void FUN_106019c84(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106019f38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106019cbc; end: 106019cc7; +[SCCStreakRestoreRestorePage componentPath] */

undefined ** FUN_106019cbc(void)

{
  return &PTR____CFConstantStringClassReference_110e38b98;
}



/* Entry: 106019cc8; end: 106019ce7; -[SCCStreakRestoreRestorePage initWithViewModel:componentContext:runtime:] */

void FUN_106019cc8(void)

{
  FUN_106019ee8(PTR_PTR_1126ef160);
  return;
}



/* Entry: 106019ce8; end: 106019d1b; -[SCCStreakRestoreRestorePage setViewModel:] */

void FUN_106019ce8(void)

{
  func_0x000106019f10();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106019f2c();
  func_0x000106019f44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106019d1c; end: 106019d53; -[SCCStreakRestoreRestorePage viewModel] */

void FUN_106019d1c(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106019f38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106019d54; end: 106019d5f; +[SCCStreakRestoreResurrectedRestorePage componentPath] */

undefined ** FUN_106019d54(void)

{
  return &PTR____CFConstantStringClassReference_110e38bb8;
}



/* Entry: 106019d60; end: 106019d7f; -[SCCStreakRestoreResurrectedRestorePage initWithViewModel:componentContext:runtime:] */

void FUN_106019d60(void)

{
  FUN_106019ee8(PTR_PTR_1126ef168);
  return;
}



/* Entry: 106019d80; end: 106019db3; -[SCCStreakRestoreResurrectedRestorePage setViewModel:] */

void FUN_106019d80(void)

{
  func_0x000106019f10();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106019f2c();
  func_0x000106019f44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106019db4; end: 106019deb; -[SCCStreakRestoreResurrectedRestorePage viewModel] */

void FUN_106019db4(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106019f38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106019dec; end: 106019df7; +[SCCStreakRestoreSupportPage componentPath] */

undefined ** FUN_106019dec(void)

{
  return &PTR____CFConstantStringClassReference_110e38bd8;
}



/* Entry: 106019df8; end: 106019e17; -[SCCStreakRestoreSupportPage initWithViewModel:componentContext:runtime:] */

void FUN_106019df8(void)

{
  FUN_106019ee8(PTR_PTR_1126ef170);
  return;
}



/* Entry: 106019e18; end: 106019e4b; -[SCCStreakRestoreSupportPage setViewModel:] */

void FUN_106019e18(void)

{
  func_0x000106019f10();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106019f2c();
  func_0x000106019f44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106019e4c; end: 106019e83; -[SCCStreakRestoreSupportPage viewModel] */

void FUN_106019e4c(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106019f38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106019e84; end: 106019ee7;  */

void FUN_106019e84(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106019ee8; end: 106019f8b;  */

void FUN_106019ee8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 106019f8c; end: 106019f97; +[SCCPlusUnifiedPaywallCreatePlusPaywallWorkflowRouter modulePath] */

undefined ** FUN_106019f8c(void)

{
  return &PTR____CFConstantStringClassReference_110e38bf8;
}



/* Entry: 106019f98; end: 106019f9f; +[SCCPlusUnifiedPaywallCreatePlusPaywallWorkflowRouter asyncStrictMode] */

undefined8 FUN_106019f98(void)

{
  return 0;
}



/* Entry: 106019fa0; end: 10601a00f; -[SCCPlusUnifiedPaywallCreatePlusPaywallWorkflowRouter createPlusPaywallWorkflowRouterWithProps:] */

void FUN_106019fa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10601a010; end: 10601a17f; +[SCCPlusUnifiedPaywallCreatePlusPaywallWorkflowRouter invokeWithJSRuntimeProvider:props:completionHandler:] */

void FUN_10601a010(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10601a0f4;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(lStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10601a180; end: 10601a1a3; +[SCCPlusUnifiedPaywallCreatePlusPaywallWorkflowRouter valdiMarshallableObjectDescriptor] */

void FUN_10601a180(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109084f8;
  param_1[1] = &PTR_DAT_110908528;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10601a1a4; end: 10601a1bf; +[SCCPlusUnifiedPaywallIPlusPaywallWorkflowRouter valdiMarshallableObjectDescriptor] */

void FUN_10601a1a4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_start_110908540;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10601a1c0; end: 10601a20f; -[SCCPlusUnifiedPaywallPaywallServices initWithLocalInAppPurchaseService:localSubscriptionStore:subscriptionShopGrpcService:featureCatalog:] */

void FUN_10601a1c0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ef178;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10601a210; end: 10601a223; +[SCCPlusUnifiedPaywallPaywallServices valdiMarshallableObjectDescriptor] */

void FUN_10601a210(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110908588;
  param_1[1] = &PTR_DAT_1109086a8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10601a224; end: 10601a2eb; -[SCCPlusUnifiedPaywallPlusPaywallWorkflowRouterProps initWithDeckHierarchy:onExitedFlow:experienceType:featureType:services:] */

undefined8 *
FUN_10601a224(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_58 = PTR_PTR_1126ef180;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10601a2ec; end: 10601a30f; +[SCCPlusUnifiedPaywallPlusPaywallWorkflowRouterProps valdiMarshallableObjectDescriptor] */

void FUN_10601a2ec(undefined8 *param_1)

{
  *param_1 = &PTR_s_deckHierarchy_110908708;
  param_1[1] = &PTR_s_SCCDeckHierarchyInterface_1109087f8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10601a310; end: 10601a5db;  */

void FUN_10601a310(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_2;
  func_0x000108f27828();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf25180(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c142320();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfe3680();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000107d70788();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x000108f27630();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000107d70788();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf25180(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c142320();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c067760();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x000107d70788();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x000108f27718(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x000107d70788();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x000108f277a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar6 = uVar2;
  func_0x000107d70788(uVar2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar8 = PTR_PTR_1126b0fb0;
  _objc_alloc_init(PTR_PTR_1126b0fb0);
  func_0x00010c1613e0();
  func_0x00010c20d9a0(puVar8);
  func_0x00010c1a89e0(puVar8);
  func_0x00010c20d920(puVar8);
  func_0x00010c1ad9e0(puVar8);
  uVar2 = param_1;
  func_0x00010bf25180(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar9 = uVar2;
  func_0x00010c142320(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c096b00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x000107d70788();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcbc0(puVar8);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10601a5dc; end: 10601a747; -[SCPlusAppAppearancePageViewController initWithRuntime:plusServices:storeKitServices:featureSettingsService:circumstanceEngine:taskManagementServices:composerCoreUIServices:valdiBlizzardLoggingServices:subscribeScopeExposer:subscribeScopeServices:customAppThemeServices:composerAnimatedImageViewServices:appStartServices:loggingContext:themeId:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10601a5dc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000048;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(in_stack_00000048);
  puVar1 = PTR_PTR_1126c7210;
  func_0x00010bf5a3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR_PTR_1126ef188;
  puVar3 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_initWithValdiView_presentationTy_1125272a0,puVar2,0);
  _objc_release(puVar2);
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x00010c0d6d60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c1bc0();
    uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_11273cf6c);
    *(undefined **)((long)puVar3 + (long)_DAT_11273cf6c) = puVar2;
    _objc_release(uVar4);
    _objc_storeWeak((long)puVar3 + (long)_DAT_11273cf70,in_stack_00000048);
  }
  _objc_release(puVar1);
  _objc_release(in_stack_00000048);
  return puVar3;
}



/* Entry: 10601a748; end: 10601a77b; -[SCPlusAppAppearancePageViewController didDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10601a748(long param_1)

{
  param_1 = param_1 + _DAT_11273cf70;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf04c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10601a77c; end: 10601a787; -[SCPlusAppAppearancePageViewController defaultProjectNameV3] */

void FUN_10601a77c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c101e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_plus_11261e1c0);
  return;
}



/* Entry: 10601a788; end: 10601a793; -[SCPlusAppAppearancePageViewController defaultProjectNameV2] */

void FUN_10601a788(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c101e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_plus_11261e1c0);
  return;
}



/* Entry: 10601a794; end: 10601a7cf; -[SCPlusAppAppearancePageViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10601a794(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273cf70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273cf6c,0);
  return;
}



/* Entry: 10601a7d0; end: 10601a873; -[SCPlusAppAppearanceViewResult initWithView:navigator:] */

undefined1 *
FUN_10601a7d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ef190;
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



/* Entry: 10601a874; end: 10601a87b; -[SCPlusAppAppearanceViewResult view] */

undefined8 FUN_10601a874(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10601a87c; end: 10601a883; -[SCPlusAppAppearanceViewResult navigator] */

undefined8 FUN_10601a87c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10601a884; end: 10601a8b3; -[SCPlusAppAppearanceViewResult .cxx_destruct] */

void FUN_10601a884(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10601a8b4; end: 10601af57; +[SCPlusAppAppearanceViewFactory createWithRuntime:plusServices:storeKitServices:featureSettingsService:circumstanceEngine:taskManagementServices:composerCoreUIServices:valdiBlizzardLoggingServices:subscribeScopeExposer:subscribeScopeServices:customAppThemeServices:composerAnimatedImageViewServices:appStartServices:loggingContext:themeId:presentingViewController:] */

void FUN_10601a8b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  _objc_retain(param_3);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000030);
  _objc_retain(in_stack_00000038);
  _objc_retain(in_stack_00000048);
  _objc_retain(in_stack_00000040);
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000000);
  _objc_retain(param_5);
  _objc_retain();
  uVar1 = in_stack_00000048;
  func_0x000106c733b0();
  _objc_retainAutoreleasedReturnValue();
  if (in_stack_00000038 == (undefined *)0x0) {
    in_stack_00000038 = PTR_PTR_1126b1da8;
    _objc_alloc();
    func_0x00010c04abe0();
  }
  uVar2 = param_4;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bfa1900(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x000106c6927c(uVar3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar7 = PTR_PTR_1126b33f0;
  _objc_alloc(PTR_PTR_1126b33f0);
  func_0x00010c040b80();
  puVar8 = PTR_PTR_1126b35c8;
  _objc_alloc();
  func_0x00010c057140();
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000010);
  uVar2 = in_stack_00000000;
  func_0x00010beef000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_stack_00000000);
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b7620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_stack_00000048);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = in_stack_00000008;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_stack_00000008);
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = in_stack_00000028;
  func_0x00010c29cc80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_stack_00000028);
  uVar5 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = in_stack_00000020;
  func_0x00010bf611e0(in_stack_00000020);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2660e0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar2);
  puVar10 = PTR_PTR_1126c7218;
  _objc_alloc(PTR_PTR_1126c7218);
  puVar11 = PTR_PTR_1126b3690;
  _objc_alloc(PTR_PTR_1126b3690);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000020);
  func_0x00010c017be0(puVar11);
  puVar12 = PTR_PTR_1126b3690;
  _objc_alloc(PTR_PTR_1126b3690);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000020);
  func_0x00010c017be0(puVar12);
  func_0x00010c0119a0(puVar10);
  _objc_release(puVar12);
  _objc_release(puVar11);
  func_0x00010c161e00(puVar10);
  func_0x00010c167ec0(puVar10);
  puVar11 = PTR_PTR_1126b3690;
  _objc_alloc(PTR_PTR_1126b3690);
  _objc_retain(in_stack_00000030);
  _objc_retain(in_stack_00000030);
  func_0x00010c017be0(puVar11);
  func_0x00010c1de0e0(puVar10);
  _objc_release(puVar11);
  func_0x00010c171b20(puVar10);
  puVar11 = in_stack_00000038;
  func_0x000106c68d1c(in_stack_00000038);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0620(puVar10);
  _objc_release(puVar11);
  puVar11 = PTR_PTR_1126b34d8;
  _objc_alloc(PTR_PTR_1126b34d8);
  func_0x00010c037880();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010c20f5e0(puVar10);
  _objc_release(puVar11);
  func_0x000100029b9c(2,0x11,0,0);
  func_0x00010c188e40(puVar10);
  func_0x00010c18ad20(puVar10);
  _objc_release(in_stack_00000040);
  puVar11 = PTR_PTR_1126c7220;
  _objc_alloc(PTR_PTR_1126c7220);
  func_0x00010c061d40();
  puVar12 = PTR_PTR_1126c7228;
  _objc_alloc(PTR_PTR_1126c7228);
  func_0x00010c0614e0();
  _objc_release(puVar11);
  _objc_release(in_stack_00000030);
  _objc_release(in_stack_00000030);
  _objc_release(puVar10);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000020);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(in_stack_00000038);
  _objc_release(in_stack_00000030);
  _objc_release(in_stack_00000020);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10601af58; end: 10601aff3;  */

void FUN_10601af58(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  ppuVar4 = *(undefined ***)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf611e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c08ed00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  (**(code **)(param_2 + 0x10))(param_2,ppuVar1);
  _objc_release(param_2);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 10601aff4; end: 10601b09b;  */

void FUN_10601aff4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c08fa60();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf611e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba460();
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  (**(code **)(param_3 + 0x10))(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10601b09c; end: 10601b287;  */

void FUN_10601b09c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf611e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_2 + 0x10))(param_2,puVar3);
    _objc_release(puVar3);
  }
  else {
    (**(code **)(param_2 + 0x10))(param_2,lVar1);
  }
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10601b288; end: 10601b327;  */

void FUN_10601b288(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c28d720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fd000();
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  (**(code **)(param_3 + 0x10))(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10601b328; end: 10601b60f; -[SCPlusSettingsAppAppearanceRowProvider initWithComposerServices:plusServices:storeKitServices:featureSettingsService:circumstanceEngine:taskManagementServices:composerCoreUIServices:valdiBlizzardLoggingServices:subscribeScopeExposer:subscribeScopeServices:customAppThemeServices:composerAnimatedImageViewServices:appStartServices:] */

undefined8 *
FUN_10601b328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126ef198;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
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
  return puVar1;
}



/* Entry: 10601b610; end: 10601b61f; -[SCPlusSettingsAppAppearanceRowProvider sectionRow] */

void FUN_10601b610(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010beed6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aeae0,PTR_s_accountWithRow__112598f58,0x1a);
  return;
}



/* Entry: 10601b620; end: 10601b7af; -[SCPlusSettingsAppAppearanceRowProvider rowViewModel] */

void FUN_10601b620(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27caa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c252440();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar9 = PTR_PTR_1126ae6b8;
  if (lVar5 == 0) {
    ppuVar8 = (undefined **)PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar9);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar8 = &PTR____CFConstantStringClassReference_110dc7a18;
    func_0x0001000f6108(&PTR____CFConstantStringClassReference_110dc7a18,
                        &PTR____CFConstantStringClassReference_110dc7a38,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126aeaf0;
    _objc_alloc(PTR_PTR_1126aeaf0);
    func_0x00010c053be0();
    puVar9 = PTR_PTR_1126ae6b8;
    puVar7 = PTR_PTR_1126ae750;
    func_0x00010c0ec800(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  _objc_release(ppuVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10601b7b0; end: 10601b8e3; -[SCPlusSettingsAppAppearanceRowProvider handleWithContext:] */

void FUN_10601b7b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126c7230;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c295440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040cc0(puVar1,param_2,uVar4,*(undefined8 *)(param_1 + 0x10),
                      *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                      *(undefined8 *)(param_1 + 0x68),0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126aead0;
  _objc_alloc(PTR_PTR_1126aead0);
  uVar3 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c02e4c0(puVar5,param_2,uVar3);
  _objc_release(uVar3);
  func_0x00010bf0c980(puVar5,param_2,puVar1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10601b8e4; end: 10601b997; -[SCPlusSettingsAppAppearanceRowProvider .cxx_destruct] */

void FUN_10601b8e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10601b998; end: 10601ba73; -[SCPlusSettingsAppAppearanceViewController initWithRuntime:plusServices:storeKitServices:featureSettingsService:circumstanceEngine:taskManagementServices:composerCoreUIServices:valdiBlizzardLoggingServices:subscribeScopeExposer:subscribeScopeServices:customAppThemeServices:composerAnimatedImageViewServices:appStartServices:loggingContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10601b998(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126c7210;
  func_0x00010bf5a3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ef1a0;
  puVar3 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_initWithValdiView__1125f5a88,puVar2);
  _objc_release(puVar2);
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x00010c0d6d60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c1bc0();
    uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_11273cfb0);
    *(undefined **)((long)puVar3 + (long)_DAT_11273cfb0) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 10601ba74; end: 10601ba7f; -[SCPlusSettingsAppAppearanceViewController defaultProjectNameV3] */

void FUN_10601ba74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c227f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_settings_112667a08);
  return;
}



/* Entry: 10601ba80; end: 10601ba8b; -[SCPlusSettingsAppAppearanceViewController defaultProjectNameV2] */

void FUN_10601ba80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c227f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_settings_112667a08);
  return;
}



/* Entry: 10601ba8c; end: 10601ba9f; -[SCPlusSettingsAppAppearanceViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10601ba8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273cfb0,0);
  return;
}



/* Entry: 10601baa0; end: 10601be63; -[SCMapFriendActionLocationSheet initWithFriend:currentUserId:context:mutingService:notificationServices:mainQueue:messagingExperimentService:shareLocationFlowFactoryServices:locationSharingPreferencesProvider:mapPeopleFriendsProvider:locationPermissionsManager:mapUserPreferences:locationSharingSettingsFactoryServices:] */

undefined8 *
FUN_10601baa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  puStack_70 = PTR_PTR_1126ef1a8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    uVar2 = puVar1[1];
    puVar1[1] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_15;
    _objc_release(uVar2);
    puVar1[0x13] = 0x16;
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    uVar3 = puVar1[1];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c0d41e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_80);
    uVar4 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[7];
    puVar1[7] = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar3);
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
  return puVar1;
}



/* Entry: 10601be64; end: 10601beab;  */

void FUN_10601be64(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c900();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10601beac; end: 10601bfeb; -[SCMapFriendActionLocationSheet actionSheetCell] */

void FUN_10601beac(undefined *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = param_1;
  FUN_10601da50();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d76c0();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    puVar4 = PTR_PTR_1126b10a0;
    func_0x00010c0d0f20(PTR_PTR_1126b10a0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    param_1 = puVar4;
    func_0x00010bf1d200(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_40);
    _objc_release(puVar4);
  }
  else {
    func_0x00010be61aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10601bfec; end: 10601c033;  */

void FUN_10601bfec(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b9e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10601c034; end: 10601c23f; -[SCMapFriendActionLocationSheet _muteFriendLocationCell] */

void FUN_10601c034(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010901e6c8();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    lVar3 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010601da68();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2923e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar8);
  _objc_release(uVar5);
  puVar6 = PTR_PTR_1126b10a0;
  func_0x00010c2655e0(PTR_PTR_1126b10a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  _objc_initWeak(auStack_50,puVar6);
  _objc_copyWeak(auStack_60,auStack_50);
  _objc_copyWeak(auStack_58,auStack_48);
  puVar7 = puVar6;
  func_0x00010bf1d200(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10601c240; end: 10601c2a7;  */

void FUN_10601c240(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c860();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10601c2a8; end: 10601c3ef; -[SCMapFriendActionLocationSheet _locationSharingSettingsCell] */

void FUN_10601c2a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126b0c40;
  func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40,param_2,0x88,0x48);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe77e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126b10a0;
  func_0x00010601db28();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec2c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  puVar1 = puVar3;
  func_0x00010bf1d200(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10601c3f0; end: 10601c41b;  */

void FUN_10601c3f0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ba00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


