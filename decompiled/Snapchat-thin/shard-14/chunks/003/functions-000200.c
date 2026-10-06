/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0b9b54; end: 10b0b9b5b; -[SCUnlockablesNetworkServices unlockManager] */

undefined8 FUN_10b0b9b54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0b9b5c; end: 10b0b9b63; -[SCUnlockablesNetworkServices unlockableRemover] */

undefined8 FUN_10b0b9b5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0b9b64; end: 10b0b9bb7; -[SCUnlockablesNetworkServices .cxx_destruct] */

void FUN_10b0b9b64(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0b9bb8; end: 10b0b9cc3; -[SCUnlockableNetworkLensResponse initWithUnlockedLenses:pinnedLenses:unlockedLensesChecksums:pinnedLensesChecksums:] */

undefined1 *
FUN_10b0b9bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_112705870;
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



/* Entry: 10b0b9cc4; end: 10b0b9ce7; -[SCUnlockableNetworkLensResponse copyWithZone:] */

undefined8 FUN_10b0b9cc4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0b9ce8; end: 10b0b9d73; -[SCUnlockableNetworkLensResponse hash] */

undefined8 * FUN_10b0b9ce8(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b0b9e24:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b0b9e30;
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
              goto LAB_10b0b9e30;
            }
            goto LAB_10b0b9e24;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b0b9e30:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b0b9d74; end: 10b0b9e4b; -[SCUnlockableNetworkLensResponse isEqual:] */

long FUN_10b0b9d74(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0b9e24:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0b9e30;
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
              goto LAB_10b0b9e30;
            }
            goto LAB_10b0b9e24;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b0b9e30:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0b9e4c; end: 10b0b9e53; -[SCUnlockableNetworkLensResponse unlockedLenses] */

undefined8 FUN_10b0b9e4c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0b9e54; end: 10b0b9e5b; -[SCUnlockableNetworkLensResponse pinnedLenses] */

undefined8 FUN_10b0b9e54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0b9e5c; end: 10b0b9e63; -[SCUnlockableNetworkLensResponse unlockedLensesChecksums] */

undefined8 FUN_10b0b9e5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0b9e64; end: 10b0b9e6b; -[SCUnlockableNetworkLensResponse pinnedLensesChecksums] */

undefined8 FUN_10b0b9e64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0b9e6c; end: 10b0b9eb3; -[SCUnlockableNetworkLensResponse .cxx_destruct] */

void FUN_10b0b9e6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0b9eb4; end: 10b0b9f3b; -[SCUnlockableNetworkAddUnlockMetadataParams initWithLensMetadataRequired:lensParams:] */

undefined1 *
FUN_10b0b9eb4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112705878;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0b9f3c; end: 10b0b9f5f; -[SCUnlockableNetworkAddUnlockMetadataParams copyWithZone:] */

undefined8 FUN_10b0b9f3c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0b9f60; end: 10b0b9fc3; -[SCUnlockableNetworkAddUnlockMetadataParams hash] */

ulong * FUN_10b0b9f60(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
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
    if ((puVar2 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10b0ba048;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || ((char)puVar2[1] != (char)param_3[1])) {
      puVar4 = (ulong *)0x0;
      goto LAB_10b0ba048;
    }
    puVar4 = (ulong *)puVar2[2];
    if (puVar4 != (ulong *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b0ba048;
    }
  }
  puVar4 = (ulong *)0x1;
LAB_10b0ba048:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b0b9fc4; end: 10b0ba063; -[SCUnlockableNetworkAddUnlockMetadataParams isEqual:] */

long FUN_10b0b9fc4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0ba048;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b0ba048;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b0ba048;
    }
  }
  lVar3 = 1;
LAB_10b0ba048:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0ba064; end: 10b0ba06b; -[SCUnlockableNetworkAddUnlockMetadataParams lensMetadataRequired] */

undefined1 FUN_10b0ba064(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b0ba06c; end: 10b0ba073; -[SCUnlockableNetworkAddUnlockMetadataParams lensParams] */

undefined8 FUN_10b0ba06c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0ba074; end: 10b0ba07f; -[SCUnlockableNetworkAddUnlockMetadataParams .cxx_destruct] */

void FUN_10b0ba074(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0ba080; end: 10b0ba107; -[SCUnlockableNetworkMetadataParams initWithLensType:defaultExpiration:] */

undefined1 *
FUN_10b0ba080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112705880;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0ba108; end: 10b0ba12b; -[SCUnlockableNetworkMetadataParams copyWithZone:] */

undefined8 FUN_10b0ba108(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0ba12c; end: 10b0ba193; -[SCUnlockableNetworkMetadataParams hash] */

long * FUN_10b0ba12c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  func_0x00010bfde980();
  plVar3 = &lStack_28;
  uStack_20 = uVar2;
  func_0x000107c3191c(plVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 != param_3) {
    plVar5 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10b0ba218;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar4 & 1) == 0) || (plVar3[1] != param_3[1])) {
      plVar5 = (long *)0x0;
      goto LAB_10b0ba218;
    }
    plVar5 = (long *)plVar3[2];
    if (plVar5 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b0ba218;
    }
  }
  plVar5 = (long *)0x1;
LAB_10b0ba218:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 10b0ba194; end: 10b0ba233; -[SCUnlockableNetworkMetadataParams isEqual:] */

long FUN_10b0ba194(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0ba218;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b0ba218;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b0ba218;
    }
  }
  lVar3 = 1;
