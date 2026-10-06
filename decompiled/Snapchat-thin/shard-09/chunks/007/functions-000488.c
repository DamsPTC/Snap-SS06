/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10708b958; end: 10708b95f; -[SCChatSnapContentViewModel postSnapActionsHeight] */

undefined8 FUN_10708b958(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10708b960; end: 10708b967; -[SCChatSnapContentViewModel postSnapActionsParams] */

undefined8 FUN_10708b960(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10708b968; end: 10708b96f; -[SCChatSnapContentViewModel reuseIdentifier] */

undefined8 FUN_10708b968(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 10708b970; end: 10708b977; -[SCChatSnapContentViewModel contentHeight] */

undefined8 FUN_10708b970(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 10708b978; end: 10708b97f; -[SCChatSnapContentViewModel cellWillDisplayAction] */

undefined8 FUN_10708b978(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 10708b980; end: 10708b987; -[SCChatSnapContentViewModel displaySnapchatPlusBorder] */

undefined1 FUN_10708b980(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10708b988; end: 10708b98f; -[SCChatSnapContentViewModel expirationAnimationData] */

undefined8 FUN_10708b988(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 10708b990; end: 10708ba8b; -[SCChatSnapContentViewModel .cxx_destruct] */

void FUN_10708b990(long param_1)

{
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 10708ba8c; end: 10708bb7b; -[SCChatSnapLoadActionData initWithMessageId:conversationId:media:isGroupConversation:requestContext:] */

undefined1 *
FUN_10708ba8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7)

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
  puStack_48 = PTR_PTR_1126f8898;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10708bb7c; end: 10708bb9f; -[SCChatSnapLoadActionData copyWithZone:] */

undefined8 FUN_10708bb7c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10708bba0; end: 10708bc33; -[SCChatSnapLoadActionData hash] */

undefined8 * FUN_10708bba0(long param_1,undefined8 param_2,undefined1 *param_3)

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
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x28);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10708bcec:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10708bcf8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)((long)puVar3 + 8) == param_3[8] &&
        (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
          if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10708bcf8;
          }
          goto LAB_10708bcec;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10708bcf8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10708bc34; end: 10708bd13; -[SCChatSnapLoadActionData isEqual:] */

long FUN_10708bc34(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10708bcec:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10708bcf8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10708bcf8;
          }
          goto LAB_10708bcec;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10708bcf8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10708bd14; end: 10708bd1b; -[SCChatSnapLoadActionData messageId] */

undefined8 FUN_10708bd14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10708bd1c; end: 10708bd23; -[SCChatSnapLoadActionData conversationId] */

undefined8 FUN_10708bd1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10708bd24; end: 10708bd2b; -[SCChatSnapLoadActionData media] */

undefined8 FUN_10708bd24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10708bd2c; end: 10708bd33; -[SCChatSnapLoadActionData isGroupConversation] */

undefined1 FUN_10708bd2c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10708bd34; end: 10708bd3b; -[SCChatSnapLoadActionData requestContext] */

undefined8 FUN_10708bd34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10708bd3c; end: 10708bd77; -[SCChatSnapLoadActionData .cxx_destruct] */

void FUN_10708bd3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10708bd78; end: 10708bdef; -[SCChatSnapLoadingLoggingActionData initWithMediaId:] */

undefined1 * FUN_10708bd78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f88a0;
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



/* Entry: 10708bdf0; end: 10708be13; -[SCChatSnapLoadingLoggingActionData copyWithZone:] */

undefined8 FUN_10708bdf0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10708be14; end: 10708be1b; -[SCChatSnapLoadingLoggingActionData hash] */

void FUN_10708be14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10708be1c; end: 10708beab; -[SCChatSnapLoadingLoggingActionData isEqual:] */

long FUN_10708be1c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10708be90;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10708be90;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10708be90;
    }
  }
  lVar3 = 1;
LAB_10708be90:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10708beac; end: 10708beb3; -[SCChatSnapLoadingLoggingActionData mediaId] */

undefined8 FUN_10708beac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10708beb4; end: 10708bebf; -[SCChatSnapLoadingLoggingActionData .cxx_destruct] */

void FUN_10708beb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10708bec0; end: 10708bf37; -[SCChatSnapMessageLoggingActionData initWithMessageId:] */

undefined1 * FUN_10708bec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f88a8;
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



/* Entry: 10708bf38; end: 10708bf5b; -[SCChatSnapMessageLoggingActionData copyWithZone:] */

undefined8 FUN_10708bf38(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10708bf5c; end: 10708bf63; -[SCChatSnapMessageLoggingActionData hash] */

void FUN_10708bf5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10708bf64; end: 10708bff3; -[SCChatSnapMessageLoggingActionData isEqual:] */

long FUN_10708bf64(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10708bfd8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10708bfd8;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10708bfd8;
    }
  }
  lVar3 = 1;
LAB_10708bfd8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10708bff4; end: 10708bffb; -[SCChatSnapMessageLoggingActionData messageId] */

undefined8 FUN_10708bff4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10708bffc; end: 10708c007; -[SCChatSnapMessageLoggingActionData .cxx_destruct] */

void FUN_10708bffc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10708c008; end: 10708c0bb; -[SCChatSnapPressToReplayActionData initWithMessageId:conversationId:isGroupConversation:] */

undefined1 *
FUN_10708c008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f88b0;
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



/* Entry: 10708c0bc; end: 10708c0df; -[SCChatSnapPressToReplayActionData copyWithZone:] */

undefined8 FUN_10708c0bc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10708c0e0; end: 10708c157; -[SCChatSnapPressToReplayActionData hash] */

undefined8 * FUN_10708c0e0(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_10708c1e8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10708c1f4;
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
          goto LAB_10708c1f4;
        }
        goto LAB_10708c1e8;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10708c1f4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10708c158; end: 10708c20f; -[SCChatSnapPressToReplayActionData isEqual:] */

long FUN_10708c158(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10708c1e8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10708c1f4;
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
          goto LAB_10708c1f4;
        }
        goto LAB_10708c1e8;
      }
    }
    lVar3 = 0;
  }
