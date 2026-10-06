/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b054620; end: 10b054663; -[SCReplyDestination internalInit] */

void FUN_10b054620(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112704dc0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b054664; end: 10b054793; -[SCReplyDestination isEqual:] */

long FUN_10b054664(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b05476c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b054778;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
          (*(char *)(param_1 + 0x28) == *(char *)(param_3 + 0x28))) &&
         (*(char *)(param_1 + 0x29) == *(char *)(param_3 + 0x29))) &&
        (*(char *)(param_1 + 0x2a) == *(char *)(param_3 + 0x2a))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if (lVar3 != *(long *)(param_3 + 0x38)) {
                func_0x00010c071ae0();
                goto LAB_10b054778;
              }
              goto LAB_10b05476c;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b054778:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b054794; end: 10b054897; -[SCReplyDestination matchUser:group:story:multirecipient:] */

void FUN_10b054794(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
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
      if (param_3 == 0) goto LAB_10b054868;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    else {
      if ((lVar2 != 1) || (param_4 == 0)) goto LAB_10b054868;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
    (*pcVar3)(lVar2,uVar1);
  }
  else if (lVar2 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))
                (param_5,*(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28),
                 *(undefined1 *)(param_1 + 0x29),*(undefined1 *)(param_1 + 0x2a));
    }
  }
  else if ((lVar2 == 3) && (param_6 != 0)) {
    (**(code **)(param_6 + 0x10))
              (param_6,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  }
LAB_10b054868:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b054898; end: 10b0548eb; -[SCReplyDestination .cxx_destruct] */

void FUN_10b054898(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0548ec; end: 10b05497b; -[SCLensReplyParameters initWithShouldHideRecipientNameView:roleType:unlockableSnapInfo:] */

undefined1 *
FUN_10b0548ec(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112704dc8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b05497c; end: 10b05499f; -[SCLensReplyParameters copyWithZone:] */

undefined8 FUN_10b05497c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0549a0; end: 10b054a0b; -[SCLensReplyParameters hash] */

ulong * FUN_10b0549a0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uStack_30;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar3 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  func_0x00010bfde980();
  uStack_20 = uVar2;
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 != (ulong *)param_3) {
    puVar5 = (undefined1 *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b054aa0;
    puVar5 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar4 & 1) == 0) ||
       ((*(char *)((long)puVar3 + 8) != param_3[8] ||
        (*(long *)((long)puVar3 + 0x10) != *(long *)(param_3 + 0x10))))) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_10b054aa0;
    }
    puVar5 = *(undefined1 **)((long)puVar3 + 0x18);
    if (puVar5 != *(undefined1 **)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_10b054aa0;
    }
  }
  puVar5 = (undefined1 *)0x1;
LAB_10b054aa0:
  _objc_release(param_3);
  return (ulong *)puVar5;
}



/* Entry: 10b054a0c; end: 10b054abb; -[SCLensReplyParameters isEqual:] */

long FUN_10b054a0c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b054aa0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
      lVar3 = 0;
      goto LAB_10b054aa0;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_10b054aa0;
    }
  }
  lVar3 = 1;
LAB_10b054aa0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b054abc; end: 10b054ac3; -[SCLensReplyParameters shouldHideRecipientNameView] */

undefined1 FUN_10b054abc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b054ac4; end: 10b054acb; -[SCLensReplyParameters roleType] */

undefined8 FUN_10b054ac4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b054acc; end: 10b054ad3; -[SCLensReplyParameters unlockableSnapInfo] */

undefined8 FUN_10b054acc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b054ad4; end: 10b054adf; -[SCLensReplyParameters .cxx_destruct] */

void FUN_10b054ad4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b054ae0; end: 10b054beb; -[SCImpalaReplyParameters initWithQuotedUserId:businessProfileId:pageSourceSessionId:businessStoryVariant:] */

undefined1 *
FUN_10b054ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_112704dd0;
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



/* Entry: 10b054bec; end: 10b054c0f; -[SCImpalaReplyParameters copyWithZone:] */

undefined8 FUN_10b054bec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b054c10; end: 10b054c9b; -[SCImpalaReplyParameters hash] */

