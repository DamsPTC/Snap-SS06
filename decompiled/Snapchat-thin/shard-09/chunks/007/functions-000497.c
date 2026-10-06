/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1070bf7d4; end: 1070bf817; -[SCChatMessageReactionLogInfo internalInit] */

void FUN_1070bf7d4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f89d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1070bf818; end: 1070bf8b7; -[SCChatMessageReactionLogInfo isEqual:] */

long FUN_1070bf818(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1070bf89c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_1070bf89c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_1070bf89c;
    }
  }
  lVar3 = 1;
LAB_1070bf89c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1070bf8b8; end: 1070bf93b; -[SCChatMessageReactionLogInfo matchBitmojiReaction:emoji:] */

void FUN_1070bf8b8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
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



/* Entry: 1070bf93c; end: 1070bf947; -[SCChatMessageReactionLogInfo .cxx_destruct] */

void FUN_1070bf93c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1070bf948; end: 1070bfa5b; -[SCChatProfileMessagePropertiesStore initWithMessageId:conversationId:messageSender:analyticsMessageId:messageType:] */

undefined1 *
FUN_1070bf948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  puStack_48 = PTR_PTR_1126f89e0;
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
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1070bfa5c; end: 1070bfa7f; -[SCChatProfileMessagePropertiesStore copyWithZone:] */

undefined8 FUN_1070bfa5c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070bfa80; end: 1070bfb17; -[SCChatProfileMessagePropertiesStore hash] */

undefined8 * FUN_1070bfa80(long param_1,undefined8 param_2,undefined1 *param_3)

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
  long lStack_30;
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
  lVar5 = *(long *)(param_1 + 0x28);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1070bfbd8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1070bfbe4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
            if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_1070bfbe4;
            }
            goto LAB_1070bfbd8;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1070bfbe4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1070bfb18; end: 1070bfbff; -[SCChatProfileMessagePropertiesStore isEqual:] */

long FUN_1070bfb18(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1070bfbd8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1070bfbe4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_1070bfbe4;
            }
            goto LAB_1070bfbd8;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1070bfbe4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1070bfc00; end: 1070bfc07; -[SCChatProfileMessagePropertiesStore messageId] */