LAB_10708c1f4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10708c210; end: 10708c217; -[SCChatSnapPressToReplayActionData messageId] */

undefined8 FUN_10708c210(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10708c218; end: 10708c21f; -[SCChatSnapPressToReplayActionData conversationId] */

undefined8 FUN_10708c218(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10708c220; end: 10708c227; -[SCChatSnapPressToReplayActionData isGroupConversation] */

undefined1 FUN_10708c220(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10708c228; end: 10708c257; -[SCChatSnapPressToReplayActionData .cxx_destruct] */

void FUN_10708c228(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10708c258; end: 10708c3a7; -[SCChatSnapTapToViewActionData initWithMessageId:conversationId:senderDisplayName:isGroupConversation:isLockedConversation:senderIdentifier:selfDestructTimestampMs:] */

undefined1 *
FUN_10708c258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9)

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
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f88b8;
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
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10708c3a8; end: 10708c3cb; -[SCChatSnapTapToViewActionData copyWithZone:] */

undefined8 FUN_10708c3a8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10708c3cc; end: 10708c46f; -[SCChatSnapTapToViewActionData hash] */

undefined8 * FUN_10708c3cc(long param_1,undefined8 param_2,undefined1 *param_3)

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
  ulong uStack_40;
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
  uStack_40 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10708c558:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10708c564;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))))
    {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x30);
              if (puVar6 != *(undefined1 **)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_10708c564;
              }
              goto LAB_10708c558;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10708c564:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10708c470; end: 10708c57f; -[SCChatSnapTapToViewActionData isEqual:] */

long FUN_10708c470(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10708c558:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10708c564;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_10708c564;
              }
              goto LAB_10708c558;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10708c564:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10708c580; end: 10708c587; -[SCChatSnapTapToViewActionData messageId] */

