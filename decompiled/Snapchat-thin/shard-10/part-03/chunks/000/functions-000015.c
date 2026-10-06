/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d3e7d8; end: 107d3e8b7; -[SCDeleteSnapchatterActionData isEqual:] */

long FUN_107d3e7d8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d3e890:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d3e89c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_107d3e89c;
          }
          goto LAB_107d3e890;
        }
      }
    }
    lVar3 = 0;
  }
LAB_107d3e89c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d3e8b8; end: 107d3e8bf; -[SCDeleteSnapchatterActionData snapchatter] */

undefined8 FUN_107d3e8b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d3e8c0; end: 107d3e8c7; -[SCDeleteSnapchatterActionData indexPath] */

undefined8 FUN_107d3e8c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d3e8c8; end: 107d3e8cf; -[SCDeleteSnapchatterActionData deleteSource] */

undefined8 FUN_107d3e8c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d3e8d0; end: 107d3e8d7; -[SCDeleteSnapchatterActionData shouldShowAlertView] */

undefined1 FUN_107d3e8d0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d3e8d8; end: 107d3e8df; -[SCDeleteSnapchatterActionData sourceSessionId] */

undefined8 FUN_107d3e8d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d3e8e0; end: 107d3e91b; -[SCDeleteSnapchatterActionData .cxx_destruct] */

void FUN_107d3e8e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d3e91c; end: 107d3e9df; -[SCHideSuggestedSnapchatterActionData initWithSnapchatter:indexPath:placement:suggestionPage:] */

undefined1 *
FUN_107d3e91c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126faba0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined4 *)((long)puVar1 + 8) = param_6;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d3e9e0; end: 107d3ea03; -[SCHideSuggestedSnapchatterActionData copyWithZone:] */

undefined8 FUN_107d3e9e0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d3ea04; end: 107d3ea8b; -[SCHideSuggestedSnapchatterActionData hash] */

