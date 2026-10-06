/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1050c86f8; end: 1050c871b; -[SCProfileCharmsCardViewCellViewModel copyWithZone:] */

undefined8 FUN_1050c86f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050c871c; end: 1050c87c3; -[SCProfileCharmsCardViewCellViewModel hash] */

undefined8 * FUN_1050c871c(long param_1,undefined8 param_2,undefined1 *param_3)

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
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1050c88b4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1050c88c0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x30);
              if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
                if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_1050c88c0;
                }
                goto LAB_1050c88b4;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1050c88c0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1050c87c4; end: 1050c88db; -[SCProfileCharmsCardViewCellViewModel isEqual:] */

long FUN_1050c87c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1050c88b4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050c88c0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if (lVar3 != *(long *)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_1050c88c0;
                }
                goto LAB_1050c88b4;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1050c88c0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050c88dc; end: 1050c88e3; -[SCProfileCharmsCardViewCellViewModel titleViewModel] */

undefined8 FUN_1050c88dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1050c88e4; end: 1050c88eb; -[SCProfileCharmsCardViewCellViewModel contentViewModel] */

undefined8 FUN_1050c88e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1050c88ec; end: 1050c88f3; -[SCProfileCharmsCardViewCellViewModel charmDescription] */

undefined8 FUN_1050c88ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1050c88f4; end: 1050c88fb; -[SCProfileCharmsCardViewCellViewModel unviewed] */

undefined1 FUN_1050c88f4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1050c88fc; end: 1050c8903; -[SCProfileCharmsCardViewCellViewModel supplementaryInfo] */

undefined8 FUN_1050c88fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1050c8904; end: 1050c890b; -[SCProfileCharmsCardViewCellViewModel charmInfo] */

undefined8 FUN_1050c8904(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1050c890c; end: 1050c8913; -[SCProfileCharmsCardViewCellViewModel charmsLogParameters] */

undefined8 FUN_1050c890c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1050c8914; end: 1050c8973; -[SCProfileCharmsCardViewCellViewModel .cxx_destruct] */

void FUN_1050c8914(long param_1)

{
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



/* Entry: 1050c8974; end: 1050c89eb; -[SCProfileCharmsCardViewCellViewModelSupplementaryInfo initWithSnapStreakCharmSnapStreakCount:] */

undefined1 * FUN_1050c8974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6088;
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



/* Entry: 1050c89ec; end: 1050c8a0f; -[SCProfileCharmsCardViewCellViewModelSupplementaryInfo copyWithZone:] */

undefined8 FUN_1050c89ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050c8a10; end: 1050c8a17; -[SCProfileCharmsCardViewCellViewModelSupplementaryInfo hash] */

void FUN_1050c8a10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 1050c8a18; end: 1050c8aa7; -[SCProfileCharmsCardViewCellViewModelSupplementaryInfo isEqual:] */

long FUN_1050c8a18(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050c8a8c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_1050c8a8c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1050c8a8c;
    }
  }
  lVar3 = 1;
LAB_1050c8a8c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050c8aa8; end: 1050c8aaf; -[SCProfileCharmsCardViewCellViewModelSupplementaryInfo snapStreakCharmSnapStreakCount] */

undefined8 FUN_1050c8aa8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1050c8ab0; end: 1050c8abb; -[SCProfileCharmsCardViewCellViewModelSupplementaryInfo .cxx_destruct] */

void FUN_1050c8ab0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050c8abc; end: 1050c8b6f; -[SCCharmsRestoreCharmsDataRequest initWithCharmsOwner:charmIdentifier:profileSessionId:] */

undefined1 *
FUN_1050c8abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
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
  puStack_38 = PTR_PTR_1126e6090;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
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



/* Entry: 1050c8b70; end: 1050c8b93; -[SCCharmsRestoreCharmsDataRequest copyWithZone:] */

undefined8 FUN_1050c8b70(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050c8b94; end: 1050c8c0b; -[SCCharmsRestoreCharmsDataRequest hash] */

undefined8 * FUN_1050c8b94(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lStack_38 = (long)*(int *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1050c8c9c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1050c8ca8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(int *)((long)puVar3 + 8) == *(int *)(param_3 + 8))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1050c8ca8;
        }
        goto LAB_1050c8c9c;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1050c8ca8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1050c8c0c; end: 1050c8cc3; -[SCCharmsRestoreCharmsDataRequest isEqual:] */

long FUN_1050c8c0c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1050c8c9c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050c8ca8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(int *)(param_1 + 8) == *(int *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1050c8ca8;
        }
        goto LAB_1050c8c9c;
      }
    }
    lVar3 = 0;
  }