undefined8 FUN_10708c580(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10708c588; end: 10708c58f; -[SCChatSnapTapToViewActionData conversationId] */

undefined8 FUN_10708c588(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10708c590; end: 10708c597; -[SCChatSnapTapToViewActionData senderDisplayName] */

undefined8 FUN_10708c590(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10708c598; end: 10708c59f; -[SCChatSnapTapToViewActionData isGroupConversation] */

undefined1 FUN_10708c598(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10708c5a0; end: 10708c5a7; -[SCChatSnapTapToViewActionData isLockedConversation] */

undefined1 FUN_10708c5a0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10708c5a8; end: 10708c5af; -[SCChatSnapTapToViewActionData senderIdentifier] */

undefined8 FUN_10708c5a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10708c5b0; end: 10708c5b7; -[SCChatSnapTapToViewActionData selfDestructTimestampMs] */

undefined8 FUN_10708c5b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10708c5b8; end: 10708c60b; -[SCChatSnapTapToViewActionData .cxx_destruct] */

void FUN_10708c5b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10708c60c; end: 10708ca9b; -[SCChatUIParameterProvider initWithMessages:conversation:conversationParticipants:currentUserId:animationData:payloadWidth:payloadContentWidth:snapchattersData:postSnapActionsParams:senderHeaderIdentifier:currentUserSnapchatter:prefetchedData:prefetchPluginIdentifier:valdiRuntimeProvider:circumstanceEngine:chatGraphene:snapCountDownManager:connectivityMonitor:friendmojiPresenter:chatEligibilityProvider:messagingExperimentService:urlSpamProvider:normalizedSpamCheckURLFinder:renderAsBubble:] */

undefined8 *
FUN_10708c60c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined1 param_26)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  puStack_80 = PTR_PTR_1126f88c0;
  puVar1 = &uStack_88;
  uStack_88 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    puVar1[7] = param_1;
    puVar1[8] = param_2;
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_25;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 1) = param_26;
  }
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
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
  return puVar1;
}



/* Entry: 10708ca9c; end: 10708caa3; -[SCChatUIParameterProvider messages] */

undefined8 FUN_10708ca9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10708caa4; end: 10708caab; -[SCChatUIParameterProvider conversation] */

undefined8 FUN_10708caa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10708caac; end: 10708cab3; -[SCChatUIParameterProvider conversationParticipants] */

undefined8 FUN_10708caac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10708cab4; end: 10708cabb; -[SCChatUIParameterProvider currentUserId] */

undefined8 FUN_10708cab4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10708cabc; end: 10708cac3; -[SCChatUIParameterProvider animationData] */

undefined8 FUN_10708cabc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10708cac4; end: 10708cacb; -[SCChatUIParameterProvider payloadWidth] */

undefined8 FUN_10708cac4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10708cacc; end: 10708cad3; -[SCChatUIParameterProvider payloadContentWidth] */

undefined8 FUN_10708cacc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10708cad4; end: 10708cadb; -[SCChatUIParameterProvider snapchattersData] */

undefined8 FUN_10708cad4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10708cadc; end: 10708cae3; -[SCChatUIParameterProvider postSnapActionsParams] */

undefined8 FUN_10708cadc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10708cae4; end: 10708caeb; -[SCChatUIParameterProvider senderHeaderIdentifier] */

undefined8 FUN_10708cae4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10708caec; end: 10708caf3; -[SCChatUIParameterProvider currentUserSnapchatter] */

undefined8 FUN_10708caec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10708caf4; end: 10708cafb; -[SCChatUIParameterProvider valdiRuntimeProvider] */

undefined8 FUN_10708caf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10708cafc; end: 10708cb03; -[SCChatUIParameterProvider circumstanceEngine] */

undefined8 FUN_10708cafc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10708cb04; end: 10708cb0b; -[SCChatUIParameterProvider chatGraphene] */

undefined8 FUN_10708cb04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10708cb0c; end: 10708cb13; -[SCChatUIParameterProvider prefetchedData] */

undefined8 FUN_10708cb0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10708cb14; end: 10708cb1b; -[SCChatUIParameterProvider prefetchPluginIdentifer] */