undefined8 * FUN_107d3ea04(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x20);
  lStack_38 = -lVar5;
  if (-1 < lVar5) {
    lStack_38 = lVar5;
  }
  uStack_30 = (ulong)*(uint *)(param_1 + 8);
  puVar3 = &uStack_48;
  uStack_40 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107d3eb2c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107d3eb38;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((puVar3[4] == param_3[4] && (*(int *)(puVar3 + 1) == *(int *)(param_3 + 1))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[3];
        if (puVar6 != (undefined8 *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_107d3eb38;
        }
        goto LAB_107d3eb2c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107d3eb38:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107d3ea8c; end: 107d3eb53; -[SCHideSuggestedSnapchatterActionData isEqual:] */

long FUN_107d3ea8c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d3eb2c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d3eb38;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
        (*(int *)(param_1 + 8) == *(int *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107d3eb38;
        }
        goto LAB_107d3eb2c;
      }
    }
    lVar3 = 0;
  }
LAB_107d3eb38:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d3eb54; end: 107d3eb5b; -[SCHideSuggestedSnapchatterActionData snapchatter] */

undefined8 FUN_107d3eb54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d3eb5c; end: 107d3eb63; -[SCHideSuggestedSnapchatterActionData indexPath] */

undefined8 FUN_107d3eb5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d3eb64; end: 107d3eb6b; -[SCHideSuggestedSnapchatterActionData placement] */

undefined8 FUN_107d3eb64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d3eb6c; end: 107d3eb73; -[SCHideSuggestedSnapchatterActionData suggestionPage] */

undefined4 FUN_107d3eb6c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 107d3eb74; end: 107d3eba3; -[SCHideSuggestedSnapchatterActionData .cxx_destruct] */

void FUN_107d3eb74(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d3eba4; end: 107d3ebeb; -[SCHideSuggestionUnitActionData initWithPlacement:] */

void FUN_107d3eba4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126faba8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 107d3ebec; end: 107d3ec0f; -[SCHideSuggestionUnitActionData copyWithZone:] */

undefined8 FUN_107d3ebec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d3ec10; end: 107d3ec1f; -[SCHideSuggestionUnitActionData hash] */

long FUN_107d3ec10(long param_1)

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



/* Entry: 107d3ec20; end: 107d3eca7; -[SCHideSuggestionUnitActionData isEqual:] */

bool FUN_107d3ec20(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 107d3eca8; end: 107d3ecaf; -[SCHideSuggestionUnitActionData placement] */

undefined8 FUN_107d3eca8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d3ecb0; end: 107d3ed63; -[SCIgnoreSnapchatterActionData initWithSnapchatter:indexPath:shouldShowAlert:] */

undefined1 *
FUN_107d3ecb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fabb0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d3ed64; end: 107d3ed87; -[SCIgnoreSnapchatterActionData copyWithZone:] */

undefined8 FUN_107d3ed64(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d3ed88; end: 107d3edff; -[SCIgnoreSnapchatterActionData hash] */

undefined8 * FUN_107d3ed88(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107d3ee90:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107d3ee9c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107d3ee9c;
        }
        goto LAB_107d3ee90;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107d3ee9c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107d3ee00; end: 107d3eeb7; -[SCIgnoreSnapchatterActionData isEqual:] */

long FUN_107d3ee00(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d3ee90:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d3ee9c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107d3ee9c;
        }
        goto LAB_107d3ee90;
      }
    }
    lVar3 = 0;
  }
LAB_107d3ee9c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d3eeb8; end: 107d3eebf; -[SCIgnoreSnapchatterActionData snapchatter] */

undefined8 FUN_107d3eeb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d3eec0; end: 107d3eec7; -[SCIgnoreSnapchatterActionData indexPath] */

undefined8 FUN_107d3eec0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d3eec8; end: 107d3eecf; -[SCIgnoreSnapchatterActionData shouldShowAlert] */

undefined1 FUN_107d3eec8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d3eed0; end: 107d3eeff; -[SCIgnoreSnapchatterActionData .cxx_destruct] */

void FUN_107d3eed0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d3ef00; end: 107d3ef8f; -[SCInviteContactActionData initWithContactNonSnapchatter:inviteViaSMS:featureType:] */

undefined1 *
FUN_107d3ef00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fabb8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d3ef90; end: 107d3efb3; -[SCInviteContactActionData copyWithZone:] */

undefined8 FUN_107d3ef90(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d3efb4; end: 107d3f02f; -[SCInviteContactActionData hash] */

undefined8 * FUN_107d3efb4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar1 = -uVar2;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  uStack_30 = (ulong)uVar1;
  uStack_40 = uVar3;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 != (undefined8 *)param_3) {
    puVar6 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107d3f0c4;
    puVar6 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar5 & 1) == 0) ||
       ((*(char *)((long)puVar4 + 8) != param_3[8] ||
        (*(int *)((long)puVar4 + 0xc) != *(int *)(param_3 + 0xc))))) {
      puVar6 = (undefined1 *)0x0;
      goto LAB_107d3f0c4;
    }
    puVar6 = *(undefined1 **)((long)puVar4 + 0x10);
    if (puVar6 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107d3f0c4;
    }
  }
  puVar6 = (undefined1 *)0x1;
LAB_107d3f0c4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107d3f030; end: 107d3f0df; -[SCInviteContactActionData isEqual:] */

long FUN_107d3f030(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d3f0c4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
        (*(int *)(param_1 + 0xc) != *(int *)(param_3 + 0xc))))) {
      lVar3 = 0;
      goto LAB_107d3f0c4;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107d3f0c4;
    }
  }
  lVar3 = 1;
LAB_107d3f0c4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d3f0e0; end: 107d3f0e7; -[SCInviteContactActionData contactNonSnapchatter] */

undefined8 FUN_107d3f0e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d3f0e8; end: 107d3f0ef; -[SCInviteContactActionData inviteViaSMS] */

undefined1 FUN_107d3f0e8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d3f0f0; end: 107d3f0f7; -[SCInviteContactActionData featureType] */