undefined8 FUN_1070bfc00(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1070bfc08; end: 1070bfc0f; -[SCChatProfileMessagePropertiesStore conversationId] */

undefined8 FUN_1070bfc08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1070bfc10; end: 1070bfc17; -[SCChatProfileMessagePropertiesStore messageSender] */

undefined8 FUN_1070bfc10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1070bfc18; end: 1070bfc1f; -[SCChatProfileMessagePropertiesStore analyticsMessageId] */

undefined8 FUN_1070bfc18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1070bfc20; end: 1070bfc27; -[SCChatProfileMessagePropertiesStore messageType] */

undefined8 FUN_1070bfc20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1070bfc28; end: 1070bfc6f; -[SCChatProfileMessagePropertiesStore .cxx_destruct] */

void FUN_1070bfc28(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1070bfc70; end: 1070bfd57; -[SCChatGroupUpdateContent initWithModifiedBy:groupName:modifiedParticipants:type:] */

undefined1 *
FUN_1070bfc70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f89e8;
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1070bfd58; end: 1070bfd7b; -[SCChatGroupUpdateContent copyWithZone:] */

undefined8 FUN_1070bfd58(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070bfd7c; end: 1070bfe07; -[SCChatGroupUpdateContent hash] */

undefined8 * FUN_1070bfd7c(long param_1,undefined8 param_2,undefined8 *param_3)

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
  long lStack_30;
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
  lVar5 = *(long *)(param_1 + 0x20);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  puVar3 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1070bfeb0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1070bfebc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[4] == param_3[4])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[3];
          if (puVar6 != (undefined8 *)param_3[3]) {
            func_0x00010c071ae0();
            goto LAB_1070bfebc;
          }
          goto LAB_1070bfeb0;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1070bfebc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1070bfe08; end: 1070bfed7; -[SCChatGroupUpdateContent isEqual:] */

long FUN_1070bfe08(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1070bfeb0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1070bfebc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_1070bfebc;
          }
          goto LAB_1070bfeb0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1070bfebc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1070bfed8; end: 1070bfedf; -[SCChatGroupUpdateContent modifiedBy] */

undefined8 FUN_1070bfed8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1070bfee0; end: 1070bfee7; -[SCChatGroupUpdateContent groupName] */

undefined8 FUN_1070bfee0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1070bfee8; end: 1070bfeef; -[SCChatGroupUpdateContent modifiedParticipants] */

undefined8 FUN_1070bfee8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1070bfef0; end: 1070bfef7; -[SCChatGroupUpdateContent type] */

undefined8 FUN_1070bfef0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1070bfef8; end: 1070bff33; -[SCChatGroupUpdateContent .cxx_destruct] */

void FUN_1070bfef8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1070bff34; end: 1070c000b; -[SCChatMediaSave initWithSavedMessageSenderId:savedMessageId:mediaTypeSavedCount:] */

undefined1 *
FUN_1070bff34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f89f0;
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



/* Entry: 1070c000c; end: 1070c002f; -[SCChatMediaSave copyWithZone:] */

undefined8 FUN_1070c000c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070c0030; end: 1070c00af; -[SCChatMediaSave hash] */

undefined8 * FUN_1070c0030(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1070c0148:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1070c0154;
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
            goto LAB_1070c0154;
          }
          goto LAB_1070c0148;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1070c0154:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1070c00b0; end: 1070c016f; -[SCChatMediaSave isEqual:] */

long FUN_1070c00b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1070c0148:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1070c0154;
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
            goto LAB_1070c0154;
          }
          goto LAB_1070c0148;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1070c0154:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1070c0170; end: 1070c0177; -[SCChatMediaSave savedMessageSenderId] */

undefined8 FUN_1070c0170(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1070c0178; end: 1070c017f; -[SCChatMediaSave savedMessageId] */

undefined8 FUN_1070c0178(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1070c0180; end: 1070c0187; -[SCChatMediaSave mediaTypeSavedCount] */

undefined8 FUN_1070c0180(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1070c0188; end: 1070c01c3; -[SCChatMediaSave .cxx_destruct] */

void FUN_1070c0188(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1070c01c4; end: 1070c026f; -[SCChatSnapchatterData initWithSnapchatter:friendStatus:] */

undefined1 *
FUN_1070c01c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f89f8;
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



/* Entry: 1070c0270; end: 1070c0293; -[SCChatSnapchatterData copyWithZone:] */

undefined8 FUN_1070c0270(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070c0294; end: 1070c0307; -[SCChatSnapchatterData hash] */

undefined8 * FUN_1070c0294(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_1070c0388:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1070c0394;
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
          goto LAB_1070c0394;
        }
        goto LAB_1070c0388;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1070c0394:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1070c0308; end: 1070c03af; -[SCChatSnapchatterData isEqual:] */

long FUN_1070c0308(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1070c0388:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1070c0394;
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
          goto LAB_1070c0394;
        }
        goto LAB_1070c0388;
      }
    }
    lVar3 = 0;
  }
LAB_1070c0394:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1070c03b0; end: 1070c03b7; -[SCChatSnapchatterData snapchatter] */

undefined8 FUN_1070c03b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1070c03b8; end: 1070c03bf; -[SCChatSnapchatterData friendStatus] */

undefined8 FUN_1070c03b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1070c03c0; end: 1070c03ef; -[SCChatSnapchatterData .cxx_destruct] */

void FUN_1070c03c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1070c03f0; end: 1070c049b; -[SCConversationAndMessageIdentifier initWithConversationId:messageIdentifier:] */

undefined1 *
FUN_1070c03f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8a00;
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



/* Entry: 1070c049c; end: 1070c04bf; -[SCConversationAndMessageIdentifier copyWithZone:] */

undefined8 FUN_1070c049c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070c04c0; end: 1070c0533; -[SCConversationAndMessageIdentifier hash] */

undefined8 * FUN_1070c04c0(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_1070c05b4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1070c05c0;
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
          goto LAB_1070c05c0;
        }
        goto LAB_1070c05b4;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1070c05c0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1070c0534; end: 1070c05db; -[SCConversationAndMessageIdentifier isEqual:] */

long FUN_1070c0534(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1070c05b4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1070c05c0;
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
          goto LAB_1070c05c0;
        }
        goto LAB_1070c05b4;
      }
    }
    lVar3 = 0;
  }