undefined8 FUN_10708cb14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10708cb1c; end: 10708cb23; -[SCChatUIParameterProvider snapCountDownManager] */

undefined8 FUN_10708cb1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10708cb24; end: 10708cb2b; -[SCChatUIParameterProvider connectivityMonitor] */

undefined8 FUN_10708cb24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10708cb2c; end: 10708cb33; -[SCChatUIParameterProvider friendmojiPresenter] */

undefined8 FUN_10708cb2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10708cb34; end: 10708cb3b; -[SCChatUIParameterProvider chatEligibilityProvider] */

undefined8 FUN_10708cb34(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10708cb3c; end: 10708cb43; -[SCChatUIParameterProvider messagingExperimentService] */

undefined8 FUN_10708cb3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10708cb44; end: 10708cb4b; -[SCChatUIParameterProvider urlSpamProvider] */

undefined8 FUN_10708cb44(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10708cb4c; end: 10708cb53; -[SCChatUIParameterProvider normalizedSpamCheckURLFinder] */

undefined8 FUN_10708cb4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 10708cb54; end: 10708cb5b; -[SCChatUIParameterProvider renderAsBubble] */

undefined1 FUN_10708cb54(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10708cb5c; end: 10708cc6f; -[SCChatUIParameterProvider .cxx_destruct] */

void FUN_10708cb5c(long param_1)

{
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10708cc70; end: 10708ccaf;  */

void FUN_10708cc70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4023000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_demiBoldAvenirNextFontOfSize__1125b8f48);
  return;
}



/* Entry: 10708ccb0; end: 10708ccdf; +[SCChatActionMenuAnimationUtils performWithAnimationBlock:completionBlock:] */

void FUN_10708ccb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf03470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fd3333333333333,0,0x3feb333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20,
             PTR_s_animateWithDuration_delay_usingS_11259e6c0,0,param_3,param_4);
  return;
}



/* Entry: 10708cce0; end: 10708cd13; +[SCChatActionMenuAnimationUtils scaleFactorWithContentSize:maxContentSize:] */

double FUN_10708cce0(double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  
  dVar1 = 0.9;
  if (param_4 < param_2 * 0.9) {
    return param_4 / param_2;
  }
  if (param_3 < param_1 * 0.9) {
    dVar1 = param_3 / param_1;
  }
  return dVar1;
}



/* Entry: 10708cd14; end: 10708cdb3; +[SCChatActionMenuAnimationUtils transformWithContentSize:maxContentSize:scaleFactor:] */

void FUN_10708cd14(undefined8 param_1,double param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,double param_6)

{
  double dVar1;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  
  _CGAffineTransformMakeScale(&uStack_70,param_6,param_6);
  dVar1 = (1.0 - param_6) * -0.5;
  _CGAffineTransformMakeTranslation(&uStack_a0,param_2 * dVar1,param_3 * dVar1);
  uStack_c8 = uStack_68;
  uStack_d0 = uStack_70;
  uStack_b8 = uStack_58;
  uStack_c0 = uStack_60;
  uStack_a8 = uStack_48;
  uStack_b0 = uStack_50;
  uStack_f8 = uStack_98;
  uStack_100 = uStack_a0;
  uStack_e8 = uStack_88;
  uStack_f0 = uStack_90;
  uStack_d8 = uStack_78;
  uStack_e0 = uStack_80;
  _CGAffineTransformConcat(param_1,&uStack_d0,&uStack_100);
  return;
}



/* Entry: 10708cdb4; end: 10708ce13; +[SCChatActionMenuAnimationUtils transformWithContentSize:maxContentSize:] */

void FUN_10708cdb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010c14e1c0();
                    /* WARNING: Could not recover jumptable at 0x00010c27a5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,param_4,param_5,uVar1,param_6,
             PTR_s_transformWithContentSize_maxCont_11267c390);
  return;
}



/* Entry: 10708ce14; end: 10708ceef;  */