LAB_1050c8ca8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050c8cc4; end: 1050c8ccb; -[SCCharmsRestoreCharmsDataRequest charmsOwner] */

undefined8 FUN_1050c8cc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1050c8ccc; end: 1050c8cd3; -[SCCharmsRestoreCharmsDataRequest charmIdentifier] */

undefined4 FUN_1050c8ccc(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1050c8cd4; end: 1050c8cdb; -[SCCharmsRestoreCharmsDataRequest profileSessionId] */

undefined8 FUN_1050c8cd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1050c8cdc; end: 1050c8d0b; -[SCCharmsRestoreCharmsDataRequest .cxx_destruct] */

void FUN_1050c8cdc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1050c8d0c; end: 1050c8db7; -[SCCharmsSyncCharmsDataRequest initWithCharmsOwner:profileSessionId:] */

undefined1 *
FUN_1050c8d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6098;
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



/* Entry: 1050c8db8; end: 1050c8ddb; -[SCCharmsSyncCharmsDataRequest copyWithZone:] */

undefined8 FUN_1050c8db8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050c8ddc; end: 1050c8e4f; -[SCCharmsSyncCharmsDataRequest hash] */

undefined8 * FUN_1050c8ddc(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1050c8ed0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1050c8edc;
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
          goto LAB_1050c8edc;
        }
        goto LAB_1050c8ed0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1050c8edc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1050c8e50; end: 1050c8ef7; -[SCCharmsSyncCharmsDataRequest isEqual:] */

long FUN_1050c8e50(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1050c8ed0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050c8edc;
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
          goto LAB_1050c8edc;
        }
        goto LAB_1050c8ed0;
      }
    }
    lVar3 = 0;
  }
LAB_1050c8edc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050c8ef8; end: 1050c8eff; -[SCCharmsSyncCharmsDataRequest charmsOwner] */

undefined8 FUN_1050c8ef8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1050c8f00; end: 1050c8f07; -[SCCharmsSyncCharmsDataRequest profileSessionId] */

undefined8 FUN_1050c8f00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1050c8f08; end: 1050c8f37; -[SCCharmsSyncCharmsDataRequest .cxx_destruct] */

void FUN_1050c8f08(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050c8f38; end: 1050c8f9b; +[SCCharmsUpdateLocalCharmsDataRequest charmsOwnerWithCharmsOwner:] */

void FUN_1050c8f38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b4878;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050c8f9c; end: 1050c9007; +[SCCharmsUpdateLocalCharmsDataRequest friendWithUsername:] */

void FUN_1050c8f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b4878;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050c9008; end: 1050c902b; -[SCCharmsUpdateLocalCharmsDataRequest copyWithZone:] */

undefined8 FUN_1050c9008(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050c902c; end: 1050c90a3; -[SCCharmsUpdateLocalCharmsDataRequest hash] */

void FUN_1050c902c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126e60a0;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050c90a4; end: 1050c90e7; -[SCCharmsUpdateLocalCharmsDataRequest internalInit] */

void FUN_1050c90a4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e60a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050c90e8; end: 1050c919f; -[SCCharmsUpdateLocalCharmsDataRequest isEqual:] */

long FUN_1050c90e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1050c9178:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050c9184;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1050c9184;
        }
        goto LAB_1050c9178;
      }
    }
    lVar3 = 0;
  }