undefined8 * FUN_10b054c10(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b054d4c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b054d58;
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
              goto LAB_10b054d58;
            }
            goto LAB_10b054d4c;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b054d58:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b054c9c; end: 10b054d73; -[SCImpalaReplyParameters isEqual:] */

long FUN_10b054c9c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b054d4c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b054d58;
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
              goto LAB_10b054d58;
            }
            goto LAB_10b054d4c;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b054d58:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b054d74; end: 10b054d7b; -[SCImpalaReplyParameters quotedUserId] */

undefined8 FUN_10b054d74(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b054d7c; end: 10b054d83; -[SCImpalaReplyParameters businessProfileId] */

undefined8 FUN_10b054d7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b054d84; end: 10b054d8b; -[SCImpalaReplyParameters pageSourceSessionId] */

undefined8 FUN_10b054d84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b054d8c; end: 10b054d93; -[SCImpalaReplyParameters businessStoryVariant] */

undefined8 FUN_10b054d8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b054d94; end: 10b054ddb; -[SCImpalaReplyParameters .cxx_destruct] */

void FUN_10b054d94(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b054ddc; end: 10b054ea7; -[SCCameraModeParameters initWithShortcutId:contextSource:storySnapId:enableDualCamera:dualCameraLayoutType:] */

undefined1 *
FUN_10b054ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112704dd8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined4 *)((long)puVar1 + 0xc) = param_7;
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b054ea8; end: 10b054ecb; -[SCCameraModeParameters copyWithZone:] */

undefined8 FUN_10b054ea8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b054ecc; end: 10b054f5f; -[SCCameraModeParameters hash] */

undefined8 * FUN_10b054ecc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x18);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  lStack_48 = -lVar6;
  if (-1 < lVar6) {
    lStack_48 = lVar6;
  }
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar1 = -uVar2;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  uStack_30 = (ulong)uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10b055010:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b05501c;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) &&
       (((*(long *)((long)puVar4 + 0x18) == *(long *)(param_3 + 0x18) &&
         (*(char *)((long)puVar4 + 8) == param_3[8])) &&
        (*(int *)((long)puVar4 + 0xc) == *(int *)(param_3 + 0xc))))) {
      lVar6 = *(long *)((long)puVar4 + 0x10);
      if ((lVar6 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        puVar7 = *(undefined1 **)((long)puVar4 + 0x20);
        if (puVar7 != *(undefined1 **)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b05501c;
        }
        goto LAB_10b055010;
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_10b05501c:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 10b054f60; end: 10b055037; -[SCCameraModeParameters isEqual:] */

long FUN_10b054f60(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b055010:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b05501c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        (*(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b05501c;
        }
        goto LAB_10b055010;
      }
    }
    lVar3 = 0;
  }
LAB_10b05501c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b055038; end: 10b05503f; -[SCCameraModeParameters shortcutId] */

undefined8 FUN_10b055038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b055040; end: 10b055047; -[SCCameraModeParameters contextSource] */

undefined8 FUN_10b055040(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b055048; end: 10b05504f; -[SCCameraModeParameters storySnapId] */

undefined8 FUN_10b055048(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b055050; end: 10b055057; -[SCCameraModeParameters enableDualCamera] */

undefined1 FUN_10b055050(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b055058; end: 10b05505f; -[SCCameraModeParameters dualCameraLayoutType] */

undefined4 FUN_10b055058(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b055060; end: 10b05508f; -[SCCameraModeParameters .cxx_destruct] */

void FUN_10b055060(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b055090; end: 10b055143; -[SCStreakRestoreReplyParameters initWithStreakCount:conversationId:streakRestoreSessionId:] */

undefined1 *
FUN_10b055090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112704de0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b055144; end: 10b055167; -[SCStreakRestoreReplyParameters copyWithZone:] */

undefined8 FUN_10b055144(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b055168; end: 10b0551e7; -[SCStreakRestoreReplyParameters hash] */

long * FUN_10b055168(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar3 = &lStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&lStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == (long *)param_3) {
LAB_10b055278:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b055284;
    puVar6 = (undefined1 *)plVar3;
    _objc_opt_class(plVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)plVar3 + 8) == *(long *)(param_3 + 8))) {
      lVar5 = *(long *)((long)plVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)plVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b055284;
        }
        goto LAB_10b055278;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b055284:
  _objc_release(param_3);
  return (long *)puVar6;
}



/* Entry: 10b0551e8; end: 10b05529f; -[SCStreakRestoreReplyParameters isEqual:] */

long FUN_10b0551e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b055278:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b055284;
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
          goto LAB_10b055284;
        }
        goto LAB_10b055278;
      }
    }
    lVar3 = 0;
  }
LAB_10b055284:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0552a0; end: 10b0552a7; -[SCStreakRestoreReplyParameters streakCount] */

undefined8 FUN_10b0552a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0552a8; end: 10b0552af; -[SCStreakRestoreReplyParameters conversationId] */

undefined8 FUN_10b0552a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0552b0; end: 10b0552b7; -[SCStreakRestoreReplyParameters streakRestoreSessionId] */

undefined8 FUN_10b0552b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0552b8; end: 10b0552e7; -[SCStreakRestoreReplyParameters .cxx_destruct] */

void FUN_10b0552b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0552e8; end: 10b05536f; -[SCCreatorSubscriptionsReplyParameters initWithIsMassSnap:fanPassRecipientId:] */

undefined1 *
FUN_10b0552e8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112704de8;
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



/* Entry: 10b055370; end: 10b055393; -[SCCreatorSubscriptionsReplyParameters copyWithZone:] */

undefined8 FUN_10b055370(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b055394; end: 10b0553f7; -[SCCreatorSubscriptionsReplyParameters hash] */

ulong * FUN_10b055394(long param_1,undefined8 param_2,ulong *param_3)

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
    if ((puVar2 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10b05547c;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || ((char)puVar2[1] != (char)param_3[1])) {
      puVar4 = (ulong *)0x0;
      goto LAB_10b05547c;
    }
    puVar4 = (ulong *)puVar2[2];
    if (puVar4 != (ulong *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b05547c;
    }
  }
  puVar4 = (ulong *)0x1;
LAB_10b05547c:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b0553f8; end: 10b055497; -[SCCreatorSubscriptionsReplyParameters isEqual:] */

long FUN_10b0553f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b05547c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b05547c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b05547c;
    }
  }
  lVar3 = 1;
LAB_10b05547c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b055498; end: 10b05549f; -[SCCreatorSubscriptionsReplyParameters isMassSnap] */

undefined1 FUN_10b055498(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b0554a0; end: 10b0554a7; -[SCCreatorSubscriptionsReplyParameters fanPassRecipientId] */

undefined8 FUN_10b0554a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0554a8; end: 10b0554b3; -[SCCreatorSubscriptionsReplyParameters .cxx_destruct] */

void FUN_10b0554a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0554b4; end: 10b055687; -[SCRemixScope initWithPresentingViewController:externalMediaItem:replyParameters:sourceUserId:sourceSnapId:sourceTrackInfo:remixPermission:contextSessionId:launchSource:navigationType:delegate:shouldDisableRecovery:] */

undefined8 *
FUN_10b0554b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14)

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
  _objc_retain(param_10);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_112704df0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 0xb,param_3);
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
    puVar1[7] = param_9;
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    puVar1[9] = param_11;
    _objc_storeWeak(puVar1 + 0xc,param_13);
    puVar1[10] = param_12;
    *(undefined1 *)(puVar1 + 1) = param_14;
  }
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b055688; end: 10b05568f; -[SCRemixScope externalMediaItem] */