LAB_1070c05c0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1070c05dc; end: 1070c05e3; -[SCConversationAndMessageIdentifier conversationId] */

undefined8 FUN_1070c05dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1070c05e4; end: 1070c05eb; -[SCConversationAndMessageIdentifier messageIdentifier] */

undefined8 FUN_1070c05e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1070c05ec; end: 1070c061b; -[SCConversationAndMessageIdentifier .cxx_destruct] */

void FUN_1070c05ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1070c061c; end: 1070c06a3; -[SCChatWindowMoveRequest initWithConversationId:direction:] */

undefined1 *
FUN_1070c061c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f8a08;
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



/* Entry: 1070c06a4; end: 1070c06c7; -[SCChatWindowMoveRequest copyWithZone:] */

undefined8 FUN_1070c06a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070c06c8; end: 1070c0733; -[SCChatWindowMoveRequest hash] */

undefined8 * FUN_1070c06c8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
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
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1070c07b8;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_1070c07b8;
    }
    puVar4 = (undefined8 *)puVar2[1];
    if (puVar4 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_1070c07b8;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_1070c07b8:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 1070c0734; end: 1070c07d3; -[SCChatWindowMoveRequest isEqual:] */

long FUN_1070c0734(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1070c07b8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_1070c07b8;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1070c07b8;
    }
  }
  lVar3 = 1;
LAB_1070c07b8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1070c07d4; end: 1070c07db; -[SCChatWindowMoveRequest conversationId] */

undefined8 FUN_1070c07d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1070c07dc; end: 1070c07e3; -[SCChatWindowMoveRequest direction] */

undefined8 FUN_1070c07dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1070c07e4; end: 1070c07ef; -[SCChatWindowMoveRequest .cxx_destruct] */

void FUN_1070c07e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1070c07f0; end: 1070c0873;  */

