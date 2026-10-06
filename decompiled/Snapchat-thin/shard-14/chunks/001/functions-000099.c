/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afd1edc; end: 10afd1ee3; -[SCSyncedFeedEntriesUpdateEvent isInitialFetchFeed] */

undefined1 FUN_10afd1edc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afd1ee4; end: 10afd1f07; -[SCFeedEntriesUpdateEvent copyWithZone:] */

undefined8 FUN_10afd1ee4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afd1f08; end: 10afd1f9f; -[SCFeedEntriesUpdateEvent hash] */

undefined8 * FUN_10afd1f08(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
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
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10afd2068:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afd2074;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
              if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_10afd2074;
              }
              goto LAB_10afd2068;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10afd2074:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10afd1fa0; end: 10afd208f; -[SCFeedEntriesUpdateEvent isEqual:] */

long FUN_10afd1fa0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afd2068:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afd2074;
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
              if (lVar3 != *(long *)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_10afd2074;
              }
              goto LAB_10afd2068;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afd2074:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afd2090; end: 10afd2097; -[SCFeedEntriesUpdateEvent updatedFeedEntries] */

undefined8 FUN_10afd2090(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afd2098; end: 10afd209f; -[SCFeedEntriesUpdateEvent multiRecipientFeedEntries] */

undefined8 FUN_10afd2098(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afd20a0; end: 10afd20a7; -[SCFeedEntriesUpdateEvent deletedFeedEntries] */

undefined8 FUN_10afd20a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afd20a8; end: 10afd20af; -[SCFeedEntriesUpdateEvent multiRecipientFeedEntriesDeleted] */

undefined8 FUN_10afd20a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afd20b0; end: 10afd20b7; -[SCFeedEntriesUpdateEvent updateMetadata] */

undefined8 FUN_10afd20b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afd20b8; end: 10afd20db; -[SCFriendsFeedUpdateEvent copyWithZone:] */

undefined8 FUN_10afd20b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afd20dc; end: 10afd218f; -[SCFriendsFeedUpdateEvent hash] */

undefined8 * FUN_10afd20dc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x30);
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar3 = &uStack_68;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afd2290:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afd229c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((puVar3[6] == param_3[6] && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[7];
              if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[8];
                if (puVar6 != (undefined8 *)param_3[8]) {
                  func_0x00010c071ae0();
                  goto LAB_10afd229c;
                }
                goto LAB_10afd2290;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afd229c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afd2190; end: 10afd22b7; -[SCFriendsFeedUpdateEvent isEqual:] */

long FUN_10afd2190(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afd2290:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afd229c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if (lVar3 != *(long *)(param_3 + 0x40)) {
                  func_0x00010c071ae0();
                  goto LAB_10afd229c;
                }
                goto LAB_10afd2290;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afd229c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afd22b8; end: 10afd2323; +[SCSponsoredSnapFeedLifecycleEvent onAdRequestBuildStartWithAdSyncAttemptId:trigger:] */

void FUN_10afd22b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ba508;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afd2324; end: 10afd238f; +[SCSponsoredSnapFeedLifecycleEvent onAdRequestBuildSuccessWithAdSyncAttemptId:] */

void FUN_10afd2324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ba508;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afd2390; end: 10afd2427; +[SCSponsoredSnapFeedLifecycleEvent onAdResponseSuccessWithAdSyncAttemptId:adResponseBytes:] */

void FUN_10afd2390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ba508;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afd2428; end: 10afd24bf; +[SCSponsoredSnapFeedLifecycleEvent onFeedEnteredWithAdSyncAttemptId:feedSessionId:] */

void FUN_10afd2428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ba508;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x68);
  *(undefined8 *)(puVar2 + 0x68) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x70);
  *(undefined8 *)(puVar2 + 0x70) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afd24c0; end: 10afd2567; +[SCSponsoredSnapFeedLifecycleEvent onSponsoredSnapHiddenWithAdSyncAttemptId:isNoFill:adResponseBytes:] */

void FUN_10afd24c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ba508;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  puVar2[0x58] = param_4;
  uVar3 = *(undefined8 *)(puVar2 + 0x60);
  *(undefined8 *)(puVar2 + 0x60) = param_5;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afd2568; end: 10afd260f; +[SCSponsoredSnapFeedLifecycleEvent onSponsoredSnapInsertedWithAdSyncAttemptId:isNoFill:adResponseBytes:] */

void FUN_10afd2568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ba508;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  puVar2[0x40] = param_4;
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_5;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afd2610; end: 10afd2633; -[SCSponsoredSnapFeedLifecycleEvent copyWithZone:] */

undefined8 FUN_10afd2610(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afd2634; end: 10afd2717; -[SCSponsoredSnapFeedLifecycleEvent hash] */

void FUN_10afd2634(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_88 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uStack_60 = (ulong)*(byte *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_98;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,0xe);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_c8 = PTR_PTR_112703b60;
  puStack_d0 = puVar3;
  _objc_msgSendSuper2(&puStack_d0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afd2718; end: 10afd275b; -[SCSponsoredSnapFeedLifecycleEvent internalInit] */

void FUN_10afd2718(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112703b60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afd275c; end: 10afd2903; -[SCSponsoredSnapFeedLifecycleEvent isEqual:] */

long FUN_10afd275c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afd28dc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afd28e8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
          (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
         (*(char *)(param_1 + 0x40) == *(char *)(param_3 + 0x40))) &&
        (*(char *)(param_1 + 0x58) == *(char *)(param_3 + 0x58))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x48);
                if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x50);
                  if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x60);
                    if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x68);
                      if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x70);
                        if (lVar3 != *(long *)(param_3 + 0x70)) {
                          func_0x00010c071ae0();
                          goto LAB_10afd28e8;
                        }
                        goto LAB_10afd28dc;
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
LAB_10afd28e8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afd2904; end: 10afd2a73; -[SCSponsoredSnapFeedLifecycleEvent matchOnAdRequestBuildStart:onAdRequestBuildSuccess:onAdResponseSuccess:onSponsoredSnapInserted:onSponsoredSnapHidden:onFeedEntered:] */

void FUN_10afd2904(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 < 3) {
    if (lVar4 == 0) {
      if (param_3 == 0) goto LAB_10afd2a30;
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      pcVar5 = *(code **)(param_3 + 0x10);
      lVar4 = param_3;
    }
    else {
      if (lVar4 == 1) {
        if (param_4 != 0) {
          (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x20));
        }
        goto LAB_10afd2a30;
      }
      if ((lVar4 != 2) || (param_5 == 0)) goto LAB_10afd2a30;
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      pcVar5 = *(code **)(param_5 + 0x10);
      lVar4 = param_5;
    }
LAB_10afd29d8:
    (*pcVar5)(lVar4,uVar2,uVar3);
  }
  else {
    if (lVar4 == 3) {
      if (param_6 == 0) goto LAB_10afd2a30;
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      uVar1 = *(undefined1 *)(param_1 + 0x40);
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      pcVar5 = *(code **)(param_6 + 0x10);
      lVar4 = param_6;
    }
    else {
      if (lVar4 != 4) {
        if ((lVar4 != 5) || (param_8 == 0)) goto LAB_10afd2a30;
        uVar2 = *(undefined8 *)(param_1 + 0x68);
        uVar3 = *(undefined8 *)(param_1 + 0x70);
        pcVar5 = *(code **)(param_8 + 0x10);
        lVar4 = param_8;
        goto LAB_10afd29d8;
      }
      if (param_7 == 0) goto LAB_10afd2a30;
      uVar2 = *(undefined8 *)(param_1 + 0x50);
      uVar1 = *(undefined1 *)(param_1 + 0x58);
      uVar3 = *(undefined8 *)(param_1 + 0x60);
      pcVar5 = *(code **)(param_7 + 0x10);
      lVar4 = param_7;
    }
    (*pcVar5)(lVar4,uVar2,uVar1,uVar3);
  }