undefined8 FUN_10b055688(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b055690; end: 10b055697; -[SCRemixScope replyParameters] */

undefined8 FUN_10b055690(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b055698; end: 10b05569f; -[SCRemixScope sourceUserId] */

undefined8 FUN_10b055698(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0556a0; end: 10b0556a7; -[SCRemixScope sourceSnapId] */

undefined8 FUN_10b0556a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b0556a8; end: 10b0556af; -[SCRemixScope sourceTrackInfo] */

undefined8 FUN_10b0556a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b0556b0; end: 10b0556b7; -[SCRemixScope remixPermission] */

undefined8 FUN_10b0556b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b0556b8; end: 10b0556bf; -[SCRemixScope contextSessionId] */

undefined8 FUN_10b0556b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b0556c0; end: 10b0556c7; -[SCRemixScope launchSource] */

undefined8 FUN_10b0556c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b0556c8; end: 10b0556cf; -[SCRemixScope navigationType] */

undefined8 FUN_10b0556c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b0556d0; end: 10b0556e7; -[SCRemixScope presentingViewController] */

void FUN_10b0556d0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0556e8; end: 10b0556ff; -[SCRemixScope delegate] */

void FUN_10b0556e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b055700; end: 10b055707; -[SCRemixScope shouldDisableRecovery] */

undefined1 FUN_10b055700(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b055708; end: 10b05570f; -[SCRemixScope setShouldDisableRecovery:] */

void FUN_10b055708(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b055710; end: 10b05577f; -[SCRemixScope .cxx_destruct] */

void FUN_10b055710(long param_1)

{
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b055780; end: 10b055807; -[SCRemixMusicTrackInfo initWithTrackId:startOffsetSeconds:] */

undefined1 *
FUN_10b055780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112704df8;
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



/* Entry: 10b055808; end: 10b05582b; -[SCRemixMusicTrackInfo copyWithZone:] */

undefined8 FUN_10b055808(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b05582c; end: 10b05588b; -[SCRemixMusicTrackInfo hash] */

undefined8 * FUN_10b05582c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
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
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b055910;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[1] != param_3[1])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10b055910;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b055910;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10b055910:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b05588c; end: 10b05592b; -[SCRemixMusicTrackInfo isEqual:] */

long FUN_10b05588c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b055910;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b055910;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b055910;
    }
  }
  lVar3 = 1;
LAB_10b055910:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b05592c; end: 10b055933; -[SCRemixMusicTrackInfo trackId] */

undefined8 FUN_10b05592c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b055934; end: 10b05593b; -[SCRemixMusicTrackInfo startOffsetSeconds] */

undefined8 FUN_10b055934(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b05593c; end: 10b055947; -[SCRemixMusicTrackInfo .cxx_destruct] */

void FUN_10b05593c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b055948; end: 10b0559ab; +[SCRemixReplyParameters groupWithGroupId:] */

void FUN_10b055948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b23b8;
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



/* Entry: 10b0559ac; end: 10b0559f7; +[SCRemixReplyParameters story] */

void FUN_10b0559ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b23b8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0559f8; end: 10b055ac3; +[SCRemixReplyParameters userWithUserId:username:displayName:] */

void FUN_10b0559f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b23b8;
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
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b055ac4; end: 10b055ccf; -[SCRemixReplyParameters initWithCoder:] */

undefined8 * FUN_10b055ac4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_60 = PTR_PTR_112704e00;
  puVar1 = &uStack_68;
  uStack_68 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x21;
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((int)uVar2 != 0) {
        uVar2 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = puVar1[3];
        puVar1[3] = uVar2;
        _objc_release(uVar5);
        uVar2 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = puVar1[4];
        puVar1[4] = uVar2;
        _objc_release(uVar5);
        uVar5 = 1;
        lVar6 = 0x28;
        goto LAB_10b055bd4;
      }
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) == 0) goto LAB_10b055c5c;
      uVar5 = 2;
    }
    else {
      uVar5 = 0;
      lVar6 = 0x10;
LAB_10b055bd4:
      uVar2 = param_3;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
      *(ulong *)((long)puVar1 + lVar6) = uVar2;
      _objc_release(uVar4);
    }
    puVar1[1] = uVar5;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_10b055c5c:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110db7158;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_50 = unaff_x21;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar3);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10b055cd0; end: 10b055cf3; -[SCRemixReplyParameters copyWithZone:] */

undefined8 FUN_10b055cd0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b055cf4; end: 10b055dbf; -[SCRemixReplyParameters encodeWithCoder:] */

void FUN_10b055cf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e51658;
    lVar2 = 0x10;
    ppuVar1 = &PTR____CFConstantStringClassReference_110eba298;
LAB_10b055d8c:
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + lVar2),ppuVar1);
  }
  else {
    if (lVar2 != 2) {
      if (lVar2 != 1) goto LAB_10b055dac;
      func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                          &PTR____CFConstantStringClassReference_110f532d8);
      func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                          &PTR____CFConstantStringClassReference_110f532f8);
      ppuVar3 = &PTR____CFConstantStringClassReference_110f532b8;
      lVar2 = 0x28;
      ppuVar1 = &PTR____CFConstantStringClassReference_110f4b0f8;
      goto LAB_10b055d8c;
    }
    ppuVar3 = &PTR____CFConstantStringClassReference_110f53318;
  }
  func_0x00010c14cb00(param_3,param_2,ppuVar3,&PTR____CFConstantStringClassReference_110db7018);