bool FUN_1070c07f0(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x000108f420c0();
  if ((uVar2 & 1) == 0) {
    lVar3 = param_1;
    FUN_1070c0998(param_1,param_2);
    bVar1 = lVar3 != 0;
  }
  else {
    bVar1 = true;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 1070c0874; end: 1070c0997;  */

void FUN_1070c0874(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_2;
  FUN_1070c0998(param_2,param_3);
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    FUN_1070c0998(param_2,param_3);
    puVar3 = PTR_PTR_1126d4b70;
    _objc_alloc(PTR_PTR_1126d4b70);
    lVar1 = param_2;
    func_0x00010c27f9c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001090196c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04ad00(puVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1070c0998; end: 1070c0a13;  */

undefined8 FUN_1070c0998(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x000109019408();
  if ((((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010901953c(), (int)uVar1 != 0)) &&
     (uVar1 = param_1, func_0x0001090195e0(param_1,param_2), (uVar1 & 1) != 0)) {
    uVar2 = 2;
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1070c0a14; end: 1070c0b1f;  */

void FUN_1070c0a14(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c242120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126b2378;
  if (lVar3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c242120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe3740(puVar4,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar5 = puVar4;
    func_0x00010c27f9c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x0001090196c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1070c0b20; end: 1070c0bd3;  */

bool FUN_1070c0b20(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c0c6c20();
  if ((((uVar2 + 1 < 0x17) && ((0x7ffff1U >> (ulong)((uint)(uVar2 + 1) & 0x1f) & 1) != 0)) ||
      ((uVar2 = param_1, func_0x00010c27dd80(), uVar2 < 0x2d &&
       ((0x1ffffffee3f3U >> (uVar2 & 0x3f) & 1) != 0)))) ||
     (uVar2 = param_1, func_0x00010bf2c580(), (int)uVar2 == 0)) {
    bVar1 = false;
  }
  else {
    uVar2 = param_1;
    func_0x00010c0c72c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    bVar1 = uVar3 == 1;
    _objc_release(uVar2);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 1070c0bd4; end: 1070c0cbb; -[SCRemixChatStoryShareMetadata initWithSourceUserId:sourceSnapId:remixPermission:sourceTrackInfo:] */

undefined1 *
FUN_1070c0bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f8a10;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1070c0cbc; end: 1070c0cdf; -[SCRemixChatStoryShareMetadata copyWithZone:] */

undefined8 FUN_1070c0cbc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070c0ce0; end: 1070c0d63; -[SCRemixChatStoryShareMetadata hash] */

undefined8 * FUN_1070c0ce0(long param_1,undefined8 param_2,undefined8 *param_3)

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
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar1;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1070c0e0c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1070c0e18;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[3] == param_3[3])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_1070c0e18;
          }
          goto LAB_1070c0e0c;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1070c0e18:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1070c0d64; end: 1070c0e33; -[SCRemixChatStoryShareMetadata isEqual:] */

long FUN_1070c0d64(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1070c0e0c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1070c0e18;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_1070c0e18;
          }
          goto LAB_1070c0e0c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1070c0e18:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1070c0e34; end: 1070c0e3b; -[SCRemixChatStoryShareMetadata sourceUserId] */

undefined8 FUN_1070c0e34(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1070c0e3c; end: 1070c0e43; -[SCRemixChatStoryShareMetadata sourceSnapId] */

undefined8 FUN_1070c0e3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1070c0e44; end: 1070c0e4b; -[SCRemixChatStoryShareMetadata remixPermission] */

undefined8 FUN_1070c0e44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1070c0e4c; end: 1070c0e53; -[SCRemixChatStoryShareMetadata sourceTrackInfo] */

undefined8 FUN_1070c0e4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1070c0e54; end: 1070c0e8f; -[SCRemixChatStoryShareMetadata .cxx_destruct] */

void FUN_1070c0e54(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1070c0e90; end: 1070c0e9f; +[SCNotificationDebuggerLogger logNotificationBeginProcessing:] */

void FUN_1070c0e90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be56650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logNotificationBeginProcessing__112573330,param_3,
             &PTR___NSConcreteGlobalBlock_11098cff8);
  return;
}



/* Entry: 1070c0ea0; end: 1070c0fd7; +[SCNotificationDebuggerLogger _logNotificationBeginProcessing:logMethod:] */

void FUN_1070c0ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1d0560();
  uVar2 = param_3;
  func_0x00010bf45cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1d0560(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010beec480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010be1fe00(param_1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_4 + 0x10))(param_4,param_1);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070c0fd8; end: 1070c0fe7; +[SCNotificationDebuggerLogger logNotificationEndProcessing:] */

void FUN_1070c0fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be566d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logNotificationEndProcessing_lo_112573350,param_3,
             &PTR___NSConcreteGlobalBlock_11098d018);
  return;
}



/* Entry: 1070c0fe8; end: 1070c111f; +[SCNotificationDebuggerLogger _logNotificationEndProcessing:logMethod:] */

void FUN_1070c0fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1d0560();
  uVar2 = param_3;
  func_0x00010bf45cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1d0560(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010beec480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010be1fe00(param_1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_4 + 0x10))(param_4,param_1);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070c1120; end: 1070c112f; +[SCNotificationDebuggerLogger logNotificationProcessorBegin:processorName:] */

void FUN_1070c1120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be567b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logNotificationProcessorBegin_p_112573388,param_3,param_4,
             &PTR___NSConcreteGlobalBlock_11098d038);
  return;
}



/* Entry: 1070c1130; end: 1070c1293; +[SCNotificationDebuggerLogger _logNotificationProcessorBegin:processorName:logMethod:] */

void FUN_1070c1130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1d0560();
  uVar2 = param_3;
  func_0x00010bf45cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1d0560(puVar1);
  func_0x00010c1d0560(puVar1);
  _objc_release(param_4);
  puVar3 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010beec480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010be1fe00(param_1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_5 + 0x10))(param_5,param_1);
  _objc_release(param_5);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070c1294; end: 1070c12a3; +[SCNotificationDebuggerLogger logNotificationProcessorComplete:processorName:] */

void FUN_1070c1294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be567d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logNotificationProcessorComplet_112573390,param_3,param_4,
             &PTR___NSConcreteGlobalBlock_11098d058);
  return;
}



/* Entry: 1070c12a4; end: 1070c1407; +[SCNotificationDebuggerLogger _logNotificationProcessorComplete:processorName:logMethod:] */

void FUN_1070c12a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1d0560();
  uVar2 = param_3;
  func_0x00010bf45cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1d0560(puVar1);
  func_0x00010c1d0560(puVar1);
  _objc_release(param_4);
  puVar3 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010beec480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010be1fe00(param_1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_5 + 0x10))(param_5,param_1);
  _objc_release(param_5);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070c1408; end: 1070c1417; +[SCNotificationDebuggerLogger logNotificationRevoke:revokedNotificationId:] */

void FUN_1070c1408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be567f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logNotificationRevoke_revokedNo_112573398,param_3,param_4,
             &PTR___NSConcreteGlobalBlock_11098d078);
  return;
}



