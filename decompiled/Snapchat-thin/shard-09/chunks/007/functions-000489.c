/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10708dd68; end: 10708ddaf; +[SCChatDoubleTapAction snapReply] */

void FUN_10708dd68(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d4440;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10708ddb0; end: 10708ddd3; -[SCChatDoubleTapAction copyWithZone:] */

undefined8 FUN_10708ddb0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10708ddd4; end: 10708dddb; -[SCChatDoubleTapAction hash] */

undefined8 FUN_10708ddd4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10708dddc; end: 10708de1f; -[SCChatDoubleTapAction internalInit] */

void FUN_10708dddc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f88d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10708de20; end: 10708dea7; -[SCChatDoubleTapAction isEqual:] */

bool FUN_10708de20(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 10708dea8; end: 10708dec3; -[SCChatDoubleTapAction matchSnapReply:] */

void FUN_10708dea8(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_1 + 8) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010708debc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  return;
}



/* Entry: 10708dec4; end: 10708df6f; -[SCChatFailedMessageDeleteActionData initWithMessageId:conversationId:] */

undefined1 *
FUN_10708dec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f88e0;
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



/* Entry: 10708df70; end: 10708df93; -[SCChatFailedMessageDeleteActionData copyWithZone:] */

undefined8 FUN_10708df70(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10708df94; end: 10708e007; -[SCChatFailedMessageDeleteActionData hash] */

undefined8 * FUN_10708df94(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10708e088:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10708e094;
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
          goto LAB_10708e094;
        }
        goto LAB_10708e088;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10708e094:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10708e008; end: 10708e0af; -[SCChatFailedMessageDeleteActionData isEqual:] */

long FUN_10708e008(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10708e088:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10708e094;
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
          goto LAB_10708e094;
        }
        goto LAB_10708e088;
      }
    }
    lVar3 = 0;
  }
LAB_10708e094:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10708e0b0; end: 10708e0b7; -[SCChatFailedMessageDeleteActionData messageId] */

undefined8 FUN_10708e0b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10708e0b8; end: 10708e0bf; -[SCChatFailedMessageDeleteActionData conversationId] */

undefined8 FUN_10708e0b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10708e0c0; end: 10708e0ef; -[SCChatFailedMessageDeleteActionData .cxx_destruct] */

void FUN_10708e0c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10708e0f0; end: 10708e19b; -[SCChatFailedMessageRetryActionData initWithMessageId:conversationId:] */

undefined1 *
FUN_10708e0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f88e8;
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



/* Entry: 10708e19c; end: 10708e1bf; -[SCChatFailedMessageRetryActionData copyWithZone:] */

undefined8 FUN_10708e19c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10708e1c0; end: 10708e233; -[SCChatFailedMessageRetryActionData hash] */

undefined8 * FUN_10708e1c0(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10708e2b4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10708e2c0;
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
          goto LAB_10708e2c0;
        }
        goto LAB_10708e2b4;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10708e2c0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10708e234; end: 10708e2db; -[SCChatFailedMessageRetryActionData isEqual:] */

long FUN_10708e234(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10708e2b4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10708e2c0;
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
          goto LAB_10708e2c0;
        }
        goto LAB_10708e2b4;
      }
    }
    lVar3 = 0;
  }
LAB_10708e2c0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10708e2dc; end: 10708e2e3; -[SCChatFailedMessageRetryActionData messageId] */

undefined8 FUN_10708e2dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10708e2e4; end: 10708e2eb; -[SCChatFailedMessageRetryActionData conversationId] */

undefined8 FUN_10708e2e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10708e2ec; end: 10708e31b; -[SCChatFailedMessageRetryActionData .cxx_destruct] */

void FUN_10708e2ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10708e31c; end: 10708e367; -[SCChatMessageAnimationData initWithSaveAnimationState:replayAnimationState:] */

void FUN_10708e31c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f88f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10708e368; end: 10708e38b; -[SCChatMessageAnimationData copyWithZone:] */

undefined8 FUN_10708e368(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10708e38c; end: 10708e3eb; -[SCChatMessageAnimationData hash] */

undefined8 * FUN_10708e38c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  lStack_20 = -lVar1;
  if (-1 < lVar1) {
    lStack_20 = lVar1;
  }
  puVar2 = &uStack_28;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
    puVar4 = (undefined8 *)0x1;
  }
  else {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
      puVar4 = puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar3 & 1) == 0) || (puVar2[1] != param_3[1])) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        puVar4 = (undefined8 *)(ulong)(puVar2[2] == param_3[2]);
      }
    }
  }
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10708e3ec; end: 10708e483; -[SCChatMessageAnimationData isEqual:] */

bool FUN_10708e3ec(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 10708e484; end: 10708e48b; -[SCChatMessageAnimationData saveAnimationState] */

undefined8 FUN_10708e484(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10708e48c; end: 10708e493; -[SCChatMessageAnimationData replayAnimationState] */

undefined8 FUN_10708e48c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10708e494; end: 10708e547; -[SCChatReplayAnimationData initWithReplayAnimationState:messageId:fillColor:] */

undefined1 *
FUN_10708e494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f88f8;
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



/* Entry: 10708e548; end: 10708e56b; -[SCChatReplayAnimationData copyWithZone:] */

undefined8 FUN_10708e548(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10708e56c; end: 10708e5e3; -[SCChatReplayAnimationData hash] */

undefined8 * FUN_10708e56c(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10708e674:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10708e680;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071c60();
          goto LAB_10708e680;
        }
        goto LAB_10708e674;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10708e680:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10708e5e4; end: 10708e69b; -[SCChatReplayAnimationData isEqual:] */

long FUN_10708e5e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10708e674:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10708e680;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071c60();
          goto LAB_10708e680;
        }
        goto LAB_10708e674;
      }
    }
    lVar3 = 0;
  }
LAB_10708e680:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10708e69c; end: 10708e6a3; -[SCChatReplayAnimationData replayAnimationState] */

undefined8 FUN_10708e69c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10708e6a4; end: 10708e6ab; -[SCChatReplayAnimationData messageId] */

undefined8 FUN_10708e6a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10708e6ac; end: 10708e6b3; -[SCChatReplayAnimationData fillColor] */

undefined8 FUN_10708e6ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10708e6b4; end: 10708e6e3; -[SCChatReplayAnimationData .cxx_destruct] */

void FUN_10708e6b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10708e6e4; end: 10708e76b; -[SCChatSaveAnimationData initWithAnimationState:messageId:] */

undefined1 *
FUN_10708e6e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8900;
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



/* Entry: 10708e76c; end: 10708e78f; -[SCChatSaveAnimationData copyWithZone:] */

undefined8 FUN_10708e76c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10708e790; end: 10708e7ef; -[SCChatSaveAnimationData hash] */

undefined8 * FUN_10708e790(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10708e874;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[1] != param_3[1])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10708e874;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10708e874;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10708e874:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10708e7f0; end: 10708e88f; -[SCChatSaveAnimationData isEqual:] */

long FUN_10708e7f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10708e874;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10708e874;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10708e874;
    }
  }
  lVar3 = 1;
LAB_10708e874:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10708e890; end: 10708e897; -[SCChatSaveAnimationData animationState] */

undefined8 FUN_10708e890(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10708e898; end: 10708e89f; -[SCChatSaveAnimationData messageId] */

undefined8 FUN_10708e898(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10708e8a0; end: 10708e8ab; -[SCChatSaveAnimationData .cxx_destruct] */

void FUN_10708e8a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10708e8ac; end: 10708e993; -[SCChatSnapCountDownAnimationData initWithTotalDurationSec:messageId:conversationId:fillColor:] */

undefined1 *
FUN_10708e8ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126f8908;
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10708e994; end: 10708e9b7; -[SCChatSnapCountDownAnimationData copyWithZone:] */

undefined8 FUN_10708e994(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10708e9b8; end: 10708ea3b; -[SCChatSnapCountDownAnimationData hash] */

undefined8 * FUN_10708e9b8(long param_1,undefined8 param_2,undefined8 *param_3)

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
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10708eae4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10708eaf0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[1] == param_3[1])) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071c60();
            goto LAB_10708eaf0;
          }
          goto LAB_10708eae4;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10708eaf0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10708ea3c; end: 10708eb0b; -[SCChatSnapCountDownAnimationData isEqual:] */

long FUN_10708ea3c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10708eae4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10708eaf0;
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
            func_0x00010c071c60();
            goto LAB_10708eaf0;
          }
          goto LAB_10708eae4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10708eaf0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10708eb0c; end: 10708eb13; -[SCChatSnapCountDownAnimationData totalDurationSec] */

undefined8 FUN_10708eb0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10708eb14; end: 10708eb1b; -[SCChatSnapCountDownAnimationData messageId] */

undefined8 FUN_10708eb14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10708eb1c; end: 10708eb23; -[SCChatSnapCountDownAnimationData conversationId] */

undefined8 FUN_10708eb1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10708eb24; end: 10708eb2b; -[SCChatSnapCountDownAnimationData fillColor] */

undefined8 FUN_10708eb24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10708eb2c; end: 10708eb67; -[SCChatSnapCountDownAnimationData .cxx_destruct] */

void FUN_10708eb2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10708eb68; end: 10708ec1b; -[SCChatSnapExpirationAnimationData initWithTimestampMs:completionString:isSentByUser:] */

undefined1 *
FUN_10708eb68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f8910;
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



/* Entry: 10708ec1c; end: 10708ec3f; -[SCChatSnapExpirationAnimationData copyWithZone:] */

undefined8 FUN_10708ec1c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10708ec40; end: 10708ecb7; -[SCChatSnapExpirationAnimationData hash] */

undefined8 * FUN_10708ec40(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_10708ed48:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10708ed54;
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
          goto LAB_10708ed54;
        }
        goto LAB_10708ed48;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10708ed54:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10708ecb8; end: 10708ed6f; -[SCChatSnapExpirationAnimationData isEqual:] */

long FUN_10708ecb8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10708ed48:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10708ed54;
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
          goto LAB_10708ed54;
        }
        goto LAB_10708ed48;
      }
    }
    lVar3 = 0;
  }
LAB_10708ed54:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10708ed70; end: 10708ed77; -[SCChatSnapExpirationAnimationData timestampMs] */

undefined8 FUN_10708ed70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10708ed78; end: 10708ed7f; -[SCChatSnapExpirationAnimationData completionString] */

undefined8 FUN_10708ed78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10708ed80; end: 10708ed87; -[SCChatSnapExpirationAnimationData isSentByUser] */

