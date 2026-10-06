/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b64bc70; end: 10b64bc93; -[SCSnapchattersSuggestDataRequest copyWithZone:] */

undefined8 FUN_10b64bc70(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b64bc94; end: 10b64bd33; -[SCSnapchattersSuggestDataRequest hash] */

void FUN_10b64bc94(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
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
  uStack_68 = (ulong)*(byte *)(param_1 + 0x10);
  uStack_60 = (ulong)*(byte *)(param_1 + 0x11);
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfde980();
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_98 = PTR_PTR_112707420;
  puStack_a0 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b64bd34; end: 10b64bd77; -[SCSnapchattersSuggestDataRequest internalInit] */

void FUN_10b64bd34(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112707420;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b64bd78; end: 10b64be8f; -[SCSnapchattersSuggestDataRequest isEqual:] */

long FUN_10b64bd78(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b64be68:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b64be74;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
            (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))) &&
           (*(char *)(param_1 + 0x11) == *(char *)(param_3 + 0x11))) &&
          ((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
           (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))))) &&
        (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
       (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) {
      lVar3 = *(long *)(param_1 + 0x28);
      if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x40);
        if (lVar3 != *(long *)(param_3 + 0x40)) {
          func_0x00010c071ae0();
          goto LAB_10b64be74;
        }
        goto LAB_10b64be68;
      }
    }
    lVar3 = 0;
  }
LAB_10b64be74:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b64be90; end: 10b64bf8f; -[SCSnapchattersSuggestDataRequest matchFetch:hide:hideAll:view:] */

void FUN_10b64be90(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))
                  (param_3,*(undefined1 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x11),
                   *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
      }
    }
    else if ((lVar2 == 1) && (param_4 != 0)) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    }
  }
  else {
    if (lVar2 == 2) {
      if (param_5 == 0) goto LAB_10b64bf60;
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      pcVar3 = *(code **)(param_5 + 0x10);
      lVar2 = param_5;
    }
    else {
      if ((lVar2 != 3) || (param_6 == 0)) goto LAB_10b64bf60;
      uVar1 = *(undefined8 *)(param_1 + 0x40);
      pcVar3 = *(code **)(param_6 + 0x10);
      lVar2 = param_6;
    }
    (*pcVar3)(lVar2,uVar1);
  }
LAB_10b64bf60:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b64bf90; end: 10b64bfbf; -[SCSnapchattersSuggestDataRequest .cxx_destruct] */

void FUN_10b64bf90(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 10b64bfc0; end: 10b64c023; -[SCSnapchattersSuggestDataRequestFetch initWithIsPrefetchForNotification:isLoginOrSignup:triggerSourceType:triggerType:] */

void FUN_10b64bfc0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112707428;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
  }
  return;
}



/* Entry: 10b64c024; end: 10b64c047; -[SCSnapchattersSuggestDataRequestFetch copyWithZone:] */

