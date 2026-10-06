/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106cc8af0; end: 106cc8af7; -[SCFriendsFeedMoreUnreadVisibilityContext count] */

undefined8 FUN_106cc8af0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106cc8af8; end: 106cc8b27; -[SCFriendsFeedMoreUnreadVisibilityContext .cxx_destruct] */

void FUN_106cc8af8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc8b28; end: 106cc8b9b; -[SCSnapchatterSendingServices initWithSnapchatterSender:] */

undefined1 * FUN_106cc8b28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6358;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106cc8b9c; end: 106cc8ba3; -[SCSnapchatterSendingServices snapchatterSender] */

undefined8 FUN_106cc8b9c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cc8ba4; end: 106cc8baf; -[SCSnapchatterSendingServices .cxx_destruct] */

void FUN_106cc8ba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc8bb0; end: 106cc8c23; -[SCChatDraftServices initWithChatDraftMutator:] */

undefined1 * FUN_106cc8bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6360;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106cc8c24; end: 106cc8c2b; -[SCChatDraftServices chatDraftMutator] */

undefined8 FUN_106cc8c24(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cc8c2c; end: 106cc8c37; -[SCChatDraftServices .cxx_destruct] */

void FUN_106cc8c2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc8c38; end: 106cc8cdb; -[SCChatDraftMentionDataModel initWithUserId:range:searchMode:isNonParticipant:] */

undefined1 *
FUN_106cc8c38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126f6368;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    *(undefined1 *)((long)puVar1 + 8) = param_7;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106cc8cdc; end: 106cc8cff; -[SCChatDraftMentionDataModel copyWithZone:] */

undefined8 FUN_106cc8cdc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106cc8d00; end: 106cc8d83; -[SCChatDraftMentionDataModel hash] */

undefined8 * FUN_106cc8d00(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = *(long *)(param_1 + 0x18);
  lStack_38 = -lVar4;
  if (-1 < lVar4) {
    lStack_38 = lVar4;
  }
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_50 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106cc8e3c;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18) ||
        (*(char *)((long)puVar2 + 8) != param_3[8])))) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_106cc8e3c;
    }
    puVar5 = (undefined1 *)0x0;
    if ((*(long *)((long)puVar2 + 0x20) != *(long *)(param_3 + 0x20)) ||
       (*(long *)((long)puVar2 + 0x28) != *(long *)(param_3 + 0x28))) goto LAB_106cc8e3c;
    puVar5 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar5 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106cc8e3c;
    }
  }
  puVar5 = (undefined1 *)0x1;
LAB_106cc8e3c:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 106cc8d84; end: 106cc8e57; -[SCChatDraftMentionDataModel isEqual:] */

long FUN_106cc8d84(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106cc8e3c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18) ||
        (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))))) {
      lVar3 = 0;
      goto LAB_106cc8e3c;
    }
    lVar3 = 0;
    if ((*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20)) ||
       (*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28))) goto LAB_106cc8e3c;
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106cc8e3c;
    }
  }
  lVar3 = 1;
LAB_106cc8e3c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106cc8e58; end: 106cc8e5f; -[SCChatDraftMentionDataModel userId] */

undefined8 FUN_106cc8e58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106cc8e60; end: 106cc8e6b; -[SCChatDraftMentionDataModel range] */

undefined1  [16] FUN_106cc8e60(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x20);
}



/* Entry: 106cc8e6c; end: 106cc8e73; -[SCChatDraftMentionDataModel searchMode] */

undefined8 FUN_106cc8e6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106cc8e74; end: 106cc8e7b; -[SCChatDraftMentionDataModel isNonParticipant] */