undefined4 FUN_107d3f0f0(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 107d3f0f8; end: 107d3f103; -[SCInviteContactActionData .cxx_destruct] */

void FUN_107d3f0f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d3f104; end: 107d3f1af; -[SCManageFriendshipActionData initWithSnapchatter:sourceSessionId:] */

undefined1 *
FUN_107d3f104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fabc0;
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



/* Entry: 107d3f1b0; end: 107d3f1d3; -[SCManageFriendshipActionData copyWithZone:] */

undefined8 FUN_107d3f1b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d3f1d4; end: 107d3f247; -[SCManageFriendshipActionData hash] */

undefined8 * FUN_107d3f1d4(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_107d3f2c8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107d3f2d4;
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
          goto LAB_107d3f2d4;
        }
        goto LAB_107d3f2c8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107d3f2d4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107d3f248; end: 107d3f2ef; -[SCManageFriendshipActionData isEqual:] */

long FUN_107d3f248(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d3f2c8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d3f2d4;
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
          goto LAB_107d3f2d4;
        }
        goto LAB_107d3f2c8;
      }
    }
    lVar3 = 0;
  }
LAB_107d3f2d4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d3f2f0; end: 107d3f2f7; -[SCManageFriendshipActionData snapchatter] */

undefined8 FUN_107d3f2f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d3f2f8; end: 107d3f2ff; -[SCManageFriendshipActionData sourceSessionId] */

undefined8 FUN_107d3f2f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d3f300; end: 107d3f32f; -[SCManageFriendshipActionData .cxx_destruct] */