void FUN_10708ce14(long param_1,long param_2,ulong param_3,long param_4,int param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010c08fa60();
    lVar2 = 0;
    if ((param_3 == 1) || (lVar1 == 0)) goto LAB_10708cec8;
    if ((7 < param_3) || ((1L << (param_3 & 0x3f) & 0xc4U) == 0)) {
      lVar2 = param_1;
      func_0x00010708cef0(param_1,param_2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10708cec8;
    }
    if (param_5 != 0) {
      func_0x00010708cf88(param_4,param_1,param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_4;
      goto LAB_10708cec8;
    }
  }
  lVar2 = 0;
LAB_10708cec8:
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10708cef0; end: 10708d18b;  */

void FUN_10708cef0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cb2e8;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010c02b620();
  _objc_release(param_2);
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10708d18c; end: 10708d79f;  */

void FUN_10708d18c(undefined **param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0d3c80();
  func_0x00010c12d360();
  ppuVar1 = param_1;
  func_0x00010bf51e00();
  ppuVar2 = ppuVar1;
  func_0x000108ef3a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_3;
  func_0x00010bf529e0();
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (lVar3 == 0) {
    ppuVar12 = ppuVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar3 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110acab90);
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar5 = puVar4;
    func_0x000108ef3a20(puVar4,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSCountedSet_1126ba498;
    _objc_opt_new();
    puVar7 = PTR__OBJC_CLASS___NSCountedSet_1126ba498;
    _objc_opt_new();
    _objc_retain(puVar5);
    puVar8 = puVar5;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (puVar8 != (undefined *)0x0) {
      puVar17 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(puVar5);
        }
        puVar16 = PTR_PTR_1126b2c18;
        func_0x00010bfb1120(PTR_PTR_1126b2c18);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR_PTR_1126b2c18;
        func_0x00010c22d940(PTR_PTR_1126b2c18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar6);
        func_0x00010befa120(puVar7);
        _objc_release(puVar9);
        _objc_release(puVar16);
        puVar17 = puVar17 + 1;
      } while (puVar8 != puVar17);
      puVar8 = puVar5;
      func_0x00010bf52a60();
    }
    _objc_release(puVar5);
    ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(ppuVar2);
    ppuVar12 = ppuVar2;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (ppuVar12 != (undefined **)0x0) {
      ppuVar18 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(ppuVar2);
        }
        puVar16 = *(undefined **)((long)ppuVar18 * 8);
        puVar8 = PTR_PTR_1126b2c18;
        func_0x00010bfb1120(PTR_PTR_1126b2c18);
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar6;
        func_0x00010bf52b00();
        if (puVar17 == (undefined *)0x1) {
          puVar9 = puVar8;
          func_0x00010bcbeb70(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(ppuVar10);
        }
        else {
          puVar9 = PTR_PTR_1126b2c18;
          func_0x00010c22d940(PTR_PTR_1126b2c18);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar7;
          func_0x00010bf52b00();
          puVar17 = puVar9;
          if (puVar11 != (undefined *)0x1) {
            puVar17 = puVar16;
          }
          func_0x00010bcbeb70(puVar17);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(ppuVar10);
          _objc_release(puVar17);
        }
        _objc_release(puVar9);
        _objc_release(puVar8);
        ppuVar18 = (undefined **)((long)ppuVar18 + 1);
      } while (ppuVar12 != ppuVar18);
      ppuVar12 = ppuVar2;
      func_0x00010bf52a60();
    }
    _objc_release(ppuVar2);
    ppuVar12 = ppuVar10;
    func_0x00010bf51e00();
    _objc_release(ppuVar10);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  ppuVar1 = ppuVar12;
  func_0x00010bf529e0();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar1 = ppuVar12;
    func_0x00010bf529e0();
    if (ppuVar1 == (undefined **)0x1) {
      ppuVar2 = ppuVar12;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar1 = ppuVar12;
      func_0x00010bf529e0();
      ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (ppuVar1 == (undefined **)0x2) {
        FUN_10708d7f0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = ppuVar12;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        ppuVar18 = ppuVar12;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar18);
        _objc_release(ppuVar10);
      }
      else {
        func_0x00010bf529e0(ppuVar12);
        ppuVar1 = ppuVar12;
        func_0x00010c25e980();
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        ppuVar10 = ppuVar1;
        func_0x00010708d808();
        _objc_retainAutoreleasedReturnValue();
        ppuVar18 = ppuVar10;
        func_0x00010708d820();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar1;
        func_0x00010bf446e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar12;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar14);
        _objc_release(ppuVar13);
        _objc_release(ppuVar18);
        _objc_release(ppuVar10);
      }
      _objc_release(ppuVar1);
    }
    ppuVar1 = ppuVar2;
    func_0x00010c09e940(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
  }
  _objc_release(ppuVar12);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    ppuVar2 = (undefined **)PTR_PTR_1126b2c18;
    func_0x00010bfb1120(PTR_PTR_1126b2c18);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar2;
    func_0x00010bcbeb70();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10708d7a0; end: 10708d7ef;  */