LAB_10b055dac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b055dc0; end: 10b055e4f; -[SCRemixReplyParameters hash] */

void FUN_10b055dc0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
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
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_112704e00;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b055e50; end: 10b055e93; -[SCRemixReplyParameters internalInit] */

void FUN_10b055e50(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112704e00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b055e94; end: 10b055f7b; -[SCRemixReplyParameters isEqual:] */

long FUN_10b055e94(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b055f54:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b055f60;
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
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10b055f60;
            }
            goto LAB_10b055f54;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b055f60:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b055f7c; end: 10b056033; -[SCRemixReplyParameters matchGroup:user:story:] */

void FUN_10b055f7c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
  }
  else if (lVar1 == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                 *(undefined8 *)(param_1 + 0x28));
    }
  }
  else if ((lVar1 == 0) && (param_3 != 0)) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b056034; end: 10b05607b; -[SCRemixReplyParameters .cxx_destruct] */

void FUN_10b056034(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b05607c; end: 10b056123; -[SCRemixExportItem initWithRemixMetadata:remixExternalMediaItemProvider:] */

undefined1 *
FUN_10b05607c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112704e08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b056124; end: 10b056147; -[SCRemixExportItem copyWithZone:] */

undefined8 FUN_10b056124(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b056148; end: 10b0561bb; -[SCRemixExportItem hash] */

undefined8 * FUN_10b056148(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b05623c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b056248;
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
          goto LAB_10b056248;
        }
        goto LAB_10b05623c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b056248:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b0561bc; end: 10b056263; -[SCRemixExportItem isEqual:] */

long FUN_10b0561bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b05623c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b056248;
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
          goto LAB_10b056248;
        }
        goto LAB_10b05623c;
      }
    }
    lVar3 = 0;
  }