undefined1 FUN_106cc8e74(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106cc8e7c; end: 106cc8e87; -[SCChatDraftMentionDataModel .cxx_destruct] */

void FUN_106cc8e7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106cc8e88; end: 106cc8f5f; -[SCChatDraftDataModel initWithAttributedText:mentions:previousMessageId:] */

undefined1 *
FUN_106cc8e88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f6370;
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



/* Entry: 106cc8f60; end: 106cc8f83; -[SCChatDraftDataModel copyWithZone:] */

undefined8 FUN_106cc8f60(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106cc8f84; end: 106cc9003; -[SCChatDraftDataModel hash] */

undefined8 * FUN_106cc8f84(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_106cc909c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106cc90a8;
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
            goto LAB_106cc90a8;
          }
          goto LAB_106cc909c;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106cc90a8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106cc9004; end: 106cc90c3; -[SCChatDraftDataModel isEqual:] */

long FUN_106cc9004(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106cc909c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106cc90a8;
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
            goto LAB_106cc90a8;
          }
          goto LAB_106cc909c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106cc90a8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106cc90c4; end: 106cc90cb; -[SCChatDraftDataModel attributedText] */

undefined8 FUN_106cc90c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cc90cc; end: 106cc90d3; -[SCChatDraftDataModel mentions] */

undefined8 FUN_106cc90cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106cc90d4; end: 106cc90db; -[SCChatDraftDataModel previousMessageId] */

undefined8 FUN_106cc90d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106cc90dc; end: 106cc9117; -[SCChatDraftDataModel .cxx_destruct] */

void FUN_106cc90dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc9118; end: 106cc9123; -[SCChatNotificationServices .cxx_destruct] */

void FUN_106cc9118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc9124; end: 106cc9197; -[SCSmartReplyServices initWithChatConfigurationFactory:] */

undefined1 * FUN_106cc9124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6380;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106cc9198; end: 106cc919f; -[SCSmartReplyServices chatConfigurationFactory] */

undefined8 FUN_106cc9198(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cc91a0; end: 106cc91ab; -[SCSmartReplyServices .cxx_destruct] */

void FUN_106cc91a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc91ac; end: 106cc9223; -[SCSmartReplyParams initWithSearchQuery:] */

undefined1 * FUN_106cc91ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6388;
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



/* Entry: 106cc9224; end: 106cc9247; -[SCSmartReplyParams copyWithZone:] */

undefined8 FUN_106cc9224(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106cc9248; end: 106cc924f; -[SCSmartReplyParams hash] */

void FUN_106cc9248(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 106cc9250; end: 106cc92df; -[SCSmartReplyParams isEqual:] */

long FUN_106cc9250(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106cc92c4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_106cc92c4;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_106cc92c4;
    }
  }
  lVar3 = 1;
LAB_106cc92c4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106cc92e0; end: 106cc92e7; -[SCSmartReplyParams searchQuery] */

undefined8 FUN_106cc92e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cc92e8; end: 106cc92f3; -[SCSmartReplyParams .cxx_destruct] */

void FUN_106cc92e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc92f4; end: 106cc939b; -[SCSmartReplyChatInputConfiguration initWithIsSmartReplyEnabled:stickerQuickSearchBarInSmartReplyEnabled:isBackfillEnabled:storiesSmartReplyMode:searchTagModelConfig:] */

undefined1 *
FUN_106cc92f4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f6390;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 106cc939c; end: 106cc93bf; -[SCSmartReplyChatInputConfiguration copyWithZone:] */

undefined8 FUN_106cc939c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106cc93c0; end: 106cc9437; -[SCSmartReplyChatInputConfiguration hash] */

ulong * FUN_106cc93c0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar3 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uStack_30 = (ulong)*(byte *)(param_1 + 10);
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  func_0x00010bfde980();
  uStack_20 = uVar2;
  func_0x000100505190(&uStack_40,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 != (ulong *)param_3) {
    puVar5 = (undefined1 *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106cc94ec;
    puVar5 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if (((((ulong)puVar4 & 1) == 0) ||
        (((*(char *)((long)puVar3 + 8) != param_3[8] || (*(char *)((long)puVar3 + 9) != param_3[9]))
         || (*(char *)((long)puVar3 + 10) != param_3[10])))) ||
       (*(long *)((long)puVar3 + 0x10) != *(long *)(param_3 + 0x10))) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_106cc94ec;
    }
    puVar5 = *(undefined1 **)((long)puVar3 + 0x18);
    if (puVar5 != *(undefined1 **)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_106cc94ec;
    }
  }
  puVar5 = (undefined1 *)0x1;
LAB_106cc94ec:
  _objc_release(param_3);
  return (ulong *)puVar5;
}



/* Entry: 106cc9438; end: 106cc9507; -[SCSmartReplyChatInputConfiguration isEqual:] */

long FUN_106cc9438(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106cc94ec;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) == 0) ||
        (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
          (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
         (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))) ||
       (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_106cc94ec;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_106cc94ec;
    }
  }
  lVar3 = 1;
LAB_106cc94ec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106cc9508; end: 106cc950f; -[SCSmartReplyChatInputConfiguration isSmartReplyEnabled] */

undefined1 FUN_106cc9508(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106cc9510; end: 106cc9517; -[SCSmartReplyChatInputConfiguration stickerQuickSearchBarInSmartReplyEnabled] */

undefined1 FUN_106cc9510(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106cc9518; end: 106cc951f; -[SCSmartReplyChatInputConfiguration isBackfillEnabled] */

undefined1 FUN_106cc9518(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106cc9520; end: 106cc9527; -[SCSmartReplyChatInputConfiguration storiesSmartReplyMode] */

undefined8 FUN_106cc9520(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106cc9528; end: 106cc952f; -[SCSmartReplyChatInputConfiguration searchTagModelConfig] */

undefined8 FUN_106cc9528(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106cc9530; end: 106cc953b; -[SCSmartReplyChatInputConfiguration .cxx_destruct] */

void FUN_106cc9530(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106cc953c; end: 106cc9607; -[SCStickerQuickReplyDataProviderServices initWithCTPDataProvider:CTPDataProviderConfiguration:smartReplyDataProvider:] */

undefined1 *
FUN_106cc953c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f6398;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
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



/* Entry: 106cc9608; end: 106cc960f; -[SCStickerQuickReplyDataProviderServices CTPDataProviderConfiguration] */

undefined8 FUN_106cc9608(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cc9610; end: 106cc963f; -[SCStickerQuickReplyDataProviderServices setCTPDataProviderConfiguration:] */

void FUN_106cc9610(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106cc9640; end: 106cc9647; -[SCStickerQuickReplyDataProviderServices quickReplyCTPDataProvider] */

undefined8 FUN_106cc9640(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106cc9648; end: 106cc9677; -[SCStickerQuickReplyDataProviderServices setQuickReplyCTPDataProvider:] */

void FUN_106cc9648(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106cc9678; end: 106cc967f; -[SCStickerQuickReplyDataProviderServices smartReplyDataProvider] */

undefined8 FUN_106cc9678(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106cc9680; end: 106cc96af; -[SCStickerQuickReplyDataProviderServices setSmartReplyDataProvider:] */

void FUN_106cc9680(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106cc96b0; end: 106cc96eb; -[SCStickerQuickReplyDataProviderServices .cxx_destruct] */

void FUN_106cc96b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc96ec; end: 106cc9763;  */

void FUN_106cc96ec(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11096fda0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106cc9764; end: 106cc97e7;  */

void FUN_106cc9764(double param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_2 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_2 + 8) + 0x18))
              (*(long **)(param_2 + 8),&UNK_11096fdf0,&uStack_40,(long)(param_1 * 1000.0));
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106cc97e8; end: 106cc986b;  */

void FUN_106cc97e8(double param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_2 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_2 + 8) + 0x18))
              (*(long **)(param_2 + 8),&UNK_11096fe40,&uStack_40,(long)(param_1 * 1000.0));
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106cc986c; end: 106cc98df; -[SCImpalaStoryPlayerPresenterCreatingFactoryServices initWithImpalaStoryPlayerPresenterCreatingFactory:] */

undefined1 * FUN_106cc986c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f63a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106cc98e0; end: 106cc98e7; -[SCImpalaStoryPlayerPresenterCreatingFactoryServices impalaStoryPlayerPresenterCreatingFactory] */

undefined8 FUN_106cc98e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cc98e8; end: 106cc98f3; -[SCImpalaStoryPlayerPresenterCreatingFactoryServices .cxx_destruct] */

void FUN_106cc98e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc98f4; end: 106cc9997; -[SCImpalaStoryPlayerPresenterCreatingService initWithImpalaStoryPlayerPresenterCreator:impalaStoryPlayerCreator:] */

undefined1 *
FUN_106cc98f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f63b0;
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



/* Entry: 106cc9998; end: 106cc999f; -[SCImpalaStoryPlayerPresenterCreatingService impalaStoryPlayerPresenterCreator] */

undefined8 FUN_106cc9998(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cc99a0; end: 106cc99a7; -[SCImpalaStoryPlayerPresenterCreatingService impalaStoryPlayerCreator] */

undefined8 FUN_106cc99a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106cc99a8; end: 106cc99d7; -[SCImpalaStoryPlayerPresenterCreatingService .cxx_destruct] */

void FUN_106cc99a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc99d8; end: 106cc9afb; -[SCCreatorsFriendProfileScopeService initWithChatCameraScopeExposer:chatCameraScopeServices:chatScopeExposer:friendProfileScopeExposer:sendToScopeExposer:] */

undefined1 *
FUN_106cc99d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f63b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106cc9afc; end: 106cc9b03; -[SCCreatorsFriendProfileScopeService chatCameraScopeExposer] */

undefined8 FUN_106cc9afc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cc9b04; end: 106cc9b0b; -[SCCreatorsFriendProfileScopeService chatCameraScopeServices] */

undefined8 FUN_106cc9b04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106cc9b0c; end: 106cc9b13; -[SCCreatorsFriendProfileScopeService chatScopeExposer] */

undefined8 FUN_106cc9b0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106cc9b14; end: 106cc9b1b; -[SCCreatorsFriendProfileScopeService friendProfileScopeExposer] */

undefined8 FUN_106cc9b14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106cc9b1c; end: 106cc9b23; -[SCCreatorsFriendProfileScopeService sendToScopeExposer] */

undefined8 FUN_106cc9b1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106cc9b24; end: 106cc9b77; -[SCCreatorsFriendProfileScopeService .cxx_destruct] */

void FUN_106cc9b24(long param_1)

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



/* Entry: 106cc9b78; end: 106cc9c1b; -[SCFriendingNearbyFriendsServices initWithFindNearbyFriendsInteractor:nearbyFriendsRepository:] */

undefined1 *
FUN_106cc9b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f63c0;
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



/* Entry: 106cc9c1c; end: 106cc9c23; -[SCFriendingNearbyFriendsServices findNearbyFriendsInteractor] */

undefined8 FUN_106cc9c1c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cc9c24; end: 106cc9c2b; -[SCFriendingNearbyFriendsServices nearbyFriendsRepository] */

undefined8 FUN_106cc9c24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106cc9c2c; end: 106cc9c5b; -[SCFriendingNearbyFriendsServices .cxx_destruct] */

void FUN_106cc9c2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc9c5c; end: 106cc9d07; -[SCFriendingNearbySnapchatter initWithSnapchatter:subtext:] */

undefined1 *
FUN_106cc9c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f63c8;
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



/* Entry: 106cc9d08; end: 106cc9d2b; -[SCFriendingNearbySnapchatter copyWithZone:] */

undefined8 FUN_106cc9d08(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106cc9d2c; end: 106cc9d9f; -[SCFriendingNearbySnapchatter hash] */

undefined8 * FUN_106cc9d2c(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_106cc9e20:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106cc9e2c;
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
          goto LAB_106cc9e2c;
        }
        goto LAB_106cc9e20;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106cc9e2c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106cc9da0; end: 106cc9e47; -[SCFriendingNearbySnapchatter isEqual:] */

long FUN_106cc9da0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106cc9e20:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106cc9e2c;
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
          goto LAB_106cc9e2c;
        }
        goto LAB_106cc9e20;
      }
    }
    lVar3 = 0;
  }
LAB_106cc9e2c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106cc9e48; end: 106cc9e4f; -[SCFriendingNearbySnapchatter snapchatter] */

undefined8 FUN_106cc9e48(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cc9e50; end: 106cc9e57; -[SCFriendingNearbySnapchatter subtext] */

undefined8 FUN_106cc9e50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106cc9e58; end: 106cc9e87; -[SCFriendingNearbySnapchatter .cxx_destruct] */

void FUN_106cc9e58(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc9e88; end: 106cc9e93; -[SCLensCollectionTabBarServices .cxx_destruct] */

void FUN_106cc9e88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc9e94; end: 106cc9e9f; -[SCMainCameraScopedLensCollectionTabBarServices .cxx_destruct] */

void FUN_106cc9e94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc9ea0; end: 106cc9f13; -[SCMainCameraDeepLinkHandlerPluginScope initWithPlugInRegistry:] */

undefined1 * FUN_106cc9ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f63e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106cc9f14; end: 106cc9f1b; -[SCMainCameraDeepLinkHandlerPluginScope plugInRegistry] */

undefined8 FUN_106cc9f14(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cc9f1c; end: 106cc9f27; -[SCMainCameraDeepLinkHandlerPluginScope .cxx_destruct] */

void FUN_106cc9f1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc9f28; end: 106cc9f2f; -[SCCameraLensesViewControllerServices lensAttachmentLauncher] */

undefined8 FUN_106cc9f28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106cc9f30; end: 106cc9f37; -[SCCameraLensesViewControllerServices lensDataProviderUpdater] */

undefined8 FUN_106cc9f30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106cc9f38; end: 106cc9f3f; -[SCCameraLensesViewControllerServices lensURLBrowser] */

undefined8 FUN_106cc9f38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106cc9f40; end: 106cc9f9f; -[SCCameraLensesViewControllerServices .cxx_destruct] */

void FUN_106cc9f40(long param_1)

{
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



/* Entry: 106cc9fa0; end: 106cc9fab; -[SCMainCameraScopedCameraLensesViewControllerServices .cxx_destruct] */

void FUN_106cc9fa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc9fac; end: 106cca01f; -[SCLensCallToActionOffCameraServices initWithlensAttachmentLauncher:] */

undefined1 * FUN_106cc9fac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f63f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106cca020; end: 106cca027; -[SCLensCallToActionOffCameraServices lensAttachmentLauncher] */

undefined8 FUN_106cca020(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cca028; end: 106cca033; -[SCLensCallToActionOffCameraServices .cxx_destruct] */

void FUN_106cca028(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cca034; end: 106cca073; -[SCCameraViewControllerInfoProvider state] */

void FUN_106cca034(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106cca074; end: 106cca08b; -[SCCameraViewControllerInfoProvider cameraReplyDelegate] */

void FUN_106cca074(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cca08c; end: 106cca0a3; -[SCCameraViewControllerInfoProvider cameraOverlayDelegate] */

void FUN_106cca08c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cca0a4; end: 106cca0bb; -[SCCameraViewControllerInfoProvider gestureRecognizerDelegate] */

void FUN_106cca0a4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cca0bc; end: 106cca0d3; -[SCCameraViewControllerInfoProvider cameraUIViewController] */

void FUN_106cca0bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cca0d4; end: 106cca0d7; -[SCCameraViewControllerInfoProvider volumeButtonsEventsHandler] */

void FUN_106cca0d4(void)

{
  return;
}