LAB_10afd2a30:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afd2a74; end: 10afd2b03; -[SCSponsoredSnapFeedLifecycleEvent .cxx_destruct] */

void FUN_10afd2a74(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afd2b04; end: 10afd2c0f; -[SCConversationUpdateEvent initWithConversationId:conversation:updatedMessages:removedMessages:] */

undefined1 *
FUN_10afd2b04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112703b68;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afd2c10; end: 10afd2c33; -[SCConversationUpdateEvent copyWithZone:] */

undefined8 FUN_10afd2c10(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afd2c34; end: 10afd2cbf; -[SCConversationUpdateEvent hash] */

undefined8 * FUN_10afd2c34(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10afd2d70:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afd2d7c;
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
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_10afd2d7c;
            }
            goto LAB_10afd2d70;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afd2d7c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afd2cc0; end: 10afd2d97; -[SCConversationUpdateEvent isEqual:] */

long FUN_10afd2cc0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afd2d70:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afd2d7c;
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
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10afd2d7c;
            }
            goto LAB_10afd2d70;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afd2d7c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afd2d98; end: 10afd2d9f; -[SCConversationUpdateEvent conversationId] */

undefined8 FUN_10afd2d98(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afd2da0; end: 10afd2da7; -[SCConversationUpdateEvent conversation] */

undefined8 FUN_10afd2da0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afd2da8; end: 10afd2daf; -[SCConversationUpdateEvent updatedMessages] */

undefined8 FUN_10afd2da8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afd2db0; end: 10afd2db7; -[SCConversationUpdateEvent removedMessages] */

undefined8 FUN_10afd2db0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afd2db8; end: 10afd2dff; -[SCConversationUpdateEvent .cxx_destruct] */

void FUN_10afd2db8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afd2e00; end: 10afd2e77; -[SCNativePostSnapInteractionEvent initWithConversationId:] */

undefined1 * FUN_10afd2e00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112703b70;
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



/* Entry: 10afd2e78; end: 10afd2e9b; -[SCNativePostSnapInteractionEvent copyWithZone:] */

undefined8 FUN_10afd2e78(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afd2e9c; end: 10afd2ea3; -[SCNativePostSnapInteractionEvent hash] */

void FUN_10afd2e9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10afd2ea4; end: 10afd2f33; -[SCNativePostSnapInteractionEvent isEqual:] */

long FUN_10afd2ea4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afd2f18;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10afd2f18;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10afd2f18;
    }
  }
  lVar3 = 1;
LAB_10afd2f18:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afd2f34; end: 10afd2f3b; -[SCNativePostSnapInteractionEvent conversationId] */

undefined8 FUN_10afd2f34(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afd2f3c; end: 10afd2f47; -[SCNativePostSnapInteractionEvent .cxx_destruct] */

void FUN_10afd2f3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afd2f48; end: 10afd3013; -[SCMessageWindowUpdateEvent initWithConversationId:operationType:window:] */

undefined1 *
FUN_10afd2f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112703b78;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afd3014; end: 10afd3037; -[SCMessageWindowUpdateEvent copyWithZone:] */

undefined8 FUN_10afd3014(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afd3038; end: 10afd30b7; -[SCMessageWindowUpdateEvent hash] */

undefined8 * FUN_10afd3038(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_10afd3150:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afd315c;
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
            goto LAB_10afd315c;
          }
          goto LAB_10afd3150;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10afd315c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10afd30b8; end: 10afd3177; -[SCMessageWindowUpdateEvent isEqual:] */

long FUN_10afd30b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afd3150:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afd315c;
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
            goto LAB_10afd315c;
          }
          goto LAB_10afd3150;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afd315c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afd3178; end: 10afd317f; -[SCMessageWindowUpdateEvent conversationId] */

undefined8 FUN_10afd3178(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afd3180; end: 10afd3187; -[SCMessageWindowUpdateEvent operationType] */

undefined8 FUN_10afd3180(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afd3188; end: 10afd318f; -[SCMessageWindowUpdateEvent window] */

undefined8 FUN_10afd3188(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afd3190; end: 10afd31cb; -[SCMessageWindowUpdateEvent .cxx_destruct] */

void FUN_10afd3190(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afd31cc; end: 10afd3257; -[SCMessageWindowErrorEvent initWithConversationId:operationType:status:] */

undefined1 *
FUN_10afd31cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112703b80;
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



/* Entry: 10afd3258; end: 10afd327b; -[SCMessageWindowErrorEvent copyWithZone:] */

undefined8 FUN_10afd3258(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afd327c; end: 10afd32ef; -[SCMessageWindowErrorEvent hash] */

undefined8 * FUN_10afd327c(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afd3384;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10afd3384;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 8);
    if (puVar4 != *(undefined1 **)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10afd3384;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10afd3384:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10afd32f0; end: 10afd339f; -[SCMessageWindowErrorEvent isEqual:] */

long FUN_10afd32f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afd3384;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_10afd3384;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10afd3384;
    }
  }
  lVar3 = 1;
LAB_10afd3384:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afd33a0; end: 10afd33a7; -[SCMessageWindowErrorEvent conversationId] */

undefined8 FUN_10afd33a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afd33a8; end: 10afd33af; -[SCMessageWindowErrorEvent operationType] */

undefined8 FUN_10afd33a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afd33b0; end: 10afd33b7; -[SCMessageWindowErrorEvent status] */

undefined8 FUN_10afd33b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afd33b8; end: 10afd33c3; -[SCMessageWindowErrorEvent .cxx_destruct] */

void FUN_10afd33b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afd33c4; end: 10afd33eb; +[SCLensExplorerCategoriesProviderConfiguration defaultBatchConfiguration] */

void FUN_10afd33c4(void)

{
  _objc_alloc(PTR_PTR_1126cce30);
  func_0x00010c012520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afd33ec; end: 10afd343b; +[SCLensExplorerCategoriesProviderConfiguration batchConfigurationWithPreselectedFeedId:] */

void FUN_10afd33ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cce30;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c012520();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10afd343c; end: 10afd348b; +[SCLensExplorerCategoriesProviderConfiguration singleCategoryConfigurationWithFeedId:] */

void FUN_10afd343c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cce30;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c012520();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10afd348c; end: 10afd3493; -[SCLensExplorerDataQueryContext queryFactory] */

undefined8 FUN_10afd348c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afd3494; end: 10afd349b; -[SCLensExplorerDataQueryContext categoriesProviderFactory] */

undefined8 FUN_10afd3494(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afd349c; end: 10afd34a3; -[SCLensExplorerDataQueryContext queryCoordinatorFactory] */

undefined8 FUN_10afd349c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afd34a4; end: 10afd34ab; -[SCLensExplorerDataQueryContext lensCollectionCategoryProvider] */

undefined8 FUN_10afd34a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afd34ac; end: 10afd34b3; -[SCLensExplorerDataQueryContext categoriesBatchRefreshFactory] */

undefined8 FUN_10afd34ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afd34b4; end: 10afd34bb; -[SCLensExplorerDataQueryContext dataStoreFactory] */

undefined8 FUN_10afd34b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afd34bc; end: 10afd34eb; -[SCLensExplorerDataQueryContext setDataStoreFactory:] */

void FUN_10afd34bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10afd34ec; end: 10afd34f3; -[SCLensExplorerDataQueryContext sectionConfigurationsDataStore] */

undefined8 FUN_10afd34ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afd34f4; end: 10afd3523; -[SCLensExplorerDataQueryContext setSectionConfigurationsDataStore:] */

void FUN_10afd34f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10afd3524; end: 10afd352b; -[SCLensExplorerDataQueryContext containersProvider] */

undefined8 FUN_10afd3524(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10afd352c; end: 10afd355b; -[SCLensExplorerDataQueryContext setContainersProvider:] */

void FUN_10afd352c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10afd355c; end: 10afd3563; -[SCLensExplorerDataQueryContext feedLensesProvider] */

undefined8 FUN_10afd355c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10afd3564; end: 10afd35e7; -[SCLensExplorerDataQueryContext .cxx_destruct] */

void FUN_10afd3564(long param_1)

{
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



/* Entry: 10afd35e8; end: 10afd35ef; -[SCLensExplorerDataServices requestRanker] */

undefined8 FUN_10afd35e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afd35f0; end: 10afd35f7; -[SCLensExplorerDataServices defultQueryContext] */

undefined8 FUN_10afd35f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afd35f8; end: 10afd35ff; -[SCLensExplorerDataServices postCaptureQueryContext] */

undefined8 FUN_10afd35f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afd3600; end: 10afd3607; -[SCLensExplorerDataServices directorsQueryContext] */

undefined8 FUN_10afd3600(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afd3608; end: 10afd360f; -[SCLensExplorerDataServices hermosaHomeQueryContext] */

undefined8 FUN_10afd3608(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afd3610; end: 10afd3617; -[SCLensExplorerDataServices hermosaConnectedQueryContext] */

undefined8 FUN_10afd3610(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afd3618; end: 10afd361f; -[SCLensExplorerDataServices arBarQueryContext] */

undefined8 FUN_10afd3618(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afd3620; end: 10afd3627; -[SCLensExplorerDataServices arBarReplyQueryContext] */

undefined8 FUN_10afd3620(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10afd3628; end: 10afd362f; -[SCLensExplorerDataServices arBarCallQueryContext] */

undefined8 FUN_10afd3628(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10afd3630; end: 10afd3637; -[SCLensExplorerDataServices memoriesTemplateQueryContext] */

undefined8 FUN_10afd3630(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10afd3638; end: 10afd363f; -[SCLensExplorerDataServices gamesDrawerQueryContext] */

undefined8 FUN_10afd3638(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10afd3640; end: 10afd3647; -[SCLensExplorerDataServices dataQueryContextProvider] */

undefined8 FUN_10afd3640(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10afd3648; end: 10afd36ef; -[SCLensExplorerDataServices .cxx_destruct] */

void FUN_10afd3648(long param_1)

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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afd36f0; end: 10afd38b7; -[SCLensExplorerContainerItem initWithContainerId:name:containerDescription:items:renderStrategy:feedId:remoteState:deeplinkURL:] */

undefined1 *
FUN_10afd36f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_112703b98;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afd38b8; end: 10afd38db; -[SCLensExplorerContainerItem copyWithZone:] */

undefined8 FUN_10afd38b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afd38dc; end: 10afd3997; -[SCLensExplorerContainerItem hash] */

undefined8 * FUN_10afd38dc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
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
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_68;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afd3aa8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afd3ab4;
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
                lVar5 = puVar3[6];
                if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[7];
                  if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    puVar6 = (undefined8 *)puVar3[8];
                    if (puVar6 != (undefined8 *)param_3[8]) {
                      func_0x00010c071ae0();
                      goto LAB_10afd3ab4;
                    }
                    goto LAB_10afd3aa8;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afd3ab4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afd3998; end: 10afd3acf; -[SCLensExplorerContainerItem isEqual:] */

long FUN_10afd3998(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afd3aa8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afd3ab4;
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
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if ((lVar3 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x40);
                    if (lVar3 != *(long *)(param_3 + 0x40)) {
                      func_0x00010c071ae0();
                      goto LAB_10afd3ab4;
                    }
                    goto LAB_10afd3aa8;
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
LAB_10afd3ab4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afd3ad0; end: 10afd3ad7; -[SCLensExplorerContainerItem containerId] */

undefined8 FUN_10afd3ad0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afd3ad8; end: 10afd3adf; -[SCLensExplorerContainerItem name] */

undefined8 FUN_10afd3ad8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afd3ae0; end: 10afd3ae7; -[SCLensExplorerContainerItem containerDescription] */

undefined8 FUN_10afd3ae0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afd3ae8; end: 10afd3aef; -[SCLensExplorerContainerItem items] */

undefined8 FUN_10afd3ae8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afd3af0; end: 10afd3af7; -[SCLensExplorerContainerItem renderStrategy] */

undefined8 FUN_10afd3af0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afd3af8; end: 10afd3aff; -[SCLensExplorerContainerItem feedId] */

undefined8 FUN_10afd3af8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afd3b00; end: 10afd3b07; -[SCLensExplorerContainerItem remoteState] */

undefined8 FUN_10afd3b00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afd3b08; end: 10afd3b0f; -[SCLensExplorerContainerItem deeplinkURL] */

undefined8 FUN_10afd3b08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10afd3b10; end: 10afd3b87; -[SCLensExplorerContainerItem .cxx_destruct] */

void FUN_10afd3b10(long param_1)

{
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



/* Entry: 10afd3b88; end: 10afd3ba3; +[SCLensExplorerContainerItemBuilder lensExplorerContainerItem] */

void FUN_10afd3b88(void)

{
  _objc_alloc_init(PTR_PTR_1126cd128);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afd3ba4; end: 10afd3e07; +[SCLensExplorerContainerItemBuilder lensExplorerContainerItemFromExistingLensExplorerContainerItem:] */

void FUN_10afd3ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  
  puVar1 = PTR_PTR_1126cd128;
  _objc_retain(param_3);
  func_0x00010c092be0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf4ae20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2aad20(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b4480(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf4ada0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2aad00(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c084fc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2b1bc0(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c130180(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c2b6d00(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010bfa3d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010c2adc80(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c12a440(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010c2b6c60(puVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010bf68960(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar17 = puVar15;
  func_0x00010c2ac100(puVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar16);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 10afd3e08; end: 10afd3e4f; -[SCLensExplorerContainerItemBuilder build] */

void FUN_10afd3e08(void)

{
  _objc_alloc(PTR_PTR_1126ccd70);
  func_0x00010c002780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