LAB_10b0ba218:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0ba234; end: 10b0ba23b; -[SCUnlockableNetworkMetadataParams lensType] */

undefined8 FUN_10b0ba234(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0ba23c; end: 10b0ba243; -[SCUnlockableNetworkMetadataParams defaultExpiration] */

undefined8 FUN_10b0ba23c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0ba244; end: 10b0ba24f; -[SCUnlockableNetworkMetadataParams .cxx_destruct] */

void FUN_10b0ba244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0ba250; end: 10b0ba327; -[SCUnlockableNetworkUnlockableChecksumResponse initWithIdValue:checksum:clientCacheTtlMinutes:] */

undefined1 *
FUN_10b0ba250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112705888;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0ba328; end: 10b0ba34b; -[SCUnlockableNetworkUnlockableChecksumResponse copyWithZone:] */

undefined8 FUN_10b0ba328(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0ba34c; end: 10b0ba3cb; -[SCUnlockableNetworkUnlockableChecksumResponse hash] */

undefined8 * FUN_10b0ba34c(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_10b0ba464:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b0ba470;
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
            goto LAB_10b0ba470;
          }
          goto LAB_10b0ba464;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b0ba470:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b0ba3cc; end: 10b0ba48b; -[SCUnlockableNetworkUnlockableChecksumResponse isEqual:] */

long FUN_10b0ba3cc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0ba464:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0ba470;
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
            goto LAB_10b0ba470;
          }
          goto LAB_10b0ba464;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b0ba470:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0ba48c; end: 10b0ba493; -[SCUnlockableNetworkUnlockableChecksumResponse idValue] */

undefined8 FUN_10b0ba48c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0ba494; end: 10b0ba49b; -[SCUnlockableNetworkUnlockableChecksumResponse checksum] */

undefined8 FUN_10b0ba494(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0ba49c; end: 10b0ba4a3; -[SCUnlockableNetworkUnlockableChecksumResponse clientCacheTtlMinutes] */

undefined8 FUN_10b0ba49c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0ba4a4; end: 10b0ba4df; -[SCUnlockableNetworkUnlockableChecksumResponse .cxx_destruct] */

void FUN_10b0ba4a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0ba4e0; end: 10b0ba4fb; +[SCUnlockableNetworkUnlockableChecksumResponseBuilder unlockableNetworkUnlockableChecksumResponse] */

void FUN_10b0ba4e0(void)

{
  _objc_alloc_init(PTR_PTR_1126df928);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0ba4fc; end: 10b0ba613; +[SCUnlockableNetworkUnlockableChecksumResponseBuilder unlockableNetworkUnlockableChecksumResponseFromExistingUnlockableNetworkUnlockableChecksumResponse:] */

void FUN_10b0ba4fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126df928;
  _objc_retain(param_3);
  func_0x00010c281280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfe5e40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2af980(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf38a80(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2aa6a0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf3cba0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar7 = puVar5;
  func_0x00010c2aa760(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10b0ba614; end: 10b0ba647; -[SCUnlockableNetworkUnlockableChecksumResponseBuilder build] */

void FUN_10b0ba614(void)

{
  _objc_alloc(PTR_PTR_1126bbff8);
  func_0x00010c01b380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0ba648; end: 10b0ba67f; -[SCUnlockableNetworkUnlockableChecksumResponseBuilder withIdValue:] */

long FUN_10b0ba648(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0ba680; end: 10b0ba6b7; -[SCUnlockableNetworkUnlockableChecksumResponseBuilder withChecksum:] */

long FUN_10b0ba680(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0ba6b8; end: 10b0ba6ef; -[SCUnlockableNetworkUnlockableChecksumResponseBuilder withClientCacheTtlMinutes:] */

long FUN_10b0ba6b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0ba6f0; end: 10b0ba72b; -[SCUnlockableNetworkUnlockableChecksumResponseBuilder .cxx_destruct] */

void FUN_10b0ba6f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0ba72c; end: 10b0ba7d7; -[SCUnlockableNetworkGetUnlocksResponse initWithLenses:groupedUnlocks:] */

undefined1 *
FUN_10b0ba72c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112705890;
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



/* Entry: 10b0ba7d8; end: 10b0ba7fb; -[SCUnlockableNetworkGetUnlocksResponse copyWithZone:] */

undefined8 FUN_10b0ba7d8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0ba7fc; end: 10b0ba86f; -[SCUnlockableNetworkGetUnlocksResponse hash] */

undefined8 * FUN_10b0ba7fc(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b0ba8f0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b0ba8fc;
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
          goto LAB_10b0ba8fc;
        }
        goto LAB_10b0ba8f0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b0ba8fc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b0ba870; end: 10b0ba917; -[SCUnlockableNetworkGetUnlocksResponse isEqual:] */

long FUN_10b0ba870(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0ba8f0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0ba8fc;
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
          goto LAB_10b0ba8fc;
        }
        goto LAB_10b0ba8f0;
      }
    }
    lVar3 = 0;
  }
LAB_10b0ba8fc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0ba918; end: 10b0ba91f; -[SCUnlockableNetworkGetUnlocksResponse lenses] */

undefined8 FUN_10b0ba918(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0ba920; end: 10b0ba927; -[SCUnlockableNetworkGetUnlocksResponse groupedUnlocks] */

undefined8 FUN_10b0ba920(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0ba928; end: 10b0ba957; -[SCUnlockableNetworkGetUnlocksResponse .cxx_destruct] */

void FUN_10b0ba928(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0ba958; end: 10b0ba973; +[SCUnlockableNetworkGetUnlocksResponseBuilder unlockableNetworkGetUnlocksResponse] */

void FUN_10b0ba958(void)

{
  _objc_alloc_init(PTR_PTR_1126df930);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0ba974; end: 10b0baa47; +[SCUnlockableNetworkGetUnlocksResponseBuilder unlockableNetworkGetUnlocksResponseFromExistingUnlockableNetworkGetUnlocksResponse:] */

void FUN_10b0ba974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126df930;
  _objc_retain(param_3);
  func_0x00010c2811e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c098240(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b2da0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfcf760(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = puVar3;
  func_0x00010c2aefe0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b0baa48; end: 10b0baa77; -[SCUnlockableNetworkGetUnlocksResponseBuilder build] */

void FUN_10b0baa48(void)

{
  _objc_alloc(PTR_PTR_1126bbfe8);
  func_0x00010c025d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0baa78; end: 10b0baaaf; -[SCUnlockableNetworkGetUnlocksResponseBuilder withLenses:] */

long FUN_10b0baa78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0baab0; end: 10b0baae7; -[SCUnlockableNetworkGetUnlocksResponseBuilder withGroupedUnlocks:] */

long FUN_10b0baab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0baae8; end: 10b0bab17; -[SCUnlockableNetworkGetUnlocksResponseBuilder .cxx_destruct] */

void FUN_10b0baae8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0bab18; end: 10b0bab8f; -[SCUnlockableNetworkOrderedUnlocks initWithUnlocks:] */

undefined1 * FUN_10b0bab18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705898;
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



/* Entry: 10b0bab90; end: 10b0babb3; -[SCUnlockableNetworkOrderedUnlocks copyWithZone:] */

undefined8 FUN_10b0bab90(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0babb4; end: 10b0babbb; -[SCUnlockableNetworkOrderedUnlocks hash] */

void FUN_10b0babb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b0babbc; end: 10b0bac4b; -[SCUnlockableNetworkOrderedUnlocks isEqual:] */

long FUN_10b0babbc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0bac30;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b0bac30;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b0bac30;
    }
  }
  lVar3 = 1;
LAB_10b0bac30:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0bac4c; end: 10b0bac53; -[SCUnlockableNetworkOrderedUnlocks unlocks] */

undefined8 FUN_10b0bac4c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0bac54; end: 10b0bac5f; -[SCUnlockableNetworkOrderedUnlocks .cxx_destruct] */

void FUN_10b0bac54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0bac60; end: 10b0bac7b; +[SCUnlockableNetworkOrderedUnlocksBuilder unlockableNetworkOrderedUnlocks] */

void FUN_10b0bac60(void)

{
  _objc_alloc_init(PTR_PTR_1126df938);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0bac7c; end: 10b0bad0b; +[SCUnlockableNetworkOrderedUnlocksBuilder unlockableNetworkOrderedUnlocksFromExistingUnlockableNetworkOrderedUnlocks:] */

void FUN_10b0bac7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126df938;
  _objc_retain(param_3);
  func_0x00010c281260(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c281780(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010c2bbfc0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b0bad0c; end: 10b0bad3b; -[SCUnlockableNetworkOrderedUnlocksBuilder build] */

void FUN_10b0bad0c(void)

{
  _objc_alloc(PTR_PTR_1126bbff0);
  func_0x00010c059440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0bad3c; end: 10b0bad73; -[SCUnlockableNetworkOrderedUnlocksBuilder withUnlocks:] */

long FUN_10b0bad3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0bad74; end: 10b0bad7f; -[SCUnlockableNetworkOrderedUnlocksBuilder .cxx_destruct] */

void FUN_10b0bad74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0bad80; end: 10b0badcb; -[SCUnlockableNetworkUnlockGroup initWithUnlockType:unlockableType:] */

void FUN_10b0bad80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127058a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10b0badcc; end: 10b0badef; -[SCUnlockableNetworkUnlockGroup copyWithZone:] */

undefined8 FUN_10b0badcc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0badf0; end: 10b0bae47; -[SCUnlockableNetworkUnlockGroup hash] */

undefined8 * FUN_10b0badf0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 8);
  func_0x000107c3191c(&uStack_30,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || (*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x10) == *(long *)(param_3 + 0x10));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar3;
}



/* Entry: 10b0bae48; end: 10b0baedf; -[SCUnlockableNetworkUnlockGroup isEqual:] */

bool FUN_10b0bae48(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b0baee0; end: 10b0baee7; -[SCUnlockableNetworkUnlockGroup unlockType] */

undefined8 FUN_10b0baee0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0baee8; end: 10b0baeef; -[SCUnlockableNetworkUnlockGroup unlockableType] */

undefined8 FUN_10b0baee8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0baef0; end: 10b0baefb; -[SCLensMetadataRetrievingServices .cxx_destruct] */

void FUN_10b0baef0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0baefc; end: 10b0baf93; +[SCLensMetadataRetrievalResult errorWithLensId:error:] */

void FUN_10b0baefc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126de278;
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



/* Entry: 10b0baf94; end: 10b0bafff; +[SCLensMetadataRetrievalResult pendingWithLensId:] */

void FUN_10b0baf94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126de278;
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



/* Entry: 10b0bb000; end: 10b0bb06b; +[SCLensMetadataRetrievalResult succeedWithLens:retrievalSource:] */

void FUN_10b0bb000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126de278;
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



/* Entry: 10b0bb06c; end: 10b0bb08f; -[SCLensMetadataRetrievalResult copyWithZone:] */

undefined8 FUN_10b0bb06c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0bb090; end: 10b0bb12b; -[SCLensMetadataRetrievalResult hash] */

void FUN_10b0bb090(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar1 = *(long *)(param_1 + 0x18);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  lStack_48 = -lVar1;
  if (-1 < lVar1) {
    lStack_48 = lVar1;
  }
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar4 = &uStack_58;
  uStack_30 = uVar3;
  func_0x000107c3191c(puVar4,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1127058b0;
  puStack_90 = puVar4;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0bb12c; end: 10b0bb16f; -[SCLensMetadataRetrievalResult internalInit] */

void FUN_10b0bb12c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1127058b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0bb170; end: 10b0bb267; -[SCLensMetadataRetrievalResult isEqual:] */

long FUN_10b0bb170(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0bb240:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0bb24c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if (lVar3 != *(long *)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_10b0bb24c;
            }
            goto LAB_10b0bb240;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b0bb24c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0bb268; end: 10b0bb31b; -[SCLensMetadataRetrievalResult matchSucceed:pending:error:] */

void FUN_10b0bb268(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 2) {
    if (param_5 == 0) goto LAB_10b0bb2f8;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    pcVar4 = *(code **)(param_5 + 0x10);
    lVar3 = param_5;
  }
  else {
    if (lVar3 == 1) {
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x20));
      }
      goto LAB_10b0bb2f8;
    }
    if ((lVar3 != 0) || (param_3 == 0)) goto LAB_10b0bb2f8;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    pcVar4 = *(code **)(param_3 + 0x10);
    lVar3 = param_3;
  }
  (*pcVar4)(lVar3,uVar1,uVar2);
LAB_10b0bb2f8:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0bb31c; end: 10b0bb363; -[SCLensMetadataRetrievalResult .cxx_destruct] */

void FUN_10b0bb31c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0bb364; end: 10b0bb36b; -[SCSnapcodeServices identifierProvider] */

undefined8 FUN_10b0bb364(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0bb36c; end: 10b0bb39b; -[SCSnapcodeServices .cxx_destruct] */

void FUN_10b0bb36c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0bb39c; end: 10b0bb423; -[SCSnapcodeIdentifier initWithUuid:version:] */

undefined1 *
FUN_10b0bb39c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127058c0;
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



/* Entry: 10b0bb424; end: 10b0bb447; -[SCSnapcodeIdentifier copyWithZone:] */

undefined8 FUN_10b0bb424(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0bb448; end: 10b0bb4bb; -[SCSnapcodeIdentifier hash] */

undefined8 * FUN_10b0bb448(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b0bb540;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_10b0bb540;
    }
    puVar5 = (undefined8 *)puVar2[1];
    if (puVar5 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_10b0bb540;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_10b0bb540:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10b0bb4bc; end: 10b0bb55b; -[SCSnapcodeIdentifier isEqual:] */

long FUN_10b0bb4bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0bb540;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_10b0bb540;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b0bb540;
    }
  }
  lVar3 = 1;
LAB_10b0bb540:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0bb55c; end: 10b0bb563; -[SCSnapcodeIdentifier uuid] */

undefined8 FUN_10b0bb55c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0bb564; end: 10b0bb56b; -[SCSnapcodeIdentifier version] */

undefined8 FUN_10b0bb564(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0bb56c; end: 10b0bb577; -[SCSnapcodeIdentifier .cxx_destruct] */

void FUN_10b0bb56c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0bb578; end: 10b0bb5ff; -[SCSnapcodeIdentifierExtended initWithIdentifier:source:] */

undefined1 *
FUN_10b0bb578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127058c8;
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



/* Entry: 10b0bb600; end: 10b0bb623; -[SCSnapcodeIdentifierExtended copyWithZone:] */

undefined8 FUN_10b0bb600(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0bb624; end: 10b0bb697; -[SCSnapcodeIdentifierExtended hash] */

undefined8 * FUN_10b0bb624(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b0bb71c;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_10b0bb71c;
    }
    puVar5 = (undefined8 *)puVar2[1];
    if (puVar5 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_10b0bb71c;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_10b0bb71c:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10b0bb698; end: 10b0bb737; -[SCSnapcodeIdentifierExtended isEqual:] */

long FUN_10b0bb698(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0bb71c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_10b0bb71c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b0bb71c;
    }
  }
  lVar3 = 1;
LAB_10b0bb71c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0bb738; end: 10b0bb73f; -[SCSnapcodeIdentifierExtended identifier] */

undefined8 FUN_10b0bb738(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0bb740; end: 10b0bb747; -[SCSnapcodeIdentifierExtended source] */

undefined8 FUN_10b0bb740(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0bb748; end: 10b0bb753; -[SCSnapcodeIdentifierExtended .cxx_destruct] */

void FUN_10b0bb748(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0bb754; end: 10b0bb867; -[SCSnapcodeMetadata initWithUseCase:payload:stringData:identifier:scannableId:] */

undefined1 *
FUN_10b0bb754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1127058d0;
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
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0bb868; end: 10b0bb88b; -[SCSnapcodeMetadata copyWithZone:] */

undefined8 FUN_10b0bb868(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0bb88c; end: 10b0bb923; -[SCSnapcodeMetadata hash] */

long * FUN_10b0bb88c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar3 = &lStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_50 = -lVar5;
  if (-1 < lVar5) {
    lStack_50 = lVar5;
  }
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
  func_0x000107c3191c(&lStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == (long *)param_3) {
LAB_10b0bb9e4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b0bb9f0;
    puVar6 = (undefined1 *)plVar3;
    _objc_opt_class(plVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)plVar3 + 8) == *(long *)(param_3 + 8))) {
      lVar5 = *(long *)((long)plVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)plVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)plVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)plVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10b0bb9f0;
            }
            goto LAB_10b0bb9e4;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b0bb9f0:
  _objc_release(param_3);
  return (long *)puVar6;
}