LAB_1050c9184:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050c91a0; end: 1050c9223; -[SCCharmsUpdateLocalCharmsDataRequest matchCharmsOwner:friend:] */

void FUN_1050c91a0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_1050c9208;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_1050c9208;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_1050c9208:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050c9224; end: 1050c9253; -[SCCharmsUpdateLocalCharmsDataRequest .cxx_destruct] */

void FUN_1050c9224(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1050c9254; end: 1050c92eb; +[SCCharmsFlushCharmViewingsDataRequest flushViewingToRemoteWithCharmsOwner:viewedCharmIdentifiers:] */

void FUN_1050c9254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b4820;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050c92ec; end: 1050c934f; +[SCCharmsFlushCharmViewingsDataRequest flushWithCharmsOwner:] */

void FUN_1050c92ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b4820;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050c9350; end: 1050c9373; -[SCCharmsFlushCharmViewingsDataRequest copyWithZone:] */

undefined8 FUN_1050c9350(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050c9374; end: 1050c93f7; -[SCCharmsFlushCharmViewingsDataRequest hash] */

void FUN_1050c9374(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126e60a8;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050c93f8; end: 1050c943b; -[SCCharmsFlushCharmViewingsDataRequest internalInit] */

void FUN_1050c93f8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e60a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050c943c; end: 1050c950b; -[SCCharmsFlushCharmViewingsDataRequest isEqual:] */

long FUN_1050c943c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1050c94e4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050c94f0;
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
            goto LAB_1050c94f0;
          }
          goto LAB_1050c94e4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1050c94f0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050c950c; end: 1050c9593; -[SCCharmsFlushCharmViewingsDataRequest matchFlush:flushViewingToRemote:] */

void FUN_1050c950c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050c9594; end: 1050c95cf; -[SCCharmsFlushCharmViewingsDataRequest .cxx_destruct] */

void FUN_1050c9594(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1050c95d0; end: 1050c9647; -[SCCharmsPurgeCharmsDataRequest initWithCharmsOwner:] */

undefined1 * FUN_1050c95d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e60b0;
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



/* Entry: 1050c9648; end: 1050c966b; -[SCCharmsPurgeCharmsDataRequest copyWithZone:] */

undefined8 FUN_1050c9648(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050c966c; end: 1050c9673; -[SCCharmsPurgeCharmsDataRequest hash] */

void FUN_1050c966c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 1050c9674; end: 1050c9703; -[SCCharmsPurgeCharmsDataRequest isEqual:] */

long FUN_1050c9674(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050c96e8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_1050c96e8;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1050c96e8;
    }
  }
  lVar3 = 1;
LAB_1050c96e8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050c9704; end: 1050c970b; -[SCCharmsPurgeCharmsDataRequest charmsOwner] */

undefined8 FUN_1050c9704(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1050c970c; end: 1050c9717; -[SCCharmsPurgeCharmsDataRequest .cxx_destruct] */

void FUN_1050c970c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050c9718; end: 1050c9783; +[SCCharmsOwner chatGroupWithGroupMischiefID:] */

void FUN_1050c9718(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b3ce8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050c9784; end: 1050c97e7; +[SCCharmsOwner friendWithFriendUserID:] */

void FUN_1050c9784(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b3ce8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050c97e8; end: 1050c980b; -[SCCharmsOwner copyWithZone:] */

undefined8 FUN_1050c97e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050c980c; end: 1050c9883; -[SCCharmsOwner hash] */

void FUN_1050c980c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126e60b8;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050c9884; end: 1050c98c7; -[SCCharmsOwner internalInit] */

void FUN_1050c9884(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e60b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050c98c8; end: 1050c997f; -[SCCharmsOwner isEqual:] */

long FUN_1050c98c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1050c9958:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050c9964;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1050c9964;
        }
        goto LAB_1050c9958;
      }
    }
    lVar3 = 0;
  }
LAB_1050c9964:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050c9980; end: 1050c9a03; -[SCCharmsOwner matchFriend:chatGroup:] */

void FUN_1050c9980(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_1050c99e8;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_1050c99e8;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_1050c99e8:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050c9a04; end: 1050c9a33; -[SCCharmsOwner .cxx_destruct] */

void FUN_1050c9a04(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1050c9a34; end: 1050c9aab; -[SCCharmsUndoHideCharmsDataRequest initWithHideCharmsDataRequest:] */

undefined1 * FUN_1050c9a34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e60c0;
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



/* Entry: 1050c9aac; end: 1050c9acf; -[SCCharmsUndoHideCharmsDataRequest copyWithZone:] */

undefined8 FUN_1050c9aac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050c9ad0; end: 1050c9ad7; -[SCCharmsUndoHideCharmsDataRequest hash] */

void FUN_1050c9ad0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 1050c9ad8; end: 1050c9b67; -[SCCharmsUndoHideCharmsDataRequest isEqual:] */

long FUN_1050c9ad8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050c9b4c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_1050c9b4c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1050c9b4c;
    }
  }
  lVar3 = 1;
LAB_1050c9b4c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050c9b68; end: 1050c9b6f; -[SCCharmsUndoHideCharmsDataRequest hideCharmsDataRequest] */

undefined8 FUN_1050c9b68(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1050c9b70; end: 1050c9b7b; -[SCCharmsUndoHideCharmsDataRequest .cxx_destruct] */

void FUN_1050c9b70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050c9b7c; end: 1050c9c03; -[SCCharmsViewCharmsDataRequest initWithCharmsOwner:charmIdentifier:] */

undefined1 *
FUN_1050c9b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e60c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050c9c04; end: 1050c9c27; -[SCCharmsViewCharmsDataRequest copyWithZone:] */

undefined8 FUN_1050c9c04(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050c9c28; end: 1050c9c93; -[SCCharmsViewCharmsDataRequest hash] */

undefined8 * FUN_1050c9c28(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lStack_30 = (long)*(int *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1050c9d18;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(int *)(puVar2 + 1) != *(int *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_1050c9d18;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_1050c9d18;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_1050c9d18:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 1050c9c94; end: 1050c9d33; -[SCCharmsViewCharmsDataRequest isEqual:] */

long FUN_1050c9c94(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050c9d18;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(int *)(param_1 + 8) != *(int *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_1050c9d18;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_1050c9d18;
    }
  }
  lVar3 = 1;
LAB_1050c9d18:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050c9d34; end: 1050c9d3b; -[SCCharmsViewCharmsDataRequest charmsOwner] */

undefined8 FUN_1050c9d34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1050c9d3c; end: 1050c9d43; -[SCCharmsViewCharmsDataRequest charmIdentifier] */

undefined4 FUN_1050c9d3c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1050c9d44; end: 1050c9d4f; -[SCCharmsViewCharmsDataRequest .cxx_destruct] */

void FUN_1050c9d44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1050c9d50; end: 1050c9e03; -[SCCharmsHideCharmsDataRequest initWithCharmsOwner:charmIdentifier:profileSessionId:] */

undefined1 *
FUN_1050c9d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
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
  puStack_38 = PTR_PTR_1126e60d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
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



/* Entry: 1050c9e04; end: 1050c9e27; -[SCCharmsHideCharmsDataRequest copyWithZone:] */

undefined8 FUN_1050c9e04(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050c9e28; end: 1050c9e9f; -[SCCharmsHideCharmsDataRequest hash] */

undefined8 * FUN_1050c9e28(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lStack_38 = (long)*(int *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1050c9f30:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1050c9f3c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(int *)((long)puVar3 + 8) == *(int *)(param_3 + 8))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1050c9f3c;
        }
        goto LAB_1050c9f30;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1050c9f3c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1050c9ea0; end: 1050c9f57; -[SCCharmsHideCharmsDataRequest isEqual:] */

long FUN_1050c9ea0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1050c9f30:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050c9f3c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(int *)(param_1 + 8) == *(int *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1050c9f3c;
        }
        goto LAB_1050c9f30;
      }
    }
    lVar3 = 0;
  }
LAB_1050c9f3c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050c9f58; end: 1050c9f5f; -[SCCharmsHideCharmsDataRequest charmsOwner] */

undefined8 FUN_1050c9f58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1050c9f60; end: 1050c9f67; -[SCCharmsHideCharmsDataRequest charmIdentifier] */

undefined4 FUN_1050c9f60(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1050c9f68; end: 1050c9f6f; -[SCCharmsHideCharmsDataRequest profileSessionId] */

undefined8 FUN_1050c9f68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1050c9f70; end: 1050c9f9f; -[SCCharmsHideCharmsDataRequest .cxx_destruct] */

void FUN_1050c9f70(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1050c9fa0; end: 1050ca007; +[SCCPCharmsHideRequest descriptor] */

void FUN_1050c9fa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b92f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a16200,
                        &PTR____CFConstantStringClassReference_110dc57d8,
                        &PTR_s_snapchat_charms_api_1130c2948,&PTR_s_owner_1130c29c0,5,0x28,0x1c);
    puRam00000001136b92f8 = puVar1;
  }
  return;
}



/* Entry: 1050ca008; end: 1050ca06f; +[SCCPCharmsHideResponse descriptor] */

void FUN_1050ca008(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9300 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a16250,
                        &PTR____CFConstantStringClassReference_110dc57f8,
                        &PTR_s_snapchat_charms_api_1130c2948,&PTR_s_hiddenCharmIdsArray_1130c2960,3,
                        0x20,0x1c);
    puRam00000001136b9300 = puVar1;
  }
  return;
}



/* Entry: 1050ca070; end: 1050ca0d7; +[SCCPCharmsRestoreRequest descriptor] */

void FUN_1050ca070(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9308 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a162f0,
                        &PTR____CFConstantStringClassReference_110dc5818,
                        &PTR_s_snapchat_charms_api_1130c2a60,&PTR_s_owner_1130c2ad8,5,0x28,0x1c);
    puRam00000001136b9308 = puVar1;
  }
  return;
}



/* Entry: 1050ca0d8; end: 1050ca13f; +[SCCPCharmsRestoreResponse descriptor] */

void FUN_1050ca0d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9310 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a16340,
                        &PTR____CFConstantStringClassReference_110dc5838,
                        &PTR_s_snapchat_charms_api_1130c2a60,&PTR_s_restoredCharmIdsArray_1130c2a78,
                        3,0x20,0x1c);
    puRam00000001136b9310 = puVar1;
  }
  return;
}