/* Entry: 1070c1418; end: 1070c157b; +[SCNotificationDebuggerLogger _logNotificationRevoke:revokedNotificationId:logMethod:] */

void FUN_1070c1418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1d0560();
  uVar2 = param_3;
  func_0x00010bf45cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1d0560(puVar1);
  func_0x00010c1d0560(puVar1);
  _objc_release(param_4);
  puVar3 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010beec480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010be1fe00(param_1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_5 + 0x10))(param_5,param_1);
  _objc_release(param_5);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070c157c; end: 1070c158b; +[SCNotificationDebuggerLogger logBadgeCountUpdate:] */

void FUN_1070c157c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be50730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logBadgeCountUpdate_logMethod__112571b68,param_3,
             &PTR___NSConcreteGlobalBlock_11098d0b8);
  return;
}



/* Entry: 1070c158c; end: 1070c16af; +[SCNotificationDebuggerLogger _logBadgeCountUpdate:logMethod:] */

void FUN_1070c158c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c1d0560();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010beec480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010be1fe00(param_1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_4 + 0x10))(param_4,param_1);
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070c16b0; end: 1070c16bf; +[SCNotificationDebuggerLogger logNotificationDrop:] */

void FUN_1070c16b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be566b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logNotificationDrop_logMethod__112573348,param_3,
             &PTR___NSConcreteGlobalBlock_11098d0d8);
  return;
}



/* Entry: 1070c16c0; end: 1070c17f7; +[SCNotificationDebuggerLogger _logNotificationDrop:logMethod:] */

void FUN_1070c16c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1d0560();
  uVar2 = param_3;
  func_0x00010bf45cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1d0560(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010beec480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010be1fe00(param_1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_4 + 0x10))(param_4,param_1);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070c17f8; end: 1070c1807; +[SCNotificationDebuggerLogger logNotificationOpen:destinationPage:] */

void FUN_1070c17f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be56750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logNotificationOpen_destination_112573370,param_3,param_4,
             &PTR___NSConcreteGlobalBlock_11098d0f8);
  return;
}



/* Entry: 1070c1808; end: 1070c196b; +[SCNotificationDebuggerLogger _logNotificationOpen:destinationPage:logMethod:] */

void FUN_1070c1808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1d0560();
  uVar2 = param_3;
  func_0x00010bf45cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1d0560(puVar1);
  func_0x00010c1d0560(puVar1);
  _objc_release(param_4);
  puVar3 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010beec480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010be1fe00(param_1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_5 + 0x10))(param_5,param_1);
  _objc_release(param_5);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070c196c; end: 1070c197b; +[SCNotificationDebuggerLogger logNotificationDisplay:isSystemNotification:] */

void FUN_1070c196c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be56690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logNotificationDisplay_isSystem_112573340,param_3,param_4,
             &PTR___NSConcreteGlobalBlock_11098d118);
  return;
}



/* Entry: 1070c197c; end: 1070c1adf; +[SCNotificationDebuggerLogger _logNotificationDisplay:isSystemNotification:logMethod:] */