void FUN_10708d7a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2c18;
  func_0x00010bfb1120(PTR_PTR_1126b2c18,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bcbeb70();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10708d7f0; end: 10708d837;  */

void FUN_10708d7f0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e9bcb8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e9bcb8,
                      &PTR____CFConstantStringClassReference_110e9bcd8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10708d838; end: 10708d903; +[SCChatMetadataFetchActionData storySnapWithStorySnapId:messageId:conversationId:isGroupConversation:] */

void FUN_10708d838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d4530;
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
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2[0x28] = param_6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10708d904; end: 10708d927; -[SCChatMetadataFetchActionData copyWithZone:] */

undefined8 FUN_10708d904(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10708d928; end: 10708d9af; -[SCChatMetadataFetchActionData hash] */

void FUN_10708d928(long param_1)

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
  ulong uStack_30;
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
  uStack_30 = (ulong)*(byte *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126f88c8;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10708d9b0; end: 10708d9f3; -[SCChatMetadataFetchActionData internalInit] */

void FUN_10708d9b0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f88c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10708d9f4; end: 10708dad3; -[SCChatMetadataFetchActionData isEqual:] */

long FUN_10708d9f4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10708daac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10708dab8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(char *)(param_1 + 0x28) == *(char *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10708dab8;
          }
          goto LAB_10708daac;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10708dab8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10708dad4; end: 10708daff; -[SCChatMetadataFetchActionData matchStorySnap:] */

void FUN_10708dad4(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_1 + 8) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010708daf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 10708db00; end: 10708db3b; -[SCChatMetadataFetchActionData .cxx_destruct] */

void FUN_10708db00(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10708db3c; end: 10708dbe7; -[SCChatSingleMessageSaveActionData initWithMessageId:conversationId:] */

undefined1 *
FUN_10708db3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f88d0;
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



/* Entry: 10708dbe8; end: 10708dc0b; -[SCChatSingleMessageSaveActionData copyWithZone:] */

undefined8 FUN_10708dbe8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10708dc0c; end: 10708dc7f; -[SCChatSingleMessageSaveActionData hash] */

undefined8 * FUN_10708dc0c(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10708dd00:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10708dd0c;
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
          goto LAB_10708dd0c;
        }
        goto LAB_10708dd00;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10708dd0c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10708dc80; end: 10708dd27; -[SCChatSingleMessageSaveActionData isEqual:] */

long FUN_10708dc80(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10708dd00:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10708dd0c;
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
          goto LAB_10708dd0c;
        }
        goto LAB_10708dd00;
      }
    }
    lVar3 = 0;
  }
LAB_10708dd0c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10708dd28; end: 10708dd2f; -[SCChatSingleMessageSaveActionData messageId] */

undefined8 FUN_10708dd28(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10708dd30; end: 10708dd37; -[SCChatSingleMessageSaveActionData conversationId] */

undefined8 FUN_10708dd30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10708dd38; end: 10708dd67; -[SCChatSingleMessageSaveActionData .cxx_destruct] */

void FUN_10708dd38(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