/* Entry: 1050ca140; end: 1050ca1a7; +[SCCPCharmsViewRequest descriptor] */

void FUN_1050ca140(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9318 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a163e0,
                        &PTR____CFConstantStringClassReference_110dc5858,
                        &PTR_s_snapchat_charms_api_1130c2b78,&PTR_s_owner_1130c2bf0,5,0x28,0x1c);
    puRam00000001136b9318 = puVar1;
  }
  return;
}



/* Entry: 1050ca1a8; end: 1050ca20f; +[SCCPCharmsViewResponse descriptor] */

void FUN_1050ca1a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9320 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a16430,
                        &PTR____CFConstantStringClassReference_110dc5878,
                        &PTR_s_snapchat_charms_api_1130c2b78,&PTR_s_viewedCharmIdsArray_1130c2b90,3,
                        0x20,0x1c);
    puRam00000001136b9320 = puVar1;
  }
  return;
}



/* Entry: 1050ca210; end: 1050ca22b; +[SCCharmsUnifiedProfileLogParametersBuilder charmsUnifiedProfileLogParameters] */

void FUN_1050ca210(void)

{
  _objc_alloc_init(PTR_PTR_1126b4838);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050ca22c; end: 1050ca4fb; +[SCCharmsUnifiedProfileLogParametersBuilder charmsUnifiedProfileLogParametersFromExistingCharmsUnifiedProfileLogParameters:] */

void FUN_1050ca22c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  
  puVar1 = PTR_PTR_1126b4838;
  _objc_retain(param_3);
  func_0x00010bf35d20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c074960(param_3);
  puVar3 = puVar1;
  func_0x00010c2b0a80(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0737c0(param_3);
  puVar4 = puVar3;
  func_0x00010c2b08a0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c117220();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2b62e0(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf35b60(param_3);
  puVar7 = puVar5;
  func_0x00010c2aa500(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c06e460(param_3);
  puVar8 = puVar7;
  func_0x00010c2b0400(puVar7,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c104260(param_3);
  puVar9 = puVar8;
  func_0x00010c2b5840(puVar8,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0c29e0(param_3);
  puVar10 = puVar9;
  func_0x00010c2b36a0(puVar9,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29cc60(param_3);
  puVar11 = puVar10;
  func_0x00010c2bc8a0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bfbb080(param_3);
  puVar12 = puVar11;
  func_0x00010c2ae8e0(puVar11,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bfbb040(param_3);
  puVar13 = puVar12;
  func_0x00010c2ae8a0(puVar12,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bfbb060(param_3);
  puVar14 = puVar13;
  func_0x00010c2ae8c0(puVar13,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010beef120(param_3);
  puVar15 = puVar14;
  func_0x00010c2a7600(puVar14,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010beee260(param_3);
  puVar16 = puVar15;
  func_0x00010c2a7500(puVar15,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010beee3a0(param_3);
  _objc_release(param_3);
  puVar17 = puVar16;
  func_0x00010c2a7520(puVar16,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 1050ca4fc; end: 1050ca55b; -[SCCharmsUnifiedProfileLogParametersBuilder build] */

void FUN_1050ca4fc(long param_1)

{
  _objc_alloc(PTR_PTR_1126b49a8);
  func_0x00010c01f140(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050ca55c; end: 1050ca563; -[SCCharmsUnifiedProfileLogParametersBuilder withIsGroupProfile:] */

void FUN_1050ca55c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1050ca564; end: 1050ca56b; -[SCCharmsUnifiedProfileLogParametersBuilder withIsFriendProfile:] */

void FUN_1050ca564(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 1050ca56c; end: 1050ca5a3; -[SCCharmsUnifiedProfileLogParametersBuilder withProfileSessionID:] */

long FUN_1050ca56c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1050ca5a4; end: 1050ca5ab; -[SCCharmsUnifiedProfileLogParametersBuilder withCharmID:] */

void FUN_1050ca5a4(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 1050ca5ac; end: 1050ca5b3; -[SCCharmsUnifiedProfileLogParametersBuilder withIsCharmNew:] */

void FUN_1050ca5ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1c) = param_3;
  return;
}



/* Entry: 1050ca5b4; end: 1050ca5bb; -[SCCharmsUnifiedProfileLogParametersBuilder withPosition:] */

void FUN_1050ca5b4(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 1050ca5bc; end: 1050ca5c3; -[SCCharmsUnifiedProfileLogParametersBuilder withMaxPosition:] */

void FUN_1050ca5bc(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x24) = param_3;
  return;
}



/* Entry: 1050ca5c4; end: 1050ca5cb; -[SCCharmsUnifiedProfileLogParametersBuilder withViewDuration:] */

void FUN_1050ca5c4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}