void FUN_1070c197c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1d0560();
  uVar2 = param_3;
  func_0x00010bf45cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1d0560(puVar1);
  func_0x00010c1d0560(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010beec480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010be1fe00(param_1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_5 + 0x10))(param_5,param_1);
  _objc_release(param_5);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070c1ae0; end: 1070c1aef; +[SCNotificationDebuggerLogger logNotificationIgnore:isSystemNotification:] */

void FUN_1070c1ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be56710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logNotificationIgnore_isSystemN_112573360,param_3,param_4,
             &PTR___NSConcreteGlobalBlock_11098d138);
  return;
}



/* Entry: 1070c1af0; end: 1070c1c53; +[SCNotificationDebuggerLogger _logNotificationIgnore:isSystemNotification:logMethod:] */

void FUN_1070c1af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1d0560();
  uVar2 = param_3;
  func_0x00010bf45cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1d0560(puVar1);
  func_0x00010c1d0560(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010beec480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010be1fe00(param_1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_5 + 0x10))(param_5,param_1);
  _objc_release(param_5);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070c1c54; end: 1070c1c8f;  */

void FUN_1070c1c54(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e9f838,0,0);
  return;
}



/* Entry: 1070c1c90; end: 1070c1ccb;  */

long FUN_1070c1c90(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110e9f898,2000,0);
  iVar1 = (int)param_1;
  if (iVar1 < 1) {
    iVar1 = 2000;
  }
  return (long)iVar1;
}



/* Entry: 1070c1ccc; end: 1070c1cdf;  */

void FUN_1070c1ccc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e9f8b8,0,0);
  return;
}



/* Entry: 1070c1ce0; end: 1070c1d9f;  */

void FUN_1070c1ce0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c25d780(param_1,param_2,&PTR____CFConstantStringClassReference_110e9f8d8,
                      &PTR____CFConstantStringClassReference_110daafd8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070c1da0; end: 1070c1db3;  */

void FUN_1070c1da0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb2cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3f800000,param_1,PTR_s_floatValueForConfigKeySync_defau_1125ca4d8,
             &PTR____CFConstantStringClassReference_110e9f918,0);
  return;
}



/* Entry: 1070c1db4; end: 1070c1e2b;  */

uint FUN_1070c1db4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110e9f938,0x18,0);
  return (uint)param_1 & ((int)(uint)param_1 >> 0x1f ^ 0xffffffffU);
}



/* Entry: 1070c1e2c; end: 1070c1e67;  */

long FUN_1070c1e2c(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110e9f998,6,0);
  uVar1 = (uint)param_1;
  if (0x7fffffff < uVar1) {
    uVar1 = 6;
  }
  return (long)(int)uVar1;
}



/* Entry: 1070c1e68; end: 1070c1f07;  */

void FUN_1070c1e68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e9f9b8,0,0);
  return;
}



/* Entry: 1070c1f08; end: 1070c2097;  */

void FUN_1070c1f08(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x00010c25d780(param_1,param_2,&PTR____CFConstantStringClassReference_110e9fa98,
                      &PTR____CFConstantStringClassReference_110daafd8,0);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010c08fa60();
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (lVar2 == 0) {
    _objc_opt_new(PTR__OBJC_CLASS___NSSet_1126ae870);
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf44740(lVar1,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1070c2098; end: 1070c214b;  */

void FUN_1070c2098(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e9faf8,0,0);
  return;
}



/* Entry: 1070c214c; end: 1070c2173;  */

uint FUN_1070c214c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110e9fc18,0x14,0);
  return (uint)param_1 & ((int)(uint)param_1 >> 0x1f ^ 0xffffffffU);
}



/* Entry: 1070c2174; end: 1070c2187;  */

void FUN_1070c2174(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e9fc38,0,0);
  return;
}



/* Entry: 1070c2188; end: 1070c21ff;  */

undefined8 FUN_1070c2188(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  if ((param_2 < 0x2c) && ((1L << (param_2 & 0x3f) & 0x80000800100U) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = param_1;
    func_0x00010bf1f440(param_1);
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1070c2200; end: 1070c22c7;  */

void FUN_1070c2200(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e9fc78,0,0);
  return;
}