undefined8 FUN_10b64c024(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b64c048; end: 10b64c0af; -[SCSnapchattersSuggestDataRequestFetch hash] */

ulong * FUN_10b64c048(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_20 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  puVar1 = &uStack_38;
  func_0x000107c3191c(puVar1,4);
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
         ((((char)puVar1[1] != (char)param_3[1] ||
           (*(char *)((long)puVar1 + 9) != *(char *)((long)param_3 + 9))) ||
          (puVar1[2] != param_3[2])))) {
        puVar3 = (ulong *)0x0;
      }
      else {
        puVar3 = (ulong *)(ulong)(puVar1[3] == param_3[3]);
      }
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10b64c0b0; end: 10b64c167; -[SCSnapchattersSuggestDataRequestFetch isEqual:] */

bool FUN_10b64c0b0(ulong param_1,undefined8 param_2,ulong param_3)

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
         (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
           (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
          (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b64c168; end: 10b64c16f; -[SCSnapchattersSuggestDataRequestFetch isPrefetchForNotification] */

undefined1 FUN_10b64c168(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b64c170; end: 10b64c177; -[SCSnapchattersSuggestDataRequestFetch isLoginOrSignup] */

undefined1 FUN_10b64c170(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b64c178; end: 10b64c17f; -[SCSnapchattersSuggestDataRequestFetch triggerSourceType] */

undefined8 FUN_10b64c178(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b64c180; end: 10b64c187; -[SCSnapchattersSuggestDataRequestFetch triggerType] */

undefined8 FUN_10b64c180(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b64c188; end: 10b64c20f; -[SCSnapchattersSuggestDataRequestHide initWithSuggestedSnapchatter:placement:] */

undefined1 *
FUN_10b64c188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112707430;
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



/* Entry: 10b64c210; end: 10b64c233; -[SCSnapchattersSuggestDataRequestHide copyWithZone:] */

undefined8 FUN_10b64c210(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b64c234; end: 10b64c2a7; -[SCSnapchattersSuggestDataRequestHide hash] */

undefined8 * FUN_10b64c234(long param_1,undefined8 param_2,undefined8 *param_3)

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
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b64c32c;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_10b64c32c;
    }
    puVar5 = (undefined8 *)puVar2[1];
    if (puVar5 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_10b64c32c;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_10b64c32c:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10b64c2a8; end: 10b64c347; -[SCSnapchattersSuggestDataRequestHide isEqual:] */

long FUN_10b64c2a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b64c32c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_10b64c32c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b64c32c;
    }
  }
  lVar3 = 1;
LAB_10b64c32c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b64c348; end: 10b64c34f; -[SCSnapchattersSuggestDataRequestHide suggestedSnapchatter] */

undefined8 FUN_10b64c348(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b64c350; end: 10b64c357; -[SCSnapchattersSuggestDataRequestHide placement] */

undefined8 FUN_10b64c350(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b64c358; end: 10b64c363; -[SCSnapchattersSuggestDataRequestHide .cxx_destruct] */

void FUN_10b64c358(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b64c364; end: 10b64c3ab; -[SCSnapchattersSuggestDataRequestHideAll initWithPlacement:] */

void FUN_10b64c364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112707438;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b64c3ac; end: 10b64c3cf; -[SCSnapchattersSuggestDataRequestHideAll copyWithZone:] */

undefined8 FUN_10b64c3ac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b64c3d0; end: 10b64c3df; -[SCSnapchattersSuggestDataRequestHideAll hash] */

long FUN_10b64c3d0(long param_1)

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



/* Entry: 10b64c3e0; end: 10b64c467; -[SCSnapchattersSuggestDataRequestHideAll isEqual:] */

bool FUN_10b64c3e0(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 10b64c468; end: 10b64c46f; -[SCSnapchattersSuggestDataRequestHideAll placement] */

undefined8 FUN_10b64c468(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b64c470; end: 10b64c4e7; -[SCSnapchattersSuggestDataRequestView initWithSuggestedSnapchatters:] */

undefined1 * FUN_10b64c470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112707440;
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



/* Entry: 10b64c4e8; end: 10b64c50b; -[SCSnapchattersSuggestDataRequestView copyWithZone:] */

undefined8 FUN_10b64c4e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b64c50c; end: 10b64c513; -[SCSnapchattersSuggestDataRequestView hash] */

void FUN_10b64c50c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b64c514; end: 10b64c5a3; -[SCSnapchattersSuggestDataRequestView isEqual:] */

long FUN_10b64c514(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b64c588;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b64c588;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b64c588;
    }
  }
  lVar3 = 1;
LAB_10b64c588:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b64c5a4; end: 10b64c5ab; -[SCSnapchattersSuggestDataRequestView suggestedSnapchatters] */

undefined8 FUN_10b64c5a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b64c5ac; end: 10b64c5b7; -[SCSnapchattersSuggestDataRequestView .cxx_destruct] */

void FUN_10b64c5ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b64c5b8; end: 10b64c75b; +[SCSnapchattersUpdateDataRequest addWithSnapchatter:addSource:placement:cellIndex:snapId:compositeStoryId:placementInfo:selectedShortcutId:sectionName:pageSessionId:] */

void FUN_10b64c5b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar1 = PTR_PTR_1126ae5c0;
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
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_8;
  _objc_retain(param_8);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_9;
  _objc_retain(param_9);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_10;
  _objc_retain(param_10);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_11;
  _objc_retain(param_11);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_12;
  _objc_release(uVar3);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b64c75c; end: 10b64c827; +[SCSnapchattersUpdateDataRequest blockWithSnapchatter:blockReasonId:pageSessionId:] */

void FUN_10b64c75c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae5c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0xb8);
  *(undefined8 *)(puVar2 + 0xb8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xc0);
  *(undefined8 *)(puVar2 + 0xc0) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 200);
  *(undefined8 *)(puVar2 + 200) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b64c828; end: 10b64c957; +[SCSnapchattersUpdateDataRequest deleteWithAFriend:deleteSource:snapId:compositeStoryId:placementInfo:pageSessionId:] */

void FUN_10b64c828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126ae5c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x78);
  *(undefined8 *)(puVar2 + 0x78) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x88);
  *(undefined8 *)(puVar2 + 0x80) = param_4;
  *(undefined8 *)(puVar2 + 0x88) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x90);
  *(undefined8 *)(puVar2 + 0x90) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x98);
  *(undefined8 *)(puVar2 + 0x98) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xa0);
  *(undefined8 *)(puVar2 + 0xa0) = param_8;
  _objc_release(uVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b64c958; end: 10b64c9ef; +[SCSnapchattersUpdateDataRequest ignoreWithIncomingFriend:pageSessionId:] */

void FUN_10b64c958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae5c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0xa8);
  *(undefined8 *)(puVar2 + 0xa8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xb0);
  *(undefined8 *)(puVar2 + 0xb0) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b64c9f0; end: 10b64ca73; +[SCSnapchattersUpdateDataRequest multiAddWithAddFriendDataRequests:placement:isRegistration:] */

void FUN_10b64c9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae5c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x60);
  *(undefined8 *)(puVar2 + 0x60) = param_3;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x68) = param_4;
  puVar2[0x70] = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b64ca74; end: 10b64cb0b; +[SCSnapchattersUpdateDataRequest setDisplayWithSnapchatter:displayName:] */

void FUN_10b64ca74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae5c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  uVar3 = *(undefined8 *)(puVar2 + 0xd8);
  *(undefined8 *)(puVar2 + 0xd8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xe0);
  *(undefined8 *)(puVar2 + 0xe0) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b64cb0c; end: 10b64cba3; +[SCSnapchattersUpdateDataRequest setPostSendEmojiWithSnapchatter:postSendEmoji:] */

void FUN_10b64cb0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae5c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 8;
  uVar3 = *(undefined8 *)(puVar2 + 0xf0);
  *(undefined8 *)(puVar2 + 0xf0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xf8);
  *(undefined8 *)(puVar2 + 0xf8) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b64cba4; end: 10b64cc0f; +[SCSnapchattersUpdateDataRequest setStoryPrivacyWithUserIds:] */

void FUN_10b64cba4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae5c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
  uVar3 = *(undefined8 *)(puVar2 + 0xe8);
  *(undefined8 *)(puVar2 + 0xe8) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b64cc10; end: 10b64cc7b; +[SCSnapchattersUpdateDataRequest unblockWithBlockedSnapchatter:] */

void FUN_10b64cc10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae5c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0xd0);
  *(undefined8 *)(puVar2 + 0xd0) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b64cc7c; end: 10b64cc9f; -[SCSnapchattersUpdateDataRequest copyWithZone:] */

undefined8 FUN_10b64cc7c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b64cca0; end: 10b64ce57; -[SCSnapchattersUpdateDataRequest hash] */

void FUN_10b64cca0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
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
  
  puVar3 = &uStack_120;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_120 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_110 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_108 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  lVar4 = *(long *)(param_1 + 0x28);
  uStack_f8 = *(undefined8 *)(param_1 + 0x30);
  lStack_100 = -lVar4;
  if (-1 < lVar4) {
    lStack_100 = lVar4;
  }
  uStack_118 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_f0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_e8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_e0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_d8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_d0 = uVar1;
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x68);
  lStack_c0 = -lVar4;
  if (-1 < lVar4) {
    lStack_c0 = lVar4;
  }
  uStack_b8 = (ulong)*(byte *)(param_1 + 0x70);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uStack_c8 = uVar2;
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x80);
  uStack_a0 = *(undefined8 *)(param_1 + 0x88);
  lStack_a8 = -lVar4;
  if (-1 < lVar4) {
    lStack_a8 = lVar4;
  }
  uStack_b0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  uStack_98 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 200);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xe8);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_120,0x1f);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_148 = PTR_PTR_112707448;
  puStack_150 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_150,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b64ce58; end: 10b64ce9b; -[SCSnapchattersUpdateDataRequest internalInit] */