void FUN_107d3f300(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d3f330; end: 107d3f377; -[SCOpenAddFriendsActionData initWithPlacement:] */

void FUN_107d3f330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fabc8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 107d3f378; end: 107d3f39b; -[SCOpenAddFriendsActionData copyWithZone:] */

undefined8 FUN_107d3f378(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d3f39c; end: 107d3f3ab; -[SCOpenAddFriendsActionData hash] */

long FUN_107d3f39c(long param_1)

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



/* Entry: 107d3f3ac; end: 107d3f433; -[SCOpenAddFriendsActionData isEqual:] */

bool FUN_107d3f3ac(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 107d3f434; end: 107d3f43b; -[SCOpenAddFriendsActionData placement] */

undefined8 FUN_107d3f434(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d3f43c; end: 107d3f487; -[SCOpenFindFriendsActionData initWithPlacement:findFriendsPageType:] */

void FUN_107d3f43c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fabd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 107d3f488; end: 107d3f4ab; -[SCOpenFindFriendsActionData copyWithZone:] */

undefined8 FUN_107d3f488(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d3f4ac; end: 107d3f507; -[SCOpenFindFriendsActionData hash] */

undefined8 * FUN_107d3f4ac(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  func_0x000100505190(&uStack_30,2);
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



/* Entry: 107d3f508; end: 107d3f59f; -[SCOpenFindFriendsActionData isEqual:] */

bool FUN_107d3f508(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 107d3f5a0; end: 107d3f5a7; -[SCOpenFindFriendsActionData placement] */

undefined8 FUN_107d3f5a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d3f5a8; end: 107d3f5af; -[SCOpenFindFriendsActionData findFriendsPageType] */

undefined8 FUN_107d3f5a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d3f5b0; end: 107d3f65b; -[SCUnblockSnapchatterActionData initWithBlockedSnapchatter:indexPath:] */

undefined1 *
FUN_107d3f5b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fabd8;
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



/* Entry: 107d3f65c; end: 107d3f67f; -[SCUnblockSnapchatterActionData copyWithZone:] */

undefined8 FUN_107d3f65c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d3f680; end: 107d3f6f3; -[SCUnblockSnapchatterActionData hash] */

undefined8 * FUN_107d3f680(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_107d3f774:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107d3f780;
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
          goto LAB_107d3f780;
        }
        goto LAB_107d3f774;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107d3f780:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107d3f6f4; end: 107d3f79b; -[SCUnblockSnapchatterActionData isEqual:] */

long FUN_107d3f6f4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d3f774:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d3f780;
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
          goto LAB_107d3f780;
        }
        goto LAB_107d3f774;
      }
    }
    lVar3 = 0;
  }
LAB_107d3f780:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d3f79c; end: 107d3f7a3; -[SCUnblockSnapchatterActionData blockedSnapchatter] */

undefined8 FUN_107d3f79c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d3f7a4; end: 107d3f7ab; -[SCUnblockSnapchatterActionData indexPath] */

undefined8 FUN_107d3f7a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d3f7ac; end: 107d3f7db; -[SCUnblockSnapchatterActionData .cxx_destruct] */

void FUN_107d3f7ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d3f7dc; end: 107d3f8a3; -[SCFriendActionSheetData initWithSnapchatter:sourcePageType:sourceSessionId:nonFriendAddSourceType:nonFriendAddPlacementType:] */

undefined1 *
FUN_107d3f7dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fabe0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d3f8a4; end: 107d3f8c7; -[SCFriendActionSheetData copyWithZone:] */

undefined8 FUN_107d3f8a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d3f8c8; end: 107d3f953; -[SCFriendActionSheetData hash] */

undefined8 * FUN_107d3f8c8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 0x18);
  lStack_48 = -lVar4;
  if (-1 < lVar4) {
    lStack_48 = lVar4;
  }
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (undefined8 *)param_3) {
LAB_107d3fa04:
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107d3fa10;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) != 0) &&
       (((*(long *)((long)puVar2 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(long *)((long)puVar2 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(long *)((long)puVar2 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar4 = *(long *)((long)puVar2 + 8);
      if ((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        puVar5 = *(undefined1 **)((long)puVar2 + 0x18);
        if (puVar5 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107d3fa10;
        }
        goto LAB_107d3fa04;
      }
    }
    puVar5 = (undefined1 *)0x0;
  }
LAB_107d3fa10:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 107d3f954; end: 107d3fa2b; -[SCFriendActionSheetData isEqual:] */

long FUN_107d3f954(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d3fa04:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d3fa10;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107d3fa10;
        }
        goto LAB_107d3fa04;
      }
    }
    lVar3 = 0;
  }
LAB_107d3fa10:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d3fa2c; end: 107d3fa33; -[SCFriendActionSheetData snapchatter] */

undefined8 FUN_107d3fa2c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d3fa34; end: 107d3fa3b; -[SCFriendActionSheetData sourcePageType] */

undefined8 FUN_107d3fa34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d3fa3c; end: 107d3fa43; -[SCFriendActionSheetData sourceSessionId] */

undefined8 FUN_107d3fa3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d3fa44; end: 107d3fa4b; -[SCFriendActionSheetData nonFriendAddSourceType] */

undefined8 FUN_107d3fa44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d3fa4c; end: 107d3fa53; -[SCFriendActionSheetData nonFriendAddPlacementType] */

undefined8 FUN_107d3fa4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d3fa54; end: 107d3fa83; -[SCFriendActionSheetData .cxx_destruct] */

void FUN_107d3fa54(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d3fa84; end: 107d3fb1f; -[SCFriendActionOpenProfileData initWithSnapchatter:addSourceType:hideRecursiveOptions:attributedPage:] */

undefined1 *
FUN_107d3fa84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126fabe8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d3fb20; end: 107d3fb43; -[SCFriendActionOpenProfileData copyWithZone:] */

undefined8 FUN_107d3fb20(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d3fb44; end: 107d3fbc7; -[SCFriendActionOpenProfileData hash] */

undefined8 * FUN_107d3fb44(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar1 = *(long *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  lStack_40 = -lVar1;
  if (-1 < lVar1) {
    lStack_40 = lVar1;
  }
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  lStack_30 = -lVar2;
  if (-1 < lVar2) {
    lStack_30 = lVar2;
  }
  puVar4 = &uStack_48;
  uStack_48 = uVar3;
  func_0x000100505190(puVar4,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 != param_3) {
    puVar6 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107d3fc6c;
    puVar6 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar5 & 1) == 0) ||
       (((puVar4[3] != param_3[3] || (*(char *)(puVar4 + 1) != *(char *)(param_3 + 1))) ||
        (puVar4[4] != param_3[4])))) {
      puVar6 = (undefined8 *)0x0;
      goto LAB_107d3fc6c;
    }
    puVar6 = (undefined8 *)puVar4[2];
    if (puVar6 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_107d3fc6c;
    }
  }
  puVar6 = (undefined8 *)0x1;
LAB_107d3fc6c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107d3fbc8; end: 107d3fc87; -[SCFriendActionOpenProfileData isEqual:] */

long FUN_107d3fbc8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d3fc6c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18) ||
         (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) ||
        (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))))) {
      lVar3 = 0;
      goto LAB_107d3fc6c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107d3fc6c;
    }
  }
  lVar3 = 1;