undefined1 FUN_10708ed80(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10708ed88; end: 10708edb7; -[SCChatSnapExpirationAnimationData .cxx_destruct] */

void FUN_10708ed88(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10708edb8; end: 10708ef6b;  */

void FUN_10708edb8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf0a320();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010bfbb480();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) {
      puVar6 = (undefined *)0x0;
      goto LAB_10708ef44;
    }
  }
  else {
    _objc_release(lVar1);
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar1 = param_1;
  func_0x00010bf0a320(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  lVar3 = param_1;
  func_0x00010bfbb480(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  func_0x00010bf0a0e0(puVar5,param_2,lVar4 + lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf0a320();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010bf0a320(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar5,param_2,lVar1);
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010bfbb480();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010bfbb480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar5,param_2,lVar1);
    _objc_release(lVar1);
  }
  puVar6 = puVar5;
  func_0x00010bf51e00(puVar5);
  _objc_release(puVar5);
LAB_10708ef44:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10708ef6c; end: 10708efbb;  */

void FUN_10708ef6c(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_10708edb8();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10708efbc; end: 10708f07b;  */

undefined8 FUN_10708efbc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  uVar4 = param_1;
  func_0x00010bf4ce20();
  if ((int)uVar4 == 5) {
    uVar1 = param_1;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c22ac80();
    if ((int)uVar4 == 5) {
      uVar2 = param_1;
      func_0x00010c22a700(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c258f40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0828e0();
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    else {
      uVar4 = 0;
    }
    _objc_release(uVar1);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 10708f07c; end: 10708f307;  */

ulong FUN_10708f07c(ulong param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain();
  uVar3 = param_1;
  func_0x00010bf4ce20();
  iVar2 = (int)uVar3;
  uVar3 = param_1;
  if (iVar2 == 3) {
    func_0x00010bf9e280(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c245400();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar5;
    func_0x00010bfdc7e0();
    _objc_release(uVar5);
LAB_10708f28c:
    _objc_release(uVar4);
  }
  else {
    if (iVar2 == 5) {
      uVar4 = param_1;
      func_0x00010c22a700();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uVar3 = uVar4;
      func_0x00010c22ac80();
      uVar10 = 0;
      iVar2 = (int)uVar3;
      uVar3 = uVar4;
      uVar5 = uVar4;
      if (iVar2 < 8) {
        if (iVar2 == 5) {
          func_0x00010c258f40();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          if (iVar2 != 6) goto LAB_10708f28c;
          func_0x00010c1542a0();
          _objc_retainAutoreleasedReturnValue();
        }
        uVar6 = uVar5;
        func_0x00010c0c6c20();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar6;
        func_0x00010b67af60();
        uVar1 = 0;
        if (uVar10 < 0x1b) {
          uVar1 = (uint)((1L << (uVar10 & 0x3f) & 0x7e7fc60U) != 0);
        }
        uVar10 = (ulong)uVar1;
LAB_10708f278:
        _objc_release(uVar6);
      }
      else {
        if (iVar2 == 0xb) {
          func_0x00010c0c9d60(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c245400();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar7;
          func_0x00010bfdc7e0();
LAB_10708f270:
          _objc_release(uVar7);
          goto LAB_10708f278;
        }
        if (iVar2 != 8) goto LAB_10708f28c;
        func_0x00010c08eec0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar5;
        func_0x00010bfd8ea0();
        if ((int)uVar10 != 0) {
          uVar6 = uVar4;
          func_0x00010c08eec0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar7;
          func_0x00010c27dd80();
          if ((int)uVar10 == 2) {
            uVar10 = 1;
          }
          else {
            uVar8 = uVar4;
            func_0x00010c08eec0(uVar4);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar8;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar9;
            func_0x00010c27dd80();
            uVar10 = (ulong)((int)uVar10 == 5);
            _objc_release(uVar9);
            _objc_release(uVar8);
          }
          goto LAB_10708f270;
        }
        uVar10 = 0;
      }
      _objc_release(uVar5);
      goto LAB_10708f28c;
    }
    if (iVar2 != 0xb) {
      uVar10 = 0;
      goto LAB_10708f298;
    }
    func_0x00010c2453e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010bfdc7e0();
  }
  _objc_release(uVar3);
LAB_10708f298:
  _objc_release(param_1);
  return uVar10;
}



/* Entry: 10708f308; end: 10708f35f;  */

void FUN_10708f308(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf4ce20();
  if ((int)uVar1 == 0xb) {
    uVar1 = param_1;
    func_0x00010c2453e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = 0;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10708f360; end: 10708f777;  */

undefined8 FUN_10708f360(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bf4ce20();
  uVar6 = 0x1b;
  uVar4 = param_1;
  switch(uVar2 & 0xffffffff) {
  case 0:
  case 8:
  case 0x10:
  case 0x11:
  case 0x15:
  case 0x16:
  case 0x18:
  case 0x19:
    uVar6 = 0xffffffffffffffff;
    break;
  case 2:
    uVar2 = param_1;
    func_0x00010bf676a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfdcce0();
    _objc_release(uVar2);
    uVar6 = 4;
    if ((int)uVar4 == 0) {
      uVar6 = 8;
    }
    break;
  case 3:
    uVar6 = 0;
    break;
  case 4:
    func_0x00010c253880();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c2544c0();
    iVar1 = (int)uVar2;
    uVar6 = 9;
    if (iVar1 != 2) {
      uVar6 = 1;
    }
    goto code_r0x00010708f4c8;
  case 5:
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar2 = uVar4;
    func_0x00010c22ac80();
    uVar6 = 3;
    uVar3 = uVar4;
    switch(uVar2 & 0xffffffff) {
    case 0:
    case 0xf:
    case 0x17:
    case 0x1a:
    case 0x1d:
    case 0x1f:
    case 0x23:
    case 0x27:
      uVar6 = 0xffffffffffffffff;
      break;
    case 1:
      func_0x00010c0b85e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c102a20();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c08fa60();
      uVar6 = 10;
      if (uVar5 != 0) {
        uVar6 = 0xb;
      }
      _objc_release(uVar2);
      goto code_r0x00010708f740;
    case 2:
    case 9:
      uVar6 = 0;
      break;
    case 3:
    case 6:
      uVar6 = 0xe;
      break;
    case 5:
      uVar6 = 7;
      break;
    case 7:
      uVar6 = 6;
      break;
    case 10:
      uVar6 = 0xd;
      break;
    case 0xb:
      uVar6 = 5;
      break;
    case 0xc:
      uVar6 = 0x12;
      break;
    case 0xd:
      uVar6 = 0x13;
      break;
    case 0xe:
      uVar6 = 0x14;
      break;
    case 0x10:
      uVar6 = 0x18;
      break;
    case 0x11:
      uVar6 = 0x1a;
      break;
    case 0x12:
      uVar6 = 0x1c;
      break;
    case 0x13:
      uVar6 = 0x1e;
      break;
    case 0x14:
      uVar6 = 0x22;
      break;
    case 0x15:
      uVar6 = 0x20;
      break;
    case 0x16:
      uVar6 = 0x1f;
      break;
    case 0x18:
      uVar6 = 0x24;
      break;
    case 0x19:
      uVar6 = 0x26;
      break;
    case 0x1b:
      uVar6 = 0x28;
      break;
    case 0x1c:
      uVar6 = 0x2b;
      break;
    case 0x1e:
      uVar6 = 0x10;
      break;
    case 0x20:
      uVar6 = 0x2f;
      break;
    case 0x21:
      uVar6 = 0x30;
      break;
    case 0x24:
      func_0x00010c09eb80();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c27dd80();
      uVar6 = 0x11;
      iVar1 = (int)uVar2;
      if (iVar1 < 2) {
        if ((iVar1 == -0x4524111) || (iVar1 == 0)) {
          uVar6 = 0xffffffffffffffff;
        }
      }
      else if (iVar1 == 3) {
        uVar6 = 0x34;
      }
      else if (iVar1 == 2) {
        uVar6 = 0x10;
      }
code_r0x00010708f740:
      _objc_release(uVar3);
      break;
    case 0x25:
      uVar6 = 0x35;
      break;
    case 0x26:
      uVar6 = 0x31;
      break;
    case 0x28:
      uVar6 = 0x37;
    }
    _objc_release(uVar4);
    goto code_r0x00010708f754;
  case 6:
    uVar6 = 2;
    break;
  case 7:
    _objc_retain(param_1);
    uVar2 = param_1;
    func_0x00010c242c40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c131be0();
    _objc_release(uVar2);
    uVar6 = 0;
    iVar1 = (int)uVar3;
    if (iVar1 < 0xe) {
      if (iVar1 == 0) goto code_r0x00010708f5c0;
      if (iVar1 == 0xb) {
        uVar6 = 4;
      }
      else if (iVar1 == 0xd) {
        uVar2 = param_1;
        func_0x00010c242c40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c132140();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010c2544c0();
        uVar6 = 9;
        if ((int)uVar5 != 2) {
          uVar6 = 1;
        }
        if ((int)uVar5 == 0) {
          uVar6 = 0xffffffffffffffff;
        }
        _objc_release(uVar3);
        _objc_release(uVar2);
      }
    }
    else if (iVar1 < 0x11) {
      if (iVar1 == 0xe) {
code_r0x00010708f5c0:
        uVar6 = 0xffffffffffffffff;
      }
      else if (iVar1 == 0xf) {
        uVar6 = 2;
      }
    }
    else {
      if (iVar1 == 0x11) goto code_r0x00010708f5c0;
      if (iVar1 == 0x17) {
        uVar6 = 1;
      }
    }
    goto code_r0x00010708f754;
  case 9:
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c09f160();
    iVar1 = (int)uVar2;
    uVar6 = 0x10;
    if (iVar1 != 2) {
      uVar6 = 0x11;
    }
code_r0x00010708f4c8:
    if (iVar1 == 0) {
      uVar6 = 0xffffffffffffffff;
    }
code_r0x00010708f754:
    _objc_release(uVar4);
    break;
  case 0xb:
    uVar6 = 0x17;
    break;
  case 0xc:
    uVar6 = 0x16;
    break;
  case 0xd:
    uVar6 = 0x19;
    break;
  case 0xf:
    uVar6 = 0x1d;
    break;
  case 0x12:
    uVar6 = 0x29;
    break;
  case 0x13:
    uVar6 = 0x27;
    break;
  case 0x14:
    uVar6 = 0x2a;
    break;
  case 0x17:
    uVar6 = 0x2e;
    break;
  case 0x1a:
    uVar6 = 0x36;
  }
  _objc_release(param_1);
  return uVar6;
}



/* Entry: 10708f778; end: 10708f7eb;  */

undefined8 FUN_10708f778(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0fe1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ccde0();
  _objc_release(uVar1);
  _objc_release(param_1);
  if (uVar2 < 0x44) {
    uVar3 = *(undefined8 *)(&UNK_10de1eab8 + uVar2 * 8);
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 10708f7ec; end: 10708f987;  */

ulong FUN_10708f7ec(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bf5aee0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0750a0();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    uVar5 = 2;
    goto LAB_10708f968;
  }
  uVar2 = param_1;
  func_0x00010bfd7640();
  if ((uVar2 & 1) != 0) {
    uVar5 = 0x12;
    goto LAB_10708f968;
  }
  uVar2 = param_1;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0fee00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0fef80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar4;
  func_0x00010c27dd80();
  uVar5 = 2;
  iVar1 = (int)uVar2;
  if (iVar1 < 2) {
    if (iVar1 == -0x4524111) goto LAB_10708f93c;
    if (iVar1 == 1) {
      uVar2 = uVar4;
      func_0x00010bfdc680();
      if ((uVar2 & 1) == 0) {
        uVar5 = uVar3;
        func_0x00010bfdc680(uVar3);
        uVar5 = uVar5 & 0xffffffff;
      }
      else {
        uVar5 = 1;
      }
    }
  }
  else if (iVar1 == 4) {
LAB_10708f93c:
    uVar5 = 0xffffffffffffffff;
  }
  else if (iVar1 == 3) {
    uVar5 = 9;
  }
  else if (iVar1 == 2) {
    uVar5 = 5;
  }
  _objc_release(uVar3);
  _objc_release(uVar4);
LAB_10708f968:
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 10708f988; end: 10708ffcf;  */

ulong FUN_10708f988(ulong param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar3 = param_1;
  func_0x00010bf4ce20();
  uVar6 = (uint)param_2;
  uVar8 = 9;
  uVar10 = param_1;
  uVar9 = param_1;
  switch(uVar3 & 0xffffffff) {
  case 0:
  case 8:
  case 9:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
    uVar8 = 0xffffffffffffffff;
  default:
    goto LAB_10708ff60;
  case 2:
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar8 = uVar9;
    func_0x00010bf0e740();
    uVar6 = (uint)param_2;
    if (uVar8 != 0) {
      uVar3 = uVar9;
      func_0x00010bf0e720();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      uVar6 = (uint)param_2;
      if (uVar5 != 0) {
        uVar8 = 6;
        do {
          uVar11 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(uVar3);
            }
            uVar10 = *(ulong *)(uVar11 * 8);
            uVar4 = uVar10;
            func_0x00010bf0dec0();
            if ((int)uVar4 == 3) {
              func_0x00010c0c4180();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar10;
              func_0x00010c26c3c0();
              uVar6 = (uint)param_2;
              iVar2 = (int)uVar4;
              if (iVar2 < 2) {
                if (iVar2 == -0x4524111) goto code_r0x00010708fd70;
                if (iVar2 == 0) {
                  uVar8 = 7;
                  goto code_r0x00010708ff44;
                }
                if (iVar2 == 1) {
                  uVar8 = 8;
                  goto code_r0x00010708ff44;
                }
              }
              else if (iVar2 - 2U < 2) {
code_r0x00010708fd70:
                uVar8 = 3;
                goto code_r0x00010708ff44;
              }
              _objc_release(uVar10);
            }
            else {
              func_0x00010bf0dec0();
              uVar6 = (uint)param_2;
              if ((int)uVar10 == 4) goto code_r0x00010708ff48;
            }
            uVar11 = uVar11 + 1;
          } while (uVar5 != uVar11);
          uVar5 = uVar3;
          func_0x00010bf52a60();
          uVar6 = (uint)param_2;
        } while (uVar5 != 0);
      }
      uVar8 = 3;
      goto code_r0x00010708ff48;
    }
    uVar8 = 3;
    goto code_r0x00010708ff50;
  case 3:
    func_0x00010bf9e280();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x00010c245400();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    FUN_10708f7ec();
    _objc_release(uVar3);
    goto code_r0x00010708ff54;
  case 4:
  case 0x13:
  case 0x14:
    uVar8 = 2;
    goto LAB_10708ff60;
  case 5:
    break;
  case 7:
    func_0x00010c242c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar3 = uVar9;
    func_0x00010c131be0();
    uVar8 = 2;
    iVar2 = (int)uVar3;
    uVar3 = uVar9;
    if (iVar2 < 0xe) {
      if (iVar2 != 0) {
        if (iVar2 == 0xb) {
          func_0x00010c0ed980();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar3;
          FUN_10708f7ec();
          goto code_r0x00010708ff48;
        }
        if (iVar2 == 0xc) {
          func_0x00010c131ce0();
          _objc_retainAutoreleasedReturnValue();
          goto code_r0x00010708fcd4;
        }
        goto code_r0x00010708ff50;
      }
code_r0x00010708fa48:
      uVar8 = 0xffffffffffffffff;
      goto code_r0x00010708ff50;
    }
    if (iVar2 < 0x11) {
      if (iVar2 != 0xe) {
        if (iVar2 == 0xf) {
          uVar8 = 9;
        }
        goto code_r0x00010708ff50;
      }
      goto code_r0x00010708fa48;
    }
    if (iVar2 == 0x11) goto code_r0x00010708fa48;
    if (iVar2 != 0x17) goto code_r0x00010708ff50;
    func_0x00010c132060();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010c1209e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    func_0x00010bf8e2c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x00010c08fa60();
    _objc_release(uVar8);
    uVar8 = 0x19;
    if (uVar5 != 0) {
      uVar8 = 0x1d;
    }
    goto code_r0x00010708ff44;
  case 0xb:
    func_0x00010c2453e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    FUN_10708f7ec();
    goto code_r0x00010708ff58;
  case 0xc:
    func_0x00010bf2f8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    func_0x00010bf68f40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010bfda980();
    _objc_release(uVar8);
    if ((uVar3 & 1) == 0) {
      uVar8 = uVar10;
      func_0x00010bfe7060();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar8;
      func_0x00010bfda980();
      _objc_release(uVar8);
      uVar8 = 2;
      if ((int)uVar3 == 0) {
        uVar8 = 0xffffffffffffffff;
      }
    }
    else {
      uVar8 = 2;
    }
    goto code_r0x00010708ff58;
  }
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar10 = uVar9;
  func_0x00010c22ac80();
  uVar8 = 0x14;
  uVar3 = uVar9;
  switch(uVar10 & 0xffffffff) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 7:
  case 10:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x15:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
    goto code_r0x00010708fa48;
  case 1:
    func_0x00010c0b85e0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 5:
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 6:
    func_0x00010c1542a0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 8:
    func_0x00010c08eec0();
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x00010708fedc;
  case 9:
    func_0x00010c08f600();
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x00010708fedc;
  case 0xb:
    func_0x00010c0c9d60();
    _objc_retainAutoreleasedReturnValue();
code_r0x00010708fcd4:
    uVar10 = uVar3;
    func_0x00010c245400();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar10;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    FUN_10708f7ec();
    goto code_r0x00010708ff34;
  case 0xf:
    func_0x00010c08eb60();
    _objc_retainAutoreleasedReturnValue();
code_r0x00010708fedc:
    uVar10 = uVar3;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    FUN_1070901f4();
    goto code_r0x00010708ff44;
  default:
    goto code_r0x00010708ff50;
  case 0x16:
    func_0x00010bf1e300();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010c110360();
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x00010708ff1c;
  case 0x1b:
    func_0x00010c108ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010c25a400();
    _objc_retainAutoreleasedReturnValue();
code_r0x00010708ff1c:
    uVar5 = uVar10;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    FUN_1070901f4();
code_r0x00010708ff34:
    _objc_release(uVar5);
    goto code_r0x00010708ff44;
  }
  uVar10 = uVar3;
  func_0x00010c0c6c20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar10;
  func_0x00010b67af60();
  uVar8 = uVar5 + 1;
  if (uVar8 < 0x1c) {
    if ((1L << (uVar8 & 0x3f) & 0xd8de0fdU) == 0) {
      if (uVar8 == 8) {
        uVar8 = 5;
      }
      else {
        if (uVar8 != 10) goto code_r0x00010708ffbc;
        uVar8 = 0xe;
      }
    }
    else {
      uVar8 = 1;
      if ((uVar5 + 1 < 0x1c) && ((1L << (uVar5 + 1 & 0x3f) & 0xb4b5dbbU) != 0)) {
        if (uVar5 + 1 < 0x1b) {
          uVar8 = *(ulong *)(&UNK_10de1ecd8 + (uVar5 + 1) * 8);
        }
        else {
          uVar8 = 0;
        }
      }
    }
  }
  else {
code_r0x00010708ffbc:
    uVar8 = 2;
  }
code_r0x00010708ff44:
  _objc_release(uVar10);
code_r0x00010708ff48:
  _objc_release(uVar3);
code_r0x00010708ff50:
  uVar10 = uVar9;
code_r0x00010708ff54:
  _objc_release(uVar9);
code_r0x00010708ff58:
  _objc_release(uVar10);
LAB_10708ff60:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return uVar8;
  }
  ___stack_chk_fail();
  _objc_retain();
  uVar8 = param_1;
  func_0x00010bfbb480();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010bf529e0();
  if (uVar3 == 0) {
    uVar3 = param_1;
    func_0x00010bfbb520();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar3;
    func_0x00010bf529e0();
    if (uVar9 != 0) {
      uVar6 = 1;
    }
    uVar9 = (ulong)uVar6;
    _objc_release(uVar3);
  }
  else {
    uVar9 = 1;
  }
  _objc_release(uVar8);
  _objc_release(param_1);
  return uVar9;
}



/* Entry: 10708ffd0; end: 1070901d3;  */

undefined4 FUN_10708ffd0(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bfbb480();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010bfbb520();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      param_2 = 1;
    }
    _objc_release(lVar2);
  }
  else {
    param_2 = 1;
  }
  _objc_release(lVar1);
  _objc_release(param_1);
  return param_2;
}



/* Entry: 1070901d4; end: 1070901f3;  */

bool FUN_1070901d4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c08c3a0(param_2);
  return (int)param_2 == 1;
}



/* Entry: 1070901f4; end: 10709027b;  */

ulong FUN_1070901f4(ulong param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  uVar4 = param_1;
  func_0x00010c27dd80();
  uVar3 = 2;
  iVar2 = (int)uVar4;
  if (iVar2 < 3) {
    if (iVar2 - 1U < 2) {
      uVar3 = param_1;
      func_0x00010bfdc680(param_1);
      uVar4 = uVar3 & 0xffffffff;
      goto LAB_107090264;
    }
    bVar1 = iVar2 == -0x4524111;
    uVar4 = 0xffffffffffffffff;
  }
  else {
    uVar4 = 5;
    uVar3 = 9;
    if (iVar2 != 4) {
      uVar3 = 2;
    }
    bVar1 = iVar2 == 3;
  }
  if (!bVar1) {
    uVar4 = uVar3;
  }
LAB_107090264:
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 10709027c; end: 10709034b;  */

void FUN_10709027c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_2;
  FUN_10708ef6c(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8600(param_1);
  _objc_release(uVar1);
  func_0x00010c0de220(param_2);
  func_0x00010c21eee0(param_1);
  func_0x00010c0de200(param_2);
  func_0x00010c192fc0(param_1);
  uVar1 = param_3;
  func_0x00010c122b20();
  _objc_release(param_3);
  if ((int)uVar1 == 0) {
    func_0x00010c0de260(param_2);
  }
  func_0x00010c1e88a0(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10709034c; end: 1070904fb;  */

void FUN_10709034c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain();
  if (param_2 != 0) {
    _objc_retain(param_2);
    lVar1 = param_2;
    func_0x00010bf89e40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1918c0(param_1);
    _objc_release(lVar1);
    func_0x00010c29d520(param_2);
    func_0x00010c191940(param_1);
    func_0x00010c104260(param_2);
    func_0x00010c1deee0(param_1);
    lVar1 = param_2;
    func_0x00010c267b80(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_retain(param_1);
    _objc_retain(param_1);
    _objc_retain(param_1);
    _objc_retain(param_1);
    func_0x00010c0c0480(lVar1);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(param_1);
    _objc_release(param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070904fc; end: 107090613;  */

void FUN_1070904fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c0f0a00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b420(uVar1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010c1554e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9160(uVar1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010c2540c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b0e0(uVar1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010bfbbd20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b100(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c247520(param_2);
  func_0x00010c17be40(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010c1542c0(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c1f8ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setSearchSource__11265bcd8,uVar2);
  return;
}



/* Entry: 107090614; end: 10709061f;  */

void FUN_107090614(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c4570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setMediaDrawerTab__11264eb80,param_2);
  return;
}



/* Entry: 107090620; end: 107090903;  */

void FUN_107090620(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c20b420(uVar7);
  func_0x00010c1f9160(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
  puVar1 = PTR_PTR_1126d4538;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  uVar7 = param_4;
  func_0x00010bf1ddc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbebc0();
  func_0x00010c172220(puVar1);
  uVar2 = uVar7;
  func_0x00010bf1dc20(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172240(puVar1);
  _objc_release(uVar2);
  uVar2 = uVar7;
  func_0x00010bf1dc60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172280(puVar1);
  _objc_release(uVar2);
  func_0x00010bfbff40(uVar7);
  func_0x00010c172520(puVar1);
  func_0x00010bf1de20(uVar7);
  func_0x00010c1725c0(puVar1);
  func_0x00010bf1de40(uVar7);
  func_0x00010c1725e0(puVar1);
  uVar2 = uVar7;
  func_0x00010bf1de60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172640(puVar1);
  _objc_release(uVar2);
  uVar2 = uVar7;
  func_0x00010bf1e1e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172820(puVar1);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bf1ddc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1dbe0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfc08a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2827c0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c172500(puVar1);
  puVar5 = PTR_PTR_1126d4540;
  _objc_alloc_init(PTR_PTR_1126d4540);
  func_0x00010c1724e0();
  func_0x00010bf1e500(param_4);
  func_0x00010c172a20(puVar5);
  func_0x00010c29e4c0(param_4);
  func_0x00010c172a00(puVar5);
  uVar2 = param_4;
  func_0x00010c15e260(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1728a0(puVar5);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c0db9c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1726c0(puVar5);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(puVar1);
  _objc_release(param_4);
  func_0x00010c172020(uVar6);
  _objc_release(puVar5);
  func_0x00010c17be40(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c1f8ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setSearchSource__11265bcd8,param_6);
  return;
}



/* Entry: 107090904; end: 107090c0b;  */

void FUN_107090904(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010bf5cc60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185980(uVar1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010c1554e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9160(uVar1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010c2540c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b0e0(uVar1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010bfbbd20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b100(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf96da0(param_2);
  func_0x00010c185960(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c247520(param_2);
  func_0x00010c17be40(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1542c0(param_2);
  func_0x00010c1f8ac0(uVar2);
  func_0x00010c1a57c0(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010c06c000(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c1859b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setCreativeToolItemIsAnimated__11263f088,uVar2)
  ;
  return;
}



/* Entry: 107090c0c; end: 107090ca7;  */

void FUN_107090c0c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    _objc_retain();
    func_0x00010bf4f080(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1833c0(param_1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 107090ca8; end: 107091093;  */

void FUN_107090ca8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126d4548;
  if (param_2 != 0) {
    _objc_retain(param_1);
    _objc_opt_new(puVar1);
    lVar2 = param_2;
    func_0x00010c259cc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182880(puVar1);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c25eb80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182920(puVar1);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c25b720();
    if (lVar2 != -1) {
      func_0x00010c25b720(param_2);
      func_0x00010c1828a0(puVar1);
    }
    lVar2 = param_2;
    func_0x00010bf81b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_2;
      func_0x00010bf81b80(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c182820(puVar1);
      _objc_release(lVar2);
    }
    lVar2 = param_2;
    func_0x00010c25c580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_2;
      func_0x00010c25c580(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c182900(puVar1);
      _objc_release(lVar2);
    }
    lVar2 = param_2;
    func_0x00010c25b7c0();
    if (lVar2 != -1) {
      func_0x00010c25b7c0(param_2);
      func_0x00010c1828c0(puVar1);
    }
    lVar2 = param_2;
    func_0x00010c258f80();
    if (lVar2 != -1) {
      func_0x00010c258f80(param_2);
      func_0x00010c182860(puVar1);
    }
    lVar2 = param_2;
    func_0x00010bf4de00();
    if (lVar2 != -1) {
      func_0x00010bf4de00(param_2);
      func_0x00010c182be0(puVar1);
    }
    lVar2 = param_2;
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_2;
      func_0x00010c0844e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c182080(puVar1);
      _objc_release(lVar2);
    }
    lVar2 = param_2;
    func_0x00010c084c40();
    if (lVar2 != -1) {
      func_0x00010c084c40(param_2);
      func_0x00010c1820a0(puVar1);
    }
    lVar2 = param_2;
    func_0x00010c084ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_2;
      func_0x00010c084ca0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1820c0(puVar1);
      _objc_release(lVar2);
    }
    lVar2 = param_2;
    func_0x00010bfcc740(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181ea0(puVar1);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bf5b440(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181d60(puVar1);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c25b960(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1828e0(puVar1);
    _objc_release(lVar2);
    func_0x00010c182760(param_1);
    _objc_release(param_1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107091094; end: 107091143;  */

void FUN_107091094(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    _objc_retain();
    func_0x00010c0fc040(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c23e0(param_1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 107091144; end: 107091293;  */

void FUN_107091144(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    _objc_retain(param_2);
    _objc_retain(param_1);
    lVar1 = param_2;
    func_0x00010c094540(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c240(param_1);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c094820(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbee0(param_1);
    _objc_release(lVar1);
    func_0x00010c096ca0(param_2);
    _objc_release(param_2);
    func_0x00010c1bcca0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107091294; end: 107091453;  */

void FUN_107091294(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010c091c60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_2;
      func_0x00010c096b60(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bcc00(param_1);
      _objc_release(lVar1);
      lVar1 = lVar2;
      func_0x00010c094540(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19c240(param_1);
      _objc_release(lVar1);
      func_0x00010c096ca0(lVar2);
      func_0x00010c1bcca0(param_1);
      func_0x00010c097820(lVar2);
      func_0x00010c1bd160(param_1);
      lVar1 = lVar2;
      func_0x00010c095800(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bc3e0(param_1);
      _objc_release(lVar1);
      func_0x00010c0947c0(lVar2);
      func_0x00010c1bbe80(param_1);
      lVar1 = param_2;
      func_0x00010c091c60(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      func_0x00010c1bb320(param_1);
      lVar1 = param_2;
      func_0x00010c091c60(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010b06f648();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bbee0(param_1);
      _objc_release(lVar4);
      _objc_release(lVar1);
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107091454; end: 10709147f;  */

void FUN_107091454(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c4718;
    _objc_opt_new(PTR_PTR_1126c4718);
    lVar1 = param_2;
    func_0x00010c094540(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60(puVar2);
    _objc_release(lVar1);
    func_0x00010c096ca0(param_2);
    func_0x00010c1bccc0(puVar2);
    func_0x00010c094800(param_2);
    func_0x00010c1bbec0(puVar2);
    lVar1 = param_2;
    func_0x00010c095800(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bc400(puVar2);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c11fae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e74c0(puVar2);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c11fa40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e74e0(puVar2);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c0972c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bcec0(puVar2);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010bef2c20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ba980(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107091480; end: 1070915eb;  */

void FUN_107091480(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf50900();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c11a300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_2;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      lVar1 = param_3;
      func_0x00010bfce880(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c272380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar1);
    }
    else {
      _objc_retain(param_2);
      lVar4 = param_2;
    }
    func_0x00010c1b3a40(param_1);
    func_0x00010c1e5640(param_1);
    lVar1 = lVar2;
    func_0x00010c275280(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2177e0(param_1);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf50980(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e5660(param_1);
    _objc_release(lVar1);
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070915ec; end: 10709164f;  */

undefined ** FUN_1070915ec(ulong param_1)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  _objc_retain();
  if (param_1 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dabe78;
  }
  else {
    uVar1 = param_1;
    func_0x00010c067ec0();
    if ((uint)uVar1 < 0xc) {
      ppuVar2 = (undefined **)(&PTR_PTR_11098ae50)[uVar1 & 0xffffffff];
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110db8b78;
    }
  }
  _objc_release(param_1);
  return ppuVar2;
}



/* Entry: 107091650; end: 107091677;  */

undefined ** FUN_107091650(long param_1)

{
  if (param_1 - 1U < 7) {
    return (undefined **)(&PTR_PTR_11098aeb0)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dab0d8;
}



/* Entry: 107091678; end: 1070916db;  */

undefined ** FUN_107091678(ulong param_1)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  _objc_retain();
  if (param_1 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dabe78;
  }
  else {
    uVar1 = param_1;
    func_0x00010c067ec0();
    if ((uint)uVar1 < 0x1c) {
      ppuVar2 = (undefined **)(&PTR_PTR_11098aee8)[uVar1 & 0xffffffff];
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110db8b78;
    }
  }
  _objc_release(param_1);
  return ppuVar2;
}



/* Entry: 1070916dc; end: 10709187b;  */

void FUN_1070916dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_1;
  func_0x00010bef2c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c099300(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010709179c(uVar1,param_2,uVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10709187c; end: 107091bf3;  */

void FUN_10709187c(long param_1,ulong param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  long lVar17;
  undefined *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  float fVar23;
  double dVar24;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uVar2 = param_2;
  func_0x00010c242160();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = &uStack_140;
  puVar16 = auStack_f0;
  lVar17 = 0x10;
  uVar3 = uVar2;
  func_0x00010bf52a60();
  fVar23 = (float)uVar8;
  if (uVar3 != 0) {
    lVar20 = *plStack_130;
    do {
      uVar19 = 0;
      do {
        if (*plStack_130 != lVar20) {
          _objc_enumerationMutation(uVar2);
        }
        lVar21 = *(long *)(lStack_138 + uVar19 * 8);
        lVar17 = lVar21;
        func_0x00010c247520();
        if (lVar17 == 0) {
          lVar17 = lVar21;
          func_0x00010c23f880();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = (ulong)param_3;
          lVar22 = lVar17;
          func_0x000107fda568();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar17);
          lVar17 = lVar21;
          func_0x00010bfbd1c0(lVar21);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a1b60(lVar22);
          _objc_release(lVar17);
          lVar17 = lVar21;
          func_0x00010bfbd200();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar17 != 0) {
            func_0x00010bfbd200();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf1f3c0();
            func_0x00010c1a1b80(lVar22);
            goto LAB_107091b1c;
          }
        }
        else {
          if (lVar17 == 1) {
            lVar17 = lVar21;
            func_0x00010c0fa960();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___PHAsset_1126bd898;
            if (lVar17 == 0) {
              puVar18 = (undefined *)0x0;
            }
            else {
              puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
              lStack_f8 = lVar17;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfa50e0(puVar5);
              _objc_retainAutoreleasedReturnValue();
              puVar18 = puVar5;
              func_0x00010bfb1920();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar5);
              _objc_release(puVar4);
            }
            func_0x00010c23f880();
            _objc_retainAutoreleasedReturnValue();
            uVar14 = (ulong)param_3;
            lVar22 = lVar21;
            func_0x000107fd9eec();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar21);
            _objc_release(puVar18);
            lVar21 = lVar17;
          }
          else {
            if (lVar17 != 2) {
              lVar22 = 0;
              goto LAB_107091b24;
            }
            func_0x00010c23f880();
            _objc_retainAutoreleasedReturnValue();
            uVar14 = (ulong)param_3;
            lVar22 = lVar21;
            func_0x000107fdb094();
            _objc_retainAutoreleasedReturnValue();
          }
LAB_107091b1c:
          _objc_release(lVar21);
        }
LAB_107091b24:
        func_0x00010c1fc1a0(lVar22);
        lVar17 = param_1;
        func_0x00010c252d60();
        if (lVar17 != 0) {
          func_0x00010c19a060(lVar22);
        }
        func_0x00010befa120(puVar1);
        _objc_release(lVar22);
        uVar19 = uVar19 + 1;
      } while (uVar3 != uVar19);
      puVar15 = &uStack_140;
      puVar16 = auStack_f0;
      lVar17 = 0x10;
      uVar3 = uVar2;
      func_0x00010bf52a60();
      fVar23 = (float)uVar8;
    } while (uVar3 != 0);
  }
  _objc_release(uVar2);
  puVar5 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(uVar14);
  _objc_retain(puVar15);
  _objc_retain(lVar17);
  _objc_retain(param_6);
  _objc_retain(puVar16);
  func_0x00010c240640(uVar14);
  func_0x00010c204260(param_1);
  func_0x00010c2700c0(uVar14);
  func_0x00010c2159a0(param_1);
  func_0x00010c270140(uVar14);
  func_0x00010c215a20(param_1);
  func_0x00010bf037a0(uVar14);
  func_0x00010c167f20(param_1);
  func_0x00010bf03500(uVar14);
  func_0x00010c167e60(param_1);
  puVar6 = puVar15;
  func_0x00010bfbb520(puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  puVar7 = puVar15;
  func_0x00010bf0a3a0(puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c184440(param_1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  uVar2 = uVar14;
  func_0x00010bf31200(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(param_1);
  _objc_release(uVar2);
  func_0x00010c2a8340(uVar14);
  func_0x00010c225be0(param_1);
  uVar8 = param_6;
  func_0x00010b06511c(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c17cda0(param_1);
  _objc_release(uVar8);
  puVar6 = puVar15;
  FUN_10708ef6c(puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8600(param_1);
  _objc_release(puVar6);
  lVar20 = lVar17;
  func_0x00010c08fa60();
  if (lVar20 != 0) {
    lVar20 = lVar17;
    func_0x00010bf64920(lVar17);
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar20;
    func_0x00010bdc2560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aeb20(param_1);
    _objc_release(lVar21);
    _objc_release(lVar20);
  }
  puVar6 = puVar15;
  func_0x00010bf6f800(puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0de0e0();
  func_0x00010c1a49c0(param_1);
  func_0x00010c0de400(puVar6);
  func_0x00010c1a4bc0(param_1);
  func_0x00010c0de420(puVar6);
  func_0x00010c218b20(param_1);
  puVar7 = puVar6;
  func_0x00010c122d80(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x000108606e18();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8a20(param_1);
  _objc_release(puVar9);
  _objc_release(puVar7);
  puVar10 = puVar16;
  func_0x00010bf446e0(puVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  func_0x00010c204680(param_1);
  _objc_release(puVar10);
  func_0x00010c247520(uVar14);
  func_0x00010c206c40(param_1);
  uVar2 = uVar14;
  func_0x00010c247a00(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206f80(param_1);
  _objc_release(uVar2);
  func_0x00010c1fc3e0(param_1);
  func_0x00010c0c6c20();
  func_0x00010c1c5440(param_1);
  uVar2 = uVar14;
  func_0x00010c0c6840(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c52e0(param_1);
  _objc_release(uVar2);
  func_0x00010bfb2540(uVar14);
  func_0x00010c19daa0(param_1);
  func_0x00010bfb2520(uVar14);
  func_0x00010c19db40(param_1);
  func_0x00010bfd3440(uVar14);
  func_0x00010c1a5460(param_1);
  uVar2 = uVar14;
  func_0x000108441e7c(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee3c0(param_1);
  _objc_release(uVar2);
  func_0x00010c140fc0(uVar14);
  func_0x00010c1ee440(param_1);
  func_0x00010c140f80(uVar14);
  func_0x00010c1ee340(param_1);
  func_0x00010bf30120(uVar14);
  func_0x00010c1abc80(param_1);
  uVar2 = uVar14;
  func_0x000108441ef0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    func_0x00010c216da0(param_1);
  }
  uVar3 = uVar14;
  func_0x0001084427bc();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 != 0) {
    func_0x00010c227b80(param_1);
  }
  uVar19 = uVar14;
  func_0x000108441fa8(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8fe0(param_1);
  _objc_release(uVar19);
  func_0x00010bf29de0(uVar14);
  func_0x00010c1769e0(param_1);
  uVar19 = uVar14;
  func_0x00010c158420();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar19;
  func_0x00010bf529e0();
  _objc_release(uVar19);
  uVar19 = uVar14;
  if (uVar11 == 0) {
    uVar11 = uVar14;
    func_0x00010c24b740(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c176a60(param_1);
    _objc_release(uVar11);
    func_0x00010bf6f7a0(uVar14);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar11 = uVar14;
    func_0x00010b070344();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c176a60(param_1);
    _objc_release(uVar11);
    func_0x00010b0704c8(uVar14);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c18c600(param_1);
  _objc_release(uVar19);
  func_0x00010bf31280(uVar14);
  func_0x00010c1792c0(param_1);
  func_0x00010c0b59a0(uVar14);
  func_0x00010c1c1040(param_1);
  func_0x00010bf212c0(uVar14);
  dVar24 = (double)fVar23;
  func_0x00010c173cc0(dVar24,param_1);
  fVar23 = SUB84(dVar24,0);
  puVar1 = PTR_PTR_1126c4738;
  _objc_opt_new();
  func_0x00010c070860(uVar14);
  func_0x00010c1b06a0(puVar1);
  func_0x00010c0d1300(uVar14);
  dVar24 = (double)fVar23;
  func_0x00010c1c91e0(dVar24,puVar1);
  fVar23 = SUB84(dVar24,0);
  func_0x00010c1c9180(param_1);
  func_0x00010c2bd260(uVar14);
  func_0x00010c2271c0(param_1);
  func_0x00010bfbb160(uVar14);
  func_0x00010c176040(param_1);
  func_0x00010c0c4ba0(uVar14);
  dVar24 = (double)(float)(int)(fVar23 * 10.0) / 10.0;
  func_0x00010c205880(dVar24,param_1);
  fVar23 = SUB84(dVar24,0);
  func_0x00010bfbbd00(uVar14);
  dVar24 = (double)(float)(int)(fVar23 * 10.0) / 10.0;
  func_0x00010c1a16c0(dVar24,param_1);
  fVar23 = SUB84(dVar24,0);
  func_0x00010c158540(uVar14);
  dVar24 = (double)(float)(int)(fVar23 * 10.0) / 10.0;
  func_0x00010c1fab60(dVar24,param_1);
  fVar23 = SUB84(dVar24,0);
  func_0x00010c243700(uVar14);
  func_0x00010c205840(param_1);
  func_0x00010c29e480(uVar14);
  func_0x00010c222d20((double)(float)(int)(fVar23 * 10.0) / 10.0,param_1);
  uVar19 = uVar14;
  func_0x00010c14f140(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f64e0(param_1);
  _objc_release(uVar19);
  uVar19 = uVar14;
  func_0x00010bf2ae80(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ffc60(param_1);
  _objc_release(uVar19);
  uVar19 = uVar14;
  func_0x00010844258c(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9480(param_1);
  _objc_release(uVar19);
  func_0x00010c06c6a0(uVar14);
  func_0x00010c1af380(param_1);
  puVar5 = PTR_PTR_1126d4560;
  _objc_opt_new(PTR_PTR_1126d4560);
  func_0x00010c0d2360(uVar14);
  func_0x00010c1c9920(puVar5);
  func_0x00010c0d2380(uVar14);
  func_0x00010c1c9940(puVar5);
  func_0x00010c0d22c0(uVar14);
  func_0x00010c1c98a0(puVar5);
  func_0x00010c0d22e0(uVar14);
  func_0x00010c1c98c0(puVar5);
  func_0x00010c27c860(uVar14);
  func_0x00010c21a560(puVar5);
  func_0x00010c1c9840(param_1);
  func_0x00010bf6cf80(uVar14);
  func_0x00010c18b9e0(param_1);
  func_0x00010bf89ea0(uVar14);
  func_0x00010c191960(param_1);
  func_0x00010bf5c920(uVar14);
  func_0x00010c226060(param_1);
  func_0x00010bf5c9e0(uVar14);
  func_0x00010c226080(param_1);
  uVar19 = uVar14;
  func_0x00010befeb80(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar19;
  func_0x00010bf07d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1861a0(param_1);
  _objc_release(uVar11);
  _objc_release(uVar19);
  func_0x00010bf2fba0(uVar14);
  func_0x00010c178460(param_1);
  func_0x00010c2aea60(uVar14);
  func_0x00010c226380(param_1);
  func_0x00010c2b4400(uVar14);
  func_0x00010c2267c0(param_1);
  func_0x00010c2b51a0(uVar14);
  func_0x00010c2269a0(param_1);
  func_0x00010c131980(uVar14);
  func_0x00010c1eaee0(param_1);
  func_0x00010c122b20(uVar14);
  func_0x00010c1e88a0(param_1);
  uVar19 = uVar14;
  func_0x00010bfadfa0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108442be8();
  func_0x00010c19c1c0(param_1);
  _objc_release(uVar19);
  uVar19 = uVar14;
  func_0x00010bfae8c0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108442868();
  func_0x00010c19c760(param_1);
  _objc_release(uVar19);
  uVar19 = uVar14;
  func_0x00010c095800(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bc3e0(param_1);
  _objc_release(uVar19);
  uVar19 = uVar14;
  func_0x00010c094540(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c240(param_1);
  _objc_release(uVar19);
  uVar19 = uVar14;
  func_0x00010c095a20(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bc480(param_1);
  _objc_release(uVar19);
  func_0x00010c096ca0(uVar14);
  func_0x00010c1bcca0(param_1);
  uVar19 = uVar14;
  func_0x00010c091c60(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar19;
  func_0x00010b06f648();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bbee0(param_1);
  _objc_release(uVar11);
  _objc_release(uVar19);
  uVar19 = uVar14;
  func_0x00010c096b60(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcc00(param_1);
  _objc_release(uVar19);
  uVar19 = uVar14;
  func_0x00010bf09180(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcf40(param_1);
  _objc_release(uVar19);
  uVar19 = uVar14;
  func_0x00010c091c60(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar19;
  func_0x00010b06fac4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f6700(param_1);
  _objc_release(uVar11);
  _objc_release(uVar19);
  uVar19 = uVar14;
  func_0x00010c26a320(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212740(param_1);
  _objc_release(uVar19);
  uVar19 = uVar14;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar19 != 0) {
    func_0x00010bf9f120(uVar14);
    func_0x00010c199b20(param_1);
    func_0x00010bf9f040(uVar14);
    func_0x00010c199a40(param_1);
    func_0x00010c0947c0(uVar14);
    func_0x00010c1bbe80(param_1);
    func_0x00010c094800(uVar14);
    func_0x00010c1bbea0(param_1);
    uVar19 = uVar14;
    func_0x00010c090320(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1baba0(param_1);
    _objc_release(uVar19);
    uVar19 = uVar14;
    func_0x00010c0915a0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bb200(param_1);
    _objc_release(uVar19);
    uVar19 = uVar14;
    func_0x00010c08fda0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c208000(param_1);
    _objc_release(uVar19);
    func_0x00010c096da0(uVar14);
    func_0x00010c208420(param_1);
  }
  uVar19 = uVar14;
  func_0x00010bf5af60();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar19;
  func_0x00010c08fa60();
  _objc_release(uVar19);
  if (uVar11 != 0) {
    uVar19 = uVar14;
    func_0x00010bf5af60(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185a80(param_1);
    _objc_release(uVar19);
  }
  uVar19 = uVar14;
  func_0x00010bfb75c0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar19;
  func_0x00010c08fa60();
  _objc_release(uVar19);
  if (uVar11 != 0) {
    uVar19 = uVar14;
    func_0x00010bfb75c0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f820(param_1);
    _objc_release(uVar19);
  }
  uVar19 = uVar14;
  func_0x00010c2454e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2061a0(param_1);
  _objc_release(uVar19);
  func_0x00010bf30820(uVar14);
  func_0x00010c178b80(param_1);
  func_0x00010bf2fe80(uVar14);
  func_0x00010c1785c0(param_1);
  func_0x00010bf2fbe0(uVar14);
  func_0x00010c178480(param_1);
  uVar19 = uVar14;
  func_0x00010bf30440(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178920(param_1);
  _objc_release(uVar19);
  func_0x00010bf30860(uVar14);
  func_0x00010c178bc0(param_1);
  uVar19 = uVar14;
  func_0x00010bf304e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf30160();
  func_0x00010c178740(param_1);
  _objc_release(uVar19);
  func_0x00010bf30660(uVar14);
  func_0x00010c178ae0(param_1);
  uVar19 = uVar14;
  func_0x00010bf304e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf30420();
  func_0x00010c178680(param_1);
  _objc_release(uVar19);
  uVar19 = uVar14;
  func_0x00010bf304e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf300e0();
  func_0x00010c1786a0(param_1);
  _objc_release(uVar19);
  uVar19 = uVar14;
  func_0x00010bf304e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar19;
  func_0x00010bf30180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178760(param_1);
  _objc_release(uVar11);
  _objc_release(uVar19);
  uVar19 = uVar14;
  func_0x00010bf304e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2fc00();
  func_0x00010c1784a0(param_1);
  _objc_release(uVar19);
  uVar19 = uVar14;
  func_0x00010bf304e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar19;
  func_0x00010c0ca680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c226760(param_1);
  _objc_release(uVar11);
  _objc_release(uVar19);
  func_0x00010bf11440(uVar14);
  func_0x00010c16cc40(param_1);
  func_0x00010c2a09e0(uVar14);
  func_0x00010c224100(param_1);
  puVar18 = PTR_PTR_1126c4720;
  _objc_opt_new(PTR_PTR_1126c4720);
  func_0x00010c282c80(uVar14);
  func_0x00010c1e9680(puVar18);
  func_0x00010c2681e0(uVar14);
  func_0x00010c2117e0(puVar18);
  func_0x00010bf5bb60(uVar14);
  func_0x00010c1e59c0(puVar18);
  func_0x00010bfb92e0(uVar14);
  func_0x00010c170060(puVar18);
  func_0x00010c268220(uVar14);
  func_0x00010c211800(puVar18);
  func_0x00010c21f5a0(param_1);
  func_0x00010c253c00(uVar14);
  func_0x00010c20abc0(param_1);
  func_0x00010c2551a0(uVar14);
  func_0x00010c20ba80(param_1);
  func_0x00010c253de0(uVar14);
  func_0x00010c20adc0(param_1);
  func_0x00010c2538c0(uVar14);
  func_0x00010c20a840(param_1);
  uVar19 = uVar14;
  func_0x00010c254580(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar19;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b440(param_1);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar19);
  func_0x00010bfae160(uVar14);
  func_0x00010c19c2c0(param_1);
  func_0x00010bfae340(uVar14);
  func_0x00010c19c460(param_1);
  func_0x00010bfae500(uVar14);
  func_0x00010c19c600(param_1);
  func_0x00010c264640(uVar14);
  func_0x00010c210580(param_1);
  func_0x00010c06ab00(uVar14);
  func_0x00010c1aeb80(param_1);
  uVar19 = uVar14;
  func_0x00010c243340(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(param_1);
  _objc_release(uVar19);
  func_0x00010bf8e960(uVar14);
  func_0x00010c20ae60(param_1);
  func_0x00010bf1c3a0(uVar14);
  func_0x00010c20a860(param_1);
  func_0x00010c2441e0(uVar14);
  func_0x00010c20b8c0(param_1);
  func_0x00010c281340(uVar14);
  func_0x00010c20bb20(param_1);
  func_0x00010bfccb60(uVar14);
  func_0x00010c20b040(param_1);
  func_0x00010bf8e980(uVar14);
  func_0x00010c20aea0(param_1);
  func_0x00010bf1c3c0(uVar14);
  func_0x00010c20a8a0(param_1);
  func_0x00010c244200(uVar14);
  func_0x00010c20b900(param_1);
  func_0x00010c255260(uVar14);
  func_0x00010c20bb60(param_1);
  func_0x00010c254000(uVar14);
  func_0x00010c20af80(param_1);
  uVar19 = uVar14;
  func_0x00010c2543a0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c253f80();
  func_0x00010c20af60(param_1);
  _objc_release(uVar19);
  uVar19 = uVar14;
  func_0x00010bf8e9a0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aec0(param_1);
  _objc_release(uVar19);
  uVar19 = uVar14;
  func_0x00010c281380(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20bb40(param_1);
  _objc_release(uVar19);
  uVar19 = uVar14;
  func_0x00010bfccbc0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b060(param_1);
  _objc_release(uVar19);
  uVar19 = uVar14;
  func_0x00010bf1c420(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a8c0(param_1);
  _objc_release(uVar19);
  uVar19 = uVar14;
  func_0x00010c244220(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b920(param_1);
  _objc_release(uVar19);
  uVar19 = uVar14;
  func_0x00010bfbe160(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20afc0(param_1);
  _objc_release(uVar19);
  func_0x00010bf61f40(uVar14);
  func_0x00010c20ac00(param_1);
  func_0x00010bf61d60(uVar14);
  func_0x00010c20ac20(param_1);
  func_0x00010bf61d80(uVar14);
  func_0x00010c20ac60(param_1);
  func_0x00010bf61f60(uVar14);
  func_0x00010c20acc0(param_1);
  func_0x00010bf61da0();
  func_0x00010c20ac40(param_1);
  func_0x00010bf61dc0();
  func_0x00010c20ac80(param_1);
  uVar19 = uVar14;
  func_0x00010bfee080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b1c0(param_1);
  _objc_release(uVar19);
  uVar19 = uVar14;
  func_0x00010bf4f980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aba0(param_1);
  _objc_release(uVar19);
  func_0x00010bfee060();
  func_0x00010c20b1a0(param_1);
  func_0x00010bf4f960(uVar14);
  func_0x00010c20ab80(param_1);
  func_0x00010bfedfe0(uVar14);
  func_0x00010c20b1e0(param_1);
  func_0x00010bfbe140(uVar14);
  func_0x00010c20afa0(param_1);
  uVar19 = uVar14;
  func_0x00010c2543a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2543e0();
  func_0x00010c20b340(param_1);
  _objc_release(uVar19);
  uVar19 = uVar14;
  func_0x00010c2543a0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c254c00();
  func_0x00010c20b5a0(param_1);
  _objc_release(uVar19);
  func_0x00010c255140(uVar14);
  func_0x00010c20ba40(param_1);
  uVar19 = uVar14;
  func_0x00010c2543a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2a7c0();
  func_0x00010c20aaa0(param_1);
  _objc_release(uVar19);
  uVar19 = uVar14;
  func_0x00010c2543a0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar19;
  func_0x00010bf2a960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aac0(param_1);
  _objc_release(uVar11);
  _objc_release(uVar19);
  uVar19 = uVar14;
  func_0x00010c2543a0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar19;
  func_0x00010c0b5c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9ee0(param_1);
  _objc_release(uVar11);
  _objc_release(uVar19);
  uVar19 = uVar14;
  func_0x00010c0b5c60(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c1160(param_1);
  _objc_release(uVar19);
  uVar19 = uVar14;
  func_0x00010c247400(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206b60(param_1);
  _objc_release(uVar19);
  uVar19 = uVar14;
  func_0x00010c247500(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206c00(param_1);
  _objc_release(uVar19);
  func_0x00010c1101a0();
  func_0x00010c1e1760(param_1);
  func_0x00010c1084c0();
  func_0x00010c1e0780(param_1);
  func_0x00010bf219a0();
  func_0x00010c174020(param_1);
  uVar19 = uVar14;
  func_0x00010bf219e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174060(param_1);
  _objc_release(uVar19);
  func_0x00010c2a8860(uVar14);
  func_0x00010c225c80(param_1);
  uVar19 = uVar14;
  func_0x00010bf0f140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c4e0(param_1);
  _objc_release(uVar19);
  func_0x00010c29a680();
  func_0x00010c221b20(param_1);
  func_0x00010c2b6aa0();
  func_0x00010c226ba0(param_1);
  func_0x00010c124200();
  func_0x00010c1e9060(param_1);
  func_0x00010bf4ca00();
  func_0x00010c182160(param_1);
  func_0x00010c2a0400();
  func_0x00010c223e80(param_1);
  uVar11 = uVar14;
  func_0x00010bf5ad40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar11;
  func_0x000108441b08();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  func_0x00010c185860(param_1);
  func_0x00010bf70ea0();
  func_0x00010c18cd80(param_1);
  func_0x00010c2b95a0();
  func_0x00010c226da0(param_1);
  func_0x00010c0d6260();
  func_0x00010c1cb6c0(param_1);
  uVar11 = uVar14;
  func_0x00010c297de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2208c0(param_1);
  _objc_release(uVar11);
  uVar11 = uVar14;
  func_0x00010bfde3a0();
  if ((int)uVar11 != 0) {
    uVar11 = uVar14;
    func_0x00010c297de0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c6c0(param_1);
    _objc_release(uVar11);
  }
  func_0x00010c0b6480(uVar14);
  func_0x00010c1c1800(param_1);
  uVar11 = uVar14;
  func_0x00010c0b6520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar11 != 0) {
    uVar11 = uVar14;
    func_0x00010c0b6520(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c067fc0();
    func_0x00010c1c1840((double)(long)uVar12,param_1);
    _objc_release(uVar11);
  }
  uVar11 = uVar14;
  func_0x00010c0b6500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar11 != 0) {
    uVar11 = uVar14;
    func_0x00010c0b6500(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c1c1820(param_1);
    _objc_release(uVar11);
  }
  func_0x00010bfbaf40(uVar14);
  func_0x00010c1b1560(param_1);
  uVar11 = uVar14;
  func_0x00010bfba2a0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19fd00(param_1);
  _objc_release(uVar11);
  uVar11 = uVar14;
  func_0x00010c259e40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d2c0(param_1);
  _objc_release(uVar11);
  uVar11 = uVar14;
  func_0x00010c253a00(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aae0(param_1);
  _objc_release(uVar11);
  func_0x00010bf1c3a0(uVar14);
  func_0x00010c20a860(param_1);
  uVar11 = uVar14;
  func_0x00010bf1c420(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a8c0(param_1);
  _objc_release(uVar11);
  uVar11 = uVar14;
  func_0x00010c244220(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b920(param_1);
  _objc_release(uVar11);
  func_0x00010c2441e0(uVar14);
  func_0x00010c20b8c0(param_1);
  uVar11 = uVar14;
  func_0x00010c2539a0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a960(param_1);
  _objc_release(uVar11);
  func_0x00010c253980(uVar14);
  func_0x00010c20a940(param_1);
  uVar11 = uVar14;
  func_0x00010bf61e60(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20ace0(param_1);
  _objc_release(uVar11);
  func_0x00010bf61f40(uVar14);
  func_0x00010c20ac00(param_1);
  uVar11 = uVar14;
  func_0x00010bf8e9a0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aec0(param_1);
  _objc_release(uVar11);
  func_0x00010bf8e960(uVar14);
  func_0x00010c20ae60(param_1);
  uVar11 = uVar14;
  func_0x00010bfee080(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b1c0(param_1);
  _objc_release(uVar11);
  func_0x00010bfee060(uVar14);
  func_0x00010c20b1a0(param_1);
  uVar11 = uVar14;
  func_0x00010bfccbc0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b060(param_1);
  _objc_release(uVar11);
  func_0x00010bfccb60(uVar14);
  func_0x00010c20b040(param_1);
  uVar11 = uVar14;
  func_0x00010c0d3a20(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca440(param_1);
  _objc_release(uVar12);
  _objc_release(uVar11);
  uVar11 = uVar14;
  func_0x00010c0d3300(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9fe0(param_1);
  _objc_release(uVar11);
  func_0x00010c0d3840(uVar14);
  func_0x00010c1ca4e0(param_1);
  uVar11 = uVar14;
  func_0x00010bf4f080(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1833c0(param_1);
  _objc_release(uVar11);
  uVar11 = uVar14;
  func_0x00010c0c1aa0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2f20(param_1);
  _objc_release(uVar12);
  _objc_release(uVar11);
  uVar11 = uVar14;
  func_0x00010c0d37c0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca220(param_1);
  _objc_release(uVar11);
  func_0x00010c1295a0(uVar14);
  func_0x00010c1e9e20(param_1);
  uVar11 = uVar14;
  func_0x00010c1297e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c129a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea120(param_1);
  _objc_release(uVar12);
  _objc_release(uVar11);
  puVar4 = PTR_PTR_1126c4728;
  _objc_opt_new(PTR_PTR_1126c4728);
  uVar11 = uVar14;
  func_0x00010c1297e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c129aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea1a0(puVar4);
  _objc_release(uVar12);
  _objc_release(uVar11);
  func_0x00010c1e9e60(param_1);
  uVar11 = uVar14;
  func_0x00010c1343c0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb7e0(param_1);
  _objc_release(uVar11);
  puVar13 = PTR_PTR_1126c4730;
  _objc_opt_new(PTR_PTR_1126c4730);
  func_0x00010c0d2c80(uVar14);
  func_0x00010c1c9c60(puVar13);
  func_0x00010c2a0a00(uVar14);
  func_0x00010c224120(puVar13);
  uVar11 = uVar14;
  func_0x00010c0d30c0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c1c9f60(puVar13);
  _objc_release(uVar11);
  uVar11 = uVar14;
  func_0x00010c2a0ba0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c224160(puVar13);
  _objc_release(uVar11);
  uVar11 = uVar14;
  func_0x00010bf160e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c16f3a0(puVar13);
  _objc_release(uVar11);
  func_0x00010c16bee0(param_1);
  func_0x00010c26c920(uVar14);
  func_0x00010c213840(param_1);
  uVar11 = uVar14;
  func_0x0001084425f0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c16c0(param_1);
  _objc_release(uVar11);
  func_0x00010c07a080(uVar14);
  func_0x00010c1b34a0(param_1);
  func_0x00010c27c4a0(uVar14);
  func_0x00010c21a480(param_1);
  _objc_release(puVar13);
  _objc_release(puVar4);
  _objc_release(uVar19);
  _objc_release(puVar18);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(lVar17);
  _objc_release(puVar15);
  _objc_release(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107091bf4; end: 10709390f;  */

void FUN_107091bf4(float param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  float fVar14;
  double dVar15;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_5);
  func_0x00010c240640(param_3);
  func_0x00010c204260(param_2);
  func_0x00010c2700c0(param_3);
  func_0x00010c2159a0(param_2);
  func_0x00010c270140(param_3);
  func_0x00010c215a20(param_2);
  func_0x00010bf037a0(param_3);
  func_0x00010c167f20(param_2);
  func_0x00010bf03500(param_3);
  func_0x00010c167e60(param_2);
  uVar1 = param_4;
  func_0x00010bfbb520(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  uVar2 = param_4;
  func_0x00010bf0a3a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c184440(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar3 = param_3;
  func_0x00010bf31200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(param_2);
  _objc_release(lVar3);
  func_0x00010c2a8340(param_3);
  func_0x00010c225be0(param_2);
  uVar1 = param_7;
  func_0x00010b06511c(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010c17cda0(param_2);
  _objc_release(uVar1);
  uVar1 = param_4;
  FUN_10708ef6c(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8600(param_2);
  _objc_release(uVar1);
  lVar3 = param_6;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    lVar3 = param_6;
    func_0x00010bf64920(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bdc2560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aeb20(param_2);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  uVar1 = param_4;
  func_0x00010bf6f800(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0de0e0();
  func_0x00010c1a49c0(param_2);
  func_0x00010c0de400(uVar1);
  func_0x00010c1a4bc0(param_2);
  func_0x00010c0de420(uVar1);
  func_0x00010c218b20(param_2);
  uVar2 = uVar1;
  func_0x00010c122d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x000108606e18();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8a20(param_2);
  _objc_release(uVar5);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010bf446e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c204680(param_2);
  _objc_release(uVar2);
  func_0x00010c247520(param_3);
  func_0x00010c206c40(param_2);
  lVar3 = param_3;
  func_0x00010c247a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206f80(param_2);
  _objc_release(lVar3);
  func_0x00010c1fc3e0(param_2);
  func_0x00010c0c6c20();
  func_0x00010c1c5440(param_2);
  lVar3 = param_3;
  func_0x00010c0c6840(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c52e0(param_2);
  _objc_release(lVar3);
  func_0x00010bfb2540(param_3);
  func_0x00010c19daa0(param_2);
  func_0x00010bfb2520(param_3);
  func_0x00010c19db40(param_2);
  func_0x00010bfd3440(param_3);
  func_0x00010c1a5460(param_2);
  lVar3 = param_3;
  func_0x000108441e7c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee3c0(param_2);
  _objc_release(lVar3);
  func_0x00010c140fc0(param_3);
  func_0x00010c1ee440(param_2);
  func_0x00010c140f80(param_3);
  func_0x00010c1ee340(param_2);
  func_0x00010bf30120(param_3);
  func_0x00010c1abc80(param_2);
  lVar3 = param_3;
  func_0x000108441ef0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    func_0x00010c216da0(param_2);
  }
  lVar4 = param_3;
  func_0x0001084427bc();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    func_0x00010c227b80(param_2);
  }
  lVar6 = param_3;
  func_0x000108441fa8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8fe0(param_2);
  _objc_release(lVar6);
  func_0x00010bf29de0(param_3);
  func_0x00010c1769e0(param_2);
  lVar6 = param_3;
  func_0x00010c158420();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf529e0();
  _objc_release(lVar6);
  lVar6 = param_3;
  if (lVar7 == 0) {
    lVar7 = param_3;
    func_0x00010c24b740(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c176a60(param_2);
    _objc_release(lVar7);
    func_0x00010bf6f7a0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar7 = param_3;
    func_0x00010b070344();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c176a60(param_2);
    _objc_release(lVar7);
    func_0x00010b0704c8(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c18c600(param_2);
  _objc_release(lVar6);
  func_0x00010bf31280(param_3);
  func_0x00010c1792c0(param_2);
  func_0x00010c0b59a0(param_3);
  func_0x00010c1c1040(param_2);
  func_0x00010bf212c0(param_3);
  dVar15 = (double)param_1;
  func_0x00010c173cc0(dVar15,param_2);
  fVar14 = SUB84(dVar15,0);
  puVar8 = PTR_PTR_1126c4738;
  _objc_opt_new();
  func_0x00010c070860(param_3);
  func_0x00010c1b06a0(puVar8);
  func_0x00010c0d1300(param_3);
  dVar15 = (double)fVar14;
  func_0x00010c1c91e0(dVar15,puVar8);
  fVar14 = SUB84(dVar15,0);
  func_0x00010c1c9180(param_2);
  func_0x00010c2bd260(param_3);
  func_0x00010c2271c0(param_2);
  func_0x00010bfbb160(param_3);
  func_0x00010c176040(param_2);
  func_0x00010c0c4ba0(param_3);
  dVar15 = (double)(float)(int)(fVar14 * 10.0) / 10.0;
  func_0x00010c205880(dVar15,param_2);
  fVar14 = SUB84(dVar15,0);
  func_0x00010bfbbd00(param_3);
  dVar15 = (double)(float)(int)(fVar14 * 10.0) / 10.0;
  func_0x00010c1a16c0(dVar15,param_2);
  fVar14 = SUB84(dVar15,0);
  func_0x00010c158540(param_3);
  dVar15 = (double)(float)(int)(fVar14 * 10.0) / 10.0;
  func_0x00010c1fab60(dVar15,param_2);
  fVar14 = SUB84(dVar15,0);
  func_0x00010c243700(param_3);
  func_0x00010c205840(param_2);
  func_0x00010c29e480(param_3);
  func_0x00010c222d20((double)(float)(int)(fVar14 * 10.0) / 10.0,param_2);
  lVar6 = param_3;
  func_0x00010c14f140(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f64e0(param_2);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010bf2ae80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ffc60(param_2);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010844258c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9480(param_2);
  _objc_release(lVar6);
  func_0x00010c06c6a0(param_3);
  func_0x00010c1af380(param_2);
  puVar9 = PTR_PTR_1126d4560;
  _objc_opt_new(PTR_PTR_1126d4560);
  func_0x00010c0d2360(param_3);
  func_0x00010c1c9920(puVar9);
  func_0x00010c0d2380(param_3);
  func_0x00010c1c9940(puVar9);
  func_0x00010c0d22c0(param_3);
  func_0x00010c1c98a0(puVar9);
  func_0x00010c0d22e0(param_3);
  func_0x00010c1c98c0(puVar9);
  func_0x00010c27c860(param_3);
  func_0x00010c21a560(puVar9);
  func_0x00010c1c9840(param_2);
  func_0x00010bf6cf80(param_3);
  func_0x00010c18b9e0(param_2);
  func_0x00010bf89ea0(param_3);
  func_0x00010c191960(param_2);
  func_0x00010bf5c920(param_3);
  func_0x00010c226060(param_2);
  func_0x00010bf5c9e0(param_3);
  func_0x00010c226080(param_2);
  lVar6 = param_3;
  func_0x00010befeb80(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf07d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1861a0(param_2);
  _objc_release(lVar7);
  _objc_release(lVar6);
  func_0x00010bf2fba0(param_3);
  func_0x00010c178460(param_2);
  func_0x00010c2aea60(param_3);
  func_0x00010c226380(param_2);
  func_0x00010c2b4400(param_3);
  func_0x00010c2267c0(param_2);
  func_0x00010c2b51a0(param_3);
  func_0x00010c2269a0(param_2);
  func_0x00010c131980(param_3);
  func_0x00010c1eaee0(param_2);
  func_0x00010c122b20(param_3);
  func_0x00010c1e88a0(param_2);
  lVar6 = param_3;
  func_0x00010bfadfa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108442be8();
  func_0x00010c19c1c0(param_2);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010bfae8c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108442868();
  func_0x00010c19c760(param_2);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010c095800(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bc3e0(param_2);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c240(param_2);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010c095a20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bc480(param_2);
  _objc_release(lVar6);
  func_0x00010c096ca0(param_3);
  func_0x00010c1bcca0(param_2);
  lVar6 = param_3;
  func_0x00010c091c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010b06f648();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bbee0(param_2);
  _objc_release(lVar7);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010c096b60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcc00(param_2);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010bf09180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcf40(param_2);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010c091c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010b06fac4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f6700(param_2);
  _objc_release(lVar7);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010c26a320(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212740(param_2);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    func_0x00010bf9f120(param_3);
    func_0x00010c199b20(param_2);
    func_0x00010bf9f040(param_3);
    func_0x00010c199a40(param_2);
    func_0x00010c0947c0(param_3);
    func_0x00010c1bbe80(param_2);
    func_0x00010c094800(param_3);
    func_0x00010c1bbea0(param_2);
    lVar6 = param_3;
    func_0x00010c090320(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1baba0(param_2);
    _objc_release(lVar6);
    lVar6 = param_3;
    func_0x00010c0915a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bb200(param_2);
    _objc_release(lVar6);
    lVar6 = param_3;
    func_0x00010c08fda0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c208000(param_2);
    _objc_release(lVar6);
    func_0x00010c096da0(param_3);
    func_0x00010c208420(param_2);
  }
  lVar6 = param_3;
  func_0x00010bf5af60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08fa60();
  _objc_release(lVar6);
  if (lVar7 != 0) {
    lVar6 = param_3;
    func_0x00010bf5af60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185a80(param_2);
    _objc_release(lVar6);
  }
  lVar6 = param_3;
  func_0x00010bfb75c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08fa60();
  _objc_release(lVar6);
  if (lVar7 != 0) {
    lVar6 = param_3;
    func_0x00010bfb75c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f820(param_2);
    _objc_release(lVar6);
  }
  lVar6 = param_3;
  func_0x00010c2454e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2061a0(param_2);
  _objc_release(lVar6);
  func_0x00010bf30820(param_3);
  func_0x00010c178b80(param_2);
  func_0x00010bf2fe80(param_3);
  func_0x00010c1785c0(param_2);
  func_0x00010bf2fbe0(param_3);
  func_0x00010c178480(param_2);
  lVar6 = param_3;
  func_0x00010bf30440(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178920(param_2);
  _objc_release(lVar6);
  func_0x00010bf30860(param_3);
  func_0x00010c178bc0(param_2);
  lVar6 = param_3;
  func_0x00010bf304e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf30160();
  func_0x00010c178740(param_2);
  _objc_release(lVar6);
  func_0x00010bf30660(param_3);
  func_0x00010c178ae0(param_2);
  lVar6 = param_3;
  func_0x00010bf304e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf30420();
  func_0x00010c178680(param_2);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010bf304e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf300e0();
  func_0x00010c1786a0(param_2);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010bf304e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf30180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178760(param_2);
  _objc_release(lVar7);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010bf304e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2fc00();
  func_0x00010c1784a0(param_2);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010bf304e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0ca680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c226760(param_2);
  _objc_release(lVar7);
  _objc_release(lVar6);
  func_0x00010bf11440(param_3);
  func_0x00010c16cc40(param_2);
  func_0x00010c2a09e0(param_3);
  func_0x00010c224100(param_2);
  puVar10 = PTR_PTR_1126c4720;
  _objc_opt_new(PTR_PTR_1126c4720);
  func_0x00010c282c80(param_3);
  func_0x00010c1e9680(puVar10);
  func_0x00010c2681e0(param_3);
  func_0x00010c2117e0(puVar10);
  func_0x00010bf5bb60(param_3);
  func_0x00010c1e59c0(puVar10);
  func_0x00010bfb92e0(param_3);
  func_0x00010c170060(puVar10);
  func_0x00010c268220(param_3);
  func_0x00010c211800(puVar10);
  func_0x00010c21f5a0(param_2);
  func_0x00010c253c00(param_3);
  func_0x00010c20abc0(param_2);
  func_0x00010c2551a0(param_3);
  func_0x00010c20ba80(param_2);
  func_0x00010c253de0(param_3);
  func_0x00010c20adc0(param_2);
  func_0x00010c2538c0(param_3);
  func_0x00010c20a840(param_2);
  lVar6 = param_3;
  func_0x00010c254580(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar7;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b440(param_2);
  _objc_release(lVar11);
  _objc_release(lVar7);
  _objc_release(lVar6);
  func_0x00010bfae160(param_3);
  func_0x00010c19c2c0(param_2);
  func_0x00010bfae340(param_3);
  func_0x00010c19c460(param_2);
  func_0x00010bfae500(param_3);
  func_0x00010c19c600(param_2);
  func_0x00010c264640(param_3);
  func_0x00010c210580(param_2);
  func_0x00010c06ab00(param_3);
  func_0x00010c1aeb80(param_2);
  lVar6 = param_3;
  func_0x00010c243340(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(param_2);
  _objc_release(lVar6);
  func_0x00010bf8e960(param_3);
  func_0x00010c20ae60(param_2);
  func_0x00010bf1c3a0(param_3);
  func_0x00010c20a860(param_2);
  func_0x00010c2441e0(param_3);
  func_0x00010c20b8c0(param_2);
  func_0x00010c281340(param_3);
  func_0x00010c20bb20(param_2);
  func_0x00010bfccb60(param_3);
  func_0x00010c20b040(param_2);
  func_0x00010bf8e980(param_3);
  func_0x00010c20aea0(param_2);
  func_0x00010bf1c3c0(param_3);
  func_0x00010c20a8a0(param_2);
  func_0x00010c244200(param_3);
  func_0x00010c20b900(param_2);
  func_0x00010c255260(param_3);
  func_0x00010c20bb60(param_2);
  func_0x00010c254000(param_3);
  func_0x00010c20af80(param_2);
  lVar6 = param_3;
  func_0x00010c2543a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c253f80();
  func_0x00010c20af60(param_2);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010bf8e9a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aec0(param_2);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010c281380(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20bb40(param_2);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010bfccbc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b060(param_2);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010bf1c420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a8c0(param_2);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010c244220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b920(param_2);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010bfbe160(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20afc0(param_2);
  _objc_release(lVar6);
  func_0x00010bf61f40(param_3);
  func_0x00010c20ac00(param_2);
  func_0x00010bf61d60(param_3);
  func_0x00010c20ac20(param_2);
  func_0x00010bf61d80(param_3);
  func_0x00010c20ac60(param_2);
  func_0x00010bf61f60();
  func_0x00010c20acc0(param_2);
  func_0x00010bf61da0();
  func_0x00010c20ac40(param_2);
  func_0x00010bf61dc0();
  func_0x00010c20ac80(param_2);
  lVar6 = param_3;
  func_0x00010bfee080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b1c0(param_2);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010bf4f980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aba0(param_2);
  _objc_release(lVar6);
  func_0x00010bfee060();
  func_0x00010c20b1a0(param_2);
  func_0x00010bf4f960();
  func_0x00010c20ab80(param_2);
  func_0x00010bfedfe0();
  func_0x00010c20b1e0(param_2);
  func_0x00010bfbe140();
  func_0x00010c20afa0(param_2);
  lVar6 = param_3;
  func_0x00010c2543a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2543e0();
  func_0x00010c20b340(param_2);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010c2543a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c254c00();
  func_0x00010c20b5a0(param_2);
  _objc_release(lVar6);
  func_0x00010c255140(param_3);
  func_0x00010c20ba40(param_2);
  lVar6 = param_3;
  func_0x00010c2543a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2a7c0();
  func_0x00010c20aaa0(param_2);
  _objc_release(lVar6);
  lVar7 = param_3;
  func_0x00010c2543a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x00010bf2a960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aac0(param_2);
  _objc_release(lVar6);
  _objc_release(lVar7);
  lVar6 = param_3;
  func_0x00010c2543a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0b5c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9ee0(param_2);
  _objc_release(lVar7);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010c0b5c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c1160(param_2);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010c247400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206b60(param_2);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010c247500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206c00(param_2);
  _objc_release(lVar6);
  func_0x00010c1101a0();
  func_0x00010c1e1760(param_2);
  func_0x00010c1084c0();
  func_0x00010c1e0780(param_2);
  func_0x00010bf219a0(param_3);
  func_0x00010c174020(param_2);
  lVar6 = param_3;
  func_0x00010bf219e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174060(param_2);
  _objc_release(lVar6);
  func_0x00010c2a8860(param_3);
  func_0x00010c225c80(param_2);
  lVar6 = param_3;
  func_0x00010bf0f140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c4e0(param_2);
  _objc_release(lVar6);
  func_0x00010c29a680(param_3);
  func_0x00010c221b20(param_2);
  func_0x00010c2b6aa0();
  func_0x00010c226ba0(param_2);
  func_0x00010c124200();
  func_0x00010c1e9060(param_2);
  func_0x00010bf4ca00();
  func_0x00010c182160(param_2);
  func_0x00010c2a0400();
  func_0x00010c223e80(param_2);
  lVar6 = param_3;
  func_0x00010bf5ad40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x000108441b08();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  func_0x00010c185860(param_2);
  func_0x00010bf70ea0();
  func_0x00010c18cd80(param_2);
  func_0x00010c2b95a0();
  func_0x00010c226da0(param_2);
  func_0x00010c0d6260();
  func_0x00010c1cb6c0(param_2);
  lVar6 = param_3;
  func_0x00010c297de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2208c0(param_2);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010bfde3a0();
  if ((int)lVar6 != 0) {
    lVar6 = param_3;
    func_0x00010c297de0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c6c0(param_2);
    _objc_release(lVar6);
  }
  func_0x00010c0b6480(param_3);
  func_0x00010c1c1800(param_2);
  lVar6 = param_3;
  func_0x00010c0b6520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    lVar6 = param_3;
    func_0x00010c0b6520(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar6;
    func_0x00010c067fc0();
    func_0x00010c1c1840((double)lVar11,param_2);
    _objc_release(lVar6);
  }
  lVar6 = param_3;
  func_0x00010c0b6500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    lVar6 = param_3;
    func_0x00010c0b6500(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c1c1820(param_2);
    _objc_release(lVar6);
  }
  func_0x00010bfbaf40(param_3);
  func_0x00010c1b1560(param_2);
  lVar6 = param_3;
  func_0x00010bfba2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19fd00(param_2);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010c259e40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d2c0(param_2);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010c253a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aae0(param_2);
  _objc_release(lVar6);
  func_0x00010bf1c3a0(param_3);
  func_0x00010c20a860(param_2);
  lVar6 = param_3;
  func_0x00010bf1c420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a8c0(param_2);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010c244220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b920(param_2);
  _objc_release(lVar6);
  func_0x00010c2441e0(param_3);
  func_0x00010c20b8c0(param_2);
  lVar6 = param_3;
  func_0x00010c2539a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a960(param_2);
  _objc_release(lVar6);
  func_0x00010c253980(param_3);
  func_0x00010c20a940(param_2);
  lVar6 = param_3;
  func_0x00010bf61e60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20ace0(param_2);
  _objc_release(lVar6);
  func_0x00010bf61f40(param_3);
  func_0x00010c20ac00(param_2);
  lVar6 = param_3;
  func_0x00010bf8e9a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aec0(param_2);
  _objc_release(lVar6);
  func_0x00010bf8e960(param_3);
  func_0x00010c20ae60(param_2);
  lVar6 = param_3;
  func_0x00010bfee080(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b1c0(param_2);
  _objc_release(lVar6);
  func_0x00010bfee060(param_3);
  func_0x00010c20b1a0(param_2);
  lVar6 = param_3;
  func_0x00010bfccbc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b060(param_2);
  _objc_release(lVar6);
  func_0x00010bfccb60(param_3);
  func_0x00010c20b040(param_2);
  lVar6 = param_3;
  func_0x00010c0d3a20(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar6;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca440(param_2);
  _objc_release(lVar11);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010c0d3300(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9fe0(param_2);
  _objc_release(lVar6);
  func_0x00010c0d3840(param_3);
  func_0x00010c1ca4e0(param_2);
  lVar6 = param_3;
  func_0x00010bf4f080(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1833c0(param_2);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010c0c1aa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar6;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2f20(param_2);
  _objc_release(lVar11);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010c0d37c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca220(param_2);
  _objc_release(lVar6);
  func_0x00010c1295a0(param_3);
  func_0x00010c1e9e20(param_2);
  lVar6 = param_3;
  func_0x00010c1297e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar6;
  func_0x00010c129a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea120(param_2);
  _objc_release(lVar11);
  _objc_release(lVar6);
  puVar12 = PTR_PTR_1126c4728;
  _objc_opt_new(PTR_PTR_1126c4728);
  lVar6 = param_3;
  func_0x00010c1297e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar6;
  func_0x00010c129aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea1a0(puVar12);
  _objc_release(lVar11);
  _objc_release(lVar6);
  func_0x00010c1e9e60(param_2);
  lVar6 = param_3;
  func_0x00010c1343c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb7e0(param_2);
  _objc_release(lVar6);
  puVar13 = PTR_PTR_1126c4730;
  _objc_opt_new(PTR_PTR_1126c4730);
  func_0x00010c0d2c80(param_3);
  func_0x00010c1c9c60(puVar13);
  func_0x00010c2a0a00(param_3);
  func_0x00010c224120(puVar13);
  lVar6 = param_3;
  func_0x00010c0d30c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c1c9f60(puVar13);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010c2a0ba0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c224160(puVar13);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010bf160e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c16f3a0(puVar13);
  _objc_release(lVar6);
  func_0x00010c16bee0(param_2);
  func_0x00010c26c920(param_3);
  func_0x00010c213840(param_2);
  lVar6 = param_3;
  func_0x0001084425f0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c16c0(param_2);
  _objc_release(lVar6);
  func_0x00010c07a080(param_3);
  func_0x00010c1b34a0(param_2);
  func_0x00010c27c4a0(param_3);
  func_0x00010c21a480(param_2);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(lVar7);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107093910; end: 107093a1b;  */

void FUN_107093910(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  FUN_107091bf4(param_1,param_2,param_3,param_4,param_5,param_6);
  lVar1 = param_3;
  func_0x00010bf0a3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010bf0a3a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c184460(param_1);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  func_0x00010c07e5e0(param_2);
  func_0x00010c1b4700(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107093a1c; end: 107094673;  */

void FUN_107093a1c(float param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  float fVar9;
  
  _objc_retain();
  _objc_retain(param_3);
  lVar2 = param_2;
  func_0x00010bfadd80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if ((lVar3 == 0) && (lVar3 = param_2, func_0x00010bf1b840(), lVar3 < 1)) {
    lVar3 = param_2;
    func_0x00010c297de0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar6 = param_2;
      func_0x00010c281360();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf529e0();
      if (lVar7 == 0) {
        lVar7 = param_2;
        func_0x00010bfc1820();
        _objc_retainAutoreleasedReturnValue();
        bVar1 = lVar7 == 0;
        _objc_release();
      }
      else {
        bVar1 = false;
      }
      _objc_release(lVar6);
    }
    else {
      bVar1 = false;
    }
    _objc_release(lVar3);
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010bfd76a0();
  if (((int)lVar2 == 0) || (!bVar1)) {
    puVar8 = PTR_PTR_1126d4568;
    _objc_opt_new(PTR_PTR_1126d4568);
    func_0x00010bf037a0(param_2);
    func_0x00010c167f20(puVar8);
    func_0x00010bf03500(param_2);
    func_0x00010c167e60(puVar8);
    func_0x00010c2a8340(param_2);
    func_0x00010c225be0(puVar8);
    uVar4 = param_3;
    FUN_10708ef6c(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c8600(puVar8);
    _objc_release(uVar4);
    func_0x00010c247520(param_2);
    func_0x00010c206c40(puVar8);
    lVar2 = param_2;
    func_0x00010c247a00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206f80(puVar8);
    _objc_release(lVar2);
    func_0x00010c0c6c20();
    func_0x00010c1c5440(puVar8);
    func_0x00010bfb2540(param_2);
    func_0x00010c19daa0(puVar8);
    func_0x00010bfd3440(param_2);
    func_0x00010c1a5460(puVar8);
    func_0x00010bfbb160(param_2);
    func_0x00010c176040(puVar8);
    func_0x00010c0c4ba0(param_2);
    fVar9 = SUB84((double)(float)(int)(param_1 * 10.0) / 10.0,0);
    func_0x00010c205880(puVar8);
    func_0x00010c243700(param_2);
    func_0x00010c205840(puVar8);
    func_0x00010c29e480(param_2);
    fVar9 = SUB84((double)(float)(int)(fVar9 * 10.0) / 10.0,0);
    func_0x00010c222d20(puVar8);
    func_0x00010bf89ea0(param_2);
    func_0x00010c191960(puVar8);
    func_0x00010bf2fba0(param_2);
    func_0x00010c178460(puVar8);
    func_0x00010bf5c920(param_2);
    func_0x00010c226060(puVar8);
    lVar2 = param_2;
    func_0x00010bf93ae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1955e0(puVar8);
    _objc_release(lVar2);
    func_0x00010c2aea60(param_2);
    func_0x00010c226380(puVar8);
    func_0x00010c122b20(param_2);
    func_0x00010c1e88a0(puVar8);
    func_0x00010c25a8c0(param_2);
    func_0x00010c20d640(puVar8);
    lVar2 = param_2;
    func_0x00010bfadfa0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108442be8();
    func_0x00010c19c1c0(puVar8);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfae8c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108442868();
    func_0x00010c19c760(puVar8);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfadd80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c040(puVar8);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfadda0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c060(puVar8);
    _objc_release(lVar2);
    func_0x00010bfadf40(param_2);
    func_0x00010c19c180(puVar8);
    func_0x00010bfadf60(param_2);
    func_0x00010c19c1a0(puVar8);
    func_0x00010c2b3080(param_2);
    func_0x00010c226420(puVar8);
    lVar2 = param_2;
    func_0x00010bfc11a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1930a0(puVar8);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_2;
      func_0x00010c08fda0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c208000(puVar8);
      _objc_release(lVar2);
      func_0x00010c096da0(param_2);
      func_0x00010c208420(puVar8);
    }
    func_0x00010bf30820(param_2);
    func_0x00010c178b80(puVar8);
    func_0x00010bf2fe80(param_2);
    func_0x00010c1785c0(puVar8);
    func_0x00010bf2fbe0(param_2);
    func_0x00010c178480(puVar8);
    lVar2 = param_2;
    func_0x00010bf30440(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178920(puVar8);
    _objc_release(lVar2);
    func_0x00010bf30860(param_2);
    func_0x00010c178bc0(puVar8);
    puVar5 = PTR_PTR_1126c4720;
    _objc_opt_new(PTR_PTR_1126c4720);
    func_0x00010c282c80(param_2);
    func_0x00010c1e9680(puVar5);
    func_0x00010c2681e0(param_2);
    func_0x00010c2117e0(puVar5);
    func_0x00010bf5bb60(param_2);
    func_0x00010c1e59c0(puVar5);
    func_0x00010bfb92e0(param_2);
    func_0x00010c170060(puVar5);
    func_0x00010c268220(param_2);
    func_0x00010c211800(puVar5);
    func_0x00010c21f5a0(puVar8);
    func_0x00010c253c00(param_2);
    func_0x00010c20abc0(puVar8);
    func_0x00010c2551a0(param_2);
    func_0x00010c20ba80(puVar8);
    func_0x00010c253de0(param_2);
    func_0x00010c20adc0(puVar8);
    lVar2 = param_2;
    func_0x00010c254580(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20b440(puVar8);
    _objc_release(lVar6);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010bfae160(param_2);
    func_0x00010c19c2c0(puVar8);
    func_0x00010bfae340(param_2);
    func_0x00010c19c460(puVar8);
    func_0x00010c264640(param_2);
    func_0x00010c210580(puVar8);
    lVar2 = param_2;
    func_0x00010c243340(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205660(puVar8);
    _objc_release(lVar2);
    func_0x00010bf8e960(param_2);
    func_0x00010c20ae60(puVar8);
    func_0x00010bf1c3a0(param_2);
    func_0x00010c20a860(puVar8);
    func_0x00010bf1b840(param_2);
    func_0x00010c20afe0(puVar8);
    func_0x00010c2441e0(param_2);
    func_0x00010c20b8c0(puVar8);
    func_0x00010bf8e980(param_2);
    func_0x00010c20aea0(puVar8);
    func_0x00010bf1c3c0(param_2);
    func_0x00010c20a8a0(puVar8);
    func_0x00010bf1b860(param_2);
    func_0x00010c20b000(puVar8);
    func_0x00010c244200(param_2);
    func_0x00010c20b900(puVar8);
    lVar2 = param_2;
    func_0x00010bf8e9a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20aec0(puVar8);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c281380(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20bb40(puVar8);
    _objc_release(lVar2);
    func_0x00010c281340(param_2);
    func_0x00010c20bb20(puVar8);
    lVar2 = param_2;
    func_0x00010bfccbc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20b060(puVar8);
    _objc_release(lVar2);
    func_0x00010bfccb60(param_2);
    func_0x00010c20b040(puVar8);
    lVar2 = param_2;
    func_0x00010bf1c420(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20a8c0(puVar8);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bf1b880(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20b020(puVar8);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c244220(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20b920(puVar8);
    _objc_release(lVar2);
    func_0x00010bf61f40(param_2);
    func_0x00010c20ac00(puVar8);
    func_0x00010bf61d60(param_2);
    func_0x00010c20ac20(puVar8);
    func_0x00010bf61d80(param_2);
    func_0x00010c20ac60(puVar8);
    func_0x00010bf61f60(param_2);
    func_0x00010c20acc0(puVar8);
    func_0x00010bf61da0(param_2);
    func_0x00010c20ac40(puVar8);
    func_0x00010bf61dc0(param_2);
    func_0x00010c20ac80(puVar8);
    lVar2 = param_2;
    func_0x00010c297de0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_2;
      func_0x00010bfc1820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        lVar2 = param_2;
        func_0x00010bfc1820(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a2de0(puVar8);
        _objc_release(lVar2);
      }
      lVar2 = param_2;
      func_0x00010bfde3a0();
      if ((int)lVar2 != 0) {
        lVar2 = param_2;
        func_0x00010c297de0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19c6c0(puVar8);
        _objc_release(lVar2);
      }
      func_0x00010c298120(param_2);
      func_0x00010c220b20(puVar8);
      func_0x00010c297ea0(param_2);
      func_0x00010c220920(puVar8);
      func_0x00010c297b60(param_2);
      if (fVar9 != 0.0) {
        func_0x00010c297b60(param_2);
        func_0x00010c190a60(puVar8);
      }
    }
    func_0x00010bfd47c0(param_2);
    func_0x00010c226400(puVar8);
    func_0x00010c1101a0(param_2);
    func_0x00010c1e1760(puVar8);
    func_0x00010c1084c0(param_2);
    func_0x00010c1e0780(puVar8);
    func_0x00010bf219a0(param_2);
    func_0x00010c174020(puVar8);
    lVar2 = param_2;
    func_0x00010bf219e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c174060(puVar8);
    _objc_release(lVar2);
    func_0x00010c2a8860(param_2);
    func_0x00010c225c80(puVar8);
    lVar2 = param_2;
    func_0x00010bf0f140(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16c4e0(puVar8);
    _objc_release(lVar2);
    func_0x00010c2a0400(param_2);
    func_0x00010c223e80(puVar8);
    func_0x00010bf70ea0(PTR_PTR_1126b2930);
    func_0x00010c18cd80(puVar8);
    lVar2 = param_2;
    func_0x00010c275b60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c217b20(puVar8);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c275b80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c217ca0(puVar8);
    _objc_release(lVar2);
    func_0x00010bfae3c0(param_2);
    func_0x00010c19c4e0(puVar8);
    lVar2 = param_2;
    func_0x00010c297de0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2208c0(puVar8);
    _objc_release(lVar2);
    func_0x00010c23ef00(param_2);
    func_0x00010c203740(puVar8);
    func_0x00010c27c4a0(param_2);
    func_0x00010c21a480(puVar8);
    func_0x00010c0b6480(param_2);
    func_0x00010c1c1800(puVar8);
    lVar2 = param_2;
    func_0x00010c0b6520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_2;
      func_0x00010c0b6520(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c067fc0();
      func_0x00010c1c1840((double)lVar3,puVar8);
      _objc_release(lVar2);
    }
    lVar2 = param_2;
    func_0x00010c0b6500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_2;
      func_0x00010c0b6500(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010c1c1820(puVar8);
      _objc_release(lVar2);
    }
    _objc_release(puVar5);
  }
  else {
    puVar8 = (undefined *)0x0;
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107094674; end: 107094757;  */

void FUN_107094674(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010bfaddc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c040(param_1);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010bfae4e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20b460(param_1);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010bfade00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_2;
      func_0x00010bfade00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19c060(param_1);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107094758; end: 10709480f;  */

void FUN_107094758(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf80c00();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107094810; end: 107094843;  */

void FUN_107094810(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e9bff8,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithBool__1126157d0,uVar1);
  return;
}



/* Entry: 107094844; end: 107094883; -[SCArroyoChatLogger _shouldSkipDirectSnapSendSnapchatterFetch] */

undefined8 FUN_107094844(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107094884; end: 107094937; -[SCArroyoChatLogger didCreateConversation:] */

void FUN_107094884(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf509a0();
  if (lVar1 == 1) {
    lVar1 = param_3;
    func_0x00010bf33620();
    if (lVar1 == 1) {
      lVar2 = param_3;
      func_0x00010bf33480(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c272380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    else {
      lVar3 = 0;
    }
    func_0x00010be51980(param_1,param_2,param_3,lVar1 == 1,lVar3);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107094938; end: 10709493b; -[SCArroyoChatLogger didRemoveConversation:] */

void FUN_107094938(void)

{
  return;
}



/* Entry: 10709493c; end: 10709493f; -[SCArroyoChatLogger didConversationUpdateForConversationId:conversation:updatedMessages:removedMessages:] */

void FUN_10709493c(void)

{
  return;
}



/* Entry: 107094940; end: 107094943; -[SCArroyoChatLogger didSendStart:] */

void FUN_107094940(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0af210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_logSendMessageWithStartEvent__112609690);
  return;
}



/* Entry: 107094944; end: 107094a57; -[SCArroyoChatLogger _snapSendInfoFromResult:] */

void FUN_107094944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010bf4bc60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c0fe1c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeea60();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c1ec620(puVar1);
  puVar5 = puVar1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c3300;
  _objc_opt_class(PTR_PTR_1126c3300);
  puVar7 = puVar5;
  _objc_opt_isKindOfClass(puVar5,puVar6);
  puVar6 = puVar5;
  if (((ulong)puVar7 & 1) == 0) {
    puVar6 = (undefined *)0x0;
  }
  _objc_retain(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}