void FUN_10b64ce58(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112707448;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b64ce9c; end: 10b64d1c3; -[SCSnapchattersUpdateDataRequest isEqual:] */

long FUN_10b64ce9c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b64d19c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b64d1a8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
            (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
           (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
          ((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
           (*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68))))))) &&
        (*(char *)(param_1 + 0x70) == *(char *)(param_3 + 0x70))) &&
       (*(long *)(param_1 + 0x80) == *(long *)(param_3 + 0x80))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x30);
        if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x38);
          if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x40);
            if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x48);
              if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x50);
                if ((lVar3 == *(long *)(param_3 + 0x50)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x58);
                  if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x60);
                    if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x78);
                      if ((lVar3 == *(long *)(param_3 + 0x78)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x88);
                        if ((lVar3 == *(long *)(param_3 + 0x88)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x90);
                          if ((lVar3 == *(long *)(param_3 + 0x90)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x98);
                            if ((lVar3 == *(long *)(param_3 + 0x98)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0xa0);
                              if ((lVar3 == *(long *)(param_3 + 0xa0)) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                lVar3 = *(long *)(param_1 + 0xa8);
                                if ((lVar3 == *(long *)(param_3 + 0xa8)) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                  lVar3 = *(long *)(param_1 + 0xb0);
                                  if ((lVar3 == *(long *)(param_3 + 0xb0)) ||
                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                    lVar3 = *(long *)(param_1 + 0xb8);
                                    if ((lVar3 == *(long *)(param_3 + 0xb8)) ||
                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                      lVar3 = *(long *)(param_1 + 0xc0);
                                      if ((lVar3 == *(long *)(param_3 + 0xc0)) ||
                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                        lVar3 = *(long *)(param_1 + 200);
                                        if ((lVar3 == *(long *)(param_3 + 200)) ||
                                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                          lVar3 = *(long *)(param_1 + 0xd0);
                                          if ((lVar3 == *(long *)(param_3 + 0xd0)) ||
                                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                            lVar3 = *(long *)(param_1 + 0xd8);
                                            if ((lVar3 == *(long *)(param_3 + 0xd8)) ||
                                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                              lVar3 = *(long *)(param_1 + 0xe0);
                                              if ((lVar3 == *(long *)(param_3 + 0xe0)) ||
                                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                lVar3 = *(long *)(param_1 + 0xe8);
                                                if ((lVar3 == *(long *)(param_3 + 0xe8)) ||
                                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                  lVar3 = *(long *)(param_1 + 0xf0);
                                                  if ((lVar3 == *(long *)(param_3 + 0xf0)) ||
                                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                    lVar3 = *(long *)(param_1 + 0xf8);
                                                    if (lVar3 != *(long *)(param_3 + 0xf8)) {
                                                      func_0x00010c071ae0();
                                                      goto LAB_10b64d1a8;
                                                    }
                                                    goto LAB_10b64d19c;
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
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b64d1a8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b64d1c4; end: 10b64d407; -[SCSnapchattersUpdateDataRequest matchAdd:multiAdd:delete:ignore:block:unblock:setDisplay:setStoryPrivacy:setPostSendEmoji:] */

void FUN_10b64d1c4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 < 4) {
    if (lVar3 < 2) {
      if (lVar3 == 0) {
        if (param_3 != 0) {
          (**(code **)(param_3 + 0x10))
                    (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                     *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                     *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                     *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                     *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
        }
      }
      else if ((lVar3 == 1) && (param_4 != 0)) {
        (**(code **)(param_4 + 0x10))
                  (param_4,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                   *(undefined1 *)(param_1 + 0x70));
      }
      goto LAB_10b64d3a4;
    }
    if (lVar3 == 2) {
      if (param_5 != 0) {
        (**(code **)(param_5 + 0x10))
                  (param_5,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),
                   *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),
                   *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0));
      }
      goto LAB_10b64d3a4;
    }
    if ((lVar3 != 3) || (param_6 == 0)) goto LAB_10b64d3a4;
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
    pcVar4 = *(code **)(param_6 + 0x10);
    lVar3 = param_6;
  }
  else {
    if (lVar3 < 6) {
      if (lVar3 == 4) {
        if (param_7 != 0) {
          (**(code **)(param_7 + 0x10))
                    (param_7,*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),
                     *(undefined8 *)(param_1 + 200));
        }
        goto LAB_10b64d3a4;
      }
      if ((lVar3 != 5) || (param_8 == 0)) goto LAB_10b64d3a4;
      uVar1 = *(undefined8 *)(param_1 + 0xd0);
      pcVar4 = *(code **)(param_8 + 0x10);
      lVar3 = param_8;
LAB_10b64d3a0:
      (*pcVar4)(lVar3,uVar1);
      goto LAB_10b64d3a4;
    }
    if (lVar3 == 6) {
      if (param_9 == 0) goto LAB_10b64d3a4;
      uVar1 = *(undefined8 *)(param_1 + 0xd8);
      uVar2 = *(undefined8 *)(param_1 + 0xe0);
      pcVar4 = *(code **)(param_9 + 0x10);
      lVar3 = param_9;
    }
    else {
      if (lVar3 == 7) {
        if (param_10 == 0) goto LAB_10b64d3a4;
        uVar1 = *(undefined8 *)(param_1 + 0xe8);
        pcVar4 = *(code **)(param_10 + 0x10);
        lVar3 = param_10;
        goto LAB_10b64d3a0;
      }
      if ((lVar3 != 8) || (param_11 == 0)) goto LAB_10b64d3a4;
      uVar1 = *(undefined8 *)(param_1 + 0xf0);
      uVar2 = *(undefined8 *)(param_1 + 0xf8);
      pcVar4 = *(code **)(param_11 + 0x10);
      lVar3 = param_11;
    }
  }
  (*pcVar4)(lVar3,uVar1,uVar2);
LAB_10b64d3a4:
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
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



/* Entry: 10b64d408; end: 10b64d53f; -[SCSnapchattersUpdateDataRequest .cxx_destruct] */

void FUN_10b64d408(long param_1)

{
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b64d540; end: 10b64d6ef; -[SCSnapchattersUpdateDataRequestAdd initWithSnapchatter:addSource:placement:cellIndex:snapId:compositeStoryId:placementInfo:selectedShortcutId:sectionName:pageSessionId:] */

undefined8 *
FUN_10b64d540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_112707450;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    puVar1[2] = param_4;
    puVar1[3] = param_5;
    puVar1[4] = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b64d6f0; end: 10b64d713; -[SCSnapchattersUpdateDataRequestAdd copyWithZone:] */

undefined8 FUN_10b64d6f0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b64d714; end: 10b64d7db; -[SCSnapchattersUpdateDataRequestAdd hash] */

undefined8 * FUN_10b64d714(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
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
  uStack_70 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_68 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  lVar5 = *(long *)(param_1 + 0x20);
  uStack_58 = *(undefined8 *)(param_1 + 0x28);
  lStack_60 = -lVar5;
  if (-1 < lVar5) {
    lStack_60 = lVar5;
  }
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_78;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b64d904:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b64d910;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((puVar3[2] == param_3[2] && (puVar3[3] == param_3[3])) && (puVar3[4] == param_3[4])))) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[5];
        if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[6];
          if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[7];
            if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[8];
              if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[9];
                if ((lVar5 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  puVar6 = (undefined8 *)puVar3[10];
                  if (puVar6 != (undefined8 *)param_3[10]) {
                    func_0x00010c071ae0();
                    goto LAB_10b64d910;
                  }
                  goto LAB_10b64d904;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b64d910:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b64d7dc; end: 10b64d92b; -[SCSnapchattersUpdateDataRequestAdd isEqual:] */

long FUN_10b64d7dc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b64d904:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b64d910;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x28);
        if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
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
                  if (lVar3 != *(long *)(param_3 + 0x50)) {
                    func_0x00010c071ae0();
                    goto LAB_10b64d910;
                  }
                  goto LAB_10b64d904;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b64d910:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b64d92c; end: 10b64d933; -[SCSnapchattersUpdateDataRequestAdd snapchatter] */

undefined8 FUN_10b64d92c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b64d934; end: 10b64d93b; -[SCSnapchattersUpdateDataRequestAdd addSource] */

undefined8 FUN_10b64d934(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b64d93c; end: 10b64d943; -[SCSnapchattersUpdateDataRequestAdd placement] */

undefined8 FUN_10b64d93c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b64d944; end: 10b64d94b; -[SCSnapchattersUpdateDataRequestAdd cellIndex] */

undefined8 FUN_10b64d944(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b64d94c; end: 10b64d953; -[SCSnapchattersUpdateDataRequestAdd snapId] */

undefined8 FUN_10b64d94c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b64d954; end: 10b64d95b; -[SCSnapchattersUpdateDataRequestAdd compositeStoryId] */

undefined8 FUN_10b64d954(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b64d95c; end: 10b64d963; -[SCSnapchattersUpdateDataRequestAdd placementInfo] */

undefined8 FUN_10b64d95c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b64d964; end: 10b64d96b; -[SCSnapchattersUpdateDataRequestAdd selectedShortcutId] */

undefined8 FUN_10b64d964(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b64d96c; end: 10b64d973; -[SCSnapchattersUpdateDataRequestAdd sectionName] */

undefined8 FUN_10b64d96c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b64d974; end: 10b64d97b; -[SCSnapchattersUpdateDataRequestAdd pageSessionId] */

undefined8 FUN_10b64d974(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b64d97c; end: 10b64d9e7; -[SCSnapchattersUpdateDataRequestAdd .cxx_destruct] */

void FUN_10b64d97c(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b64d9e8; end: 10b64dabf; -[SCSnapchattersUpdateDataRequestBlock initWithSnapchatter:blockReasonId:pageSessionId:] */

undefined1 *
FUN_10b64d9e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112707458;
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



/* Entry: 10b64dac0; end: 10b64dae3; -[SCSnapchattersUpdateDataRequestBlock copyWithZone:] */

undefined8 FUN_10b64dac0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b64dae4; end: 10b64db63; -[SCSnapchattersUpdateDataRequestBlock hash] */

undefined8 * FUN_10b64dae4(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_10b64dbfc:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b64dc08;
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
            goto LAB_10b64dc08;
          }
          goto LAB_10b64dbfc;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b64dc08:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b64db64; end: 10b64dc23; -[SCSnapchattersUpdateDataRequestBlock isEqual:] */

long FUN_10b64db64(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b64dbfc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b64dc08;
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
            goto LAB_10b64dc08;
          }
          goto LAB_10b64dbfc;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b64dc08:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b64dc24; end: 10b64dc2b; -[SCSnapchattersUpdateDataRequestBlock snapchatter] */

undefined8 FUN_10b64dc24(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b64dc2c; end: 10b64dc33; -[SCSnapchattersUpdateDataRequestBlock blockReasonId] */

undefined8 FUN_10b64dc2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b64dc34; end: 10b64dc3b; -[SCSnapchattersUpdateDataRequestBlock pageSessionId] */

undefined8 FUN_10b64dc34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b64dc3c; end: 10b64dc77; -[SCSnapchattersUpdateDataRequestBlock .cxx_destruct] */

void FUN_10b64dc3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b64dc78; end: 10b64ddbf; -[SCSnapchattersUpdateDataRequestDelete initWithAFriend:deleteSource:snapId:compositeStoryId:placementInfo:pageSessionId:] */

undefined1 *
FUN_10b64dc78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112707460;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b64ddc0; end: 10b64dde3; -[SCSnapchattersUpdateDataRequestDelete copyWithZone:] */

undefined8 FUN_10b64ddc0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b64dde4; end: 10b64de87; -[SCSnapchattersUpdateDataRequestDelete hash] */

undefined8 * FUN_10b64dde4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x10);
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  lStack_50 = -lVar5;
  if (-1 < lVar5) {
    lStack_50 = lVar5;
  }
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b64df60:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b64df6c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[2] == param_3[2])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = (undefined8 *)puVar3[6];
              if (puVar6 != (undefined8 *)param_3[6]) {
                func_0x00010c071ae0();
                goto LAB_10b64df6c;
              }
              goto LAB_10b64df60;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b64df6c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b64de88; end: 10b64df87; -[SCSnapchattersUpdateDataRequestDelete isEqual:] */

long FUN_10b64de88(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b64df60:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b64df6c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_10b64df6c;
              }
              goto LAB_10b64df60;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b64df6c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b64df88; end: 10b64df8f; -[SCSnapchattersUpdateDataRequestDelete aFriend] */

undefined8 FUN_10b64df88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b64df90; end: 10b64df97; -[SCSnapchattersUpdateDataRequestDelete deleteSource] */

undefined8 FUN_10b64df90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b64df98; end: 10b64df9f; -[SCSnapchattersUpdateDataRequestDelete snapId] */

undefined8 FUN_10b64df98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b64dfa0; end: 10b64dfa7; -[SCSnapchattersUpdateDataRequestDelete compositeStoryId] */

undefined8 FUN_10b64dfa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b64dfa8; end: 10b64dfaf; -[SCSnapchattersUpdateDataRequestDelete placementInfo] */

undefined8 FUN_10b64dfa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b64dfb0; end: 10b64dfb7; -[SCSnapchattersUpdateDataRequestDelete pageSessionId] */

undefined8 FUN_10b64dfb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b64dfb8; end: 10b64e00b; -[SCSnapchattersUpdateDataRequestDelete .cxx_destruct] */

void FUN_10b64dfb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b64e00c; end: 10b64e0b7; -[SCSnapchattersUpdateDataRequestIgnore initWithIncomingFriend:pageSessionId:] */

undefined1 *
FUN_10b64e00c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112707468;
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



/* Entry: 10b64e0b8; end: 10b64e0db; -[SCSnapchattersUpdateDataRequestIgnore copyWithZone:] */

undefined8 FUN_10b64e0b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b64e0dc; end: 10b64e14f; -[SCSnapchattersUpdateDataRequestIgnore hash] */

undefined8 * FUN_10b64e0dc(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b64e1d0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b64e1dc;
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
          goto LAB_10b64e1dc;
        }
        goto LAB_10b64e1d0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b64e1dc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b64e150; end: 10b64e1f7; -[SCSnapchattersUpdateDataRequestIgnore isEqual:] */

long FUN_10b64e150(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b64e1d0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b64e1dc;
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
          goto LAB_10b64e1dc;
        }
        goto LAB_10b64e1d0;
      }
    }
    lVar3 = 0;
  }
LAB_10b64e1dc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b64e1f8; end: 10b64e1ff; -[SCSnapchattersUpdateDataRequestIgnore incomingFriend] */

undefined8 FUN_10b64e1f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b64e200; end: 10b64e207; -[SCSnapchattersUpdateDataRequestIgnore pageSessionId] */

undefined8 FUN_10b64e200(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b64e208; end: 10b64e237; -[SCSnapchattersUpdateDataRequestIgnore .cxx_destruct] */

void FUN_10b64e208(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b64e238; end: 10b64e2c7; -[SCSnapchattersUpdateDataRequestMultiAdd initWithAddFriendDataRequests:placement:isRegistration:] */

undefined1 *
FUN_10b64e238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112707470;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b64e2c8; end: 10b64e2eb; -[SCSnapchattersUpdateDataRequestMultiAdd copyWithZone:] */

undefined8 FUN_10b64e2c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b64e2ec; end: 10b64e367; -[SCSnapchattersUpdateDataRequestMultiAdd hash] */

undefined8 * FUN_10b64e2ec(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x18);
  lStack_38 = -lVar4;
  if (-1 < lVar4) {
    lStack_38 = lVar4;
  }
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b64e3fc;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18) ||
        (*(char *)((long)puVar2 + 8) != param_3[8])))) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_10b64e3fc;
    }
    puVar5 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar5 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b64e3fc;
    }
  }
  puVar5 = (undefined1 *)0x1;
LAB_10b64e3fc:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 10b64e368; end: 10b64e417; -[SCSnapchattersUpdateDataRequestMultiAdd isEqual:] */

long FUN_10b64e368(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b64e3fc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18) ||
        (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))))) {
      lVar3 = 0;
      goto LAB_10b64e3fc;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b64e3fc;
    }
  }
  lVar3 = 1;
LAB_10b64e3fc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b64e418; end: 10b64e41f; -[SCSnapchattersUpdateDataRequestMultiAdd addFriendDataRequests] */

undefined8 FUN_10b64e418(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b64e420; end: 10b64e427; -[SCSnapchattersUpdateDataRequestMultiAdd placement] */

undefined8 FUN_10b64e420(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b64e428; end: 10b64e42f; -[SCSnapchattersUpdateDataRequestMultiAdd isRegistration] */

undefined1 FUN_10b64e428(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b64e430; end: 10b64e43b; -[SCSnapchattersUpdateDataRequestMultiAdd .cxx_destruct] */

void FUN_10b64e430(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b64e43c; end: 10b64e4b3; -[SCSnapchattersUpdateDataRequestMuteStory initWithAFriend:] */

undefined1 * FUN_10b64e43c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112707478;
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



/* Entry: 10b64e4b4; end: 10b64e4d7; -[SCSnapchattersUpdateDataRequestMuteStory copyWithZone:] */

undefined8 FUN_10b64e4b4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b64e4d8; end: 10b64e4df; -[SCSnapchattersUpdateDataRequestMuteStory hash] */

void FUN_10b64e4d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b64e4e0; end: 10b64e56f; -[SCSnapchattersUpdateDataRequestMuteStory isEqual:] */

long FUN_10b64e4e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b64e554;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b64e554;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b64e554;
    }
  }
  lVar3 = 1;
LAB_10b64e554:
  _objc_release(param_3);
  return lVar3;
}