LAB_107d3fc6c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d3fc88; end: 107d3fc8f; -[SCFriendActionOpenProfileData snapchatter] */

undefined8 FUN_107d3fc88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d3fc90; end: 107d3fc97; -[SCFriendActionOpenProfileData addSourceType] */

undefined8 FUN_107d3fc90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d3fc98; end: 107d3fc9f; -[SCFriendActionOpenProfileData hideRecursiveOptions] */

undefined1 FUN_107d3fc98(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d3fca0; end: 107d3fca7; -[SCFriendActionOpenProfileData attributedPage] */

undefined8 FUN_107d3fca0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d3fca8; end: 107d3fcb3; -[SCFriendActionOpenProfileData .cxx_destruct] */

void FUN_107d3fca8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d3fcb4; end: 107d3fdbf;  */

void FUN_107d3fcb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  puVar2 = PTR_PTR_1126d7998;
  _objc_alloc(PTR_PTR_1126d7998);
  func_0x00010c02b860();
  func_0x00010c01b460(puVar1,param_2,&PTR____CFConstantStringClassReference_110eb9d18,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d3fdc0; end: 107d3ff0b; -[SCRetentionPolicyActionHandler initConversationId:isGroupConversation:availableRetentionModes:friendSnapchatter:presentingViewController:chatMessageActionHandler:delegate:] */

undefined1 *
FUN_107d3fdc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126fabf0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_7);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x40),param_9);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d3ff0c; end: 107d40017; -[SCRetentionPolicyActionHandler handleActionWithSender:actionModel:fromSourceView:] */