LAB_10b056248:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b056264; end: 10b05626b; -[SCRemixExportItem remixMetadata] */

undefined8 FUN_10b056264(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b05626c; end: 10b056273; -[SCRemixExportItem remixExternalMediaItemProvider] */

undefined8 FUN_10b05626c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b056274; end: 10b0562a3; -[SCRemixExportItem .cxx_destruct] */

void FUN_10b056274(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0562a4; end: 10b0563eb; -[SCRemixMetadata initWithCoder:] */

undefined1 * FUN_10b0562a4(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_112704e10;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x00010bf66e40(param_4);
    dVar4 = (double)param_1;
    *(double *)((long)puVar1 + 0x30) = dVar4;
    func_0x00010bf66e40(param_4);
    dVar4 = (double)SUB84(dVar4,0);
    *(double *)((long)puVar1 + 0x38) = dVar4;
    func_0x00010bf66e40(param_4);
    *(double *)((long)puVar1 + 0x40) = (double)SUB84(dVar4,0);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0563ec; end: 10b0564fb; -[SCRemixMetadata initWithReplyParameters:sourceUserId:sourceSnapId:remixPermission:remixLaunchSource:minimumTotalNonRemixDurationInMS:minimumTotalSnapDurationInMS:minimumRemixSegmentDurationInMS:] */

undefined1 *
FUN_10b0563ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_112704e10;
  uStack_70 = param_4;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_9;
    *(undefined8 *)((long)puVar1 + 0x28) = param_10;
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    *(undefined8 *)((long)puVar1 + 0x38) = param_2;
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0564fc; end: 10b05651f; -[SCRemixMetadata copyWithZone:] */

undefined8 FUN_10b0564fc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b056520; end: 10b056603; -[SCRemixMetadata encodeWithCoder:] */

void FUN_10b056520(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f53338);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f53358);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f53378);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f53398);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f533b8);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x30),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f533d8);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x38),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f533f8);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x40),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f53418);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b056604; end: 10b0566f3; -[SCRemixMetadata hash] */