bool FUN_107d3ff0c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d7998;
    _objc_opt_class(PTR_PTR_1126d7998);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    bVar1 = uVar2 != 0;
    if (uVar2 != 0) {
      func_0x00010c0cb880();
      *(ulong *)(param_1 + 0x28) = uVar3;
      lVar6 = param_1;
      func_0x00010be96060(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be7f4c0(param_1);
      _objc_release(lVar6);
    }
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 107d40018; end: 107d40283; -[SCRetentionPolicyActionHandler _retentionPolicyController] */

void FUN_107d40018(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [136];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = *(undefined ***)(param_1 + 0x18);
  func_0x00010901c54c();
  if (((ulong)ppuVar2 & 1) == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110eb9e18;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb9e18,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_107d40ec4();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x0001007f8afc();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___UIAlertController_1126aeb78;
  func_0x00010beff3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_e0,param_1);
  lVar7 = *(long *)(param_1 + 0x30);
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_107d40284;
  puStack_f0 = &UNK_110a0a338;
  _objc_copyWeak(auStack_e8,auStack_e0);
  func_0x000100504554(lVar7,&puStack_108);
  _objc_retain();
  lVar4 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      func_0x00010bef6960(ppuVar3);
      lVar8 = lVar8 + 1;
    } while (lVar4 != lVar8);
    lVar4 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  puVar6 = PTR__OBJC_CLASS___UIAlertAction_1126aeb80;
  ppuVar5 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef340(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  func_0x00010bef6960(ppuVar3);
  _objc_release(puVar6);
  _objc_release(lVar7);
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_e0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_e0);
    __Unwind_Resume(ppuVar2);
    func_0x00010c067ec0();
    ppuVar2 = ppuVar2 + 4;
    _objc_loadWeakRetained(ppuVar2);
    ppuVar3 = ppuVar2;
    func_0x00010be96040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 107d40284; end: 107d402df;  */

void FUN_107d40284(long param_1)

{
  long lVar1;
  
  func_0x00010c067ec0();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be96040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107d402e0; end: 107d40403; -[SCRetentionPolicyActionHandler _retentionActionForRetentionMode:] */

void FUN_107d402e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar2 = PTR__OBJC_CLASS___UIAlertAction_1126aeb80;
  uVar1 = param_3;
  FUN_107d40874(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010beef340(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c160fc0(puVar2);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d40404; end: 107d40437;  */

void FUN_107d40404(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedea60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d40438; end: 107d40523; -[SCRetentionPolicyActionHandler _updateRetentionPolicyTo:] */

void FUN_107d40438(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined1 auStack_38 [8];
  
  if (param_3 != *(long *)(param_1 + 0x28)) {
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf7bae0();
    _objc_release(lVar1);
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_48,auStack_38);
    lStack_40 = param_3;
    func_0x00010c0d0500(uVar2);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 107d40524; end: 107d40567;  */

void FUN_107d40524(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be809c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d40568; end: 107d40617; -[SCRetentionPolicyActionHandler _processChatSendResult:retentionMode:] */

void FUN_107d40568(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126afca8;
  if (0xc < param_3) {
    return;
  }
  if ((1L << (param_3 & 0x3f) & 0x1fdeU) == 0) {
    if (param_3 == 0) {
      uVar3 = 1;
      goto LAB_107d405dc;
    }
    func_0x00010be7a080(param_1);
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e1e358;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e358,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237520(puVar1);
    _objc_release(ppuVar2);
  }
  param_4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
LAB_107d405dc:
                    /* WARNING: Could not recover jumptable at 0x00010bdfca70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__didChangeRetentionPolicyWithSuc_11255cc38,uVar3,param_4);
  return;
}



/* Entry: 107d40618; end: 107d4074b; -[SCRetentionPolicyActionHandler _presentAlertForFailedRetentionChange] */

void FUN_107d40618(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_1126af180;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126af178;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb9e38;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb9e38,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar3);
  _objc_release(puVar4);
  _objc_release(ppuVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar2 + 0x40;
  _objc_loadWeakRetained(puVar2);
  func_0x00010bf73520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107d4074c; end: 107d4078f; -[SCRetentionPolicyActionHandler _didChangeRetentionPolicyWithSuccess:retentionMode:] */

void FUN_107d4074c(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf73520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d40790; end: 107d407df; -[SCRetentionPolicyActionHandler _presentViewController:] */

void FUN_107d40790(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10eda0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d407e0; end: 107d407f7; -[SCRetentionPolicyActionHandler presentingViewController] */

void FUN_107d407e0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d407f8; end: 107d40803; -[SCRetentionPolicyActionHandler setPresentingViewController:] */

void FUN_107d407f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 107d40804; end: 107d4081b; -[SCRetentionPolicyActionHandler delegate] */

void FUN_107d40804(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d4081c; end: 107d40873; -[SCRetentionPolicyActionHandler .cxx_destruct] */

void FUN_107d4081c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d40874; end: 107d4091b;  */

void FUN_107d40874(long param_1)

{
  undefined **ppuVar1;
  
  if (param_1 < 3) {
    if (param_1 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110eb9e58;
    }
    else if (param_1 == 1) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110eb9e78;
    }
    else {
      if (param_1 != 2) goto LAB_107d40914;
      ppuVar1 = &PTR____CFConstantStringClassReference_110eb9e98;
    }
    func_0x00010bcbeaa8(ppuVar1,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_1 == 3) {
    func_0x000107d40edc();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_1 == 4) {
    func_0x000107d40ef4();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_1 == 5) {
    func_0x000107d40f0c();
    _objc_retainAutoreleasedReturnValue();
  }
LAB_107d40914:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d4091c; end: 107d409b7; -[SCSnapPostOpenViewingPolicyActionHandler initChatMessageActionHandler:delegate:] */

undefined1 *
FUN_107d4091c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fabf8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