undefined8 * FUN_10b056604(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar4;
  func_0x00010bfde980();
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  uVar8 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_40 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_38 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_30 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar5 = &uStack_68;
  uStack_58 = uVar3;
  func_0x000107c3191c(puVar5,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_10b056848:
    puVar9 = (undefined8 *)0x1;
  }
  else {
    puVar9 = (undefined8 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b056854;
    puVar9 = puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar6 & 1) != 0) && ((puVar5[4] == param_3[4] && (puVar5[5] == param_3[5])))) {
      dVar11 = ABS((double)puVar5[6] - (double)param_3[6]);
      dVar10 = ABS((double)puVar5[6] + (double)param_3[6]) * 2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar2 = dVar11 < dVar10;
      }
      if (bVar2) {
        dVar11 = ABS((double)puVar5[7] - (double)param_3[7]);
        dVar10 = ABS((double)puVar5[7] + (double)param_3[7]) * 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
          bVar2 = dVar11 < dVar10;
        }
        if (bVar2) {
          dVar11 = ABS((double)puVar5[8] - (double)param_3[8]);
          dVar10 = ABS((double)puVar5[8] + (double)param_3[8]) * 2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10)))
          {
            bVar2 = dVar11 < dVar10;
          }
          if (((bVar2) &&
              ((lVar7 = puVar5[1], lVar7 == param_3[1] || (func_0x00010c071ae0(), (int)lVar7 != 0)))
              ) && ((lVar7 = puVar5[2], lVar7 == param_3[2] ||
                    (func_0x00010c071ae0(), (int)lVar7 != 0)))) {
            puVar9 = (undefined8 *)puVar5[3];
            if (puVar9 != (undefined8 *)param_3[3]) {
              func_0x00010c071ae0();
              goto LAB_10b056854;
            }
            goto LAB_10b056848;
          }
        }
      }
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_10b056854:
  _objc_release(param_3);
  return puVar9;
}



/* Entry: 10b0566f4; end: 10b05686f; -[SCRemixMetadata isEqual:] */

long FUN_10b0566f4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b056848:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b056854;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
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
          dVar6 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40));
          dVar5 = ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
            bVar1 = dVar6 < dVar5;
          }
          if (((bVar1) &&
              ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
             ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
            lVar4 = *(long *)(param_1 + 0x18);
            if (lVar4 != *(long *)(param_3 + 0x18)) {
              func_0x00010c071ae0();
              goto LAB_10b056854;
            }
            goto LAB_10b056848;
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b056854:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b056870; end: 10b056877; -[SCRemixMetadata replyParameters] */

undefined8 FUN_10b056870(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b056878; end: 10b05687f; -[SCRemixMetadata sourceUserId] */

undefined8 FUN_10b056878(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b056880; end: 10b056887; -[SCRemixMetadata sourceSnapId] */

undefined8 FUN_10b056880(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b056888; end: 10b05688f; -[SCRemixMetadata remixPermission] */

undefined8 FUN_10b056888(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b056890; end: 10b056897; -[SCRemixMetadata remixLaunchSource] */

undefined8 FUN_10b056890(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b056898; end: 10b05689f; -[SCRemixMetadata minimumTotalNonRemixDurationInMS] */

undefined8 FUN_10b056898(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b0568a0; end: 10b0568a7; -[SCRemixMetadata minimumTotalSnapDurationInMS] */

undefined8 FUN_10b0568a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b0568a8; end: 10b0568af; -[SCRemixMetadata minimumRemixSegmentDurationInMS] */

undefined8 FUN_10b0568a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}


